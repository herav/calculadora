#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void main() {
  
  int opcion;
  float numeroA, numeroB;
  
  do{
    
    printf("------------------------\n");
    printf("1. Sumar\n");
    printf("2. Restar\n");
    printf("3. Multiplicar\n");
    printf("4. Dividir\n");
    printf("5. Potencia\n");
    printf("6. Salir\n");
    printf("Elija una opcion: ");
    scanf("%d",&opcion);
    system("cls");
    
    switch (opcion) {
      
      case 1:{
         float suma;
         printf("Sumar: \n\n");
         printf("Primer numero:\t");
         scanf("%f",&numeroA);
         printf("Segundo numero:\t");
         scanf("%f",&numeroB);
         suma=numeroA+numeroB;
         printf("Resultado:\t%.2f\n",suma);
      }break;
      
      case 2:{
         float resta;
         printf("Restar\n\n");
         printf("Primer numero:\t");
         scanf("%f",&numeroA);
         printf("Segundo numero:\t");
         scanf("%f",&numeroB);
         resta=numeroA-numeroB;
         printf("Resultado:\t%.2f\n",resta);
      }break;
      
      case 3:printf("Multiplicar\n");break;
      
      case 4:printf("Dividir\n");break;
      
      case 5:{
         float potencia;
         printf("Potencia\n\n");
         printf("Base:\t");
         scanf("%f",&numeroA);
         printf("Exponente:\t");
         scanf("%f",&numeroB);
         potencia=pow(numeroA, numeroB);
         printf("Resultado:\t%.2f\n",potencia);
      }break;
      
      case 6:printf("Saliendo...\n");break;
      
      default: printf("Opcion no valida\n");
    }
  }
  
  while(opcion!=6);
  
}
