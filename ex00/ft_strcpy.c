/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysasayi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 09:12:25 by ysasayi           #+#    #+#             */
/*   Updated: 2020/06/23 13:01:51 by ysasayi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
char *ft_strcpy(char *dest, char *src);

char *ft_strcpy(char *dest, char *src)
{
	int counter = 0;
	while(src[counter] != '\0' )
	{
		dest[counter] = src[counter];
		counter++;
	}
	return dest;
}
