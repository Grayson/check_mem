## Usage

For first run, simply use `make`:

	make

To re-parse the `memory.txt` file, you can run it again.  This is useful for
feeding the data into sources other than the Terminal:

	make | code -

To regenerate the memory dump completely, clean and then run again:

	make clean && make

Some binaries are optimized and stripped of debugging symbols.  This will expose
fewer entries in the memory dump.  You can do this as well by making an
optimized build:

	make app_optimized && make

For reading the memory dump directly, consider using a hex viewing tool such as
HexFiend ([Apple Store link](https://apps.apple.com/us/app/hex-fiend/id1342896380?mt=12)).
