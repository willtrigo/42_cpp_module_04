/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 22:50:01 by dande-je          #+#    #+#             */
/*   Updated: 2025/03/26 22:57:02 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "core/entities/AMateria.hpp"
#include "core/interfaces/ICharacter.hpp"

class Ice : public AMateria {
 public:
  Ice();
  Ice(const Ice& other);
  virtual ~Ice();

  Ice& operator=(const Ice& other);

  virtual AMateria* clone() const;
  virtual void use(ICharacter& target);
};

#endif // ICE_HPP
