﻿using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace ITMO.Labs.WinForms._06GraphicsAndAnimation.Task1
{
    
    public partial class Form1 : Form
    {
        public double a, b;
        public Form1()
        {
            InitializeComponent();
            a = 0.1;
            b = 0.04;
        }        

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void panel1_Paint(object sender, PaintEventArgs e)
        {
            double t = 0;
            Point p1, p2;
            int w = (int)panel1.Width;
            int h = (int)panel1.Height;
            int y = h / 2;

            for (int x = 0; x < w; x++)
            {
                p1 = new Point(x, y);
                t = Operation.SummSin(x, a, b);
                y = (int)(t * h / 5);
                y = y + h / 2;
                p2 = new Point(x, y);
                Graphics dc = e.Graphics;
                Pen p = new Pen(Color.Red, 1);
                dc.DrawLine(p, p1, p2);
            }
        }

        private void button1_Click(object sender, EventArgs e)
        {
            try
            {
                a = double.Parse(textBox1.Text);
                b = double.Parse(textBox2.Text);
                panel1.Refresh();
            }
            catch (Exception er)
            {
                MessageBox.Show("При выполнении ввода исходных данных возникла ошибка: \n" + er.Message, "Ошибка", MessageBoxButtons.OK, MessageBoxIcon.Error);
                return;
            }
        }

        private void button2_Click(object sender, EventArgs e)
        {
            edit editF = new edit();
            editF.Show(this);
        }

        public void textBox1_TextChanged(object sender, EventArgs e)
        {

        }

        class Operation
        {
            public static double SummSin(int x, double a, double b)
            {
                double res;
                return res = Math.Sin(x * a) + Math.Sin(x * b);
            }
        }
    }
}
