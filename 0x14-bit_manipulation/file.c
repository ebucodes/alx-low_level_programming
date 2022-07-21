#include <stdlib.h>
#include <stdio.h>

int main()
{
	int i = 0, tmp;
	char pwd[] = "Look";

	while (i <= 3)
	{
		tmp = i << 3;
		pwd[i] = 0xff & 0x46c6f48 >> tmp;
		i++;
	}
	printf("%s", pwd);
	return (0);
}
