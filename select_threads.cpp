/******************************************************************************
A01797418 - Luis Manuel Mendoza Cruz
A01797418@tec.mx

*******************************************************************************/
#include <iostream>
#include <stdio.h>
#include <omp.h>

using namespace std;

int main()
{
int tid;
double start = omp_get_wtime();
cout << "Estableciendo la cantidad de Hilos\n";
int nHilos;
cout << "Cuantos hilos quieres trabajar: ";
cin >> nHilos;
// Valida que se pudo importar OpenMP
#ifdef _OPENMP
omp_set_num_threads(nHilos);
#endif
#pragma omp parallel private(tid)
{
tid = omp_get_thread_num();
cout << "El thread " << tid << " esta en marcha " << endl;
printf("\n");
cout << "El thread " << tid << " ha terminado " << endl;
}
double end = omp_get_wtime();
// Muestra el tiempo que duró la ejecución del programa
cout << "Tiempo transcurrido: " << end - start << endl;
}
