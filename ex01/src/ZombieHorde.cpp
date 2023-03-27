/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abravo <abravo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 20:57:51 by abravo            #+#    #+#             */
/*   Updated: 2023/03/27 16:47:24 by abravo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ){
    if (N <= 0)
        return (NULL);

    Zombie*_Horder = new (std::nothrow) Zombie[N];

    for (int i = 0; i < N; i++)
        _Horder[i].setName(name);
    return (_Horder);
}