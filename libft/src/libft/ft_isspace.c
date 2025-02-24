/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngharian <ngharian@student.s19.be>         #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-02-22 23:25:29 by ngharian          #+#    #+#             */
/*   Updated: 2025-02-22 23:25:29 by ngharian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

int	ft_isspace(char c)
{
	if (((c >= 9 && c <= 13) || c == 32) && c != '\n')
		return (1);
	return (0);
}
