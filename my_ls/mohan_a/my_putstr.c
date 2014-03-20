/*
** my_putstr.c for my_putstr in /Users/pakpak/mohan_a/c_jour02/mohan_a/my_putstr
** 
** Made by MOHAN Alexis
** Login   <mohan_a@etna-alternance.net>
** 
** Started on  Wed Oct 23 11:52:58 2013 MOHAN Alexis
** Last update Wed Oct 23 11:53:13 2013 MOHAN Alexis
*/


void my_putchar(char c)
{	
  write(1, &c, 1);
}

void my_putstr(char *str)
{
    int i = 0;
    while( str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    }
}