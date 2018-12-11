#include <stdlib.h>
#include <stdio.h>

int passos (int n1, int n2, int p){
	int d;
	if (p%2==0){
		d=n1-n2;
	}else{
		d=n1+n2;
	}
	return d;
}
int main (){
	int a,i,e,j,f,p;
	printf("\n Numero de vezes que Joaozinho trocou de direcao: ");
	scanf("%d", & i);
	if (i==0) return 0;
	e=0;
	a=0;
	p=0;
	
	printf("\n N+1 inteiros, separados por espaço em branco, quantidade de passos em cada direcao: ");
	for (j=0;j<=i;++j){
		scanf("%d",&f);
		e= passos(e,f,j);
		if(e<p) p=e;
		if(e>a) a=e;
	}
	p=p*(-1);
	if (a<p)a=p;
	printf("\n");
	printf("A maior distancia que Joaozinho pode ficar do ponto de partida e: ");
	printf("%d",a);
	printf("\n");
	system("pause");
	return 0;
}
