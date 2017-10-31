#include "selfprot.h"

/*
 * Function: CalculateSystemState
 * --------------------------------------------
 * calculate the system state based on environment data and
 * stores the calculated state in the caught data structure
 *
 * env: contains environment data and calculated state will be stored in it
 */
void CalculateSystemState(EnvironmentData *env) {

	env->state = OK;
	float acc_x = intToFloat(env->acc_x);
	float acc_y = intToFloat(env->acc_y);
	float acc_z = intToFloat(env->acc_z);

		if (acc_x > 2 || acc_y > 2 || acc_z > 2 || (env->acc_x + env->acc_y + env->acc_z) / 10 > 3){
			env->state = HIGH_ACCELERATION;
			if (env->temp > 34){
				env->state = HIGH_ACCELERATION_AND_TEMP;
			}
		} else if (env->temp > 34){
			env->state = HIGH_TEMP;
		}

}

float intToFloat(int input) {
    float modulo = input % 10;
    int number = input / 10;

    return number + modulo / 10;
}


