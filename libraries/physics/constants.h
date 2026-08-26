/*!
 * \file constants.h
 * \brief Physical and mathematical constants for the simulator (header-only).
 * \ingroup cosmos_simulator_physics
 *
 * Defines physical constants (gravitational parameter, speed of light, Earth
 * radius, etc.) and unit-conversion factors used throughout the simulator
 * layer. This is a header-only file with no corresponding implementation.
 */

#ifndef CONSTANTS_H
#define CONSTANTS_H

#include "support/configCosmos.h"
#include <cmath>
namespace Cosmos {
    namespace Physics {


        class Constants
        {
        public:
            Constants();
            static const double G;
            static const double massEarth;
            static const double radiusEarth; //km
            static const double mu; //
        };
    }
}
#endif // CONSTANTS_H
