#include "models.h"

//Туто клас сцена - в якому зберігається вся інформація про сцену
class scene{
    public:
    void set(int ls, char n[SIZE], char text[SIZE]);
    //Якщо 0 - то звичанйна сцена. 
    //Якщо 1-5 то пейзаш з бібліотеки
    int landscape; 
    //Ім'я говорячого в сцені
    //Якщо "\0" то слова автора
    char name[SIZE];
    //Відповідно тест сцени
    char text[SIZE];
};




