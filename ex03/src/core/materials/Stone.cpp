/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Stone.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 20:29:55 by dande-je          #+#    #+#             */
/*   Updated: 2025/03/28 20:53:31 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core/materials/Stone.hpp"
#include "core/entities/AMateria.hpp"
#include "utils/TerminalColor.hpp"

Stone::Stone() : AMateria("stone") {
  this->m_bgColor = BG_ORANGE;
  this->m_strColor = BLACK;
  log("Default Stone constructor called");
}

Stone::Stone(const Stone& other) : AMateria(other) {
  this->m_bgColor = BG_ORANGE;
  this->m_strColor = BLACK;
  log("Copy Stone constructor called");
}

Stone::~Stone() {
  this->m_bgColor = BG_ORANGE;
  this->m_strColor = BLACK;
  log("Destructor Stone called");
}

Stone& Stone::operator=(const Stone& other) {
  if(this != &other) {
    this->m_bgColor = BG_ORANGE;
    this->m_strColor = BLACK;
    log("Copy assignment Stone operator called");
    this->m_type = other.m_type;
  }
  return *this;
}
