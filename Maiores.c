
#include<stdio.h>
int b=0;
vetor1(int n[6],int i){
	
for(i=0; i<5;i++){
		printf("\nDigite um valor da linha [%d]:\n",i);
		scanf("%d", &n[i]);
	}	
	
}

int soma(int n[6],int i, int b){
	
	
	for(i=0; i<5;i++){
		if(n[i]>10){
			b=b+1;
		}
		else{
			b=b;	
		}
	}
	return b;
}

int ver1(int n[6],int i){

for(i=0; i<5;i++){
		if(n[i]%2==0){
			 printf("\nValor par: %d\n", n[i]);
		}
		else{
			printf("\nValor impar: %d\n", n[i]);
		}
	}	
	
}


int menor(int n[6],int i,int maior){
	
	
	for(i=0; i<6;i++){
			if(n[i]>maior){
				printf("\nValor maior: %d\n", n[i]);
			}
		

	}

}

main(){
	int a[6];
	int y;
	int quant=0;
	int pequeno=0;
	int x;
	int aux=0;
	vetor1(a,y);
	printf("\nA quantidade de numeros maiores que  10 e: %d\n",soma(a,y,quant));
	ver1(a,y);
	menor(a,y,pequeno);

}
