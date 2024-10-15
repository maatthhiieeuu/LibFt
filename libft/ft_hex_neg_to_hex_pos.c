#include "libft.h"

char	*ft_hex_neg_to_hex_pos(char *hex, char sign)
{
	if(!hex)
	{
		perror("Erreur sur transmission pointeur fontion : ft_hex_neg_to_hex_pos");
		return(NULL);
	}

	typedef struct s_table_conv 
	{
		char	*zero;
		char	*one;
		char	*two;
		char	*three;
		char	*four;
		char	*five;
		char	*six;
		char	*seven;
		char	*eight;
		char	*nine;
		char	*a;
		char	*b;
		char	*c;
		char	*d;
		char	*e;
		char	*f;
	}t_table_conv;

	const t_table_conv table_conv = 
	{
		.zero	= "0000",
		.one	= "0001",
		.two	= "0010",
		.three	= "0011",
		.four	= "0100",
		.five	= "0101",
		.six	= "0110",
		.seven	= "0111",
		.eight	= "1000",
		.nine	= "1001",
		.a		= "1010",
		.b		= "1011",
		.c		= "1100",
		.d		= "1101",
		.e		= "1110",
		.f		= "1111"
	};

	unsigned int	i		= 7;
	unsigned int	k		= 8;
	size_t			j		= 28;
	size_t			len		= 4;
	char			*bin	= NULL;
	bin						= (char *)malloc(33 * sizeof(char));
	if(!bin)
		return(NULL);

	ft_memset(bin, 'X', 32);
	bin[32] = '\0';

	while(k != 0)
	{
		if(hex[i] == '0')
			ft_memcpy(bin + j, table_conv.zero, 4);
		else if(hex[i] == '1')
			ft_memcpy(bin + j, table_conv.one, 4);
		else if(hex[i] == '2')
			ft_memcpy(bin + j, table_conv.two, 4);
		else if(hex[i] == '3')
			ft_memcpy(bin + j, table_conv.three, 4);
		else if(hex[i] == '4')
			ft_memcpy(bin + j, table_conv.four, 4);
		else if(hex[i] == '5')
			ft_memcpy(bin + j, table_conv.five, 4);
		else if(hex[i] == '6')
			ft_memcpy(bin + j, table_conv.six, 4);
		else if(hex[i] == '7')
			ft_memcpy(bin + j, table_conv.seven, 4);
		else if(hex[i] == '8')
			ft_memcpy(bin + j, table_conv.eight, 4);
		else if(hex[i] == '9')
			ft_memcpy(bin + j, table_conv.nine, 4);
		else if(hex[i] == 'a' || hex[i] == 'A')
			ft_memcpy(bin + j, table_conv.a, 4);
		else if(hex[i] == 'b' || hex[i] == 'B')
			ft_memcpy(bin + j, table_conv.b, 4);
		else if(hex[i] == 'c' || hex[i] == 'C')
			ft_memcpy(bin + j, table_conv.c, 4);
		else if(hex[i] == 'd' || hex[i] == 'D')
			ft_memcpy(bin + j, table_conv.d, 4);
		else if(hex[i] == 'e' || hex[i] == 'E')
			ft_memcpy(bin + j, table_conv.e, 4);
		else if(hex[i] == 'f' || hex[i] == 'F')
			ft_memcpy(bin + j, table_conv.f, len);
		else
			printf(RED"\nComparaison non trouvé : \n");

		i--;
		j -= 4;
		k--;
	}

	bin[32] = '\0';

	if(sign == '-')
		bin_revers(bin);

	hex = ft_bintohex(bin);

	return(hex);
}