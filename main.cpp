#include <iostream>
#include <string>
using namespace std;

int numero1;
int numero2;

string respuesta;

bool repetir = true;
bool check;


int main(void)
{   
    while (repetir == true)
    {
        cout << "Introduzca número 1" << endl;
        cin >> numero1;

        cout << "Intruduzca número 2" << endl;
        cin >> numero2;

        if(numero1 > numero2)
        {
            cout << "El número 1 es mayor que el número 2" << endl;
        }

        else if (numero1 == numero2)
        {
            cout << "Los números son iguales" <<endl;
        }        

        else
        {
            cout << "El número 2 es mayor que el número 1" << endl;
        }

        check = true;

        while (check == true)
        {
            cout << "¿Desea comparar otros números? si/no" << endl;
            cin >> respuesta;

            if (respuesta == "no")
            {
                repetir = false;
                check = false;
            }

            else if (respuesta == "si")
            {
                repetir = true;
                check = false;
            }
            
            else 
            {
                cout << "Eso no ha funcionado, inténtelo de nuevo" << endl;
            }
        
        }
    
    }

    return 0;
}