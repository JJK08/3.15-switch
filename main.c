#include<stdio.h>

int main(){
    char categoria;
    float costo;
    printf("inserisci la categoria(P=pensionati,S=studenti,D=disoccupati): ");
    scanf("%c",&categoria);
    printf("inserisci il costo del biglietto: ");
    scanf("%f",&costo);
    switch(categoria){
        case'P' :
            costo-=costo*0.1;
            break;
        case'S' :
            costo-=costo*0.15;
            break;
        case'D':
            costo-=costo*0.25;
            break;
        default:
            printf("la categoria inserito non funzionato, riprova.\n");
            return 0;
    }
    printf("il prezzo scontato e': %f",costo);
    return 0;
}