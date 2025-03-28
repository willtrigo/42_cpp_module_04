/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSourceUtility.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 11:44:05 by dande-je          #+#    #+#             */
/*   Updated: 2025/03/28 20:06:13 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core/entities/AMateria.hpp"
#include "core/services/MateriaSource.hpp"
#include <iostream>
#include <string>

void MateriaSource::learnMateria(AMateria* m) {
  for (int i = 0; i < LEARNED_MATERIAS_SIZE; ++i) {
    if (!this->m_learnedMaterias[i]) {
      this->m_learnedMaterias[i] = m;
      break;
    }
  }
}

AMateria* MateriaSource::createMateria(const std::string& type) {
  for (int i = 0; i < LEARNED_MATERIAS_SIZE; ++i) {
    if (this->m_learnedMaterias[i] && this->m_learnedMaterias[i]->getType() == type) {
      return this->m_learnedMaterias[i]->clone();
    }
  }
  return NULL;
}

void MateriaSource::log(const std::string& str) const {
  std::cout << this->m_color.setColor(this->m_bgColor, this->m_strColor, str) << std::endl;
}
