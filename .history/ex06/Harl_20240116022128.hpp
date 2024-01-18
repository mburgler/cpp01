/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburgler <mburgler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 20:58:17 by mburgler          #+#    #+#             */
/*   Updated: 2024/01/16 02:21:27 by mburgler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include <string>
#include <map>

class Harl
{
private:
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
	e_lvl	getLvl( std::string );
public:
	void complain( std::string level );
	void filter ( std::string level );
	
	enum e_lvl {
	DEBUG,
	INFO,
	WARNING,
	ERROR,
	UNKNOWN
	};
};

#endif
