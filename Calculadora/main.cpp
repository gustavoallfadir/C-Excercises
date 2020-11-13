#include <iostream>
#include <cmath>
#include <string>

using namespace std;

//Variables de números
float num_a;
float num_b;
float num_c;
float resultado;

//Variables booleanas y auxiliar
bool salir;


//Funciones

int nueva_operacion()
{
    bool check = false;
    string continuar;

    while (check == false)
    {
        cout << "¿Desea realizar otra operación?(si/no)" <<endl;
        cin >> continuar;
        if (continuar == "si" or continuar == "Si" or continuar == "SI")
        {   
            cout << "\033[2J\033[1;1H";
            check = true;
        }
        
        else if (continuar == "no" or continuar == "No" or continuar == "NO")
        {   
            cout << "Programa finalizado." << endl;
            check = true;
            salir = true;
        }

        else
        {
            cout << "Eso no ha funcionado, inténtelo de nuevo.\n\n";
        }
    }
        return 0;
}

int suma()
{   
    cout << "\nSUMA\n";
    cout << "Introduzca el primer valor" << endl;
    cin >> num_a;
    cout << "Introduzca el segundo valor" << endl;
    cin >> num_b;
    num_c = num_a + num_b;
    cout << "La suma de " <<num_a <<" mas " << num_b << " es igual a " <<num_c <<endl;
    cout <<"\n";

    nueva_operacion();

    return 0;
}

int resta()
{   
    cout << "\nRESTA\n";
    cout << "Introduzca el primer valor" << endl;
    cin >> num_a;
    cout << "Introduzca el segundo valor" << endl;
    cin >> num_b;
    num_c = num_a - num_b;
    cout << "La resta de " <<num_a <<" menos " << num_b << " es igual a " <<num_c <<endl;
    cout <<"\n";

    nueva_operacion();

    return 0;
}

int multiplicacion()
{   
    cout << "\nMULTIPLICACIÓN\n";
    cout << "Introduzca el primer valor" << endl;
    cin >> num_a;
    cout << "Introduzca el segundo valor" << endl;
    cin >> num_b;
    num_c = num_a * num_b;
    cout << "La multiplicación de " <<num_a <<" por " << num_b << " es igual a " <<num_c <<endl;
    cout <<"\n";

    nueva_operacion();

    return 0;
}

int division()
{   
    cout << "\nDIVISIÓN\n";
    bool check = false;
    while (check == false)
    {
        cout << "Introduzca el primer valor" << endl;
        cin >> num_a;
        cout << "Introduzca el segundo valor" << endl;
        cin >> num_b;
        
        if (num_b == 0)
        {
            cout << "No se puede dividir entre cero, inténtelo con otra cifra." << endl;
        }
        else
        {
            check = true;
        }
    }
    num_c = num_a / num_b;
    cout << "La división de " <<num_a <<" entre " << num_b << " es igual a " <<num_c <<endl;
    cout <<"\n";

    nueva_operacion();

    return 0;
}

int raiz_cuadrada()
{   
    cout << "\nRAÍZ CUADRADA\n";
    bool check = false;
    while (check == false)
    {
        cout << "Introduzca un valor para obtener su raíz cuadrada" << endl;
        cin >> num_a;

        if (num_a == 0)
        {
            cout << "No se puede obtener la raíz cuadrada de cero, inténtelo con otra cifra." << endl;
        }
        else
        {
            check = true;
        }
    }
    num_c = sqrt(num_a);
    cout << "La raíz cuadrada de " <<num_a <<" es " <<num_c <<endl;
    cout <<"\n";

    nueva_operacion();

    return 0;
}


int menu()
{   
    bool check = false;
    string menu_choice;
    cout <<"↤↤↤↤↤ MENU PRINCIPAL ↦↦↦↦↦\n\n";
    while (check == false)
    {   
        cout << "Seleccione una de las siguientes opciones y presione enter para continuar:\n\n";
        cout <<"1.Suma\n2.Resta\n3.Multiplicación\n4.División\n5.Raíz cuadrada\n\n6.Salir\n" << endl;
        cout << "Su selección: ";
        cin >> menu_choice;

        if (menu_choice == "1")
        {   
            check = true;
            suma();
        }
        
        else if (menu_choice == "2")
        {   
            check = true;
            resta();
        }

        else if (menu_choice == "3")
        {   
            check = true;
            multiplicacion();
        }

        else if (menu_choice == "4")
        {   
            check = true;
            division();
        }

        else if (menu_choice == "5")
        {   
            check = true;
            raiz_cuadrada();
        }

        else if (menu_choice == "6")
        {   
            cout << "Programa finalizado." << endl;
            check = true;
            salir = true;
        }

        else
        {   
            cout << "Eso no ha funcionado, inténtelo de nuevo" << endl;
            check = false;
        }
    }

    return 0;
}


int main()
{   
    cout << "\033[2J\033[1;1H";
    cout << "▁ ▂ ▄ ▅ ▆ ▇ █ Bienvenido a la fantástica calculadora de Gustavo Allfadir █ ▇ ▆ ▅ ▄ ▂ ▁\n" <<endl;
    cout << "Por el momento la interfaz GUI no está disponible; disculpe las molestias que esto pueda ocasionar." <<endl;
    cout << "Ponemos a su disposición el siguiente menú para acceder a las funciones de cálculo:\n" <<endl;

    while (salir == false)
    {
        menu();
    }

    return 0;
}