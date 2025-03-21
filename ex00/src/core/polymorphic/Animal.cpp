/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 16:11:11 by dande-je          #+#    #+#             */
/*   Updated: 2025/03/22 17:59:32 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core/polymorphic/Animal.hpp"
#include "utils/TerminalColor.hpp"

Animal::Animal()
  : m_type("undefined"),
    m_color(TerminalColor::getInstance()),
    m_bgColor(BG_WHITE),
    m_strColor(BLACK) {
  log("Default animal constructor called");
}

Animal::Animal(const std::string& type)
  : m_type(type),
    m_color(TerminalColor::getInstance()),
    m_bgColor(BG_WHITE),
    m_strColor(BLACK) {
  log("Default animal parameterized constructor called");
}

Animal::Animal(const Animal& other)
  : m_type(other.m_type),
    m_color(TerminalColor::getInstance()),
    m_bgColor(BG_WHITE),
    m_strColor(BLACK) {
  log("Copy animal constructor called");
}

Animal::~Animal() {
  this->m_bgColor = BG_WHITE;
  this->m_strColor = BLACK;
  log("Destructor animal called");
}

Animal& Animal::operator=(const Animal& other) {
  if (this != &other) {
    this->m_bgColor = BG_WHITE;
    this->m_strColor = BLACK;
    log("Copy assignment animal operator called");
    this->m_type = other.m_type;
  }
  return *this;
}
