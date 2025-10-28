namespace MyWinFormsApp
{
    partial class Form1
    {
        private System.ComponentModel.IContainer components = null;

        // Поля формы (обязательны instance, без static)
        private System.Windows.Forms.TextBox txtIntInput;
        private System.Windows.Forms.ListBox lstInts;
        private System.Windows.Forms.Button btnAddInt;
        private System.Windows.Forms.Button btnRemoveInt;

        private System.Windows.Forms.TextBox txtStudentName;
        private System.Windows.Forms.TextBox txtStudentAge;
        private System.Windows.Forms.TextBox txtStudentGroup;
        private System.Windows.Forms.ListBox lstStudents;
        private System.Windows.Forms.Button btnAddStudent;
        private System.Windows.Forms.Button btnRemoveStudent;

        private System.Windows.Forms.ListBox lstHashtable;
        private System.Windows.Forms.Button btnShowHashtable;

        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
                components.Dispose();
            base.Dispose(disposing);
        }

        private void InitializeComponent()
        {
            this.components = new System.ComponentModel.Container();

            this.txtIntInput = new System.Windows.Forms.TextBox();
            this.lstInts = new System.Windows.Forms.ListBox();
            this.btnAddInt = new System.Windows.Forms.Button();
            this.btnRemoveInt = new System.Windows.Forms.Button();

            this.txtStudentName = new System.Windows.Forms.TextBox();
            this.txtStudentAge = new System.Windows.Forms.TextBox();
            this.txtStudentGroup = new System.Windows.Forms.TextBox();
            this.lstStudents = new System.Windows.Forms.ListBox();
            this.btnAddStudent = new System.Windows.Forms.Button();
            this.btnRemoveStudent = new System.Windows.Forms.Button();

            this.lstHashtable = new System.Windows.Forms.ListBox();
            this.btnShowHashtable = new System.Windows.Forms.Button();

            // --- Задание 1 ---
            this.txtIntInput.Location = new System.Drawing.Point(20, 20);
            this.txtIntInput.Size = new System.Drawing.Size(100, 22);

            this.btnAddInt.Location = new System.Drawing.Point(130, 18);
            this.btnAddInt.Size = new System.Drawing.Size(75, 25);
            this.btnAddInt.Text = "Добавить";
            this.btnAddInt.Click += new System.EventHandler(this.btnAddInt_Click);

            this.btnRemoveInt.Location = new System.Drawing.Point(210, 18);
            this.btnRemoveInt.Size = new System.Drawing.Size(75, 25);
            this.btnRemoveInt.Text = "Удалить";
            this.btnRemoveInt.Click += new System.EventHandler(this.btnRemoveInt_Click);

            this.lstInts.Location = new System.Drawing.Point(20, 50);
            this.lstInts.Size = new System.Drawing.Size(265, 100);

            // --- Задание 2 ---
            this.txtStudentName.Location = new System.Drawing.Point(20, 170);
            this.txtStudentName.Size = new System.Drawing.Size(100, 22);

            this.txtStudentAge.Location = new System.Drawing.Point(130, 170);
            this.txtStudentAge.Size = new System.Drawing.Size(50, 22);

            this.txtStudentGroup.Location = new System.Drawing.Point(190, 170);
            this.txtStudentGroup.Size = new System.Drawing.Size(95, 22);

            this.btnAddStudent.Location = new System.Drawing.Point(300, 168);
            this.btnAddStudent.Size = new System.Drawing.Size(75, 25);
            this.btnAddStudent.Text = "Добавить";
            this.btnAddStudent.Click += new System.EventHandler(this.btnAddStudent_Click);

            this.btnRemoveStudent.Location = new System.Drawing.Point(380, 168);
            this.btnRemoveStudent.Size = new System.Drawing.Size(75, 25);
            this.btnRemoveStudent.Text = "Удалить";
            this.btnRemoveStudent.Click += new System.EventHandler(this.btnRemoveStudent_Click);

            this.lstStudents.Location = new System.Drawing.Point(20, 200);
            this.lstStudents.Size = new System.Drawing.Size(435, 120);

            // --- Задание 3 ---
            this.btnShowHashtable.Location = new System.Drawing.Point(20, 340);
            this.btnShowHashtable.Size = new System.Drawing.Size(150, 25);
            this.btnShowHashtable.Text = "Показать Hashtable";
            this.btnShowHashtable.Click += new System.EventHandler(this.btnShowHashtable_Click);

            this.lstHashtable.Location = new System.Drawing.Point(20, 370);
            this.lstHashtable.Size = new System.Drawing.Size(435, 150);

            // --- Form1 ---
            this.ClientSize = new System.Drawing.Size(480, 550);
            this.Controls.Add(this.txtIntInput);
            this.Controls.Add(this.btnAddInt);
            this.Controls.Add(this.btnRemoveInt);
            this.Controls.Add(this.lstInts);

            this.Controls.Add(this.txtStudentName);
            this.Controls.Add(this.txtStudentAge);
            this.Controls.Add(this.txtStudentGroup);
            this.Controls.Add(this.btnAddStudent);
            this.Controls.Add(this.btnRemoveStudent);
            this.Controls.Add(this.lstStudents);

            this.Controls.Add(this.btnShowHashtable);
            this.Controls.Add(this.lstHashtable);

            this.Text = "Коллекции в Windows Forms";
        }
    }
}