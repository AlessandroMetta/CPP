/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ametta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 12:59:45 by ametta            #+#    #+#             */
/*   Updated: 2021/10/27 12:59:46 by ametta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __KAREN_HPP__
# define __KAREN_HPP__
# include <iostream>

class Karen
{
	private:
		void debug ( void );
		void info ( void );
		void warning ( void );
		void error ( void );
	public:
		Karen();
		~Karen();
		void complain ( std::string level );
};

#endif
