/* ********************************************************************************************* */
/*                                                                                               */
/*   Project : libft/main-ft_isascii                    ::::::  :::::::   :::::::::::            */
/*                                                     +:: ::+ +:: ::+   +::::::::::+            */
/*   By: Matthieu Boegler                             +#:  +#::#+ :#+   +:#      #:+             */
/*      <https://github.com/maatthhiieeuu>           ###   ##:## ###   #::::::::#                */
/*                                                  ###    ###  ###   ###      ###               */
/*   Created: 2024/05/14  by m.boegler             ###         ###   ###########                 */
/*   Updated: 2024/05/14  by m.boegler            ###         ###   #########                    */
/*                                                                                               */
/* ********************************************************************************************* */

#include <ctype.h>
#include <stdio.h>

int ft_isascii(int character);

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
	char supAscii = 128;
	char moinAscii = -1;
	int or = 0;
	int ft = 0;

	ft = ft_isascii(null);
	or = isascii(null);
	if(ft == or)
		printf("\033[1;32mOK les valeurs de null sont égales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);
	else
		printf("\033[1;31mERROR les valeurs de null sont inégales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);

	ft = ft_isascii(unitSeparator);
	or = isascii(unitSeparator);
	if(ft == or)
		printf("\033[1;32mOK les valeurs de unitSeparator sont égales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);
	else
		printf("\033[1;31mERROR les valeurs de unitSeparator sont inégales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);

	ft = ft_isascii(space);
	or = isascii(space);
	if(ft == or)
		printf("\033[1;32mOK les valeurs space sont égales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);
	else
		printf("\033[1;31mERROR les valeurs space sont inégales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);

	ft = ft_isascii(slash);
	or = isascii(slash);
	if(ft == or)
		printf("\033[1;32mOK les valeurs de slash sont égales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);
	else
		printf("\033[1;31mERROR les valeurs de slash sont inégales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);

	ft = ft_isascii(zero);
	or = isascii(zero);
	if(ft == or)
		printf("\033[1;32mOK les valeurs de zero sont égales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);
	else
		printf("\033[1;31mERROR les valeurs de zero sont inégales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);

	ft = ft_isascii(cinque);
	or = isascii(cinque);
	if(ft == or)
		printf("\033[1;32mOK les valeurs de cinque sont égales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);
	else
		printf("\033[1;31mERROR les valeurs de cinque sont inégales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);

	ft = ft_isascii(neuf);
	or = isascii(neuf);
	if(ft == or)
		printf("\033[1;32mOK les valeurs de neuf sont égales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);
	else
		printf("\033[1;31mERROR les valeurs de neuf sont inégales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);

	ft = ft_isascii(doublePoint);
	or = isascii(doublePoint);
	if(ft == or)
		printf("\033[1;32mOK les valeurs de doublePoint sont égales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);
	else
		printf("\033[1;31mERROR les valeurs de doublePoint sont inégales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);

	ft = ft_isascii(interrogation);
	or = isascii(interrogation);
	if(ft == or)
		printf("\033[1;32mOK les valeurs de interrogation sont égales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);
	else
		printf("\033[1;31mERROR les valeurs de interrogation sont inégales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);

	ft = ft_isascii(arobase);
	or = isascii(arobase);
	if(ft == or)
		printf("\033[1;32mOK les valeurs de arobase sont égales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);
	else
		printf("\033[1;31mERROR les valeurs de arobase sont inégales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);

	ft = ft_isascii(A);
	or = isascii(A);
	if(ft == or)
		printf("\033[1;32mOK les valeurs de A sont égales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);
	else
		printf("\033[1;31mERROR les valeurs de A sont inégales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);

	ft = ft_isascii(O);
	or = isascii(O);
	if(ft == or)
		printf("\033[1;32mOK les valeurs de O sont égales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);
	else
		printf("\033[1;31mERROR les valeurs de O sont inégales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);

	ft = ft_isascii(Z);
	or = isascii(Z);
	if(ft == or)
		printf("\033[1;32mOK les valeurs de Z sont égales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);
	else
		printf("\033[1;31mERROR les valeurs de Z sont inégales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);

	ft = ft_isascii(tiret);
	or = isascii(tiret);
	if(ft == or)
		printf("\033[1;32mOK les valeurs de tiret sont égales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);
	else
		printf("\033[1;31mERROR les valeurs de tiret sont inégales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);

	ft = ft_isascii(apostrophe);
	or = isascii(apostrophe);
	if(ft == or)
		printf("\033[1;32mOK les valeurs de apostrophe sont égales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);
	else
		printf("\033[1;31mERROR les valeurs de apostrophe sont inégales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);

	ft = ft_isascii(a);
	or = isascii(a);
	if(ft == or)
		printf("\033[1;32mOK les valeurs de a sont égales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);
	else
		printf("\033[1;31mERROR les valeurs de a sont inégales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);

	ft = ft_isascii(o);
	or = isascii(o);
	if(ft == or)
		printf("\033[1;32mOK les valeurs de o sont égales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);
	else
		printf("\033[1;31mERROR les valeurs de o sont inégales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);

	ft = ft_isascii(z);
	or = isascii(z);
	if(ft == or)
		printf("\033[1;32mOK les valeurs de z sont égales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);
	else
		printf("\033[1;31mERROR les valeurs de z sont inégales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);

	ft = ft_isascii(accolade);
	or = isascii(accolade);
	if(ft == or)
		printf("\033[1;32mOK les valeurs de accolade sont égales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);
	else
		printf("\033[1;31mERROR les valeurs de accolade sont inégales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);

	ft = ft_isascii(delete);
	or = isascii(delete);
	if(ft == or)
		printf("\033[1;32mOK les valeurs de delete sont égales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);
	else
		printf("\033[1;31mERROR les valeurs de delete sont inégales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);

	ft = ft_isascii(supAscii);
	or = isascii(supAscii);
	if(ft == or)
		printf("\033[1;32mOK les valeurs de delete sont égales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);
	else
		printf("\033[1;31mERROR les valeurs de delete sont inégales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);
	
	ft = ft_isascii(moinAscii);
	or = isascii(moinAscii);
	if(ft == or)
		printf("\033[1;32mOK les valeurs de delete sont égales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);
	else
		printf("\033[1;31mERROR les valeurs de delete sont inégales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);


}