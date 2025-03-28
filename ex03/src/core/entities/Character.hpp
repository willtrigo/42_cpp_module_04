/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 22:13:03 by dande-je          #+#    #+#             */
/*   Updated: 2025/03/27 20:11:13 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "core/interfaces/ICharacter.hpp"
#include "core/entities/AMateria.hpp"
#include <string>

class Character : public ICharacter {
 public:
  Character(const std::string& name);
  Character(const Character& other);
  virtual ~Character();

  Character& operator=(const Character& other);

  std::string const & getName() const;
  void equip(AMateria* m);
  void unequip(int idx);
  void use(int idx, ICharacter& target);

 protected:
  const TerminalColor& m_color;
  BgColor m_bgColor;
  StrColor m_strColor;

  void log(const std::string& str) const;

 private:
  enum characterEnum{
    INVENTORY_SIZE = 4
  };

  std::string m_name;
  AMateria* m_inventory[INVENTORY_SIZE];

  Character();
};

#endif // CHARACTER_HPP
