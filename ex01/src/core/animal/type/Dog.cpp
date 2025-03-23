/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 09:19:22 by dande-je          #+#    #+#             */
/*   Updated: 2025/03/23 09:20:34 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core/animal/Animal.hpp"
#include "core/animal/type/Dog.hpp"
#include "utils/TerminalColor.hpp"

Dog::Dog() {
  this->m_type = "dog";
  this->m_bgColor = BG_CYAN;
  this->m_strColor = WHITE;
  log("Default dog constructor called");
}

Dog::Dog(const Dog& other) : Animal(other) {
  this->m_bgColor = BG_CYAN;
  this->m_strColor = WHITE;
  log("Copy dog constructor called");
}

Dog::~Dog() {
  this->m_bgColor = BG_CYAN;
  this->m_strColor = WHITE;
  log("Destructor dog called");
}

Dog& Dog::operator=(const Dog& other) {
  if (this != &other) {
    Animal::operator=(other);
    this->m_bgColor = BG_CYAN;
    this->m_strColor = WHITE;
    log("Copy assignment dog operator called");
  }
  return *this;
}
