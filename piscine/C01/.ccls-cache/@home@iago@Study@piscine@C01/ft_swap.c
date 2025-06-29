/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iago <iago@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 19:07:15 by iago              #+#    #+#             */
/*   Updated: 2025/06/29 19:26:49 by iago             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_swap(int *a, int *b)
{
	int temp;

	temp = *a;

	*a = *b;
	*b = temp;
}

int main(int argc, char *argv[])
{
	int a, b;
	int *pa;
	int *pb;

	a = 1;
	b = 2;

	*pa = &a;
	*pb = &b;

	ft_swap(*pa, *pb);

	printft("%p\n", *pa);
	printft("%p\n", *pb);

	return 0;
}
