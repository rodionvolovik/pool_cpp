/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISpaceMarine.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <rvolovik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/04 17:43:19 by rvolovik          #+#    #+#             */
/*   Updated: 2017/06/04 19:22:57 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISPACEMARINE_HPP
# define ISPACEMARINE_HPP

class ISpaceMarine {
public:
       virtual ~ISpaceMarine(void) {}
       virtual ISpaceMarine* clone(void) const = 0;
       virtual void battleCry(void) const = 0;
       virtual void rangedAttack(void) const = 0;
       virtual void meleeAttack(void) const = 0;
};

#endif
