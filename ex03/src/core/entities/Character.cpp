/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 22:13:00 by dande-je          #+#    #+#             */
/*   Updated: 2025/03/28 19:59:27 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core/entities/Character.hpp"
#include "utils/TerminalColor.hpp"
#include <string>

Character::Character()
  : m_color(TerminalColor::getInstance()),
    m_bgColor(BG_PURPLE),
    m_strColor(BLACK),
    m_name("undefined character") {
  log("Default Character constructor called");
  for (int i = 0; i < INVENTORY_SIZE; ++i) {
    this->m_inventory[i] = NULL;
  }
}

Character::Character(const std::string& name)
  : m_color(TerminalColor::getInstance()),
    m_bgColor(BG_PURPLE),
    m_strColor(BLACK),
    m_name(name) {
  log("Default Character parameterized constructor called");
  for (int i = 0; i < INVENTORY_SIZE; ++i) {
    this->m_inventory[i] = NULL;
  }
}

Character::Character(const Character& other)
  : m_color(TerminalColor::getInstance()),
    m_name(other.m_name) {
  this->m_bgColor = BG_PURPLE;
  this->m_strColor = BLACK;
  log("Copy Character constructor called");
  for (int i = 0; i < INVENTORY_SIZE; ++i) {
    this->m_inventory[i] = other.m_inventory[i] ? other.m_inventory[i]->clone() : NULL;
  }
}

Character::~Character() {
  this->m_bgColor = BG_PURPLE;
  this->m_strColor = BLACK;
  log("Destructor Character called");
  for (int i = 0; i < INVENTORY_SIZE; ++i) {
    if (this->m_inventory[i]) {
      delete this->m_inventory[i];
    }
  }
}

Character& Character::operator=(const Character& other) {
  if (this != &other) {
    this->m_bgColor = BG_PURPLE;
    this->m_strColor = BLACK;
    log("Copy assignment Character operator called");
    this->m_name = other.m_name;
    for (int i = 0; i < INVENTORY_SIZE; ++i) {
      if (this->m_inventory[i]) {
        delete this->m_inventory[i];
      }
      this->m_inventory[i] = other.m_inventory[i] ? other.m_inventory[i]->clone() : NULL;
    }
    this->m_bgColor = BG_PURPLE;
    this->m_strColor = BLACK;
  }
  return *this;
}
