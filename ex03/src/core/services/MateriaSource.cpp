/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 22:16:09 by dande-je          #+#    #+#             */
/*   Updated: 2025/03/28 20:04:52 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core/services/MateriaSource.hpp"
#include "utils/TerminalColor.hpp"
MateriaSource::MateriaSource()
  : m_color(TerminalColor::getInstance()),
    m_bgColor(BG_ORANGE),
    m_strColor(BLACK) {
  log("Default MateriaSource constructor called");
  for (int i = 0; i < LEARNED_MATERIAS_SIZE; ++i) {
    this->m_learnedMaterias[i] = NULL;
  }
}

MateriaSource::MateriaSource(const MateriaSource& other) : m_color(TerminalColor::getInstance()) {
  this->m_bgColor = BG_ORANGE;
  this->m_strColor = BLACK;
  log("Copy MateriaSource constructor called");
  for (int i = 0; i < LEARNED_MATERIAS_SIZE; ++i) {
    this->m_learnedMaterias[i] = other.m_learnedMaterias[i] ? other.m_learnedMaterias[i]->clone() : NULL;
  }
}

MateriaSource::~MateriaSource() {
  this->m_bgColor = BG_ORANGE;
  this->m_strColor = BLACK;
  log("Destructor MateriaSource called");
  for (int i = 0; i < LEARNED_MATERIAS_SIZE; ++i) {
    if (this->m_learnedMaterias[i]) {
      delete this->m_learnedMaterias[i];
    }
  }
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other) {
  if (this != &other) {
    this->m_bgColor = BG_ORANGE;
    this->m_strColor = BLACK;
    log("Copy assignment MateriaSource operator called");
    for (int i = 0; i < LEARNED_MATERIAS_SIZE; ++i) {
      if (this->m_learnedMaterias[i]) {
        delete this->m_learnedMaterias[i];
      }
      this->m_learnedMaterias[i] = other.m_learnedMaterias[i] ? other.m_learnedMaterias[i]->clone() : NULL;
    }
  }
  return *this;
}
