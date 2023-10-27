#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/* Programa 7.1
void main(void)
{
    char p1, p2, p3 = '$';
    printf("\ningrese un caracter: ");
    p1=getchar();
    putchar(p1);
    printf("\n");
    fflush(stdin);

    printf("\nel caracter p3 es: ");
    putchar(p3);
    printf("\n");
    printf("\ningrese otro caracter: ");
    fflush(stdin);
    scanf("%c", &p2);
    printf("%c", p2);
}*/

/*Programa 7.2
void main(void)
{
    char p1;
    printf("\ningrese un caracter para analizar si este es un digito: ");
    p1 = getchar();
    if (isdigit(p1))
        printf("%c es un digito \n", p1);
    else
        printf("%c no es un digito \n", p1);

    fflush(stdin);
    printf("\ningrese un caracter para examinar si este es una letra: ");
    p1 = getchar();
    if (isalpha (p1))
        printf("%c no es una letra \n", p1);
    else
        printf("%c no es una letra \n", p1);

    fflush(stdin);
    printf("\ningrese un caracter para examinar si este es una letra minuscula: ");
    p1 = getchar();
    if (isalpha (p1))
        if (islower (p1))
        printf("%c no es una letra minuscula \n", p1);
    else
        printf("%c no es una letra minuscula \n", p1);
    else
        printf("%c no es una letra \n", p1);

    fflush(stdin);
    printf("\ningrese una letra para convertirla de mayuscula a minuscula: ");
    p1 = getchar();
    if (isalpha (p1))
        if (isupper (p1))
        printf("%c fue convertida de mayuscula a minuscula \n", tolower(p1));
    else
        printf("%c es una letra minuscula \n", p1);
    else
        printf("%c no es una letra \n", p1);

}*/

/*Programa 7.3
void main(void)
{
    char *cad0 = "buenos dias";
    char cad1[20] = "hola";
    char cad2[] = "mexico";
    char cad3[] = {'b', 'i', 'e', 'n', 'v', 'e', 'n', 'i', 'd', 'o', '\0'};

    char cad4[20], cad5[20], cad6[20];

    printf("\nla cadena cad0 es: ");
    puts(cad0);
    printf("\nla cadena cad1 es: ");
    printf("%s", cad1);

    printf("\nla cadena cad2 es: ");
    puts(cad2);
    printf("\nla cadena cad3 es: ");
    puts(cad3);

    printf("\ingrese una linea de texto -se lee con gets-: \n");
    gets(cad4);
    printf("\nla cadena cad4 es: ");
    puts(cad4);
    fflush(stdin);

    printf("\ningrese una linea de texto -se lee con scanf-: \n");
    scanf("%s", cad5);
    printf("\nla cadena cad5 es: ");
    printf("%s", cad5);
    fflush(stdin);

    char p;
    int i = 0;

    printf("\ningrese una linea de texto -se lee cada caracter con getchar-: \n");

    while ((p = getchar())!= '\n')
        cad6[i++] = p;
    cad6[i] = '\0';
    printf("\nla cadena cad6 es: ");
    puts(cad6);
}*/

/* Programa 7.4
void main(void)
{
    char *cad0;
    cad0 = "argentina";
    puts(cad0);

    cad0 = "brasil";
    puts(cad0);

    char *cad1;
    gets(*cad1);  gets(cad1);

    char *cad1 = " ";
    gets(cad1);

    char cad2[20] = "mexico";
    puts(cad2);
    gets(cad2);
    puts(cad2);
    cad2[10] = "guatemala";

}*/

/*Programa 7.5
#include <stdlib.h>

void main(void)
{
    int i;
    double d;
    long l;
    char cad0[20], *cad1;

    printf("\ningrese una cadena de caracteres: ");
    gets(cad0);
    i = atoi(cad0);
    printf("\n%s \t %d", cad0, i+3);

    printf("\ningrese una cadena de caracteres: ");
    gets(cad0);
    d = atof(cad0);
    printf("\n%s \t %.2f ", cad0, d+1.50);

    d = strtod(cad0, &cad1);
    printf("\n%s \t %.2f", cad0, d+1.50);
    puts(cad1);

    l = atol(cad0);
    printf("\n%s \t %1d ", cad0, 1+10);

    l = strtol(cad0, &cad1, 0);
    printf("\n%s \t %1d", cad0, 1+10);
    puts(cad1);

}*/

/*Programa 7.6
#include <string.h>
void main(void)
{
    char *cad0 = "hola mexico";
    char cad1[20], cad2[20], cad3[20] = ", buenos dias!!!";

    strcpy(cad1, cad0);
    printf("\nprueba de la funcion strcpy. se copia la cadena cad0 a cad1: %s\n", cad1);

    strcpy(cad1, cad3);
    printf("\nprueba de la funcion strcpy. se copia la cadena cad3 a cad1: %s\n", cad1);

    strncpy(cad2, cad0, 4);
    cad2[4] = '\0';
    printf("\nprueba de la funcion strncpy. se copian 4 caracteres de cad0 a cad2: %s\n", cad2);

    strncpy(cad2, cad3, 3);
    cad2[3] = '\0';
    printf("\nprueba de la funcion strncpy. se copian 3 caracteres de cad3 a cad2: %s\n", cad2);

    strcat(cad0, cad3);
    printf("\nprueba de la funcion strcat. se incorpora la cadena cad3 a cad0: %s\n", cad0);

    strcat(cad1, "yy");
    printf("\nprueba de la funcion strcat. se incorpora la cadena yy a cad1: %s\n", cad1);

    strcat(cad1, "yy");
    strncat(cad2, cad0, 4);
    printf("\nprueba de la funcion strncat. se incorporan 4 caracteres de cad0 a cad2: %s\n", cad2);

    cad0 = strstr(cad0, "mexico");
    printf("\nprueba de la funcion strstr. se trata de localizar la cadena mexico dentro de cad0: %s\n", cad0);

    cad0 = strstr(cad0, "guatemala");
    printf("\nprueba de la funcion strstr. se trata de localizar la cadena guatemala dentro de cad0: %s\n", cad0);
}*/

/*Programa 7.7
void main(void)
{
    int i;
    char cad0[20] = "hola mexico";
    char cad1[20] = "hola guatemala";
    char cad2[20] = "hola venezuela";
    char cad3[20] = "hola mexico";
    char *c, c3;

    i = strcmp(cad0, cad1);
    printf("\nresultado de la comparacion -cad0 y cad1-: %d", i);

    i = strcmp(cad0, cad2);
    printf("\nresultado de la comparacion -cad0 y cad2-: %d", i);

    i = strcmp(cad0, cad3);
    printf("\nresultado de la comparacion -cad0 y cad3-: %d", i);

    i = strlen(cad0);
    printf("\nlongitud cadena cad0: %d", i);

    i = strlen(cad1);
    printf("\nlongitud cadena cad1: %d", i);

    c = strchr(cad1, 'g');
    if (c != null)
    {
        c3 = *c;
        printf("\nel valor de c3 es: %c", c3);
    }
    c = strchr(cad2, 'v');
    if (c != null)
    {
        c3 = *c;
        printf("\nel valor de c3 es: %c", c3);
    }
}*/

/*Programa 7.8
void minymay(char cad);
void main(void)
{
    int i, n;
    char fra[20][50];
    printf("\ningrese el numero de filas del arreglo: ");
    scanf("%d", &n);
    for (i=0; i<n; i++)
    {
        printf("ingrese la linea %d de texto: ", i+1);
        fflush(stdin);
        gets(fra[i]);
    }
    printf("\n\n");
    for (i=0; i<n; i++)
    {
        minymay(fra[i]);
    }
}

void minymay(char *cadena)
{
    int i = 0, mi = 0, ma = 0;
    while(cadena[i] != '\0')
    {
        if (islower(cadena[i]))
        {
            mi++;
        }
        else
        {
            if (isupper(cadena[i]))
            {
             ma++;4
            }
        }
            i++;
    }
    printf("\n\nnumero de letras minusculas: %d", mi);
    printf("\nnumero de letras mayusculas: %d", ma);
}*/

/*Programa 7.8


void minymay(char cad);

void main(void)
{
    int i, n;
    char fra[20][50];

    printf("\ningrese el numero de filas del arreglo: ");
    scanf("%d", &n);
    for (i=0; i<n; i++)
    {
        printf("ingrese la linea %d de texto: ", i+1);
        fflush(stdin);
        gets(fra[i]);
    }
    printf("\n\n");
    for (i=0; i<n; i++)
    {
        minymay(fra[i]);
    }
}

void minymay(char *cadena)

{
    int i = 0, mi = 0, ma = 0;
    while(cadena[i] != '\0')
    {
        if (islower(cadena[i]))
        {
            mi++;
        }
        else
        {
            if (isupper(cadena[i]))
            {
             ma++;4
            }
        }
            i++;
    }
    printf("\n\nnumero de letras minusculas: %d", mi);
    printf("\nnumero de letras mayusculas: %d", ma);
}*/

/*Programa 7.9
int cuenta(char *, char);
void main(void)
{
    char car, cad[50];
    int res;
    printf("\ningrese la cadena de caracteres: ");
    gets(cad);
    fflush(stdin);
    printf("\ningrese el caracter: ");
    car = getchar();
    res = cuenta(cad, car);
    printf("\n\n%c se encuentra %d veces en la cadena %s", car, res, cad);
}
int cuenta(char *cad, char car)
{
    int i = 0, r = 0;
    while (cad[i] != '\0')
    {
        if (cad[i] == car)
        {
            r++;
        }
        i++;
    }
    return (r);
}*/

/*Programa 7.10
void main(void)
{
    char c, cad[10];
    int i = 0;
    float sum = 0.0;
    printf("\ndesea ingresar una cadena de caracteres (s/n)? ");
    c = getchar();
    while (c == 's')
    {
        printf("\ningrese una cadena de caracteres: ");
        fflush(stdin);
        gets(cad);
        i++,
        sum += atof(cad);
        printf("\ndesea ingresar otra cadena de caracteres (s/n)? ");
        c = getchar();
    }
    printf("\nsuma: %.2f", sum);
    printf("\npromedio: %.2f", sum / i);
}
*/

/*Programa 7.11
void main(void)
{
    char p, cad[50];
    int n;
    printf("\ningrese la cadena de caracteres (maximo 50): ");
    gets(cad);
    printf("\ningrese la posicion en la cadena que desea verificar :");
    scanf("%d", &n);
    if ((n >= 0)&& (n < 50))
    {
        p = cad[n- 1];
        if (islower (p))
        {
            printf("\n%c es una letra minuscula", p);
        }
        else
        {
            printf("\n%c no es una letra minuscula", p);
        }
    }
    else
    {
        printf("\nel valor ingresado de n es incorrecto");
    }
}
*/

/*7.12
void main(void)
{
    char cad[50];
    int i = 0, mi = 0, ma = 0;
    printf("\ningrese la cadena de caracteres (maximo 50 caracteres):");
    gets(cad);
    while(cad[i]!= '\0')
    {
        if (islower (cad[i]))
        {
            mi++;
        }
        else
        {
            if (isupper (cad[i]))
            {
            ma++;
            }
        }
        i++;
    }
    printf("\n\nnumero de letras minusculas: %d", mi);
    printf("\nnumero de letras mayusculas: %d", ma);
}*/

/*Programa 7.13
int cuenta(char *);
void main(void)
{
    int i;
    char cad[50];
    printf("\ningrese la cadena de caracteres: ");
    gets(cad);
    i = cuenta(cad);
    printf("\nlongitud de la cadena: %d", i);
}
int cuenta(char *cadena)
{
    int c = 0;
    while (!cadena[c] == '\0')
    {
        c++;
    }
    return (c);
}
*/

/*Programa 7.14
int cuenta(char *);
void main(void)
{
    int i;
    char cad[50];
    printf("\ningrese la cadena de caracteres: ");
    gets(cad);
    i = cuenta(cad);
    printf("\nlongitud de la cadena: %d", i);
}
int cuenta(char *cadena)
{
    if (cadena[0] == '0')
    {
        return 0;
    }
    else
    {
        return(1 + cuenta (&cadena[1]));
    }
}*/

/*Programa 7.15
void interpreta(char *);

void main(void)
{
    char cad[50];
    printf("\ningrese la cadena de caracteres: ");
    gets(cad);
    interpreta(cad);
}
void interpreta(char *cadena)
{
    int i = 0, j, k;
    while (cad[i] != '\0')
    {
        if (isalpha (cad[i]))
        {
            k = cad[i - 1] - 48;
            for (j = 0; j < k; j++)
            {
                putchar(cad[i]);
            }
        }
        i++;
    }
}*/

/*Programa 7.16
void main(void)
{
    char cad1[50], cad2[50], *cad0, null = "";
    int i = 0;
    printf("\n ingrese la primera cadena de caracteres: ");
    gets(cad1);
    printf("\n ingrese la cadena a buscar: ");
    gets(cad2);
    strcpy(cad0, cad1);
    cad0 = strstr (cad0, cad2);
    while (cad0 != null)
    {
        i++;
        cad0 = strstr (cad0 + 1, cad2);

    }
    printf("\nel numero de veces que aparece la segunda cadena es: %d", i);
}*/

/*Programa 7.17
char * inverso(char *);

void main(void)
{
    char fra[50], aux[50];
    printf("\ningrese la linea de texto: ");
    gets(fra);
    strcpy(aux, inverso(fra));
    printf("\nescribe la linea de texto en forma inversa: ");
    puts(aux);

}
char * inverso(char *cadena)
{
    int i = 0, j, lon;
    char cad;
    lon = strlen(cadena);
    j = lon-1;
    while (i < ((lon - 1)/2))
    {
        cad = cadena[i];
        cadena[i] = cadena[j];
        cadena[j] = cad;
        i++;
        j--;
    }
    return (cadena);
}*/

/* Programa 7.18
void inverso(char *);

void main(void)
{
    char fra[50];
    printf("\ningrese la linea de texto: ");
    gets(fra);
    printf("\nescribe la linea de texto en forma inversa: ");
    inverso(fra);
}
void inverso(char *cadena)
{
    if (cadena[0]!= '\0')
    {
        inverso(&cadena[1]);
        putchar(cadena[0]);
    }
}*/



/*Programa 7.19
int cuentap(char *);

void main(void)
{
    int i;
    char fra[50];
    printf("\ningrese la linea de texto: ");
    gets(fra);
    strcat(fra, " ");

    i = cuentap(fra);
    printf("\nla linea de texto tiene %d palabras", i);
}
int cuentap(char *cad)
{
    char *cad0 = "";
    int i = 0;
    cad0 = strstr(cad, " ");
    while (strcmp(cad, " "))
    {
        strcpy(cad, cad0);
        i++;
        cad0 = strstr (cad + 1, " ");

    }
    return (i);
}*/

/* Programa 7.20
int longitud(char cad);

void main(void)
{
    int i, n, l = -1, p, t;
    char cad[50], fra[20][50];
    printf("\ningrese el numero de filas del arreglo: ");
    scanf("%d", &n);
    for (i=0; i<n; i++)
    {
        printf("ingrese la linea %d de texto. maximo 50 caracteres: ", i+1);
        fflush(stdin);
        gets(fra[i]);
    }
    printf("\n");
    for (i=0; i<n; i++)
    {
        strcpy(cad, fra[i]);
        t = longitud (cad);
        if (t > 1)
        {
            l = t;
            p = i;
        }
    }
    printf("\nla cadena con mayor longitud es: ");
    puts(fra[p]);
    printf("\nlongitud: %d", l);
}

int longitud(char *cadena)
{
    int cue = 0;
    while (! cadena[cue] == '\0')
        cue++;
    return (cue);
}*/

/* Programa 7.21
void intercambia(char fra[][30], int);

void main(void)
{
    int i, n;
    char fra[20][30];
    printf("\ningrese el numero de filas del arreglo: ");
    scanf("%d", &n);
    for (i=0; i<n; i++)
    {
        printf("ingrese la linea de texto numero %d: ", i+1);
        fflush(stdin);
        gets(fra[i]);
    }
    printf("\n\n");
    intercambia(fra, n);
    for (i=0; i<n; i++)
    {
        printf("imprision de la linea de texto %d: ", i+1);
        puts(fra[i]);
    }
}
void intercambia(char fra[][30], int n)
{
    int i, j;
    j = n - 1;
    char cad[30];
    for (i=0; i < (n/2); i++)
    {
        strcpy(cad, fra[i]);
        strcpy(fra[i], fra[j]);
        strcpy(fra[j], cad);

    }
}*/
