/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IceUtility.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 22:50:38 by dande-je          #+#    #+#             */
/*   Updated: 2025/03/28 20:16:26 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core/entities/AMateria.hpp"
#include "core/interfaces/ICharacter.hpp"
#include "core/materials/Ice.hpp"
#include "utils/TerminalColor.hpp"

AMateria* Ice::clone() const {
  return new Ice(*this);
}

void Ice::use(ICharacter& target) {
  this->m_bgColor = BG_RESET;
  this->m_strColor = CYAN;
  log("* shoots an ice bolt at " + target.getName() + " *");
}
