/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschneid <jschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 15:36:41 by jschneid          #+#    #+#             */
/*   Updated: 2023/05/27 13:03:11 by jschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
// #include "WrongAnimal.hpp"
// #include "WrongCat.hpp"
#include <iostream>


int main()
{
        Animal *Array[10];

        for (int i = 0; i < 10; i++)
        {
                        if (i % 2 == 0)
                                Array[i] = new Cat();
                        else
                                Array[i] = new Dog();
        }
        std::cout << "\nType and sound test\n" << std::endl;
        for(int i = 0; i < 10; i++) {
                std::cout << "-->" << Array[i]->getType() << " " << std::endl;
                std::cout << "Make a sound!" << std::endl;
                Array[i]->makeSound();
        }
        std::cout << std::endl;
        for (int i = 0; i < 10; i++)
                delete Array[i];

        std::cout << "\nDeep copy test!" << std::endl;

        std::cout << "\nOriginal Cat" << std::endl;
        Cat *cat = new Cat();

        cat->setIdeas(0, "I like running around in a cyrcle");
        cat->setIdeas(1, "woof I dont know");
        cat->printIdeas();

        std::cout << "\nNew Cat" << std::endl;
        Cat *new_cat = new Cat(*cat);

        new_cat->printIdeas();

        std::cout << std::endl;
        delete cat;
        delete new_cat;
        return 0;
}
