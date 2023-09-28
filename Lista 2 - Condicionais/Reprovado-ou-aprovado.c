//Exercicío 1 - Aprovado ou Reprovado (+) 

//Leia três notas do aluno
//Retorno a média das três notas
//Retorno das mensagens aprovado ou reprovado 

void main () { 
    float nota1, nota2, nota3, media;
    scanf("%f %f %f", &nota1, &nota2, &nota3);

    //Soma todos os valores e divide quantidade de elementos
    media = (nota1 + nota2 + nota3)/3; 

    if(media >= 6.00){ //maior ou igual a 6
        printf("APROVADO\n", media);
    }else{ (media <= 6.00); //menor ou igual a 6
        printf("REPROVADO\n", media);
    }
return 0;    
}