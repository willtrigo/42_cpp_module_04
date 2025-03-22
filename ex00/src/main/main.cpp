/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 19:01:56 by dande-je          #+#    #+#             */
/*   Updated: 2025/03/22 18:25:26 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core/polymorphic/Animal.hpp"
#include "core/polymorphic/Cat.hpp"
#include <cstdlib>
#include <iostream>

int main() {
  {
    Animal ant;

    std::cout << "this animal make sound: ";
    ant.makeSound();
    std::cout << "Animal type is: " << ant.getType() << std::endl;
  }
  std::cout << std::endl << "---------------------------------------------------" << std::endl << std::endl;
  {
    Cat kazul;
    std::cout << "this animal make sound: ";
    kazul.makeSound();
    std::cout << "Animal type is: " << kazul.getType() << std::endl;
  }
  std::cout << std::endl << "---------------------------------------------------" << std::endl << std::endl;
  {
    Cat meliante;
    Animal* kazul = new Cat(meliante);
    std::cout << "this animal make sound: ";
    kazul->makeSound();
    std::cout << "Animal type is: " << kazul->getType() << std::endl;
    delete kazul;
  }
  return EXIT_SUCCESS;
}
