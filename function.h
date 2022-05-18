
//Функції кидати сюди
#include "script.h"

class input{
    public:
    char name[SIZE],
         noun[SIZE],
         numeric[SIZE],
         body[SIZE],
         verb[SIZE];
};


void introduction();
void show_scene(scene a);
void poloska();
void f_input(input* info);
void inp_name(char name[SIZE]);
void inp_noun(char noun[SIZE]);
void inp_numeric(char numeric[SIZE]);
void inp_verb(char verb[SIZE]);
void inp_part_of_the_body(char body[SIZE]);
void is_name(char name[SIZE]);
void is_noun(char noun[SIZE]);
void is_numeric(char numeric[SIZE]);
void is_part_of_the_body(char body[SIZE]);
void all_lover(char* word);
void is_verb(char verb[SIZE]);

//Генерує кілька випадкових слів тіпа денаціифакція, біолабораторії та інші скрєпні речі
void Pitun_speak();

void scene::set(int ls, char n[SIZE], char t[SIZE*5]){
    landscape = ls;
    strcpy(name,n);
    strcpy(text,t);
};

// void all_lover(char* word){
//     for(int i=0; i<){
//         word[i]=
//     }
// }


void show_scene(scene a){
    //Переводить курсор в лівий верхній вугол, тіп створює новий слайд
    cout << "\033[2J\033[1;1H";
    //Малюнки персонажів
    //Заглушечка на 15 строчок
    printscene(a.landscape);

    //Перевірка, чи є спікер в сцені
    if(strcmp(a.name, "\0")){
        poloska();
        cout << a.name << endl;
    }
    poloska();
    cout << a.text;
}

void poloska(){
    for(int i=0; i<80; i++){
        cout << '-';
    }
}

void introduction()
{
    string userAns;

    cout << "You are about to play *назва гри*, custom version of MadLibs Game.";
    cout << "If you need game instructions enter \"Y\".\nOtherwise, enter whatever: " << endl;
    cin >> userAns;
    
    if(userAns == "Y" || userAns == "y")
    {
        cout << "\n*назна гри* is a word game. You are asked for words to create \nyou own history ";
        cout << "about your *придумати про що*" << endl;
    }
    
    cin.ignore(numeric_limits<streamsize>::max(), '\n');//Очистка буфера
    cout << endl << endl;
}

void f_input(input* info){
    inp_name(info->name);
    inp_noun(info->noun);
    inp_numeric(info->numeric);
    inp_part_of_the_body(info->body);
    inp_verb(info->verb);
}

void inp_part_of_the_body(char body[SIZE]){
    cout << "Input part of the body" << endl;
    cin.getline(body, SIZE);
    is_part_of_the_body(body);
}

//Треба заборонити спецсимволи!!
void inp_name(char name[SIZE]){
    cout << "Input name" << endl;
    cin.getline(name, SIZE);
    is_name(name);
}

void is_name(char name[SIZE]){
    for (int i = 0; name[i] != '\0'; i++)
        if (!(isupper(name[0]) && isalpha(name[i])))
        {
            cout << "Not correct. Input name" << endl;
            cin.getline(name, SIZE);
            is_name(name);
        }
}

void inp_noun(char noun[SIZE]){
    cout << "Input noun in the plural" << endl;
    cin.getline(noun, SIZE);
    is_noun(noun);
}

void is_noun(char noun[SIZE]){
    for (int i = 0; noun[i] != '\0'; i++)
        if (!((noun[strlen(noun)-1] == 's') && isalpha(noun[i])))
        {
            cout << "Not correct. Input noun in the plural" << endl;
            cin.getline(noun, SIZE);
            is_noun(noun);
        }
}

void inp_numeric(char numeric[SIZE]){
    cout << "Input numeric (used numbers 0-9)" << endl;
    cin.getline(numeric, SIZE);
    is_numeric(numeric);
}

void inp_verb(char verb[SIZE]){
    cout << "Input verb" << endl;
    cin.getline(verb, SIZE);
    is_verb(verb);
}

void is_numeric(char numeric[SIZE])
{
    for (int i = 0; numeric[i] != '\0'; i++)
        if (numeric[i] < 48 || numeric[i] > 57)
        {
            cout << "Not correct. Input numeric" << endl;
            cin.getline(numeric, SIZE);
            is_numeric(numeric);
        }
}


void is_part_of_the_body(char body[SIZE])
{
    ifstream f;
    f.open("parts_of_the_body.txt");
    if (!f.is_open())
    {
        cout << "error opening file" << endl;
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
}

void is_verb(char verb[SIZE])
{
    ifstream f;
    f.open("dictionary_of_verbs.txt");
    if (!f.is_open())
    {
        cout << "error opening file" << endl;
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
}
