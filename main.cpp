#include "Evaluador.h"
#include <iostream>
using namespace std;

//Devuelve la suma de a (dado) y b (dado)
int sumar(int a, int b)
{
    return a+b; //suma de a mas b
}

//Devuelve la resta de a (dado) y b (dado)
int restar(int a, int b)
{
    return a-b;//resta de a menos b
}

//Devuelve la multiplicacion de a (dado) y b (dado)
int multiplicar(int a, int b)
{
    return a*b; //multiplica a por b
}

//Devuelve la division de a (dado) y b (dado)
int dividir(int a, int b)
{
    return a/b; //division de a entre b
}

//Devuelve el numero mayor entre a (dado) y b (dado)
int getMayor(int a, int b)
{
    if(a>b) //condicion si a es mayor que b
    return a; //retorna a si es mayor
    return b; //sino retorna b
}

//Devuelve el numero mayor entre a (dado) y b (dado)
int getMenor(int a, int b)
{
    if(a<b) //condicion si a es menor que b
    return a; //retorna a si es menor
    return b; //sino retorna b
}

//Devuelve el numero mayor entre a (dado), b (dado) y c (dado)
int getMayor(int a, int b, int c)
{
    if(a>b & a>c) //si A es mayor a B y C
    return a; //retorna a
    else if(b>c) //si B es mayor a C
    return b; //retorna b
    else return c; //retorna C en caso que lo anterior no se cumpla
}

//Establece el valor (dado) en el arreglo (dado) en el indice posicion (dado)
void setValor(int arreglo[], int valor, int posicion)
{
    arreglo[posicion]=valor; // Estable el valor en la posicion del arreglo
}
//Obtiene y devuelve el valor del arreglo (dado) en el indice posicion (dado)
int getValor(int arreglo[], int posicion)
{
    return arreglo[posicion]; //devuelve el valor en la posicion del arreglo
}

//Devuelve el numero mayor del arreglo (dado) que contiene tamano (dado) elementos
int getMayor(int arreglo[], int tamano)
{
  int num=0;
  for(int i=0; i<tamano; i++)  //para recorrer el arreglo
    if(arreglo[i]>num)   // si el valor es mayor a num
       num=arreglo[i];  //asigna el valor a num y vuelve al ciclo for
  return num; //retorna el valor mayor
}

//Devuelve el numero menor del arreglo (dado) que contiene tamano (dado) elementos
int getMenor(int arreglo[], int tamano)
{
  int num=arreglo[0];
  for(int i=1; i<tamano; i++)  //para recorrer el arreglo
    if(arreglo[i]<num)   // si el valor es menor a num
       num=arreglo[i];  //asigna el valor a num y vuelve al ciclo for
  return num; //retorna el valor menor
}

//Devuelve el promedio de los numeros del arreglo (dado) que contiene tamano (dado) elementos
int getPromedio(int arreglo[], int tamano)
{
    int suma=0;
    for(int i=0; i<tamano;i++) //ciclo para recorrer el arreglo
        suma+=arreglo[i]; //suma casa posicion del arreglo

return (suma/tamano); //saca el promedio dividiendo la suma entre el tamano del arreglo
}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
