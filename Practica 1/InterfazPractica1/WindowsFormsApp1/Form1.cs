using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.IO.Ports;
using System.IO;

namespace WindowsFormsApp1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void cmbSerial_DropDown(object sender, EventArgs e)
        {

        }

        private void Form1_Load(object sender, EventArgs e)
        {
            foreach(string s in SerialPort.GetPortNames())
            {
                cmbSerial.Items.Add(s);
            }

            if(cmbSerial.Items.Count > 0)
            {
                cmbSerial.SelectedIndex = cmbSerial.Items.Count - 1;
            }
            else
            {
                cmbSerial.SelectedIndex = 0;
            }

            btnEnviar.Enabled = false;
            btnCerrar.Enabled = false;
            btnConectar.Enabled = true;

        }

        private void btnConectar_Click(object sender, EventArgs e)
        {
            try
            {
                serialPort1.PortName = cmbSerial.SelectedItem.ToString();

                serialPort1.BaudRate = 115200;

                serialPort1.DtrEnable = true;

                try
                {
                    serialPort1.Open();
                    lblConexion.Text = "Conectado";

                    btnConectar.Enabled = false;
                    btnCerrar.Enabled = true;
                    cmbSerial.Enabled = false;
                    btnEnviar.Enabled = true;
                }
                catch(IOException)
                {
                    MessageBox.Show("El puerto seleccionado no es válido, o no es el correcto. Selecciona otro e intenta de nuevo.", "Error", MessageBoxButtons.OK, MessageBoxIcon.Error);
                }
                catch (UnauthorizedAccessException)
                {
                    MessageBox.Show("El puerto seleccionado ya se encuentra en uso.", "Error", MessageBoxButtons.OK, MessageBoxIcon.Exclamation);
                }
            }
            catch(Exception error)
            {
                MessageBox.Show("Error: " +  error.ToString(), "Error", MessageBoxButtons.OK, MessageBoxIcon.Error);
            }
        }

        private void btnEnviar_Click(object sender, EventArgs e)
        {
            try
            {
                if (serialPort1.IsOpen)
                {
                    // port.Write(txtMensajePico.Text);
                    serialPort1.Write(txtMensajePico.Text);
                    txtMensajePico.Text = string.Empty;
                }
                else
                {
                    serialPort1.Open();
                }
            }catch(Exception error)
            {
                MessageBox.Show("Error: " + error.ToString(), "Error", MessageBoxButtons.OK, MessageBoxIcon.Error);
            }
        }

        private void btnReset_Click(object sender, EventArgs e)
        {
            txtMensajePico.Text = string.Empty;
            SerialMonitor.Text = String.Empty;
        }

        private void btnCerrar_Click(object sender, EventArgs e)
        {
            serialPort1.Close();

            lblConexion.Text = "Desconectado";

            SerialMonitor.Text = string.Empty;

            btnConectar.Enabled = true;
            btnCerrar.Enabled = false;
            cmbSerial.Enabled = true;
            btnEnviar.Enabled = false;

            MessageBox.Show("Se cerró la conexión con la Pico W");
        }

        private void Form1_FormClosing(object sender, FormClosingEventArgs e)
        {
            if (serialPort1.IsOpen)
            {
                serialPort1.Close();
            }
        }

        private void serialPort1_DataReceived(object sender, SerialDataReceivedEventArgs e)
        {
            Invoke(new EventHandler(serialPort1_DataReceived));
        }

        private void serialPort1_DataReceived(object sender, EventArgs e)
        {
            string dump = serialPort1.ReadLine();
            SerialMonitor.Text = SerialMonitor.Text + dump;
        } 
    }
}
