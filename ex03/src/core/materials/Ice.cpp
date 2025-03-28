/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 22:49:58 by dande-je          #+#    #+#             */
/*   Updated: 2025/03/28 20:13:28 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core/materials/Ice.hpp"
#include "core/entities/AMateria.hpp"

Ice::Ice() : AMateria("ice") {
  this->m_bgColor = BG_CYAN;
  this->m_strColor = BLACK;
  log("Default Ice constructor called");
}

Ice::Ice(const Ice& other) : AMateria(other) {
  this->m_bgColor = BG_CYAN;
  this->m_strColor = BLACK;
  log("Copy Ice constructor called");
}

Ice::~Ice() {
  this->m_bgColor = BG_CYAN;
  this->m_strColor = BLACK;
  log("Destructor Ice called");
}

Ice& Ice::operator=(const Ice& other) {
  if(this != &other) {
    this->m_bgColor = BG_CYAN;
    this->m_strColor = BLACK;
    log("Copy assignment Ice operator called");
    this->m_type = other.m_type;
  }
  return *this;
}
