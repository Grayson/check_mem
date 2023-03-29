## Usage

For first run, simply use `make`:

	make

To re-parse the `memory.txt` file, you can run it again.  This is useful for
feeding the data into sources other than the Terminal:

	make | code -

To regenerate the memory dump completely, clean and then run again:

	make clean && make

For reading the memory dump directly, consider using a hex viewing tool such as
HexField ([Apple Store link](https://apps.apple.com/us/app/hex-fiend/id1342896380?mt=12)).
