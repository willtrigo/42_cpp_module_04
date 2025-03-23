/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BrainUtility.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 11:53:55 by dande-je          #+#    #+#             */
/*   Updated: 2025/03/23 11:54:06 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core/animal/type/brain/Brain.hpp"
#include "utils/TerminalColor.hpp"
#include <string>
#include <iostream>

void Brain::setIdea(int i, const std::string& idea) {
  if (i >= 0 && i < SIZE_IDEAS) {
    this->ideas[i] = idea;
  }
}

std::string Brain::getIdea(int i) const {
  if (i >= 0 && i < SIZE_IDEAS) {
    return this->ideas[i];
  }
  return "";
}

void Brain::log(const std::string& str) const {
  std::cout << this->m_color.setColor(this->m_bgColor, this->m_strColor, str) << std::endl;
}
