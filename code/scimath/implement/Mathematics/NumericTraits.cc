//# NumericTraits.cc:
//# Copyright (C) 1997
//# Associated Universities, Inc. Washington DC, USA.
//#
//# This library is free software; you can redistribute it and/or modify it
//# under the terms of the GNU Library General Public License as published by
//# the Free Software Foundation; either version 2 of the License, or (at your
//# option) any later version.
//#
//# This library is distributed in the hope that it will be useful, but WITHOUT
//# ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
//# FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Library General Public
//# License for more details.
//#
//# You should have received a copy of the GNU Library General Public License
//# along with this library; if not, write to the Free Software Foundation,
//# Inc., 675 Massachusetts Ave, Cambridge, MA 02139, USA.
//#
//# Correspondence concerning AIPS++ should be addressed as follows:
//#        Internet email: aips2-request@nrao.edu.
//#        Postal address: AIPS++ Project Office
//#                        National Radio Astronomy Observatory
//#                        520 Edgemont Road
//#                        Charlottesville, VA 22903-2475 USA
//#
//# $Id$

#include <aips/Mathematics/NumericTraits.h>
#include <aips/Mathematics/Constants.h>

const Double & NumericTraits<Float>::epsilon = C::flt_epsilon;
const Double & NumericTraits<Double>::epsilon = C::dbl_epsilon;
const Double & NumericTraits<Complex>::epsilon = C::flt_epsilon;
const Double & NumericTraits<DComplex>::epsilon = C::dbl_epsilon;

const Double & NumericTraits<Float>::minimum = FLT_MIN;
const Double & NumericTraits<Double>::minimum = DBL_MIN;
const Double & NumericTraits<Complex>::minimum = FLT_MIN;
const Double & NumericTraits<DComplex>::minimum = DBL_MIN;

const Double & NumericTraits<Float>::maximum = FLT_MAX;
const Double & NumericTraits<Double>::maximum = DBL_MAX;
const Double & NumericTraits<Complex>::maximum = FLT_MAX;
const Double & NumericTraits<DComplex>::maximum = DBL_MAX;
