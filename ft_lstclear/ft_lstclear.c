/*

Function name :					ft_lstclear

Prototype :						void ft_lstclear(t_list **lst, void (*del)(void*));

Paramètres :					lst:	L’adresse du pointeur vers un élément.
								del:	L’adresse de la fonction permettant de
										supprimer le contenu d’un élément.

Valeur de retour :				Aucune

Fonctions externes autorisées :	free

Description :					Supprime et libère la mémoire de l’élément passé en
								paramètre, et de tous les éléments qui suivent, à
								l’aide de ’del’ et de free(3)
								Enfin, le pointeur initial doit être mis à NULL.

*/