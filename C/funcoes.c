#include <stdio.h>
#include <math.h>
#include <string.h>


/*void exemplo(){
    printf("Teste de procedimento!! \n");
}

int soma(int a, int b){

    return a + b;
}

int main (){
    exemplo();
    int resultado = soma(2,8);
    printf ("A soma é...: %d\n ", resultado);
    printf("Fim do programa \n");
    return 0;
}*/

int main (){
    int valor;
    do {
        //solicitar um valor numerico ao usuario
        printf("digite um valor numerico diferente de 0:");
        scanf("%d", &valor);

        //validar s eo valor é diferente de 0
        if (valor!=0) {
            //chama a funbção que exibe o resultado
            int resultado = verificarPositivoNegativo(valor);
            printf("o resulatdo da função é: %d\n", resultado);
        }else{
            //ignorar o valor e solicitar novamente
            printf("Valor invalidp, tente novamente \n");
        }
    }while (valor == 0);//continua solicitando um valor ate ser diferente de 0
    return 0;
}

// definição de função
int verificarPositivoNegativo(int numero){
    //se positivo retora 1, negativo retorna 0
    if (numero>0){
        return 1 ;
    }else{
        return 0;
    }
}