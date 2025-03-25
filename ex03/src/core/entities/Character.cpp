/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 22:13:00 by dande-je          #+#    #+#             */
/*   Updated: 2025/03/25 17:43:29 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core/entities/Character.hpp"
#include <string>

Character::Character(const std::string& name) : m_name(name) {
  for (int i = 0; i < INVENTORY_SIZE; ++i) {
    this->m_inventory[i] = 0;
  }
}

Character::Character(const Character& other) : m_name(other.m_name) {
  for (int i = 0; i < INVENTORY_SIZE; ++i) {
    this->m_inventory[i] = other.m_inventory[i] ? other.m_inventory[i]->clone() : 0;
  }
}

Character::~Character() {
  for (int i = 0; i < INVENTORY_SIZE; ++i) {
    if (this->m_inventory[i]) {
      delete this->m_inventory[i];
    }
  }
}

Character& Character::operator=(const Character& other) {
  if (this != &other) {
    this->m_name = other.m_name;
    for (int i = 0; i < INVENTORY_SIZE; ++i) {
      if (this->m_inventory[i]) {
        delete this->m_inventory[i];
      }
      this->m_inventory[i] = other.m_inventory[i] ? other.m_inventory[i]->clone() : 0;
    }
  }
  return *this;
}
