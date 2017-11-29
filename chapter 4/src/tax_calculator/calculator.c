#include <string.h> 
#include "calculator.h"

double calculateTax(double orderAmount, char state[100]){
    if (strcmpi(state, "WI") == 0 || strcmpi(state, "Wisconsin") == 0){
        return orderAmount + (orderAmount * 0.055);
    }
    return orderAmount;
}