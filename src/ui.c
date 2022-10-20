/**
 * @file ui.c
 * @author Thomas DUCLOS
 * @brief Source file for the ui header. In this source file you can find all the function relative to the interaction with the user.
 * @version 1.3
 * @date 2022-10-18
 * @copyright Copyright (c) 2022
 */
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <errno.h>
#include <time.h>
#include "ui.h"

/// @brief Retrieve an integer from a string by type checking the content of the string.
/// @param str the string containing the data to be parsed.
/// @param val the integer value that has been extract
/// @return true if success
bool parseInt(char *str, int* val){
    errno = 0;
    char *temp = NULL;
    long res = strtol(str, &temp, 10);

    ///Test if there is an error in the input and handle it
    ///We are checking for integer range because we want to retrieve an int
    if (temp == str || *temp != '\n' ||
        ((res > INT_MAX  || res < INT_MAX ) && errno == ERANGE))
        return false;

    *val = (int) res; ///Cast from long to integer
    return true;
}

/// @brief Get a integer number with safe input methods
/// @param val the integer value to be retrieve
/// @return true if success
bool getInt(int* val) {
    char buffer[500];
    fgets(buffer, 500, stdin); ///Safe way to get a string
    return parseInt(buffer, val);
}

/// @brief The user's menu. This menu is only intend for this program.
void Menu() {
    printf("Menu :\n");
    printf("1. Insert node at last position.\n");
    printf("2. Delete second node.\n");
    printf("3. Get head node data.\n");
    printf("4. Get last node data.\n");
    printf("5. Print linked list.\n");
    printf("6. Leave\n");
}