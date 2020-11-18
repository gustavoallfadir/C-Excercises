#include <iostream>

using namespace std;

int main()
{   
    cout << "Bucle 'for' imprimiendo valores de un array" << endl;
    char letras[4];
    letras[0] = 'H';
    letras[1] = 'o';
    letras[2] = 'l';
    letras[3] = 'a';

    for (int i = 0; i <= 4; i++)
    {
        cout <<letras[i];
    }
    cout << endl;

    cout << "Bucle 'for' imprimiendo un rango de números del 1 al 100" << endl;
    for (int i = 1; i <=100; i++)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}