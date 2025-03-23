/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 11:53:39 by dande-je          #+#    #+#             */
/*   Updated: 2025/03/23 11:54:15 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "utils/TerminalColor.hpp"
#include <string>

class Brain {
 public:
  enum ideasEnum {
    SIZE_IDEAS = 100
  };

  Brain();
  Brain(const Brain& other);
  ~Brain();

  Brain& operator=(const Brain& other);

  void setIdea(int i, const std::string& idea);
  std::string getIdea(int i) const;

 private:
  std::string ideas[SIZE_IDEAS];
  const TerminalColor& m_color;
  BgColor m_bgColor;
  StrColor m_strColor;

  void log(const std::string& str) const;
};

#endif // BRAIN_HPP
