/* Code generated by Beremiz c_ext confnode */

#ifdef ARDUINO_PLATFORM

#include <stdio.h>
#include "iec_types_all.h"

/* User variables reference */
extern "C" __IEC_STRING_t CONFIG0__SERIALMSG;
#define SerialMSG CONFIG0__SERIALMSG.value
extern "C" __IEC_BOOL_t CONFIG0__PRINTMSG;
#define PrintMSG CONFIG0__PRINTMSG.value

/* User sketch */
void sketch_setup()
{
    Serial.begin(115200);
}

void sketch_loop()
{
    if (PrintMSG)
    {
        Serial.println((char *)SerialMSG.body);
    }
}
#endif
