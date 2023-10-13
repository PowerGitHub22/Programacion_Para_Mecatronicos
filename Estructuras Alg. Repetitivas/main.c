#include <stdio.h>
#include <stdlib.h>

/*Programa 3.1
int main ()
{
    int I;
    float sal, nom;
    nom = 0;
    for (I=1; I<=5; I++)
    {
        printf("\nIngrese el salario del profesor%d:\t", I);
        scanf("%f", &sal);
        nom = nom + sal;
    }
    printf("\nEl total de la nomina es: %.2f", nom);
}*/

/*Programa. 3.2
int main()
{
    int i, n, num, sum;
    sum = 0;
    printf("Ingrese el numero de datos:\t");
    scanf("%d", &n);
    for (i=1; i<=n; i++)
    {
        printf("Ingrese el dato numero %d:\t", i);
        scanf("%d", &num);
        if (num > 0)
        {
            sum = sum + num;
        }
    }
    printf("\nLa suma de los numeros positivos es: %d", sum);
}*/

/*Programa 3.3
int main ()
{
    float pag, spa;
    spa = 0;
    printf("Ingrese el primer pago:\t");
    scanf("%f", &pag);
    while (pag)
    {
        spa = spa + pag;
        printf("Ingrese el siguiente pago:\t ");
        scanf("%f", &pag);
    }
    printf("\nEl total de pagos del mes es: %.2f", spa);
}*/

/* Programa 3.4
int main ()
{
    int num;
    long cua, suc = 0;
    printf("\nIngrese un numero entero -0 para terminar-:\t");
    scanf("%d", &num);
    while(num)
    {
        cua = pow (num, 2);
        printf("%d al cubo es %ld", num, cua);
        suc = suc + cua;
        printf("\nIngrese un numero entero -0 para terminar -:\t");
        scanf("%d", &num);
    }
    printf("\nLa suma de los cuadrados es %ld", suc);
}*/

/*Programa 3.5
int main ()
{
    float pag, spa = 0;
    printf("Ingrese el primer pago:\t");
    scanf("%f", &pag);
    do
    {
        spa = spa + pag;
        printf("Ingrese el siguiente pago -0 para terminar-:\t");
        scanf("%f", &pag);
    }
    while (pag);
    printf("\nEl total de pagos del mes es: %.2f", spa);
}*/

/*Programa 3.6
int main()
{
    int i=0;
    float sal, pro, nom = 0;
    printf("Ingrese el salario del profesor:\t");
    scanf("%f", &sal);
    do
    {
        nom = nom + sal;
        i = i + 1;
        printf("Ingrese el salario del profesor -0 para terminar-:\t");
        scanf("%f", &sal);
    }
    while(sal);
    pro = nom / i;
    printf("\Nomina: %.2f \t Promedio de salarios: %.2f", nom, pro);
}*/

/*Programacion 3.7
void main(main)
{
    int i, n;
    float lan, sla = 0;
    do
    {
        printf("Ingrese el numero de lanzamientos:\t");
        scanf("%d", &n);
    }
    while (n < 1 || n > 11);
    for (i=1; i<=n; i++)
    {
        printf("\nIngrese el lanzamiento %d:", i);
        scanf("%f", &lan);
        sla = sla + lan;
    }
    sla = sla / n;
    printf("\nEl promedio de lanzamientos es: %.2f", sla);
}*/

/*Programa 3.8
int main ()
{
    int i, num;
    long fac;
    printf("\nIngrese el numero:");
    scanf("%d", &num);
    if (num >= 0)
    {
        fac = 1;
        for (i=1; i <=num; i++)
        {
            fac *= i;
            printf("\nEl factorial de %d es: %ld", num, fac);
        }
    }
    else
    {
        printf("\nError en el dato ingresado");
    }
}*/

/*Programa 3.9
 void main (void)
 {
     int i = 2, cam = 1;
     long sse = 0;
     while (i <=2500)
     {
         sse = sse + i;
         printf("\t %d", i);
         if (cam)
         {
             i += 5;
             cam--;
         }
         else
         {
             i += 3;
             cam++;
         }
     }
     printf("\nLa suma de la serie es: %ld", sse);
 }*/

/*Programa 3.10
int main ()
{
    int i, n, num, spa = 0, sim = 0, cim = 0;
    printf("Ingrese el numero de datos que se van a procesar:\t");
    scanf("%d", &n);
    if (n > 0)
    {
        for(i = 1; 1<=n; i++)
        {
            printf("\nIngrese el numero %d: ", i);
            scanf("%d", &num);
            if (num)
            {
                if (pow (-1, num) > 0)
                {
                    spa = spa + num;
                }
                else
                {
                    sim = sim + num;
                    cim++;
                }
            }
        }
        printf("\n La suma de los numeros paras es: %d", spa);
        printf("\n La suma de los numeros impares es: %5.2f", (float) (sim / cim));
    }
    else
    {
        printf("\n El valor de N es incorrecto");
    }
}*/

/*Programa 3.11
int main ()
{
    int r1 = 0, r2 = 0, r3 = 0, r4 =0, r5 = 0;
    float cal;
    printf("Ingresa la calificacion del alumno: ");
    scanf("%f", &cal);
    while (cal != -1)
    {
        if (cal < 4)
        {
            r1++;
        }
        else
        {
            if(cal < 6)
            {
                r2++;
            }
            else
            {
                if(cal < 8)
                {
                    r3++;
                }
                else
                {
                    if (cal < 9)
                    {
                        r4++;
                    }
                    else
                    {
                        r5++;
                    }
                }
            }
        }
        printf("Ingresa la calificacion del alumno: ");
        scanf("%f", &cal);
    }
    printf("\n0.. 3.99= %d", r1);
    printf("\n4.. 5.99= %d", r2);
    printf("\n6.. 7.99= %d", r3);
    printf("\n8.. 8.99= %d", r4);
    printf("\n9..10= %d", r5);
}*/

/*Programa 3.12
int main ()
{
    int num;
    printf("Ingresa el numero para calcular la serie: ");
    scanf("%d", &num);
    if (num > 0)
    {
        printf("\nSerie de Ulam\n");
        printf("%d \t", num);
        while (num != 1)
        {
            if (pow(-1, num) > 0)
            {
                num = num /2;
            }
            else
            {
                num = num * 3 + 1;
            }
            printf("%d \t", num);
        }
    }
    else
    {
        printf("\n Num debe ser un entero positivo");
    }
}*/

/*Programa 3.13
int main ()
{
    int i, pri = 0, seg = 1, sig;
    printf("\t %d \t %d", pri, seg);
    for(i = 3; i <=50; i++)
    {
        sig = pri + seg;
        pri = seg;
        seg = sig;
        printf("\t %d", sig);
    }
}*/

/*Programa 3.14
void main(void)
{
    int vot, c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0, nu = 0, svo;
    float po1, po2, po3, po4, po5, pon;
    printf("Ingrese el primer voto: ");
    scanf("%d", &vot);
    while(vot)
    {
        switch(vot)
        {
        case 1:
            c1++;
            break;
        case 2:
            c2++;
            break;
        case 3:
            c3++;
            break;
        case 4:
            c4++;
            break;
        case 5:
            c5++;
            break;
        default:
            nu++;
            break;
        }
        printf("Ingrese el siguiente voto -0 para terminar-: ");
        scanf("%d", &vot);
    }
    svo = c1 + c2 + c3 + c4 + c5 + nu;
    po1 = ((float) c1 / svo) * 100;
    po2 = ((float) c2 / svo) * 100;
    po3 = ((float) c3 / svo) * 100;
    po4 = ((float) c4 / svo) * 100;
    po5 = ((float) c5 / svo) * 100;
    pon = ((float) nu / svo) * 100;
    printf("\nTotal de votos: %d", svo);
    printf("\n\nCandidato 1: %d votos -- porcentaje: %5.2f", c1, po1);
    printf("\n\nCandidato 2: %d votos -- porcentaje: %5.2f", c2, po2);
    printf("\n\nCandidato 3: %d votos -- porcentaje: %5.2f", c3, po3);
    printf("\n\nCandidato 4: %d votos -- porcentaje: %5.2f", c4, po4);
    printf("\n\nCandidato 5: %d votos -- porcentaje: %5.2f", c5, po5);
    printf("\nNulos: %d votos -- porcentaje: %5.2f", nu, pon);
}*/

/*Programa 3.15
int main()
{
    int i = 1, b = 0, c;
    double res;
    res = 4.0 / i;
    c = 1;
    while ((fabs (3.1415 - res)) > 0.0005)
    {
        i += 2;
        if (b)
        {
            res += (double) (4.0 / i);
            b = 0;
        }
        else
        {
            res = (double) (4.0 / i);
            b = 1;
        }
        c++;
    }
    printf("\nNumero de terminos:%d", c);
}*/

/*Programa 3.16
 void main(void)
 {
     int i, mat, mamat, memat;
     float sum, pro, cal, mapro = 0.0, mepro = 11.0;
     printf("Ingrese la matricula del primer alumno:\t");
     scanf("%d",  &mat);
     while(mat)
     {
         sum = 0;
         for (i = 1; i <=5; i++)
         {
             printf("\nIngrese la clasificacion del alumno: ", i);
             scanf("%f", &cal);
             sum += cal;
         }
         pro = sum / 5;
         printf("\nMatricula:%d\tPromedio:%5.2f", mat, pro);
         if(pro > mapro)
         {
             mapro = pro;
             mamat = mat;
         }
         if (pro < mepro)
         {
             mepro = pro;
             memat = mat;
         }
         printf("\n\nIngrese la matricula del siguiente alumno: ");
         scanf("%d", &mat);
     }
     printf("\n\nAlumno con mejor Promedio:\t%d\t\%5.2f", mamat, mapro);
     printf("\n\nAlumno con peor Promedio:\t%d\t\%5.2f", memat, mepro);
 }*/

 /*Programa 3.17
 void main (void)
 {
     int i, j, num, sum, c = 0;
     printf("\nIngrese el numero limite:");
     scanf("%d", &num);
     for(i =1; i<=num; i++)
     {
         sum = 0;
         for(j =1; j<=(i/2); j++)
         {
             if((i % j) == 0)
             {
                 sum += j;
             }
         }
         if(sum == i)
         {
             printf("\n%d es un numero perfecto", i);
             c++;
         }
     }
     printf("\nEntre 1 y %d hay %d numeros perfectos", num, c);
 }*/
