#include <stdio.h>

int main(void)
{
int seguir=1;
char dia;
int hora=0;
int minutos=0;
int duracion=0;
float costo=0;
char cont;
while(seguir==1)
{
    printf("Calculadora de costo de llamadas de larga distancia:\n");
    
    printf("ingresar el día en el que se realizó la llamada\n");
    
    scanf("%s",&dia);
    
    printf("ingresar la hora a la que empezó la llamada\n");
    
    scanf("%d",&hora);
    
    printf("ingresar los minutos a los que empezó la llamada\n");
    
    scanf("%d",&minutos);
    
    printf("ingresar la duración la llamada en minutos\n");
    
    scanf("%d",&duracion);
    
    if(dia=='L'||dia=='l'||dia=='M'||dia=='m'||dia=='X'||dia=='x'||dia=='J'||dia=='j'||dia=='V'||dia=='v'){
    
        if(hora>=6 && hora<=18){
    
            costo=duracion*.60;
    
            printf("El costo de la llamada es de:%f\n",costo);
    
        }else if(hora<6 || hora>18){
    
            costo=duracion*.25;
    
            printf("El costo de la llamada es de:%f\n",costo);
    
        }
    
    }else if(dia=='S'||dia=='s'||dia=='D'||dia=='d'){
    
        costo=duracion*.15;
    
        printf("El costo de su llamada es de:%f\n",costo);
    
    }else{
    
        printf("Ingreso un dato no valido\n");
    
    }
    
    printf("Desea continuar usando la calculadora? \nIngrese s para si o n para no\n");
    
    scanf("%s",&cont);
    
    if(cont=='n'||cont=='N'){
    
        seguir++;
    
    }


}


}