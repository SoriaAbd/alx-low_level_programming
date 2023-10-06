#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
/**
 * print_elf_header - function to print
 * @header:header pointer
 * Return:void
 */
void print_elf_header(const Elf64_Ehdr *header)
{
	int i;

	printf("Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", header->e_ident[i]);
	}
	printf("\n");
	printf("Class:                             %s\n", header->e_ident[EI_CLASS]
			== ELFCLASS32 ? "ELF32" : "ELF64");
	printf("Data:                              %s\n", header->e_ident[EI_DATA] ==
			ELFDATA2LSB ? "2's complement, little endian" :
			"2's complement, big endian");
	printf("Version:                           %d (current)\n",
			header->e_ident[EI_VERSION]);
	printf("OS/ABI:                            %d\n", header->e_ident[EI_OSABI]);
	printf("ABI Version:                       %d\n",
			header->e_ident[EI_ABIVERSION]);
	printf("Type:                              %d\n", header->e_type);
	printf("Entry point address:               0x%lx\n", header->e_entry);
}
/**
 * main - our base
 * @argc:int
 * @argv:array
 * Return:0
 */
int main(int argc, char *argv[])
{
	const char *filename = argv[1];
	int fd = open(filename, O_RDONLY);
	Elf64_Ehdr header;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		exit(98);
	}
	if (fd == -1)
	{
		perror("Error opening file");
		exit(98);
	}
	if (read(fd, &header, sizeof(header)) != sizeof(header))
	{
		fprintf(stderr, "Error reading ELF header\n");
		close(fd);
		exit(98);
	}
	if (memcmp(header.e_ident, ELFMAG, SELFMAG) != 0)
	{
		fprintf(stderr, "%s is not an ELF file\n", filename);
		close(fd);
		exit(98);
	}

	print_elf_header(&header);

	close(fd);

	return (0);
}
