#include <stdio.h>
#include <stdbool.h>

int main() {
    int age = 25;
    int year = 2025;
    int quantity = 1;

    printf("You are %d years old\n", age);
    printf("The year is %d\n", year);
    printf("You have ordered %d x items\n", quantity);

    float gpa = 4.5;
    float price = 19.99;
    float temperature = -10.1;

    printf("Your GPA is %.1f\n", gpa);
    printf("The price is $%.2f\n", price);
    printf("The temperature is %.3fF\n", temperature);

    double pi = 3.14159265358979;
    double e = 2.719124817254817564871;

    printf("The value of pi is %.15lf\n", pi);
    printf("The value of e is %lf\n", e);

    char grade = 'A';
    char symbol = '!';
    char currency = '$';

    printf("Your grade is %c+\n", grade);
    printf("Your favourite symbol is %c\n", symbol);
    printf("Your currency is %c\n", currency);

    char name[]= "Muhammad";
    char food[] = "Pizza";
    char email[] = "fake123@gmail.com";

    printf("Hello %s\n", name);
    printf("Your favourite food is %s\n", food);
    printf("Your email is %s\n", email);

    bool isOnLine = true;
    bool isStudent = true;
    bool isForSale = true;
    
    printf("%d\n", isOnLine);

    if(isOnLine){
        printf("%s is Online\n", name);
    }
    else{
        printf("%s is Offline\n", name);
    }

    if(isStudent){
        printf("%s is a Student\n", name);
    }
    else{
        printf("%s is not a Student\n", name);
    }

    if(isForSale){
        printf("This item is for sale!\n");
    }
    else{
        printf("This item is not for sale!\n");
    }

    return 0;
}