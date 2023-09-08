/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>
void bienvenida(void);
float entrada_mod(void);
float entrada_fase(void);
float procesamiento_real(float, float);
float procesamiento_imaginario(float, float);
void feedback(float, float);

int main(void) {
    bienvenida();
    float mod = entrada_mod();
    float fase = entrada_fase();
    float real = procesamiento_real(mod, fase);
    float imaginario = procesamiento_imaginario(mod, fase);
    feedback(real, imaginario);
    return 0;
}
void bienvenida(void){
   printf("Hola\n");
   printf("Pasaremos tu número en formato polar a formato rectangular\n");
}
float entrada_mod(void){
    float mod;
    printf("Introduzca su modulo\n");
    scanf("%f", &mod);
    return mod;
}
float entrada_fase(void){
    float fase;
    printf("Introduzca su fase\n");
    scanf("%f", &fase);
    return fase;
}
float procesamiento_real(float mod, float fase){
    float real = mod*cos(fase*M_PI/180);
    return real;
}
float procesamiento_imaginario(float mod, float fase){
    float imaginario = mod*sin(fase*M_PI/180);
    return imaginario;
}
void feedback(float real, float imaginario){
    printf("Tu numero en forma cartesiana es:\n");
    printf("Parte real: %f\n", real);
    printf("Parte imaginaria: %f", imaginario);
}


