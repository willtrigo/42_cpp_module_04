/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 22:12:57 by dande-je          #+#    #+#             */
/*   Updated: 2025/03/27 20:01:22 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>
#include "core/interfaces/ICharacter.hpp"
#include "utils/TerminalColor.hpp"

class AMateria {
 public:
  AMateria(const std::string& type);
  AMateria(const AMateria& other);
  virtual ~AMateria();

  AMateria& operator=(const AMateria& other);

  const std::string& getType() const;
  virtual AMateria* clone() const = 0;
  virtual void use(ICharacter& target) = 0;

 protected:
  std::string m_type;
  const TerminalColor& m_color;
  BgColor m_bgColor;
  StrColor m_strColor;

  void log(const std::string& str) const;

 private:
  AMateria();
};

#endif // AMATERIA_HPP
