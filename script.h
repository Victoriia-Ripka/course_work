#include <iostream>
#include <fstream>
#include <cstring>
#include <stdlib.h>

#define N 3 //Кількість сцен //сумніваюсь що треба клк сцен через дефайн
//воно якось не гнучко зовсім
#define SIZE 99

using namespace std;


//Туто клас сцена - в якому зберігається вся інформація про сцену
class scene{
    public:
    void set(int ls, int p, char n[SIZE], char text[SIZE*5]);
    //Якщо 0 - то звичанйна сцена. 
    //Якщо 1-5 то пейзаш з бібліотеки
    int landscape; 
    //Береться люд з відповідної бібліотеки:
    //0 - Шрек, 1 - Шрек + Пітун і так далі
    int personen;
    //Ім'я говорячого в сцені
    //Якщо "\0" то слова автора
    char name[SIZE];
    //Відповідно тест сцени
    char text[SIZE*5];
};


