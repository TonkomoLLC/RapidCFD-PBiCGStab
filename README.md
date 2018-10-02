# PBiCGStab solver for RapidCFD-dev

# Usage

```
cd PBiCGStab_SharedLib
wmake
```

In `caseDir/controlDict` include the shared library:

```
libs
(
"libPBiCGStabRapidCFD.so"
);
```

Use the solver in fvSolution.  E.g.,

```
    <fieldName>
    {
        solver          PBiCGStab; 
        preconditioner  DILU;
        tolerance       1e-05;
        relTol          0;
    }
```

# Test case

A simple icoFoam cavity case is included to show the solver in use

# Details
Tested with RapidCFD-dev commit f3775ac96129
Ubuntu 16.04
CUDA 10.0


