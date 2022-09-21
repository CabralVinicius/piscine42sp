#include <unistd.h>

void  ft_putchar(char c)
{
  write (1, &c, 1);
}


void  ft_print_alphabet(char c)
{
  char alphabet;
  alphabet = c;
  while (alphabet < 'z')
  {
    ft_putchar(alphabet);
    alphabet++;
  }
}