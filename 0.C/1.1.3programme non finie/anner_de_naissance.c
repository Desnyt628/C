#include <stdio.h>
#define CURRENTYEAR 2021
int main(){
    int born;                                   /*date de naissance demander a lutilisateur*/
    int answer;                                 /*dit si il sagit bien dune anner bissextile*/
    int att;                                    /*dit si il a raison*/
    int RepUser;                                /*contien la reponse de si il a raison*/
    int RealRep;                                /*vrais reponse de si il lest ou pas*/
    printf("en quelle anner est tu nee?\n>");
    scanf("%d", &born);
    
    while(CURRENTYEAR<born){
        printf("alors tes pas encore nee???\nmes ta vrais date de naissance\n>");
        scanf("%d",&born);
    }

    printf("alors tu est nee en %d\nest-ce une anner bissextile?(oui(1)/non(0))\n>",born);
    scanf(" %d", &answer);
    RepUser = answer; /*0 si il dit non 1 si il dit oui*/
    
    att=born % 4;

    RealRep=(att==0);/*1 si cest une anner bisextile 0 si se ne les pas*/
    
    if (RealRep==RepUser){
        printf("bravo pas tout le monde sait... a moin que tu ny sois aller au hasard");
    }
    
    if (RepUser != RealRep){
        printf("nah tu na pas raison mais peut de monde save si il le son ou non");
    }

    return(0);
}