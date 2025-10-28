using System;
using System.Linq;

namespace LabWork
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Title = "Лабораторная работа. Вариант №2";
            Console.OutputEncoding = System.Text.Encoding.UTF8;

            while (true)
            {
                Console.Clear();
                Console.WriteLine("Лабораторная работа — Вариант №2");
                Console.WriteLine("----------------------------------");
                Console.WriteLine("1. Проверить, является ли одно слово частью другого");
                Console.WriteLine("2. Расположить слова в алфавитном порядке");
                Console.WriteLine("3. Удалить из слова все согласные буквы");
                Console.WriteLine("0. Выход");
                Console.Write("\nВыберите номер задания: ");

                string choice = Console.ReadLine();

                switch (choice)
                {
                    case "1":
                        Task1();
                        break;
                    case "2":
                        Task2();
                        break;
                    case "3":
                        Task3();
                        break;
                    case "0":
                        Console.WriteLine("\nВыход из программы...");
                        return;
                    default:
                        Console.WriteLine("Некорректный выбор! Попробуйте снова.");
                        break;
                }

                Console.WriteLine("\nНажмите любую клавишу для продолжения...");
                Console.ReadKey();
            }
        }

        // ===== ЗАДАНИЕ 1 =====
        static void Task1()
        {
            Console.Clear();
            Console.WriteLine("Задание 1: Проверить, является ли одно слово частью другого\n");

            Console.Write("Введите первое слово: ");
            string word1 = Console.ReadLine();

            Console.Write("Введите второе слово: ");
            string word2 = Console.ReadLine();

            if (word1.Contains(word2))
                Console.WriteLine($"Слово \"{word2}\" является частью слова \"{word1}\".");
            else if (word2.Contains(word1))
                Console.WriteLine($"Слово \"{word1}\" является частью слова \"{word2}\".");
            else
                Console.WriteLine("Ни одно из слов не является частью другого.");
        }

        // ===== ЗАДАНИЕ 2 =====
        static void Task2()
        {
            Console.Clear();
            Console.WriteLine("Задание 2: Расположить слова в алфавитном порядке\n");

            Console.WriteLine("Введите последовательность слов (через запятую, в конце точка):");
            string input = Console.ReadLine();

            // Удаляем точку и разбиваем строку по запятым
            string[] words = input.TrimEnd('.').Split(',');
            var sortedWords = words
                .Select(w => w.Trim())
                .OrderBy(w => w)
                .ToArray();

            Console.WriteLine("\nСлова в алфавитном порядке:");
            foreach (string w in sortedWords)
                Console.WriteLine(w);
        }

        // ===== ЗАДАНИЕ 3 =====
        static void Task3()
        {
            Console.Clear();
            Console.WriteLine("Задание 3: Удалить из данного слова все согласные буквы\n");

            Console.Write("Введите слово: ");
            string inputWord = Console.ReadLine();

            // Поддержка и русских, и английских гласных
            string vowels = "аеёиоуыэюяАEЁИОУЫЭЮЯaeiouyAEIOUY";
            string result = "";

            foreach (char c in inputWord)
            {
                if (vowels.Contains(c))
                    result += c;
            }

            Console.WriteLine($"Результат: {result}");
        }
    }
}