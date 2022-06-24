/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jporet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 09:48:04 by jporet            #+#    #+#             */
/*   Updated: 2022/06/12 09:48:14 by jporet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_up_down(int x)
{
	int	i;

	i = 0;
	while (i < x)
	{
		if (i == x - 1)
		{
			if (i == 0)
				ft_putchar('A');
			else
				ft_putchar('C');
			ft_putchar('\n');
		}
		else if (i == 0)
			ft_putchar('A');
		else
			ft_putchar('B');
		i++;
	}
}

void	print_mid(int x)
{
	int	i;

	i = 0;
	while (i < x)
	{
		if (i == x - 1)
		{
			ft_putchar('B');
			ft_putchar('\n');
		}
		else if (i == 0)
			ft_putchar('B');
		else
			ft_putchar(' ');
		i++;
	}
}

void	rush(int x, int y)
{
	int	i;

	i = 0;
	while (i < y)
	{
		if (i == 0 || i == y - 1)
			print_up_down(x);
		else
			print_mid(x);
		i++;
	}
}
