#include <fstream> // opening file in pitun_speak()
#include <map>     //statetab map in pitun_speak()
#include <vector>  //suffix in pitun_speak()
#include <deque>   //prefix in pitun_speak()
using namespace std;

#define N 100    //Кількість сцен
#define SIZE 99 //кількість дозволених елементів у масивах символів, що вводить користувач

class input //структура, що зберуга дані введені користувачем
{
public:
    string name,
        noun,
        numeric,
        body,
        verb;
};

/* думаю тут буде функція  printscene(int x),
де чисто на вхід буде номер сцени а на вихід -
друк аскіі картинки зліпленої з тої дичини,
що ми її сюди покладемо. */

void printscene(int x) //фунція виводу наших ілюстрацій до слайдів, що приймає ціле число (номер слайда)
{
    switch (x) //перемикач, в залежності він х показати номер сцени
    {
    case 1:
        //моделька болота(79х15)
        // !!! ВОНА НОРМАЛЬНО ВІДОБРАЖАЄТЬСЯ В КОНСОЛІ
        // ХАЙ ТІЛЬКИ ХТОСЬ ПАЛЬЦЕМ ТРОНЕ РІВНЯТИ ШРЕКА
        // Я ПОПЕРЕДИВ
        cout << "▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓▓▓▓▓▓▓▓\n"
                "▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██▓▓▓▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░░░▒▒▒▒▒▒▒██▓▓▓▓▓▓▓▓▓▓▓\n"
                "▒▒▒▒▒▒▒▒▒▒██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓████▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░░░▒▒░▒▒▒▒▒▒▓▓▓▓▓▓▓▓▓▓▓\n"
                "░░░░▒▒▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██▓▓▒▒ ⡴⠑⡄⠀⠀⠀⠀⠀⠀⣀⣀⣤⣤⣤⣀⡀⠀⠀  ▒▒▓▓▓▓████▓▓▓\n"
                "░░░░░░░░▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓░░⠸⡇⠀⠿⡀⠀⣀⡴⢿⣿⣿⣿⣿⣿⣿⣿⣷⣦⡀⠀  ⠀  ▓▓████▓▓▓\n"
                "░░░░░░░░▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██▓▓▓▓▓▓▓▓▓▓░░░░ ⠑⢄⣠⠾⠁⣀⣄⡈⠙⣿⣿⣿⣿⣿⣿⣿⣿⣆  ░░░░░░████\n"
                "░░░░░░░░░░▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓░░░░░░░ ⢀⡀⠁⠀⠀⠈⠙⠛⠂⠈⣿⣿⣿⣿⣿⠿⡿⢿⣆  ░░░░████\n"
                "░░░░░░░░░░░░▓▓▓▓██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓░░░░░░░░░ ⢀⡾⣁⣀⠀⠴⠂⠙⣗⡀⠀⢻⣿⣿⠭⢤⣴⣦⣤⣹⠀⠀⠀⢀⢴⣶⣆████\n" //+
                "░░░░░░░░░░░░░░░░██░░██░░░░░░░░░░░░░░░░░░  ⢀⣾⣿⣿⣿⣷⣮⣽⣾⣿⣥⣴⣿⣿⡿⢂⠔⢚⡿⢿⣿⣦⣴⣾⠁⠸⣼⡿ ████\n"
                "▒▒▒▒▒▒░░░░░░░░░░██████░░░░░░░░░░░░░░░  ⢀⡞⠁⠙⠻⠿⠟⠉⠀⠛⢹⣿⣿⣿⣿⣿⣌⢤⣼⣿⣾⣿⡟⠉        ████▓▓\n"
                "▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██████░░░░░░▒▒▒▒▒▒▒▒░░░ ⣾⣷⣶⠇⠀⠀⣤⣄⣀⡀⠈⠻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇  ░▓▓▓▓████▓▓▓\n"
                "▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒████▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒  ⠉⠈⢦⡈⢻⣿⣿⣿⣶⣶⣶⣶⣤⣽⡹⣿⣿⣿⣿⡇ ▓▓▓▓▓▓▓▓██▓▓▓\n"
                "▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒████▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ⠀⠉⠲⣽⡻⢿⣿⣿⣿⣿⣿⣿⣷⣜⣿⣿⣿⡇  ▓▓▓▓██▓▓██▓▓▓\n"
                "▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒████▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ⢸⣿⣿⣷⣶⣮⣭⣽⣿⣿⣿⣿⣿⣿⣿   ▓▓▓▓▓▓▓▓▓▓▓▓▓\n"
                "▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒████▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ⣀⣀⣈⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠇  ▒▒▒▒▒▒▒▒▒▒▒▒▒▒\n";
        break;
    case 2:
        //моделька мордора(79х15)
        //в консолі вона ідеально рівна
        cout << "   //// ////// /V_.-._\\  |.-.-.|===| _ |-----| u    u |  /___\\ \n"
                "  // /// // ///==\\ u |.  || | ||===||||| |T| |   ||   | .| u |_ _ _ _ _ _\n"
                " ///////-\\////====\\==|:::::::::::::::::::::::::::::::::::|u u| U U U U U\n"
                " |----/\\u |--|++++|..|'''''''''''::::::::::::::''''''''''|+++|+-+-+-+-+-+\n"
                "⣿⣿⣿⣿⣿⠋⠁⣴⣶⣿⣿⣿⣿⣿⣿⣿⣦⣍⢿⣿⣿⣿⣿⣿            .::::::::.           | T |....| V |..\n"
                "⣿⣿⣿⣿⢷⠄⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣏⢼⣿⣿⣿⣿    \\|/    .::::::::::.\n"
                "⢹⣿⣿⢻⠎⠔⣛⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡏⣿⣿⣿⣿          .::::::::::::.              _\n"
                "⢸⣿⣿⠇⡶⠄⣿⣿⠿⠟⡛⠛⠻⣿⡿⠿⠿⣿⣗⢣⣿⣿⣿⣿         .::::::::::::::.         ___(_)__\n"
                "⠐⣿⣿⡿⣷⣾⣿⣿⣿⣾⣶⣶⣶⣿⣁⣔⣤⣀⣼⢲⣿⣿⣿⣿/|       .:::::;;;:::;;:::.      |\\  / \\  \\-------\n"
                "⠄⣿⣿⣿⣿⣾⣟⣿⣿⣿⣿⣿⣿⣿⡿⣿⣿⣿⢟⣾⣿⣿⣿⣿|      .::::::;;:::::;;:::.      | \\_______\\________\n"
                "⠄⣟⣿⣿⣿⡷⣿⣿⣿⣿⣿⣮⣽⠛⢻⣽⣿⡇⣾⣿⣿⣿⣿⣿|     .:::::;;;::::::;;;:::.     |\\ [==  = ]   |\n"
                "⠄⢻⣿⣿⣿⡷⠻⢻⡻⣯⣝⢿⣟⣛⣛⣛⠝⢻⣿⣿⣿⣿⣿⣿|    .:::::;;;:::::::;;;::::.    | \\[ ===  ]___|____\n"
                "⠄⠸⣿⣿⡟⣹⣦⠄⠋⠻⢿⣶⣶⣶⡾⠃⡂⢾⣿⣿⣿⣿⣿⣿|   .:::::;;;::::::::;;;:::::.   |\\ [=  ===] |\n"
                "⠄⠄⠟⠋⠄⢻⣿⣧⣲⡀⡀⠄⠉⠱⣠⣾⡇⠄⠉⠛⢿⣿⣿⣿|  .:::::;;;::::::::::;;;:::::.  | \\[ ==  =]_|______\n"
                "⠄⠄⠄⠄⠄⠈⣿⣿⣿⣷⣿⣿⢾⣾⣿⣿⣇⠄⠄⠄⠄⠄⠉⠉| .::::::;;:::::::::::;;;::::::. |\\ [== == ]      | \n";
        break;
    case 3:
        //сцена-протиставлення Пітуна і Шрека (71х15)
        cout << "         ⣿⣿⣿⣵⣿⣿⣿⠿⡟⣛⣧⣿⣯⣿⣝⡻⢿⣿⣿⣿⣿⣿⣿⣿  |    ⡴⠑⡄⠀⠀⠀⠀⠀⠀⣀⣀⣤⣤⣤⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀   \n"
                "         ⣿⣿⣿⣿⣿⠋⠁⣴⣶⣿⣿⣿⣿⣿⣿⣿⣦⣍⢿⣿⣿⣿⣿⣿  |   ⠸⡇⠀⠿⡀⠀⣀⡴⢿⣿⣿⣿⣿⣿⣿⣿⣷⣦⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀  \n"
                "         ⣿⣿⣿⣿⢷⠄⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣏⢼⣿⣿⣿⣿  |⠀ ⠀⠀⠑⢄⣠⠾⠁⣀⣄⡈⠙⣿⣿⣿⣿⣿⣿⣿⣿⣆⠀⠀⠀⠀⠀⠀⠀⠀   \n"
                "         ⢹⣿⣿⢻⠎⠔⣛⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡏⣿⣿⣿⣿  |⠀⠀⠀⠀⢀⡀⠁⠀⠀⠈⠙⠛⠂⠈⣿⣿⣿⣿⣿⠿⡿⢿⣆⠀⠀⠀⠀⠀⠀⠀    \n"
                "         ⢸⣿⣿⠇⡶⠄⣿⣿⠿⠟⡛⠛⠻⣿⡿⠿⠿⣿⣗⢣⣿⣿⣿⣿  |⠀⠀⠀⢀⡾⣁⣀⠀⠴⠂⠙⣗⡀⠀⢻⣿⣿⠭⢤⣴⣦⣤⣹⠀⠀⠀⢀⢴⣶⣆   \n"
                "         ⠐⣿⣿⡿⣷⣾⣿⣿⣿⣾⣶⣶⣶⣿⣁⣔⣤⣀⣼⢲⣿⣿⣿⣿  |⠀⠀⢀⣾⣿⣿⣿⣷⣮⣽⣾⣿⣥⣴⣿⣿⡿⢂⠔⢚⡿⢿⣿⣦⣴⣾⠁⠸⣼⡿  \n"
                "         ⠄⣿⣿⣿⣿⣾⣟⣿⣿⣿⣿⣿⣿⣿⡿⣿⣿⣿⢟⣾⣿⣿⣿⣿  |⠀⢀⡞⠁⠙⠻⠿⠟⠉⠀⠛⢹⣿⣿⣿⣿⣿⣌⢤⣼⣿⣾⣿⡟⠉⠀⠀⠀⠀⠀   \n"
                "         ⠄⣟⣿⣿⣿⡷⣿⣿⣿⣿⣿⣮⣽⠛⢻⣽⣿⡇⣾⣿⣿⣿⣿⣿  |⠀⣾⣷⣶⠇⠀⠀⣤⣄⣀⡀⠈⠻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⠀⠀⠀⠀⠀⠀   \n"
                "         ⠄⢻⣿⣿⣿⡷⠻⢻⡻⣯⣝⢿⣟⣛⣛⣛⠝⢻⣿⣿⣿⣿⣿⣿  |⠀⠉⠈⠉⠀⠀⢦⡈⢻⣿⣿⣿⣶⣶⣶⣶⣤⣽⡹⣿⣿⣿⣿⡇⠀⠀⠀⠀⠀⠀   \n"
                "         ⠄⠸⣿⣿⡟⣹⣦⠄⠋⠻⢿⣶⣶⣶⡾⠃⡂⢾⣿⣿⣿⣿⣿⣿  |⠀⠀⠀⠀⠀⠀⠀⠉⠲⣽⡻⢿⣿⣿⣿⣿⣿⣿⣷⣜⣿⣿⣿⡇⠀⠀⠀⠀⠀⠀    \n"
                "         ⠄⠄⠟⠋⠄⢻⣿⣧⣲⡀⡀⠄⠉⠱⣠⣾⡇⠄⠉⠛⢿⣿⣿⣿  |⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿⣷⣶⣮⣭⣽⣿⣿⣿⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀    \n"
                "         ⠄⠄⠄⠄⠄⠈⣿⣿⣿⣷⣿⣿⢾⣾⣿⣿⣇⠄⠄⠄⠄⠄⠉⠉  |⠀⠀⠀⠀⠀⠀⣀⣀⣈⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠇⠀⠀⠀⠀⠀⠀⠀    \n"
                "         ⠄⠄⠄⠄⠄⠄⠸⣿⣿⠟⠃⠄⠄⢈⣻⣿⣿⠄⠄⠄⠄⠄⠄⠄  |⠀⠀⠀⠀⠀⠀⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠃⠀⠀⠀⠀⠀⠀⠀⠀    \n"
                "         ⠄⠄⠄⠄⠄⠄⠄⢿⣿⣾⣷⡄⠄⢾⣿⣿⣿⡄⠄⠄⠄⠄⠄⠄  |⠀⠀⠀⠀⠀⠀⠀⠹⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠟⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀    \n"
                "         ⠄⠄⠄⠄⠄⠄⠄⠸⣿⣿⣿⠃⠄⠈⢿⣿⣿⠄⠄⠄⠄⠄⠄⠄  |          ⠉⠛⠻⠿⠿⠿⠿⠛⠉\n";
        break;
    case 4:
        //Пітун і його армія (79х15)
        // нічого рівняти не треба, все бамбіно
        cout << "⣿⣿⣿⣵⣿⣿⣿⠿⡟⣛⣧⣿⣯⣿⣝⡻⢿⣿⣿⣿⣿⣿⣿⣿  (\\__/)             (\\_/)\n"
                "⣿⣿⣿⣿⣿⠋⠁⣴⣶⣿⣿⣿⣿⣿⣿⣿⣦⣍⢿⣿⣿⣿⣿⣿  (=o.o=)             ( o_o)        \n"
                "⣿⣿⣿⣿⢷⠄⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣏⢼⣿⣿⣿⣿  E[:]|||||[:]З       /'''''''''\\========D \n"
                "⢹⣿⣿⢻⠎⠔⣛⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡏⣿⣿⣿⣿  (')_(')             /'''''''''''''''''''''''\\     \n"
                "⢸⣿⣿⠇⡶⠄⣿⣿⠿⠟⡛⠛⠻⣿⡿⠿⠿⣿⣗⢣⣿⣿⣿⣿                      \\_@_@_@_@_@_@_@_@_@_@_@_/     \n"
                "⠐⣿⣿⡿⣷⣾⣿⣿⣿⣾⣶⣶⣶⣿⣁⣔⣤⣀⣼⢲⣿⣿⣿⣿  (\\__/) \n"
                "⠄⣿⣿⣿⣿⣾⣟⣿⣿⣿⣿⣿⣿⣿⡿⣿⣿⣿⢟⣾⣿⣿⣿⣿  (=o.o=)\n"
                "⠄⣟⣿⣿⣿⡷⣿⣿⣿⣿⣿⣮⣽⠛⢻⣽⣿⡇⣾⣿⣿⣿⣿⣿  E[:]|||||[:]З             (\\_/)      \n"
                "⠄⢻⣿⣿⣿⡷⠻⢻⡻⣯⣝⢿⣟⣛⣛⣛⠝⢻⣿⣿⣿⣿⣿⣿  (')_(')             (     ( o_o)                   \n"
                "⠄⠸⣿⣿⡟⣹⣦⠄⠋⠻⢿⣶⣶⣶⡾⠃⡂⢾⣿⣿⣿⣿⣿⣿                      )     /''''''''\\========D   \n"
                "⠄⠄⠟⠋⠄⢻⣿⣧⣲⡀⡀⠄⠉⠱⣠⣾⡇⠄⠉⠛⢿⣿⣿⣿  (\\__/)            .-`-.  /''''''''''''''''''\\ \n"
                "⠄⠄⠄⠄⠄⠈⣿⣿⣿⣷⣿⣿⢾⣾⣿⣿⣇⠄⠄⠄⠄⠄⠉⠉  (=o.o=)           :   :  \\_@_@_@_@_@_@_@_@_/ \n"
                "⠄⠄⠄⠄⠄⠄⠸⣿⣿⠟⠃⠄⠄⢈⣻⣿⣿⠄⠄⠄⠄⠄⠄⠄  E[:]|||||[:]З     :TNT:                           \n"
                "⠄⠄⠄⠄⠄⠄⠄⢿⣿⣾⣷⡄⠄⢾⣿⣿⣿⡄⠄⠄⠄⠄⠄⠄  (')_(')           :___:                           \n"
                "⠄⠄⠄⠄⠄⠄⠄⠸⣿⣿⣿⠃⠄⠈⢿⣿⣿⠄⠄⠄⠄⠄⠄⠄  \n";
        break;
    case 5:
        //Путін напав (79х15 (з пустими рядками включно))
        // Не виправляти, на виході воно рівне.
        cout << "\n"
                "\n"
                "\n"
                "                                |                      (\\_/)             \n"
                "       _T      .,,.    ~--~ ^^  |                      (o_o )              \n"
                " ^^   // \\                     ~|           C=====/'''''''''\\       \n"
                "      ][O]    ^^      ,-~ ~     |            /'''''''''''''''''''''''\\    \n"
                "   /''-I_I         _II____      |            \\_@_@_@_@_@_@_@_@_@_@_@_/  \n"
                "__/_  /   \\ ______/ ''   /'\\_,__|       (\\__/)                    (\\__/)  \n"
                "  | II--'''' \\,--:--..,_/,.-{ },|       (=o.o=)      (\\__/)       (=o.o=)  \n"
                "; '/__\\,.--';|   |[] .-.| O{ _ }| E[:]|||||[:]З      (=o.o=)    E[:]|||||[:]З \n"
                ":' |  | []  -|   ''--:.;[,.'\\,/ |       (')_(')  E[:]|||||[:]З     (')_(')  \n"
                "'  |[]|,.--'' '',   ''-,.    |  |                    (')_(')\n"
                "\n"
                "\n";
        break;
    case 6:
        //таможня поляндії (80х15)
        // Не виправляти, на виході воно рівне.
        cout << "\n"
                "          _ _.-'`-._ _           Polandia custom personnel:        You:\n"
                "         ;.'________'.;                                               \n"
                " ______n.[  Granica   ].n_________     (( `'-''``''-'` ))         //  \\\\ \n"
                "|''_''_''||==||==||==||''_''_''_'']    )-__-_.._-__-(             |/o o\\| \n"
                "|''''''''||..||..||..||'''''''''''|   / --- (ö _ ö) --- \\         C  )  D \n"
                "|LI LI LI||LI||LI||LI||LI LI LI LI|   \\ .-* ( .0. ) *-. /         | \\_/ |\n"
                "|.. .. ..||..||..||..||.. .. .. ..|   _'-. ,_ '=' _, .-'_          \\___/ \n"
                "|LI LI LI||LI||LI||LI||LI LI LI LI|  / `;#'#'# - #'#'#;` \\        /<|_|>\\_ \n"
                "|.. .. ..||..||..||..||.. .. .. ..|  \\_)) -----' #'----- ((_/     / |/\\_/\\| \n"
                "|LI LI LI||LI||LI||LI||LI LI LI LI|  # ------------ #            |    |\\|    |\n"
                "|.. .. ..||..||..||..||.. .. .. ..|  '# ------- ------ #'        | |  |\\|  | |\n"
                "|LI LI LI||LI||LI||LI||LI LI LI LI|   /..-'# ------- #'-.\\       | |  |\\|  | |\n"
                ",,;;;,;;;,;;;,;;;,;;;,;;;,;;,;;;,;;;,_\\...-\'# -- #'/-.../_       | |   Y   | |\n"
                "                                     ((____)- '#' -(____))       | |___|___|_|\n";
        break;
    case 7:
        //будівля тероборони (63х15)
        // Не виправляти, на виході воно рівне.
        cout << "              __                                |  __  | \n"
                "             /  \\       ________________________|_/  \\_|__ \n"
                "            / ^^ \\     /=========================/ ^^ \\===| \n"
                "           /  []  \\   /=========================/  []  \\==| \n"
                "          /________\\ /=========================/________\\=| \n"
                "       *  |        |/==========================|        |=| \n"
                "      *** | ^^  ^^ |---------TerOborona--------| ^^  ^^ |-- \n"
                "     *****| []  [] |           _____           | []  [] | | \n"
                "    *******        |          /_____\\          |      * | | \n"
                "   *********^^  ^^ |  ^^  ^^  |  |  |  ^^  ^^  |     ***| | \n"
                "  ***********]  [] |  []  []  |  |  |  []  []  | ===***** | \n"
                " *************     |         @|__|__|@         |/ |*******| \n"
                "***************   ***********--=====--**********| ********* \n"
                "***************___*********** |=====| **********|*********** \n"
                " *************     ********* /=======\\ ******** | ********* \n";
        break;
    case 8:
        // Шрек говорить з притулою (67х15)
        // Не виправляти, на виході воно рівне.
        cout <<"    ⡴⠑⡄⠀⠀⠀⠀⠀⠀⣀⣀⣤⣤⣤⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀                       ,#####,\n" 
            <<"   ⠸⡇⠀⠿⡀⠀⣀⡴⢿⣿⣿⣿⣿⣿⣿⣿⣷⣦⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀                       #_   _#\n"
            <<"⠀ ⠀⠀⠑⢄⣠⠾⠁⣀⣄⡈⠙⣿⣿⣿⣿⣿⣿⣿⣿⣆⠀⠀⠀⠀⠀⠀⠀⠀                        |a` `a|\n"
            <<"⠀⠀⠀⠀⢀⡀⠁⠀⠀⠈⠙⠛⠂⠈⣿⣿⣿⣿⣿⠿⡿⢿⣆⠀⠀⠀⠀⠀⠀⠀                        |  u  |\n"
            <<"⠀⠀⠀⢀⡾⣁⣀⠀⠴⠂⠙⣗⡀⠀⢻⣿⣿⠭⢤⣴⣦⣤⣹⠀⠀⠀⢀⢴⣶⣆                        \\  =  /\n"
            <<"⠀⠀⢀⣾⣿⣿⣿⣷⣮⣽⣾⣿⣥⣴⣿⣿⡿⢂⠔⢚⡿⢿⣿⣦⣴⣾⠁⠸⣼⡿                        |\\___/|\n"
            <<"⠀⢀⡞⠁⠙⠻⠿⠟⠉⠀⠛⢹⣿⣿⣿⣿⣿⣌⢤⣼⣿⣾⣿⡟⠉⠀⠀⠀⠀⠀                ___ ____/:     :\\____ ___\n"
            <<"⠀⣾⣷⣶⠇⠀⠀⣤⣄⣀⡀⠈⠻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⠀⠀⠀⠀⠀⠀               .'   `.-===-\\   /-===-.`   '.\n"
            <<"⠀⠉⠈⠉⠀⠀⢦⡈⢻⣿⣿⣿⣶⣶⣶⣶⣤⣽⡹⣿⣿⣿⣿⡇⠀⠀⠀⠀⠀⠀              /      .-'''''-.-'''''-.      \\ \n"
            <<"⠀⠀⠀⠀⠀⠀⠀⠉⠲⣽⡻⢿⣿⣿⣿⣿⣿⣿⣷⣜⣿⣿⣿⡇⠀⠀⠀⠀⠀⠀              /'             =:=             '\\ \n"
            <<"⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿⣷⣶⣮⣭⣽⣿⣿⣿⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀            .'  ' .:    O   -=:=-   O    :. '  `.\n"
            <<"⠀⠀⠀⠀⠀⠀⣀⣀⣈⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠇⠀⠀⠀⠀⠀⠀⠀           (.'   /'. '-.....-'-.....-' .'\\   '.)\n"
            <<"⠀⠀⠀⠀⠀⠀⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠃⠀⠀⠀⠀⠀⠀⠀⠀           /' ._/   '.     --:--     .'   \\_. '\\ \n"
            <<"⠀⠀⠀⠀⠀⠀⠀⠹⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠟⠁⠀⠀⠀You⠀⠀⠀⠀          |  .'|      '.  ---:---  .'     |'.  |\n" 
            <<"          ⠉⠛⠻⠿⠿⠿⠿⠛⠉                      |  : |       |  ---:---  |      | :  |\n";
        break;
    case 9:
        //Шрек говорить з Ослом (79х15)
        // Не виправляти, на виході воно рівне.
        cout << "    ⡴⠑⡄⠀⠀⠀⠀⠀⠀⣀⣀⣤⣤⣤⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀   \n"
             << "   ⠸⡇⠀⠿⡀⠀⣀⡴⢿⣿⣿⣿⣿⣿⣿⣿⣷⣦⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀                       ,^-. `,--.-/ ,'  _,'\n"
             << "⠀ ⠀⠀⠑⢄⣠⠾⠁⣀⣄⡈⠙⣿⣿⣿⣿⣿⣿⣿⣿⣆⠀⠀⠀⠀⠀⠀⠀⠀                       (__        ^ ( _,' \n"
             << "⠀⠀⠀⠀⢀⡀⠁⠀⠀⠈⠙⠛⠂⠈⣿⣿⣿⣿⣿⠿⡿⢿⣆⠀⠀⠀⠀⠀⠀⠀                     __((o\\   __   ,-'  \n"
             << "⠀⠀⠀⢀⡾⣁⣀⠀⠴⠂⠙⣗⡀⠀⢻⣿⣿⠭⢤⣴⣦⣤⣹⠀⠀⠀⢀                      ,',-.     ((o)  / \n"
             << "⠀⠀⢀⣾⣿⣿⣿⣷⣮⣽⣾⣿⣥⣴⣿⣿⡿⢂⠔⢚⡿⢿⣿⣦⣴⣾⠁⠸,   .''.   ,     ,','   `.    `-- ( \n"
             << "⠀⢀⡞⠁⠙⠻⠿⠟⠉⠀⠛⢹⣿⣿⣿⣿⣿⣌⢤⣼⣿⣾⣿⡟⠉⠀⠀⠀, #   |()|   # ,   |'      ,`        \\ \n"
             << "⠀⣾⣷⣶⠇⠀⠀⣤⣄⣀⡀⠈⠻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⠀⠀_#_#___|__|___#_#__  |     ,:' `        | \n"
             << "⠀⠉⠈⠉⠀⠀⢦⡈⢻⣿⣿⣿⣶⣶⣶⣶⣤⣽⡹⣿⣿⣿⣿⡇⠀[__________________] (  `--      :-.     |\n"
             << "⠀⠀⠀⠀⠀⠀⠀⠉⠲⣽⡻⢿⣿⣿⣿⣿⣿⣿⣷⣜⣿⣿⣿⡇⠀⠀|-_ -=__=-_ -==_-|   `,.__       ,-,'   ;\n"
             << "⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿⣷⣶⣮⣭⣽⣿⣿⣿⣿⣿⣿⣿⠀⠀⠀|_.------------.=|   (_/  `,__,-' /   ,' \n"
             << "⠀⠀⠀⠀⠀⠀⣀⣀⣈⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠇⠀⠀⠀|=| o        o |=|   |\\`--|_/,' ,' _,' \n"
             << "⠀⠀⠀⠀⠀⠀⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠃⠀⠀⠀_|-| !   `(   ! |-|_   \\_^--^,',-' -'( \n"
             << "⠀⠀⠀⠀⠀⠀⠀⠹⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠟⠁⠀⠀⠀/==_| ! _(_.)_ ! |=_-\\  (_`--','       `-. \n"
             << "          ⠉⠛⠻⠿⠿⠿⠿⠛⠉     |=_ |/^\\^=^^=^/^\\| _=|      ;;;;'       ::::.`-----\n";

        break;
    case 10:
        //Шрек і Повдербот домовляються (66х15)
        // Не виправляти, на виході воно рівне.
        cout << "    ⡴⠑⡄⠀⠀⠀⠀⠀⠀⣀⣀⣤⣤⣤⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀                       ____ \n"
             << "   ⠸⡇⠀⠿⡀⠀⣀⡴⢿⣿⣿⣿⣿⣿⣿⣿⣷⣦⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀                       / ___`\\ \n"
             << "⠀ ⠀⠀⠑⢄⣠⠾⠁⣀⣄⡈⠙⣿⣿⣿⣿⣿⣿⣿⣿⣆⠀⠀⠀⠀⠀⠀⠀⠀            /|         ( (   \\ \\ \n"
             << "⠀⠀⠀⠀⢀⡀⠁⠀⠀⠈⠙⠛⠂⠈⣿⣿⣿⣿⣿⠿⡿⢿⣆⠀⠀⠀⠀⠀⠀⠀       |^v^v  V|        \\ \\/) ) ) \n"
             << "⠀⠀⠀⢀⡾⣁⣀⠀⠴⠂⠙⣗⡀⠀⢻⣿⣿⠭⢤⣴⣦⣤⣹⠀⠀⠀⢀⢴⣶⣆       \\  ____ /         \\_/ / / \n"
             << "⠀⠀⢀⣾⣿⣿⣿⣷⣮⣽⣾⣿⣥⣴⣿⣿⡿⢂⠔⢚⡿⢿⣿⣦⣴⣾⠁⠸⣼⡿      ,Y`    `,            / / \n"
             << "⠀⢀⡞⠁⠙⠻⠿⠟⠉⠀⠛⢹⣿⣿⣿⣿⣿⣌⢤⣼⣿⣾⣿⡟⠉⠀⠀⠀⠀⠀       ||  -  -)            { } \n"
             << "⠀⣾⣷⣶⠇⠀⠀⣤⣄⣀⡀⠈⠻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⠀⠀⠀⠀⠀⠀        \\\\   _\\ |           | | \n"
             << "⠀⠉⠈⠉⠀⠀⢦⡈⢻⣿⣿⣿⣶⣶⣶⣶⣤⣽⡹⣿⣿⣿⣿⡇⠀⠀⠀⠀⠀⠀        \\\\ / _`\\_          / / \n"
             << "⠀⠀⠀⠀⠀⠀⠀⠉⠲⣽⡻⢿⣿⣿⣿⣿⣿⣿⣷⣜⣿⣿⣿⡇⠀⠀⠀⠀⠀⠀         / |  ~ | ``\\     _|_| \n"
             << "⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿⣷⣶⣮⣭⣽⣿⣿⣿⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀      ,-`  \\    |  \\ \\  ,//(_} \n"
             << "⠀⠀⠀⠀⠀⠀⣀⣀⣈⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠇⠀⠀⠀⠀⠀⠀⠀     /      |   |   | \\/  \\| | \n"
             << "⠀⠀⠀⠀⠀⠀⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠃⠀⠀⠀⠀⠀⠀⠀⠀    |       |   |   | '   ,\\ \\ \n"
             << "⠀⠀⠀⠀⠀⠀⠀⠹⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠟⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀    |     | \\   /  /\\  _/`  | | \n"
             << "          ⠉⠛⠻⠿⠿⠿⠿⠛⠉                \\     |  | |   | ``     | | \n";

        break;
    case 11:
        // підготовка в замку Повдербота (67х15) (інтрижки всередині мммм ;) )
        // Не виправляти, на виході воно рівне.
        cout << "  ____                                                      ____  \n"
                " /----\\                  Powder Castle                     /----\\ \n"
                "[______]                                                  [______] \n"
                " |    |         _____                        _____         |    | \n"
                " |[]  |        [     ]                      [     ]        |  []| \n"
                " |    |       [_______][ ][ ][ ][][ ][ ][ ][_______]       |    | \n"
                " |    [ ][ ][ ]|     |  ,----------------,  |     |[ ][ ][ ]    | \n"
                " |             |     |/'    ____..____    '\\|     |             | \n"
                "  \\  []        |     |    /'    ||    '\\    |     |        []  / \n"
                "   |      []   |     |   |o     ||     o|   |     |  []       | \n"
                "   |           |  _  |   |     _||_     |   |  _  |           | \n"
                "   |   []      | (_) |   |    (_||_)    |   | (_) |       []  | \n"
                "   |           |     |   |     (||)     |   |     |           | \n"
                " /''           |     |   |o     ||     o|   |     |           ''\\ \n"
                "[_____________[_______]--'------''------'--[_______]_____________] \n";
        break;
    case 12:
        //Пітун і Повдербот домовляються (79х15)
        // Не виправляти, на виході воно рівне.
        cout << "⣿⣿⣿⣵⣿⣿⣿⠿⡟⣛⣧⣿⣯⣿⣝⡻⢿⣿⣿⣿⣿⣿⣿⣿                                              ____ \n"
                "⣿⣿⣿⣿⣿⠋⠁⣴⣶⣿⣿⣿⣿⣿⣿⣿⣦⣍⢿⣿⣿⣿⣿⣿                                             / ___`\\ \n"
                "⣿⣿⣿⣿⢷⠄⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣏⢼⣿⣿⣿⣿                                 /|         ( (   \\ \\\n"
                "⢹⣿⣿⢻⠎⠔⣛⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡏⣿⣿⣿⣿                            |^v^v  V|        \\ \\/) ) )\n"
                "⢸⣿⣿⠇⡶⠄⣿⣿⠿⠟⡛⠛⠻⣿⡿⠿⠿⣿⣗⢣⣿⣿⣿⣿                           \\  ____ /         \\_/ / /\n"
                "⠐⣿⣿⡿⣷⣾⣿⣿⣿⣾⣶⣶⣶⣿⣁⣔⣤⣀⣼⢲⣿⣿⣿⣿                           ,Y`    `,            / / \n"
                "⠄⣿⣿⣿⣿⣾⣟⣿⣿⣿⣿⣿⣿⣿⡿⣿⣿⣿⢟⣾⣿⣿⣿⣿                           ||  -  -)            { } \n"
                "⠄⣟⣿⣿⣿⡷⣿⣿⣿⣿⣿⣮⣽⠛⢻⣽⣿⡇⣾⣿⣿⣿⣿⣿                            \\\\   _\\ |           | |\n"
                "⠄⢻⣿⣿⣿⡷⠻⢻⡻⣯⣝⢿⣟⣛⣛⣛⠝⢻⣿⣿⣿⣿⣿⣿                            \\\\ / _`\\_          / / \n"
                "⠄⠸⣿⣿⡟⣹⣦⠄⠋⠻⢿⣶⣶⣶⡾⠃⡂⢾⣿⣿⣿⣿⣿⣿ ___________________        / |  ~ | ``\\     _|_|\n"
                "⠄⠄⠟⠋⠄⢻⣿⣧⣲⡀⡀⠄⠉⠱⣠⣾⡇⠄⠉⠛⢿⣿⣿⣿ (. . . . . . . . .)      ,-`  \\    |  \\ \\  ,//(_}\n"
                "⠄⠄⠄⠄⠄⠈⣿⣿⣿⣷⣿⣿⢾⣾⣿⣿⣇⠄⠄⠄⠄⠄⠉⠉ \\  /_/     \\_\\  /     /      |   |   | \\/  \\| |\n"
                "⠄⠄⠄⠄⠄⠄⠸⣿⣿⠟⠃⠄⠄⢈⣻⣿⣿⠄⠄⠄⠄⠄⠄⠄  ||           ||     |       |   |   | '   ,\\ \\ \n"
                "⠄⠄⠄⠄⠄⠄⠄⢿⣿⣾⣷⡄⠄⢾⣿⣿⣿⡄⠄⠄⠄⠄⠄⠄  )|           |(     |     | \\   /  /\\  _/`  | |\n"
                "⠄⠄⠄⠄⠄⠄⠄⠸⣿⣿⣿⠃⠄⠈⢿⣿⣿⠄⠄⠄⠄⠄⠄⠄  (_/           \\_)  \\     |  | |   | ``     | | \n";
        break;
    case 13:
        //Пітун підстрелює Повдербота(77x15)
        // Не виправляти, на виході воно рівне.
        cout << "⣿⣿⣿⣵⣿⣿⣿⠿⡟⣛⣧⣿⣯⣿⣝⡻⢿⣿⣿⣿⣿⣿⣿⣿                        |^v^v  V|          \n"
                "⣿⣿⣿⣿⣿⠋⠁⣴⣶⣿⣿⣿⣿⣿⣿⣿⣦⣍⢿⣿⣿⣿⣿⣿                       \\  ____ /      \n"
                "⣿⣿⣿⣿⢷⠄⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣏⢼⣿⣿⣿⣿                       ,Y`    `,      \n"
                "⢹⣿⣿⢻⠎⠔⣛⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡏⣿⣿⣿⣿                       ||  -  -)      \n"
                "⢸⣿⣿⠇⡶⠄⣿⣿⠿⠟⡛⠛⠻⣿⡿⠿⠿⣿⣗⢣⣿⣿⣿⣿                        \\\\   _\\ |   \n"
                "⠐⣿⣿⡿⣷⣾⣿⣿⣿⣾⣶⣶⣶⣿⣁⣔⣤⣀⣼⢲⣿⣿⣿⣿                        \\\\ / _`\\_    \n"
                "⠄⣿⣿⣿⣿⣾⣟⣿⣿⣿⣿⣿⣿⣿⡿⣿⣿⣿⢟⣾⣿⣿⣿⣿                            #   #   #  #  \n"
                "⠄⣟⣿⣿⣿⡷⣿⣿⣿⣿⣿⣮⣽⠛⢻⣽⣿⡇⣾⣿⣿⣿⣿  __,_____                 #  #  #  #  # #       \n"
                "⠄⢻⣿⣿⣿⡷⠻⢻⡻⣯⣝⢿⣟⣛⣛⣛⠝⢻⣿⣿⣿⣿  / __.==--'                  #   #   #      #      \n"
                "⠄⠸⣿⣿⡟⣹⣦⠄⠋⠻⢿⣶⣶⣶⡾⠃⡂⢾⣿⣿⣿  /#(-___________________        / |  ~ | ``\\     _|_|\n"
                "⠄⠄⠟⠋⠄⢻⣿⣧⣲⡀⡀⠄⠉⠱⣠⣾⡇⠄⠉⠛⢿  `-'. . . . . . . . .)      ,-`  \\    |  \\ \\  ,//(_}\n"
                "⠄⠄⠄⠄⠄⠈⣿⣿⣿⣷⣿⣿⢾⣾⣿⣿⣇⠄⠄⠄⠄⠄⠉⠉ \\  /_/     \\_\\  /     /      |   |   | \\/  \\| |\n"
                "⠄⠄⠄⠄⠄⠄⠸⣿⣿⠟⠃⠄⠄⢈⣻⣿⣿⠄⠄⠄⠄⠄⠄⠄  ||           ||     |       |   |   | '   ,\\ \\ \n"
                "⠄⠄⠄⠄⠄⠄⠄⢿⣿⣾⣷⡄⠄⢾⣿⣿⣿⡄⠄⠄⠄⠄⠄⠄  )|           |(     |     | \\   /  /\\  _/`  | |\n"
                "⠄⠄⠄⠄⠄⠄⠄⠸⣿⣿⣿⠃⠄⠈⢿⣿⣿⠄⠄⠄⠄⠄⠄⠄  (_/           \\_)  \\     |  | |   | ``     | | \n";
        break;
    case 14:
        // Шрек і Повдербот заручились в церкві і живуть довго й щасливо. (78х15)
        // Не виправляти, на виході воно рівне.
        cout << "                                 _|_    \n"
                "                                  |     \n"
                "                               //(_)\\\\                              ,   ,\n"
                "                                |/^\\\\|                              /////|\n"
                "                      ,%%%%     // \\\\    ,@@@@@@@,                ///// |\n"
                "                    ,%%%%/%%%  //   \\\\ ,@@@\\@@@@/@@,             /////  |\n"
                "                @@@%%%\\%%//%%%// === \\\\ @@\\@@@/@@@@@            |~~~| | |\n"
                "               @@@@%%%%\\%%%%%// =-=-= \\\\@@@@\\@@@@@@;%#####,     |===| |/|\n"
                "               @@@@%%%\\%%/%%//   ===   \\\\@@@@@@/@@@%%%######,   | T |/| |\n"
                "               @@@@@%%%%/%%//|         |\\\\@\\\\//@@%%%%%%#/####   | O | | |\n"
                "                 @@\\\\//@||   |  __ __  |    || %%||%%'######    | M | | |\n"
                "                  '@||  ||   | |  |  | |    ||   ||##\\//####    | O |  /\n"
                "                    ||  ||   | | -|- | |    ||   ||'#||###'     | S | /       \n"
                "                    ||  ||   |_|__|__|_|    ||   ||  ||         |===|/ \n"
                "                    ||  ||_/`  =======  `\\__||_._||  ||         '---' \n";
        break;
    case 15:
        //Шрек зустрів Фіону в лісі (80х15)
        // Не виправляти, на виході воно рівне.
        cout << "      .     ⡴⠑⡄⠀⠀⠀⠀⠀⠀⣀⣀⣤⣤⣤⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀           /\\ ⠀⠀⠀⠀             .  \n"
             << "    .'o'.  ⠸⡇⠀⠿⡀⠀⣀⡴⢿⣿⣿⣿⣿⣿⣿⣿⣷⣦⡀⠀⠀⠀            /,.\\ ⠀⠀⠀⠀⠀⠀         .'o'. \n"
             << "    .o.'.    ⠀⠑⢄⣠⠾⠁⣀⣄⡈⠙⣿⣿⣿⣿⣿⣿⣿⣿⣆⠀⠀⠀⠀        ,-//||\\-. ⠀⠀⠀⠀       .o.'. \n"
             << "   .'.'o'.   ⠀⢀⡀⠁⠀⠀⠈⠙⠛⠂⠈⣿⣿⣿⣿⣿⠿⡿⢿⣆⠀⠀⠀⠀⠀   //)(_||_)(\\-. ⠀⠀       .'.'o'. \n"
             << "  o'.o.'.o.  ⢀⡾⣁⣀⠀⠴⠂⠙⣗⡀⠀⢻⣿⣿⠭⢤⣴⣦⣤⣹⠀⠀⠀    ,'`--------'`  `.       o'.o.'.o.  \n"
             << " .'.o.'.'.o.⢀⣾⣿⣿⣿⣷⣮⣽⣾⣿⣥⣴⣿⣿⡿⢂⠔⢚⡿⢿⣿⣦     /         __      \\    .'.o.'.'.o. \n"
             << ".o.'.o.'.o.'⡞⠁⠙⠻⠿⠟⠉⠀⠛⢹⣿⣿⣿⣿⣿⣌⢤⣼⣿⣾⣿⡟⠀   ;     ,--,'  `-.    ; ⠀⠀.o.'.o.'.o.' \n"
             << "⠀    |  |  ⣾⣷⣶⠇⠀⠀⣤⣄⣀⡀⠈⠻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⠀   |   ,'        __\\   `. ⠀   |  |  ⠀\n"
             << "     ...  ⠉⠈⠉⠀⠀⢦⡈⢻⣿⣿⣿⣶⣶⣶⣶⣤⣽⡹⣿⣿⣿⣿⡇⠀⠀⠀  |   : __    ,'   \\  ; ⠀⠀⠀  ...    \n"
             << "    .o.'.   ⠀⠀⠀⠀⠉⠲⣽⡻⢿⣿⣿⣿⣿⣿⣿⣷⣜⣿⣿⣿⡇⠀⠀⠀  |   :',o`)  ,o,-  ;  \\ ⠀⠀  .o.'. ⠀  \n"
             << "   .'.'o'.   ⠀⠀⠀⠀⠀⢸⣿⣿⣷⣶⣮⣭⣽⣿⣿⣿⣿⣿⣿⣿⠀⠀⠀⠀⠀ `.  :     ; :     |  ,⠀   .'.'o'.   \n"
             << "  o'.o.'.o.  ⠀⠀⠀⣀⣀⣈⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠇⠀⠀⠀⠀⠀⠀ |  |    (__,'    | ; ⠀  o'.o.'.o.   \n"
             << " .'.o.'.'.o. ⠀⠀⠀⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠃⠀⠀⠀⠀⠀⠀⠀ `.  \\  /___,-'  ,-'  .'.o.'.'.o.  \n"
             << ".o.'.o.'.o.'.⠀⠀⠀⠀⠹⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠟⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀  `--\\ ,"
                ""
                ") ,'         .o.'.o.'.o.'.\n"
             << "    |  |            ⠉⠛⠻⠿⠿⠿⠿⠛⠉                  ) -"
                "'-'(           |  |    \n";

        break;
    case 16:
        //Армія пітуна підступає до лісу Фіони(79x15)
        // Не виправляти, на виході воно рівне.
        cout << "                                 _ ._  _ , _ ._                (\\__/) \n"
                "                  /)-._        (_ ' ( `  )_  .__)              (=o.o=) \n"
                "                 Y. ' _]      ( (  (    )   `)  ) _)      E[:]|||||[:]З \n"
                "        ,.._   |`--'=        (__ (_   (_ . _) _) ,__)          (')_(') \n"
                "         /    '-/   \\         `~~`\\ ' . /`~~`                   \n"
                "/)      |   |_     `\\|___          ;   ;                             (\\_/) \n"
                "\\:::::::\\___/_\\__\\_______\\         /   \\                             (o_o ) \n"
                "        {>==╦╦=ʖ>                _/_ __ \\_               C=======/'''''''''\\ \n"
                "      (you and Fiona)     (_ ' ( `  )_  .__)       /'''''''''''''''''''''''\\ \n"
                "          /)-._         ( (  (    )   `)  ) _)     \\_@_@_@_@_@_@_@_@_@_@_@_/ \n"
                "         Y. ' _]       (__ (_   (_ . _) _) ,__)                               \n"
                "  ,.._   |`--'=            `~~`\\ ' . /`~~`               (\\__/)              \n"
                " /    '-/   \\    {>==╦╦=ʖ>       ;   ;                    (=o.o=)          \n"
                "|   |_     `\\|___                /   \\              E[:]|||||[:]З        \n"
                "\\___/_\\__\\_______\\  {>==╦╦=ʖ>  _/_ __ \\_                  (')_(')        \n";
        break;
    case 17:
        //Шрек підстрелив пітуна, але поранився(72x15)
        //Не виправляти, на виході воно рівне(тут упороте але норм).
        cout << "          ⣿⣿⣿⣵⣿⣿⣿⠿⡟⣛⣧⣿⣯⣿⣝⡻⢿⣿⣿⣿⣿⣿⣿⣿    |    ⡴⠑⡄⠀⠀⠀⠀⠀⠀⣀⣀⣤⣤⣤⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀   \n"
                "          ⣿⣿⣿⣿⣿⠋⠁⣴⣶⣿⣿⣿⣿⣿⣿⣿⣦⣍⢿⣿⣿⣿⣿⣿    |   ⠸⡇⠀⠿⡀⠀⣀⡴⢿⣿⣿⣿⣿⣿⣿⣿⣷⣦⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀  \n"
                "          ⣿⣿⣿⣿⢷⠄⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣏⢼⣿⣿⣿⣿    |⠀ ⠀⠀⠑⢄⣠⠾    ⠙⣿⣿⣿⣿⣿⣿⣿⣿⣆⠀⠀⠀⠀⠀⠀⠀⠀   \n"
                "          ⢹⣿⣿⢻⠎⠔⣛⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡏⣿⣿⣿⣿    |⠀⠀⠀⠀⢀⡀⠁⠀    ⠂⠈⣿⣿⣿⣿⣿⠿⡿⢿⣆⠀⠀⠀⠀⠀⠀⠀    \n"
                "          ⢸⣿⣿⠇⡶⠄⣿⣿⠿⠟⡛⠛⠻⣿⡿⠿⠿⣿⣗⢣⣿⣿⣿⣿    |⠀⠀⠀⢀⡾⣁⣀       ⠀⢻⣿⣿⠭⢤⣴⣦⣤⣹⠀⠀⠀⢀⢴⣶⣆   \n"
                "         ⠐⣿⣿⡿⣷⣾⣿⣿⣿⣾⣶⣶⣶⣿⣁'.  \\ | /  ⣿  |⠀⠀⢀⣾⣿⣿⣿⣷⣮⣽⣾⣿⣥⣴⣿⣿⡿⢂⠔⢚⡿⢿⣿⣦⣴⣾⠁⠸⣼⡿  \n"
                "         ⠄⣿⣿⣿⣿⣾⣟⣿⣿⣿⣿⣿⣿⣿ `.boom','⣿⣿   |⠀⢀⡞⠁⠙⠻⠿⠟⠉⠀⠛⢹⣿⣿⣿⣿⣿⣌⢤⣼⣿⣾⣿⡟⠉⠀⠀⠀⠀⠀   \n"
                "         ⠄⣟⣿⣿⣿⡷⣿⣿⣿⣿⣿⣮⣽( .`.|,' .)⣿⣿⣿  |⠀⣾⣷⣶⠇⠀⠀⣤⣄⣀⡀⠈⠻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⠀⠀⠀⠀⠀⠀   \n"
                "         ⠄⢻','|'.` )⡻⣯- ~ -0- ~ -⣿⣿   |⠀⠉⠈⠉⠀⠀⢦⡈⢻⣿⣿⣿⣶⣶⣶⣶⣤⣽ '.\\|/.'⠀⠀⠀⠀⠀⠀   \n"
                "           .' .'. '.⠋⠻⢿⣶⣶⣶⡾⠃⡂⢾⣿⣿⣿⣿⣿⣿  |⠀⠀⠀⠀⠀⠀⠀⠉⠲⣽⡻⢿⣿⣿⣿⣿⣿⣿⣷ (\\   /)⠀⠀⠀⠀⠀⠀    \n"
                "         ,'  / | \\  '.⡀⡀⠄⠉⠱⣠⣾⡇⠄⠉⠛⢿⣿⣿  <O><{>==╦╦=ʖ|⢸⣿⣿⣷⣶⣮⣭⣽⣿ - -O- -⠀⠀⠀⠀⠀    \n"
                "          \\ ' boom  ⣿⣷⣿⣿⢾⣾⣿⣿⣇⠄⠄⠄⠄⠄⠉⠉  <O><{>==╦╦=ʖ|⣿⣿⣿⣿⣿⣿⣿⣿⣿(/   \\)⠀⠀⠀⠀⠀⠀⠀    \n"
                "          ` . `.' ,'⣿⠟⠃⠄⠄⢈⣻⣿⣿⠄⠄⠄⠄⠄⠄⠄  <O><{>==╦╦=ʖ| ⣿⣿⣿⣿⣿⣿⣿⣿⣿,'/|\\ '.⠀⠀⠀⠀⠀⠀    \n"
                "         . `` ,'. ' ⣿⣾⣷⡄⠄⢾⣿⣿⣿⡄⠄⠄⠄⠄⠄⠄  |⠀⠀⠀⠀⠀⠀⠀⠹⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠟⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀    \n"
                "         ~ (   ~ -  ⣿⣿⣿⠃⠄⠈⢿⣿⣿⠄⠄⠄⠄⠄⠄⠄  |          ⠉⠛⠻⠿⠿⠿⠿⠛⠉\n";
        break;
    case 18:
        //Привиди Фіони літають по лісу(66x15)
        //Не виправляти, на виході воно рівне.
        cout << "⠀.-.⠀⠀⠀⠀⠀⠀⢀⠀⠀⠀⠀⠀⠀⠀    .-. boo!⢀⠀⠀⠀⠀(o o)      ⣼⣿⡿⣿⣦⡀ \n"
                "(o o) boo!⣰⣿⣄⠀⠀⠀⠀⠀⠀⠀⠀( ' )   ⣰⣿⣄⠀⠀⠀| O \\ boo!⠐⢛⣿⡛⠁⣀⠉⠻⠦ \n"
                "| O \\⠀⠀⢀⣼⣿⡿⣿⣦⡀⠀⠀ /\\_.' '._/\\ ⣿⡿⣿⣦⡀⠀⠀\\   \\  ⣼⣿⣿⣿⣿⣼⣿⣧⠙⢷⣿⣷⣄ \n"
                "\\   \\⠀⠐⢛⣿⡛⠁⣀⠉⠻⠦⠀⠀|         | ⡛⠁⣀⠉⠻⠦⠀`~~~' ⣠⣾⣿⣿⣿⣿⣿⣿⣿⣿⣀⡀⠙⠉⠀⠀ \n"
                "⠀`~~~'⣠⣿⣿⣧⣰⣿⢿⣶⣤⠀⠀ \\       / ⣧⣰⣿⢿⣶⣤⠀⠀⠀⠀⠀⢀⠴⢿⣿⣿⣿⠿⠟⠻⢿⣿⣿⢿⣿⡶⠛⠷⠆\n"
                "⠀⠀⠀⠀⠀⣽⣿⣿⣿⡿⠃⡀⠛⠉⠃  ⠀\\    / ⣿⣿⣿⡿⠃⡀⠛⠉⠃⠀⠀⢀⣾⣿⣿⣿⢀⣴⣶⣤⡈⠛⠀⣄⡉⠀⢰⡄⠀⠀⠀ \n"
                "⠀⠀⠀⠀⢾⣿⣿⣿⣇⠀⣼⣿⣆⠀⣀ (__)  / ⣿⣿⣿⣇⠀⣼⣿⣆⠀⣀⠀⠀⠀⢠⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣤⣿⣿⣿⣶⣿⡄ \n"
                "⠀⠀⠀⢀⣼⣿⣿⣿⣿⣼⣿⣧⠙⢷⣿ `.__.' ⣿⣿⣿⣿⣼⣿⣧⠙⢷⣿⣷⣄⠀⠉⠉⠀⠀⠿⠿⠛⠋⣿⣿⡟⠿⡿⠉⠛⠿⠿⠛⠋ \n"
                "⠀⠀⣠⣾⣿⣿⣿⣿⣿⣿⣿⣿⣀⡀⠙⠉⠀   ⣠⣾⣿⣿⣿⣿⣿⣿⣿⣿⣀⡀⠙⠉⠀⠀⠀        ⢀⣿⣿⡇⠀⠀⠀⠀⠀⠀ \n"
                "⠀⠴⢿⣿⣿⣿⠿⠟⠻⢿⣿⣿⢿⣿⡶⠛  ⠷⣿⣿⣿⠿⠟⠻⢿⣿⣿⢿⣿⡶⠛⠷⠆⠀⠀⠀⠀⠀⠀⠀  ⠘⠛⠛⠓ \n"
                "⠀⢀⣾⣿⣿⣿⢀⣴⣶⣤⡈⠛⠀⣄⡉⠀    ⢰⣿⣿⣿⢀⣴⣶⣤⡈⠛⠀⣄⡉⠀⢰⡄⠀⠀⠀⠀⠀⠀   \\`-,      ,     =-⠀ \n"
                "⢠⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣤⣿⣿    ⣿⣶⣿⣿⣿⣿⣿⣿⣿⣿⣷⣤⣿⣿⣿⣶⣿⡄⠀⠀⠀.-._/   \\_____)\\⠀⠀⠀ \n"
                "⠉⠉⠀⠀⠿⠿⠛⠋⣿⣿⡟⠿⡿⠉⠛  ⠿⠿⠉⠉⠿⠿⠛⠋⣿⣿⡟⠿⡿⠉⠛⠿⠿⠛⠋⠀⠀('              / =-⠀⠀ \n"
                "⠀⠀⠀⠀⠀⠀⠀⢀⣿⣿⡇⠀⢀            ⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀  '-;   ,_____.-'       =-⠀ \n"
                "⠀⠀⠀⠀⠀⠀⠀⠘⠛⠛⠓⠀           ⠀⠘⠛⠛⠓⠀⠀     boo!   /__.'               \n";
        break;
    case 19:
        //сцена 19 ДРГ Шрека заняло позиції (80х15)
        //Не виправляти, на виході воно рівне.
        cout << "    /\\_____/\\                  /~~   ~~\\       /\\_____/\\          /~~   ~~\\ \n"
                "   /  o   o  \\              /~~         ~~\\   /  o   o  \\      /~~         ~~\\ \n"
                "  ( ==  ^  == )   __,_____ {               } ( ==  ^  == )    {               } \n"
                "   )         (   / __.==--' \\  _-     -_  /   )    __,_____    \\  _-     -_  / \n"
                "  (           ) /#(-'       _- -  | | _- _   (    / __.==--'   _- -  | | _- _ \n"
                " ( (  )   (  ) )`-'          _ -  | |   -_  ( (  /#(-'  ) )     _ -  | |   -_ \n"
                "(__(__)___(__)__)                // \\\\     (__(__`-'_(__)__)        // \\\\ \n"
                "                                                                            \n"
                "    /\\_____/\\                  /~~   ~~\\       /\\_____/\\        /~~   ~~\\ \n"
                "   /  o   o  \\              /~~         ~~\\   /  o   o  \\     /~~         ~~\\ \n"
                "  ( ==  ^  == )   __,_____ {               } ( ==  ^  == )   {               } \n"
                "   )         (   / __.==--' \\  _-     -_  /   )    __,_____   \\  _-     -_  / \n"
                "  (           ) /#(-'       _- -  | | _- _   (    / __.==--'  _- -  | | _- _ \n"
                " ( (  )   (  ) )`-'          _ -  | |   -_  ( (  /#(-'  ) )    _ -  | |   -_ \n"
                "(__(__)___(__)__)                // \\\\     (__(__`-'_(__)__)       // \\\\     \n";

        break;
    case 20:
        //Шрек сидить в засідці на пітуна (75х15)
        //Не виправляти, на виході воно рівне.
        cout << "    ⡴⠑⡄⠀⠀⠀⠀⠀⠀⣀⣀⣤⣤⣤   /~~   ~~\\          /~~   ~~\\     ⠿⡟⣛⣧⣿⣯⣿⣝⡻⢿⣿⣿⣿⣿⣿⣿⣿ \n"
                "   ⠸⡇⠀⠿⡀⠀⣀⡴⢿⣿⣿⣿⣿⣿ /~~#########~~\\   /~~#########~~\\  ⣴⣶⣿⣿⣿⣿⣿⣿⣿⣦⣍⢿⣿⣿⣿⣿⣿ \n"
                "⠀ ⠀⠀⠑⢄⣠⠾⠁⣀⣄⡈⠙⣿⣿⣿⣿{##############}  {##############} ⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣏⢼⣿⣿⣿⣿ \n"
                "⠀⠀⠀⠀⢀⡀⠁⠀⠀⠈⠙⠛⠂⠈⣿⣿⣿ \\ ########## /    \\  #########  / ⣛⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡏⣿⣿⣿⣿ \n"
                " ⠀⠀⢀⡾⣁⣀⠀⠴⠂⠙⣗⡀⠀⢻⣿⣿_- -  | | _- _     _- -  | | _- _  ⣿⣿⠿⠟⡛⠛⠻⣿⡿⠿⠿⣿⣗⢣⣿⣿⣿⣿ \n"
                "⠀⠀⢀⣾⣿⣿⣿⣷⣮⣽⣾⣿⣥⣴⣿⣿  _ -  | |   -_      _ -  | |   -_  ⣿⣿⣿⣾⣶⣶⣶⣿⣁⣔⣤⣀⣼⢲⣿⣿⣿⣿ \n"
                "⠀⢀⡞⠁⠙⠻⠿⠟⠉⠀⠛⢹⣿⣿⣿⣿      // \\\\              // \\\\      ⣟⣿⣿⣿⣿⣿⣿⣿⡿⣿⣿⣿⢟⣾⣿⣿⣿⣿ \n"
                "⠀⣾⣷⣶⠇⠀⠀⣤⣄⣀⡀⠈⠻⣿⣿⣿                                    ⣿⣿⣿⣿⣿⣮⣽⠛⢻⣽⣿⡇⣾⣿⣿⣿⣿⣿ \n"
                "⠀⠉⠈⠉⠀⠀⢦⡈⢻⣿⣿⣿⣶⣶⣶⣶    /~~   ~~\\          /~~   ~~\\    ⠻⢻⡻⣯⣝⢿⣟⣛⣛⣛⠝⢻⣿⣿⣿     \n"
                "⠀⠀⠀⠀⠀⠀⠀⠉⠲⣽⡻⢿⣿⣿⣿⣿⣿ /~~#########~~\\    /~~#########~~\\ ⣦⠄⠋⠻⢿⣶⣶⣶⡾⠃⡂⢾⣿⣿  _,-, \n"
                "⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿⣷⣶⣮⣭⣽⣿{##############}   {##############} ⣿⣧⣲⡀⡀⠄⠉⠱⣠⣾⡇⠄⠉⠛ T_  | \n"
                "⠀⠀⠀⠀⠀⠀⣀⣀⣈⣿⣿⣿⣿⣿⣿⣿⣿ \\  #########  /    \\  #########  / ⣿⣿⣿⣷⣿⣿⢾⣾⣿⣿⣇⠄⠄⠄ ||`-' \n"
                "⠀⠀⠀⠀⠀⠀⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿ _- -  | | _- _     _- -  | | _- _  ⠸⣿⣿⠟⠃⠄⠄⢈⣻⣿⣿⠄⠄⠄ ||  \n"
                "⠀⠀⠀⠀⠀⠀⠀⠹⣿⣿⣿⣿⣿⣿⣿⣿⣿  _ -  | |   -_      _ -  | |   -_  ⠄⢿⣿⣾⣷⡄⠄⢾⣿⣿⣿⡄⠄⠄ ||  \n"
                "          ⠉⠛⠻⠿⠿⠿⠿      // \\\\              // \\\\      ⠄⠸⣿⣿⣿⠃⠄⠈⢿⣿⣿⠄⠄⠄ ~~  \n";
        break;
    case 21:
        //Шрек ріже косою пітуна(68x12)
        //Не виправляти, на виході воно рівне.
        cout << "                    ;::::;                    /   ___ OOOO\\   \n"
                "                   ;::::; :;                 /   /    OOOOO\\    \n"
                "                 ;:::::'   :;               /   /      OOOOOOOO   \n"
                "                ;:::::;     ;.             /  /⡟⣛⣧⣿⣯⣿⣝⡻OOOOOOOO \n"
                "              ,:::::'  0  0 ;             /  /⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿OOOOOOO \n"
                "               ::::::;    3  ;           /  /⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿DOOOOOO \n"
                "               ;:::::;  \\__   ;         /  /⠇⡶⠄⣿⣿⠿⠟⡛⠛⠻⣿⡿⠿⠿⣿⣗⢣DOOOO \n"
                "              ,;::::::;     ;'         /  /⡿⣷⣾⣿⣿⣿⣾⣶⣶⣶⣿⣁⣔⣤⣀⣼⢲ DOOOO \n"
                "            ;:::::::::`. ,,,;.        /  /⣾⣟⣿⣿⣿⣿⣿⣿⣿⡿⣿⣿⣿⢟⣾     DOOO  \n"
                "          .';:::::::::::::::::;,     /  /  ⣾⣟⣿⣿⣿⣿⣿⣿⣮⣽⠛⢻⣽⣿⢟⣾    DOOO \n"
                "         ,::::::;::::::;;;;::::;,   /  /    ⡷⣿⣿⣿⣿⣿⣮⣽⠛⢻⣽⣿⡇⣾      DOOO \n"
                "        ;`::::::`'::::::;;;::::: ,#/  /   ⣿⡟⣹⣦⠄⠋⠻⢿⣶⣶⣶⡾⠃⡂⢾     DOOO  \n"
                "        :`:::::::`;::::::;;::: ;::#  /  ⠟⠋⠄⢻⣿⣧⣲⡀⡀⠄⠉⠱⣠⣾⡇⠄⠉⠛   DOOO   \n"
                "        ::`:::::::`;:::::::: ;::::# /    ⠄⠄⠄⠄⢿⣿⣾⣷⡄⠄⢾⣿⣿⣿⡄⠄     DOO    \n"
                "        `:`:::::::`;:::::: ;::::::#/     ⠄⠄⠄⠸⣿⣿⣿⠃⠄⠈⢿⣿⣿⠄⠄⠄    DOOO    \n";
        break;
    case 22:
        // Фіналочка - Шрек отримав нагороду (80x15)
        //Не виправляти, на виході воно рівне.
        cout << "  ^~^  , ⡴⠑⡄⠀⠀⠀⠀⠀⠀⣀⣀⣤⣤⣤⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀_______________  \n"
             << " ('Y') ) ⡇⠀⠿⡀⠀⣀⡴⢿⣿⣿⣿⣿⣿⣿⣿⣷⣦⡀⠀⠀⠀⠀⠀⠀|@@@@|     |####|⠀  \n"
             << " /   \\/  ⠑⢄⣠⠾⠁⣀⣄⡈⠙⣿⣿⣿⣿⣿⣿⣿⣿⣆⠀⠀⠀⠀⠀ |@@@@|     |####|     .--.  .-'     '-.  .--. \n"
             << "(\\|||/)      ⠁⠈⠙⠛⠂⠈⣿⣿⣿⣿⣿⠿⡿⢿⣆⠀⠀⠀⠀⠀|@@@@|     |####|    / .. \\/  .-. .-.  \\/ .. \\ \n"
             << "⠀     ⠀ ⠴     ⠂⠙⣗⡀⠀⢻⣿⣿⠭⢤⣴⣦⣤⣹⠀⠀   \\@@@@|     |####/   | |  '|  /   Y   \\  |'  | |\n"
             << " ^~^  ,  ⢀⣾⣿⣿⣿⣷⣮⣽⣾⣿⣥⣴⣿⣿⡿⢂⠔⢚⡿      \\@@@|     |###/    | \\   \\  \\ 0 | 0 /  /   / |\n"
             << "('Y') )  ⢀⡞⠁⠙⠻⠿⠟⠉⠀⠛⢹⣿⣿⣿⣿⣿⣌⢤⣼       `@@|_____|##'⠀⠀   \\ '- ,\\.-' *  * '-./, -' /\n"
             << " /   \\  ⣾⣷⣶⠇⠀⠀⣤⣄⣀⡀⠈⠻⣿⣿⣿⣿⣿⣿⣿⣿   ⠀    .-'''''-.⠀⠀      `'-' /_   ^ ^   _\\ '-'`\n"
             << "(\\|||/⠀   ⢦⡈⢻⣿⣿⣿⣶⣶⣶⣶⣤⣽⡹⣿⣿⣿⣿⡇⠀⠀⠀⠀ ⠀.'  * * *  `.          |  \\._   _./  |\n"
             << "⠀⠀⠀⠀⠀⠀ ⠀⠉⠲⣽⡻⢿⣿⣿⣿⣿⣿⣿⣷⣜⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀  :  *       *  :          \\   \\ `~` /   / \n"
             << "⠀⠀⠀⠀⠀⠀⠀⠀  ⢸⣿⣿⣷⣶⣮⣭⣽⣿⣿⣿⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀ : ~   F O R   ~ :          '._ '-=-' _.'\n"
             << " ^~^  ,⠀ ⣀⣀⣈⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠇⠀⠀⠀⠀⠀⠀: ~ H O N O R ~ :             '~---~' \n"
             << "('Y') )⠀ ⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠃⠀⠀⠀⠀⠀⠀⠀ :  *       *  :  \n"
             << "/   \\/⠀⠀⠀⠹⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠟⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀  `.  * * *  .'              Mr. President\n"
             << "(\\|||/)     ⠉⠛⠻⠿⠿⠿⠿⠛⠉                `-.....-' \n";
        break;
    default:
        cout << "Unexpected error";
        break;
    }
}