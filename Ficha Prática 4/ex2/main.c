#include <stdio.h>

#include "conta_letra_v2.h"
#include "args.h"

int main(int argc, char *argv[])
{
    struct gengetopt_args_info args_info;

    cmdline_parser(argc, argv, &args_info);

    int count = conta_letra(args_info.string_arg, args_info.letter_arg);

    printf("%i\n", count);

    cmdline_parser_free(&args_info);

    return 0;
}