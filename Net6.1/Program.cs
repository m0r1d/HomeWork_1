using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;

namespace Lab_Collections
{
    // ==== Задание 2: Класс Student ====
    public class Student
    {
        public int Id { get; set; }
        public string Name { get; set; }
        public int Age { get; set; }
        public double AverageGrade { get; set; }

        public override string ToString()
        {
            return $"ID: {Id}, Имя: {Name}, Возраст: {Age}, Средний балл: {AverageGrade}";
        }
    }

    // ==== Интерфейс управления коллекциями ====
    interface ICollectionManager<T>
    {
        void Add(T item);
        void Remove(Predicate<T> condition);
        void Display();
        void Clear();
    }

    // ==== Задание 1: Однородная коллекция ====
    public class IntListManager : ICollectionManager<int>
    {
        private List<int> numbers = new List<int>();

        public void Add(int item) => numbers.Add(item);

        public void Remove(Predicate<int> condition)
        {
            numbers.RemoveAll(condition);
        }

        public void Display()
        {
            Console.WriteLine("Содержимое коллекции:");
            foreach (var n in numbers)
                Console.WriteLine(n);
        }

        public void Clear()
        {
            numbers.Clear();
            Console.WriteLine("Коллекция очищена.");
        }

        public void Sort()
        {
            numbers.Sort();
            Console.WriteLine("Коллекция отсортирована.");
        }

        public int FindMax() => numbers.Count > 0 ? numbers.Max() : 0;
    }

    // ==== Задание 2: Разнородная коллекция студентов ====
    public class StudentListManager : ICollectionManager<Student>
    {
        private List<Student> students = new List<Student>();

        public void Add(Student s) => students.Add(s);

        public void Remove(Predicate<Student> condition)
        {
            students.RemoveAll(condition);
        }

        public void Display()
        {
            if (students.Count == 0)
            {
                Console.WriteLine("Коллекция студентов пуста.");
                return;
            }

            Console.WriteLine("Список студентов:");
            foreach (var s in students)
                Console.WriteLine(s);
        }

        public void Clear()
        {
            students.Clear();
            Console.WriteLine("Коллекция студентов очищена.");
        }

        public void SortByName()
        {
            students = students.OrderBy(s => s.Name).ToList();
            Console.WriteLine("Отсортировано по имени.");
        }

        public void SortByGrade()
        {
            students = students.OrderByDescending(s => s.AverageGrade).ToList();
            Console.WriteLine("Отсортировано по среднему баллу.");
        }
    }

    // ==== Задание 3: Работа с Hashtable ====
    public class HashTableDemo
    {
        private Hashtable table = new Hashtable();

        public void AddItem(int key, string value)
        {
            table[key] = value;
        }

        public void Display()
        {
            Console.WriteLine("Содержимое Hashtable:");
            foreach (DictionaryEntry entry in table)
                Console.WriteLine($"{entry.Key} → {entry.Value}");
        }

        public void Remove(int key)
        {
            if (table.ContainsKey(key))
            {
                table.Remove(key);
                Console.WriteLine($"Элемент с ключом {key} удалён.");
            }
            else
                Console.WriteLine("Такого ключа нет.");
        }

        public void Clear()
        {
            table.Clear();
            Console.WriteLine("Hashtable очищена.");
        }
    }

    // ==== Главная программа ====
    class Program
    {
        static void Main(string[] args)
        {
            Console.Title = "Лабораторная работа по коллекциям (Вариант 2)";
            Console.OutputEncoding = System.Text.Encoding.UTF8;

            while (true)
            {
                Console.WriteLine("\n=== МЕНЮ ==="); Console.WriteLine("1. Однородная коллекция (List<int>)");
                Console.WriteLine("2. Разнородная коллекция (List<Student>)");
                Console.WriteLine("3. Работа с Hashtable");
                Console.WriteLine("0. Выход");
                Console.Write("Выберите задание: ");
                string choice = Console.ReadLine();

                switch (choice)
                {
                    case "1":
                        RunTask1();
                        break;
                    case "2":
                        RunTask2();
                        break;
                    case "3":
                        RunTask3();
                        break;
                    case "0":
                        return;
                    default:
                        Console.WriteLine("Некорректный ввод!");
                        break;
                }
            }
        }

        // === Задание 1 ===
        static void RunTask1()
        {
            Console.Clear();
            Console.WriteLine("=== ЗАДАНИЕ 1: Однородная коллекция List<int> ===");
            IntListManager manager = new IntListManager();

            manager.Add(5);
            manager.Add(2);
            manager.Add(9);
            manager.Add(3);

            manager.Display();

            manager.Sort();
            manager.Display();

            Console.WriteLine($"Максимум: {manager.FindMax()}");

            manager.Remove(x => x < 5);
            Console.WriteLine("После удаления чисел < 5:");
            manager.Display();

            manager.Clear();
        }

        // === Задание 2 ===
        static void RunTask2()
        {
            Console.Clear();
            Console.WriteLine("=== ЗАДАНИЕ 2: Коллекция студентов ===");

            StudentListManager manager = new StudentListManager();

            manager.Add(new Student { Id = 1, Name = "Анна", Age = 19, AverageGrade = 4.8 });
            manager.Add(new Student { Id = 2, Name = "Борис", Age = 20, AverageGrade = 3.9 });
            manager.Add(new Student { Id = 3, Name = "Вика", Age = 18, AverageGrade = 4.5 });

            manager.Display();
            manager.SortByGrade();
            manager.Display();

            manager.Remove(s => s.AverageGrade < 4);
            Console.WriteLine("После удаления студентов со средним баллом < 4:");
            manager.Display();
        }

        // === Задание 3 ===
        static void RunTask3()
        {
            Console.Clear();
            Console.WriteLine("=== ЗАДАНИЕ 3: Hashtable ===");

            HashTableDemo demo = new HashTableDemo();

            demo.AddItem(1, "Москва");
            demo.AddItem(2, "Казань");
            demo.AddItem(3, "Самара");

            demo.Display();

            demo.Remove(2);
            demo.Display();

            demo.Clear();
        }
    }
}