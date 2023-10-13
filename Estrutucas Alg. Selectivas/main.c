#include <stdio.h>
#include <math.h>

/* Programa. 2.1
int main()
{
    float promedio;
    printf("Indique el promedio obtenido: "); scanf("%f" , &promedio);
    if (promedio >= 6.0)
        {
            printf("¡Aprobado!");
        }
}*/

/* Programa. 2.2
int main()
{
    float precio, nuevoprecio, aumentodelproducto;
    printf("Precio del producto: ");
    scanf("%f", &precio);
    if (precio < 1500)
    {
        nuevoprecio = (precio + (precio * 0.11));
        aumentodelproducto = (precio * 0.11);
        printf("Este es el nuevo precio: %.2f", nuevoprecio);
        printf("\nTuvo un aumento total de: %.2f", aumentodelproducto);
    }
}*/

/*Programa 2.3
int main ()
{
    float promedio;
    printf("Indique el promedio: ");
    scanf("%f", &promedio);
    if (promedio >= 6.0)
    {
        printf("¡Aprobado!");
    }
    else
    {
        printf("Reprobado");
        printf("\nQuizas para la proxima");
    }
}*/

/*Programa. 2.4
int main ()
{
    float precio, nuevoprecio, aumentototal;
    printf("Indique el precio del producto: ");
    scanf("%f", &precio);
    if(precio < 1500)
    {
        nuevoprecio = (precio + (precio * 0.11));
        aumentototal = (precio * 0.11);
        printf("Este es el nuevo precio: %.2f", nuevoprecio);
        printf("\nTuvo un aumento total de: %.2f", aumentototal);
    }
    else
    {
        nuevoprecio = (precio + (precio * 0.08));
        aumentototal = (precio * 0.08);
        printf("Este es el nuevo precio: %.2f", nuevoprecio);
        printf("\nTuvo un aumento total de: %.2f", aumentototal);
    }
}*/
/*Programa. 2.5
En este no se porque no funciona la division,
quisiera que en clase me lo aclare por favor.
int main()
{
    int operacion, x, y;
    float resultado;
    printf("¿Que operacion desea realizar? \n1.Multiplicacion 2.Divison 3.Suma 4. Resta");
    scanf("%i", &operacion);
    printf("Inserte los valores valores: ");
    scanf("%i %i", &x, &y);
    switch(operacion)
    {
    case 1:
        resultado = x * y;
        printf("Este es el resultado: %f", resultado);
        break;
    case 2:
        resultado = x / y;
        printf("Este es el resultado: %.2f", resultado);
        break;
    case 3:
        resultado = x + y;
        printf("Este es el resultado: %.2f", resultado);
        break;
    case 4:
        resultado = x - y;
        printf("Este es el resultado: %.2f", resultado);
        break;
    }
}*/

/*Programa. 2.6
int main()
{
    float salario;
    int nivel;
    printf("Ingrese el nivel academico: ");
    scanf("%i", &nivel);
    printf("Ingrese el salario: ");
    scanf("%f", &salario);
    switch(nivel)
    {
    case 1:
        salario = salario + (salario * 0.035);
        break;
    case 2:
        salario = salario + (salario * 0.041);
        break;
    case 3:
        salario = salario + (salario * 0.048);
        break;
    case 4:
        salario = salario + (salario * 0.053);
        break;
    }
    printf("Su salario es de: %.2f", salario);
}*/

/*Programa 2.7
int main()
{
    float p, s, r;
    printf("Diga las ganancias de cada uno: ");
    scanf("%f %f %f", &p, &s, &r);
    if ( p > s)
    {
        if (p > r)
        {
            if (s > r)
            {
                printf("\n\n El orden es p,s y r: %f %f %f", p, s, r);
            }
            else
            {
                printf("\n\n El orden es r,r y s: %f %f %f", p, r, s);
            }
        }
        else
        {
            printf("\n\n El orden es r,p y s: %f %f %f", r, p, s);
        }
    }
    else
    {
        if (s > r)
        {
            if (p > r)
            {
                printf("\n\n El orden es s,p y r: %f %f %f", s, p, r);
            }
            else
            {
                printf("\n\n El orden es s,r y p: %f %f %f", s, r, p);
            }
        }
        else
        {
            printf("\n\n El orden es r,s y p: %f %f %f", r, s, p);
        }
    }
}*/
/*Programa 2.8
int main ()
{
    int matricula, semestre, carrera;
    float promedio;
    printf("Ingrese matricula: ");
    scanf("%d", &matricula);
    printf("Ingrese carrera (1-Industrial 2-Telemática 3-Computación 4-Mecatronica) : ");
    scanf("%d", &carrera);
    printf("Ingrese semestre: ");
    scanf("%d", &semestre);
    printf("Ingrese promedio: ");
    scanf("%f", &promedio);
    switch(carrera)
    {
    case 1:
        if(semestre >= 6 && promedio >= 8.5)
            printf("\n%d %d %f", matricula, carrera,promedio);
        break;
    case 2:
        if (semestre >= 5 && promedio >=9.0)
            printf("\n%d %d %f", matricula, carrera, promedio);
        break;
    case 3:
        if (semestre >= 6 && promedio >= 8.8)
            printf("\n%d %d %f", matricula, carrera, promedio);
        break;
    case 4:
        if (semestre >= 7 && promedio >= 9.0)
            printf("\n%d %d %f", matricula, carrera, promedio);
        break;
    default: printf("\n Error en la carrera");
    break;
    }
}*/
/*Programa 2.9
int main ()
{
    float res;
    int r, t, q;
    printf("Ingrese los valores de r, t y q: ");
    scanf("%d %d %d", &r, &t, &q);
    res = pow(r,4) - pow(t,3) + 4 * pow(q,2);
    if (res < 820)
    {
        printf("\nr = %d\t q = %d, r, t, q");
    }
}*/

/*Programa 2.10
int main ()
{
    int num;
    printf("Ingrese el número:");
    scanf("&d", num);
    if(pow(-1, num)>0)
    {
        prinf("\nPar");
    }
    else
    {
        printf("\nImpar");
    }
}*/

/*Programa 2.11
int main ()
{
    int dis, tie;
    float bil;
    printf("Ingrese ña distancia entre ciudades y el tiempo de estancia: ");
    scanf("%d %d", &dis, &tie);
    if ((dis*2 > 500) && (tie >10))
    {
        bil = dis * 2 *0.19 *0.8;
    }
    else
    {
        bil = dis * 2 * 0.19;
        printf("\n\nCosto del billete: %.4f",bil);
    }
}*/

/*Programa 2.12
void main(void)
{
    int t, p,n;
    printf("Ingrese los valores de t, p y n: ");
    scanf("%d %d %d", &t, &p, &n);
    if (p != 0)
    {
        if(pow(t/p, n)==(pow(t,n) /pow (p,n)))
            printf("\n Se comprueba la igualdad");
    }
    else
    {
        printf("\np tiene que ser difente de cero");
    }
}*/

/*Programa 2.13
void main(void)
{
    float x;
    int y;
    printf("Ingrese el valor de y: ");
    scanf("%d", &y);
    if (y < 0 || y > 50)
    {
        x = 0;
    }
    else
    {
        if(y <= 10)
        {
            x = 4/y - y;
        }
        else
        {
           if (y <=25)
           {
               x = pow(y, 3) - 12;
           }
           else
           {
               x = pow(y, 2) + pow(y, 3) - 18;
           }
        }
    }
    printf("\n\ny = %d\tx = %.4f", y, x);
}*/

/*Programa. 2.14
void main(void)
{
    int clave, tiempo;
    float cos;
    printf("Ingresa la clave tiempo: ");
    scanf("%d %d", &clave, &tiempo);
    switch (clave)
    {
        case 1: clave = tiempo * 0.13 / 60; break;
        case 2: clave = tiempo * 0.11 / 60; break;
        case 5: clave = tiempo * 0.22 / 60; break;
        case 6: clave = tiempo * 0.19 / 60; break;
        case 7: clave = tiempo * 0. / 60; break;
        case 9: clave = tiempo * 0.17 / 60; break;
        case 10: clave = tiempo * 0.20 / 60; break;
        case 15: clave = tiempo * 0.39 / 60; break;
        case 20: clave = tiempo * 0.28 / 60; break;
        default: cos = -1; break;
    }
    if(cos != -1)
    {
        printf("\n\nClave: %d\tTiempo: %d\tCosto: %0.4f", clave, tiempo, cos);
    }
    else
    {
        printf("\nError en la clave");
    }
}*/

/*Programa. 2.15
int main ()
{
    int tra, eda, dia;
    float cos;
    printf("Ingrese tipo de tratamiento, edad y días: ");
    scanf("%d %d %d", &tra, &eda, &dia);
    switch(tra)
    {
    case 1:
        cos = dia * 2800;
        break;
    case 2:
        cos = dia * 2800;
        break;
    case 3:
        cos = dia * 2800;
        break;
    case 4:
        cos = dia * 2800;
        break;
    default:
        cos = -1;
        break;
    }
    if (cos != -1)
    {
        if(eda >= 60)
        {
            cos = cos * 0.75;
        }
        printf("\nClave tratamiento: %d\t Días: %d\t Costo total: %.4f", tra, dia, cos);
    }
    else
    {
        printf("\nLa clave del tratamiento incorrecta");
    }
}*/

int main()
{
    int cla, cat, ant, res;
    printf("\nIngrese la clave, categoria y antiguedad del trabajador: ");
    scanf("%d %d %d", &cla, &cat, &ant);
    switch(cat)
    {
    case 3:
    case 4:
        if (ant >= 5)
        {
            res = 1;
        }
        else
        {
            res = 0;
        }
        break;

    case 2:
        if (ant >= 7)
        {
            res = 1;
        }
        else
        {
            res = 0;
        }
        break;

    default:
        res = 0;
        break;
    }

    if (res)
    {
        printf("\nEl trabajador con clave %d reune las condiciones para el puesto", cla);

    }
    else
    {
        printf("\nEl trabajador con clave %d no reune las condiciones para el puesto", cla);
    }

}
