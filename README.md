# OpenGL Scene

Interaktivní 3D scéna vytvoøená pomocí OpenGL s možností ovládání kamery a pøepínání pohledù.

## Funkce

- **Vykreslování krychlí** - 10 krychlí s texturami a barvami
- **Dynamická osvìtlení** - Ambientní osvìtlení
- **Kamera s myší** - Plynulé ovládání pohledu
- **Top-down pohled** - Klávesa B pro pøepnutí na isometrický pohled
- **Zoom** - Koleèko myši pro pøiblížení/oddálení
- **Rotující objekty** - Nìkteré krychle se automaticky otáèejí

## Ovládání

| Klávesa | Akce |
|---------|------|
| **W/A/S/D** | Pohyb vpøed/vlevo/vzad/vpravo |
| **Myš** | Otáèení kamery |
| **Koleèko myši** | Zoom (FOV) |
| **B** | Pøepnutí na top-down/FPS pohled |
| **ESC** | Ukonèení aplikace |

## Požadavky

- C++14 a vyšší
- OpenGL 3.3+
- Závislosti:
  - **GLFW** - Správa oken a vstupu
  - **GLAD** - OpenGL loader
  - **GLM** - Matematická knihovna
  - **stb_image** - Naèítání textur

## Struktura projektu