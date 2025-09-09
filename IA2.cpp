#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int Idade, Peso;
	char Nome[30];
	float Altura, IMC;
	
	printf("Digite seu Nome: ");
	//scanf("%s", &Nome);
	gets(Nome);
	fflush(stdin);
	
	printf("Digite sua Idade: ");
	scanf("%i", &Idade);
	
	printf("Digite seu Peso: ");
	scanf("%i", &Peso);
	
	printf("Digite sua Altura: ");
	scanf("%f", &Altura);
	
	IMC= Peso/ (Altura*Altura);
	
	printf("\nNome digitado:%s ");
	printf("\nIdade digitada:%i ");
	printf("\nPeso digitado:%i ");
	printf("\nAltura digitada:%.2f ");
	printf("\nIMC:%.2f", IMC);
	
	
}
