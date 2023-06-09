/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschneid <jschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 15:36:41 by jschneid          #+#    #+#             */
/*   Updated: 2023/06/08 23:20:44 by jschneid         ###   ########.fr       */
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
	std::cout << "*--Type and soud check--*" << std::endl;
	for(int i = 0; i < 10; i++) {
		std::cout << "Type: " << Array[i]->getType() << std::endl;
		Array[i]->makeSound();
		std::cout << std::endl;
	}
	std::cout << std::endl;
	for (int i = 0; i < 10; i++)
		delete Array[i];

	std::cout << "\n*--Deep copy test--*" << std::endl;
	Cat *cat = new Cat();
	std::cout << "\nOriginal Cat created" << std::endl;
	cat->setIdea(0, "Let's play with this ball of wool");
	cat->setIdea(1, "Humans feed me and care for me, I must be a god");
	cat->setIdea(2, "Let's have a nap");
	cat->printIdeas();

	std::cout << "\nNew Cat" << std::endl;
	Cat *new_cat = new Cat(*cat);

	new_cat->printIdeas();

	std::cout << std::endl;
	delete cat;
	delete new_cat;

	return 0;
}
