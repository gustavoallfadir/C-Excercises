#include <iostream>
#include <string>

using namespace std;

class Persona
{
    private:
        string nombres;
        string apellidos;
        int edad;

    public:
        //Constructor 
        Persona(string _nombres, string _apellidos, int _edad)
        {

            nombres = _nombres;
            apellidos = _apellidos;
            edad = _edad;
        }

        int obtener_edad()
        {
            return edad;
        }

        string nombre_completo()
        {
            return nombres + " " + apellidos;
        }
};


int main()
{   
    Persona p1 = Persona("Gustavo","Robledo",33);
    Persona p2("Alejandro","Ramos",20);
    Persona p3("Maria","Ramos",25);

    cout << p1.nombre_completo() << ", edad: " << p1.obtener_edad() <<endl;
    cout << p2.nombre_completo() << ", edad: " << p2.obtener_edad() <<endl;
    cout << p3.nombre_completo() << ", edad: " << p3.obtener_edad() <<endl;

    return 0;
}