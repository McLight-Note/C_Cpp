#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(){
    
    // Shopping cart program

    char item[50] = "";
    float price = 0.0f;
    int quantity = 0;
    char currency = "$";
    float total = 0.0f;

    printf("What item would you like to buy?: ");
    fgets(item, sizeof(item), stdin);

    printf("What is the price for the each item?: ");
    scanf("%f\n", &price);

    printf("How many would you like to buy?: ");
    scanf("%d\n", &quantity);

    return 0;
}