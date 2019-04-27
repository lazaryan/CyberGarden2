# Проект компьютерной игры на основе настолки Манчкин

## Как работать с github:

Первая настройка гита у себя локально
```bush
> git config --global user.name <Ваше_имя_на_гитхабе>
> git config --global user.email <Ваша_почта_к_которой_привязан_гитхаб>
```

Для скачивания
```bush
> git clone https://github.com/lazaryan/CyberGarden2
```

Для подгрузки обновлений
```bush
> git pull
```

Если с определенной ветки

```bush
> git pull main <name_branch>
```

После изменений, которые нужно сохранить
Первая настройка гита у себя локально
```bush
> git add .
> git commit -m "<Описание_коммита>"
> git push
```

Если нужно добавить не все файлы, а 1 или несколько - вместо точки пишется имя файла или папки

# Работа с ветками

Создание ветки
```bush
> git checkout -b <name_branch>
```

Переключение между ветками
```bush
> git checkout <name_branch>
```

Заливка кода не в ветке main
```bush
> git push origin <name_branch>
```