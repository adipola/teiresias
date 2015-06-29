# Dependencies #

  * G++ compiler version 4.1`*` or higher

# Installation #

Once the repository is checked out and the dependencies are installed, it is possible to build the Teiresias source in the following fashion:

```
make
make install
```

# Execution #

The execution of the Teiresias tool requires a set of sequences (INPUTFILE), provided in the fasta format, as input and an output filename (OUTPUTFILE). In addition to these general parameters, it is furthermore possible to control the actual analysis. For that purpose the user can provide integer parameters (INT) to specify a minimum word length (w), the number of non-ambigous enforced literals (l), the minimum number of total pattern repeats required (k) as well as the minimum number of sequences a pattern has to occur in (L). In addition to these required parameters it is also possible to specify that patterns may occur on both strands (r).

Teiresias is executed in the following fashion:

```
./teiresias -input INPUTFILE -output OUTPUTFILE -w INT -l INT -k INT -L INT [-r]
```./teiresias -input INPUTFILE -output OUTPUTFILE -w INT -l INT -k INT -L INT [-r]
}}}```