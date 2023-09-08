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
    printf("Hola, hoy vamos a indicar el valor de la resistencia\ny el capacitor o inductor según corresponda\n");
    float salida = 1;
    float resistencia, reactancia, frecuencia, inductancia, capacitancia;
    while(salida == 1){
        printf("Indique el valor de la parte real de la impedancia (resistencia)\n");
        scanf("%f", &resistencia);
        printf("Indique el valor de la parte imaginaria de la impedancia (reactancia)\n");
        scanf("%f", &reactancia);
        printf("Indique el valor de la frecuencia\n");
        scanf("%f", &frecuencia);
        if (reactancia>0){
            printf("Vamos a calcular la inductancia\n");
            inductancia = reactancia/(2*M_PI*frecuencia);
            printf("Su inductancia es: %f\n", inductancia);
        }else{
            printf("Vamos a calcular la capacitancia\n");
            capacitancia = reactancia/(2*M_PI*frecuencia);
            printf("Su capacitancia es: %f\n", capacitancia);}
        printf("Si quiere volver a calcular presione 1,\nsi desea finalizar presione 0\n");
        scanf("%f", &salida);
    }
    return 0;
}
