#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Programa 4.1
int cubo(void);
int I;
void main(void)
{
    int CUB;
    for (I = 1; I <= 10; I++)
    {
        CUB = cubo();
        printf("\nEl cubo de %d es: %d", I, CUB);
    }
}
int cubo(void)
{
    return (I*I*I);
}*/

/*Programa 4.2
int cubo(void);
int I;

void main (void)
{
    int CUB;
    for (I = 1; I <= 10; I++)
    {
        CUB = cubo();
        printf("\nEl cubo de %d es: %d", I, CUB);
    }
}

int cubo(void)
{
    int I = 2;
    return  (I*I*I);
}*/

/*Programa 4.3
void f1 (void);
int K = 5;
void main (void)
{
    int I;
    for (I = 1; I <= 3; I++)
    {
        f1();
    }

}
void f1 (void)
{
    int K = 2;
    K += K;
    printf("\n\nEl valor de la variable local es: %d", K);
    ::K = K + K;
    printf("\nEl valor de la variable global es: %d", ::K);
}*/

/*Porgrama 4.4
int f1(void);
int f2(void);
int f3(void);
int f4(void);

int K = 3;
void main(void)
{
    int I;
    for (I = 1; I <= 3; I++)
    {
        printf("\nEl resultado de la función f1 es: %d", f1());
        printf("\nEl resultado de la función f1 es: %d", f2());
        printf("\nEl resultado de la función f1 es: %d", f3());
        printf("\nEl resultado de la función f1 es: %d", f4());
    }
}
int f1(void)
{
    K += K;
    return (K);
}
int f2(void)
{
    int K = 1;
    K++;
    return (K);
}
int f3(void)
{
    static int K = 8;
    K += 2;
    return (K);
}
int f4(void)
{
    int K = 5;
    K = K + ::K;
    return (K);
}*/

/*Programa 4.5
int cubo(int);
void main(void)
{
    int I;
    for (I = 1; I <= 10; I++)
    {
        printf("\nEl cubo de I es:%d", cubo(I));
    }

}
int cubo(int K)
{
    return (K*K*K);
}*/

/*Programa 4.6
void f1(int *);
void main (void)
{
    int I, K = 4;
    for (I = 1; I <= 3; I++)
    {
        printf("\n\nValor de K antes de llamar a la función: %d", ++K);
        printf("\nValor de K después de llamar a la función: %d", f1, (&K));
    }
}
void f1(int *R)
{
    *R += *R;
}*/

/*Programa 4.7
int f1(int);
void main (void)
{
    int I, K = 4;
    for (I = 1; I <= 3; I++)
    {
        printf("\n\nValor de K antes de llamar la función: %d", ++K);
        printf("\n\nValor de K después de llamar la función: %d", f1(K));
    }
}
int f1 (int R)
{
    R += R;
    return (R);
}*/

/*Programa 4.8
int a, b, c, d;
void funcion1(int *, int *);
int funcion2 (int, int*);
void main (void)
{
    int a;
    a = 1;
    b = 2;
    c = 3;
    d = 4;
    printf("\n%d %d %d %d", a, b, c, d);
    funcion1(&b, &c);
    printf("\n%d %d %d %d", a, b, c, d);
    a = funcion2 (c, &d);
    printf("\n%d %d %d %d", a, b, c, d);
}

void funcion1(int *b, int *c)
{
    int d;
    a = 5;
    d = 3;
    (*b)++;
    (*c) += 2;
    printf("\n%d %d %d %d", a, *b, *c, d);
}

int funcion2(int c, int *d)
{
    int b;
    a++;
    b = 7;
    c += 3;
    (*d) += 2;
    printf("\n%d %d %d %d", a, b, c, *d);
    return (c);
}*/

/*Programa 4.9
int Suma (int x, int y)
{
    return (x + y);
}

int Resta (int x, int y)
{
    return (x - y);
}

int Control (int (*apf), (int, int), int x, int y)
{
    int res;
    RES = (*apf) (x, y);
    return (RES);
}
void main (void)
{
    int r1, r2;
    r1 =  Control(Suma, 15, 5);
    r2 = Control(Resta, 10, 4);
    printf("\nResultado 1: %d", r1);
    printf("\nResultado 2: %d", r2);
}*/

/*#define cant 10
 void main (void)
 {
     int I, NUM, CUE = 0, SUMA;
     float promedio;
     int ARRE[cat];
     for (I = 0; I<cant; I++)
     {
         printf("Ingrese el elemento %d del arreglo: ", I +1);
         scanf("%d", &ARRE[I]);
     }
     printf("\n\nIngrese el número que se va a buscar en el arreglo: ", I+1);
     scanf("%d", &NUM);
     for(I = 0; I <cant; I++)
     {
         if (ARRE[I] == NUM)
         {
             CUE++;
         }
     }
     printf("\n\nEl %d se encuetra %d veces en el arreglo", NUM, CUE);
 }*/

void Acutem (float);
void Maxima(float, int);
void Minima(float, int);

float ACT = 0.0;
float MAX = -50.0;
float MIN = 60.0;
int HMAX;
int HMIN;

void main(void)
{
    float TEM;
    int I;
    for (I = 1; I <= 24; I++)
    {
        printf("Ingresa la temperatura de la hora %d: ", I);
        scanf("%f", &TEM);
        Acutem(TEM);
        Acutem(TEM);
        Maxima(TEM, I);

        Minima(TEM, I);
    }
    //printf("\nPromedio del día: %5.2f", (ACT / 24));
    //printf("\nMáxima del día: %5.2f \tHora: %d", MAX, HMAX);
    //printf("\nMínima del día: %5.2f \tHora: %d", MIN, HMIN);

    for (I = 1; I <= 24; I++)
    {
        printf ("\n Temperatura: %f\t Hora: %i",ACT, HMAX);
    }
}
/*void Acutem(float T)
{
    ACT += T;
}*/

void Maxima(float T, int H)

{
    if (MAX < T)
    {
        MAX = T;
        HMAX = H;
    }
}

void Minima(float T, int H)
{
    if (MIN > T)
    {
        MIN = T;
        HMIN = H;
    }
}


