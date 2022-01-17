/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ametta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 12:52:20 by ametta            #+#    #+#             */
/*   Updated: 2021/10/27 12:52:44 by ametta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANB_HPP__
# define __HUMANB_HPP__
#include "Weapon.hpp"

class HumanB
{
	private:
		std::string const _name;
		Weapon*		_weapon;
	public:
		HumanB( std::string const name );
		~HumanB();
		void setWeapon ( Weapon & weapon );
		std::string const getName ( void );
		void attack ( void );
};

#endif
