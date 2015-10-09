import sys

try:
    import _preamble
except ImportError:
    sys.exit(-1)

from transferdyn.scripts.cppext_mini import mini_runner
if __name__ == '__main__':
    mini_runner()
