/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fire.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 20:30:23 by dande-je          #+#    #+#             */
/*   Updated: 2025/03/28 20:32:45 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIRE_HPP
#define FIRE_HPP

#include "core/entities/AMateria.hpp"
#include "core/interfaces/ICharacter.hpp"

class Fire : public AMateria {
 public:
  Fire();
  Fire(const Fire& other);
  virtual ~Fire();

  Fire& operator=(const Fire& other);

  virtual AMateria* clone() const;
  virtual void use(ICharacter& target);
};

#endif // FIRE_HPP
