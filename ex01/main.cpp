/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrey <nrey@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 03:29:52 by nrey              #+#    #+#             */
/*   Updated: 2025/06/07 17:57:50 by nrey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ClapTrap ct("estettle :3");
    ct.attack("minirt");

    std::cout << std::endl;

    ScavTrap st("ScavTrap");
    st.attack("chill valley");
    st.guardGate();

    return (0);
}
