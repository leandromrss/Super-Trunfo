# 🌍 Super Trunfo de Países

Projeto em linguagem C para cadastro e visualização de cidades no estilo do jogo **Super Trunfo**. Cada "carta" representa uma cidade com atributos como população, PIB, área e número de pontos turísticos.

---

## 🧠 Funcionalidades

- Cadastro de novas cidades
- Cálculo automático de:
  - Densidade populacional (hab/km²)
  - PIB per capita
- Listagem das cartas cadastradas
- Interface via terminal (modo texto)

---

## 📁 Estrutura do Projeto

super-trunfo-paises/
├── include/ # Cabeçalhos (.h)
│ ├── cadastro.h
│ └── calculos.h
├── src/ # Arquivos-fonte (.c)
│ ├── main.c
│ ├── cadastro.c
│ └── calculos.c
├── Makefile # Automação da compilação
└── README.md # Este arquivo

yaml
Copiar
Editar

---

## ⚙️ Compilação e Execução

### Requisitos
- GCC instalado (`gcc`)
- Make (`make`) — pode ser instalado via [Chocolatey](https://chocolatey.org/install) no Windows

### Para compilar:
```bash
make
Para executar:
bash

./supertrunfo.exe     # No Windows
./supertrunfo         # No Linux/macOS
Para limpar os arquivos gerados:
bash

make clean
✨ Exemplo de Uso
yaml

=== Super Trunfo de Paises ===
1 - Cadastrar nova cidade
2 - Listar cartas
0 - Sair
Opcao: 1

Estado: São Paulo
Codigo: 3550
Nome da cidade: Itatiba
Populacao: 123456
PIB: 1200000000
Area (km2): 321.4
Numero de pontos turisticos: 15
Deseja cadastrar outra cidade? (s/n): n

===== Cartas Cadastradas =====
--- Cidade Itatiba ---
Estado: São Paulo
Codigo: 3550
Populacao: 123456
PIB: 1200000000.00
Area: 321.40 km2
Pontos turisticos: 15
Densidade populacional: 384.17 hab/km2
PIB per capita: 9721.35
👨‍💻 Autor
Desenvolvido por Leandro — estudante de TI e entusiasta de projetos em C.
Se quiser trocar ideias ou sugestões, me chame! 😄

📘 Licença
Este projeto é de uso educacional e livre para modificar.
