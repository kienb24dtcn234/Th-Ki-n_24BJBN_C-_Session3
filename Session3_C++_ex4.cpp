#include<stdio.h>
int main(){
	float n ,t ,k ;
	scanf("%f %f %f", &n, &t, &k);
	float score= ((n + t + k) / 3);
	printf("Diem trung binh %.2f",score);
	printf("\ntong diem %.2f", n+t+k);
	return 0;
}
