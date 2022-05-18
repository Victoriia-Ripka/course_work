// //Функції кидати сюди
// #include <iostream>
// #include <fstream>
// #include <cstring>

// #include "script.h"

// using namespace std;

// #define SIZE 99


// class input{
//     public:
//     char name[SIZE],
//          noun[SIZE],
//          numeric[SIZE],
//          body[SIZE],
//          verb[SIZE];
// };


// void introduction();
// void show_scene(scene a);
// void poloska();
// void f_input(input* info);
// void inp_name(char name[SIZE]);
// void inp_noun(char noun[SIZE]);
// void inp_numeric(char numeric[SIZE]);
// void inp_verb(char verb[SIZE]);
// void inp_part_of_the_body(char body[SIZE]);
// void is_numeric(char numeric[SIZE]);
// void is_part_of_the_body(char body[SIZE]);
// void is_verb(char verb[SIZE]);





// void show_scene(scene a){
//     //Переводить курсор в лівий верхній вугол, тіп створює новий слайд
//     cout << "\033[2J\033[1;1H";//Важлива поєбота, не стирати 
//                                 //краще б ти написав, що ця поєбота робить -_-
//     //Малюнки персонажів
//     //Заглушечка на 15 строчок
//     for(int i=0;i<15;i++){
//         cout << endl;
//     }

//     // //Перевірка, чи є спікер в сцені
//     // // if(a.speaker != '\0'){
//     //     poloska();
//     //     cout << a.speaker;
//     // // }
//     poloska();
//     //cout << a.text;
//     //Заглушечка
//     for(int i=0;i<8;i++){
//         cout << endl;
//     }
// }

// void poloska(){
//     for(int i=0; i<80; i++){
//         cout << '-';
//     }
// }

// void f_input(input* info){
//     inp_name(info->name);
//     inp_noun(info->noun);
//     inp_numeric(info->numeric);
//     inp_part_of_the_body(info->body);
//     inp_verb(info->verb);
// }

// void inp_name(char name[SIZE]){
//     cout << "Input name" << endl;
//     cin.getline(name, SIZE);
//     while (!isupper(name[0]) || name[1] == '\0' || name[0] == '\0')
//     {
//         cout << "Not correct. Input name" << endl;
//         cin.getline(name, SIZE);
//     }
// }

// void inp_noun(char noun[SIZE]){
//     cout << "Input noun in the plural" << endl;
//     cin.getline(noun, SIZE);
//     while (noun[2] == '\0' || noun[0] == '\0' || noun[1] == '\0' || (noun[strlen(noun)-1] != 's'))
//     {
//         cout << "Not correct. Input noun in the plural" << endl;
//         cin.getline(noun, SIZE);
//     }
// }
// void inp_numeric(char numeric[SIZE]){
//     cout << "Input numeric (used numbers 0-9)" << endl;
//     cin.getline(numeric, SIZE);
//     is_numeric(numeric);
// }

// void inp_part_of_the_body(char body[SIZE]){
//     cout << "Input part of the body" << endl;
//     cin.getline(body, SIZE);
//     is_part_of_the_body(body);
// }

// void inp_verb(char verb[SIZE]){
//     cout << "Input verb" << endl;
//     cin.getline(verb, SIZE);
//     is_verb(verb);
// }

// void is_numeric(char numeric[SIZE])
// {
//     for (int i = 0; numeric[i] != '\0'; i++)
//         if (numeric[i] < 48 || numeric[i] > 57)
//         {
//             cout << "Not correct. Input numeric" << endl;
//             cin.getline(numeric, SIZE);
//             is_numeric(numeric);
//         }
// }
// void is_noun(char noun[SIZE]){
// cout << "Input noun in the plural" << endl;
//     cin.getline(noun, SIZE);
//     while (noun[2] == '\0' || noun[0] == '\0' || noun[1] == '\0' || (noun[strlen(noun)-1] != 's'))
//     {
//         cout << "Not correct. Input noun in the plural" << endl;
//         cin.getline(noun, SIZE);
//     }
// }

// void is_part_of_the_body(char body[SIZE])
// {
//     ifstream f;
//     f.open("parts_of_the_body.txt");
//     if (!f.is_open())
//     {
//         cout << "error opening file" << endl;
//     }

//     char p_o_t_b[99];
//     do
//     {
//         f >> p_o_t_b;
//     } while (strcmp(p_o_t_b, body) != 0 && !f.eof() && (f.get() != '\0'));

//     if (strcmp(p_o_t_b, body) != 0)
//     {
//         cout << "Not correct. Input part of the body" << endl;
//         cin.getline(body, SIZE);
//         is_part_of_the_body(body);
//     }
//     f.close();
// }

// void is_verb(char verb[SIZE])
// {
//     ifstream f;
//     f.open("dictionary_of_verbs.txt");
//     if (!f.is_open())
//     {
//         cout << "error opening file" << endl;
//     }

//     char d_o_v[SIZE];
//     do
//     {
//         f >> d_o_v;
//     } while (strcmp(d_o_v, verb) != 0 && !f.eof() && (f.get() != '\0'));

//     if (strcmp(d_o_v, verb) != 0)
//     {
//         cout << "Not correct. Input verb" << endl;
//         cin.getline(verb, SIZE);
//         is_verb(verb);
//     }
//     f.close();
// }
