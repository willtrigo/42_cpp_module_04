/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 16:10:52 by dande-je          #+#    #+#             */
/*   Updated: 2025/03/22 20:31:58 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core/non_polymorphic/WrongAnimal.hpp"
#include "utils/TerminalColor.hpp"

WrongAnimal::WrongAnimal()
  : m_type("WrongAnimal"),
    m_color(TerminalColor::getInstance()),
    m_bgColor(BG_RED),
    m_strColor(WHITE) {
  log("Default wrong animal constructor called");
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
  : m_type(other.m_type),
    m_color(TerminalColor::getInstance()),
    m_bgColor(BG_RED),
    m_strColor(WHITE) {
  log("Copy wrong animal constructor called");
}

WrongAnimal::~WrongAnimal() {
  this->m_bgColor = BG_RED;
  this->m_strColor = WHITE;
  log("Destructor wrong animal called");
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {
  if (this != &other) {
    this->m_bgColor = BG_RED;
    this->m_strColor = WHITE;
    log("Copy assignment wrong animal operator called");
    this->m_type = other.m_type;
  }
  return *this;
}
