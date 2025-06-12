/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iago <iago@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 13:58:59 by iago              #+#    #+#             */
/*   Updated: 2025/06/12 14:03:45 by iago             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_print_reverse_alphabet(void) 
{
	char ch;

	for(ch = 'z'; ch >= 'a'; ch--) {
		write(1, &ch, 1);
	}
}

int main()
{
 	ft_print_reverse_alphabet();

	return 0;
}

