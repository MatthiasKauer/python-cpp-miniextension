import sys

try:
    import _preamble
except ImportError:
    sys.exit(-1)

from mylib.script.miniextension_test import main
if __name__ == '__main__':
    main()
