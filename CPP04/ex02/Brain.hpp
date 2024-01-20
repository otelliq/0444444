/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otelliq <otelliq@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 17:59:09 by otelliq           #+#    #+#             */
/*   Updated: 2023/12/27 18:51:23 by otelliq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include<iostream>

class Brain
{
	private:
	std::string ideas[100];
	public:
	Brain();
	Brain(const std::string type);
	Brain(const Brain &new_);
	Brain &operator=(const Brain &copy);
	~Brain();
};