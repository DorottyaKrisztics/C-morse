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
	int i;
	int len = strlen(input);
	char bin[10000] = {""};
	for (i=0; i<len; i++) {
		char sign = input[i];
		switch (sign){
			case '.' :
				strcat(bin, "1");
				break;
			case '-' :
				strcat(bin, "111");
				break;
			case ' ' :
				strcat(bin, "0");
				break;
			case '/' :
				strcat(bin, "000");
				break;
			case '\t' :
				strcat(bin, "0000000");
				break;
		}
	}
	int j, k;
	char one = 1;
	int lenBin = strlen(bin);
	for (k = 0; k < (lenBin / 8) + 1; k++){
		for (j = k*8; j < (k+1)*8; j++){
			if (j != ((k+1)*8) - 1){
				if (bin[j] == '1'){
					output[k]= output[k]|one;
					output[k]= output[k]<<1;
				} else {
					output[k]= output[k]<<1;
				}
			} else {
				if (bin[j] == '1'){
					output[k]= output[k]|one;
				}
			}
		}
	}
	return lenBin;
}
