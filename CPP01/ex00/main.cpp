/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ametta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 12:37:30 by ametta            #+#    #+#             */
/*   Updated: 2021/10/27 12:37:32 by ametta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main ( void )
{
	Zombie*	ptrZombie = newZombie("Mario");
	randomChump("Luigi");
	ptrZombie->announce();
	delete ptrZombie;
	return (0);
}
