/*int main(void) {

#if defined (__USE_LPCOPEN)
    // Read clock settings and update SystemCoreClock variable
    SystemCoreClockUpdate();
#if !defined(NO_BOARD_LIB)
    // Set up and initialize all required blocks and
    // functions related to the board hardware
    Board_Init();
    // Set the LED to the state of "On"
    Board_LED_Set(0, true);
#endif
#endif
	/* Enable and setup SysTick Timer at a periodic rate */
	/*SysTick_Config(SystemCoreClock / 1000);

    // TODO: insert code here
    Chip_RIT_Init(LPC_RITIMER);
    LiquidCrystal lcd(8, 9, 10, 11, 12, 13);

    lcd.begin(16,2);
    lcd.setCursor(0,0);

    SimpleMenu menu;
    IntegerEdit temperature(lcd, std::string("Temperature"));
    IntegerEdit pressure(lcd, std::string("Pressure"));
    IntegerEdit humidity(lcd, std::string("Humidity"));
    menu.addItem(new MenuItem(temperature));
    menu.addItem(new MenuItem(pressure));
    menu.addItem(new MenuItem(humidity));
    temperature.setValue(21);
    pressure.setValue(89);
    humidity.setValue(42);

    menu.event(MenuItem::show); // display first menu item
    menu.event(MenuItem::up);
    menu.event(MenuItem::up);
    menu.event(MenuItem::up);
    menu.event(MenuItem::up);
    menu.event(MenuItem::ok);
    menu.event(MenuItem::up);
    menu.event(MenuItem::up);
    menu.event(MenuItem::ok);
    menu.event(MenuItem::down);
    menu.event(MenuItem::ok);
    menu.event(MenuItem::up);
    menu.event(MenuItem::back);
    menu.event(MenuItem::down);
    menu.event(MenuItem::up);
    menu.event(MenuItem::ok);
    menu.event(MenuItem::back);
    menu.event(MenuItem::up);
    menu.event(MenuItem::up);
    menu.event(MenuItem::up);

	while(1);
	
	return 0;
}*/
