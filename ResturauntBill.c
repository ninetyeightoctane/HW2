#include <stdio.h>

int main(){
    float mealCharge = 88.67,
          taxPercentage = .0675,
          tipPercentage = .20,
          mealChargeTaxAmount = mealCharge * taxPercentage,
          mealChargeTipAmount = (mealCharge + mealChargeTaxAmount) * tipPercentage;

    printf("\nMeal cost : $ %f", mealCharge);
    printf("\nTax amount: $ %f", mealChargeTaxAmount);
    printf("\nTip amount: $ %f", mealChargeTipAmount);
    printf("\nTotal bill: $ %f", mealCharge + mealChargeTaxAmount + mealChargeTipAmount);

    return 0;
}