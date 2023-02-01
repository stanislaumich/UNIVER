<%@ Page Language="vb" AutoEventWireup="false" CodeBehind="Anketa.aspx.vb" Inherits="WebApplication5.Anketa" %>

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title></title>
</head>
<body style="background-color: #108010">
    <form id="form1" runat="server">
        <div style="background-color: #FF0000">
            <asp:Label ID="Label1" runat="server" Font-Bold="True" Text="Анкета"></asp:Label>
        </div>
        <p>
            <asp:Label ID="Label2" runat="server" Text="Имя"></asp:Label>
            <asp:TextBox ID="TextBox1" runat="server" style="margin-left: 41px"></asp:TextBox>
            <asp:RequiredFieldValidator ID="RequiredFieldValidator1" runat="server" ControlToValidate="TextBox1" ErrorMessage="Не заполнено поле" ForeColor="Red" EnableClientScript="False">*</asp:RequiredFieldValidator>
        </p>
        <p>
            <asp:Label ID="Label6" runat="server" Text="Пол"></asp:Label>
            <asp:RadioButtonList ID="RadioButtonList1" runat="server" Height="16px" style="margin-left: 4px" Width="104px">
                <asp:ListItem>Мужской</asp:ListItem>
                <asp:ListItem>Женский</asp:ListItem>
            </asp:RadioButtonList>
&nbsp;</p>
        <p>
            <asp:Label ID="Label3" runat="server" Text="Возраст"></asp:Label>
            <asp:TextBox ID="TextBox2" runat="server" style="margin-left: 16px"></asp:TextBox>
            <asp:RequiredFieldValidator ID="RequiredFieldValidator2" runat="server" ControlToValidate="TextBox2" ErrorMessage="Не заполнено поле" ForeColor="Red" EnableClientScript="False">*</asp:RequiredFieldValidator>
            <asp:RangeValidator ID="RangeValidator1" runat="server" ControlToValidate="TextBox2" ErrorMessage="Возраст должен быть в пределах 18 - 65 лет" MaximumValue="54" MinimumValue="18" Type="Integer" EnableClientScript="False">Возраст должен быть в пределах 18 - 54 лет</asp:RangeValidator>
        </p>
        <p>
            <asp:Label ID="Label4" runat="server" Text="E-mail"></asp:Label>
            <asp:TextBox ID="TextBox3" runat="server" style="margin-left: 34px"></asp:TextBox>
            <asp:RequiredFieldValidator ID="RequiredFieldValidator3" runat="server" ControlToValidate="TextBox3" ErrorMessage="Не заполнено поле" ForeColor="Red" EnableClientScript="False">*</asp:RequiredFieldValidator>
            <asp:RegularExpressionValidator ID="RegularExpressionValidator1" runat="server" ControlToValidate="TextBox3" ErrorMessage="Неправильный формат ввода e-mail" ValidationExpression="\w+([-+.']\w+)*@\w+([-.]\w+)*\.\w+([-.]\w+)*" EnableClientScript="False">Неправильный формат ввода e-mail</asp:RegularExpressionValidator>
        </p>
        <p>
            <asp:Label ID="Label5" runat="server" Text="О себе"></asp:Label>
        </p>
        <p style="background-color: #008000">
            <asp:TextBox ID="TextBox4" runat="server" Height="163px" TextMode="MultiLine" Width="270px"></asp:TextBox>
        </p>
        <p>
            <asp:Button ID="Button1" runat="server" Text="ОК" />
        </p>
        <asp:ValidationSummary ID="ValidationSummary1" runat="server" EnableClientScript="False" ShowMessageBox="True" ShowSummary="False" />
    </form>
</body>
</html>
