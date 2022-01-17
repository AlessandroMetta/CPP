/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ametta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 12:39:09 by ametta            #+#    #+#             */
/*   Updated: 2021/10/27 12:50:41 by ametta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main ( void )
{
	std::string string = "HI THIS IS BRAIN";
	std::string* stringPTR = &string;
	std::string& stringREF = string;
	
	std::cout << "string address : " << &string << std::endl;
	std::cout << "address of the pointer to the string : " << stringPTR << std::endl;
	std::cout << "address of the reference to the string : " << &stringREF << std::endl;
	std::cout << "value of the pointer to the string : " << *stringPTR << std::endl;
	std::cout << "value of the reference to the string : " << stringREF << std::endl;

	return (0);
}
