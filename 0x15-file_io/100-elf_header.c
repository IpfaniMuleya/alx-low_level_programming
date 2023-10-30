#include "main.h"

/**
 * print_error - prints an error message to stderr
 * @msg: the error message to print
 *
 * Return: nothing
 */
void print_error(char *msg)
{
	fprintf(stderr, "Error: %s\n", msg);
	exit(98);
}

/**
 * print_elf_header - Prints the ELF header information
 *
 * @header: A pointer to an ELF header
 * Return: Nothing
 */
void print_elf_header(Elf64_Ehdr *header)
{
	int i;

	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x ", header->e_ident[i]);

	printf("\n");
	printf("  Class:                             %s\n", (header->e_ident[EI_CLASS] == ELFCLASS64) ? "ELF64" : "ELF32");
	printf("  Data:                              %s\n", (header->e_ident[EI_DATA] == ELFDATA2LSB) ? "2's complement, little endian" : "2's complement, big endian");
	printf("  Version:                           %d (current)\n", header->e_ident[EI_VERSION]);
	printf("  OS/ABI:                            %d\n", header->e_ident[EI_OSABI]);
	printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
	printf("  Type:                              %d\n", header->e_type);
	printf("  Entry point address:               0x%lx\n", header->e_entry);
	printf("\n");

}

/**
 * main - displays the information contained in the ELF header
 * at the start of an ELF file
 *
 * @argc: the number of arguments passed to the program
 * @argv: an array of pointers to the arguments
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char **argv)
{
	int f_d;
	Elf64_Ehdr header;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		exit(98);
	}

	f_d = open(argv[1], O_RDONLY);
	if (f_d == -1)
		print_error("Can't open file");

	if (read(f_d, &header, sizeof(header)) != sizeof(header))
		print_error("Can't read header");

	if (header.e_ident[EI_MAG0] != ELFMAG0 ||
	header.e_ident[EI_MAG1] != ELFMAG1 ||
	header.e_ident[EI_MAG2] != ELFMAG2 ||
	header.e_ident[EI_MAG3] != ELFMAG3)
	{
		print_error("File is not an ELF file");
	}

	print_elf_header(&header);

	if (close(f_d) == -1)
	{
		fprintf(stderr, "Error: Can't close fd %d\n", f_d);
		exit(100);
	}

	return (0);
}
