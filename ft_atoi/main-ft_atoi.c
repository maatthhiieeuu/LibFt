/* ********************************************************************************************* */
/*                                                                                               */
/*   Project : libft/main-ft_atoi.c                     ::::::  ::::::    :::::::::              */
/*                                                     +:: ::+ +:: ::+   +:::::::::+             */
/*   By: Matthieu Boegler                             +#:  +#::#+ :#+   +:#      #:+             */
/*      <https://github.com/maatthhiieeuu>           ###   ##:## ###   #::::::::#                */
/*                                                  ###    ###  ###   ###      ###               */
/*   Created: 2024/06/03  by m.boegler             ###         ###   ###########                 */
/*   Updated: 2024/06/03  by m.boegler            ###         ###   #########                    */
/*                                                                                               */
/* ********************************************************************************************* */

#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(const char *string);

int 	main()
{
	char	*str1 = "32";
	int		result_or = atoi(str1);
	int		result_ft = ft_atoi(str1);
	if(result_or == result_ft)
	{
		printf("\033[1;33mTeste 1:\n\033[1;30mstr1 = |%s|\n\033[1;32mSuccess\033[1;0m\n\n", str1);
	}
	else
	{
		printf("\033[1;33mTeste 1:\n\033[1;30mstr1 = |%s|\nresult_or = |%d|\nresult_ft = |%d|\n\033[1;31mFailed\n\n", str1, result_or, result_ft);
	}

	char	*str2 = "-32";
	result_or = atoi(str2);
	result_ft = ft_atoi(str2);
	if(result_or == result_ft)
	{
		printf("\033[1;33mTeste 2:\n\033[1;30mstr2 = |%s|\n\033[1;32mSuccess\033[1;0m\n\n", str2);
	}
	else
	{
		printf("\033[1;33mTeste 2:\n\033[1;30mstr2 = |%s|\nresult_or = |%d|\nresult_ft = |%d|\n\033[1;31mFailed\n\n", str2, result_or, result_ft);
	}

	char	*str3 = "+32";
	result_or = atoi(str3);
	result_ft = ft_atoi(str3);
	if(result_or == result_ft)
	{
		printf("\033[1;33mTeste 3:\n\033[1;30mstr3 = |%s|\n\033[1;32mSuccess\033[1;0m\n\n", str3);
	}
	else
	{
		printf("\033[1;33mTeste 3:\n\033[1;30mstr3 = |%s|\nresult_or = |%d|\nresult_ft = |%d|\n\033[1;31mFailed\n\n", str3, result_or, result_ft);
	}

	char	*str4 = "32 ";
	result_or = atoi(str4);
	result_ft = ft_atoi(str4);
	if(result_or == result_ft)
	{
		printf("\033[1;33mTeste 4:\n\033[1;30mstr4 = |%s|\n\033[1;32mSuccess\033[1;0m\n\n", str4);
	}
	else
	{
		printf("\033[1;33mTeste 4:\n\033[1;30mstr4 = |%s|\nresult_or = |%d|\nresult_ft = |%d|\n\033[1;31mFailed\n\n", str4, result_or, result_ft);
	}

	char	*str5 = "32+";
	result_or = atoi(str5);
	result_ft = ft_atoi(str5);
	if(result_or == result_ft)
	{
		printf("\033[1;33mTeste 5:\n\033[1;30mstr5 = |%s|\n\033[1;32mSuccess\033[1;0m\n\n", str5);
	}
	else
	{
		printf("\033[1;33mTeste 5:\n\033[1;30mstr5 = |%s|\nresult_or = |%d|\nresult_ft = |%d|\n\033[1;31mFailed\n\n", str5, result_or, result_ft);
	}
	 
	char	*str6 = "32-";
	result_or = atoi(str6);
	result_ft = ft_atoi(str6);
	if(result_or == result_ft)
	{
		printf("\033[1;33mTeste 6:\n\033[1;30mstr6 = |%s|\n\033[1;32mSuccess\033[1;0m\n\n", str6);
	}
	else
	{
		printf("\033[1;33mTeste 6:\n\033[1;30mstr6 = |%s|\nresult_or = |%d|\nresult_ft = |%d|\n\033[1;31mFailed\n\n", str6, result_or, result_ft);
	}

	char	*str7 = "032";
	result_or = atoi(str7);
	result_ft = ft_atoi(str7);
	if(result_or == result_ft)
	{
		printf("\033[1;33mTeste 7:\n\033[1;30mstr7 = |%s|\n\033[1;32mSuccess\033[1;0m\n\n", str7);
	}
	else
	{
		printf("\033[1;33mTeste 7:\n\033[1;30mstr7 = |%s|\nresult_or = |%d|\nresult_ft = |%d|\n\033[1;31mFailed\n\n", str7, result_or, result_ft);
	}

	char	*str8 = "32a";
	result_or = atoi(str8);
	result_ft = ft_atoi(str8);
	if(result_or == result_ft)
	{
		printf("\033[1;33mTeste 8:\n\033[1;30mstr8 = |%s|\n\033[1;32mSuccess\033[1;0m\n\n", str8);
	}
	else
	{
		printf("\033[1;33mTeste 8:\n\033[1;30mstr8 = |%s|\nresult_or = |%d|\nresult_ft = |%d|\n\033[1;31mFailed\n\n", str8, result_or, result_ft);
	}

	char	*str9 = "32!";
	result_or = atoi(str9);
	result_ft = ft_atoi(str9);
	if(result_or == result_ft)
	{
		printf("\033[1;33mTeste 9:\n\033[1;30mstr9 = |%s|\n\033[1;32mSuccess\033[1;0m\n\n", str9);
	}
	else
	{
		printf("\033[1;33mTeste 9:\n\033[1;30mstr9 = |%s|\nresult_or = |%d|\nresult_ft = |%d|\n\033[1;31mFailed\n\n", str9, result_or, result_ft);
	}

	char	*str10 = "a32";
	result_or = atoi(str10);
	result_ft = ft_atoi(str10);
	if(result_or == result_ft)
	{
		printf("\033[1;33mTeste 10:\n\033[1;30mstr10 = |%s|\n\033[1;32mSuccess\033[1;0m\n\n", str10);
	}
	else
	{
		printf("\033[1;33mTeste 10:\n\033[1;30mstr10 = |%s|\nresult_or = |%d|\nresult_ft = |%d|\n\033[1;31mFailed\n\n", str10, result_or, result_ft);
	}

	char	*str11 = "!32";
	result_or = atoi(str11);
	result_ft = ft_atoi(str11);
	if(result_or == result_ft)
	{
		printf("\033[1;33mTeste 11:\n\033[1;30mstr11 = |%s|\n\033[1;32mSuccess\033[1;0m\n\n", str11);
	}
	else
	{
		printf("\033[1;33mTeste 11:\n\033[1;30mstr11 = |%s|\nresult_or = |%d|\nresult_ft = |%d|\n\033[1;31mFailed\n\n", str11, result_or, result_ft);
	}

	char	*str12 = " 32";
	result_or = atoi(str12);
	result_ft = ft_atoi(str12);
	if(result_or == result_ft)
	{
		printf("\033[1;33mTeste 12:\n\033[1;30mstr12 = |%s|\n\033[1;32mSuccess\033[1;0m\n\n", str12);
	}
	else
	{
		printf("\033[1;33mTeste 12:\n\033[1;30mstr12 = |%s|\nresult_or = |%d|\nresult_ft = |%d|\n\033[1;31mFailed\n\n", str12, result_or, result_ft);
	}

	char	*str13 = "+ 32";
	result_or = atoi(str13);
	result_ft = ft_atoi(str13);
	if(result_or == result_ft)
	{
		printf("\033[1;33mTeste 13:\n\033[1;30mstr13 = |%s|\n\033[1;32mSuccess\033[1;0m\n\n", str13);
	}
	else
	{
		printf("\033[1;33mTeste 13:\n\033[1;30mstr13 = |%s|\nresult_or = |%d|\nresult_ft = |%d|\n\033[1;31mFailed\n\n", str13, result_or, result_ft);
	}

	char	*str14 = "- 32";
	result_or = atoi(str14);
	result_ft = ft_atoi(str14);
	if(result_or == result_ft)
	{
		printf("\033[1;33mTeste 14:\n\033[1;30mstr14 = |%s|\n\033[1;32mSuccess\033[1;0m\n\n", str14);
	}
	else
	{
		printf("\033[1;33mTeste 14:\n\033[1;30mstr14 = |%s|\nresult_or = |%d|\nresult_ft = |%d|\n\033[1;31mFailed\n\n", str14, result_or, result_ft);
	}

	char	*str15 = "a 32";
	result_or = atoi(str15);
	result_ft = ft_atoi(str15);
	if(result_or == result_ft)
	{
		printf("\033[1;33mTeste 15:\n\033[1;30mstr15 = |%s|\n\033[1;32mSuccess\033[1;0m\n\n", str15);
	}
	else
	{
		printf("\033[1;33mTeste 15:\n\033[1;30mstr15 = |%s|\nresult_or = |%d|\nresult_ft = |%d|\n\033[1;31mFailed\n\n", str15, result_or, result_ft);
	}

	char	*str16 = "! 32";
	result_or = atoi(str16);
	result_ft = ft_atoi(str16);
	if(result_or == result_ft)
	{
		printf("\033[1;33mTeste 16:\n\033[1;30mstr16 = |%s|\n\033[1;32mSuccess\033[1;0m\n\n", str16);
	}
	else
	{
		printf("\033[1;33mTeste 16:\n\033[1;30mstr16 = |%s|\nresult_or = |%d|\nresult_ft = |%d|\n\033[1;31mFailed\n\n", str16, result_or, result_ft);
	}

	char	*str17 = "++32";
	result_or = atoi(str17);
	result_ft = ft_atoi(str17);
	if(result_or == result_ft)
	{
		printf("\033[1;33mTeste 17:\n\033[1;30mstr17 = |%s|\n\033[1;32mSuccess\033[1;0m\n\n", str17);
	}
	else
	{
		printf("\033[1;33mTeste 17:\n\033[1;30mstr17 = |%s|\nresult_or = |%d|\nresult_ft = |%d|\n\033[1;31mFailed\n\n", str17, result_or, result_ft);
	}

	char	*str18 = "--32";
	result_or = atoi(str18);
	result_ft = ft_atoi(str18);
	if(result_or == result_ft)
	{
		printf("\033[1;33mTeste 18:\n\033[1;30mstr18 = |%s|\n\033[1;32mSuccess\033[1;0m\n\n", str18);
	}
	else
	{
		printf("\033[1;33mTeste 18:\n\033[1;30mstr18 = |%s|\nresult_or = |%d|\nresult_ft = |%d|\n\033[1;31mFailed\n\n", str18, result_or, result_ft);
	}

	char	*str19 = "---32";
	result_or = atoi(str19);
	result_ft = ft_atoi(str19);
	if(result_or == result_ft)
	{
		printf("\033[1;33mTeste 19:\n\033[1;30mstr19 = |%s|\n\033[1;32mSuccess\033[1;0m\n\n", str19);
	}
	else
	{
		printf("\033[1;33mTeste 19:\n\033[1;30mstr19 = |%s|\nresult_or = |%d|\nresult_ft = |%d|\n\033[1;31mFailed\n\n", str19, result_or, result_ft);
	}

	char	*str20 = "+++32";
	result_or = atoi(str20);
	result_ft = ft_atoi(str20);
	if(result_or == result_ft)
	{
		printf("\033[1;33mTeste 20:\n\033[1;30mstr20 = |%s|\n\033[1;32mSuccess\033[1;0m\n\n", str20);
	}
	else
	{
		printf("\033[1;33mTeste 20:\n\033[1;30mstr20 = |%s|\nresult_or = |%d|\nresult_ft = |%d|\n\033[1;31mFailed\n\n", str20, result_or, result_ft);
	}

	char	*str21 = "-+-32";
	result_or = atoi(str21);
	result_ft = ft_atoi(str21);
	if(result_or == result_ft)
	{
		printf("\033[1;33mTeste 21:\n\033[1;30mstr21 = |%s|\n\033[1;32mSuccess\033[1;0m\n\n", str21);
	}
	else
	{
		printf("\033[1;33mTeste 21:\n\033[1;30mstr21 = |%s|\nresult_or = |%d|\nresult_ft = |%d|\n\033[1;31mFailed\n\n", str21, result_or, result_ft);
	}

	char	*str22 = "*32";
	result_or = atoi(str22);
	result_ft = ft_atoi(str22);
	if(result_or == result_ft)
	{
		printf("\033[1;33mTeste 22:\n\033[1;30mstr22 = |%s|\n\033[1;32mSuccess\033[1;0m\n\n", str22);
	}
	else
	{
		printf("\033[1;33mTeste 22:\n\033[1;30mstr22 = |%s|\nresult_or = |%d|\nresult_ft = |%d|\n\033[1;31mFailed\n\n", str22, result_or, result_ft);
	}

	char	*str23 = "/32";
	result_or = atoi(str23);
	result_ft = ft_atoi(str23);
	if(result_or == result_ft)
	{
		printf("\033[1;33mTeste 23:\n\033[1;30mstr23 = |%s|\n\033[1;32mSuccess\033[1;0m\n\n", str23);
	}
	else
	{
		printf("\033[1;33mTeste 23:\n\033[1;30mstr23 = |%s|\nresult_or = |%d|\nresult_ft = |%d|\n\033[1;31mFailed\n\n", str23, result_or, result_ft);
	}

	char	*str24 = "003200";
	result_or = atoi(str24);
	result_ft = ft_atoi(str24);
	if(result_or == result_ft)
	{
		printf("\033[1;33mTeste 24:\n\033[1;30mstr24 = |%s|\n\033[1;32mSuccess\033[1;0m\n\n", str24);
	}
	else
	{
		printf("\033[1;33mTeste 24:\n\033[1;30mstr24 = |%s|\nresult_or = |%d|\nresult_ft = |%d|\n\033[1;31mFailed\n\n", str24, result_or, result_ft);
	}
}