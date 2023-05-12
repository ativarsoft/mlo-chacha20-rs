#ifndef MLO_CHACHA20_H
#define MLO_CHACHA20_H

#include <stdint.h>
#include <stddef.h>

typedef void *(*allocator_t)(size_t bytes);

intptr_t chacha20_test1(allocator_t f);
intptr_t chacha20_test2(allocator_t f);
intptr_t chacha20_test3(allocator_t f);

#endif

