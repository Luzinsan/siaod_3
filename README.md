# siaod_3
/*
Вариант 10. Подготовить текстовый файл,
содержащий не менее 12 целых чисел.
Прочитать данные из этого файла и сформировать односвязный кольцевой список.
В сформированном списке целых чисел из каждого положительного элемента списка
вычесть значение следующего элемента,
а к каждому отрицательному элементу списка прибавить значение следующего элемента.
Вывести на экран исходный список и после его обработки.
После завершения работы со списком освободите занимаемую им динамическую память

*/

Результат работы программы

![image](https://user-images.githubusercontent.com/53607329/136817549-d96e496b-27fe-4b31-901e-39525106d5b4.png)

    Алгоритм решения задачи
1. Открыть файл для чтения данных;
2. Создать фиктивный элемент для инициализации АТД «список»;
3. Занести первый элемент в начало списка и присвоить этот элемент фиктивному элементу;
4. Считать следующий элемент и занести в список после первого элемента;
5. Переприсвоить указатель на элемент списка указывать на только что занесённый элемент в список;
6. Перейти к пункту 4, пока все данные из файла не будут считаны;
7. Закрыть файл для чтения, так как все данные считаны;
8. Назначить указывать текущему элементу (последнему занесённому в список) на первый элемент списка, таким образом организовав кольцевой список;
9. Вывести исходные данные на экран, начиная с первого элемента;
10. Выполнить поставленную задачу с помощью функции, начиная с первого элемента до последнего включительно (так как используется кольцевой список);
11. Вывести обработанные данные на экран, начиная с первого элемента;
12. Освободить динамически выделенную память поэлементно начиная со второго элемента, а затем, освободить начальный элемент;
      
        Программная реализация
        Последовательность действий при программной реализации:
        
1. Задать класс с необходимыми полями для каждого элемента и статической переменной для всего списка в целом;
2. Реализовать алгоритм решения поставленной задачи;
3. Реализовать основные функции работы со списком, реализованным на указателях (Конструктор – инициализация, InsertNode(), DeleteNode(), Dispose());
4. Реализовать в главной функции корректное считывание данных из файла и вывод данных в консоль обработанных данных в списке;
