/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschneid <jschneid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 15:36:41 by jschneid          #+#    #+#             */
/*   Updated: 2023/06/12 10:26:14 by jschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
#include "Brain.hpp"


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
	std::cout << "*--Type and sound check--*\n" << std::endl;
	for(int i = 0; i < 10; i++) {
		std::cout << "Type: " << Array[i]->getType() << std::endl;
		Array[i]->makeSound();
		std::cout << std::endl;
	}
	std::cout << std::endl;
	for (int i = 0; i < 10; i++)
		delete Array[i];

	std::cout << "\n*--Deep copy test--*\n" << std::endl;
	Cat *cat = new Cat();
	std::cout << "\n*--Original Cat created--*\n" << std::endl;
	cat->setIdea(0, "Let's play with this ball of wool");
	cat->setIdea(1, "Humans feed me and care for me, I must be a god");
	cat->setIdea(2, "Let's have a nap");
	cat->printIdeas();
	std::cout << "\n*--Create deep copy--*\n" << std::endl;
	Cat *new_cat = new Cat(*cat);
	std::cout << "\n*--Deep copy created--*\n" << std::endl;
	new_cat->setIdea(0, "Aight, let's get some food");
	new_cat->setIdea(1, "Oh boy, I'm freaking hungry");
	new_cat->setIdea(2, "Damn man, I'm that was really good");
	std::cout << "\n*--Print deep copy modified--*\n" << std::endl;
	new_cat->printIdeas();
	std::cout << "\n*--Print original--*\n" << std::endl;
	cat->printIdeas();
	std::cout << std::endl;
	delete cat;
	delete new_cat;

	return 0;
}
