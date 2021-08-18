#ifndef QUEUE_H
#define QUEUE_H

#include <stddef.h>


typedef struct _Queue queue_t;


queue_t *queue_construct(size_t width, void (*free_data)(void *data), int (*compare)(const void *first, const void *second));
void queue_clear(queue_t *queue);
void queue_free(queue_t *queue);

#endif // QUEUE_H
