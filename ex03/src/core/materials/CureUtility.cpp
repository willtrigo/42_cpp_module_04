/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CureUtility.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 18:08:59 by dande-je          #+#    #+#             */
/*   Updated: 2025/03/28 20:42:32 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core/entities/AMateria.hpp"
#include "core/interfaces/ICharacter.hpp"
#include "core/materials/Cure.hpp"
#include "utils/TerminalColor.hpp"

AMateria* Cure::clone() const {
  return new Cure(*this);
}

void Cure::use(ICharacter& target) {
  this->m_bgColor = BG_RESET;
  this->m_strColor = GREEN;
  log("* heals " + target.getName() + "'s wounds *");
}
