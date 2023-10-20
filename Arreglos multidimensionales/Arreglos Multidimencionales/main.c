#include <stdio.h>
#include <stdlib.h>


/*Programa 6.1
const int TAM = 2;
void Lectura(int [][TAM], int);
void Imprime(int [][TAM], int);

void main(void)
{
    int MAT[TAM][TAM];
    Lectura(MAT, TAM);
    Imprime(MAT, TAM);
}
void Lectura(int A[][TAM], int F)
{
    int I, J;
    for (I=0; I<F; I++)
        for (J=0; J<F; J++)
        {
            printf("Ingrese el elemento %d %d: ", I+1, J+1);
            scanf("%d", &A[I][J]);
        }
}
void Imprime(int A[][TAM], int F)
{
    int I, J;
    for (I=0; I<F; I++)
    {
        for (J=0; J<TAM; J++)
        {
            if (I == J)
            {
                printf("\nDiagonal %d %d: %d ", I, J, A[I][J]);
            }
        }
    }
}*/

/*Programa 6.2
const int MAX = 50;
void Lectura(int [][MAX], int, int);
void Suma(int [][MAX], int [][MAX], int [][MAX], int, int);
void Imprime(int [][MAX], int, int);

void main(void)
{
    int MA[MAX][MAX], MB[MAX][MAX], MC[MAX][MAX];
    int FIL, COL;
    do
    {
        printf("Ingrese el número de filas de los arreglos: ");
        scanf("%d", &FIL);
    }
    while (FIL> MAX || FIL< 1);
    do
    {
        printf("Ingrese el número de columnas de los arreglos: ");
        scanf("%d", &COL);
    }
    while (COL > MAX || COL < 1);
    printf("\nLectura del Arreglo MA\n");
    Lectura(MA, FIL, COL);
    printf("\nLectura del Arreglo MB\n");
    Lectura(MB, FIL, COL);
    Suma (MA, MB, MC, FIL, COL);
    printf("\nImpresión del Arreglo MC\n");
    Imprime (MC, FIL, COL);
}
void Lectura(int A[][MAX], int F, int C)
{
    int I, J;
    for (I=0; I<F; I++)
    {
        for (J=0; J<C; J++)
        {
            printf("Ingrese el elemento %d %d: ", I+1, J+1);
            scanf("%d", &A[I][J]);
        }
    }
}
void Suma(int M1[][MAX],int M2[][MAX],int M3[][MAX], int F, int C)
{
    int I, J;
    for (I=0; I<F; I++)
    {
        for (J=0; J<C; J++)
        {
            M3[I][J]= M1[I][J] + M2[I][J];
        }
    }
}
void Imprime(int A[][MAX], int F, int C)
{
    int I, J;
    for (I=0; I<F; I++)
    {
        for (J=0; J<C; J++)
        {
            printf("\nElemento %d %d: %d ", I, J, A[I][J]);
        }
    }
}*/

/*Programa 6.3
const int F = 8, C = 2, P = 5;
void Lectura(int [][C][P], int, int, int);
void Funcion1(int [][C][P], int, int, int);
void Funcion2(int [][C][P], int, int, int);
void Funcion3(int [][C][P], int, int, int);

void main(void)
{
    int UNI[F][C][P];
    Lectura(UNI, F, C, P);
    Funcion1(UNI, F, C, P);
    Funcion2(UNI, F, C, P);
    Funcion3(UNI, 6, C, P);
}

void Lectura(int A[][C][P], int FI, int CO, int PR)
{
    int K, I, J;
    for (K=0; K<PR; K++)
    {
        for (I=0; I<FI; I++)
        {
            for (J=0; J<CO; J++)
            {
                printf("Año: %d\tCarrera: %d\tSemestre: %d ", K+1, I+1, J+1);
                scanf("%d", &A[I][J][K]);
            }
        }
    }
}

void Funcion1(int A[][C][P],int FI, int CO, int PR)
{
    int K, I, J, MAY = 0, AO = -1, SUM;
    for (K=0; K<PR; K++)
    {
        SUM = 0;
        for (I=0; I<FI; I++)
        {
            for (J=0; J<CO; J++)
            {
                SUM += A[I][J][K];
            }
        }
        if (SUM > MAY)
        {
            MAY = SUM;
            AO = K;
        }
    }
    printf("\n\nAño con mayor ingreso de alumnos: %d Alumnos: %d", AO+1, MAY);
}

void Funcion2(int A[][C][P],int FI, int CO, int PR)
{
    int I, J, MAY = 0, CAR = -1, SUM;
    for (I=0; I<FI; I++)
    {
        SUM = 0;
        for (J=0; J<CO; J++)
        {
            SUM += A[I][J][PR-1];
        }
        if (SUM > MAY)
        {
            MAY = SUM;
            CAR = I;
        }
    }
    printf("\n\nCarrera con mayor número de alumnos: %d Alumnos: %d", CAR+1, MAY);
}

void Funcion3(int A[][C][P],int FI, int CO, int PR)
{
    int K, J, MAY = 0, AO = -1, SUM;
    for (K=0; K<PR; K++)
    {
        SUM = 0;
        for (J=0; J<CO; J++)
        {
            SUM += A[FI-1][J][K];
        }
        if (SUM > MAY)
        {
            MAY = SUM;
            AO = K;
        }
    }
    printf("\n\nAño con mayor ingreso de alumnos: %d Alumnos: %d", AO+1, MAY);
}*/

/*Programa 6.4
const int MAX = 100;
void Lectura(int [][MAX], int);
int Simetrico(int [][MAX], int);
void main(void)
{
    int MAT[MAX][MAX], N, RES;
    do
    {
        printf("Ingrese el tamaño del arreglo: ");
        scanf("%d", &N);
    }
    while (N > MAX || N < 1);
    Lectura (MAT, N);
    RES = Simetrico(MAT, N);
    if (RES)
    {
        printf("\nEl arreglo bidimensional es simétrico");
    }
    else
    {
        printf("\nEl arreglo bidimensional no es simétrico");
    }
}

void Lectura(int A[][MAX], int T)
{
    int I, J;
    for (I=0; I<T; I++)
    {
        for (J=0; J<T; J++)
        {
            printf("Fila: %d\tColumna: %d", I+1, J+1);
            scanf("%d", &A[I][J]);
        }
    }
}

int Simetrico (int A[][MAX], int T)
{
    int I = 0, J, F = 1;
    while ((I < T) && F)
    {
        J = 0;
        while ((J < I) && F)
        {
            if (A[I][J] == A[J][I])
            {
                J++;
            }
            else
            {
                F = 0;
            }
        }
        I++;
    }
    return (F);
}*/

/*Programa 6.5
const int MAX = 50;
const int EXA = 4;
void Lectura(float [MAX][EXA], int);
void Funcion1(float [MAX][EXA], int);
void Funcion2(float [MAX][EXA], int);

void main(void)
{
    int NAL;
    float ALU[MAX][EXA];
    do
    {
        printf("Ingrese el número de alumnos del grupo: ");
        scanf("%d", &NAL);
    }
    while (NAL > MAX || NAL < 1);
    Lectura(ALU, NAL);
    Funcion1(ALU, NAL);
    Funcion2(ALU, NAL);
}

void Lectura(float A[][EXA], int N)
{
    int I, J;
    for (I=0; I<N; I++)
    {
        for (J=0; J<EXA; J++)
        {
            printf("Ingrese la calificación %d del alumno %d: ", J+1, I+1);
            scanf("%f", &A[I][J]);
        }
    }
}
void Funcion1(float A[][EXA], int T)
{
    int I, J;
    float SUM, PRO;
    for (I=0; I<T; I++)
    {
        SUM = 0;
        for (J=0; J<EXA; J++)
        {
            SUM += A[I][J];
        }
        PRO = SUM / EXA;
        printf("\nEl promedio del alumno %d es: %5.2f", I+1, PRO);
    }
}

void Funcion2(float A[][EXA], int T)
{
    int I, J, MAY;
    float SUM, PRO, MPRO = 0;
    printf("\n");
    for (J=0; J<EXA; J++)
    {
        SUM = 0;
        for (I=0; I<T; I++)
        {
            SUM += A[I][J];
        }
        PRO = SUM / T;
        if (PRO > MPRO)
        {
            MPRO = PRO;
            MAY = J;
        }
        printf("\nEl promedio del examen %d es: %f", J+1, PRO);
    }
    printf("\n\nEl examen con mayor promedio es: %d \t Promedio: %5.2f", MAY+1, MPRO);
}*/

/*Programa 6.6
const int MAX = 50;
void Lectura(float [][MAX], int, int);
void Intercambia(float [][MAX], int, int);
void Imprime(float [][MAX], int, int);

void main(void)
{
    int F, C;
    float MAT[MAX][MAX];
    do
    {
        printf("Ingrese el número de filas: ");
        scanf("%d", & F);
    }
    while (F > MAX || F < 1);
    Lectura(MAT, F, C);
    Intercambia(MAT, F, C);
    Imprime(MAT, F, C);
}

void Lectura(float A[][MAX], int F, int C)
{
    int I, J;
    for (I=0; I< F; I++)
    {
        for (J=0; J<C; J++)
        {
            printf("Ingrese el elemento %d %d: ", I+1, J+1);
            scanf("%f", &A[I][J]);
        }
    }
}
void Intercambia(float A[][MAX], int F, int C)
{
    int I, J;
    float AUX;
    for (I=0; I < (C / 2); I++)
    {
        AUX = A[J][I];
        A[J][I] = A[J][C-I-1];
        A[J][C-I-1]=AUX;
    }
}

void Imprime(float A[][MAX], int F, int C)
{
    int I, J;
    for (I=0; I< F; I++)
    {
        for (J=0; J<C; J++)
        {
            printf("\nElemento %d %d: %5.2f", I+1, J+1, A[I][J]);
        }
    }
}*/

/*Programa 6.7
void Lectura1(int [15][12]);
void Lectura2(float, int);
void Funcion1(int [][12], int, int, float *, float *);
void Funcion2(float *, int);
void Funcion3(float *, int);

void main(void)
{
    int FAB[15][12] = {0};
    float COS[15], VEN[15];
    Lectura1(FAB);
    Lectura2(COS, 15);
    Funcion1(FAB, 15, 12, COS, VEN);
    Funcion2(VEN, 15);
    Funcion3(VEN, 15);
}
void Lectura1(int A[][12])
{
    int MES, PRO, CAN;
    printf("\nIngrese mes, tipo de producto y cantidad vendida: ");
    scanf("%d %d %d", &MES, &PRO, &CAN);
    while (MES!= -1 && PRO!= -1 && CAN!=-1)
    {
        A[MES-1][PRO-1] += CAN;
        printf("Ingrese mes, tipo de producto y cantidad vendida: ");
        scanf("%d %d %d", &MES, &PRO, &CAN);
    }
}
void Lectura2(float A[], int N)
{
    int I;
    for (I=0; I<N; I++)
    {
        printf("Ingrese costo del producto %d: ", I+1);
        scanf("%f", &A[I]);
    }
}
void Funcion1(int A[][12], int F, int C, float V1[], float V2[])
{
    int I, J, SUM;
    printf("\n");
    for (I=0; I< F; I++)
    {
        SUM = 0;
        for (J=0; J<C; J++)
        {
            SUM += A[I][J];
        }
        V2[I] = V1[I] * SUM;
        printf("\nTotal de ventas del producto %d: %8.2f", I+1, V2[I]);
    }

}
void Funcion2(float A[], int C)
{
    int I;
    float SUM = 0.0;
    for (I=0; I<C; I++)
    {
        SUM += A[I];
    }
    printf("\n\nTotal de ventas de la fábrica: %.2f", SUM);
}
void Funcion3(float A[], int C)
{
    int I, TPR = 0;
    float VEN = A[0];
    for (I=1; I<C; I++)
    {
        if (VEN < A[I])
        {
            TPR = I;
            VEN = A[I];
        }
    }
    printf("\n\nTipo de Producto más vendido: %d \t Ventas: %.2f", TPR + 1, VEN);
}*/

/*Programa 6.8
const int MAX = 50;
void Lectura(int [][MAX], int, int);
void Traspuesta(int [][MAX],int [][MAX], int, int);
void Imprime(int [][MAX], int, int);
void main(void)
{
    int MAT[MAX][MAX], TRA[MAX][MAX];
    int FIL, COL;
    do
    {
        printf("Ingrese el número de filas de la matriz: ");
        scanf("%d", &FIL);
    }
    while (FIL > MAX || FIL < 1);

    do
    {
        printf("Ingrese el número de columnas de la matriz: ");
        scanf("%d", &COL);
    }
    while (COL > MAX || COL < 1);
    Lectura(MAT, FIL, COL);
    Traspuesta(MAT, TRA, FIL, COL);
    Imprime(TRA, COL, FIL);
}
void Lectura(int A[][MAX], int F, int C)
{
    int I, J;
    for (I=0; I<F; I++)
    {
        for (J=0; J<C; J++)
        {
            printf("Ingrese el elemento %d %d: ", I+1, J+1);
            scanf("%d", &A[I][J]);
        }
    }
}
void Traspuesta(int M1[][MAX],int M2[][MAX],int F, int C)
{
    int I, J;
    for (I=0; I< F; I++)
    {
        for (J=0; J<C; J++)
        {
            M2[J][I] = M1[I][J];
        }
    }
}
void Imprime(int A[][MAX], int F, int C)
{
    int I, J;
    for (I=0; I<F; I++)
    {
        for (J=0; J<C; J++)
        {
            printf("\nElemento %d %d: %d ", I+1, J+1, A[I][J]);
        }
    }
}*/

/*Programa 6.9
void Lectura(int [][10], int);
void Calcula(int [][10], float [], int);
float Mod0(int [][10], int, int);
float Mod1(int [][10], int);
float Mod2(int [][10], int, int);
void Imprime(float [10], int);
void main(void)
{
    int MAT[10][10],TAM;
    float VEC[10];
    do
    {
        printf("Ingrese el tamaño de la matriz: ");
        scanf("%d", &TAM);
    }
    while (TAM >10 || TAM < 1);
    Lectura(MAT, TAM);
    Calcula(MAT, VEC, TAM);
    Imprime(VEC, TAM);
}
void Lectura(int A[][10], int N)
{
    int I, J;
    for (I=0; I<N; I++)
    {
        for (J=0; J<N; J++)
        {
            printf("Ingrese el elemento %d %d: ", I+1, J+1);
            scanf("%d", &A[I][J]);
        }
    }
}
void Calcula(int A[][10],float B[], int N)
{
    int I;
    for (I=0; I<N; I++)
    {
        switch (I%3)
        {
        case 1:
            B[I] = Mod1 (A,I);
            break;
        case 2:
            B[I] = Mod2 (A,I,N);
            break;
        default:
            B[I] = Mod0 (A,I,N);
            break;
        }
    }
}
float Mod0 (int A[][10],int K, int M)
{
    int I;
    float PRO = 1.0, SUM = 0.0;
    for (I=0; I<M; I++)
    {
        PRO *= A[I][K];
        SUM += A[I][K];
    }
    return (PRO / SUM);
}
float Mod1(int A[][10], int N)
{
    int I;
    float SUM = 0.0;
    for (I=0; I<=N; I++)
    {
        SUM += A[N][I];
    }
    return (SUM);
}
float Mod2 (int A[][10],int N, int M)
{
    int I;
    float PRO = 1.0;
    for (I=N; I<M; I++)
    {
        PRO *= A[I][N];
    }
    return (PRO);
}
void Imprime(float B[], int N)
{
    int I;
    for (I=0; I<N; I++)
    {
        printf("\nElemento %d: %.2f ", I, B[I]);
    }
}*/

/*Programa 6.10
const int MAX = 50;
void Cuadrado(int [][MAX], int);
void Imprime(int [][MAX], int);
void main(void)
{
    int CMA[MAX][MAX],TAM;
    do
    {
        printf("Ingrese el tamaño impar de la matriz: ");
        scanf("%d", &TAM);
    }
    while ((TAM > MAX || TAM < 1) && (TAM % 2));
    Cuadrado(CMA, TAM);
    Imprime(CMA, TAM);
}
void Cuadrado(int A[][MAX],int N)
{
    int I = 1, FIL = 0, COL = N / 2, NUM = N * N;
    while (I <= NUM)
    {
        A[FIL][COL] = I;
        if (I%N != 0)
        {
            FIL = (FIL – 1 + N) % N;
            COL = (COL + 1) % N;
        }
        else
        {
            FIL++;
        }
        I++;
    }
}
void Imprime(int A[][MAX], int N)
{
    int I, J;
    for (I=0; I<N; I++)
    {
        for (J=0; J<N; J++)
        {
            printf("\nElemento %d %d: %d",I+1, J+1, A[I][J]);
        }
    }
}*/

/*Programa 6.11
void LecturaM(float [][12], int, int);
void LecturaV(float *, int);
void F1(float [][12], int, int, float *, float *);
void F2(float [][12], int, int);
void F3(float *, int);

void main(void)
{
    float FON[5][12], PRE[5], REN[5];
    LecturaM(FON, 5, 12);
    LecturaV(PRE, 5);
    F1(FON, 5, 12, PRE, REN);
    F2(FON, 5, 12);
    F3(REN, 5);
}
void LecturaM(float A[][12], int F, int C)
{
    int I, J;
    for (I=0; I<F; I++)
    {
        for (J=0; J<C; J++)
        {
            printf("Precio fondo %d\t mes %d: ", I+1, J+1);
            scanf("%f", &A[I][J]);
        }
    }
}
void LecturaV(float A[], int T)
{
    int I;
    printf("\n");
    for (I=0; I<T; I++)
    {
        printf("Precio Fondo %d al 31/12/2003: ", I+1);
        scanf("%f", &A[I]);
    }
}
void F1(float A[][12], int F, int C, float B[], float V[])
{
    int I;
    printf("\nRENDIMIENTOS ANUALES DE LOS FONDOS");
    for(I=0; I<F; I++)
    {
        V[I] = (A[I][C-1] - B[I]) / B[I] * 100;
        printf("\nFondo %d: %.2f", I+1, V[I]);
    }
}
void F2(float A[][12], int F, int C)
{
    int I, J;
    float SUM, PRO;
    printf("\n\nPROMEDIO ANUALIZADO DE LAS ACCIONES DE LOS FONDOS");
    for(I=0; I<R; I++)
    {
        SUM = 0;
        for(J=0; J<C; J++)
        {
            SUM += A[I][J];
        }
        PRO = SUM / C;
        printf("\nFondo %d: %.2f", I+1, PRO);
    }
}
void F3(float A[], int F)
{
    float ME = A[0], PE = A[0];
    int M = 0, P = 0, I;
    for (I=1; I<F; I++)
    {
        if (A[I] > ME)
        {
            ME = A[I];
            M = I;
        }
        if (A[I] < PE)
        {
            PE = A[I];
            P = I;
        }
    }
    printf("\n\nMEJOR Y PEOR FONDO DE INVERSION");
    printf("\nMejor fondo: %d\tRendimiento: %6.2f", M+1, ME);
    printf("\nPeor fondo: %d\tRendimiento: %6.2f", P+1, PE);
}*/
/*Programa 6.12
const int PRO = 24;
const int MES = 12;
const int AÑO = 10;

void Lectura(float [PRO][MES][AÑO], int, int, int);
void Funcion1(float [PRO][MES][AÑO], int, int, int);
void Funcion2(float [PRO][MES][AÑO], int, int, int);
void Funcion3(float [PRO][MES][AÑO], int, int, int);

void main(void)
{
    float LLU[PRO][MES][AÑO];
    Lectura(LLU, PRO, MES, AÑO);
    Funcion1(LLU, PRO, MES, AÑO);
    Funcion2(LLU, PRO, MES, AÑO);
    Funcion3(LLU, 18, MES, 5);
}
void Lectur (float A[][MES][AÑO], int F, int C, int P)
{
    int K, I, J;
    for (K=0; K<P; K++)
    {
        for (I=0; I<F; I++)
        {
            for (J=0; J<C; J++)
            {
                printf("Año: %d\tProvincia: %d\tMes: %d", K+1, I+1, J+1);
                scanf("%f", &A[I][J][K]);
            }
        }
    }
}
void Funcion1(float A[][MES][AÑO],int F, int C, int P)
{
    int I, K, J, EMAY = -1;
    float ELLU = -1.0, SUM;
    for (I=0; I<F; I++)
    {
        for (J=0; J<C; J++)
        {
            SUM += A[I][J][K];
        }
        SUM /= P * C;
        if (SUM > ELLU)
        {
            ELLU = SUM;
            EMAY = I;
        }
    }
    printf("\n\nProvincia con mayor registro de lluvias: %d", EMAY+1);
    printf("\nRegistro: %.2f", ELLU);
}

void Funcion2(float A[][MES][AÑO],int F, int C, int P)
{
    int I, J, EMEN;
    float ELLU = 1000, SUM;
    for (I=0; I<F; I++)
    {
        SUM = 0;
        for (J=0; J<C; J++)
        {
            SUM += A[I][J][P-1];
        }
        SUM /= C;
        if (SUM < ELLU)
        {
            ELLU = SUM;
            EMEN = I;
        }
    }
    printf("\n\nProvincia con menor registro anual de lluvias en el último año: %d", EMEN+1);
    printf("\nRegistro anual: %.2f", ELLU);
}
void Funcion3(float A[][MES][AÑO],int F, int C, int P)
{
    int J, EMES = -1;
    float ELLU = -1.0;
    for (J=0; J<C; J++)
    {
        if (A[F-1][J][P-1] > ELLU)
        {
            ELLU = A[F-1][J][P-1];
            EMES = J;
        }
    }
    printf("\n\nMes: %d Lluvias: %.2f", EMES+1, ELLU);
}*/

/*Programa 6.13
const int MES = 12;
const int DEP = 3;
const int AÑO = 8;
void Lectura(float [MES][DEP][AÑO], int, int, int);
void Funcion1(float [MES][DEP][AÑO], int, int, int);
void Funcion2(float [MES][DEP][AÑO], int, int, int);
void Funcion3(float [MES][DEP][AÑO], int, int, int);
void main(void)
{
    float PRO[MES][DEP][AÑO];
    Lectura(PRO, MES, DEP, AÑO);
    Funcion1(PRO, MES, DEP, 2);
    Funcion2(PRO, MES, DEP, AÑO);
    Funcion3(PRO, MES, DEP, AÑO);
}
void Lectura(float A[][DEP][AÑO], int F, int C, int P)
{
    int K, I, J;
    for (K=0; K<P; K++)
    {
        for (I=0; I<F; I++)
        {
            for (J=0; J<C; J++)
            {
                printf("Año: %d\tMes: %d\tDepartamento: %d ", K+1, I+1, J+1);
                scanf("%f", &A[I][J][K]);
            }
        }
    }
}
void Funcion1(float A[][DEP][AÑO],int F, int C, int P)
{
    int I, J;
    float SUM = 0.0;
    for (I=0; I<F; I++)
    {
        for (J=0; J<C; J++)
        {
            SUM += A[I][J][P-1];
        }
    }
    printf("\n\nVentas totales de la empresa en el segundo año: %.2f", SUM);
}
void Funcion2(float A[][DEP][AÑO],int F, int C, int P)
{
    int I, J;
    float SUM1 = 0, SUM2 = 0, SUM3 = 0;
    for (I=0; I<F; I++)
    {
        for (J=0; J<C; J++)
        {
            switch (J+1)
            {
            case 1:
                SUM1 += A[I][J][P-1];
                break;
            case 2:
                SUM2 += A[I][J][P-1];
                break;
            case 3:
                SUM3 += A[I][J][P-1];
                break;
            }
            if (SUM1 > SUM2)
            {
                if (SUM1 > SUM3)
                {
                    printf("\n\nDepartamento con mayores ventas en el último año: Hilos");
                    printf("Ventas:%.2f", SUM1);
                }
                else
                {
                    printf("\n\nDepartamento con mayores ventas en el último año: Licra");
                    printf("Ventas:%.2f", SUM3);
                }
            }
            else
            {
                if (SUM2 > SUM3)
                {
                    printf("\n\nDepartamento con mayores ventas en el último año: Lanas");
                    printf("Ventas:%.2f", SUM2);
                }
                else
                {
                    printf("\n\nDepartamento con mayores ventas en el último año: Licra");
                    printf("Ventas:%.2f", SUM3);
                }
            }
        }
    }
}
void Funcion3(float A[][DEP][AÑO],int F, int C, int P)
{
    int K, I, J, DE, ME, AN;
    float VEN = -1.0;
    for (K=0; K<P; K++)
    {
        for (I=0; I< F; I++)
        {
            for (J=0; J<C; J++)
            {
                if (A[I][J][K] > VEN)
                {
                    VEN = A[I][J][K];
                    DE = J;
                    ME = I;
                    AN = K;
                }
            }
        }
    }
    printf("\n\nDepartamento: %d\tMes: %d\tAño: %d", DE+1, ME+1, AN+1);
    printf("\tVentas: %.2f", VEN);
}*/
