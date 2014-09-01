/*
** my_strdup.c for  in /home/ovsepi_l/minishell
** 
** Made by Ludovic Ovsepian
** Login   <ovsepi_l@epitech.net>
** 
** Started on  Fri Jul 25 13:27:48 2014 Ludovic Ovsepian
** Last update Tue Jul 29 14:42:59 2014 Ludovic Ovsepian
*/

#include "../struct.h"

char	*my_strdup(char *str)
{
  char	*tab;
  int	i;

  i = 0;
  if ((tab = malloc(sizeof(char) * my_strlen(str) + 1)) == NULL)
      return (NULL);
  while (str[i] != '\0')
    {
      tab[i] = str[i];
      i = i + 1;
    }
  tab[i] = '\0';
  return (tab);
}

char	*my_nstrdup(char *str)
{
  char	*tab;
  int	i;

  i = 0;
  if ((tab = malloc(sizeof(char) * my_strlen(str) + 1)) == NULL)
      return (NULL);
  while (str[i] != '\0' && str[i] != ':')
    {
      tab[i] = str[i];
      i = i + 1;
    }
  tab[i] = '\0';
  return (tab);
}
