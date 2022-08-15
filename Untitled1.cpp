#include <stdio.h>;
int main (){
	int a,b,c;
	do{
		printf ("3 canh tam giam giac: ");
		scanf("%d %d %d", &a,&b,&c);
	}while (!(a+b>c&& a+c>b&& b+c>a));
	
	printf("3 canh la: %d %d %d", a, b, c);
}

