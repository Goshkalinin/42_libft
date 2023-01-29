vim ~/.vimrc | открыть конфигурационный файл
----|---
set tabstop=4 | устанавливаем табуляцию
set number|включаем нумерацию строк
set nonamber | отключаем нумерацию строк
syntax on | подсветка синтаксиса
set mouse=a | поддержка мыши
match ErrorMsg '\%>80v.\+' | подсветка строк длинне 80-ти символов
highlight ExtraWhitespace ctermbg=red guibg=red<br>match ExtraWhitespace /\s\+$/ | подсветка пробелов в конце строки 
|
|
|
|
|
|

