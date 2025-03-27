/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 21:50:19 by dande-je          #+#    #+#             */
/*   Updated: 2025/03/27 11:53:32 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core/entities/Character.hpp"
#include "core/interfaces/ICharacter.hpp"
#include "core/interfaces/IMateriaSource.hpp"
#include "core/materials/Cure.hpp"
#include "core/materials/Ice.hpp"
#include "core/services/MateriaSource.hpp"
#include <cstdlib>

int main() {
  {
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    ICharacter* me = new Character("me");
    AMateria* tmp;

    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);

    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);

    delete bob;
    delete me;
    delete src;
  }
  return EXIT_SUCCESS;
}
