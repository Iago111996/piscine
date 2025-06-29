/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iago <iago@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 19:07:15 by iago              #+#    #+#             */
/*   Updated: 2025/06/29 19:43:15 by iago             ###   ########.fr       */
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
	int a = 1;
	int b = 2;
	int *pa;
	int *pb;

	*pa = &a;
	*pb = &b;

	ft_swap(*pa, *pb);

	printf("%p\n", *pa);
	printf("%p\n", *pb);

	return 0;
}
