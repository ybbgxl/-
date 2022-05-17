#include <stdio.h>
#include <windows.h>
int main()
{
	float a,b,c,d;

	printf("请输入功率(瓦)");
	scanf("%f",&a);
	printf("请输入电价(元)");
	scanf("%f",&b);

	c=(a/1000)*24*b;
	d=c*30;

	printf("日电费为%.2f元\n",c);
	printf("月电费为%.2f元\n",d);
	
	system("pause");
	return 0;
}