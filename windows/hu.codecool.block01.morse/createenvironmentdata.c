#include "selfprot.h"

int floatToInt(float input);
/*
 * Function: CreateEnvironmentData
 * --------------------------------------------
 * converts input data into structured form
 *
 * acc_x: acceleration in the X direction
 * acc_y: acceleration in the Y direction
 * acc_z: acceleration in the Z direction
 * temp: magnitude of the temperature
 */
EnvironmentData CreateEnvironmentData(float acc_x, float acc_y, float acc_z, signed int temp) {
	EnvironmentData result = (EnvironmentData) {.acc_x = floatToInt(acc_x), .acc_y = floatToInt(acc_y), .acc_z = floatToInt(acc_z), .temp = temp};
	return result;
}

int floatToInt(float input){
	input = roundf(input * 10);
	return (int) input;
}
