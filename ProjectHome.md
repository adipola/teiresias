This repository provides an open source implementation of the Teiresias algorithm, which was originally published in the following paper:

Rigoutsos I, Floratos A "Combinatorial pattern discovery in biological sequences: The TEIRESIAS algorithm" _Bioinformatics_ (1998) **14** (1): 55-67.

The following is the abstract of the original paper:

"**MOTIVATION**: The discovery of motifs in biological sequences is an important problem.

**RESULTS**: This paper presents a new algorithm for the discovery of rigid patterns (motifs) in biological sequences. Our method is combinatorial in nature and able to produce all patterns that appear in at least a (user-defined) minimum number of sequences, yet it manages to be very efficient by avoiding the enumeration of the entire pattern space. Furthermore, the reported patterns are maximal: any reported pattern cannot be made more specific and still keep on appearing at the exact same positions within the input sequences. The effectiveness of the proposed approach is showcased on a number of test cases which aim to: (i) validate the approach through the discovery of previously reported patterns; (ii) demonstrate the capability to identify automatically highly selective patterns particular to the sequences under consideration. Finally, experimental analysis indicates that the algorithm is output sensitive, i.e. its running time is quasi-linear to the size of the generated output."