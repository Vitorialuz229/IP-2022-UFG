//Exercício 4 - Locadora de Charretes (+)

/*
Uma locadora de charretes cobra R$ 10,00 de taxa para cada 3 horas de uso de uma charrete e R$5,00
para cada 1 hora abaixo dessas 3 horas. Fazer um programa que leia a quantidade de horas que a charrete
foi usada e que calcule e escreva quanto o cliente tem de pagar.
*/

void main () { 
    int horas, valor1, valor2, resto;
    float total;
    scanf("%d", &horas);

    valor1 = (horas / 3 ) *10; 
    resto = (horas % 3);
    valor2 =  resto *5; 
    total = valor1 + valor2; 

    printf("O VALOR A PAGAR E = %.2f\n", total);    
return 0;     
}