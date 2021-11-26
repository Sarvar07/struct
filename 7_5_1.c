#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct avtomobil {
    char rangi[100];
    char raqami[100];
    char egasi[100];
    char modeli[100];
};

int main() {
    
    struct avtomobil avto[12];
    char y[100], z[100], x[100];
    
    strcpy(avto[0].rangi, "Oq");
    strcpy(avto[0].raqami, "C234DB");
    strcpy(avto[0].egasi, "Irina Kim");
    strcpy(avto[0].modeli, "Nexia");

    strcpy(avto[1].rangi, "Qora");
    strcpy(avto[1].raqami, "B774CD");
    strcpy(avto[1].egasi, "Umida Shakirova");
    strcpy(avto[1].modeli, "Tracker");

    strcpy(avto[2].rangi, "Seriy");
    strcpy(avto[2].raqami, "B407BG");
    strcpy(avto[2].egasi, "Shaxnoza Davranova");
    strcpy(avto[2].modeli, "Lacetti");

    strcpy(avto[3].rangi, "Qora");
    strcpy(avto[3].raqami, "C007EB");
    strcpy(avto[3].egasi, "Bogomolov Egor");
    strcpy(avto[3].modeli, "BMW");

    strcpy(avto[4].rangi, "Oq");
    strcpy(avto[4].raqami, "B474AG");
    strcpy(avto[4].egasi, "Nigora Islamova");
    strcpy(avto[4].modeli, "KIA");

    strcpy(avto[5].rangi, "Seriy");
    strcpy(avto[5].raqami, "L001NA");
    strcpy(avto[5].egasi, "Jahongir Karimov");
    strcpy(avto[5].modeli, "Marsaxod");

    strcpy(avto[6].rangi, "Choko");
    strcpy(avto[6].raqami, "L002NA");
    strcpy(avto[6].egasi, "Jena Karimova");
    strcpy(avto[6].modeli, "Marsaxod");

    strcpy(avto[7].rangi, "Poseydon Blue");
    strcpy(avto[7].raqami, "A330NA");
    strcpy(avto[7].egasi, "Aziz Abdullaev");
    strcpy(avto[7].modeli, "Tracker");

    strcpy(avto[8].rangi, "To'q seriy");
    strcpy(avto[8].raqami, "A456BA");
    strcpy(avto[8].egasi, "Nodir Mahammadjonov");
    strcpy(avto[8].modeli, "Nexia");

    strcpy(avto[9].rangi, "To'q seriy");
    strcpy(avto[9].raqami, "V777CR");
    strcpy(avto[9].egasi, "Ikrom Nosirov");
    strcpy(avto[9].modeli, "Lacetti");

    strcpy(avto[10].rangi, "Qizil");
    strcpy(avto[10].raqami, "A010NA");
    strcpy(avto[10].egasi, "Ninel Fenyutina");
    strcpy(avto[10].modeli, "KIA");

    strcpy(avto[11].rangi, "Qizil");
    strcpy(avto[11].raqami, "D555BA");
    strcpy(avto[11].egasi, "Dilya Karimova");
    strcpy(avto[11].modeli, "Lacetti");

    printf("\n Modeli: ");
    scanf("%s", &x);

    for(int i=0; i<12; i++){
        if(strstr(avto[i].modeli, x)) {
        printf("Автомобил давлат раками: %s \t\t Автомобил эгаси: %s \t\t Ранги: %s\n", avto[i].raqami, avto[i].egasi, avto[i].rangi);
      
        }
    }
    
    printf("\n Avtomobil davlat raqamini tering: ");
    scanf("%s", &y);

    for(int i=0; i<12; i++){
        if(strstr(avto[i].raqami, y)) {
        printf("Автомобил модели: %s \t\t Автомобил эгаси: %s \t\t Ранги: %s\n", avto[i].modeli, avto[i].egasi, avto[i].rangi);
      
        }
    }
    
    printf("\n Avtomobil rangi: ");
    scanf("%s", &z);

    for(int i=0; i<12; i++){
        if(strstr(avto[i].rangi, z)) {
        printf("Автомобил модели: %s \t\t Автомобил эгаси: %s \t\t Автомобил давлат раками: %s\n", avto[i].modeli, avto[i].egasi, avto[i].raqami);
            
     }
    }

  return 0;
}