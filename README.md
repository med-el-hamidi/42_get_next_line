# 📄 Get Next Line (GNL)

## 📝 Purpose
`get_next_line` is a C function designed to read and return a single line (including the newline character, if present) from a file descriptor. This project simplifies reading files line-by-line, especially for large files or when handling multiple file descriptors simultaneously.  

It serves as an essential exercise for mastering low-level file manipulation, dynamic memory allocation, and linked list usage in C.  

---

## ⚡ Features
- Efficiently handles input line by line.
- Supports **multiple file descriptors** simultaneously.
- Customizable **buffer size** for optimized performance.

---

## 🛠️ How It Works
The implementation revolves around the following key components:

- **File Descriptor Management**  
  Each file descriptor is associated with its own linked list to store buffered data.

- **Dynamic Buffer Handling**  
  Reads chunks of data from the file descriptor, appending them to the linked list until a newline (`\n`) or EOF is encountered.

- **Line Extraction**  
  Combines buffered data into a single line and prepares the linked list for subsequent calls.  

### Key Functions
1. **`get_next_line`**: Orchestrates line reading and returns the next line.
2. **`_create_list`**: Reads and buffers data into a linked list from the file descriptor.
3. **`_listadd_back`**: Adds new chunks of data to the end of the linked list.
4. **`_gnl`**: Assembles a complete line from buffered data and returns it.
5. **`_getready_next_gnl`**: Prepares the linked list for subsequent reads.

---

## 📂 File Structure

### Mandatory Files
- **`get_next_line.c`**: Core implementation.  
- **`get_next_line.h`**: Header file with function declarations and macros.  
- **`get_next_line_utils.c`**: Helper functions (e.g., linked list utilities).  

### Bonus Files
The project leaves limited room for bonuses, but if the mandatory part is implemented perfectly, the following bonuses can enhance the functionality:  
- **`get_next_line_bonus.c`**: Extended implementation to manage multiple file descriptors.  
- **`get_next_line_bonus.h`**: Header file for the bonus part.  
- **`get_next_line_utils_bonus.c`**: Bonus-specific helper functions.  

#### Bonus Features:
- Use a **single static variable** to manage data across calls.  
- Support **multiple file descriptors** simultaneously, allowing seamless reading from different files. For example, alternate between reading from file descriptors `3`, `4`, and `5` without losing state for any descriptor.

---

## 💡 Usage

### Requirements
- **C Compiler**: Compatible with `cc`.  
- **Standard Library Functions**: The project strictly adheres to the **42 C standard**, avoiding external libraries.

### Compilation
compile manually with:
```bash
gcc -D BUFFER_SIZE=32 -o gnl get_next_line.c get_next_line_utils.c

For the bonus part:
```bash
gcc -D BUFFER_SIZE=32 -o gnl_bonus get_next_line_bonus.c get_next_line_utils_bonus.c

