#include <iostream>
#include <string>
#include <limits>

using namespace std;

bool salir = false;

void error()
{   
    cout << '\a';
    cout <<"Eso no ha funcionado, inténtelo de nuevo." <<endl;
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}


void introduccion()
{
    cout << "\033[2J\033[1;1H";
    cout << "Este cuestionario es muy importante para poder proporcionarle los mejores cuidados para su salud." <<endl;
    cout << "Sus respuestas ayudarán a comprender los problemas que usted pudiera tener." <<endl;
    cout << "Por favor conteste todas y cada una de las preguntas.\n\n" <<endl;
}


string preguntar_nombre()
{   
    string _nombre;
    cout << "Escriba su nombre o el nombre del paciente:\n" <<endl;
    cin.ignore(); //Resuelve el problema de no pausar para recibir input.
    getline(cin,_nombre);
    cout <<endl;
    return _nombre;
}

void nuevo_cuestionario()
{  
    string respuesta;
    bool check = false;

    while (check == false)
    {
        cout << "¿Desea realizar otro cuestionario? si/no" <<endl;
        cin >> respuesta;
        
        if (respuesta == "si" or respuesta == "SI" or respuesta == "Si" or respuesta == "S" or respuesta == "s")
        {
            cout << "\033[2J\033[1;1H";
            check = true;
        }
        else if (respuesta == "no" or respuesta == "NO" or respuesta == "No" or respuesta == "N" or respuesta == "n")
        {
            check = true;
            salir = true;
        }
        else 
        {
            error();
            check = false;
        }
    }
}

string evaluar_depresion(int puntaje)
{   
    string evaluacion;

    if (puntaje < 5)
    {
        evaluacion = "inexistente.";
    }
    else if (puntaje >=5 and puntaje <=10)
    {
        evaluacion = "leve.";
    }
    else if (puntaje >=10 and puntaje <=14)
    {
        evaluacion = "moderada.";
    }
    else if (puntaje >=15 and puntaje <=19)
    {
        evaluacion = "moderada-severa.";
    }
    else
    {
        evaluacion = "severa.";
    }

    return evaluacion;
}

string evaluar_somatizacion(int puntaje)
{
    string evaluacion;

    if (puntaje < 5)
    {
        evaluacion = "mínima.";
    }
    else if (puntaje >=5 and puntaje <=9)
    {
        evaluacion = "baja.";
    }
    else if (puntaje >=10 and puntaje <=14)
    {
        evaluacion = "media.";
    }
    else if (puntaje >=15 and puntaje <=30)
    {
        evaluacion = "alta.";
    }

    return evaluacion;
}

string respuestas_depresion()
{
    return "\n0.Para nada\n1.Algunos días\n2.Más de la mitad de los días\n3.Casi diario\n\nSu respuesta: ";
}


int cuestionario_depresion()
{
    string nombre;
    int conteo = 0;
    int r1,r2,r3,r4,r5,r6,r7,r8,r9 = 0;

    cout << "\033[2J\033[1;1H";
    introduccion();
    nombre = preguntar_nombre();
    cout << "\033[2J\033[1;1H";
    cout << "¿Durante las últimas 2 semanas, con que frecuencia, ha estado molesto por alguno de los siguientes problemas...?\n" << endl;
    
    //preguntas del cuestionario
    //1
    cout << "Tener poco interés o placer al hacer las cosas." <<endl;
    cout << respuestas_depresion();
    while (!(cin >> r1) || r1 > 3)
    {
        error();
        cout << "\nTener poco interés o placer al hacer las cosas." <<endl;
        cout << respuestas_depresion();
    }
    
    //2
    cout << "\033[2J\033[1;1H";
    cout << "Sentirse triste, deprimido o sin esperanza." <<endl;
    cout << respuestas_depresion();
    while (!(cin >> r2) || r2 > 3)
    {
        error();
        cout << "\nSentirse triste, deprimido o sin esperanza." <<endl;
        cout << respuestas_depresion();
    }

    //3
    cout << "\033[2J\033[1;1H";
    cout << "Problemas  para dormir, o permanecer dormido, o dormir demasiado." <<endl;
    cout << respuestas_depresion();
    while (!(cin >> r3) || r3 > 3)
    {
        error();
        cout << "\nProblemas  para dormir, o permanecer dormido, o dormir demasiado." <<endl;
        cout << respuestas_depresion();
    }
    //4
    cout << "\033[2J\033[1;1H";
    cout << "Sentirse cansado o tener poca energía." <<endl;
    cout << respuestas_depresion();
    while (!(cin >> r4) || r4 > 3)
    {
        error();
        cout << "\nSentirse cansado o tener poca energía." <<endl;
        cout << respuestas_depresion();
    }
    //5
    cout << "\033[2J\033[1;1H";
    cout << "Tener poco apetito o comer demasiado." <<endl;
    cout << respuestas_depresion();
    while (!(cin >> r5) || r5 > 3)
    {
        error();
        cout << "\nTener poco apetito o comer demasiado." <<endl;
        cout << respuestas_depresion();
    }
    //6
    cout << "\033[2J\033[1;1H";
    cout << "Sentirse mal consigo mismo (que ha fallado, o que ha desilusionado a su familia, o a si mismo)." <<endl;
    cout << respuestas_depresion();
    while (!(cin >> r6) || r6 > 3)
    {
        error();
        cout << "\nSentirse mal consigo mismo (que ha fallado, o que ha desilusionado a su familia, o a si mismo)." <<endl;
        cout << respuestas_depresion();
    }
    //7
    cout << "\033[2J\033[1;1H";
    cout << "Problemas para concentrarse en las cosa, tal como leer el periódico o ver televisión." <<endl;
    cout << respuestas_depresion();
    while (!(cin >> r7) || r7 > 3)
    {
        error();
        cout << "\nProblemas para concentrarse en las cosa, tal como leer el periódico o ver televisión." <<endl;
        cout << respuestas_depresion();
    }
    //8
    cout << "\033[2J\033[1;1H";
    cout << "Moverse o hablar tan lento que la gente lo podría notar. O lo opuesto: estar tan inquieto o intranquilo que se mueve más de lo usual." <<endl;
    cout << respuestas_depresion();
    while (!(cin >> r8) || r8 > 3)
    {
        error();
        cout << "\nMoverse o hablar tan lento que la gente lo podría notar. O lo opuesto: estar tan inquieto o intranquilo que se mueve más de lo usual." <<endl;
        cout << respuestas_depresion();
    }
    //9
    cout << "\033[2J\033[1;1H";
    cout << "Pensar que estaría mejor muerto o que, de alguna manera, debería lastimarse a si mismo." <<endl;
    cout << respuestas_depresion();
    while (!(cin >> r9) || r9 > 3)
    {
        error();
        cout << "\nPensar que estaría mejor muerto o que, de alguna manera, debería lastimarse a si mismo." <<endl;
        cout << respuestas_depresion();
    }

    conteo = r1 + r2 + r3 + r4 + r5 +r6 + r7 + r8 + r9;

    cout << "\033[2J\033[1;1H";
    cout << "Paciente:\n" << nombre << endl;
    cout << "Obtuvo un puntaje de " << conteo << " en el test de depresión, indicando una depresión " << evaluar_depresion(conteo) << endl; 
    cout << "Consulte a un especialista para obtener orientación acerca de la depresión y su tratamiento." <<endl;
    cout << "\n";
    
    nuevo_cuestionario();
    return 0;
}


string respuestas_somatizacion_a()
{
    return "0.Nada\n1.Poco\n2.Mucho\n\nSu respuesta: ";
}


int cuestionario_somatizacion()
{
    string nombre;
    int conteo = 0;
    int r1,r2,r3,r4,r5,r6,r7,r8, r9,r10,r11,r12,r13,r14,r15,r16,r17,r18,r19,r29,r21,r22,r23,r24;

    cout << "\033[2J\033[1;1H";
    introduccion();
    nombre = preguntar_nombre();
    cout << "\033[2J\033[1;1H";

    //preguntas del cuestionario
    cout << "¿Durante las últimas 4 semanas, que tanto ha estado molesto por alguno de los siguientes problemas?...\n\n";

    //1
    cout << "Dolor de estomago." <<endl;
    cout << respuestas_somatizacion_a();
    while (!(cin >> r1) || r1 > 2)
    {
        error();
        cout << "\nDolor de estomago." <<endl;
        cout << respuestas_somatizacion_a();
    }
    //2
    cout << "\033[2J\033[1;1H";
    cout << "Dolor de espalda." <<endl;
    cout << respuestas_somatizacion_a();
    while (!(cin >> r2) || r2 > 2)
    {
        error();
        cout << "\nDolor de espalda." <<endl;
        cout << respuestas_somatizacion_a();
    }
    //3
    cout << "\033[2J\033[1;1H";
    cout << "Dolor en brazos, piernas o articulaciones (rodilla, cadera, etc.)" <<endl;
    cout << respuestas_somatizacion_a();
    while (!(cin >> r3) || r3 > 2)
    {
        error();
        cout << "\nDolor en brazos, piernas o articulaciones (rodilla, cadera, etc.)" <<endl;
        cout << respuestas_somatizacion_a();
    }
    //4
    cout << "\033[2J\033[1;1H";
    cout << "Dolor menstrual u otros problemas con su regla (Solo mujeres)" <<endl;
    cout << respuestas_somatizacion_a();
    while (!(cin >> r4) || r4 > 2)
    {
        error();
        cout << "\nDolor menstrual u otros problemas con su regla (Solo mujeres)" <<endl;
        cout << respuestas_somatizacion_a();
    }
    //5
    cout << "\033[2J\033[1;1H";
    cout << "Dolores de cabeza." <<endl;
    cout << respuestas_somatizacion_a();
    while (!(cin >> r5) || r5 > 2)
    {
        error();
        cout << "\nDolores de cabeza." <<endl;
        cout << respuestas_somatizacion_a();
    }
    //6
    cout << "\033[2J\033[1;1H";
    cout << "Dolor en el pecho." <<endl;
    cout << respuestas_somatizacion_a();
    while (!(cin >> r6) || r6 > 2)
    {
        error();
        cout << "\nDolor en el pecho" <<endl;
        cout << respuestas_somatizacion_a();
    }
    //7
    cout << "\033[2J\033[1;1H";
    cout << "Mareos." <<endl;
    cout << respuestas_somatizacion_a();
    while (!(cin >> r7) || r7 > 2)
    {
        error();
        cout << "\nMareos." <<endl;
        cout << respuestas_somatizacion_a();
    }
    //8
    cout << "\033[2J\033[1;1H";
    cout << "Desmayos." <<endl;
    cout << respuestas_somatizacion_a();
    while (!(cin >> r8) || r8 > 2)
    {
        error();
        cout << "\nDesmayos." <<endl;
        cout << respuestas_somatizacion_a();
    }
    //9
    cout << "\033[2J\033[1;1H";
    cout << "Sensación de que su corazón golpetea o se acelera" <<endl;
    cout << respuestas_somatizacion_a();
    while (!(cin >> r9) || r9 > 2)
    {
        error();
        cout << "\nSensación de que su corazón golpetea o se acelera." <<endl;
        cout << respuestas_somatizacion_a();
    }
    //10
    cout << "\033[2J\033[1;1H";
    cout << "Respiración cortada." <<endl;
    cout << respuestas_somatizacion_a();
    while (!(cin >> r10) || r10 > 2)
    {
        error();
        cout << "\nRespiración cortada." <<endl;
        cout << respuestas_somatizacion_a();
    }
    //11
    cout << "\033[2J\033[1;1H";
    cout << "Dolor u otros problemas durante el acto sexual." <<endl;
    cout << respuestas_somatizacion_a();
    while (!(cin >> r11) || r11 > 2)
    {
        error();
        cout << "\nDolor u otros problemas durante el acto sexual." <<endl;
        cout << respuestas_somatizacion_a();
    }
    //12
    cout << "\033[2J\033[1;1H";
    cout << "Constipación, intestino ”suelto” o diarrea." <<endl;
    cout << respuestas_somatizacion_a();
    while (!(cin >> r12) || r12 > 2)
    {
        error();
        cout << "\nConstipación, intestino ”suelto” o diarrea." <<endl;
        cout << respuestas_somatizacion_a();
    }
    //13
    cout << "\033[2J\033[1;1H";
    cout << "Nausea, gases o indigestión." <<endl;
    cout << respuestas_somatizacion_a();
    while (!(cin >> r13) || r13 > 2)
    {
        error();
        cout << "\nNausea, gases o indigestión." <<endl;
        cout << respuestas_somatizacion_a();
    }
    //14
    cout << "\033[2J\033[1;1H";
    cout << "Cansancio o poca energía." <<endl;
    cout << respuestas_somatizacion_a();
    while (!(cin >> r14) || r14 > 2)
    {
        error();
        cout << "\nCansancio o poca energía." <<endl;
        cout << respuestas_somatizacion_a();
    }
    //15
    cout << "\033[2J\033[1;1H";
    cout << "Problemas para dormir." <<endl;
    cout << respuestas_somatizacion_a();
    while (!(cin >> r15) || r15 > 2)
    {
        error();
        cout << "\nProblemas para dormir." <<endl;
        cout << respuestas_somatizacion_a();
    }

    conteo = r1+r2+r3+r4+r5+r6+r7+r8+r9+r10+r11+r12+r13+r14+r15;
    cout << "\033[2J\033[1;1H";
    cout << "Paciente:\n" << nombre << endl;
    cout << "\nObtuvo un puntaje de " << conteo << " en el test de somatización, indicando una somatización " << evaluar_somatizacion(conteo) << endl; 
    cout << "\nConsulte a un especialista para obtener orientación acerca de la somatización." <<endl;
    cout << "\n";

    nuevo_cuestionario();

    return 0;
}


int menu()
{   
    string seleccion;
    bool check = false;
    
    cout << "MENU PRINCIPAL" <<endl;
    cout << "Seleccione la opción a la que desea acceder:\n\n";
    cout << "1.Cuestionario de depresión." <<endl;
    cout << "2.Cuestionario de somatización." <<endl;
    cout << "\n3.Salir del programa." <<endl;
    while (check == false)
    {
        cout << "\nSu seleccion: ";
        cin >> seleccion;

        if (seleccion == "1")
        {
            check = true;
            cuestionario_depresion();
        }
        else if (seleccion == "2")
        {
            check = true;
            cuestionario_somatizacion();
        }
        else if (seleccion == "3")
        {
            check = true;
            salir = true;
        }
        else 
        {
            error();
        }
    }
    
        return 0;
}

int main()
{   
    cout << "\033[2J\033[1;1H";
    cout << "BIENVENIDO AL PROGRAMA DE VALORACIÓN PSICOLÓGICA" <<endl;
    cout << "Información: gustavo.allfadir@gmail.com\n" <<endl;
    while (salir == false)
    {
        menu();
    }

    cout <<"\nPrograma finalizado." <<endl;
    cout <<"Contacto: gustavo.allfadir@gmail.com" <<endl;

    return 0;
}