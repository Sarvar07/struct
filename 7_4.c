#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

struct Publikatsiya {
  char naimenovanie[200];
  char avtor[200];
  int stranitsa;
  int god; };

int main() {
    
    
    struct Publikatsiya kniga[20];
    char y[100];
    int z;
    //setlocale(LC_ALL,"Russian");

    strcpy(kniga[0].naimenovanie, "Медицина на калесах");
    strcpy(kniga[0].avtor, "Shaxzod");
    kniga[0].stranitsa=350;
    kniga[0].god=2020;

    strcpy(kniga[1].naimenovanie, "Как делать укол, если боишься крови");
    strcpy(kniga[1].avtor, "Shaxzod");
    kniga[1].stranitsa=625;
    kniga[1].god=2019;

    strcpy(kniga[2].naimenovanie, "Хочу стать доктором");
    strcpy(kniga[2].avtor, "Shaxzod");
    kniga[2].stranitsa=120;
    kniga[2].god=2017;

    strcpy(kniga[3].naimenovanie, "Маркетинг");
    strcpy(kniga[3].avtor, "Davron");
    kniga[3].stranitsa=223;
    kniga[3].god=2018;

    strcpy(kniga[4].naimenovanie, "Маркетинг ва Бозор");
    strcpy(kniga[4].avtor, "Davron");
    kniga[4].stranitsa=257;
    kniga[4].god=2019;
    
    strcpy(kniga[5].naimenovanie, "Супремаркет конунияти");
    strcpy(kniga[5].avtor, "Davron");
    kniga[5].stranitsa=725;
    kniga[5].god=2020;

    strcpy(kniga[6].naimenovanie, "Мен математик эмасман");
    strcpy(kniga[6].avtor, "Erkin Isoyev");
    kniga[6].stranitsa=1200;
    kniga[6].god=2018;

    strcpy(kniga[7].naimenovanie, "Дастурлашда Математика");
    strcpy(kniga[7].avtor, "Erkin Isoyev");
    kniga[7].stranitsa=534;
    kniga[7].god=2019;

    strcpy(kniga[8].naimenovanie, "Дастурлашда психология");
    strcpy(kniga[8].avtor, "Erkin Isoyev");
    kniga[8].stranitsa=100;
    kniga[8].god=2019;

    strcpy(kniga[9].naimenovanie, "Кандай килиб ишдан бушаш мумкин");
    strcpy(kniga[9].avtor, "Erkin Isoyev");
    kniga[9].stranitsa=645;
    kniga[9].god=2020;
    
    strcpy(kniga[10].naimenovanie, "Суний интиллект: эртанги кун");
    strcpy(kniga[10].avtor, "Erkin Isoyev");
    kniga[10].stranitsa=123;
    kniga[10].god=2019;

    strcpy(kniga[11].naimenovanie, "Естли жизнь на марсе");
    strcpy(kniga[11].avtor, "Jahongir");
    kniga[11].stranitsa=234;
    kniga[11].god=2005;

    strcpy(kniga[12].naimenovanie, "Земля и его обетатели");
    strcpy(kniga[12].avtor, "Jahongir");
    kniga[12].stranitsa=200;
    kniga[12].god=2007;

    strcpy(kniga[13].naimenovanie, "Как жить среди людей, что бы тебя не заметили");
    strcpy(kniga[13].avtor, "Jahongir");
    kniga[13].stranitsa=378;
    kniga[13].god=2009;

    strcpy(kniga[14].naimenovanie, "Земляни и как их манепулировать");
    strcpy(kniga[14].avtor, "Jahongir");
    kniga[14].stranitsa=12;
    kniga[14].god=2015;

    strcpy(kniga[15].naimenovanie, "Жудаям кизик");
    strcpy(kniga[15].avtor, "Mirzaolim");
    kniga[15].stranitsa=12;
    kniga[15].god=2015;

    strcpy(kniga[16].naimenovanie, "Жудаям кизик ва тшунарсиз");
    strcpy(kniga[16].avtor, "Mirzaolim");
    kniga[16].stranitsa=12;
    kniga[16].god=2017;

    strcpy(kniga[17].naimenovanie, "Кандай килиб жудаям кизик ва тшунарсиз фанни урганиш мумкин");
    strcpy(kniga[17].avtor, "Mirzaolim");
    kniga[17].stranitsa=12;
    kniga[17].god=2020;




    printf("Avtor: ");
    scanf("%s", y);
    
    printf("God izdanii: ");
    scanf("%d", &z);
    
    for(int i=0; i<15; i++){
    if(strstr(kniga[i].avtor, y)) {    
        if (kniga[i].god<z){
   printf("Publikatsii %s v %d goda \t %s\n", kniga[i].avtor, kniga[i].god, kniga[i].naimenovanie);
  }
    }
    }
  return 0;
}