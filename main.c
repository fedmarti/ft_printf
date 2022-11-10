#include <stdio.h>
#include "ft_printf.h"

int main()
{
	printf("\n	return = %i\n", ft_printf(" %x ", -1));
	printf("\n	result = %i\n", printf(" %x ", -1));
}