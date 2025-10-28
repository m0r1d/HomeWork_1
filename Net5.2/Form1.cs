using System;
using System.Linq;
using System.Windows.Forms;

namespace Net5._2
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
            comboTaskSelect.Items.AddRange(new string[]
            {
                "1. Проверить, является ли одно слово частью другого",
                "2. Расположить слова в алфавитном порядке",
                "3. Удалить из слова все согласные буквы"
            });
            comboTaskSelect.SelectedIndex = 0;
        }

        private void btnExecute_Click(object sender, EventArgs e)
        {
            textOutput.Clear();

            int task = comboTaskSelect.SelectedIndex + 1;
            string input = textInput.Text.Trim();

            if (string.IsNullOrWhiteSpace(input))
            {
                MessageBox.Show("Введите данные для выполнения задания!", "Ошибка", MessageBoxButtons.OK, MessageBoxIcon.Warning);
                return;
            }

            switch (task)
            {
                case 1:
                    ExecuteTask1(input);
                    break;
                case 2:
                    ExecuteTask2(input);
                    break;
                case 3:
                    ExecuteTask3(input);
                    break;
            }
        }

        // Задание 1
        private void ExecuteTask1(string input)
        {
            string[] words = input.Split(new[] { ' ', ',', ';' }, StringSplitOptions.RemoveEmptyEntries);

            if (words.Length != 2)
            {
                textOutput.Text = "Введите ровно два слова, разделённые пробелом или запятой.";
                return;
            }

            string word1 = words[0];
            string word2 = words[1];

            if (word1.Contains(word2))
                textOutput.Text = $"Слово \"{word2}\" является частью слова \"{word1}\".";
            else if (word2.Contains(word1))
                textOutput.Text = $"Слово \"{word1}\" является частью слова \"{word2}\".";
            else
                textOutput.Text = "Ни одно из слов не является частью другого.";
        }

        // Задание 2
        private void ExecuteTask2(string input)
        {
            string[] words = input.TrimEnd('.').Split(',');

            var sorted = words
                .Select(w => w.Trim())
                .OrderBy(w => w)
                .ToArray();

            textOutput.Text = "Слова в алфавитном порядке:\r\n" + string.Join("\r\n", sorted);
        }

        // Задание 3
        private void ExecuteTask3(string input)
        {
            string vowels = "аеёиоуыэюяАEЁИОУЫЭЮЯaeiouyAEIOUY";
            string result = "";

            foreach (char c in input)
            {
                if (vowels.Contains(c))
                    result += c;
            }

            textOutput.Text = $"Результат: {result}";
        }
    }
}
