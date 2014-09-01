/*
** my_str_to_wordtab.c for sdf in /home/ovsepi_l/minishell/minishell/srcs
** 
** Made by Ludovic Ovsepian
** Login   <ovsepi_l@epitech.net>
** 
** Started on  Tue Jul 29 14:42:43 2014 Ludovic Ovsepian
** Last update Tue Jul 29 14:42:46 2014 Ludovic Ovsepian
*/

#include "../struct.h"

int	count_words(char *str, char separator)
{
  int	i;
  int	total;

  i = 0;
  total = 0;
  while (str[i] != '\0')
    {
      if (str[i] == separator)
	{
	  total = total + 1;
	}
      i = i + 1;
    }
  return (total + 1);
}

char	*my_put_in_tab(char *str, int *i, char separator)
{
  char	*out;
  int	k;

  k = 0;
  while (str[*i] == separator && str[*i])
    *i = *i + 1;
  while (str[*i + k] != separator && str[*i + k])
    k = k + 1;
  out = xmalloc(sizeof(char) * (k + 1));
  out[k] = 0;
  k = 0;
  while (str[*i] != separator && str[*i])
    {
      out[k] = str[*i];
      k = k + 1;
      *i = *i + 1;
    }
  return (out);
}

char	**my_str_to_wordtab(char *str, char separator)
{
  char	**wordtab;
  int	i;
  int	j;

  if (count_words(str, separator))
    {
      i = 0;
      j = 0;
      wordtab = xmalloc(sizeof(char*) * (count_words(str, separator) + 1));
      wordtab[count_words(str, separator)] = 0;
      while (str[i] && j < count_words(str, separator))
	{
	  wordtab[j] = my_put_in_tab(str, &i, separator);
	  j = j + 1;
	}
      return (wordtab);
    }
  else
    return (NULL);
}
