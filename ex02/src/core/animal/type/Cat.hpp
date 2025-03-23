/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 11:49:11 by dande-je          #+#    #+#             */
/*   Updated: 2025/03/23 11:57:00 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "core/animal/AAnimal.hpp"
#include "core/animal/type/brain/Brain.hpp"

class Cat : public AAnimal {
 public:
  Cat();
  Cat(const Cat& other);
  virtual ~Cat();

  Cat& operator=(const Cat& other);

  void makeSound() const;
  Brain* getBrain() const;

 private:
  Brain* m_brain;
};

#endif // CAT_HPP
