/*
** struct.h for structure_minishell in /home/ovsepi_l/minishell
** 
** Made by Ludovic Ovsepian
** Login   <ovsepi_l@epitech.net>
** 
** Started on  Fri Jul 25 13:22:37 2014 Ludovic Ovsepian
** Last update Mon Jul 28 17:57:03 2014 Ludovic Ovsepian
*/

#ifndef MY_SH__
#define MY_SH__

#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <dirent.h>
#include <string.h>
#include <signal.h>

typedef struct	s_sh
{
  char		**en;
  char		**path;
  char		*buff;
}		t_sh;

char		*my_strdup(char *);
char		*my_nstrdup(char *);
void		*xmalloc(unsigned int);
char		**my_str_to_wordtab(char *, char);
void		clean_buffer(char *buff);
char		*my_search(t_sh *sb, char *command);

#endif
