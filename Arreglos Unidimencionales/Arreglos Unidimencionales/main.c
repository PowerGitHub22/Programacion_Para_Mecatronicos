#include <stdio.h>
#include <stdlib.h>

/*Programa 5.1
void main()
{
    int I, NUM, CUE = 0;
    int ARRE [10];
    for (I=0; I<10; I++)
    {
        printf("Ingrese el elemento %d del arreglo: ", I+1);
        scanf("%d", &ARRE[I]);
    }
    printf("\n\nIngrese el número que se va a buscar en el arreglo: ");
    scanf("%d", &NUM);
    for (I=0; I<10; I++)
    {
        if (ARRE[I] == NUM)
        {
            CUE++;
        }
    }
    printf("\n\nEl %d se encuentra %d veces en el arreglo", NUM, CUE);
}*/

/*Programa 5.2
void main(void)
{
    int ELE[5] = {0};
    int I, VOT;
    printf("Ingresa el primer voto (0 - Para terminar): ");
    scanf("%d", &VOT);
    while (VOT)
    {
        if ((VOT > 0) && (VOT < 6))
        {
            ELE[VOT-1]++;
        }
        else
        {
            printf("\nEl voto ingresado es incorrecto.\n");

        }
        printf("Ingresa el siguiente voto (0 - Para terminar): ");
        scanf("%d", &VOT);

    }
    printf("\n\nResultados de la Elección\n");
        for (I = 0; I <= 4; I++)
        {
            printf("\nCandidato %d: %d", I+1, ELE[I]);
        }
}*/

/*Programa 5.3

void main(void)
{
    int X = 3, Y = 7, Z[5] = {2, 4, 6, 8, 10};
    printf("\nX = %d \t Y = %d \t Z[0] = %d \t Z[1] = %d \t Z[3] = %d \t Z[4]= %d", X, Y,
           Z[0], Z[1], Z[2], Z[3], Z[4]);
    int *IX;
    IX = &X;
    Y = *IX;
    *IX = 1;
    printf("\nX = %d \t Y = %d \t Z[0] = %d \t Z[1] = %d \t Z[2] = %d \t Z[3] = %d\t Z[4] =%d", X, Y, Z[0], Z[1], Z[2], Z[3], Z[4]);
    IX = &Z[2];
    Y = *IX;
    *IX = 15;
    printf("\nX = %d \t Y = %d \t Z[0] = %d \t Z[1] = %d \t Z[2] = %d \t Z[3] = %d\t Z[4] =%d", X, Y, Z[0], Z[1], Z[2], Z[3], Z[4]);
    X = *IX + 5;
    *IX = *IX - 5;
    printf("\nX = %d \t Y = %d \t Z[0] = %d \t Z[1] = %d \t Z[2] = %d \t Z[3] = %d\t Z[4] =%d", X, Y, Z[0], Z[1], Z[2], Z[3], Z[4]);
    ++*IX;
    *IX += 1;
    printf("\nX = %d \t Y = %d \t Z[0] = %d \t Z[1] = %d \t Z[2] = %d \t Z[3] = %d\t Z[4] =%d", X, Y, Z[0], Z[1], Z[2], Z[3], Z[4]);
    X = *(IX + 1);
    Y = *IX;
    printf("\nX = %d \t Y = %d \t Z[0] = %d \t Z[1] = %d \t Z[2] = %d \t Z[3] = %d\t Z[4] =%d", X, Y, Z[0], Z[1], Z[2], Z[3], Z[4]);
    IX = IX + 1;
    Y = *IX;
    printf("\nX = %d \t Y = %d \t Z[0]= %d \t Z[1] = %d \t Z[2] = %d \t Z[3] = %d\t Z[4] =%d", X, Y, Z[0], Z[1], Z[2], Z[3], Z[4]);
    IX = IX + 4;
    Y = *IX;
    printf("\nX = %d \t Y = %d \t Z[0]= %d \t Z[1] = %d \t Z[2] = %d \t Z[3] = %d\t Z[4] =%d", X, Y, Z[0], Z[1], Z[2], Z[3], Z[4]);
    IX = &X;
    IX = IX + 1;
    X = *IX;
    printf("\nX = %d \t Y = %d \t Z[0]= %d \t Z[1] = %d \t Z[2] = %d \t Z[3] = %d\t Z[4] =%d", X, Y, Z[0], Z[1], Z[2], Z[3], Z[4]);
}*/

/*Programa 5.4
const int MAX = 10;
void Lectura(int VEC[], int T);
void Imprime(int VEC[], int T);
void Producto(int *X, int *Y, int *Z, int T);

void main(void)
{
    int VE1[MAX], VE2[MAX], VE3[MAX];
    Lectura(VE1, MAX);
    Lectura(VE2, MAX);
    Producto(VE1, VE2, VE3, MAX);
    printf("\nProducto de los Vectores");
    Imprime(VE3, MAX);
}

void Lectura(int VEC[], int T)
{
    int I;
    printf("\n");
    for (I=0; I<T; I++)
    {
        printf("Ingrese el elemento %d: ", I+1);
        scanf("%d", &VEC[I]);
    }
}

void Imprime(int VEC[], int T)
{
    int I;
    for (I=0; I<T; I++)
    {
        printf("\nVEC[%d]: %d", I+1, VEC[I]);
    }
}

void Producto(int *X, int *Y, int *Z, int T)
{
    int I;
    for(I=0; I<T; I++)
    {
        Z[I] = X[I] * Y[I];
    }
}*/

/*Programa 5.5
const int TAM = 50;
void Lectura(int *, int);
void Frecuencia(int, int, int, int);
void Impresion(int *, int);
void Mayor(int *, int);
void main(void)
{
    int CAL[TAM], FRE[6] = {0};
    Lectura(CAL, TAM);
    Frecuencia(CAL, TAM, FRE, 6);
    printf("\nFrecuencia de Calificaciones\n");
    Impresion(FRE, 6);
    Mayor(FRE, 6);
}

void Lectura(int VEC[], int T)
{
    int I;
    for (I=0; I<T; I++)
    {
        printf("Ingrese la calificación -0:5- del alumno %d: ", I+1);
        scanf("%d", &VEC[I]);
    }
}

void Impresion(int VEC[], int T)
{
    int I;
    for (I=0; I<T; I++)
    {
        printf("\nVEC[%d]: %d", I, VEC[I]);
    }
}

void Frecuencia(int A[], int P, int B[], int T)
{
    int I;
    for (I=0; I<P; I++)
    {
        if ((A[I] >= 0) && (A[I] < 6))
        {
            B[A[I]]++;
        }
    }
}

void Mayor(int *X, int T)
{
    int I, MFRE = 0, MVAL = X[0];
    for (I=1; I<T; I++)
    {
        if (MVAL < X[I])
        {
            MFRE = I;
            MVAL = X[I];
        }
    }
    printf("\n\nMayor frecuencia de calificaciones: %d \tValor: %d", MFRE, MVAL);
}*/

/*Programa 5.6
const int MAX = 100;
void Lectura(float *, int);
double Suma(float *, int);
void main(void)
{
    float VEC[MAX];
    double RES;
    Lectura(VEC, MAX);
    RES = Suma(VEC, MAX);
}
void Lectura(float A[], int T)
{
    int I;
    for (I=0; I<T; I++)
    {
        printf("Ingrese el elemento %d: ", I+1);
        scanf("%f", &A[I]);
    }
}
double Suma(float A[], int T)
{
    int I;
    double AUX = 0.0;
    for (I=0; I<T; I++)
    {
        AUX += pow(A[I], 2);
    }
    return(AUX);
}*/

/*Programa 5.7
void Lectura(int *, int);
void Imprime(int *, int);
void Elimina(int *, int *);
void main(void)
{
    int TAM, ARRE[100];
    do
    {
        printf("Ingrese el tamaño del arreglo: ");
        scanf("%d", &TAM);
    }
    while  (TAM > 100 || TAM < 1);
    {
        Lectura(ARRE, TAM);
        Elimina(ARRE, &TAM);
        Imprime(ARRE, TAM);
    }


}
void Lectura(int A[], int T)
{
    printf("\n");
    int I;
    for (I=0; I<T; I++)
    {
        printf("Ingrese el elemento %d: ", I+1);
        scanf("%d", &A[I]);
    }
}
void Imprime(int A[], int T)
{
    int I;
    for (I=0; I<T; I++)
    {
        printf("\nA[%d]: %d", I, A[I]);
    }
}
void Elimina(int A[], int *T)
{
    int I = 0, K, L;
    while (I < (*T-1))
    {
        K = I + 1;
        while (K <= (*T-1))
        {
            if (A[I] == A[K])
            {
                for (L = K; L < (*T-1); L++)
                {
                    A[L] = A[L+1];
                }
                *T = *T -1;
            }
            else
            {
                K++;
            }
        }
        I++;
    }
}*/

/*Programa 5.8
const int TAM = 100;
void Imprime(int, int);
void Primo(int, int *);
void main(void)
{
    int P [TAM] = {2};
    int FLA, J = 2, PRI = 3;
    while (J <= TAM)
    {
        FLA = 1;
        Primo(PRI, &FLA);
        if (FLA)
        {
            P[J] = PRI;
            J++;
        }
        PRI += 2;
    }
    Imprime(P, TAM);
}

void Primo(int A, int *B)
{
    int DI = 3;
    while (*B && (DI < (A / 2)))
    {
        if ((A % DI) == 0)
        {
            *B = 0;
        }
        DI++;
    }
}

void Imprime(int Primos[], int T)
{
    int I;
for (I=0; I<T; I++)
    {
        printf("\nPrimos[%d]: %d", I, Primos[I]);
    }
}*/

/*Programa 5.9
const int MAX=100;
void Lectura(int, int);
int Busca(int *, int, int);
void main(void)
{
    int RES, ELE, TAM, VEC[MAX];
    do
    {
        printf("Ingrese el tamaño del arreglo: ");
        scanf("%d", &TAM);
    }
    while (TAM>MAX || TAM<1);
    Lectura(VEC, TAM);
    printf("\nIngrese el elemento a buscar: ");
    scanf("%d", &ELE);
    RES = Busca(VEC, TAM, ELE);
    if (RES)
    {
        printf("\nEl elemento se encuentra en la posición %d", RES);
    }
    else
    {
        printf("\nEl elemento no se encuentra en el arreglo");
    }
}
void Lectura(int A[], int T)
{

    int I;
    for (I=0; I<T; I++)
    {
        printf("Ingrese el elemento %d: ", I+1);
        scanf("%d", &A[I]);
    }
}
int Busca(int A[], int T, int K)
{
    int I = 0, BAN = 0, RES;
    while (I < T && !BAN)
    {
        if (A[I] == K)
        {
            BAN++;
        }
        else
        {
            I++;
        }
    }
    if (BAN)
    {
        RES = I + 1;
    }
    else
    {
        RES = BAN;
    }
    return (RES);
}*/

/*Programa 5.10
const int MAX=100;
void Lectura(int A[], int T);
int Busca(int *, int, int);
void main(void)
{
    int RES, ELE, TAM, VEC[MAX];
    do
    {
        printf("Ingrese el tamaño del arreglo: ");
        scanf("%d", &TAM);
    }
    while (TAM > MAX || TAM < 1);
    {
        Lectura(VEC, TAM);
        printf("\nIngrese el elemento a buscar:");
        scanf("%d", &ELE);
        RES = Busca(VEC, TAM, ELE);
    }
    if (RES)
    {
        printf("\nEl elemento se encuentra en la posición: %d", RES);
    }
    else
    {
        printf("\nEl elemento no se encuentra en el arreglo");
    }
}
void Lectura(int A[], int T)
{
    int I;
    for (I=0; I<T; I++)
    {
        printf("Ingrese el elemento %d: ", I+1);
        scanf("%d", &A[I]);
    }
}
int Busca(int A[], int T, int E)
{
    int RES, I = 0, BAN = 0;
    while ((I < T) && (E >= A[I]) && !BAN)
    {
        if (A[I] == E)
        {
            BAN++;
        }
        else
        {
            I++;
        }
    }
    if (BAN)
    {
        RES = I + 1;
    }
    else
    {
        RES = BAN;
    }
    return (RES);
}*/

/*Programa 5.11
const int MAX=100;
void Lectura(int A[], int T);
int Binaria(int *, int, int);
void main(void)
{
    int RES, ELE, TAM, VEC[MAX];
    do
    {
        printf("Ingrese el tamaño del arreglo: ");
        scanf("%d", &TAM);
    }
    while (TAM>MAX || TAM<1);
    {
        Lectura(VEC, TAM);
        printf("\nIngrese el elemento a buscar: ");
        scanf("%d", &ELE);
        RES = Binaria(VEC, TAM, ELE);
    }
    if (RES)
    {
        printf("\nEl elemento se encuentra en la posición: %d", RES);
    }
    else
    {
        printf("\nEl elemento no se encuentra en el arreglo");
    }
}
void Lectura(int A[], int T)
{
    int I;
    for (I=0; I<T; I++)
    {
        printf("Ingrese el elemento %d: ", I+1);
        scanf("%d", &A[I]);
    }
}
int Binaria(int A[], int T, int E)
{
    int ELE, IZQ = 0, CEN, DER = T-1, BAN = 0;
    while ((IZQ <= DER) && (!BAN))
    {
        CEN = (IZQ + DER) / 2;
        if (E == A[CEN])
        {
            BAN = CEN;
        }else
        {
            if (E > A[CEN])
            {
                IZQ = CEN + 1;
            }else
            {
                DER = CEN - 1;
            }
        }
    }
    return (BAN);
}*/

/*Programa 5.12
const int MAX = 100;
void Lectura(int *, int);
void Imprime(int *, int);
void main(void)
{
    int TAM, VEC[MAX];
    do
    {
        printf("Ingrese el tamaño del arreglo: ");
        scanf("%d", &TAM);
    }
    while (TAM>MAX || TAM<1);
    Lectura(VEC, TAM);
    Ordena(VEC, TAM);
    Imprime(VEC, TAM);
}

void Lectura(int A[], int T)
{
    int I;
    for (I=0; I<T; I++)
    {
        printf("Ingrese el elemento %d: ", I + 1);
        scanf("%d", &A[I]);
    }
}
void Imprime(int A[], int T)
{
    int I;
    for (I=0; I<T; I++)
    {
        printf("\nA[%d]: %d", I, A[I]);
    }
}

void Ordena(int A[], int T)
{
    int AUX, L, I;
    for (I=1; I<T; I++)
    {
        AUX = A[I];
        L = I - 1;
        while ((L >= 0) && (AUX < A[L]))
        {
            A[L+1] = A[L];
            L--;

        }
        A[L+1] = AUX;
    }
}*/

/*Programa 5.13
const int MAX = 100;
void Lectura(int *, int);
void Ordena(int *, int);
void Imprime(int *, int);
void main(void)
{
    int TAM, VEC[MAX];
    do
    {
        printf("Ingrese el tamaño del arreglo: ");
        scanf("%d", &TAM);
    }
    while (TAM>MAX || TAM<1);
    Lectura(VEC, TAM);
    Ordena(VEC, TAM);
    Imprime(VEC, TAM);
}
void Lectura(int A[], int T)
{
    int I;
    for (I=0; I<T; I++)
    {
        printf("Ingrese el elemento %d: ", I+1);
        scanf("%d", &A[I]);
    }
}
void Imprime(int A[], int T)
{
    int I;
    for (I=0; I<T; I++)
    {
        printf("\nA[%d]: %d", I, A[I]);
    }
}

void Ordena(int A[], int T)
{
    int I, J, MEN, L;
    for (I=0; I < (T-1); I++)
    {
        MEN = A[I];
        L = I;
        for (J=(I+1); J<T; J++)
        {
            if (A[J] < MEN)
            {
                MEN = A[J];
                L = J;
            }
        }
        A[L] = A[I];
        A[I] = MEN;
    }
}*/

/*Programa 5.14
const int MAX = 100;
void Lectura(int *, int);
float Media(int *, int);
float Varianza(int *, int, float);
float Desviacion(float);
void Frecuencia(int *, int, int *);
int Moda(int *, int);

void main(void)
{
    int TAM, MOD, ALU[MAX], FRE[11] = {0};
    float MED, VAR, DES;
    do
    {
        printf("Ingrese el tamaño del arreglo: ");
        scanf("%d", &TAM);
    }
    while (TAM > MAX || TAM < 1);
    {
        Lectura(ALU, TAM);
        MED = Media(ALU, TAM);
        VAR = Varianza(ALU, TAM, MED);
        DES = Desviacion(VAR);
        Frecuencia(ALU, TAM, FRE);
        MOD = Moda(FRE, 11);
        printf("\nMedia: %.2f", MED);
        printf("\nVarianza: %.2f", VAR);
        printf("\nDesviación: %.2f", DES);
        printf("\nModa: %d", MOD);
    }
}
void Lectura(int A[], int T)
{
    int I;
    for (I=0; I<T; I++)
    {
        printf("Ingrese el elemento %d: ", I+1);
        scanf("%d", &A[I]);
    }
}
float Media(int A[], int T)
{
    int I;
    float SUM = 0.0;
    for (I=0; I < T; I++)
    {
        SUM += A[I];
    }
    return (SUM / T);
}
float Varianza(int A[], int T, float M)
{
    int I;
    float SUM = 0.0;
    for (I=0; I < T; I++)
    {
        SUM += pow ((A[I] - M), 2);
    }
    return (SUM / T);
}
float Desviacion(float V)
{
    return (sqrt(V));
}
void Frecuencia(int A[], int P, int B[])
{
    int I;
    for (I=0; I < P; I++)
    {
        B[A[I]]++;
    }
}
int Moda(int A[], int T)
{
    int I, MOD = 0, VAL = A[0];
    for (I=1; I<T; I++)
    {
        if (MOD < A[I])
        {
            MOD = I;
            VAL = A[I];
        }
    }
    return (MOD);
}*/

/*Programa 5.15
void main(void)
{
    int X = 5, Y = 8, V[5] = {1, 3, 5, 7, 9};
    int *AY, *AX;
    AY = &Y;
    X = *AY;
    *AY = V[3] + V[2];
    printf("\nX=%d Y=%d V[0]=%d V[1]=%d V[2]=%d V[3]=%d V[4]=%d", X, Y, V[0], V[1], V[2], V[3], V[4]);
    AX = &V[V[0]*V[1]];
    X = *AX;
    Y = *AX * V[1];
    printf("\nX=%d Y=%d V[0]=%d V[1]=%d V[2]=%d V[3]=%d V[4]=%d", X, Y, V[0], V[1], V[2], V[3], V[4]);

}*/

/*Programa 5.16
void main(void)
{
    int V1[4]= {2, 3, 4, 7}, V2[4]= {6};
    int *AX, *AY;
    AX = &V1[3];
    AY = &V2[2];
    V1[V2[0]-V1[2]]= *AY;
    *AY= *AX - V1[0];
    printf("\nV1[0]=%d V1[1]=%d V1[2]=%d V1[3]=%d \tV2[0]=%d V2[1]=%d V2[2]=%d V2[3]=%d", V1[0],V1[1],V1[2],V1[3],V2[0],V2[1],V2[2],V2[3]);
    V2[1] = ++*AX;
    V2[3] = (*AY)++;
    *AX += 2;
    printf("\nV1[0]=%d V1[1]=%d V1[2]=%d V1[3]=%d \tV2[0]=%d V2[1]=%d V2[2]=%d V2[3]=%d", V1[0],V1[1],V1[2],V1[3],V2[0],V2[1],V2[2],V2[3]);
}*/

/*Programa 5.17
void main(void)
{
    int V1[4] = {1, 3, 5, 7}, V2[4]= {2,4};
    int *AX, *AY;
    AX = &V1[2];
    AY = &V2[2];
    V2[2] = *(AX+1);
    V2[3] = *AX;
    AX = AX + 1;
    V1[0] = *AX;
    printf("\nV1[0]=%d V1[1]=%d V1[2]=%d V1[3]=%d \tV2[0]=%d V2[1]=%d", V1[0],V1[1],V1[2],V1[3],V2[0],V2[1],V2[2],V2[3]);
    V1[2] = *AY;
    V1[1] = --*AY;
    AX = AX + 1;
    V1[3] = *AX;
    printf("\nV1[0]=%d V1[1]=%d V1[2]=%d V1[3]=%d \tV2[0]=%d V2[1]=%d V2[2]=%d V2[3]=%d", V1[0],V1[1],V1[2],V1[3],V2[0],V2[1],V2[2],V2[3]);
}*/

