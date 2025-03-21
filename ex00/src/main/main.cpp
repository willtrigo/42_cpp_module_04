/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 19:01:56 by dande-je          #+#    #+#             */
/*   Updated: 2025/03/21 19:40:30 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core/polymorphic/Animal.hpp"
#include <cstdlib>
#include <iostream>

int main() {
  {
    Animal ant;

    ant.makeSound();
    std::cout << "Animal type is: " << ant.getType() << std::endl;
  }
  return EXIT_SUCCESS;
}
