#include <iostream>
#include <stdio.h>
#include <string>
#include <string.h>

using namespace std;

struct tienda
{
	//Declaracion de variables

	int num_art=0, lanz=0; //Numero de articulo, Lanzamiento
	string nom_vid, clasf, caract, desc, gen; //Nombre, Clasificacion, Caracteristicas, Descripcion, Genero
	float prec_uni=0, iva=0, total=0; //Precio unitario, Impuesto, Total
};

float iva(float x, float y); //Funciones
float total(float x, float y);

int main()
{
    tienda compras[3];
    int opc, opc2, bus;
    string genb, clasb;
    
    do
    {
     printf("\t ***Videojuegos Adventure City*** \n");
     printf(" 1.-Agregar Articulo \n 2.-Modificar Articulo\n 3.-Eliminar Articulo\n 4.-Lista Articulo\n 5.-Limpiar Pantalla\n 6.-Salir\n"); //Menu opciones
     scanf("%d", &opc);
     
     switch (opc)
     {
         case 1: //Agregar Articulo
         for (int i = 0; i < 3; i++)
         {
             do
             {
                 printf("Ingrese el n%cmero del art%cculo\n", 163, 161);
                 scanf("%d", &compras[i].num_art);
             }
             
             while (compras[i].num_art == compras[i - 1].num_art || compras[i].num_art == compras[i - 2].num_art);
             
             printf("Ingrese el nombre del videojuego\n");
             cin.ignore();
             getline(cin, compras[i].nom_vid);
             printf("Ingrese el a%co de lanzamiento\n", 164);
             scanf("%d", &compras[i].lanz);
             printf("Ingrese la clasificaci%cn\n", 162);
             cin.ignore();
             getline(cin, compras[i].clasf);
             printf("Ingrese las caracter%csticas del videojuego\n", 161);
             cin.ignore();
             getline(cin, compras[i].caract);
             printf("Ingrese la descripci%cn del videojuego\n", 162);
             cin.ignore();
             getline(cin, compras[i].desc);
             printf("Ingrese el g%cnero del videojuego\n", 130);
             cin.ignore();
             getline(cin, compras[i].gen);
             printf("Ingrese el precio unitario\n");
             scanf("%f", &compras[i].prec_uni);
             printf("El precio unitario es de %f\n", compras[i].prec_uni);
             compras[i].iva = iva(compras[i].prec_uni, 0.16);
             printf("El iva es de %f\n", compras[i].iva);
             compras[i].total = total(compras[i].prec_uni, compras[i].iva);
             printf("El precio total del videojuego es de %f\n", compras[i].total);
             system("pause");
         }
         break;
         
         case 2: //Modificar Articulo
         break;
         
         case 3: //Eliminar Articulo
         break;
         
         case 4: //Lista de Articulos
         printf("%cC%cmo desea visualizar la lista?\n", 168, 162);
         printf("1.-G%cnero\n2.-Clasificaci%cn\n3.-Todos\n", 130, 162);
         scanf("%d", &bus);
         switch (bus)
         {
             case 1:
             printf("Ingrese el g%cnero que desea buscar\n", 130);
             cin.ignore();
             getline(cin, genb);
             for (int i = 0; i < 3; i++)
             {
                 if (genb.compare(compras[i].gen)==0)
                 {
                     printf("\n\nN%cmero de art%cculo: %d\n", 163, 161, compras[i].num_art);
                     printf("Nombre: %s\n", compras[i].nom_vid.c_str());
                     printf("A%co de lanzamiento: %d\n", 164, compras[i].lanz);
                     printf("Clasificaci%cn: %s\n", 162, compras[i].clasf.c_str());
                     printf("Caracter%csticas: %s\n", 161, compras[i].caract.c_str());
                     printf("Descripci%cn: %s\n", 162, compras[i].desc.c_str());
                     printf("G%cnero: %s\n", 130, compras[i].gen.c_str());
                     printf("Precio unitario: %f\n", compras[i].prec_uni);
                     printf("IVA: %f\n", compras[i].iva);
                     printf("Precio total: %f\n", compras[i].total);
                     system("pause");
                 }
             }
             break;
             case 2:
             printf("Ingrese la clasificaci%cn que desea buscar\n", 162);
             cin.ignore();
             getline(cin, clasb);
             for (int i = 0; i < 3; i++)
             {
                  if (clasb.compare(compras[i].clasf)==0)
                  {
                      printf("\n\nN%cmero de art%cculo: %d\n", 163, 161, compras[i].num_art);
                      printf("Nombre: %s\n", compras[i].nom_vid.c_str());
                      printf("A%co de lanzamiento: %d\n", 164, compras[i].lanz);
                      printf("Clasificaci%cn: %s\n", 162, compras[i].clasf.c_str());
                      printf("Caracter%csticas: %s\n", 161, compras[i].caract.c_str());
                      printf("Descripci%cn: %s\n", 162, compras[i].desc.c_str());
                      printf("G%cnero: %s\n", 130, compras[i].gen.c_str());
                      printf("Precio unitario: %f\n", compras[i].prec_uni);
                      printf("IVA: %f\n", compras[i].iva);
                      printf("Precio total: %f\n", compras[i].total);
                      system("pause");
                  }
             }
             case 3:
             for (int i = 0; i < 3; i++)
             {
                 printf("\n\nN%cmero de art%cculo: %d\n", 163, 161, compras[i].num_art);
                 printf("Nombre: %s\n", compras[i].nom_vid.c_str());
                 printf("A%co de lanzamiento: %d\n", 164, compras[i].lanz);
                 printf("Clasificaci%cn: %s\n", 162, compras[i].clasf.c_str());
                 printf("Caracter%csticas: %s\n", 161, compras[i].caract.c_str());
                 printf("Descripci%cn: %s\n", 162, compras[i].desc.c_str());
                 printf("G%cnero: %s\n", 130, compras[i].gen.c_str());
                 printf("Precio unitario: %f\n", compras[i].prec_uni);
                 printf("IVA: %f\n", compras[i].iva);
                 printf("Precio total: %f\n", compras[i].total);
                 system("pause");
             }
             break;
         }
         break;
         
         case 5: //Limpiar Pantalla
         system("clear");
         return main();
         break;
         
         case 6: //salir
         printf("Gracias por utilizar el programa \n");
         break;
         
         default:
         printf("ingrese una opcion correcta \n");
         return main();
     }
    }
    while (opc != 6);
}

float iva(float x, float y)
{
    float res;
    res = x * y;
    return res;
}
float total(float x, float y)
{
    float res;
    res = x + y;
    return res;
}


