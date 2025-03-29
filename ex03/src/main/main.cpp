/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 21:50:19 by dande-je          #+#    #+#             */
/*   Updated: 2025/03/28 21:31:12 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core/entities/Character.hpp"
#include "core/interfaces/ICharacter.hpp"
#include "core/interfaces/IMateriaSource.hpp"
#include "core/materials/Cure.hpp"
#include "core/materials/Fire.hpp"
#include "core/materials/Ice.hpp"
#include "core/materials/Lightnig.hpp"
#include "core/materials/Stone.hpp"
#include "core/services/MateriaSource.hpp"
#include <cstdlib>
#include <iostream>

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
  std::cout << std::endl << "---------------------------------------------------" << std::endl << std::endl;
  {
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Fire());
    src->learnMateria(new Lightnig());
    src->learnMateria(new Stone());
    Cure* cure = new Cure();
    src->learnMateria(cure);

    ICharacter* me = new Character("me");
    AMateria* tmp;

    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("fire");
    me->equip(tmp);
    tmp = src->createMateria("lightnig");
    me->equip(tmp);
    tmp = src->createMateria("stone");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);

    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    me->use(2, *bob);
    me->use(3, *bob);
    me->use(4, *bob);

    delete bob;
    delete me;
    delete src;
    delete cure;
  }
  return EXIT_SUCCESS;
}
