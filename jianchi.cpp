#include<stdio.h>
int main()
{
	int coding = 0;
	printf("���ȥ�ô�����? (ѡ��1 or 0) :>");
	scanf("%d", &coding);
	if(coding == 1)
		printf("�������к�offer\n");
	else
		printf("�������ؼ��ֺ���\n");
	getchar();
	getchar();
}