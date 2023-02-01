#pragma once

#define ZEROAMP 0
#define IDLEAMP 5 
#define ACTIVAMP 12
#define MAXSAMPCNT 50

typedef enum{
    OFFAMPCTR,
    IDLEAMPCTR,
    ACTIVAMPCTR
}Amptypectr;

typedef enum{
    STOFFLINE
    STIDLE
    STSTART
}StatStat;