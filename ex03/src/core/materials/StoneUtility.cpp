/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StoneUtility.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 20:30:07 by dande-je          #+#    #+#             */
/*   Updated: 2025/03/28 20:47:31 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core/entities/AMateria.hpp"
#include "core/interfaces/ICharacter.hpp"
#include "core/materials/Stone.hpp"
#include "utils/TerminalColor.hpp"

AMateria* Stone::clone() const {
  return new Stone(*this);
}

void Stone::use(ICharacter& target) {
  this->m_bgColor = BG_RESET;
  this->m_strColor = ORANGE;
  log("* shoots a huge stone at " + target.getName() + " *");
}
