/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysasayi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 09:25:17 by ysasayi           #+#    #+#             */
/*   Updated: 2020/06/24 16:41:56 by ysasayi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
char ft_strcmp(char *s1, char *s2);

int main()
{
	char s1 = "abc";
	char s2 = "abc";
 	printf("%s" ,ft_strcmp(s1, s2));
}
char ft_strcmp(char *s1, char *s2)
{
	int i =0;
	char return_string[50];
	while(s1[i] != '\0'|| s1[i] != '\0')
	{
		if (s1>s2)
		{
			return_string ="first string  is bigger than second string";
		}
		else if(s1<s2)
		{
			return_string ="first string is smaller than second string";
		}
		else if(s1 == s2)
		{
			return_string = "both strings are equal";
		}
	}
	return return_string;
}
