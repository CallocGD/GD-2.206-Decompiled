#ifndef __FILEOPERATION_H__
#define __FILEOPERATION_H__


#include "../includes.h"

class FileOperation {
public:
    TodoReturn getFilePath();
    TodoReturn readFile();
    TodoReturn saveFile();
};

#endif /* __FILEOPERATION_H__ */