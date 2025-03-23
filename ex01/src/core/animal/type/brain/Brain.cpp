/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 09:47:46 by dande-je          #+#    #+#             */
/*   Updated: 2025/03/23 10:15:22 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core/animal/type/brain/Brain.hpp"
#include "utils/TerminalColor.hpp"

Brain::Brain()
  : m_color(TerminalColor::getInstance()),
    m_bgColor(BG_YELLOW),
    m_strColor(BLACK) {
  log("Default brain constructor called");
}

Brain::Brain(const Brain& other)
  : m_color(TerminalColor::getInstance()),
    m_bgColor(BG_YELLOW),
    m_strColor(BLACK) {
  for (int i = 0; i < SIZE_IDEAS; ++i) {
    this->ideas[i] = other.ideas[i];
  }
  log("Copy brain constructor called");
}

Brain::~Brain() {
  this->m_bgColor = BG_YELLOW;
  this->m_strColor = BLACK;
  log("Destructor brain called");
}

Brain& Brain::operator=(const Brain& other) {
  if(this != &other) {
    this->m_bgColor = BG_YELLOW;
    this->m_strColor = BLACK;
    log("Copy assignment brain operator called");
    for (int i = 0; i < SIZE_IDEAS; ++i) {
      this->ideas[i] = other.ideas[i];
    }
  }
  return *this;
}
