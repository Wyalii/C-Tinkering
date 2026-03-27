#include <stdio.h>
#include <stdbool.h>
int main(void){
    // 1 byte = 8 bits.
    //  more bytes =
    //  more bits =
    //  more patters = 
    //  bigger numbers, precision and information.

    // variables are reusable information containers 
    // that can be changed and used or modified way we want to.

    // ints:
    // int = whole numbers (4 bytes in modern systems.)
    int age = 25;
    int year = 2026;
    int quantity = 1;
    printf("you are: %d years old\n",age);
    printf("year is: %d\n", year);
    printf("you have purchased: %d amount of item\n", quantity);

    // floats:
    // float = single-precision decimal number (4 bytes) 

    float gpa  = 2.2;
    float price = 19.9999999;
    float temperature = -23.2239999;
    printf("your gpa is: %.1f\n", gpa);
    printf("price is: %f\n", price);
    printf("temperature is: %.1f\n", temperature);

    // double:
    // double = double-precision decimal number (8 bytes)

    double pi = 3.14159265358979;
    printf("the value of PI is: %lf\n", pi);

    // characters:
    // char single character (1 bytes)

    char grade = 'A';
    char symbol = '@';
    printf("your grade is: %c\n", grade);
    printf("your symbol is: %c\n", symbol);

    // strings (string is just an array of characters):
    // char [] = array of characters (size can change)

    char fullName [] = "Giorgi Gigauri";
    char petName [] = "Charile";
    printf("your name is: %s\n", fullName);
    printf("your pet's name is: %s\n", petName);

    //bool(needs (stdbool.h) include):
    // bool = true or false (1 byte, requires to include <stdbool.h>)

    bool isOnline = false; //same as 1.
    bool IsOnline = 1; // same as bool true.

    if (isOnline){
        printf(" you are online!");
    }else {
       printf(" you are offline!");
    }

    return 0;
}