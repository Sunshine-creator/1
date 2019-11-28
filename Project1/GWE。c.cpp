#include<stdio.h>
#include<windows.h>
#include<string.h>
# pragma warning (disable : 4996)
#if 1
int main()
{
	char str1[10] = "program", str2[6] = "c++";
	puts(str1);
	puts(str2);
	strcpy(str1, str2);
	printf("str1:");
	puts(str1);
	printf("str2;");
	puts(str2);
	system("pause");
	return 0;

}
#endif // 0
int main()
{
	char str1[20] = "i am a", str2[10] = "student";
	strcat(str1, str2);
	puts(str1);

}
