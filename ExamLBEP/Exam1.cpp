#include<stdio.h>
#include<math.h>

float dientich(float a,float b,float c){
	
float p = (a+b+c)/ 2;
return sqrt(p*(p - a)*(p - b)*(p - c));
}

int main(){
float a, b, c;//nhap 3 canh tam giac

printf("\n Nhap vao canh a:");scanf("%f",&a);
printf("\n Nhap vao canh b:");scanf("%f",&b);
printf("\n Nhap vao canh c:");scanf("%f",&c);

if(a >= b+c|| b >= a+c || c>=a+b){
	printf("Error! Du lieu khong hop le");
}else{
	printf("\n Du lieu hop le..");
	printf("\n Dien tich tam giac la: %.2f",dientich(a,b,c));	
}
}

