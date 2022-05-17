#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

#define SIZE 99
//ім'я персонажа, іменник у множині, число, частина тіла, дієслово

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

int is_part_of_the_body(char body[SIZE])
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

    char d_o_v[10];
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

int main()
{
    char name[SIZE],
        noun[SIZE],
        numeric[SIZE],
        body[SIZE],
        verb[SIZE];

    cout << "Input name" << endl;
    cin.getline(name, SIZE);
    while (!isupper(name[0]) || name[1] == '\0' || name[0] == '\0')
    {
        cout << "Not correct. Input name" << endl;
        cin.getline(name, SIZE);
    }

    cout << "Input noun in the plural" << endl;
    cin.getline(noun, SIZE);
    if (noun[2] == '\0' || noun[0] == '\0' || noun[1] == '\0' || noun[sizeof(noun) - 1] != 's')
    {
        cout << "Not correct. Input noun in the plural" << endl;
        cin.getline(noun, SIZE);
    }

    cout << "Input numeric (used numbers 0-9)" << endl;
    cin.getline(numeric, SIZE);
    is_numeric(numeric);

    cout << "Input part of the body" << endl;
    cin.getline(body, SIZE);
    is_part_of_the_body(body);

    cout << "Input verb" << endl;
    cin.getline(verb, SIZE);
    is_verb(verb);

    cout << name << " " << noun << " " << numeric << " " << body << " " << verb << endl;
    return 0;
}
