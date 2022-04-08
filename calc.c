#include <stdio.h>
#include<stdlib.h>
void main() {
  int opcion;
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
      case 1:printf("Sumar\n");break;
      case 2:printf("Restar\n");break;
      case 3:printf("Multiplicar\n");break;
      case 4:printf("Dividir\n");break;
      case 5:printf("Saliendo...\n");break;
      default: printf("Opcion no valida\n");
    }
  }
  while(opcion!=5);
}
