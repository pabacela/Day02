-#include <unistd.h>

void ft_putchar(char c)
{
	write(1,&c,1);

}
void ft_print_reverse_alphabet(void)
{
        char l = 'z';
		while (l >= 'a')
		{

            ft_putchar(l);

			l--;
		}
    ft_putchar('\n');
}


		
