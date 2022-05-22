#include "models.h" //бібліотека підключення наших ілюстрацій до слайдів


//клас "сцена" - ключовий тип даних, головна одиниця інформації в нашій програмі
//В ньому зберігається вся інформація про кожний "слайд"
class scene 
{
public:
    //Функція set детальніше описана при її описі
    void set(int ls, string n, string text);
    //Номер бібліотечного модуля, що відповідає за "картинку" в слайді
    int landscape;
    //Ім'я говорячого в сцені
    //Якщо NO_NAME то слова автора
    string name;
    //Відповідно текст сцени
    string text;
};


void cut_paste(input info, scene *a) //функція виводу реплік, яка приймає структуру даних, що ввів користувач, і посилання на поточну сцену
{
    
    (*a).set(1, NO_NAME, info.name +" had been living in his lair in a swamp. His life wasn't beautiful,\n"
    "but that one wasn't complaining. Lived quietly, enjoyed morning's aromas\nof swamp, frog's croaks, which didn't "
    "let him fall asleep at night and\n" + info.verb + " with his friend Donkey.");

    
    (*(a + 1)).set(2, NO_NAME, "But the neighboring Kingdom wasn't sharing "+info.name+"'s happiness. It was ruled\nby an old,"
    " unwashed, plush dwarf. His Kingdom had a name that speaks for\nitself - Mordor. Pitun was a strict ruler, however, it didn't embarrass"
    "its\npeople. They, being unable to think, were conversely happy about a \"strong\nhand\" and happily satisfied all the whims of Pitun.");

    (*(a + 2)).set(3, NO_NAME, "Once upon a time Pitun looked at a swamp of "+info.name+" and began to feel envious.\nThat one had an asphalt in his swamp and"
    " ate Nutella in the evenings.\n" + info.name + "'s streets were nightly lit by the lanterns. But the " + info.noun + " caused\nhim the most envy."
    " Therefore Pitun decided to denazify the swamp.");
    
    (*(a + 3)).set(4, NO_NAME, "Pitun collected a military equipment from everywhere, issued the expired\nrations to the people and ordered to"
    " bomb "+info.name+"'s swamp at night. \nA faithful people outsteped the border without any hesitation.");

    (*(a + 4)).set(5, NO_NAME, "And the projectiles flew on the peaceful people of country Fayna Ukrayna, \nwhere the swamp of "+info.name+" was located."
    " An army of Pitun fired in everything \nit sees notably cruelly and cynically. "+info.name+" woke up because of loud shots.\n"
    "He suspected the insidiousness of Pitun, as well as his envy of " + info.noun + ".");

    (*(a + 5)).set(5, NO_NAME, "So he woke up with full awareness about what is happening. “He turned to\nits own again”, - he thought. "
    +info.name+" recomposed his bags, packed the Donkey,\nhaving an intention to leave for the neighboring Polandia. He realized in \na moment"
    " - all his life is here, he has nowhere to run, he is on his own\nland. "+info.name+" was faced with a choice that will change his life.");
    
    //тут має бути вибір 1) і 2)
    //якщо вибір 2 - з 6 по 9 проміжна сцена , якщо вибір 1 - перехід до 10 сцени

    (*(a+6)).set(6, "A border guard of Polandia:", "Your documents?");
    (*(a+7)).set(6, info.name, "Makes "+ info.verb +", pulls out a paper passport with a Trident");
    (*(a+8)).set(6, "*The border guards among themselves*", "– Pszcężshęirzshicęshirzchżsi…\n"
    "– Pzcężhęirzcęshirzhżi… (something in Polandian)");
    (*(a+9)).set(6, "A border guard of Polandia:", " Come back home. We won't pass you. You are more needed at home.");

    (*(a+10)).set(7, NO_NAME, "The next day. 10.00 a.m.\n"+info.name+" came to Territorial Defense for asking to join the honorable\nTerDefense "
    "of Fayna Ukrayna under the command of his long-time school\nfriend, a major Serhiy Prytula.");
    (*(a+11)).set(8, "Serhiy Prytula" , "Good morning, "+info.name+". Why did you come?");
    (*(a+12)).set(8, info.name ,"Hi. Em…. Why that?…, to defend my swamp, my friend Donkey and "+info.noun+",\nof course. All I have.");
    (*(a+13)).set(8, "Serhiy Prytula","We have already no places, all posts have long been occupied by others.\nFor 1 assault rifle - 300 willings.");
    (*(a+14)).set(8, info.name ,"So how do I be now? What should I do?");
    (*(a+15)).set(8, "Serhiy Prytula","I can… so to say, due to our long-time friendship, \nI can take you as a squadron commander.");
    (*(a+16)).set(8, info.name ,"Thank you, thank you!");
    (*(a+17)).set(8, "Serhiy Prytula","1500 hryvnias and the place is yours.");
    (*(a+18)).set(8, info.name ,"What…?!");
    (*(a+19)).set(8, NO_NAME ,info.name+" takes out his wallet from a pocket and looks. \nThere were "+ info.numeric +" hryvnias.");
    
    // розвилка 1, де цифра менша за 1500 з 20-ої сцена,
    // розвилка 2, де цифра більша за 1500 з 68-ої сцени

    (*(a+20)).set(8, info.name ,"OMG, I don't have enough money…");
    (*(a+21)).set(8, "Serhiy Prytula","Welp, so I can't help with anything. Go on.");
    (*(a+22)).set(8, info.name ,"Ok, I'll go! I wish the duck to " + info.verb + " you!");
    
    (*(a+23)).set(9, NO_NAME, "He went home again, lay down and did not know what to do.\nThe Donkey asks him:");
    (*(a+24)).set(9, "Donkey","What happened, dear friend?");
    (*(a+25)).set(9, info.name ,"Damn Prytula, it turns out to be corrupt! He didn't take me to the TerDefense.");
    (*(a+26)).set(9, "Donkey","Are you not fit enough for the army?");
    (*(a+27)).set(9, info.name ,"Oh… sciatica, scoliosis, vision -3, who will accept me?");
    (*(a+28)).set(9, "Donkey","Why don't you go to the hetman Powderbot? Didn't think about that?");
    (*(a+29)).set(9, info.name ,"WHAAAT?! To this potboiler?! Never!");
    (*(a+30)).set(9, "Donkey","But he will give you a weapon, and will give you ammunition. And when the\nmoment will appear -"
    " it is possible to run away. Think about it.");
    (*(a+31)).set(9, NO_NAME, info.name + " thought it over very thoroughly.");

    // вибір 1.1) і 1.2)
    // якщо користувач вибирає 1, показати сцени з 32 по 47 і вийти з програми 

    (*(a+32)).set(10, NO_NAME, info.name + " came to the insidious hetman Powderbot and asked to join his army.");
    (*(a+33)).set(10, info.name, " Take me, Mr. Powderbot. I want to kill Pitun.");
    (*(a+34)).set(10, "Mr. Powderbot", "You don't fit, " + info.name + ". You have no experience.");
    (*(a+35)).set(10, info.name, "During your cadence, I fought for 5 years as a member of the 69th Motorized\nRifle Brigade."
    " That's not true, I have experience.");
    (*(a+36)).set(10, "Mr. Powderbot", "Really?");
    (*(a+37)).set(10, info.name, "I have the honor to say, Mr.");
    (*(a+38)).set(10, NO_NAME, info.name + " lied brazenly, but for noble motives."
    " Powderbot immediately figured\nout the plan of the cunning " + info.name + ", but he liked the cossack, so he\nleft with him in his base.");

    (*(a+39)).set(11, NO_NAME, info.name + " got an equipment, an accessoire for the " + info.body + " specially as a present\nfrom Powderbot,"
    " as a sign of his love. During the preparation for the\nfight in a castle of Powderbot, a spark between them grew out in\na flame,"
    " which is able to burn Mordor out, even twice!");

    (*(a+40)).set(2, NO_NAME, info.name + " set out as a part of Powderbot's army on a campaign directly to the\ncapital of Mordor - Belgorod."
" Pitun was not ready for this, so came out\nto negotiate with Powderbot. He had known that a hetman, who came to him, \nis a real miser.");
    (*(a+41)).set(12, "Pitun", "I give you a $1.000.000 and a chocolate factory in my capital, but you\ngive me Fayna Ukrayna");
    (*(a+42)).set(12, "Powderbot", "Do you want a chocolate fig?");
    (*(a+43)).set(12, "Pitun", "Well, OK, $2.000.000.");
    (*(a+44)).set(12, "Powderbot", "Hmmm… It's tempting. Take these two chocolate Santas, you'll have 'em.");
    (*(a+45)).set(12, "Pitun", Pitun_speak(15+rand()%20) + "…");

    (*(a+46)).set(13, NO_NAME, "Out of anger, he took out a cannon and started firing at Powderbot. \nWith a well-aimed shot Pitun hit straight"
    " at his " + info.body + ". \n" + info.name + " was overwhelmed with rage. He saw this horror through\nthe window in the negotiating room and "
    "wanted revenge for the hetman.");
    (*(a+46)).set(13, NO_NAME, "Jumping into the same window, he grabbed Pitun from behind and cut off his \nthroat. A lot of " + info.noun +
    " were lying on the table in the room. " + info.name + " fell into\na stupor. \"This would save his life!\" - he thought.");

    (*(a+47)).set(14,NO_NAME, "Seeing this, Powderbot resurrected. Universal good has defeated universal\nevil, and " + info.name + " moved to Powderbot "
    "to live on the estate, co-owning\nfinancial wealth of " + info.numeric + "0 thousands of hryvnias.");

    // вибір 2, продовження після 31-ої сцени

    (*(a+48)).set(9, info.name, "I do not trust a Chocolate king, let's better have guerilla warfare.\nLet's better go to the forest,"
    " I had a woman I knew for a long time. \nShe has been doing guerilla warfare since 14's year." );
    (*(a+49)).set(9, "Donkey", "I don't like this idea, but I'll not leave you alone.");
    //31
    (*(a+50)).set(15, NO_NAME, "In the dark forest, where the cunning Pitun walks, hid Fiona, the\nleader of the guerrilla movement in the forests of Fayna Ukrayna.");
    (*(a+51)).set(15, "Fiona", "Stop! I'll shoot! Hey, say \"Palianytsia\"!");
    (*(a+52)).set(15, info.name, "From what will you shoot? Assault rifles will be? You don't recognize an\nold friend, do you?"
    " We worked gathering strawberries in Polandia for so\nmany years.");
    (*(a+53)).set(15, "Fiona", "Machine guns will be! Hello. I haven't recognized you immediately.\nWhy did you come? You wanna change zlotys per"
    " 5 hryvnias again?!\nThis time you will not deceive me.");

    (*(a+54)).set(15, info.name, "No, no, what zlotys, what a person you are… There's a war in the country.\nI wanna fight. Pitun took aim on "
    "my " + info.noun + ", I must defend them.");
    (*(a+55)).set(15, "Fiona", "Oh, he doesn't need those…");
    (*(a+56)).set(15, info.name, "Trust me, it's 100 percent info!");
    (*(a+57)).set(15, NO_NAME, "After much persuasion, Fiona agreed, though she didn't take it seriously.");

    (*(a+58)).set(16, NO_NAME, info.name + " was right. With the first rays of the sun, Pitun's troops began\nto appear on the horizon. This was evidenced"
    " by the long shadows of\nwashing machines and curling irons stolen by the Pitun's army.");
    (*(a+59)).set(16, "Fiona", "Take Javelins out! Everyone, get ready!");
    (*(a+60)).set(16, info.name, "OMG, you even have this?!");
    (*(a+61)).set(16, "Pitun", pitun_speak(15+rand()%20));
    (*(a+62)).set(16, "Fiona", "On combat positions! Aim!... Fire!");
    (*(a+63)).set(16, "Pitun", pitun_speak(15+rand()%20));
    (*(a+64)).set(16, NO_NAME, "Realizing the deplorable situation, Pitun began to flee from the positions,\nsacrificing his army for his own life. " + info.name + " started the chase.");


    (*(a+65)).set(17, NO_NAME, "He shot Pitun with an accurate shot from Javelin, but the blast wave was so\nstrong that it caused \"cotton\" for all the Mordor's"
    " ammunition. A fragment\nof the projectile hit his" + info.body + ".");
    (*(a+66)).set(17, NO_NAME, "The " + info.name + "'s wound turned out to be deadly. By the time Fiona came to\nthe rescue, his body was covered in blood. "
    "Out of despair, she " + info.verb + ".\nFiona was very disappointed because she actually loved " + info.name + ".");
    (*(a+67)).set(18, NO_NAME, "Although Pitun's death turned into a victory for Fayna Ukrayna, that forest\nstill remained shrouded in the weeping and grief of Fiona.");

    // продовження з ТерОбороною, якщо число більше за 1500

    (*(a+68)).set(8, info.name, "You rob me, my friend, but my homeland is priceless.");
    (*(a+69)).set(8, "Serhiy Prytula", "Do not invent nonsense, as from yours " + info.numeric +" hryvnias subtract 1500, you\nwill not become much poorer. But that will"
    " go for an army, we will\nbuy 20 nuclear toilets of type “land-air” to close 4 positions. We will\nstrike a preventive shot. Here I took the map, I'll show you.");

    (*(a+70)).set(19, NO_NAME, "Under " + info.name + "'s command, a diversionary reconnaissance group was set up to\nexplore areas in the woods near his swamp. He chose that task for himself,\n"
    "suspecting Pitun's true purposes. He guessed that that one will come\nfor " + info.noun + " personally. Armed, the soldiers took up positions.");

    (*(a+71)).set(20, NO_NAME, "No one believed it, but it happened as expected. Putin personally came to \nthe forest. He really expected to"
    " receive " + info.noun + " and " + info.name + "'s " + info.body + " as trophies.\nHe had no ideas about a possible ambush.");
    (*(a+72)).set(20, NO_NAME, pitun_speak(15+rand()%20)+"\n\n - muttered Pitun under his nose.");
    (*(a+73)).set(20, info.name , "\"How dare you say that about my Fatherland?!\" \n- he thought and filled himself with rage.");
    (*(a+74)).set(20, NO_NAME, "As soon as Pitun approached the glorious swamp, " + info.name + " jumped out of\nthe trench, bent his arms and put the assault rifle to the temple.");

    (*(a+75)).set(21, info.name, "Well, here you are, our not-sweet lad.");
    (*(a+76)).set(21, "Pitun", pitun_speak(15+rand()%20) + " \n\n - that one turned to its own again.");
    (*(a+77)).set(21, info.name, "So, you scoundrel, the conversation with you will be short. You wanted \n" + info.noun + " and " + info.body + " A fig"
    " with poppy to you! You will get what you deserve.");
    (*(a+78)).set(21, info.name, "Tell your troops to pierce their " + info.body + " with knives. Quickly!");
    (*(a+79)).set(21, "Pitun", pitun_speak(15+rand()%20) + "\n\n - like doesn't know any other words.");
    (*(a+80)).set(21, info.name + "'s soldiers", "So, we'll do it by ourselves!");
    (*(a+81)).set(21, NO_NAME, "\n\n\t   *this scene was cut off for the purposes of censorship*");

    (*(a+82)).set(22, NO_NAME, info.name + " protected his swamp and his lair, and didn't give up " + info.noun + ".\nIn gratitude to the soldiers"
    " for their cooperation, he gave one to each\nof them. “These affairs deserve such an award” - he considers.");
    (*(a+83)).set(22, NO_NAME, "He sold the obtained " + info.body + " and earned a lot of money on it. God took away,\nGod thanked. 15000 of dollars were now heating in\nhis wallet"
    "and a souvenir - Pitun's canned head, which always bubbled under\nthe nose strange random phrases like:\n" + pitun_speak(10+rand()%10)+"…");
    (*(a+84)).set(22, NO_NAME, info.name + " received a medal “For Courage“ from the President of Fayna Ukrayna,\nput an end to universal evil,"
    " and lived long and happily in his swamp.");
}
