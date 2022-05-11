//пробую робити кістяк, навколо якого ми будемо кружляти танки

#include <iostream>
#include <string>
using namespace std;


// макет класу дрини миколаївни (ідею потім ще обговорим)
// думаю можна запихнути цей клас і його функції в окремий хедер файл в перспективі
class character {
    string name, surname, number, pluralNoun, bodyPart, musicInstrument, verb;
public:
    void setData(); //користувач задає текст
    friend void tellStory(character character); //щоб витягувати стрінги структури в функції історії

};

void character::setData(){ 
    cout << "Please, enter your name" << endl;
    cin >> name;

    cout << "Please, enter your surname" << endl;
    cin >> surname;

    cout << "Please, enter your number" << endl;
    cin >> number;

    cout << "Please, enter your plural noun (ending in s)" << endl;
    cin >> pluralNoun;

    cout << "Please, enter your body part" << endl;
    cin >> bodyPart;

    cout << "Please, enter your verb (ending in -ing)" << endl;
    cin >> verb;

    cout << "Please, enter your music instrument you wanna play on" << endl;
    cin >> musicInstrument;
}


//вступ з інструкціями для гри, ідея наче ок, для початку. + перед ним можна 
//аскіі картинку засунути і текст під нею уже
void introduction();

// власне уже виклик історії, передаємо структуру щоб додати ООП
// в перспективі сюди впихнути інші функції для розвилок, але це ще придумати треба
void tellStory(character character);

int main(){

    character KD_Williams;

    introduction();
    KD_Williams.setData();
    tellStory(KD_Williams);
    return 0;

}

void introduction()
{
    string userAns;

    cout << "You are about to play MadMusicians, custom version of MadLibs Game.";
    cout << "If you need game instructions enter \"Y\".\nOtherwise, enter whatever: " << endl;
    cin >> userAns;
    
    if(userAns == "Y" || userAns == "y")
    {
        cout << "\nMadMusicians is a word game. You are asked for words to create \nyou own history ";
        cout << "about your future in music bands" << endl;
    }
    cout << endl << endl;
}

void tellStory(character character){
    cout << "A famous artist " << character.name << " " << character. surname; 
    cout << " went to a bar to make a live performance on " << character.musicInstrument;
    cout << ". Before initial entry, you were " << character.verb;
    cout << " near the bar. On purpose, your hater hitted you with " << character.number << " ";
    cout << character.pluralNoun << " to prevent you from playing. Given his motivation, he hurted your ";
    cout << character.bodyPart << ". You retired and started to learn KPI students to C++ programming";
    
}
