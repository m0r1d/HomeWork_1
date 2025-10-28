namespace Net5._2
{
    partial class Form1
    {
        /// <summary>
        /// Обязательная переменная конструктора.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Освободить все используемые ресурсы.
        /// </summary>
        /// <param name="disposing">истинно, если управляемый ресурс должен быть удалён; иначе ложно.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Код, автоматически созданный конструктором форм Windows

        /// <summary>
        /// Требуемый метод для поддержки конструктора — не изменяйте 
        /// содержимое этого метода с помощью редактора кода.
        /// </summary>
        private void InitializeComponent()
        {
            this.label1 = new System.Windows.Forms.Label();
            this.comboTaskSelect = new System.Windows.Forms.ComboBox();
            this.textInput = new System.Windows.Forms.TextBox();
            this.btnExecute = new System.Windows.Forms.Button();
            this.textOutput = new System.Windows.Forms.TextBox();
            this.labelInput = new System.Windows.Forms.Label();
            this.labelOutput = new System.Windows.Forms.Label();
            this.SuspendLayout();
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Font = new System.Drawing.Font("Microsoft Sans Serif", 10F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.label1.Location = new System.Drawing.Point(12, 12);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(149, 17);
            this.label1.TabIndex = 0;
            this.label1.Text = "Выберите задание:";
            // 
            // comboTaskSelect
            // 
            this.comboTaskSelect.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList;
            this.comboTaskSelect.FormattingEnabled = true;
            this.comboTaskSelect.Location = new System.Drawing.Point(15, 32);
            this.comboTaskSelect.Name = "comboTaskSelect";
            this.comboTaskSelect.Size = new System.Drawing.Size(460, 21);
            this.comboTaskSelect.TabIndex = 1;
            // 
            // textInput
            // 
            this.textInput.Location = new System.Drawing.Point(15, 86);
            this.textInput.Name = "textInput";
            this.textInput.Size = new System.Drawing.Size(460, 20);
            this.textInput.TabIndex = 2;
            // 
            // btnExecute
            // 
            this.btnExecute.Location = new System.Drawing.Point(15, 112);
            this.btnExecute.Name = "btnExecute";
            this.btnExecute.Size = new System.Drawing.Size(120, 30);
            this.btnExecute.TabIndex = 3;
            this.btnExecute.Text = "Выполнить";
            this.btnExecute.UseVisualStyleBackColor = true;
            this.btnExecute.Click += new System.EventHandler(this.btnExecute_Click);
            // 
            // textOutput
            // 
            this.textOutput.Location = new System.Drawing.Point(15, 174);
            this.textOutput.Multiline = true;
            this.textOutput.Name = "textOutput";
            this.textOutput.ReadOnly = true;
            this.textOutput.ScrollBars = System.Windows.Forms.ScrollBars.Vertical;
            this.textOutput.Size = new System.Drawing.Size(460, 150);
            this.textOutput.TabIndex = 4;
            // 
            // labelInput
            // 
            this.labelInput.AutoSize = true;
            this.labelInput.Location = new System.Drawing.Point(12, 70);
            this.labelInput.Name = "labelInput";
            this.labelInput.Size = new System.Drawing.Size(133, 13);
            this.labelInput.TabIndex = 5;
            this.labelInput.Text = "Введите данные для задачи:";
            // 
            // labelOutput
            // 
            this.labelOutput.AutoSize = true;
            this.labelOutput.Location = new System.Drawing.Point(12, 158);
            this.labelOutput.Name = "labelOutput";
            this.labelOutput.Size = new System.Drawing.Size(91, 13);
            this.labelOutput.TabIndex = 6;
            this.labelOutput.Text = "Результат работы:";
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(494, 341);
            this.Controls.Add(this.labelOutput);
            this.Controls.Add(this.labelInput);
            this.Controls.Add(this.textOutput);
            this.Controls.Add(this.btnExecute);
            this.Controls.Add(this.textInput);
            this.Controls.Add(this.comboTaskSelect);
            this.Controls.Add(this.label1);
            this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.FixedDialog;
            this.MaximizeBox = false;
            this.Name = "Form1";
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "Лабораторная — Вариант №2 (Net5.2)";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.ComboBox comboTaskSelect;
        private System.Windows.Forms.TextBox textInput;
        private System.Windows.Forms.Button btnExecute;
        private System.Windows.Forms.TextBox textOutput;
        private System.Windows.Forms.Label labelInput;
        private System.Windows.Forms.Label labelOutput;
    }
}
