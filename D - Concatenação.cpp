#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>


// Evitando sujeiras
int concprima(int e[], char c[]){
	int s,i,l,k,j,m,ver,p,a;
	l=1;
	j=1;
	s=0;
	ver=0;
	a=0;
	m= atoi(c);
	for(s=0;s<strlen(c);++s){
		if (c[s]<48 or c[s]>57){
			return j;} 
		 }
	if (e[0]==0 or m==1)
		return j;
	for(s=0;s<strlen(c);++s){
		if (c[s]<48 or c[s]>57)
			return j;
		if (e[s]==1 and e[s]==e[strlen(c)-1]){
			e[s]=(e[s-1] * (pow(10,1))) + e[s];
			++l;}
		if (e[s]==1){
			e[s+1]=(e[s] * (pow(10,1))) + e[s+1];
			++l;
			break;				
		}
		for (i=2;i<e[s];++i) {
				if (e[s] % i==0 or e[s]==1 or e[s+1]==0)  {
				if ((strlen(c))-1==s){
					if (ver==0)				
					return j;
					e[s]=(e[s-l] * (pow(10,l))) + e[s];
				for(a=2;a<e[s];++a){
					if (e[s] % a==0 ){
						return j;} } }
				e[s+1]=(e[s] * (pow(10,1))) + e[s+1];
				++l;
				p=1;
				break;
			}
		}
		if (p!=1){
			l=1;
			ver=1;
			p=0;}
}
	++j;
	return j;
}

// Aqui que a magica acontece
// Escrever sem acento da agonia
int main (){
	int v,i,e[5],j,l,k;
	char c[5];
	printf("\n Programa pra ver se o numero e primo, ja que numeros nao tem tios e tias com filhos.");
	printf("\n Numero de verificacoes (Inteiro menor que 200): ");
	scanf("%d",& v);
	for (i=0;i<v;++i){
		printf("Inteiro de no maximo 5 digitos: ");
		scanf("%s",c);
		for(j=0;j<strlen(c);++j){
			e[j] = (c[j]-48) ;
		}
		k=concprima(e,c);
		if (k ==1){
			printf("NAO, 'Eh' primo nao 'fi'.\n");
		}
		if(k==2){
			printf("SIM, 'Eh' primo, Acertou 'Mizeravi'.\n");
		}
	}
	system("pause");
	return 0;
}
