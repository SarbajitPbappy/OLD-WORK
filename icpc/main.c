#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();
char** split_string(char*);

// Complete the minimumTimeToEnd function below.
void minimumTimeToEnd(int x_count, long* x, long w, long v, int q) {
    // Take the descriptions of the people from standard input and print the answers to standard output

}

int main()
{
    char* n_endptr;
    char* n_str = readline();
    int n = strtol(n_str, &n_endptr, 10);

    if (n_endptr == n_str || *n_endptr != '\0') { exit(EXIT_FAILURE); }

    char** x_temp = split_string(readline());

    long* x = malloc(n * sizeof(long));

    for (int x_itr = 0; x_itr < n; x_itr++) {
        char* x_item_endptr;
        char* x_item_str = *(x_temp + x_itr);
        long x_item = strtol(x_item_str, &x_item_endptr, 10);

        if (x_item_endptr == x_item_str || *x_item_endptr != '\0') { exit(EXIT_FAILURE); }

        *(x + x_itr) = x_item;
    }

    int x_count = n;

    char** wv = split_string(readline());

    char* w_endptr;
    char* w_str = wv[0];
    long w = strtol(w_str, &w_endptr, 10);

    if (w_endptr == w_str || *w_endptr != '\0') { exit(EXIT_FAILURE); }

    char* v_endptr;
    char* v_str = wv[1];
    long v = strtol(v_str, &v_endptr, 10);

    if (v_endptr == v_str || *v_endptr != '\0') { exit(EXIT_FAILURE); }

    char* q_endptr;
    char* q_str = readline();
    int q = strtol(q_str, &q_endptr, 10);

    if (q_endptr == q_str || *q_endptr != '\0') { exit(EXIT_FAILURE); }

    minimumTimeToEnd(x_count, x, w, v, q);

    return 0;
}

char* readline() {
    size_t alloc_length = 1024;
    size_t data_length = 0;
    char* data = malloc(alloc_length);

    while (true) {
        char* cursor = data + data_length;
        char* line = fgets(cursor, alloc_length - data_length, stdin);

        if (!line) { break; }

        data_length += strlen(cursor);

        if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') { break; }

        size_t new_length = alloc_length << 1;
        data = realloc(data, new_length);

        if (!data) { break; }

        alloc_length = new_length;
    }

    if (data[data_length - 1] == '\n') {
        data[data_length - 1] = '\0';
    }

    data = realloc(data, data_length);

    return data;
}

char** split_string(char* str) {
    char** splits = NULL;
    char* token = strtok(str, " ");

    int spaces = 0;

    while (token) {
        splits = realloc(splits, sizeof(char*) * ++spaces);
        if (!splits) {
            return splits;
        }

        splits[spaces - 1] = token;

        token = strtok(NULL, " ");
    }

    return splits;
}

