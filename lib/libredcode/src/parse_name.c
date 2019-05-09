/*
** EPITECH PROJECT, 2019
** corewar
** File description:
** parse_comment
*/

#include "redcode.h"
#include "my_string.h"

int parse_name(parser_t *parser)
{
    char *line = NULL;

    if (readfile(parser->src, &line) < 0)
        return -1;
    if (my_strncmp(line, NAME_STR, my_strlen(NAME_STR)) == 0)
        return encode_name(parser, line, parser->dest);

    return -1;
}