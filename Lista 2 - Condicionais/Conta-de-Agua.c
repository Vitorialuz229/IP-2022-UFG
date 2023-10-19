//Exercício 2 - Conta de Água (+)

/*
Desenvolver um programa para calcular a conta de água para uma empresa de saneamento. O custo da
água varia dependendo se o consumidor é residencial, comercial ou industrial. A regra para calcular a conta
é:
• Residencial: R$ 5,00 de taxa mais R$ 0,05 por metros cúbicos gastos;
• Comercial: R$ 500,00 para os primeiros 80 metros cúbicos gastos mais R$ 0,25 por metros cúbicos
gastos;
• Industrial: R$ 800,00 para os primeiros 100 metros cúbicos gastos mais R$ 0,04 por metros cúbicos
gastos;
ler a conta do cliente, o consumo de água por metros cúbicos e o tipo de consumidor (residencial, comercial e industrial ). 
e imprimir a conta do cliente e o valor em Reais a ser pago pelo mesmo.
*/ 

void main() { 
    int conta_cliente;  
    double consumo, valor_conta; 
    char tipo_do_consumidor; 

    scanf("%d", &conta_cliente);
    scanf("%lf", &consumo);
    scanf("%c", &tipo_do_consumidor);

    switch (tipo_do_consumidor) {
        case 'R':
                valor_conta = 5.00 + (consumo*0.05);
        break;

        case 'C':
            if(consumo > 80){ 
                valor_conta = 500.00 + (consumo*0.25);
            } else { 
                valor_conta = 500.00;
            }
        break;

        case 'I': 
        if(consumo > 100){ 
            valor_conta = 800.00 + (consumo*0.04); 
        } else{ 
            valor_conta = 800.00;
        }
        break;
    }
    printf("CONTA = %d\n", conta_cliente);
    printf("VALOR DA CONTA = %.2lf\n", valor_conta);

return 0;    
}