/* ********************************************************************************************* */
/*                                                                                               */
/*   Project : libft/main-ft_strnstr.c                  ::::::  ::::::    :::::::::              */
/*                                                     +:: ::+ +:: ::+   +:::::::::+             */
/*   By: Matthieu Boegler                             +#:  +#::#+ :#+   +:#      #:+             */
/*      <https://github.com/maatthhiieeuu>           ###   ##:## ###   #::::::::#                */
/*                                                  ###    ###  ###   ###      ###               */
/*   Created: 2024/06/01  by m.boegler             ###         ###   ###########                 */
/*   Updated: 2024/06/01  by m.boegler            ###         ###   #########                    */
/*                                                                                               */
/* ********************************************************************************************* */

#include <stdio.h>
#include <bsd/string.h>
#include <assert.h>

char 	*ft_strnstr(const char *big, const char *little, size_t len);

void test_strnstr(const char *big, const char *little, size_t len)
{
     printf("\033[1;34mTesting: \"%s\" in \"%s\" with length %zu\033[0m\n", little, big, len);
    
    char *result_or = strnstr(big, little, len);
    char *result_ft = ft_strnstr(big, little, len);

    if (result_or == NULL || result_ft == NULL)
    {
        if (result_or == result_ft)
        {
            printf("\033[1;32mTest passed:\033[0m \"%s\" in \"%s\" with length %zu\n", little, big, len);
            printf("Original: \033[1;32m%p\n\033[0m", result_or);
            printf("Custom:   \033[1;32m%p\n\033[0m", result_ft);
        }
        else
        {
            printf("\033[1;31mTest failed:\033[0m \"%s\" in \"%s\" with length %zu\n", little, big, len);
            printf("Original: \033[1;31m%p\n\033[0m", result_or);
            printf("Custom:   \033[1;31m%p\n\033[0m", result_ft);
        }
    }
    else
    {
        if (strcmp(result_or, result_ft) == 0)
        {
            printf("\033[1;32mTest passed:\033[0m \"%s\" in \"%s\" with length %zu\n", little, big, len);
            printf("Original: \033[1;32m%p |%s|\n\033[0m", result_or, result_or);
            printf("Custom:   \033[1;32m%p |%s|\n\033[0m", result_ft, result_ft);
        }
        else
        {
            printf("\033[1;31mTest failed:\033[0m \"%s\" in \"%s\" with length %zu\n", little, big, len);
            printf("Original: \033[1;31m%p |%s|\n\033[0m", result_or, result_or);
            printf("Custom:   \033[1;31m%p |%s|\n\033[0m", result_ft, result_ft);
        }
    }

    printf("\n");
}

int	main()
{
	test_strnstr("La bourgade est à une lieux mais nos chaussures seront encore en etat lorsque nous seront arrivés", 
                 "mais nos chaussures seront encore en etat", 97);

    test_strnstr("La bourgade est à une lieux mais nos chaussures seront encore en etat lorsque nous seront arrivés", 
                 "La bourgade est à une ", 97);

    test_strnstr("La bourgade est à une lieux mais nos chaussures seront encore en etat lorsque nous seront arrivés", 
                 "seront encore en etat", 97);

    test_strnstr("La bourgade est à une lieux mais nos chaussures seront encore en etat lorsque nous seront arrivés", 
                 "nous seront arrivés", 97);

    test_strnstr("La bourgade est à une lieux mais nos chaussures seront encore en etat lorsque nous seront arrivés", 
                 "pas dans la chaîne", 97);

    test_strnstr("petit test", "test", 4);
    test_strnstr("petit test", "test", 9);
    test_strnstr("petit test", "", 4);
    test_strnstr("", "test", 4);


	char	*big_str1 = "La bourgade est à une lieux mais nos chaussures seront encore en etat lorsque nous seront arrivés";
	char	*little_str1 = "mais nos chaussures seront encore en etat";
	char	*result_or = NULL;
	char	*result_ft = NULL;

	result_or = strnstr(big_str1, little_str1, 97);
	result_ft = ft_strnstr(big_str1, little_str1, 97);


	if(result_or && result_ft && result_or == result_ft)
	{
		printf("\033[1;32m\nSuccess\n\033[1;0m");
		printf("or = %p\n|%s|\n", result_or, result_or);
		printf("ft = %p\n|%s|\n", result_ft, result_ft);
	}	
	else if(!result_or && !result_ft)
	{
		printf("\033[1;32m\nSuccess\n\033[1;0m");
		printf("or = %p\n", result_or);
		printf("ft = %p\n", result_ft);
	}else
		printf("\033[1;31m\nFailed\n\033[1;0m");


	char	*big_str2 = "La bourgade est à une lieux mais nos chaussures seront encore en etat lorsque nous seront arrivés";
	char	*little_str2 = "La bourgade est à une ";
	result_or = NULL;
	result_ft = NULL;

	result_or = strnstr(big_str2, little_str2, 97);
	result_ft = ft_strnstr(big_str2, little_str2, 97);

	if(result_or && result_ft && result_or == result_ft)
	{
		printf("\033[1;32m\nSuccess\n\033[1;0m");
		printf("or = %p\n|%s|\n", result_or, result_or);
		printf("ft = %p\n|%s|\n", result_ft, result_ft);
	}	
	else if(!result_or && !result_ft)
	{
		printf("\033[1;32m\nSuccess\n\033[1;0m");
		printf("or = %p\n", result_or);
		printf("ft = %p\n", result_ft);
	}else
		printf("\033[1;31m\nFailed\n\033[1;0m");


	char	*big_str3 = "La bourgade est à une lieux mais nos chaussures seront encore en etat lorsque nous seront arrivés";
	char	*little_str3 = "seront encore en etat";
	result_or = NULL;
	result_ft = NULL;

	result_or = strnstr(big_str3, little_str3, 97);
	result_ft = ft_strnstr(big_str3, little_str3, 97);

	if(result_or && result_ft && result_or == result_ft)
	{
		printf("\033[1;32m\nSuccess\n\033[1;0m");
		printf("or = %p\n|%s|\n", result_or, result_or);
		printf("ft = %p\n|%s|\n", result_ft, result_ft);
	}	
	else if(!result_or || !result_ft)
	{
		if(result_or == result_ft)
			printf("\033[1;32m\nSuccess\n\033[1;0m");
		else if(result_or != result_ft)
		{
			printf("\033[1;31m\nFailed\n\033[1;0m");
			printf("\nor = %p", result_or);
			printf("\nft = %p\n", result_ft);
			if(result_or && result_ft)
			{
				printf("or = %p\n|%s|\n", result_or, result_or);
				printf("ft = %p\n|%s|\n", result_ft, result_ft);
			}

		}
	}
	else
		printf("\033[1;31m\nFailed\n\033[1;0m");


	char	*big_str4 = "La bourgade est à une lieux mais nos chaussures seront encore en etat lorsque nous seront arrivés";
	char	*little_str4 = "nous seront arrivés";
	result_or = NULL;
	result_ft = NULL;

	result_or = strnstr(big_str4, little_str4, 97);
	result_ft = ft_strnstr(big_str4, little_str4, 97);

	if(result_or && result_ft && result_or == result_ft)
	{
		printf("\033[1;32m\nSuccess\n\033[1;0m");
		printf("or = %p\n|%s|\n", result_or, result_or);
		printf("ft = %p\n|%s|\n", result_ft, result_ft);
	}	
	else if(!result_or && !result_ft)
	{
		printf("\033[1;32m\nSuccess\n\033[1;0m");
		printf("or = %p\n", result_or);
		printf("ft = %p\n", result_ft);
	}else
	{
		printf("\033[1;31m\nFailed\n\033[1;0m");
		printf("or = %p\n", result_or);
		printf("ft = %p\n|%s|\n", result_ft, result_ft);
	}


	char	*big_str5 = "ant anti anticons anticol anticonstitu anticonstitutioo anticonstitutionnel anticonstitutionnellem anticonstitutionnellemens anticonstitutionnellement";
	char	*little_str5 = "anticonstitutionnellement";
	result_or = NULL;
	result_ft = NULL;

	result_or = strnstr(big_str5, little_str5, 149);
	result_ft = ft_strnstr(big_str5, little_str5, 149);

	if(result_or && result_ft && result_or == result_ft)
	{
		printf("\033[1;32m\nSuccess 1\n\033[1;0m");
		printf("or = %p\n|%s|\n", result_or, result_or);
		printf("ft = %p\n|%s|\n", result_ft, result_ft);
	}	
	else if(!result_or || !result_ft)
	{
		if(result_or == result_ft)
			{
				printf("\033[1;32m\nSuccess 2\n\033[1;0m");
				printf("or = %p", result_or);
				printf("\nft = %p\n", result_ft);
			}
		else if(result_or != result_ft)
		{
			printf("\033[1;31m\nFailed 1\n\033[1;0m");
			printf("\nor = %p", result_or);
			printf("\nft = %p\n", result_ft);
			printf("Différence result_ft - big = %ld", result_ft - big_str5);
			if(result_or && result_ft)
			{
				printf("or = %p\n|%s|\n", result_or, result_or);
				printf("ft = %p\n|%s|\n", result_ft, result_ft);
			}

		}
	}
	else
		printf("\033[1;31m\nFailed 2\n\033[1;0m");
    return 0;
}
