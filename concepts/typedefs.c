/*
Below is an example illustrating the use case of typedef beyond their use with structures
*/

// Define a function type fv of a function taking int as parameter and returning void
// Define a pointer type pfv to a function of type fv

typedef void fv(int), (*pfv)(int);

/* Implement a signal-handling function which takes as parameter
    - an integer (signal)
    - a pointer to a function taking int as parameter and returning void (serve as signal handler)
    This function returns a pointer to a function taking int as parameter and returning void
    (represents the previous signal handler for that specific signal)
*/

void (*signal(int, void *(int)))(int);

// We can rewrite the above using the defined function type and pointer type

fv *signal(int, fv *);

pfv signal(int, pfv);