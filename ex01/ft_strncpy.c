/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysasayi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 09:38:55 by ysasayi           #+#    #+#             */
/*   Updated: 2020/06/23 15:23:52 by ysasayi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
char *ft_strncpy(char *dest, char *src, unsigned int n );

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	while(i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return dest;
}

