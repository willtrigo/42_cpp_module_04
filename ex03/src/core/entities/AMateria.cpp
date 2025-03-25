/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 22:12:20 by dande-je          #+#    #+#             */
/*   Updated: 2025/03/24 22:47:16 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core/entities/AMateria.hpp"
#include "core/interfaces/ICharacter.hpp"

AMateria::AMateria(const std::string& type) : m_type(type) {}

AMateria::~AMateria() {}

const std::string& AMateria::getType() const {
  return this->m_type;
}
