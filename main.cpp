/* Моменти, які варто нагадати, перед виконанням курсової роботи роботи
1. Май повагу до чужого труду. Не змінюй або видаляй чужий код без дозволу
2. Страйся писати розбірчивий код. (Нормальні назви змінних і функцій, не обічрана логіка і т.д.)
3. Коментарі лишніми не будуть ніколи
*/

#include "function.h"


int main()
{
    scene script[N];
    for(int i=0;i<N;i++){
        script[i].set(i+1, "\0", pitun_speak(50));
    }
    input info;
    introduction();
    f_input(&info);
    // cut_paste(info);
    cout << info.name << " " << info.noun << " " << info.numeric << " " << info.body << " " << info.verb << endl;
    
    for(int i=0; i<N; i++){
    show_scene (script[i]);
    getchar();
    }
    return 0;
}
