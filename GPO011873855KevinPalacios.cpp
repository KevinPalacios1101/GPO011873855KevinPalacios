#include <iostream>
#include <conio.h>
#include <string.h>
#include <string>

using namespace std;

int main()
{
    int num_art, lanz, opc; //Numero de articulo, Lanzamiento, Opcion
    float prec_uni, iva, total; //Precio unitario, Impuesto, Total
    string nom_vid, clasf, caract, desc, gen; //Nombre, Clasificacion, Caracteristicas, Descripcion, Genero
    
    cout << "\t ***Videojuegos Adventure City*** \n";
    cout << " 1.-Agregar Articulo \n 2.-Modificar Articulo\n 3.-Eliminar Articulo\n 4.-Lista Articulo\n 5.-Limpiar Pantalla\n 6.-Salir\n";
    cin >> opc;
    
     switch (opc)
    {
        case 1: //Agregar Articulo
        cout << "Ingrese el numero de articulo \n";
        cin >> num_art;
        cout << "Ingrese el nombre del videojuego \n";
        cin.ignore();
        getline(cin, nom_vid);
        cout << "Ingrese el año de lanzamiento \n";
        cin >> lanz;
        cout << "Ingrese la clasificacion \n";
        cin >> clasf;
        cout << "Ingrese las caracteristicas \n";
        cin.ignore();
        getline(cin, caract);
        cout << "Ingrese la descripcion \n";
        cin.ignore();
        getline(cin, desc);
        cout << "Ingrese el genero \n";
        cin.ignore();
        getline(cin, gen);
        cout << "Ingrese el precio unitario \n";
        cin >> prec_uni;
        return main();
        break;
        
        case 2: //Modificar Articulo
        break;
        
        case 3: //Eliminar Articulo
        break;
        
        case 4: //Lista de Articulos
        break;
        
        case 5: //Limpiar Pantalla
       system("clear");
        return main();
        break;
        
        case 6: //salir
        cout << "Gracias por utilizar el programa \n";
        break;
        
        default:
        cout << "ingrese una opcion correcta \n";
        return main();
    }
    
}
