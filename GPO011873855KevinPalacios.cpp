// Proyecto KFPM 01.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string>
#include <string.h>
#include <fstream>
#include <stdlib.h>

using namespace std;

//declaracion de variables

int* numart, * year, registros, desicion, n = 1;
string* nom, * clasf, * caract, * gen, * desc;
float* precio, * iva, * total;

//funciones void
void Agregar();
void Modificar();
void Eliminar();
void Lista();
void Archivo();


int main()
{
	int opc, busq;
	printf("\t ***VideoCity Store***\n");
	printf("Ingrese una opcion \n 1. Agregar Articulo \n 2. Modificar Articulo \n 3. Eliminar Articulo \n 4. Lista de Articulos \n 5. Limpiar Pantalla \n 6. Salir \n");
	scanf_s("%d", &opc);

	switch (opc)
	{
	case 1: //Agregar Articulo
		Agregar();
		system("pause");
		return main();
		break;

	case 2: //Modificar Articulo
		Modificar();
		system("pause");
		return main();
		break;

	case 3: //Eliminar Articulo
		Eliminar();
		system("pause");
		return main();
		break;

	case 4: //Lista de Articulos
		Lista();
		system("pause");
		return main();
		break;

	case 5: //Limpiar Pantalla
		system("cls");
		return main();
		break;

	case 6: //Salir
		Archivo();
		exit(1);
		break;

	default:
		break;
	}
}

void Agregar()
{
	printf("Cuantos registros desea dar de alta\n");
	scanf_s("%d", &registros);
	numart = new int[registros];
	year = new int[registros];
	nom = new string[registros];
	clasf = new string[registros];
	caract = new string[registros];
	gen = new string[registros];
	desc = new string[registros];
	precio = new float[registros];
	iva = new float[registros];
	total = new float[registros];

	//arreglo
	for (int i = 0; i < registros; i++)
	{
		printf("Ingrese el numero de articulo \n");
		scanf_s("%d", &numart[i]);
		do
		{
			if (numart[i] != numart[i - 1])
			{
				n = n + 1;
			}
			else
			{
				printf("El articulo ya existe\n");
				printf("Ingrese el numero de articulo \n");
			}
		} while (numart[i] == numart[i - 1] || numart[i] == numart[i - 2]);
		printf("Ingrese el a%co de lanzamiento\n", 164);
		scanf_s("%d", year);
		printf("Ingrese el nombre del videojuego \n");
		cin.ignore();
		getline(cin, nom[i]);
		printf("Ingrese la clasificacion \n");
		getline(cin, clasf[i]);
		printf("Ingrese las caracteristicas \n");
		getline(cin, caract[i]);
		printf("Ingrese el genero \n");
		getline(cin, gen[i]);
		printf("Ingrese la descripcion \n");
		getline(cin, desc[i]);
		printf("Ingrese el precio \n");
		scanf_s("%f", &precio[i]);
		iva[i] = precio[i] * .16;
		total[i] = precio[i] + iva[i];
		if ((registros - 1) == 1)
		{
				printf("quieres dar de alta otro registro\n 1. Si\n 2. No\n");
				scanf_s("%d", &desicion);
				switch (desicion)
				{
				case 1:
					registros = registros + 1;
					system("pause");
					return Agregar();
					break;

				case 2:
					system("pause");
					return Agregar();
					break;
				}
		}
	}
}

void Modificar()
{
	int modificar;

	//switch

	do
	{
		printf("Ingrese el numero de articulo a modificar\n");
		scanf_s("&d", modificar);
	} while (modificar < 0);

	for (int i = 0; i < registros; i++)
	{
		if (modificar == numart[i])
		{
			printf("Ingrese el a%co de lanzamiento\n", 164);
			scanf_s("%d", year);
			printf("Ingrese el nombre del videojuego \n");
			cin.ignore();
			getline(cin, nom[i]);
			printf("Ingrese la clasificacion \n");
			getline(cin, clasf[i]);
			printf("Ingrese las caracteristicas \n");
			getline(cin, caract[i]);
			printf("Ingrese el genero \n");
			getline(cin, gen[i]);
			printf("Ingrese la descripcion \n");
			getline(cin, desc[i]);
			printf("Ingrese el precio \n");
			scanf_s("%f", &precio[i]);
			iva[i] = precio[i] * .16;
			total[i] = precio[i] + iva[i];
		}
	}

}

void Eliminar()
{
	int eliminar;
	printf("Ingrese el numero de articulo a eliminar \n");
	scanf_s("%d", eliminar);
	for (int i = 0; i < registros; i++)
	{
		if (eliminar == numart[i])
		{
			numart[i] = 0;
		}
	}
}

void Lista()
{
	int op2;
	string busc;
	printf("1. Clasificacion \n 2. Genero \n");
	scanf_s("%d", &op2);
	switch (op2)
	{
	case 1:
		
		printf("Ingrese la clasificacion a buscar \n");
		cin.ignore();
		getline(cin, busc);
		for (int i = 0; i < registros; i++)
		{
			if (clasf[i] == busc)
			{
				printf("Articulo: %d", numart[i]);
				printf("A%co: %d", year[i], 164);
				printf("Videojuego %s", nom[i].c_str());
				printf("Clasificacion %s", clasf[i].c_str());
				printf("Genero %s", gen[i].c_str());
				printf("Caracteristicas %s", caract[i].c_str());
				printf("Descripcion %s", desc[i].c_str());
				printf("Subtotal %f", precio[i]);
				printf("Articulo %f", iva[i]);
				printf("Articulo %f", total[i]);
			}
		}
		break;

	case 2:
		printf("Ingrese el genero a buscar \n");
		cin.ignore();
		getline(cin, busc);
		for (int i = 0; i < registros; i++)
		{
			if (clasf[i] == busc)
			{
				printf("Articulo: %d", numart[i]);
				printf("A%co: %d", year[i], 164);
				printf("Videojuego %s", nom[i].c_str());
				printf("Clasificacion %s", clasf[i].c_str());
				printf("Genero %s", gen[i].c_str());
				printf("Caracteristicas %s", caract[i].c_str());
				printf("Descripcion %s", desc[i].c_str());
				printf("Subtotal %f", precio[i]);
				printf("Articulo %f", iva[i]);
				printf("Articulo %f", total[i]);
			}
		}
		break;

	default:
		return Lista();
		break;
	}
}

void Archivo()
{
	ofstream archivo;
	string nombrearchivo;

	nombrearchivo = "LISTAS";

	archivo.open(nombrearchivo.c_str(), ios::out);

	if (archivo.fail())
	{
		printf("ERROR NO SE PUDO CREAR EL ARCHIVO");
		system("pause");
		exit(1);
	}

	archivo << "NUMEROARTICULO" << "\t";
	archivo << "LANZAMIENTO" << "\t";
	archivo << "NOMBRE" << "\t";
	archivo << "CLASIFICACION" << "\t";
	archivo << "CARACTERISTICAS" << "\t";
	archivo << "GENERO" << "\t";
	archivo << "DESCRIPCION" << "\t";
	archivo << "SUBTOTAL" << "\t";
	archivo << "IVA" << "\t";
	archivo << "TOTAL" << "\n";

	for (int i = 0; i < registros; i++)
	{
		archivo << numart[i] << "\t";
		archivo << year[i] << "\t";
		archivo << nom[i] << "\t";
		archivo << clasf[i] << "\t";
		archivo << caract[i] << "\t";
		archivo << gen[i] << "\t";
		archivo << desc[i] << "\t";
		archivo << precio[i] << "\t";
		archivo << iva[i] << "\t";
		archivo << total[i] << "\t";
	}

	archivo.close();

}