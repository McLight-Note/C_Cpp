#include <stdio.h>
#include <stdbool.h>

int main(){
    int age = 22;
    float price = 19.99;
    double pi = 3.141590184124;
    char currency = '$';
    char name[] = "Muhammad";

    printf("%d\n", age);
    printf("%f\n", price);
    printf("%lf\n", pi);
    printf("%c\n", currency);
    printf("%s\n", name);

    int num1 = 1;
    int num2 = 10;
    int num3 = 100;

    printf("%3d\n", num1);
    printf("%-4d\n", num2);
    printf("%05d\n", num3);

    float price1 = 19.99;
    float price2 = 1.50;
    float price3 = -100.99;

    printf("%+7.2f\n", price1);
    printf("%+7.2f\n", price2);
    printf("%+7.2f\n", price3);

    return 0;
}