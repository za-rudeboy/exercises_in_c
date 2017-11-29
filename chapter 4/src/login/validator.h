#ifndef VALIDATOR
#define VALIDATOR
#include <stdbool.h>

typedef struct hashtable_s hashtable_t;

bool validateLogin(char username[100], char password[100]); 

#endif