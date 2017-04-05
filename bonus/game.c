/*
** game.c for emacs in /home/kevin.ferchaud/CPE_2016_matchstick/bonus
** 
** Made by ferchaud kevin
** Login   <kevin.ferchaud@epitech.net>
** 
** Started on  Tue Feb 14 14:59:34 2017 ferchaud kevin
** Last update Fri Feb 17 16:55:49 2017 ferchaud kevin
*/

#include "my.h"

sfRenderWindow          *create_window(char *name)
{
  sfRenderWindow        *window;
  sfVideoMode           mode;

  mode.width = 1280;
  mode.height = 720;
  mode.bitsPerPixel = 32;
  window = sfRenderWindow_create(mode, name, sfResize, NULL);
  if (window == NULL)
    return (NULL);
  return (window);
}

t_my_framebuffer         *my_framebuffer_create(int awidth, int aheight)
{
  int                    i;
  sfUint8                *apixels;
  t_my_framebuffer       *res;

  res = malloc(sizeof(*res));
  apixels = malloc(awidth * aheight * 4 * sizeof(*apixels));
  if (apixels == NULL)
    return (NULL);
  i = -1;
  while (++i < awidth * aheight * 4)
    apixels[i] = 0;
  res->pixels = apixels;
  res->width = awidth;
  res->height = aheight;
  return (res);
}

sfColor         *set_color(int r, int g, int b, int a)
{
  sfColor       *color;

  color = malloc(sizeof(*color));
  if (color == NULL)
    return (NULL);
  color->r = r;
  color->g = g;
  color->b = b;
  color->a = a;
  return (color);
}

int			main(int ac, char **av)
{
  sfTexture             *t;
  sfTexture             *t1;
  sfRenderWindow        *window;
  sfSprite              *sprite;
  sfSprite              *sprite2;
  sfSprite              *sprite3;
  sfSprite              *sprite4;
  sfSprite              *sprite5;
  sfSprite              *sprite6;
  sfSprite              *sprite7;
  sfSprite              *sprite8;
  sfSprite              *sprite9;
  sfSprite              *sprite10;
  t_my_framebuffer      *b;
  sfEvent               key;
  sfMusic		*music;
  sfMusic		*music2;
  int			c;
  sfVector2f		xy;

  c = 0;
  window = create_window("Window");
  t = sfTexture_createFromFile("img/fortb.jpg", NULL);
  sprite = sfSprite_create();
  sprite2 = sfSprite_create();
  sprite3 = sfSprite_create();
  sprite4 = sfSprite_create();
  sprite5 = sfSprite_create();
  sprite6 = sfSprite_create();
  sprite7 = sfSprite_create();
  sprite8 = sfSprite_create();
  sprite9 = sfSprite_create();
  sprite10 = sfSprite_create();
  t1 = sfTexture_createFromFile("img/allumette.jpg", NULL);
  sfSprite_setTexture(sprite, t, sfTrue);
  b = my_framebuffer_create(1920, 1080);
  music = sfMusic_createFromFile("music.ogg");
  music2 = sfMusic_createFromFile("bip.ogg");
  sfMusic_play(music);
  sfMusic_setLoop(music, sfTrue);
  while (sfRenderWindow_isOpen(window))
    {
      if (sfKeyboard_isKeyPressed(sfKeyUp) == sfTrue)
	{
	  c = 0;
	  t = sfTexture_createFromFile("img/fortb.jpg", NULL);
	  sfSprite_setTexture(sprite, t, sfTrue);
	}
      if (sfKeyboard_isKeyPressed(sfKeyDown) == sfTrue)
	{
	  c = 1;
	  t = sfTexture_createFromFile("img/fortbb.jpg", NULL);
	  sfSprite_setTexture(sprite, t, sfTrue);
	}
      if (sfKeyboard_isKeyPressed(sfKeySpace) == sfTrue)
	{
	  while (1)
	    {
	      if (c == 1)
		return (0);
	      sfMusic_play(music2);
	      t = sfTexture_createFromFile("img/wood.jpg", NULL);
	      sfSprite_setTexture(sprite, t, sfTrue);
	      sfSprite_setTexture(sprite2, t1, sfTrue);
	      sfSprite_setTexture(sprite3, t1, sfTrue);
	      sfSprite_setTexture(sprite4, t1, sfTrue);
	      sfSprite_setTexture(sprite5, t1, sfTrue);
	      sfSprite_setTexture(sprite6, t1, sfTrue);
	      sfSprite_setTexture(sprite7, t1, sfTrue);
	      sfSprite_setTexture(sprite8, t1, sfTrue);
	      sfSprite_setTexture(sprite9, t1, sfTrue);
	      sfSprite_setTexture(sprite10, t1, sfTrue);
	      xy.x = 360;
	      xy.y = 470;
	      sfSprite_setPosition (sprite2, xy);
	      xy.x = 510;
	      xy.y = 470;
	      sfSprite_setPosition (sprite3, xy);
	      xy.x = 510;
	      xy.y = 250;
	      sfSprite_setPosition (sprite7, xy);
	      xy.x = 660;
	      xy.y = 470;
	      sfSprite_setPosition (sprite4, xy);
	      xy.x = 660;
	      xy.y = 250;
	      sfSprite_setPosition (sprite8, xy);
	      xy.x = 660;
	      xy.y = 20;
	      sfSprite_setPosition (sprite9, xy);
	      xy.x = 810;
	      xy.y = 470;
	      sfSprite_setPosition (sprite5, xy);
	      xy.x = 810;
	      xy.y = 250;
	      sfSprite_setPosition (sprite10, xy);
	      xy.x = 960;
	      xy.y = 470;
	      sfSprite_setPosition (sprite6, xy);
	      sfRenderWindow_drawSprite(window, sprite, NULL);
	      sfRenderWindow_drawSprite(window, sprite2, NULL);
	      sfRenderWindow_drawSprite(window, sprite3, NULL);
	      sfRenderWindow_drawSprite(window, sprite4, NULL);
	      sfRenderWindow_drawSprite(window, sprite5, NULL);
	      sfRenderWindow_drawSprite(window, sprite6, NULL);
	      sfRenderWindow_drawSprite(window, sprite7, NULL);
	      sfRenderWindow_drawSprite(window, sprite8, NULL);
	      sfRenderWindow_drawSprite(window, sprite9, NULL);
	      sfRenderWindow_drawSprite(window, sprite10, NULL);
	      sfRenderWindow_display(window);
	      main3(ac, av, window);
	      while (sfRenderWindow_pollEvent(window, &key))
		if (sfKeyboard_isKeyPressed(sfKeyEscape) == sfTrue)
		  {
		    sfMusic_destroy(music);
		    sfMusic_destroy(music2);
		    sfRenderWindow_close(window);
		    return (0);
		  }
	    }
	}
      while (sfRenderWindow_pollEvent(window, &key))
	if (sfKeyboard_isKeyPressed(sfKeyEscape) == sfTrue)
	  {
	    sfMusic_destroy(music);
	    sfMusic_destroy(music2);
	    sfRenderWindow_close(window);
	  }
      sfRenderWindow_drawSprite(window, sprite, NULL);
      sfRenderWindow_drawSprite(window, sprite2, NULL);
      sfRenderWindow_drawSprite(window, sprite3, NULL);
      sfRenderWindow_drawSprite(window, sprite4, NULL);
      sfRenderWindow_drawSprite(window, sprite5, NULL);
      sfRenderWindow_drawSprite(window, sprite6, NULL);
      sfRenderWindow_drawSprite(window, sprite7, NULL);
      sfRenderWindow_drawSprite(window, sprite8, NULL);
      sfRenderWindow_drawSprite(window, sprite9, NULL);
      sfRenderWindow_drawSprite(window, sprite10, NULL);
      sfRenderWindow_display(window);
    }
  sfRenderWindow_destroy(window);
  return (0);
}
