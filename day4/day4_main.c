// main part od the programm day 4 

#include <stdio.h>
#include <stdlib.h>

typeof struct {
    int id ;
    int age ;
    char name[50] ;
    char country[50] ;

} User ;

// struct User {
//     int id;
//     int age;
//     char name[50];
//     char country[50];

// }

// one User 
User *newUser = (User *)malloc(sizeof(User)) ;

// multile Users 
// User *userArray = (User *)malloc(sizeof(User)) ;

int main() {

    newUser->id = 1012 ;
    newUser->age = 29 ;
    strcpy(newUser->name ,   "John Doe");
    strcpy(newUser->country, "Night City");

    printf("ID : %5d\n  , newUser->id); ") ;

   
    return 0;
}

