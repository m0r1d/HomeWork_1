using System;
using System.Collections.Generic;
using System.Windows.Forms;

namespace MultiArrayExample
{
    public class Form1 : Form
    {
        List<object[]> records = new List<object[]>();

        private DataGridView dataGridView1;
        private Button btnAddPerson, btnAddCar, btnAddBuilding;

        private TextBox txtPersonName, txtPersonAge, txtPersonHeight;
        private TextBox txtCarBrand, txtCarModel, txtCarYear, txtCarColor;
        private TextBox txtBuildingName, txtBuildingFloors, txtBuildingArea;

        public Form1()
        {
            this.Text = "Массив объектов";
            this.Size = new System.Drawing.Size(800, 600);

            InitializeFormControls();
        }

        private void InitializeFormControls()
        {
            // --- DataGridView ---
            dataGridView1 = new DataGridView
            {
                Location = new System.Drawing.Point(20, 250),
                Size = new System.Drawing.Size(740, 300),
                ColumnCount = 5,
                AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode.Fill
            };
            dataGridView1.Columns[0].Name = "Тип";
            dataGridView1.Columns[1].Name = "Свойство 1";
            dataGridView1.Columns[2].Name = "Свойство 2";
            dataGridView1.Columns[3].Name = "Свойство 3";
            dataGridView1.Columns[4].Name = "Свойство 4";
            this.Controls.Add(dataGridView1);

            // --- Человек ---
            Label lblPerson = new Label { Text = "Человек", Location = new System.Drawing.Point(20, 10) };
            this.Controls.Add(lblPerson);

            Label lblPersonName = new Label { Text = "Имя", Location = new System.Drawing.Point(20, 35) };
            txtPersonName = new TextBox { Location = new System.Drawing.Point(20, 55), Width = 100 };
            Label lblPersonAge = new Label { Text = "Возраст", Location = new System.Drawing.Point(130, 35) };
            txtPersonAge = new TextBox { Location = new System.Drawing.Point(130, 55), Width = 60 };
            Label lblPersonHeight = new Label { Text = "Рост", Location = new System.Drawing.Point(200, 35) };
            txtPersonHeight = new TextBox { Location = new System.Drawing.Point(200, 55), Width = 60 };
            btnAddPerson = new Button { Text = "Добавить человека", Location = new System.Drawing.Point(280, 55) };
            btnAddPerson.Click += btnAddPerson_Click;

            this.Controls.AddRange(new Control[] {
                lblPersonName, txtPersonName,
                lblPersonAge, txtPersonAge,
                lblPersonHeight, txtPersonHeight,
                btnAddPerson
            });

            // --- Автомобиль ---
            Label lblCar = new Label { Text = "Легковой автомобиль", Location = new System.Drawing.Point(20, 90) };
            this.Controls.Add(lblCar);

            Label lblCarBrand = new Label { Text = "Марка", Location = new System.Drawing.Point(20, 115) };
            txtCarBrand = new TextBox { Location = new System.Drawing.Point(20, 135), Width = 100 };
            Label lblCarModel = new Label { Text = "Модель", Location = new System.Drawing.Point(130, 115) };
            txtCarModel = new TextBox { Location = new System.Drawing.Point(130, 135), Width = 100 };
            Label lblCarYear = new Label { Text = "Год", Location = new System.Drawing.Point(240, 115) };
            txtCarYear = new TextBox { Location = new System.Drawing.Point(240, 135), Width = 60 };
            Label lblCarColor = new Label { Text = "Цвет", Location = new System.Drawing.Point(310, 115) };
            txtCarColor = new TextBox { Location = new System.Drawing.Point(310, 135), Width = 80 };
            btnAddCar = new Button { Text = "Добавить автомобиль", Location = new System.Drawing.Point(400, 135) };
            btnAddCar.Click += btnAddCar_Click;

            this.Controls.AddRange(new Control[] {
                lblCarBrand, txtCarBrand,
                lblCarModel, txtCarModel,
                lblCarYear, txtCarYear,
                lblCarColor, txtCarColor,
                btnAddCar
            });

            // --- Здание ---
            Label lblBuilding = new Label { Text = "Административное здание", Location = new System.Drawing.Point(20, 170) };
            this.Controls.Add(lblBuilding);

            Label lblBuildingName = new Label { Text = "Название", Location = new System.Drawing.Point(20, 195) };
            txtBuildingName = new TextBox { Location = new System.Drawing.Point(20, 215), Width = 100 };
            Label lblBuildingFloors = new Label { Text = "Этажность", Location = new System.Drawing.Point(130, 195) };
            txtBuildingFloors = new TextBox { Location = new System.Drawing.Point(130, 215), Width = 60 };
            Label lblBuildingArea = new Label { Text = "Площадь", Location = new System.Drawing.Point(200, 195) };
            txtBuildingArea = new TextBox { Location = new System.Drawing.Point(200, 215), Width = 60 };
            btnAddBuilding = new Button { Text = "Добавить здание", Location = new System.Drawing.Point(280, 215) };
            btnAddBuilding.Click += btnAddBuilding_Click;

            this.Controls.AddRange(new Control[] {
                lblBuildingName, txtBuildingName,
                lblBuildingFloors, txtBuildingFloors,
                lblBuildingArea, txtBuildingArea,
                btnAddBuilding
            });
        }

        private void btnAddPerson_Click(object sender, EventArgs e)
        {
            object[] person = {
                "Человек",
                txtPersonName.Text,
                txtPersonAge.Text,
                txtPersonHeight.Text,
                ""
            };
            records.Add(person);
            UpdateGrid();
        }

        private void btnAddCar_Click(object sender, EventArgs e)
        {
            object[] car = {
                "Легковой автомобиль",
                txtCarBrand.Text,
                txtCarModel.Text,
                txtCarYear.Text,
                txtCarColor.Text
            };
            records.Add(car);
            UpdateGrid();
        }

        private void btnAddBuilding_Click(object sender, EventArgs e)
        {
            object[] building = {
                "Административное здание",
                txtBuildingName.Text,
                txtBuildingFloors.Text,
                txtBuildingArea.Text,
                ""
            };
            records.Add(building);
            UpdateGrid();
        }

        private void UpdateGrid()
        {
            dataGridView1.Rows.Clear();
            foreach (var record in records)
            {
                dataGridView1.Rows.Add(record);
            }
        }
    }
}
