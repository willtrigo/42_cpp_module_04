/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 17:59:53 by dande-je          #+#    #+#             */
/*   Updated: 2025/03/26 22:47:57 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core/materials/Cure.hpp"
#include "core/entities/AMateria.hpp"

Cure::Cure() : AMateria("cure") {}

Cure::Cure(const Cure& other) : AMateria(other) {}

Cure::~Cure() {}

Cure& Cure::operator=(const Cure& other) {
  if (this != &other) {
    this->m_type = other.m_type;
  }
  return *this;
}
