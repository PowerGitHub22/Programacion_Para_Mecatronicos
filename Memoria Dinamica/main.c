#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*struct alumno
{
    int matricula;
    char nombre[20];
    char carrera[20];
    float promedio;
    char direccion[20];
};

struct alumno* AllocAlumnos(int cantidad)
{
    return (struct alumno*)malloc(cantidad * sizeof(struct alumno));
}

int main(void)
{
    int cantidad_alumnos;

    printf("Ingrese la cantidad de alumnos: ");
    scanf("%d", &cantidad_alumnos);

    struct alumno* alumnos = AllocAlumnos(cantidad_alumnos);

    for (int i = 0; i < cantidad_alumnos; ++i)
    {
        printf("\nIngrese la matrícula del alumno %d: ", i + 1);
        scanf("%d", &alumnos[i].matricula);
        fflush(stdin);

        printf("Ingrese el nombre del alumno %d: ", i + 1);
        gets(alumnos[i].nombre);

        printf("Ingrese la carrera del alumno %d: ", i + 1);
        gets(alumnos[i].carrera);

        printf("Ingrese el promedio del alumno %d: ", i + 1);
        scanf("%f", &alumnos[i].promedio);
        fflush(stdin);

        printf("Ingrese la dirección del alumno %d: ", i + 1);
        gets(alumnos[i].direccion);
    }

    printf("\nDatos de los alumnos\n");

    for (int i = 0; i < cantidad_alumnos; ++i)
    {
        printf("\nDatos del alumno %d\n", i + 1);
        printf("%d\n", alumnos[i].matricula);
        puts(alumnos[i].nombre);
        puts(alumnos[i].carrera);
        printf("%.2f\n", alumnos[i].promedio);
        puts(alumnos[i].direccion);
    }

    // Liberar la memoria asignada dinámicamente
    free(alumnos);
    return 0;
}*/

#include <stdio.h>
#include <stdlib.h>

struct alumno
{
    int matricula;
    char nombre[20];
    char carrera[20];
    float promedio;
    char direccion[20];
};

struct alumno* AllocAlumnos(int cantidad)
{
    return (struct alumno*)malloc(cantidad * sizeof(struct alumno));
}

int main(void)
{
    int cantidad_alumnos;
    int opcion;

    printf("Ingrese la cantidad de alumnos: ");
    scanf("%d", &cantidad_alumnos);

    struct alumno* alumnos = AllocAlumnos(cantidad_alumnos);

    do
    {
        printf("\nSeleccione una opción:\n");
        printf("1. Ingresar más alumnos\n");
        printf("2. Mostrar datos de los alumnos\n");
        printf("3. Salir\n");
        printf("Opción: ");
        scanf("%d", &opcion);

        switch (opcion)
        {
            case 1:
                // Realloc para agregar más alumnos
                cantidad_alumnos += 1;
                alumnos = (struct alumno*)realloc(alumnos, cantidad_alumnos * sizeof(struct alumno));

                printf("\nIngrese la matrícula del nuevo alumno: ");
                scanf("%d", &alumnos[cantidad_alumnos - 1].matricula);
                fflush(stdin);

                printf("Ingrese el nombre del nuevo alumno: ");
                gets(alumnos[cantidad_alumnos - 1].nombre);

                printf("Ingrese la carrera del nuevo alumno: ");
                gets(alumnos[cantidad_alumnos - 1].carrera);

                printf("Ingrese el promedio del nuevo alumno: ");
                scanf("%f", &alumnos[cantidad_alumnos - 1].promedio);
                fflush(stdin);

                printf("Ingrese la dirección del nuevo alumno: ");
                gets(alumnos[cantidad_alumnos - 1].direccion);

                break;

            case 2:
                // Mostrar datos de los alumnos
                printf("\nDatos de los alumnos\n");

                for (int i = 0; i < cantidad_alumnos; ++i)
                {
                    printf("\nDatos del alumno %d\n", i + 1);
                    printf("%d\n", alumnos[i].matricula);
                    puts(alumnos[i].nombre);
                    puts(alumnos[i].carrera);
                    printf("%.2f\n", alumnos[i].promedio);
                    puts(alumnos[i].direccion);
                }
                break;

            case 3:
                // Salir del programa
                break;

            default:
                printf("Opción no válida. Intente de nuevo.\n");
        }
    } while (opcion != 3);

    // Liberar la memoria asignada dinámicamente
    free(alumnos);
    return 0;
}
