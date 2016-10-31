/*
** main.c for roguelike in /home/nathan/Perso/Games/RogueLike
** 
** Made by Nathan
** Login   <nathan.tual@epitech.eu>
** 
** Started on  Mon Oct 31 22:43:12 2016 Nathan
** Last update Mon Oct 31 23:24:24 2016 Nathan
*/

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "include/my.h"

int	main()
{
  int	nb_room;
  int	**map;

  nb_room = 0;
  srand(time(NULL));
  while (nb_room < 5)
    nb_room = rand() % 15;
  gen_map(nb_room);
  return (0);
}
