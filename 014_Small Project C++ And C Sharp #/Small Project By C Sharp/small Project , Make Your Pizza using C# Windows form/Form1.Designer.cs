namespace WindowsFormsApp1
{
    partial class Form1
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.label1 = new System.Windows.Forms.Label();
            this.groupBox1 = new System.Windows.Forms.GroupBox();
            this.radioLarg = new System.Windows.Forms.RadioButton();
            this.radioMeduim = new System.Windows.Forms.RadioButton();
            this.radioSmall = new System.Windows.Forms.RadioButton();
            this.groupBox2 = new System.Windows.Forms.GroupBox();
            this.radioThinkCrust = new System.Windows.Forms.RadioButton();
            this.radioThinCrust = new System.Windows.Forms.RadioButton();
            this.groupBox3 = new System.Windows.Forms.GroupBox();
            this.checkGreenPeppers = new System.Windows.Forms.CheckBox();
            this.checkTomatos = new System.Windows.Forms.CheckBox();
            this.checkOlives = new System.Windows.Forms.CheckBox();
            this.checkExtraChees = new System.Windows.Forms.CheckBox();
            this.checkOnion = new System.Windows.Forms.CheckBox();
            this.checkMuashrom = new System.Windows.Forms.CheckBox();
            this.groupBox4 = new System.Windows.Forms.GroupBox();
            this.radioTakeOut = new System.Windows.Forms.RadioButton();
            this.radioInResturant = new System.Windows.Forms.RadioButton();
            this.buttonOrderPizza = new System.Windows.Forms.Button();
            this.buttonResetFrom = new System.Windows.Forms.Button();
            this.label2 = new System.Windows.Forms.Label();
            this.label3 = new System.Windows.Forms.Label();
            this.label4 = new System.Windows.Forms.Label();
            this.label5 = new System.Windows.Forms.Label();
            this.label6 = new System.Windows.Forms.Label();
            this.buttonShowTotalPrice = new System.Windows.Forms.Button();
            this.LabelResultSize = new System.Windows.Forms.Label();
            this.labelResultToppings = new System.Windows.Forms.Label();
            this.LabelResultCrustType = new System.Windows.Forms.Label();
            this.labelResultWhereToEat = new System.Windows.Forms.Label();
            this.groupBox1.SuspendLayout();
            this.groupBox2.SuspendLayout();
            this.groupBox3.SuspendLayout();
            this.groupBox4.SuspendLayout();
            this.SuspendLayout();
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.BackColor = System.Drawing.Color.Transparent;
            this.label1.Font = new System.Drawing.Font("Microsoft YaHei", 72F, ((System.Drawing.FontStyle)((System.Drawing.FontStyle.Bold | System.Drawing.FontStyle.Italic))), System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label1.ForeColor = System.Drawing.Color.IndianRed;
            this.label1.Location = new System.Drawing.Point(100, -1);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(1222, 159);
            this.label1.TabIndex = 0;
            this.label1.Text = "MAKE YOUR PIZZA";
            // 
            // groupBox1
            // 
            this.groupBox1.Controls.Add(this.radioLarg);
            this.groupBox1.Controls.Add(this.radioMeduim);
            this.groupBox1.Controls.Add(this.radioSmall);
            this.groupBox1.Font = new System.Drawing.Font("Microsoft Tai Le", 22.2F, ((System.Drawing.FontStyle)((System.Drawing.FontStyle.Bold | System.Drawing.FontStyle.Italic))), System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.groupBox1.Location = new System.Drawing.Point(40, 171);
            this.groupBox1.Name = "groupBox1";
            this.groupBox1.Size = new System.Drawing.Size(336, 183);
            this.groupBox1.TabIndex = 2;
            this.groupBox1.TabStop = false;
            this.groupBox1.Text = "Size : ";
            // 
            // radioLarg
            // 
            this.radioLarg.AutoSize = true;
            this.radioLarg.Font = new System.Drawing.Font("Microsoft Tai Le", 16.2F, System.Drawing.FontStyle.Italic, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.radioLarg.Location = new System.Drawing.Point(116, 137);
            this.radioLarg.Name = "radioLarg";
            this.radioLarg.Size = new System.Drawing.Size(89, 40);
            this.radioLarg.TabIndex = 5;
            this.radioLarg.Tag = "15";
            this.radioLarg.Text = "Larg";
            this.radioLarg.UseVisualStyleBackColor = true;
            this.radioLarg.CheckedChanged += new System.EventHandler(this.radioLarg_CheckedChanged);
            // 
            // radioMeduim
            // 
            this.radioMeduim.AutoSize = true;
            this.radioMeduim.Font = new System.Drawing.Font("Microsoft Tai Le", 16.2F, System.Drawing.FontStyle.Italic, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.radioMeduim.Location = new System.Drawing.Point(116, 91);
            this.radioMeduim.Name = "radioMeduim";
            this.radioMeduim.Size = new System.Drawing.Size(139, 40);
            this.radioMeduim.TabIndex = 4;
            this.radioMeduim.Tag = "10";
            this.radioMeduim.Text = "Meduim";
            this.radioMeduim.UseVisualStyleBackColor = true;
            this.radioMeduim.CheckedChanged += new System.EventHandler(this.radioMeduim_CheckedChanged);
            // 
            // radioSmall
            // 
            this.radioSmall.AutoSize = true;
            this.radioSmall.Font = new System.Drawing.Font("Microsoft Tai Le", 16.2F, System.Drawing.FontStyle.Italic, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.radioSmall.Location = new System.Drawing.Point(116, 45);
            this.radioSmall.Name = "radioSmall";
            this.radioSmall.Size = new System.Drawing.Size(103, 40);
            this.radioSmall.TabIndex = 3;
            this.radioSmall.Tag = "5";
            this.radioSmall.Text = "Small";
            this.radioSmall.UseVisualStyleBackColor = true;
            this.radioSmall.CheckedChanged += new System.EventHandler(this.radioSmall_CheckedChanged);
            // 
            // groupBox2
            // 
            this.groupBox2.Controls.Add(this.radioThinkCrust);
            this.groupBox2.Controls.Add(this.radioThinCrust);
            this.groupBox2.Font = new System.Drawing.Font("Microsoft Tai Le", 22.2F, ((System.Drawing.FontStyle)((System.Drawing.FontStyle.Bold | System.Drawing.FontStyle.Italic))), System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.groupBox2.Location = new System.Drawing.Point(40, 423);
            this.groupBox2.Name = "groupBox2";
            this.groupBox2.Size = new System.Drawing.Size(363, 239);
            this.groupBox2.TabIndex = 6;
            this.groupBox2.TabStop = false;
            this.groupBox2.Text = "Crust Type : ";
            // 
            // radioThinkCrust
            // 
            this.radioThinkCrust.AutoSize = true;
            this.radioThinkCrust.Font = new System.Drawing.Font("Microsoft Tai Le", 16.2F, System.Drawing.FontStyle.Italic, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.radioThinkCrust.Location = new System.Drawing.Point(87, 147);
            this.radioThinkCrust.Name = "radioThinkCrust";
            this.radioThinkCrust.Size = new System.Drawing.Size(176, 40);
            this.radioThinkCrust.TabIndex = 4;
            this.radioThinkCrust.Tag = "5";
            this.radioThinkCrust.Text = "Think Crust";
            this.radioThinkCrust.UseVisualStyleBackColor = true;
            this.radioThinkCrust.CheckedChanged += new System.EventHandler(this.radioThinkCrust_CheckedChanged);
            // 
            // radioThinCrust
            // 
            this.radioThinCrust.AutoSize = true;
            this.radioThinCrust.Font = new System.Drawing.Font("Microsoft Tai Le", 16.2F, System.Drawing.FontStyle.Italic, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.radioThinCrust.Location = new System.Drawing.Point(87, 79);
            this.radioThinCrust.Name = "radioThinCrust";
            this.radioThinCrust.Size = new System.Drawing.Size(162, 40);
            this.radioThinCrust.TabIndex = 3;
            this.radioThinCrust.Tag = "0";
            this.radioThinCrust.Text = "Thin Crust";
            this.radioThinCrust.UseVisualStyleBackColor = true;
            this.radioThinCrust.CheckedChanged += new System.EventHandler(this.radioThinCrust_CheckedChanged);
            // 
            // groupBox3
            // 
            this.groupBox3.Controls.Add(this.checkGreenPeppers);
            this.groupBox3.Controls.Add(this.checkTomatos);
            this.groupBox3.Controls.Add(this.checkOlives);
            this.groupBox3.Controls.Add(this.checkExtraChees);
            this.groupBox3.Controls.Add(this.checkOnion);
            this.groupBox3.Controls.Add(this.checkMuashrom);
            this.groupBox3.Font = new System.Drawing.Font("Microsoft Tai Le", 22.2F, ((System.Drawing.FontStyle)((System.Drawing.FontStyle.Bold | System.Drawing.FontStyle.Italic))), System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.groupBox3.Location = new System.Drawing.Point(480, 171);
            this.groupBox3.Name = "groupBox3";
            this.groupBox3.Size = new System.Drawing.Size(502, 262);
            this.groupBox3.TabIndex = 6;
            this.groupBox3.TabStop = false;
            this.groupBox3.Text = "Toppings : ";
            // 
            // checkGreenPeppers
            // 
            this.checkGreenPeppers.AutoSize = true;
            this.checkGreenPeppers.Font = new System.Drawing.Font("Microsoft Tai Le", 15.2F, ((System.Drawing.FontStyle)((System.Drawing.FontStyle.Bold | System.Drawing.FontStyle.Italic))));
            this.checkGreenPeppers.Location = new System.Drawing.Point(281, 189);
            this.checkGreenPeppers.Name = "checkGreenPeppers";
            this.checkGreenPeppers.Size = new System.Drawing.Size(213, 37);
            this.checkGreenPeppers.TabIndex = 2;
            this.checkGreenPeppers.Tag = "5";
            this.checkGreenPeppers.Text = "Green Peppers";
            this.checkGreenPeppers.UseVisualStyleBackColor = true;
            this.checkGreenPeppers.CheckedChanged += new System.EventHandler(this.checkGreenPeppers_CheckedChanged);
            // 
            // checkTomatos
            // 
            this.checkTomatos.AutoSize = true;
            this.checkTomatos.Font = new System.Drawing.Font("Microsoft Tai Le", 16.2F, ((System.Drawing.FontStyle)((System.Drawing.FontStyle.Bold | System.Drawing.FontStyle.Italic))));
            this.checkTomatos.Location = new System.Drawing.Point(54, 189);
            this.checkTomatos.Name = "checkTomatos";
            this.checkTomatos.Size = new System.Drawing.Size(151, 39);
            this.checkTomatos.TabIndex = 7;
            this.checkTomatos.Tag = "5";
            this.checkTomatos.Text = "Tomatos";
            this.checkTomatos.UseVisualStyleBackColor = true;
            this.checkTomatos.CheckedChanged += new System.EventHandler(this.checkTomatos_CheckedChanged);
            // 
            // checkOlives
            // 
            this.checkOlives.AutoSize = true;
            this.checkOlives.Font = new System.Drawing.Font("Microsoft Tai Le", 16.2F, ((System.Drawing.FontStyle)((System.Drawing.FontStyle.Bold | System.Drawing.FontStyle.Italic))));
            this.checkOlives.Location = new System.Drawing.Point(281, 132);
            this.checkOlives.Name = "checkOlives";
            this.checkOlives.Size = new System.Drawing.Size(116, 39);
            this.checkOlives.TabIndex = 1;
            this.checkOlives.Tag = "5";
            this.checkOlives.Text = "Olives";
            this.checkOlives.UseVisualStyleBackColor = true;
            this.checkOlives.CheckedChanged += new System.EventHandler(this.checkOlives_CheckedChanged);
            // 
            // checkExtraChees
            // 
            this.checkExtraChees.AutoSize = true;
            this.checkExtraChees.Font = new System.Drawing.Font("Microsoft Tai Le", 18F, ((System.Drawing.FontStyle)((System.Drawing.FontStyle.Bold | System.Drawing.FontStyle.Italic))), System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.checkExtraChees.Location = new System.Drawing.Point(54, 76);
            this.checkExtraChees.Name = "checkExtraChees";
            this.checkExtraChees.Size = new System.Drawing.Size(202, 43);
            this.checkExtraChees.TabIndex = 0;
            this.checkExtraChees.Tag = "5";
            this.checkExtraChees.Text = "Extra Chees";
            this.checkExtraChees.UseVisualStyleBackColor = true;
            this.checkExtraChees.CheckedChanged += new System.EventHandler(this.checkExtraChees_CheckedChanged);
            // 
            // checkOnion
            // 
            this.checkOnion.AutoSize = true;
            this.checkOnion.Font = new System.Drawing.Font("Microsoft Tai Le", 16.2F, ((System.Drawing.FontStyle)((System.Drawing.FontStyle.Bold | System.Drawing.FontStyle.Italic))), System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.checkOnion.Location = new System.Drawing.Point(281, 76);
            this.checkOnion.Name = "checkOnion";
            this.checkOnion.Size = new System.Drawing.Size(117, 39);
            this.checkOnion.TabIndex = 4;
            this.checkOnion.Tag = "5";
            this.checkOnion.Text = "Onion";
            this.checkOnion.UseVisualStyleBackColor = true;
            this.checkOnion.CheckedChanged += new System.EventHandler(this.checkOnion_CheckedChanged);
            // 
            // checkMuashrom
            // 
            this.checkMuashrom.AutoSize = true;
            this.checkMuashrom.Font = new System.Drawing.Font("Microsoft Tai Le", 16.2F, ((System.Drawing.FontStyle)((System.Drawing.FontStyle.Bold | System.Drawing.FontStyle.Italic))), System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.checkMuashrom.Location = new System.Drawing.Point(54, 132);
            this.checkMuashrom.Name = "checkMuashrom";
            this.checkMuashrom.Size = new System.Drawing.Size(179, 39);
            this.checkMuashrom.TabIndex = 3;
            this.checkMuashrom.Tag = "5";
            this.checkMuashrom.Text = "Muashrom";
            this.checkMuashrom.UseVisualStyleBackColor = true;
            this.checkMuashrom.CheckedChanged += new System.EventHandler(this.checkMuashrom_CheckedChanged);
            // 
            // groupBox4
            // 
            this.groupBox4.Controls.Add(this.radioTakeOut);
            this.groupBox4.Controls.Add(this.radioInResturant);
            this.groupBox4.Font = new System.Drawing.Font("Microsoft Tai Le", 22.2F, ((System.Drawing.FontStyle)((System.Drawing.FontStyle.Bold | System.Drawing.FontStyle.Italic))), System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.groupBox4.Location = new System.Drawing.Point(534, 483);
            this.groupBox4.Name = "groupBox4";
            this.groupBox4.Size = new System.Drawing.Size(363, 127);
            this.groupBox4.TabIndex = 7;
            this.groupBox4.TabStop = false;
            this.groupBox4.Text = "Where To Eat : ";
            // 
            // radioTakeOut
            // 
            this.radioTakeOut.AutoSize = true;
            this.radioTakeOut.Font = new System.Drawing.Font("Microsoft Tai Le", 16.2F, System.Drawing.FontStyle.Italic, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.radioTakeOut.Location = new System.Drawing.Point(195, 70);
            this.radioTakeOut.Name = "radioTakeOut";
            this.radioTakeOut.Size = new System.Drawing.Size(148, 40);
            this.radioTakeOut.TabIndex = 4;
            this.radioTakeOut.Tag = "0";
            this.radioTakeOut.Text = "Take Out";
            this.radioTakeOut.UseVisualStyleBackColor = true;
            this.radioTakeOut.CheckedChanged += new System.EventHandler(this.radioTakeOut_CheckedChanged);
            // 
            // radioInResturant
            // 
            this.radioInResturant.AutoSize = true;
            this.radioInResturant.Font = new System.Drawing.Font("Microsoft Tai Le", 16.2F, System.Drawing.FontStyle.Italic, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.radioInResturant.Location = new System.Drawing.Point(6, 70);
            this.radioInResturant.Name = "radioInResturant";
            this.radioInResturant.Size = new System.Drawing.Size(186, 40);
            this.radioInResturant.TabIndex = 3;
            this.radioInResturant.Tag = "5";
            this.radioInResturant.Text = "In resturant ";
            this.radioInResturant.UseVisualStyleBackColor = true;
            this.radioInResturant.CheckedChanged += new System.EventHandler(this.radioInResturant_CheckedChanged);
            // 
            // buttonOrderPizza
            // 
            this.buttonOrderPizza.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(192)))), ((int)(((byte)(192)))), ((int)(((byte)(0)))));
            this.buttonOrderPizza.Enabled = false;
            this.buttonOrderPizza.ForeColor = System.Drawing.SystemColors.ControlText;
            this.buttonOrderPizza.Location = new System.Drawing.Point(463, 672);
            this.buttonOrderPizza.Name = "buttonOrderPizza";
            this.buttonOrderPizza.Size = new System.Drawing.Size(222, 59);
            this.buttonOrderPizza.TabIndex = 8;
            this.buttonOrderPizza.Text = "Order Pizza";
            this.buttonOrderPizza.UseVisualStyleBackColor = false;
            this.buttonOrderPizza.Click += new System.EventHandler(this.buttonOrderPizza_Click);
            // 
            // buttonResetFrom
            // 
            this.buttonResetFrom.BackColor = System.Drawing.Color.RosyBrown;
            this.buttonResetFrom.Location = new System.Drawing.Point(741, 672);
            this.buttonResetFrom.Name = "buttonResetFrom";
            this.buttonResetFrom.Size = new System.Drawing.Size(222, 59);
            this.buttonResetFrom.TabIndex = 9;
            this.buttonResetFrom.Text = "Reset Form";
            this.buttonResetFrom.UseVisualStyleBackColor = false;
            this.buttonResetFrom.Click += new System.EventHandler(this.buttonResetFrom_Click);
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Font = new System.Drawing.Font("Microsoft Sans Serif", 19.8F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label2.ForeColor = System.Drawing.Color.Red;
            this.label2.Location = new System.Drawing.Point(1037, 171);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(293, 38);
            this.label2.TabIndex = 10;
            this.label2.Text = "Order Summary : ";
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Font = new System.Drawing.Font("Microsoft Sans Serif", 13.8F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label3.ForeColor = System.Drawing.Color.Red;
            this.label3.Location = new System.Drawing.Point(1039, 262);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(85, 29);
            this.label3.TabIndex = 11;
            this.label3.Text = "Size : ";
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Font = new System.Drawing.Font("Microsoft Sans Serif", 13.8F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label4.ForeColor = System.Drawing.Color.Red;
            this.label4.Location = new System.Drawing.Point(1046, 319);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(160, 29);
            this.label4.TabIndex = 12;
            this.label4.Text = "Toppoings : ";
            // 
            // label5
            // 
            this.label5.AutoSize = true;
            this.label5.Font = new System.Drawing.Font("Microsoft Sans Serif", 13.8F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label5.ForeColor = System.Drawing.Color.Red;
            this.label5.Location = new System.Drawing.Point(1039, 483);
            this.label5.Name = "label5";
            this.label5.Size = new System.Drawing.Size(161, 29);
            this.label5.TabIndex = 13;
            this.label5.Text = "Crust Type : ";
            // 
            // label6
            // 
            this.label6.AutoSize = true;
            this.label6.Font = new System.Drawing.Font("Microsoft Sans Serif", 13.8F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label6.ForeColor = System.Drawing.Color.Red;
            this.label6.Location = new System.Drawing.Point(1037, 570);
            this.label6.Name = "label6";
            this.label6.Size = new System.Drawing.Size(194, 29);
            this.label6.TabIndex = 14;
            this.label6.Text = "Where To Eat : ";
            // 
            // buttonShowTotalPrice
            // 
            this.buttonShowTotalPrice.BackColor = System.Drawing.Color.DarkSalmon;
            this.buttonShowTotalPrice.Location = new System.Drawing.Point(1044, 672);
            this.buttonShowTotalPrice.Name = "buttonShowTotalPrice";
            this.buttonShowTotalPrice.Size = new System.Drawing.Size(222, 59);
            this.buttonShowTotalPrice.TabIndex = 15;
            this.buttonShowTotalPrice.Text = "Show Total Price";
            this.buttonShowTotalPrice.UseVisualStyleBackColor = false;
            this.buttonShowTotalPrice.Click += new System.EventHandler(this.buttonShowTotalPrice_Click);
            // 
            // LabelResultSize
            // 
            this.LabelResultSize.AutoSize = true;
            this.LabelResultSize.Font = new System.Drawing.Font("Microsoft Sans Serif", 13.8F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.LabelResultSize.ForeColor = System.Drawing.Color.DarkGreen;
            this.LabelResultSize.Location = new System.Drawing.Point(1130, 262);
            this.LabelResultSize.Name = "LabelResultSize";
            this.LabelResultSize.Size = new System.Drawing.Size(76, 29);
            this.LabelResultSize.TabIndex = 16;
            this.LabelResultSize.Text = "None";
            // 
            // labelResultToppings
            // 
            this.labelResultToppings.AutoSize = true;
            this.labelResultToppings.Font = new System.Drawing.Font("Microsoft Sans Serif", 13.8F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.labelResultToppings.ForeColor = System.Drawing.Color.DarkGreen;
            this.labelResultToppings.Location = new System.Drawing.Point(1190, 319);
            this.labelResultToppings.Name = "labelResultToppings";
            this.labelResultToppings.Size = new System.Drawing.Size(76, 29);
            this.labelResultToppings.TabIndex = 17;
            this.labelResultToppings.Text = "None";
            // 
            // LabelResultCrustType
            // 
            this.LabelResultCrustType.AutoSize = true;
            this.LabelResultCrustType.Font = new System.Drawing.Font("Microsoft Sans Serif", 13.8F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.LabelResultCrustType.ForeColor = System.Drawing.Color.DarkGreen;
            this.LabelResultCrustType.Location = new System.Drawing.Point(1206, 483);
            this.LabelResultCrustType.Name = "LabelResultCrustType";
            this.LabelResultCrustType.Size = new System.Drawing.Size(76, 29);
            this.LabelResultCrustType.TabIndex = 18;
            this.LabelResultCrustType.Text = "None";
            // 
            // labelResultWhereToEat
            // 
            this.labelResultWhereToEat.AutoSize = true;
            this.labelResultWhereToEat.Font = new System.Drawing.Font("Microsoft Sans Serif", 13.8F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.labelResultWhereToEat.ForeColor = System.Drawing.Color.DarkGreen;
            this.labelResultWhereToEat.Location = new System.Drawing.Point(1237, 570);
            this.labelResultWhereToEat.Name = "labelResultWhereToEat";
            this.labelResultWhereToEat.Size = new System.Drawing.Size(76, 29);
            this.labelResultWhereToEat.TabIndex = 19;
            this.labelResultWhereToEat.Text = "None";
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 16F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.Color.WhiteSmoke;
            this.ClientSize = new System.Drawing.Size(1424, 743);
            this.Controls.Add(this.labelResultWhereToEat);
            this.Controls.Add(this.LabelResultCrustType);
            this.Controls.Add(this.labelResultToppings);
            this.Controls.Add(this.LabelResultSize);
            this.Controls.Add(this.buttonShowTotalPrice);
            this.Controls.Add(this.label6);
            this.Controls.Add(this.label5);
            this.Controls.Add(this.label4);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.buttonResetFrom);
            this.Controls.Add(this.buttonOrderPizza);
            this.Controls.Add(this.groupBox4);
            this.Controls.Add(this.groupBox3);
            this.Controls.Add(this.groupBox2);
            this.Controls.Add(this.groupBox1);
            this.Controls.Add(this.label1);
            this.Name = "Form1";
            this.Text = "Form1";
            this.groupBox1.ResumeLayout(false);
            this.groupBox1.PerformLayout();
            this.groupBox2.ResumeLayout(false);
            this.groupBox2.PerformLayout();
            this.groupBox3.ResumeLayout(false);
            this.groupBox3.PerformLayout();
            this.groupBox4.ResumeLayout(false);
            this.groupBox4.PerformLayout();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.GroupBox groupBox1;
        private System.Windows.Forms.RadioButton radioLarg;
        private System.Windows.Forms.RadioButton radioMeduim;
        private System.Windows.Forms.RadioButton radioSmall;
        private System.Windows.Forms.GroupBox groupBox2;
        private System.Windows.Forms.RadioButton radioThinkCrust;
        private System.Windows.Forms.RadioButton radioThinCrust;
        private System.Windows.Forms.GroupBox groupBox3;
        private System.Windows.Forms.CheckBox checkTomatos;
        private System.Windows.Forms.CheckBox checkOlives;
        private System.Windows.Forms.CheckBox checkExtraChees;
        private System.Windows.Forms.CheckBox checkOnion;
        private System.Windows.Forms.CheckBox checkMuashrom;
        private System.Windows.Forms.CheckBox checkGreenPeppers;
        private System.Windows.Forms.GroupBox groupBox4;
        private System.Windows.Forms.RadioButton radioTakeOut;
        private System.Windows.Forms.RadioButton radioInResturant;
        private System.Windows.Forms.Button buttonOrderPizza;
        private System.Windows.Forms.Button buttonResetFrom;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.Label label5;
        private System.Windows.Forms.Label label6;
        private System.Windows.Forms.Button buttonShowTotalPrice;
        private System.Windows.Forms.Label LabelResultSize;
        private System.Windows.Forms.Label labelResultToppings;
        private System.Windows.Forms.Label LabelResultCrustType;
        private System.Windows.Forms.Label labelResultWhereToEat;
    }
}

