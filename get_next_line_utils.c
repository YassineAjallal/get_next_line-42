/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yajallal < yajallal@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 03:34:09 by yajallal          #+#    #+#             */
/*   Updated: 2022/11/11 15:27:41 by yajallal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr(char *s)
{
	int	i;

	i = 0;
	while (s && s[i] != '\0')
	{
		if (s[i] == '\n')
			return (s + i);
		i++;
	}
	return (NULL);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	if (!s1)
		s1 = "";
	str = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!str)
		return (NULL);
	j = 0;
	while (s1 && s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (s2 && s2[j])
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
}

int	ft_strlen(char *s)
{
	int	i;

	if (!s)
		return (-1);
	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_substr(char *s, int start, int len)
{
	char	*str;
	int		i;
	int		length;

	i = 0;
	length = ft_strlen(s);
	if (len > length)
		len = length;
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
