#include <stdio.h>
#include <stdbool.h>

int main(){
    int x = 10;
    int y = 2;
    int z = 0;

    /*z = x + y;
    printf("%f\n", z);
    
    z = x - y;
    printf("%f\n", z);

    z = x * y;
    printf("%f\n", z);

    z = x / y;
    printf("%f\n", z);
    */
    x++;
    printf("%d\n", x);
    
    x--;
    printf("%d\n", x);
    
    z = x % y;
    printf("%d\n", z);
    
    return 0;
}