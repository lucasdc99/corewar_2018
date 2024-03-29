/*
** EPITECH PROJECT, 2018
** redcode
** File description:
** Create a new redcode parser instance.
*/

#include <stdlib.h>

#include "redcode.h"

parser_t *redcode_parser(void)
{
    parser_t *parser = NULL;

    if ((parser = malloc(sizeof *parser)) == NULL)
        return NULL;
    if ((parser->instructions = list_new()) == NULL)
        return NULL;
    if ((parser->directives = list_new()) == NULL)
        return NULL;

    parser->size = 0;
    parser->in = NULL;
    parser->out = NULL;

    return parser;
}
