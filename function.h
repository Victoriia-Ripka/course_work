#include "script.h" //підключення нашої бібліотеки, де виводимо в консоль репліки з даними від користувача
#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream> // opening file in pitun_speak()
#include <map>     //statetab map in pitun_speak()
#include <vector>  //suffix in pitun_speak()
#include <deque>   //prefix in pitun_speak()
using namespace std;

void introduction();           //функція привітання з користувачем та ознайомлення з суттю гри
void show_scene(scene a);      //функція виводу сцен у консоль
void poloska();                //функція виводу роздільної смуги в консоль
void f_input(input *info);     //функція вводу доних від користувача
string inp_name();             //функція вводу імені користувача, що повертає рядок
string inp_noun();             //функція вводу іменника у множині користувача, що повертає рядок
string inp_numeric();          //функція вводу числа користувача, що повертає рядок
string inp_verb();             //функція вводу дієслова користувача, що повертає рядок
string inp_part_of_the_body(); //функція вводу частини тіла, що повертає рядок
void all_lower(char *word);    //функція, що робить всі літери в слові маленькими

string pitun_speak(int nwords); //Генерує n випадкових слів тіпа денаціифакція, біолабораторії та інші скрєпні речі

void scene::set(int ls, string n, string t)
{
    landscape = ls;
    name = n;
    text = t;
};

void all_lower(char *word) //функція, що робить всі літери в слові маленькими, приймає вказівник на початок масиву символів
{
    int i = 0;                  //ініціалізація локальної змінної, щоб поелементно пройтись по всьому масиву
    while (*(word + i) != '\0') //цикл відтворюється доти, доки поточний елемент не є закінченням рядка
    {
        *(word + i) = tolower(*(word + i)); //присвоєння поточному елементу відповідної маленької літери
        i++;                                //крок до наступного елемента масиву
    }
}

void show_scene(scene a) //функція виводу сцен у консоль, приймає структуру "сцена"
{
    cout << "\033[2J\033[1;1H"; //Переводить курсор в лівий верхній вугол, тіп створює новий слайд
    printscene(a.landscape);    //Візуалізація написананого
    if (a.name != "\0")         //Перевірка, чи є спікер в сцені
    {
        poloska();
        cout << a.name << endl; //якщо спфкер в сцені, то вивести в консоль його ім'я
    }
    poloska();
    cout << a.text;
}

void poloska() //функція виводу роздільної смуги в консоль
{
    for (int i = 0; i < 80; i++)
    {
        cout << '-';
    }
}

void introduction() //функція привітання з користувачем та ознайомлення з суттю гри
{
    string userAns; //ініціалізація рядка - відповіді користувача

    cout << "Good afternoon, dear user!" << endl;
    cout << "You are about to play *Crazy librarian*, custom version of MadLibs Game.";
    cout << "If you need game instructions enter \"Y\".\nOtherwise, enter whatever: " << endl;
    cin >> userAns;

    if (userAns == "Y" || userAns == "y" || userAns == "yes" || userAns == "Yes")
    {
        cout << "\n**Crazy librarian* is a word game. You are asked for words to create \nyour own history ";
        cout << "about your fidht against evil" << endl;
    }

    cin.ignore(numeric_limits<streamsize>::max(), '\n'); //Очистка буфера
    cout << endl
         << endl;
}

void f_input(input *info) //функція вводу доних від користувача, приймає посилання на структуру
{
    info->name = inp_name();             //присвоєння члену структури введене користувачем ім'я при використанні функції вводу імені
    info->noun = inp_noun();             //присвоєння члену структури введене користувачем іменника у множні при використанні функції
    info->numeric = inp_numeric();       //присвоєння члену структури введене користувачем числа при використанні функції
    info->body = inp_part_of_the_body(); //присвоєння члену структури введене користувачем частини тіла при використанні функції
    info->verb = inp_verb();             //присвоєння члену структури введене користувачем дієслова при використанні функції
}

//Треба заборонити спецсимволи!!
string inp_name() //функція вводу імені користувача, що повертає рядок
{
    bool ind = 0;
    char buf[SIZE];
    cout << "Input name" << endl;
    cin.getline(buf, SIZE);
    do
    {
        for (int i = 0; buf[i] != '\0'; i++)
            if (!(isupper(buf[0]) && isalpha(buf[i])) || buf[1] == '\0' || buf[0] == '\0')
            {
                cout << "Not correct. Input name" << endl;
                cin.getline(buf, SIZE);
                ind = 1;
            }
            else
            {
                ind = 0;
            }
    } while (ind);
    all_lower(buf);
    buf[0] = toupper(buf[0]);
    return string(buf);
}

string inp_noun()
{
    bool ind = 0;
    char buf[SIZE];
    cout << "Input noun in the plural" << endl;
    cin.getline(buf, SIZE);
    do
    {
        for (int i = 0; buf[i] != '\0'; i++)
            if (!((buf[strlen(buf) - 1] == 's' || (buf[strlen(buf) - 1] == 'S')) && isalpha(buf[i])) || buf[1] == '\0' || buf[0] == '\0')
            {
                cout << "Not correct. Input noun in the plural" << endl;
                cin.getline(buf, SIZE);
                ind = 1;
            }
            else
            {
                ind = 0;
            }
    } while (ind);
    all_lower(buf);
    return string(buf);
}

string inp_numeric()
{
    bool ind = 0;
    char buf[SIZE];
    cout << "Input numeric (used numbers 0-9)" << endl;
    cin.getline(buf, SIZE);
    do
    {
        for (int i = 0; buf[i] != '\0'; i++)
            if (buf[i] < 48 || buf[i] > 57)
            {
                cout << "Not correct. Input numeric" << endl;
                cin.getline(buf, SIZE);
                ind = 1;
            }
            else
            {
                ind = 0;
            }
    } while (ind);
    return string(buf);
}

string inp_verb()
{
    ifstream f;
    bool ind = 0;
    char buf[SIZE];
    cout << "Input verb" << endl;
    cin.getline(buf, SIZE);
    f.open("dictionary_of_verbs.txt");
    if (!f.is_open())
    {
        cout << "error opening file" << endl;
    }

    char d_o_v[SIZE];
    do
    {

        f.open("dictionary_of_verbs.txt");
        if (!f.is_open())
        {
            cout << "error opening file" << endl;
        }

        char d_o_v[SIZE];
        do
        {
            f >> d_o_v;
        } while (strcmp(d_o_v, buf) != 0 && !f.eof() && (f.get() != '\0'));

        if (strcmp(d_o_v, buf) != 0)
        {
            cout << "Not correct. Input verb" << endl;
            cin.getline(buf, SIZE);
            ind = 1;
        }
        else
        {
            ind = 0;
        }
    } while (ind);
    f.close();
    all_lower(buf);
    return string(buf);
}

string inp_part_of_the_body()
{
    bool ind = 0;
    char buf[SIZE];
    ifstream f;
    cout << "Input part of the body" << endl;
    cin.getline(buf, SIZE);
    do
    {
        f.open("parts_of_the_body.txt");
        if (!f.is_open())
        {
            cout << "error opening file" << endl;
        }

        char p_o_t_b[99];
        do
        {
            f >> p_o_t_b;
        } while (strcmp(p_o_t_b, buf) != 0 && !f.eof() && (f.get() != '\0'));

        if (strcmp(p_o_t_b, buf) != 0)
        {
            cout << "Not correct. Input part of the body" << endl;
            cin.getline(buf, SIZE);
            ind = 1;
        }
        else
            (ind = 0);
    } while (ind);
    f.close();
    all_lower(buf);
    return string(buf);
}

/*-------------------------------------------------------------------------------------
 це і нижче пов'язане з функцією мови пітуна, з докладними коментами, як це працює
-------------------------------------------------------------------------------------

typedef deque<string> умовно контейнер для стрінгу в якому лежить префікс
vector<string> теж контейнер для стрінгів(лежить суфікс)
 принципово робити різні, бо в них трошки різні фічі
 map - щось типу аналог словників на пітоні, пара: ключ, значення, де ключ це наш префікс, значення - суфікс
 по певному префіксу програмка вибирає суфікс, суть рандомізації, що до однакових префіксів шляхом
 повторення слів в реченнях можуть прив'язатись різні суфікси і воно, будуючи текст, може перескакувати, циклитись,
 але оскільки наші рандомні префікси/суфікси це зв'язки слів, речення виходять адекватні */
typedef deque<string> Prefix;

map<Prefix, vector<string>> statetab;

enum
{
    NPREF = 1,    //кількість елементів у контейнері префіксу  || 1 - тотал рандом,
                  // 3 - треба велику базу щоб тупо не копіювало файлик
    NHASH = 1000, // 4093, size of state hash table array ((чесно без поняття, у шпури таке було я й написав))
    MAXGEN = 100  //ліміт генерованих слів
};

char NONWORD[] = "/n"; /*заглушка для контейнерів*/

// add:  додаємо слово в список суфіксів, і завантажуємо нове слово в префікс
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
void build(Prefix &prefix /*, istream& in*/)
{
    string buf;
    ifstream textfile;
    textfile.open("kubliy.txt");
    if (!textfile.is_open())
    {
        cout << "Error: cannot open pitun.txt file" << endl;
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
        vector<string> &suf = statetab[prefix];
        const string &w = suf[rand() % suf.size()];
        if (w == NONWORD)
            break;
        if (!(i % 8))
        {
            result += "\n";
        }
        result += w;
        result += " ";

        // cout << w << " ";
        // if(!i%10) {cout << "\n";} //перенос рядка кожне 10 слово,
        //з розрахунку що 10 слів десь в рядок влазить нам
        prefix.pop_front(); // просуваємось на один префікс вперед
        prefix.push_back(w);
    }
    return result;
}

string pitun_speak(int nwords)
{
    if (nwords > MAXGEN)
    {
        nwords = MAXGEN;
    }                               //щоб не вилізати за рамки сцени
    srand(time(0));                 //сід для рандому
    Prefix prefix;                  // поточний префікс
    for (int i = 0; i < NPREF; i++) //ініціалізуємо його заглушками
        add(prefix, NONWORD);
    build(prefix /*, cin*/);          // зчитуємо файл, формуємо таблицю
    add(prefix, NONWORD);             // в результаті білд у нас префікс стоїть в кінці тексту, скидуємо його
    string result = generate(nwords); // друк реплік.
    return result;
}
