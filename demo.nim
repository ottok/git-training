## Nim demo file
##
## This is a very simple program written in Nim language.
## Compile and run with:
##  nim compile --run demo.nim
##

import std/strformat
import strutils
import std/times

var machinename = "Computer"

echo(fmt"Hello,, I am {machinename}!")

echo "What is your name?"
let username = readLine(stdin)

echo "Hello ", username, ", nice to meet you!"

echo "How old are you?"

let age = readLine(stdin).parseInt()

let yearOfBirth = now() - age.years

echo "I think you were born in the year ", yearOfBirth.format("yyyy")
