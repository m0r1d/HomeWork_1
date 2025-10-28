using System;
using System.Collections;
using System.Collections.Generic;

namespace MyWinFormsApp
{
    // --- Задание 1 ---
    public interface IManageList<T>
    {
        void AddItem(T item);
        void RemoveItem(T item);
        List<T> GetAll();
    }

    public class IntListManager : IManageList<int>
    {
        private List<int> items = new List<int>();
        public void AddItem(int item) => items.Add(item);
        public void RemoveItem(int item) => items.Remove(item);
        public List<int> GetAll() => items;
    }

    // --- Задание 2 ---
    public class Student
    {
        public string Name { get; set; }
        public int Age { get; set; }
        public string Group { get; set; }

        public Student(string name, int age, string group)
        {
            Name = name;
            Age = age;
            Group = group;
        }

        public override string ToString() => $"Имя: {Name}, Возраст: {Age}, Группа: {Group}";
    }

    public interface IManageStudents
    {
        void AddStudent(Student student);
        void RemoveStudent(Student student);
        List<Student> GetAllStudents();
    }

    public class StudentManager : IManageStudents
    {
        private List<Student> students = new List<Student>();
        public void AddStudent(Student student) => students.Add(student);
        public void RemoveStudent(Student student) => students.Remove(student);
        public List<Student> GetAllStudents() => students;
    }

    // --- Задание 3 ---
    public class StudentHashtable
    {
        private Hashtable table = new Hashtable();
        public void AddStudent(Student student)
        {
            if (!table.ContainsKey(student.Name))
                table.Add(student.Name, student);
        }
        public Hashtable GetAll() => table;
    }
}