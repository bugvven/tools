#ifndef TOOLS_H
#define TOOLS_H

#define count_of(a) \
    ((int)(sizeof(a)/sizeof(a[0])))

#define unused(a)\
    ((void *)(&(a)));

#define save_delete(__ptr)\
    do{if(__ptr){delete __ptr; __ptr = NULL;}}while(0)


#endif // TOOLS_H
