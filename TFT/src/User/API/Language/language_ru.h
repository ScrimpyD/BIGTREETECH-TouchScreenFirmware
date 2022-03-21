#ifndef _LANGUAGE_RU_H_
#define _LANGUAGE_RU_H_

    // config.ini Parameter Settings - Screen Settings and Feature Settings
    #define STRING_EMULATED_M600          "Эмуляция M600"
    #define STRING_EMULATED_M109_M190     "Emulated M109 / M190"
    #define STRING_EVENT_LED              "Event LED"
    #define STRING_FILE_COMMENT_PARSING   "File comment parsing"
    #define STRING_ROTATED_UI             "Переворот"
    #define STRING_LANGUAGE               "Русский"
    #define STRING_ACK_NOTIFICATION       "ACK стиль уведомления"
    #define STRING_FILES_SORT_BY          "Сортировать по"
    #define STRING_FILES_LIST_MODE        "Файлы в режиме строк"
    #define STRING_FILENAME_EXTENSION     "Show filename extension"
    #define STRING_FAN_SPEED_PERCENTAGE   "Скорость вентилятора в процентах"
    #define STRING_PERSISTENT_INFO        "Нагрев в инфостроке"
    #define STRING_TERMINAL_ACK           "ACK терминала (C°)"
    #define STRING_SERIAL_ALWAYS_ON       "Серийный порт Всегда ВКЛЮЧЕН"
    #define STRING_SHOW_BOOTSCREEN        "Show Bootscreen"
    #define STRING_ALERT_HEATERS_ON       "Alert that heaters are still on" 
    #define STRING_MARLIN_FULLSCREEN      "Marlin на весь экран"
    #define STRING_MARLIN_SHOW_TITLE      "Marlin Mode Title Support"
    #define STRING_MARLIN_TYPE            "Marlin тип режима"
    #define STRING_MOVE_SPEED             "Скорость (X Y Z)"
    #define STRING_AUTO_LOAD_LEVELING     "Автоматическая Загрузка Сетки"
    #define STRING_PROBING_Z_OFFSET       "Probing for Z offset"
    #define STRING_Z_STEPPERS_ALIGNMENT   "Z Автоматическое выравнивание"
    #define STRING_PS_AUTO_SHUTDOWN       "Автовыключение"
    #define STRING_FIL_RUNOUT             "Сенсор прутка"
    #define STRING_PL_RECOVERY            "Работа после потери питания"
    #define STRING_PL_RECOVERY_HOME       "Работа после потери питания с парковкой"
    #define STRING_BTT_MINI_UPS           "Поддержка BTT UPS "
    #define STRING_TOUCH_SOUND            "Звуки нажатий"
    #define STRING_TOAST_SOUND            "Звуки инфостроки"
    #define STRING_ALERT_SOUND            "Предупреждения"
    #define STRING_HEATER_SOUND           "Уведомление о нагревателе"
    #define STRING_LCD_BRIGHTNESS         "Яркость"
    #define STRING_LCD_IDLE_BRIGHTNESS    "Регулировка яркости LCD"
    #define STRING_LCD_IDLE_TIME          "Время до гашения LCD"
    #define STRING_LCD_LOCK_ON_IDLE       "LCD lock on idle"
    #define STRING_LED_ALWAYS_ON          "LED always ON"
    #define STRING_KNOB_LED_COLOR         "Подсветка энкодера"
    #define STRING_KNOB_LED_IDLE          "Простой подсветки энкодера"
    #define STRING_START_GCODE_ENABLED    "G-код перед печатью"
    #define STRING_END_GCODE_ENABLED      "G-код после печати"
    #define STRING_CANCEL_GCODE_ENABLED   "G-код отмены печати"

    // Machine Parameter Settings - Param Title (ordered by gcode)
    #define STRING_STEPS_SETTING          "Настройка шагов на мм"
    #define STRING_FILAMENT_SETTING       "Диаметр прутка"
    #define STRING_MAXACCELERATION        "MAX ускорение"
    #define STRING_MAXFEEDRATE            "MAX скорость подачи"
    #define STRING_ACCELERATION           "Ускорение"
    #define STRING_JERK                   "Рывок"
    #define STRING_JUNCTION_DEVIATION     "Отклонение узла"
    #define STRING_HOME_OFFSET            "Дом - отступы"
    #define STRING_FWRETRACT              "M207 ретракт"
    #define STRING_FWRECOVER              "M208 восстановление ретракта"
    #define STRING_RETRACT_AUTO           "Авто FW ретракт"
    #define STRING_HOTEND_OFFSET          "Смещение 2-го сопла"
    #define STRING_STEALTH_CHOP           "TMC StealthChop"
    #define STRING_DELTA_CONFIGURATION    "Delta Configuration"
    #define STRING_DELTA_TOWER_ANGLE      "Tower Angle Trim"
    #define STRING_DELTA_ENDSTOP          "Endstop Adjustments"
    #define STRING_PROBE_OFFSET           "Смещение датчика"
    #define STRING_LIN_ADVANCE            "К-фактор"
    #define STRING_CURRENT_SETTING        "Настройка TMC драйверов"
    #define STRING_HYBRID_THRESHOLD       "TMC гибридный порог"
    #define STRING_BUMP_SENSITIVITY       "TMC чувствительность удара"
    #define STRING_MBL_OFFSET             "MBL Смещение"

    // Machine Parameter Settings - Param Attributes (ordered by gcode)
    #define STRING_PRINT_ACCELERATION     "Печати"
    #define STRING_RETRACT_ACCELERATION   "Ретракта"
    #define STRING_TRAVEL_ACCELERATION    "Перемещения"
    #define STRING_RETRACT_LENGTH         "Длина"
    #define STRING_RETRACT_SWAP_LENGTH    "Длина при смене сопла"
    #define STRING_RETRACT_FEEDRATE       "Скорость"
    #define STRING_RETRACT_Z_LIFT         "Подъём по Z"
    #define STRING_RECOVER_LENGTH         "Длина"
    #define STRING_SWAP_RECOVER_LENGTH    "Длина при смене сопла"
    #define STRING_RECOVER_FEEDRATE       "Скорость"
    #define STRING_SWAP_RECOVER_FEEDRATE  "Скорость при смене сопла"

    // Save / Load
    #define STRING_SAVE                   "Сохранить"
    #define STRING_RESTORE                "Вернуть"
    #define STRING_RESET                  "Сброс"
    #define STRING_EEPROM_SAVE_INFO       "Сохранить настройки принтера в EEPROM?"
    #define STRING_EEPROM_RESTORE_INFO    "Загрузить настройки из EEPROM?"
    #define STRING_EEPROM_RESET_INFO      "Сбрость EEPROM настройки принтера на начальные?"
    #define STRING_SETTINGS_SAVE          "Сохранить настройки"
    #define STRING_SETTINGS_RESTORE       "Восстановить настройки"
    #define STRING_SETTINGS_RESET         "Сбросить настройки"
    #define STRING_SETTINGS_RESET_INFO    "Все настройки будут сброшены по умолчанию.\nПродолжить?"
    #define STRING_SETTINGS_RESET_DONE    "Успешный сброс настроек экрана. Для полного вступления в силу,\nперегрузите устройство."

    // Navigation Buttons
    #define STRING_PAGE_UP                "<---"
    #define STRING_PAGE_DOWN              "--->"
    #define STRING_UP                     "Вверх"
    #define STRING_DOWN                   "Вниз"
    #define STRING_NEXT                   "Следующий"
    #define STRING_BACK                   "Назад"

    // Value Buttons
    #define STRING_INC                    "Увеличить"
    #define STRING_DEC                    "Уменьшить"
    #define STRING_LOAD                   "Загрузка"
    #define STRING_UNLOAD                 "Выгрузка"
    #define STRING_ON                     "Вкл"
    #define STRING_OFF                    "Выкл"
    #define STRING_AUTO                   "AUTO"
    #define STRING_SMART                  "Умный"
    #define STRING_SLOW                   "Медленно"
    #define STRING_NORMAL                 "Обычно"
    #define STRING_FAST                   "Быстро"
    #define STRING_ZERO                   "Обнулить"
    #define STRING_HALF                   "50%"
    #define STRING_FULL                   "Максимум"
    #define STRING_CUSTOM                 "Своё меню"
    #define STRING_CLEAR                  "Убрать"
    #define STRING_DEFAULT                "По умолчанию"

    // Action Buttons
    #define STRING_START                  "Начать"
    #define STRING_STOP                   "Стоп"
    #define STRING_PAUSE                  "Пауза"
    #define STRING_RESUME                 "Продолжить"
    #define STRING_INIT                   "Инициализация"
    #define STRING_DISCONNECT             "Отключить"
    #define STRING_SHUT_DOWN              "Выключить"
    #define STRING_FORCE_SHUT_DOWN        "Принудительно выкл"
    #define STRING_EMERGENCYSTOP          "Экст.стоп"
    #define STRING_PREHEAT                "Преднагрев"
    #define STRING_PREHEAT_BOTH           "Оба"
    #define STRING_COOLDOWN               "Охладить"

    // Dialog Buttons
    #define STRING_CONFIRM                "OK"
    #define STRING_CANCEL                 "Отмена"
    #define STRING_WARNING                "Внимание"
    #define STRING_CONTINUE               "Продолжение"
    #define STRING_CONFIRMATION           "Вы уверены?"

    // Process Status
    #define STRING_STATUS                 "Статус"
    #define STRING_READY                  "Готов"
    #define STRING_BUSY                   "В процессе, ждите..."
    #define STRING_LOADING                "Загрузка..."
    #define STRING_UNCONNECTED            "Нет подключения!"
    #define STRING_LISTENING              "TFT in Listening Mode!"

    // Process Info
    #define STRING_INFO                   "Информация"
    #define STRING_INVALID_VALUE          "Остутствуют правильные значения!"
    #define STRING_TIMEOUT_REACHED        "Время истекло!"
    #define STRING_DISCONNECT_INFO        "Управление принтером через компьютер"
    #define STRING_SHUTTING_DOWN          "Выключаю..."
    #define STRING_WAIT_TEMP_SHUT_DOWN    "Дождитесь температуры сопла не ниже чем %d℃"
    #define STRING_POWER_FAILED           "Продолжить печать?"
    #define STRING_PROCESS_RUNNING        "Идёт процесс!"
    #define STRING_PROCESS_COMPLETED      "Процесс завершён!"
    #define STRING_PROCESS_ABORTED        "Процесс прерван!"

    // TFT SD, USB Disk, Onboard SD, Filament Runout Process Commands / Status / Info
    #define STRING_TFTSD                  "SD экрана"
    #define STRING_READ_TFTSD_ERROR       "Ошибка чтения SD карты!"
    #define STRING_TFTSD_INSERTED         "SD карта вставлена!"
    #define STRING_TFTSD_REMOVED          "SD карта извлечена!"
    #define STRING_TFTSD_NOT_DETECTED     "No SD Card detected."
    #define STRING_USB_DISK               "Флеш карта"
    #define STRING_READ_USB_DISK_ERROR    "Ошибка чтения флеш карты!"
    #define STRING_USB_DISK_INSERTED      "Флеш карта вставлена!"
    #define STRING_USB_DISK_REMOVED       "Флеш карта извлечена!"
    #define STRING_USB_DISK_NOT_DETECTED  "No USB Disk detected."
    #define STRING_ONBOARDSD              "SD платы"
    #define STRING_ONBOARDUSB             "USB платы"
    #define STRING_READ_ONBOARDSD_ERROR   "Ошибка чтения SD карты!"
    #define STRING_FILAMENT_RUNOUT        "Пруток закончился"

    // Steppers, Print, Probe Process Commands / Status / Info
    #define STRING_DISABLE_STEPPERS       "Двигатели"
    #define STRING_XY_UNLOCK              "Моторы выкл"

    #define STRING_START_PRINT            "Начать печать:\n%s?"
    #define STRING_STOP_PRINT             "Остановить печать?"
    #define STRING_IS_PAUSE               "Невозможна экструзия при печати, поставить\nна паузу?"
    #define STRING_M0_PAUSE               "Пауза по команде M0"

    #define STRING_TEST                   "BLT тест"
    #define STRING_DEPLOY                 "BLT вниз"
    #define STRING_STOW                   "BLT вверх"
    #define STRING_REPEAT                 "Точность Z"

    // Printer Tools
    #define STRING_NOZZLE                 "Сопло"
    #define STRING_BED                    "Стол"
    #define STRING_CHAMBER                "Камера"
    #define STRING_FAN                    "Вентилятор"

    #define STRING_BLTOUCH                "BLTouch"
    #define STRING_TOUCHMI                "TouchMi"

    // Values
    #define STRING_1_DEGREE               "1℃"
    #define STRING_5_DEGREE               "5℃"
    #define STRING_10_DEGREE              "10℃"

    #define STRING_001_MM                 "0.01мм"
    #define STRING_01_MM                  "0.1мм"
    #define STRING_1_MM                   "1мм"
    #define STRING_5_MM                   "5мм"
    #define STRING_10_MM                  "10мм"
    #define STRING_100_MM                 "100мм"
    #define STRING_200_MM                 "200мм"

    #define STRING_1_PERCENT              "1%"
    #define STRING_5_PERCENT              "5%"
    #define STRING_10_PERCENT             "10%"
    #define STRING_PERCENT_VALUE          "%d%%"

    #define STRING_5_SECONDS              "5 сек."
    #define STRING_10_SECONDS             "10 сек."
    #define STRING_30_SECONDS             "30 сек."
    #define STRING_60_SECONDS             "1 мин."
    #define STRING_120_SECONDS            "2 мин."
    #define STRING_300_SECONDS            "5 мин."

    // Colors
    #define STRING_WHITE                  "Белый"
    #define STRING_BLACK                  "Чёрный"
    #define STRING_BLUE                   "Синий"
    #define STRING_RED                    "Красный"
    #define STRING_GREEN                  "Зелёный"
    #define STRING_CYAN                   "Голубой"
    #define STRING_YELLOW                 "Жёлтый"
    #define STRING_BROWN                  "Коричневый"
    #define STRING_GRAY                   "Серый"
    #define STRING_ORANGE                 "Оранжевый"
    #define STRING_INDIGO                 "Индиго"
    #define STRING_VIOLET                 "Фиолетовый"
    #define STRING_MAGENTA                "Маджента"
    #define STRING_PURPLE                 "Пурпурный"
    #define STRING_LIME                   "Лаймовый"
    #define STRING_DARKBLUE               "Тёмно-синий"
    #define STRING_DARKGREEN              "Тёмно-зелёный"
    #define STRING_DARKGRAY               "Тёмно-серый"

    // Menus
    #define STRING_HEAT                   "Нагрев"
    #define STRING_MOVE                   "Движение"
    #define STRING_HOME                   "Домой"
    #define STRING_PRINT                  "Печать"
    #define STRING_EXTRUDE                "Экструзия"
    #define STRING_SETTINGS               "Настройки"
    #define STRING_SCREEN_SETTINGS        "Экран"
    #define STRING_UI_SETTINGS            "UI"
    #define STRING_SOUND                  "Звуки"
    #define STRING_MARLIN_MODE_SETTINGS   "MarlinMode"
    #define STRING_MACHINE_SETTINGS       "Принтер"
    #define STRING_PARAMETER_SETTINGS     "Параметры"
    #define STRING_FEATURE_SETTINGS       "Опции"
    #define STRING_CONNECTION_SETTINGS    "Соединение"
    #define STRING_SERIAL_PORTS           "S. Ports"
    #define STRING_BAUDRATE               "Скорость"
    #define STRING_EEPROM_SETTINGS        "EEPROM"
    #define STRING_RGB_SETTINGS           "Цвет LED"
    #define STRING_RGB_OFF                "LED выкл"
    #define STRING_TERMINAL               "Терминал"
    #define STRING_LEVELING               "Стол вруч."
    #define STRING_POINT_1                "Точка 1"
    #define STRING_POINT_2                "Точка 2"
    #define STRING_POINT_3                "Точка 3"
    #define STRING_POINT_4                "Точка 4"
    #define STRING_POINT_5                "Точка 5"
    #define STRING_BED_LEVELING           "Стол равнен."
    #define STRING_BL_COMPLETE            "Выравнивание стола окончено"
    #define STRING_BL_SMART_FILL          "Отсутствующие точки замера были атоматически заполнены.\nЗапомните для сохраниения!"
    #define STRING_BL_ENABLE              "BL: вкл"
    #define STRING_BL_DISABLE             "BL: выкл"
    #define STRING_ABL                    "ABL"
    #define STRING_BBL                    "BBL"
    #define STRING_UBL                    "UBL"
    #define STRING_MBL                    "MBL"
    #define STRING_MBL_SETTINGS           "Равнение по сетке"
    #define STRING_ABL_SETTINGS           "Автовыравнивание"
    #define STRING_ABL_SETTINGS_BBL       "Билинейная калибровка"
    #define STRING_ABL_SETTINGS_UBL       "Универсальная калибровка"
    #define STRING_ABL_SETTINGS_UBL_SAVE  "Сохранить в ячейку"
    #define STRING_ABL_SETTINGS_UBL_LOAD  "Загрузить из ячейки"
    #define STRING_ABL_SLOT0              "Ячейка 0"
    #define STRING_ABL_SLOT1              "Ячейка 1"
    #define STRING_ABL_SLOT2              "Ячейка 2"
    #define STRING_ABL_SLOT3              "Ячейка 3"
    #define STRING_ABL_SLOT_EEPROM        "Восстановить из ячейки при перезагрузке?\n(Сохранить в EEPROM)"
    #define STRING_ABL_Z                  "Z затухание"
    #define STRING_LEVEL_CORNER           "Прямой угол"
    #define STRING_P_OFFSET               "Отступ P"
    #define STRING_H_OFFSET               "Отступ H"
    #define STRING_DISTANCE               "Отступы"
    #define STRING_LOAD_UNLOAD            "Загрузить/Выгрузить"
    #define STRING_LOAD_UNLOAD_SHORT      "За/Выгрузка"
    #define STRING_TOUCHSCREEN_ADJUST     "Калибровка"
    #define STRING_MORE                   "Больше"
    #define STRING_SCREEN_INFO            "Инфо"
    #define STRING_BG_COLOR               "Фоновый цвет"
    #define STRING_FONT_COLOR             "Цвет шрифта"
    #define STRING_PERCENTAGE             "Подстройки"
    #define STRING_PERCENTAGE_SPEED       "Скорость"
    #define STRING_PERCENTAGE_FLOW        "Поток"
    #define STRING_BABYSTEP               "Микрошаг Z"
    #define STRING_X_INC                  "X+"
    #define STRING_Y_INC                  "Y+"
    #define STRING_Z_INC                  "Z+"
    #define STRING_X_DEC                  "X-"
    #define STRING_Y_DEC                  "Y-"
    #define STRING_Z_DEC                  "Z-"
    #define STRING_X                      "X"
    #define STRING_Y                      "Y"
    #define STRING_Z                      "Z"
    #define STRING_ADJUST_TITLE           "Калибровка экрана"
    #define STRING_ADJUST_INFO            "Нажмите на красную точку"
    #define STRING_ADJUST_OK              "Успешная калибровка"
    #define STRING_ADJUST_FAILED          "Неудачная калибровка, попробуйте снова"
    #define STRING_UNIFIEDMOVE            "Движение"
    #define STRING_UNIFIEDHEAT            "Нагрев"
    #define STRING_TOUCH_TO_EXIT          "Нажмите для возврата"
    #define STRING_MAINMENU               "Меню"
    #define STRING_LEVELING_EDGE_DISTANCE "Отступы от краёв стола"
    #define STRING_TUNING                 "Наладка"
    #define STRING_PID                    "PID"
    #define STRING_PID_TITLE              "PID автонастройка"
    #define STRING_PID_START_INFO         "Сейчас будет запущена PID автонастройка, это займёт некоторое время. Продолжить?"
    #define STRING_PID_START_INFO_2       "Автонастройка PID в работе!"
    #define STRING_PID_START_INFO_3       "Не трогайте экран до окончания настройки (загориться зелёным LED)!"
    #define STRING_TUNE_EXTRUDER          "Настройка шагов"
    #define STRING_TUNE_EXT_EXTRUDE_100   "100мм экст."
    #define STRING_TUNE_EXT_TEMP          "Настройка экструдера/Нагрев"
    #define STRING_TUNE_EXT_MARK120MM     "Отметьте 120 мм на прутке\nНажмите '%s' по говности\nИзмерьте полученную длину/nпосле экструдирования"
    #define STRING_TUNE_EXT_HEATOFF       "Отключить нагрев?"
    #define STRING_TUNE_EXT_ADJ_ESTEPS    "Подстройка E-шагов"
    #define STRING_TUNE_EXT_ESTEPS_SAVED  "E-шаги установлены!\nНе забудьте сохранить их в EEPROM\nНовое значение: %0.2f"
    #define STRING_TUNE_EXT_MEASURED      "Оставшаяся длина:"
    #define STRING_TUNE_EXT_OLD_ESTEP     "Старые E-шаги: %0.2f"
    #define STRING_TUNE_EXT_NEW_ESTEP     "Новые E-шаги: %0.2f"
    #define STRING_NOTIFICATIONS          "Уведомления"
    #define STRING_MESH_EDITOR            "Сетка ред."
    #define STRING_MESH_TUNER             "Сетка настр."
    #define STRING_CASE_LIGHT             "Подсветка"
    #define STRING_LOAD_STARTED           "Загрузка прутка начата.\nДождитесь пока сопло достигнет необходимой температуры.\nПожалуйста подождите."
    #define STRING_UNLOAD_STARTED         "Выгрузка прутка начата.\nДождитесь пока сопло достигнет необходимой температуры.\nПожалуйста подождите."
    #define STRING_HEATERS_ON             "Некоторые нагреватели все еще работают.\nХотите прервать нагрев?"
    #define STRING_PRINT_FINISHED         "   Печать\n   закончена"
    #define STRING_MAIN_SCREEN            "Главный"
    #define STRING_PREVIOUS_PRINT_DATA    "Краткий"
    #define STRING_PRINT_TIME             "Время печати: %02u:%02u:%02u"
    #define STRING_FILAMENT_LENGTH        "\nДлина прутка: %1.2fm"
    #define STRING_FILAMENT_WEIGHT        "\nВес прутка: %1.2fg"
    #define STRING_FILAMENT_COST          "\nЦена прутка: %1.2f"
    #define STRING_NO_FILAMENT_STATS      "\nДанные о прутке отсутствуют."
    #define STRING_CLICK_FOR_MORE         "Нажмите для получения сводки"
    #define STRING_EXT_TEMPLOW            "Температура сопла ниже минимальной (%d℃)."
    #define STRING_HEAT_HOTEND            "Нагреть сопло до %d℃?"
    #define STRING_DESIRED_TEMPLOW        "Температура сопла низка\nжелательная температура (%d℃)."
    #define STRING_WAIT_HEAT_UP           "Подождите, пока он нагреется."
    #define STRING_Z_ALIGN                "Z Выравнивание"
    #define STRING_MACROS                 "Макросы"
    #define STRING_MESH_VALID             "Проверка сетки"
    #define STRING_CONNECT_PROBE          "Connect probe before starting the process. Make sure to disconnect it afterwards."
    #define STRING_DISCONNECT_PROBE       "Make sure you have disconnected probe before using this feature."
    #define STRING_CALIBRATION            "Calibrate"

#endif
