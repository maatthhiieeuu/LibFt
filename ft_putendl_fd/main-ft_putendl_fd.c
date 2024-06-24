/* ********************************************************************************************* */
/*                                                                                               */
/*   Project : libft/main-ft_putendl_fd.c                     ::::::  ::::::    :::::::::              */
/*                                                     +:: ::+ +:: ::+   +:::::::::+             */
/*   By: Matthieu Boegler                             +#:  +#::#+ :#+   +:#      #:+             */
/*      <https://github.com/maatthhiieeuu>           ###   ##:## ###   #::::::::#                */
/*                                                  ###    ###  ###   ###      ###               */
/*   Created: 2024/06/24  by m.boegler             ###         ###   ###########                 */
/*   Updated: 2024/06/24  by m.boegler            ###         ###   #########                    */
/*                                                                                               */
/* ********************************************************************************************* */

#include <unistd.h>
#include <stdio.h>
#include <fcntl.h> // for open() function
#include <errno.h> // for errno variable

void ft_putendl_fd(char *s, int fd);

// Fonction main pour tester ft_putendl_fd
int main()
{
    int fd;

    // Ouvrir un fichier pour écrire
    fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd == -1)
    {
        perror("open");
        return 1;
    }

    // Tester ft_putendl_fd avec différentes entrées
    ft_putendl_fd("Hello, world!", fd);
    ft_putendl_fd("Testing ft_putendl_fd function", fd);

    // Fermer le fichier
    if (close(fd) == -1)
    {
        perror("close");
        return 1;
    }

    return 0;
}
