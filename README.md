Voici toute ma librairie de fonctions basiques en C.

// INTRO

Les fichiers qui vous sont montrés sont disponibles pour votre confort. Les fonctions s'utilisent comme une librairie.
Toutes les fonctions présentes m'ont toutes été utiles, vous verrez, elles sont géniales.

/. LIBRARY

* Les fichiers se présentent comme ceci:

```
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:                                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created:   by Juste                               #+#    #+#             */
/*   Updated:   by Juste                              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*   • Returns an arr of arr defined by a separator.                          */
/* ************************************************************************** */
#include "justlib.h"
```

Le header de 42 qui se compose :

* du nom du fichier : ft\_split.c
* d'une description courte de la fonction
* Du header de la justlib.

/: MANUEL

// STRING

```c
NAME:
is_separator - compare un caractère d'une séquence de caractère.

SYNOPSIS:
int
ft_is_separator(char c, const char *sep);

RETURN VALUES:
0 -> ne fait pas parti de *sep.
1 -> fait parti de *sep.
```
```c
NAME:
strlen - calcule la longueur d'un string.

SYNOPSIS:
int
ft_strlen(const char *s);
```
```c
NAME:
count_chr - calcule le nombre de caractère d'un string d'une séquence de caractères voulus.

SYNOPSIS:
int
ft_count_chr(const char *s, const char *chrs);
```
```c
NAME:
strdup - duplique une string.

SYNOPSIS:
char *
ft_strdup(const char *s);
```
```c
NAME:
delchrs - supprime les caractères d'une séquence et renvoie une nouvelle string.

SYNOPSIS:
char *
ft_delchrs(char *s, const char *chrs);
```
```c
NAME:
strcpy - copie une string 'src' à 'dst'.

SYNOPSIS:
char *
ft_strcpy(char *dst, const char *src);
```
```c
NAME:
strncpy - copie une string 'src' à 'dst' de 'n' range.

SYNOPSIS:
char *
ft_strncpy(char *dst, const char *src, int n);
```
```c
NAME:
replace_chr - remplace une string par 1 caractère à 'src' index de 'range'.

SYNOPSIS:
char *
ft_replace_chr(char *s, char c, int src, int range);
```
```c
NAME:
strchr - renvoie le pointeur du premier caractère 'c' trouvé.

SYNOPSIS:
char *
ft_strchr(const char *s, int c);
```
```c
NAME:
strrchr - renvoie le pointeur du dernier caractère 'c' trouvé.

SYNOPSIS:
char *
ft_strrchr(const char *s, int c);
```
```c
NAME:
strstr - renvoie le pointeur de la première séquence de caractères donnés.

SYNOPSIS:
char *
ft_strstr(const char *haystack, const char *needle);
```
```c
NAME:
strrstr - renvoie le pointeur de la dernière séquence de caractères donnés.

SYNOPSIS:
char *
ft_strrstr(const char *haystack, const char *needle);
```
```c
NAME:
next_chr - renvoie l'index du caractère donné. Le n-ième caractère.

SYNOPSIS:
int
ft_next_chr(const char *s, const char chr, int n);
```
```c
NAME:
strcmp - compare 2 strings et renvoie la valeure ascii.

SYNOPSIS:
int
ft_strcmp(const char *s1, const char *s2);
```
```c
NAME:
strncmp - compare 2 strings à 'n' index et renvoie la valeure ascii.

SYNOPSIS:
int
ft_strncmp(const char *s1, const char *s2, int n);
```
```c
NAME:
strjoin - renvoie une nouvelle string qui fusionne 2 string donnés.

SYNOPSIS:
char *
ft_strjoin(const char *s1, const char *s2);
```

// ARRAY

```c
NAME:
strslen - calcule la longeur d'un arr.

SYNOPSIS:
int
ft_strslen(const char **s);
```
```c
NAME:
count_strs - calcule le nombre de tableau égal à 'str'.

SYNOPSIS:
int
ft_count_strs(const char **s, const char *str);
```
```c
NAME:
strsdup - duplique un arr.

SYNOPSIS:
char **
ft_strsdup(const char **s);
```
```c
NAME:
delstrs - supprime les tableaux égaux à 'strs'.

SYNOPSIS:
int
ft_delstrs(char **arg, const char *strs);
```
```c
NAME:
strscpy - copie un arr en allouant de nouveaux tableaux.

SYNOPSIS:
char **
ft_strscpy(char **dst, const char **src);
```
```c
NAME:
next_str - trouve le n-ième 'to_look' et renvoie son index.

SYNOPSIS:
int
ft_next_str(const char **arg, const char *to_look, int n);
```
```c
NAME:
interversion - déplace une séquence de tableaux à 'dst' index.

SYNOPSIS:
int
ft_interversion(char **arg, int src, int dst, int range);
```
```c
NAME:
shift - free() les tableaux à 'src' index.

SYNOPSIS:
char **
ft_shift(char **arg, int src, int range);
```
```c
NAME:
strs_push - ajoute un tableau à la fin de 'arg'.

SYNOPSIS:
void
ft_strs_push(char ***arg, char *line);
```
```c
NAME:
split - split une string avec une séquence de séparateurs, et renvoie un arr.

SYNOPSIS:
char **
ft_split(const char *s, const char *sep);
```
```c
NAME:
strsjoin - fusionne 2 arr et renvoie un nouveau.

SYNOPSIS:
char **
ft_strsjoin(const char **s1, const char **s2);
```
```c
NAME:
print_args - fonction de débug pour les arr.

SYNOPSIS:
void
ft_print_args(const char *title, char **arg);
```

// CONVERSION

```c
NAME:
atoi - convertit un nombre en string en int.

SYNOPSIS:
int
ft_atoi(const char *s);
```
```c
NAME:
itoa - convertit un nombre en int en string.

SYNOPSIS:
char *
ft_itoa(int n);
```

// MATHS

// MEMORY

```c
NAME:
memcpy - copie dans n'importe quel type.

SYNOPSIS:
void *
ft_memcpy(void *dst, const void *src, int n);
```
```c
NAME:
calloc - alloue de la mémoire et met tout à 0.

SYNOPSIS:
void *
ft_calloc(int count, int size);
```
```c
NAME:
realloc - réalloue de la mémoire.

SYNOPSIS:
void *
ft_realloc(void *ptr, int old, int new);
```
```c
NAME:
free_array - free() un arr.

SYNOPSIS:
void
ft_free_array(void ***arr, int len, char char_or_int);
```
```c
NAME:
free - free() 3 string et 1 arr.

SYNOPSIS:
void
ft_free(char **s1, char **s2, char **s3, char ***strs);
```

// LISTES CHAINEES

```c
NAME:
lstnew - créer un noeud.

SYNOPSIS:
t_list *
ft_lstnew(void *content);
```
```c
NAME:
lstadd_front - créer un noeud et l'ajoute au début de la liste chainée.

SYNOPSIS:
void
ft_lstadd_front(t_list **lst, t_list *new);
```
```c
NAME:
lstadd_back - créer un noeud et l'ajoute en fin de la liste chainée.

SYNOPSIS:
void
ft_lstadd_back(t_list **lst, t_list *new);
```
```c
NAME:
lstsize - calcule la longeur de la liste chainée.

SYNOPSIS:
int
ft_lstsize(t_list *lst);
```
```c
NAME:
lstlast - renvoie l'index du dernier noeud.

SYNOPSIS:
t_list *
ft_lstlast(t_list *lst);
```
```c
NAME:
lstiter - applique une fonction à chaque noeud.

SYNOPSIS:
void
ft_lstiter(t_list *lst, void (*f)(void *));
```
```c
NAME:
lstmap - applique une fonction à chaque noeud et supprime.

SYNOPSIS:
t_list *
ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
```
```c
NAME:
lstprint - affiche une liste chainée.

SYNOPSIS:
void
ft_lstprint(t_list *list);
```
```c
NAME:
lstclear - supprime une liste chainée.

SYNOPSIS:
void
ft_lstclear(t_list **lst, void (*del)(void *));
```
```c
NAME:
lstdelone - supprime un noeud.

SYNOPSIS:
void
ft_lstdelone(t_list *lst, void (*del)(void *));
```

/:. EOF

* Et si tout cela vous semble compliqué, demandez de l'aide autour de vous,
* Internet ainsi que les manuels sont vos amis.

Et Don't Panic!

Modifié le 8 Avril 2025 par Juste.
