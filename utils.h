#ifndef _UTILS_H_
#define _UTILS_H_

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "tasks.h"
#include "structs.h"

int check_string_duplicate(char** container,int containter_size, char* new_char);
temp_dns_struct* read_from_tree_in(Hierarchy** hierarchy);


#endif