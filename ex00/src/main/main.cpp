/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 19:01:56 by dande-je          #+#    #+#             */
/*   Updated: 2025/03/23 11:03:27 by dande-je         ###   ########.fr       */
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
    Cat crocodile;
    Animal* kazul = new Cat(crocodile);
    std::cout << "this animal make sound: ";
    kazul->makeSound();
    std::cout << "Animal type is: " << kazul->getType() << std::endl;
    delete kazul;
  }
  std::cout << std::endl << "---------------------------------------------------" << std::endl << std::endl;
  {
    Cat crocodile;
    Cat kazul;

    kazul = crocodile;
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
    Dog crocodile;
    Animal* doge = new Dog(crocodile);
    std::cout << "this animal make sound: ";
    doge->makeSound();
    std::cout << "Animal type is: " << doge->getType() << std::endl;
    delete doge;
  }
  std::cout << std::endl << "---------------------------------------------------" << std::endl << std::endl;
  {
    Dog crocodile;
    Dog doge;

    doge = crocodile;
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
    WrongCat crocodile;
    WrongAnimal* kazul = new WrongCat(crocodile);
    std::cout << "this animal make sound: ";
    kazul->makeSound();
    std::cout << "Animal type is: " << kazul->getType() << std::endl;
    delete kazul;
  }
  std::cout << std::endl << "---------------------------------------------------" << std::endl << std::endl;
  {
    WrongCat crocodile;
    WrongCat kazul;

    kazul = crocodile;
    std::cout << "this animal make sound: ";
    kazul.makeSound();
    std::cout << "Animal type is: " << kazul.getType() << std::endl;
  }
  return EXIT_SUCCESS;
}
