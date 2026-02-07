#ifndef MEDICATION_H
#define MEDICATION_H

#include <stdint.h>

#define MED_NAME_MAX_LEN 32

typedef struct
{
    char name[MED_NAME_MAX_LEN];    //Medication name
    float total_pills;              //Total of pills in storage (Fractional because of the open boxes)
    float daily_pills;              //Daily pills consumed (can be fractional)
} Medication;

#endif