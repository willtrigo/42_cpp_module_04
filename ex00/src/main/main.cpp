/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 19:01:56 by dande-je          #+#    #+#             */
/*   Updated: 2025/03/22 20:55:57 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core/non_polymorphic/WrongAnimal.hpp"
#include "core/non_polymorphic/WrongCat.hpp"
#include "core/polymorphic/Animal.hpp"
#include "core/polymorphic/Cat.hpp"
#include "core/polymorphic/Dog.hpp"
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
  std::cout << std::endl << "---------------------------------------------------" << std::endl << std::endl;
  {
    Cat meliante;
    Cat kazul;

    kazul = meliante;
    std::cout << "this animal make sound: ";
    kazul.makeSound();
    std::cout << "Animal type is: " << kazul.getType() << std::endl;
  }
  std::cout << std::endl << "---------------------------------------------------" << std::endl << std::endl;
  {
    Dog doge;
    std::cout << "this animal make sound: ";
    doge.makeSound();
    std::cout << "Animal type is: " << doge.getType() << std::endl;
  }
  std::cout << std::endl << "---------------------------------------------------" << std::endl << std::endl;
  {
    Dog meliante;
    Animal* doge = new Dog(meliante);
    std::cout << "this animal make sound: ";
    doge->makeSound();
    std::cout << "Animal type is: " << doge->getType() << std::endl;
    delete doge;
  }
  std::cout << std::endl << "---------------------------------------------------" << std::endl << std::endl;
  {
    Dog meliante;
    Dog doge;

    doge = meliante;
    std::cout << "this animal make sound: ";
    doge.makeSound();
    std::cout << "Animal type is: " << doge.getType() << std::endl;
  }
  std::cout << std::endl << "---------------------------------------------------" << std::endl << std::endl;
  {
    WrongAnimal ant;

    std::cout << "this animal make sound: ";
    ant.makeSound();
    std::cout << "Animal type is: " << ant.getType() << std::endl;
  }
  std::cout << std::endl << "---------------------------------------------------" << std::endl << std::endl;
  {
    WrongCat kazul;
    std::cout << "this animal make sound: ";
    kazul.makeSound();
    std::cout << "Animal type is: " << kazul.getType() << std::endl;
  }
  std::cout << std::endl << "---------------------------------------------------" << std::endl << std::endl;
  {
    WrongCat meliante;
    WrongAnimal* kazul = new WrongCat(meliante);
    std::cout << "this animal make sound: ";
    kazul->makeSound();
    std::cout << "Animal type is: " << kazul->getType() << std::endl;
    delete kazul;
  }
  std::cout << std::endl << "---------------------------------------------------" << std::endl << std::endl;
  {
    WrongCat meliante;
    WrongCat kazul;

    kazul = meliante;
    std::cout << "this animal make sound: ";
    kazul.makeSound();
    std::cout << "Animal type is: " << kazul.getType() << std::endl;
  }
  return EXIT_SUCCESS;
}
