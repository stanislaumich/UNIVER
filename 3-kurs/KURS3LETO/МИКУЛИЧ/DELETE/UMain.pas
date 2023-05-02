unit UMain;

interface

uses
  Winapi.Windows, Winapi.Messages, System.SysUtils, System.Variants, System.Classes, Vcl.Graphics,
  Vcl.Controls, Vcl.Forms, Vcl.Dialogs, Vcl.StdCtrls, Vcl.Buttons, Vcl.ComCtrls;

type
  TForm1 = class(TForm)
    Memo1: TMemo;
    GroupBox1: TGroupBox;
    Label1: TLabel;
    RadioButton1: TRadioButton;
    RadioButton2: TRadioButton;
    RadioButton3: TRadioButton;
    BitBtn1: TBitBtn;
    BitBtn2: TBitBtn;
    BitBtn3: TBitBtn;
    OpenDialog1: TOpenDialog;
    ProgressBar1: TProgressBar;
    procedure BitBtn1Click(Sender: TObject);
  private
    { Private declarations }
  public
    { Public declarations }
  end;

var
  Form1: TForm1;

implementation

{$R *.dfm}

{
 https://www.xelent.ru/blog/zametaem-sledy-ili-kak-bezvozvratno-udalit-dannye/
 https://solutics.ru/windows/chto-takoe-gost-r-50739-95/
 https://www.avicorp.ru/index.php/blogs1/74-erase1
 https://www.google.com/url?sa=t&rct=j&q=&esrc=s&source=web&cd=&ved=2ahUKEwi_-Kzc1db-AhUMqIsKHY6EBgsQFnoECAwQAQ&url=https%3A%2F%2Fjrnl.nau.edu.ua%2Findex.php%2FZI%2Farticle%2Fview%2F4271%2F4406&usg=AOvVaw09PUtGmqwM0UEBY22a0lau



}



procedure TForm1.BitBtn1Click(Sender: TObject);
begin
 if OpenDialog1.Execute() then
  Memo1.Lines:=OpenDialog1.Files;
end;

end.
