#include "function.h" //підключення нашої бібліотеки з усіма функціями
using namespace std::chrono;

int main() {
    scene script[N]; // масив сцен
    input info; // об'єкт структури для збереження даних, що вводить користувач
    high_resolution_clock::time_point t1 = high_resolution_clock::now();
    
    intro(); // функція, що ознайомлює користувача з ідеєю гри
    
    do { // зациклюємо програму
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
        high_resolution_clock::time_point t2 = high_resolution_clock::now();
        
        outro(); // функція з "титрами"
        technical_report(t1, t2);
    } while (loop() == true);
    return 0;
}