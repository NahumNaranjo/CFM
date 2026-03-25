# Ariadne
A simple CLearning crossover. This repository is part of CLearning's ecosystem and was made to help other tool's development. If you find it useful, use it. In summary, CFM is a simple file managing library. 

## Functions
- **lookInRoot(char filename, char type)**: Will look for a specific file in a predifined root (default is C:\InCGames)
- **getRootFilePath(void)**: Will trim all whitespaces your string has.
- **listFiles(char key, char path)**: Will return a list of all present files in there.
- **getListedDirectories(char path)**: Returns all child dirs of a parent one.
- **findFile(char name, char root, char type)**: Will return the file just by using its name and a parent dir.
- **ParseFile(FILE fp, size_t line)**: Returns a line by line char[] of a file.
- **dirExists(char path)**: Comprobates a dir existance.
- **getCurrentDirectory(void)**: Self-explanatory.

## Install instructions
Download it from this repository and add the header to your project or use `cl -i cfm` in your console if you have CLearning installed

### Version
1.1.1 - CFM, C File Manager
Author: Nahum Naranjo