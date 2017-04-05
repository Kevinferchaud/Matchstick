/*
** matchstick2.c for emacs in /home/kevin.ferchaud/CPE_2016_matchstick
** 
** Made by ferchaud kevin
** Login   <kevin.ferchaud@epitech.net>
** 
** Started on  Thu Feb 16 18:00:07 2017 ferchaud kevin
** Last update Thu Feb 16 18:01:59 2017 ferchaud kevin
*/

#include "my.h"

char	**myexiteu()
{
  char	**exiteu;

  exiteu = malloc(sizeof(char *) * 2);
  exiteu[0] = my_strdup("exit");
  exiteu[1] = NULL;
  return (exiteu);
}

void    my_putchar(char c)
{
  write(1, &c, 1);
}

void    my_putstr(char *str)
{
  int   cpt;

  cpt = -1;
  while (str[++cpt] != '\0')
    my_putchar(str[cpt]);
}
