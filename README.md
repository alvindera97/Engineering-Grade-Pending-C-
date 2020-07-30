# Engineering-Grade-Pending-C-
C++ based GUI program that calculates the GP (Grade Pending) and CGPA (Cummulative Grade Pending Average) of an engineering student in the University of Benin


The framework used here is wxWidgets. For information on how to setup your workstation/environment for development, compilation and IDE integration, please visit the wxWidgets website and consult the appropriate resource.
All code was written with the Linux operating system, specifically Ubuntu 18.04.04.
Microsoft Visual Studio Express 2012 was used to compile the code to generate the windows executable. Note that there were adjustments made to the code base to make some data types compatible with a lower version of C++. 
All .dlls required by Windows [when trying to execute the programme within the Windows operating system] are 32 bit dlls NOT 64 bit. 


There was also repetition of the map containing course codes and their credit loads. This was done to avoid the use of header files or anything else than one (1) singular source code.
I'm a Python Developer. 
Hence, one-codebase-to-rule-them-all is far more comfortable for me. 

For those that are trying to run this application in linux, this software was compiled using shared libraries [unknowingly] — which means that you will have to download/install libraries for wxWidgets3.1.3(gpCalculator) or 3.1.4 (gpCalculatorNewUbuntu)... A new version of the executable — that would come will all the necessary libraries bundled (and hence no need for building new libraries or [hopefully] installing DLLs) — would be released soon.

This is to make it much easier for those that just want a plug and play application to get their hands on the software and run it [no installation required]. I will however, leave the shared-libraries version here [for the forseable future] for other C++ Devs to play work with. 


Feel free to ask any questions and open issues. 


Proudly 🇳🇬.
