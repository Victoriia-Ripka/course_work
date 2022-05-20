#include "models.h" //бібліотека підключення наших ілюстрацій до слайдів

//клас сцена - головна одиниця інформації в нашій програмі
//В ньому зберігається вся інформація про кожний "Слайд"
class scene 
{
public:
    //Функція set детальніше описана при її описі
    void set(int ls, string n, string text);
    //Номер бібліотечного модуля, що відповідає за "картинку" в слайді
    int landscape;
    //Ім'я говорячого в сцені
    //Якщо "\0" то слова автора
    string name;
    //Відповідно тест сцени
    string text;
};

void cut_paste(input info, scene *a) //функція виводу реплік, яка приймає структуру даних, що ввів користувач і посилання на поточну сцену
{
    string temp; //ініціалізаця рядка, який буде виводитися на екран. При виводі в консоль буде містити потрібне слово
    temp = info.name +" had been living in his den in a swamp. … His life wasn’t beautiful, but that one wasn’t complaining. Lived quietly, enjoyed morning’s fragrances of swamp, frog’s croaks, which didn’t let him to fall asleep at night and " + info.verb + "  with his friend Donkey.";
    (*a).set(1, "\0", temp);
    (*(a + 1)).set(2, "\0", "But the neighboring Kingdom wasn’t sharing "+info.name+"’s happiness. It was ruled by an old, unwashed, plush dwarf. His Kingdom had a name that speaks for itself - Mordor. Pitun was a strict ruler, however, it didn’t embarrass its people. They, being unable to think, were conversely happy about a strong hand and happily satisfied all the whims of Pitun.");
    temp = "Once upon a time Pitun looked at a swamp of "+info.name+" and began to feel envious. That one had an asphalt in his swamp and ate Nutella in the evenings. Shrek’s streets were nightly lit by the lanterns. But the " + info.noun + " caused him the most envy. Therefore Pitun decided to denazify the swamp.";
    (*(a + 2)).set(3, "\0", temp);
    (*(a + 3)).set(4, "\0", "Pitun collected a military equipment from everywhere, issued the expired rations to the people and ordered to bomb "+info.name+"’s swamp at night. A faithful people outsteped the border without any hesitation.");
    temp = "And the projectiles flew on the peaceful people of country Fayna Ukrayna, where the swamp of "+info.name+" was located. An army of Pitun fired in everything it seas notably cruelly and cynically. "+info.name+" woke up because of loud shots. He suspected the insidiousness of Pitun, as well as his envy of " + info.noun + ".";
    (*(a + 4)).set(5, "\0", temp);
    (*(a + 5)).set(5, "\0", "So he woke up with full awareness about what is happening. “He turned to its own again”, - he thought . Shrek recomposed his bags, packed the Donkey, having an intention to leave for the neighboring Polandia . He realized in a moment - all his life is here, he has nowhere to run, he is on his own land. "+info.name+" was faced with a choice that will change his life.");
    //(*(a+)).set();
}
/*
string a = "blalalal"
srting b = "blANblalqa"
steirn c = a + " body name " + b;
*/
