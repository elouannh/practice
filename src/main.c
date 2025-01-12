/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosta <ehosta@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 15:45:20 by ehosta            #+#    #+#             */
/*   Updated: 2024/12/26 15:45:20 by ehosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/algos.h"

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <unistd.h>

#define ABSOLUTE_MIN 0
#define ABSOLUTE_MAX 100
#define LIST_SIZE 20

int	*create_list(int length)
{
	int	*result;
	int	r;
	int	i;

	result = (int *)malloc(length * sizeof(int));
	if (!result)
		return (NULL);
	i = -1;
	while (++i < length)
	{
		r = rand() % (ABSOLUTE_MAX - ABSOLUTE_MIN + 1);
		result[i] = r;
	}
	return (result);
}

void	display_list(int *list, int length)
{
	int	i;

	if (length > 100)
		return ;
	i = -1;
	printf("[");
	while (++i < length)
	{
		printf("%d", list[i]);
		if (i + 1 < length)
			printf(", ");
	}
	printf("]\n");
}

void	create_test(int test_id, int *list, int length)
{
	int	result;

	result = -1;
	display_list(list, length);
	if (test_id == 0)
		result = linear_search(list, 5, length);
	if (test_id == 1)
		result = binary_search(list, 5, length);
	if (test_id == 2)
		insertion_sort(list, length);
	printf("|\n| result: %d\n|\n", result);
	display_list(list, length);
	printf("\n\n");
}

int	main(void)
{
	int	*list;

	srand(time(NULL));
	list = create_list(LIST_SIZE);
	create_test(0, list, LIST_SIZE);
	create_test(2, list, LIST_SIZE);
	create_test(1, list, LIST_SIZE);
	free(list);

	const char command[50];
	sprintf((char *)command, "leaks %d > memory_trace", getpid());
	system(command);
	return (0);
}
