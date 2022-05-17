/* Моменти, які варто нагадати, перед виконанням курсової роботи роботи
1. Май повагу до чужого труду. Не змінюй або видаляй чужий код без дозволу
2. Страйся писати розбірчивий код. (Нормальні назви змінних і функцій, не обічрана логіка і т.д.)
3. Коментарі лишніми не будуть ніколи
*/

#include "function.h"


int main()
{
    scene script[N];
// script[0].set(0, 0, "Sreak", "CUM, CUM, CUM");
// script[1].set(0, 0, "Sreak", "Bum, bum, bum");
// script[2].set(0, 0, "Sreak", "Parapapam");

    input info;
    introduction();
    f_input(&info);
    cout << info.name << " " << info.noun << " " << info.numeric << " " << info.body << " " << info.verb << endl;
    
    for(int i=0; i<N; i++){
    show_scene (script[i]);
    getchar();
    }
    return 0;
}
