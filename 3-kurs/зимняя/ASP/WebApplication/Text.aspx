<%@ Page Language="vb" AutoEventWireup="false" CodeBehind="Text.aspx.vb" Inherits="WebApplication5.Text" %>

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title></title>
</head>
<body>
    <form id="form1" runat="server">
        <div>
        </div>
        <asp:Label ID="Label1" runat="server" Text="<center><b><i>Элемент управления label</i></b></center>"></asp:Label>
        <asp:TextBox ID="TextBox1" runat="server"></asp:TextBox>
        <p>
            <asp:TextBox ID="TextBox3" runat="server" Height="114px" TextMode="MultiLine"></asp:TextBox>
        </p>
        <p>
            <asp:TextBox ID="TextBox2" runat="server" TextMode="Password"></asp:TextBox>
        </p>
    </form>
</body>
</html>
