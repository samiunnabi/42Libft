/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sun-nabi <sun-nabi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 09:49:38 by sun-nabi          #+#    #+#             */
/*   Updated: 2023/12/13 02:52:33 by sun-nabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>

// When a program wants to read or write on a file it has to ask permission
// from the computer system by doing a system call like "open"
// the system then checks if the file exists and if file has permission to access it
// If everything checks out it returns a non negative value to the program called
// file descriptor which the program uses to refer to the file instead of the files name
// So now the file is referred to by its file descriptor(number) instead of its name

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
// int main(void)
// {
// 	int fd = open("bruh.txt", O_CREAT | O_RDWR);
// 	ft_putchar_fd('Z', fd);
// 	printf("%d\n", fd);
// 	close(fd);
// }
	// I make a system call "open" and make a new file called "bruh.txt"
	// I create the file using O_CREAT
	// Then I Read Write on the file using "O_RDWR"
	// Then i write the letter Z to the file
	// 0, 1 & 2 are file descriptors reserved for the system by default
	// So the file you open gets the next value which is available which is 3
	// To open the file bruh.txt you might need to "chmod 777 bruh.txt" in terminal to
	// give yourself all permissions
