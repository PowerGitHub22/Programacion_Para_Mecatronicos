#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define premio1 10
#define premio2 20
#define premio3 30
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
    int numeros[3], numerosAleatorios[3], op2 = 0, monto;
    printf("¿Que tipo de jugada deseas hacer?\n");
    printf("1- Numero\t2- Pale\t3- Tripleta: ");
    scanf("%i", &op2);
    printf("Indique el monto a jugar: $");
    scanf("%i", &monto);

    // Validar la opción ingresada por el usuario
    if (op2 < 1 || op2 > 3)
    {
        printf("Opción no válida. Debes seleccionar 1, 2 o 3.\n");
        return;
    }

    // Generar números aleatorios
    for (int i = 0; i < op2; i++)
    {
        numerosAleatorios[i] = rand() % 100;
    }

    // Obtener los números según la opción seleccionada
    switch (op2)
    {
    case 1:
        printf("Indique su número: ");
        scanf("%i", &numeros[0]);
        guardarEnHistorial(historial, contadorTiradas, numeros[0], 0, 0);
        break;
    case 2:
        printf("Indique los números: ");
        scanf("%i %i", &numeros[0], &numeros[1]);
        guardarEnHistorial(historial, contadorTiradas, numeros[0], numeros[1], 0);
        break;
    case 3:
        printf("Indique los números: ");
        scanf("%i %i %i", &numeros[0], &numeros[1], &numeros[2]);
        guardarEnHistorial(historial, contadorTiradas, numeros[0], numeros[1], numeros[2]);
        break;
    }

    printf("\tTus números son: %d %d %d\n", historial[*contadorTiradas - 1].numero1, historial[*contadorTiradas - 1].numero2, historial[*contadorTiradas - 1].numero3);
    printf("Hora y fecha actual: %02d:%02d:%02d %02d/%02d/%d\n",
           historial[*contadorTiradas - 1].hora, historial[*contadorTiradas - 1].minuto, historial[*contadorTiradas - 1].segundo,
           historial[*contadorTiradas - 1].dia, historial[*contadorTiradas - 1].mes, historial[*contadorTiradas - 1].anio);

    // Comprobar si la jugada coincide con los números aleatorios generados
    int coincidencias = 0;
    for (int i = 0; i < op2; i++)
    {
        for (int j = 0; j < op2; j++)
        {
            if (numeros[i] == numerosAleatorios[j])
            {
                coincidencias++;
                break;
            }
        }
    }

    if (coincidencias == op2)
    {
        monto *= (op2 == 1) ? premio1 : ((op2 == 2) ? premio2 : premio3);
        printf("\n¡Enhorabuena has ganado! Su monto es: $%i\n", monto);
    }
    else
    {
        printf("\nPerdiste\n");
    }
}
void main()
{
    srand(time(NULL));
    int opciones = 0;
    struct Historial historial
        [100]; // Supongamos que almacenamos hasta 100 tiradas
    int contadorTiradas = 0;         // Contador para rastrear la cantidad de tiradas

    printf("\nIngrese la opción la acción requerida:\n ");
    printf("0- Para salir\n1- Hacer la tirada\n2- Historial\n3- Jugada \n");
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
        printf("0- Para salir\n1- Hacer la tirada\n2- Historial\n3- Jugada \n");
        scanf("%i", &opciones);
        fflush(stdin);
    }
}
