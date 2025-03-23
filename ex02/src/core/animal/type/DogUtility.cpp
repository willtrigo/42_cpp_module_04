/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DogUtility.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 11:50:05 by dande-je          #+#    #+#             */
/*   Updated: 2025/03/23 11:53:21 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core/animal/type/brain/Brain.hpp"
#include "core/animal/type/Dog.hpp"

void Dog::makeSound() const {
  log("au au");
}

Brain* Dog::getBrain() const {
  return this->m_brain;
}
