#!/bin/bash

files=(
    "3-islower.c"
    "4-isalpha.c"
    "6-abs.c"
    "0-isupper.c"
    "1-isdigit.c"
    "2-strlen.c"
    "3-puts.c"
    "9-strcpy.c"
    "100-atoi.c"
    "0-strcat.c"
    "1-strncat.c"
    "2-strncpy.c"
    "3-strcmp.c"
    "1-memcpy.c"
    "2-strchr.c"
    "3-strspn.c"
    "4-strpbrk.c"
    "5-strstr.c"
)

for file in "${files[@]}"
do
    file_path=$(find .. -type f -name "$file" -print -quit)

    if [[ -n "$file_path" ]]; then
        cp "$file_path" .
        echo "Copied $file to the current directory"
    else
        echo "Could not find $file"
    fi
done
