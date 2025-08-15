#include <stdio.h>
#include <stdbool.h>

int main(){
    int age = 22;
    float balance = 130.000;
    double room_size = 5.129861294619826491;
    char grade = 'A';
    char name[] = "Muhammad";
    bool isStudent = true;
    bool gotASchoolarship = true;

    if(age > 21){
        if(balance > 100.000){
            printf("You are %d years old and you have $%f\nSo you should marry immideatly\n", age, balance);
        }
        else{
            printf("You should earn a bit more %s, Cuz you have insufficient balance\n", name);
        }
    }
    else{
        if(isStudent){
            if(gotASchoolarship){
                printf("%s, you are on your way, Just keep going a little bit\n", name);
                printf("Your grades are %c+. Congratulations", grade);
            }
            else{
                printf("You should get a scholarship %s", name);
            }
        }
    }

    printf("And your room size is %.15lf.", room_size);

    return 0;
}