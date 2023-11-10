# base_engine

This is a repository where I will work upon making a base engine for SFML that I will use to make games.

### How to setup in Visual Studio 2022

To setup this repository as your template first clone this repository in your local environment. Now click on the `base_engine.sln` file and produce a template in VS 2022 from Project -> Export Template.
Now make your project with the template. In properties of the solution we setup the dependencies of our project. </br>
1. Set the configuration as `All Configurations` and the platform as `x64` as the libraries are 64-bit versions. You can also use the 32-bit versions (download the `lib` and `include` folder from the [SFML](https://www.sfml-dev.org/download/sfml/2.6.1/) put them in the Dependencies directory instead of the given) and use the `x86` platform.
2. In the VC++ Directories in the Include Directories section add the directory `$(SolutionDir)Dependencies\include` and in the Library Directories section `$(SolutionDir)Dependencies\lib` and click apply. (Note you can do the same in C/C++ -> Additional Include Directories and C/C++ -> Additional Library Directories instead of this.)
3. Now in C/C++ (Note that this section won't be visible if you haven't included atleast one cpp file.) under Preprocessor add the preprocessor `SFML_STATIC`.
4. In C/C++ -> Linker now first set the configuration to `Debug` and from the `SFML_lib_config.txt` text file copy the section under Debug and paste it in Linker -> Input -> Additional Dependencies. (Note that these are the files with `*-s-d.lib` in suffix.) Click Apply.
5. Change configuration to `Releease` and in Linker -> Input -> Additional Dependencies from the text file paste the section under `Release`. Click Apply.

And Thats it. Now you can check by pressing 'F5', a window will come up along with the Local Windows Debugger.
