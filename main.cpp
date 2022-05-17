/* Моменти, які варто нагадати, перед виконанням курсової роботи роботи
1. Май повагу до чужого труду. Не змінюй або видаляй чужий код без дозволу
2. Страйся писати розбірчивий код. (Нормальні назви змінних і функцій, не обічрана логіка і т.д.)
3. Коментарі лишніми не будуть ніколи
*/

#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

#define SIZE 99
//ім'я персонажа, іменник у множині, число, частина тіла, дієслово

class input{
    public:
    char name[SIZE],
         noun[SIZE],
         numeric[SIZE],
         body[SIZE],
         verb[SIZE];
};

void f_input(input* info);
void inp_name(char name[SIZE]);
void inp_noun(char noun[SIZE]);
void inp_numeric(char numeric[SIZE]);
void inp_verb(char verb[SIZE]);
void inp_part_of_the_body(char body[SIZE]);
int is_numeric(char numeric[SIZE]);
int is_part_of_the_body(char body[SIZE]);
int is_verb(char verb[SIZE]);

int main()
{
    input info;
    f_input(&info);
    cout << info.name << " " << info.noun << " " << info.numeric << " " << info.body << " " << info.verb << endl;
    return 0;
}


void f_input(input* info){
    inp_name(info->name);
    inp_noun(info->noun);
    inp_numeric(info->numeric);
    inp_part_of_the_body(info->body);
    inp_verb(info->verb);
}

void inp_name(char name[SIZE]){
    cout << "Input name" << endl;
    cin.getline(name, SIZE);
    while (!isupper(name[0]) || name[1] == '\0' || name[0] == '\0')
    {
        cout << "Not correct. Input name" << endl;
        cin.getline(name, SIZE);
    }
}

void inp_noun(char noun[SIZE]){
    cout << "Input noun in the plural" << endl;
    cin.getline(noun, SIZE);
    while (noun[2] == '\0' || noun[0] == '\0' || noun[1] == '\0' || (noun[strlen(noun)-1] != 's'))
    {
        cout << "Not correct. Input noun in the plural" << endl;
        cin.getline(noun, SIZE);
    }
}
void inp_numeric(char numeric[SIZE]){
    cout << "Input numeric (used numbers 0-9)" << endl;
    cin.getline(numeric, SIZE);
    is_numeric(numeric);
}

void inp_part_of_the_body(char body[SIZE]){
    cout << "Input part of the body" << endl;
    cin.getline(body, SIZE);
    is_part_of_the_body(body);
}

void inp_verb(char verb[SIZE]){
    cout << "Input verb" << endl;
    cin.getline(verb, SIZE);
    is_verb(verb);
}

int is_numeric(char numeric[SIZE])
{
    for (int i = 0; numeric[i] != '\0'; i++)
        if (numeric[i] < 48 || numeric[i] > 57)
        {
            cout << "Not correct. Input numeric" << endl;
            cin.getline(numeric, SIZE);
            is_numeric(numeric);
        }
    return 0;
}
void is_noun(char noun[SIZE]){
cout << "Input noun in the plural" << endl;
    cin.getline(noun, SIZE);
    while (noun[2] == '\0' || noun[0] == '\0' || noun[1] == '\0' || (noun[strlen(noun)-1] != 's'))
    {
        cout << "Not correct. Input noun in the plural" << endl;
        cin.getline(noun, SIZE);
    }
}

int is_part_of_the_body(char body[SIZE])
{
    ifstream f;
    f.open("parts_of_the_body.txt");
    if (!f.is_open())
    {
        cout << "error opening file" << endl;
        return 0;
    }

    char p_o_t_b[99];
    do
    {
        f >> p_o_t_b;
    } while (strcmp(p_o_t_b, body) != 0 && !f.eof() && (f.get() != '\0'));

    if (strcmp(p_o_t_b, body) != 0)
    {
        cout << "Not correct. Input part of the body" << endl;
        cin.getline(body, SIZE);
        is_part_of_the_body(body);
    }
    f.close();
    return 0;
}

int is_verb(char verb[SIZE])
{
    ifstream f;
    f.open("dictionary_of_verbs.txt");
    if (!f.is_open())
    {
        cout << "error opening file" << endl;
        return 0;
    }

    char d_o_v[SIZE];
    do
    {
        f >> d_o_v;
    } while (strcmp(d_o_v, verb) != 0 && !f.eof() && (f.get() != '\0'));

    if (strcmp(d_o_v, verb) != 0)
    {
        cout << "Not correct. Input verb" << endl;
        cin.getline(verb, SIZE);
        is_verb(verb);
    }
    f.close();
    return 0;
}
