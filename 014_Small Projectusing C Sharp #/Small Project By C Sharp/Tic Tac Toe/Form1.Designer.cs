namespace Tic_Tac_Toe
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
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(Form1));
            this.label1 = new System.Windows.Forms.Label();
            this.picture1 = new System.Windows.Forms.PictureBox();
            this.picture2 = new System.Windows.Forms.PictureBox();
            this.picture3 = new System.Windows.Forms.PictureBox();
            this.picture6 = new System.Windows.Forms.PictureBox();
            this.picture4 = new System.Windows.Forms.PictureBox();
            this.picture5 = new System.Windows.Forms.PictureBox();
            this.picture7 = new System.Windows.Forms.PictureBox();
            this.picture8 = new System.Windows.Forms.PictureBox();
            this.picture9 = new System.Windows.Forms.PictureBox();
            this.TurnLabel = new System.Windows.Forms.Label();
            this.PlayerName = new System.Windows.Forms.Label();
            this.PlayerWinnerStatic = new System.Windows.Forms.Label();
            this.NamePlayerWinner = new System.Windows.Forms.Label();
            this.ResetButton = new System.Windows.Forms.Button();
            ((System.ComponentModel.ISupportInitialize)(this.picture1)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.picture2)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.picture3)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.picture6)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.picture4)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.picture5)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.picture7)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.picture8)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.picture9)).BeginInit();
            this.SuspendLayout();
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.BackColor = System.Drawing.SystemColors.ActiveCaptionText;
            this.label1.BorderStyle = System.Windows.Forms.BorderStyle.Fixed3D;
            this.label1.Font = new System.Drawing.Font("Microsoft YaHei", 25.8F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label1.ForeColor = System.Drawing.SystemColors.ButtonHighlight;
            this.label1.Location = new System.Drawing.Point(529, 0);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(419, 59);
            this.label1.TabIndex = 0;
            this.label1.Text = "Tic-Tac-Toe Game";
            // 
            // picture1
            // 
            this.picture1.Image = ((System.Drawing.Image)(resources.GetObject("picture1.Image")));
            this.picture1.Location = new System.Drawing.Point(801, 153);
            this.picture1.Name = "picture1";
            this.picture1.Size = new System.Drawing.Size(129, 133);
            this.picture1.TabIndex = 1;
            this.picture1.TabStop = false;
            this.picture1.Tag = "1";
            this.picture1.Click += new System.EventHandler(this.picture1_Click);
            // 
            // picture2
            // 
            this.picture2.Image = ((System.Drawing.Image)(resources.GetObject("picture2.Image")));
            this.picture2.Location = new System.Drawing.Point(1037, 153);
            this.picture2.Name = "picture2";
            this.picture2.Size = new System.Drawing.Size(122, 118);
            this.picture2.TabIndex = 2;
            this.picture2.TabStop = false;
            this.picture2.Tag = "2";
            this.picture2.Click += new System.EventHandler(this.picture2_Click);
            // 
            // picture3
            // 
            this.picture3.Image = ((System.Drawing.Image)(resources.GetObject("picture3.Image")));
            this.picture3.Location = new System.Drawing.Point(1248, 153);
            this.picture3.Name = "picture3";
            this.picture3.Size = new System.Drawing.Size(121, 133);
            this.picture3.TabIndex = 3;
            this.picture3.TabStop = false;
            this.picture3.Tag = "3";
            this.picture3.Click += new System.EventHandler(this.picture3_Click);
            // 
            // picture6
            // 
            this.picture6.Image = ((System.Drawing.Image)(resources.GetObject("picture6.Image")));
            this.picture6.Location = new System.Drawing.Point(1232, 347);
            this.picture6.Name = "picture6";
            this.picture6.Size = new System.Drawing.Size(137, 122);
            this.picture6.TabIndex = 4;
            this.picture6.TabStop = false;
            this.picture6.Tag = "6";
            this.picture6.Click += new System.EventHandler(this.picture6_Click);
            // 
            // picture4
            // 
            this.picture4.Image = ((System.Drawing.Image)(resources.GetObject("picture4.Image")));
            this.picture4.Location = new System.Drawing.Point(801, 347);
            this.picture4.Name = "picture4";
            this.picture4.Size = new System.Drawing.Size(129, 122);
            this.picture4.TabIndex = 5;
            this.picture4.TabStop = false;
            this.picture4.Tag = "4";
            this.picture4.Click += new System.EventHandler(this.picture4_Click);
            // 
            // picture5
            // 
            this.picture5.Image = ((System.Drawing.Image)(resources.GetObject("picture5.Image")));
            this.picture5.Location = new System.Drawing.Point(1025, 347);
            this.picture5.Name = "picture5";
            this.picture5.Size = new System.Drawing.Size(123, 122);
            this.picture5.TabIndex = 6;
            this.picture5.TabStop = false;
            this.picture5.Tag = "5";
            this.picture5.Click += new System.EventHandler(this.picture5_Click);
            // 
            // picture7
            // 
            this.picture7.Image = ((System.Drawing.Image)(resources.GetObject("picture7.Image")));
            this.picture7.Location = new System.Drawing.Point(801, 531);
            this.picture7.Name = "picture7";
            this.picture7.Size = new System.Drawing.Size(129, 118);
            this.picture7.TabIndex = 7;
            this.picture7.TabStop = false;
            this.picture7.Tag = "7";
            this.picture7.Click += new System.EventHandler(this.picture7_Click);
            // 
            // picture8
            // 
            this.picture8.Image = ((System.Drawing.Image)(resources.GetObject("picture8.Image")));
            this.picture8.Location = new System.Drawing.Point(1025, 531);
            this.picture8.Name = "picture8";
            this.picture8.Size = new System.Drawing.Size(123, 118);
            this.picture8.TabIndex = 8;
            this.picture8.TabStop = false;
            this.picture8.Tag = "8";
            this.picture8.Click += new System.EventHandler(this.picture8_Click);
            // 
            // picture9
            // 
            this.picture9.Image = ((System.Drawing.Image)(resources.GetObject("picture9.Image")));
            this.picture9.Location = new System.Drawing.Point(1232, 531);
            this.picture9.Name = "picture9";
            this.picture9.Size = new System.Drawing.Size(137, 118);
            this.picture9.TabIndex = 9;
            this.picture9.TabStop = false;
            this.picture9.Tag = "9";
            this.picture9.Click += new System.EventHandler(this.picture9_Click);
            // 
            // TurnLabel
            // 
            this.TurnLabel.AutoSize = true;
            this.TurnLabel.BackColor = System.Drawing.SystemColors.ActiveCaptionText;
            this.TurnLabel.BorderStyle = System.Windows.Forms.BorderStyle.Fixed3D;
            this.TurnLabel.Font = new System.Drawing.Font("Microsoft YaHei", 22.2F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.TurnLabel.ForeColor = System.Drawing.Color.Yellow;
            this.TurnLabel.Location = new System.Drawing.Point(12, 191);
            this.TurnLabel.Name = "TurnLabel";
            this.TurnLabel.Size = new System.Drawing.Size(155, 52);
            this.TurnLabel.TabIndex = 10;
            this.TurnLabel.Text = "Turn  : ";
            // 
            // PlayerName
            // 
            this.PlayerName.AutoSize = true;
            this.PlayerName.BackColor = System.Drawing.SystemColors.ActiveCaptionText;
            this.PlayerName.BorderStyle = System.Windows.Forms.BorderStyle.Fixed3D;
            this.PlayerName.Font = new System.Drawing.Font("Microsoft YaHei", 22.2F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.PlayerName.ForeColor = System.Drawing.SystemColors.ButtonHighlight;
            this.PlayerName.Location = new System.Drawing.Point(204, 191);
            this.PlayerName.Name = "PlayerName";
            this.PlayerName.Size = new System.Drawing.Size(260, 52);
            this.PlayerName.TabIndex = 11;
            this.PlayerName.Text = "Player Name";
            // 
            // PlayerWinnerStatic
            // 
            this.PlayerWinnerStatic.AutoSize = true;
            this.PlayerWinnerStatic.BackColor = System.Drawing.SystemColors.ActiveCaptionText;
            this.PlayerWinnerStatic.BorderStyle = System.Windows.Forms.BorderStyle.Fixed3D;
            this.PlayerWinnerStatic.Font = new System.Drawing.Font("Microsoft YaHei", 22.2F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.PlayerWinnerStatic.ForeColor = System.Drawing.Color.Yellow;
            this.PlayerWinnerStatic.Location = new System.Drawing.Point(12, 347);
            this.PlayerWinnerStatic.Name = "PlayerWinnerStatic";
            this.PlayerWinnerStatic.Size = new System.Drawing.Size(320, 52);
            this.PlayerWinnerStatic.TabIndex = 12;
            this.PlayerWinnerStatic.Text = "Player Winner : ";
            // 
            // NamePlayerWinner
            // 
            this.NamePlayerWinner.AutoSize = true;
            this.NamePlayerWinner.BackColor = System.Drawing.SystemColors.ActiveCaptionText;
            this.NamePlayerWinner.BorderStyle = System.Windows.Forms.BorderStyle.Fixed3D;
            this.NamePlayerWinner.Font = new System.Drawing.Font("Microsoft YaHei", 22.2F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.NamePlayerWinner.ForeColor = System.Drawing.SystemColors.ButtonHighlight;
            this.NamePlayerWinner.Location = new System.Drawing.Point(141, 436);
            this.NamePlayerWinner.Name = "NamePlayerWinner";
            this.NamePlayerWinner.Size = new System.Drawing.Size(397, 52);
            this.NamePlayerWinner.TabIndex = 13;
            this.NamePlayerWinner.Text = "Player Name / Draw";
            // 
            // ResetButton
            // 
            this.ResetButton.Font = new System.Drawing.Font("Microsoft YaHei", 19.8F, ((System.Drawing.FontStyle)((System.Drawing.FontStyle.Bold | System.Drawing.FontStyle.Italic))), System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.ResetButton.Location = new System.Drawing.Point(173, 567);
            this.ResetButton.Name = "ResetButton";
            this.ResetButton.Size = new System.Drawing.Size(318, 82);
            this.ResetButton.TabIndex = 14;
            this.ResetButton.Text = "Reset Game";
            this.ResetButton.UseVisualStyleBackColor = true;
            this.ResetButton.Click += new System.EventHandler(this.ResetButton_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 16F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.SystemColors.ActiveCaptionText;
            this.ClientSize = new System.Drawing.Size(1452, 710);
            this.Controls.Add(this.ResetButton);
            this.Controls.Add(this.NamePlayerWinner);
            this.Controls.Add(this.PlayerWinnerStatic);
            this.Controls.Add(this.PlayerName);
            this.Controls.Add(this.TurnLabel);
            this.Controls.Add(this.picture9);
            this.Controls.Add(this.picture8);
            this.Controls.Add(this.picture7);
            this.Controls.Add(this.picture5);
            this.Controls.Add(this.picture4);
            this.Controls.Add(this.picture6);
            this.Controls.Add(this.picture3);
            this.Controls.Add(this.picture2);
            this.Controls.Add(this.picture1);
            this.Controls.Add(this.label1);
            this.Name = "Form1";
            this.Text = "Form1";
            this.Load += new System.EventHandler(this.Form1_Load);
            ((System.ComponentModel.ISupportInitialize)(this.picture1)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.picture2)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.picture3)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.picture6)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.picture4)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.picture5)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.picture7)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.picture8)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.picture9)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.PictureBox picture1;
        private System.Windows.Forms.PictureBox picture2;
        private System.Windows.Forms.PictureBox picture3;
        private System.Windows.Forms.PictureBox picture6;
        private System.Windows.Forms.PictureBox picture4;
        private System.Windows.Forms.PictureBox picture5;
        private System.Windows.Forms.PictureBox picture7;
        private System.Windows.Forms.PictureBox picture8;
        private System.Windows.Forms.PictureBox picture9;
        private System.Windows.Forms.Label TurnLabel;
        private System.Windows.Forms.Label PlayerName;
        private System.Windows.Forms.Label PlayerWinnerStatic;
        private System.Windows.Forms.Label NamePlayerWinner;
        private System.Windows.Forms.Button ResetButton;
    }
}

