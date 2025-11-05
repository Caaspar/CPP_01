/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgerner <cgerner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 13:58:34 by cgerner           #+#    #+#             */
/*   Updated: 2025/07/15 15:47:13 by cgerner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Usage: ./SedIsForLosers <filename> <s1> <s2>" << std::endl;
		return (1);
	}

	std::ifstream infile(argv[1]);
	if (!infile)
	{
		std::cerr << "Error opening infile" << std::endl;
		return (1);
	}
	std::string contentFile((std::istreambuf_iterator<char>(infile)),
                   std::istreambuf_iterator<char>());
	infile.close();

	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::string	result;

	size_t	i = 0;
	size_t	founds1 = 0;
	while ((founds1 = contentFile.find(s1, i)) != std::string::npos)
	{
		result.append(contentFile.substr(i, founds1 - i));
		result.append(s2);
		i = founds1 + s1.length();
	}
	result.append(contentFile.substr(i));

	std::string replaceFile = std::string(argv[1]) + ".replace";
	std::ofstream outfile(replaceFile.c_str());
	if (!outfile)
	{
		std::cerr << "Error creating outfile" << std::endl;
		return (1);
	}
	outfile << result;
	outfile.close();
}
