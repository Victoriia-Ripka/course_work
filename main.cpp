/* Моменти, які варто нагадати, перед виконанням курсової роботи роботи
1. Май повагу до чужого труду. Не змінюй або видаляй чужий код без дозволу
2. Страйся писати розбірчивий код. (Нормальні назви змінних і функцій, не обічрана логіка і т.д.)
3. Коментарі лишніми не будуть ніколи
*/

#include "function.h" //підключення нашої бібліотеки зі всіма функціями


int main()
{
    scene script[N];
    input info;     // структура для збереження даних, що вводить користувач 
    //introduction(); // функція, що ознайомлює користувача з ідеєю гри
    f_input(&info); // функція вводу даних користоувачем
    cut_paste(info, &script[0]);
    cout <<"Name: "<< info.name << " " << info.noun << " " << info.numeric << " " << info.body << " " << info.verb << endl;
    
    for(int i=0; i<3; i++){ //ітераційний цикл що виводить в консоль сторінки історії
    show_scene (script[i]); //функція виводу ілюстрації, роздільної лінії та репліки в консоль
    getchar();              //очікування на "команду продовження"
    }
    return 0;
}
