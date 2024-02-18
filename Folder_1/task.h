#ifndef TASK_H
#define TASK_H

// Define default value for X if X_VALUE macro is not defined
#ifndef X_VALUE
#define X_VALUE_DEFAULT -1
#else
#define X_VALUE_DEFAULT 5
#endif

// Function declaration to print the value of x
void print_x_value();

#endif /* TASK_H */
