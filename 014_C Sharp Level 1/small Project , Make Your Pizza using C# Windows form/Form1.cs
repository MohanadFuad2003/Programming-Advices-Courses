using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApp1
{

    public partial class Form1 : Form
    {
        private int totalPrice = 0;
        private int totalFromSize = 0;
        private int totalFromCrustType = 0;
        private int totalFromToppings = 0;
        private int totalFromWhereToEat = 0;

        public Form1()
        {
            InitializeComponent();
        }

        private void CalculateToppingsTotal()
        {
            totalFromToppings = 0;

            if (checkExtraChees.Checked)
                totalFromToppings += Convert.ToInt32(checkExtraChees.Tag);

            if (checkMuashrom.Checked)
                totalFromToppings += Convert.ToInt32(checkMuashrom.Tag);

            if (checkTomatos.Checked)
                totalFromToppings += Convert.ToInt32(checkTomatos.Tag);

            if (checkOnion.Checked)
                totalFromToppings += Convert.ToInt32(checkOnion.Tag);

            if (checkOlives.Checked)
                totalFromToppings += Convert.ToInt32(checkOlives.Tag);

            if (checkGreenPeppers.Checked)
                totalFromToppings += Convert.ToInt32(checkGreenPeppers.Tag);
        }

        private void AddToppingsNmameToResultLabelDynamicly()
        {
            string result = "";
            if (checkExtraChees.Checked)
                result += checkExtraChees.Text + ",\n ";
            if (checkMuashrom.Checked)
                result += checkMuashrom.Text + ", ";
            if (checkTomatos.Checked)
                result += checkTomatos.Text + ", ";
            if (checkOnion.Checked)
                result += checkOnion.Text + ", \n";
            if (checkOlives.Checked)
                result += checkOlives.Text + ", ";
            if (checkGreenPeppers.Checked)
                result += checkGreenPeppers.Text + ", \n";

            if (result.Length > 0)
                result = result.Remove(result.Length - 2); 

            labelResultToppings.Text = result;
        }


        private void buttonShowTotalPrice_Click(object sender, EventArgs e)
        {
            CalculateToppingsTotal(); 

            totalPrice = totalFromSize + totalFromCrustType + totalFromToppings + totalFromWhereToEat;


           if( MessageBox.Show("Total Price: " + totalPrice.ToString(), "Total Price", MessageBoxButtons.OKCancel, MessageBoxIcon.Information)== DialogResult.OK)
            {
                buttonOrderPizza.Enabled = true;
                buttonOrderPizza.PerformClick();
            }
        }

        private void radioSmall_CheckedChanged(object sender, EventArgs e)
        {
            totalFromSize = Convert.ToInt32(radioSmall.Tag);
            LabelResultSize.Text =Convert.ToString(radioSmall.Text);
        }

        private void radioMeduim_CheckedChanged(object sender, EventArgs e)
        {
            totalFromSize = Convert.ToInt32(radioMeduim.Tag);
            LabelResultSize.Text = Convert.ToString(radioMeduim.Text);
        }

        private void radioLarg_CheckedChanged(object sender, EventArgs e)
        {
            totalFromSize = Convert.ToInt32(radioLarg.Tag);
            LabelResultSize.Text = Convert.ToString(radioLarg.Text);
        }

        private void radioThinkCrust_CheckedChanged(object sender, EventArgs e)
        {
            totalFromCrustType = Convert.ToInt32(radioThinkCrust.Tag);
            LabelResultCrustType.Text = Convert.ToString(radioThinkCrust.Text);
        }

        private void radioThinCrust_CheckedChanged(object sender, EventArgs e)
        {
            totalFromCrustType = Convert.ToInt32(radioThinCrust.Tag);
            LabelResultCrustType.Text = Convert.ToString(radioThinCrust.Text);
        }

        private void radioTakeOut_CheckedChanged(object sender, EventArgs e)
        {
            totalFromWhereToEat = Convert.ToInt32(radioTakeOut.Tag);
            labelResultWhereToEat.Text = Convert.ToString(radioTakeOut.Text);

        }

        private void radioInResturant_CheckedChanged(object sender, EventArgs e)
        {
            totalFromWhereToEat = Convert.ToInt32(radioInResturant.Tag);
            labelResultWhereToEat.Text = Convert.ToString(radioInResturant.Text);

        }


        private void checkBoxExtraCheese_CheckedChanged(object sender, EventArgs e)
        {
            CalculateToppingsTotal();
        }

        private void checkBoxMushroom_CheckedChanged(object sender, EventArgs e)
        {
            CalculateToppingsTotal();
        }

        private void checkBoxTomatos_CheckedChanged(object sender, EventArgs e)
        {
            CalculateToppingsTotal();
        }

        private void checkBoxOnion_CheckedChanged(object sender, EventArgs e)
        {
            CalculateToppingsTotal();
        }

        private void checkBoxOlives_CheckedChanged(object sender, EventArgs e)
        {
            CalculateToppingsTotal();
        }

        private void checkBoxGreenPeppers_CheckedChanged(object sender, EventArgs e)
        {
            CalculateToppingsTotal();
        }

        private void checkExtraChees_CheckedChanged(object sender, EventArgs e)
        {
            AddToppingsNmameToResultLabelDynamicly();
        }

        private void checkOnion_CheckedChanged(object sender, EventArgs e)
        {
            AddToppingsNmameToResultLabelDynamicly();
        }

        private void checkMuashrom_CheckedChanged(object sender, EventArgs e)
        {
            AddToppingsNmameToResultLabelDynamicly();
        }

        private void checkOlives_CheckedChanged(object sender, EventArgs e)
        {
            AddToppingsNmameToResultLabelDynamicly();
        }

        private void checkTomatos_CheckedChanged(object sender, EventArgs e)
        {
            AddToppingsNmameToResultLabelDynamicly();
        }

        private void checkGreenPeppers_CheckedChanged(object sender, EventArgs e)
        {
            AddToppingsNmameToResultLabelDynamicly();
        }

        private void buttonOrderPizza_Click(object sender, EventArgs e)
        {
            MessageBox.Show("Pizza Ordered!");

            foreach (Control control in this.Controls)
            {
                if (control != buttonResetFrom)
                {
                    control.Enabled = false;
                }
            }
        }

        void EnableAllControls(Control parent)
        {
            foreach (Control ctrl in parent.Controls)
            {
                ctrl.Enabled = true;

                if (ctrl.HasChildren)
                {
                    EnableAllControls(ctrl);
                }
            }
        }

        private void buttonResetFrom_Click(object sender, EventArgs e)
        {
            

            EnableAllControls(this);
        }

    }


}
