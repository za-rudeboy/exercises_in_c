#include "driving_age.h"

static const int legalDrivingAge = 16;

bool isLegalDrivingAge (int age){
    return age >= legalDrivingAge ? true : false;
}