/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Lightnig.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 20:29:18 by dande-je          #+#    #+#             */
/*   Updated: 2025/03/28 20:38:06 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIGHTNIG_HPP
#define LIGHTNIG_HPP

#include "core/entities/AMateria.hpp"
#include "core/interfaces/ICharacter.hpp"

class Lightnig : public AMateria {
 public:
  Lightnig();
  Lightnig(const Lightnig& other);
  virtual ~Lightnig();

  Lightnig& operator=(const Lightnig& other);

  virtual AMateria* clone() const;
  virtual void use(ICharacter& target);
};

#endif // LIGHTNIG_HPP
