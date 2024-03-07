/*Leia a idade de uma pessoa expressa em anos, meses e dias e mostre-a expressa apenas em dias.
Obs: Considere cada mês com 30 dias.*/
#include <iostream>
using namespace std;
int main () {
    int anos , meses , dias;
    // anos
    cout << " Digite quantos anos você tem? ";
    cin >> anos;
    
    // meses
    cout << endl << " Digite quantos meses já passaram desde o seu aniversário? ";
    cin >> meses;
    
    // dias
    cout << endl << " Digite quantos dias já se passaram desde o seu aniversário? ";
    cin >> dias;
    
    int idade_somente_em_dias = anos*360 + meses*30 + dias;
    cout << endl << " Sua idade em dias são " << idade_somente_em_dias << " dias ";
    
    return 0;
}