/*!
 * \file controllib.h
 * \brief Attitude and orbit control law mathematics.
 * \ingroup cosmos_simulator_physics
 * \defgroup cosmos_controllib Control
 *
 * Implements control-law computations for attitude determination and control
 * systems (ADCS) and orbit manoeuvre planning. Includes PID controller
 * helpers, target-pointing logic, and delta-V budget calculations. Used by the
 * spacecraft simulation and hardware-in-the-loop test environments.
 */

#ifndef CONTROLLIB_H
#define CONTROLLIB_H

/*! \file controllib.h
    \brief controllib include file
    A library of functions to be used in support of Attitude control.
*/

//! \ingroup support
//! \defgroup controllib Attitude Control Library
//! \brief Attitude Control support library.
//! Various functions for the calculation of both torques and hardware settings necessary to
//! maintain a given attitude.

#include "support/configCosmos.h"
//#include "physics/physicslib.h"
//#include "support/datalib.h"
//#include "math/mathlib.h"
#include "support/convertdef.h"

//! \ingroup cosmos_controllib
//! \defgroup controllib_functions Attitude Control Library functions
//! @{

rvector calc_control_torque(double maxtorque, Vector moi, Convert::qatt tatt, Convert::qatt catt);

//! @}

#endif // CONTROLLIB_H
