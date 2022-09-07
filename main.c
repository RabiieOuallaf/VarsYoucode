#include <stdio.h>
#include <stdbool.h>


int main() {

    int age; // declartion 
    age = 18; // initialization
    int ageofGradution;
    int yearOfGradtion = 2022; // declartion and initialization
    int yearofbirth = 2004;// declartion and initialization
    int currentyear = 2022;
    int salaire = 70000;
    int salaire_annuel;
    int a=10 ,b=4 ;
    int div, rest;
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
    printf("%d\n", isFalse);

    ageofGradution = yearOfGradtion - yearofbirth;//soustraction
    printf("My age when a graduted was : %d\n",ageofGradution);
    currentyear = ageofGradution + yearofbirth;//addition
    printf("The current year is : %d \n",currentyear);
    salaire_annuel  = salaire * 12;//multiplication
    printf("Your annual salary is : %d\n",salaire_annuel);

    div = a / b ;// divise le premier opérande par le second.
    rest = a % b ;// renvoie le reste lorsque le premier opérande est divisé par le second
    printf("le resultat de la division est : %d \n le rest de la division est : %d",div,rest);
    
    return 0;
};