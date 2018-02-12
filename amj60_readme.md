# AMJ60
awesome keyboard 60%

Прошивка платы:
1. Клонировать QMK репозиторий https://github.com/qmk/qmk_firmware.git
    Документация: https://docs.qmk.fm/
2. Установить QMK Toolbox, для прошивки.
    Установка msys2 для компиляции .hex файла прошивки: http://www.msys2.org/
3. В папке \qmk_firmware\keyboards\amj60\keymaps есть несколько готовых вариантов слоев.
4. В папке \qmk_firmware\keyboards\amj60\ в файле amj60.h указаны основные варианты компановки.
5. Создаем папку со своей раскладкой в \keymaps. Я взял за основу дефолтную 60% ANSI раскладку.
    Для визуализации своей раскладки можно воспользоваться: http://www.keyboard-layout-editor.com/
6. В документации ищем нужные коды клавишь.
7. Компилируем новый файл keymap.c в .hex.
8. Открываем QMK Toolbox, переводим плату в режим прошивки путем нажатия кнопки RESET на обратной стороне платы, после прошивки переподключаем плату.
9. Проверка работы ключей, например с помощью: https://elitekeyboards.com/switchhitter.php

Вариант с простой прошивкой через TMK описан в англоязычной теме: https://geekhack.org/index.php?topic=89697.0