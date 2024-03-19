# att-2-
lista 2

# exer 1
//Name: Sarah Santos Hortiz
//Date: 11/03/2024
//description:faça um programa que solicita que o usuário digite três valores,
//impirima esses valores em ordem crescente. 

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



int main(){
  int valor1, valor2, valor3, dif, soma;
  
  printf("digite o primeiro valor");
    scanf("%d", &valor1);
  printf("digite o segundo valor");
    scanf("%d", &valor2);
 printf("digite o terceiro valor");
    scanf("%d", &valor3);
    
    if (valor1 >= valor2 && valor1 >= valor3) {
        dif = valor1 - (valor2 + valor3);
    } else if (valor2 >= valor1 && valor2 >= valor3) {
        dif = valor2 - (valor1 + valor3);
    } else {
        dif = valor3 - (valor1 + valor2);
    }

    
  soma = valor1 + valor2 + valor3;
  
  
  if(soma > 2*dif){
          printf("a diferença é %d", dif);
          }
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

#exer 5 

//Name: Sarah Santos Hortiz
//Date: 11/03/2024
//description:

#include <stdio.h>

int main(){
  int valor=3;
  
  if(valor > 100 && valor <500){
    printf("dentro do valor de 100 e 500");
    }
    else{
    printf("Fora do intervalo");
    }
  
 
 return 0; 
}


exer6

#include <stdio.h>

int main(){


  int valor=35, ant, dif, su;
  ant= valor-1;
  su = valor+1;
  
  if(valor > 100 && valor <500){
      dif = (valor * 3) - ant;
    printf("%d", dif);
    }
    else{
        dif= valor % (su / 10);
    printf("%d", dif);
    }
 return 0; 
}


#exer 7 

#include <stdio.h>

int main(){
    int num1, num2, dif;
    int aux, x=2;
su = valor + 1;
    if(num1>num2){
        printf("%d", num1);
        while (x=2; x<=num1-1;x++);
        if(y%num1!=0){
            aux+=1;
        } 
        if(aux +2 != 0){
        dif = (num1 * num1 * num1 ) - (num1 + 1);
        }
    }
    else if
    (num2>num1){
        printf("%d", num2);
        while (x=2; x<=num2-1;x++);
        if(y%num2!=0){
            aux+=1;
        } 
        if(aux +2 != 0){
        dif = (num2 * num2 * num2 ) - (num2 + 1);
        }
    }
    else{
        printf("igual");
    }
}
#exer 8

???????????????????
# exer 9

#include <stdio.h>

int main()
{
    char name[5];
    int i=1;
    printf("seu nome");
            scanf("%s", & name );

    while( i <= 10){
            printf("%s ", name );
            i ++;
    }
    return 0;
}

exer 10

#include <stdio.h>

int main()
{
    int num = 10, i = 1 ;
   
    while( i <= 10){
            printf("%d ", num-- );
            i++;
            
    }
    return 0;
}

exer 11


#include <stdio.h>

int main()
{
    int num=19;
    
    while(num <= 347){
        if(num % 2 != 0){
            printf("%d ", num);
            
        }
         num++;
    }
    return 0;
}


exer 12


#include <stdio.h>

int main()
{
    int num=19;
    
    while(num <= 347){
        if(num % 2 == 0){
            printf("%d ", num);
            
        }
         num--;
    }
    return 0;
}

13 exer

    #include <stdio.h>

int main()
{
    int num = 347;
    
    while(num >= 18){
        if(num % 2 == 0){
            printf("%d ", num);
            
        }
         num--;
    }
    return 0;
}

14 exer 

#include <stdio.h>

int main()
{
    int num = 100;
    
    while(num >= 1){
        if(num % 11 == 0){
            printf("%d ", num);
            
        }
         num--;
    }
    return 0;
}
15 exer

    #include <stdio.h>

int main()
{
    int cont;
    int valores[10];
    
            for(cont= 0; valores[cont] < 10; cont ++){
                printf("digita ai ");
                scanf( "%d", & valores[cont]);
            }
            for( cont= 0; cont < 10; cont ++){
                if(valores[cont] >=  10 && valores[cont] <= 157)
                        printf("%d esta dentro ", valores[cont]);
                else{
                    printf("%d esta fora ", valores[cont]);
                };
                
            }
    return 0;
}

16 exer

    #include <stdio.h>

int main() {
    int cont;
    int valores[15];
    int pares = 0, impares = 0;

    for (cont = 0; cont < 15; cont++) {
        printf("Digite um valor: ");
        scanf("%d", &valores[cont]);
        if (valores[cont] % 2 == 0) {
            printf("O valor %d é par.\n", valores[cont]);
            pares++;
        } else {
            printf("O valor %d é ímpar.\n", valores[cont]);
            impares++;
        }
    }

    printf("Foram digitados %d valores pares e %d valores ímpares.\n", pares, impares);

    return 0;
}

exer 17
    
    

