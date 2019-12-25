#include <iostream>

using namespace std;

string imie; int wiek;
int main()
{
    cout << "Jak masz na imie?:";
    cin >> imie;
    cout << "Podaj liczbe calkowita:";
    cin >> wiek;

    for(int i=1; i<=wiek; i++)
    {
        cout << i<<". "<< imie << endl;
    }
    return 0;
}
