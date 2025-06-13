/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iago <iago@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 18:26:32 by iago              #+#    #+#             */
/*   Updated: 2025/06/13 21:20:07 by iago             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


void ft_print_comb(void) 
{
	char a,b,c;
	char space = ' ';
	char com = ',';

	a = '0';
	while(a <= '7')
	{
		b = a + 1;
		while(b <= '8')
		{
			c = b + 1;
			while(c <= '9')
			{
				write(1, &a, 1);
				write(1, &b, 1);
				write(1, &c, 1);
				write(1, &com, 1);
				write(1, &space, 1);
				c++;
			}
			b++;
		}
		a++;
	}
}

int main(int argc, char *argv[])
{
	ft_print_comb();

	return 0;
}

