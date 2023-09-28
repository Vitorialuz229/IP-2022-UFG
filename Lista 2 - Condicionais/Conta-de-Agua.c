//Exercício 2 - Conta de Água (+)

//Leia conta do cliente (int)
//Leia consumo de água por metros cúbicos (double)
//Leia o tipo de consumidor r (um caractere: ‘C’ - COMERCIAL,
//‘I’ - INDUSTRIAL ou ‘R’ - RESIDENCIAL)

//Retorno da conta onde o código inteiro identificador de conta 
//Retorno do valor da conta pago pelo consumidor

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