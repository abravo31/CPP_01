/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abravo <abravo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 21:05:12 by abravo            #+#    #+#             */
/*   Updated: 2023/03/26 23:56:35 by abravo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(){
    
    Zombie *_Zombie02 = newZombie("Heap Zombie");
    _Zombie01.announce();
    _Zombie02->announce();
    randomChump("Random Zombie");
    delete _Zombie02;
    return (0);
}