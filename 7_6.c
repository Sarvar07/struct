#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Sotrudnik {
  char tabel_nomer[100];
  char familiya[100];
  char imya [100];
  char doljnost [100];
  int  zarplata_za_den;
  int rabochie_dni;
  int zarplata_za_mesyats;
  int premiya;
  int vsego_za_mesyats;
};

int main() {
    
    struct Sotrudnik mesyats[5];
    char y[100];
    
    strcpy(mesyats[0].tabel_nomer, "1");
    strcpy(mesyats[0].familiya, "Хави");
    strcpy(mesyats[0].imya, "Эрнандез");
    strcpy(mesyats[0].doljnost, "Менеджер");
    mesyats[0].zarplata_za_den= 50000;
    mesyats[0].rabochie_dni = 30;
    mesyats[0].zarplata_za_mesyats = mesyats[0].zarplata_za_den * mesyats[0].rabochie_dni;
    mesyats[0].premiya = mesyats[0].zarplata_za_mesyats * 0.1;
    mesyats[0].vsego_za_mesyats = mesyats[0].zarplata_za_mesyats + mesyats[0].premiya;

    strcpy(mesyats[1].tabel_nomer, "2");
    strcpy(mesyats[1].familiya, "Бускес");
    strcpy(mesyats[1].imya, "Серхио");
    strcpy(mesyats[1].doljnost, "Начальник отдела");
    mesyats[1].zarplata_za_den = 40000;
    mesyats[1].rabochie_dni = 20;
    mesyats[1].zarplata_za_mesyats = mesyats[1].zarplata_za_den * mesyats[1].rabochie_dni;
    mesyats[1].premiya = mesyats[1].zarplata_za_mesyats * 0.1;
    mesyats[1].vsego_za_mesyats = mesyats[1].zarplata_za_mesyats + mesyats[1].premiya;

    strcpy(mesyats[2].tabel_nomer, "3");
    strcpy(mesyats[2].familiya, "Пике");
    strcpy(mesyats[2].imya, "Жерард");
    strcpy(mesyats[2].doljnost, "Заместитель начальника отдела");
    mesyats[2].zarplata_za_den = 30000;
    mesyats[2].rabochie_dni = 25;
    mesyats[2].zarplata_za_mesyats = mesyats[2].zarplata_za_den * mesyats[2].rabochie_dni;
    mesyats[2].premiya = mesyats[2].zarplata_za_mesyats * 0.1;
    mesyats[2].vsego_za_mesyats = mesyats[2].zarplata_za_mesyats + mesyats[2].premiya;

    strcpy(mesyats[3].tabel_nomer, "4");
    strcpy(mesyats[3].familiya, "Хорди");
    strcpy(mesyats[3].imya, "Алба");
    strcpy(mesyats[3].doljnost, "Главный специалист");
    mesyats[3].zarplata_za_den = 25000;
    mesyats[3].rabochie_dni = 15;
    mesyats[3].zarplata_za_mesyats = mesyats[3].zarplata_za_den * mesyats[3].rabochie_dni;
    mesyats[3].premiya = mesyats[3].zarplata_za_mesyats * 0.1;
    mesyats[3].vsego_za_mesyats = mesyats[3].zarplata_za_mesyats + mesyats[3].premiya;

    strcpy(mesyats[4].tabel_nomer, "5");
    strcpy(mesyats[4].familiya, "Лопез");
    strcpy(mesyats[4].imya, "Педри");
    strcpy(mesyats[4].doljnost, "Ведущий специалист");
    mesyats[4].zarplata_za_den = 20000;
    mesyats[4].rabochie_dni = 20;
    mesyats[4].zarplata_za_mesyats = mesyats[4].zarplata_za_den * mesyats[4].rabochie_dni;
    mesyats[4].premiya = mesyats[4].zarplata_za_mesyats * 0.1;
    mesyats[4].vsego_za_mesyats = mesyats[4].zarplata_za_mesyats + mesyats[4].premiya;


    
    printf("tabel nomer: ");
    scanf("%s", &y);

    for(int i=0; i<5; i++){
        if(strcmp(mesyats[i].tabel_nomer, y)==0) {
        printf("Фамилия: \t %s\n", mesyats[i].familiya);
        printf("Имя: \t %s\n", mesyats[i].imya); 
        printf("Должность: \t %s\n", mesyats[i].doljnost);
        printf("Зарплата за месяц: \t %d\n", mesyats[i].zarplata_za_mesyats);
        printf("Обшая сумма за месяц: \t %d\n", mesyats[i].vsego_za_mesyats );
        }
    }
    
  return 0;
}