/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 14:21:09 by mtellal           #+#    #+#             */
/*   Updated: 2022/08/09 15:43:51 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

void    incrementGrade(Bureaucrat &b, int i)
{
        try
        {
                while (i > 0)
                {
                        b.incrementGrade();
                        i--;
                }
        } catch (const std::exception &e)
        {
                std::cout << b.getName() << " couldn't incrementGrade because: " << e.what() << std::endl;
        }
}

void    decrementGrade(Bureaucrat &b, int i)
{
        try
        {
                while (i > 0)
                {
                        b.decrementGrade();
                        i--;
                }
        } catch (const std::exception &e)
        {
                std::cout << b.getName() << " couldn't decrementGrade because: " << e.what() << std::endl;
        }
}

int main()
{

        Bureaucrat bob("bob", 1);

        {
                Bureaucrat bob2(bob);
                Bureaucrat bob3;
        
                std::cout << bob << std::endl;
                std::cout << bob2 << std::endl;

                bob.decrementGrade();

                bob3 = bob;
                Bureaucrat bob3bis(bob);

                std::cout << bob3 << std::endl;
                std::cout << bob3bis << std::endl;

                bob.incrementGrade();
        }

        std::cout << std::endl << "//////////////       FORMS TESTS     /////////////////" << std::endl;

        std::cout << std::endl << bob << std::endl;

        ShrubberyCreationForm   shrub("shrubbery");
        RobotomyRequestForm     robot("robot");
        PresidentialPardonForm  president("president");

        std::cout << std::endl;

        std::cout << shrub << std::endl;
        std::cout << robot << std::endl;
        std::cout << president << std::endl;

        std::cout << std::endl;

        std::cout << " /// tests with low grade bureaucrat ////" << std::endl;
        
        {
                Bureaucrat      bab("bab", 150);
                
                std::cout << std::endl;

                bab.signForm(shrub);
                bab.signForm(robot);
                bab.signForm(president);
                
                std::cout << std::endl;

                bab.executeForm(shrub);
                bab.executeForm(robot);
                bab.executeForm(president);

                std::cout << std::endl << "/// increment bureaucrat ////" << std::endl;

                incrementGrade(bab, 78);

                std::cout << bab << std::endl;

                std::cout << std::endl << "/// sign and execute ////" << std::endl;

                std::cout << std::endl;

                bab.signForm(shrub);
                bab.signForm(robot);
                bab.signForm(president);
                
                std::cout << std::endl;

                bab.executeForm(shrub);
                bab.executeForm(robot);
                bab.executeForm(president);
        }

        std::cout << std::endl << "/// sign and execute all forms ///" << std::endl;

        std::cout << bob << std::endl;

        bob.signForm(shrub);
        bob.signForm(robot);
        bob.signForm(president);
        
        std::cout << std::endl;

        bob.executeForm(shrub);
        bob.executeForm(robot);
        bob.executeForm(president);
        
        std::cout << std::endl;


	return (0);
}
