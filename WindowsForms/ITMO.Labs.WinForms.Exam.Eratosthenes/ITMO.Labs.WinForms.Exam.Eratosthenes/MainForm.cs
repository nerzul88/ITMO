using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Drawing.Design;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace ITMO.Labs.WinForms.Exam.Eratosthenes
{
    public partial class MainForm : Form
    {
        public MainForm()
        {
            InitializeComponent();
            backgroundworker = new BackgroundWorker();
        }
        private bool isBusy;
        private BackgroundWorker backgroundworker;

        private List<uint> sieveEratosthenesAlgorithm(uint maxNum)
        {
            var primes = new List<uint>();
            for (var i = 2u; i < maxNum; i++)
            {
                primes.Add(i);
            }
            for (var i = 0; i < primes.Count; i++)
            {
                for (var j = 2u; j < maxNum; j++)
                {
                    primes.Remove(primes[i] * j);
                }
            }
            return primes;
        }

        private void MainForm_Load(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            if (isBusy)
            {
                MessageBox.Show("Пока в работе");
                return;
            }

            uint maxNum;

            try
            {
                //	Преобразование типов данных. 
                maxNum = UInt32.Parse(textBox1.Text);                
            }
            catch (Exception)
            {
                MessageBox.Show("При выполнении преобразования типов возникла ошибка"); 
                textBox1.Text = "";
                return;
            }

            isBusy = true;
            backgroundworker.DoWork += backgroundWorker1_DoWork;
            backgroundworker.RunWorkerCompleted += backgroundWorker1_RunWorkerCompleted;
            backgroundworker.RunWorkerAsync(maxNum);
        }

        private void backgroundWorker1_DoWork(object sender, DoWorkEventArgs e)
        {
            uint input = (uint)e.Argument;
            var result = sieveEratosthenesAlgorithm(input);

            StringBuilder sb = new StringBuilder();

            foreach (var item in result)
            {
                sb.Append(item.ToString() + " ");
            }
            richTextBox1.Text = sb.ToString();

        }

        private void backgroundWorker1_RunWorkerCompleted(object sender, RunWorkerCompletedEventArgs e)
        {
            backgroundworker.DoWork -= backgroundWorker1_DoWork;
            backgroundworker.RunWorkerCompleted -= backgroundWorker1_RunWorkerCompleted;
            isBusy = false;
        }       
    }
}
