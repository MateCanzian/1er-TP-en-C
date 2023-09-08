/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>
void bienvenida(void);
float entrada_real(void);
float entrada_imaginaria(void);
float procesamiento_modulo(float, float);
float procesamiento_fase(float, float);
void feedback(float, float);

int main(void) {
    bienvenida();
    float real = entrada_real();
    float imaginario = entrada_imaginaria();
    float mod = procesamiento_modulo(real, imaginario);
    float fase = procesamiento_fase(real, imaginario);
    feedback(mod, fase);
    return 0;
}

void bienvenida(void){
    printf("Hola, vamos a pasar un número de forma cartesiana a polar\n");
}
float entrada_real(void){
    float real;
    printf("introduzca su parte real\n");
    scanf("%f", &real);
    return real;
}
float entrada_imaginaria(void){
    float imaginaria;
    printf("Introduzca su parte imaginaria\n");
    scanf("%f", &imaginaria);
    return imaginaria;
}
float procesamiento_modulo(float real, float imaginario){
    float mod = sqrt(pow(real, 2) + pow(imaginario, 2));
    return mod;
}
float procesamiento_fase(float real, float imaginario){
    float fase = atan2(imaginario, real)*180/M_PI;
    return fase;
}
void feedback(float mod, float fase){
    printf("Tu numero en forma polar es:\n");
    printf("Modulo: %f\n", mod);
    printf("Angulo: %f", fase);
}



