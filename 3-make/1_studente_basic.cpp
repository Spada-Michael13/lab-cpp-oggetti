#include <iostream>
#include <string>

using namespace std;

/***************************************************************************
 *                      Utilizzo della classe studente                    */

class Studente {
public:
    string nome;
    int eta;
    float media;

    void stampaStudente(){
        cout << "Nome: " << nome << ", eta: " << eta << ", media: " << media << endl;
    }
};

int main()
{
    /*********************** Creazione di oggetti ******************************/
    // TODO Creare un nuovo studente "Mario" con eta 17 e media 7
    // TODO Creare un nuovo studente "Maria"  (questa volta con un puntatore) con eta 18 e media 8
Studente s;

s.nome="Mario";
s.eta=17;
s.media=7;

Studente s2;
Studente *p=&s2;
p->nome="Maria";
p->eta=18;
p->media=8;

s.stampaStudente();
p->stampaStudente();
    /************************** Visualizzazione ********************************/
    // TODO Visualizzare il nome e la media sia di Mario che Maria

    return 0;
}
