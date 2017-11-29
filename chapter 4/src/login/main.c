#include <stdio.h>
#include <assert.h>
#include "validator.h"

static void should_login_user_if_username_and_password_are_correct();
static void should_not_login_user_if_username_and_password_are_incorrect();
static void should_not_login_for_non_existent_username();
void init();

int main(void)
{
    init();
    should_login_user_if_username_and_password_are_correct();
    should_not_login_user_if_username_and_password_are_incorrect();
    should_not_login_for_non_existent_username();
    return 0;
}

static void should_login_user_if_username_and_password_are_correct(){
    bool loginValid = validateLogin("YoYo", "abns$1234");
    assert(loginValid == true);
}

static void should_not_login_user_if_username_and_password_are_incorrect(){
    bool loginValid = validateLogin("YoYo", "hghgh");
    assert(loginValid == false);
}

static void should_not_login_for_non_existent_username(){
    bool loginValid = validateLogin("FuckFace", "BlajBlajs");
    assert(loginValid == false);
}