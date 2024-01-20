/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otelliq <otelliq@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 12:07:56 by otelliq           #+#    #+#             */
/*   Updated: 2023/12/27 19:05:17 by otelliq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
int main()
{
	// const Animal* meta = new Animal();
	// const Animal* j = new Dog();
	// const Animal* i = new Cat();
	// const WrongCat* kat = new WrongCat();
	// const WrongAnimal* hayawan = new WrongAnimal();
	// std::cout << j->getType() << " " << std::endl;
	// std::cout << i->getType() << " " << std::endl;
	// i->makeSound(); //will output the cat sound!
	// j->makeSound();
	// meta->makeSound();
	// kat->makeSound();
	// hayawan->makeSound();
	const Animal* hayawan[6] = {new Dog(), new Cat(), new Dog(), new Cat(), new Dog(), new Cat()};
	int i = 0;
	while(i < 6)
	{
		delete hayawan[i];
		i++;
	}
	return 0;
}