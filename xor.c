//
//  xor.c
//
//  Copyright (c) Karl Stenerud. All rights reserved.
//
// Released under standard MIT License https://opensource.org/licenses/MIT
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall remain in place
// in this source code.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(const int argc, const char** argv)
{
	const char* filename = argv[1];

	FILE* in = (argc < 2 || strcmp(filename, "-") == 0) ? stdin : fopen(filename, "rb");
	FILE* out = stdout;

	if(in == NULL)
	{
		perror(filename);
		exit(-1);
	}

	int length;
	char buffer[100000];
	while((length = fread(buffer, 1, sizeof(buffer), in)) > 0)
	{
		for(int i = 0; i < length; i++)
		{
			buffer[i] ^= 0xff;
		}
		fwrite(buffer, 1, length, out);
	}

	return 0;
}
