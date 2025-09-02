#include <stdio.h> //input output
#include <locale.h>
#define turma "Agro T3" //constante

//corpo do código
int main(){
	
	setlocale(LC_ALL,"Portuguese"); //identificar idioma
	//declaração de variáveis
	int idade=0, ano, custo, juros, brasileiro, ano_atual;
	float altura, valorTotal;
	char status; //está sendo armazenado apenas 1 caracter
	char nome[20]; //está sendo armazenado uma palavra com 20 caractéres
	
	idade = 18;
	ano = 2015;
	ano_atual = ano + idade;
	custo = 66.89;
	juros = custo * 1.05;
	brasileiro = true;
}
