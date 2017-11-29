#include <stdio.h>
#include <assert.h>
#include "calculator.h"

static void should_return_correct_tax_amount_for_WI(); 
static void should_return_correct_tax_amount_for_Non_Resident();
static void should_return_correct_tax_amount_for_WI_lowercase();
static void should_return_correct_tax_amount_for_Wisconsin();
static void should_return_correct_tax_amount_for_New_York();

int main(void)
{
    should_return_correct_tax_amount_for_WI();
    should_return_correct_tax_amount_for_Non_Resident();
    should_return_correct_tax_amount_for_WI_lowercase();
    should_return_correct_tax_amount_for_Wisconsin();
    should_return_correct_tax_amount_for_New_York();
    return 0;
}

static void should_return_correct_tax_amount_for_WI(){
    double amount = calculateTax(10, "WI");
    printf("For WI with order amount $10 : %.2f\n", amount);
    assert(amount == 10.55);
} 

static void should_return_correct_tax_amount_for_Non_Resident(){
    double amount = calculateTax(10, "NY");
    printf("For NY with order amount $10 : %.2f\n", amount);
    assert(amount == 10.00);
}

static void should_return_correct_tax_amount_for_WI_lowercase(){
    double amount = calculateTax(10, "wi");
    printf("For wi with order amount $10 : %.2f\n", amount);
    assert(amount == 10.55);
}

static void should_return_correct_tax_amount_for_Wisconsin(){
    double amount = calculateTax(10, "Wisconsin");
    printf("For Wisconsin with order amount $10 : %.2f\n", amount);
    assert(amount == 10.55);
}

static void should_return_correct_tax_amount_for_New_York(){
    double amount = calculateTax(10, "New York");
    printf("For New York with order amount $10 : %.2f\n", amount);
    assert(amount == 10.00);
}
