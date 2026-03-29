# 🔐 Caesar Cipher — C++ Console Application

A simple command-line program written in C++ that encrypts and decrypts messages using the **Caesar Cipher** technique — one of the oldest and most well-known encryption methods.

---

## 📌 What is Caesar Cipher?

The Caesar Cipher is a **substitution cipher** where each letter in the plaintext is shifted by a fixed number of positions down (encrypt) or up (decrypt) the alphabet.

**Example:**
```
Plain Text  :  HELLO
Key (Shift) :  3
Cipher Text :  KHOOR
```

---

## ✨ Features

- Encrypt any alphabetic message using a custom shift key (1–25)
- Decrypt any Caesar-encrypted message using the same key
- Handles both **uppercase and lowercase** input (output is normalized to uppercase)
- Non-alphabetic characters (digits, symbols) are **passed through unchanged**
- Loops until the user chooses to exit

---

## 🛠️ How to Compile & Run

### Requirements
- A C++ compiler (g++, MinGW, MSVC, etc.)
- Terminal / Command Prompt

### Compile
```bash
g++ cipher.cpp -o cipher
```

### Run
```bash
./cipher
```
> On Windows: `cipher.exe`

---

## 🖥️ Program Menu

```
===============================================
W E L C O M E   T O   C A E S A R   C I P H E R
===============================================
PRESS 1 TO ENCRYPT YOUR MESSAGE:
PRESS 2 TO DECRYPT YOUR MESSAGE:
PRESS 3 TO EXIT:
```

---

## 📂 File Structure

```
📁 caesar-cipher/
├── cipher.cpp   # Main source file
└── README.md           # Project documentation
```

---

## 🔍 Example Usage

### Encrypting
```
ENTER YOUR MESSAGE HERE (WITHOUT SPACES): HELLO
ENTER KEY (1-25): 4
ENCRYPTED TEXT IS: LIPPS
```

### Decrypting
```
ENTER YOUR ENCRYPTED MESSAGE HERE (WITHOUT SPACES): LIPPS
ENTER KEY (1-25): 4
YOUR MESSAGE TEXT IS: HELLO
```

---

## ⚙️ How It Works

| Operation | Formula |
|-----------|---------|
| Encrypt   | `C = (P - 'A' + key) % 26 + 'A'` |
| Decrypt   | `P = (C - 'A' - key + 26) % 26 + 'A'` |

The `% 26` ensures **wrap-around**, so letters like `X`, `Y`, `Z` correctly cycle back to the beginning of the alphabet instead of producing special characters.

---

## ⚠️ Limitations

- Works best with **single words** (no spaces in input)
- Key must be between **1 and 25**
- Not suitable for real-world security — Caesar Cipher is easily brute-forced with only 25 possible keys

---

## 👤 Author

Developed by [Ali Asghar Darwala](https://github.com/AliAsgherZoaib)
 

---

## 📄 License

This project is open source and available under the [MIT License](LICENSE).
