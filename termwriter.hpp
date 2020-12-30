#ifndef TERMWRITER_H
#define TERMWRITER_H

#include <iostream>
#include <map>
#include <string>


/**
 * Public function: type, Termwriter::type(<message>);
 */
namespace Termwriter {

  std::map <char, std::string> letterMap = {
  {'A', R"V0G0N(
    _
   / \
  / _ \
 / ___ \
/_/   \_\
)V0G0N"},


  {'a', R"V0G0N(
*******
  __ _
 / _` |
| (_| |
 \__,_|
)V0G0N"},

  {'B', R"V0G0N(
 ____
| __ )
|  _ \
| |_) |
|____/
)V0G0N"},

  {'b', R"V0G0N(
 _
| |__
| '_ \
| |_) |
|_.__/
)V0G0N"},

  {'C', R"V0G0N(
  ____
 / ___|
| |
| |___
 \____|
)V0G0N"},

  {'c', R"V0G0N(
******
  ___
 / __|
| (__
 \___|
)V0G0N"},

  {'D', R"V0G0N(
 ____
|  _ \
| | | |
| |_| |
|____/
)V0G0N"},

  {'d', R"V0G0N(
     _
  __| |
 / _` |
| (_| |
 \__,_|
)V0G0N"},

  {'E', R"V0G0N(
 _____
| ____|
|  _|
| |___
|_____|
)V0G0N"},

  {'e', R"V0G0N(
******
  ___
 / _ \
|  __/
 \___|
)V0G0N"},

  {'F', R"V0G0N(
 _____
|  ___|
| |_
|  _|
|_|
)V0G0N"},

  {'f', R"V0G0N(
  __
 / _|
| |_
|  _|
|_|
)V0G0N"},

  {'G', R"V0G0N(
  ____
 / ___|
| |  _
| |_| |
 \____|
)V0G0N"},

  {'g', R"V0G0N(
  __ _
 / _` |
| (_| |
 \__, |
 |___/
)V0G0N"},

  {'H', R"V0G0N(
 _   _
| | | |
| |_| |
|  _  |
|_| |_|
)V0G0N"},

  {'h', R"V0G0N(
 _
| |__
| '_ \
| | | |
|_| |_|
)V0G0N"},

  {'I', R"V0G0N(
 ___
|_ _|
 | |
 | |
|___|
)V0G0N"},

  {'i', R"V0G0N(
 _
(_)
| |
| |
|_|
)V0G0N"},

  {'J', R"V0G0N(
     _
    | |
 _  | |
| |_| |
 \___/
)V0G0N"},

  {'j', R"V0G0N(
  (_)
  | |
  | |
 _/ |
|__/
)V0G0N"},

  {'K', R"V0G0N(
 _  __
| |/ /
| ' /
| . \
|_|\_\
)V0G0N"},

  {'k', R"V0G0N(
 _
| | __
| |/ /
|   <
|_|\_\
)V0G0N"},

  {'L', R"V0G0N(
 _
| |
| |
| |___
|_____|
)V0G0N"},

  {'l', R"V0G0N(
 _
| |
| |
| |
|_|
)V0G0N"},

  {'M', R"V0G0N(
 __  __
|  \/  |
| |\/| |
| |  | |
|_|  |_|
)V0G0N"},

  {'m', R"V0G0N(
***********
 _ __ ___
| '_ ` _ \
| | | | | |
|_| |_| |_|
)V0G0N"},

  {'N', R"V0G0N(
 _   _
| \ | |
|  \| |
| |\  |
|_| \_|
)V0G0N"},

  {'n', R"V0G0N(
******
 _ __
| '_ \
| | | |
|_| |_|
)V0G0N"},

  {'O', R"V0G0N(
  ___
 / _ \
| | | |
| |_| |
 \___/
)V0G0N"},

  {'o', R"V0G0N(
******
  ___
 / _ \
| (_) |
 \___/
)V0G0N"},

  {'P', R"V0G0N(
 ____
|  _ \
| |_) |
|  __/
|_|
)V0G0N"},

  {'p', R"V0G0N(
 _ __
| '_ \
| |_) |
| .__/
|_|
)V0G0N"},

  {'Q', R"V0G0N(
  ___
 / _ \
| | | |
| |_| |
 \__\_\
)V0G0N"},

  {'q', R"V0G0N(
  __ _
 / _` |
| (_| |
 \__, |
    |_|
)V0G0N"},

  {'R', R"V0G0N(
 ____
|  _ \
| |_) |
|  _ <
|_| \_\
)V0G0N"},

  {'r', R"V0G0N(
******
 _ __
| '__|
| |
|_|
)V0G0N"},

  {'S', R"V0G0N(
 ____
/ ___|
\___ \
 ___) |
|____/
)V0G0N"},

  {'s', R"V0G0N(
*****
 ___
/ __|
\__ \
|___/
)V0G0N"},

  {'T', R"V0G0N(
 _____
|_   _|
  | |
  | |
  |_|
)V0G0N"},

  {'t', R"V0G0N(
 _
| |_
| __|
| |_
 \__|
)V0G0N"},

  {'U', R"V0G0N(
 _   _
| | | |
| | | |
| |_| |
 \___/
)V0G0N"},

  {'u', R"V0G0N(
*******
 _   _
| | | |
| |_| |
 \__,_|
)V0G0N"},

  {'V', R"V0G0N(
__     __
\ \   / /
 \ \ / /
  \ V /
   \_/
 )V0G0N"},

  {'v', R"V0G0N(
*******
__   __
\ \ / /
 \ V /
  \_/
)V0G0N"},

  {'W', R"V0G0N(
__        __
\ \      / /
 \ \ /\ / /
  \ V  V /
   \_/\_/
)V0G0N"},

  {'w', R"V0G0N(
**********
__      __
\ \ /\ / /
 \ V  V /
  \_/\_/
)V0G0N"},

  {'X', R"V0G0N(
__  __
\ \/ /
 \  /
 /  \
/_/\_\
)V0G0N"},

  {'x', R"V0G0N(
*******
__  __
\ \/ /
 >  <
/_/\_\
)V0G0N"},

  {'Y', R"V0G0N(
__   __
\ \ / /
 \ V /
  | |
  |_|
)V0G0N"},

  {'y', R"V0G0N(
 _   _
| | | |
| |_| |
 \__, |
 |___/
)V0G0N"},

  {'Z', R"V0G0N(
 _____
|__  /
  / /
 / /_
/____|
)V0G0N"},

  {'z', R"V0G0N(
******
 ____
|_  /
 / /
/___|
)V0G0N"},

  {'`', R"V0G0N(
 _
( )
 \|
*******
*******
)V0G0N"},

  {'~', R"V0G0N(
 /\/|
|/\/
*******
*******
*******
)V0G0N"},

  {'!', R"V0G0N(
 _
| |
| |
|_|
(_)
)V0G0N"},

  {'@', R"V0G0N(
  / __ \
 / / _` |
| | (_| |
 \ \__,_|
  \____/
)V0G0N"},

  {'#', R"V0G0N(
   _  _
 _| || |_
|_  ..  _|
|_      _|
  |_||_|
)V0G0N"},

  {'$', R"V0G0N(
 | |
/ __)
\__ \
(   /
 | |
)V0G0N"},

  {'%', R"V0G0N(
 _  __
(_)/ /
  / /
 / /_
/_/(_)
)V0G0N"},

  {'^', R"V0G0N(
 /\
|/\|
*******
*******
*******
)V0G0N"},

  {'&', R"V0G0N(
  ___
 ( _ )
 / _ \/\
| (_>  <
 \___/\/
)V0G0N"},

  {'*', R"V0G0N(
__/\__
\    /
/_  _\
  \/
*******
)V0G0N"},

  {'(', R"V0G0N(
  __
 / /
| |
| |
 \_\
)V0G0N"},

  {')', R"V0G0N(
__
\ \
 | |
 | |
/_/
)V0G0N"},

  {'-', R"V0G0N(
*******
 _____
|_____|
*******
*******
)V0G0N"},

  {'_', R"V0G0N(
*******
*******
*******
 _____
|_____|
)V0G0N"},

  {'=', R"V0G0N(
*******
 _____
|_____|
|_____|
*******
)V0G0N"},

  {'+', R"V0G0N(
   _
 _| |_
|_   _|
  |_|
*******
)V0G0N"},

  {'[', R"V0G0N(
 __
| _|
| |
| |
|__|
)V0G0N"},

  {']', R"V0G0N(
 __
|_ |
 | |
 | |
|__|
)V0G0N"},

  {'{', R"V0G0N(
  / /
 | |
< <
 | |
  \ \
)V0G0N"},

  {'}', R"V0G0N(
\ \
 | |
  > >
 | |
/ /
)V0G0N"},

  {'\\', R"V0G0N(
__
\ \
 \ \
  \ \
   \_\
)V0G0N"},

  {'|', R"V0G0N(
 _
| |
| |
| |
|_|
)V0G0N"},

  {';', R"V0G0N(
 _
(_)
 _
( )
|/
)V0G0N"},

  {':', R"V0G0N(
 _
(_)
 _
(_)
***
)V0G0N"},

  {'\'', R"V0G0N(
 _
( )
|/
***
***
)V0G0N"},

  {'<', R"V0G0N(
  __
 / /
/ /
\ \
 \_\
)V0G0N"},

  {'"', R"V0G0N(
 _ _
( | )
 V V
*****
*****
)V0G0N"},

  {'>', R"V0G0N(
__
\ \
 \ \
 / /
/_/
)V0G0N"},

  {',', R"V0G0N(
****
****
 _
( )
|/
)V0G0N"},


  {'.', R"V0G0N(
****
****
****
 _
(_)
)V0G0N"},

  {'?', R"V0G0N(
 ___
|__ \
  / /
 |_|
 (_)
)V0G0N"},

  {'/', R"V0G0N(
    __
   / /
  / /
 / /
/_/
)V0G0N"},

  {' ', R"V0G0N(
****
****
****
****
****
)V0G0N"},

  {'1', R"V0G0N(
 _
/ |
| |
| |
|_|
)V0G0N"},

  {'2', R"V0G0N(
 ____
|___ \
  __) |
 / __/
|_____|
)V0G0N"},

  {'3', R"V0G0N(
 _____
|___ /
  |_ \
 ___) |
|____/
)V0G0N"},

  {'4', R"V0G0N(
 _  _
| || |
| || |_
|__   _|
   |_|
)V0G0N"},

  {'5', R"V0G0N(
 ____
| ___|
|___ \
 ___) |
|____/
)V0G0N"},

  {'6', R"V0G0N(
  __
 / /_
| '_ \
| (_) |
 \___/
)V0G0N"},

  {'7', R"V0G0N(
 _____
|___  |
   / /
  / /
 /_/
)V0G0N"},

  {'8', R"V0G0N(
  ___
 ( _ )
 / _ \
| (_) |
 \___/
)V0G0N"},

  {'9', R"V0G0N(
  ___
 / _ \
| (_) |
 \__, |
   /_/
)V0G0N"},

  {'0', R"V0G0N(
  ___
 / _ \
| | | |
| |_| |
 \___/
)V0G0N"},
};


  /**
  * Internal function for determining the width needed for a given character.
  */
  int getMaxWidth(const std::string &str) {
    int maxWidth, thisWidth;
    maxWidth = thisWidth = 0;

    for(char ch : str) {
      if(ch == '\n') {
        if(thisWidth-1 > maxWidth)
        maxWidth = thisWidth-1;
        thisWidth = 0;
      }
      ++thisWidth;
    }

    return maxWidth;
  }


  /** Internal function to add a termwriter std::string
  * to an existing termwriter std::string.
  */
  std::string addTostring(const std::string &str, const std::string &addStr) {
    std::string newStr = "";

    int minWidth = getMaxWidth(str);
    unsigned int i, j;
    i = j = 0;
    // bool firstPass = true;

    while(i < str.size()) {
      // Build string one row at a time

      int addRightSpace = i;
      // Add old string up to the new lines
      while(str[i] != '\n') {
        if(str[i] == '*')
        newStr += ' ';
        else
        newStr += str[i];
        ++i;
      }

      addRightSpace = i - addRightSpace;

      // Add back the right side spaces of a letter
      for(int k = 0; k < minWidth-addRightSpace; ++k)
      newStr += ' ';

      // Add new strings keeping right side newlines
      while(addStr[j] != '\n') {
        if(addStr[j] == '*')
        newStr += ' ';
        else
        newStr += addStr[j];
        ++j;
      }

      newStr += '\n';
      // Skip the newline and go to the next line
      ++i;
      ++j;
    }

    return newStr;
  }


  void type(std::string str = "") {
    if(str.size() > 0) {

      std::string res = R"V0G0N(





)V0G0N";
      for(char ch : str)
        res = addTostring(res, letterMap[ch]);

      std::cout << res;
    }
  }
}

#endif /* end of include guard: TERMWRITER_H */
