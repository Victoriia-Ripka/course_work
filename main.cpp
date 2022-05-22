#include "function.h" //підключення нашої бібліотеки з усіма функціями

int main() {
    scene script[N]; // масив сцен
    input info; // об'єкт структури для збереження даних, що вводить користувач

    do { // зациклюємо програму
        counter=0;//Занулюємо кількість кроків
        intro(); // функція, що ознайомлює користувача з ідеєю гри
        //В змінну t1 записуємо час в момент запуску програми
        high_resolution_clock::time_point t1 = high_resolution_clock::now();
        f_input(&info); // функція вводу даних користувачем
        cut_paste(info, &script[0]);//Записуємо пермоналізований сценарій

        storytale(0, 6, script);//Виводить сцени в проміжку [0;6)
        if (choice_f())//Перший вибір користувача
        { // В залежності від вибору починати з різних сцен
            storytale(6, 10, script);
        }
        storytale(10, 20, script);

        if (stoi(info.numeric) < 1500)
        { // Сюжетна розвилка
            storytale(20, 32, script);
            if (choice_s()){ //Другий вибір користувача
                storytale(32, 48, script);
            } else {
                storytale(48, 68, script);
            }
        } else {
            storytale(68, 85, script);
        }
        //В змінну t2 записуємо час в момент кінця показу історії
        high_resolution_clock::time_point t2 = high_resolution_clock::now();
        outro(); // функція з "титрами"
        technical_report(t1, t2);//Виводить технічні дані
    } while (loop());//Перевірка, чи повторно запустити програму
    return 0;
}