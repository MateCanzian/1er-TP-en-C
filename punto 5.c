/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>
int main()
{
    float tension, angulo_tension, corriente, angulo_corriente, frecuencia;
    printf("Escribe el valor de la tension\n");
    scanf("%f", &tension);
    printf("Escribe el valor del angulo de la tension\n");
    scanf("%f", &angulo_tension);
    printf("Escribe el valor de la corriente\n");
    scanf("%f", &corriente);
    printf("Escribe el valor del angulo de la corriente\n");
    scanf("%f", &angulo_corriente);
    printf("Ingresa la frecuancia de trabajo\n");
    scanf("%f", &frecuencia);
    printf("Su tension en forma polar es %f", tension);
    printf(" x e^j%f\n", angulo_tension);
    printf("Su corriente en forma polar es %f", corriente);
    printf(" x e^j%f\n", angulo_corriente);
    float z = tension/corriente;
    float angulo_z = angulo_tension-angulo_corriente;
    float impedancia_real = z*cos(angulo_z);
    float impedancia_imaginaria = z*sin(angulo_z);
    printf("Tu impedancia es: %f", impedancia_real);
    printf(" + j%f\n", impedancia_imaginaria);
    
    if (impedancia_imaginaria>0){
        float L = impedancia_imaginaria/((2*M_PI)*frecuencia);
        printf("El valor de tu inductor es de: %fH\n", L);
    }else if (impedancia_imaginaria<0){
        float C = 1/(impedancia_imaginaria*(2*M_PI));
        printf("El valor de tu capacitor es de: %fF\n", C);
    }else{
        printf("El valor de tu resistencia es: %fohms", impedancia_real);
    }
    return 0;
}

