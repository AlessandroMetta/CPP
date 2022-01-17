/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ametta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 12:59:51 by ametta            #+#    #+#             */
/*   Updated: 2021/10/27 12:59:53 by ametta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main ()
{
	Karen simone;

	simone.complain("DEBUG");
	simone.complain("INFO");
	simone.complain("WARNING");
	simone.complain("ERROR");
	return 0;
}
