/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateriaUtility.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 19:45:26 by dande-je          #+#    #+#             */
/*   Updated: 2025/03/27 19:50:46 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core/entities/AMateria.hpp"
#include <iostream>
#include <string>

const std::string& AMateria::getType() const {
  return this->m_type;
}

void AMateria::log(const std::string& str) const {
  std::cout << this->m_color.setColor(this->m_bgColor, this->m_strColor, str) << std::endl;
}
