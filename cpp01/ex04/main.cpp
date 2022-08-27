/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 15:43:04 by mtellal           #+#    #+#             */
/*   Updated: 2022/08/27 10:56:39 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

unsigned int    nbLine(char *file)
{
	std::ifstream	infile(file);
        unsigned int    i = 0;
        std::string     text;

        while (std::getline(infile, text))
        {
                i++;
        }
        return (i);
}

void    replace(std::ofstream &output, std::string &text, std::string s1, std::string s2, unsigned int &nbline)
{
        int             index = -1;
        std::string     ss;

        if (s1 != "")
                index = text.find(s1);
        if (index != -1)
        {
                while (index != -1)
                {       
                        output << text.substr(0, index) << s2;
                        text = text.substr(index + s1.length(), text.length());
                        index = text.find(s1); 
                }
        }
        if (text.length() > 0)
                output << text;
        if (nbline > 0)
        {
		if (s1 == "\\n")
			output << s2;
		else
                	output << std::endl;
                nbline--;
        }
}

bool    verifyInputFile(std::ifstream &in, char **argv)
{       
        std::string     input(argv[1]);
     
        in.open(argv[1]);
        if (!in.is_open())
        {       
                std::cout << "input file invalid" << std::endl;
                in.close();
                return (false);
        }       
        return (true);  
}               
                             
int     main(int argc, char **argv)
{       
        if (argc == 4)
        {
                std::string     file(argv[1]);
                std::string     text;
                std::ifstream   inputFile;
                std::ofstream   outputFile;
                unsigned int    nbline = 0;

                if (!verifyInputFile(inputFile, argv))
                        return (0);
                outputFile.open((file.append(".replace").c_str()));
                nbline = nbLine(argv[1]);
                while (std::getline(inputFile, text) && outputFile.is_open())
                {
                        replace(outputFile, text, argv[2], argv[3], nbline);
                }
                inputFile.close();
                outputFile.close();
        }
        else
                std::cout << "Wrong number of arguments" << std::endl;
	return (0);
}
           
