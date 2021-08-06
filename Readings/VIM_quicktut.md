# VIM Quick tutorial
## Charles Carter
### August 6, 2021
#### carter_charles@columbusstate.edu





This document proposes to give a quick and dirty start to using the vi/Vim text editor. It's intended to  e useful only for about the first hour of use. Students should make an effort to become familiar with the file *quickref.txt*, which can be found in the typical Vin installation directory. On my (Windows) machine, it's located at [C:\Program Files (x86)\Vim\vim82\doc\quickref.txt].

## Beginning

To begin with, students must realize two very important things:

1. vi/Vim was not designed to be used with a pointing device, e.g., mouse, touchpad, etc. Everything can and should be done by entering the commands using the keypad.
1. vi/Vim is a modal text editor, which means that the functions accessed using the keys differ according to the mode of the editor. We will cover four modes:
    1. command (normal) mode
    1. text entry mode
    1. search mode
    1. ex mode

**command mode**, aka normal mode, is entered by using the \<ESC\> key. If you are in the command mode already, using \<ESC\> will do nothing.

**text entry mode** is entered by using one of i, I, a, A, o, O, or other keys. See below.

**search mode** is entered by using the foward slash (/) or the question mark (?) while in command mode.

**ex mode** is entered by using thee colon (:) while in command mode

People differ as to the number of modes available in vim. There will be others that you will run into.

## Quitting/Saving/Writing Documents

Use these commands in the ex mode. You must be in command mode in order to invoke them, so as a precaution type \<ESC\> before you use these commands.
* :q -- **quits** unless you have unsaved changes
* :q! -- **quits** discarding unsaved changes
* :w -- **writes** or saves the current text
* :w \<filename\> -- **writes** to the file named by the argument
* :wq -- **write, quit** writes the current document and quits
* :x -- **write, quit**, an alias for :wq
* :e \<filename\> -- **edits** the file after loading it.

## Text Entry Mode

If you are in command mode (by using \<ESC\>) these commands (and others) will place you in text entry mode.
* i -- **inserts** text at the cursor
* I -- **Inserts** text at the beginning of the line
* a -- **appends** text after the cursor
* A -- **Appends** text at the end of the line
* o -- **opens** a new line below the current line and enters text entry mode
* O -- **Opens** a new line above the current line and enters text entry mode

Slightly more advanced commands are s (substitute multiple characters), r (replace one character), R (replace multiple characters, c (change text), and so on.

## Movement commands
* h -- moves one character to the left (same as &#8592; )
* j -- moves one character below (same as &#8595; )
* j -- moves one character above (same as &#8593; )
* j -- moves one character to the right (same as &#8594; )
* w -- moves to the beginning of the word to the right (**word**)
* e -- moves to the end of the word to the right (**end**)
* b -- moves to the beginning of the word to the left (**back**)
* 0 -- (the digit zero, not an uppercase o) moves to the beginning of the line
* $ -- moves to the end of the line

## Delete/Copy/Paste
* v -- **visual** highlight text with movement command
* V -- **Visual** highlight line
* y -- **yank** (copy) text to the buffer
* yy -- **Yank yank** (copy) line to the buffer
* p -- **paste** text in the buffer
* d -- **delete** text
* dd -- **delete delete** line

## Other Useful Commands
* :help -- invokes the Vim quickref.txt
* u -- **undo** the very useful UNDO command
* <CTL>R -- **redo** undoes undo
* zt, z., zb -- places the current cursor position at the top, middle, and bottom of the screen
* H, M, L -- places the cursor at the top, middle, or bottom of the screen
* ~ -- the tilde changes case of the character
* <CMD>n -- for most of the editor commands, you can precede or follow with a number *n*, and that executes the command *n* times

## ex

ex is a line editor that predates Unix. As it turns out, ex is extremely useful, still, after a couple of generations. It will pay you dividends to learn how to use ex. Just sayin'.
## Last Word

The last time I counted, the Vim quickref.txt had approximately 2,800 commands. You do not have to memorize all of these commands in order to use Vim. You will find Vim useful if you learn fifty of them, and if you learn 100 of them, you will be proficient.

I have used vi/Vim for more that 20 years, and in my opinion, this is the most effective piece of software that has ever been written. You don't have to agree. I suspect that if you learn how to use it, you may still not agree but you will understand why I have that opinion.
