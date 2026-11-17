#include <stdio.h>
#include <math.h>

int soma(int num1, int num2){
	return num1 + num2;
}
int sub(int num1, int num2){
	return num1 - num2;
}
float mult(int num1, int num2){
	return num1 * num2;
}
float div(int num1, int num2){
	return num1 / num2;
}

int main(){
	int n1, n2, opcao;
	float result;
	char operador;
	
	do{
		printf ("=========================\n");
		printf ("======CALCULADORA======\n");
		printf ("=========================\n");
		printf ("1. Fazer operacao\n");
		printf ("2. Sair\n");
		printf ("=========================\n");
		scanf ("%d", &opcao);
		
		while(getchar() != '\n');
		
		switch (opcao){
			case 1:
				printf ("Digite o primeiro numero da operacao: \n");
				scanf ("%d", &n1);
				while(getchar() != '\n');
				
				printf ("Digite o operador: \n");
				scanf ("%c", &operador);
				while(getchar() != '\n');
				
				printf ("Digite o segundo numero da operacao\: \n");
				scanf ("%d", &n2);
				while(getchar() != '\n');
				
				if (operador == '+'){
					result = soma(n1, n2);
					printf ("Resultado: %.2f|", result);
					
				}else if (operador == '-'){
					result = sub(n1, n2);
					printf ("Resultado: %.2f|", result);
	
				}else if (operador == '*'){
					result = mult(n1, n2);
					printf ("Resultado: %.2f|", result);
					
				}else if (operador == '/'){
					result = div(n1, n2);
					printf ("Resultado: %.2f|", result);
				} break;
					
			case 2:
			    printf ("(((((((FECHANDO CALCULADORA)))))))\n");	
				break;
		}
		
	}while (opcao != 2);
	 return 0;
}
