/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CatUtility.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 11:49:25 by dande-je          #+#    #+#             */
/*   Updated: 2025/03/23 11:51:28 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core/animal/type/brain/Brain.hpp"
#include "core/animal/type/Cat.hpp"

void Cat::makeSound() const {
  log("meow meow");
}

Brain* Cat::getBrain() const {
  return this->m_brain;
}
