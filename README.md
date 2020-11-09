Instructions on how to build this tutorial:

Install a common set of build tools such as
[Microsoft Visual Studio](https://visualstudio.microsoft.com/vs/community/)'s
C++ toolchain.  This will be used by Conan.

Install [Conan](https://docs.conan.io/en/latest/installation.html) and
[CMake](https://cmake.org/download/).

The `bincrafters` remote is for SDL2.  The `hexdecimal` remote is for
libtcod.  Add these remotes to Conan from the command line:

    conan remote add bincrafters https://api.bintray.com/conan/bincrafters/public-conan
    conan remote add hexdecimal https://api.bintray.com/conan/hexdecimal/conan

From the command line, change to the directory with this readme file and run
the following (you might need to build libraries during the install step):

    conan install . -if build
    conan build . -bf build

`conan install` will download the dependencies required by the samples.
`conan build` will build the samples themselves.

You can now run the executable at `./build/bin/tutorial.exe`.

[Visual Studio Code](https://code.visualstudio.com/) is the recommended IDE,
you'll want the following plugins to be active for this workspace:

* [C/C++](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools)
* [C++ Intellisense](https://marketplace.visualstudio.com/items?itemName=austin.code-gnu-global)
* [Clang-Format](https://marketplace.visualstudio.com/items?itemName=xaver.clang-format)
* [CMake](https://marketplace.visualstudio.com/items?itemName=twxs.cmake)
* [CMake Tools](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cmake-tools)
