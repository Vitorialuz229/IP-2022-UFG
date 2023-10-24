//Exercicio 1 - Arrecadação de Jogos (+)

/*Escrever um algoritmo que lê o público total de futebol, as percentagens de pessoas nas seguintes
categorias: popular, geral, arquibancada e cadeiras e forneça a renda total do jogo. Sabe-se que o valor
dos ingressos por categoria são dados pela tabela abaixo:
Categoria       Valor ingresso
Popular             R$1,00
Geral               R$5,00
Arquibancada        R$10,00
Cadeiras            R$20,00
A entrada contém uma linha inicial com um valor inteiro informando o número de casos de testes que
ocorrem nas linhas seguintes. Cada caso de teste seguinte é formado por uma linha contendo os seguintes
valores, separados entre si por um espaço:
• O número de pessoas que compraram ingresso para o jogo correspondente ao caso de teste.
• A percentagem de pessoas que compraram ingresso na categoria Popular.
• A percentagem de pessoas que compraram ingresso na categoria Geral.
• A percentagem de pessoas que compraram ingresso na categoria Arquibancada.
• A percentagem de pessoas que compraram ingresso na categoria Cadeiras.
*/
#include <stdio.h>
#include <math.h>
 
int main(){
    int testes, pessoas, i=1;
    double popular, geral, arquibancada, cadeiras, renda;
    
    scanf("%d", &testes);
    
    for(i>0; i<=testes; i++){
        scanf("%d %lf %lf %lf %lf", &pessoas, &popular, &geral, &arquibancada, &cadeiras);
        
        renda = pessoas*(popular/100) + (pessoas*(geral/100))*5.00 + (pessoas*(arquibancada/100))*10.00 + (pessoas*(cadeiras/100))*20.00;
        
        printf("A RENDA DO JOGO N. %d E = %.2lf\n", i, renda);
    }
return 0;
}
