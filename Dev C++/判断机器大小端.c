#include <stdio.h>

int check_sys(void)
{
	int a = 1;
	return *(char*)&a;
}

int main()
{
	int ret = check_sys();
	
	if (ret == 1)
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}
	
	return 0;
}