/* думаю тут буде функція  printscene(int x), 
де чисто на вхід буде номер сцени а на вихід - 
друк аскіі картинки зліпленої з тої дичини,
що ми її сюди покладемо. */
#include <iostream>
using namespace std;


void printscene(int x){
    switch (x){
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
                "░░░░░░░░░░░░▓▓▓▓██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓░░░░░░░░░ ⢀⡾⣁⣀⠀⠴⠂⠙⣗⡀⠀⢻⣿⣿⠭⢤⣴⣦⣤⣹⠀⠀⠀⢀⢴⣶⣆████\n"//+
                "░░░░░░░░░░░░░░░░██░░██░░░░░░░░░░░░░░░░░░  ⢀⣾⣿⣿⣿⣷⣮⣽⣾⣿⣥⣴⣿⣿⡿⢂⠔⢚⡿⢿⣿⣦⣴⣾⠁⠸⣼⡿ ████\n"
                "▒▒▒▒▒▒░░░░░░░░░░██████░░░░░░░░░░░░░░░  ⢀⡞⠁⠙⠻⠿⠟⠉⠀⠛⢹⣿⣿⣿⣿⣿⣌⢤⣼⣿⣾⣿⡟⠉        ████▓▓\n"
                "▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██████░░░░░░▒▒▒▒▒▒▒▒░░░ ⣾⣷⣶⠇⠀⠀⣤⣄⣀⡀⠈⠻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇  ░▓▓▓▓████▓▓▓\n" 
                "▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒████▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒  ⠉⠈⢦⡈⢻⣿⣿⣿⣶⣶⣶⣶⣤⣽⡹⣿⣿⣿⣿⡇ ▓▓▓▓▓▓▓▓██▓▓▓\n"
                "▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒████▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ⠀⠉⠲⣽⡻⢿⣿⣿⣿⣿⣿⣿⣷⣜⣿⣿⣿⡇  ▓▓▓▓██▓▓██▓▓▓\n"
                "▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒████▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ⢸⣿⣿⣷⣶⣮⣭⣽⣿⣿⣿⣿⣿⣿⣿   ▓▓▓▓▓▓▓▓▓▓▓▓▓\n"
                "▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒████▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ⣀⣀⣈⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠇  ▒▒▒▒▒▒▒▒▒▒▒▒▒▒\n";
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
        cout<<"    ⡴⠑⡄⠀⠀⠀⠀⠀⠀⣀⣀⣤⣤⣤⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀                   ⢀⣀⣤⣴⣶⣾⣆ \n" 
            <<"   ⠸⡇⠀⠿⡀⠀⣀⡴⢿⣿⣿⣿⣿⣿⣿⣿⣷⣦⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀             ⣤⣤⣤⠄⢤⣴⣶⣿⣿⣿⢟⣿⣿⣿\n"
            <<"⠀ ⠀⠀⠑⢄⣠⠾⠁⣀⣄⡈⠙⣿⣿⣿⣿⣿⣿⣿⣿⣆⠀⠀⠀⠀⠀⠀⠀⠀         ⣠⣤⡾⢏⢠⣶⣶⣾⡑⡀⢸⠋⠁⠄⢠⣾⣿⣿⣿\n"
            <<"⠀⠀⠀⠀⢀⡀⠁⠀⠀⠈⠙⠛⠂⠈⣿⣿⣿⣿⣿⠿⡿⢿⣆⠀⠀⠀⠀⠀⠀⠀    ⢀⣠⣶⣿⣿⣿⠟⠁⠁⠰⣋⢫⢲⡇⠛⠄⠄⢀⣠⣤⣉⠻⠿⠿ \n"
            <<"⠀⠀⠀⢀⡾⣁⣀⠀⠴⠂⠙⣗⡀⠀⢻⣿⣿⠭⢤⣴⣦⣤⣹⠀⠀⠀⢀⢴⣶⣆  ⢰⣿⣿⣟⣋⣉⣁⠄⠄⠄⠄⠻⣆⣂⡕⠼⠂⠉⣿⣿⡇⢏⠉⠉⠁ \n"
            <<"⠀⠀⢀⣾⣿⣿⣿⣷⣮⣽⣾⣿⣥⣴⣿⣿⡿⢂⠔⢚⡿⢿⣿⣦⣴⣾⠁⠸⣼⡿  ⠙⢿⣿⣿⣿⣿⠃⢸⢋⡁⢊⠒⣲⡶⠊⢁⣴⣿⣿⣿⣦⣦\n"
            <<"⠀⢀⡞⠁⠙⠻⠿⠟⠉⠀⠛⢹⣿⣿⣿⣿⣿⣌⢤⣼⣿⣾⣿⡟⠉⠀⠀⠀⠀⠀     ⠙⠻⣿⡟⠄⡆⢸⣧⣾⣶⣤⣤⣾⡿⣿⣿⠿⡻⣻⣿⠁  \n"
            <<"⠀⣾⣷⣶⠇⠀⠀⣤⣄⣀⡀⠈⠻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⠀⠀⠀⠀⠀⠀            ⠘⠠⣾⣿⣿⡿⠿⠿⣥⣾⣿⠿⣛⠅⢰⣗\n"
            <<"⠀⠉⠈⠉⠀⠀⢦⡈⢻⣿⣿⣿⣶⣶⣶⣶⣤⣽⡹⣿⣿⣿⣿⡇⠀⠀⠀⠀⠀⠀               ⠸⣶⣶⣿⣟⣛⣛⣛⠲⠿⣵⣿⣟⢅\n"
            <<"⠀⠀⠀⠀⠀⠀⠀⠉⠲⣽⡻⢿⣿⣿⣿⣿⣿⣿⣷⣜⣿⣿⣿⡇⠀⠀⠀⠀⠀⠀                 ⢹⡟⠋⣠⣤⣤⣤⣍⡑⠂⠬⢉⣾\n"
            <<"⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿⣷⣶⣮⣭⣽⣿⣿⣿⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀                 ⢠⠁⣿Prytula⠿⠿⠷⢶⡄\n"
            <<"⠀⠀⠀⠀⠀⠀⣀⣀⣈⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠇⠀⠀⠀⠀⠀⠀⠀                 ⠄⢉⣁⣀⣤⣤⣤⣤⣤⣤⣤ \n"
            <<"⠀⠀⠀⠀⠀⠀⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠃⠀⠀⠀⠀⠀⠀⠀⠀                ⣀⠈⠙⠿⣿⣿⣿⣿⡍⠟⢁⣠⣤⣶⣶⣤⣄⡀\n"
            <<"⠀⠀⠀⠀⠀⠀⠀⠹⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠟⠁⠀⠀⠀You⠀⠀⠀⠀              ⢀⣾⣿⣿⣷⣦⣀⠉⠿⣿⡇⠄⣾⣿⣿⣿⣿⣿⣿⣿⣶⡀\n" 
            <<"          ⠉⠛⠻⠿⠿⠿⠿⠛⠉                          ⢠⣾⣿⣿⣿⣿⣿⣿⣷⡄⠹⠇⢰⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿\n";
        break;
    case 9:
    //Шрек і Повдербот домовляються (66х15)
    // Не виправляти, на виході воно рівне.
        cout<<"    ⡴⠑⡄⠀⠀⠀⠀⠀⠀⣀⣀⣤⣤⣤⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀                       ____ \n" 
            <<"   ⠸⡇⠀⠿⡀⠀⣀⡴⢿⣿⣿⣿⣿⣿⣿⣿⣷⣦⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀                       / ___`\\ \n"
            <<"⠀ ⠀⠀⠑⢄⣠⠾⠁⣀⣄⡈⠙⣿⣿⣿⣿⣿⣿⣿⣿⣆⠀⠀⠀⠀⠀⠀⠀⠀            /|         ( (   \\ \\ \n"
            <<"⠀⠀⠀⠀⢀⡀⠁⠀⠀⠈⠙⠛⠂⠈⣿⣿⣿⣿⣿⠿⡿⢿⣆⠀⠀⠀⠀⠀⠀⠀       |^v^v  V|        \\ \\/) ) ) \n"
            <<"⠀⠀⠀⢀⡾⣁⣀⠀⠴⠂⠙⣗⡀⠀⢻⣿⣿⠭⢤⣴⣦⣤⣹⠀⠀⠀⢀⢴⣶⣆       \\  ____ /         \\_/ / / \n"
            <<"⠀⠀⢀⣾⣿⣿⣿⣷⣮⣽⣾⣿⣥⣴⣿⣿⡿⢂⠔⢚⡿⢿⣿⣦⣴⣾⠁⠸⣼⡿      ,Y`    `,            / / \n"
            <<"⠀⢀⡞⠁⠙⠻⠿⠟⠉⠀⠛⢹⣿⣿⣿⣿⣿⣌⢤⣼⣿⣾⣿⡟⠉⠀⠀⠀⠀⠀       ||  -  -)            { } \n"
            <<"⠀⣾⣷⣶⠇⠀⠀⣤⣄⣀⡀⠈⠻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⠀⠀⠀⠀⠀⠀        \\\\   _\\ |           | | \n"
            <<"⠀⠉⠈⠉⠀⠀⢦⡈⢻⣿⣿⣿⣶⣶⣶⣶⣤⣽⡹⣿⣿⣿⣿⡇⠀⠀⠀⠀⠀⠀        \\\\ / _`\\_          / / \n"
            <<"⠀⠀⠀⠀⠀⠀⠀⠉⠲⣽⡻⢿⣿⣿⣿⣿⣿⣿⣷⣜⣿⣿⣿⡇⠀⠀⠀⠀⠀⠀         / |  ~ | ``\\     _|_| \n"
            <<"⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿⣷⣶⣮⣭⣽⣿⣿⣿⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀      ,-`  \\    |  \\ \\  ,//(_} \n"
            <<"⠀⠀⠀⠀⠀⠀⣀⣀⣈⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠇⠀⠀⠀⠀⠀⠀⠀     /      |   |   | \\/  \\| | \n"
            <<"⠀⠀⠀⠀⠀⠀⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠃⠀⠀⠀⠀⠀⠀⠀⠀    |       |   |   | '   ,\\ \\ \n"
            <<"⠀⠀⠀⠀⠀⠀⠀⠹⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠟⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀    |     | \\   /  /\\  _/`  | | \n" 
            <<"          ⠉⠛⠻⠿⠿⠿⠿⠛⠉                \\     |  | |   | ``     | | \n";
    
        break;
    case 10:
    // підготовка в замку Повдербота (67х15) (інтрижки всередині мммм ;) )
    // Не виправляти, на виході воно рівне.
        cout << "  ____                                                      ____  \n"
                " /----\\                  Roshen Castle                     /----\\ \n"
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
    default:
        cout << "Unexpected error";
        break;
    }
}






/* моделька шрекса
int main(){
	cout <<"    ⡴⠑⡄⠀⠀⠀⠀⠀⠀⣀⣀⣤⣤⣤⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀   \n" 
         <<"   ⠸⡇⠀⠿⡀⠀⣀⡴⢿⣿⣿⣿⣿⣿⣿⣿⣷⣦⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀  \n"
         <<"⠀ ⠀⠀⠑⢄⣠⠾⠁⣀⣄⡈⠙⣿⣿⣿⣿⣿⣿⣿⣿⣆⠀⠀⠀⠀⠀⠀⠀⠀   \n"
         <<"⠀⠀⠀⠀⢀⡀⠁⠀⠀⠈⠙⠛⠂⠈⣿⣿⣿⣿⣿⠿⡿⢿⣆⠀⠀⠀⠀⠀⠀⠀    \n"
         <<"⠀⠀⠀⢀⡾⣁⣀⠀⠴⠂⠙⣗⡀⠀⢻⣿⣿⠭⢤⣴⣦⣤⣹⠀⠀⠀⢀⢴⣶⣆   \n"
         <<"⠀⠀⢀⣾⣿⣿⣿⣷⣮⣽⣾⣿⣥⣴⣿⣿⡿⢂⠔⢚⡿⢿⣿⣦⣴⣾⠁⠸⣼⡿  \n"
         <<"⠀⢀⡞⠁⠙⠻⠿⠟⠉⠀⠛⢹⣿⣿⣿⣿⣿⣌⢤⣼⣿⣾⣿⡟⠉⠀⠀⠀⠀⠀   \n"
         <<"⠀⣾⣷⣶⠇⠀⠀⣤⣄⣀⡀⠈⠻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⠀⠀⠀⠀⠀⠀   \n"
         <<"⠀⠉⠈⠉⠀⠀⢦⡈⢻⣿⣿⣿⣶⣶⣶⣶⣤⣽⡹⣿⣿⣿⣿⡇⠀⠀⠀⠀⠀⠀   \n"
         <<"⠀⠀⠀⠀⠀⠀⠀⠉⠲⣽⡻⢿⣿⣿⣿⣿⣿⣿⣷⣜⣿⣿⣿⡇⠀⠀⠀⠀⠀⠀    \n"
         <<"⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿⣷⣶⣮⣭⣽⣿⣿⣿⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀    \n"
         <<"⠀⠀⠀⠀⠀⠀⣀⣀⣈⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠇⠀⠀⠀⠀⠀⠀⠀    \n"
         <<"⠀⠀⠀⠀⠀⠀⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠃⠀⠀⠀⠀⠀⠀⠀⠀    \n"
         <<"⠀⠀⠀⠀⠀⠀⠀⠹⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠟⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀    \n" 
         <<"          ⠉⠛⠻⠿⠿⠿⠿⠛⠉";
	
	//моделька болота(80х24)
    cout << "                 ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒        ▓▓▓▓▓▓▓\n"
            "▒▒▒▒▒▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓▓▓▓▓▓▓▓\n"
            "▒▒▒▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██▓▓▓▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░░░▒▒░░░░░░▒▒▒▒▒▒▒▒██▓▓▓▓▓▓▓▓▓▓▓\n"
            "▒▒▒██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓████▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░░░▒▒░░░░░░░░▒▒▒▒▒▒░░▓▓▓▓▓▓▓▓▓▓▓\n"
            "▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██▓▓▒▒▒▒▒▒▒▒▒▒░░░░░░▒▒░░░░░░░░░░░░░░▒▒▓▓▓▓▓▓██▓▓▓\n"
            "░▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░▓▓████▓▓▓\n"
            "░▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██▓▓▓▓▓▓▓▓▓▓░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░████░░░\n"
            "░░░▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░████░░░\n"
            "░░░░░▓▓▓▓██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░████░░░\n"
            "░░░░░░░░░██░░██░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░████░░░\n"
            "░░░░░░░░░██████░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░████▓▓░\n"
            "▒▒▒▒▒▒▒▒▒██████░░░░░░▒▒▒▒▒▒▒▒░░░░▒▒▒▒▒▒░░░░▒▒▒▒░░▒▒░░░░▒▒░░░░░░░░░░░░▓▓▓▓████▓▓▓\n"
            "▒▒▒▒▒▒▒▒▒████▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓▓▓▓▓██▓▓▓\n"
            "▒▒▒▒▒▒▒▒▒████▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓██▓▓██▓▓▓\n"
            "▒▒▒▒▒▒▒▒▒████▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓\n"
            "▒▒▒▒▒▒▒▒▒████▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒\n"
            "▒▒▒▒▒▒▒▒▒████▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒\n"
            "▒▒▒▒▒▒▒▒▒████▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓▓▓▓▓▓▓▒▒▓▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒\n"
            "▒▒▒▒▒▒▒▒▒████▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒▒▒░░▒▒▒▒▒\n"
            "▒▒▒▒▒▒▒░░████▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░░░▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██▓▓▒▒▒▒▒▒░░░░▒\n"
            "▒▒▒▓▓▓▓▓▓████░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░▒▒░░░░░░░░░░▓▓░░░░░░░░▓▓▓▓▓▓▓▓██▓▓▓▓▒▒░░░░░░░\n"
            "█▓▓▓▓▓▓▓▓██▓▓▓▓▓▓░░▒▒▒▒▒▒▒▒░░▒▒▒▒▒▒▒▒░░░░░░░░▓▓░░░░░░░░░░▓▓▓▓▓▓▓▓▓▓████░░░░░░░░░\n"
            "▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██░░▓▓▓▓▓▓██▒▒░░░░░░░░▓▓▓▓▓▓░░░░░░░░░░▓▓▓▓▓▓██▓▓▓▓░░░░░░░░░\n"
            "▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓░░▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓░░░░░░▓▓▓▓▓▓▓▓▓▓▓▓▓▓░░░░░░░\n";

//моделька мордору
cout << "                                                           |>>> \n"  //22 висота 78 ширина (+1 пробіл по боках до 80)
        "                   _                      _                | \n"
        "   ____________ .' '.    _____/----/-\\ .' './========\\   / \\ \n"
        "   //// ////// /V_.-._\\  |.-.-.|===| _ |-----| u    u |  /___\\ \n"
        "  // /// // ///==\\ u |.  || | ||===||||| |T| |   ||   | .| u |_ _ _ _ _ _"
        " ///////-\\////====\\==|:::::::::::::::::::::::::::::::::::|u u| U U U U U\n"
        " |----/\\u |--|++++|..|'''''''''''::::::::::::::''''''''''|+++|+-+-+-+-+-+\n"
    //15" |u u|u | |u ||||||..|              '::::::::'           |===|>=== _ _ ==\n"
        " |===|  |u|==|++++|==|              .::::::::.           | T |....| V |..\n"
        " |u u|u | |u ||HH||         \\|/    .::::::::::.\n"
        " |===|_.|u|_.|+HH+|_              .::::::::::::.              _\n"
        "                __(_)___         .::::::::::::::.         ___(_)__\n"
        "---------------/  / \\  /|       .:::::;;;:::;;:::.       |\\  / \\  \\-------\n"
        "______________/_______/ |      .::::::;;:::::;;:::.      | \\_______\\________\n"
        "|       |     [===  =] /|     .:::::;;;::::::;;;:::.     |\\ [==  = ]   |\n"
        "|_______|_____[ = == ]/ |    .:::::;;;:::::::;;;::::.    | \\[ ===  ]___|____\n"
        "     |       |[  === ] /|   .:::::;;;::::::::;;;:::::.   |\\ [=  ===] |\n"
        "_____|_______|[== = =]/ |  .:::::;;;::::::::::;;;:::::.  | \\[ ==  =]_|______\n"
        " |       |    [ == = ] /| .::::::;;:::::::::::;;;::::::. |\\ [== == ]      | \n"
        "_|_______|____[=  == ]/ |.::::::;;:::::::::::::;;;::::::.| \\[  === ]______|_ \n"
        "   |       |  [ === =] /.::::::;;::::::::::::::;;;:::::::.\\ [===  =]   | \n"
        "___|_______|__[ == ==]/.::::::;;;:::::::::::::::;;;:::::::.\\[=  == ]___|_____ \n";


//Сергій Дмитрович Притула
    cout << "⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⢀⣀⣤⣴⣶⣾⣆⠄⠄⠄⠄⠄\n"
            "⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠠⣤⣤⣤⠄⢤⣴⣶⣿⣿⣿⢟⣿⣿⣿⠄⠄⠄⠄⠄\n" 
            "⠄⠄⠄⠄⠄⣀⣠⣤⡾⢏⢠⣶⣶⣾⡑⡀⢸⠋⠁⠄⢠⣾⣿⣿⣿⠄⠄⠄⠄⠄\n" 
            "⠄⢀⣠⣶⣿⣿⣿⠟⠁⠁⠰⣋⢫⢲⡇⠛⠄⠄⢀⣠⣤⣉⠻⠿⠿⠄⠄⠄⠄⠄\n" 
            "⢰⣿⣿⣟⣋⣉⣁⠄⠄⠄⠄⠻⣆⣂⡕⠼⠂⠉⣿⣿⡇⢏⠉⠉⠁⠄⠄⠄⠄⠄\n" 
            "⠄⠙⢿⣿⣿⣿⣿⠃⢸⢋⡁⢊⠒⣲⡶⠊⢁⣴⣿⣿⣿⣦⣦⠄⠄⠄⠄⠄⠄⠄\n" 
            "⠄⠄⠄⠙⠻⣿⡟⠄⡆⢸⣧⣾⣶⣤⣤⣾⡿⣿⣿⠿⡻⣻⣿⠁⠄⠄⠄⠄⠄⠄\n" 
            "⠄⠄⠄⠄⠄⠄⠄⠘⠠⣾⣿⣿⡿⠿⠿⣥⣾⣿⠿⣛⠅⢰⣗⠄⠄⠄⠄⠄⠄⠄\n" 
            "⠄⠄⠄⠄⠄⠄⠄⠄⠄⠸⣶⣶⣿⣟⣛⣛⣛⠲⠿⣵⣿⣟⢅⠂⠄⠄⠄⠄⠄⠄\n" 
            "⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⢹⡟⠋⣠⣤⣤⣤⣍⡑⠂⠬⢉⣾⠄⠄⠄⠄⠄⠄⠄\n" 
            "⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⢠⠁⣿⣿⣿⣿⠿⠿⠿⠿⠷⢶⡄⠄⠄⠄⠄⠄⠄⠄\n" 
            "⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠘⠄⢉⣁⣀⣤⣤⣤⣤⣤⣤⣤⠄⠄⠄⠄⠄⠄⠄⠄\n" 
            "⠄⠄⠄⠄⠄⠄⠄⠄⠄⣀⠈⠙⠿⣿⣿⣿⣿⡍⠟⢁⣠⣤⣶⣶⣤⣄⡀⠄⠄⠄\n" 
            "⠄⠄⠄⠄⠄⠄⠄⢀⣾⣿⣿⣷⣦⣀⠉⠿⣿⡇⠄⣾⣿⣿⣿⣿⣿⣿⣿⣶⡀⠄\n" 
            "⠄⠄⠄⠄⠄⠄⢠⣾⣿⣿⣿⣿⣿⣿⣷⡄⠹⠇⢰⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠄\n" 
            "⠄⠄⠄⠄⠄⠄⣾⣿⣿⣿⣿⣿⣿⣿⡿⠋⠄⠄⠈⠙⠿⢿⣿⣿⣿⣿⣿⣿⣿⡇\n";

//Фіона Батьківна
    cout << "           /\\ \n"
            "          /,.\\ \n"
            "       ,-//||\\-. \n"
            "      //)(_||_)(\\-. \n"
            "     ,'`--------'`  `. \n"
            "    /         __      \\ \n"
            "   ;     ,--,'  `-.    ; \n"
            "   |   ,'        __\\   `. \n"
            "   |   : __    ,'   \\  ; \n"
            "   |   :',o`)  ,o,-  ;  \\ \n"
            "   `.  :     ; :     |  , \n"
            "    |  |    (__,'    | ; \n"
            "    `.  \\  /___,-'  ,-' \n"
            "      `--\\ ,"""") ,' \n"
            "          ) -""'-'( \n";

// Повдербот
cout << "                  ', \n"
        "                .-`-,\\__ \n"
        "              .'`   `, \n"
        "            .'_.  ._  `;. \n"
        "       __ / `      `  `.\\ .--. \n"
        "       /--,| 0)   0)     )`_.-,) \n"
        "      |    ;.-----.__ _-');   / \n"
        "       '--./         `.`/  `'` \n"
        "          :   '`      |. \n"      
        "          | \\     /  // \n"         
        "           \\ '---'  /' \n"        
        "            `------' \\ \n"  
        "            _/       `--... \n";

//Осел

cout << "         `.;: |::::  ,' ,:'  ,-' \n"
        "         ,^-. `,--.-/ ,'  _,' \n"
        "        (__        ^ ( _,' \n"
        "      __((o\\   __   ,-' \n"
        "   ,',-.     ((o)  / \n"
        " ,','   `.    `-- ( \n"
        "  |'      ,`        \\ \n"
        "  |     ,:' `        | \n"
        " (  `--      :-.     | \n"
        " `,.__       ,-,'   ; \n"
        " (_/  `,__,-' /   ,' \n"
        " |\\`--|_/,' ,' _,' \n"
        " \\_^--^,',-' -'( \n"
        " (_`--','       `-. \n"
        "  ;;;;'       ::::.`------. \n";
//Пітун 

cout << "⣿⣿⣿⣵⣿⣿⣿⠿⡟⣛⣧⣿⣯⣿⣝⡻⢿⣿⣿⣿⣿⣿⣿⣿ \n"
        "⣿⣿⣿⣿⣿⠋⠁⣴⣶⣿⣿⣿⣿⣿⣿⣿⣦⣍⢿⣿⣿⣿⣿⣿ \n"
        "⣿⣿⣿⣿⢷⠄⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣏⢼⣿⣿⣿⣿ \n"
        "⢹⣿⣿⢻⠎⠔⣛⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡏⣿⣿⣿⣿ \n"
        "⢸⣿⣿⠇⡶⠄⣿⣿⠿⠟⡛⠛⠻⣿⡿⠿⠿⣿⣗⢣⣿⣿⣿⣿ \n"
        "⠐⣿⣿⡿⣷⣾⣿⣿⣿⣾⣶⣶⣶⣿⣁⣔⣤⣀⣼⢲⣿⣿⣿⣿ \n"
        "⠄⣿⣿⣿⣿⣾⣟⣿⣿⣿⣿⣿⣿⣿⡿⣿⣿⣿⢟⣾⣿⣿⣿⣿ \n"
        "⠄⣟⣿⣿⣿⡷⣿⣿⣿⣿⣿⣮⣽⠛⢻⣽⣿⡇⣾⣿⣿⣿⣿⣿ \n"
        "⠄⢻⣿⣿⣿⡷⠻⢻⡻⣯⣝⢿⣟⣛⣛⣛⠝⢻⣿⣿⣿⣿⣿⣿ \n"
        "⠄⠸⣿⣿⡟⣹⣦⠄⠋⠻⢿⣶⣶⣶⡾⠃⡂⢾⣿⣿⣿⣿⣿⣿ \n"
        "⠄⠄⠟⠋⠄⢻⣿⣧⣲⡀⡀⠄⠉⠱⣠⣾⡇⠄⠉⠛⢿⣿⣿⣿ \n"
        "⠄⠄⠄⠄⠄⠈⣿⣿⣿⣷⣿⣿⢾⣾⣿⣿⣇⠄⠄⠄⠄⠄⠉⠉ \n"
        "⠄⠄⠄⠄⠄⠄⠸⣿⣿⠟⠃⠄⠄⢈⣻⣿⣿⠄⠄⠄⠄⠄⠄⠄ \n"
        "⠄⠄⠄⠄⠄⠄⠄⢿⣿⣾⣷⡄⠄⢾⣿⣿⣿⡄⠄⠄⠄⠄⠄⠄ \n"
        "⠄⠄⠄⠄⠄⠄⠄⠸⣿⣿⣿⠃⠄⠈⢿⣿⣿⠄⠄⠄⠄⠄⠄⠄ \n";


}*/