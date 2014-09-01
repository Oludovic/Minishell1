/*
** built.c for minishell in /home/ovsepi_l/minishell/minishell/srcs
** 
** Made by Ludovic Ovsepian
** Login   <ovsepi_l@epitech.net>
** 
** Started on  Tue Jul 29 14:40:16 2014 Ludovic Ovsepian
** Last update Tue Jul 29 14:40:19 2014 Ludovic Ovsepian
*/

#include "../struct.h"

int     my_unsetenv(t_sh *sb, char **arg)
{
  int   i;

  i = 0;
  if (arg[1] == NULL)
    return (-1);
  while (sb->en[i])
    {
      if (my_strcmp(sb->en[i], arg[1]) == 0)
        {
          i += 1;
          while (sb->en[i])
            {
              sb->en[i - 1] = sb->en[i];
              i++;
            }
          sb->en[i - 1] = NULL;
          return (1);
        }
      i++;
    }
}

void    my_cd(char **arg)
{
  (arg[1] == NULL) ? chdir("/home/") : 0;
  if ((chdir(arg[1])) == -1 && arg[1])
    {
      my_putstr("bash: cd: ");
      my_putstr(arg[1]);
      my_putstr(": No such file or directory\n");
    }
  else
    chdir(arg[1]);
}

void    my_exit(t_sh *sb)
{
  exit(1);
}

void    my_aff_env(char **env)
{
  int   i;

  i = 0;
  while (env[i])
    {
      my_putstr(env[i]);
      my_putchar('\n');
      i++;
    }
}
