/**
* Cece Hedrick
* June 16, 2020
* 
*
* Development environment specifics:
* Written in Microsoft PXT
*
*
* This code is released under the [MIT License](http://opensource.org/licenses/MIT).
* Please review the LICENSE.md file included with this example. If you have any questions
* or concerns with licensing, please contact techsupport@sparkfun.com.
* Distributed as-is; no warranty is given.
*/


#include "pxt.h"
#include <cstdint>
#include <math.h>

using namespace pxt;

namespace gatormoisture {
    /*
    * Calculates the moisture level in soil 
    * The full range of the soil sensor ADC is (1023)
    * The value returned is a number between 0 and 1. 
    * 0 is dry 1 is wet 
    */
    //%
    uint16_t getMoisture(int16_t ADCVal) {

        return ADCVal / 1023.0;
    }

}
