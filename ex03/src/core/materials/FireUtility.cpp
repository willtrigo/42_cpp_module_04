/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FireUtility.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 20:30:32 by dande-je          #+#    #+#             */
/*   Updated: 2025/03/28 20:42:26 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core/entities/AMateria.hpp"
#include "core/interfaces/ICharacter.hpp"
#include "core/materials/Fire.hpp"
#include "utils/TerminalColor.hpp"

AMateria* Fire::clone() const {
  return new Fire(*this);
}

void Fire::use(ICharacter& target) {
  this->m_bgColor = BG_RESET;
  this->m_strColor = RED;
  log("* shoots a fire ball at " + target.getName() + " *");
}
