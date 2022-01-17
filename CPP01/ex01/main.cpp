/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ametta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 12:38:47 by ametta            #+#    #+#             */
/*   Updated: 2021/10/27 12:38:49 by ametta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main ( void )
{
	int N = 5;
	std::string name = "Franbetto";

	Zombie* Horde = zombieHorde(N, name);

	for (int i = 0; i < N; i++)
		Horde[i].announce();

	delete [] Horde;

	return (0);
}
