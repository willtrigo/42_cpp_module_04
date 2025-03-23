/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 09:17:24 by dande-je          #+#    #+#             */
/*   Updated: 2025/03/23 09:17:52 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "core/animal/Animal.hpp"

class Cat : public Animal {
 public:
  Cat();
  Cat(const Cat& other);
  virtual ~Cat();

  Cat& operator=(const Cat& other);

  void makeSound() const;
};

#endif // CAT_HPP
