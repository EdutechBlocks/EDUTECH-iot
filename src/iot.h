#ifndef IOT_H
#define IOT_H

#include "Arduino.h"
#include <rom/rtc.h>

class IOT{
    public:
        String reset_reason(RESET_REASON reason);
};
#endif
