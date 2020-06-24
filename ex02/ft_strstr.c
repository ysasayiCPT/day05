/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysasayi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 13:42:24 by ysasayi           #+#    #+#             */
/*   Updated: 2020/06/23 15:15:23 by ysasayi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
char *ft_strstr(char *str, char *to_find);

char *ft_strstr(char *str, char *to_find)
{
	while(*str)
	{
		char *begin = str;
		char *pattern = to_find;
		while(*str && *pattern && *str == *pattern)
		{
			str++;
			pattern++;
		}
		if(!*pattern)
		{
			return begin;
		}
		str = begin + 1;
	}
}
