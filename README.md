# Diablo2BinConverter
Program to convert .bin files inside patch_d2.mpq back to txt

Currently it has two modes:

## Manual Mode
The first mode is "Manual Mode", here you describe the layout of the bin file yourself and it'll unpack it according to your description, the resulting format needs to match the total size of the files and the amount of rows it contains (the first 4 bytes in the file), it'll tell you if the sizes don't match up.

It's used by calling:

```
D2BinExtractor.exe <file> <format>
```
file should be a path to your bin file

The format needs to be of the following:

- 'c' = signed char  (1 byte)
- 'b' = byte  (1 byte)
- 's' = short  (2 bytes)
- 'w' = unsigned short  (2 bytes)
- 'i' = int  (4 bytes)
- 'u' = unsigned int  (4 bytes)
- 'aXX' = char array where XX is the amount of characters in hex (N bytes)
- 'xXX' = ignore data, where XX is the amount of bytes in hex (N bytes)

For example, one of the easiest files to do this manually for is "Shrines.bin" which has the following format: iiiicca20a80si

Therefore calling it with:
```
  D2BinExtractor.exe shrines.bin iiiicca20a80si
```
should output the file correctly decoded


## Auto Mode
The second mode is "Auto Mode"

as you can expect this one automatically converts the file if it has a "decoder" for it, not a lot of files are currently supported, but the important ones so far that are include:

- Cubemain.bin
- Armor.bin
- Weapons.bin
- Misc.bin
- Skills.bin
- Skilldesc.bin (though this one has some weird fields)
- Monstats.bin


Simply calling 
```
   D2BinExtractor.exe <file> auto
  ```
should extract it correctly and prefix the filedata with a row of names per column

