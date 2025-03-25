/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CharacterUtility.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 17:44:37 by dande-je          #+#    #+#             */
/*   Updated: 2025/03/25 17:57:57 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core/entities/AMateria.hpp"
#include "core/entities/Character.hpp"
#include "core/interfaces/ICharacter.hpp"
#include <string>

const std::string& Character::getName() const {
  return this->m_name;
}

void Character::equip(AMateria* m) {
  for (int i = 0; i < INVENTORY_SIZE; ++i) {
    if (!this->m_inventory[i]) {
      this->m_inventory[i] = m;
      break;
    }
  }
}

void Character::unequip(int idx) {
  if (idx >= 0 && idx < INVENTORY_SIZE) {
    this->m_inventory[idx] = 0;
  }
}

void Character::use(int idx, ICharacter& target) {
  if (idx >= 0 && idx < INVENTORY_SIZE && this->m_inventory[idx]) {
    m_inventory[idx]->use(target);
  }
}
