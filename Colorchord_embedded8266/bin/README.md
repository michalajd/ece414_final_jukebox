![206840714-d9925697-b67d-4eaf-9e8e-b914bddec806](https://user-images.githubusercontent.com/22672963/209071733-f9c8624a-9afb-4d86-a503-dbfc8d8621b5.jpg)

Note to self:
I have been rotating between 4 different ESP8266 dev boards including nodemcu v0.9. They are finicky indeed. I used the same settings in Nodemcu flasher and one will work fine and the other goes into Fatal exception loop (repeatable). In other configurations they don't run and just print boot code, or infinite boot cycles. I have been also uploading Arduino blink on all dev boards and they all work reliably and repeatably. So I am assuming it is a problem with erasing and flashing the memory.
![image](https://user-images.githubusercontent.com/22672963/209071817-40f7ecf6-f3e4-46f1-8340-af2c40fb0d14.png)
But when I press the exact same Flash button, the other nodemcu(different manufacturer, different firmware) goes straight to exception and onboard led stays lit, and the smaller ones goes into bootloop (prints boot code, led blinks) These behaviors are repeatable and attempted with small variations many times.
