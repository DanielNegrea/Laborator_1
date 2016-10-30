#include <iostream>

using namespace std;

int main()
{
    int valoare, pret, cantitate;
    cout << "Cantitatea : ";
    cin >> cantitate;
    cout << "Pretul : ";
    cin >> pret;
    valoare = cantitate * pret;
    cout << "Valoarea : " << valoare << endl;
    return 0;
}
