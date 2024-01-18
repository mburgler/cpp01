/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Colour.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburgler <mburgler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 18:02:36 by mburgler          #+#    #+#             */
/*   Updated: 2024/01/16 03:09:43 by mburgler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef COLOUR_HPP
# define COLOUR_HPP

#define RESET "\033[0m"

#define BLACK "\033[30m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define SOFT_BLUE "\033[3;34m"
#define MAGENTA "\033[35m"
#define CYAN "\033[36m"
#define WHITE "\033[37m"

#define BG_BLACK "\033[40m"
#define BG_RED "\033[41m"
#define BG_GREEN "\033[42m"
#define BG_YELLOW "\033[43m"
#define BG_BLUE "\033[44m"
#define BG_MAGENTA "\033[45m"
#define BG_CYAN "\033[46m"
#define BG_WHITE "\033[47m"

#define BOLD "\033[1m"
#define FAINT "\033[2m"
#define USCORE "\033[4m"
#define BLINK "\033[5m"

#define CLEAR_SCREEN "\033[2J\033[1;1H"

#endif
