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
int num_threads;
int tid;
printf("About to start parallel section\n");
#pragma omp parallel default(none) private(num_threads, tid)
{
// Call the OpenMP functions
tid = omp_get_thread_num();
// Print a message only on the master thread
// There are two ways of doing this: using the tid or with a pragma
// if (tid == 0)
#pragma omp master
{
num_threads = omp_get_num_threads();
printf("There are %d threads\n", num_threads);
}
printf("This is thread number: %d\n", tid);
}
return 0;
}
