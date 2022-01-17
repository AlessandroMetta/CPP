/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ametta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 12:52:27 by ametta            #+#    #+#             */
/*   Updated: 2021/10/27 12:52:31 by ametta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANA_HPP__
# define __HUMANA_HPP__
# include "Weapon.hpp"

class HumanA
{
	private:
		std::string const _name;
		Weapon & _weapon;
	public:
		HumanA( std::string const name, Weapon & weapon );
		~HumanA();
		std::string const getName ( void );
		void attack ( void );
};

#endif
