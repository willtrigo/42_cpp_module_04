/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Lightnig.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 20:29:15 by dande-je          #+#    #+#             */
/*   Updated: 2025/03/28 20:53:24 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core/materials/Lightnig.hpp"
#include "core/entities/AMateria.hpp"
#include "utils/TerminalColor.hpp"

Lightnig::Lightnig() : AMateria("lightnig") {
  this->m_bgColor = BG_YELLOW;
  this->m_strColor = BLACK;
  log("Default Lightnig constructor called");
}

Lightnig::Lightnig(const Lightnig& other) : AMateria(other) {
  this->m_bgColor = BG_YELLOW;
  this->m_strColor = BLACK;
  log("Copy Lightnig constructor called");
}

Lightnig::~Lightnig() {
  this->m_bgColor = BG_YELLOW;
  this->m_strColor = BLACK;
  log("Destructor Lightnig called");
}

Lightnig& Lightnig::operator=(const Lightnig& other) {
  if (this != &other) {
    this->m_bgColor = BG_YELLOW;
    this->m_strColor = BLACK;
    log("Copy assignment Lightnig operator called");
    this->m_type = other.m_type;
  }
  return *this;
}
