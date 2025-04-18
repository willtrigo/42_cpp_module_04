/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DogUtility.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 09:19:40 by dande-je          #+#    #+#             */
/*   Updated: 2025/03/23 10:34:00 by dande-je         ###   ########.fr       */
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
