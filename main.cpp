#include "function.h" //підключення нашої бібліотеки зі всіма функціями

int main(){
    scene script[N];
    input info; // структура для збереження даних, що вводить користувач
    intro(); // функція, що ознайомлює користувача з ідеєю гри
    f_input(&info); // функція вводу даних користувачем
    cut_paste(info, &script[0]);

    storytale(0, 6, script);
    if (choice_f())
    { // В залежності від вибору починати з різних сцен
        storytale(6, 10, script);
    }
    storytale(10, 20, script);

    if (stoi(info.numeric) < 1500)
    { // Сюжетна розвилка
        storytale(20, 32, script);
        if (choice_s()){
            storytale(32, 48, script);
        } else {
            storytale(48, 68, script);
        }
    } else {
        storytale(68, 85, script);
    }
    outro(); // функція з "титрами"
    return 0;
}