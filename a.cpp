/*Вікторія Іванівна - сонечко <3 */

/* Моменти, які варто нагадати, перед виконанням лабораторної роботи
1. Май повагу до чужого труду. Не змінюй або видаляй чужий код без дозволу
2. Страйся писати розбірчивий код. (Нормальні назви змінних і функцій, не обічрана логіка і т.д.)
3. Коментарі лишніми не будуть ніколи
*/
//З гілки Віталік 1:04
#include <iostream>
#include <string>

using namespace std;

//Клас сцена - основна "ячейка" даних нашої програми
//В ньому зберігаються вся інформація про кожну сцену нашої історії
class Scene{

    public:
};

//Не впевнений, чи є сенс зберіагати дані про розмір екрану в класі, але най буде
class Screan_size{
    int hight;
    int width;
    public:
    Screan_size(int h, int w){
        hight = h;
        width = w;
    }
};

//Функція для зчитування даних
void input(){

};
//Важлива частина нашої програми - перевірка вводу
//Функція, що перевіряє ввід 
bool check(char a){
    return 1;
};

// функція - вступ до гри
void introduction()
{
    string userAns;

    cout << "\nЗараз ви зіграєте в *назва гри*, покращену версію гри *Божевільні бібліотекарі*.";
    cout << "Якщо вам необхідна інструкція, введіть \"Y\".\n Інакше, введіть будь-що: " << endl;
    cin >> userAns;
    
    if(userAns == "Y" || userAns == "y")
    {
        cout << "\n*Назва гри* - це словесна гра. Ми вас просимо ввести деякі слова, щоби на їх основі \n";
        cout << "створити перснолазівану історію про *придумати про що*" << endl;
    }
    cout << endl << endl;
}
void test(string Name){
	for(int i; i<12;i++){
		cout << endl;
	}
	for(int i=0; i<80; i++){
		cout << "☰";
	}
	cout << Name;
	for(int i=0; i<80; i++){
		cout << "☰";
	}
	cout << "⡴⠑⡄⠀⠀⠀⠀⠀⠀⠀⣀⣀⣤⣤⣤⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ \n" 
<< "   ⠸⡇⠀⠿⡀⠀⠀⠀⣀⡴⢿⣿⣿⣿⣿⣿⣿⣿⣷⣦⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀ \n"
<< "⠀⠀⠀⠀⠑⢄⣠⠾⠁⣀⣄⡈⠙⣿⣿⣿⣿⣿⣿⣿⣿⣆⠀⠀⠀⠀⠀⠀⠀⠀ \n"
<<"⠀⠀⠀⠀⢀⡀⠁⠀⠀⠈⠙⠛⠂⠈⣿⣿⣿⣿⣿⠿⡿⢿⣆⠀⠀⠀⠀⠀⠀⠀ \n"
<<"⠀⠀⠀⢀⡾⣁⣀⠀⠴⠂⠙⣗⡀⠀⢻⣿⣿⠭⢤⣴⣦⣤⣹⠀⠀⠀⢀⢴⣶⣆ \n"
<<"⠀⠀⢀⣾⣿⣿⣿⣷⣮⣽⣾⣿⣥⣴⣿⣿⡿⢂⠔⢚⡿⢿⣿⣦⣴⣾⠁⠸⣼⡿ \n"
<<"⠀⢀⡞⠁⠙⠻⠿⠟⠉⠀⠛⢹⣿⣿⣿⣿⣿⣌⢤⣼⣿⣾⣿⡟⠉⠀⠀⠀⠀⠀ \n"
<<"⠀⣾⣷⣶⠇⠀⠀⣤⣄⣀⡀⠈⠻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⠀⠀⠀⠀⠀⠀ \n"
<<"⠀⠉⠈⠉⠀⠀⢦⡈⢻⣿⣿⣿⣶⣶⣶⣶⣤⣽⡹⣿⣿⣿⣿⡇⠀⠀⠀⠀⠀⠀ \n"
<<"⠀⠀⠀⠀⠀⠀⠀⠉⠲⣽⡻⢿⣿⣿⣿⣿⣿⣿⣷⣜⣿⣿⣿⡇⠀⠀⠀⠀⠀⠀ \n"
<<"⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿⣷⣶⣮⣭⣽⣿⣿⣿⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀ \n"
<<"⠀⠀⠀⠀⠀⠀⣀⣀⣈⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠇⠀⠀⠀⠀⠀⠀⠀ \n"
<<"⠀⠀⠀⠀⠀⠀⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠃⠀⠀⠀⠀⠀⠀⠀⠀ \n"
<<"⠀⠀⠀⠀⠀⠀⠀⠹⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠟⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀\n" 
<<"          ⠉⠛⠻⠿⠿⠿⠿⠛⠉"
<<"\nПошрексимся?";
	// //Ширина маленькького віконця 80
    // for(int i=0; i<80; i++){
    //     //Довжина маленького віконця 24
    //     for(int j=0; j<24; j++){
    //     cout << "_";
    //     }
    // }
}

void ask_screan_size(){
    char ans;
    cout << "Бажаєте грати в вікні?(Y-так)";
    cin >> ans;
    if (ans == 'Y'){
        Screan_size screan(24,80);
    } else {
        //Треба дізнатись розмір фулсуріну
        Screan_size screan(1, 1);
    }
}

int main(void){
    introduction();
    ask_screan_size();
    string D = "Дімочка <3\n";
    test(D);
    // //Ширина маленькького віконця 80
    // for(int i=0; i<80; i++){
    //     //Довжина маленького віконця 24
    //     for(int j=0; j<24; j++){
    //     cout << "_";
    //     }
    // }
}
