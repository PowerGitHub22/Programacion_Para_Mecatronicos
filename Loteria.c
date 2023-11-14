#include <stdio.h>
#include <stdlib.h>
#include <time.h>
struct Historial
{
    int numero1;
    int numero2;
    int numero3;
    int hora;
    int minuto;
    int segundo;
    int dia;
    int mes;
    int anio;
};

void imprimirTirada(struct Historial tirada)
{
    printf("Números: %d %d %d\t", tirada.numero1, tirada.numero2, tirada.numero3);
    printf("Fecha y hora: %02d/%02d/%d %02d:%02d:%02d\n",
           tirada.dia, tirada.mes, tirada.anio, tirada.hora, tirada.minuto, tirada.segundo);
}

void guardarEnHistorial(struct Historial historial[], int *contadorTiradas, int numero1, int numero2, int numero3)
{
    historial[*contadorTiradas].numero1 = numero1;
    historial[*contadorTiradas].numero2 = numero2;
    historial[*contadorTiradas].numero3 = numero3;

    // Obtener la hora y la fecha actual
    time_t tiempoActual;
    struct tm *infoTiempo;
    time(&tiempoActual);
    infoTiempo = localtime(&tiempoActual);

    // Almacenar la fecha y la hora en la estructura
    historial[*contadorTiradas].hora = infoTiempo->tm_hour;
    historial[*contadorTiradas].minuto = infoTiempo->tm_min;
    historial[*contadorTiradas].segundo = infoTiempo->tm_sec;
    historial[*contadorTiradas].dia = infoTiempo->tm_mday;
    historial[*contadorTiradas].mes = infoTiempo->tm_mon + 1;
    historial[*contadorTiradas].anio = infoTiempo->tm_year + 1900;

    (*contadorTiradas)++;
}
void realizarJugada(struct Historial historial[], int *contadorTiradas)
{
    int numero1, numero2, numero3, op2 = 0;
    printf("¿Qué tipo de jugada deseas hacer?\n");
    printf("1- Número\t2- Palé\t3- Tripleta: ");
    scanf("%i", &op2);


    if (op2 == 1)
    {
        printf("Indique su número: ");
        scanf("%i", &numero1);
        guardarEnHistorial(historial, contadorTiradas, numero1, 0, 0);
    }
    else if (op2 == 2)
    {
        printf("Indique los números: ");
        scanf("%i %i", &numero1, &numero2);
        guardarEnHistorial(historial, contadorTiradas, numero1, numero2, 0);
    }
    else if (op2 == 3)
    {
        printf("Indique los números: ");
        scanf("%i %i %i", &numero1, &numero2, &numero3);
        guardarEnHistorial(historial, contadorTiradas, numero1, numero2, numero3);
    }

    printf("\tTus números son: %d %d %d\n", historial[*contadorTiradas - 1].numero1, historial[*contadorTiradas - 1].numero2, historial[*contadorTiradas - 1].numero3);
    printf("Hora y fecha actual: %02d:%02d:%02d %02d/%02d/%d\n",
           historial[*contadorTiradas - 1].hora, historial[*contadorTiradas - 1].minuto, historial[*contadorTiradas - 1].segundo,
           historial[*contadorTiradas - 1].dia, historial[*contadorTiradas - 1].mes, historial[*contadorTiradas - 1].anio);

    // Comprobar si la jugada coincide con alguna tirada anterior en el historial
    for (int i = 0; i < *contadorTiradas - 1; i++)
    {
        if (op2 == 1 && (numero1 == historial[i].numero1 || numero1 == historial[i].numero2 || numero1 == historial[i].numero3))
        {

            printf("\n¡Enhorabuena has ganado!\n");
            return;
        }
        else if (op2 == 2 && ((numero1 == historial[i].numero1 && numero2 == historial[i].numero2) ||
                              (numero1 == historial[i].numero2 && numero2 == historial[i].numero3) ||
                              (numero1 == historial[i].numero3 && numero2 == historial[i].numero1)))
        {
            printf("\n¡Enhorabuena has ganado!\n");
            return;
        }
        else if (op2 == 3 && (numero1 == historial[i].numero1 && numero2 == historial[i].numero2 && numero3 == historial[i].numero3))
        {
            printf("\n¡Enhorabuena has ganado!\n");
            return;
        }
    }

    printf("\nPerdiste\n");
}
void main()
{
    srand(time(NULL));
    int opciones = 0;
    struct Historial historial
        [100]; // Supongamos que almacenamos hasta 100 tiradas
    int contadorTiradas = 0;         // Contador para rastrear la cantidad de tiradas
    printf("\nIngrese la opción la acción requerida:\n ");
    printf("0- Para salir\n1- Hacer la tirada\n2- Historial\n3- Jugar");
    scanf("%i", &opciones);
    fflush(stdin);

    while (opciones != 0)
    {
        if (opciones == 1)
        {
            // Generar tres números aleatorios y almacenarlos en el historial (rango: 00-99)
            int PrimerNumero = rand() % 100;
            int SegundoNumero = rand() % 100;
            int TercerNumero = rand() % 100;

            guardarEnHistorial(historial, &contadorTiradas, PrimerNumero, SegundoNumero, TercerNumero);

            printf("\tTus números son: %d %d %d\n", PrimerNumero, SegundoNumero, TercerNumero);
            printf("Hora y fecha actual: %02d:%02d:%02d %02d/%02d/%d\n",
                   historial[contadorTiradas - 1].hora, historial[contadorTiradas - 1].minuto, historial[contadorTiradas - 1].segundo,
                   historial[contadorTiradas - 1].dia, historial[contadorTiradas - 1].mes, historial[contadorTiradas - 1].anio);
        }
        else if (opciones == 2)
        {
            for (int i = 0; i < contadorTiradas; i++)
            {
                imprimirTirada(historial[i]);
            }
        }
        else if (opciones == 3)
        {
            realizarJugada(historial, &contadorTiradas);
        }

        printf("\nIngrese la opción la acción requerida:\n");
        printf("0- Para salir\n1- Hacer la tirada\n2- Historial\n3- Jugar\n");
        scanf("%i", &opciones);
        fflush(stdin);
    }
}


