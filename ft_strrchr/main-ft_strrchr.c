/* ********************************************************************************************* */
/*                                                                                               */
/*   Project : libft/main-ft_strrchr.c                  ::::::  :::::::   :::::::::::            */
/*                                                     +:: ::+ +:: ::+   +::::::::::+            */
/*   By: Matthieu Boegler                             +#:  +#::#+ :#+   +:#      #:+             */
/*      <https://github.com/maatthhiieeuu>           ###   ##:## ###   #::::::::#                */
/*                                                  ###    ###  ###   ###      ###               */
/*   Created: 2024/05/30  by m.boegler             ###         ###   ###########                 */
/*   Updated: 2024/05/30  by m.boegler            ###         ###   #########                    */
/*                                                                                               */
/* ********************************************************************************************* */

#include <string.h>
#include <stdio.h>
#include <stddef.h>

char	*ft_strrchr(const char *string, int searched_char);

int	main()
{
	char	*str1_ft = "Mexico";
	char	tst1_ft = 'x';
	char	*result1_ft = NULL;
	char	*str1_or = "Mexico";
	char	tst1_or = 'x';
	char	*result1_or = NULL;
	result1_or = strrchr(str1_or, tst1_or);
	result1_ft = ft_strrchr(str1_ft, tst1_ft);
	if(result1_or == result1_ft)
	{
		printf("\033[1;32m\nft et or sont IDENTIQUE !\n");
	}
	else
		printf("\033[1;31m\nft et or sont DIFFERENT !\n");

	char	*str2_ft = "Cuba";
	char	tst2_ft = 'C';
	char	*result2_ft = NULL;
	char	*str2_or = "Cuba";
	char	tst2_or = 'C';
	char	*result2_or = NULL;
	result2_or = strrchr(str2_or, tst2_or);
	result2_ft = ft_strrchr(str2_ft, tst2_ft);
	if(result2_or == result2_ft)
	{
		printf("\033[1;32m\nft et or sont IDENTIQUE !\n");
	}
	else
		printf("\033[1;31m\nft et or sont DIFFERENT !\n");

	char	*str3_ft = "indiana";
	char	tst3_ft = 'a';
	char	*result3_ft = NULL;
	char	*str3_or = "indiana";
	char	tst3_or = 'a';
	char	*result3_or = NULL;
	result3_or = strrchr(str3_or, tst3_or);
	result3_ft = ft_strrchr(str3_ft, tst3_ft);
	if(result3_or == result3_ft)
	{
		printf("\033[1;32m\nft et or sont IDENTIQUE !\n");
	}
	else
		printf("\033[1;31m\nft et or sont DIFFERENT !\n");

	char	*str4_ft = "";
	char	tst4_ft = 'g';
	char	*result4_ft = NULL;	
	char	*str4_or = "";
	char	tst4_or = 'g';
	char	*result4_or = NULL;
	result4_or = strrchr(str4_or, tst4_or);	
	result4_ft = ft_strrchr(str4_ft, tst4_ft);
	if(result4_or == result4_ft)
	{
		printf("\033[1;32m\nft et or sont IDENTIQUE !\n");
	}
	else
		printf("\033[1;31m\nft et or sont DIFFERENT !\n");
	


}