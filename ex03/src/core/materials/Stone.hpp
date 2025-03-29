/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Stone.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 20:29:57 by dande-je          #+#    #+#             */
/*   Updated: 2025/03/28 20:45:18 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STONE_HPP
#define STONE_HPP

#include "core/entities/AMateria.hpp"
#include "core/interfaces/ICharacter.hpp"

class Stone : public AMateria {
 public:
  Stone();
  Stone(const Stone& other);
  virtual ~Stone();

  Stone& operator=(const Stone& other);

  virtual AMateria* clone() const;
  virtual void use(ICharacter& target);
};

#endif // STONE_HPP
