/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seukim <seukim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/14 22:11:53 by seukim            #+#    #+#             */
/*   Updated: 2020/06/14 22:11:53 by seukim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"

void	ft_strlentest()
{
	char *p1;
	char *p2;

	p1 = "ABCD";
	p2 = "";

	printf("-------------\n");
	printf("strlen test\n");
	printf("strlen=%d\n",strlen(p1));
	printf("ft_strlen=%d\n",ft_strlen(p1));
	printf("strlen=%d\n",strlen(p2));
	printf("ft_strlen=%d\n", ft_strlen(p2));
	printf("strlen NULL =%d\n",strlen(NULL));
	printf("ft_strlen NULL =%d\n",ft_strlen(NULL));
	printf("---------------\n\n\n");
}

void	ft_strcmptest()
{
	char *p1;
	char *p2;
	char *p3;

	p1 = "ANCAN";
	p2 = "ABcan";
	p3 = NULL;
	printf("-----------------\n");
	printf("strcmp test\n");
	printf("strcmp =%d\n", strcmp(p1, p2));
	printf("ft_strcmp =%d\n", ft_strcmp(p1, p2));
	printf("strcmp =%d\n", strcmp(p1,p1));
	printf("ft_strcmp =%d\n", ft_strcmp(p1,p1));;
	printf("strcmp =%d", strcmp(p2,p1));
	printf("ft_strcmp =%d\n", ft_strcmp(p2,p1));
	printf("strcmp =%d\n",strcmp(p3,p3));
	printf("ft_strcmp =%d\n", ft_strcmp(p3,p3));
	printf("strcmp =%d\n",strcmp(p1,p3));
	printf("ft_strcmp =%d\n",ft_strcmp(p1,p3));
	printf("--------------------\n\n\n");
}

void	ft_strcpytest()
{
	char *p1;
	char *p2;
	char *p3;

	p1 = "abcde";
	p2 = "12345";
	p3 = "NULL";

	printf("--------------------\n");
	printf("strcpytest\n");
	printf("strcpy =%s\n",strcpy(p1,p2));
	printf("ft_strcpy =%s\n",ft_strcpy(p1,p2));
	printf("strcpy =%s\n",strcpy(p1,p3));
	printf("ft_strcpy =%s\n",ft_strcpy(p1,p3));
	printf("strcpy =%s\n",strcpy(p3,p1));
	printf("ft_strcpy =%s\n",ft_strcpy(p3,p1));
	printf("======================\n\n\n");
}

int main()
{
	int i;

	ft_strlentest();
	ft_strcmptest();
	return 0;
}
