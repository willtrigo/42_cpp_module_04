/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 17:59:48 by dande-je          #+#    #+#             */
/*   Updated: 2025/03/25 18:08:46 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "core/entities/AMateria.hpp"
#include "core/interfaces/ICharacter.hpp"

class Cure : public AMateria {
 public:
  Cure();
  Cure(const Cure& other);
  virtual ~Cure();

  Cure& operator=(const Cure& other);

  virtual AMateria* clone() const;
  virtual void use(ICharacter& target);
};

#endif // CURE_HPP
