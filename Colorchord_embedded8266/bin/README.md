

Note to self:
I have been rotating between 4 different ESP8266 dev boards including nodemcu v0.9. They are finicky indeed. I used the same settings in Nodemcu flasher and one will work fine and the other goes into Fatal exception loop (repeatable). In other configurations they don't run and just print boot code, or infinite boot cycles. I have been also uploading Arduino blink on all dev boards and they all work reliably and repeatably. So I am assuming it is a problem with erasing and flashing the memory.
![image](https://user-images.githubusercontent.com/22672963/209071817-40f7ecf6-f3e4-46f1-8340-af2c40fb0d14.png)
But when I press the exact same Flash button, the other nodemcu(different manufacturer, different firmware) goes straight to exception and onboard led stays lit, and the smaller ones goes into bootloop (prints boot code, led blinks) These behaviors are repeatable and attempted with small variations many times.
