/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IceUtility.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 22:50:38 by dande-je          #+#    #+#             */
/*   Updated: 2025/03/27 11:05:34 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core/entities/AMateria.hpp"
#include "core/interfaces/ICharacter.hpp"
#include "core/materials/Ice.hpp"
#include <iostream>

AMateria* Ice::clone() const {
  return new Ice(*this);
}

void Ice::use(ICharacter& target) {
  std::cout << "* shoots an ice bolt at " + target.getName() + " *" << std::endl;
}
