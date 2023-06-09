/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschneid <jschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 15:36:41 by jschneid          #+#    #+#             */
/*   Updated: 2023/06/13 14:07:03 by jschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

int main(void)
{
	const Animal* randomAnimal = new Animal();
	const WrongAnimal* wrongRandomAnimal = new WrongAnimal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	const WrongAnimal* wrongCat = new WrongCat();

	std::cout << dog->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	std::cout << wrongCat->getType() << " " << std::endl;
	cat->makeSound(); // will output the cat sound!
	wrongCat->makeSound(); // will output the cat sound!
	dog->makeSound();
	randomAnimal->makeSound();
	wrongRandomAnimal->makeSound();
	delete randomAnimal;
	delete wrongRandomAnimal;
	delete dog;
	delete cat;
	delete wrongCat;
	return 0;
}
