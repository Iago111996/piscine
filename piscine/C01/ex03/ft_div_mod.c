/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iago <iago@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 13:34:45 by iago              #+#    #+#             */
/*   Updated: 2025/06/30 14:05:28 by iago             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int main(int argc, char *argv[])
{
	int a = 10;
	int b = 3;
	int div, mod;

	ft_div_mod(a, b, &div, &mod);

	printf("%d\n", div);
	printf("%d\n", mod);

	return 0;
}
