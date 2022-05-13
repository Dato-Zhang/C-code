#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>	

int main()
{
	//打开文件text.txt
	//相对路径
	//.. 表示上一路径
	//. 表示当前路径
	//fopen("../../test.txt", "r");
	FILE* pf = fopen("text.txt", "r");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	else
	{
		printf("打开成功\n");
		//读文件
		//关闭文件
		fclose(pf);
		pf = NULL;
	}

	//绝对路径
	//fopen("C:\\Users\\mumu\\Desktop\\visual stdio codes\\0513_1\\0513_1", "r");
	return 0;
}
