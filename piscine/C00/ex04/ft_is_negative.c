/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iago <iago@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 14:33:33 by iago              #+#    #+#             */
/*   Updated: 2025/06/12 14:38:14 by iago             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char ft_is_negative(int n) 
{
	int is_negative;

	if(n < 0) {
		return '1';
	}

	return '0';
}

int main()
{
	char ret = ft_is_negative(2);

	write(1, &ret, 1);

	return 0;
}

