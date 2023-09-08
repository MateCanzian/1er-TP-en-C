/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>
void bienvenida(void);
float entrada_real1(void);
float entrada_imaginario1(void);
float entrada_real2(void);
float entrada_imaginario2(void);
float procesamiento_real(float, float);
float procesamiento_imaginario(float, float);
float procesamiento_modulo(float, float);
float procesamiento_fase(float, float);

int main()
{
    bienvenida();
    float real1 = entrada_real1();
    float imaginario1 = entrada_imaginario1();
    float real2 = entrada_real2();
    float imaginario2 = entrada_imaginario2();
    float real = procesamiento_real(real1, real2);
    float imaginario = procesamiento_imaginario(imaginario1, imaginario2);
    float mod = procesamiento_modulo(real, imaginario);
    float fase = procesamiento_fase(real, imaginario);
    float eleccion;
    printf("Si queres ver el resultado en formato cartesiano selecciona 1\n");
    printf("Si lo queres en formato polar selecciona 0\n");
    scanf("%f", &eleccion);
    if (eleccion == 1){
    printf("Tu numero en forma cartesiana es:\n");
    printf("Parte real: %f\n", real);
    printf("Parte imaginaria: %f", imaginario);
    }else if (eleccion == 0){
    printf("Tu numero en forma polar es:\n");
    printf("Modulo: %f\n", mod);
    printf("Angulo: %f", fase);  
    }else{
    printf("No seleccionaste ninguna de las anteriores, vuelve a hacerlo");
    }
    return 0;
}

void bienvenida(void){
    printf("Hola, vamos a sumar dos numeros complejos en forma binomica\n");
    printf("Luego usted podra decidir si quiere su respuesta expresada en formato polar o rectangular\n");
    printf("Por favor, escriba su primer numero complejo en forma binomica\n");
}
float entrada_real1(void){
    float real1;
    printf("Proceda escribiendo la parte real\n");
    scanf("%f", &real1);
    return real1;
}
float entrada_imaginario1(void){
    float imaginario1;
    printf("Proceda escribiendo la parte imaginaria\n");
    scanf("%f", &imaginario1);
    return imaginario1;
}
float entrada_real2(void){
    float real2;
    printf("Por favor, escriba su segundo numero complejo en forma binomica\n");
    printf("Proceda escribiendo la parte real\n");
    scanf("%f", &real2);
    return real2;
}
float entrada_imaginario2(void){
    float imaginario2;
    printf("Proceda escribiendo la parte imaginaria\n");
    scanf("%f", &imaginario2);
    return imaginario2;
}
float procesamiento_real(float real1, float real2){
    float real = real1 + real2;
    return real;
}
float procesamiento_imaginario(float imaginario1, float imaginario2){
   float imaginario = imaginario1 + imaginario2;
   return imaginario;
}
float procesamiento_modulo(float real, float imaginario){
    float mod = sqrt(pow(real, 2) + pow(imaginario, 2));
    return mod;
}
float procesamiento_fase(float real, float imaginario){
    float fase = atan2(imaginario, real)*180/M_PI;
    return fase;
}
    

