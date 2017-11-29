#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "validator.h"

static hashtable_t *hashtable;

hashtable_t *ht_create( int size );
void ht_set(hashtable_t *hashtable, char *key, char *value );
char *ht_get(hashtable_t *hashtable, char *key );

void init(){
    hashtable = ht_create( 2 );
	ht_set( hashtable, "YoYo", "abns$1234" );
	ht_set( hashtable, "Rudy", "WhatWhat" );
}

bool validateLogin(char username[100], char password[100]){
    char * correctPassword = ht_get(hashtable, username);
    if (correctPassword != NULL &&  strcmp(correctPassword, password) == 0){
        printf("Welcome!!\n");
        return true;
    }

    printf("Go away stranger\n");
    return false;
}