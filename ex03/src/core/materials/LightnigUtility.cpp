/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LightnigUtility.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 20:29:41 by dande-je          #+#    #+#             */
/*   Updated: 2025/03/28 20:42:57 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core/entities/AMateria.hpp"
#include "core/interfaces/ICharacter.hpp"
#include "core/materials/Lightnig.hpp"
#include "utils/TerminalColor.hpp"

AMateria* Lightnig::clone() const {
  return new Lightnig(*this);
}

void Lightnig::use(ICharacter& target) {
  this->m_bgColor = BG_RESET;
  this->m_strColor = YELLOW;
  log("* shoots a thunder light at " + target.getName() + " *");
}
