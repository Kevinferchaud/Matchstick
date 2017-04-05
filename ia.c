/*
** ia.c for emacs in /home/kevin.ferchaud/CPE_2016_matchstick
** 
** Made by ferchaud kevin
** Login   <kevin.ferchaud@epitech.net>
** 
** Started on  Mon Feb 13 20:44:54 2017 ferchaud kevin
** Last update Wed Feb 22 18:17:28 2017 ferchaud kevin
*/

#include "my.h"

char    **do_thestick2(int line, int match, char **map)
{
  int   len;
  int   end;

  end = match;
  len = my_strlen(map[line]);
  while (--end >= 0)
    {
      while (map[line][--len] != '|');
      map[line][len] = ' ';
    }
  return (map);
}

int     checktwobat(char **map, char *nbr2)
{
  int   cpt;
  int   cpt2;
  int   cpt3;
  int   res;
  int   save;

  cpt = -1;
  cpt3 = 0;
  save = 0;
  while (map[++cpt] != NULL)
    {
      res = 0;
      cpt2 = -1;
      while (map[cpt][++cpt2] != '\n')
	if (map[cpt][cpt2] == '|')
	  res++;
      if (res > 0)
	cpt3++;
      save += res;
    }
  return (checkfollow(cpt3, save, nbr2));
}

int     matchforia(char **map, int line, char *nbr, char *nbr2)
{
  int   cpt;
  int   match;
  int   lenbaton;

  match = 0;
  lenbaton = 0;
  cpt = 0;
  if (checktwobat(map, nbr2) != 0)
    return (checktwobat(map, nbr2));
  else
    {
      while (map[line][++cpt] != '\n')
	if (map[line][cpt] == '|')
	  lenbaton++;
      match = rand() % my_getnbr(nbr2) + 1;
      while ((match > lenbaton))
	match = rand() % my_getnbr(nbr2) + 1;
      return (match);
    }
}

char    **ia_turn(char **map, char *nbr, char *nbr2)
{
  int   line;
  int   match;

  printmap(map);
  my_putstr("\nAI's turn...\n");
  line = lineforia(map, nbr);
  match = matchforia(map, line, nbr, nbr2);
  map = do_thestick2(line, match, map);
  my_printf("AI removed %d match(es) from line %d\n", match, line);
  return (map);
}
