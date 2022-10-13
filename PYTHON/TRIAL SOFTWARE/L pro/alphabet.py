# cul.py
"""
Usage: This is a simple CLI software is work on any number of arguments along with One of Three option i.e. -c, -u, -l
for change of case of entered char or string where as
-c = capitalize
-u = uppercase
-l = lowercase
"""
import sys

opts = [opt for opt in sys.argv[1:] if opt.startswith("-")]
args = [arg for arg in sys.argv[1:] if not arg.startswith("-")]

# logic to decide what should do behind on the basis of user command
if "-c" in opts:
    print(" ".join([arg.capitalize() for arg in args]))
elif "-u" in opts:
    print(" ".join([arg.upper() for arg in args]))
elif "-l" in opts:
    print(" ".join([arg.lower() for arg in args]))
