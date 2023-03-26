/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abravo <abravo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 20:58:10 by abravo            #+#    #+#             */
/*   Updated: 2023/03/26 23:53:20 by abravo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){
    return ;
}

Zombie::~Zombie(){
    std::cout << "Zombie " << this->_Name << " is died! 💀" << std::endl;
    return ;
}

void Zombie::announce( void ) const{
    std::cout << _Name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}