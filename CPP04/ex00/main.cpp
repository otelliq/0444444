/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otelliq <otelliq@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 12:07:56 by otelliq           #+#    #+#             */
/*   Updated: 2024/01/20 10:47:01 by otelliq          ###   ########.fr       */
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
	// const Animal* klb = new Dog();
	const Animal* mcha = new Cat();
	// const WrongCat* machi_mcha = new WrongCat();
	// const WrongAnimal* hayawan = new WrongAnimal();
	// std::cout << klb->getType() << "klb" << std::endl;
	// std::cout << mcha->getType() << "9ta" << std::endl;
	mcha->makeSound();
	// klb->makeSound();
	// meta->makeSound();
	// machi_mcha->makeSound();
	// hayawan->makeSound();
	return 0;
}