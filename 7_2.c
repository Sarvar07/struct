#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct list {
  char surname[50];
  char name[50];
  char number[50];
};

int main() {
    
    int n=3;
    //struct list surname[n];
    
    struct list Abdullaev;
    strcpy(Abdullaev.surname, "Abdullaev");
    strcpy(Abdullaev.name, "Aziz");
    strcpy(Abdullaev.number, "+99899-123-45-67");

    struct list Karimov;
    strcpy(Karimov.surname, "Karimov");
    strcpy(Karimov.name, "Jakhangir");
    strcpy(Karimov.number, "+99891-234-56-78");

    struct list Zakhidov;
    strcpy(Zakhidov.surname, "Zakhidov");
    strcpy(Zakhidov.name, "Sarvar");
    strcpy(Zakhidov.number, "+99891-345-67-89");
    
    
    
      
        //printf("Enter surname: ");
        //scanf("%s", Zakhidov.surname);

        
        printf("%s \t %s  \t nomer telefona \t %s\n", Zakhidov.surname, Zakhidov.name, Zakhidov.number);
        printf("%s \t %s  \t nomer telefona \t %s\n", Karimov.surname, Karimov.name, Karimov.number);
        printf("%s \t %s  \t \t nomer telefona \t %s\n", Abdullaev.surname, Abdullaev.name, Abdullaev.number);

 

  return 0;
}