/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 22:12:20 by dande-je          #+#    #+#             */
/*   Updated: 2025/03/27 20:06:50 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core/entities/AMateria.hpp"
#include "core/interfaces/ICharacter.hpp"
#include "utils/TerminalColor.hpp"

AMateria::AMateria()
  : m_type("undefined materia"),
    m_color(TerminalColor::getInstance()),
    m_bgColor(BG_WHITE),
    m_strColor(RED) {
  log("Default AMateria constructor called");
}

AMateria::AMateria(const std::string& type)
  : m_type(type),
    m_color(TerminalColor::getInstance()),
    m_bgColor(BG_WHITE),
    m_strColor(RED) {
  log("Default AMateria parameterized constructor called");
}

AMateria::AMateria(const AMateria& other) : m_color(TerminalColor::getInstance()) {
  this->m_bgColor = BG_WHITE;
  this->m_strColor = RED;
  log("Copy AMateria constructor called");
  *this = other;
  this->m_bgColor = BG_WHITE;
  this->m_strColor = RED;
}

AMateria::~AMateria() {
  this->m_bgColor = BG_WHITE;
  this->m_strColor = RED;
  log("Destructor AMateria called");
}

AMateria& AMateria::operator=(const AMateria& other) {
  if (this != &other) {
    this->m_bgColor = BG_WHITE;
    this->m_strColor = RED;
    log("Copy assignment AMateria operator called");
    this->m_type = other.m_type;
    this->m_bgColor = BG_WHITE;
    this->m_strColor = RED;
  }
  return *this;
}
