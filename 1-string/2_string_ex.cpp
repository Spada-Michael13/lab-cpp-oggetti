#include <iostream>
#include <string>
//stringhe 2
using namespace std;

/*
    size() e length()
    TODO: stampa la lunghezza della string passata in input
*/
void lunghezzaStringa(string stringa){
int x=stringa.size();
    cout << "lunghezza:" <<x<< endl;

}

/*
    find()
    TODO: immettere una stringa da tastiera e comunicare all'utente se è presente la parola "ciao"
            se la parola è presente, stampare "La parola ciao è presente"
            altrimenti stampare "La parola ciao NON è presente"
*/
void trovaCiao(string stringa){
int x=stringa.find("ciao");
 if(x>-1) {
        cout << "la parola ciao e' presente" << endl;
 }else{
     cout<<"la parola ciao NON e' presente"<<endl;
 }

}


/*
    replace()
    TODO: sostituire la parola "pizza" con la parola "pasta" e stampare la nuova stringa
*/
void sostituisciPizzaConPasta(string &stringa){
    int x=stringa.find("pizza");
if(x>-1){
    stringa.replace(x,x+5,"pasta");
    cout<<"sostituzione pizza con pasta: "<<stringa<<endl;
}


}


/*
    substr()
    TODO: estrarre e stampare la prima parola della stringa passata in input

    HINT: la prima parola termina al primo spazio (trovabile con find())
*/
void stampaPrimaParola(string stringa){
    // TODO
    int z=stringa.find(" ");
string x=stringa.substr(0,z);
cout<<"prima parola:"<<x<<endl;


}


/*
    insert()
    TODO: inserire alla fine della stringa passata in input " Giovanni!" e stampare la nuova stringa
*/
void aggiungiGiovanni(string frase){
int x=frase.size();
frase.insert(x," Giovanni");
    cout << frase << endl;

}

int main()
{

    string str;

    cout << "Inserire valore stringa: ";
    getline(cin, str);


    lunghezzaStringa(str);
    trovaCiao(str);
    sostituisciPizzaConPasta(str);
    stampaPrimaParola(str);
    aggiungiGiovanni(str);



    return 0;
}
