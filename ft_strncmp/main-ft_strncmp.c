/* ********************************************************************************************* */
/*                                                                                               */
/*   Project : libft/main-ft_strncmp.c                  ::::::  ::::::    :::::::::              */
/*                                                     +:: ::+ +:: ::+   +:::::::::+             */
/*   By: Matthieu Boegler                             +#:  +#::#+ :#+   +:#      #:+             */
/*      <https://github.com/maatthhiieeuu>           ###   ##:## ###   #::::::::#                */
/*                                                  ###    ###  ###   ###      ###               */
/*   Created: 2024/05/30  by m.boegler             ###         ###   ###########                 */
/*   Updated: 2024/05/30  by m.boegler            ###         ###   #########                    */
/*                                                                                               */
/* ********************************************************************************************* */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *first, const char *second, size_t length);

int	main()
{
	char	*f1_or = "La peuite fleur bleu";
	char	*s1_or = "La peuite fleur bleu";
	char	*f1_ft = "La peuite fleur bleu";
	char	*s1_ft = "La peuite fleur bleu";
	int 	result1_or = 0;
	int 	result1_ft = 0;

	result1_or = strncmp(f1_or, s1_or, 0);
	result1_ft = strncmp(f1_ft, s1_ft, 0);
	if(result1_or == result1_ft)
		printf("\033[1;32m\nSuccess\n\033[1;0m");
	else
		printf("\033[1;31m\nfailed\n\033[1;0m");




	char	*f2_or = "Ma choupette est chouette";
	char	*s2_or = "ma choupette est chouette";
	char	*f2_ft = "Ma choupette est chouette";
	char	*s2_ft = "ma choupette est chouette";
	int 	result2_or = 0;
	int 	result2_ft = 0;

	result2_or = strncmp(f2_or, s2_or, 0);
	result2_ft = strncmp(f2_ft, s2_ft, 0);
	if(result2_or == result2_ft)
		printf("\033[1;32m\nSuccess\n\033[1;0m");
	else
		printf("\033[1;31m\nfailed\n\033[1;0m");

	char	*f3_or = "";
	char	*s3_or = "";
	char	*f3_ft = "";
	char	*s3_ft = "";
	int 	result3_or = 0;
	int 	result3_ft = 0;

	result3_or = strncmp(f3_or, s3_or, 0);
	result3_ft = strncmp(f3_ft, s3_ft, 0);
	if(result3_or == result3_ft)
		printf("\033[1;32m\nSuccess\n\033[1;0m");
	else
		printf("\033[1;31m\nfailed\n\033[1;0m");



}