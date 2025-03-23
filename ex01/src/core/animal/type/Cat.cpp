/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 09:17:00 by dande-je          #+#    #+#             */
/*   Updated: 2025/03/23 09:18:37 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core/animal/Animal.hpp"
#include "core/animal/type/Cat.hpp"
#include "utils/TerminalColor.hpp"

Cat::Cat() {
  this->m_type = "cat";
  this->m_bgColor = BG_PURPLE;
  this->m_strColor = WHITE;
  log("Default cat constructor called");
}

Cat::Cat(const Cat& other) : Animal(other) {
  this->m_bgColor = BG_PURPLE;
  this->m_strColor = WHITE;
  log("Copy cat constructor called");
}

Cat::~Cat() {
  this->m_bgColor = BG_PURPLE;
  this->m_strColor = WHITE;
  log("Destructor cat called");
}

Cat& Cat::operator=(const Cat& other) {
  if (this != &other) {
    Animal::operator=(other);
    this->m_bgColor = BG_PURPLE;
    this->m_strColor = WHITE;
    log("Copy assignment cat operator called");
  }
  return *this;
}
