#include <stdio.h>

int main() {
    
    int seguir = 1;
    char dia = 0;
    int hora = 0;
    int duracion = 0;
    float precio = 0;
    char cont;

    printf("Que dia de la semana fue tu llamada?\n\n");
    printf("L = LUNES\n");
    printf("M = MARTES\n");
    printf("X = MIERCOLES\n");
    printf("J = JUEVES\n");
    printf("V = VIERNES\n");
    printf("S = SABADO\n");
    printf("D = DOMINGO\n");
    scanf("%c" , &dia);
    
    printf("Entre que horas fue tu llamada?\n");
    printf("Ejemplo: 1:30 tendra que ser 1330\n");
    scanf("%d" , &hora);

    printf("Cuantos minutos duro tu llamada\n");
    scanf("%d" ,  &duracion);
    
    if ((dia == 'L') || (dia == 'l') || (dia == 'M') || (dia == 'm') || (dia == 'X')||(dia == 'x') || (dia == 'J') || (dia == 'j') || (dia == 'V') || (dia == 'v') ){
        
        if ((hora > 759) || (hora < 1801)) {
            precio = 0.30*(duracion);
        }
        else if ((hora < 800) || (hora > 1800)) {
            precio = 0.60*(duracion);
        }
    }
    else if ((dia == 'S') || (dia == 's') || (dia == 'D') || (dia == 'd')) {
    precio = 0.15*(duracion);
    }
    else {
    printf("DATOS ERRONEOS, intentalo otra vez");
    }
    
    printf("Gastaste %f", precio);
    printf(" pesos");
    }

