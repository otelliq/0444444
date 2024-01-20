/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otelliq <otelliq@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 15:02:35 by otelliq           #+#    #+#             */
/*   Updated: 2024/01/03 12:13:56 by otelliq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
	Brain	*Cat_brain;
	public :
	Cat();
	~Cat();
	Cat(std::string name);
	Cat(const Cat &new_);
	void makeSound()const;
	Cat &operator=(const Cat &copy);
};