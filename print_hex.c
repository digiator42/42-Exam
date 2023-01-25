#include <unistd.h>

int ft_atoi(char *str)
{
	int i = 0;
	int sign = 1;
	int res = 0;
	while(str[i] == ' ' || str[i] > 8 && str[i] <= 12)
		i++;
	if(str[i] == '+' || str[i] == '-')
		if(str[i++] == '-')
			sign *= -1;
	while(str[i] >= '0' && str[i] <= '9')
		res = res * 10 + str[i++] - 48;
	return res * sign;		
}

void printhex(int num)
{
	if(num >= 16)
		printhex(num / 16);
	num %= 16;
	write(1, &"0123456789abcdef"[num], 1);	
}

int main(int ac, char **av)
{
	if(ac == 2)
	{
		int num = ft_atoi(av[1]);
		printhex(num);
	}
	write(1, "\n", 1);
}
