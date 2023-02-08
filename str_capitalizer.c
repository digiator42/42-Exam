#include <unistd.h>
#include <stdio.h>

void str_capitalizer(char *str){

	int i = 0;
	int j = 0;
	char c;


	if(str[0] >= 'a' && str[0] <= 'z')
	{
		c = str[i]-32;
		write(1, &c, 1);
	}
	else
		write(1, &str[i], 1);
		
	i = 1;	
	while(str[i])
	{
		if(str[i] >= 'a' && str[i] <= 'z' && str[i - 1] == ' ')
		{
			c = str[i] - 32;
			write(1, &c, 1);
		}
		else if(str[i] >= 'A' && str[i] <= 'Z' && str[i - 1] != ' '){
			c = str[i] + 32;
			write(1, &c, 1);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);

}

int main(int ac, char **av){
	int i = 1;
	if(ac >= 2)
	{	
		while(av[i])
			str_capitalizer(av[i++]);
	}
	else
		write(1, "\n", 1);
}
