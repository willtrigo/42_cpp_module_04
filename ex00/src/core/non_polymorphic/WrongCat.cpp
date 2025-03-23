/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 16:10:57 by dande-je          #+#    #+#             */
/*   Updated: 2025/03/22 20:39:14 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core/non_polymorphic/WrongAnimal.hpp"
#include "core/non_polymorphic/WrongCat.hpp"
#include "utils/TerminalColor.hpp"

WrongCat::WrongCat() {
  this->m_type = "wrong cat";
  this->m_bgColor = BG_ORANGE;
  this->m_strColor = WHITE;
  log("Default wrong cat constructor called");
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other) {
  this->m_bgColor = BG_ORANGE;
  this->m_strColor = WHITE;
  log("Copy wrong cat constructor called");
}

WrongCat::~WrongCat() {
  this->m_bgColor = BG_ORANGE;
  this->m_strColor = WHITE;
  log("Destructor wrong cat called");
}

WrongCat& WrongCat::operator=(const WrongCat& other) {
  if (this != &other) {
    WrongAnimal::operator=(other);
    this->m_bgColor = BG_ORANGE;
    this->m_strColor = WHITE;
    log("Copy assignment wrong cat operator called");
  }
  return *this;
}
