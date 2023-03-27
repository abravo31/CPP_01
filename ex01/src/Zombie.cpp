/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abravo <abravo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 20:58:10 by abravo            #+#    #+#             */
/*   Updated: 2023/03/27 16:28:43 by abravo           ###   ########.fr       */
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

void Zombie::setName(std::string name){
    this->_Name = name;
    return ;   
}

void Zombie::announce( void ) const{
    std::cout << this->_Name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}