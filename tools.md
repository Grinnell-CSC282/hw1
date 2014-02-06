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

### 'chown' - Change the owner of a file

### 'tail -x' - Shows you the last x lines in a file

Transfering files
-----------------

### `rsync` - "faster, flexible replacement for rcp [remote file copy]" 

Copy files from one location to another (from or to a remote host, or on the current host) 
quickly and robustly. Useful options include --progress, which displays
information on the progress of file transfers, -h, which  prints information in a
human readable format, and -z, which compresses files before transfer and decompresses
them at their destination.

### 'scp'   - copy files between two systems

Processsing files
-----------------

### `sed` - stream editer. Extract information from text files.
### 'tr' 
translates characters

Searching for Strings in your File System or Wherever
-----------------------------------------

### 'grep' - "file pattern searcher"

Search for a string or regular expression in your filesystem. Grep will search through all file names and text documents. You can also give grep other sorts of documents or program outputs, and it will search through those, too.

Example Use:
'grep *.c .' Find all c files in your directory
'history | grep git' Find all the git commands you've ever used


General Use
-----------

### `screen` - allows you to have sessions independent from your actual session.
### `ps`     - lets you know information about running processes.
### 'ssh -X' - allows you to connect to a computer remotely with GUI capabilities
### 'top'    - lets you see the processes running on your system
### 'touch' - create an empty file or change a file's access and modification timestamps (http://en.wikipedia.org/wiki/Touch_%28Unix%29)
### 'history' 
shows history of most-used terminal commands and allows you to set aliases to them

### 'clear'  - clears the terminal window
