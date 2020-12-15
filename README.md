# Escultor 3D

![preview](https://raw.githubusercontent.com/neumanf/sculptor/main/Projeto3/sculptor/images/project_image.png)

**Escultor 3D** é uma ferramenta capaz de criar esculturas em blocos tridimensionais e exportá-los em Object File Format (OFF).

# Projeto 1

## 🔨 Build

```bash
$ cd sculptor/Projeto1
$ make && make clean
```

## 📙 Documentação

```bash
$ cd sculptor/Projeto1
$ doxygen
```

## 🎳 Visualização

```bash
$ cd sculptor/Projeto1
$ ./sculptor
$ geomview boliche.off
```

# Projeto 2

## 🔨 Build

```bash
$ cd sculptor/Projeto2
$ make && make clean
```

## 📙 Documentação

```bash
$ cd sculptor/Projeto2
$ doxygen
```

## 🎳 Visualização

```bash
$ cd sculptor/Projeto2
$ ./sculptor
$ geomview escultura.off
```

# Projeto 3

## 🔨 Build

No QT Creator, abra o projeto e faça a build com o atalho Ctrl + B ou rode com Ctrl + R.

## 📙 Documentação

```bash
$ cd sculptor/Projeto3/sculptor
$ doxygen
```

## 🎳 Visualização

```bash
$ cd sculptor/Projeto3/build-sculptor-Desktop-Debug
$ ./sculptor
```

## 💻 Utilização

- **Novo** - Permite criar uma nova escultura fornecidas dimensões x, y e z.
- **+/- Voxel** - Permite adicionar ou remover, respectivamente, um voxel a escultura ao clicar na posição desejada.
- **+/- Caixa** - Permite adicionar ou remover, respectivamente, uma caixa delimitada pelas dimensões dimX, dimY e dimZ a escultura ao clicar na posição desejada.
- **+/- Esfera** - Permite adicionar ou remover, respectivamente, uma esfera de raio determinado pelo slider "Raio" a escultura ao clicar na posição desejada.
- **+/- Elipsoide** - Permite adicionar ou remover, respectivamente, um elipsoide de raios Rx, Ry e Rz a escultura ao clicar na posição desejada.
- **Salvar** - Salva a escultura em um arquivo denominado escultura.off
- **Geomview** - Salva a escultura e a abre no software Geomview

---

## 📜 Requerimentos

- g++
- make
- geomview
- doxygen
- QT
