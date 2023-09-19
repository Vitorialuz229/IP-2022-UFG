//Exercício 9 - Decolagem (++)

//Leia massa do avião em toneladas, aceleração do avião
//Tempo em segundos gasto na decolagem
//Retornar a velocidade em Km/h, metros que o avião percorreu durante a decolagem e o trabalho em joule 

void main() { 
    double massa, aceleracao, tempo, velocidade, espaco, trabalho;
    scanf("%lf %lf %lf", &massa, &aceleracao, &tempo);
    
    //calculo da velocidade
    velocidade = (aceleracao*tempo);

    //Espaço em metros percorrido pelo avião durante a decolagem
    espaco = (aceleracao*(tempo*tempo))/2;

    //Trabalho em Joules realizado pelo avião durante a decolagem
    trabalho = ((massa*1000)*(velocidade*velocidade))/2;
     
    printf("VELOCIDADE = %.2lf\n",velocidade*3.6);
    printf("ESPACO PERCORRIDO = %.2lf\n",espaco); 
    printf("TRABALHO REALIZADO = %.2lf\n",trabalho);

return 0;
}