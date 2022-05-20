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
    //string temp; //ініціалізаця рядка, який буде виводитися на екран. При виводі в консоль буде містити потрібне слово


    (*a).set(1, "\0", info.name +" had been living in his den in a swamp. … His life wasn’t beautiful,"
    " but that one wasn’t complaining. Lived quietly, enjoyed morning’s fragrances of swamp, frog’s croaks, which didn’t "
    "let him to fall asleep at night and " + info.verb + "  with his friend Donkey.");

    (*(a + 1)).set(2, "\0", "But the neighboring Kingdom wasn’t sharing "+info.name+"’s happiness. It was ruled by an old,"
    " unwashed, plush dwarf. His Kingdom had a name that speaks for itself - Mordor. Pitun was a strict ruler, however, it didn’t embarrass"
    " its people. They, being unable to think, were conversely happy about a strong hand and happily satisfied all the whims of Pitun.");

    (*(a + 2)).set(3, "\0", "Once upon a time Pitun looked at a swamp of "+info.name+" and began to feel envious. That one had an asphalt in his swamp and"
    " ate Nutella in the evenings. Shrek’s streets were nightly lit by the lanterns. But the " + info.noun + " caused him the most envy."
    " Therefore Pitun decided to denazify the swamp.");
    (*(a + 3)).set(4, "\0", "Pitun collected a military equipment from everywhere, issued the expired rations to the people and ordered to"
    " bomb "+info.name+"’s swamp at night. A faithful people outsteped the border without any hesitation.");

    (*(a + 4)).set(5, "\0", "And the projectiles flew on the peaceful people of country Fayna Ukrayna, where the swamp of "+info.name+" was located."
    " An army of Pitun fired in everything it seas notably cruelly and cynically. "+info.name+" woke up because of loud shots."
    " He suspected the insidiousness of Pitun, as well as his envy of " + info.noun + ".");

    (*(a + 5)).set(5, "\0", "So he woke up with full awareness about what is happening. “He turned to its own again”, - he thought . "
    "Shrek recomposed his bags, packed the Donkey, having an intention to leave for the neighboring Polandia . He realized in a moment"
    " - all his life is here, he has nowhere to run, he is on his own land. "+info.name+" was faced with a choice that will change his life.");
    
    //тут має бути вибір

    (*(a+6)).set(6, "A border guard of Polandia:", "– Your documents?");
    (*(a+7)).set(6, info.name, "makes "+ info.verb +", pulls out a paper passport with a Trident");
    (*(a+8)).set(6, "*The border guards among themselves*", "– Pszcężshęirzshicęshirzchżsi…\n"
    "– Pzcężhęirzcęshirzhżi… (something in Polandian)");
    (*(a+9)).set(6, "A border guard of Polandia:", " Come back home. We won’t pass you. You are more needed at home.");

    (*(a+10)).set(7, "\0", "10.00 a.m.. Shrek came to Territorial Defense for asking to join the honorable TerDefense "
    "of Fayna Ukrayna under the command of his long-time school friend, a major Serhiy Prytula.");

    (*(a+11)).set(8, "Serhiy Prytula" , " - Good morning, Shrek. Why did you come?");
    (*(a+12)).set(8, info.name ,"- Hi. Em…. Why that?.., to defend my swamp, my friend Donkey and "+info.noun+", of course. All I have.");
    (*(a+13)).set(8, "Serhiy Prytula","- We have already no places, all posts have long been occupied by others. For 1 automaton - 300 willings.");
    (*(a+14)).set(8, info.name ,"- So how do I be now? What should I do?");
    (*(a+15)).set(8, "Serhiy Prytula","- I can… so to say, due to our long-time friendship, I can take you as a squadron commander.");
    (*(a+16)).set(8, info.name ," - Thank you, thank you!");
    (*(a+17)).set(8, "Serhiy Prytula","- 1500 hryvnias and the place is yours.");
    (*(a+18)).set(8, info.name ,"- What…");
    (*(a+19)).set(8, "\0" ,"Shrek takes out his wallet from a pocket and looks. There was "+ info.numeric +" hryvnias.");
    
    // розвилка 1, де грошей не вистачає

    (*(a+20)).set(8, info.name ,"- OMG, I don't have enough money…");
    (*(a+21)).set(8, "Serhiy Prytula","- Welp, so I can’t help with anything. Go on.");
    (*(a+22)).set(8, info.name ,"- Ok, I’ll go! I wish the duck to " + info.verb + " you!");
    
    (*(a+23)).set(9, "\0", "He went home again, lay down, and did not know what to do. The Donkey asks him: ");
    (*(a+24)).set(9, "Donkey"," - What happened, dear friend?");
    (*(a+25)).set(9, info.name ," - Damn Prytula, it turns out to be corrupt! He didn't take me to the terdefense.");
    (*(a+26)).set(9, "Donkey","- Are you not fit enough for the army?");
    (*(a+27)).set(9, info.name ," - Oh… sciatica, scoliosis, vision -3, who will accept me?");
    (*(a+28)).set(9, "Donkey","- Why don't you go to the hetman Powderbot? Didn’t think about that?");
    (*(a+29)).set(9, info.name ,"- WHAAAT?! To this potboiler?! Never!");
    (*(a+30)).set(9, "Donkey","But he will give you a weapon, and will give you ammunition. And when the moment will appear -"
    " it is possible to run away. Think about it.");






    //(*(a+)).set();
}
/*
string a = "blalalal"
srting b = "blANblalqa"
steirn c = a + " body name " + b;
*/
