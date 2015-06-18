/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarriga <mdarriga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/18 11:38:22 by mdarriga          #+#    #+#             */
/*   Updated: 2015/06/18 12:54:58 by mdarriga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

class FragTrap {
	public:
		FragTrap(std::string name);
		~FragTrap(void);
		FragTrap(FragTrap const &src, std::string name);

		FragTrap		&operator=(FragTrap const				&rhs);
		void			rangedAttack(std::string const			&target);
		void			meleeAttack(std::string const			&target);
		void			takeDamage(unsigned int					amount);
		void			beRepaired(unsigned int					amount);
		void			vaulthunter_dot_exe(std::string const	&target);
		unsigned int	getHitPoints(void);
		unsigned int	getMaxHitPoints(void);
		unsigned int	getEnergyPoints(void);
		unsigned int	getMaxEnergyPoints(void);
		unsigned int	getLevel(void);
		unsigned int	getMeleeAttackDamage(void);
		unsigned int	getRangedAttackDamage(void);
		unsigned int	getArmorDamageReduction(void);

	private:
		unsigned int	_hitPoints;
		unsigned int	_maxHitPoints;
		unsigned int	_energyPoints;
		unsigned int	_maxEnergyPoints;
		unsigned int	_level;
		unsigned int	_meleeAttackDamage;
		unsigned int	_rangedAttackDamage;
		unsigned int	_armorDamageReduction;

		std::string		_name;
};

#endif