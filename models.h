/* думаю тут буде функція int printscene(int x), 
де чисто на вхід буде номер сцени а на вихід - 
друк аскіі картинки зліпленої з тої дичини,
що ми її сюди покладемо. Поки порядок сцен не 
остаточний, цим не займаюсь. */

#include <iostream>
using namespace std;
// моделька шрекса
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
        " |u u|u | |u ||||||..|              '::::::::'           |===|>=== _ _ ==\n"
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

//моделька болота(80х16)
// !!! ВОНА НОРМАЛЬНО ВІДОБРАЖАЄТЬСЯ В КОНСОЛІ
// ХАЙ ТІЛЬКИ ХТОСЬ ПАЛЬЦЕМ ТРОНЕ РІВНЯТИ ШРЕКА
// Я ПОПЕРЕДИВ


    cout << "▒▒▒▒                    ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒      ▓▓▓▓▓▓▓\n"
            "▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓▓▓▓▓▓▓▓\n"
            "▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██▓▓▓▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░░░▒▒▒▒▒▒▒██▓▓▓▓▓▓▓▓▓▓▓\n"
            "▒▒▒▒▒▒▒▒▒▒██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓████▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░░░▒▒░▒▒▒▒▒▒▓▓▓▓▓▓▓▓▓▓▓\n"
            "░░░░▒▒▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██▓▓▒▒ ⡴⠑⡄⠀⠀⠀⠀⠀⠀⣀⣀⣤⣤⣤⣀⡀⠀⠀  ▒▒▓▓▓▓████▓▓▓\n"
            "░░░░░░░░▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓░░⠸⡇⠀⠿⡀⠀⣀⡴⢿⣿⣿⣿⣿⣿⣿⣿⣷⣦⡀⠀  ⠀  ▓▓████▓▓▓\n"
            "░░░░░░░░▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██▓▓▓▓▓▓▓▓▓▓░░░░░⠑⢄⣠⠾⠁⣀⣄⡈⠙⣿⣿⣿⣿⣿⣿⣿⣿⣆  ░░░░░░████\n"
            "░░░░░░░░░░▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓░░░░░░░░⢀⡀⠁⠀⠀⠈⠙⠛⠂⠈⣿⣿⣿⣿⣿⠿⡿⢿⣆  ░░░░████\n"
            "░░░░░░░░░░░░▓▓▓▓██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓░░░░░░░░░░⢀⡾⣁⣀⠀⠴⠂⠙⣗⡀⠀⢻⣿⣿⠭⢤⣴⣦⣤⣹⠀⠀⠀⢀⢴⣶⣆████\n"//+
            "░░░░░░░░░░░░░░░░██░░██░░░░░░░░░░░░░░░░░░  ⢀⣾⣿⣿⣿⣷⣮⣽⣾⣿⣥⣴⣿⣿⡿⢂⠔⢚⡿⢿⣿⣦⣴⣾⠁⠸⣼⡿ ████\n"
            "▒▒▒▒▒▒░░░░░░░░░░██████░░░░░░░░░░░░░░░  ⢀⡞⠁⠙⠻⠿⠟⠉⠀⠛⢹⣿⣿⣿⣿⣿⣌⢤⣼⣿⣾⣿⡟⠉        ████▓▓\n"
            "▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██████░░░░░░▒▒▒▒▒▒▒▒░░░░⣾⣷⣶⠇⠀⠀⣤⣄⣀⡀⠈⠻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇  ░▓▓▓▓████▓▓▓\n" 
            "▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒████▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ⠉⠈⢦⡈⢻⣿⣿⣿⣶⣶⣶⣶⣤⣽⡹⣿⣿⣿⣿⡇ ▓▓▓▓▓▓▓▓██▓▓▓\n"
            "▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒████▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒⠀⠉⠲⣽⡻⢿⣿⣿⣿⣿⣿⣿⣷⣜⣿⣿⣿⡇  ▓▓▓▓██▓▓██▓▓▓\n"
            "▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒████▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒⢸⣿⣿⣷⣶⣮⣭⣽⣿⣿⣿⣿⣿⣿⣿   ▓▓▓▓▓▓▓▓▓▓▓▓▓\n"
            "▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒████▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒⣀⣀⣈⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠇  ▒▒▒▒▒▒▒▒▒▒▒▒▒▒\n";

}