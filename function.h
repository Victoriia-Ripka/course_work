
//Функції кидати сюди
#include "script.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream> // opening file in pitun_speak()
#include <map>  //statetab map in pitun_speak()
#include <vector> //suffix in pitun_speak()
#include <deque> //prefix in pitun_speak()

using namespace std;

class input{
    public:
    string name,
           noun,
           numeric,
           body,
           verb;
};


void introduction();
void show_scene(scene a);
void poloska();
void f_input(input* info);
void inp_name(string name);
void inp_noun(string noun);
void inp_numeric(string numeric);
void inp_verb(string verb);
void inp_part_of_the_body(string body);
void is_name(char name[SIZE]);
void is_noun(char noun[SIZE]);
void is_numeric(char numeric[SIZE]);
void is_part_of_the_body(char body[SIZE]);
void all_lover(char* word);
void is_verb(char verb[SIZE]);
void all_lower(char* word);

//Генерує n випадкових слів тіпа денаціифакція, біолабораторії та інші скрєпні речі
void pitun_speak(int nwords);

void scene::set(int ls, string n, string t){
    landscape = ls;
    strcpy(name,n);
    strcpy(text,t);
};

void all_lower(char* word){
    int i=0;
    while(*(word+i)!='\0'){
        *(word+i)=tolower(*(word+i));
        i++;
    }
}


void show_scene(scene a){
    //Переводить курсор в лівий верхній вугол, тіп створює новий слайд
    cout << "\033[2J\033[1;1H";
    //Візуалізація написананого
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
    all_lower(info->name);
    *(info->name) = toupper(*(info->name));
    all_lower(info->noun);
    all_lower(info->body);
    all_lower(info->verb);

}

void inp_part_of_the_body(string body){
    char buf[SIZE];
    cout << "Input part of the body" << endl;
    cin.getline(buf, SIZE);
    is_part_of_the_body(buf);
    body = string(buf);
}

//Треба заборонити спецсимволи!!
void inp_name(string name){
    char buf[SIZE];
    cout << "Input name" << endl;
    cin.getline(buf, SIZE);
    is_name(buf);
    name = string(buf);
}

void is_name(char name[SIZE]){
    for (int i = 0; name[i] != '\0'; i++)
        if (!(isupper(name[0]) && isalpha(name[i]))  || name[1] != '\0' || name[0] != '\0')
        {
            cout << "Not correct. Input name" << endl;
            cin.getline(name, SIZE);
            is_name(name);
        }
}

void inp_noun(string noun){
    char buf[SIZE];
    cout << "Input noun in the plural" << endl;
    cin.getline(buf, SIZE);
    is_noun(buf);
    noun = string(buf);
}

void is_noun(char noun[SIZE]){
    for (int i = 0; noun[i] != '\0'; i++)
        if (!((noun[strlen(noun)-1] == 's' ||(noun[strlen(noun)-1] == 'S')) && isalpha(noun[i]))  || name[1] != '\0' || name[0] != '\0')
        {
            cout << "Not correct. Input noun in the plural" << endl;
            cin.getline(noun, SIZE);
            is_noun(noun);
        }
}

void inp_numeric(string numeric){
    char buf[SIZE];
    cout << "Input numeric (used numbers 0-9)" << endl;
    cin.getline(buf, SIZE);
    is_numeric(buf);
    numeric = string(buf)
}

void inp_verb(string verb){
    char buf[SIZE];
    cout << "Input verb" << endl;
    cin.getline(buf, SIZE);
    is_verb(buf);
    verb = string(buf);
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

enum{
	NPREF = 2,     //кількість елементів у контейнері префіксу  || 1 - тотал рандом,
                   //3 - треба велику базу щоб тупо не копіювало файлик
	NHASH = 1000,  //4093, size of state hash table array ((чесно без поняття, у шпури таке було я й написав)) 
	MAXGEN = 100 //ліміт генерованих слів
};

char NONWORD[] = "/n"; /*заглушка для контейнерів*/

// add:  додаємо слово в список суфіксів, і завантажуємо нове слово в префікс
void add(Prefix& prefix, const string& s){
	if (prefix.size() == NPREF){
		statetab[prefix].push_back(s);
		prefix.pop_front();
	}
	prefix.push_back(s);
}

// build: відкриваємо файл, з нього зчитуємо по слову і додаємо в список, вибудовуючи тим самим хеш-таблицю
void build(Prefix& prefix/*, istream& in*/) {
	string buf;
	ifstream textfile;
	textfile.open("kubli.txt");
	if(!textfile.is_open()){
		cout << "Error: cannot open pitun.txt file" << endl; 
		return;
	}	
	while(textfile >> buf)
		add(prefix, buf);
		
}

//generate: генеруємо репліки, по одному слову через пробіл
void generate(int nwords) {
	Prefix prefix;
	int i;
	for (i=0; i<NPREF; i++) //скидуємо префікс і робимо його з заглушок, щоб початок працював коректно
		add(prefix, NONWORD);
	for (i=0; i<nwords; i++){
		vector<string>& suf = statetab[prefix];
		const string& w = suf[rand() % suf.size()];
		if (w == NONWORD)
			break;
		cout << w << " ";
        if(!i%10) {cout << "\n";} //перенос рядка кожне 10 слово, 
                                  //з розрахунку що 10 слів десь в рядок влазить нам
		prefix.pop_front(); // просуваємось на один префікс вперед
		prefix.push_back(w);
	}
}

void pitun_speak(int nwords) {
	if (nwords > MAXGEN) {nwords = MAXGEN;} //щоб не вилізати за рамки сцени
	srand(time(0)); //сід для рандому
	Prefix prefix; // поточний префікс 
	for (int i=0; i<NPREF; i++) //ініціалізуємо його заглушками
		add(prefix, NONWORD);
	build(prefix/*, cin*/); // зчитуємо файл, формуємо таблицю
	add(prefix, NONWORD);  // в результаті білд у нас префікс стоїть в кінці тексту, скидуємо його
	generate(nwords);     // друк реплік.

}
