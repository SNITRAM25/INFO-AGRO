#include <stdio.h> //input output
#include <locale.h>
#define turma "Agro T3" //constante

//corpo do c�digo
int main(){
	
	setlocale(LC_ALL,"Portuguese"); //identificar idioma
	
	printf("pindamonhagaba\n");
	//declara��o de vari�veis
	int idade, ano, custo, ano_atual;
	float juros;
	char status; //est� sendo armazenado apenas 1 caracter
	char nome[20]; //est� sendo armazenado uma palavra com 20 caract�res
	
	idade = 18;
	ano = 20007;
	ano_atual = ano + idade;
	custo = 66.89;
	juros = 29+3-4/8;
	printf("%f", juros);
}
