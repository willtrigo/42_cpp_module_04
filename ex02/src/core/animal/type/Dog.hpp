/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 11:49:54 by dande-je          #+#    #+#             */
/*   Updated: 2025/03/23 11:57:08 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "core/animal/AAnimal.hpp"
#include "core/animal/type/brain/Brain.hpp"

class Dog : public AAnimal {
 public:
  Dog();
  Dog(const Dog& other);
  virtual ~Dog();

  Dog& operator=(const Dog& other);

  void makeSound() const;
  Brain* getBrain() const;

 private:
  Brain* m_brain;
};

#endif // DOG_HPP
