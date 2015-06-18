/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarriga <mdarriga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/18 11:38:14 by mdarriga          #+#    #+#             */
/*   Updated: 2015/06/18 13:03:51 by mdarriga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name): _name(name), _hitPoints(100), _maxHitPoints(100), _energyPoints(100), _maxEnergyPoints(100), _level(1), _meleeAttackDamage(30), _rangedAttackDamage(20), _armorDamageReduction(5) {
	std::cout << "Booting sequence complete. Hello! I am your new steward bot. Designation: "
			<< _name << ", Hyperion Robot, Class C. Please adjust factory settings to meet your needs before deployment."
			<< std:: endl;
}

FragTrap::~FragTrap(void) {
	std::cout << "I'M DEAD I'M DEAD OHMYGOD I'M DEAD!" << std::endl;
}

FragTrap::FragTrap(FragTrap const	&src, std::string name): _name(name), _hitPoints(100), _maxHitPoints(100), _energyPoints(100), _maxEnergyPoints(100), _level(1), _meleeAttackDamage(30), _rangedAttackDamage(20), _armorDamageReduction(5) {
	std::cout << "Booting sequence complete. Hello! I am your new steward bot. Designation: "
			<< _name << ", Hyperion Robot, Class C. Please adjust factory settings to meet your needs before deployment."
			<< std:: endl;
	*this = &src;
}

FragTrap	&FragTrap::operator=(FragTrap const	&rhs) {
	if (*this != &rhs)
		*this = &rhs;
	return *this;
}

unsigned int	FragTrap::getHitPoints(void) {
	return this->_hitPoints;
}

unsigned int	FragTrap::getMaxHitPoints(void) {
	return this->_maxHitPoints;
}

unsigned int	FragTrap::getEnergyPoints(void) {
	return this->_energyPoints;
}

unsigned int	FragTrap::getMaxEnergyPoints(void) {
	return this->_maxEnergyPoints;
}

unsigned int	FragTrap::getLevel(void) {
	return this->_level;
}

unsigned int	FragTrap::getMeleeAttackDamage(void) {
	return this->_meleeAttackDamage;
}

unsigned int	FragTrap::getRangedAttackDamage(void) {
	return this->_rangedAttackDamage;
}

unsigned int	FragTrap::getArmorDamageReduction(void) {
	return this->_armorDamageReduction;
}

void			FragTrap::rangedAttack(std::string const	&target) {
	std::cout << "FR4G-TP <" << this->_name << "> attacks <" << target "> at range, causing <" 
				<< this->_rangedAttackDamage << "> points of damage !" << std::endl;
}

void			FragTrap::meleeAttack(std::string const	&target) {
	std::cout << "FR4G-TP <" << this->_name << "> attacks <" << target "> at range, causing <" 
				<< this->_meleeAttackDamage << "> points of damage !" << std::endl;
}

void			FragTrap::takeDamage(unsigned int amount) {
	if (this->getHitPoints() - (amount - this->getArmorDamageReduction()) < 0)
		this->_hitPoints = 0;
	else if (this->_hitPoints == 0)
		std::cout << "Just stop already, I'm already DEAD !!!!!!!" << std::endl;
	else
		this->_hitPoints -= amount;
	std::cout << "FR4G-TP <" << this->_name << "> took " << amount - this->getArmorDamageReduction()
				<< " damage and now has " << this->getHitPoints() << " hitPoints." << std::endl;
}

void			Fragtrap::beRepaired(unsigned int	amount) {
	if (this->getEnergyPoints() >= amount)
	{
		this->_energyPoints -= amount;
		if (this->_hitPoints + amount > 100)
			this->_hitPoints = 100;
		else
			this->_hitPoints += amount;
		std::cout << "FR4G-TP <" << this->_name << "> was repaired for " << amount
					<< " hitPoints and lost the same energy amount, he now has " << this->getHitPoints() << " hitPoints and " 
					<<	this->getEnergyPoints() << " energy points" << std::endl;
	}
	else
		std::cout << "I'M GOING TO BE FULL HEALTH !!!!!! Oh shit, out of energy .." << std::endl;
}