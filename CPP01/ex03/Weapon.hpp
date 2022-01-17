/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ametta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 12:52:58 by ametta            #+#    #+#             */
/*   Updated: 2021/10/27 12:52:59 by ametta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WEAPON_HPP__
# define __WEAPON_HPP__

# include <iostream>
# include <string>

class Weapon
{
	private:
		std::string _type;
	public:
		Weapon(std::string init_type);
		~Weapon();
		std::string const & getType ();
		void setType ( std::string type );
};

#endif
