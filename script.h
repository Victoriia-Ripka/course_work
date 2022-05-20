#include "models.h"

//Тут клас сцена - в якому зберігається вся інформація про сцену
class scene{
    public:
    void set(int ls, string n, string text);
    //Якщо 1-5 то пейзаж з бібліотеки
    int landscape; 
    //Ім'я говорячого в сцені
    //Якщо "\0" то слова автора
    string name;
    //Відповідно тест сцени
    string text;
};

