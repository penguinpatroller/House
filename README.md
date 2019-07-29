# House #
House Library for CSU.
This library will handle all the components used in the house. It will take care of the temperature sensor, pir motion sensor, and lcd screen. This page will be updated if we add more sensors.

##How to use this Library##
To initialize the House you must add:
```
House myHouse();
```

This will create the House object. What you put after the word House will determine the name of the house. In this example, the name is **myHouse**.

To read temperature from the house, connect the *out* pin to digital port 2, and type:
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
