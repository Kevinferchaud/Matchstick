/*
** my_getline.c for emacs in /home/kevin.ferchaud/CPE_2016_matchstick
** 
** Made by ferchaud kevin
** Login   <kevin.ferchaud@epitech.net>
** 
** Started on  Mon Feb 13 17:01:16 2017 ferchaud kevin
** Last update Wed Feb 15 18:40:47 2017 ferchaud kevin
*/

#include "my.h"

char            *my_strcatwoman(char *concat, char *suppr)
{
  char          *newstr;
  int           cpt;
  int           cpt2;
  int		u1;
  int		u2;

  cpt = -1;
  cpt2 = -1;
  if (concat == NULL)
    u1 = 0;
  else
    u1 = my_strlen(concat);
  if (suppr == NULL)
    u2 = 0;
  else
    u2 = my_strlen(suppr);
  newstr = malloc(sizeof(char) * (u1 + u2 + 1));
  if (concat != NULL)
    while (concat != NULL && concat[++cpt] != '\0')
      newstr[++cpt2] = concat[cpt];
  cpt = -1;
  while (suppr != NULL && suppr[++cpt] != '\0')
    newstr[++cpt2] = suppr[cpt];
  newstr[++cpt2] = '\0';
  return (newstr);
}

char		*my_getline()
{
  char          *save;
  char		*recup;
  int		cpt;
  int		len;

  cpt = 0;
  recup = malloc(sizeof(char) * 3);
  save = NULL;
  while (1)
    {
      read(0, recup, 1);
      if (recup[0] == '\n')
	return (save);
      if (recup[0] == '\0')
	return (NULL);
      recup[1] = '\0';
      save = my_strcatwoman(save, recup);
      cpt++;
    }
}
