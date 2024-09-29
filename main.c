#include <stdbool.h>
#include <stdio.h>

int main(void)
{
    float peso, spesedispedizione, distanza, euro;
    int livellodiurgenza;
    printf("Inserisci il peso in kg: ");
    scanf("%f", &peso);
    printf("Inserisci la distanza in km: ");
    scanf("%f", &distanza);
    printf("Inserisci il livello di urgenza (1=Si, 0=No)");
    scanf("%i", &livellodiurgenza);
    if (livellodiurgenza == false){
        if (distanza < 100){
            spesedispedizione = (peso * 1);}
        else if (distanza >= 100 && distanza <= 300){
            spesedispedizione = (peso * 2);}
        else if (distanza > 300){
            spesedispedizione = (peso * 3);}
    }
    if (livellodiurgenza == true)
    {
        if (distanza > 100){
            spesedispedizione = (peso * 2.5);}
        else if (distanza >= 100 && distanza <= 300){
            spesedispedizione = (peso * 3.5);}
        else if (distanza > 300){
            spesedispedizione = (peso * 4.0);}
    }
    printf("Le spese di spedizione sono di %.2f euro", spesedispedizione);
    return 0;
}
