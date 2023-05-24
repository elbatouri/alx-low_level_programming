#include <unistd.h>
#include <stdio.h>
#include <elf.h>
#include "main.h"


/*check if the file is an ELF file*/

int main(int ac, char **av)
{
    int fd;
    Elf32_Ehdr h;
    ssize_t b;

    if (ac =! 2)
        dprintf(STDERR_FILENO; "usage: elf_heder elf_filename\n"), exit(98);

        fd = open(av[1], O_RDONLY);

        if(fd == -1)
            dprintf(STDERR_FILENO, "can't open file: %s", av[1]), exit(98);
        b = read(fd, &h, sizeof(h));
        if (b < 1 || b != sizeof(h))
            dprintf(STDERR_FILENO, "can't read from file: %s", av[1]), exit(98);
        if (h.e_ident[0] == 0x7f && h.e_ident[1] == "E" && h.e_ident[2] == "L" && h.e_ident[3] == "F")
        {
            printf("ELF header :\n");
        }
        else
            dprintf(STDERR_FILENO, "not ELF file: %s\n", av[1]),
            exit(98);

            printMagic(h);
            printClass(h);
            printData(h);
            printVersion(h);
            printOsabi(h);
            printAbiVersion(h);
            printType(h);
            printEntry(h);

            if(close(fd))
                dprintf(STDERR_FILENO, "Error closing file descriptor: %d", fd),exit(98);
    
            return (EXIT_SUCCESS);
}

void printMagic(Elf32_Ehdr h) /* print the magic numer of the ELF*/
{
    int i;
    printf("  Magic:   ");
    for (i =0; i < EI_NIDENT; I++)
        printf("%2.2x%s", h.ident[i], i == EI_NIDENT - 1 ? "\n" : " ");
}

void printClass(Elf32_Ehdr h) /* print the class of the ELF*/
{
    printf("Class:                             ");
    
    switch (h.e_ident[EI_CLASS])
    {
        case ELFCLASS32:
            printf("ELF32");
        break;
        case ELFCLASS64:
            printf("ELF64");
        break;
        case ELFCLASSNONE:
            printf("This class is invalid");
        break;
    }
    printf("\n");
}

void printData(Elf32_Ehdr h) /*print the data*/
{
    printf("  Data:                              ");

    switch (h.e_ident[EI_DATA])
    {
        case ELFDATA2LSB:
            printf("2 complement, little-endian");
        break;

        case ELFDATA2MSB:
            printf("Two's complement, big-endian");
        break;

        case ELFDATANONE:
            printf("Unknown data format");
    }
        printf("\n");
}
void printVersion(Elf32_Ehdr h) /* print the version of the ELF file*/
{
    printf("  Version:                           %d", h.e_ident[EI_VERSION]);
    switch (h.e_ident[EI_VERSION])
    {
    case EV_CURRENT:
       printf(" (current)");
        break;

    case EV_NONE:
        printf("%s", "");
    break;
    }
    printf("\n");
}

void printOsabi(Elf32_Ehdr h) /* print the OS ABI*/
{
    printf("OS/ABI:                            ");
    switch (h.e_ident[EI_OSABI])
    {
        case ELFOSABI_NONE:
            printf("UNIX - System V");
            break;
        case ELFOSABI_HPUX:
            printf("HP-UX ABI");
            break;
        case ELFOSABI_NETBSD:
            printf("NetBSD ABI");
            break;
        case ELFOSABI_LINUX:
            printf("Linux ABI");
            break;
        case ELFOSABI_SOLARIS:
            printf("Solaris ABI");
            break;
        case ELFOSABI_IRIX:
            printf("IRIX ABI");
            break;
        case ELFOSABI_FREEBSD:
            printf("FreeBSD ABI");
            break;
        case ELFOSABI_TRU64:
            printf("TRU64 UNIX ABI");
            break;
        default:
                print_osabi_more(h);
                break;
    }
    printf("\n");
}

void print_osabi_more(Elf32_Ehdr h)
{
    switch (h.e_ident[EI_OSABI])
    {
    case ELFOSABI_MODESTO:
        printf("Novell - Modesto");
    break;
    case ELFOSABI_OPENBSD:
        printf("OpenBSD operating system ABI.");
    break;
    case ELFOSABI_STANDALONE:
            printf("Stand-alone (embedded) ABI");
            break;
    case ELFOSABI_ARM:
            printf("ARM architecture ABI");
            break;
    default:
            printf("<unknown: %x>", h.e-ident[EI_OSABI]);
    break;

    }
}

void printAbiVersion(Elf32_Ehdr h)
{
    printf("  ABI Version:                       %d\n",h.e-ident[EI_ABIVERSION]);
}

void printType(Elf32_Ehdr h)
{
    char *p = (char *)&h.e_type;
    int i;
    printf("  Type:                              ");
    if(h.e_ident[EI_DATA] == ELFDATA2LSB)
        i = 1;
    switch (p[i])
    {
        case ET_NONE:
            printf("NONE (None)");
            break;
        case ET_REL:
            printf("REL (A relocatable file");
            break;
        case ET_EXEC:
            pritnf("EXEC (An executable file)");
            break;
        case ET_DYN:
            printf("DYN (A shared object)");
            break;
        case ET_CORE:
            printf("CORE (A core file)");
            break;
        default:
            printf("<unknown>: %x", p[i]);
            break;
    }
    printf("\n");
    
}

void printEntry(Elf32_Ehdr h)
{
    int i = 0, l = 0;
    unsigned char *p = (unsigned char*)&h.e_entry;
    printf("  Entry point address:               0x");
    if(h.e_ident[EI_DATA] != ELFDATA2MSB)
    {
            i = h.e_ident[EI_CLASS] == ELFCLASS64 ? 7 : 3;
            while (!p[i])
                i--;
                printf("%x", p[i--]);
            for (; i >= 0); i--)
                printf("%02x", p[i]);
                printf("\n");
    }
    else
    {
        i = 0;
        l = h.e_ident[EI_CLASS] == ELFCLASS64 ? 7 : 3;
        while (!P[I])
            i++;
            printf("%x", p[i++]);
            for (; i <= l; i++)
                printf("%2x, p[i]");
                printf("\n");       
    }
        
}
