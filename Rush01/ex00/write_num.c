/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_num.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbutte <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 19:12:05 by jbutte            #+#    #+#             */
/*   Updated: 2022/06/18 19:50:11 by jbutte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	write_num(char a, char b, char c, char d)
{
	ft_putchar(a);
	write(1, " ", 1);
	ft_putchar(b);
	write(1, " ", 1);
	ft_putchar(c);
	write(1, " ", 1);
	ft_putchar(d);
}
