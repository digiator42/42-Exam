#include <unistd.h>

int count_num(int nb){

	int i = 0;
	if(nb < 0){
		nb = nb * -1;
		i++;
	}
	while(nb > 0)
	{
		nb /= 10;
		i++;
	}
	return i;
}

char	*ft_itoa(int nbr)
{
	int i = count_num(nbr);
	char *str = malloc(i);
	i--;
	str[i] = '\0';
	if(nbr == 0){
		str[0] = '0';
		return str;
	}
	if(nbr < 0){
		str[0] = '-';
		nbr *= -1;
	}
	while(nbr > 0){
		str[i] = nbr % 10 + 48;
		nbr /= 10;
		i--;
	}
	return str;
}

