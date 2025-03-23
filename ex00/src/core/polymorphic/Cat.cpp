/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 17:18:22 by dande-je          #+#    #+#             */
/*   Updated: 2025/03/22 20:36:30 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core/polymorphic/Animal.hpp"
#include "core/polymorphic/Cat.hpp"
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
