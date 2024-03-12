# att-2-
lista 2

# exer 1
//Name: Sarah Santos Hortiz
//Date: 11/03/2024
//description:faça um programa que solicita que o usuário digite três valores,
impirima esses valores em ordem crescente. 

#include <stdio.h>

int main(){
    
  int valor1, valor2, valor3;

  printf("insita o valor 1");
    scanf("%d", &valor1);
    
  printf("insita o valor 2");
    scanf("%d", &valor2);

  printf("insita o valor 3");
    scanf("%d", &valor3);
    
    if (valor1 > valor2 && valor2 > valor3){
    printf("%d %d %d", valor3, valor2, valor1);
  }
        else if(valor2 > valor1 && valor1 > valor3 ){
            printf("%d %d %d", valor3, valor1, valor2);
        }
    
    else{
    printf("%d %d %d", valor3, valor1, valor2);
    }
    return 0;
}

# exer 2 

//Name: Sarah Santos Hortiz
//Date: 11/03/2024
//description: faça um programa que solicita que o usuário digite três valores
e imprima esses volumes em ordem descrecente.

#include <stdio.h>

int main(){
    
  int valor1, valor2, valor3;

      printf("insira o primeiro valor");
        scanf("%d", &valor1);
      printf("insira o segundo valor");
        scanf("%d", &valor2);
      printf("insira o terceiro valor");
        scanf("%d", &valor3);

    if(valor1 > valor2 && valor2 > valor3){
        printf("%d %d %d", valor1, valor2, valor3);
   }
        else if (valor2 > valor3 && valor3 > valor1){
            printf("%d %d %d", valor1, valor1, valor3);
        }
    else{
        printf("%d %d %d", valor3, valor2, valor1);
    }
    return 0;
  }

# exer 3

//Name: Sarah Santos Hortiz
//Date: 11/03/2024
//description: faça um programa que solicita que o usuário digite três valores.
o seu programa deverá somar esses três valores digitados, e, caso o resultado
da soma dos três valores seja maior que o dobro do maior valor, a diferença dos
três valores digitados severpa ser impressa na tela.

#include <stdio.h>

int main(){
  int valor1, valor2, valor3;

  

  

return 0;

}

# exer4

//Name: Sarah Santos Hortiz
//Date: 11/03/2024
//description: Faça um programa que recebe três números e mostra qual menor,
caso sejam iguais, o programa deve dizer que são iguais. Imprima o resultado
na tela.
#include <stdio.h>

int main(){
  int valor1, valor2, valor3;

      printf("insira o primeiro valor");
        scanf("%d", &valor1);
      printf("insira o segundo valor");
        scanf("%d", &valor2);
      printf("insira o terceiro valor");
        scanf("%d", &valor3);

    if(valor1 == valor2 || valor2 ==valor3){
        printf("são iguais");
    }
        else if(valor1 > valor2 && valor2 > valor3){
            printf("%d menor valor", valor3);
         }
        else if(valor2 > valor3 && valor3 > valor1){
            printf("%d menor valor", valor3);
        }
        else if(valor3 >valor1 && valor1 > valor2){
            printf("%d menor valor", valor1);
    }
    return 0;
  }



