#include "selfprot.h"
#include <math.h>

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
	acc_x = roundf(acc_x * 10) / 10;
	EnvironmentData result = (EnvironmentData) {.acc_x = (int) acc_x * 10, .acc_y = acc_y * 10, .acc_z = acc_z * 10, .temp = temp};
	return result;
}
