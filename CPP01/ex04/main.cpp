/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ametta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 12:56:53 by ametta            #+#    #+#             */
/*   Updated: 2021/10/27 12:56:54 by ametta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

int main ( int argc, char** argv)
{
	if (argc == 4)
	{
		std::string filename = argv[1];
		std::string str1 = argv[2];
		std::string str2 = argv[3]; 
		std::string linegetted;
		std::fstream srcFile(filename);
		if (!srcFile.is_open())
		{
			std::cout << "Error: file does not exist" << std::endl;
			return 1;
		}
		std::ofstream dstFile(filename.append(".replace"));
		size_t pos;
		while (getline(srcFile, linegetted))
		{
			while ((pos = linegetted.find(argv[2])) != std::string::npos)
			{
				linegetted.erase(pos, str1.length());
				linegetted.insert(pos, str2);
			}
			dstFile << linegetted << std::endl;
		}
		srcFile.close();
		dstFile.close();
		return 0;
	}
	else
		std::cout << "Error: argument" << std::endl; 
	return 1;
}
