# VSCode-CMake template

a template for a simple C++ project for VSCode and CMake.

## How to use 

Checkout the code

In VSCode install extensions:
  * C/C++
  * CMake 

`CMake Tools` extension is not needed, probably will have some conflicts.

(Optionally) Attach a keyboard shortcut to `Run Task`, for example shift+alt+t. Otherwise for each task you need `ctrl+shift+p` and `Run task`.

### Running in debug

`Run task` -> `cmake-clean-debug` 

`Run task` -> `cmake-debug` 

`Run task` -> `make-debug`


From the bottom panel: `Select and launch debugger` -> `launch-debug`.  
Alternatively `ctrl+shift+p` ->  `Select and launch debugger` -> `launch-debug`.
Later you can run the latest selected debugging config using just `F5`


### Running in release 

Similar to debug version.

