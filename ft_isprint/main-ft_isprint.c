/* ********************************************************************************************* */
/*                                                                                               */
/*   Project : libft/main-ft_isprint                    ::::::  :::::::   :::::::::::            */
/*                                                     +:: ::+ +:: ::+   +::::::::::+            */
/*   By: Matthieu Boegler                             +#:  +#::#+ :#+   +:#      #:+             */
/*      <https://github.com/maatthhiieeuu>           ###   ##:## ###   #::::::::#                */
/*                                                  ###    ###  ###   ###      ###               */
/*   Created: 2024/05/14  by m.boegler             ###         ###   ###########                 */
/*   Updated: 2024/05/14  by m.boegler            ###         ###   #########                    */
/*                                                                                               */
/* ********************************************************************************************* */

#include <stdio.h>
#include <ctype.h>

int	ft_isprint(int character);

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

	ft = ft_isprint(null);
	or = isprint(null);
	if(ft == or)
		printf("\033[1;32mOK les valeurs de null sont égales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);
	else
		printf("\033[1;31mERROR les valeurs de null sont inégales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);

	ft = ft_isprint(unitSeparator);
	or = isprint(unitSeparator);
	if(ft == or)
		printf("\033[1;32mOK les valeurs de unitSeparator sont égales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);
	else
		printf("\033[1;31mERROR les valeurs de unitSeparator sont inégales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);

	ft = ft_isprint(space);
	or = isprint(space);
	if(ft == or)
		printf("\033[1;32mOK les valeurs space sont égales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);
	else
		printf("\033[1;31mERROR les valeurs space sont inégales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);

	ft = ft_isprint(slash);
	or = isprint(slash);
	if(ft == or)
		printf("\033[1;32mOK les valeurs de slash sont égales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);
	else
		printf("\033[1;31mERROR les valeurs de slash sont inégales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);

	ft = ft_isprint(zero);
	or = isprint(zero);
	if(ft == or)
		printf("\033[1;32mOK les valeurs de zero sont égales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);
	else
		printf("\033[1;31mERROR les valeurs de zero sont inégales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);

	ft = ft_isprint(cinque);
	or = isprint(cinque);
	if(ft == or)
		printf("\033[1;32mOK les valeurs de cinque sont égales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);
	else
		printf("\033[1;31mERROR les valeurs de cinque sont inégales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);

	ft = ft_isprint(neuf);
	or = isprint(neuf);
	if(ft == or)
		printf("\033[1;32mOK les valeurs de neuf sont égales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);
	else
		printf("\033[1;31mERROR les valeurs de neuf sont inégales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);

	ft = ft_isprint(doublePoint);
	or = isprint(doublePoint);
	if(ft == or)
		printf("\033[1;32mOK les valeurs de doublePoint sont égales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);
	else
		printf("\033[1;31mERROR les valeurs de doublePoint sont inégales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);

	ft = ft_isprint(interrogation);
	or = isprint(interrogation);
	if(ft == or)
		printf("\033[1;32mOK les valeurs de interrogation sont égales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);
	else
		printf("\033[1;31mERROR les valeurs de interrogation sont inégales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);

	ft = ft_isprint(arobase);
	or = isprint(arobase);
	if(ft == or)
		printf("\033[1;32mOK les valeurs de arobase sont égales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);
	else
		printf("\033[1;31mERROR les valeurs de arobase sont inégales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);

	ft = ft_isprint(A);
	or = isprint(A);
	if(ft == or)
		printf("\033[1;32mOK les valeurs de A sont égales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);
	else
		printf("\033[1;31mERROR les valeurs de A sont inégales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);

	ft = ft_isprint(O);
	or = isprint(O);
	if(ft == or)
		printf("\033[1;32mOK les valeurs de O sont égales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);
	else
		printf("\033[1;31mERROR les valeurs de O sont inégales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);

	ft = ft_isprint(Z);
	or = isprint(Z);
	if(ft == or)
		printf("\033[1;32mOK les valeurs de Z sont égales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);
	else
		printf("\033[1;31mERROR les valeurs de Z sont inégales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);

	ft = ft_isprint(tiret);
	or = isprint(tiret);
	if(ft == or)
		printf("\033[1;32mOK les valeurs de tiret sont égales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);
	else
		printf("\033[1;31mERROR les valeurs de tiret sont inégales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);

	ft = ft_isprint(apostrophe);
	or = isprint(apostrophe);
	if(ft == or)
		printf("\033[1;32mOK les valeurs de apostrophe sont égales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);
	else
		printf("\033[1;31mERROR les valeurs de apostrophe sont inégales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);

	ft = ft_isprint(a);
	or = isprint(a);
	if(ft == or)
		printf("\033[1;32mOK les valeurs de a sont égales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);
	else
		printf("\033[1;31mERROR les valeurs de a sont inégales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);

	ft = ft_isprint(o);
	or = isprint(o);
	if(ft == or)
		printf("\033[1;32mOK les valeurs de o sont égales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);
	else
		printf("\033[1;31mERROR les valeurs de o sont inégales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);

	ft = ft_isprint(z);
	or = isprint(z);
	if(ft == or)
		printf("\033[1;32mOK les valeurs de z sont égales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);
	else
		printf("\033[1;31mERROR les valeurs de z sont inégales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);

	ft = ft_isprint(accolade);
	or = isprint(accolade);
	if(ft == or)
		printf("\033[1;32mOK les valeurs de accolade sont égales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);
	else
		printf("\033[1;31mERROR les valeurs de accolade sont inégales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);

	ft = ft_isprint(delete);
	or = isprint(delete);
	if(ft == or)
		printf("\033[1;32mOK les valeurs de delete sont égales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);
	else
		printf("\033[1;31mERROR les valeurs de delete sont inégales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);

	ft = ft_isprint(supAscii);
	or = isprint(supAscii);
	if(ft == or)
		printf("\033[1;32mOK les valeurs de supAscii sont égales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);
	else
		printf("\033[1;31mERROR les valeurs de supAscii sont inégales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);
	
	ft = ft_isprint(moinAscii);
	or = isprint(moinAscii);
	if(ft == or)
		printf("\033[1;32mOK les valeurs de moinAscii sont égales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);
	else
		printf("\033[1;31mERROR les valeurs de moinAscii sont inégales :\nft = |%d|.\nor = |%d|\033[0m\n\n", ft, or);


}