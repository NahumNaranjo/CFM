#ifndef CFM_H
#define CFM_H
    #include <stdio.h>
    #include <windows.h>
    #include <direct.h>
    #include <sys/stat.h>
    #include "ariadne.h"

    FILE* lookInRoot(char* filename, char* type);
    char* getListedDirectories(char* directory);
    char* getRootFilePath(void);
    void* findFile(char* name, char* root, char* type);
    char* ParseFile(FILE* fp, size_t* line);
    TCHAR* getCurrentDirectory(void);
    WIN32_FIND_DATA* listFiles(char* key, char* path);
#endif