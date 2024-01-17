# BOX

Box is a c++ class, created to draw chart on cli

## Description

Box is a CLI static program, it means that when outputed via a draw methode, a box couldn't be modified.
This class use UTF-8 uncoding then, windows native CLI can't support it.

## Feature

We can draw a full and closed table with the methode drawFullBox().

But we can also Draw the table row by row like:

> Box.box;
> ...
> box.drawTopLine(...);
> for (...) {
>     box.drawContentLine(...);
>     box.drawMiddleLine(...);    
> }
> box.drawBottomLine(...);

## Coming soon

- ASCII support
- Dynamic CLI

## Contribution
Feel free to push commit 😁.

## License
GNU GPL