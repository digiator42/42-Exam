#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str){
	int i = 0;
	while(str[i])
		i++;
	return i;	
}

int main(int ac, char **av){
	int i = 0;
	int j = 0;

	if(ac == 2){
		int len = ft_strlen(av[1]);
		len--;
		while(av[1][len] == ' '){
				len--;
		}
		while (i < len+1)
		{
			while(av[1][i] == ' '){
				i++;
			}
			while(av[1][i] && av[1][i] != ' '){
				write(1, &av[1][i++], 1);	
			}

			while(av[1][i]  && av[1][i] == ' '){
				j++;
				i++;
			}
			if(j >= 1 && i <= len){
				write(1, " ", 1);
				j = 0;
			}
		}
	}
	write(1, "\n", 1);
}
