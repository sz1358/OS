/**
 * Definition of a queue
 **/

#define XOPEN_SOURCE 700


/* Initialization of the queue */
void init_queue();

/* Insertion of a new element.
 The new element is added to the head of the queue. */
void queue(void *element);

/* Extraction of the element at the tail of the queue.
 Returns (also deletes) that element.  */
void *dequeue();

/* Returns the number of elements in the queue */
int size();
