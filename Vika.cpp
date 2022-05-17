#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
//ім'я персонажа, іменник у множині, число, частина тіла, дієслово

int is_numeric(char numeric[99])
{
    for (int i = 0; numeric[i] != '\0'; i++)
        if (numeric[i] < 48 || numeric[i] > 57)
        {
            cout << "Not correct. Input numeric" << endl;
            cin.getline(numeric, 99);
            is_numeric(numeric);
        }
    return 0;
}

int is_part_of_the_body(char body[99])
{
    ifstream f;
    f.open("parts_of_the_body.txt");
    if (!f.is_open())
    {
        cout << "error opening file" << endl;
        return 0;
    }

    char p_o_t_b[9];
    do
    {
        f >> p_o_t_b;
    } while (strcmp(p_o_t_b, body) != 0 && !f.eof() && (f.get() != '\0'));

    if (strcmp(p_o_t_b, body) != 0)
    {
        cout << "Not correct. Input part of the body" << endl;
        cin.getline(body, 99);
        is_part_of_the_body(body);
    }
    f.close();
    return 0;
}

int is_verb(char verb[99])
{
    ifstream f;
    f.open("dictionary_of_verbs.txt");
    if (!f.is_open())
    {
        cout << "error opening file" << endl;
        return 0;
    }

    char d_o_v[10];
    do
    {
        f >> d_o_v;
    } while (strcmp(d_o_v, verb) != 0 && !f.eof() && (f.get() != '\0'));

    if (strcmp(d_o_v, verb) != 0)
    {
        cout << "Not correct. Input part of the body" << endl;
        cin.getline(verb, 99);
        is_verb(verb);
    }
    f.close();
    return 0;
}

int main()
{
    char name[99],
        noun[99],
        numeric[99],
        body[99],
        verb[99];

    cout << "Input name" << endl;
    cin.getline(name, 99);
    while (!isupper(name[0]) || name[1] == '\0' || name[0] == '\0')
    {
        cout << "Not correct. Input name" << endl;
        cin.getline(name, 99);
    }

    cout << "Input noun in the plural" << endl;
    cin.getline(noun, 99);
    if (noun[2] == '\0' || noun[0] == '\0' || noun[1] == '\0' || noun[sizeof(noun) - 1] != 's')
    {
        cout << "Not correct. Input noun in the plural" << endl;
        cin.getline(noun, 99);
    }

    cout << "Input numeric (used numbers 0-9)" << endl;
    cin.getline(numeric, 99);
    is_numeric(numeric);

    cout << "Input part of the body" << endl;
    cin.getline(body, 99);
    is_part_of_the_body(body);

    cout << "Input verb" << endl;
    cin.getline(verb, 99);
    is_verb(verb);

    cout << name << " " << noun << " " << numeric << " " << body << " " << verb << endl;
    return 0;
}