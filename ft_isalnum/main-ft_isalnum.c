/* ********************************************************************************************* */
/*                                                                                               */
/*   Project : libft/main-ft_isalnum                    ::::::  ::::::    :::::::::              */
/*                                                     +:: ::+ +:: ::+   +:::::::::+             */
/*   By: Matthieu Boegler                             +#:  +#::#+ :#+   +:#      #:+             */
/*      <https://github.com/maatthhiieeuu>           ###   ##:## ###   #::::::::#                */
/*                                                  ###    ###  ###   ###      ###               */
/*   Created: 2024/05/14  by m.boegler             ###         ###   ###########                 */
/*   Updated: 2024/05/14  by m.boegler            ###         ###   #########                    */
/*                                                                                               */
/* ********************************************************************************************* */

#include <ctype.h>
#include <stdio.h>

int ft_isalnum(int character);

int main()
{
	char null = 0;
	char unitSeparator = 31;
	char space = 32;
	char slash = 47;
	char zero = 48;
	char cinque = 53;
	char neuf = 57;
	char doublePoint = 58;
	char interrogation = 63;
	char arobase = 64;
	char A = 65;
	char O = 79;
	char Z = 90;
	char tiret = 95;
	char apostrophe = 96;
	char a = 97;
	char o = 111;
	char z = 122;
	char accolade = 123;
	char delete = 127;
	int or = 0;
	int ft = 0;

	ft = ft_isalnum(null);
	or = isalnum(null);
	if(ft == or)
		printf("\033[1;32mOK les valeurs de null sont égales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);
	else
		printf("\033[1;31mERROR les valeurs de null sont inégales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);

	ft = ft_isalnum(unitSeparator);
	or = isalnum(unitSeparator);
	if(ft == or)
		printf("\033[1;32mOK les valeurs de unitSeparator sont égales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);
	else
		printf("\033[1;31mERROR les valeurs de unitSeparator sont inégales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);

	ft = ft_isalnum(space);
	or = isalnum(space);
	if(ft == or)
		printf("\033[1;32mOK les valeurs space sont égales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);
	else
		printf("\033[1;31mERROR les valeurs space sont inégales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);

	ft = ft_isalnum(slash);
	or = isalnum(slash);
	if(ft == or)
		printf("\033[1;32mOK les valeurs de slash sont égales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);
	else
		printf("\033[1;31mERROR les valeurs de slash sont inégales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);

	ft = ft_isalnum(zero);
	or = isalnum(zero);
	if(ft == or)
		printf("\033[1;32mOK les valeurs de zero sont égales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);
	else
		printf("\033[1;31mERROR les valeurs de zero sont inégales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);

	ft = ft_isalnum(cinque);
	or = isalnum(cinque);
	if(ft == or)
		printf("\033[1;32mOK les valeurs de cinque sont égales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);
	else
		printf("\033[1;31mERROR les valeurs de cinque sont inégales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);

	ft = ft_isalnum(neuf);
	or = isalnum(neuf);
	if(ft == or)
		printf("\033[1;32mOK les valeurs de neuf sont égales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);
	else
		printf("\033[1;31mERROR les valeurs de neuf sont inégales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);

	ft = ft_isalnum(doublePoint);
	or = isalnum(doublePoint);
	if(ft == or)
		printf("\033[1;32mOK les valeurs de doublePoint sont égales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);
	else
		printf("\033[1;31mERROR les valeurs de doublePoint sont inégales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);

	ft = ft_isalnum(interrogation);
	or = isalnum(interrogation);
	if(ft == or)
		printf("\033[1;32mOK les valeurs de interrogation sont égales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);
	else
		printf("\033[1;31mERROR les valeurs de interrogation sont inégales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);

	ft = ft_isalnum(arobase);
	or = isalnum(arobase);
	if(ft == or)
		printf("\033[1;32mOK les valeurs de arobase sont égales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);
	else
		printf("\033[1;31mERROR les valeurs de arobase sont inégales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);

	ft = ft_isalnum(A);
	or = isalnum(A);
	if(ft == or)
		printf("\033[1;32mOK les valeurs de A sont égales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);
	else
		printf("\033[1;31mERROR les valeurs de A sont inégales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);

	ft = ft_isalnum(O);
	or = isalnum(O);
	if(ft == or)
		printf("\033[1;32mOK les valeurs de O sont égales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);
	else
		printf("\033[1;31mERROR les valeurs de O sont inégales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);

	ft = ft_isalnum(Z);
	or = isalnum(Z);
	if(ft == or)
		printf("\033[1;32mOK les valeurs de Z sont égales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);
	else
		printf("\033[1;31mERROR les valeurs de Z sont inégales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);

	ft = ft_isalnum(tiret);
	or = isalnum(tiret);
	if(ft == or)
		printf("\033[1;32mOK les valeurs de tiret sont égales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);
	else
		printf("\033[1;31mERROR les valeurs de tiret sont inégales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);

	ft = ft_isalnum(apostrophe);
	or = isalnum(apostrophe);
	if(ft == or)
		printf("\033[1;32mOK les valeurs de apostrophe sont égales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);
	else
		printf("\033[1;31mERROR les valeurs de apostrophe sont inégales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);

	ft = ft_isalnum(a);
	or = isalnum(a);
	if(ft == or)
		printf("\033[1;32mOK les valeurs de a sont égales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);
	else
		printf("\033[1;31mERROR les valeurs de a sont inégales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);

	ft = ft_isalnum(o);
	or = isalnum(o);
	if(ft == or)
		printf("\033[1;32mOK les valeurs de o sont égales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);
	else
		printf("\033[1;31mERROR les valeurs de o sont inégales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);

	ft = ft_isalnum(z);
	or = isalnum(z);
	if(ft == or)
		printf("\033[1;32mOK les valeurs de z sont égales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);
	else
		printf("\033[1;31mERROR les valeurs de z sont inégales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);

	ft = ft_isalnum(accolade);
	or = isalnum(accolade);
	if(ft == or)
		printf("\033[1;32mOK les valeurs de accolade sont égales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);
	else
		printf("\033[1;31mERROR les valeurs de accolade sont inégales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);

	ft = ft_isalnum(delete);
	or = isalnum(delete);
	if(ft == or)
		printf("\033[1;32mOK les valeurs de delete sont égales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);
	else
		printf("\033[1;31mERROR les valeurs de delete sont inégales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);

}