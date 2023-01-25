#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	int i;
	if (ac == 2){
		int num = atoi(av[1]);
		if(num == 1)
			printf("1");
		if(num == 2)
			printf("2");
		i = 2;
		while(num > 2){
			if(num % i == 0){
				printf("%d", i);
				if(num == i)
					break;
				printf("*");
				num /= i;
				i = 2;
			}
			i++;
		}
	}
	printf("\n");
}
