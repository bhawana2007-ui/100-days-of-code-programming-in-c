#include <stdio.h>

int main() {
    float costPrice, sellingPrice, amount;
    
    // Input cost price and selling price
    printf("Enter the cost price: ");
    scanf("%f", &costPrice);
    printf("Enter the selling price: ");
    scanf("%f", &sellingPrice);
    
    // Check for profit or loss
    if (sellingPrice > costPrice) {
        amount = sellingPrice - costPrice;
        printf("Profit = %.2f\n", amount);
        printf("Profit Percentage = %.2f%%\n", (amount / costPrice) * 100);
    } else if (costPrice > sellingPrice) {
        amount = costPrice - sellingPrice;
        printf("Loss = %.2f\n", amount);
        printf("Loss Percentage = %.2f%%\n", (amount / costPrice) * 100);
    } else {
        printf("No Profit, No Loss.\n");
    }
    
    return 0;
}
