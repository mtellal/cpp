/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 15:43:04 by mtellal           #+#    #+#             */
/*   Updated: 2022/07/31 18:04:03 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

void    replace(std::ofstream &output, std::string &text, std::string s1, std::string s2)
{
        int             index;
        std::string     ss;

        index = text.find(s1);
        while (index != -1)
        {
                output << text.substr(0, index) << s2;
                text = text.substr(index + s1.length(), text.length());
                index = text.find(s1);
        }
        if (text == "" || index == -1)
                output << text <<std::endl;
}

bool    verifyInputFile(std::ifstream &in, char **argv)
{       
        std::string     input;
                
        input = argv[1];
        if (input.rfind("/") != std::string::npos)
        {       
                std::cout << "input must be a simple file";
                return (false);
        }       
        in.open(argv[1]);
        if (!in.is_open())
        {       
                std::cout << "input file invalid";
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
                std::ofstream outputFile;

                if (!verifyInputFile(inputFile, argv))
                        return (0);
                outputFile.open((file.append(".replace").c_str()));
                while (std::getline(inputFile, text))
                {
                        replace(outputFile, text, argv[2], argv[3]);
                }
                inputFile.close();
                outputFile.close();
        }
        else
                std::cout << "Wrong number of arguments" << std::endl;
	return (0);
}
           
