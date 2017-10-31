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

	if (env->acc_x / 10 > 2 || env->acc_y /10 > 2 || env->acc_z /10 > 2 || (env->acc_x + env->acc_y + env->acc_z) / 10 > 3){
		env->state = HIGH_ACCELERATION;
		if (env->temp > 34){
			env->state = HIGH_ACCELERATION_AND_TEMP;
		}
	} else if (env->temp > 34){
		env->state = HIGH_TEMP;
	}

}


