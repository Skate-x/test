#include<stdio.h>
int main()
{
	int coding = 0;
	printf("你会去敲代码吗? (选择1 or 0) :>");
	scanf("%d", &coding);
	if(coding == 1)
		printf("坚持你会有好offer\n");
	else
		printf("放弃，回家种红薯\n");
	getchar();
	getchar();
}