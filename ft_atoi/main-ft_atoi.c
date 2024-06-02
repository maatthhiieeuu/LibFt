/* ********************************************************************************************* */
/*                                                                                               */
/*   Project : libft/main-ft_atoi.c                     ::::::  ::::::    :::::::::              */
/*                                                     +:: ::+ +:: ::+   +:::::::::+             */
/*   By: Matthieu Boegler                             +#:  +#::#+ :#+   +:#      #:+             */
/*      <https://github.com/maatthhiieeuu>           ###   ##:## ###   #::::::::#                */
/*                                                  ###    ###  ###   ###      ###               */
/*   Created: 2024/06/  by m.boegler             ###         ###   ###########                 */
/*   Updated: 2024/06/  by m.boegler            ###         ###   #########                    */
/*                                                                                               */
/* ********************************************************************************************* */

#include <stdlib.h>
#include <stdio.h>

int 	main()
{
	char	*str1 = "32";
	int		result_or = atoi(str1);
	printf("\033[1;33mTeste 1:\n\n\033[1;30mstr1 = |%s|\nresultat = |%d|\n", str1, result_or);

	char	*str2 = "-32";
	result_or = atoi(str2);
	printf("\033[1;33mTeste 2:\n\n\033[1;30mstr2 = |%s|\nresultat = |%d|\n", str2, result_or);

	char	*str3 = "+32";
	result_or = atoi(str3);
	printf("\033[1;33mTeste 3:\n\n\033[1;30mstr3 = |%s|\nresultat = |%d|\n", str3, result_or);

	char	*str4 = "32 ";
	result_or = atoi(str4);
	printf("\033[1;33mTeste 4:\n\n\033[1;30mstr4 = |%s|\nresultat = |%d|\n", str4, result_or);

	char	*str5 = "32+";
	result_or = atoi(str5);
	printf("\033[1;33mTeste 5:\n\n\033[1;30mstr5 = |%s|\nresultat = |%d|\n", str5, result_or);
	 
	char	*str6 = "32-";
	result_or = atoi(str6);
	printf("\033[1;33mTeste 6:\n\n\033[1;30mstr6 = |%s|\nresultat = |%d|\n", str6, result_or);

	char	*str7 = "32+";
	result_or = atoi(str7);
	printf("\033[1;33mTeste 7:\n\n\033[1;30mstr7 = |%s|\nresultat = |%d|\n", str7, result_or);

	char	*str8 = "32a";
	result_or = atoi(str8);
	printf("\033[1;33mTeste 8:\n\n\033[1;30mstr8 = |%s|\nresultat = |%d|\n", str8, result_or);

	char	*str9 = "32!";
	result_or = atoi(str9);
	printf("\033[1;33mTeste 9:\n\n\033[1;30mstr9 = |%s|\nresultat = |%d|\n", str9, result_or);

	char	*str10 = "a32";
	result_or = atoi(str10);
	printf("\033[1;33mTeste 10:\n\n\033[1;30mstr10 = |%s|\nresultat = |%d|\n", str10, result_or);

	char	*str11 = "!32";
	result_or = atoi(str11);
	printf("\033[1;33mTeste 11:\n\n\033[1;30mstr11 = |%s|\nresultat = |%d|\n", str11, result_or);

	char	*str12 = " 32";
	result_or = atoi(str12);
	printf("\033[1;33mTeste 12:\n\n\033[1;30mstr12 = |%s|\nresultat = |%d|\n", str12, result_or);

	char	*str13 = "+ 32";
	result_or = atoi(str13);
	printf("\033[1;33mTeste 13:\n\n\033[1;30mstr13 = |%s|\nresultat = |%d|\n", str13, result_or);

	char	*str14 = "- 32";
	result_or = atoi(str14);
	printf("\033[1;33mTeste 14:\n\n\033[1;30mstr14 = |%s|\nresultat = |%d|\n", str14, result_or);

	char	*str15 = "a 32";
	result_or = atoi(str15);
	printf("\033[1;33mTeste 15:\n\n\033[1;30mstr15 = |%s|\nresultat = |%d|\n", str15, result_or);

	char	*str16 = "! 32";
	result_or = atoi(str16);
	printf("\033[1;33mTeste 16:\n\n\033[1;30mstr16 = |%s|\nresultat = |%d|\n", str16, result_or);

	char	*str17 = "++32";
	result_or = atoi(str17);
	printf("\033[1;33mTeste 17:\n\n\033[1;30mstr17 = |%s|\nresultat = |%d|\n", str17, result_or);

	char	*str18 = "--32";
	result_or = atoi(str18);
	printf("\033[1;33mTeste 18:\n\n\033[1;30mstr18 = |%s|\nresultat = |%d|\n", str18, result_or);

	char	*str19 = "---32";
	result_or = atoi(str19);
	printf("\033[1;33mTeste 19:\n\n\033[1;30mstr19 = |%s|\nresultat = |%d|\n", str19, result_or);

	char	*str20 = "+++32";
	result_or = atoi(str20);
	printf("\033[1;33mTeste 21:\n\n\033[1;30mstr21 = |%s|\nresultat = |%d|\n", str20, result_or);

	char	*str21 = "-+-32";
	result_or = atoi(str21);
	printf("\033[1;33mTeste 21:\n\n\033[1;30mstr21 = |%s|\nresultat = |%d|\n", str21, result_or);
}