/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tluegham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 10:47:09 by tluegham          #+#    #+#             */
/*   Updated: 2024/01/14 15:05:17 by tluegham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_line(int x_between, char left, char mid, char right)
{
	int	index;

	index = 0;
	ft_putchar(left);
	while (index < x_between)
	{
		ft_putchar(mid);
		index++;
	}
	if (x_between > -1)
	{
		ft_putchar(right);
	}
	ft_putchar('\n');
}

void	print_lines_between(int x_between, int y_between)
{
	int	index_y;

	index_y = 0;
	while (index_y < y_between)
	{
		print_line(x_between, 'B', ' ', 'B');
		index_y++;
	}
}

void	rush(int x, int y)
{
	int	x_between;
	int	y_between;

	x_between = x - 2;
	y_between = y - 2;
	if (x < 1 || y < 1)
	{
		write(1, "Error, parameters entered are out of scope.", 44);
		write(1, "\n", 2);
		return ;
	}
	print_line(x_between, 'A', 'B', 'C');
	print_lines_between(x_between, y_between);
	if (y > 1)
	{
		print_line(x_between, 'C', 'B', 'A');
	}
}
