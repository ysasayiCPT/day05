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
int main()
{
	char str1[]= "myString";
	int n = sizeof(str1)/ sizeof(str1[0]);
	char str2[n];
	ft_strncpy(str2, str1, 6);
    printf("%s", str2);
	return 0;
}

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	for (int i = 0; i< n; i++)
	{
		dest[i]= src[i];
	}
	return dest;
}

