#include "selfprot.h"

/*
 * Function: CharToMorse
 * --------------------------------------------
 * convert characters/numbers to dots and dashes (morse code).
 * the function use the character-morse and number-morse maps
 * from the common header.
 *
 * input: the convertable string
 * output: converted morse string
 *
 * returns: the index of the last converted character of the input
 */
int CharToMorse(char input[], char *output) {

	int i;
	int len = strlen(input);
	for (i=0; i<len; i++) {

		char* morseLetter = charToMorse(input[i]);
		strcat(output, morseLetter);
		if (i != (len -1)) {
			strcat(output, "/");
		}
	}
	return len;
}

const char* charToMorse(char letter){

	switch (letter){
		case 'A' : return CHAR_TO_MORSE_ALPHA[0];
		case 'B' : return CHAR_TO_MORSE_ALPHA[1];
		case 'C' : return CHAR_TO_MORSE_ALPHA[2];
		case 'D' : return CHAR_TO_MORSE_ALPHA[3];
		case 'E' : return CHAR_TO_MORSE_ALPHA[4];
		case 'F' : return CHAR_TO_MORSE_ALPHA[5];
		case 'G' : return CHAR_TO_MORSE_ALPHA[6];
		case 'H' : return CHAR_TO_MORSE_ALPHA[7];
		case 'I' : return CHAR_TO_MORSE_ALPHA[8];
		case 'J' : return CHAR_TO_MORSE_ALPHA[9];
		case 'K' : return CHAR_TO_MORSE_ALPHA[10];
		case 'L' : return CHAR_TO_MORSE_ALPHA[11];
		case 'M' : return CHAR_TO_MORSE_ALPHA[12];
		case 'N' : return CHAR_TO_MORSE_ALPHA[13];
		case 'O' : return CHAR_TO_MORSE_ALPHA[14];
		case 'P' : return CHAR_TO_MORSE_ALPHA[15];
		case 'Q' : return CHAR_TO_MORSE_ALPHA[16];
		case 'R' : return CHAR_TO_MORSE_ALPHA[17];
		case 'S' : return CHAR_TO_MORSE_ALPHA[18];
		case 'T' : return CHAR_TO_MORSE_ALPHA[19];
		case 'U' : return CHAR_TO_MORSE_ALPHA[20];
		case 'V' : return CHAR_TO_MORSE_ALPHA[21];
		case 'W' : return CHAR_TO_MORSE_ALPHA[22];
		case 'X' : return CHAR_TO_MORSE_ALPHA[23];
		case 'Y' : return CHAR_TO_MORSE_ALPHA[24];
		case 'Z' : return CHAR_TO_MORSE_ALPHA[25];
		case ' ' : return "\t";
		default : return numberToMorse(letter);
	}
}

char numberToMorse(char number){
	int value = number;
	return *CHAR_TO_MORSE_NUMBER[value];
}
