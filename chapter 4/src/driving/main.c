#include <stdio.h>
#include <assert.h>
#include "driving_age.h"

static void should_return_false_if_user_is_less_than_driving_16();
static void should_return_true_if_user_is_16_years_old();
static void should_return_true_if_the_user_is_older_than_16();

int main(void)
{
    should_return_false_if_user_is_less_than_driving_16();
    should_return_true_if_user_is_16_years_old();
    should_return_true_if_the_user_is_older_than_16();
    return 0;
}

static void should_return_false_if_user_is_less_than_driving_16(){
    bool canDrive = isLegalDrivingAge(15);
    assert(canDrive == false);
}

static void should_return_true_if_user_is_16_years_old(){
    bool canDrive = isLegalDrivingAge(16);
    assert(canDrive == true);
}

static void should_return_true_if_the_user_is_older_than_16(){
    bool canDrive = isLegalDrivingAge(25);
    assert(canDrive == true);
}
