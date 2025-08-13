using System;
using System.Collections.Generic;
using System.Drawing;
using System.Windows.Forms;

namespace Tic_Tac_Toe
{
    public partial class Form1 : Form
    {
        private int counter = 0;
        private int counterX = 0;
        private int counterO = 0;
        private HashSet<int> storeTag = new HashSet<int>();

        private Image xImg;
        private Image oImg;
        private Image emptyImg;
        private bool gameOver = false;

        public Form1()
        {
            InitializeComponent();
            this.Load += Form1_Load;
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            this.Paint += Form1_Paint;

            xImg = Properties.Resources.X;
            oImg = Properties.Resources.O;
            emptyImg = Properties.Resources.question_mark_96;

            this.BackgroundImage = Properties.Resources.glowing_neon_line_tic_tac_toe_game_icon_isolated_vector_38286852;
            this.BackgroundImageLayout = ImageLayout.Stretch;

            foreach (var pic in new[] { picture1, picture2, picture3, picture4, picture5, picture6, picture7, picture8, picture9 })
            {
                pic.SizeMode = PictureBoxSizeMode.Zoom;
                pic.BackColor = Color.FromArgb(240, 240, 240);
                pic.Image = emptyImg;

                pic.MouseEnter += (s, ev) =>
                {
                    if (!storeTag.Contains(Convert.ToInt32(((PictureBox)s).Tag)) && !gameOver)
                        ((PictureBox)s).BackColor = Color.FromArgb(220, 220, 220);
                };
                pic.MouseLeave += (s, ev) =>
                {
                    if (!storeTag.Contains(Convert.ToInt32(((PictureBox)s).Tag)) && !gameOver)
                        ((PictureBox)s).BackColor = Color.FromArgb(240, 240, 240);
                };
            }

            ResetButton.FlatStyle = FlatStyle.Flat;
            ResetButton.Font = new Font("Segoe UI", 14, FontStyle.Bold);
            ResetButton.BackColor = Color.FromArgb(0, 122, 204);
            ResetButton.ForeColor = Color.White;
            ResetButton.FlatAppearance.BorderSize = 0;
            ResetButton.Cursor = Cursors.Hand;
            ResetButton.Padding = new Padding(10);

            PlayerName.Font = new Font("Segoe UI", 18, FontStyle.Bold);
            PlayerName.ForeColor = Color.FromArgb(255, 255, 255); 
            PlayerName.BackColor = Color.FromArgb(0, 0, 0, 120); 
            PlayerName.TextAlign = ContentAlignment.MiddleCenter;
            PlayerName.Padding = new Padding(10);

            NamePlayerWinner.Font = new Font("Segoe UI", 18, FontStyle.Bold);
            NamePlayerWinner.ForeColor = Color.Gold;
            NamePlayerWinner.BackColor = Color.FromArgb(0, 0, 0, 120); 
            NamePlayerWinner.TextAlign = ContentAlignment.MiddleCenter;
            NamePlayerWinner.Padding = new Padding(10);
        }

        private void Form1_Paint(object sender, PaintEventArgs e)
        {
            Graphics g = e.Graphics;
            using (Pen pen = new Pen(Color.WhiteSmoke, 8))
            {
                int cellSize = 150;
                int startX = 600;
                int startY = 100;

                g.DrawLine(pen, startX + cellSize, startY, startX + cellSize, startY + cellSize * 3);
                g.DrawLine(pen, startX + cellSize * 2, startY, startX + cellSize * 2, startY + cellSize * 3);

                g.DrawLine(pen, startX, startY + cellSize, startX + cellSize * 3, startY + cellSize);
                g.DrawLine(pen, startX, startY + cellSize * 2, startX + cellSize * 3, startY + cellSize * 2);
            }
        }

        private void Winner(string playerName)
        {
            MessageBox.Show(playerName + " wins!", "Game Over", MessageBoxButtons.OK, MessageBoxIcon.Information);
            NamePlayerWinner.Text = playerName;
            gameOver = true;

            Image winnerImage = (playerName == "Player 1") ? xImg : oImg;

            picture1.Image = winnerImage;
            picture2.Image = winnerImage;
            picture3.Image = winnerImage;
            picture4.Image = winnerImage;
            picture5.Image = winnerImage;
            picture6.Image = winnerImage;
            picture7.Image = winnerImage;
            picture8.Image = winnerImage;
            picture9.Image = winnerImage;
        }

        private void CheckHowIsWinner()
        {
            if (gameOver) return;

            if (picture1.Image == xImg && picture2.Image == xImg && picture3.Image == xImg) { Winner("Player 1"); return; }
            if (picture4.Image == xImg && picture5.Image == xImg && picture6.Image == xImg) { Winner("Player 1"); return; }
            if (picture7.Image == xImg && picture8.Image == xImg && picture9.Image == xImg) { Winner("Player 1"); return; }
            if (picture1.Image == xImg && picture4.Image == xImg && picture7.Image == xImg) { Winner("Player 1"); return; }
            if (picture2.Image == xImg && picture5.Image == xImg && picture8.Image == xImg) { Winner("Player 1"); return; }
            if (picture3.Image == xImg && picture6.Image == xImg && picture9.Image == xImg) { Winner("Player 1"); return; }
            if (picture1.Image == xImg && picture5.Image == xImg && picture9.Image == xImg) { Winner("Player 1"); return; }
            if (picture3.Image == xImg && picture5.Image == xImg && picture7.Image == xImg) { Winner("Player 1"); return; }

            if (picture1.Image == oImg && picture2.Image == oImg && picture3.Image == oImg) { Winner("Player 2"); return; }
            if (picture4.Image == oImg && picture5.Image == oImg && picture6.Image == oImg) { Winner("Player 2"); return; }
            if (picture7.Image == oImg && picture8.Image == oImg && picture9.Image == oImg) { Winner("Player 2"); return; }
            if (picture1.Image == oImg && picture4.Image == oImg && picture7.Image == oImg) { Winner("Player 2"); return; }
            if (picture2.Image == oImg && picture5.Image == oImg && picture8.Image == oImg) { Winner("Player 2"); return; }
            if (picture3.Image == oImg && picture6.Image == oImg && picture9.Image == oImg) { Winner("Player 2"); return; }
            if (picture1.Image == oImg && picture5.Image == oImg && picture9.Image == oImg) { Winner("Player 2"); return; }
            if (picture3.Image == oImg && picture5.Image == oImg && picture7.Image == oImg) { Winner("Player 2"); return; }

            if (counter == 9)
            {
                MessageBox.Show("Tie!", "Game Over", MessageBoxButtons.OK, MessageBoxIcon.Information);
                NamePlayerWinner.Text = "Tie!";
                gameOver = true;
                picture1.Image = emptyImg;
                picture2.Image = emptyImg;
                picture3.Image = emptyImg;
                picture4.Image = emptyImg;
                picture5.Image = emptyImg;
                picture6.Image = emptyImg;
                picture7.Image = emptyImg;
                picture8.Image = emptyImg;
                picture9.Image = emptyImg;


            }
        }

        private void ChanageNamePlayer(string text)
        {
            PlayerName.Text = text;
        }

        private bool CheckIsFirstPlayerToMakeXValue()
        {
            return counter % 2 == 0;
        }

        private bool CheckIsTagInHashSet(PictureBox picture)
        {
            if (picture?.Tag == null) return false;
            if (!int.TryParse(picture.Tag.ToString(), out int tag)) return false;
            return !storeTag.Contains(tag);
        }

        private void PictureBox_Click(PictureBox picture)
        {
            if (gameOver) return;

            if (!CheckIsTagInHashSet(picture))
            {
                MessageBox.Show("This cell is already chosen, try another one", "Warning", MessageBoxButtons.OK, MessageBoxIcon.Warning);
                return;
            }

            if (!int.TryParse(picture.Tag.ToString(), out int parsedTag)) return;
            storeTag.Add(parsedTag);

            if (CheckIsFirstPlayerToMakeXValue())
            {
                ChanageNamePlayer("First - Player");
                picture.Image = xImg;
                counterX++;
            }
            else
            {
                ChanageNamePlayer("Second - Player");
                picture.Image = oImg;
                counterO++;
            }

            counter++;

            if (counter >= 5)
                CheckHowIsWinner();
        }

        private void picture1_Click(object sender, EventArgs e) { PictureBox_Click(picture1); }
        private void picture2_Click(object sender, EventArgs e) { PictureBox_Click(picture2); }
        private void picture3_Click(object sender, EventArgs e) { PictureBox_Click(picture3); }
        private void picture4_Click(object sender, EventArgs e) { PictureBox_Click(picture4); }
        private void picture5_Click(object sender, EventArgs e) { PictureBox_Click(picture5); }
        private void picture6_Click(object sender, EventArgs e) { PictureBox_Click(picture6); }
        private void picture7_Click(object sender, EventArgs e) { PictureBox_Click(picture7); }
        private void picture8_Click(object sender, EventArgs e) { PictureBox_Click(picture8); }
        private void picture9_Click(object sender, EventArgs e) { PictureBox_Click(picture9); }

        private void ResetGame()
        {
            counter = 0;
            counterX = 0;
            counterO = 0;
            storeTag.Clear();
            gameOver = false;
            NamePlayerWinner.Text = "Player Name / Draw";
            PlayerName.Text = "Name Player";

            foreach (var pic in new[] { picture1, picture2, picture3, picture4, picture5, picture6, picture7, picture8, picture9 })
            {
                pic.Image = emptyImg;
                pic.BackColor = Color.FromArgb(240, 240, 240);
            }
        }

        private void ResetButton_Click(object sender, EventArgs e)
        {
            ResetGame();
        }
    }
}
