/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 09:13:52 by dande-je          #+#    #+#             */
/*   Updated: 2025/03/23 09:14:49 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include "utils/TerminalColor.hpp"
#include <string>

class Animal {
 public:
  Animal();
  Animal(const std::string& type);
  Animal(const Animal& other);
  virtual ~Animal();

  Animal& operator=(const Animal& other);

  virtual void makeSound() const;
  std::string getType() const;

 protected:
  std::string m_type;
  const TerminalColor& m_color;
  BgColor m_bgColor;
  StrColor m_strColor;

  void log(const std::string& str) const;
};

#endif // ANIMAL_HPP
