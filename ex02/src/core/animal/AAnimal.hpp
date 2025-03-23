/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 11:40:56 by dande-je          #+#    #+#             */
/*   Updated: 2025/03/23 11:43:07 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include "utils/TerminalColor.hpp"
#include <string>

class AAnimal {
 public:
  AAnimal();
  AAnimal(const std::string& type);
  AAnimal(const AAnimal& other);
  virtual ~AAnimal();

  AAnimal& operator=(const AAnimal& other);

  virtual void makeSound() const = 0;
  std::string getType() const;

 protected:
  std::string m_type;
  const TerminalColor& m_color;
  BgColor m_bgColor;
  StrColor m_strColor;

  void log(const std::string& str) const;
};

#endif // ANIMAL_HPP
