#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Publikatsiya {
  char name[50];
  int year;
};

int main() {
    
    int i,n;
    
    struct Publikatsiya kniga[4];
    
    strcpy(kniga[0].name, "ACCA");
    kniga[0].year = 2021;

    strcpy(kniga[1].name, "Development economics");
    kniga[1].year = 2010;

    strcpy(kniga[2].name, "Python: Basics");
    kniga[2].year = 2012;

    strcpy(kniga[3].name, "Macroeconomics");
    kniga[3].year = 2012;
    
    printf("God izdatelstvo: ");
    scanf("%d", &n);

    for(int i=0; i<=4; i++){
      
      if (kniga[i].year == n){
       
      printf("god izdanii: %d\t naimenovanie knigi:  %s\n", kniga[i].year, kniga[i].name);
      }
    }
  return 0;
}