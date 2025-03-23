/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 11:40:59 by dande-je          #+#    #+#             */
/*   Updated: 2025/03/23 11:45:47 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core/animal/AAnimal.hpp"
#include "utils/TerminalColor.hpp"

AAnimal::AAnimal()
  : m_type("undefined"),
    m_color(TerminalColor::getInstance()),
    m_bgColor(BG_WHITE),
    m_strColor(BLACK) {
  log("Default animal constructor called");
}

AAnimal::AAnimal(const std::string& type)
  : m_type(type),
    m_color(TerminalColor::getInstance()),
    m_bgColor(BG_WHITE),
    m_strColor(BLACK) {
  log("Default animal parameterized constructor called");
}

AAnimal::AAnimal(const AAnimal& other)
  : m_type(other.m_type),
    m_color(TerminalColor::getInstance()),
    m_bgColor(BG_WHITE),
    m_strColor(BLACK) {
  log("Copy animal constructor called");
}

AAnimal::~AAnimal() {
  this->m_bgColor = BG_WHITE;
  this->m_strColor = BLACK;
  log("Destructor animal called");
}

AAnimal& AAnimal::operator=(const AAnimal& other) {
  if (this != &other) {
    this->m_bgColor = BG_WHITE;
    this->m_strColor = BLACK;
    log("Copy assignment animal operator called");
    this->m_type = other.m_type;
  }
  return *this;
}
