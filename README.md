# PBiCGStab solver for RapidCFD-dev

# Now part of RapidCFD-dev

This project is now merged into the [RapidCFD-dev](https://github.com/SimFlowCFD/RapidCFD-dev) project starting with commit [975bd36](https://github.com/SimFlowCFD/RapidCFD-dev/commit/975bd36fc843171181d14411536689ddf4feffe2).

It is recommended that you use the version on the RapidCFD-dev repo instead of this earlier version.

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


