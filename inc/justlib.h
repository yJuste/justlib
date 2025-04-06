/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   justlib.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:                                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created:   by Just'                               #+#    #+#             */
/*   Updated:   by Just'                              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef JUSTLIB_H
# define JUSTLIB_H

// Standard Libraries

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

// My library

# include "../src/get_next_line/get_next_line.h"

// Structures

typedef struct s_list	t_list;

typedef struct s_list
{
	char		*content;
	t_list		*next;
}	t_list;

/*	.-----------------------------------------------.
 *	|						|
 *	|		 🎉  JUSTLIB  🎉		|
 *	|						|
 *	.-----------------------------------------------.
 *					made by Juste.
 */

/* Fonction starting with is... or to...
 *	-------------- IS / TO ---------------
 */

int			ft_is_separator(char c, const char *sep);

/* Manipulates strings.
 *	-------------- STRING ----------------
 */

int			ft_strlen(const char *s);
int			ft_count_chr(const char *s, const char *chrs);

char		*ft_strdup(const char *s);
char		*ft_delchrs(char *s, const char *chrs);
char		*ft_strcpy(char *dst, const char *src);
char		*ft_strncpy(char *dst, const char *src, int n);
char		*ft_replace_chr(char *s, char c, int src, int range);

char		*ft_strchr(const char *s, int c);
char		*ft_strrchr(const char *s, int c);
char		*ft_strstr(const char *haystack, const char *needle);
char		*ft_strrstr(const char *haystack, const char *needle);
int			ft_next_chr(const char *s, const char chr, int n);
int			ft_strcmp(const char *s1, const char *s2);
int			ft_strncmp(const char *s1, const char *s2, int n);

char		*ft_strjoin(const char *s1, const char *s2);

/* Manipulates arrays.
 *	---------------- ARRAY ---------------
 */

int			ft_strslen(const char **s);
int			ft_count_strs(const char **s, const char *str);

char		**ft_strsdup(const char **s);
int			ft_delstrs(char **arg, const char *strs);
char		**ft_strscpy(char **dst, const char **src);

int			ft_next_str(const char **arg, const char *to_look, int n);

int			ft_interversion(char **arg, int src, int dst, int range);
char		**ft_shift(char **arg, int src, int range);
void		ft_strs_push(char ***arg, char *line);

char		**ft_split(const char *s, const char *sep);
char		**ft_strsjoin(const char **s1, const char **s2);

void		ft_print_args(const char *title, char **arg);

/* Allocates or frees.
 *	------------- ALLOCATION -------------
 */

void		*ft_calloc(int count, int size);
void		*ft_realloc(void *ptr, int old, int new);

void		ft_free_array(void ***arr, int len, char char_or_int);
void		ft_free(char **s1, char **s2, char **s3, char ***strs);

/* Converts from 1 type to another.
 *	------------- CONVERSION -------------
 */

int			ft_atoi(const char *s);
char		*ft_itoa(int n);

/* Manipulates numbers.
 *	--------------- MATHS ----------------
 */

/* Manipulates pointers. (usually returning void *)
 *	-------------- MEMORY ----------------
 */

void		*ft_memcpy(void *dst, const void *src, int n);

/* Manipulates linked lists.
 *	---------- LISTES CHAINEES -----------
 */

t_list		*ft_lstnew(void *content);
void		ft_lstadd_front(t_list **lst, t_list *new);
void		ft_lstadd_back(t_list **lst, t_list *new);

int			ft_lstsize(t_list *lst);
t_list		*ft_lstlast(t_list *lst);
void		ft_lstiter(t_list *lst, void (*f)(void *));
t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
void		ft_lstprint(t_list *list);

void		ft_lstclear(t_list **lst, void (*del)(void *));
void		ft_lstdelone(t_list *lst, void (*del)(void *));

#endif
