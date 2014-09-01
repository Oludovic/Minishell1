/*
** xmalloc.c for xmalloc in /home/ovsepi_l/minishell
** 
** Made by Ludovic Ovsepian
** Login   <ovsepi_l@epitech.net>
** 
** Started on  Fri Jul 25 16:51:34 2014 Ludovic Ovsepian
** Last update Tue Jul 29 14:41:14 2014 Ludovic Ovsepian
*/

#include "../struct.h"

void	*xmalloc(unsigned int size)
{
  void	*output;

  if ((output = malloc(size)) == NULL)
    {
      write(0, "Could not allo!\n", 16);
      exit(0);
    }
  return (output);
}
