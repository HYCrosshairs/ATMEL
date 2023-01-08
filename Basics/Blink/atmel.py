import sys
import getopt
from service import Service


def main(argv):
    s = Service()
    
    argumentList = argv[1:]
    # Options
    options = "hcf:"

    # Long options
    long_options = ["help", "compile", "flash"]

    try:
        # Parsing argument
        arguments, values = getopt.getopt(argumentList, options, long_options)
        if not arguments:
            s.showHelp()
        # checking each argument
        for argument, value in arguments:

            if argument in ("-h", "--help"):
                s.showHelp()
            elif argument in ("-c", "--compile"):
                s.compile()
            elif argument in ("-h", "--flash"):
                s.flash()

    except getopt.error as err:
        # output error, and return with an error code
        print(str(err))

if __name__ == '__main__':
    main(sys.argv)
