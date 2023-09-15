#include <stdio.h>

// Challenge 4 :  Moyenne et somme de 4 nombres
// prof Aymane
// prof Said
// étudiant Bilal EZZAIM
// function welcom to project
void premierFonction()
{
    printf("                 =================================================================================\n");
    printf("                 =================================================================================\n");
    printf("                 ================== Challenge 4 :  Moyenne et somme de 4 nombres =================\n");
    printf("                 =================================================================================\n");
    printf("                 =================================================================================\n");
}

int main()
{
    premierFonction();
    float a, b, c , d , somme, moyenne;
    printf("Ecrevez le numéro a ");
    scanf("%f", &a);
    printf("Ecrevez le numéro b ");
    scanf("%f", &b);
    printf("Ecrevez le numéro c ");
    scanf("%f", &c);
    printf("Ecrevez le numéro d ");
    scanf("%f", &d);

    somme = a + b + c , d;
    moyenne = somme / 3;
    printf("la somme de  %.2f + %.2f + %.2f + %.2f = %.2f \n", a, b , c, d , somme);
    printf("la moyenne de  %.2f / 4 = %.2f \n", somme , moyenne);

    return 0;
}
