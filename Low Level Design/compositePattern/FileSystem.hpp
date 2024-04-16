#ifndef LOGGER_HPP
#define LOGGER_HPP

class FileSystem{
    public:
        virtual void ls() = 0;
        virtual void add(FileSystem* DirectoryFile) = 0;
};

#endif