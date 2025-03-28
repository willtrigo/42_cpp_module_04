/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 17:59:53 by dande-je          #+#    #+#             */
/*   Updated: 2025/03/27 20:28:40 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core/materials/Cure.hpp"
#include "core/entities/AMateria.hpp"
#include "utils/TerminalColor.hpp"

Cure::Cure() : AMateria("cure") {
  this->m_bgColor = BG_GREEN;
  this->m_strColor = BLACK;
  log("Default Cure constructor called");
}

Cure::Cure(const Cure& other) : AMateria(other) {
  this->m_bgColor = BG_GREEN;
  this->m_strColor = BLACK;
  log("Copy Cure constructor called");
}

Cure::~Cure() {
  this->m_bgColor = BG_GREEN;
  this->m_strColor = BLACK;
  log("Destructor Cure called");
}

Cure& Cure::operator=(const Cure& other) {
  if (this != &other) {
    this->m_bgColor = BG_GREEN;
    this->m_strColor = BLACK;
    log("Copy assignment Cure operator called");
    this->m_type = other.m_type;
    this->m_bgColor = BG_GREEN;
    this->m_strColor = BLACK;
  }
  return *this;
}
