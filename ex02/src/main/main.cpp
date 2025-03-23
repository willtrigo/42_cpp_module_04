/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 11:38:06 by dande-je          #+#    #+#             */
/*   Updated: 2025/03/23 12:07:13 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core/animal/AAnimal.hpp"
#include "core/animal/type/Cat.hpp"
#include "core/animal/type/Dog.hpp"
#include <cstdlib>
#include <iostream>

int main() {
  {
    const int totalAAnimals = 4;
    AAnimal* animals[totalAAnimals];

    for (int i = 0; i < totalAAnimals / 2; ++i) {
      animals[i] = new Cat();
    }
    for (int i = totalAAnimals / 2; i < totalAAnimals; ++i) {
      animals[i] = new Dog();
    }

    for (int i = 0; i < totalAAnimals; ++i) {
      delete animals[i];
    }
  }
  std::cout << std::endl << "---------------------------------------------------" << std::endl << std::endl;
  {
    Cat kazul;
    kazul.getBrain()->setIdea(9, "Should i meow uncontrollably??");
    Cat crocodile = kazul;
    std::cout << "Idea from kazul: " << kazul.getBrain()->getIdea(9) << std::endl;
    std::cout << "Idea from crocodile: " << crocodile.getBrain()->getIdea(9) << std::endl;
  }
  std::cout << std::endl << "---------------------------------------------------" << std::endl << std::endl;
  {
    Dog doge;
    doge.getBrain()->setIdea(9, "Should i catch the ball??");
    Dog caramel = doge;
    std::cout << "Idea from doge: " << doge.getBrain()->getIdea(9) << std::endl;
    std::cout << "Idea from caramel: " << caramel.getBrain()->getIdea(9) << std::endl;
  }
  return EXIT_SUCCESS;
}
