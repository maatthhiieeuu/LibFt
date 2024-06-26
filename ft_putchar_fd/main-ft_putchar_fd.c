/* ********************************************************************************************* */
/*                                                                                               */
/*   Project : libft/main-ft_putchar_fd.c               ::::::  ::::::    :::::::::              */
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
#include <stdlib.h>
#include <stdio.h>

void ft_putchar_fd(char c, int fd);

int main() {
    const char *filename = "testfile.txt";
    
    // Ouvrir le fichier en mode écriture, le créer s'il n'existe pas
    int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
    if (fd == -1) {
        perror("open");
        exit(EXIT_FAILURE);
    }
    
    // Utiliser ft_putchar_fd pour écrire des caractères dans le fichier
    ft_putchar_fd('H', fd);
    ft_putchar_fd('e', fd);
    ft_putchar_fd('l', fd);
    ft_putchar_fd('l', fd);
    ft_putchar_fd('o', fd);
    ft_putchar_fd(' ', fd);
    ft_putchar_fd('W', fd);
    ft_putchar_fd('o', fd);
    ft_putchar_fd('r', fd);
    ft_putchar_fd('l', fd);
    ft_putchar_fd('d', fd);
    ft_putchar_fd('!', fd);
    ft_putchar_fd('\n', fd);
    
    // Fermer le fichier
    if (close(fd) == -1) {
        perror("close");
        exit(EXIT_FAILURE);
    }

    // Afficher le contenu du fichier sur stdout
    fd = open(filename, O_RDONLY);
    if (fd == -1) {
        perror("open");
        exit(EXIT_FAILURE);
    }

    char buffer[256];
    ssize_t bytes_read;
    while ((bytes_read = read(fd, buffer, sizeof(buffer) - 1)) > 0) {
        buffer[bytes_read] = '\0';
        printf("%s", buffer);
    }

    if (bytes_read == -1) {
        perror("read");
        close(fd);
        exit(EXIT_FAILURE);
    }

    if (close(fd) == -1) {
        perror("close");
        exit(EXIT_FAILURE);
    }
    
    return 0;
}
