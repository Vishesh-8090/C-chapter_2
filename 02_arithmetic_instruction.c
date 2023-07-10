# include <stdio.h>
# include <math.h>

int main(){
    int a = 4;
    int b = 8;
    
    printf("The value of a + b is: %d\n", a + b);
    printf("The value of a * b is: %d\n", a * b);
    printf("The value of a - b is: %d\n", a - b);
    printf("The value of a / b is: %d\n", a / b);
    
    int z;
    z = b * a; // legal
    // b * a = z; // inlegal
    printf("The value of z is: %d\n", z);

    printf("5 when divided by 2 leaves a renainder of %d\n", 5%2);
    printf("-5 when divided by 2 leaves a renainder of %d\n", -5%2);
    printf("5 when divided by -2 leaves a renainder of %d\n", 5%-2);

    //NO operator is assumed to be present
    // printf("The value of a 4 * 5 is: %d\n", (4)(5)); --> Will not return 20/ Wrong!!
    printf("The value of a 4 * 5 is: %d\n", (4)*(5));

    // There is no opertrator to perform exponentiation in C
    printf("The value of a 4 ^ 5 is: %d\n", 4^5); // --> Will not produce 4 to the power 5
    printf("The value of a 2 to the power is 5 is: %f\n", pow(2,5));


    printf("The value of 6 + 5 is %d\n", 6 + 5);
    printf("The value of 6 + 5.6 is %f\n", 6 + 5.6);
    printf("The value of 6.1 + 5.6 is %f\n", 6.1 + 5.6);
    printf("The value of 5/2 is %d\n", 5/2);
    printf("The value of 5/2 is %f\n", 5.0/2);

    return 0;

}