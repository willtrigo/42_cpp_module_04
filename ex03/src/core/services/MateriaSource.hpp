/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 22:16:12 by dande-je          #+#    #+#             */
/*   Updated: 2025/03/28 19:30:45 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIAL_SOURCE_HPP
#define MATERIAL_SOURCE_HPP

#include "core/entities/AMateria.hpp"
#include "core/interfaces/IMateriaSource.hpp"
#include <string>

class MateriaSource : public IMateriaSource {
 public:
  MateriaSource();
  MateriaSource(const MateriaSource& other);
  virtual ~MateriaSource();

  MateriaSource& operator=(const MateriaSource& other);

  virtual void learnMateria(AMateria* m);
  virtual AMateria* createMateria(const std::string& type);

 private:
  enum materiaEnum {
    LEARNED_MATERIAS_SIZE = 4
  };

  AMateria* m_learnedMaterias[LEARNED_MATERIAS_SIZE];
  const TerminalColor& m_color;
  BgColor m_bgColor;
  StrColor m_strColor;

  void log(const std::string& str) const;
};

#endif // MATERIAL_SOURCE_HPP
