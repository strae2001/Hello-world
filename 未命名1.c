#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<pthread.h>

int add(int a,int b){
	
//	if(a==b){
//		goto flag;
//	}
	printf("num1: %d\n", a);
	printf("num1: %d\n", b);
flag:
	return a+b;
} 

int main(){
	int n1,n2;
	printf("������������:\n");
	scanf("%d", &n1);
	scanf("%d", &n2);
	if(n1<n2)
	goto flag;
	int ret = add(n1,n2);
	printf("������Ϊ: %d\n", ret);
}



