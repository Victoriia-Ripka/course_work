#include <iostream>
#include <cstring>
#include <stdlib.h>
#include <limits>
#include <regex>
#include <string>
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <chrono>
using namespace std::chrono;

#include "script.h"                 //підключення нашої бібліотеки, де виводимо в консоль репліки з даними від користувача


void intro();                       //функція привітання з користувачем та ознайомлення з суттю гри
void outro();                       //функція з "титрами"
void centerstring(string str);   //функція центрування рядка             
void show_scene(scene a);           //функція виводу сцен у консоль
void line();                        //функція виводу роздільної смуги в консоль
void f_input(input *info);          //функція вводу доних від користувача
string inp_name();                  //функція вводу імені користувача, що повертає рядок
string inp_noun();                  //функція вводу іменника у множині користувача, що повертає рядок
string inp_numeric();               //функція вводу числа користувача, що повертає рядок
string inp_verb();                  //функція вводу дієслова користувача, що повертає рядок
string inp_part_of_the_body();      //функція вводу частини тіла, що повертає рядок
void all_lower(char *word);         //функція, що робить всі літери в слові маленькими
bool choice_f();                    //функція вибору сюжету історії
bool choice_s();                    //функція вибору сюжету історії
string pitun_speak(int nwords);     //функція, що генерує n випадкових слів типу денацифікація, біолабораторії та інші "скрєпні" речі
void answer();                      //функція продовження
bool loop();                        //функція зациклення
void technical_report(high_resolution_clock::time_point time1, high_resolution_clock::time_point time2); //функція технічного звіту
void storytale(int i1, int i2, scene script[N]); //функція, що виводить сюжетний блок "слайдів"

int counter; //лічильник
//Функція класу scene(сцена)
//Функція з вхідних даних генерує схему ("склеює окремі стрінги і число в сцену")
void scene::set(int ls, string n, string t)
{
    landscape = ls; //Номер бібліотечного модуля
    name = n; //Ім'я спікера
    text = t; //Текст 
};

void intro() //функція привітання з користувачем та ознайомлення з суттю гри
{
    counter = 0;
    cout << "\033[2J\033[1;1H";
    string userAns; //ініціалізація рядка - відповіді користувача

    cout << endl << "Hello, dear user!" << endl;
    cout << "You are about to play Mad Shrek, custom version of MadLibs Game.\n\n";
    cout << "Disclaimer! All the characters are fictional.\nAll matches with real people are coincidences." << endl;
    cout << "The script of a history is fully unique.\n\n";
    cout << "If you need game instructions, please, enter \"Y\" or \"+\".\nOtherwise, enter whatever else: " << endl;
    counter++;

    cin >> userAns;
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); //Очистка буферу
    counter++;
    if (userAns == "Y" || userAns == "y" || userAns == "yes" || userAns == "Yes" || userAns == "ye" || userAns == "yea" ||
    userAns == "yeah" || userAns == "Yeah" || userAns == "Т" || userAns == "т" || userAns == "Та" || userAns == "та" ||
    userAns == "Так" || userAns == "так" || userAns == "Да" || userAns == "да" || userAns == "+")
    {
        cout << "\nMad Shrek is a word game. You are asked for words to create \nyour own history ";
        cout << "about your fight against evil. Press enter." << endl;
    }
    else return; //щоб користувач не натискав ентер два рази після уведення символа

    cin.ignore(numeric_limits<streamsize>::max(), '\n'); //Очистка буфера
}

void centerstring(string str) {
	cout.width((80+str.size())/2);
	cout.setf(ios::internal, ios::adjustfield);
	cout << str << endl;
}

void outro() //функція з "титрами"
{
    cout << "\033[2J\033[1;1H";
    for (int i=0; i<7; i++) {
        cout << endl;
    }
    centerstring("THE END");
    cout << endl;
    centerstring("Developers:");
    
    centerstring("Viktoria Ripka");
    
    centerstring("Vitalii Solonychnyi");
    
    centerstring("Dmytro Syniuk");
    
    centerstring("Dmytro Stelmakh");
    
    centerstring("Produced in Ukraine");
    
    centerstring("KPI, 2022");
    for (int i=0; i<7; i++) {
        cout << endl;
    }
    getchar();
}

void line() //функція виводу роздільної смуги в консоль
{
    for (int i = 0; i < 80; i++)
    {
        cout << '-';
    }
    cout << '\n';
}

void f_input(input *info) //функція вводу доних від користувача, приймає посилання на структуру
{
    info->name = inp_name();             //присвоєння члену структури введене користувачем ім'я при використанні функції вводу імені
    info->noun = inp_noun();             //присвоєння члену структури введене користувачем іменника у множині при використанні функції
    info->numeric = inp_numeric();       //присвоєння члену структури введене користувачем числа при використанні функції
    info->body = inp_part_of_the_body(); //присвоєння члену структури введене користувачем частини тіла при використанні функції
    info->verb = inp_verb();             //присвоєння члену структури введене користувачем дієслова при використанні функції
}

void show_scene(scene a) //функція виводу сцен у консоль, приймає структуру "сцена"
{
    cout << "\033[2J\033[1;1H"; //Переводить курсор в лівий верхній кут, тіп створює новий слайд
    printscene(a.landscape);    //Візуалізація написананого
    if (a.name != "\0")         //Перевірка, чи є спікер в сцені
    {
        line();
        cout << a.name << endl; //якщо спікер в сцені, то вивести в консоль його ім'я
    }
    line();
    cout << a.text;
}

string inp_name() //функція вводу імені користувача, що повертає рядок
{
    cout << "\033[2J\033[1;1H";
    regex r("[A-Za-z]*");
    string name;
    cout << endl << "Input name:" << endl;
    getline(cin,name);
    counter++;
    while (!regex_match(name, r) || name.length()<3 || name.length()>20)
    {
        if (!regex_match(name, r)) {
            cout << "Not correct. Input name:" << endl;
        }
        else {
            cout << "The name is too short or too long. Input name:" << endl;
        }
        getline(cin,name);
    }
    name[0] = toupper(name[0]); //оскільки це ім'я, то першу літеру зробити великою
    return name;       //повернути рядок, що був масивом символів
}

string inp_noun() //функція вводу іменника у множині користувача, що повертає рядок
{
    regex r("[A-Za-z]*");
    string noun;
    cout << endl << "Input noun in the plural:" << endl;
    getline(cin,noun);
    counter++;
    while (!regex_match(noun, r) || noun.length()<3 || noun.length()>20 || (noun.back() != 's' && noun.back() !='S'))
    {
        if (!regex_match(noun, r)) {
            cout << "Not correct. Input noun in the plural:" << endl;
        }
        else if (noun.back() != 's' && noun.back() !='S') {
            cout << "Inputted noun is not in plural. Input noun in the plural:" << endl;
        }
        else {
            cout << "Inputted noun is too short or too long. Input noun in the plural:" << endl;
        }
        getline(cin,noun);
    }
    return noun;
}

string inp_numeric() //функція вводу числа користувача, що повертає рядок
{   
    regex r("[0-9]*");
    string number;
    cout << endl << "Input number:" << endl;
    getline(cin,number);
    counter++;
    while (!regex_match(number, r) || number.length()>10)
    {
        if (!regex_match(number, r)) {
            cout << "Not correct. Input number:" << endl;
        }
        else {
            cout << "The number is too long. Input number:" << endl;
        }
        getline(cin,number);
    }
    return number;
}

string inp_verb() //функція вводу дієслова, що повертає рядок
{
    bool ind = 0;   //ініціалізація локальної змінної для продовження цикла
    char buf[SIZE]; //ініціалізація масиву символів
    ifstream f;     //ініціалізація файла
    cout << endl << "Input verb:" << endl;
    cin.getline(buf, SIZE);            //ввід дієслова (масиву символів), максимальна кількість літер 99
    counter++;
    all_lower(buf);     //перетворення всіх літер на маленькі
    char d_o_v[SIZE];                  //ініціалізація рядка символів
        do //цикл з пісялумовою. виконується доки користувач не введе правильно дієслово
        {
            f.open("dictionary_of_verbs.txt"); //відкриття файлу, що містить словник всіх допустимих дієслів і їх можливих форм
            if (!f.is_open())                  //якщо файл не відкриється, то вивести повідомлення про помилку
            {
                cout << "error opening file" << endl;
                exit(1);
            } else { //якщо відкриється, то наступні дії
            do  //цикл з післяумовою. з файла зчитуються рядки доти, доки
            //не знайдеться збіг введеного користувачем масиву символів і масиву символів з файла
            //або доки файл не закінчиться
            {
                f >> d_o_v; //
            } while (strcmp(d_o_v, buf) != 0 && !f.eof() && (f.get() != '\0'));

            if (strcmp(d_o_v, buf) != 0) //якщо збіг не виявлено, то користувач зновву вводить дієслово
            {
                cout << "Not correct. Input verb:" << endl;
                cin.getline(buf, SIZE);
                all_lower(buf);     //перетворення всіх літер на маленькі
                ind = 1; //індикатор 1, тобто цикл продовжується
            }
            else
            {
                ind = 0; //індиктор 0, тобто дієслово введено правильно і цикл зупиняється
            }
            f.close(); //закриття файлу
        } }while (ind);
        return string(buf); //повернення рядка символів з масиву символів
}

string inp_part_of_the_body() //функція вводу частини тіла, що повертає рядок
{
    bool ind = 0; //логіка функції така сама, що і у функції inp_verb()
    char buf[SIZE];
    ifstream f;
    cout << endl << "Input part of the body:" << endl;
    cin.getline(buf, SIZE);
    counter++;
    all_lower(buf);     //перетворення всіх літер на маленькі   
        char p_o_t_b[SIZE];
        do
        {
             f.open("parts_of_the_body.txt");

        if (!f.is_open())
        {
            cout << "error opening file" << endl;
            exit(1);
        } else {
            do
            {
                f >> p_o_t_b;
            } while ((strcmp(p_o_t_b, buf) != 0) && !f.eof() && (f.get() != '\0'));
            if (strcmp(p_o_t_b, buf) != 0){
                cout << "Not correct. Input part of the body:" << endl;
                cin.getline(buf, SIZE);
                all_lower(buf);     //перетворення всіх літер на маленькі
                ind = 1;
            } else {
                ind = 0; }
            f.close();
        }} while (ind);
    all_lower(buf);
    return string(buf);
}

void all_lower(char *word) //функція, що робить всі літери в слові маленькими, приймає вказівник на початок масиву символів
{
    int i = 0;                  //ініціалізація локальної змінної, щоб поелементно пройтись по всьому масиву
    while (*(word + i) != '\0') //цикл відтворюється доти, доки поточний елемент не є закінченням рядка
    {
        *(word + i) = tolower(*(word + i)); //присвоєння поточному елементу відповідної маленької літери
        i++;                                //крок до наступного елемента масиву
    }
}

bool choice_f(){//Функція вибору сюжету історії
    char ans;
    //Вивід варіантів вибору
    cout << "\n1) To come to Territorial Defense\n2) To leave abroad to Polandia.\n\tYour choice: ";
    counter++;
    for(;;){
        ans = getchar();
    if (ans != '\n'){              //очікування на "команду продовження"
    cin.ignore(numeric_limits<streamsize>::max(), '\n');}//Чистка буферу
    switch (ans) //Перевірка на правильність вводу
    {
    case '1':
    cout << "\nChoiced come to Territorial Defense";
    return 0;
        break;
    case '2':
    cout << "\nChoiced leave abroad to Polandia.";
    return 1;
        break;
    default:
    //Ввід неправильний, користувач спробує знову
    cout <<"Not correct. Input 1 or 2: ";
        break;
    };
    }
}

bool choice_s(){//Функція вибору сюжету історії
    char ans;
    //Вивід варіантів вибору
    cout << "\n1) Go to hetman\n2) Take a Donkey and have a guerilla warfare.\n\tYour choice: ";
    counter++;
    for(;;){
        ans = getchar();
    if (ans != '\n'){              //очікування на "команду продовження"
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); } //Чистка буферу
    switch (ans) //Перевірка на правильність вводу
    {
    case '1':
    cout << "\nChoiced goes to hetman";
    return 1;
        break;
    case '2':
    cout << "\nChoiced takes a Donkey and goes to a guerilla warfare";
    return 0;
        break;
    default:
    //Ввід неправильний, користувач спробує знову
    cout <<"Nor correct. Input 1 or 2: ";
        break;;
    };
    }
}

void answer() {
    counter++;
    if (getchar()!= '\n') {              //очікування на "команду продовження"
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); //Чистка буферу
    }
}


void storytale(int i1, int i2, scene script[N]) { //функція, що виводить сюжетний блок "слайдів"
     for (int i = i1; i < i2; i++)
    {                          //ітераційний цикл що виводить в консоль сторінки історії
        show_scene(script[i]); //функція виводу ілюстрації, роздільної смуги та репліки в консоль
        answer();
    }
}

void technical_report(high_resolution_clock::time_point time1, high_resolution_clock::time_point time2) {
    counter++;
    auto duration = duration_cast<seconds>( time2 - time1 ).count();
    //double time = ((double)(f-s))/CLOCKS_PER_SEC;
    cout << "\033[2J\033[1;1H" << endl; //обновлення екрану, новий "слайд"
    cout << "Technical report:\nNumber of user's moves: " << counter << "\nElapsed time: " << duration << " seconds\n\n";
}

bool loop() { //функція зациклення
    string cont;

    cout << "Do you wanna play one more time? Please, enter \"Y\" or \"+\".\nOtherwise, enter whatever else:" << endl;
    cin >> cont;
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); //Очистка буферу

    if (cont == "Y" || cont == "y" || cont == "yes" || cont == "Yes" || cont == "ye" || cont == "yea" ||
    cont == "yeah" || cont == "Yeah" || cont == "Т" || cont == "т" || cont == "Та" || cont == "та" ||
    cont == "Так" || cont == "так" || cont == "Да" || cont == "да" || cont == "+") {
        return true;
    }
    else {
        cout << endl;
        centerstring("Thank you for playing!");
        cout << endl << endl;
        return false;
    }
    

}
/*
-------------------------------------------------------------------------------------
 це і нижче пов'язане з функцією мови пітуна, з докладними коментарями, як це працює
-------------------------------------------------------------------------------------
typedef deque<string> умовно контейнер для стрінгу в якому лежить префікс
vector<string> теж контейнер для стрінгів(лежить суфікс)
 принципово робити різні, бо в них трошки різні фічі
 map - щось типу аналог словників на пітоні, пара: ключ, значення, де ключ це наш префікс, значення - суфікс
 по певному префіксу програмка вибирає суфікс, суть рандомізації, що до однакових префіксів шляхом
 повторення слів в реченнях можуть прив'язатись різні суфікси і воно, будуючи текст, може перескакувати, циклитись,
 але оскільки наші рандомні префікси/суфікси це зв'язки слів, речення виходять адекватні. */
typedef deque<string> Prefix;

map<Prefix, vector<string>> statetab;

enum
{
    NPREF = 2,    //кількість елементів у контейнері префіксу  || 1 - тотал рандом,
                  // 3 - треба велику базу щоб тупо не копіювало файлик
    NHASH = 1000, // 4093, size of state hash table array ((чесно без поняття, у шпури таке було я й написав))
    MAXGEN = 100  //ліміт генерованих слів
};

char NONWORD[] = "/n"; //заглушка для контейнерів

// add: додаємо слово в список суфіксів, і завантажуємо нове слово в префікс
void add(Prefix &prefix, const string &s)
{
    if (prefix.size() == NPREF)
    {
        statetab[prefix].push_back(s);
        prefix.pop_front();
    }
    prefix.push_back(s);
}

// build: відкриваємо файл, з нього зчитуємо по слову і додаємо в список, вибудовуючи тим самим хеш-таблицю
void build(Prefix &prefix)
{
    string buf;
    ifstream textfile;
    textfile.open("Pitun_speak.txt");
    if (!textfile.is_open())
    {
        cout << "Error: cannot open Pitun_speak.txt file" << endl;
        return;
    }
    while (textfile >> buf)
        add(prefix, buf);
}

// generate: генеруємо репліки, по одному слову через пробіл
string generate(int nwords)
{
    Prefix prefix;
    string result = " ";
    int i;
    for (i = 0; i < NPREF; i++) //скидуємо префікс і робимо його з заглушок, щоб початок працював коректно
        add(prefix, NONWORD);
    for (i = 0; i < nwords; i++)
    {
        vector<string> &suf = statetab[prefix]; //додаємо суфікс з готової таблиці
        const string &w = suf[rand() % suf.size()]; //вибираємо один з суфіксів по ключу випадковим чином
        if (w == NONWORD)
            break;
        if (!(i % 8 - 7)) // перенос рядка раз в 8 слів
        {
            result += "\n";
        }
        result += w;
        result += " ";

        
        prefix.pop_front(); // просуваємось на один префікс вперед
        prefix.push_back(w);
    }
    return result;
}

string pitun_speak(int nwords) //функція, що генерує n випадкових слів типу денацифікація, біолабораторії та інші "скрєпні" речі
{
    if (nwords > MAXGEN)
    {
        nwords = MAXGEN;
    }                               // щоб не виходити за рамки сцени
    srand(time(0));                 // сід для рандому
    Prefix prefix;                  // поточний префікс
    for (int i = 0; i < NPREF; i++) //ініціалізуємо його заглушками
        add(prefix, NONWORD);
    build(prefix);          // зчитуємо файл, формуємо таблицю
    add(prefix, NONWORD);             // в результаті білд у нас префікс стоїть в кінці тексту, скидуємо його
    string result = generate(nwords); // друк реплік.
    return result;
}
