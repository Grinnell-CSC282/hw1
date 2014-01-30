Some Useful *nix Tools
======================

Extracting information about files
----------------------------------

### `file` - determine file fype

### `od` - octal dump

See the contents of a file (binary or otherwise).  Note that `od -a` dumps
something close to an ASCII representation.


### `find` - Finds files using a given file-name.

### `kill` - Sends a signal to a running process.

### `grep` - search for strings within files.

### `sort` - sorts its input (for example, you might give it grep's output)

### `diff` - Compare files line by line


Transfering files
-----------------

### `rsync` - "faster, flexible replacement for rcp [remote file copy]" 

Copy files from one location to another (from or to a remote host, or on the current host) 
quickly and robustly. Useful options include --progress, which displays
information on the progress of file transfers, -h, which  prints information in a
human readable format, and -z, which compresses files before transfer and decompresses
them at their destination.


Processsing files
-----------------

## `sed` - stream editer. Extract information from text files.

General Use
-----------

### `screen` - allows you to have sessions independent from your actual session.
### `ps` - lets you know information about running processes.

