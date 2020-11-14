#include <iostream>
#include <stdlib.h>
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


//FUNCIONES MATEMÁTICAS BÁSCICAS 
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
    cout << "\033[2J\033[1;1H";
    cout << "\nSUMA\n";
    cout << "Introduzca el primer valor:" << endl;
    cin >> num_a;
    cout << "Introduzca el segundo valor:" << endl;
    cin >> num_b;
    resultado = num_a + num_b;
    cout << "La suma de " <<num_a <<" mas " <<num_b << " es igual a " <<resultado <<endl;
    cout <<"\n";

    nueva_operacion();

    return 0;
}


int resta()
{   
    cout << "\033[2J\033[1;1H";
    cout << "\nRESTA\n";
    cout << "Introduzca el primer valor:" << endl;
    cin >> num_a;
    cout << "Introduzca el segundo valor:" << endl;
    cin >> num_b;
    resultado = num_a - num_b;
    cout << "La resta de " <<num_a <<" menos " <<num_b << " es igual a " <<resultado <<endl;
    cout <<"\n";

    nueva_operacion();

    return 0;
}


int multiplicacion()
{   
    cout << "\033[2J\033[1;1H";
    cout << "\nMULTIPLICACIÓN\n";
    cout << "Introduzca el primer valor:" << endl;
    cin >> num_a;
    cout << "Introduzca el segundo valor:" << endl;
    cin >> num_b;
    resultado = num_a * num_b;
    cout << "La multiplicación de " <<num_a <<" por " << num_b << " es igual a " <<resultado <<endl;
    cout <<"\n";

    nueva_operacion();

    return 0;
}


int division()
{   
    cout << "\033[2J\033[1;1H";
    cout << "\nDIVISIÓN\n";
    bool check = false;
    while (check == false)
    {
        cout << "Introduzca el primer valor:" << endl;
        cin >> num_a;
        cout << "Introduzca el segundo valor:" << endl;
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
    resultado = num_a / num_b;
    cout << "La división de " <<num_a <<" entre " << num_b << " es igual a " <<resultado <<endl;
    cout <<"\n";

    nueva_operacion();

    return 0;
}


int raiz_cuadrada()
{   
    cout << "\033[2J\033[1;1H";
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
    resultado = sqrt(num_a);
    cout << "La raíz cuadrada de " <<num_a <<" es " <<resultado <<endl;
    cout <<"\n";

    nueva_operacion();

    return 0;
}


//FUNCIONES DE CALCULOS GEOMETRICOS
int area_circulo()
{   
    cout << "\033[2J\033[1;1H";
    cout <<"ÁREA DE CIRCULO" << endl;
    cout << "Introduzca el valor del radio:" << endl;
    cin >> num_a;
    resultado = M_PI * pow(num_a, 2);
    cout << "El área de un círculo cuyo radio es de " <<num_a <<", es de " <<resultado <<endl;
    cout <<"\n";

    nueva_operacion();

    return 0;
}


int area_rectangulo()
{
    cout << "\033[2J\033[1;1H";
    cout <<"ÁREA DE RECTÁNGULO" << endl;
    cout << "Introduzca el valor de la base:" << endl;
    cin >> num_a;
    cout << "Introduzca el valor de la altura:" << endl;
    cin >> num_b;
    resultado = num_a * num_b;
    cout << "El área de un rectángulo de " <<num_a <<" por " <<num_b <<", es de " <<resultado <<endl;
    cout <<"\n";

    nueva_operacion();

    return 0;
}


int area_triangulo()
{   
    cout << "\033[2J\033[1;1H";
    cout <<"ÁREA DE TRIÁNGULO" << endl;
    cout << "Introduzca el valor de la base:" << endl;
    cin >> num_a;
    cout << "Introduzca el valor de la altura:" << endl;
    cin >> num_b;
    resultado = (num_a * num_b) / 2;
    cout << "El área de un triángulo de " <<num_a <<" por " <<num_b <<", es de " <<resultado <<endl;
    cout <<"\n";

    nueva_operacion();

    return 0;
}


int area_cuadrado()
{   
    cout << "\033[2J\033[1;1H";
    cout <<"ÁREA DE CUADRADO" << endl;
    cout << "Introduzca el valor de sus lados:" << endl;
    cin >> num_a;
    resultado = pow(num_a, 2);
    cout << "El área de un cuadrado cuyos lados miden " <<num_a <<", es de " <<resultado <<endl;
    cout <<"\n";

    nueva_operacion();

    return 0;
}


int area_pentagono()
{   
    cout << "\033[2J\033[1;1H";
    cout <<"ÁREA DE PENTÁGONO (REGULAR)" << endl;
    cout << "Introduzca el valor de sus lados:" << endl;
    cin >> num_a;
    resultado = 1.7204774195 * pow(num_a, 2);
    cout << "El área del pentágono es de " <<resultado <<endl;
    cout <<"\n";

    nueva_operacion();

    return 0;
}

int area_hexagono()
{   
    cout << "\033[2J\033[1;1H";
    cout <<"ÁREA DE HEXÁGONO (REGULAR)" << endl;
    cout << "Introduzca el valor de sus lados:" << endl;
    cin >> num_a;
    resultado = 2.5980762114 * pow(num_a, 2);
    cout << "El área del hexágono es de " <<resultado <<endl;
    cout <<"\n";

    nueva_operacion();

    return 0;
}

/*----MENUS----*/
int menu_geometria()
{   
    cout << "\033[2J\033[1;1H";
    cout << "\nCÁLCULOS GEOMÉTRICOS" << endl;
    bool check = false;
    string menu_choice;

    while (check == false)
    {
        cout << "Seleccione el cálculo que desea realizar:\n" << endl;
        cout << "1.Área de círculo\n2.Área de rectángulo\n3.Área de triángulo\n4.Área de cuadrado\n";
        cout << "5.Área de pentágono\n6.Área de hexágono\n\n7.Regresar al menú principal\n8.Salir\n" <<endl;
        cout << "Su elección: ";
        cin >> menu_choice;

        if (menu_choice == "1")
        {   
            check = true;
            area_circulo();
        }
        
        else if (menu_choice == "2")
        {   
            check = true;
            area_rectangulo();
        }

        else if (menu_choice == "3")
        {   
            check = true;
            area_triangulo();
        }

        else if (menu_choice == "4")
        {   
            check = true;
            area_cuadrado();
        }

        else if (menu_choice == "5")
        {   
            check = true;
            area_pentagono();
        }

        else if (menu_choice == "6")
        {   
            check = true;
            area_hexagono();
        }

        else if (menu_choice == "7")
        {   
            cout << "\033[2J\033[1;1H";
            check = true;
        }

        else if (menu_choice == "8")
        {   
            salir = true;
            check = true;
        }

        else
        {   
            cout << "Eso no ha funcionado, inténtelo de nuevo" << endl;
        }

    }

    return 0;
}


int menu()
{  
    cout <<"↤↤↤↤↤ MENÚ PRINCIPAL ↦↦↦↦↦\n\n";
    bool check = false;
    string menu_choice;
    while (check == false)
    {   
        cout << "Seleccione una de las siguientes opciones y presione enter para continuar:\n\n";
        cout <<"1.Suma\n2.Resta\n3.Multiplicación\n4.División\n5.Raíz cuadrada\n";
        cout << "6.Cálculos geométricos\n\n7.Salir\n" << endl;
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
            check = true;
            menu_geometria();
        }

        else if (menu_choice == "7")
        {   
            check = true;
            salir = true;
        }

        else
        {   
            cout << "Eso no ha funcionado, inténtelo de nuevo" << endl;
            check = false;
        }
    }

    cout << "Programa finalizado." << endl;

    return 0;
}


int main()
{   
    cout << "\033[2J\033[1;1H";
    cout << "▁ ▂ ▄ ▅ ▆ ▇ █ Bienvenido a la calculadora de Gustavo Allfadir █ ▇ ▆ ▅ ▄ ▂ ▁\n" <<endl;
    cout << "Por el momento la interfaz GUI no está disponible; disculpe las molestias que esto pueda ocasionar." <<endl;
    cout << "Ponemos a su disposición el siguiente menú para acceder a las funciones de cálculo:\n" <<endl;

    while (salir == false)
    {
        menu();
    }

    return 0;
}