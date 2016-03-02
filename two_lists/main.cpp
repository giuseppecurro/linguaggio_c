#include <iostream>
#include <string>
//versione 0.1
using namespace std;

struct slista {
    char c;
    slista *next;
};

class clista {
    slista *l;

  public:
    clista(){
        l=NULL;
    }

    void push(char c){
        slista *p;
        p=new(slista);
        p->c=c;
        p->next=l;
        l=p;
    }


    void pop(){
        slista* p;
        if (l){
                p=l;
                l=p->next;
                delete p;
        }
    }

    void mostra(){
        slista *p;
        p=l;
        while (p){
            cout << p->c << "\t" << p <<endl;
            p=p->next;
        }
        cout << "====================="<<endl;
    }

    clista riempi(){
        slista *p;
        clista  z;
        p=l;
        while (p) {
            z.push(p->c);
            p=p->next;
        }
        return z;
    }
};


int main()
{
    clista w,z;
    w.push('r');
    w.pop();
    w.mostra();
    w.push('a');
    w.push('b');
    w.push('c');
    w.mostra();
    z=w.riempi();
    z.mostra();
    z.pop();
    z.mostra();
    return 0;
}
