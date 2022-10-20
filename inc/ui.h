/**
 * @file ui.h
 * @author Thomas DUCLOS
 * @brief this is the header file for the user interface.
 * @version 1.3
 * @date 2022-10-18
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef UI_H
#define UI_H

#include <stdbool.h>

void Menu();

bool parseInt(char *str, int* val);
bool getInt(int* val);

#endif