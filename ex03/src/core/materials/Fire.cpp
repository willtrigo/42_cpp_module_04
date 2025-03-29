/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fire.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 20:30:16 by dande-je          #+#    #+#             */
/*   Updated: 2025/03/28 20:53:05 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core/materials/Fire.hpp"
#include "core/entities/AMateria.hpp"
#include "utils/TerminalColor.hpp"

Fire::Fire() : AMateria("fire") {
  this->m_bgColor = BG_RED;
  this->m_strColor = BLACK;
  log("Default Fire constructor called");
}

Fire::Fire(const Fire& other) : AMateria(other) {
  this->m_bgColor = BG_RED;
  this->m_strColor = BLACK;
  log("Copy Fire constructor called");
}

Fire::~Fire() {
  this->m_bgColor = BG_RED;
  this->m_strColor = BLACK;
  log("Destructor Fire called");
}

Fire& Fire::operator=(const Fire& other) {
  if (this != &other) {
    this->m_bgColor = BG_RED;
    this->m_strColor = BLACK;
    log("Copy assignment Fire operator called");
    this->m_type = other.m_type;
  }
  return *this;
}
