#include <stdio.h> 

int main(){
	int a, b;
	printf("��������������\n");
	scanf("%d %d", &a, &b);
	
	int m = a, n = b, i;
	while(n>0){
		i = m % n;
		m = n;
		n = i;
	}
	
	printf("%d��%d�����������Լ���ǣ�%d", a, b, m);
	return 0;
}
