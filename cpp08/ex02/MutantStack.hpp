/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 15:28:38 by mtellal           #+#    #+#             */
/*   Updated: 2022/09/14 15:32:55 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <iterator>
#include <deque>

template<class T, class Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{  

    public:

        MutantStack(void);
        MutantStack(const MutantStack &);
        virtual ~MutantStack(void);
        MutantStack     operator=(const MutantStack &);

        typedef typename Container::iterator                iterator;
        typedef typename Container::const_iterator          const_iterator;
        typedef typename Container::reverse_iterator        reverse_iterator;
        typedef typename Container::const_reverse_iterator  const_reverse_iterator;
        
        iterator                begin(void) {return (this->c.begin());};
        iterator                end(void) {return (this->c.end());};

        const_iterator          begin(void) const {return (this->c.begin());};
        const_iterator          end(void) const {return (this->c.end());};

        reverse_iterator        rbegin(void) {return (this->c.rbegin());};
        reverse_iterator        rend(void) {return (this->c.rend());};

        const_reverse_iterator  rbegin(void) const {return (this->c.rbegin());};
        const_reverse_iterator  rend(void) const {return (this->c.rend());};

};


template<class T, class Container>
MutantStack<T, Container>::MutantStack(void) {}

template<class T, class Container>
MutantStack<T, Container>::MutantStack(const MutantStack<T, Container> &src) 
{
    this->c = src.c;
}

template<class T, class Container>
MutantStack<T, Container>::~MutantStack(void) {}

template<class T, class Container>
MutantStack<T, Container>     MutantStack<T, Container>::operator=(const MutantStack<T, Container> &src)
{
    if (this != &src)
    {
        this->c = src.c;
    }
    return (*this);
}

#endif 
