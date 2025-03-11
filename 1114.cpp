#include <stdio.h>

int main(){
	int t = 1, senha;
	while(t == 1){
		scanf("%d", &senha);
		if (senha == 2002){
		printf("Acesso Permitido\n");
		return 0;
	}
		else{
			printf("Senha Invalida\n");
			t = 1;
		}
	}
}
