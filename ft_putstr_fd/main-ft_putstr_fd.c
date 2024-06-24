/* ********************************************************************************************* */
/*                                                                                               */
/*   Project : libft/main-ft_putstr_fd.c                ::::::  ::::::    :::::::::              */
/*                                                     +:: ::+ +:: ::+   +:::::::::+             */
/*   By: Matthieu Boegler                             +#:  +#::#+ :#+   +:#      #:+             */
/*      <https://github.com/maatthhiieeuu>           ###   ##:## ###   #::::::::#                */
/*                                                  ###    ###  ###   ###      ###               */
/*   Created: 2024/06/24  by m.boegler             ###         ###   ###########                 */
/*   Updated: 2024/06/24  by m.boegler            ###         ###   #########                    */
/*                                                                                               */
/* ********************************************************************************************* */

//#include "libft.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void ft_putstr_fd(char *s, int fd);

int main() 
{
    const char *filename = "testfile.txt";

    // Ouvrir le fichier en mode écriture, le créer s'il n'existe pas
    int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
    if (fd == -1)
    {
        perror("open");
        exit(EXIT_FAILURE);
    }

    // Utiliser ft_putstr_fd pour écrire une chaîne de caractères dans le fichier
    ft_putstr_fd("Hello, World!\n", fd);

    // Fermer le fichier
    if (close(fd) == -1)
    {
        perror("close");
        exit(EXIT_FAILURE);
    }

    // Réouvrir le fichier en lecture pour afficher son contenu
    fd = open(filename, O_RDONLY);
    if (fd == -1) 
    {
        perror("open");
        exit(EXIT_FAILURE);
    }

    char buffer[256];
    ssize_t bytes_read;
    while ((bytes_read = read(fd, buffer, sizeof(buffer) - 1)) > 0) 
    {
        buffer[bytes_read] = '\0';
        printf("%s", buffer);
    }

    if (bytes_read == -1) 
    {
        perror("read");
        close(fd);
        exit(EXIT_FAILURE);
    }

    if (close(fd) == -1) 
    {
        perror("close");
        exit(EXIT_FAILURE);
    }

    return 0;
}
