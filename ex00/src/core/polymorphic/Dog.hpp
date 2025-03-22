/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 17:18:42 by dande-je          #+#    #+#             */
/*   Updated: 2025/03/22 19:56:34 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "core/polymorphic/Animal.hpp"

class Dog : public Animal {
 public:
  Dog();
  Dog(const Dog& other);
  virtual ~Dog();

  Dog& operator=(const Dog& other);

  void makeSound() const;
};

#endif // DOG_HPP
