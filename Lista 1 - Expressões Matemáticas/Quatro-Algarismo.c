//Exercício 10 - Quatro Algarismo (++)

//Ler um número com três algarismos
//Retorna um número inteiro com quatro algarismos

#include <stdio.h>

void main(){
    int PrimAlg, SegAlg, TrecAlg, QuartAlg, DigCont, Const, Total;    
    scanf("%d", &DigCont);

    PrimAlg = DigCont/100; 
    SegAlg = DigCont/10%10; 
    TrecAlg = DigCont%10; 

    Const = (PrimAlg+(SegAlg*3) + (TrecAlg*5))%7; 
    Total = DigCont*10+Const; 

    printf("O NOVO NUMERO E = %d\n", Total);

return 0;    
}