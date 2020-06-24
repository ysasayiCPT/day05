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

int main()
{
	char str1[]="yondela";
	int size = sizeof(str1)/ sizeof(str1[0]);
	char str2[size];
	ft_strcpy(str2, str1);
	printf("%s", str2);

	return 0;
}
char *ft_strcpy(char *dest, char *src)
{
	int counter = 0;
	while(counter < 8)
	{
		dest[counter] = src[counter];
		counter++;
	}
	return dest;
}
