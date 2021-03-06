XOR
===

XORs each octet of the input file with 0xff.


Why
---

Some services **coughgooglecough** block certain kinds of files. That's annoying. I get around it like so:

Sending side:

    xor myfile.tgz >myfile.tgz.xor

Receiving side:

    xor myfile.tgz.xor >myfile.tgz

Or just:

	tar cz mydir | xor > mydir.tgz.xor
	xor mydir.tgz.xor | tar xz


Usage
-----

XOR the input file and print to stdout:

    xor <input file>

XOR stdin and print to stdout:

	xor

Alternative:

	xor -


Building
--------

You will need gcc, libc, and make in a unix-like environment.

### Install the required development environment on Debian

    apt install gcc libc-dev make

### Build

    make

### Clean

    make clean


Copyright & License
-------------------

Copyright (c) Karl Stenerud

Released under standard MIT License https://opensource.org/licenses/MIT

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in the documentation of any redistributions of the template files themselves (but not in projects built using the templates).

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
