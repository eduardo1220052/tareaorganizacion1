#include <windows.h> //bibliteca para la funcion sleep()
#include <process.h> //biblitoeca para la funcion _beginthread()
#include <time.h> //biblioteca para las funciones del reloj
#include <stdio.h> //biblioteca para la funcion getchat()
void task1(void *);

int main(int, char**)
{
	//variable requerida para la funcion _beginthread
	int ThreadNr;
	//coloca la cantidad de nucleos de tu equipo
	//puedes jugar con valores altos como 10 o 20 y veras que tu equipo ocupa el 100% del CPU
	int nucleos=70;
	//se realiza el separado por ihlos de ejecucion por numero de nucleos
	for(int i=0; i < nucleos; i++) _beginthread( task1, 0, &ThreadNr);
	
	//escribe cualquier tecla para terminar
	(void) getchar();
	return 0;
}

void task1(void *)
{
	//ciclo infinito para utilizar el procesador
	//termina el programa presionando la tecla enter
	while(1)
	{
		//obtenemos el reloj actual + 50
		clock_t wakeup = clock() + 50;
		//hacemos 50 ticks de reloj que ocupa uso de cpu
		while (clock() < wakeup){}
		//despues de 50 ticks, dormimos 50 milisegundos para darle un respiro al procesador
		// y no trabar el equipo
		Sleep (50);
	}
}
