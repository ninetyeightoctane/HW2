#include <stdio.h>

int main(){

    // Declaring variables
    const float BROKER_COM_PER = .02,
                PRICE_PAID_PER_SHARE = 45.50,
                PRICE_SOLD_PER_SHARE = 56.90;

    const int NUM_OF_SHARES = 1000;

    float joes_stock_purchase,
          total_com_paid_bought,
          total_com_paid_sold,
          amount_stock_sold_for,
          amount_of_profit;

    // Calculations
    joes_stock_purchase = NUM_OF_SHARES * PRICE_PAID_PER_SHARE;

    total_com_paid_bought = joes_stock_purchase * BROKER_COM_PER;

    amount_stock_sold_for = NUM_OF_SHARES * PRICE_SOLD_PER_SHARE;

    total_com_paid_sold = amount_stock_sold_for * BROKER_COM_PER;

    amount_of_profit = (amount_stock_sold_for - (total_com_paid_bought + total_com_paid_sold)) - joes_stock_purchase;

    // Output
    printf ("Amount paid for the stock: %f", joes_stock_purchase);
    printf ("\nAmount commission paid when bought stock: %f", total_com_paid_bought);
    printf ("\nAmount Joe sold stock for: %f", amount_stock_sold_for);
    printf ("\nAmount commission paid when stock sold: %f", total_com_paid_sold);
    printf ("\nAmount of profit Joe made after selling stock and paying two commissions to broker: %f", amount_of_profit);

    return 0;
}
