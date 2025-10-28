using System;
using System.Collections;
using System.Windows.Forms;

namespace MyWinFormsApp
{
    public partial class Form1 : Form
    {
        private IntListManager intManager = new IntListManager();
        private StudentManager studentManager = new StudentManager();
        private StudentHashtable studentTable = new StudentHashtable();

        public Form1()
        {
            InitializeComponent();
        }

        // --- Задание 1 ---
        private void btnAddInt_Click(object sender, EventArgs e)
        {
            if (int.TryParse(txtIntInput.Text, out int value))
            {
                intManager.AddItem(value);
                UpdateIntList();
            }
            txtIntInput.Clear();
        }

        private void btnRemoveInt_Click(object sender, EventArgs e)
        {
            if (int.TryParse(txtIntInput.Text, out int value))
            {
                intManager.RemoveItem(value);
                UpdateIntList();
            }
            txtIntInput.Clear();
        }

        private void UpdateIntList()
        {
            lstInts.Items.Clear();
            foreach (var item in intManager.GetAll())
                lstInts.Items.Add(item);
        }

        // --- Задание 2 ---
        private void btnAddStudent_Click(object sender, EventArgs e)
        {
            if (int.TryParse(txtStudentAge.Text, out int age))
            {
                Student student = new Student(txtStudentName.Text, age, txtStudentGroup.Text);
                studentManager.AddStudent(student);
                studentTable.AddStudent(student);
                UpdateStudentList();
            }
        }

        private void btnRemoveStudent_Click(object sender, EventArgs e)
        {
            var selected = lstStudents.SelectedItem as Student;
            if (selected != null)
            {
                studentManager.RemoveStudent(selected);
                UpdateStudentList();
            }
        }

        private void UpdateStudentList()
        {
            lstStudents.Items.Clear();
            foreach (var s in studentManager.GetAllStudents())
                lstStudents.Items.Add(s);
        }

        // --- Задание 3 ---
        private void btnShowHashtable_Click(object sender, EventArgs e)
        {
            lstHashtable.Items.Clear();
            foreach (DictionaryEntry entry in studentTable.GetAll())
            {
                lstHashtable.Items.Add($"Ключ: {entry.Key}, Значение: {entry.Value}");
            }
        }
    }
}