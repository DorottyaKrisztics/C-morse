#include "selfprot.h"

/*
 * Function: MorseToBinary
 * --------------------------------------------
 * converts morse string input bits
 *
 * input: the convertable morse string
 * output: morse in bits
 *
 * returns: the number of used bits for morse
 */
int MorseToBinary(char input[], char output[]) {
	char binArray[250] = {""};
	signToBinary(input, binArray);
	int lenBin = binaryToBits(binArray, output);
	return lenBin;
}

void signToBinary(char *input, char *binArray){
	int len = strlen(input);
	int i;
	for (i=0; i<len; i++) {
		char sign = input[i];
		switch (sign){
			case '.' :
				strcat(binArray, "1");
				break;
			case '-' :
				strcat(binArray, "111");
				break;
			case ' ' :
				strcat(binArray, "0");
				break;
			case '/' :
				strcat(binArray, "000");
				break;
			case '\t' :
				strcat(binArray, "0000000");
				break;
		}
	}
}

int binaryToBits(char binArray[], char output[]){
	int j, k;
	const char one = 1;
	int lenBin = strlen(binArray);
	for (k = 0; k < (lenBin / 8) + 1; k++){
		for (j = k*8; j < (k+1)*8; j++){
			if (j != ((k+1)*8) - 1){
				if (binArray[j] == '1'){
					output[k]= output[k]|one;
					output[k]= output[k]<<1;
				} else {
					output[k]= output[k]<<1;
				}
			} else {
				if (binArray[j] == '1'){
					output[k]= output[k]|one;
				}
			}
		}
	}
	return lenBin;
}


