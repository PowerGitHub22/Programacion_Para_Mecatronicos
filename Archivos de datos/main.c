#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/*Programa 9.1
void main(void)
{
    char p1;
    FILE *ar;
    ar = fopen("arc.txt", "w");
    if (ar != NULL)
    {
        while ((p1=getchar()) != '\n')
        {
            fputc(p1, ar);
        }
        fclose(ar);
    }else
    {
        printf("No se puede abrir el archivo");
    }
}*/

/*Programa 9.2
void main(void)
{
    char p1;
    FILE *ar;
    if ((ar = fopen("arc.txt", "r")) != NULL)
    {
        while (!feof(ar))
        {
            p1 = fgetc(ar);
            putchar(p1);
        }
        fclose(ar);
    }
    else
    {
        printf("No se puede abrir el archivo");
    }
}*/


/*Programa 9.3
void main(void)
{
    char cad[50];
    int res;
    FILE *ar;
    if ((ar = fopen("arc.txt", "w")) != NULL)
    {
        printf("\n¿Desea ingresar una cadena de caracteres? Sí-1 No-0:");
        scanf("%d", &res);
        while (res)
        {
            fflush(stdin);
            printf("Ingrese la cadena: ");
            gets(cad);
            fputs(cad, ar);
            printf("\n¿Desea ingresar otra cadena de caracteres? Sí-1 No-0:");
            scanf("%d", &res);
            if (res)
            {
                fputs("\n", ar);
            }
        }
        fclose(ar);
    }else
    {
        printf("No se puede abrir el archivo");
    }
}*/


/*Programa 9.4
void main(void)
{
    char cad[50];
    FILE *ap;
    if ((ap=fopen ("arc.txt", "r")) != NULL)
    {
        while (!feof(ap))
        {
            fgets(cad, 50, ap);
            puts(cad);
        }
        fclose(ap);
    }
    else
    {
        printf("No se puede abrir el archivo");
    }
}*/

/*Programa 9.5
void main(void)
{
    int i, j, n, mat;
    float cal;
    FILE *ar;
    printf("\nIngrese el número de alumnos: ");
    scanf("%d", &n);
    if ((ar = fopen("arc8.txt", "w")) != NULL)
    {
        fprintf(ar,"%d ", n);
        for (i=0; i<n; i++)
        {
            printf("\nIngrese la matrícula del alumno %d: ", i+1);
            scanf("%d", &mat);
            fprintf(ar,"\n%d ", mat);
            for (j=0; j<5; j++)
            {
                printf("\nCalificación %d: ", j+1);
                scanf("%f", &cal);
                fprintf(ar,"%.2f ", cal);
            }
        }
        fclose(ar);
    }
    else
    {
        printf("No se puede abrir el archivo");
    }
}*/

/*Programa 9.6
void main(void)
{
    int i, j, n, mat;
    float cal, pro;
    FILE *ar;
    if ((ar = fopen("arc9.txt", "r")) != NULL)
    {
        fscanf(ar, "%d", &n);
        for (i = 0; i < n; i++)
        {
            fscanf(ar, "%d", &mat);
            printf("%d\t", mat);
            pro = 0;
            for (j=0; j<5; j++)
           {
                fscanf(ar, "%f", &cal);
                pro += cal;
            }
            printf("\t %.2f ", pro / 5);
            printf("\n");
        }
        fclose(ar);
    }else
    {
       printf("No se puede abrir el archivo");
    }
}*/

/*Programa 9.7
void promedio(FILE *);
void main(void)
{
    FILE *ar;
    if ((ar = fopen("arc9.txt", "r")) != NULL)
    {
        promedio(ar);
        fclose(ar);
    }
    else
    {
        printf("No se puede abrir el archivo");
    }
}
void promedio(FILE *ar1)
{
    int i, j, n, mat;
    float pro, cal;
    fscanf(ar1, "%d", &n);
    for (i=0; i<n; i++)
    {
        fscanf(ar1, "%d", &mat);
        printf("%d\t", mat);
        pro = 0;
        for (j = 0; j < 5; j++)
        {
            fscanf(ar1, "%f", &cal);
            pro += cal;
        }
        printf("\t %.2f ", pro / 5);
        printf("\n");
    }
}*/

/*Programa 9.8
typedef struct
{
    int matricula;
    char nombre[20];
    int carrera;
    float promedio;
} alumno;
void escribe(FILE *);
void main(void)
{
    FILE *ar;
    if ((ar = fopen ("ad1.dat", "w")) != NULL)
    {
        escribe(ar);
    }
    else
    {
        printf("\nEl archivo no se puede abrir");
    }
    fclose(ar);
}
void escribe(FILE *ap)
{
    alumno alu;
    int i = 0, r;
    printf("\n¿Desea ingresar información sobre alumnos? (Sí-1 No-0): ");
    scanf("%d", &r);
    while (r)
    {
        i++;
        printf("Matrícula del alumno %d: ", i);
        scanf("%d", &alu.matricula);
        printf("Nombre del alumno %d: ", i);
        fflush(stdin);
        gets(alu.nombre);
        printf("Carrera del alumno %d: ", i);
        scanf("%d", &alu.carrera);
        printf("Promedio del alumno %d: ", i);
        scanf("%f", &alu.promedio);
        fwrite(&alu, sizeof(alumno), 1, ap);
        printf("\n¿Desea ingresar información sobre más alumnos? (Sí-1 No-0): ");
        scanf("%d", &r);
    }
}*/

/*Programa 9.9
typedef struct
{
    int matricula;
    char nombre[20];
    int carrera;
    float promedio;
} alumno;
void lee(FILE *);
void main(void)
{
    FILE *ar;
    if ((ar = fopen ("ad1.dat", "r")) != NULL)
    {
        escribe(ar);
    }
    else
    {
        printf("\nEl archivo no se puede abrir");
    }
    fclose(ar);
}
void lee(FILE *ap)
{
    alumno alu;
    fread(&alu, sizeof(alumno), 1, ap);
    while (!feof(ap))
    {
        printf("\nMatrícula: %d", alu.matricula);
        printf("\tCarrera: %d", alu.carrera);
        printf("\tPromedio: %f\t ", alu.promedio);
        puts(alu.nombre);
        fread(&alu, sizeof(alumno), 1, ap);
    }
}*/

/*Programa 9.10
typedef struct
{
    int matricula;
    char nombre[20];
    int carrera;
    float promedio;
} alumno;
void modifica(FILE *);
void main(void)
{
    FILE *ar;
    if ((ar = fopen ("ad1.dat", "r+")) != NULL)
    {
        modifica(ar);
    }
    else
    {
        printf("\nEl archivo no se puede abrir");
    }
    fclose(ar);
}
void modifica(FILE *ap)
{
    int d;
    alumno alu;
    printf("\nIngrese el número de registro que desea modificar: ");
    scanf("%d", &d);
    fseek(ap, (d-1)*sizeof(alumno), 0);
    fread(&alu, sizeof(alumno), 1, ap);
    printf("\nIngrese el promedio correcto del alumno: ");
    scanf("%f", &alu.promedio);
    fseek(ap, (d-1)*sizeof(alumno), 0);
    fwrite(&alu, sizeof(alumno), 1, ap);
}*/

/*Programa 9.11
typedef struct
{
    int clave;
    int departamento;
    float salario;
    float ventas[12];
} empleado;

void invrementa(FILE *);

void main(void)
{
    FILE *ar;
    if ((ar = fopen("ad5.dat", "r+"))!= NULL)
    incrementa(ar);
        else
        printf("\nel archivo no se puede abrir");
    rewind(ar);
    fclose(ar);
}

void incrementa(FILE *ap)
{
    int i, j, t;
    float sum;
    empleado emple;

    t = sizeof(empleado);

    fread(&emple, sizeof(empleado), 1, ap);

    while(!feof(ap))
    {
        i = ftell(ap) / t;
        sum = 0;
        for (j=0; j<12; j++)
            sum += emple.ventas[j];
        if (sum > 1000000)
        {
            emple.salario = emple.salario * 1.10;
            fseek(ap, (i-1)*sizeof(empleado), 0);
            fwrite(&emple, sizeof(empleado), 1, ap);
            fseek(ap, i*sizeof(empleado), 0);

        }
        fread(&emple, sizeof(empleado), 1, ap);
    }
}*/

/*Programa 9.12*
void main(void)
{
    char p1;
    FILE *ar;
    ar = fopen("libro.txt", "a");
    if (ar != NULL)
    {
        while ((p1 = getchar()) != '\n')
            fputc(p1, ar);
        fclose(ar);
    }
    else
        printf("no se puede abrir el archivo");
}*/

/*Programa 9.13
int cuenta(char);

void main(void)
{
    int res;
    char car;
    printf("\ningrese el caracter que se va a buscar en el archivo: ");
    car = getchar();
    res = cuenta(car);
    if (res != -1)
        printf("\n\nel caracter %c se encuentra en el archivo %d veces", car, res);
    else
        printf("no se pudo abrir el archivo");

}
int cuenta(char car)
{
    int res, con = 0;
    char p;
    FILE *ar;
    if ((ar = fopen ("arc.txt", "r"))!= NULL)
    {
        while (!feof(ar))
        {
            p = getc(ar);
            if (p == car)
                con++;
        }
        fclose(ar);
        res = con;
    }
    else
        res = -1;
    return (res);
}*/

/*Programa 9.14
void minymay(FILE *);

void main(void)
{
    char p;
    FILE *ar;
    if ((ar = fopen("arc5.txt", "r")) != NULL)
    {
        minymay(ar);
        fclose(ar);
    }
    else
        printf("no se pudo abrir el archivo");
}
void minymay(FILE *arc)
{
    int min = 0, may = 0;
    char p;
    while (!feof(arc))
    {
        p = fgetc(arc);
        if (islower(p))
            min++;
        else
            if (isupper(p))
            may++;
    }
    printf("\nnumero de minisculas: %d", min);
    printf("\nnumero de mayusculas: %d", may);
}*/

/*Programa 9.15
void minymay(FILE *);

void main(void)
{
    FILE *ap;
    if ((ap = fopen ("arc.txt", "r")) != NULL)
    {
        minymay(ap);
        fclose(ap);
    }
    else
        printf("no se puede abrir el archivo");
}
void minymay(FILE *ap1)
{
    char cad[30];
    int i, mi = 0, ma = 0;
    while (!feof(ap1))
    {
        fgets(cad,30,ap1);
        i=0;
        while (cad[i] != '\0')
        {
            if (islower(cad[i]))
                mi++;
            i++;
        }
    }
    printf("\n\nnumero de letras minusculas: %d", mi);
    printf("\nnumero de letras mayusculas: %d", ma);
}*/

/*Programa 9.16
void sumypro(FILE *);
void main(void)
{
    FILE *ap;
    if ((ap=fopen("arc2.txt", "r")) != NULL)
    {
        sumypro(ap);
        fclose(ap);
    }
    else
        printf("no se puede abrir el archivo");

}
void sumypro(FILE *ap1)
{
    char cad[30];
    int i = 0;
    float sum = 0.0, r;
    while (!feof (ap1))
    {
        fgets(cad,30,ap1);
        r = atof(cad);
        if (r)
        {
            i++;
            sum += r;
        }
    }
    printf("\nsuma: %.2", sum);
    if (i)
        printf("\npromedio: %.2f", sum/i);
}*/

/*Programa 9.17
#include <string.h>

void cambia(FILE *, FILE *);

void main(void)
{
    FILE *ar;
    FILE *ap;
    ar = fopen("arc.txt", "r");
    ap = fopen("arc1.txt", "w");
    if ((ar != NULL) && (ap != NULL))
    {
        cambia(ar, ap);
        fclose(ar);
        fclose(ap);
    }
    else
        printf("no se pueden abrir los archivos");
}
void cambia(FILE *ap1, FILE *ap2)
{
    int i, j, k;
    char cad[30], *cad1="", *cad2="", aux[30];
    while (!feof(ap1))
    {
        fgets(cad, 30, ap1);
        strcpy(cad1, cad);
        cad2 = strstr(cad1, "mexico");

        while (cad2!=NULL)
        {
            cad2[0]='m';
            i = strlen(cad1);
            j = strlen(cad2);
            k = i - j;

            if (k)
            {
                strncpy(aux, cad1, k);
                aux[k] = '\0';
                strcat(aux, cad2);
                strcpy(cad1, aux);
            }
            else
                strcpy(cad1, cad2);
            cad2 = strstr(cad1, "mexico");
        }
        fputs(cad1, ap2);
    }
}
*/


/*Programa 9.18
void mezcla(FILE *, FILE *, FILE *);
void main(void)
{
    FILE *ar, *ar1, *ar2;
    ar = fopen("arc9.dat", "r");
    ar1 = fopen("arc10.dat", "r");
    ar2 = fopen("arc11.dat", "w");
    if (((ar != NULL) && (ar1 != NULL)) && (ar2 != NULL))
    {
        mezcla(ar, ar1, ar2);
        fclose(ar);
        fclose(ar1);
        fclose(ar2);
    }
    else
        printf("no se pueden abrir los archivos");
}
void mezcla(FILE *ar, FILE *ar1, FILE *ar2)
{
    int i, mat, mat1, b=1, b1=1;
    float ca[3], ca1[3], cal;
    while(((!feof(ar))|| !b) && ((!feof(ar1))|| !b1))
    {
        if (b)
        {
            fscanf(ar, "%d", &mat);
            for (i=0; i<3; i++)
                fscanf(ar, "%f", &ca[i]);
            b = 0;
        }
        if (mat < mat1)
        {
            fprintf(ar2, "%d\t", mat);
            for (i=0; i<3; i++)
                fprintf(ar2, "%f\t", ca[i]);
            fputs("\n", ar2);
            b = 1;
        }
        else
        {
            fprintf(ar2, "%d\t", mat1);
            for (i=0; i<3; i++)
                fprintf(ar2, "%f\t", ca1[i]);
            fputs("\n", ar2);
            b1 = 1;
        }
    }
    if (!b)
    {
       fprintf(ar2, "%d\t", mat);
       for (i=0; i<3; i++)
            fprintf(ar2, "%f\t", ca[i]);
       fputs("\n", ar2);
       while(!feof(ar))
       {
           fscanf(ar, "%d", &mat);
           fprintf(ar2, "%d\t", mat);
           for (i=0; i<3; i++)
           {
               fscanf(ar, "%f", &cal);
               fprintf(ar2, "%f\t", cal);
           }
           fputs("\n", ar2);
       }
    }
    if(!b1)
    {
        fprintf(ar2, "%d\t", mat1);
        for (i=0; i<3; i++)
            fprintf(ar2, "%f\t", ca1[i]);
        fputs("\n", ar2);
        while (!feof(ar1))
        {
            fscanf(ar1, "%d", &mat1);
            fprintf(ar2, "%d\t", mat1);
            for (i=0; i<3; i++)
            {
                fscanf(ar1, "%f", &cal);
                fprintf(ar2, "%f\t", cal);
            }
            fputs("\n", ar2);
        }
    }
}*/

/*Programa 9.19
typedef struct
{
    int matricula;
    char nombre[20];
    int carrera;
    float promedio;
} alumno;

void ordena(FILE *, FILE *);

void main(void)
{
   FILE *ar1, *ar2;
   ar1 = fopen("ad5.dat", "r");
   ar2 = fopen("ad6.dat", "w");
   if ((ar1 != NULL) && (ar2 != NULL))
        ordena(ar1, ar2);
   else
    printf("\nel o los archivos no se pudieron abrir");
   fclose(ar1);
   fclose(ar2);
}
void ordena(FILE *ap1, FILE *ap2)
{
    alumno alu;
    int t, n, i;
    t = sizeof(alumno);
    fseek (ap1, sizeof(alumno), 2);
    n = (ftell(ap1) / t) - 1;
    rewind(ap1);
    for (i = (n-1); i >= 0; i- -)
    {
        fseek(ap1, i *sizeof(alumno), 0);
        fread(&alu, sizeof(alumno), 1, ap1);
        fwrite(&alu, sizeof(alumno), 1, ap2);
    }
}*/


/*Programa 9.20
typedef struct
{
    char materia[20];
    int calificacion;
} matcal;

typedef struct
{
    int matricula;
    char nombre[20];
    matcal cal[5];
} alumno;

void f1(FILE *);
void f2(FILE *);
float f3(FILE *);

void main(void)
{
    float pro;
    FILE *ap;
    if ((ap = fopen("esc.dat", "r")) != NULL)
    {
        f1 (ap);
        f2 (ap);
        pro = f3(ap);
        printf("\n\npromedio general materia 4: %f", pro);
    }
    else
    printf("\nel archivo no se puede abrir");
    fclose(ap);

}
void f1(FILE *ap)
{
    alumno alu;
    int j;
    float sum, pro;
    printf("\nmatricula y promedios");
    fread (&alu, sizeof(alumno), 1, ap);
    while (!feof(ap))
    {
        printf("\nmatricula: %d", alu.matricula);
        sum = 0.0;
        for (j=0; j<5; j++)
            sum += alu.cal[j].calificacion;
        pro = sum / 5;
        printf("\tpromedio: %f", pro);
        fread(&alu, sizeof(alumno), 1, ap);
    }
}
void f2(FILE *ap)
{
    alumno alu;
    int j;
    rewind(ap);
    printf("\n\nalumnos con calificacion > 9 en materia 3");
    fread(&alu, sizeof(alumno), 1, ap);
    while (!feof(ap))
    {
        if (alu.cal[2]. calificacion > 9)
            printf("\nmatricula del alumno: %d", alu.matricula);
        fread(&alu, sizeof(alumno), 1, ap);
    }
}
float f3(FILE *ap)
{
    alumno alu;
    int i = 0;
    float sum = 0, pro;
    rewind(ap);
    fread(&alu, sizeof(alumno), 1, ap);
    while (!feof(ap))
    {
        i++;
        sum += alu.cal[3]. calificacion;
        fread(&alu, sizeof(alumno), 1, ap);
    }
    pro = (float)sum / i;
    return (pro);
}*/


/*Programa 9.21
typedef struct
{
    int clave;
    char nombre[20];
    int carrera;
    float promedio;
    float examen;
    char telefono[12];
} alumno;

float f1(FILE *);
void f2(FILE *, FILE *, FILE *, FILE *, FILE *);
void f3(FILE *, FILE *, FILE *, FILE *);

void main(void)
{
    float pro;
    FILE *ap, *c1, *c2, *c3, *c4, *c5;
    ap = fopen("alu1.dat", "r");
    c1 = fopen("car1.dat", "w+");
    c2 = fopen("car2.dat", "w+");
    c3 = fopen("car3.dat", "w+");
    c4 = fopen("car4.dat", "w+");
    c5 = fopen("car5.dat", "w+");
    if ((ap!=NULL) && (c1!=NULL) && (c2!=NULL) && (c3!=NULL) && (c4!=NULL) && (c5!=NULL))
    {
        pro = f1(ap);
        printf("\npromedio examen de admision: %.2f", pro);
        f2(ap, c1, c2, c3, c4, c5);
        f3(c1, c2, c3, c4, c5);

    }
    else
        printf("\nel o los archivos no se pudieron abrir");
    fclose(ap);
    fclose(c1);
    fclose(c2);
    fclose(c3);
    fclose(c4);
    fclose(c5);
}

float f1(FILE *ap)
{
    alumno alu;
    float sum = 0, pro;
    int i = 0;
    fread(&alu, sizeof(alumno), 1, ap);
    while (!feof(ap))
    {
        i++;
        sum += alu.examen;
        fread(&alu, sizeof(alumno), 1, ap);
    }
    pro = sum / i;
    return (pro);
}
void f2(FILE *ap, FILE *c1, FILE *c2, FILE *c3, FILE *c4, FILE *c5)
{
    alumno alu;
    rewind(ap);
    fread(&alu, sizeof(alumno), 1, ap);
    while (!feof(ap))
    {
        if (((alu.examen >= 1300) && (alu.promedio >= 8)) ||((alu.examen >= 1400)&& (alu.promedio >= 7)))
        {
            switch (alu.carrera)
            {
                case 1: fwrite(&alu, sizeof(alumno), 1, c1);
                break;
                case 2: fwrite(&alu, sizeof(alumno), 1, c2);
                break;
                case 3: fwrite(&alu, sizeof(alumno), 1, c3);
                break;
                case 4: fwrite(&alu, sizeof(alumno), 1, c4);
                break;
                case 5: fwrite(&alu, sizeof(alumno), 1, c5);
                break;

            }
        }
        fread(&alu, sizeof(alumno), 1, ap);

    }
}
void f3 (FILE *c1, FILE *c2, FILE *c3, FILE *c4, FILE *c5)
{
    alumno alu;
    float cal[5], sum;
    int i, j;
    i = 0;
    sum = 0;
    rewind(c1);
    fread(&alu, sizeof(alumno), 1, c1);
    while (!feof(c1))
    {
        i++;
        sum += alu.examen;
        fread(&alu, sizeof(alumno), 1, c1);
    }
    if (i)
        cal[0] = (sum / i);
    else
        cal[0] = 0;
    rewind(c2);
    sum = 0;
    i = 0;
    fread(&alu, sizeof(alumno), 1, c2);
    while (!feof(c2))
    {
        i++;
        sum += alu.examen;
        fread(&alu, sizeof(alumno), 1, c2);
    }
    if (i)
        cal[2] = 0;

    rewind(c4);
    sum = 0;
    i = 0;
    fread(&alu, sizeof(alumno), 1, c4);
    while (!feof(c4))
    {
        i++;
        sum += alu.examen;
        fread(&alu, sizeof(alumno), 1, c4);
    }
    if (i)
        cal[3] = (sum / i);
    else
        cal[3] = 0;
    rewind(c5);
    sum = 0;
    i = 0;
    fread(&alu, sizeof(alumno), 1, c5);
    while (!feof(c5))
    {
        i++;
        sum += alu.examen;
        fread(&alu, sizeof(alumno), 1, c5);
    }
    if (i)
        cal[4] = (sum / i);
    else
        cal[4] = 0;
    for (i=0; i<5; i++)
        printf("\npromedio carrera %d: %.2f", i+1, cal[i]);
}*/
