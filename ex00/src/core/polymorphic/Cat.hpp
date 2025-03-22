/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 17:18:31 by dande-je          #+#    #+#             */
/*   Updated: 2025/03/22 17:51:50 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "core/polymorphic/Animal.hpp"

class Cat : public Animal {
 public:
  Cat();
  Cat(const Cat& other);
  virtual ~Cat();

  Cat& operator=(const Cat& other);

  void makeSound() const;
};

#endif // CAT_HPP
