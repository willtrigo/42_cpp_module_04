/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimalUtility.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 19:16:29 by dande-je          #+#    #+#             */
/*   Updated: 2025/03/22 20:28:29 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core/non_polymorphic/WrongAnimal.hpp"
#include <iostream>

void WrongAnimal::makeSound() const {
  log("WrongAnimal sound");
}

std::string WrongAnimal::getType() const {
  return this->m_type;
}

void WrongAnimal::log(const std::string& str) const {
  std::cout << this->m_color.setColor(this->m_bgColor, this->m_strColor, str) << std::endl;
}
