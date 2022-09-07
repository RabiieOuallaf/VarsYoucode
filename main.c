#include <stdio.h>
#include <stdbool.h>


int main() {

    int age; // declartion 
    age = 18; // initialization
    int yearOfGradtion = 2022; // declartion and initialization

    // types of vars 

    int score = 100; //integer 
    printf("my score is : %d\n" , score);

    char FirstNameLetter = 'R'; // single char
    char FullName[] = "Rabie"; // array of chars 

    printf("The first letter in my name is : %c \n", FirstNameLetter);
    printf("My full name is : %s\n", FullName);

    float FloatNumber = 3.03; // 6 to 7 digits 
    double DouleNumber = 7.0856444645600004; // up to 16 digits
    
    printf("My float number is : %f\n", FloatNumber);
    printf("My double number is : %lf\n", DouleNumber);

    // booleans

    bool isTrue = true;
    printf("%d\n", isTrue);
    bool isFalse = false;
    printf("%d", isFalse);


    return 0;
};