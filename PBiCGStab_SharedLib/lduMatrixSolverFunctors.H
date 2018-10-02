#ifndef lduMatrixSolverFunctors_H
#define lduMatrixSolverFunctors_H

namespace Foam
{

struct psiPlusAlphaYAFunctor
{
    const scalar alpha;

    psiPlusAlphaYAFunctor(scalar _alpha): alpha(_alpha) {}

    __HOST____DEVICE__
    scalar operator()(const scalar& psi, const scalar& yA)
    {
            return psi + alpha*yA;
    }
};

struct rAPlusAlphaPAFunctor
{
    const scalar alpha;

    rAPlusAlphaPAFunctor(scalar _alpha): alpha(_alpha) {}

    __HOST____DEVICE__
    scalar operator()(const scalar& rA, const scalar& pA)
    {
            return rA + alpha*pA;
    }
};

struct rAMinusAlphaPAFunctor
{
    const scalar alpha;

    rAMinusAlphaPAFunctor(scalar _alpha): alpha(_alpha) {}

    __HOST____DEVICE__
    scalar operator()(const scalar& rA, const scalar& pA)
    {
            return rA - alpha*pA;
    }
};

struct rAPlusBetaPAFunctor
{
    const scalar beta;

    rAPlusBetaPAFunctor(scalar _beta): beta(_beta) {}

    __HOST____DEVICE__
    scalar operator()(const scalar& rA, const scalar& pA)
    {
            return rA + beta*pA;
    }
};


struct rAMinusAlphaAYAFunctor
{
    const scalar alpha;

    rAMinusAlphaAYAFunctor(scalar _alpha): alpha(_alpha) {}

    __HOST____DEVICE__
    scalar operator()(const scalar& rA, const scalar& AyA)
    {
            return rA - alpha*AyA;
    }
};

struct sAMinusOmegaTAFunctor
{
    const scalar omega;

    sAMinusOmegaTAFunctor(scalar _omega): omega(_omega) {}

    __HOST____DEVICE__
    scalar operator()(const scalar& sA, const scalar& tA)
    {
            return sA - omega*tA;
    }
};


struct pAMinusOmegaAYAFunctor
{
    const scalar omega;

    pAMinusOmegaAYAFunctor(scalar _omega): omega(_omega) {}

    __HOST____DEVICE__
    scalar operator()(const scalar& pA, const scalar& AyA)
    {
            return pA - omega*AyA;
    }
};

struct rAPlusBetaResult1Functor
{
    const scalar beta;

    rAPlusBetaResult1Functor(scalar _beta): beta(_beta) {}

    __HOST____DEVICE__
    scalar operator()(const scalar& rA, const scalar& result1)
    {
            return rA + beta*result1;
    }
};

struct psiPlusOmegaZAFunctor
{
    const scalar omega;

    psiPlusOmegaZAFunctor(scalar _omega): omega(_omega) {}

    __HOST____DEVICE__
    scalar operator()(const scalar& psi, const scalar& zA)
    {
            return psi + omega*zA;
    }
};

}

#endif
