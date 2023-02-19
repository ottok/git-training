#!/usr/bin/python3

import time
import sys

print("Hello world", end="", flush=True)

for x in range(1, 15):
    print("!", end="", flush=True)
    time.sleep(.1)

print("")

sys.exit(0)
