#include <stdlib.h>
#include <stdio.h>


//Acho que tô me matando aos poucos...
int mmc(int n1, int n2){
	int a,b,c,mmc;
	b=n2;
	a=n1;
	do{
		c=(a % b);
		a=b;
		b=c;
	}while(c!=0);
	mmc =(n1*n2)/a;
	return mmc;
}

//ZZZZzzzz
int main (){
	int i,e,n1,obs[50];
	printf("\n Numero de obstaculos entre o super-heroi e o alvo(0>n<50): ");
	scanf("%d", & i);
	n1=1;
	
	printf("\n Frequencia de cada obstaculo (N numeros inteiros, 0>N<=30): ");
	for (e=0;e<i;++e){
		scanf("%d",& obs[e]);
		n1= mmc (obs[e],n1);
	}
	if (i!=0)
	printf("\n%d",n1);
	printf("\n");
	system("pause");
	return 0;
}
