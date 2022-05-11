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

    cout << "You are about to play *назва гри*, custom version of MadLibs Game.";
    cout << "If you need game instructions enter \"Y\".\nOtherwise, enter whatever: " << endl;
    cin >> userAns;
    
    if(userAns == "Y" || userAns == "y")
    {
        cout << "\nMadMusicians is a word game. You are asked for words to create \nyou own history ";
        cout << "about your *придумати про що*" << endl;
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
	for(int i=0; i<9; i++){
		cout << "Тіпа текст\n";
	}
	cout << "Тіпа текст";
	// //Ширина маленькького віконця 80
    // for(int i=0; i<80; i++){
    //     //Довжина маленького віконця 24
    //     for(int j=0; j<24; j++){
    //     cout << "_";
    //     }
    // }
}

int main(void){
    string D = "Дімочка <3\n";
    test(D);
    introduction();
    // //Ширина маленькького віконця 80
    // for(int i=0; i<80; i++){
    //     //Довжина маленького віконця 24
    //     for(int j=0; j<24; j++){
    //     cout << "_";
    //     }
    // }
}
