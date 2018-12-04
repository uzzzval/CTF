#include<stdio.h>

int main(){
	printf(" Memory Address: %lx\n", (unsigned long long)getenv("MYSHELL"));
	return 1;
}
