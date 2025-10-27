using System;
using System.Linq;

namespace ArraysTasks
{
    class Program
    {
        static Random rand = new Random();

        static void Main(string[] args)
        {
            while (true)
            {
                Console.Clear();
                Console.WriteLine("Выберите задание:");
                Console.WriteLine("1 - Сформировать массивы по формуле (2^k * √n) / 3^k");
                Console.WriteLine("2 - Вывести массив с наименьшим произведением элементов");
                Console.WriteLine("3 - Найти сумму элементов ниже главной диагонали");
                Console.WriteLine("4 - Сортировка массива методом простого обмена");
                Console.WriteLine("0 - Выход");
                Console.Write("\nВаш выбор: ");

                string choice = Console.ReadLine();
                Console.WriteLine();

                switch (choice)
                {
                    case "1": Task1(); break;
                    case "2": Task2(); break;
                    case "3": Task3(); break;
                    case "4": Task4(); break;
                    case "0": return;
                    default:
                        Console.WriteLine("Неверный ввод!");
                        break;
                }

                Console.WriteLine("\nНажмите любую клавишу для продолжения...");
                Console.ReadKey();
            }
        }

        // ───────────────────────────────────────────────
        // 1. Формирование массивов по формуле
        static void Task1()
        {
            Console.Write("Введите n: ");
            int n = int.Parse(Console.ReadLine());

            Console.Write("Введите m: ");
            int m = int.Parse(Console.ReadLine());

            double[] oneDim = new double[n];
            double[,] twoDim = new double[n, m];

            for (int i = 0; i < n; i++)
            {
                int k = rand.Next(1, 10);
                oneDim[i] = Math.Pow(2, k) * Math.Sqrt(n) / Math.Pow(3, k);
            }

            for (int i = 0; i < n; i++)
                for (int j = 0; j < m; j++)
                {
                    int k = rand.Next(1, 10);
                    twoDim[i, j] = Math.Pow(2, k) * Math.Sqrt(n) / Math.Pow(3, k);
                }

            Console.WriteLine("\nОдномерный массив:");
            foreach (var x in oneDim)
                Console.Write($"{x:F4} ");

            Console.WriteLine("\n\nДвумерный массив:");
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                    Console.Write($"{twoDim[i, j],8:F4}");
                Console.WriteLine();
            }
        }

        // ───────────────────────────────────────────────
        // 2. Два массива, вывести тот, у которого произведение меньше
        static void Task2()
        {
            Console.Write("Введите длину массивов: ");
            int n = int.Parse(Console.ReadLine());

            int[] A = new int[n];
            int[] B = new int[n];

            for (int i = 0; i < n; i++)
            {
                A[i] = rand.Next(1, 10);
                B[i] = rand.Next(1, 10);
            }

            Console.WriteLine("\nМассив A: " + string.Join(" ", A));
            Console.WriteLine("Массив B: " + string.Join(" ", B));

            long prodA = A.Aggregate(1L, (x, y) => x * y);
            long prodB = B.Aggregate(1L, (x, y) => x * y);

            Console.WriteLine($"\nПроизведение A = {prodA}, произведение B = {prodB}");
            Console.WriteLine("\nМассив с наименьшим произведением:");
            Console.WriteLine(prodA <= prodB ? string.Join(" ", A) : string.Join(" ", B));
        }

        // ───────────────────────────────────────────────
        // 3. Сумма элементов ниже главной диагонали
        static void Task3()
        {
            Console.Write("Введите размер квадратного массива n: ");
            int n = int.Parse(Console.ReadLine());

            int[,] A = new int[n, n];
            for (int i = 0; i < n; i++)
                for (int j = 0; j < n; j++)
                    A[i, j] = rand.Next(1, 10);

            Console.WriteLine("\nМассив A:");
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                    Console.Write($"{A[i, j],3}");
                Console.WriteLine();
            }

            int sum = 0;
            for (int i = 0; i < n; i++)
                for (int j = 0; j < i; j++) // ниже главной диагонали
                    sum += A[i, j];

            Console.WriteLine($"\nСумма элементов ниже главной диагонали: {sum}");
        }

        // ───────────────────────────────────────────────
        // 4. Сортировка методом простого обмена (пузырьковая)
        static void Task4()
        {
            Console.Write("Введите длину массива: ");
            int n = int.Parse(Console.ReadLine());

            int[] arr = new int[n];
            for (int i = 0; i < n; i++)
                arr[i] = rand.Next(1, 100);

            Console.WriteLine("\nИсходный массив:");
            Console.WriteLine(string.Join(" ", arr));

            // Сортировка пузырьком
            for (int i = 0; i < n - 1; i++)
                for (int j = 0; j < n - i - 1; j++)
                    if (arr[j] > arr[j + 1])
                        (arr[j], arr[j + 1]) = (arr[j + 1], arr[j]);

            Console.WriteLine("\nОтсортированный массив:");
            Console.WriteLine(string.Join(" ", arr));
        }
    }
}
