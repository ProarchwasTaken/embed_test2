# Introduction
Hi everybody. For the past few days or so, I've been learning more about
pybind11. While pybind11 is mainly for extending Python using C++, I've
been specifically learning how to do the reverse.

This is the second test as I felt like the first one isn't really worth
showing. Besides, this one is a lot more interesting.

# About
The best way to explain it is that this project is made to see if I could
possibly implement mod support with python as the scripting language. 
There is a python file named "script.py" that will be read by the program
by using an embedded interpreter. Based on the contents of the script, the
behavior of the program would be different.

If you want more info on how this works, you could read the source code
and the various docstrings I've written. The docstrings in the script
itself goes into the most detail of how things are structured.

# Personal Thoughts
I've checked, and at the time of typing this, it's been under 3 years
since I properly started to learn programming. As I made multiple projects
since then, I think I'm starting to grow a proper opinion on the only two
programming languages I'm somewhat competent in using. Which is Python and
C++.

While C++ is something I've been learning for around 4 months. I do like 
the novelty of using it, and how it gives you total freedom on how you
wanted to do things. Once you get a proper grasp on how pointers work, you
can pretty much do some crazy stuff.

Although, I did have some problems with using the language. First off 
setting up C++ is a challenge in of itself. There's no easy way to install
a compiler on Windows other than downloading Visual Studio. (Which is 
probably a intentional design choice now that I think about it, but that's
just speculation.)

One time, when I was in high school, and was using VSCode at the time. I
tried getting into C++, but gave up due to how hard it is. Only around
4 months ago is when I decided to sit down and figure it out.

C++ by itself doesn't have a traceback whenever an error occurs, the
program just straight up terminates without any error messages. Granted,
this issue hasn't really affected me that much as it's easy to deduce that
the most likely reason the program would crash would be due to a segfault,
and if you're smart with how you write your code. At worst, I could just
use a debugger to see where the code segfaults and figure out what went
wrong.

While C++ is fast on runtime, coding in C++ and setting up a project 
isn't. If you want to do anything more than a single file project without
any external libraries, you're gonna need a Makefile, and maybe cmake for
those much larger projects. Otherwise, you're gonna have a bad time.

Installing and using external libraries is something I had to figure out.
Most of the time, you'd have to statically link them to your project.
Honestly the amount of work you'd have to do just to set up a C++ project
is displeasing to say the least.

It's important for you to know that I use Neovim as my text editor. Sure,
downloading Visual Studio could help me avoid all the problems I 
mentioned, but personally I just don't like it. It's bloated, and I heard
it takes a while to startup. I choose Neovim because I like it's charm
and high customizability. On top of being able to use it for every
programming language so it's probably gonna be the only think I'll use.

With all those downsides I still like C++ as a language, and it'll 
probably be the only low level language I'll use from now on. While I did
have trouble learning how to use it, I didn't eventually warm up to CMake,
and it does help me in certain occasion.

With Python, I may be a bit biased as it's the languange that got me into
programming in the first place and due to me having more experience using
it. I do acknowledge it's flaws and usages.

Overall, I think Python is a lot more accessible than C++. It's easy to
install the interpreter and libraries, and it's faster to write code for.
I like the charm of just creating a python file, write some lines of code,
and just run it without extra steps.

If someone would to ask me what programming language they should start
with, I'll definitely suggest Python. It truly is the best programming
language for beginners, the the reason I was able to get a grasp on C++ so
quicky is because of my experience in it.

In conclusion, both languages have their strenghs and weaknesses, and I
like them both. I have enjoyed any opportunity where I get to use both. So
anyway, I'll see you later.
