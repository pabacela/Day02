#include <unistd.h>

void ft_putchar(char c)
{  
     write(1,&c,1);
	 
}
void ft_print_alphabet(void)
{
    char l = 'a';
    while (l <= 'z')
    {
    
		  ft_putchar(l);
        
        l++;
    }
    ft_putchar('\n');
}


