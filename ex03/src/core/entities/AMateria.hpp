/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 22:12:57 by dande-je          #+#    #+#             */
/*   Updated: 2025/03/24 22:47:00 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>
#include "core/interfaces/ICharacter.hpp"

class AMateria {
 public:
  AMateria(const std::string& type);
  virtual ~AMateria();

  const std::string& getType() const;
  virtual AMateria* clone() const = 0;
  virtual void use(ICharacter& target) = 0;

 protected:
  std::string m_type;
};

#endif // AMATERIA_HPP
