#include "ft_ItoI.h"

char	*ft_hex_neg_to_hex_pos(char *hex, char sign)
{
	//printf(BLUE"\n\n---------------------- Début de la fonction ft_hex_neg_to_hex_pos ----------------------");

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

	//printf(PURPLE"\nzero	= %s\none	= %s\ntwo	= %s\nthree	= %s\nfour	= %s\nfive	= %s\nsix	= %s\nseven	= %s\n", table_conv.zero, table_conv.one, table_conv.two, table_conv.three, table_conv.four, table_conv.five, table_conv.six, table_conv.seven);
	//printf(PURPLE"eight	= %s\nnine	= %s\na	= %s\nb	= %s\nc	= %s\nd	= %s\ne	= %s\nf	= %s\n\n"BC, table_conv.eight, table_conv.nine, table_conv.a, table_conv.b, table_conv.c, table_conv.d, table_conv.e, table_conv.f);

	unsigned int	i		= 7;
	unsigned int	k		= 8;
	size_t			j		= 28;
	size_t			len		= 4;
	char			*bin	= NULL;
	bin						= (char *)malloc(33 * sizeof(char));
	if(!bin)
		return(NULL);

	//printf(ORANGE"\n\nINITIALISATION DES VARIABLES :\n\n");
	//printf(PURPLE"Donnée "ORANGE"hex"PURPLE" = "GREEN"|%s|\n"PURPLE"Donnée "ORANGE"hex"PURPLE"["ORANGE"%d"PURPLE"] = "GREEN"|%c|\n"PURPLE"Variable "ORANGE"i"PURPLE" = "GREEN"|%u|\n"PURPLE"variable "ORANGE"j"PURPLE" = "GREEN"|%ld|\n"PURPLE"variable "ORANGE"k"PURPLE" = "GREEN"|%d|\n"PURPLE"Variable "ORANGE"len"PURPLE" = "GREEN"|%zu|\n"BC, hex , i, hex[i], i, j, k, len);

	ft_memset(bin, 'X', 32);
	bin[32] = '\0';

	//printf(PURPLE"Variable "ORANGE"bin"PURPLE" = "GREEN"|%s|\n"BC, bin);

	while(k != 0)
	{
		//printf(BLUE"\n\nDébut de boucle,\nEtat des variables %u: \n\n"BC, k);
		//printf(PURPLE"Donnée "ORANGE"hex"PURPLE" = "GREEN"|%s|\n"PURPLE"Donnée "ORANGE"hex"PURPLE"["ORANGE"%d"PURPLE"] = "GREEN"|%c|\n"PURPLE"Variable "ORANGE"i"PURPLE" = "GREEN"|%u|\n"PURPLE"variable "ORANGE"j"PURPLE" = "GREEN"|%ld|\n"PURPLE"variable "ORANGE"k"PURPLE" = "GREEN"|%d|\n"PURPLE"Variable "ORANGE"len"PURPLE" = "GREEN"|%zu|\n"BC, hex , i, hex[i], i, j, k, len);

		if(hex[i] == '0')
		{
			//printf(PURPLE"\nComparaison trouvé sur "ORANGE"0"PURPLE"\n");
			//printf(PURPLE"Copie de table_conv.zero = ( "ORANGE"%s"PURPLE" ) sur l'index j = ( "ORANGE"%ld"PURPLE" )\n", table_conv.)
			ft_memcpy(bin + j, table_conv.zero, 4);
		}
		else if(hex[i] == '1')
		{
			//printf(PURPLE"\nComparaison trouvé sur "ORANGE"1\n");
			ft_memcpy(bin + j, table_conv.one, 4);
		}
		else if(hex[i] == '2')
		{
			//printf(PURPLE"\nComparaison trouvé sur "ORANGE"2\n");
			ft_memcpy(bin + j, table_conv.two, 4);
		}
		else if(hex[i] == '3')
		{
			//printf(PURPLE"\nComparaison trouvé sur "ORANGE"3\n");
			ft_memcpy(bin + j, table_conv.three, 4);
		}
		else if(hex[i] == '4')
		{
			//printf(PURPLE"\nComparaison trouvé sur "ORANGE"4\n");
			ft_memcpy(bin + j, table_conv.four, 4);
		}
		else if(hex[i] == '5')
		{
			//printf(PURPLE"\nComparaison trouvé sur "ORANGE"5\n");
			ft_memcpy(bin + j, table_conv.five, 4);
		}
		else if(hex[i] == '6')
		{
			//printf(PURPLE"\nComparaison trouvé sur "ORANGE"6\n");
			ft_memcpy(bin + j, table_conv.six, 4);
		}
		else if(hex[i] == '7')
		{
			//printf(PURPLE"\nComparaison trouvé sur "ORANGE"7\n");
			ft_memcpy(bin + j, table_conv.seven, 4);
		}
		else if(hex[i] == '8')
		{
			//printf(PURPLE"\nComparaison trouvé sur "ORANGE"8\n");
			ft_memcpy(bin + j, table_conv.eight, 4);
		}
		else if(hex[i] == '9')
		{
			//printf(PURPLE"\nComparaison trouvé sur "ORANGE"9\n");
			ft_memcpy(bin + j, table_conv.nine, 4);
		}
		else if(hex[i] == 'a' || hex[i] == 'A')
		{
			//printf(PURPLE"\nComparaison trouvé sur "ORANGE"a\n");
			ft_memcpy(bin + j, table_conv.a, 4);
		}
		else if(hex[i] == 'b' || hex[i] == 'B')
		{
			//printf(PURPLE"\nComparaison trouvé sur "ORANGE"b\n");
			ft_memcpy(bin + j, table_conv.b, 4);
		}
		else if(hex[i] == 'c' || hex[i] == 'C')
		{
			//printf(PURPLE"\nComparaison trouvé sur "ORANGE"c\n");
			ft_memcpy(bin + j, table_conv.c, 4);
		}
		else if(hex[i] == 'd' || hex[i] == 'D')
		{
			//printf(PURPLE"\nComparaison trouvé sur "ORANGE"d\n");
			ft_memcpy(bin + j, table_conv.d, 4);
		}
		else if(hex[i] == 'e' || hex[i] == 'E')
		{
			//printf(PURPLE"\nComparaison trouvé sur "ORANGE"e\n");
			ft_memcpy(bin + j, table_conv.e, 4);
		}
		else if(hex[i] == 'f' || hex[i] == 'F')
		{
			//printf(PURPLE"\nComparaison trouvé sur "ORANGE"f\n");
			ft_memcpy(bin + j, table_conv.f, len);
		}
		else
		{
			printf(RED"\nComparaison non trouvé : \n");
			//printf(ORANGE"bin"PURPLE" + "ORANGE"j"PURPLE"	= "GREEN"|%s|\n"ORANGE"table_conv.f"PURPLE"	= "GREEN"%s\n"ORANGE"len"PURPLE"		= "GREEN"%ld\n",bin + 31, table_conv.f, len);
		}

		i--;
		j -= 4;
		k--;
		//printf(PURPLE"\n\nVariable "ORANGE"bin"PURPLE" fin de boucle = "GREEN"|%s|\n"BC, bin);
	}

	bin[32] = '\0';

	//printf(PURPLE"\n\n		Variable "ORANGE"bin"PURPLE" = "GREEN"%s\n"BC, bin);

	if(sign == '-')
		bin_revers(bin);

	//printf(PURPLE"\n\n		Variable "ORANGE"bin"PURPLE" = "GREEN"%s\n"BC, bin);

	hex = ft_bintohex(bin);

	//printf(PURPLE"\n\nVariable "ORANGE"hex"PURPLE" = "GREEN"%s\n"BC, hex);

	//printf(BLUE"\n\n---------------------- Fin de la fonction ft_hex_neg_to_hex_pos ----------------------");

	return(hex);
}