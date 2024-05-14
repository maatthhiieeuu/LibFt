/* ********************************************************************************************* */
/*                                                                                               */
/*   Project : libft/main-ft_strlen                     ::::::  :::::::   :::::::::::            */
/*                                                     +:: ::+ +:: ::+   +::::::::::+            */
/*   By: Matthieu Boegler                             +#:  +#::#+ :#+   +:#      #:+             */
/*      <https://github.com/maatthhiieeuu>           ###   ##:## ###   #::::::::#                */
/*                                                  ###    ###  ###   ###      ###               */
/*   Created: 2024/05/14  by m.boegler             ###         ###   ###########                 */
/*   Updated: 2024/05/14  by m.boegler            ###         ###   #########                    */
/*                                                                                               */
/* ********************************************************************************************* */

#include <stdio.h>
#include <string.h>

size_t ft_strlen(const char * string);

int main()
{
	char *string1 = "";
	char *string2 = "1";
	char *string3 = "Voici une phrase de 34 caractères.";
	char *string4 = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Phasellus ac nislnec est malesuada malesuada. Nulla facilisi. Donec pulvinar diam nec odio volutpat, in eleifend lectus pharetra. Morbi nec turpis at velit consequat lacinia. Curabitur nec arcu eu libero porttitor convallis. Aliquam erat volutpat. Proin a sapien vel turpis pharetra scelerisque. Nam luctus, nunc a pellentesque dignissim, libero magna venenatis mauris, in euismod libero nunc nec metus. Integer ac suscipit sapien, nec vehicula libero. Fusce tristique dolor eget orci faucibus varius. Vestibulum ante ipsum primis in faucibus orci luctus et ultrices posuere cubilia Curae; Integer non leo vel risus faucibus egestas ac at velit. Nulla facilisi. Curabitur pretium sollicitudin nisl non congue. Suspendisse potenti. In tincidunt tellus ut nulla malesuada, ac scelerisque tortor viverra. Nam vel quam ligula.Fusce sed lectus non elit dignissim gravida. Pellentesque id odio eros. Quisque et fermentum nunc. Mauris ac ligula vel sapien ultricies malesuada vel eu nibh. Vivamus et tortor vitae est sollicitudin luctus. Duis pretium fringilla dolor, ac sodales nulla gravida at. Cras in est non nulla laoreet consectetur. Nulla facilisi. Nunc viverra massa non lacus tincidunt, eget facilisis urna placerat. Vivamus fermentum lacinia nulla, nec consectetur est fermentum vel. Maecenas suscipit, erat quis convallis tempor, velit mi pretium erat, ut consequat libero magna nec arcu. Duis dictum, velit ut tincidunt egestas, urna nulla congue felis, ut dapibus magna risus non nunc. Aliquam erat volutpat. Integer fermentum bibendum libero, eget faucibus est malesuada nec.Mauris ac ultricies libero, nec fermentum leo. Ut quis quam non mi ultrices sodales. Integer et acus eget velit interdum convallis vel non lacus. Suspendisse viverra dapibus tortor, nec tristique odio fringilla sit amet. Fusce sit amet libero felis. Donec id nulla consectetur, viverra libero in, varius odio. Aliquam lacinia lacus sed turpis malesuada, ut blandit justo cursus. Ut id varius dolor. Vivamus id gravida nunc. Aliquam at dolor odio. Fusce bibendum odio non libero fringilla viverra. Integer elementum, sapien sed pretium tincidunt, tortor mauris malesuada magna, et luctus est justo sed nulla. Cras dignissim, mauris a ullamcorper facilisis, turpis odio laoreet ligula, a egestas nunc lacus nec arcu.Curabitur in sem libero. Nullam scelerisque risus eget dolor cursus, sit amet hendrerit erat ultrces. Praesent quis enim eu justo vestibulum facilisis. Aliquam scelerisque, eros et consequat hendrerit, turpis orci tincidunt risus, at fringilla est augue sit amet felis. Fusce suscipit elit vitae ligula facilisis ultricies. Sed euismod, nunc id ultricies tincidunt, erat felis efficitur nunc, ac faucibus lectus libero non ex. Vestibulum ante ipsum primis in faucibus orci luctus et ultrices posuere cubilia Curae; Nulla id ligula eget turpis viverra commodo. Etiam in dictum sapien. Phasellus ac dolor ut orci commodo dignissim. Curabitur nec libero nec magna vehicula viverra. Pellentesque pretium lectus at nibh sagittis, non tincidunt enim pharetra. Vestibulum ac velit a loremfacilisis suscipit. Quisque pharetra libero eget nisi venenatis vehicula. Aenean et gravida velit. Curabitur et est at erat pulvinar consequat non vel magna.Proin sit amet libero vitae lacus pulvinar varius non at turpis. Sed tempor urna at augue malesuada, non fermentum velit varius. Sed dignissim purus nec varius venenatis. Cras at dignissim risus. Viv amus sit amet nisl et elit tristique tempus. Nulla facilisi. In scelerisque scelerisque sapien. Nu lla non dolor sit amet elit ultricies bibendum. Integer vitae magna sem. In congue felis non vestibulum luctus. Morbi ultricies tortor at metus congue, a auctor sapien feugiat. Quisque nec risus turpis. Nunc vehicula luctus purus vel bibendum. Suspendisse potenti.Praesent consectetur ipsum vel vestibulum tristique. Duis in libero non erat sodales tincidunt. Suspendisse fringilla tortor et turpis dictum, non tincidunt dolor pellentesque. Curabitur malesuada, ligula sed blandit tincidunt, ligula justo aliquet metus, non scelerisque urna eros et erat. Vestibulum ante ipsum primis in faucibus orci luctus et ultrices posuere cubilia Curae; Nam sit amet consectetur nisi, nec eleifend lorem. Fusce id dui id ipsum varius consequat non ac magna. Nam condimentum quam sit amet arcu ultrices, at bibendum orci fringilla. Pellentesque tempor velit ut elit consequat, quis lobortis leo condimentum. Integer convallis odio id sem fermentum pharetra. Aliquam erat volutpat. Nullam laoreet efficitur metus, nec bibendum arcu pharetra at. In vehicula vehicula ipsum sit amet varius. Mauris consectetur magna eu nunc finibus, a dictum risus suscipit. Phasellus tincidunt, magna nec tempus sodales, dui libero posuere leo, et malesuada leo ex sit amet risus. Suspendisse sagittis purus et ipsum facilisis, non eleifend libero malesuada.";

	size_t ft = 0;
	size_t or = 0;

	ft = ft_strlen(string1);
	or = strlen(string1);
	if(ft == or)
		printf("Taille de la chaine : 0 caractères.\n\033[1;32mft = \033[0m%ld\n\033[1;32mor = \033[0m%ld\n", ft, or);
	else
		printf("Taille de la chaine : 0 caractères.\n\033[1;31mft = \033[0m%ld\n\033[1;31mor = \033[0m%ld\n", ft, or);
	ft = 0;
	or = 0;

	ft = ft_strlen(string2);
	or = strlen(string2);
	if(ft == or)
		printf("Taille de la chaine : 1 caractères.\n\033[1;32mft = \033[0m%ld\n\033[1;32mor = \033[0m%ld\n", ft, or);
	else
		printf("Taille de la chaine : 1 caractères.\n\033[1;31mft = \033[0m%ld\n\033[1;31mor = \033[0m%ld\n", ft, or);
	ft = 0;
	or = 0;

	ft = ft_strlen(string3);
	or = strlen(string3);
	if(ft == or)
		printf("Taille de la chaine : 34 caractères.\n\033[1;32mft = \033[0m%ld\n\033[1;32mor = \033[0m%ld\n", ft, or);
	else
		printf("Taille de la chaine : 34 caractères.\n\033[1;31mft = \033[0m%ld\n\033[1;31mor = \033[0m%ld\n", ft, or);
	ft = 0;
	or = 0;

	ft = ft_strlen(string4);
	or = strlen(string4);
	if(ft == or)
		printf("Taille de la chaine : 3293 caractères.\n\033[1;32mft = \033[0m%ld\n\033[1;32mor = \033[0m%ld\n", ft, or);
	else
		printf("Taille de la chaine : 3293 caractères.\n\033[1;31mft = \033[0m%ld\n\033[1;31mor = \033[0m%ld\n", ft, or);

}