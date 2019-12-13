#include<stdio.h>

typedef struct dados{
	char nome[10]; int idade;
	float altura;
}dados;

main (){
	dados x[10];
	int i;
	
	  for( i = 0 ; i <3; i++)
  {
   printf("\nDigite um nome\n");
   scanf("%s", &x[i].nome);
    printf("\nDigite a idade\n");
   scanf("%d", &x[i].idade); 
    printf("\nDigite a altura\n");
   scanf("%f", &x[i].altura);

}  		
		
		
	  for( i = 0 ; i <3; i++)
  {
  
    printf("\nNome: %s\n", x[i].nome);
    printf("\nIdade: %d\n", x[i].idade);
     printf("\nAltura: %f\n", x[i].altura);
}		

}
