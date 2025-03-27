/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 22:16:09 by dande-je          #+#    #+#             */
/*   Updated: 2025/03/27 11:43:45 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core/services/MateriaSource.hpp"
MateriaSource::MateriaSource() {
  for (int i = 0; i < LEARNED_MATERIAS_SIZE; ++i) {
    this->m_learnedMaterias[i] = NULL;
  }
}

MateriaSource::MateriaSource(const MateriaSource& other) {
  for (int i = 0; i < LEARNED_MATERIAS_SIZE; ++i) {
    this->m_learnedMaterias[i] = other.m_learnedMaterias[i] ? other.m_learnedMaterias[i]->clone() : NULL;
  }
}

MateriaSource::~MateriaSource() {
  for (int i = 0; i < LEARNED_MATERIAS_SIZE; ++i) {
    if (this->m_learnedMaterias[i]) {
      delete this->m_learnedMaterias[i];
    }
  }
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other) {
  if (this != &other) {
    for (int i = 0; i < LEARNED_MATERIAS_SIZE; ++i) {
      if (this->m_learnedMaterias[i]) {
        delete this->m_learnedMaterias[i];
      }
      this->m_learnedMaterias[i] = other.m_learnedMaterias[i] ? other.m_learnedMaterias[i]->clone() : NULL;
    }
  }
  return *this;
}
