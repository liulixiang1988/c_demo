#include <stdio.h> 

int main(){
	int a, b;
	printf("请输入两个数：\n");
	scanf("%d %d", &a, &b);
	
	int m = a, n = b, i;
	while(n>0){
		i = m % n;
		m = n;
		n = i;
	}
	
	printf("%d和%d两个数的最大公约数是：%d", a, b, m);
	return 0;
}
