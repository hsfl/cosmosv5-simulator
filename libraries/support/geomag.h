/********************************************************************
* Copyright (C) 2015 by Interstel Technologies, Inc.
*   and Hawaii Space Flight Laboratory.
*
* This file is part of the COSMOS/core that is the central
* module for COSMOS. For more information on COSMOS go to
* <http://cosmos-project.com>
*
* The COSMOS/core software is licenced under the
* GNU Lesser General Public License (LGPL) version 3 licence.
*
* You should have received a copy of the
* GNU Lesser General Public License
* If not, go to <http://www.gnu.org/licenses/>
*
* COSMOS/core is free software: you can redistribute it and/or
* modify it under the terms of the GNU Lesser General Public License
* as published by the Free Software Foundation, either version 3 of
* the License, or (at your option) any later version.
*
* COSMOS/core is distributed in the hope that it will be useful, but
* WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
* Lesser General Public License for more details.
*
* Refer to the "licences" folder for further information on the
* condititons and terms to use this software.
********************************************************************/

/*!
 * \file geomag.h
 * \brief World Magnetic Model geomagnetic field computation.
 * \ingroup cosmos_simulator_ephemeris
 * \defgroup cosmos_geomag Geomag
 *
 * Implements the World Magnetic Model (WMM) to compute the geomagnetic field
 * vector and its secular variation at any geodetic location and altitude. Used
 * by the physics simulator to model magnetorquer torques and magnetometer
 * readings.
 */

#ifndef GEOMAG_H
#define GEOMAG_H

#include "support/configCosmos.h"

#include "math/mathlib.h"
#include "support/datalib.h"

namespace Cosmos {
    namespace Convert {

        /*! \file geomag.h
    \brief geomag include file
    A library of routines to calculate the magnetic field of the Earth.
*/

        //! \ingroup support
        //!	\defgroup geomag Earth Geomagnetic Field calculation
        //! Front end for calculating the World Magnetic Model provided by the National
        //! Geophysical Data Center. Requires an appropriate model file for the requested datae range in resources/general.
        //! COSMOS currently provides wmm_2005_cof, wmm_2010_cof and wmm_2015_cof.

        //! \ingroup cosmos_geomag
        //! \defgroup geomag_functions World Magnetic Model function declarations
        //! @{

        int32_t geomag_front(gvector pos, double year, rvector &comp);

        //! @}
    }
}
#endif
