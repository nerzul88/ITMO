﻿using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace ITMO.Labs.WinForms._04UsingDialogWindows.Task2
{
    public partial class MainForm : Form
    {
        
        public MainForm()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            Person p = new Person();

            EditPersonForm editForm = new EditPersonForm(p); 
            if (editForm.ShowDialog() != DialogResult.OK)
                return;
            pers.Add(p);

            ListViewItem newItem = personsListView.Items.Add(editForm.FirstName);
            newItem.SubItems.Add(editForm.LastName);
            newItem.SubItems.Add(editForm.Age.ToString());

            personsListView.VirtualListSize = pers.Count; 
            personsListView.Invalidate();
        }

        private void button2_Click(object sender, EventArgs e)
        {
            //if (personsListView.SelectedItems.Count == 0)
            //    return;
            //ListViewItem item = personsListView.SelectedItems[0];

            //EditPersonForm editForm = new EditPersonForm();
            //editForm.FirstName = item.Text; 
            //editForm.LastName = item.SubItems[1].Text; 
            //editForm.Age = Convert.ToInt32(item.SubItems[2].Text);

            //if (editForm.ShowDialog() != DialogResult.OK)
            //    return;

            //item.Text = editForm.FirstName; 
            //item.SubItems[1].Text = editForm.LastName; 
            //item.SubItems[2].Text = editForm.Age.ToString();

            if (personsListView.SelectedIndices.Count == 0)
                return;

            Person p = pers[personsListView.SelectedIndices[0]];
            EditPersonForm editForm = new EditPersonForm(p); 

            if (editForm.ShowDialog() == DialogResult.OK)
            {
                personsListView.Invalidate();
            }
        }

        private void MainForm_Load(object sender, EventArgs e)
        {

        }

        List<Person> pers = new List<Person>();

        private void personsListView_RetrieveVirtualItem(object sender, RetrieveVirtualItemEventArgs e)
        {
            if (e.ItemIndex >= 0 && e.ItemIndex < pers.Count)
            {
                e.Item = new ListViewItem(pers[e.ItemIndex].FirstName); 
                e.Item.SubItems.Add(pers[e.ItemIndex].LastName); 
                e.Item.SubItems.Add(pers[e.ItemIndex].Age.ToString());
            }
        }

        private void button3_Click(object sender, EventArgs e)
        {
            StringBuilder sb = new StringBuilder();
            foreach (Person item in pers)
            {
                sb.Append("Сотрудник: \n" + item.ToString());
            }
            richTextBox1.Text = sb.ToString();
        }
    }
}
