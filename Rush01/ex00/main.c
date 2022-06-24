/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbutte <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 19:50:52 by jbutte            #+#    #+#             */
/*   Updated: 2022/06/18 20:04:58 by jbutte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	write_num(char a, char b, char c, char d);
void	create_tab(char *av[]);

int	main(int ac,char *av[])
{
	if(ac != 2)
		return (1);
	create_tab(av);
}
