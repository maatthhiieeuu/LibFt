



void * memmove( void * destination, const void * source, size_t size );

int main()
{

}

/*

Cette fonction permet de copier un bloc de mémoire spécifié par le paramètre source dans un nouvel 
emplacement désigné par le paramètre destination. On peut donc dire que cette fonction est proche 
de la fonction memcpy. Néanmoins, la différence réside dans le fait que la fonction memmove 
accepte que les deux zones de mémoire puissent se chevaucher.

En cas de chevauchement, la copie se passe comme si les octets de la zone source étaient d'abord 
copiés dans une zone temporaire, qui ne chevauche aucune des deux zones pointées par source et 
destination, et les octets sont ensuite copiés de la zone temporaire vers la zone de destination.
Paramètres

    destination : permet de spécifier l'adresse du bloc mémoire devant recevoir les données à copier.
    source : permet de définir l'adresse du bloc de mémoire à dupliquer.
    size : indique le nombre d'octets à dupliquer.

Valeur de retour

La fonction renvoie l'adresse du bloc de mémoire de destination. 

*/