#include "models.h"

//Туто клас сцена - в якому зберігається вся інформація про сцену
class scene
{ //
public:
    void set(int ls, string n, string text);
    //Якщо 1-5 то пейзаш з бібліотеки
    int landscape;
    //Ім'я говорячого в сцені
    //Якщо "\0" то слова автора
    string name;
    //Відповідно тест сцени
    string text;
};

void cut_paste(input info, scene *a)
{
    string temp;
    temp = "Shrek had been living in his den in a swamp. … His life wasn’t beautiful, but that one wasn’t complaining. Lived quietly, enjoyed morning’s fragrances of swamp, frog’s croaks, which didn’t let him to fall asleep at night and " + info.verb + "  with his friend Donkey.";
    (*a).set(1, "\0", temp);
    (*(a + 1)).set(2, "\0", "But the neighboring Kingdom wasn’t sharing Shrek’s happiness. It was ruled by an old, unwashed, plush dwarf. His Kingdom had a name that speaks for itself - Mordor. Pitun was a strict ruler, however, it didn’t embarrass its people. They, being unable to think, were conversely happy about a strong hand and happily satisfied all the whims of Pitun.");
    temp = "Once upon a time Pitun looked at a swamp of Shrek and began to feel envious. That one had an asphalt in his swamp and ate Nutella in the evenings. Shrek’s streets were nightly lit by the lanterns. But the " + info.noun + " caused him the most envy. Therefore Pitun decided to denazify the swamp.";
    (*(a + 2)).set(3, "\0", temp);
    //(*(a+)).set();
}
/*
string a = "blalalal"
srting b = "blANblalqa"
steirn c = a + " body name " + b;
*/
