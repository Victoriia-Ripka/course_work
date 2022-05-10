#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
typedef class Nameval Nameval;

class Nameval
{
public:
    string name;
    int value;
    Nameval *next;
};

//Додавання елементів
Nameval *newitem(string name, int value){
    Nameval *newp;
    newp = new Nameval;
    newp->name = name;
    newp->value = value;
    newp->next = NULL;
    return newp;
}

Nameval *addfront(Nameval *listp, Nameval *newp){
    newp->next = listp;
    return newp;
}

Nameval *addend(Nameval *listp, Nameval *newp){
    if (listp == NULL)
        return newp;
    Nameval *p;
    for (p = listp; p->next != NULL; p = p->next)
        ;
    p->next = newp;
    return listp;
}

Nameval *lookup(Nameval *listp, string name){
    for (; listp != NULL; listp = listp->next)
        if (name == listp->name)
            return listp;
    return NULL;
}

void freeall(Nameval *listp){
    Nameval *next;
    for (; listp != NULL; listp = next){
        next = listp->next;
        delete listp;
    }
}
//Видалення елементу
Nameval *delitem(Nameval *listp, char *name){
    Nameval *p, *prev;
    prev = NULL;
    for (p = listp; p != NULL; p = p->next){
        if (name == p->name){
            if (prev == NULL){
                listp = p->next;
            } else {
                prev->next = p->next;
            }
            delete p;
            return listp;
        }
        prev = p;
    }
    printf("delitem: %s not in list", name);
    return NULL;
}

void coolfun(Nameval *listp, void (*fn)(Nameval *, void *), void *arg){
    for (; listp != NULL; listp = listp->next)
        (*fn)(listp, arg);
}

void inccounter(Nameval *p, void *arg){
    int *ip;
    ip = (int *)arg;
    (*ip)++;
}

void print(Nameval *nameval, int count){
    int i;
    for (i = 0; i < count; i++){
        cout << nameval->name << ' ' << nameval->value << endl;
        nameval = nameval->next;
    }
}
//Копіювання елемента
Nameval *copy(Nameval *copied){
    Nameval *listp = NULL, *p = NULL, *prev = NULL;
    prev = NULL;
    for (; copied != NULL; copied = copied->next){
        p = newitem(copied->name, copied->value);
        if (prev == NULL){
            listp = p;}
        else{
            prev->next = p;}
        prev = p;
    }
    return listp;
}
//Злиття двух списків
Nameval *sluttya(Nameval *vm1, Nameval *vm2){
    Nameval *p;
    if (vm1 == NULL){
        return vm2;}
    for (p = vm1; p->next != NULL; p = p->next);
    p->next = vm2;
    return vm1;
}
//Розбиття списку на 2 частини
Nameval *rozbuttya(Nameval *listp, char *name){
    Nameval *p;
    for (p = listp; p != NULL; p = p->next){
        if (name == p->name){
            return p;
        }
    }
    return listp;
}

//Вставка перед конкретним елементом
Nameval *vstavka_before(Nameval *listp, Nameval *item, Nameval *newp){
    Nameval *p = NULL, *prev = NULL;
    for (p = listp; p != NULL; p = p->next){
        if (p == item){
            p = addfront(item, newp);
            if (prev == NULL){
                listp = p;
            } else{
                prev->next = p;
            }
            return listp;
        }
        prev = p;
    }
    return listp;
}
//Вставка після конктеного елемента
Nameval *vstavka_after(Nameval *listp, Nameval *item, Nameval *newp){
    Nameval *p;
    for (p = listp; p != NULL; p = p->next){
        if (p == item){
            item->next = addfront(item->next, newp);
            return listp;
        }
    }
    return listp;
}

int main(void){
    Nameval *listp = NULL;
    Nameval *listp2 = NULL;
    listp = addfront(listp, newitem("Григорій", 12));
    listp = addfront(listp, newitem("Макс", 45));
    listp = addfront(listp, newitem("Мирослав", 31));
    listp = vstavka_after(listp, listp->next, newitem("Після", 42));
    listp = vstavka_before(listp, listp->next, newitem("До", 18));
    print(listp, 5);
    cout << "\nВидалимо елемент Макс:\n";
    listp = delitem(listp, "Макс");
    print(listp, 4);
    cout << "\nРозбиття на 2 списки:\n";
    listp2 = rozbuttya(listp,"Після");
    cout << "Перший список:\n";
    print(listp, 2);
    cout << "Другий список:\n";
    print(listp2, 2);
    cout <<"\nЗлиємо 2 списки\n";
    listp = sluttya(listp, listp2);
    print(listp, 4);
}
