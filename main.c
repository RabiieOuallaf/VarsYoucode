#include <stdio.h>
#include <stdbool.h>


int main() {

    // Types of variables :

    //==============> Entier (int / long) <================

    int age; // declartion 
    age = 18; // initialization
    int yearOfGradtion = 2022; // declartion and initialization
    int ageofGradution;
    int yearofbirth = 2004;
    int currentyear = 2022;
    int salaire = 70000;
    int salaire_annuel;
    int a=10 ,b=4 ;
    int div, rest;


    int score = 100; //integer 
    printf("my score is : %d\n" , score);
    int score = 100; // Integer (< 6)
    printf("my score is : %d\n" , score);
    long score2 = 78154727184; // long (> 5)
    printf("My score is : %d \n", score2);

    //==============> caractere / chaine de caractere (char) <================

    char FirstNameLetter = 'R'; // single char
    char FullName[] = "Rabie"; // array of chars 

    printf("The first letter in my name is : %c \n", FirstNameLetter);
    printf("My full name is : %s\n", FullName);

    //=============> Reel (float) <================

    float FloatNumber = 3.03; // 6 to 7 digits 
    double DouleNumber = 7.0856444645600004; // up to 16 digits
    
    printf("My float number is : %f\n", FloatNumber);
    printf("My double number is : %lf\n", DouleNumber);

    //==============> Booleans (true / false) <================

    bool isTrue = true;
    printf("%d\n", isTrue);
    bool isFalse = false;
    printf("%d\n", isFalse);

    //==============> Les operateurs arithmétique<================

    ageofGradution = yearOfGradtion - yearofbirth;   //soustraction
    printf("My age when a graduted was : %d\n",ageofGradution);
    currentyear = ageofGradution + yearofbirth;    //addition
    printf("The current year is : %d \n",currentyear);
    salaire_annuel  = salaire * 12;       //multiplication
    printf("Your annual salary is : %d\n",salaire_annuel);
    div = a / b ;     // divise le premier opérande par le second.
    printf("le resultat de la division est : %d \n",div);
    rest = a % b ;      // renvoie le reste lorsque le premier opérande est divisé par le second
    printf("le rest de la division est : %d",rest);
    
<<<<<<< HEAD
<<<<<<< HEAD
    return 0;
};
=======
=======

     div = a / b ;// divise le premier opérande par le second.
    rest = a % b ;// renvoie le reste lorsque le premier opérande est divisé par le second
    printf("le resultat de la division est : %d \nle rest de la division est : %d\n",div,rest);


>>>>>>> 6f89781a8b8033568a0718adbe27d9dd78496be3
    //==============> Les operateurs relationelles<================
    if(age >= 18)// vérifie si le premier opérande est supérieur ou égal au deuxième opérande.
    {
       printf("I'm an adult\n");
    }
    else printf("Still a teenager !\n");
    if(score < 100)// vérifie si le premier opérande est inférieure au deuxième opérande.
    {
        printf("I have low score i need to work on my skills\n");
    }
    else if(score == 100)//vérifie si les deux opérandes sont égales ou non.
    {
        printf("My score is average\n");
    }
    else printf("My score is good");

    return 0;
};
>>>>>>> 817c94a86382ca211453609bce2812d2627d265e
