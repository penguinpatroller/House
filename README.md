# House #
House Library for CSU.
This library will handle all the components used in the house. It will take care of the temperature sensor, pir motion sensor, and lcd screen. This page will be updated if we add more sensors.

## First time set up
You must first install 3 Libraries through arduino, in order for this library to work. To learn how to download these libraries, follow this [link](https://github.com/penguinpatroller/Arduino_CSU_2019).

Follow the instructions in the first paragraph of each section to download the correct libraries, and you can ignore the rest.

## How to use this Library
You must first download this library to use it. On this github page, there is a green button that says **clone or download**. Click this button. It will open up a small window. On the bottom right of the window, it will say: **Download as Zip**. Click this button, and save it somewhere on your desktop. You then need to unzip this file by right clicking and clicking unzip. This will leave you with a single folder called *House*. Move this folder to *Documents\Arduino\libraries*. After dropping this file in there, you may use this code by adding this to the top of your code in any Arduino sketch:
```
#include <House.h>
```

To initialize the House you must add:
```
House myHouse();
```

This will create the House object. Add this near the top of your code, under the include statement for the library. What you put after the word House will determine the name of the house. In this example, the name is **myHouse**.

To read temperature from the house, connect the **OUT** pin to digital port 2, and type:
```
myHouse.get_temp();
```

This line will return the temperature of the house in farenheit as a float. You can save this value, and use it later.

To print to the LCD screen, type:
```
myHouse.print("YOUR MESSAGE HERE");
```

Whatever you put in between the quotation marks will print onto the screen. You can print words and numbers on this screen.

To read from the pir motion sensor, type:
```
myHouse.detect_motion();
```

This will return a boolean, a value of either true or false to the user. True means that it detected movement, while False means that it didn't.
