# AIS1002 exercise3

This short exercise is about the usage of some of the Standard Library types and File I/O.

## file_reader

Implement the read function in [file_reader.hpp](include/exercise3/file_reader.hpp). You might want to look into the `<fstream>` header.
Notice that the class has a field `cache_` of type `std::unordered_map`. How can that be utilised in a smart way while implementing the `read` function?
Also note the return type of the function. Why is it `std::optional`?

Decide for yourself if the implementation should be written in the header or in a `.cpp` file. 
>If you do the latter, you need to update the CMake configuration. 
Either by creating a library and link to it from the `main` executable, 
or by passing the source file directly to the existing `add_executable` command.


Once you have a `read` function that is deemed usable, write som code in `main.cpp` that can read a file using the `file_reader` class.

A text-file is located relative to the generated executable (<build_folder>/bin) that you can try to read. 
Notice how CMake is configured to copy the content of `<root>/data` into `<build_folder>/bin`?
This allows you to easily reference the file from within the code using the relative path `"data/data.txt"`.
