# General guidelines

* No communication whatsoever is allowed.

* This is an exam, you don't have a right to chat, listen to music, make noise, or generally do anything that may disturb the other students in any way.

* Your phones and other technological devices must be turned off and put away. If a phone rings, the whole row will be disqualified from the exam and kicked out immediately.

* Your home directory contains three directories : "rendu", "subjects" and "traces".

* The "subjects" directory will contain the subjects of your assignments

* The "rendu" folder is a clone of your Git turn-in repository. You will work in it, and use it as any regular Git repository.

* The system will not grade anything that is not pushed on your Git turn-in repository, and at the right place. Pay attention to where examshell tells you to put your files.

* You can only run your programs in the "rendu" directory or one of its subdirectories.

* You may need to read the man to carry out some assignments...

* You will be graded by a program. You must respect the specified file/path/function names to the letter.

* Assignments will always specify which files will be collected :

  * When an assignment asks for specific files, they will be explicitly named. For example "file1.c file1.h".

  * Otherwise, when filenames and/or the number of files is up to you, the assignment will say something along the lines of "*.c *.h".

  * When a Makefile is required, it will ALWAYS be explicitly stated.

* In case of technical problem, question about the subject, or any other problem, you must get up silently and wait for a member of the staff to come to you. It is forbidden to ask your neighbors, or to verbally call for a staff member.

* Any equipment not explicitly allowed is implicitly forbidden.

* Any exit is definitive, you can not come in again.

* Staff members may kick you out of the exam without warning if they deem it necessary.

* You are allowed blank pieces of paper, and a pen. No notebooks, notes, or any help of the sort. You are alone to face this exam.

# Coding guidelines

* Useful functions and files will sometimes be given to you in the subject directory

* The correction is fully automated, and performed by the program we know as Deepthought.

* When an assignment asks you to write a program with one or more explicitly named files, it will be compiled with the following command: clang -Wall -Wextra -Werror file1.c file2.c file3.c -o program_name.

* When the assignment leaves the filenames up to you, it will be compiled with: clang -Wall -Wextra -Werror *.c -o program_name.

* Finally, when you must only turn in a function (so, one file), it will be compiled with clang -c -Wall -Wextra -Werror yourfile.c, then we will compile our main function and link them together to create a test program.

* Allowed functions will be specified in the headers of the assignments.  You may recode any other function you think is necessary. Using a function that's not explicitly allowed is considered cheating, and will result in a failing grade, with no possible discussion or appeal whatsoever.  You've been warned.

* Any function that isn't explicitly allowed is implicitly forbidden.
