/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1098fb494; end: 1098fb4e3;  */

float FUN_1098fb494(long param_1,undefined8 *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)*param_2;
  fVar2 = (float)((ulong)*param_2 >> 0x20);
  fVar1 = SQRT(fVar1 * fVar1 + fVar2 * fVar2);
  if (1e-05 < fVar1) {
    fVar1 = fVar1 * fVar1;
    return fVar1 * *(float *)(param_1 + 8) + 1.0 + fVar1 * fVar1 * *(float *)(param_1 + 0xc) +
           fVar1 * fVar1 * fVar1 * *(float *)(param_1 + 0x10);
  }
  return 1.0;
}



/* Entry: 1098fb4e4; end: 1098fb517;  */

void FUN_1098fb4e4(long param_1,undefined8 *param_2)

{
  float fVar1;
  float fVar2;
  undefined1 auStack_14 [4];
  
  fVar1 = (float)*param_2;
  fVar2 = (float)((ulong)*param_2 >> 0x20);
  FUN_1098fb6a4(SQRT(fVar1 * fVar1 + fVar2 * fVar2),param_1 + 8,auStack_14);
  return;
}



/* Entry: 1098fb518; end: 1098fb5b3;  */

undefined8 * FUN_1098fb518(undefined4 param_1,long *param_2,long *param_3)

{
  undefined8 *puVar1;
  undefined8 auStack_48 [2];
  undefined8 auStack_38 [2];
  undefined4 uStack_24;
  
  uStack_24 = param_1;
  (**(code **)(*param_3 + 0x18))(auStack_38,param_3);
  (**(code **)(*param_2 + 0x18))(auStack_48,param_2);
  puVar1 = auStack_38;
  FUN_1093f6abc(puVar1,auStack_48,&uStack_24);
  _free(auStack_48[0]);
  _free(auStack_38[0]);
  return puVar1;
}



/* Entry: 1098fb5b4; end: 1098fb5bb;  */

undefined8 FUN_1098fb5b4(void)

{
  return 1;
}



/* Entry: 1098fb5bc; end: 1098fb6a3;  */

void FUN_1098fb5bc(long param_1,long *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined4 uVar4;
  
  puVar2 = (undefined8 *)0x18;
  __Znwm();
  *puVar2 = &PTR_DAT_110b1cd30;
  uVar4 = *(undefined4 *)(param_1 + 0x10);
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  puVar2[1] = *(undefined8 *)(param_1 + 8);
  *(undefined4 *)(puVar2 + 2) = uVar4;
  *(undefined4 *)((long)puVar2 + 0x14) = uVar1;
  plVar3 = (long *)*param_2;
  *param_2 = (long)puVar2;
  if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001098fb61c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 8))();
    return;
  }
  return;
}



/* Entry: 1098fb6a4; end: 1098fb78f;  */

float FUN_1098fb6a4(float param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = 1.0;
  if ((1e-05 < param_1) &&
     (fVar1 = (float)*(undefined8 *)param_2, fVar3 = (float)((ulong)*(undefined8 *)param_2 >> 0x20),
     1.1920929e-07 < SQRT(fVar1 * fVar1 + fVar3 * fVar3 + param_2[2] * param_2[2]))) {
    *param_3 = param_1;
    fVar1 = param_2[3];
    fVar2 = param_1;
    if (fVar1 != 0.0) {
      do {
        fVar1 = (float)((int)fVar1 + -1);
        fVar3 = fVar2 * fVar2;
        fVar4 = fVar3 * fVar3;
        fVar3 = (fVar2 * (fVar3 * *param_2 + 1.0 + fVar4 * param_2[1] + fVar4 * fVar3 * param_2[2])
                - param_1) /
                (fVar3 * *param_2 * 3.0 + 1.0 + fVar4 * param_2[1] * 5.0 +
                fVar4 * fVar3 * param_2[2] * 7.0);
        fVar2 = fVar2 - fVar3;
        *param_3 = fVar2;
      } while (1e-10 <= ABS(fVar3) && fVar1 != 0.0);
    }
    fVar2 = fVar2 / param_1;
  }
  return fVar2;
}



/* Entry: 1098fb790; end: 1098fb85b;  */

void FUN_1098fb790(ulong *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  double *pdVar3;
  ulong uVar4;
  double *extraout_x8;
  int iVar5;
  ulong uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  uVar1 = 0x10;
  _malloc();
  if (uVar1 == 0) {
    lVar2 = 8;
    ___cxa_allocate_exception();
    __ZNSt9bad_allocC1Ev();
    pdVar3 = (double *)PTR___ZTISt9bad_alloc_110346a68;
    ___cxa_throw();
    dVar7 = *(double *)(lVar2 + 8);
    dVar8 = *(double *)(lVar2 + 0x10);
    dVar9 = *pdVar3;
    extraout_x8[1] = pdVar3[1];
    *extraout_x8 = dVar9;
    iVar5 = *(int *)(lVar2 + 0x18);
    if (iVar5 != 0) {
      dVar10 = extraout_x8[1];
      dVar9 = *extraout_x8;
      do {
        dVar9 = dVar9 * dVar9 + dVar10 * dVar10;
        dVar10 = dVar9 * dVar7 + 1.0 + dVar9 * dVar8 * dVar9;
        dVar9 = *pdVar3 / dVar10;
        dVar10 = pdVar3[1] / dVar10;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      extraout_x8[1] = dVar10;
      *extraout_x8 = dVar9;
    }
    return;
  }
  *param_1 = uVar1;
  param_1[1] = 2;
  uVar6 = uVar1 >> 3 & 1;
  if ((uVar1 & 7) != 0) {
    uVar6 = 2;
  }
  _memcpy();
  if ((2 - uVar6 & 2) + uVar6 < 2) {
    uVar4 = (uVar6 << 3 | uVar6 << 4) ^ 0x10;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_11034c658)(uVar1 + uVar4,param_2 + uVar4 + 8,(2 - uVar6 & 1) << 3);
    return;
  }
  return;
}



/* Entry: 1098fb85c; end: 1098fb94f;  */

void FUN_1098fb85c(double *param_1,long param_2,double *param_3)

{
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar2 = *(double *)(param_2 + 8);
  dVar3 = *(double *)(param_2 + 0x10);
  dVar4 = *param_3;
  param_1[1] = param_3[1];
  *param_1 = dVar4;
  iVar1 = *(int *)(param_2 + 0x18);
  if (iVar1 != 0) {
    dVar5 = param_1[1];
    dVar4 = *param_1;
    do {
      dVar4 = dVar4 * dVar4 + dVar5 * dVar5;
      dVar5 = dVar4 * dVar2 + 1.0 + dVar4 * dVar3 * dVar4;
      dVar4 = *param_3 / dVar5;
      dVar5 = param_3[1] / dVar5;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    param_1[1] = dVar5;
    *param_1 = dVar4;
  }
  return;
}



/* Entry: 1098fb950; end: 1098fba43;  */

void FUN_1098fb950(double *param_1,long param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dStack_38;
  
  dVar4 = param_3[1];
  dVar3 = *param_3;
  dVar5 = SQRT(dVar3 * dVar3 + dVar4 * dVar4);
  if (ABS(dVar5) <= 2.220446049250313e-16) {
    *param_1 = 1.0;
    param_1[1] = 0.0;
    param_1[2] = 0.0;
    param_1[3] = 1.0;
  }
  else {
    dStack_38 = 0.0;
    dVar1 = dVar5;
    FUN_1098fbc38(param_2 + 8,&dStack_38);
    dStack_38 = dStack_38 * dStack_38;
    dVar2 = (1.0 / (dVar5 * dVar5)) *
            (1.0 / (dStack_38 * *(double *)(param_2 + 8) * 3.0 + 1.0 +
                   dStack_38 * dStack_38 * *(double *)(param_2 + 0x10) * 5.0) - dVar1);
    *param_1 = dVar1;
    param_1[1] = dVar1 * 0.0;
    param_1[2] = dVar1 * 0.0;
    param_1[3] = dVar1;
    dVar5 = dVar2 * dVar3;
    dVar2 = dVar2 * dVar4;
    param_1[1] = param_1[1] + dVar4 * dVar5;
    *param_1 = *param_1 + dVar3 * dVar5;
    param_1[3] = param_1[3] + dVar4 * dVar2;
    param_1[2] = param_1[2] + dVar3 * dVar2;
  }
  return;
}



/* Entry: 1098fba44; end: 1098fba87;  */

double FUN_1098fba44(long param_1,double *param_2)

{
  double dVar1;
  
  dVar1 = SQRT(*param_2 * *param_2 + param_2[1] * param_2[1]);
  if (1e-05 < dVar1) {
    dVar1 = dVar1 * dVar1;
    return dVar1 * *(double *)(param_1 + 8) + 1.0 + dVar1 * dVar1 * *(double *)(param_1 + 0x10);
  }
  return 1.0;
}



/* Entry: 1098fba88; end: 1098fbabb;  */

void FUN_1098fba88(long param_1,double *param_2)

{
  undefined1 auStack_18 [8];
  
  FUN_1098fbc38(SQRT(*param_2 * *param_2 + param_2[1] * param_2[1]),param_1 + 8,auStack_18);
  return;
}



/* Entry: 1098fbabc; end: 1098fbb57;  */

undefined8 * FUN_1098fbabc(undefined8 param_1,long *param_2,long *param_3)

{
  undefined8 *puVar1;
  undefined8 auStack_48 [2];
  undefined8 auStack_38 [2];
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  (**(code **)(*param_3 + 0x18))(auStack_38,param_3);
  (**(code **)(*param_2 + 0x18))(auStack_48,param_2);
  puVar1 = auStack_38;
  FUN_1093f6610(puVar1,auStack_48,&uStack_28);
  _free(auStack_48[0]);
  _free(auStack_38[0]);
  return puVar1;
}



/* Entry: 1098fbb58; end: 1098fbb5f;  */

undefined8 FUN_1098fbb58(void)

{
  return 1;
}



/* Entry: 1098fbb60; end: 1098fbc37;  */

void FUN_1098fbb60(long param_1,long *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  puVar1[2] = 10;
  *puVar1 = &PTR_DAT_110b1ce60;
  puVar1[1] = CONCAT44((float)*(double *)(param_1 + 0x10),(float)*(double *)(param_1 + 8));
  plVar2 = (long *)*param_2;
  *param_2 = (long)puVar1;
  if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001098fbbbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 8))();
    return;
  }
  return;
}



/* Entry: 1098fbc38; end: 1098fbcfb;  */

double FUN_1098fbc38(double param_1,double *param_2,double *param_3)

{
  int iVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = 1.0;
  if ((1e-05 < param_1) &&
     (2.220446049250313e-16 < SQRT(*param_2 * *param_2 + param_2[1] * param_2[1]))) {
    *param_3 = param_1;
    iVar1 = *(int *)(param_2 + 2);
    dVar2 = param_1;
    if (iVar1 != 0) {
      do {
        iVar1 = iVar1 + -1;
        dVar3 = dVar2 * dVar2;
        dVar3 = (dVar2 * (dVar3 * *param_2 + 1.0 + dVar3 * dVar3 * param_2[1]) - param_1) /
                (dVar3 * *param_2 * 3.0 + 1.0 + dVar3 * dVar3 * param_2[1] * 5.0);
        dVar2 = dVar2 - dVar3;
        *param_3 = dVar2;
      } while (1e-10 <= ABS(dVar3) && iVar1 != 0);
    }
    dVar2 = dVar2 / param_1;
  }
  return dVar2;
}



/* Entry: 1098fbcfc; end: 1098fbdcb;  */

void FUN_1098fbcfc(ulong *param_1,long param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  float *extraout_x8;
  int iVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  puVar5 = (undefined8 *)0x8;
  _malloc();
  if (puVar5 == (undefined8 *)0x0) {
    lVar6 = 8;
    ___cxa_allocate_exception();
    __ZNSt9bad_allocC1Ev();
    puVar5 = (undefined8 *)PTR___ZTISt9bad_alloc_110346a68;
    ___cxa_throw();
    fVar10 = *(float *)(lVar6 + 8);
    fVar11 = *(float *)(lVar6 + 0xc);
    uVar8 = *puVar5;
    *(undefined8 *)extraout_x8 = uVar8;
    iVar7 = *(int *)(lVar6 + 0x10);
    if (iVar7 != 0) {
      do {
        fVar9 = (float)*(undefined8 *)extraout_x8;
        fVar12 = (float)((ulong)*(undefined8 *)extraout_x8 >> 0x20);
        fVar9 = fVar9 * fVar9 + fVar12 * fVar12;
        fVar9 = fVar9 * fVar10 + 1.0 + fVar9 * fVar11 * fVar9;
        *extraout_x8 = (float)uVar8 / fVar9;
        extraout_x8[1] = (float)((ulong)uVar8 >> 0x20) / fVar9;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    return;
  }
  puVar1 = (undefined8 *)(param_2 + 8);
  *param_1 = (ulong)puVar5;
  param_1[1] = 2;
  if (((ulong)puVar5 & 3) == 0) {
    uVar4 = -((uint)puVar5 >> 2);
    uVar2 = (ulong)uVar4 & 3;
    if ((uVar4 & 3) == 0) {
      lVar6 = 0;
    }
    else {
      uVar3 = uVar2;
      if (1 < uVar2) {
        uVar3 = 2;
      }
      _memcpy(puVar5,puVar1,uVar3 << 2);
      if (uVar2 != 1) {
        return;
      }
      lVar6 = 4;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_11034c658)((long)puVar5 + lVar6,(long)puVar1 + lVar6,8 - lVar6);
    return;
  }
  *puVar5 = *puVar1;
  return;
}



/* Entry: 1098fbdcc; end: 1098fbebf;  */

void FUN_1098fbdcc(float *param_1,long param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar4 = *(float *)(param_2 + 8);
  fVar5 = *(float *)(param_2 + 0xc);
  uVar2 = *param_3;
  *(undefined8 *)param_1 = uVar2;
  iVar1 = *(int *)(param_2 + 0x10);
  if (iVar1 != 0) {
    do {
      fVar3 = (float)*(undefined8 *)param_1;
      fVar6 = (float)((ulong)*(undefined8 *)param_1 >> 0x20);
      fVar3 = fVar3 * fVar3 + fVar6 * fVar6;
      fVar3 = fVar3 * fVar4 + 1.0 + fVar3 * fVar5 * fVar3;
      *param_1 = (float)uVar2 / fVar3;
      param_1[1] = (float)((ulong)uVar2 >> 0x20) / fVar3;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}



/* Entry: 1098fbec0; end: 1098fbfaf;  */

void FUN_1098fbec0(float *param_1,long param_2,undefined8 *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fStack_34;
  
  fVar3 = (float)*param_3;
  fVar4 = (float)((ulong)*param_3 >> 0x20);
  fVar5 = SQRT(fVar3 * fVar3 + fVar4 * fVar4);
  if (ABS(fVar5) <= 1.1920929e-07) {
    param_1[2] = 0.0;
    param_1[3] = 1.0;
    param_1[0] = 1.0;
    param_1[1] = 0.0;
  }
  else {
    fStack_34 = 0.0;
    fVar1 = fVar5;
    FUN_1098fc1a8(param_2 + 8,&fStack_34);
    fStack_34 = fStack_34 * fStack_34;
    fVar2 = (1.0 / (fVar5 * fVar5)) *
            (1.0 / (fStack_34 * *(float *)(param_2 + 8) * 3.0 + 1.0 +
                   fStack_34 * fStack_34 * *(float *)(param_2 + 0xc) * 5.0) - fVar1);
    *param_1 = fVar1;
    param_1[1] = fVar1 * 0.0;
    param_1[2] = fVar1 * 0.0;
    param_1[3] = fVar1;
    fVar5 = fVar2 * fVar3;
    fVar2 = fVar2 * fVar4;
    *(ulong *)param_1 =
         CONCAT44((float)((ulong)*(undefined8 *)param_1 >> 0x20) + fVar4 * fVar5,
                  (float)*(undefined8 *)param_1 + fVar3 * fVar5);
    *(ulong *)(param_1 + 2) =
         CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20) + fVar4 * fVar2,
                  (float)*(undefined8 *)(param_1 + 2) + fVar3 * fVar2);
  }
  return;
}



/* Entry: 1098fbfb0; end: 1098fbff3;  */

float FUN_1098fbfb0(long param_1,undefined8 *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)*param_2;
  fVar2 = (float)((ulong)*param_2 >> 0x20);
  fVar1 = SQRT(fVar1 * fVar1 + fVar2 * fVar2);
  if (1e-05 < fVar1) {
    fVar1 = fVar1 * fVar1;
    return fVar1 * *(float *)(param_1 + 8) + 1.0 + fVar1 * fVar1 * *(float *)(param_1 + 0xc);
  }
  return 1.0;
}



/* Entry: 1098fbff4; end: 1098fc027;  */

void FUN_1098fbff4(long param_1,undefined8 *param_2)

{
  float fVar1;
  float fVar2;
  undefined1 auStack_14 [4];
  
  fVar1 = (float)*param_2;
  fVar2 = (float)((ulong)*param_2 >> 0x20);
  FUN_1098fc1a8(SQRT(fVar1 * fVar1 + fVar2 * fVar2),param_1 + 8,auStack_14);
  return;
}



/* Entry: 1098fc028; end: 1098fc0c3;  */

undefined8 * FUN_1098fc028(undefined4 param_1,long *param_2,long *param_3)

{
  undefined8 *puVar1;
  undefined8 auStack_48 [2];
  undefined8 auStack_38 [2];
  undefined4 uStack_24;
  
  uStack_24 = param_1;
  (**(code **)(*param_3 + 0x18))(auStack_38,param_3);
  (**(code **)(*param_2 + 0x18))(auStack_48,param_2);
  puVar1 = auStack_38;
  FUN_1093f6abc(puVar1,auStack_48,&uStack_24);
  _free(auStack_48[0]);
  _free(auStack_38[0]);
  return puVar1;
}



/* Entry: 1098fc0c4; end: 1098fc0cb;  */

undefined8 FUN_1098fc0c4(void)

{
  return 1;
}



/* Entry: 1098fc0cc; end: 1098fc1a7;  */

void FUN_1098fc0cc(long param_1,long *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  
  puVar2 = (undefined8 *)0x18;
  __Znwm();
  puVar2[2] = 0;
  *puVar2 = &PTR_DAT_110b1ce60;
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  puVar2[1] = *(undefined8 *)(param_1 + 8);
  *(undefined4 *)(puVar2 + 2) = uVar1;
  plVar3 = (long *)*param_2;
  *param_2 = (long)puVar2;
  if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001098fc128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 8))();
    return;
  }
  return;
}



/* Entry: 1098fc1a8; end: 1098fc25b;  */

float FUN_1098fc1a8(float param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = 1.0;
  if ((1e-05 < param_1) &&
     (fVar1 = (float)*(undefined8 *)param_2, fVar3 = (float)((ulong)*(undefined8 *)param_2 >> 0x20),
     1.1920929e-07 < SQRT(fVar1 * fVar1 + fVar3 * fVar3))) {
    *param_3 = param_1;
    fVar1 = param_2[2];
    fVar2 = param_1;
    if (fVar1 != 0.0) {
      do {
        fVar1 = (float)((int)fVar1 + -1);
        fVar3 = fVar2 * fVar2;
        fVar3 = (fVar2 * (fVar3 * *param_2 + 1.0 + fVar3 * fVar3 * param_2[1]) - param_1) /
                (fVar3 * *param_2 * 3.0 + 1.0 + fVar3 * fVar3 * param_2[1] * 5.0);
        fVar2 = fVar2 - fVar3;
        *param_3 = fVar2;
      } while (1e-10 <= ABS(fVar3) && fVar1 != 0.0);
    }
    fVar2 = fVar2 / param_1;
  }
  return fVar2;
}



/* Entry: 1098fc25c; end: 1098fc2d7;  */

undefined8 * FUN_1098fc25c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0xf) = 1;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 0x1d) = 1;
  FUN_1098fc2d8(param_1,*param_2,param_2[1]);
  return param_1;
}



/* Entry: 1098fc2d8; end: 1098fc433;  */

void FUN_1098fc2d8(ulong *param_1,double *param_2,ulong param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  double *pdVar4;
  long *plVar5;
  ulong uVar6;
  double *pdVar7;
  long lVar8;
  long lVar9;
  double *pdVar10;
  ulong uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined8 uStack_98;
  long *plStack_90;
  ulong uStack_88;
  undefined4 uStack_80;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  double *pdStack_68;
  long *plStack_60;
  long *plStack_58;
  ulong uStack_50;
  undefined4 uStack_48;
  
  dVar14 = param_2[1];
  dVar13 = *param_2;
  pdVar4 = (double *)*param_1;
  if (param_1[1] == param_3) goto LAB_1098fc358;
  _free();
  if ((long)param_3 < 1) {
LAB_1098fc34c:
    pdVar4 = (double *)0x0;
  }
  else {
    if (param_3 >> 0x3d != 0) {
LAB_1098fc32c:
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_1098fc34c;
    }
    pdVar4 = (double *)(param_3 << 3);
    _malloc();
    if (pdVar4 == (double *)0x0) goto LAB_1098fc32c;
  }
  *param_1 = (ulong)pdVar4;
  param_1[1] = param_3;
LAB_1098fc358:
  uVar6 = (ulong)pdVar4 >> 3 & 1;
  if ((long)param_3 <= (long)uVar6) {
    uVar6 = param_3;
  }
  if (((ulong)pdVar4 & 7) != 0) {
    uVar6 = param_3;
  }
  lVar8 = param_3 - uVar6;
  pdVar7 = pdVar4;
  pdVar10 = param_2;
  uVar11 = uVar6;
  if (0 < (long)uVar6) {
    do {
      *pdVar7 = *pdVar10;
      uVar11 = uVar11 - 1;
      pdVar7 = pdVar7 + 1;
      pdVar10 = pdVar10 + 1;
    } while (uVar11 != 0);
  }
  lVar9 = (lVar8 - (lVar8 >> 0x3f) & 0xfffffffffffffffeU) + uVar6;
  if (1 < lVar8) {
    pdVar7 = param_2 + uVar6;
    uVar11 = uVar6;
    pdVar10 = pdVar4 + uVar6;
    do {
      dVar12 = *pdVar7;
      pdVar10[1] = pdVar7[1];
      *pdVar10 = dVar12;
      uVar11 = uVar11 + 2;
      pdVar7 = pdVar7 + 2;
      pdVar10 = pdVar10 + 2;
    } while ((long)uVar11 < lVar9);
  }
  if (lVar9 < (long)param_3) {
    lVar9 = lVar8 % 2;
    pdVar7 = param_2 + uVar6 + (lVar8 / 2) * 2;
    pdVar4 = pdVar4 + uVar6 + (lVar8 / 2) * 2;
    do {
      *pdVar4 = *pdVar7;
      lVar9 = lVar9 + -1;
      pdVar7 = pdVar7 + 1;
      pdVar4 = pdVar4 + 1;
    } while (lVar9 != 0);
  }
  FUN_1098fc434(param_1 + 2,*param_1,0);
  pdVar7 = (double *)(*param_1 + ((long)(dVar13 * dVar14 + dVar13 * dVar14) + 6) * 8);
  uStack_98 = 0;
  uStack_88 = 0;
  plStack_90 = (long *)0x0;
  uStack_80 = 0;
  dVar13 = *pdVar7;
  dVar14 = pdVar7[1];
  plVar5 = (long *)0x40;
  __Znwm();
  iStack_74 = (int)dVar14;
  iStack_78 = (int)dVar13;
  pdVar4 = pdVar7 + 6;
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_FUN_110af5240;
  plStack_60 = plVar5 + 3;
  *plStack_60 = (long)&PTR_DAT_110af5290;
  plVar5[4] = (long)pdVar4;
  plVar5[5] = (long)dVar13 * (long)dVar14 * 0x20;
  plVar5[6] = (long)pdVar4;
  plVar5[7] = 0;
  iStack_6c = iStack_78 << 4;
  uStack_50 = 0;
  uStack_48 = 0;
  uVar11 = CONCAT44(iStack_6c,iStack_78);
  uVar6 = CONCAT44(iStack_74,iStack_78);
  iStack_70 = iStack_78;
  pdStack_68 = pdVar4;
  plStack_58 = plVar5;
  FUN_109448e7c(&uStack_98,&plStack_60);
  plVar5 = plStack_58;
  uStack_88 = uStack_50;
  uStack_80 = uStack_48;
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
    do {
      lVar8 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  dVar13 = *pdVar7;
  param_1[0x11] = (ulong)pdVar7[1];
  param_1[0x10] = (ulong)dVar13;
  dVar13 = pdVar7[2];
  param_1[0x13] = (ulong)pdVar7[3];
  param_1[0x12] = (ulong)dVar13;
  dVar13 = pdVar7[4];
  param_1[0x15] = (ulong)pdVar7[5];
  param_1[0x14] = (ulong)dVar13;
  param_1[0x17] = uVar11;
  param_1[0x16] = uVar6;
  param_1[0x18] = (ulong)pdVar4;
  FUN_109448e7c(param_1 + 0x19,&uStack_98);
  plVar5 = plStack_90;
  param_1[0x1b] = uStack_88;
  *(undefined4 *)(param_1 + 0x1c) = uStack_80;
  if (plStack_90 != (long *)0x0) {
    plVar1 = plStack_90 + 1;
    do {
      lVar8 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_90 + 0x10))(plStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return;
}



/* Entry: 1098fc434; end: 1098fc5f3;  */

void FUN_1098fc434(double *param_1,long param_2,long param_3)

{
  double *pdVar1;
  long *plVar2;
  double *pdVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uStack_98;
  long *plStack_90;
  double dStack_88;
  undefined4 uStack_80;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  double *pdStack_68;
  long *plStack_60;
  long *plStack_58;
  double dStack_50;
  undefined4 uStack_48;
  
  pdVar3 = (double *)(param_2 + param_3 * 8);
  uStack_98 = 0;
  dStack_88 = 0.0;
  plStack_90 = (long *)0x0;
  uStack_80 = 0;
  dVar9 = *pdVar3;
  dVar10 = pdVar3[1];
  plVar6 = (long *)0x40;
  __Znwm();
  iStack_74 = (int)dVar10;
  iStack_78 = (int)dVar9;
  pdVar1 = pdVar3 + 6;
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = (long)&PTR_FUN_110af5240;
  plStack_60 = plVar6 + 3;
  *plStack_60 = (long)&PTR_DAT_110af5290;
  plVar6[4] = (long)pdVar1;
  plVar6[5] = (long)dVar9 * (long)dVar10 * 0x20;
  plVar6[6] = (long)pdVar1;
  plVar6[7] = 0;
  iStack_6c = iStack_78 << 4;
  dStack_50 = 0.0;
  uStack_48 = 0;
  dVar10 = (double)CONCAT44(iStack_6c,iStack_78);
  dVar9 = (double)CONCAT44(iStack_74,iStack_78);
  iStack_70 = iStack_78;
  pdStack_68 = pdVar1;
  plStack_58 = plVar6;
  FUN_109448e7c(&uStack_98,&plStack_60);
  plVar6 = plStack_58;
  dStack_88 = dStack_50;
  uStack_80 = uStack_48;
  if (plStack_58 != (long *)0x0) {
    plVar2 = plStack_58 + 1;
    do {
      lVar7 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  dVar8 = *pdVar3;
  param_1[1] = pdVar3[1];
  *param_1 = dVar8;
  dVar8 = pdVar3[2];
  param_1[3] = pdVar3[3];
  param_1[2] = dVar8;
  dVar8 = pdVar3[4];
  param_1[5] = pdVar3[5];
  param_1[4] = dVar8;
  param_1[7] = dVar10;
  param_1[6] = dVar9;
  param_1[8] = (double)pdVar1;
  FUN_109448e7c(param_1 + 9,&uStack_98);
  plVar6 = plStack_90;
  param_1[0xb] = dStack_88;
  *(undefined4 *)(param_1 + 0xc) = uStack_80;
  if (plStack_90 != (long *)0x0) {
    plVar2 = plStack_90 + 1;
    do {
      lVar7 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_90 + 0x10))(plStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  return;
}



/* Entry: 1098fc5f4; end: 1098fcad7;  */

ulong * FUN_1098fc5f4(long param_1,undefined8 param_2,int param_3)

{
  ulong uVar1;
  double *pdVar2;
  double ***pppdVar3;
  code *pcVar4;
  double ***pppdVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong *puVar10;
  long lVar11;
  long lVar12;
  double dVar13;
  double dVar14;
  double **ppdVar15;
  double **ppdVar16;
  double **ppdStack_140;
  code *pcStack_138;
  byte bStack_129;
  ulong uStack_128;
  double **ppdStack_120;
  double **ppdStack_118;
  undefined8 **ppuStack_110;
  code *pcStack_108;
  ulong *puStack_f8;
  undefined8 **ppuStack_f0;
  code *pcStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = (ulong *)(param_1 + 0x40);
  pdVar2 = (double *)*puVar10;
  uVar8 = *(long *)(param_1 + 0x48) - (long)pdVar2 >> 3;
  if (uVar8 < 6) {
    lStack_e0 = 0;
    uStack_88 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_90 = 0;
    FUN_1099a9f0c(&lStack_e0,&UNK_10f5893fe,0x43,2,FUN_1099aa768,0);
    lVar11 = lStack_d8;
    ppuStack_f0 = (undefined8 **)(*(long *)(param_1 + 0x48) - *(long *)(param_1 + 0x40) >> 3);
    ppdStack_140 = (double **)&ppuStack_f0;
    pcStack_138 = FUN_1098f9c60;
    FUN_1099ade68(&ppdStack_120,&UNK_10f58961f,0x17,0xf,&ppdStack_140);
    pppdVar5 = (double ***)ppdStack_118;
    pppdVar3 = (double ***)ppdStack_120;
    if (-1 < (long)ppuStack_110) {
      pppdVar5 = (double ***)((ulong)ppuStack_110 >> 0x38);
      pppdVar3 = &ppdStack_120;
    }
    FUN_1092b4db8(lVar11 + 0x7540,pppdVar3,pppdVar5);
    pppdVar5 = (double ***)ppdStack_120;
    if ((long)ppuStack_110 < 0) {
LAB_1098fc7e4:
      __ZdlPv(pppdVar5);
    }
LAB_1098fc7e8:
    FUN_1099ab3b0(&lStack_e0);
    puVar9 = (ulong *)0x0;
  }
  else {
    dVar14 = pdVar2[1];
    dVar13 = *pdVar2;
    lVar11 = (long)dVar13 * (long)dVar14;
    uVar1 = lVar11 * 2 + 6;
    uStack_128 = uVar1;
    if (uVar8 < uVar1) {
      lStack_e0 = 0;
      uStack_88 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_90 = 0;
      FUN_1099a9f0c(&lStack_e0,&UNK_10f5893fe,0x4c,2,FUN_1099aa768,0);
      lVar11 = lStack_d8;
      ppuStack_f0 = (undefined8 **)(*(long *)(param_1 + 0x48) - *(long *)(param_1 + 0x40) >> 3);
      puStack_f8 = &uStack_128;
      ppdStack_120 = (double **)&ppuStack_f0;
      ppdStack_118 = (double **)FUN_1098f9c60;
      ppuStack_110 = &puStack_f8;
      pcStack_108 = FUN_1098fcad8;
      FUN_1099ade68(&ppdStack_140,&UNK_10f589637,0x26,0xff,&ppdStack_120);
      pcVar4 = pcStack_138;
      pppdVar5 = (double ***)ppdStack_140;
      if (-1 < (char)bStack_129) {
        pcVar4 = (code *)(ulong)bStack_129;
        pppdVar5 = &ppdStack_140;
      }
      FUN_1092b4db8(lVar11 + 0x7540,pppdVar5,pcVar4);
      pppdVar5 = (double ***)ppdStack_140;
      if ((char)bStack_129 < '\0') goto LAB_1098fc7e4;
      goto LAB_1098fc7e8;
    }
    lStack_e0 = (long)(dVar13 + dVar13);
    lStack_d8 = (long)(dVar14 + dVar14);
    ppdStack_118 = (double **)0x0;
    ppuStack_110 = (ulong **)0x0;
    ppdStack_120 = (double **)0x0;
    FUN_1092d4cc8(&ppdStack_120,&lStack_e0,&uStack_d0,2);
    ppdVar15 = (double **)*ppdStack_120;
    ppdVar16 = (double **)ppdStack_120[1];
    puVar9 = puVar10;
    FUN_1098ff96c(puVar10,&ppdStack_120);
    if (((ulong)puVar9 & 1) == 0) {
      lStack_e0 = 0;
      uStack_88 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_90 = 0;
      FUN_1099a9f0c(&lStack_e0,&UNK_10f5893fe,0x65,2,FUN_1099aa768,0);
      lVar11 = lStack_d8;
      puStack_f8 = (ulong *)&UNK_10f58967b;
      if (param_3 == 0) {
        puStack_f8 = (ulong *)&UNK_10f5893d8;
      }
      ppuStack_f0 = &puStack_f8;
      pcStack_e8 = FUN_1098c25fc;
      FUN_1099ade68(&ppdStack_140,&UNK_10f58965e,0x1c,0xf,&ppuStack_f0);
      pcVar4 = pcStack_138;
      pppdVar5 = (double ***)ppdStack_140;
      if (-1 < (char)bStack_129) {
        pcVar4 = (code *)(ulong)bStack_129;
        pppdVar5 = &ppdStack_140;
      }
      FUN_1092b4db8(lVar11 + 0x7540,pppdVar5,pcVar4);
      if ((char)bStack_129 < '\0') {
        __ZdlPv(ppdStack_140);
      }
      FUN_1099ab3b0(&lStack_e0);
    }
    else {
      lVar12 = (long)(double)ppdVar15 * (long)(double)ppdVar16;
      lVar7 = lVar12 * 2 + 6;
      uVar8 = lVar7 + uVar1;
      if ((long)uVar8 < 1) {
        lVar6 = 0;
        if (param_3 != 0) goto LAB_1098fc8c0;
LAB_1098fc9c0:
        if (uVar1 != 0) {
          _memcpy(lVar6,*puVar10,lVar11 * 0x10 + 0x30);
        }
        if (lVar7 != 0) {
          lVar7 = lVar6 + uVar1 * 8;
          pppdVar5 = (double ***)ppdStack_120;
          goto LAB_1098fc9e8;
        }
      }
      else {
        if (uVar8 >> 0x3d != 0) goto LAB_1098fca20;
        lVar6 = uVar8 * 8;
        _malloc();
        if (lVar6 == 0) goto LAB_1098fca20;
        if (param_3 == 0) goto LAB_1098fc9c0;
LAB_1098fc8c0:
        if (lVar7 != 0) {
          _memcpy(lVar6,ppdStack_120,lVar12 * 0x10 + 0x30);
        }
        if (uVar1 != 0) {
          lVar7 = lVar6 + lVar7 * 8;
          pppdVar5 = (double ***)*puVar10;
          lVar12 = lVar11;
LAB_1098fc9e8:
          _memcpy(lVar7,pppdVar5,lVar12 * 0x10 + 0x30);
        }
      }
      FUN_1098fc2d8(param_2,lVar6,uVar8);
      _free(lVar6);
    }
    if ((double ***)ppdStack_120 != (double ***)0x0) {
      ppdStack_118 = ppdStack_120;
      __ZdlPv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return puVar9;
  }
  ___stack_chk_fail();
LAB_1098fca20:
  ___cxa_allocate_exception(8);
  __ZNSt9bad_allocC1Ev();
  ___cxa_throw();
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1098fca44);
  (*pcVar4)();
}



/* Entry: 1098fcad8; end: 1098fcb93;  */

undefined8 * FUN_1098fcad8(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 uStack_78;
  undefined1 auStack_70 [9];
  undefined7 uStack_67;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  auStack_70._0_4_ = 0x8000;
  auStack_70[4] = 0x20;
  auStack_70._5_4_ = 0;
  uStack_67 = 0xffffffff000000;
  puVar2 = auStack_70;
  FUN_1098f9d18();
  lVar1 = *param_2;
  *param_2 = (long)puVar2;
  param_2[1] = param_2[1] + (lVar1 - (long)puVar2);
  uStack_78 = *(undefined8 *)*param_1;
  puVar3 = (undefined8 *)auStack_70;
  FUN_1098f9d44(puVar3,&uStack_78,param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar3;
  }
  ___stack_chk_fail();
  *puVar3 = &PTR_FUN_110b1cef8;
  FUN_10939cea4(puVar3 + 0x1a);
  FUN_10939cea4(puVar3 + 0xc);
  _free(puVar3[1]);
  return puVar3;
}



/* Entry: 1098fcb94; end: 1098fcc13;  */

undefined8 * FUN_1098fcb94(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b1cef8;
  FUN_10939cea4(param_1 + 0x1a);
  FUN_10939cea4(param_1 + 0xc);
  _free(param_1[1]);
  return param_1;
}



/* Entry: 1098fcc14; end: 1098fcc1b;  */

undefined8 FUN_1098fcc14(void)

{
  return 10;
}



/* Entry: 1098fcc1c; end: 1098fcca3;  */

/* WARNING: Removing unreachable block (ram,0x0001098fd3f4) */

void FUN_1098fcc1c(long *param_1,long param_2)

{
  double *pdVar1;
  double *pdVar2;
  code *pcVar3;
  double ***pppdVar4;
  undefined1 auVar5 [16];
  double *****pppppdVar6;
  double ****ppppdVar7;
  bool bVar8;
  bool bVar9;
  double ****ppppdVar10;
  undefined8 *extraout_x8;
  int iVar11;
  int iVar12;
  long lVar13;
  ulong uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  int iVar31;
  double dVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  long lVar35;
  double dVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  long lVar42;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  double ***pppdStack_130;
  code *pcStack_128;
  byte bStack_119;
  undefined8 uStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined8 uStack_b8;
  double dStack_b0;
  double dStack_a8;
  double *pdStack_a0;
  double ***pppdStack_98;
  double ****ppppdStack_90;
  code *pcStack_88;
  double **ppdStack_80;
  code *pcStack_78;
  
  uVar14 = *(ulong *)(param_2 + 0x10);
  if (uVar14 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  if (uVar14 >> 0x3d == 0) {
    lVar13 = uVar14 << 3;
    _malloc();
    if (lVar13 != 0) {
      *param_1 = lVar13;
      param_1[1] = uVar14;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)();
      return;
    }
  }
  lVar13 = 8;
  ___cxa_allocate_exception();
  __ZNSt9bad_allocC1Ev();
  ppppdVar10 = (double ****)PTR___ZTISt9bad_alloc_110346a68;
  ___cxa_throw();
  pdVar1 = (double *)(lVar13 + 0x88);
  dStack_b0 = (double)*ppppdVar10 * *(double *)(lVar13 + 0x98) + *(double *)(lVar13 + 0xa8);
  dStack_a8 = (double)ppppdVar10[1] * *(double *)(lVar13 + 0xa0) + *(double *)(lVar13 + 0xb0);
  pppdStack_98 = (double ***)ppppdVar10;
  if ((ulong)ABS(dStack_b0) < 0x7ff0000000000000 && (ulong)ABS(dStack_a8) < 0x7ff0000000000000) {
    if ((*pdVar1 < 2.0) || (*(double *)(lVar13 + 0x90) < 2.0)) {
      if (piRam000000011373c5f0 == (int *)0x0) {
        uVar14 = 0;
        FUN_1099adbb8(0x11373c5f0,0x11382bb14,&UNK_10f589688,3);
        if ((uVar14 & 1) != 0) goto LAB_1098fd354;
      }
      else if (2 < *piRam000000011373c5f0) {
LAB_1098fd354:
        uStack_110 = 0;
        uStack_b8 = 0;
        uStack_f8 = 0;
        uStack_100 = 0;
        uStack_e8 = 0;
        uStack_f0 = 0;
        uStack_d8 = 0;
        uStack_e0 = 0;
        uStack_c8 = 0;
        uStack_d0 = 0;
        uStack_c0 = 0;
        FUN_1099a9f0c(&uStack_110,&UNK_10f589688,0x189,0,FUN_1099aa768,0);
        pppdStack_130 = (double ***)&pppdStack_98;
        pcStack_128 = FUN_1098fd70c;
        FUN_1099ade68(&ppppdStack_90,&UNK_10f58978c,0x36,0xf,&pppdStack_130);
        pcVar3 = pcStack_88;
        pppppdVar6 = (double *****)ppppdStack_90;
        if (-1 < (long)ppdStack_80) {
          pcVar3 = (code *)((ulong)ppdStack_80 >> 0x38);
          pppppdVar6 = &ppppdStack_90;
        }
        FUN_1092b4db8(lStack_108 + 0x7540,pppppdVar6,pcVar3);
        goto LAB_1098fd3fc;
      }
    }
    else {
      bVar8 = false;
      bVar9 = false;
      if (0.0 <= dStack_b0) {
        bVar8 = false;
        bVar9 = true;
        if (!NAN(dStack_a8)) {
          bVar8 = dStack_a8 < 1.0;
          bVar9 = false;
        }
      }
      if (bVar8 != bVar9) {
        bVar8 = false;
        bVar9 = false;
        if (0.0 <= dStack_a8) {
          bVar8 = false;
          bVar9 = true;
          if (!NAN(dStack_b0)) {
            bVar8 = dStack_b0 < 1.0;
            bVar9 = false;
          }
        }
        if (bVar8 != bVar9) {
          auVar37 = NEON_fmov(0xbff0000000000000,8);
          dStack_b0 = dStack_b0 * (*pdVar1 + auVar37._0_8_);
          dStack_a8 = dStack_a8 * (*(double *)(lVar13 + 0x90) + auVar37._8_8_);
          iVar11 = (int)dStack_b0;
          iVar12 = (int)dStack_a8;
          dStack_b0 = dStack_b0 - (double)iVar11;
          dStack_a8 = dStack_a8 - (double)iVar12;
          pdVar1 = (double *)
                   (*(long *)(lVar13 + 200) + (long)iVar11 * 0x10 +
                   (long)(*(int *)(lVar13 + 0xc0) * iVar12) * 0x10);
          pdVar2 = pdVar1 + (long)*(int *)(lVar13 + 0xc0) * 2;
          dVar36 = *pdVar1 + (pdVar1[2] - *pdVar1) * dStack_b0;
          dVar44 = pdVar1[1] + (pdVar1[3] - pdVar1[1]) * dStack_b0;
          dVar36 = dVar36 + ((*pdVar2 + (pdVar2[2] - *pdVar2) * dStack_b0) - dVar36) * dStack_a8;
          uVar15 = SUB81(dVar36,0);
          uVar16 = (undefined1)((ulong)dVar36 >> 8);
          uVar17 = (undefined1)((ulong)dVar36 >> 0x10);
          uVar18 = (undefined1)((ulong)dVar36 >> 0x18);
          uVar19 = (undefined1)((ulong)dVar36 >> 0x20);
          uVar20 = (undefined1)((ulong)dVar36 >> 0x28);
          uVar21 = (undefined1)((ulong)dVar36 >> 0x30);
          uVar22 = (undefined1)((ulong)dVar36 >> 0x38);
          dVar44 = dVar44 + ((pdVar2[1] + (pdVar2[3] - pdVar2[1]) * dStack_b0) - dVar44) * dStack_a8
          ;
          uVar23 = SUB81(dVar44,0);
          uVar24 = (undefined1)((ulong)dVar44 >> 8);
          uVar25 = (undefined1)((ulong)dVar44 >> 0x10);
          uVar26 = (undefined1)((ulong)dVar44 >> 0x18);
          uVar27 = (undefined1)((ulong)dVar44 >> 0x20);
          uVar28 = (undefined1)((ulong)dVar44 >> 0x28);
          uVar29 = (undefined1)((ulong)dVar44 >> 0x30);
          uVar30 = (undefined1)((ulong)dVar44 >> 0x38);
          goto LAB_1098fd408;
        }
      }
      if (*(char *)(lVar13 + 0xf0) != '\0') {
        auVar37 = NEON_fmov(0xbff0000000000000,8);
        dStack_b0 = dStack_b0 * (*pdVar1 + auVar37._0_8_);
        dStack_a8 = dStack_a8 * (*(double *)(lVar13 + 0x90) + auVar37._8_8_);
        auVar38._0_8_ = (double)(long)dStack_b0;
        auVar38._8_8_ = (double)(long)dStack_a8;
        auVar33._0_8_ = (long)((int)(long)*pdVar1 + -2);
        auVar33._8_8_ = (long)((int)(long)*(double *)(lVar13 + 0x90) + -2);
        auVar37 = NEON_scvtf(auVar33,8);
        lVar35 = -(ulong)(auVar37._8_8_ < auVar38._8_8_);
        auVar40[8] = (char)lVar35;
        auVar40._0_8_ = -(ulong)(auVar37._0_8_ < auVar38._0_8_);
        auVar40[9] = (char)((ulong)lVar35 >> 8);
        auVar40[10] = (char)((ulong)lVar35 >> 0x10);
        auVar40[0xb] = (char)((ulong)lVar35 >> 0x18);
        auVar40[0xc] = (char)((ulong)lVar35 >> 0x20);
        auVar40[0xd] = (char)((ulong)lVar35 >> 0x28);
        auVar40[0xe] = (char)((ulong)lVar35 >> 0x30);
        auVar40[0xf] = (char)((ulong)lVar35 >> 0x38);
        auVar37 = auVar37 ^ (auVar37 ^ auVar38) & ~auVar40;
        lVar35 = -(ulong)(auVar38._0_8_ < 0.0);
        lVar42 = -(ulong)(auVar38._8_8_ < 0.0);
        auVar34._0_8_ =
             (double)CONCAT17(auVar37[7] & ~(byte)((ulong)lVar35 >> 0x38),
                              CONCAT16(auVar37[6] & ~(byte)((ulong)lVar35 >> 0x30),
                                       CONCAT15(auVar37[5] & ~(byte)((ulong)lVar35 >> 0x28),
                                                CONCAT14(auVar37[4] & ~(byte)((ulong)lVar35 >> 0x20)
                                                         ,CONCAT13(auVar37[3] &
                                                                   ~(byte)((ulong)lVar35 >> 0x18),
                                                                   CONCAT12(auVar37[2] &
                                                                            ~(byte)((ulong)lVar35 >>
                                                                                   0x10),
                                                                            CONCAT11(auVar37[1] &
                                                                                     ~(byte)((ulong)
                                                  lVar35 >> 8),auVar37[0] & ~(byte)lVar35)))))));
        auVar34[8] = auVar37[8] & ~(byte)lVar42;
        auVar34[9] = auVar37[9] & ~(byte)((ulong)lVar42 >> 8);
        auVar34[10] = auVar37[10] & ~(byte)((ulong)lVar42 >> 0x10);
        auVar34[0xb] = auVar37[0xb] & ~(byte)((ulong)lVar42 >> 0x18);
        auVar34[0xc] = auVar37[0xc] & ~(byte)((ulong)lVar42 >> 0x20);
        auVar34[0xd] = auVar37[0xd] & ~(byte)((ulong)lVar42 >> 0x28);
        auVar34[0xe] = auVar37[0xe] & ~(byte)((ulong)lVar42 >> 0x30);
        auVar34[0xf] = auVar37[0xf] & ~(byte)((ulong)lVar42 >> 0x38);
        iVar31 = (int)(long)auVar34._0_8_;
        iVar12 = (int)(long)auVar34._8_8_;
        auVar39._0_8_ = (long)iVar31;
        auVar39._8_8_ = (long)iVar12;
        auVar37 = NEON_scvtf(auVar39,8);
        dStack_b0 = dStack_b0 - auVar37._0_8_;
        dStack_a8 = dStack_a8 - auVar37._8_8_;
        auVar40 = NEON_fmov(0x3ff0000000000000,8);
        lVar35 = -(ulong)(auVar40._8_8_ < dStack_a8);
        auVar37[8] = SUB81(dStack_a8,0);
        auVar37._0_8_ = dStack_b0;
        auVar37[9] = (char)((ulong)dStack_a8 >> 8);
        auVar37[10] = (char)((ulong)dStack_a8 >> 0x10);
        auVar37[0xb] = (char)((ulong)dStack_a8 >> 0x18);
        auVar37[0xc] = (char)((ulong)dStack_a8 >> 0x20);
        auVar37[0xd] = (char)((ulong)dStack_a8 >> 0x28);
        auVar37[0xe] = (char)((ulong)dStack_a8 >> 0x30);
        auVar37[0xf] = (char)((ulong)dStack_a8 >> 0x38);
        auVar5[8] = (char)lVar35;
        auVar5._0_8_ = -(ulong)(auVar40._0_8_ < dStack_b0);
        auVar5[9] = (char)((ulong)lVar35 >> 8);
        auVar5[10] = (char)((ulong)lVar35 >> 0x10);
        auVar5[0xb] = (char)((ulong)lVar35 >> 0x18);
        auVar5[0xc] = (char)((ulong)lVar35 >> 0x20);
        auVar5[0xd] = (char)((ulong)lVar35 >> 0x28);
        auVar5[0xe] = (char)((ulong)lVar35 >> 0x30);
        auVar5[0xf] = (char)((ulong)lVar35 >> 0x38);
        auVar40 = auVar40 ^ (auVar40 ^ auVar37) & ~auVar5;
        lVar35 = -(ulong)(dStack_b0 < 0.0);
        lVar42 = -(ulong)(dStack_a8 < 0.0);
        auVar41._0_8_ =
             (double)CONCAT17(auVar40[7] & ~(byte)((ulong)lVar35 >> 0x38),
                              CONCAT16(auVar40[6] & ~(byte)((ulong)lVar35 >> 0x30),
                                       CONCAT15(auVar40[5] & ~(byte)((ulong)lVar35 >> 0x28),
                                                CONCAT14(auVar40[4] & ~(byte)((ulong)lVar35 >> 0x20)
                                                         ,CONCAT13(auVar40[3] &
                                                                   ~(byte)((ulong)lVar35 >> 0x18),
                                                                   CONCAT12(auVar40[2] &
                                                                            ~(byte)((ulong)lVar35 >>
                                                                                   0x10),
                                                                            CONCAT11(auVar40[1] &
                                                                                     ~(byte)((ulong)
                                                  lVar35 >> 8),auVar40[0] & ~(byte)lVar35)))))));
        auVar41[8] = auVar40[8] & ~(byte)lVar42;
        auVar41[9] = auVar40[9] & ~(byte)((ulong)lVar42 >> 8);
        auVar41[10] = auVar40[10] & ~(byte)((ulong)lVar42 >> 0x10);
        auVar41[0xb] = auVar40[0xb] & ~(byte)((ulong)lVar42 >> 0x18);
        auVar41[0xc] = auVar40[0xc] & ~(byte)((ulong)lVar42 >> 0x20);
        auVar41[0xd] = auVar40[0xd] & ~(byte)((ulong)lVar42 >> 0x28);
        auVar41[0xe] = auVar40[0xe] & ~(byte)((ulong)lVar42 >> 0x30);
        auVar41[0xf] = auVar40[0xf] & ~(byte)((ulong)lVar42 >> 0x38);
        lVar35 = *(long *)(lVar13 + 200);
        iVar12 = *(int *)(lVar13 + 0xc0) * iVar12;
        iVar11 = *(int *)(lVar13 + 0xc0) + iVar12;
        dVar44 = 1.0 - auVar41._0_8_;
        dVar43 = auVar41._8_8_;
        dVar32 = 1.0 - dVar43;
        pdVar1 = (double *)(lVar35 + (long)(iVar12 + iVar31) * 0x10);
        dVar49 = pdVar1[1];
        dVar48 = *pdVar1;
        pdVar1 = (double *)(lVar35 + (long)(iVar12 + iVar31 + 1) * 0x10);
        dVar51 = pdVar1[1];
        dVar50 = *pdVar1;
        pdVar1 = (double *)(lVar35 + (long)(iVar11 + iVar31) * 0x10);
        dVar45 = pdVar1[1];
        dVar36 = *pdVar1;
        pdVar1 = (double *)(lVar35 + (long)(iVar11 + iVar31 + 1) * 0x10);
        dVar47 = pdVar1[1];
        dVar46 = *pdVar1;
        dVar36 = ((dVar46 - dVar50) * auVar41._0_8_ + (dVar36 - dVar48) * dVar44) *
                 (dStack_a8 - dVar43) +
                 ((dVar46 - dVar36) * dVar43 + (dVar50 - dVar48) * dVar32) *
                 (dStack_b0 - auVar41._0_8_) +
                 dVar46 * auVar41._0_8_ * dVar43 +
                 dVar36 * dVar44 * dVar43 +
                 dVar48 * dVar44 * dVar32 + dVar50 * dVar32 * auVar41._0_8_;
        uVar15 = SUB81(dVar36,0);
        uVar16 = (undefined1)((ulong)dVar36 >> 8);
        uVar17 = (undefined1)((ulong)dVar36 >> 0x10);
        uVar18 = (undefined1)((ulong)dVar36 >> 0x18);
        uVar19 = (undefined1)((ulong)dVar36 >> 0x20);
        uVar20 = (undefined1)((ulong)dVar36 >> 0x28);
        uVar21 = (undefined1)((ulong)dVar36 >> 0x30);
        uVar22 = (undefined1)((ulong)dVar36 >> 0x38);
        dVar36 = ((dVar47 - dVar51) * auVar41._0_8_ + (dVar45 - dVar49) * dVar44) *
                 (dStack_a8 - dVar43) +
                 ((dVar47 - dVar45) * dVar43 + (dVar51 - dVar49) * dVar32) *
                 (dStack_b0 - auVar41._0_8_) +
                 dVar47 * auVar41._0_8_ * dVar43 +
                 dVar45 * dVar44 * dVar43 +
                 dVar49 * dVar44 * dVar32 + dVar51 * dVar32 * auVar41._0_8_;
        uVar23 = SUB81(dVar36,0);
        uVar24 = (undefined1)((ulong)dVar36 >> 8);
        uVar25 = (undefined1)((ulong)dVar36 >> 0x10);
        uVar26 = (undefined1)((ulong)dVar36 >> 0x18);
        uVar27 = (undefined1)((ulong)dVar36 >> 0x20);
        uVar28 = (undefined1)((ulong)dVar36 >> 0x28);
        uVar29 = (undefined1)((ulong)dVar36 >> 0x30);
        uVar30 = (undefined1)((ulong)dVar36 >> 0x38);
        goto LAB_1098fd408;
      }
      if (piRam000000011373c610 == (int *)0x0) {
        uVar14 = 0;
        FUN_1099adbb8(0x11373c610,0x11382bb14,&UNK_10f589688,3);
        if ((uVar14 & 1) != 0) goto LAB_1098fd61c;
      }
      else if (2 < *piRam000000011373c610) {
LAB_1098fd61c:
        uStack_110 = 0;
        uStack_b8 = 0;
        uStack_f8 = 0;
        uStack_100 = 0;
        uStack_e8 = 0;
        uStack_f0 = 0;
        uStack_d8 = 0;
        uStack_e0 = 0;
        uStack_c8 = 0;
        uStack_d0 = 0;
        uStack_c0 = 0;
        FUN_1099a9f0c(&uStack_110,&UNK_10f589688,0x191,0,FUN_1099aa768,0);
        pdStack_a0 = &dStack_b0;
        ppppdStack_90 = &pppdStack_98;
        pcStack_88 = FUN_1098fd70c;
        ppdStack_80 = &pdStack_a0;
        pcStack_78 = FUN_1098fd70c;
        FUN_1099ade68(&pppdStack_130,&UNK_10f5897c3,0x57,0xff,&ppppdStack_90);
        pcVar3 = pcStack_128;
        ppppdVar7 = (double ****)pppdStack_130;
        if (-1 < (char)bStack_119) {
          pcVar3 = (code *)(ulong)bStack_119;
          ppppdVar7 = &pppdStack_130;
        }
        FUN_1092b4db8(lStack_108 + 0x7540,ppppdVar7,pcVar3);
        if ((char)bStack_119 < '\0') {
          __ZdlPv(pppdStack_130);
        }
        goto LAB_1098fd3fc;
      }
    }
  }
  else if (piRam000000011373c5d0 == (int *)0x0) {
    uVar14 = 0;
    FUN_1099adbb8(0x11373c5d0,0x11382bb14,&UNK_10f589688,3);
    if ((uVar14 & 1) != 0) goto LAB_1098fd294;
  }
  else if (2 < *piRam000000011373c5d0) {
LAB_1098fd294:
    uStack_110 = 0;
    uStack_b8 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_c0 = 0;
    FUN_1099a9f0c(&uStack_110,&UNK_10f589688,0x17f,0,FUN_1099aa768,0);
    pppdStack_130 = (double ***)&pppdStack_98;
    pcStack_128 = FUN_1098fd70c;
    FUN_1099ade68(&ppppdStack_90,&UNK_10f589755,0x36,0xf,&pppdStack_130);
    pcVar3 = pcStack_88;
    pppppdVar6 = (double *****)ppppdStack_90;
    if (-1 < (long)ppdStack_80) {
      pcVar3 = (code *)((ulong)ppdStack_80 >> 0x38);
      pppppdVar6 = &ppppdStack_90;
    }
    FUN_1092b4db8(lStack_108 + 0x7540,pppppdVar6,pcVar3);
LAB_1098fd3fc:
    FUN_1099ab3b0(&uStack_110);
  }
  pppdVar4 = ppppdVar10[1];
  uVar23 = SUB81(pppdVar4,0);
  uVar24 = (undefined1)((ulong)pppdVar4 >> 8);
  uVar25 = (undefined1)((ulong)pppdVar4 >> 0x10);
  uVar26 = (undefined1)((ulong)pppdVar4 >> 0x18);
  uVar27 = (undefined1)((ulong)pppdVar4 >> 0x20);
  uVar28 = (undefined1)((ulong)pppdVar4 >> 0x28);
  uVar29 = (undefined1)((ulong)pppdVar4 >> 0x30);
  uVar30 = (undefined1)((ulong)pppdVar4 >> 0x38);
  pppdVar4 = *ppppdVar10;
  uVar15 = SUB81(pppdVar4,0);
  uVar16 = (undefined1)((ulong)pppdVar4 >> 8);
  uVar17 = (undefined1)((ulong)pppdVar4 >> 0x10);
  uVar18 = (undefined1)((ulong)pppdVar4 >> 0x18);
  uVar19 = (undefined1)((ulong)pppdVar4 >> 0x20);
  uVar20 = (undefined1)((ulong)pppdVar4 >> 0x28);
  uVar21 = (undefined1)((ulong)pppdVar4 >> 0x30);
  uVar22 = (undefined1)((ulong)pppdVar4 >> 0x38);
LAB_1098fd408:
  extraout_x8[1] =
       CONCAT17(uVar30,CONCAT16(uVar29,CONCAT15(uVar28,CONCAT14(uVar27,CONCAT13(uVar26,CONCAT12(
                                                  uVar25,CONCAT11(uVar24,uVar23)))))));
  *extraout_x8 = CONCAT17(uVar22,CONCAT16(uVar21,CONCAT15(uVar20,CONCAT14(uVar19,CONCAT13(uVar18,
                                                  CONCAT12(uVar17,CONCAT11(uVar16,uVar15)))))));
  return;
}



/* Entry: 1098fcca4; end: 1098fcce3;  */

/* WARNING: Removing unreachable block (ram,0x0001098fd3f4) */

void FUN_1098fcca4(undefined8 *param_1,long param_2,double ****param_3)

{
  double *pdVar1;
  double *pdVar2;
  code *pcVar3;
  double ***pppdVar4;
  undefined1 auVar5 [16];
  double *****pppppdVar6;
  double ****ppppdVar7;
  bool bVar8;
  bool bVar9;
  ulong uVar10;
  int iVar11;
  int iVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  int iVar29;
  double dVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  long lVar33;
  double dVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  long lVar40;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  double ***pppdStack_100;
  code *pcStack_f8;
  byte bStack_e9;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_88;
  double dStack_80;
  double dStack_78;
  double *pdStack_70;
  double ***pppdStack_68;
  double ****ppppdStack_60;
  code *pcStack_58;
  double **ppdStack_50;
  code *pcStack_48;
  
  pdVar1 = (double *)(param_2 + 0x88);
  dStack_80 = (double)*param_3 * *(double *)(param_2 + 0x98) + *(double *)(param_2 + 0xa8);
  dStack_78 = (double)param_3[1] * *(double *)(param_2 + 0xa0) + *(double *)(param_2 + 0xb0);
  pppdStack_68 = (double ***)param_3;
  if ((ulong)ABS(dStack_80) < 0x7ff0000000000000 && (ulong)ABS(dStack_78) < 0x7ff0000000000000) {
    if ((*pdVar1 < 2.0) || (*(double *)(param_2 + 0x90) < 2.0)) {
      if (piRam000000011373c5f0 == (int *)0x0) {
        uVar10 = 0;
        FUN_1099adbb8(0x11373c5f0,0x11382bb14,&UNK_10f589688,3);
        if ((uVar10 & 1) != 0) goto LAB_1098fd354;
      }
      else if (2 < *piRam000000011373c5f0) {
LAB_1098fd354:
        uStack_e0 = 0;
        uStack_88 = 0;
        uStack_c8 = 0;
        uStack_d0 = 0;
        uStack_b8 = 0;
        uStack_c0 = 0;
        uStack_a8 = 0;
        uStack_b0 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
        uStack_90 = 0;
        FUN_1099a9f0c(&uStack_e0,&UNK_10f589688,0x189,0,FUN_1099aa768,0);
        pppdStack_100 = (double ***)&pppdStack_68;
        pcStack_f8 = FUN_1098fd70c;
        FUN_1099ade68(&ppppdStack_60,&UNK_10f58978c,0x36,0xf,&pppdStack_100);
        pcVar3 = pcStack_58;
        pppppdVar6 = (double *****)ppppdStack_60;
        if (-1 < (long)ppdStack_50) {
          pcVar3 = (code *)((ulong)ppdStack_50 >> 0x38);
          pppppdVar6 = &ppppdStack_60;
        }
        FUN_1092b4db8(lStack_d8 + 0x7540,pppppdVar6,pcVar3);
        goto LAB_1098fd3fc;
      }
    }
    else {
      bVar8 = false;
      bVar9 = false;
      if (0.0 <= dStack_80) {
        bVar8 = false;
        bVar9 = true;
        if (!NAN(dStack_78)) {
          bVar8 = dStack_78 < 1.0;
          bVar9 = false;
        }
      }
      if (bVar8 != bVar9) {
        bVar8 = false;
        bVar9 = false;
        if (0.0 <= dStack_78) {
          bVar8 = false;
          bVar9 = true;
          if (!NAN(dStack_80)) {
            bVar8 = dStack_80 < 1.0;
            bVar9 = false;
          }
        }
        if (bVar8 != bVar9) {
          auVar35 = NEON_fmov(0xbff0000000000000,8);
          dStack_80 = dStack_80 * (*pdVar1 + auVar35._0_8_);
          dStack_78 = dStack_78 * (*(double *)(param_2 + 0x90) + auVar35._8_8_);
          iVar11 = (int)dStack_80;
          iVar12 = (int)dStack_78;
          dStack_80 = dStack_80 - (double)iVar11;
          dStack_78 = dStack_78 - (double)iVar12;
          pdVar1 = (double *)
                   (*(long *)(param_2 + 200) + (long)iVar11 * 0x10 +
                   (long)(*(int *)(param_2 + 0xc0) * iVar12) * 0x10);
          pdVar2 = pdVar1 + (long)*(int *)(param_2 + 0xc0) * 2;
          dVar34 = *pdVar1 + (pdVar1[2] - *pdVar1) * dStack_80;
          dVar42 = pdVar1[1] + (pdVar1[3] - pdVar1[1]) * dStack_80;
          dVar34 = dVar34 + ((*pdVar2 + (pdVar2[2] - *pdVar2) * dStack_80) - dVar34) * dStack_78;
          uVar13 = SUB81(dVar34,0);
          uVar14 = (undefined1)((ulong)dVar34 >> 8);
          uVar15 = (undefined1)((ulong)dVar34 >> 0x10);
          uVar16 = (undefined1)((ulong)dVar34 >> 0x18);
          uVar17 = (undefined1)((ulong)dVar34 >> 0x20);
          uVar18 = (undefined1)((ulong)dVar34 >> 0x28);
          uVar19 = (undefined1)((ulong)dVar34 >> 0x30);
          uVar20 = (undefined1)((ulong)dVar34 >> 0x38);
          dVar42 = dVar42 + ((pdVar2[1] + (pdVar2[3] - pdVar2[1]) * dStack_80) - dVar42) * dStack_78
          ;
          uVar21 = SUB81(dVar42,0);
          uVar22 = (undefined1)((ulong)dVar42 >> 8);
          uVar23 = (undefined1)((ulong)dVar42 >> 0x10);
          uVar24 = (undefined1)((ulong)dVar42 >> 0x18);
          uVar25 = (undefined1)((ulong)dVar42 >> 0x20);
          uVar26 = (undefined1)((ulong)dVar42 >> 0x28);
          uVar27 = (undefined1)((ulong)dVar42 >> 0x30);
          uVar28 = (undefined1)((ulong)dVar42 >> 0x38);
          goto LAB_1098fd408;
        }
      }
      if (*(char *)(param_2 + 0xf0) != '\0') {
        auVar35 = NEON_fmov(0xbff0000000000000,8);
        dStack_80 = dStack_80 * (*pdVar1 + auVar35._0_8_);
        dStack_78 = dStack_78 * (*(double *)(param_2 + 0x90) + auVar35._8_8_);
        auVar36._0_8_ = (double)(long)dStack_80;
        auVar36._8_8_ = (double)(long)dStack_78;
        auVar31._0_8_ = (long)((int)(long)*pdVar1 + -2);
        auVar31._8_8_ = (long)((int)(long)*(double *)(param_2 + 0x90) + -2);
        auVar35 = NEON_scvtf(auVar31,8);
        lVar33 = -(ulong)(auVar35._8_8_ < auVar36._8_8_);
        auVar38[8] = (char)lVar33;
        auVar38._0_8_ = -(ulong)(auVar35._0_8_ < auVar36._0_8_);
        auVar38[9] = (char)((ulong)lVar33 >> 8);
        auVar38[10] = (char)((ulong)lVar33 >> 0x10);
        auVar38[0xb] = (char)((ulong)lVar33 >> 0x18);
        auVar38[0xc] = (char)((ulong)lVar33 >> 0x20);
        auVar38[0xd] = (char)((ulong)lVar33 >> 0x28);
        auVar38[0xe] = (char)((ulong)lVar33 >> 0x30);
        auVar38[0xf] = (char)((ulong)lVar33 >> 0x38);
        auVar35 = auVar35 ^ (auVar35 ^ auVar36) & ~auVar38;
        lVar33 = -(ulong)(auVar36._0_8_ < 0.0);
        lVar40 = -(ulong)(auVar36._8_8_ < 0.0);
        auVar32._0_8_ =
             (double)CONCAT17(auVar35[7] & ~(byte)((ulong)lVar33 >> 0x38),
                              CONCAT16(auVar35[6] & ~(byte)((ulong)lVar33 >> 0x30),
                                       CONCAT15(auVar35[5] & ~(byte)((ulong)lVar33 >> 0x28),
                                                CONCAT14(auVar35[4] & ~(byte)((ulong)lVar33 >> 0x20)
                                                         ,CONCAT13(auVar35[3] &
                                                                   ~(byte)((ulong)lVar33 >> 0x18),
                                                                   CONCAT12(auVar35[2] &
                                                                            ~(byte)((ulong)lVar33 >>
                                                                                   0x10),
                                                                            CONCAT11(auVar35[1] &
                                                                                     ~(byte)((ulong)
                                                  lVar33 >> 8),auVar35[0] & ~(byte)lVar33)))))));
        auVar32[8] = auVar35[8] & ~(byte)lVar40;
        auVar32[9] = auVar35[9] & ~(byte)((ulong)lVar40 >> 8);
        auVar32[10] = auVar35[10] & ~(byte)((ulong)lVar40 >> 0x10);
        auVar32[0xb] = auVar35[0xb] & ~(byte)((ulong)lVar40 >> 0x18);
        auVar32[0xc] = auVar35[0xc] & ~(byte)((ulong)lVar40 >> 0x20);
        auVar32[0xd] = auVar35[0xd] & ~(byte)((ulong)lVar40 >> 0x28);
        auVar32[0xe] = auVar35[0xe] & ~(byte)((ulong)lVar40 >> 0x30);
        auVar32[0xf] = auVar35[0xf] & ~(byte)((ulong)lVar40 >> 0x38);
        iVar29 = (int)(long)auVar32._0_8_;
        iVar12 = (int)(long)auVar32._8_8_;
        auVar37._0_8_ = (long)iVar29;
        auVar37._8_8_ = (long)iVar12;
        auVar35 = NEON_scvtf(auVar37,8);
        dStack_80 = dStack_80 - auVar35._0_8_;
        dStack_78 = dStack_78 - auVar35._8_8_;
        auVar38 = NEON_fmov(0x3ff0000000000000,8);
        lVar33 = -(ulong)(auVar38._8_8_ < dStack_78);
        auVar35[8] = SUB81(dStack_78,0);
        auVar35._0_8_ = dStack_80;
        auVar35[9] = (char)((ulong)dStack_78 >> 8);
        auVar35[10] = (char)((ulong)dStack_78 >> 0x10);
        auVar35[0xb] = (char)((ulong)dStack_78 >> 0x18);
        auVar35[0xc] = (char)((ulong)dStack_78 >> 0x20);
        auVar35[0xd] = (char)((ulong)dStack_78 >> 0x28);
        auVar35[0xe] = (char)((ulong)dStack_78 >> 0x30);
        auVar35[0xf] = (char)((ulong)dStack_78 >> 0x38);
        auVar5[8] = (char)lVar33;
        auVar5._0_8_ = -(ulong)(auVar38._0_8_ < dStack_80);
        auVar5[9] = (char)((ulong)lVar33 >> 8);
        auVar5[10] = (char)((ulong)lVar33 >> 0x10);
        auVar5[0xb] = (char)((ulong)lVar33 >> 0x18);
        auVar5[0xc] = (char)((ulong)lVar33 >> 0x20);
        auVar5[0xd] = (char)((ulong)lVar33 >> 0x28);
        auVar5[0xe] = (char)((ulong)lVar33 >> 0x30);
        auVar5[0xf] = (char)((ulong)lVar33 >> 0x38);
        auVar38 = auVar38 ^ (auVar38 ^ auVar35) & ~auVar5;
        lVar33 = -(ulong)(dStack_80 < 0.0);
        lVar40 = -(ulong)(dStack_78 < 0.0);
        auVar39._0_8_ =
             (double)CONCAT17(auVar38[7] & ~(byte)((ulong)lVar33 >> 0x38),
                              CONCAT16(auVar38[6] & ~(byte)((ulong)lVar33 >> 0x30),
                                       CONCAT15(auVar38[5] & ~(byte)((ulong)lVar33 >> 0x28),
                                                CONCAT14(auVar38[4] & ~(byte)((ulong)lVar33 >> 0x20)
                                                         ,CONCAT13(auVar38[3] &
                                                                   ~(byte)((ulong)lVar33 >> 0x18),
                                                                   CONCAT12(auVar38[2] &
                                                                            ~(byte)((ulong)lVar33 >>
                                                                                   0x10),
                                                                            CONCAT11(auVar38[1] &
                                                                                     ~(byte)((ulong)
                                                  lVar33 >> 8),auVar38[0] & ~(byte)lVar33)))))));
        auVar39[8] = auVar38[8] & ~(byte)lVar40;
        auVar39[9] = auVar38[9] & ~(byte)((ulong)lVar40 >> 8);
        auVar39[10] = auVar38[10] & ~(byte)((ulong)lVar40 >> 0x10);
        auVar39[0xb] = auVar38[0xb] & ~(byte)((ulong)lVar40 >> 0x18);
        auVar39[0xc] = auVar38[0xc] & ~(byte)((ulong)lVar40 >> 0x20);
        auVar39[0xd] = auVar38[0xd] & ~(byte)((ulong)lVar40 >> 0x28);
        auVar39[0xe] = auVar38[0xe] & ~(byte)((ulong)lVar40 >> 0x30);
        auVar39[0xf] = auVar38[0xf] & ~(byte)((ulong)lVar40 >> 0x38);
        lVar33 = *(long *)(param_2 + 200);
        iVar12 = *(int *)(param_2 + 0xc0) * iVar12;
        iVar11 = *(int *)(param_2 + 0xc0) + iVar12;
        dVar42 = 1.0 - auVar39._0_8_;
        dVar41 = auVar39._8_8_;
        dVar30 = 1.0 - dVar41;
        pdVar1 = (double *)(lVar33 + (long)(iVar12 + iVar29) * 0x10);
        dVar47 = pdVar1[1];
        dVar46 = *pdVar1;
        pdVar1 = (double *)(lVar33 + (long)(iVar12 + iVar29 + 1) * 0x10);
        dVar49 = pdVar1[1];
        dVar48 = *pdVar1;
        pdVar1 = (double *)(lVar33 + (long)(iVar11 + iVar29) * 0x10);
        dVar43 = pdVar1[1];
        dVar34 = *pdVar1;
        pdVar1 = (double *)(lVar33 + (long)(iVar11 + iVar29 + 1) * 0x10);
        dVar45 = pdVar1[1];
        dVar44 = *pdVar1;
        dVar34 = ((dVar44 - dVar48) * auVar39._0_8_ + (dVar34 - dVar46) * dVar42) *
                 (dStack_78 - dVar41) +
                 ((dVar44 - dVar34) * dVar41 + (dVar48 - dVar46) * dVar30) *
                 (dStack_80 - auVar39._0_8_) +
                 dVar44 * auVar39._0_8_ * dVar41 +
                 dVar34 * dVar42 * dVar41 +
                 dVar46 * dVar42 * dVar30 + dVar48 * dVar30 * auVar39._0_8_;
        uVar13 = SUB81(dVar34,0);
        uVar14 = (undefined1)((ulong)dVar34 >> 8);
        uVar15 = (undefined1)((ulong)dVar34 >> 0x10);
        uVar16 = (undefined1)((ulong)dVar34 >> 0x18);
        uVar17 = (undefined1)((ulong)dVar34 >> 0x20);
        uVar18 = (undefined1)((ulong)dVar34 >> 0x28);
        uVar19 = (undefined1)((ulong)dVar34 >> 0x30);
        uVar20 = (undefined1)((ulong)dVar34 >> 0x38);
        dVar34 = ((dVar45 - dVar49) * auVar39._0_8_ + (dVar43 - dVar47) * dVar42) *
                 (dStack_78 - dVar41) +
                 ((dVar45 - dVar43) * dVar41 + (dVar49 - dVar47) * dVar30) *
                 (dStack_80 - auVar39._0_8_) +
                 dVar45 * auVar39._0_8_ * dVar41 +
                 dVar43 * dVar42 * dVar41 +
                 dVar47 * dVar42 * dVar30 + dVar49 * dVar30 * auVar39._0_8_;
        uVar21 = SUB81(dVar34,0);
        uVar22 = (undefined1)((ulong)dVar34 >> 8);
        uVar23 = (undefined1)((ulong)dVar34 >> 0x10);
        uVar24 = (undefined1)((ulong)dVar34 >> 0x18);
        uVar25 = (undefined1)((ulong)dVar34 >> 0x20);
        uVar26 = (undefined1)((ulong)dVar34 >> 0x28);
        uVar27 = (undefined1)((ulong)dVar34 >> 0x30);
        uVar28 = (undefined1)((ulong)dVar34 >> 0x38);
        goto LAB_1098fd408;
      }
      if (piRam000000011373c610 == (int *)0x0) {
        uVar10 = 0;
        FUN_1099adbb8(0x11373c610,0x11382bb14,&UNK_10f589688,3);
        if ((uVar10 & 1) != 0) goto LAB_1098fd61c;
      }
      else if (2 < *piRam000000011373c610) {
LAB_1098fd61c:
        uStack_e0 = 0;
        uStack_88 = 0;
        uStack_c8 = 0;
        uStack_d0 = 0;
        uStack_b8 = 0;
        uStack_c0 = 0;
        uStack_a8 = 0;
        uStack_b0 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
        uStack_90 = 0;
        FUN_1099a9f0c(&uStack_e0,&UNK_10f589688,0x191,0,FUN_1099aa768,0);
        pdStack_70 = &dStack_80;
        ppppdStack_60 = &pppdStack_68;
        pcStack_58 = FUN_1098fd70c;
        ppdStack_50 = &pdStack_70;
        pcStack_48 = FUN_1098fd70c;
        FUN_1099ade68(&pppdStack_100,&UNK_10f5897c3,0x57,0xff,&ppppdStack_60);
        pcVar3 = pcStack_f8;
        ppppdVar7 = (double ****)pppdStack_100;
        if (-1 < (char)bStack_e9) {
          pcVar3 = (code *)(ulong)bStack_e9;
          ppppdVar7 = &pppdStack_100;
        }
        FUN_1092b4db8(lStack_d8 + 0x7540,ppppdVar7,pcVar3);
        if ((char)bStack_e9 < '\0') {
          __ZdlPv(pppdStack_100);
        }
        goto LAB_1098fd3fc;
      }
    }
  }
  else if (piRam000000011373c5d0 == (int *)0x0) {
    uVar10 = 0;
    FUN_1099adbb8(0x11373c5d0,0x11382bb14,&UNK_10f589688,3);
    if ((uVar10 & 1) != 0) goto LAB_1098fd294;
  }
  else if (2 < *piRam000000011373c5d0) {
LAB_1098fd294:
    uStack_e0 = 0;
    uStack_88 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_90 = 0;
    FUN_1099a9f0c(&uStack_e0,&UNK_10f589688,0x17f,0,FUN_1099aa768,0);
    pppdStack_100 = (double ***)&pppdStack_68;
    pcStack_f8 = FUN_1098fd70c;
    FUN_1099ade68(&ppppdStack_60,&UNK_10f589755,0x36,0xf,&pppdStack_100);
    pcVar3 = pcStack_58;
    pppppdVar6 = (double *****)ppppdStack_60;
    if (-1 < (long)ppdStack_50) {
      pcVar3 = (code *)((ulong)ppdStack_50 >> 0x38);
      pppppdVar6 = &ppppdStack_60;
    }
    FUN_1092b4db8(lStack_d8 + 0x7540,pppppdVar6,pcVar3);
LAB_1098fd3fc:
    FUN_1099ab3b0(&uStack_e0);
  }
  pppdVar4 = param_3[1];
  uVar21 = SUB81(pppdVar4,0);
  uVar22 = (undefined1)((ulong)pppdVar4 >> 8);
  uVar23 = (undefined1)((ulong)pppdVar4 >> 0x10);
  uVar24 = (undefined1)((ulong)pppdVar4 >> 0x18);
  uVar25 = (undefined1)((ulong)pppdVar4 >> 0x20);
  uVar26 = (undefined1)((ulong)pppdVar4 >> 0x28);
  uVar27 = (undefined1)((ulong)pppdVar4 >> 0x30);
  uVar28 = (undefined1)((ulong)pppdVar4 >> 0x38);
  pppdVar4 = *param_3;
  uVar13 = SUB81(pppdVar4,0);
  uVar14 = (undefined1)((ulong)pppdVar4 >> 8);
  uVar15 = (undefined1)((ulong)pppdVar4 >> 0x10);
  uVar16 = (undefined1)((ulong)pppdVar4 >> 0x18);
  uVar17 = (undefined1)((ulong)pppdVar4 >> 0x20);
  uVar18 = (undefined1)((ulong)pppdVar4 >> 0x28);
  uVar19 = (undefined1)((ulong)pppdVar4 >> 0x30);
  uVar20 = (undefined1)((ulong)pppdVar4 >> 0x38);
LAB_1098fd408:
  param_1[1] = CONCAT17(uVar28,CONCAT16(uVar27,CONCAT15(uVar26,CONCAT14(uVar25,CONCAT13(uVar24,
                                                  CONCAT12(uVar23,CONCAT11(uVar22,uVar21)))))));
  *param_1 = CONCAT17(uVar20,CONCAT16(uVar19,CONCAT15(uVar18,CONCAT14(uVar17,CONCAT13(uVar16,
                                                  CONCAT12(uVar15,CONCAT11(uVar14,uVar13)))))));
  return;
}



/* Entry: 1098fcce4; end: 1098fcd63;  */

double FUN_1098fcce4(long param_1,undefined8 param_2)

{
  double dStack_30;
  double dStack_28;
  double dStack_20;
  double dStack_18;
  
  FUN_1098fd93c(&dStack_30,param_1 + 0x18,param_2);
  return ABS(-(dStack_28 * dStack_20) + dStack_18 * dStack_30);
}



/* Entry: 1098fcd64; end: 1098fcdff;  */

undefined8 * FUN_1098fcd64(undefined8 param_1,long *param_2,long *param_3)

{
  undefined8 *puVar1;
  undefined8 auStack_48 [2];
  undefined8 auStack_38 [2];
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  (**(code **)(*param_3 + 0x18))(auStack_38,param_3);
  (**(code **)(*param_2 + 0x18))(auStack_48,param_2);
  puVar1 = auStack_38;
  FUN_1093f6610(puVar1,auStack_48,&uStack_28);
  _free(auStack_48[0]);
  _free(auStack_38[0]);
  return puVar1;
}



/* Entry: 1098fce00; end: 1098fce07;  */

undefined8 FUN_1098fce00(void)

{
  return 0;
}



/* Entry: 1098fce08; end: 1098fd003;  */

void FUN_1098fce08(long param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined4 uStack_1d0;
  undefined1 uStack_1c8;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long *plStack_170;
  undefined8 uStack_168;
  undefined4 uStack_160;
  undefined1 uStack_158;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long *plStack_c8;
  undefined1 uStack_b0;
  long *plStack_70;
  undefined1 uStack_58;
  long lStack_50;
  ulong uStack_48;
  
  puVar4 = (undefined8 *)0xc8;
  __Znwm();
  puVar4[1] = 0;
  *puVar4 = 0;
  puVar4[3] = 0;
  puVar4[2] = 0;
  puVar4[5] = 0;
  puVar4[4] = 0;
  puVar4[7] = 0;
  puVar4[6] = 0;
  puVar4[9] = 0;
  puVar4[8] = 0;
  puVar4[0xb] = 0;
  puVar4[10] = 0;
  puVar4[0xd] = 0;
  puVar4[0xc] = 0;
  puVar4[0xf] = 0;
  puVar4[0xe] = 0;
  puVar4[0x11] = 0;
  puVar4[0x10] = 0;
  puVar4[0x13] = 0;
  puVar4[0x12] = 0;
  puVar4[0x15] = 0;
  puVar4[0x14] = 0;
  puVar4[0x17] = 0;
  puVar4[0x16] = 0;
  puVar4[0x18] = 0;
  *puVar4 = &PTR_FUN_110b1cf90;
  FUN_1098ff484(puVar4 + 1,0x11373c5c0);
  lStack_50 = 0;
  uStack_48 = 0;
  uVar10 = *(ulong *)(param_1 + 0x10);
  uVar3 = uStack_48;
  if ((uVar10 != 0) && (uVar3 = uVar10, 0 < (long)uVar10)) {
    if (uVar10 >> 0x3e == 0) {
      lVar5 = uVar10 << 2;
      _malloc();
      if (lVar5 != 0) {
        uVar8 = 0;
        lVar9 = *(long *)(param_1 + 8);
        do {
          *(float *)(lVar5 + uVar8 * 4) = (float)*(double *)(lVar9 + uVar8 * 8);
          uVar8 = uVar8 + 1;
          lStack_50 = lVar5;
        } while (uVar10 != uVar8);
        goto LAB_1098fced0;
      }
    }
    lVar5 = 8;
    ___cxa_allocate_exception();
    __ZNSt9bad_allocC1Ev();
    plVar6 = (long *)PTR___ZTISt9bad_alloc_110346a68;
    ___cxa_throw();
    func_0x0001098f9bd8(&uStack_110);
    __Unwind_Resume();
    puVar4 = (undefined8 *)0xf8;
    __Znwm();
    puVar4[1] = 0;
    *puVar4 = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    puVar4[5] = 0;
    puVar4[4] = 0;
    puVar4[7] = 0;
    puVar4[6] = 0;
    puVar4[9] = 0;
    puVar4[8] = 0;
    puVar4[0xb] = 0;
    puVar4[10] = 0;
    puVar4[0xd] = 0;
    puVar4[0xc] = 0;
    puVar4[0xf] = 0;
    puVar4[0xe] = 0;
    puVar4[0x11] = 0;
    puVar4[0x10] = 0;
    puVar4[0x13] = 0;
    puVar4[0x12] = 0;
    puVar4[0x15] = 0;
    puVar4[0x14] = 0;
    puVar4[0x17] = 0;
    puVar4[0x16] = 0;
    puVar4[0x19] = 0;
    puVar4[0x18] = 0;
    puVar4[0x1b] = 0;
    puVar4[0x1a] = 0;
    puVar4[0x1d] = 0;
    puVar4[0x1c] = 0;
    puVar4[0x1e] = 0;
    *puVar4 = &PTR_FUN_110b1cef8;
    FUN_1098fc25c(puVar4 + 1,0x11373c5b0);
    uStack_240 = 0;
    uStack_238 = 0;
    uStack_1f8 = 0;
    uStack_200 = 0;
    uStack_1e8 = 0;
    uStack_1f0 = 0;
    uStack_1d8 = 0;
    plStack_1e0 = (long *)0x0;
    uStack_1d0 = 0;
    uStack_1c8 = 1;
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    uStack_168 = 0;
    plStack_170 = (long *)0x0;
    uStack_160 = 0;
    uStack_158 = 1;
    FUN_1098fc2d8(&uStack_240,*(undefined8 *)(lVar5 + 8),*(undefined8 *)(lVar5 + 0x10));
    uStack_1c8 = *(undefined1 *)(lVar5 + 0x80);
    uStack_158 = uStack_1c8;
    FUN_1098fc2d8(puVar4 + 1,uStack_240,uStack_238);
    *(undefined1 *)(puVar4 + 0x10) = uStack_1c8;
    *(undefined1 *)(puVar4 + 0x1e) = uStack_1c8;
    plVar7 = (long *)*plVar6;
    *plVar6 = (long)puVar4;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 8))();
    }
    plVar6 = plStack_170;
    if (plStack_170 != (long *)0x0) {
      plVar7 = plStack_170 + 1;
      do {
        lVar5 = *plVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar2) {
          *plVar7 = lVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plStack_170 + 0x10))(plStack_170);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    plVar6 = plStack_1e0;
    if (plStack_1e0 != (long *)0x0) {
      plVar7 = plStack_1e0 + 1;
      do {
        lVar5 = *plVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar2) {
          *plVar7 = lVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plStack_1e0 + 0x10))(plStack_1e0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    _free(uStack_240);
    return;
  }
LAB_1098fced0:
  uStack_48 = uVar3;
  lVar5 = lStack_50;
  FUN_1098ff484(&uStack_110,&lStack_50);
  _free(lVar5);
  uStack_b0 = *(undefined1 *)(param_1 + 0x80);
  uStack_58 = uStack_b0;
  FUN_1098ff158(puVar4 + 1,uStack_110,uStack_108);
  *(undefined1 *)(puVar4 + 0xd) = uStack_b0;
  *(undefined1 *)(puVar4 + 0x18) = uStack_b0;
  plVar6 = (long *)*param_2;
  *param_2 = (long)puVar4;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  if (plStack_70 != (long *)0x0) {
    plVar6 = plStack_70 + 1;
    do {
      lVar5 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_70 + 0x10))(plStack_70);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_70);
    }
  }
  if (plStack_c8 != (long *)0x0) {
    plVar6 = plStack_c8 + 1;
    do {
      lVar5 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_c8);
    }
  }
  _free(uStack_110);
  return;
}



/* Entry: 1098fd004; end: 1098fd1bb;  */

void FUN_1098fd004(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long *plStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined1 uStack_b8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 uStack_48;
  
  puVar4 = (undefined8 *)0xf8;
  __Znwm();
  puVar4[1] = 0;
  *puVar4 = 0;
  puVar4[3] = 0;
  puVar4[2] = 0;
  puVar4[5] = 0;
  puVar4[4] = 0;
  puVar4[7] = 0;
  puVar4[6] = 0;
  puVar4[9] = 0;
  puVar4[8] = 0;
  puVar4[0xb] = 0;
  puVar4[10] = 0;
  puVar4[0xd] = 0;
  puVar4[0xc] = 0;
  puVar4[0xf] = 0;
  puVar4[0xe] = 0;
  puVar4[0x11] = 0;
  puVar4[0x10] = 0;
  puVar4[0x13] = 0;
  puVar4[0x12] = 0;
  puVar4[0x15] = 0;
  puVar4[0x14] = 0;
  puVar4[0x17] = 0;
  puVar4[0x16] = 0;
  puVar4[0x19] = 0;
  puVar4[0x18] = 0;
  puVar4[0x1b] = 0;
  puVar4[0x1a] = 0;
  puVar4[0x1d] = 0;
  puVar4[0x1c] = 0;
  puVar4[0x1e] = 0;
  *puVar4 = &PTR_FUN_110b1cef8;
  FUN_1098fc25c(puVar4 + 1,0x11373c5b0);
  uStack_130 = 0;
  uStack_128 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  plStack_d0 = (long *)0x0;
  uStack_c0 = 0;
  uStack_b8 = 1;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  plStack_60 = (long *)0x0;
  uStack_50 = 0;
  uStack_48 = 1;
  FUN_1098fc2d8(&uStack_130,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  uStack_b8 = *(undefined1 *)(param_1 + 0x80);
  uStack_48 = uStack_b8;
  FUN_1098fc2d8(puVar4 + 1,uStack_130,uStack_128);
  *(undefined1 *)(puVar4 + 0x10) = uStack_b8;
  *(undefined1 *)(puVar4 + 0x1e) = uStack_b8;
  plVar5 = (long *)*param_2;
  *param_2 = (long)puVar4;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  plVar5 = plStack_60;
  if (plStack_60 != (long *)0x0) {
    plVar1 = plStack_60 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_60 + 0x10))(plStack_60);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  plVar5 = plStack_d0;
  if (plStack_d0 != (long *)0x0) {
    plVar1 = plStack_d0 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_d0 + 0x10))(plStack_d0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  _free(uStack_130);
  return;
}



/* Entry: 1098fd1bc; end: 1098fd70b;  */

/* WARNING: Removing unreachable block (ram,0x0001098fd3f4) */

void FUN_1098fd1bc(undefined8 *param_1,double *param_2,double ****param_3)

{
  double *pdVar1;
  code *pcVar2;
  double *pdVar3;
  double ***pppdVar4;
  undefined1 auVar5 [16];
  double *****pppppdVar6;
  double ****ppppdVar7;
  bool bVar8;
  bool bVar9;
  ulong uVar10;
  double dVar11;
  int iVar12;
  int iVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  int iVar30;
  double dVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  long lVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  long lVar40;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  double ***pppdStack_100;
  code *pcStack_f8;
  byte bStack_e9;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_88;
  double dStack_80;
  double dStack_78;
  double *pdStack_70;
  double ***pppdStack_68;
  double ****ppppdStack_60;
  code *pcStack_58;
  double **ppdStack_50;
  code *pcStack_48;
  
  dStack_80 = (double)*param_3 * param_2[2] + param_2[4];
  dStack_78 = (double)param_3[1] * param_2[3] + param_2[5];
  pppdStack_68 = (double ***)param_3;
  if ((ulong)ABS(dStack_80) < 0x7ff0000000000000 && (ulong)ABS(dStack_78) < 0x7ff0000000000000) {
    if ((*param_2 < 2.0) || (param_2[1] < 2.0)) {
      if (piRam000000011373c5f0 == (int *)0x0) {
        uVar10 = 0;
        FUN_1099adbb8(0x11373c5f0,0x11382bb14,&UNK_10f589688,3);
        if ((uVar10 & 1) != 0) goto LAB_1098fd354;
      }
      else if (2 < *piRam000000011373c5f0) {
LAB_1098fd354:
        uStack_e0 = 0;
        uStack_88 = 0;
        uStack_c8 = 0;
        uStack_d0 = 0;
        uStack_b8 = 0;
        uStack_c0 = 0;
        uStack_a8 = 0;
        uStack_b0 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
        uStack_90 = 0;
        FUN_1099a9f0c(&uStack_e0,&UNK_10f589688,0x189,0,FUN_1099aa768,0);
        pppdStack_100 = (double ***)&pppdStack_68;
        pcStack_f8 = FUN_1098fd70c;
        FUN_1099ade68(&ppppdStack_60,&UNK_10f58978c,0x36,0xf,&pppdStack_100);
        pcVar2 = pcStack_58;
        pppppdVar6 = (double *****)ppppdStack_60;
        if (-1 < (long)ppdStack_50) {
          pcVar2 = (code *)((ulong)ppdStack_50 >> 0x38);
          pppppdVar6 = &ppppdStack_60;
        }
        FUN_1092b4db8(lStack_d8 + 0x7540,pppppdVar6,pcVar2);
        goto LAB_1098fd3fc;
      }
    }
    else {
      bVar8 = false;
      bVar9 = false;
      if (0.0 <= dStack_80) {
        bVar8 = false;
        bVar9 = true;
        if (!NAN(dStack_78)) {
          bVar8 = dStack_78 < 1.0;
          bVar9 = false;
        }
      }
      if (bVar8 != bVar9) {
        bVar8 = false;
        bVar9 = false;
        if (0.0 <= dStack_78) {
          bVar8 = false;
          bVar9 = true;
          if (!NAN(dStack_80)) {
            bVar8 = dStack_80 < 1.0;
            bVar9 = false;
          }
        }
        if (bVar8 != bVar9) {
          auVar35 = NEON_fmov(0xbff0000000000000,8);
          dStack_80 = dStack_80 * (*param_2 + auVar35._0_8_);
          dStack_78 = dStack_78 * (param_2[1] + auVar35._8_8_);
          iVar12 = (int)dStack_80;
          iVar13 = (int)dStack_78;
          dStack_80 = dStack_80 - (double)iVar12;
          dStack_78 = dStack_78 - (double)iVar13;
          pdVar3 = (double *)
                   ((long)param_2[8] + (long)iVar12 * 0x10 +
                   (long)(*(int *)(param_2 + 7) * iVar13) * 0x10);
          pdVar1 = pdVar3 + (long)*(int *)(param_2 + 7) * 2;
          dVar11 = *pdVar3 + (pdVar3[2] - *pdVar3) * dStack_80;
          dVar42 = pdVar3[1] + (pdVar3[3] - pdVar3[1]) * dStack_80;
          dVar11 = dVar11 + ((*pdVar1 + (pdVar1[2] - *pdVar1) * dStack_80) - dVar11) * dStack_78;
          uVar14 = SUB81(dVar11,0);
          uVar15 = (undefined1)((ulong)dVar11 >> 8);
          uVar16 = (undefined1)((ulong)dVar11 >> 0x10);
          uVar17 = (undefined1)((ulong)dVar11 >> 0x18);
          uVar18 = (undefined1)((ulong)dVar11 >> 0x20);
          uVar19 = (undefined1)((ulong)dVar11 >> 0x28);
          uVar20 = (undefined1)((ulong)dVar11 >> 0x30);
          uVar21 = (undefined1)((ulong)dVar11 >> 0x38);
          dVar42 = dVar42 + ((pdVar1[1] + (pdVar1[3] - pdVar1[1]) * dStack_80) - dVar42) * dStack_78
          ;
          uVar22 = SUB81(dVar42,0);
          uVar23 = (undefined1)((ulong)dVar42 >> 8);
          uVar24 = (undefined1)((ulong)dVar42 >> 0x10);
          uVar25 = (undefined1)((ulong)dVar42 >> 0x18);
          uVar26 = (undefined1)((ulong)dVar42 >> 0x20);
          uVar27 = (undefined1)((ulong)dVar42 >> 0x28);
          uVar28 = (undefined1)((ulong)dVar42 >> 0x30);
          uVar29 = (undefined1)((ulong)dVar42 >> 0x38);
          goto LAB_1098fd408;
        }
      }
      if (*(char *)(param_2 + 0xd) != '\0') {
        auVar35 = NEON_fmov(0xbff0000000000000,8);
        dStack_80 = dStack_80 * (*param_2 + auVar35._0_8_);
        dStack_78 = dStack_78 * (param_2[1] + auVar35._8_8_);
        auVar36._0_8_ = (double)(long)dStack_80;
        auVar36._8_8_ = (double)(long)dStack_78;
        auVar32._0_8_ = (long)((int)(long)*param_2 + -2);
        auVar32._8_8_ = (long)((int)(long)param_2[1] + -2);
        auVar35 = NEON_scvtf(auVar32,8);
        lVar34 = -(ulong)(auVar35._8_8_ < auVar36._8_8_);
        auVar38[8] = (char)lVar34;
        auVar38._0_8_ = -(ulong)(auVar35._0_8_ < auVar36._0_8_);
        auVar38[9] = (char)((ulong)lVar34 >> 8);
        auVar38[10] = (char)((ulong)lVar34 >> 0x10);
        auVar38[0xb] = (char)((ulong)lVar34 >> 0x18);
        auVar38[0xc] = (char)((ulong)lVar34 >> 0x20);
        auVar38[0xd] = (char)((ulong)lVar34 >> 0x28);
        auVar38[0xe] = (char)((ulong)lVar34 >> 0x30);
        auVar38[0xf] = (char)((ulong)lVar34 >> 0x38);
        auVar35 = auVar35 ^ (auVar35 ^ auVar36) & ~auVar38;
        lVar34 = -(ulong)(auVar36._0_8_ < 0.0);
        lVar40 = -(ulong)(auVar36._8_8_ < 0.0);
        auVar33._0_8_ =
             (double)CONCAT17(auVar35[7] & ~(byte)((ulong)lVar34 >> 0x38),
                              CONCAT16(auVar35[6] & ~(byte)((ulong)lVar34 >> 0x30),
                                       CONCAT15(auVar35[5] & ~(byte)((ulong)lVar34 >> 0x28),
                                                CONCAT14(auVar35[4] & ~(byte)((ulong)lVar34 >> 0x20)
                                                         ,CONCAT13(auVar35[3] &
                                                                   ~(byte)((ulong)lVar34 >> 0x18),
                                                                   CONCAT12(auVar35[2] &
                                                                            ~(byte)((ulong)lVar34 >>
                                                                                   0x10),
                                                                            CONCAT11(auVar35[1] &
                                                                                     ~(byte)((ulong)
                                                  lVar34 >> 8),auVar35[0] & ~(byte)lVar34)))))));
        auVar33[8] = auVar35[8] & ~(byte)lVar40;
        auVar33[9] = auVar35[9] & ~(byte)((ulong)lVar40 >> 8);
        auVar33[10] = auVar35[10] & ~(byte)((ulong)lVar40 >> 0x10);
        auVar33[0xb] = auVar35[0xb] & ~(byte)((ulong)lVar40 >> 0x18);
        auVar33[0xc] = auVar35[0xc] & ~(byte)((ulong)lVar40 >> 0x20);
        auVar33[0xd] = auVar35[0xd] & ~(byte)((ulong)lVar40 >> 0x28);
        auVar33[0xe] = auVar35[0xe] & ~(byte)((ulong)lVar40 >> 0x30);
        auVar33[0xf] = auVar35[0xf] & ~(byte)((ulong)lVar40 >> 0x38);
        iVar30 = (int)(long)auVar33._0_8_;
        iVar13 = (int)(long)auVar33._8_8_;
        auVar37._0_8_ = (long)iVar30;
        auVar37._8_8_ = (long)iVar13;
        auVar35 = NEON_scvtf(auVar37,8);
        dStack_80 = dStack_80 - auVar35._0_8_;
        dStack_78 = dStack_78 - auVar35._8_8_;
        auVar38 = NEON_fmov(0x3ff0000000000000,8);
        lVar34 = -(ulong)(auVar38._8_8_ < dStack_78);
        auVar35[8] = SUB81(dStack_78,0);
        auVar35._0_8_ = dStack_80;
        auVar35[9] = (char)((ulong)dStack_78 >> 8);
        auVar35[10] = (char)((ulong)dStack_78 >> 0x10);
        auVar35[0xb] = (char)((ulong)dStack_78 >> 0x18);
        auVar35[0xc] = (char)((ulong)dStack_78 >> 0x20);
        auVar35[0xd] = (char)((ulong)dStack_78 >> 0x28);
        auVar35[0xe] = (char)((ulong)dStack_78 >> 0x30);
        auVar35[0xf] = (char)((ulong)dStack_78 >> 0x38);
        auVar5[8] = (char)lVar34;
        auVar5._0_8_ = -(ulong)(auVar38._0_8_ < dStack_80);
        auVar5[9] = (char)((ulong)lVar34 >> 8);
        auVar5[10] = (char)((ulong)lVar34 >> 0x10);
        auVar5[0xb] = (char)((ulong)lVar34 >> 0x18);
        auVar5[0xc] = (char)((ulong)lVar34 >> 0x20);
        auVar5[0xd] = (char)((ulong)lVar34 >> 0x28);
        auVar5[0xe] = (char)((ulong)lVar34 >> 0x30);
        auVar5[0xf] = (char)((ulong)lVar34 >> 0x38);
        auVar38 = auVar38 ^ (auVar38 ^ auVar35) & ~auVar5;
        lVar34 = -(ulong)(dStack_80 < 0.0);
        lVar40 = -(ulong)(dStack_78 < 0.0);
        auVar39._0_8_ =
             (double)CONCAT17(auVar38[7] & ~(byte)((ulong)lVar34 >> 0x38),
                              CONCAT16(auVar38[6] & ~(byte)((ulong)lVar34 >> 0x30),
                                       CONCAT15(auVar38[5] & ~(byte)((ulong)lVar34 >> 0x28),
                                                CONCAT14(auVar38[4] & ~(byte)((ulong)lVar34 >> 0x20)
                                                         ,CONCAT13(auVar38[3] &
                                                                   ~(byte)((ulong)lVar34 >> 0x18),
                                                                   CONCAT12(auVar38[2] &
                                                                            ~(byte)((ulong)lVar34 >>
                                                                                   0x10),
                                                                            CONCAT11(auVar38[1] &
                                                                                     ~(byte)((ulong)
                                                  lVar34 >> 8),auVar38[0] & ~(byte)lVar34)))))));
        auVar39[8] = auVar38[8] & ~(byte)lVar40;
        auVar39[9] = auVar38[9] & ~(byte)((ulong)lVar40 >> 8);
        auVar39[10] = auVar38[10] & ~(byte)((ulong)lVar40 >> 0x10);
        auVar39[0xb] = auVar38[0xb] & ~(byte)((ulong)lVar40 >> 0x18);
        auVar39[0xc] = auVar38[0xc] & ~(byte)((ulong)lVar40 >> 0x20);
        auVar39[0xd] = auVar38[0xd] & ~(byte)((ulong)lVar40 >> 0x28);
        auVar39[0xe] = auVar38[0xe] & ~(byte)((ulong)lVar40 >> 0x30);
        auVar39[0xf] = auVar38[0xf] & ~(byte)((ulong)lVar40 >> 0x38);
        dVar11 = param_2[8];
        iVar13 = *(int *)(param_2 + 7) * iVar13;
        iVar12 = *(int *)(param_2 + 7) + iVar13;
        dVar42 = 1.0 - auVar39._0_8_;
        dVar41 = auVar39._8_8_;
        dVar31 = 1.0 - dVar41;
        pdVar3 = (double *)((long)dVar11 + (long)(iVar13 + iVar30) * 0x10);
        dVar47 = pdVar3[1];
        dVar46 = *pdVar3;
        pdVar3 = (double *)((long)dVar11 + (long)(iVar13 + iVar30 + 1) * 0x10);
        dVar49 = pdVar3[1];
        dVar48 = *pdVar3;
        pdVar3 = (double *)((long)dVar11 + (long)(iVar12 + iVar30) * 0x10);
        dVar44 = pdVar3[1];
        dVar43 = *pdVar3;
        pdVar3 = (double *)((long)dVar11 + (long)(iVar12 + iVar30 + 1) * 0x10);
        dVar45 = pdVar3[1];
        dVar11 = *pdVar3;
        dVar11 = ((dVar11 - dVar48) * auVar39._0_8_ + (dVar43 - dVar46) * dVar42) *
                 (dStack_78 - dVar41) +
                 ((dVar11 - dVar43) * dVar41 + (dVar48 - dVar46) * dVar31) *
                 (dStack_80 - auVar39._0_8_) +
                 dVar11 * auVar39._0_8_ * dVar41 +
                 dVar43 * dVar42 * dVar41 +
                 dVar46 * dVar42 * dVar31 + dVar48 * dVar31 * auVar39._0_8_;
        uVar14 = SUB81(dVar11,0);
        uVar15 = (undefined1)((ulong)dVar11 >> 8);
        uVar16 = (undefined1)((ulong)dVar11 >> 0x10);
        uVar17 = (undefined1)((ulong)dVar11 >> 0x18);
        uVar18 = (undefined1)((ulong)dVar11 >> 0x20);
        uVar19 = (undefined1)((ulong)dVar11 >> 0x28);
        uVar20 = (undefined1)((ulong)dVar11 >> 0x30);
        uVar21 = (undefined1)((ulong)dVar11 >> 0x38);
        dVar11 = ((dVar45 - dVar49) * auVar39._0_8_ + (dVar44 - dVar47) * dVar42) *
                 (dStack_78 - dVar41) +
                 ((dVar45 - dVar44) * dVar41 + (dVar49 - dVar47) * dVar31) *
                 (dStack_80 - auVar39._0_8_) +
                 dVar45 * auVar39._0_8_ * dVar41 +
                 dVar44 * dVar42 * dVar41 +
                 dVar47 * dVar42 * dVar31 + dVar49 * dVar31 * auVar39._0_8_;
        uVar22 = SUB81(dVar11,0);
        uVar23 = (undefined1)((ulong)dVar11 >> 8);
        uVar24 = (undefined1)((ulong)dVar11 >> 0x10);
        uVar25 = (undefined1)((ulong)dVar11 >> 0x18);
        uVar26 = (undefined1)((ulong)dVar11 >> 0x20);
        uVar27 = (undefined1)((ulong)dVar11 >> 0x28);
        uVar28 = (undefined1)((ulong)dVar11 >> 0x30);
        uVar29 = (undefined1)((ulong)dVar11 >> 0x38);
        goto LAB_1098fd408;
      }
      if (piRam000000011373c610 == (int *)0x0) {
        uVar10 = 0;
        FUN_1099adbb8(0x11373c610,0x11382bb14,&UNK_10f589688,3);
        if ((uVar10 & 1) != 0) goto LAB_1098fd61c;
      }
      else if (2 < *piRam000000011373c610) {
LAB_1098fd61c:
        uStack_e0 = 0;
        uStack_88 = 0;
        uStack_c8 = 0;
        uStack_d0 = 0;
        uStack_b8 = 0;
        uStack_c0 = 0;
        uStack_a8 = 0;
        uStack_b0 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
        uStack_90 = 0;
        FUN_1099a9f0c(&uStack_e0,&UNK_10f589688,0x191,0,FUN_1099aa768,0);
        pdStack_70 = &dStack_80;
        ppppdStack_60 = &pppdStack_68;
        pcStack_58 = FUN_1098fd70c;
        ppdStack_50 = &pdStack_70;
        pcStack_48 = FUN_1098fd70c;
        FUN_1099ade68(&pppdStack_100,&UNK_10f5897c3,0x57,0xff,&ppppdStack_60);
        pcVar2 = pcStack_f8;
        ppppdVar7 = (double ****)pppdStack_100;
        if (-1 < (char)bStack_e9) {
          pcVar2 = (code *)(ulong)bStack_e9;
          ppppdVar7 = &pppdStack_100;
        }
        FUN_1092b4db8(lStack_d8 + 0x7540,ppppdVar7,pcVar2);
        if ((char)bStack_e9 < '\0') {
          __ZdlPv(pppdStack_100);
        }
        goto LAB_1098fd3fc;
      }
    }
  }
  else if (piRam000000011373c5d0 == (int *)0x0) {
    uVar10 = 0;
    FUN_1099adbb8(0x11373c5d0,0x11382bb14,&UNK_10f589688,3);
    if ((uVar10 & 1) != 0) goto LAB_1098fd294;
  }
  else if (2 < *piRam000000011373c5d0) {
LAB_1098fd294:
    uStack_e0 = 0;
    uStack_88 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_90 = 0;
    FUN_1099a9f0c(&uStack_e0,&UNK_10f589688,0x17f,0,FUN_1099aa768,0);
    pppdStack_100 = (double ***)&pppdStack_68;
    pcStack_f8 = FUN_1098fd70c;
    FUN_1099ade68(&ppppdStack_60,&UNK_10f589755,0x36,0xf,&pppdStack_100);
    pcVar2 = pcStack_58;
    pppppdVar6 = (double *****)ppppdStack_60;
    if (-1 < (long)ppdStack_50) {
      pcVar2 = (code *)((ulong)ppdStack_50 >> 0x38);
      pppppdVar6 = &ppppdStack_60;
    }
    FUN_1092b4db8(lStack_d8 + 0x7540,pppppdVar6,pcVar2);
LAB_1098fd3fc:
    FUN_1099ab3b0(&uStack_e0);
  }
  pppdVar4 = param_3[1];
  uVar22 = SUB81(pppdVar4,0);
  uVar23 = (undefined1)((ulong)pppdVar4 >> 8);
  uVar24 = (undefined1)((ulong)pppdVar4 >> 0x10);
  uVar25 = (undefined1)((ulong)pppdVar4 >> 0x18);
  uVar26 = (undefined1)((ulong)pppdVar4 >> 0x20);
  uVar27 = (undefined1)((ulong)pppdVar4 >> 0x28);
  uVar28 = (undefined1)((ulong)pppdVar4 >> 0x30);
  uVar29 = (undefined1)((ulong)pppdVar4 >> 0x38);
  pppdVar4 = *param_3;
  uVar14 = SUB81(pppdVar4,0);
  uVar15 = (undefined1)((ulong)pppdVar4 >> 8);
  uVar16 = (undefined1)((ulong)pppdVar4 >> 0x10);
  uVar17 = (undefined1)((ulong)pppdVar4 >> 0x18);
  uVar18 = (undefined1)((ulong)pppdVar4 >> 0x20);
  uVar19 = (undefined1)((ulong)pppdVar4 >> 0x28);
  uVar20 = (undefined1)((ulong)pppdVar4 >> 0x30);
  uVar21 = (undefined1)((ulong)pppdVar4 >> 0x38);
LAB_1098fd408:
  param_1[1] = CONCAT17(uVar29,CONCAT16(uVar28,CONCAT15(uVar27,CONCAT14(uVar26,CONCAT13(uVar25,
                                                  CONCAT12(uVar24,CONCAT11(uVar23,uVar22)))))));
  *param_1 = CONCAT17(uVar21,CONCAT16(uVar20,CONCAT15(uVar19,CONCAT14(uVar18,CONCAT13(uVar17,
                                                  CONCAT12(uVar16,CONCAT11(uVar15,uVar14)))))));
  return;
}



/* Entry: 1098fd70c; end: 1098fd93b;  */

void FUN_1098fd70c(long *param_1,long *param_2,long *param_3)

{
  bool bVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uStack_d8;
  undefined1 uStack_d0;
  undefined7 uStack_cf;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_88;
  undefined8 **ppuStack_80;
  code *pcStack_78;
  
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_c8 = 0;
  uStack_d8._0_4_ = 0x8000;
  uStack_d8._4_4_ = 0x20;
  uStack_d0 = 0;
  uStack_cf = 0xffffffff000000;
  if (*param_2 == 0) {
    puVar2 = (undefined8 *)0x0;
    uStack_a8 = 1;
    lVar4 = 0;
  }
  else {
    puVar2 = &uStack_d8;
    FUN_1098f75c4(puVar2,param_2);
    lVar4 = *param_2;
  }
  *param_2 = (long)puVar2;
  param_2[1] = param_2[1] + (lVar4 - (long)puVar2);
  uStack_98 = ((undefined8 *)*param_1)[1];
  uStack_a0 = *(undefined8 *)*param_1;
  plVar5 = (long *)*param_3;
  lVar4 = plVar5[1];
  uVar3 = lVar4 + 1;
  if ((ulong)plVar5[2] < uVar3) {
    (*(code *)plVar5[3])(plVar5);
    lVar4 = plVar5[1];
    uVar3 = lVar4 + 1;
  }
  bVar1 = false;
  plVar5[1] = uVar3;
  *(undefined1 *)(*plVar5 + lVar4) = 0x5b;
  puVar2 = &uStack_a0;
  while( true ) {
    if ((char)uStack_a8 == '\x01') {
      plVar5 = (long *)*param_3;
      pcStack_78 = FUN_1098f7694;
      puStack_88 = puVar2;
      ppuStack_80 = &puStack_88;
      FUN_1099a63d4(plVar5,&UNK_10f5893b8,6,0xf,&ppuStack_80,0);
    }
    else {
      plVar5 = &uStack_d8;
      FUN_1098f75f0(plVar5,puVar2,param_3);
    }
    if (bVar1) break;
    lVar4 = plVar5[1];
    uVar3 = lVar4 + 1;
    if ((ulong)plVar5[2] < uVar3) {
      (*(code *)plVar5[3])(plVar5);
      lVar4 = plVar5[1];
      uVar3 = lVar4 + 1;
    }
    plVar5[1] = uVar3;
    *(undefined1 *)(*plVar5 + lVar4) = 0x2c;
    lVar4 = plVar5[1];
    uVar3 = lVar4 + 1;
    if ((ulong)plVar5[2] < uVar3) {
      (*(code *)plVar5[3])(plVar5);
      lVar4 = plVar5[1];
      uVar3 = lVar4 + 1;
    }
    plVar5[1] = uVar3;
    *(undefined1 *)(*plVar5 + lVar4) = 0x20;
    bVar1 = true;
    puVar2 = (undefined8 *)((ulong)&uStack_a0 | 8);
  }
  lVar4 = plVar5[1];
  uVar3 = lVar4 + 1;
  if ((ulong)plVar5[2] < uVar3) {
    (*(code *)plVar5[3])(plVar5);
    lVar4 = plVar5[1];
    uVar3 = lVar4 + 1;
  }
  plVar5[1] = uVar3;
  *(undefined1 *)(*plVar5 + lVar4) = 0x5d;
  return;
}



/* Entry: 1098fd93c; end: 1098fde07;  */

/* WARNING: Removing unreachable block (ram,0x0001098fdb70) */

void FUN_1098fd93c(double *param_1,double *param_2,double ****param_3)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  double *pdVar4;
  double *****pppppdVar5;
  double ****ppppdVar6;
  bool bVar7;
  bool bVar8;
  ulong uVar9;
  int iVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auVar19 [16];
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double ***pppdStack_f0;
  code *pcStack_e8;
  byte bStack_d9;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  double dStack_70;
  double dStack_68;
  double *pdStack_60;
  double ***pppdStack_58;
  double ****ppppdStack_50;
  code *pcStack_48;
  double **ppdStack_40;
  code *pcStack_38;
  
  dStack_70 = (double)*param_3 * param_2[2] + param_2[4];
  dStack_68 = (double)param_3[1] * param_2[3] + param_2[5];
  pppdStack_58 = (double ***)param_3;
  if ((ulong)ABS(dStack_70) < 0x7ff0000000000000 && (ulong)ABS(dStack_68) < 0x7ff0000000000000) {
    if ((*param_2 < 2.0) || (dVar13 = param_2[1], dVar13 < 2.0)) {
      if (piRam000000011373c650 == (int *)0x0) {
        uVar9 = 0;
        FUN_1099adbb8(0x11373c650,0x11382bb14,&UNK_10f589688,3);
        if ((uVar9 & 1) != 0) goto LAB_1098fdad0;
      }
      else if (2 < *piRam000000011373c650) {
LAB_1098fdad0:
        uStack_d0 = 0;
        uStack_78 = 0;
        uStack_b8 = 0;
        uStack_c0 = 0;
        uStack_a8 = 0;
        uStack_b0 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_80 = 0;
        FUN_1099a9f0c(&uStack_d0,&UNK_10f589688,0x1e7,0,FUN_1099aa768,0);
        pppdStack_f0 = (double ***)&pppdStack_58;
        pcStack_e8 = FUN_1098fd70c;
        FUN_1099ade68(&ppppdStack_50,&UNK_10f58985b,0x3f,0xf,&pppdStack_f0);
        pcVar2 = pcStack_48;
        pppppdVar5 = (double *****)ppppdStack_50;
        if (-1 < (long)ppdStack_40) {
          pcVar2 = (code *)((ulong)ppdStack_40 >> 0x38);
          pppppdVar5 = &ppppdStack_50;
        }
        FUN_1092b4db8(lStack_c8 + 0x7540,pppppdVar5,pcVar2);
        goto LAB_1098fdb78;
      }
      goto LAB_1098fdb80;
    }
    bVar7 = false;
    bVar8 = false;
    if (0.0 <= dStack_70) {
      bVar7 = false;
      bVar8 = true;
      if (!NAN(dStack_68)) {
        bVar7 = dStack_68 < 1.0;
        bVar8 = false;
      }
    }
    if (bVar7 == bVar8) {
LAB_1098fdbb0:
      if (*(char *)(param_2 + 0xd) == '\0') {
        if (piRam000000011373c670 == (int *)0x0) {
          uVar9 = 0;
          FUN_1099adbb8(0x11373c670,0x11382bb14,&UNK_10f589688,3);
          if ((uVar9 & 1) != 0) goto LAB_1098fdd18;
        }
        else if (2 < *piRam000000011373c670) {
LAB_1098fdd18:
          uStack_d0 = 0;
          uStack_78 = 0;
          uStack_b8 = 0;
          uStack_c0 = 0;
          uStack_a8 = 0;
          uStack_b0 = 0;
          uStack_98 = 0;
          uStack_a0 = 0;
          uStack_88 = 0;
          uStack_90 = 0;
          uStack_80 = 0;
          FUN_1099a9f0c(&uStack_d0,&UNK_10f589688,0x1ed,0,FUN_1099aa768,0);
          pdStack_60 = &dStack_70;
          ppppdStack_50 = &pppdStack_58;
          pcStack_48 = FUN_1098fd70c;
          ppdStack_40 = &pdStack_60;
          pcStack_38 = FUN_1098fd70c;
          FUN_1099ade68(&pppdStack_f0,&UNK_10f58989b,0x60,0xff,&ppppdStack_50);
          pcVar2 = pcStack_e8;
          ppppdVar6 = (double ****)pppdStack_f0;
          if (-1 < (char)bStack_d9) {
            pcVar2 = (code *)(ulong)bStack_d9;
            ppppdVar6 = &pppdStack_f0;
          }
          FUN_1092b4db8(lStack_c8 + 0x7540,ppppdVar6,pcVar2);
          if ((char)bStack_d9 < '\0') {
            __ZdlPv(pppdStack_f0);
          }
          goto LAB_1098fdb78;
        }
        goto LAB_1098fdb80;
      }
    }
    else {
      bVar7 = false;
      bVar8 = false;
      if (0.0 <= dStack_68) {
        bVar7 = false;
        bVar8 = true;
        if (!NAN(dStack_70)) {
          bVar7 = dStack_70 < 1.0;
          bVar8 = false;
        }
      }
      if (bVar7 == bVar8) goto LAB_1098fdbb0;
    }
    dVar12 = *param_2;
    auVar19 = NEON_fmov(0xbff0000000000000,8);
    dStack_70 = dStack_70 * (dVar12 + auVar19._0_8_);
    dStack_68 = dStack_68 * (param_2[1] + auVar19._8_8_);
    dVar17 = (double)(long)dStack_70;
    dVar11 = (double)((int)dVar12 + -2);
    if (dVar17 <= (double)((int)dVar12 + -2)) {
      dVar11 = dVar17;
    }
    dVar14 = 0.0;
    if (0.0 <= dVar17) {
      dVar14 = dVar11;
    }
    iVar10 = (int)dVar14;
    dVar17 = (double)(long)dStack_68;
    dVar11 = (double)((int)dVar13 + -2);
    if (dVar17 <= (double)((int)dVar13 + -2)) {
      dVar11 = dVar17;
    }
    dVar14 = 0.0;
    if (0.0 <= dVar17) {
      dVar14 = dVar11;
    }
    dStack_70 = dStack_70 - (double)iVar10;
    dStack_68 = dStack_68 - (double)(int)dVar14;
    dVar11 = 1.0;
    if (dStack_70 <= 1.0) {
      dVar11 = dStack_70;
    }
    dVar17 = 0.0;
    if (0.0 <= dStack_70) {
      dVar17 = dVar11;
    }
    dVar11 = 1.0;
    if (dStack_68 <= 1.0) {
      dVar11 = dStack_68;
    }
    dVar18 = 0.0;
    if (0.0 <= dStack_68) {
      dVar18 = dVar11;
    }
    dVar11 = param_2[8];
    iVar3 = *(int *)(param_2 + 7) * (int)dVar14;
    iVar1 = *(int *)(param_2 + 7) + iVar3;
    dVar12 = param_2[2] * (dVar12 + -1.0);
    pdVar4 = (double *)((long)dVar11 + (long)(iVar3 + iVar10 + 1) * 0x10);
    dVar15 = pdVar4[1];
    dVar14 = *pdVar4;
    pdVar4 = (double *)((long)dVar11 + (long)(iVar3 + iVar10) * 0x10);
    dVar21 = pdVar4[1];
    dVar20 = *pdVar4;
    pdVar4 = (double *)((long)dVar11 + (long)(iVar1 + iVar10) * 0x10);
    dVar23 = pdVar4[1];
    dVar22 = *pdVar4;
    pdVar4 = (double *)((long)dVar11 + (long)(iVar1 + iVar10 + 1) * 0x10);
    dVar11 = ((dVar20 - dVar14) - dVar22) + *pdVar4;
    dVar16 = ((dVar21 - dVar15) - dVar23) + pdVar4[1];
    dVar13 = param_2[3] * (dVar13 + -1.0);
    param_1[1] = ((dVar15 - dVar21) + dVar16 * dVar18) * dVar12;
    *param_1 = ((dVar14 - dVar20) + dVar11 * dVar18) * dVar12;
    param_1[3] = ((dVar23 - dVar21) + dVar16 * dVar17) * dVar13;
    param_1[2] = ((dVar22 - dVar20) + dVar11 * dVar17) * dVar13;
  }
  else {
    if (piRam000000011373c630 == (int *)0x0) {
      uVar9 = 0;
      FUN_1099adbb8(0x11373c630,0x11382bb14,&UNK_10f589688,3);
      if ((uVar9 & 1) != 0) goto LAB_1098fda10;
    }
    else if (2 < *piRam000000011373c630) {
LAB_1098fda10:
      uStack_d0 = 0;
      uStack_78 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_80 = 0;
      FUN_1099a9f0c(&uStack_d0,&UNK_10f589688,0x1de,0,FUN_1099aa768,0);
      pppdStack_f0 = (double ***)&pppdStack_58;
      pcStack_e8 = FUN_1098fd70c;
      FUN_1099ade68(&ppppdStack_50,&UNK_10f58981b,0x3f,0xf,&pppdStack_f0);
      pcVar2 = pcStack_48;
      pppppdVar5 = (double *****)ppppdStack_50;
      if (-1 < (long)ppdStack_40) {
        pcVar2 = (code *)((ulong)ppdStack_40 >> 0x38);
        pppppdVar5 = &ppppdStack_50;
      }
      FUN_1092b4db8(lStack_c8 + 0x7540,pppppdVar5,pcVar2);
LAB_1098fdb78:
      FUN_1099ab3b0(&uStack_d0);
    }
LAB_1098fdb80:
    *param_1 = 1.0;
    param_1[1] = 0.0;
    param_1[2] = 0.0;
    param_1[3] = 1.0;
  }
  return;
}



/* Entry: 1098fde08; end: 1098fde87;  */

undefined8 * FUN_1098fde08(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b1cf90;
  FUN_10939cea4(param_1 + 0x14);
  FUN_10939cea4(param_1 + 9);
  _free(param_1[1]);
  return param_1;
}



/* Entry: 1098fde88; end: 1098fde8f;  */

undefined8 FUN_1098fde88(void)

{
  return 10;
}



/* Entry: 1098fde90; end: 1098fdf17;  */

/* WARNING: Removing unreachable block (ram,0x0001098fe674) */

void FUN_1098fde90(long *param_1,long param_2)

{
  undefined8 *puVar1;
  float *pfVar2;
  code *pcVar3;
  undefined8 *****pppppuVar4;
  undefined8 ****ppppuVar5;
  bool bVar6;
  bool bVar7;
  undefined8 ****ppppuVar8;
  undefined8 *extraout_x8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  float fVar12;
  float fVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  int iVar17;
  undefined8 uVar18;
  float fVar19;
  int iVar20;
  float fVar21;
  int iVar22;
  undefined8 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined8 ***pppuStack_120;
  code *pcStack_118;
  byte bStack_109;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 ***pppuStack_98;
  undefined8 ****ppppuStack_90;
  code *pcStack_88;
  undefined8 **ppuStack_80;
  code *pcStack_78;
  
  uVar11 = *(ulong *)(param_2 + 0x10);
  if (uVar11 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  if (uVar11 >> 0x3e == 0) {
    lVar10 = uVar11 << 2;
    _malloc();
    if (lVar10 != 0) {
      *param_1 = lVar10;
      param_1[1] = uVar11;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)();
      return;
    }
  }
  lVar10 = 8;
  ___cxa_allocate_exception();
  __ZNSt9bad_allocC1Ev();
  ppppuVar8 = (undefined8 ****)PTR___ZTISt9bad_alloc_110346a68;
  ___cxa_throw();
  pfVar2 = (float *)(lVar10 + 0x70);
  fVar12 = SUB84(*ppppuVar8,0) * (float)*(undefined8 *)(lVar10 + 0x78) +
           (float)*(undefined8 *)(lVar10 + 0x80);
  fVar13 = (float)((ulong)*ppppuVar8 >> 0x20) *
           (float)((ulong)*(undefined8 *)(lVar10 + 0x78) >> 0x20) +
           (float)((ulong)*(undefined8 *)(lVar10 + 0x80) >> 0x20);
  uStack_a8 = CONCAT44(fVar13,fVar12);
  pppuStack_98 = ppppuVar8;
  if ((uint)ABS(fVar12) < 0x7f800000 && (uint)ABS(fVar13) < 0x7f800000) {
    if ((*pfVar2 < 2.0) || (*(float *)(lVar10 + 0x74) < 2.0)) {
      if (piRam000000011373c6b0 == (int *)0x0) {
        uVar11 = 0;
        FUN_1099adbb8(0x11373c6b0,0x11382bb14,&UNK_10f589688,3);
        if ((uVar11 & 1) != 0) goto LAB_1098fe5cc;
      }
      else if (2 < *piRam000000011373c6b0) {
LAB_1098fe5cc:
        uStack_108 = 0;
        uStack_b0 = 0;
        uStack_f0 = 0;
        uStack_f8 = 0;
        uStack_e0 = 0;
        uStack_e8 = 0;
        uStack_d0 = 0;
        uStack_d8 = 0;
        uStack_c0 = 0;
        uStack_c8 = 0;
        uStack_b8 = 0;
        FUN_1099a9f0c(&uStack_108,&UNK_10f589688,0x189,0,FUN_1099aa768,0);
        pppuStack_120 = &pppuStack_98;
        pcStack_118 = FUN_1098fe98c;
        FUN_1099ade68(&ppppuStack_90,&UNK_10f58978c,0x36,0xf,&pppuStack_120);
        pcVar3 = pcStack_88;
        pppppuVar4 = (undefined8 *****)ppppuStack_90;
        if (-1 < (long)ppuStack_80) {
          pcVar3 = (code *)((ulong)ppuStack_80 >> 0x38);
          pppppuVar4 = &ppppuStack_90;
        }
        FUN_1092b4db8(lStack_100 + 0x7540,pppppuVar4,pcVar3);
        goto LAB_1098fe67c;
      }
      goto LAB_1098fe684;
    }
    bVar6 = false;
    bVar7 = false;
    if (0.0 <= fVar12) {
      bVar6 = false;
      bVar7 = true;
      if (!NAN(fVar13)) {
        bVar6 = fVar13 < 1.0;
        bVar7 = false;
      }
    }
    if (bVar6 == bVar7) {
LAB_1098fe6b4:
      if (*(char *)(lVar10 + 0xc0) == '\0') {
        if (piRam000000011373c6d0 == (int *)0x0) {
          uVar11 = 0;
          FUN_1099adbb8(0x11373c6d0,0x11382bb14,&UNK_10f589688,3);
          if ((uVar11 & 1) != 0) goto LAB_1098fe894;
        }
        else if (2 < *piRam000000011373c6d0) {
LAB_1098fe894:
          uStack_108 = 0;
          uStack_b0 = 0;
          uStack_f0 = 0;
          uStack_f8 = 0;
          uStack_e0 = 0;
          uStack_e8 = 0;
          uStack_d0 = 0;
          uStack_d8 = 0;
          uStack_c0 = 0;
          uStack_c8 = 0;
          uStack_b8 = 0;
          FUN_1099a9f0c(&uStack_108,&UNK_10f589688,0x191,0,FUN_1099aa768,0);
          puStack_a0 = &uStack_a8;
          ppppuStack_90 = &pppuStack_98;
          pcStack_88 = FUN_1098fe98c;
          ppuStack_80 = &puStack_a0;
          pcStack_78 = FUN_1098fe98c;
          FUN_1099ade68(&pppuStack_120,&UNK_10f5897c3,0x57,0xff,&ppppuStack_90);
          pcVar3 = pcStack_118;
          ppppuVar5 = (undefined8 ****)pppuStack_120;
          if (-1 < (char)bStack_109) {
            pcVar3 = (code *)(ulong)bStack_109;
            ppppuVar5 = &pppuStack_120;
          }
          FUN_1092b4db8(lStack_100 + 0x7540,ppppuVar5,pcVar3);
          if ((char)bStack_109 < '\0') {
            __ZdlPv(pppuStack_120);
          }
          goto LAB_1098fe67c;
        }
        goto LAB_1098fe684;
      }
      uVar18 = NEON_fmov(0xbf800000,4);
      fVar15 = (float)*(undefined8 *)pfVar2;
      fVar21 = (float)((ulong)*(undefined8 *)pfVar2 >> 0x20);
      fVar12 = fVar12 * (fVar15 + (float)uVar18);
      fVar13 = fVar13 * (fVar21 + (float)((ulong)uVar18 >> 0x20));
      fVar16 = (float)(int)fVar12;
      fVar19 = (float)(int)fVar13;
      uVar11 = NEON_scvtf(CONCAT44((int)fVar21 + -2,(int)fVar15 + -2),4);
      uVar11 = uVar11 ^ (uVar11 ^ CONCAT44(fVar19,fVar16)) &
                        ~CONCAT44(-(uint)((float)(uVar11 >> 0x20) < fVar19),
                                  -(uint)((float)uVar11 < fVar16));
      iVar17 = -(uint)(fVar16 < 0.0);
      iVar20 = -(uint)(fVar19 < 0.0);
      fVar15 = (float)CONCAT13((byte)(uVar11 >> 0x18) & ~(byte)((uint)iVar17 >> 0x18),
                               CONCAT12((byte)(uVar11 >> 0x10) & ~(byte)((uint)iVar17 >> 0x10),
                                        CONCAT11((byte)(uVar11 >> 8) & ~(byte)((uint)iVar17 >> 8),
                                                 (byte)uVar11 & ~(byte)iVar17)));
      iVar14 = (int)fVar15;
      iVar20 = (int)(float)(CONCAT17((byte)(uVar11 >> 0x38) & ~(byte)((uint)iVar20 >> 0x18),
                                     CONCAT16((byte)(uVar11 >> 0x30) & ~(byte)((uint)iVar20 >> 0x10)
                                              ,CONCAT15((byte)(uVar11 >> 0x28) &
                                                        ~(byte)((uint)iVar20 >> 8),
                                                        CONCAT14((byte)(uVar11 >> 0x20) &
                                                                 ~(byte)iVar20,fVar15)))) >> 0x20);
      uVar18 = NEON_scvtf(CONCAT44(iVar20,iVar14),4);
      fVar12 = fVar12 - (float)uVar18;
      fVar13 = fVar13 - (float)((ulong)uVar18 >> 0x20);
      uVar11 = NEON_fmov(0x3f800000,4);
      uVar11 = uVar11 ^ (uVar11 ^ CONCAT44(fVar13,fVar12)) &
                        ~CONCAT44(-(uint)((float)(uVar11 >> 0x20) < fVar13),
                                  -(uint)((float)uVar11 < fVar12));
      iVar17 = -(uint)(fVar12 < 0.0);
      iVar22 = -(uint)(fVar13 < 0.0);
      fVar21 = (float)CONCAT13((byte)(uVar11 >> 0x18) & ~(byte)((uint)iVar17 >> 0x18),
                               CONCAT12((byte)(uVar11 >> 0x10) & ~(byte)((uint)iVar17 >> 0x10),
                                        CONCAT11((byte)(uVar11 >> 8) & ~(byte)((uint)iVar17 >> 8),
                                                 (byte)uVar11 & ~(byte)iVar17)));
      lVar9 = *(long *)(lVar10 + 0x98);
      iVar20 = *(int *)(lVar10 + 0x90) * iVar20;
      iVar17 = *(int *)(lVar10 + 0x90) + iVar20;
      fVar19 = 1.0 - fVar21;
      fVar16 = (float)(CONCAT17((byte)(uVar11 >> 0x38) & ~(byte)((uint)iVar22 >> 0x18),
                                CONCAT16((byte)(uVar11 >> 0x30) & ~(byte)((uint)iVar22 >> 0x10),
                                         CONCAT15((byte)(uVar11 >> 0x28) &
                                                  ~(byte)((uint)iVar22 >> 8),
                                                  CONCAT14((byte)(uVar11 >> 0x20) & ~(byte)iVar22,
                                                           fVar21)))) >> 0x20);
      fVar15 = 1.0 - fVar16;
      uVar18 = *(undefined8 *)(lVar9 + (long)(iVar20 + iVar14) * 8);
      fVar28 = (float)uVar18;
      fVar29 = (float)((ulong)uVar18 >> 0x20);
      uVar18 = *(undefined8 *)(lVar9 + (long)(iVar20 + iVar14 + 1) * 8);
      fVar30 = (float)uVar18;
      fVar31 = (float)((ulong)uVar18 >> 0x20);
      uVar18 = *(undefined8 *)(lVar9 + (long)(iVar17 + iVar14) * 8);
      fVar24 = (float)uVar18;
      fVar25 = (float)((ulong)uVar18 >> 0x20);
      uVar18 = *(undefined8 *)(lVar9 + (long)(iVar17 + iVar14 + 1) * 8);
      fVar26 = (float)uVar18;
      fVar27 = (float)((ulong)uVar18 >> 0x20);
      uVar18 = CONCAT44(((fVar27 - fVar31) * fVar21 + (fVar25 - fVar29) * fVar19) *
                        (fVar13 - fVar16) +
                        ((fVar27 - fVar25) * fVar16 + (fVar31 - fVar29) * fVar15) *
                        (fVar12 - fVar21) +
                        fVar27 * fVar21 * fVar16 +
                        fVar25 * fVar19 * fVar16 +
                        fVar29 * fVar19 * fVar15 + fVar31 * fVar15 * fVar21,
                        ((fVar26 - fVar30) * fVar21 + (fVar24 - fVar28) * fVar19) *
                        (fVar13 - fVar16) +
                        ((fVar26 - fVar24) * fVar16 + (fVar30 - fVar28) * fVar15) *
                        (fVar12 - fVar21) +
                        fVar26 * fVar21 * fVar16 +
                        fVar24 * fVar19 * fVar16 +
                        fVar28 * fVar19 * fVar15 + fVar30 * fVar15 * fVar21);
    }
    else {
      bVar6 = false;
      bVar7 = false;
      if (0.0 <= fVar13) {
        bVar6 = false;
        bVar7 = true;
        if (!NAN(fVar12)) {
          bVar6 = fVar12 < 1.0;
          bVar7 = false;
        }
      }
      if (bVar6 == bVar7) goto LAB_1098fe6b4;
      uVar18 = NEON_fmov(0xbf800000,4);
      fVar12 = fVar12 * ((float)*(undefined8 *)pfVar2 + (float)uVar18);
      fVar13 = fVar13 * ((float)((ulong)*(undefined8 *)pfVar2 >> 0x20) +
                        (float)((ulong)uVar18 >> 0x20));
      fVar15 = fVar12 - (float)(int)fVar12;
      puVar1 = (undefined8 *)
               (*(long *)(lVar10 + 0x98) + (long)(int)fVar12 * 8 +
               (long)(*(int *)(lVar10 + 0x90) * (int)fVar13) * 8);
      fVar12 = (float)*puVar1;
      fVar21 = (float)((ulong)*puVar1 >> 0x20);
      fVar12 = fVar12 + ((float)puVar1[1] - fVar12) * fVar15;
      fVar21 = fVar21 + ((float)((ulong)puVar1[1] >> 0x20) - fVar21) * fVar15;
      uVar18 = puVar1[*(int *)(lVar10 + 0x90)];
      uVar23 = (puVar1 + *(int *)(lVar10 + 0x90))[1];
      fVar16 = (float)uVar18;
      fVar19 = (float)((ulong)uVar18 >> 0x20);
      uVar18 = CONCAT44(fVar21 + ((fVar19 + ((float)((ulong)uVar23 >> 0x20) - fVar19) * fVar15) -
                                 fVar21) * (fVar13 - (float)(int)fVar13),
                        fVar12 + ((fVar16 + ((float)uVar23 - fVar16) * fVar15) - fVar12) *
                                 (fVar13 - (float)(int)fVar13));
    }
    *extraout_x8 = uVar18;
  }
  else {
    if (piRam000000011373c690 == (int *)0x0) {
      uVar11 = 0;
      FUN_1099adbb8(0x11373c690,0x11382bb14,&UNK_10f589688,3);
      if ((uVar11 & 1) != 0) goto LAB_1098fe504;
    }
    else if (2 < *piRam000000011373c690) {
LAB_1098fe504:
      uStack_108 = 0;
      uStack_b0 = 0;
      uStack_f0 = 0;
      uStack_f8 = 0;
      uStack_e0 = 0;
      uStack_e8 = 0;
      uStack_d0 = 0;
      uStack_d8 = 0;
      uStack_c0 = 0;
      uStack_c8 = 0;
      uStack_b8 = 0;
      FUN_1099a9f0c(&uStack_108,&UNK_10f589688,0x17f,0,FUN_1099aa768,0);
      pppuStack_120 = &pppuStack_98;
      pcStack_118 = FUN_1098fe98c;
      FUN_1099ade68(&ppppuStack_90,&UNK_10f589755,0x36,0xf,&pppuStack_120);
      pcVar3 = pcStack_88;
      pppppuVar4 = (undefined8 *****)ppppuStack_90;
      if (-1 < (long)ppuStack_80) {
        pcVar3 = (code *)((ulong)ppuStack_80 >> 0x38);
        pppppuVar4 = &ppppuStack_90;
      }
      FUN_1092b4db8(lStack_100 + 0x7540,pppppuVar4,pcVar3);
LAB_1098fe67c:
      FUN_1099ab3b0(&uStack_108);
    }
LAB_1098fe684:
    *extraout_x8 = *ppppuVar8;
  }
  return;
}



/* Entry: 1098fdf18; end: 1098fdf57;  */

/* WARNING: Removing unreachable block (ram,0x0001098fe674) */

void FUN_1098fdf18(undefined8 *param_1,long param_2,undefined8 ****param_3)

{
  undefined8 *puVar1;
  float *pfVar2;
  code *pcVar3;
  undefined8 *****pppppuVar4;
  undefined8 ****ppppuVar5;
  bool bVar6;
  bool bVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  float fVar12;
  ulong uVar13;
  float fVar14;
  int iVar15;
  undefined8 uVar16;
  float fVar17;
  int iVar18;
  float fVar19;
  int iVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined8 ***pppuStack_f0;
  code *pcStack_e8;
  byte bStack_d9;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  undefined8 ***pppuStack_68;
  undefined8 ****ppppuStack_60;
  code *pcStack_58;
  undefined8 **ppuStack_50;
  code *pcStack_48;
  
  pfVar2 = (float *)(param_2 + 0x70);
  fVar9 = SUB84(*param_3,0) * (float)*(undefined8 *)(param_2 + 0x78) +
          (float)*(undefined8 *)(param_2 + 0x80);
  fVar10 = (float)((ulong)*param_3 >> 0x20) *
           (float)((ulong)*(undefined8 *)(param_2 + 0x78) >> 0x20) +
           (float)((ulong)*(undefined8 *)(param_2 + 0x80) >> 0x20);
  uStack_78 = CONCAT44(fVar10,fVar9);
  pppuStack_68 = param_3;
  if ((uint)ABS(fVar9) < 0x7f800000 && (uint)ABS(fVar10) < 0x7f800000) {
    if ((*pfVar2 < 2.0) || (*(float *)(param_2 + 0x74) < 2.0)) {
      if (piRam000000011373c6b0 == (int *)0x0) {
        uVar13 = 0;
        FUN_1099adbb8(0x11373c6b0,0x11382bb14,&UNK_10f589688,3);
        if ((uVar13 & 1) != 0) goto LAB_1098fe5cc;
      }
      else if (2 < *piRam000000011373c6b0) {
LAB_1098fe5cc:
        uStack_d8 = 0;
        uStack_80 = 0;
        uStack_c0 = 0;
        uStack_c8 = 0;
        uStack_b0 = 0;
        uStack_b8 = 0;
        uStack_a0 = 0;
        uStack_a8 = 0;
        uStack_90 = 0;
        uStack_98 = 0;
        uStack_88 = 0;
        FUN_1099a9f0c(&uStack_d8,&UNK_10f589688,0x189,0,FUN_1099aa768,0);
        pppuStack_f0 = &pppuStack_68;
        pcStack_e8 = FUN_1098fe98c;
        FUN_1099ade68(&ppppuStack_60,&UNK_10f58978c,0x36,0xf,&pppuStack_f0);
        pcVar3 = pcStack_58;
        pppppuVar4 = (undefined8 *****)ppppuStack_60;
        if (-1 < (long)ppuStack_50) {
          pcVar3 = (code *)((ulong)ppuStack_50 >> 0x38);
          pppppuVar4 = &ppppuStack_60;
        }
        FUN_1092b4db8(lStack_d0 + 0x7540,pppppuVar4,pcVar3);
        goto LAB_1098fe67c;
      }
      goto LAB_1098fe684;
    }
    bVar6 = false;
    bVar7 = false;
    if (0.0 <= fVar9) {
      bVar6 = false;
      bVar7 = true;
      if (!NAN(fVar10)) {
        bVar6 = fVar10 < 1.0;
        bVar7 = false;
      }
    }
    if (bVar6 == bVar7) {
LAB_1098fe6b4:
      if (*(char *)(param_2 + 0xc0) == '\0') {
        if (piRam000000011373c6d0 == (int *)0x0) {
          uVar13 = 0;
          FUN_1099adbb8(0x11373c6d0,0x11382bb14,&UNK_10f589688,3);
          if ((uVar13 & 1) != 0) goto LAB_1098fe894;
        }
        else if (2 < *piRam000000011373c6d0) {
LAB_1098fe894:
          uStack_d8 = 0;
          uStack_80 = 0;
          uStack_c0 = 0;
          uStack_c8 = 0;
          uStack_b0 = 0;
          uStack_b8 = 0;
          uStack_a0 = 0;
          uStack_a8 = 0;
          uStack_90 = 0;
          uStack_98 = 0;
          uStack_88 = 0;
          FUN_1099a9f0c(&uStack_d8,&UNK_10f589688,0x191,0,FUN_1099aa768,0);
          puStack_70 = &uStack_78;
          ppppuStack_60 = &pppuStack_68;
          pcStack_58 = FUN_1098fe98c;
          ppuStack_50 = &puStack_70;
          pcStack_48 = FUN_1098fe98c;
          FUN_1099ade68(&pppuStack_f0,&UNK_10f5897c3,0x57,0xff,&ppppuStack_60);
          pcVar3 = pcStack_e8;
          ppppuVar5 = (undefined8 ****)pppuStack_f0;
          if (-1 < (char)bStack_d9) {
            pcVar3 = (code *)(ulong)bStack_d9;
            ppppuVar5 = &pppuStack_f0;
          }
          FUN_1092b4db8(lStack_d0 + 0x7540,ppppuVar5,pcVar3);
          if ((char)bStack_d9 < '\0') {
            __ZdlPv(pppuStack_f0);
          }
          goto LAB_1098fe67c;
        }
        goto LAB_1098fe684;
      }
      uVar16 = NEON_fmov(0xbf800000,4);
      fVar12 = (float)*(undefined8 *)pfVar2;
      fVar19 = (float)((ulong)*(undefined8 *)pfVar2 >> 0x20);
      fVar9 = fVar9 * (fVar12 + (float)uVar16);
      fVar10 = fVar10 * (fVar19 + (float)((ulong)uVar16 >> 0x20));
      fVar14 = (float)(int)fVar9;
      fVar17 = (float)(int)fVar10;
      uVar13 = NEON_scvtf(CONCAT44((int)fVar19 + -2,(int)fVar12 + -2),4);
      uVar13 = uVar13 ^ (uVar13 ^ CONCAT44(fVar17,fVar14)) &
                        ~CONCAT44(-(uint)((float)(uVar13 >> 0x20) < fVar17),
                                  -(uint)((float)uVar13 < fVar14));
      iVar15 = -(uint)(fVar14 < 0.0);
      iVar18 = -(uint)(fVar17 < 0.0);
      fVar12 = (float)CONCAT13((byte)(uVar13 >> 0x18) & ~(byte)((uint)iVar15 >> 0x18),
                               CONCAT12((byte)(uVar13 >> 0x10) & ~(byte)((uint)iVar15 >> 0x10),
                                        CONCAT11((byte)(uVar13 >> 8) & ~(byte)((uint)iVar15 >> 8),
                                                 (byte)uVar13 & ~(byte)iVar15)));
      iVar11 = (int)fVar12;
      iVar18 = (int)(float)(CONCAT17((byte)(uVar13 >> 0x38) & ~(byte)((uint)iVar18 >> 0x18),
                                     CONCAT16((byte)(uVar13 >> 0x30) & ~(byte)((uint)iVar18 >> 0x10)
                                              ,CONCAT15((byte)(uVar13 >> 0x28) &
                                                        ~(byte)((uint)iVar18 >> 8),
                                                        CONCAT14((byte)(uVar13 >> 0x20) &
                                                                 ~(byte)iVar18,fVar12)))) >> 0x20);
      uVar16 = NEON_scvtf(CONCAT44(iVar18,iVar11),4);
      fVar9 = fVar9 - (float)uVar16;
      fVar10 = fVar10 - (float)((ulong)uVar16 >> 0x20);
      uVar13 = NEON_fmov(0x3f800000,4);
      uVar13 = uVar13 ^ (uVar13 ^ CONCAT44(fVar10,fVar9)) &
                        ~CONCAT44(-(uint)((float)(uVar13 >> 0x20) < fVar10),
                                  -(uint)((float)uVar13 < fVar9));
      iVar15 = -(uint)(fVar9 < 0.0);
      iVar20 = -(uint)(fVar10 < 0.0);
      fVar19 = (float)CONCAT13((byte)(uVar13 >> 0x18) & ~(byte)((uint)iVar15 >> 0x18),
                               CONCAT12((byte)(uVar13 >> 0x10) & ~(byte)((uint)iVar15 >> 0x10),
                                        CONCAT11((byte)(uVar13 >> 8) & ~(byte)((uint)iVar15 >> 8),
                                                 (byte)uVar13 & ~(byte)iVar15)));
      lVar8 = *(long *)(param_2 + 0x98);
      iVar18 = *(int *)(param_2 + 0x90) * iVar18;
      iVar15 = *(int *)(param_2 + 0x90) + iVar18;
      fVar17 = 1.0 - fVar19;
      fVar14 = (float)(CONCAT17((byte)(uVar13 >> 0x38) & ~(byte)((uint)iVar20 >> 0x18),
                                CONCAT16((byte)(uVar13 >> 0x30) & ~(byte)((uint)iVar20 >> 0x10),
                                         CONCAT15((byte)(uVar13 >> 0x28) &
                                                  ~(byte)((uint)iVar20 >> 8),
                                                  CONCAT14((byte)(uVar13 >> 0x20) & ~(byte)iVar20,
                                                           fVar19)))) >> 0x20);
      fVar12 = 1.0 - fVar14;
      uVar16 = *(undefined8 *)(lVar8 + (long)(iVar18 + iVar11) * 8);
      fVar26 = (float)uVar16;
      fVar27 = (float)((ulong)uVar16 >> 0x20);
      uVar16 = *(undefined8 *)(lVar8 + (long)(iVar18 + iVar11 + 1) * 8);
      fVar28 = (float)uVar16;
      fVar29 = (float)((ulong)uVar16 >> 0x20);
      uVar16 = *(undefined8 *)(lVar8 + (long)(iVar15 + iVar11) * 8);
      fVar22 = (float)uVar16;
      fVar23 = (float)((ulong)uVar16 >> 0x20);
      uVar16 = *(undefined8 *)(lVar8 + (long)(iVar15 + iVar11 + 1) * 8);
      fVar24 = (float)uVar16;
      fVar25 = (float)((ulong)uVar16 >> 0x20);
      uVar16 = CONCAT44(((fVar25 - fVar29) * fVar19 + (fVar23 - fVar27) * fVar17) *
                        (fVar10 - fVar14) +
                        ((fVar25 - fVar23) * fVar14 + (fVar29 - fVar27) * fVar12) * (fVar9 - fVar19)
                        + fVar25 * fVar19 * fVar14 +
                          fVar23 * fVar17 * fVar14 +
                          fVar27 * fVar17 * fVar12 + fVar29 * fVar12 * fVar19,
                        ((fVar24 - fVar28) * fVar19 + (fVar22 - fVar26) * fVar17) *
                        (fVar10 - fVar14) +
                        ((fVar24 - fVar22) * fVar14 + (fVar28 - fVar26) * fVar12) * (fVar9 - fVar19)
                        + fVar24 * fVar19 * fVar14 +
                          fVar22 * fVar17 * fVar14 +
                          fVar26 * fVar17 * fVar12 + fVar28 * fVar12 * fVar19);
    }
    else {
      bVar6 = false;
      bVar7 = false;
      if (0.0 <= fVar10) {
        bVar6 = false;
        bVar7 = true;
        if (!NAN(fVar9)) {
          bVar6 = fVar9 < 1.0;
          bVar7 = false;
        }
      }
      if (bVar6 == bVar7) goto LAB_1098fe6b4;
      uVar16 = NEON_fmov(0xbf800000,4);
      fVar9 = fVar9 * ((float)*(undefined8 *)pfVar2 + (float)uVar16);
      fVar10 = fVar10 * ((float)((ulong)*(undefined8 *)pfVar2 >> 0x20) +
                        (float)((ulong)uVar16 >> 0x20));
      fVar12 = fVar9 - (float)(int)fVar9;
      puVar1 = (undefined8 *)
               (*(long *)(param_2 + 0x98) + (long)(int)fVar9 * 8 +
               (long)(*(int *)(param_2 + 0x90) * (int)fVar10) * 8);
      fVar9 = (float)*puVar1;
      fVar19 = (float)((ulong)*puVar1 >> 0x20);
      fVar9 = fVar9 + ((float)puVar1[1] - fVar9) * fVar12;
      fVar19 = fVar19 + ((float)((ulong)puVar1[1] >> 0x20) - fVar19) * fVar12;
      uVar16 = puVar1[*(int *)(param_2 + 0x90)];
      uVar21 = (puVar1 + *(int *)(param_2 + 0x90))[1];
      fVar14 = (float)uVar16;
      fVar17 = (float)((ulong)uVar16 >> 0x20);
      uVar16 = CONCAT44(fVar19 + ((fVar17 + ((float)((ulong)uVar21 >> 0x20) - fVar17) * fVar12) -
                                 fVar19) * (fVar10 - (float)(int)fVar10),
                        fVar9 + ((fVar14 + ((float)uVar21 - fVar14) * fVar12) - fVar9) *
                                (fVar10 - (float)(int)fVar10));
    }
    *param_1 = uVar16;
  }
  else {
    if (piRam000000011373c690 == (int *)0x0) {
      uVar13 = 0;
      FUN_1099adbb8(0x11373c690,0x11382bb14,&UNK_10f589688,3);
      if ((uVar13 & 1) != 0) goto LAB_1098fe504;
    }
    else if (2 < *piRam000000011373c690) {
LAB_1098fe504:
      uStack_d8 = 0;
      uStack_80 = 0;
      uStack_c0 = 0;
      uStack_c8 = 0;
      uStack_b0 = 0;
      uStack_b8 = 0;
      uStack_a0 = 0;
      uStack_a8 = 0;
      uStack_90 = 0;
      uStack_98 = 0;
      uStack_88 = 0;
      FUN_1099a9f0c(&uStack_d8,&UNK_10f589688,0x17f,0,FUN_1099aa768,0);
      pppuStack_f0 = &pppuStack_68;
      pcStack_e8 = FUN_1098fe98c;
      FUN_1099ade68(&ppppuStack_60,&UNK_10f589755,0x36,0xf,&pppuStack_f0);
      pcVar3 = pcStack_58;
      pppppuVar4 = (undefined8 *****)ppppuStack_60;
      if (-1 < (long)ppuStack_50) {
        pcVar3 = (code *)((ulong)ppuStack_50 >> 0x38);
        pppppuVar4 = &ppppuStack_60;
      }
      FUN_1092b4db8(lStack_d0 + 0x7540,pppppuVar4,pcVar3);
LAB_1098fe67c:
      FUN_1099ab3b0(&uStack_d8);
    }
LAB_1098fe684:
    *param_1 = *param_3;
  }
  return;
}



/* Entry: 1098fdf58; end: 1098fdfd7;  */

float FUN_1098fdf58(long param_1,undefined8 param_2)

{
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  FUN_1098fec6c(&fStack_20,param_1 + 0x18,param_2);
  return ABS(-(fStack_1c * fStack_18) + fStack_14 * fStack_20);
}



/* Entry: 1098fdfd8; end: 1098fe073;  */

undefined8 * FUN_1098fdfd8(undefined4 param_1,long *param_2,long *param_3)

{
  undefined8 *puVar1;
  undefined8 auStack_48 [2];
  undefined8 auStack_38 [2];
  undefined4 uStack_24;
  
  uStack_24 = param_1;
  (**(code **)(*param_3 + 0x18))(auStack_38,param_3);
  (**(code **)(*param_2 + 0x18))(auStack_48,param_2);
  puVar1 = auStack_38;
  FUN_1093f6abc(puVar1,auStack_48,&uStack_24);
  _free(auStack_48[0]);
  _free(auStack_38[0]);
  return puVar1;
}



/* Entry: 1098fe074; end: 1098fe07b;  */

undefined8 FUN_1098fe074(void)

{
  return 0;
}



/* Entry: 1098fe07c; end: 1098fe227;  */

void FUN_1098fe07c(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined1 uStack_90;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined1 uStack_38;
  
  puVar4 = (undefined8 *)0xc8;
  __Znwm();
  puVar4[1] = 0;
  *puVar4 = 0;
  puVar4[3] = 0;
  puVar4[2] = 0;
  puVar4[5] = 0;
  puVar4[4] = 0;
  puVar4[7] = 0;
  puVar4[6] = 0;
  puVar4[9] = 0;
  puVar4[8] = 0;
  puVar4[0xb] = 0;
  puVar4[10] = 0;
  puVar4[0xd] = 0;
  puVar4[0xc] = 0;
  puVar4[0xf] = 0;
  puVar4[0xe] = 0;
  puVar4[0x11] = 0;
  puVar4[0x10] = 0;
  puVar4[0x13] = 0;
  puVar4[0x12] = 0;
  puVar4[0x15] = 0;
  puVar4[0x14] = 0;
  puVar4[0x17] = 0;
  puVar4[0x16] = 0;
  puVar4[0x18] = 0;
  *puVar4 = &PTR_FUN_110b1cf90;
  FUN_1098ff484(puVar4 + 1,0x11373c5c0);
  uStack_f0 = 0;
  uStack_e8 = 0;
  uStack_c0 = 0;
  uStack_c8 = 0;
  uStack_b0 = 0;
  uStack_b8 = 0;
  uStack_a0 = 0;
  plStack_a8 = (long *)0x0;
  uStack_98 = 0;
  uStack_90 = 1;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  plStack_50 = (long *)0x0;
  uStack_40 = 0;
  uStack_38 = 1;
  FUN_1098ff158(&uStack_f0,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  uStack_90 = *(undefined1 *)(param_1 + 0x68);
  uStack_38 = uStack_90;
  FUN_1098ff158(puVar4 + 1,uStack_f0,uStack_e8);
  *(undefined1 *)(puVar4 + 0xd) = uStack_90;
  *(undefined1 *)(puVar4 + 0x18) = uStack_90;
  plVar5 = (long *)*param_2;
  *param_2 = (long)puVar4;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  plVar5 = plStack_50;
  if (plStack_50 != (long *)0x0) {
    plVar1 = plStack_50 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_50 + 0x10))(plStack_50);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  plVar5 = plStack_a8;
  if (plStack_a8 != (long *)0x0) {
    plVar1 = plStack_a8 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  _free(uStack_f0);
  return;
}



/* Entry: 1098fe228; end: 1098fe42b;  */

/* WARNING: Removing unreachable block (ram,0x0001098fe674) */

void FUN_1098fe228(long param_1,long *param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  char cVar3;
  undefined8 *****pppppuVar4;
  undefined8 ****ppppuVar5;
  bool bVar6;
  bool bVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  float *pfVar11;
  undefined8 ****ppppuVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  float fVar16;
  float fVar17;
  int iVar18;
  float fVar19;
  ulong uVar20;
  float fVar21;
  int iVar22;
  undefined8 uVar23;
  float fVar24;
  int iVar25;
  float fVar26;
  int iVar27;
  undefined8 uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined8 ***pppuStack_230;
  code *pcStack_228;
  byte bStack_219;
  undefined8 uStack_218;
  long lStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined4 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 ***pppuStack_1a8;
  undefined8 ****ppppuStack_1a0;
  code *pcStack_198;
  undefined8 **ppuStack_190;
  code *pcStack_188;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long *plStack_e0;
  undefined1 uStack_c8;
  long *plStack_70;
  undefined1 uStack_58;
  long lStack_50;
  ulong uStack_48;
  
  puVar8 = (undefined8 *)0xf8;
  __Znwm();
  puVar8[1] = 0;
  *puVar8 = 0;
  puVar8[3] = 0;
  puVar8[2] = 0;
  puVar8[5] = 0;
  puVar8[4] = 0;
  puVar8[7] = 0;
  puVar8[6] = 0;
  puVar8[9] = 0;
  puVar8[8] = 0;
  puVar8[0xb] = 0;
  puVar8[10] = 0;
  puVar8[0xd] = 0;
  puVar8[0xc] = 0;
  puVar8[0xf] = 0;
  puVar8[0xe] = 0;
  puVar8[0x11] = 0;
  puVar8[0x10] = 0;
  puVar8[0x13] = 0;
  puVar8[0x12] = 0;
  puVar8[0x15] = 0;
  puVar8[0x14] = 0;
  puVar8[0x17] = 0;
  puVar8[0x16] = 0;
  puVar8[0x19] = 0;
  puVar8[0x18] = 0;
  puVar8[0x1b] = 0;
  puVar8[0x1a] = 0;
  puVar8[0x1d] = 0;
  puVar8[0x1c] = 0;
  puVar8[0x1e] = 0;
  *puVar8 = &PTR_FUN_110b1cef8;
  FUN_1098fc25c(puVar8 + 1,0x11373c5b0);
  lStack_50 = 0;
  uStack_48 = 0;
  uVar15 = *(ulong *)(param_1 + 0x10);
  uVar20 = uStack_48;
  if ((uVar15 == 0) || (uVar20 = uVar15, (long)uVar15 < 1)) {
LAB_1098fe2f8:
    uStack_48 = uVar20;
    lVar9 = lStack_50;
    FUN_1098fc25c(&uStack_140,&lStack_50);
    _free(lVar9);
    uStack_c8 = *(undefined1 *)(param_1 + 0x68);
    uStack_58 = uStack_c8;
    FUN_1098fc2d8(puVar8 + 1,uStack_140,uStack_138);
    *(undefined1 *)(puVar8 + 0x10) = uStack_c8;
    *(undefined1 *)(puVar8 + 0x1e) = uStack_c8;
    plVar10 = (long *)*param_2;
    *param_2 = (long)puVar8;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 8))();
    }
    if (plStack_70 != (long *)0x0) {
      plVar10 = plStack_70 + 1;
      do {
        lVar9 = *plVar10;
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar6) {
          *plVar10 = lVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plStack_70 + 0x10))(plStack_70);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_70);
      }
    }
    if (plStack_e0 != (long *)0x0) {
      plVar10 = plStack_e0 + 1;
      do {
        lVar9 = *plVar10;
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar6) {
          *plVar10 = lVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_e0);
      }
    }
    _free(uStack_140);
    return;
  }
  if (uVar15 >> 0x3d == 0) {
    lVar9 = uVar15 << 3;
    _malloc();
    if (lVar9 != 0) {
      uVar13 = 0;
      lVar14 = *(long *)(param_1 + 8);
      do {
        *(double *)(lVar9 + uVar13 * 8) = (double)*(float *)(lVar14 + uVar13 * 4);
        uVar13 = uVar13 + 1;
        lStack_50 = lVar9;
      } while (uVar15 != uVar13);
      goto LAB_1098fe2f8;
    }
  }
  puVar8 = (undefined8 *)0x8;
  ___cxa_allocate_exception();
  __ZNSt9bad_allocC1Ev();
  pfVar11 = (float *)PTR___ZTISt9bad_alloc_110346a68;
  ppppuVar12 = (undefined8 ****)PTR___ZNSt9bad_allocD1Ev_110346998;
  ___cxa_throw();
  FUN_1098f9ba0(&uStack_140);
  __Unwind_Resume();
  fVar16 = SUB84(*ppppuVar12,0) * (float)*(undefined8 *)(pfVar11 + 2) +
           (float)*(undefined8 *)(pfVar11 + 4);
  fVar17 = (float)((ulong)*ppppuVar12 >> 0x20) *
           (float)((ulong)*(undefined8 *)(pfVar11 + 2) >> 0x20) +
           (float)((ulong)*(undefined8 *)(pfVar11 + 4) >> 0x20);
  uStack_1b8 = CONCAT44(fVar17,fVar16);
  pppuStack_1a8 = ppppuVar12;
  if ((uint)ABS(fVar16) < 0x7f800000 && (uint)ABS(fVar17) < 0x7f800000) {
    if ((*pfVar11 < 2.0) || (pfVar11[1] < 2.0)) {
      if (piRam000000011373c6b0 == (int *)0x0) {
        uVar20 = 0;
        FUN_1099adbb8(0x11373c6b0,0x11382bb14,&UNK_10f589688,3);
        if ((uVar20 & 1) != 0) goto LAB_1098fe5cc;
      }
      else if (2 < *piRam000000011373c6b0) {
LAB_1098fe5cc:
        uStack_218 = 0;
        uStack_1c0 = 0;
        uStack_200 = 0;
        uStack_208 = 0;
        uStack_1f0 = 0;
        uStack_1f8 = 0;
        uStack_1e0 = 0;
        uStack_1e8 = 0;
        uStack_1d0 = 0;
        uStack_1d8 = 0;
        uStack_1c8 = 0;
        FUN_1099a9f0c(&uStack_218,&UNK_10f589688,0x189,0,FUN_1099aa768,0);
        pppuStack_230 = &pppuStack_1a8;
        pcStack_228 = FUN_1098fe98c;
        FUN_1099ade68(&ppppuStack_1a0,&UNK_10f58978c,0x36,0xf,&pppuStack_230);
        pcVar2 = pcStack_198;
        pppppuVar4 = (undefined8 *****)ppppuStack_1a0;
        if (-1 < (long)ppuStack_190) {
          pcVar2 = (code *)((ulong)ppuStack_190 >> 0x38);
          pppppuVar4 = &ppppuStack_1a0;
        }
        FUN_1092b4db8(lStack_210 + 0x7540,pppppuVar4,pcVar2);
        goto LAB_1098fe67c;
      }
      goto LAB_1098fe684;
    }
    bVar6 = false;
    bVar7 = false;
    if (0.0 <= fVar16) {
      bVar6 = false;
      bVar7 = true;
      if (!NAN(fVar17)) {
        bVar6 = fVar17 < 1.0;
        bVar7 = false;
      }
    }
    if (bVar6 == bVar7) {
LAB_1098fe6b4:
      if (*(char *)(pfVar11 + 0x14) == '\0') {
        if (piRam000000011373c6d0 == (int *)0x0) {
          uVar20 = 0;
          FUN_1099adbb8(0x11373c6d0,0x11382bb14,&UNK_10f589688,3);
          if ((uVar20 & 1) != 0) goto LAB_1098fe894;
        }
        else if (2 < *piRam000000011373c6d0) {
LAB_1098fe894:
          uStack_218 = 0;
          uStack_1c0 = 0;
          uStack_200 = 0;
          uStack_208 = 0;
          uStack_1f0 = 0;
          uStack_1f8 = 0;
          uStack_1e0 = 0;
          uStack_1e8 = 0;
          uStack_1d0 = 0;
          uStack_1d8 = 0;
          uStack_1c8 = 0;
          FUN_1099a9f0c(&uStack_218,&UNK_10f589688,0x191,0,FUN_1099aa768,0);
          puStack_1b0 = &uStack_1b8;
          ppppuStack_1a0 = &pppuStack_1a8;
          pcStack_198 = FUN_1098fe98c;
          ppuStack_190 = &puStack_1b0;
          pcStack_188 = FUN_1098fe98c;
          FUN_1099ade68(&pppuStack_230,&UNK_10f5897c3,0x57,0xff,&ppppuStack_1a0);
          pcVar2 = pcStack_228;
          ppppuVar5 = (undefined8 ****)pppuStack_230;
          if (-1 < (char)bStack_219) {
            pcVar2 = (code *)(ulong)bStack_219;
            ppppuVar5 = &pppuStack_230;
          }
          FUN_1092b4db8(lStack_210 + 0x7540,ppppuVar5,pcVar2);
          if ((char)bStack_219 < '\0') {
            __ZdlPv(pppuStack_230);
          }
          goto LAB_1098fe67c;
        }
        goto LAB_1098fe684;
      }
      uVar23 = NEON_fmov(0xbf800000,4);
      fVar19 = (float)*(undefined8 *)pfVar11;
      fVar26 = (float)((ulong)*(undefined8 *)pfVar11 >> 0x20);
      fVar16 = fVar16 * (fVar19 + (float)uVar23);
      fVar17 = fVar17 * (fVar26 + (float)((ulong)uVar23 >> 0x20));
      fVar21 = (float)(int)fVar16;
      fVar24 = (float)(int)fVar17;
      uVar20 = NEON_scvtf(CONCAT44((int)fVar26 + -2,(int)fVar19 + -2),4);
      uVar20 = uVar20 ^ (uVar20 ^ CONCAT44(fVar24,fVar21)) &
                        ~CONCAT44(-(uint)((float)(uVar20 >> 0x20) < fVar24),
                                  -(uint)((float)uVar20 < fVar21));
      iVar22 = -(uint)(fVar21 < 0.0);
      iVar25 = -(uint)(fVar24 < 0.0);
      fVar19 = (float)CONCAT13((byte)(uVar20 >> 0x18) & ~(byte)((uint)iVar22 >> 0x18),
                               CONCAT12((byte)(uVar20 >> 0x10) & ~(byte)((uint)iVar22 >> 0x10),
                                        CONCAT11((byte)(uVar20 >> 8) & ~(byte)((uint)iVar22 >> 8),
                                                 (byte)uVar20 & ~(byte)iVar22)));
      iVar18 = (int)fVar19;
      iVar25 = (int)(float)(CONCAT17((byte)(uVar20 >> 0x38) & ~(byte)((uint)iVar25 >> 0x18),
                                     CONCAT16((byte)(uVar20 >> 0x30) & ~(byte)((uint)iVar25 >> 0x10)
                                              ,CONCAT15((byte)(uVar20 >> 0x28) &
                                                        ~(byte)((uint)iVar25 >> 8),
                                                        CONCAT14((byte)(uVar20 >> 0x20) &
                                                                 ~(byte)iVar25,fVar19)))) >> 0x20);
      uVar23 = NEON_scvtf(CONCAT44(iVar25,iVar18),4);
      fVar16 = fVar16 - (float)uVar23;
      fVar17 = fVar17 - (float)((ulong)uVar23 >> 0x20);
      uVar20 = NEON_fmov(0x3f800000,4);
      uVar20 = uVar20 ^ (uVar20 ^ CONCAT44(fVar17,fVar16)) &
                        ~CONCAT44(-(uint)((float)(uVar20 >> 0x20) < fVar17),
                                  -(uint)((float)uVar20 < fVar16));
      iVar22 = -(uint)(fVar16 < 0.0);
      iVar27 = -(uint)(fVar17 < 0.0);
      fVar26 = (float)CONCAT13((byte)(uVar20 >> 0x18) & ~(byte)((uint)iVar22 >> 0x18),
                               CONCAT12((byte)(uVar20 >> 0x10) & ~(byte)((uint)iVar22 >> 0x10),
                                        CONCAT11((byte)(uVar20 >> 8) & ~(byte)((uint)iVar22 >> 8),
                                                 (byte)uVar20 & ~(byte)iVar22)));
      lVar9 = *(long *)(pfVar11 + 10);
      iVar25 = (int)pfVar11[8] * iVar25;
      iVar22 = (int)pfVar11[8] + iVar25;
      fVar24 = 1.0 - fVar26;
      fVar21 = (float)(CONCAT17((byte)(uVar20 >> 0x38) & ~(byte)((uint)iVar27 >> 0x18),
                                CONCAT16((byte)(uVar20 >> 0x30) & ~(byte)((uint)iVar27 >> 0x10),
                                         CONCAT15((byte)(uVar20 >> 0x28) &
                                                  ~(byte)((uint)iVar27 >> 8),
                                                  CONCAT14((byte)(uVar20 >> 0x20) & ~(byte)iVar27,
                                                           fVar26)))) >> 0x20);
      fVar19 = 1.0 - fVar21;
      uVar23 = *(undefined8 *)(lVar9 + (long)(iVar25 + iVar18) * 8);
      fVar33 = (float)uVar23;
      fVar34 = (float)((ulong)uVar23 >> 0x20);
      uVar23 = *(undefined8 *)(lVar9 + (long)(iVar25 + iVar18 + 1) * 8);
      fVar35 = (float)uVar23;
      fVar36 = (float)((ulong)uVar23 >> 0x20);
      uVar23 = *(undefined8 *)(lVar9 + (long)(iVar22 + iVar18) * 8);
      fVar29 = (float)uVar23;
      fVar30 = (float)((ulong)uVar23 >> 0x20);
      uVar23 = *(undefined8 *)(lVar9 + (long)(iVar22 + iVar18 + 1) * 8);
      fVar31 = (float)uVar23;
      fVar32 = (float)((ulong)uVar23 >> 0x20);
      uVar23 = CONCAT44(((fVar32 - fVar36) * fVar26 + (fVar30 - fVar34) * fVar24) *
                        (fVar17 - fVar21) +
                        ((fVar32 - fVar30) * fVar21 + (fVar36 - fVar34) * fVar19) *
                        (fVar16 - fVar26) +
                        fVar32 * fVar26 * fVar21 +
                        fVar30 * fVar24 * fVar21 +
                        fVar34 * fVar24 * fVar19 + fVar36 * fVar19 * fVar26,
                        ((fVar31 - fVar35) * fVar26 + (fVar29 - fVar33) * fVar24) *
                        (fVar17 - fVar21) +
                        ((fVar31 - fVar29) * fVar21 + (fVar35 - fVar33) * fVar19) *
                        (fVar16 - fVar26) +
                        fVar31 * fVar26 * fVar21 +
                        fVar29 * fVar24 * fVar21 +
                        fVar33 * fVar24 * fVar19 + fVar35 * fVar19 * fVar26);
    }
    else {
      bVar6 = false;
      bVar7 = false;
      if (0.0 <= fVar17) {
        bVar6 = false;
        bVar7 = true;
        if (!NAN(fVar16)) {
          bVar6 = fVar16 < 1.0;
          bVar7 = false;
        }
      }
      if (bVar6 == bVar7) goto LAB_1098fe6b4;
      uVar23 = NEON_fmov(0xbf800000,4);
      fVar16 = fVar16 * ((float)*(undefined8 *)pfVar11 + (float)uVar23);
      fVar17 = fVar17 * ((float)((ulong)*(undefined8 *)pfVar11 >> 0x20) +
                        (float)((ulong)uVar23 >> 0x20));
      fVar19 = fVar16 - (float)(int)fVar16;
      puVar1 = (undefined8 *)
               (*(long *)(pfVar11 + 10) + (long)(int)fVar16 * 8 +
               (long)((int)pfVar11[8] * (int)fVar17) * 8);
      fVar16 = (float)*puVar1;
      fVar26 = (float)((ulong)*puVar1 >> 0x20);
      fVar16 = fVar16 + ((float)puVar1[1] - fVar16) * fVar19;
      fVar26 = fVar26 + ((float)((ulong)puVar1[1] >> 0x20) - fVar26) * fVar19;
      uVar23 = puVar1[(int)pfVar11[8]];
      uVar28 = (puVar1 + (int)pfVar11[8])[1];
      fVar21 = (float)uVar23;
      fVar24 = (float)((ulong)uVar23 >> 0x20);
      uVar23 = CONCAT44(fVar26 + ((fVar24 + ((float)((ulong)uVar28 >> 0x20) - fVar24) * fVar19) -
                                 fVar26) * (fVar17 - (float)(int)fVar17),
                        fVar16 + ((fVar21 + ((float)uVar28 - fVar21) * fVar19) - fVar16) *
                                 (fVar17 - (float)(int)fVar17));
    }
    *puVar8 = uVar23;
  }
  else {
    if (piRam000000011373c690 == (int *)0x0) {
      uVar20 = 0;
      FUN_1099adbb8(0x11373c690,0x11382bb14,&UNK_10f589688,3);
      if ((uVar20 & 1) != 0) goto LAB_1098fe504;
    }
    else if (2 < *piRam000000011373c690) {
LAB_1098fe504:
      uStack_218 = 0;
      uStack_1c0 = 0;
      uStack_200 = 0;
      uStack_208 = 0;
      uStack_1f0 = 0;
      uStack_1f8 = 0;
      uStack_1e0 = 0;
      uStack_1e8 = 0;
      uStack_1d0 = 0;
      uStack_1d8 = 0;
      uStack_1c8 = 0;
      FUN_1099a9f0c(&uStack_218,&UNK_10f589688,0x17f,0,FUN_1099aa768,0);
      pppuStack_230 = &pppuStack_1a8;
      pcStack_228 = FUN_1098fe98c;
      FUN_1099ade68(&ppppuStack_1a0,&UNK_10f589755,0x36,0xf,&pppuStack_230);
      pcVar2 = pcStack_198;
      pppppuVar4 = (undefined8 *****)ppppuStack_1a0;
      if (-1 < (long)ppuStack_190) {
        pcVar2 = (code *)((ulong)ppuStack_190 >> 0x38);
        pppppuVar4 = &ppppuStack_1a0;
      }
      FUN_1092b4db8(lStack_210 + 0x7540,pppppuVar4,pcVar2);
LAB_1098fe67c:
      FUN_1099ab3b0(&uStack_218);
    }
LAB_1098fe684:
    *puVar8 = *ppppuVar12;
  }
  return;
}



/* Entry: 1098fe42c; end: 1098fe98b;  */

/* WARNING: Removing unreachable block (ram,0x0001098fe674) */

void FUN_1098fe42c(undefined8 *param_1,float *param_2,undefined8 ****param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 *****pppppuVar3;
  undefined8 ****ppppuVar4;
  bool bVar5;
  bool bVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  float fVar11;
  ulong uVar12;
  float fVar13;
  int iVar14;
  undefined8 uVar15;
  float fVar16;
  int iVar17;
  float fVar18;
  int iVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined8 ***pppuStack_f0;
  code *pcStack_e8;
  byte bStack_d9;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  undefined8 ***pppuStack_68;
  undefined8 ****ppppuStack_60;
  code *pcStack_58;
  undefined8 **ppuStack_50;
  code *pcStack_48;
  
  fVar8 = SUB84(*param_3,0) * (float)*(undefined8 *)(param_2 + 2) +
          (float)*(undefined8 *)(param_2 + 4);
  fVar9 = (float)((ulong)*param_3 >> 0x20) * (float)((ulong)*(undefined8 *)(param_2 + 2) >> 0x20) +
          (float)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20);
  uStack_78 = CONCAT44(fVar9,fVar8);
  pppuStack_68 = param_3;
  if ((uint)ABS(fVar8) < 0x7f800000 && (uint)ABS(fVar9) < 0x7f800000) {
    if ((*param_2 < 2.0) || (param_2[1] < 2.0)) {
      if (piRam000000011373c6b0 == (int *)0x0) {
        uVar12 = 0;
        FUN_1099adbb8(0x11373c6b0,0x11382bb14,&UNK_10f589688,3);
        if ((uVar12 & 1) != 0) goto LAB_1098fe5cc;
      }
      else if (2 < *piRam000000011373c6b0) {
LAB_1098fe5cc:
        uStack_d8 = 0;
        uStack_80 = 0;
        uStack_c0 = 0;
        uStack_c8 = 0;
        uStack_b0 = 0;
        uStack_b8 = 0;
        uStack_a0 = 0;
        uStack_a8 = 0;
        uStack_90 = 0;
        uStack_98 = 0;
        uStack_88 = 0;
        FUN_1099a9f0c(&uStack_d8,&UNK_10f589688,0x189,0,FUN_1099aa768,0);
        pppuStack_f0 = &pppuStack_68;
        pcStack_e8 = FUN_1098fe98c;
        FUN_1099ade68(&ppppuStack_60,&UNK_10f58978c,0x36,0xf,&pppuStack_f0);
        pcVar2 = pcStack_58;
        pppppuVar3 = (undefined8 *****)ppppuStack_60;
        if (-1 < (long)ppuStack_50) {
          pcVar2 = (code *)((ulong)ppuStack_50 >> 0x38);
          pppppuVar3 = &ppppuStack_60;
        }
        FUN_1092b4db8(lStack_d0 + 0x7540,pppppuVar3,pcVar2);
        goto LAB_1098fe67c;
      }
      goto LAB_1098fe684;
    }
    bVar5 = false;
    bVar6 = false;
    if (0.0 <= fVar8) {
      bVar5 = false;
      bVar6 = true;
      if (!NAN(fVar9)) {
        bVar5 = fVar9 < 1.0;
        bVar6 = false;
      }
    }
    if (bVar5 == bVar6) {
LAB_1098fe6b4:
      if (*(char *)(param_2 + 0x14) == '\0') {
        if (piRam000000011373c6d0 == (int *)0x0) {
          uVar12 = 0;
          FUN_1099adbb8(0x11373c6d0,0x11382bb14,&UNK_10f589688,3);
          if ((uVar12 & 1) != 0) goto LAB_1098fe894;
        }
        else if (2 < *piRam000000011373c6d0) {
LAB_1098fe894:
          uStack_d8 = 0;
          uStack_80 = 0;
          uStack_c0 = 0;
          uStack_c8 = 0;
          uStack_b0 = 0;
          uStack_b8 = 0;
          uStack_a0 = 0;
          uStack_a8 = 0;
          uStack_90 = 0;
          uStack_98 = 0;
          uStack_88 = 0;
          FUN_1099a9f0c(&uStack_d8,&UNK_10f589688,0x191,0,FUN_1099aa768,0);
          puStack_70 = &uStack_78;
          ppppuStack_60 = &pppuStack_68;
          pcStack_58 = FUN_1098fe98c;
          ppuStack_50 = &puStack_70;
          pcStack_48 = FUN_1098fe98c;
          FUN_1099ade68(&pppuStack_f0,&UNK_10f5897c3,0x57,0xff,&ppppuStack_60);
          pcVar2 = pcStack_e8;
          ppppuVar4 = (undefined8 ****)pppuStack_f0;
          if (-1 < (char)bStack_d9) {
            pcVar2 = (code *)(ulong)bStack_d9;
            ppppuVar4 = &pppuStack_f0;
          }
          FUN_1092b4db8(lStack_d0 + 0x7540,ppppuVar4,pcVar2);
          if ((char)bStack_d9 < '\0') {
            __ZdlPv(pppuStack_f0);
          }
          goto LAB_1098fe67c;
        }
        goto LAB_1098fe684;
      }
      uVar15 = NEON_fmov(0xbf800000,4);
      fVar11 = (float)*(undefined8 *)param_2;
      fVar18 = (float)((ulong)*(undefined8 *)param_2 >> 0x20);
      fVar8 = fVar8 * (fVar11 + (float)uVar15);
      fVar9 = fVar9 * (fVar18 + (float)((ulong)uVar15 >> 0x20));
      fVar13 = (float)(int)fVar8;
      fVar16 = (float)(int)fVar9;
      uVar12 = NEON_scvtf(CONCAT44((int)fVar18 + -2,(int)fVar11 + -2),4);
      uVar12 = uVar12 ^ (uVar12 ^ CONCAT44(fVar16,fVar13)) &
                        ~CONCAT44(-(uint)((float)(uVar12 >> 0x20) < fVar16),
                                  -(uint)((float)uVar12 < fVar13));
      iVar14 = -(uint)(fVar13 < 0.0);
      iVar17 = -(uint)(fVar16 < 0.0);
      fVar11 = (float)CONCAT13((byte)(uVar12 >> 0x18) & ~(byte)((uint)iVar14 >> 0x18),
                               CONCAT12((byte)(uVar12 >> 0x10) & ~(byte)((uint)iVar14 >> 0x10),
                                        CONCAT11((byte)(uVar12 >> 8) & ~(byte)((uint)iVar14 >> 8),
                                                 (byte)uVar12 & ~(byte)iVar14)));
      iVar10 = (int)fVar11;
      iVar17 = (int)(float)(CONCAT17((byte)(uVar12 >> 0x38) & ~(byte)((uint)iVar17 >> 0x18),
                                     CONCAT16((byte)(uVar12 >> 0x30) & ~(byte)((uint)iVar17 >> 0x10)
                                              ,CONCAT15((byte)(uVar12 >> 0x28) &
                                                        ~(byte)((uint)iVar17 >> 8),
                                                        CONCAT14((byte)(uVar12 >> 0x20) &
                                                                 ~(byte)iVar17,fVar11)))) >> 0x20);
      uVar15 = NEON_scvtf(CONCAT44(iVar17,iVar10),4);
      fVar8 = fVar8 - (float)uVar15;
      fVar9 = fVar9 - (float)((ulong)uVar15 >> 0x20);
      uVar12 = NEON_fmov(0x3f800000,4);
      uVar12 = uVar12 ^ (uVar12 ^ CONCAT44(fVar9,fVar8)) &
                        ~CONCAT44(-(uint)((float)(uVar12 >> 0x20) < fVar9),
                                  -(uint)((float)uVar12 < fVar8));
      iVar14 = -(uint)(fVar8 < 0.0);
      iVar19 = -(uint)(fVar9 < 0.0);
      fVar18 = (float)CONCAT13((byte)(uVar12 >> 0x18) & ~(byte)((uint)iVar14 >> 0x18),
                               CONCAT12((byte)(uVar12 >> 0x10) & ~(byte)((uint)iVar14 >> 0x10),
                                        CONCAT11((byte)(uVar12 >> 8) & ~(byte)((uint)iVar14 >> 8),
                                                 (byte)uVar12 & ~(byte)iVar14)));
      lVar7 = *(long *)(param_2 + 10);
      iVar17 = (int)param_2[8] * iVar17;
      iVar14 = (int)param_2[8] + iVar17;
      fVar16 = 1.0 - fVar18;
      fVar13 = (float)(CONCAT17((byte)(uVar12 >> 0x38) & ~(byte)((uint)iVar19 >> 0x18),
                                CONCAT16((byte)(uVar12 >> 0x30) & ~(byte)((uint)iVar19 >> 0x10),
                                         CONCAT15((byte)(uVar12 >> 0x28) &
                                                  ~(byte)((uint)iVar19 >> 8),
                                                  CONCAT14((byte)(uVar12 >> 0x20) & ~(byte)iVar19,
                                                           fVar18)))) >> 0x20);
      fVar11 = 1.0 - fVar13;
      uVar15 = *(undefined8 *)(lVar7 + (long)(iVar17 + iVar10) * 8);
      fVar25 = (float)uVar15;
      fVar26 = (float)((ulong)uVar15 >> 0x20);
      uVar15 = *(undefined8 *)(lVar7 + (long)(iVar17 + iVar10 + 1) * 8);
      fVar27 = (float)uVar15;
      fVar28 = (float)((ulong)uVar15 >> 0x20);
      uVar15 = *(undefined8 *)(lVar7 + (long)(iVar14 + iVar10) * 8);
      fVar21 = (float)uVar15;
      fVar22 = (float)((ulong)uVar15 >> 0x20);
      uVar15 = *(undefined8 *)(lVar7 + (long)(iVar14 + iVar10 + 1) * 8);
      fVar23 = (float)uVar15;
      fVar24 = (float)((ulong)uVar15 >> 0x20);
      uVar15 = CONCAT44(((fVar24 - fVar28) * fVar18 + (fVar22 - fVar26) * fVar16) * (fVar9 - fVar13)
                        + ((fVar24 - fVar22) * fVar13 + (fVar28 - fVar26) * fVar11) *
                          (fVar8 - fVar18) +
                          fVar24 * fVar18 * fVar13 +
                          fVar22 * fVar16 * fVar13 +
                          fVar26 * fVar16 * fVar11 + fVar28 * fVar11 * fVar18,
                        ((fVar23 - fVar27) * fVar18 + (fVar21 - fVar25) * fVar16) * (fVar9 - fVar13)
                        + ((fVar23 - fVar21) * fVar13 + (fVar27 - fVar25) * fVar11) *
                          (fVar8 - fVar18) +
                          fVar23 * fVar18 * fVar13 +
                          fVar21 * fVar16 * fVar13 +
                          fVar25 * fVar16 * fVar11 + fVar27 * fVar11 * fVar18);
    }
    else {
      bVar5 = false;
      bVar6 = false;
      if (0.0 <= fVar9) {
        bVar5 = false;
        bVar6 = true;
        if (!NAN(fVar8)) {
          bVar5 = fVar8 < 1.0;
          bVar6 = false;
        }
      }
      if (bVar5 == bVar6) goto LAB_1098fe6b4;
      uVar15 = NEON_fmov(0xbf800000,4);
      fVar8 = fVar8 * ((float)*(undefined8 *)param_2 + (float)uVar15);
      fVar9 = fVar9 * ((float)((ulong)*(undefined8 *)param_2 >> 0x20) +
                      (float)((ulong)uVar15 >> 0x20));
      fVar11 = fVar8 - (float)(int)fVar8;
      puVar1 = (undefined8 *)
               (*(long *)(param_2 + 10) + (long)(int)fVar8 * 8 +
               (long)((int)param_2[8] * (int)fVar9) * 8);
      fVar8 = (float)*puVar1;
      fVar18 = (float)((ulong)*puVar1 >> 0x20);
      fVar8 = fVar8 + ((float)puVar1[1] - fVar8) * fVar11;
      fVar18 = fVar18 + ((float)((ulong)puVar1[1] >> 0x20) - fVar18) * fVar11;
      uVar15 = puVar1[(int)param_2[8]];
      uVar20 = (puVar1 + (int)param_2[8])[1];
      fVar13 = (float)uVar15;
      fVar16 = (float)((ulong)uVar15 >> 0x20);
      uVar15 = CONCAT44(fVar18 + ((fVar16 + ((float)((ulong)uVar20 >> 0x20) - fVar16) * fVar11) -
                                 fVar18) * (fVar9 - (float)(int)fVar9),
                        fVar8 + ((fVar13 + ((float)uVar20 - fVar13) * fVar11) - fVar8) *
                                (fVar9 - (float)(int)fVar9));
    }
    *param_1 = uVar15;
  }
  else {
    if (piRam000000011373c690 == (int *)0x0) {
      uVar12 = 0;
      FUN_1099adbb8(0x11373c690,0x11382bb14,&UNK_10f589688,3);
      if ((uVar12 & 1) != 0) goto LAB_1098fe504;
    }
    else if (2 < *piRam000000011373c690) {
LAB_1098fe504:
      uStack_d8 = 0;
      uStack_80 = 0;
      uStack_c0 = 0;
      uStack_c8 = 0;
      uStack_b0 = 0;
      uStack_b8 = 0;
      uStack_a0 = 0;
      uStack_a8 = 0;
      uStack_90 = 0;
      uStack_98 = 0;
      uStack_88 = 0;
      FUN_1099a9f0c(&uStack_d8,&UNK_10f589688,0x17f,0,FUN_1099aa768,0);
      pppuStack_f0 = &pppuStack_68;
      pcStack_e8 = FUN_1098fe98c;
      FUN_1099ade68(&ppppuStack_60,&UNK_10f589755,0x36,0xf,&pppuStack_f0);
      pcVar2 = pcStack_58;
      pppppuVar3 = (undefined8 *****)ppppuStack_60;
      if (-1 < (long)ppuStack_50) {
        pcVar2 = (code *)((ulong)ppuStack_50 >> 0x38);
        pppppuVar3 = &ppppuStack_60;
      }
      FUN_1092b4db8(lStack_d0 + 0x7540,pppppuVar3,pcVar2);
LAB_1098fe67c:
      FUN_1099ab3b0(&uStack_d8);
    }
LAB_1098fe684:
    *param_1 = *param_3;
  }
  return;
}



/* Entry: 1098fe98c; end: 1098febbb;  */

void FUN_1098fe98c(undefined8 *param_1,long *param_2,long *param_3)

{
  bool bVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uStack_b8;
  undefined1 uStack_b0;
  undefined7 uStack_af;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 **ppuStack_70;
  code *pcStack_68;
  
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_a8 = 0;
  uStack_b8._0_4_ = 0x8000;
  uStack_b8._4_4_ = 0x20;
  uStack_b0 = 0;
  uStack_af = 0xffffffff000000;
  if (*param_2 == 0) {
    puVar2 = (undefined8 *)0x0;
    uStack_88 = 1;
    lVar4 = 0;
  }
  else {
    puVar2 = &uStack_b8;
    FUN_1098e64b4(puVar2,param_2);
    lVar4 = *param_2;
  }
  *param_2 = (long)puVar2;
  param_2[1] = param_2[1] + (lVar4 - (long)puVar2);
  uStack_80 = *(undefined8 *)*param_1;
  plVar5 = (long *)*param_3;
  lVar4 = plVar5[1];
  uVar3 = lVar4 + 1;
  if ((ulong)plVar5[2] < uVar3) {
    (*(code *)plVar5[3])(plVar5);
    lVar4 = plVar5[1];
    uVar3 = lVar4 + 1;
  }
  bVar1 = false;
  plVar5[1] = uVar3;
  *(undefined1 *)(*plVar5 + lVar4) = 0x5b;
  puVar2 = &uStack_80;
  while( true ) {
    if ((char)uStack_88 == '\x01') {
      plVar5 = (long *)*param_3;
      pcStack_68 = FUN_1098febbc;
      puStack_78 = puVar2;
      ppuStack_70 = &puStack_78;
      FUN_1099a63d4(plVar5,&UNK_10f5893b8,6,0xf,&ppuStack_70,0);
    }
    else {
      plVar5 = &uStack_b8;
      FUN_1098e64e0(plVar5,puVar2,param_3);
    }
    if (bVar1) break;
    lVar4 = plVar5[1];
    uVar3 = lVar4 + 1;
    if ((ulong)plVar5[2] < uVar3) {
      (*(code *)plVar5[3])(plVar5);
      lVar4 = plVar5[1];
      uVar3 = lVar4 + 1;
    }
    plVar5[1] = uVar3;
    *(undefined1 *)(*plVar5 + lVar4) = 0x2c;
    lVar4 = plVar5[1];
    uVar3 = lVar4 + 1;
    if ((ulong)plVar5[2] < uVar3) {
      (*(code *)plVar5[3])(plVar5);
      lVar4 = plVar5[1];
      uVar3 = lVar4 + 1;
    }
    plVar5[1] = uVar3;
    *(undefined1 *)(*plVar5 + lVar4) = 0x20;
    bVar1 = true;
    puVar2 = (undefined8 *)((ulong)&uStack_80 | 4);
  }
  lVar4 = plVar5[1];
  uVar3 = lVar4 + 1;
  if ((ulong)plVar5[2] < uVar3) {
    (*(code *)plVar5[3])(plVar5);
    lVar4 = plVar5[1];
    uVar3 = lVar4 + 1;
  }
  plVar5[1] = uVar3;
  *(undefined1 *)(*plVar5 + lVar4) = 0x5d;
  return;
}



/* Entry: 1098febbc; end: 1098fec6b;  */

/* WARNING: Removing unreachable block (ram,0x0001098feeb0) */

void FUN_1098febbc(long *param_1,long *param_2,undefined8 ****param_3)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  undefined8 *****pppppuVar4;
  undefined8 ****ppppuVar5;
  bool bVar6;
  bool bVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  float *pfVar11;
  int iVar12;
  long lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  float fVar23;
  float fVar24;
  undefined8 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined8 ***pppuStack_150;
  code *pcStack_148;
  byte bStack_139;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 ***pppuStack_c8;
  undefined8 ****ppppuStack_c0;
  code *pcStack_b8;
  undefined8 **ppuStack_b0;
  code *pcStack_a8;
  undefined1 auStack_70 [9];
  undefined7 uStack_67;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  puVar8 = auStack_70;
  puVar9 = (undefined8 *)auStack_70;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  auStack_70._0_4_ = 0x8000;
  auStack_70[4] = 0x20;
  auStack_70._5_4_ = 0;
  uStack_67 = 0xffffffff000000;
  FUN_1098e64b4();
  lVar13 = *param_2;
  *param_2 = (long)puVar8;
  param_2[1] = param_2[1] + (lVar13 - (long)puVar8);
  pfVar11 = (float *)*param_1;
  FUN_1098e64e0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  fVar14 = (float)*(undefined8 *)(pfVar11 + 2);
  fVar16 = (float)((ulong)*(undefined8 *)(pfVar11 + 2) >> 0x20);
  fVar17 = SUB84(*param_3,0) * fVar14 + (float)*(undefined8 *)(pfVar11 + 4);
  fVar19 = (float)((ulong)*param_3 >> 0x20) * fVar16 +
           (float)((ulong)*(undefined8 *)(pfVar11 + 4) >> 0x20);
  uStack_d8 = CONCAT44(fVar19,fVar17);
  pppuStack_c8 = param_3;
  if ((uint)ABS(fVar17) < 0x7f800000 && (uint)ABS(fVar19) < 0x7f800000) {
    if ((*pfVar11 < 2.0) || (fVar15 = pfVar11[1], fVar15 < 2.0)) {
      if (piRam000000011373c710 == (int *)0x0) {
        uVar10 = 0;
        FUN_1099adbb8(0x11373c710,0x11382bb14,&UNK_10f589688,3);
        if ((uVar10 & 1) != 0) goto LAB_1098fee08;
      }
      else if (2 < *piRam000000011373c710) {
LAB_1098fee08:
        uStack_138 = 0;
        uStack_e0 = 0;
        uStack_120 = 0;
        uStack_128 = 0;
        uStack_110 = 0;
        uStack_118 = 0;
        uStack_100 = 0;
        uStack_108 = 0;
        uStack_f0 = 0;
        uStack_f8 = 0;
        uStack_e8 = 0;
        FUN_1099a9f0c(&uStack_138,&UNK_10f589688,0x1e7,0,FUN_1099aa768,0);
        pppuStack_150 = &pppuStack_c8;
        pcStack_148 = FUN_1098fe98c;
        FUN_1099ade68(&ppppuStack_c0,&UNK_10f58985b,0x3f,0xf,&pppuStack_150);
        pcVar2 = pcStack_b8;
        pppppuVar4 = (undefined8 *****)ppppuStack_c0;
        if (-1 < (long)ppuStack_b0) {
          pcVar2 = (code *)((ulong)ppuStack_b0 >> 0x38);
          pppppuVar4 = &ppppuStack_c0;
        }
        FUN_1092b4db8(lStack_130 + 0x7540,pppppuVar4,pcVar2);
        goto LAB_1098feeb8;
      }
      goto LAB_1098feec0;
    }
    bVar6 = false;
    bVar7 = false;
    if (0.0 <= fVar17) {
      bVar6 = false;
      bVar7 = true;
      if (!NAN(fVar19)) {
        bVar6 = fVar19 < 1.0;
        bVar7 = false;
      }
    }
    if (bVar6 == bVar7) {
LAB_1098feef0:
      if (*(char *)(pfVar11 + 0x14) == '\0') {
        if (piRam000000011373c730 == (int *)0x0) {
          uVar10 = 0;
          FUN_1099adbb8(0x11373c730,0x11382bb14,&UNK_10f589688,3);
          if ((uVar10 & 1) != 0) goto LAB_1098ff060;
        }
        else if (2 < *piRam000000011373c730) {
LAB_1098ff060:
          uStack_138 = 0;
          uStack_e0 = 0;
          uStack_120 = 0;
          uStack_128 = 0;
          uStack_110 = 0;
          uStack_118 = 0;
          uStack_100 = 0;
          uStack_108 = 0;
          uStack_f0 = 0;
          uStack_f8 = 0;
          uStack_e8 = 0;
          FUN_1099a9f0c(&uStack_138,&UNK_10f589688,0x1ed,0,FUN_1099aa768,0);
          puStack_d0 = &uStack_d8;
          ppppuStack_c0 = &pppuStack_c8;
          pcStack_b8 = FUN_1098fe98c;
          ppuStack_b0 = &puStack_d0;
          pcStack_a8 = FUN_1098fe98c;
          FUN_1099ade68(&pppuStack_150,&UNK_10f58989b,0x60,0xff,&ppppuStack_c0);
          pcVar2 = pcStack_148;
          ppppuVar5 = (undefined8 ****)pppuStack_150;
          if (-1 < (char)bStack_139) {
            pcVar2 = (code *)(ulong)bStack_139;
            ppppuVar5 = &pppuStack_150;
          }
          FUN_1092b4db8(lStack_130 + 0x7540,ppppuVar5,pcVar2);
          if ((char)bStack_139 < '\0') {
            __ZdlPv(pppuStack_150);
          }
          goto LAB_1098feeb8;
        }
        goto LAB_1098feec0;
      }
    }
    else {
      bVar6 = false;
      bVar7 = false;
      if (0.0 <= fVar19) {
        bVar6 = false;
        bVar7 = true;
        if (!NAN(fVar17)) {
          bVar6 = fVar17 < 1.0;
          bVar7 = false;
        }
      }
      if (bVar6 == bVar7) goto LAB_1098feef0;
    }
    uVar22 = NEON_fmov(0xbf800000,4);
    fVar20 = (float)*(undefined8 *)pfVar11;
    fVar17 = fVar17 * (fVar20 + (float)uVar22);
    fVar19 = fVar19 * ((float)((ulong)*(undefined8 *)pfVar11 >> 0x20) +
                      (float)((ulong)uVar22 >> 0x20));
    fVar21 = (float)(int)fVar17;
    fVar23 = (float)((int)fVar20 + -2);
    if (fVar21 <= (float)((int)fVar20 + -2)) {
      fVar23 = fVar21;
    }
    fVar18 = 0.0;
    fVar24 = fVar18;
    if (0.0 <= fVar21) {
      fVar24 = fVar23;
    }
    iVar12 = (int)fVar24;
    fVar21 = (float)(int)fVar19;
    fVar23 = (float)((int)fVar15 + -2);
    if (fVar21 <= (float)((int)fVar15 + -2)) {
      fVar23 = fVar21;
    }
    fVar26 = fVar18;
    if (0.0 <= fVar21) {
      fVar26 = fVar23;
    }
    fVar17 = fVar17 - (float)(int)fVar24;
    fVar19 = fVar19 - (float)(int)fVar26;
    fVar23 = 1.0;
    if (fVar17 <= 1.0) {
      fVar23 = fVar17;
    }
    if (0.0 <= fVar17) {
      fVar18 = fVar23;
    }
    fVar17 = 1.0;
    if (fVar19 <= 1.0) {
      fVar17 = fVar19;
    }
    fVar23 = 0.0;
    if (0.0 <= fVar19) {
      fVar23 = fVar17;
    }
    lVar13 = *(long *)(pfVar11 + 10);
    iVar3 = (int)pfVar11[8] * (int)fVar26;
    iVar1 = (int)pfVar11[8] + iVar3;
    fVar14 = fVar14 * (fVar20 + -1.0);
    uVar22 = *(undefined8 *)(lVar13 + (long)(iVar3 + iVar12 + 1) * 8);
    uVar25 = *(undefined8 *)(lVar13 + (long)(iVar3 + iVar12) * 8);
    fVar17 = (float)uVar22;
    fVar24 = (float)uVar25;
    fVar20 = (float)((ulong)uVar22 >> 0x20);
    fVar26 = (float)((ulong)uVar25 >> 0x20);
    uVar22 = *(undefined8 *)(lVar13 + (long)(iVar1 + iVar12) * 8);
    fVar27 = (float)uVar22;
    fVar28 = (float)((ulong)uVar22 >> 0x20);
    uVar22 = *(undefined8 *)(lVar13 + (long)(iVar1 + iVar12 + 1) * 8);
    fVar19 = ((fVar24 - fVar17) - fVar27) + (float)uVar22;
    fVar21 = ((fVar26 - fVar20) - fVar28) + (float)((ulong)uVar22 >> 0x20);
    fVar16 = fVar16 * (fVar15 + -1.0);
    *puVar9 = CONCAT44(((fVar20 - fVar26) + fVar21 * fVar23) * fVar14,
                       ((fVar17 - fVar24) + fVar19 * fVar23) * fVar14);
    puVar9[1] = CONCAT44(((fVar28 - fVar26) + fVar21 * fVar18) * fVar16,
                         ((fVar27 - fVar24) + fVar19 * fVar18) * fVar16);
  }
  else {
    if (piRam000000011373c6f0 == (int *)0x0) {
      uVar10 = 0;
      FUN_1099adbb8(0x11373c6f0,0x11382bb14,&UNK_10f589688,3);
      if ((uVar10 & 1) != 0) goto LAB_1098fed40;
    }
    else if (2 < *piRam000000011373c6f0) {
LAB_1098fed40:
      uStack_138 = 0;
      uStack_e0 = 0;
      uStack_120 = 0;
      uStack_128 = 0;
      uStack_110 = 0;
      uStack_118 = 0;
      uStack_100 = 0;
      uStack_108 = 0;
      uStack_f0 = 0;
      uStack_f8 = 0;
      uStack_e8 = 0;
      FUN_1099a9f0c(&uStack_138,&UNK_10f589688,0x1de,0,FUN_1099aa768,0);
      pppuStack_150 = &pppuStack_c8;
      pcStack_148 = FUN_1098fe98c;
      FUN_1099ade68(&ppppuStack_c0,&UNK_10f58981b,0x3f,0xf,&pppuStack_150);
      pcVar2 = pcStack_b8;
      pppppuVar4 = (undefined8 *****)ppppuStack_c0;
      if (-1 < (long)ppuStack_b0) {
        pcVar2 = (code *)((ulong)ppuStack_b0 >> 0x38);
        pppppuVar4 = &ppppuStack_c0;
      }
      FUN_1092b4db8(lStack_130 + 0x7540,pppppuVar4,pcVar2);
LAB_1098feeb8:
      FUN_1099ab3b0(&uStack_138);
    }
LAB_1098feec0:
    puVar9[1] = 0x3f80000000000000;
    *puVar9 = 0x3f800000;
  }
  return;
}



/* Entry: 1098fec6c; end: 1098ff157;  */

/* WARNING: Removing unreachable block (ram,0x0001098feeb0) */

void FUN_1098fec6c(undefined8 *param_1,float *param_2,undefined8 ****param_3)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  undefined8 *****pppppuVar4;
  undefined8 ****ppppuVar5;
  bool bVar6;
  bool bVar7;
  ulong uVar8;
  int iVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 ***pppuStack_e0;
  code *pcStack_d8;
  byte bStack_c9;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  undefined8 ***pppuStack_58;
  undefined8 ****ppppuStack_50;
  code *pcStack_48;
  undefined8 **ppuStack_40;
  code *pcStack_38;
  
  fVar11 = (float)*(undefined8 *)(param_2 + 2);
  fVar13 = (float)((ulong)*(undefined8 *)(param_2 + 2) >> 0x20);
  fVar14 = SUB84(*param_3,0) * fVar11 + (float)*(undefined8 *)(param_2 + 4);
  fVar16 = (float)((ulong)*param_3 >> 0x20) * fVar13 +
           (float)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20);
  uStack_68 = CONCAT44(fVar16,fVar14);
  pppuStack_58 = param_3;
  if ((uint)ABS(fVar14) < 0x7f800000 && (uint)ABS(fVar16) < 0x7f800000) {
    if ((*param_2 < 2.0) || (fVar12 = param_2[1], fVar12 < 2.0)) {
      if (piRam000000011373c710 == (int *)0x0) {
        uVar8 = 0;
        FUN_1099adbb8(0x11373c710,0x11382bb14,&UNK_10f589688,3);
        if ((uVar8 & 1) != 0) goto LAB_1098fee08;
      }
      else if (2 < *piRam000000011373c710) {
LAB_1098fee08:
        uStack_c8 = 0;
        uStack_70 = 0;
        uStack_b0 = 0;
        uStack_b8 = 0;
        uStack_a0 = 0;
        uStack_a8 = 0;
        uStack_90 = 0;
        uStack_98 = 0;
        uStack_80 = 0;
        uStack_88 = 0;
        uStack_78 = 0;
        FUN_1099a9f0c(&uStack_c8,&UNK_10f589688,0x1e7,0,FUN_1099aa768,0);
        pppuStack_e0 = &pppuStack_58;
        pcStack_d8 = FUN_1098fe98c;
        FUN_1099ade68(&ppppuStack_50,&UNK_10f58985b,0x3f,0xf,&pppuStack_e0);
        pcVar2 = pcStack_48;
        pppppuVar4 = (undefined8 *****)ppppuStack_50;
        if (-1 < (long)ppuStack_40) {
          pcVar2 = (code *)((ulong)ppuStack_40 >> 0x38);
          pppppuVar4 = &ppppuStack_50;
        }
        FUN_1092b4db8(lStack_c0 + 0x7540,pppppuVar4,pcVar2);
        goto LAB_1098feeb8;
      }
      goto LAB_1098feec0;
    }
    bVar6 = false;
    bVar7 = false;
    if (0.0 <= fVar14) {
      bVar6 = false;
      bVar7 = true;
      if (!NAN(fVar16)) {
        bVar6 = fVar16 < 1.0;
        bVar7 = false;
      }
    }
    if (bVar6 == bVar7) {
LAB_1098feef0:
      if (*(char *)(param_2 + 0x14) == '\0') {
        if (piRam000000011373c730 == (int *)0x0) {
          uVar8 = 0;
          FUN_1099adbb8(0x11373c730,0x11382bb14,&UNK_10f589688,3);
          if ((uVar8 & 1) != 0) goto LAB_1098ff060;
        }
        else if (2 < *piRam000000011373c730) {
LAB_1098ff060:
          uStack_c8 = 0;
          uStack_70 = 0;
          uStack_b0 = 0;
          uStack_b8 = 0;
          uStack_a0 = 0;
          uStack_a8 = 0;
          uStack_90 = 0;
          uStack_98 = 0;
          uStack_80 = 0;
          uStack_88 = 0;
          uStack_78 = 0;
          FUN_1099a9f0c(&uStack_c8,&UNK_10f589688,0x1ed,0,FUN_1099aa768,0);
          puStack_60 = &uStack_68;
          ppppuStack_50 = &pppuStack_58;
          pcStack_48 = FUN_1098fe98c;
          ppuStack_40 = &puStack_60;
          pcStack_38 = FUN_1098fe98c;
          FUN_1099ade68(&pppuStack_e0,&UNK_10f58989b,0x60,0xff,&ppppuStack_50);
          pcVar2 = pcStack_d8;
          ppppuVar5 = (undefined8 ****)pppuStack_e0;
          if (-1 < (char)bStack_c9) {
            pcVar2 = (code *)(ulong)bStack_c9;
            ppppuVar5 = &pppuStack_e0;
          }
          FUN_1092b4db8(lStack_c0 + 0x7540,ppppuVar5,pcVar2);
          if ((char)bStack_c9 < '\0') {
            __ZdlPv(pppuStack_e0);
          }
          goto LAB_1098feeb8;
        }
        goto LAB_1098feec0;
      }
    }
    else {
      bVar6 = false;
      bVar7 = false;
      if (0.0 <= fVar16) {
        bVar6 = false;
        bVar7 = true;
        if (!NAN(fVar14)) {
          bVar6 = fVar14 < 1.0;
          bVar7 = false;
        }
      }
      if (bVar6 == bVar7) goto LAB_1098feef0;
    }
    uVar19 = NEON_fmov(0xbf800000,4);
    fVar17 = (float)*(undefined8 *)param_2;
    fVar14 = fVar14 * (fVar17 + (float)uVar19);
    fVar16 = fVar16 * ((float)((ulong)*(undefined8 *)param_2 >> 0x20) +
                      (float)((ulong)uVar19 >> 0x20));
    fVar18 = (float)(int)fVar14;
    fVar20 = (float)((int)fVar17 + -2);
    if (fVar18 <= (float)((int)fVar17 + -2)) {
      fVar20 = fVar18;
    }
    fVar15 = 0.0;
    fVar21 = fVar15;
    if (0.0 <= fVar18) {
      fVar21 = fVar20;
    }
    iVar9 = (int)fVar21;
    fVar18 = (float)(int)fVar16;
    fVar20 = (float)((int)fVar12 + -2);
    if (fVar18 <= (float)((int)fVar12 + -2)) {
      fVar20 = fVar18;
    }
    fVar23 = fVar15;
    if (0.0 <= fVar18) {
      fVar23 = fVar20;
    }
    fVar14 = fVar14 - (float)(int)fVar21;
    fVar16 = fVar16 - (float)(int)fVar23;
    fVar20 = 1.0;
    if (fVar14 <= 1.0) {
      fVar20 = fVar14;
    }
    if (0.0 <= fVar14) {
      fVar15 = fVar20;
    }
    fVar14 = 1.0;
    if (fVar16 <= 1.0) {
      fVar14 = fVar16;
    }
    fVar20 = 0.0;
    if (0.0 <= fVar16) {
      fVar20 = fVar14;
    }
    lVar10 = *(long *)(param_2 + 10);
    iVar3 = (int)param_2[8] * (int)fVar23;
    iVar1 = (int)param_2[8] + iVar3;
    fVar11 = fVar11 * (fVar17 + -1.0);
    uVar19 = *(undefined8 *)(lVar10 + (long)(iVar3 + iVar9 + 1) * 8);
    uVar22 = *(undefined8 *)(lVar10 + (long)(iVar3 + iVar9) * 8);
    fVar14 = (float)uVar19;
    fVar21 = (float)uVar22;
    fVar17 = (float)((ulong)uVar19 >> 0x20);
    fVar23 = (float)((ulong)uVar22 >> 0x20);
    uVar19 = *(undefined8 *)(lVar10 + (long)(iVar1 + iVar9) * 8);
    fVar24 = (float)uVar19;
    fVar25 = (float)((ulong)uVar19 >> 0x20);
    uVar19 = *(undefined8 *)(lVar10 + (long)(iVar1 + iVar9 + 1) * 8);
    fVar16 = ((fVar21 - fVar14) - fVar24) + (float)uVar19;
    fVar18 = ((fVar23 - fVar17) - fVar25) + (float)((ulong)uVar19 >> 0x20);
    fVar13 = fVar13 * (fVar12 + -1.0);
    *param_1 = CONCAT44(((fVar17 - fVar23) + fVar18 * fVar20) * fVar11,
                        ((fVar14 - fVar21) + fVar16 * fVar20) * fVar11);
    param_1[1] = CONCAT44(((fVar25 - fVar23) + fVar18 * fVar15) * fVar13,
                          ((fVar24 - fVar21) + fVar16 * fVar15) * fVar13);
  }
  else {
    if (piRam000000011373c6f0 == (int *)0x0) {
      uVar8 = 0;
      FUN_1099adbb8(0x11373c6f0,0x11382bb14,&UNK_10f589688,3);
      if ((uVar8 & 1) != 0) goto LAB_1098fed40;
    }
    else if (2 < *piRam000000011373c6f0) {
LAB_1098fed40:
      uStack_c8 = 0;
      uStack_70 = 0;
      uStack_b0 = 0;
      uStack_b8 = 0;
      uStack_a0 = 0;
      uStack_a8 = 0;
      uStack_90 = 0;
      uStack_98 = 0;
      uStack_80 = 0;
      uStack_88 = 0;
      uStack_78 = 0;
      FUN_1099a9f0c(&uStack_c8,&UNK_10f589688,0x1de,0,FUN_1099aa768,0);
      pppuStack_e0 = &pppuStack_58;
      pcStack_d8 = FUN_1098fe98c;
      FUN_1099ade68(&ppppuStack_50,&UNK_10f58981b,0x3f,0xf,&pppuStack_e0);
      pcVar2 = pcStack_48;
      pppppuVar4 = (undefined8 *****)ppppuStack_50;
      if (-1 < (long)ppuStack_40) {
        pcVar2 = (code *)((ulong)ppuStack_40 >> 0x38);
        pppppuVar4 = &ppppuStack_50;
      }
      FUN_1092b4db8(lStack_c0 + 0x7540,pppppuVar4,pcVar2);
LAB_1098feeb8:
      FUN_1099ab3b0(&uStack_c8);
    }
LAB_1098feec0:
    param_1[1] = 0x3f80000000000000;
    *param_1 = 0x3f800000;
  }
  return;
}



/* Entry: 1098ff158; end: 1098ff2bf;  */

void FUN_1098ff158(ulong *param_1,undefined8 *param_2,ulong param_3)

{
  float *pfVar1;
  long *plVar2;
  float *pfVar3;
  ulong uVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  undefined4 *puVar8;
  long *plVar9;
  ulong uVar10;
  undefined4 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  float fVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  float fVar19;
  undefined8 uStack_98;
  long *plStack_90;
  ulong uStack_88;
  undefined4 uStack_80;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  float *pfStack_68;
  long *plStack_60;
  long *plStack_58;
  ulong uStack_50;
  undefined4 uStack_48;
  
  uVar18 = *param_2;
  puVar8 = (undefined4 *)*param_1;
  if (param_1[1] == param_3) goto LAB_1098ff1d8;
  _free();
  if ((long)param_3 < 1) {
LAB_1098ff1cc:
    puVar8 = (undefined4 *)0x0;
  }
  else {
    if (param_3 >> 0x3e != 0) {
LAB_1098ff1ac:
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_1098ff1cc;
    }
    puVar8 = (undefined4 *)(param_3 << 2);
    _malloc();
    if (puVar8 == (undefined4 *)0x0) goto LAB_1098ff1ac;
  }
  *param_1 = (ulong)puVar8;
  param_1[1] = param_3;
LAB_1098ff1d8:
  uVar10 = param_3;
  if ((((ulong)puVar8 & 3) == 0) &&
     (uVar10 = (ulong)-((uint)puVar8 >> 2) & 3, (long)param_3 <= (long)uVar10)) {
    uVar10 = param_3;
  }
  uVar7 = param_3 - uVar10;
  uVar4 = uVar7 + 3;
  if ((long)uVar10 <= (long)param_3) {
    uVar4 = uVar7;
  }
  puVar11 = puVar8;
  puVar13 = param_2;
  uVar14 = uVar10;
  if (0 < (long)uVar10) {
    do {
      *puVar11 = *(undefined4 *)puVar13;
      uVar14 = uVar14 - 1;
      puVar11 = puVar11 + 1;
      puVar13 = (undefined8 *)((long)puVar13 + 4);
    } while (uVar14 != 0);
  }
  lVar12 = (uVar4 & 0xfffffffffffffffc) + uVar10;
  if (3 < (long)uVar7) {
    puVar13 = (undefined8 *)((long)param_2 + uVar10 * 4);
    uVar14 = uVar10;
    puVar15 = (undefined8 *)(puVar8 + uVar10);
    do {
      uVar17 = *puVar13;
      puVar15[1] = puVar13[1];
      *puVar15 = uVar17;
      uVar14 = uVar14 + 4;
      puVar13 = puVar13 + 2;
      puVar15 = puVar15 + 2;
    } while ((long)uVar14 < lVar12);
  }
  if (lVar12 < (long)param_3) {
    lVar12 = uVar7 - (uVar4 & 0xfffffffffffffffc);
    puVar11 = (undefined4 *)((long)param_2 + ((long)uVar4 >> 2) * 0x10 + uVar10 * 4);
    puVar8 = puVar8 + uVar10 + ((long)uVar4 >> 2) * 4;
    do {
      *puVar8 = *puVar11;
      lVar12 = lVar12 + -1;
      puVar11 = puVar11 + 1;
      puVar8 = puVar8 + 1;
    } while (lVar12 != 0);
  }
  fVar16 = (float)uVar18 * (float)((ulong)uVar18 >> 0x20);
  FUN_1098ff2c0(param_1 + 2,*param_1,0);
  pfVar3 = (float *)(*param_1 + ((long)(fVar16 + fVar16) + 6) * 4);
  uStack_98 = 0;
  uStack_88 = 0;
  plStack_90 = (long *)0x0;
  uStack_80 = 0;
  fVar16 = *pfVar3;
  fVar19 = pfVar3[1];
  plVar9 = (long *)0x40;
  __Znwm();
  iStack_74 = (int)fVar19;
  iStack_78 = (int)fVar16;
  pfVar1 = pfVar3 + 6;
  plVar9[1] = 0;
  plVar9[2] = 0;
  *plVar9 = (long)&PTR_FUN_110af5240;
  plStack_60 = plVar9 + 3;
  *plStack_60 = (long)&PTR_DAT_110af5290;
  plVar9[4] = (long)pfVar1;
  plVar9[5] = (long)fVar16 * (long)fVar19 * 0x10;
  plVar9[6] = (long)pfVar1;
  plVar9[7] = 0;
  iStack_6c = iStack_78 << 3;
  uStack_50 = 0;
  uStack_48 = 0;
  uVar4 = CONCAT44(iStack_6c,iStack_78);
  uVar10 = CONCAT44(iStack_74,iStack_78);
  iStack_70 = iStack_78;
  pfStack_68 = pfVar1;
  plStack_58 = plVar9;
  FUN_109448e7c(&uStack_98,&plStack_60);
  plVar9 = plStack_58;
  uStack_88 = uStack_50;
  uStack_80 = uStack_48;
  if (plStack_58 != (long *)0x0) {
    plVar2 = plStack_58 + 1;
    do {
      lVar12 = *plVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = lVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  param_1[0xd] = *(ulong *)pfVar3;
  param_1[0xe] = *(ulong *)(pfVar3 + 2);
  param_1[0xf] = *(ulong *)(pfVar3 + 4);
  param_1[0x11] = uVar4;
  param_1[0x10] = uVar10;
  param_1[0x12] = (ulong)pfVar1;
  FUN_109448e7c(param_1 + 0x13,&uStack_98);
  plVar9 = plStack_90;
  param_1[0x15] = uStack_88;
  *(undefined4 *)(param_1 + 0x16) = uStack_80;
  if (plStack_90 != (long *)0x0) {
    plVar2 = plStack_90 + 1;
    do {
      lVar12 = *plVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = lVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_90 + 0x10))(plStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  return;
}



/* Entry: 1098ff2c0; end: 1098ff483;  */

void FUN_1098ff2c0(undefined8 *param_1,long param_2,long param_3)

{
  float *pfVar1;
  long *plVar2;
  float *pfVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  undefined8 uStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  float *pfStack_68;
  long *plStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  pfVar3 = (float *)(param_2 + param_3 * 4);
  uStack_98 = 0;
  uStack_88 = 0;
  plStack_90 = (long *)0x0;
  uStack_80 = 0;
  fVar10 = *pfVar3;
  fVar11 = pfVar3[1];
  plVar8 = (long *)0x40;
  __Znwm();
  iStack_74 = (int)fVar11;
  iStack_78 = (int)fVar10;
  pfVar1 = pfVar3 + 6;
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&PTR_FUN_110af5240;
  plStack_60 = plVar8 + 3;
  *plStack_60 = (long)&PTR_DAT_110af5290;
  plVar8[4] = (long)pfVar1;
  plVar8[5] = (long)fVar10 * (long)fVar11 * 0x10;
  plVar8[6] = (long)pfVar1;
  plVar8[7] = 0;
  iStack_6c = iStack_78 << 3;
  uStack_50 = 0;
  uStack_48 = 0;
  uVar7 = CONCAT44(iStack_6c,iStack_78);
  uVar6 = CONCAT44(iStack_74,iStack_78);
  iStack_70 = iStack_78;
  pfStack_68 = pfVar1;
  plStack_58 = plVar8;
  FUN_109448e7c(&uStack_98,&plStack_60);
  plVar8 = plStack_58;
  uStack_88 = uStack_50;
  uStack_80 = uStack_48;
  if (plStack_58 != (long *)0x0) {
    plVar2 = plStack_58 + 1;
    do {
      lVar9 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  *param_1 = *(undefined8 *)pfVar3;
  param_1[1] = *(undefined8 *)(pfVar3 + 2);
  param_1[2] = *(undefined8 *)(pfVar3 + 4);
  param_1[4] = uVar7;
  param_1[3] = uVar6;
  param_1[5] = pfVar1;
  FUN_109448e7c(param_1 + 6,&uStack_98);
  plVar8 = plStack_90;
  param_1[8] = uStack_88;
  *(undefined4 *)(param_1 + 9) = uStack_80;
  if (plStack_90 != (long *)0x0) {
    plVar2 = plStack_90 + 1;
    do {
      lVar9 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_90 + 0x10))(plStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  return;
}



/* Entry: 1098ff484; end: 1098ff503;  */

undefined8 * FUN_1098ff484(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined1 *)(param_1 + 0xc) = 1;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  *(undefined1 *)(param_1 + 0x17) = 1;
  FUN_1098ff158(param_1,*param_2,param_2[1]);
  return param_1;
}



/* Entry: 1098ff504; end: 1098ff96b;  */

void FUN_1098ff504(double *param_1,double *param_2,double *param_3,double *param_4,double *param_5,
                  double *param_6)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  double *pdVar4;
  double dVar5;
  double dVar7;
  undefined1 auVar6 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dStack_40;
  double dStack_38;
  double dStack_30;
  double dStack_28;
  
  dVar9 = param_3[1];
  dVar8 = *param_3;
  dStack_40 = *param_4 - dVar8;
  dVar10 = param_4[1] - dVar9;
  dVar5 = *param_6 - dVar8;
  dVar7 = param_6[1] - dVar9;
  dVar11 = ((dVar8 - *param_4) + *param_5) - *param_6;
  dVar12 = ((dVar9 - param_4[1]) + param_5[1]) - param_6[1];
  dVar8 = *param_2 - dVar8;
  dVar9 = param_2[1] - dVar9;
  dVar14 = -dVar12 * dVar5 + dVar11 * dVar7;
  dVar13 = -dVar10 * dVar5 + dStack_40 * dVar7 + -dVar9 * dVar11 + dVar8 * dVar12;
  dVar15 = -dVar9 * dStack_40 + dVar8 * dVar10;
  dVar16 = dVar14 * dVar15 * -4.0 + dVar13 * dVar13;
  if (dVar16 < 0.0) {
    param_1[1] = NAN;
    *param_1 = NAN;
    return;
  }
  if (ABS(dVar14) < 1e-08) {
    dVar13 = -dVar15 / dVar13;
    dStack_40 = dStack_40 + dVar13 * dVar11;
    dVar10 = dVar10 + dVar13 * dVar12;
    if (ABS(dStack_40) <= ABS(dVar10)) {
      dVar5 = dVar7;
      dVar8 = dVar9;
      dStack_40 = dVar10;
    }
    *param_1 = (dVar8 - dVar13 * dVar5) / dStack_40;
    param_1[1] = dVar13;
    return;
  }
  pdVar4 = &dStack_40;
  dVar16 = SQRT(dVar16);
  dStack_28 = (dVar16 - dVar13) / (dVar14 + dVar14);
  dStack_30 = dStack_40 + dStack_28 * dVar11;
  dVar17 = dVar10 + dStack_28 * dVar12;
  dVar18 = dVar5;
  dVar15 = dVar8;
  if (ABS(dStack_30) <= ABS(dVar17)) {
    dVar18 = dVar7;
    dVar15 = dVar9;
    dStack_30 = dVar17;
  }
  dStack_30 = (dVar15 - dStack_28 * dVar18) / dStack_30;
  bVar1 = false;
  bVar2 = true;
  if (0.0 <= dStack_30) {
    bVar1 = false;
    bVar2 = true;
    if (!NAN(dStack_30)) {
      bVar1 = dStack_30 == 1.0;
      bVar2 = 1.0 <= dStack_30;
    }
  }
  if (!bVar2 || bVar1) {
    bVar1 = false;
    bVar2 = true;
    if (0.0 <= dStack_28) {
      bVar1 = false;
      bVar2 = true;
      if (!NAN(dStack_28)) {
        bVar1 = dStack_28 == 1.0;
        bVar2 = 1.0 <= dStack_28;
      }
    }
    if (!bVar2 || bVar1) goto LAB_1098ff6f8;
  }
  dStack_38 = (-dVar13 - dVar16) / (dVar14 + dVar14);
  dStack_40 = dStack_40 + dStack_38 * dVar11;
  dVar10 = dVar10 + dStack_38 * dVar12;
  if (ABS(dStack_40) <= ABS(dVar10)) {
    dVar5 = dVar7;
    dVar8 = dVar9;
    dStack_40 = dVar10;
  }
  dStack_40 = (dVar8 - dStack_38 * dVar5) / dStack_40;
  bVar1 = false;
  bVar2 = true;
  if (0.0 <= dStack_40) {
    bVar1 = false;
    bVar2 = true;
    if (!NAN(dStack_40)) {
      bVar1 = dStack_40 == 1.0;
      bVar2 = 1.0 <= dStack_40;
    }
  }
  if (bVar2 && !bVar1) {
LAB_1098ff6b0:
    if ((bRam000000011373c750 & 1) == 0) {
      iVar3 = 0x1373c750;
      ___cxa_guard_acquire();
      if (iVar3 != 0) {
        auVar6 = NEON_fmov(0x3fe0000000000000,8);
        dRam000000011373c768 = auVar6._8_8_;
        dRam000000011373c760 = auVar6._0_8_;
        ___cxa_guard_release(0x11373c750);
      }
    }
    pdVar4 = &dStack_30;
    if ((dStack_40 - dRam000000011373c760) * (dStack_40 - dRam000000011373c760) +
        (dStack_38 - dRam000000011373c768) * (dStack_38 - dRam000000011373c768) <=
        (dStack_30 - dRam000000011373c760) * (dStack_30 - dRam000000011373c760) +
        (dStack_28 - dRam000000011373c768) * (dStack_28 - dRam000000011373c768)) {
      pdVar4 = &dStack_40;
    }
  }
  else {
    bVar1 = false;
    bVar2 = true;
    if (0.0 <= dStack_38) {
      bVar1 = false;
      bVar2 = true;
      if (!NAN(dStack_38)) {
        bVar1 = dStack_38 == 1.0;
        bVar2 = 1.0 <= dStack_38;
      }
    }
    if (bVar2 && !bVar1) goto LAB_1098ff6b0;
  }
  dStack_30 = *pdVar4;
  dStack_28 = pdVar4[1];
LAB_1098ff6f8:
  param_1[1] = dStack_28;
  *param_1 = dStack_30;
  return;
}



/* Entry: 1098ff96c; end: 109900947;  */

uint FUN_1098ff96c(long *param_1,long *param_2)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  uint uVar4;
  uint uVar5;
  undefined1 (*pauVar6) [16];
  undefined8 *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  undefined8 *******pppppppuVar14;
  long *plVar15;
  long *plVar16;
  bool bVar17;
  long lVar18;
  int iVar19;
  double *pdVar20;
  double *pdVar21;
  ulong uVar22;
  undefined1 (*pauVar23) [16];
  undefined1 (*pauVar24) [16];
  long *plVar25;
  int iVar26;
  long lVar27;
  int iVar28;
  ulong uVar29;
  long lVar30;
  ulong uVar31;
  uint uVar32;
  double ****ppppdVar33;
  uint uVar34;
  long lVar35;
  uint uVar36;
  uint uVar37;
  double dVar38;
  undefined8 *****pppppuVar39;
  undefined1 auVar40 [16];
  double dVar41;
  undefined8 ****ppppuVar42;
  double dVar43;
  double dVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  double dVar47;
  uint uStack_2fc;
  undefined8 ******ppppppuStack_2b0;
  double dStack_2a8;
  byte bStack_299;
  double dStack_290;
  double dStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined4 uStack_240;
  undefined8 uStack_238;
  undefined1 uStack_229;
  double *pdStack_228;
  double *pdStack_220;
  undefined8 uStack_218;
  long *plStack_210;
  long *plStack_208;
  undefined8 uStack_200;
  byte bStack_1f1;
  undefined8 ****ppppuStack_1f0;
  double dStack_1e8;
  int iStack_1dc;
  long lStack_1d8;
  long lStack_1d0;
  undefined8 uStack_1c8;
  undefined8 ****ppppuStack_1c0;
  double dStack_1b8;
  double *pdStack_1a8;
  double **ppdStack_1a0;
  double **ppdStack_198;
  double dStack_190;
  double dStack_188;
  undefined1 uStack_179;
  undefined1 (*pauStack_178) [16];
  double *apdStack_170 [2];
  double *apdStack_160 [2];
  uint uStack_150;
  uint uStack_14c;
  undefined1 *puStack_148;
  undefined1 *apuStack_140 [2];
  double *apdStack_130 [2];
  double ****ppppdStack_120;
  code *pcStack_118;
  undefined1 (*pauStack_110) [16];
  double dStack_108;
  undefined8 ****ppppuStack_f8;
  double ****ppppdStack_f0;
  undefined8 ****ppppuStack_e8;
  undefined1 (**ppauStack_e0) [16];
  uint *puStack_d8;
  undefined8 *****pppppuStack_d0;
  undefined8 ****ppppuStack_c8;
  double **ppdStack_c0;
  byte *pbStack_b8;
  undefined1 **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  
  pdVar20 = (double *)*param_2;
  if ((ulong)(param_2[1] - (long)pdVar20) < 9) {
    ppppdStack_f0 = (double ****)0x0;
    pcStack_98 = (code *)0x0;
    puStack_d8 = (uint *)0x0;
    ppauStack_e0 = (undefined1 (**) [16])0x0;
    ppppuStack_c8 = (undefined8 ****)0x0;
    pppppuStack_d0 = (undefined8 *****)0x0;
    pbStack_b8 = (byte *)0x0;
    ppdStack_c0 = (double **)0x0;
    uStack_a8 = 0;
    ppuStack_b0 = (undefined1 **)0x0;
    uStack_a0 = (undefined1 **)((ulong)uStack_a0 & 0xffffffff00000000);
    FUN_1099a9f0c(&ppppdStack_f0,&UNK_10f5898fc,0x6a,2,FUN_1099aa768,0);
    FUN_1092b4db8((long)ppppuStack_e8 + 0x7540,&UNK_10f589989,0x5c);
  }
  else {
    pdVar21 = (double *)*param_1;
    uVar22 = param_1[1] - (long)pdVar21 >> 3;
    if (uVar22 < 6) {
      ppppdStack_f0 = (double ****)0x0;
      pcStack_98 = (code *)0x0;
      puStack_d8 = (uint *)0x0;
      ppauStack_e0 = (undefined1 (**) [16])0x0;
      ppppuStack_c8 = (undefined8 ****)0x0;
      pppppuStack_d0 = (undefined8 *****)0x0;
      pbStack_b8 = (byte *)0x0;
      ppdStack_c0 = (double **)0x0;
      uStack_a8 = 0;
      ppuStack_b0 = (undefined1 **)0x0;
      uStack_a0 = (undefined1 **)((ulong)uStack_a0._4_4_ << 0x20);
      FUN_1099a9f0c(&ppppdStack_f0,&UNK_10f5898fc,0x70,2,FUN_1099aa768,0);
      FUN_1092b4db8((long)ppppuStack_e8 + 0x7540,&UNK_10f5899e6,0x47);
    }
    else {
      uVar34 = (uint)*pdVar21;
      uVar31 = (ulong)uVar34;
      uVar32 = (uint)pdVar21[1];
      uStack_150 = uVar34;
      uStack_14c = uVar32;
      if (uVar22 < (long)(int)(uVar32 * uVar34 * 2) + 6U) {
        ppppdStack_f0 = (double ****)0x0;
        pcStack_98 = (code *)0x0;
        puStack_d8 = (uint *)0x0;
        ppauStack_e0 = (undefined1 (**) [16])0x0;
        ppppuStack_c8 = (undefined8 ****)0x0;
        pppppuStack_d0 = (undefined8 *****)0x0;
        pbStack_b8 = (byte *)0x0;
        ppdStack_c0 = (double **)0x0;
        uStack_a8 = 0;
        ppuStack_b0 = (undefined1 **)0x0;
        uStack_a0 = (undefined1 **)((ulong)uStack_a0._4_4_ << 0x20);
        FUN_1099a9f0c(&ppppdStack_f0,&UNK_10f5898fc,0x79,2,FUN_1099aa768,0);
        FUN_1092b4db8((long)ppppuStack_e8 + 0x7540,&UNK_10f589a2e,0x18);
      }
      else {
        apdStack_160[0] = pdVar21 + 2;
        apdStack_170[0] = pdVar21 + 4;
        pauVar6 = (undefined1 (*) [16])(pdVar21 + 6);
        uVar4 = uVar32;
        if ((int)uVar34 <= (int)uVar32) {
          uVar4 = uVar34;
        }
        pauStack_178 = pauVar6;
        if ((int)uVar4 < 2) {
          ppppdStack_f0 = (double ****)0x0;
          pcStack_98 = (code *)0x0;
          puStack_d8 = (uint *)0x0;
          ppauStack_e0 = (undefined1 (**) [16])0x0;
          ppppuStack_c8 = (undefined8 ****)0x0;
          pppppuStack_d0 = (undefined8 *****)0x0;
          pbStack_b8 = (byte *)0x0;
          ppdStack_c0 = (double **)0x0;
          uStack_a8 = 0;
          ppuStack_b0 = (undefined1 **)0x0;
          uStack_a0 = (undefined1 **)((ulong)uStack_a0._4_4_ << 0x20);
          FUN_1099a9f0c(&ppppdStack_f0,&UNK_10f5898fc,0x8a,2,FUN_1099aa768,0);
          FUN_1092b4db8((long)ppppuStack_e8 + 0x7540,&UNK_10f589a47,0x18);
        }
        else {
          uVar36 = (uint)*pdVar20;
          uVar37 = (uint)pdVar20[1];
          uVar4 = uVar37;
          if ((int)uVar36 <= (int)uVar37) {
            uVar4 = uVar36;
          }
          if (1 < (int)uVar4) {
            func_0x000108a851e4(param_2,(long)(int)(uVar36 * uVar37 * 2 + 6));
            uVar22 = 0;
            pdVar20 = (double *)*param_2;
            *pdVar20 = (double)(int)uVar36;
            pdVar20[1] = (double)(int)uVar37;
            auVar40 = *pauVar6;
            pauVar24 = pauVar6;
            uVar29 = uVar31;
            pauVar23 = pauVar6;
            do {
              do {
                auVar45._0_8_ = ABS(*(double *)*pauVar24);
                auVar45._8_8_ = ABS(*(double *)(*pauVar24 + 8));
                auVar40 = NEON_fmax(auVar40,auVar45,8);
                uVar29 = uVar29 - 1;
                pauVar24 = pauVar24 + 1;
              } while (uVar29 != 0);
              uVar22 = uVar22 + 1;
              pauVar24 = pauVar23 + uVar31;
              uVar29 = uVar31;
              pauVar23 = pauVar24;
            } while (uVar22 != uVar32);
            auVar45 = NEON_fmov(0x3ff0000000000000,8);
            auVar46 = NEON_fmov(0x3fe0000000000000,8);
            pdVar20[3] = auVar45._8_8_ / ((auVar40._8_8_ + auVar40._8_8_) * 1.01);
            pdVar20[2] = auVar45._0_8_ / ((auVar40._0_8_ + auVar40._0_8_) * 1.01);
            pdVar20[5] = auVar46._8_8_;
            pdVar20[4] = auVar46._0_8_;
            dStack_190 = (double)(int)uVar34 + -1.0;
            dStack_188 = (double)(int)uVar32 + -1.0;
            pdStack_1a8 = &dStack_190;
            ppdStack_1a0 = apdStack_170;
            ppdStack_198 = apdStack_160;
            lVar35 = *param_2;
            lStack_1d8 = 0;
            lStack_1d0 = 0;
            uStack_1c8 = 0;
            uVar34 = uVar34 - 1;
            lVar30 = (long)(int)(uVar34 * (uVar32 - 1));
            FUN_109900c30(&ppppdStack_f0,lVar30);
            FUN_109900948(&lStack_1d8,lVar30 << 1);
            lVar18 = 0;
            iVar19 = 0;
            iVar26 = 1;
            uVar22 = 0;
            do {
              uVar29 = 0;
              uVar31 = uVar22 + 1;
              lVar27 = lVar18;
              iVar28 = iVar19;
              do {
                uVar10 = (int)uVar29 + (int)uVar22 * uStack_150;
                uVar8 = uVar10 * 2;
                uVar4 = uVar8 + 2;
                uVar11 = (int)uVar29 + iVar26 * uStack_150;
                uVar29 = uVar29 + 1;
                uVar9 = uVar11 * 2;
                uVar5 = uVar9 + 2;
                auVar40 = NEON_fmin(*(undefined1 (*) [16])
                                     (*pauVar6 +
                                     (-(ulong)((uVar10 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 |
                                     (ulong)uVar8 << 3)),
                                    *(undefined1 (*) [16])
                                     (*pauVar6 +
                                     (-(ulong)(uVar4 >> 0x1f) & 0xfffffff800000000 |
                                     (ulong)uVar4 << 3)),8);
                auVar40 = NEON_fmin(auVar40,*(undefined1 (*) [16])
                                             (*pauVar6 +
                                             (-(ulong)((uVar11 & 0x7fffffff) >> 0x1e) &
                                              0xfffffff800000000 | (ulong)uVar9 << 3)),8);
                auVar45 = NEON_fmin(auVar40,*(undefined1 (*) [16])
                                             (*pauVar6 +
                                             (-(ulong)(uVar5 >> 0x1f) & 0xfffffff800000000 |
                                             (ulong)uVar5 << 3)),8);
                auVar40 = NEON_fmax(*(undefined1 (*) [16])
                                     (*pauVar6 +
                                     (-(ulong)((uVar10 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 |
                                     (ulong)uVar8 << 3)),
                                    *(undefined1 (*) [16])
                                     (*pauVar6 +
                                     (-(ulong)(uVar4 >> 0x1f) & 0xfffffff800000000 |
                                     (ulong)uVar4 << 3)),8);
                auVar40 = NEON_fmax(auVar40,*(undefined1 (*) [16])
                                             (*pauVar6 +
                                             (-(ulong)((uVar11 & 0x7fffffff) >> 0x1e) &
                                              0xfffffff800000000 | (ulong)uVar9 << 3)),8);
                auVar40 = NEON_fmax(auVar40,*(undefined1 (*) [16])
                                             (*pauVar6 +
                                             (-(ulong)(uVar5 >> 0x1f) & 0xfffffff800000000 |
                                             (ulong)uVar5 << 3)),8);
                puVar7 = (undefined8 *)((long)ppppdStack_f0 + lVar27);
                puVar7[1] = auVar45._8_8_;
                *puVar7 = auVar45._0_8_;
                puVar7[3] = auVar40._8_8_;
                puVar7[2] = auVar40._0_8_;
                *(int *)(puVar7 + 4) = iVar28;
                iVar28 = iVar28 + 1;
                lVar27 = lVar27 + 0x28;
              } while (uVar34 != uVar29);
              iVar19 = iVar19 + uVar34;
              lVar18 = lVar18 + (long)(int)uVar34 * 0x28;
              iVar26 = iVar26 + 1;
              uVar22 = uVar31;
            } while (uVar31 != uVar32 - 1);
            FUN_109900a6c(&lStack_1d8,&ppppdStack_f0,0,lVar30,0);
            if (ppppdStack_f0 != (double ****)0x0) {
              ppppuStack_e8 = ppppdStack_f0;
              __ZdlPv();
            }
            uVar22 = 0;
            uStack_2fc = 0;
            iStack_1dc = uStack_150 - 1;
            auVar40 = NEON_fmov(0x3fd0000000000000,8);
            dVar41 = auVar40._8_8_;
            dVar38 = auVar40._0_8_;
            do {
              uVar31 = 0;
              do {
                pppppuStack_d0 = &ppppuStack_1f0;
                ppppuStack_1f0 =
                     (undefined8 ****)
                     (((double)(uVar31 & 0xffffffff) / ((double)(int)uVar36 + -1.0) - pdVar20[4]) /
                     pdVar20[2]);
                dStack_1e8 = ((double)(uVar22 & 0xffffffff) / ((double)(int)uVar37 + -1.0) -
                             pdVar20[5]) / pdVar20[3];
                bStack_1f1 = 0;
                ppppdStack_f0 = (double ****)&iStack_1dc;
                ppppuStack_e8 = (undefined8 ****)&uStack_179;
                ppauStack_e0 = &pauStack_178;
                puStack_d8 = &uStack_150;
                ppppuStack_c8 = &ppppuStack_1c0;
                ppdStack_c0 = &pdStack_1a8;
                pbStack_b8 = &bStack_1f1;
                if ((lStack_1d8 == lStack_1d0) ||
                   (FUN_109901794(&lStack_1d8,0,&ppppuStack_1f0,&ppppdStack_f0),
                   (bStack_1f1 & 1) == 0)) {
                  plStack_210 = (long *)0x0;
                  plStack_208 = (long *)0x0;
                  uStack_200 = 0;
                  pdStack_228 = (double *)0x0;
                  pdStack_220 = (double *)0x0;
                  uStack_218 = 0;
                  if (1 < (int)uStack_150) {
                    lVar18 = 0;
                    ppppdVar33 = (double ****)0x0;
                    uVar34 = uStack_150;
                    do {
                      pauVar6 = pauStack_178;
                      dVar47 = *(double *)(*pauStack_178 + lVar18 + 8);
                      dVar43 = *(double *)(pauStack_178[1] + lVar18 + 8);
                      dVar44 = dVar43;
                      if (dVar43 <= dVar47) {
                        dVar44 = dVar47;
                      }
                      if (dStack_1e8 <= dVar44) {
                        iVar26 = ((int)ppppdVar33 + uVar34) * 2;
                        pdVar21 = (double *)(*pauStack_178 + (long)iVar26 * 8);
                        if ((0.0 < -((dVar47 - pdVar21[1]) * ((double)ppppuStack_1f0 - *pdVar21)) +
                                   (dStack_1e8 - pdVar21[1]) *
                                   (*(double *)(*pauStack_178 + lVar18) - *pdVar21)) &&
                           (pdVar1 = (double *)(*pauStack_178 + (long)(iVar26 + 2) * 8),
                           -((dVar43 - pdVar1[1]) * ((double)ppppuStack_1f0 - *pdVar1)) +
                           (dStack_1e8 - pdVar1[1]) *
                           (*(double *)(pauStack_178[1] + lVar18) - *pdVar1) <= 0.0)) {
                          ppppdStack_f0 = ppppdVar33;
                          FUN_109484b50(&plStack_210,&ppppdStack_f0);
                          ppppdStack_f0 =
                               (double ****)
                               ((*(double *)(*pauVar6 + lVar18) + *(double *)(pauVar6[1] + lVar18) +
                                 *pdVar21 + *pdVar1) * dVar38);
                          ppppuStack_e8 =
                               (undefined8 ****)
                               ((*(double *)((long)(*pauVar6 + lVar18) + 8) +
                                 *(double *)(pauVar6[1] + lVar18 + 8) + pdVar21[1] + pdVar1[1]) *
                               dVar41);
                          FUN_1098e2af0(&pdStack_228,&ppppdStack_f0);
                          uVar34 = uStack_150;
                        }
                      }
                      ppppdVar33 = (double ****)((long)ppppdVar33 + 1);
                      lVar18 = lVar18 + 0x10;
                    } while ((long)ppppdVar33 < (long)(int)(uVar34 - 1));
                    if (1 < (int)uVar34) {
                      iVar26 = 0;
                      iVar13 = uStack_14c - 2;
                      iVar28 = uStack_14c * 2;
                      iVar19 = 2;
                      do {
                        iVar12 = iVar19 + (iVar28 + -2) * uVar34;
                        pdVar21 = (double *)(*pauStack_178 + (long)(iVar12 + -2) * 8);
                        pdVar1 = (double *)(*pauStack_178 + (long)iVar12 * 8);
                        dVar47 = pdVar21[1];
                        dVar43 = pdVar1[1];
                        dVar44 = dVar43;
                        if (dVar47 <= dVar43) {
                          dVar44 = dVar47;
                        }
                        if (dVar44 <= dStack_1e8) {
                          iVar12 = iVar19 + iVar13 * 2 * uVar34;
                          pdVar2 = (double *)(*pauStack_178 + (long)(iVar12 + -2) * 8);
                          if ((0.0 < -((pdVar2[1] - dVar47) * ((double)ppppuStack_1f0 - *pdVar21)) +
                                     (dStack_1e8 - dVar47) * (*pdVar2 - *pdVar21)) &&
                             (pdVar3 = (double *)(*pauStack_178 + (long)iVar12 * 8),
                             -((pdVar3[1] - dVar43) * ((double)ppppuStack_1f0 - *pdVar1)) +
                             (dStack_1e8 - dVar43) * (*pdVar3 - *pdVar1) <= 0.0)) {
                            ppppdStack_f0 = (double ****)(long)(int)(iVar26 + uVar34 * iVar13);
                            FUN_109484b50(&plStack_210,&ppppdStack_f0);
                            ppppdStack_f0 =
                                 (double ****)((*pdVar2 + *pdVar3 + *pdVar21 + *pdVar1) * dVar38);
                            ppppuStack_e8 =
                                 (undefined8 ****)
                                 ((pdVar2[1] + pdVar3[1] + pdVar21[1] + pdVar1[1]) * dVar41);
                            FUN_1098e2af0(&pdStack_228,&ppppdStack_f0);
                            uVar34 = uStack_150;
                          }
                        }
                        iVar26 = iVar26 + 1;
                        iVar19 = iVar19 + 2;
                      } while (iVar26 < (int)(uVar34 - 1));
                    }
                  }
                  if (1 < (int)uStack_14c) {
                    iVar26 = 0;
                    iVar19 = 2;
                    uVar34 = uStack_14c;
                    do {
                      iVar28 = uStack_150 * iVar26 * 2;
                      pdVar21 = (double *)(*pauStack_178 + (long)iVar28 * 8);
                      pdVar1 = (double *)(*pauStack_178 + (long)(int)(iVar19 * uStack_150) * 8);
                      dVar47 = *pdVar1;
                      dVar43 = *pdVar21;
                      dVar44 = dVar43;
                      if (dVar43 <= dVar47) {
                        dVar44 = dVar47;
                      }
                      if ((((double)ppppuStack_1f0 <= dVar44) &&
                          (pdVar2 = (double *)
                                    (*pauStack_178 + (long)(int)(iVar19 * uStack_150 + 2) * 8),
                          0.0 < -((pdVar1[1] - pdVar2[1]) * ((double)ppppuStack_1f0 - *pdVar2)) +
                                (dStack_1e8 - pdVar2[1]) * (dVar47 - *pdVar2))) &&
                         (pdVar3 = (double *)(*pauStack_178 + (long)(iVar28 + 2) * 8),
                         -((pdVar21[1] - pdVar3[1]) * ((double)ppppuStack_1f0 - *pdVar3)) +
                         (dStack_1e8 - pdVar3[1]) * (dVar43 - *pdVar3) <= 0.0)) {
                        ppppdStack_f0 = (double ****)(long)(int)(uStack_150 * iVar26);
                        FUN_109484b50(&plStack_210,&ppppdStack_f0);
                        ppppdStack_f0 =
                             (double ****)((*pdVar21 + *pdVar3 + *pdVar1 + *pdVar2) * dVar38);
                        ppppuStack_e8 =
                             (undefined8 ****)
                             ((pdVar21[1] + pdVar3[1] + pdVar1[1] + pdVar2[1]) * dVar41);
                        FUN_1098e2af0(&pdStack_228,&ppppdStack_f0);
                        uVar34 = uStack_14c;
                      }
                      iVar26 = iVar26 + 1;
                      iVar19 = iVar19 + 2;
                    } while (iVar26 < (int)(uVar34 - 1));
                    if (1 < (int)uVar34) {
                      iVar26 = 0;
                      iVar19 = uStack_150 - 2;
                      iVar28 = uStack_150 - 1;
                      do {
                        iVar13 = uStack_150 * iVar26;
                        iVar26 = iVar26 + 1;
                        pdVar21 = (double *)(*pauStack_178 + (long)((iVar13 + iVar28) * 2) * 8);
                        pdVar1 = (double *)
                                 (*pauStack_178 +
                                 (long)(int)((uStack_150 * iVar26 + iVar28) * 2) * 8);
                        dVar47 = *pdVar1;
                        dVar43 = *pdVar21;
                        dVar44 = dVar43;
                        if (dVar47 <= dVar43) {
                          dVar44 = dVar47;
                        }
                        if ((dVar44 <= (double)ppppuStack_1f0) &&
                           (pdVar2 = (double *)
                                     (*pauStack_178 +
                                     (long)(int)((uStack_150 * iVar26 + iVar19) * 2) * 8),
                           0.0 < -((pdVar2[1] - pdVar1[1]) * ((double)ppppuStack_1f0 - dVar47)) +
                                 (dStack_1e8 - pdVar1[1]) * (*pdVar2 - dVar47))) {
                          iVar13 = iVar13 + iVar19;
                          pdVar3 = (double *)(*pauStack_178 + (long)(iVar13 * 2) * 8);
                          if (-((pdVar3[1] - pdVar21[1]) * ((double)ppppuStack_1f0 - dVar43)) +
                              (dStack_1e8 - pdVar21[1]) * (*pdVar3 - dVar43) <= 0.0) {
                            ppppdStack_f0 = (double ****)(long)iVar13;
                            FUN_109484b50(&plStack_210,&ppppdStack_f0);
                            ppppdStack_f0 =
                                 (double ****)((*pdVar3 + *pdVar21 + *pdVar2 + *pdVar1) * dVar38);
                            ppppuStack_e8 =
                                 (undefined8 ****)
                                 ((pdVar3[1] + pdVar21[1] + pdVar2[1] + pdVar1[1]) * dVar41);
                            FUN_1098e2af0(&pdStack_228,&ppppdStack_f0);
                            uVar34 = uStack_14c;
                          }
                        }
                      } while (iVar26 < (int)(uVar34 - 1));
                    }
                  }
                  plVar16 = plStack_208;
                  plVar15 = plStack_210;
                  uStack_229 = 0;
                  bVar17 = plStack_210 == plStack_208;
                  if (bVar17) {
                    ppppdStack_f0 = (double ****)0x0;
                    FUN_109484b50(&plStack_210,&ppppdStack_f0);
                    ppppdStack_f0 = *(double *****)*pauStack_178;
                    ppppuStack_e8 = *(undefined8 *****)(*pauStack_178 + 8);
                    FUN_1098e2af0(&pdStack_228,&ppppdStack_f0);
                    ppppdStack_f0 = (double ****)((long)(int)uStack_150 + -2);
                    FUN_109484b50(&plStack_210,&ppppdStack_f0);
                    uVar34 = uStack_150 * 2 - 2;
                    ppppdStack_f0 =
                         *(double *****)
                          (*pauStack_178 +
                          (-(ulong)(uVar34 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar34 << 3));
                    ppppuStack_e8 =
                         *(undefined8 *****)
                          ((long)(*pauStack_178 +
                                 (-(ulong)(uVar34 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar34 << 3
                                 )) + 8);
                    FUN_1098e2af0(&pdStack_228,&ppppdStack_f0);
                    ppppdStack_f0 =
                         (double ****)(((long)(int)uStack_14c + -2) * (long)(int)uStack_150);
                    FUN_109484b50(&plStack_210,&ppppdStack_f0);
                    uVar34 = (uStack_14c * 2 + -2) * uStack_150;
                    ppppdStack_f0 =
                         *(double *****)
                          (*pauStack_178 +
                          (-(ulong)(uVar34 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar34 << 3));
                    ppppuStack_e8 =
                         *(undefined8 *****)
                          ((long)(*pauStack_178 +
                                 (-(ulong)(uVar34 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar34 << 3
                                 )) + 8);
                    FUN_1098e2af0(&pdStack_228,&ppppdStack_f0);
                    ppppdStack_f0 =
                         (double ****)(((long)(int)uStack_14c + -1) * (long)(int)uStack_150 + -2);
                    FUN_109484b50(&plStack_210,&ppppdStack_f0);
                    uVar34 = (uStack_150 + (uStack_14c - 1) * uStack_150) * 2 - 2;
                    ppppdStack_f0 =
                         *(double *****)
                          (*pauStack_178 +
                          (-(ulong)(uVar34 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar34 << 3));
                    ppppuStack_e8 =
                         *(undefined8 *****)
                          ((long)(*pauStack_178 +
                                 (-(ulong)(uVar34 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar34 << 3
                                 )) + 8);
                    FUN_1098e2af0(&pdStack_228,&ppppdStack_f0);
                  }
                  lVar18 = *plStack_210;
                  uVar29 = (long)plStack_208 - (long)plStack_210 >> 3;
                  if (1 < uVar29) {
                    dVar44 = (*pdStack_228 - (double)ppppuStack_1f0) *
                             (*pdStack_228 - (double)ppppuStack_1f0) +
                             (pdStack_228[1] - dStack_1e8) * (pdStack_228[1] - dStack_1e8);
                    lVar30 = uVar29 - 1;
                    pdVar21 = pdStack_228;
                    plVar25 = plStack_210;
                    do {
                      plVar25 = plVar25 + 1;
                      dVar43 = pdVar21[2] - (double)ppppuStack_1f0;
                      dVar43 = dVar43 * dVar43 +
                               (pdVar21[3] - dStack_1e8) * (pdVar21[3] - dStack_1e8);
                      if (dVar43 < dVar44) {
                        lVar18 = *plVar25;
                        dVar44 = dVar43;
                      }
                      lVar30 = lVar30 + -1;
                      pdVar21 = pdVar21 + 2;
                    } while (lVar30 != 0);
                  }
                  iVar26 = 0;
                  if (uStack_150 != 0) {
                    iVar26 = (int)lVar18 / (int)uStack_150;
                  }
                  iVar28 = (int)lVar18 - iVar26 * uStack_150;
                  iVar19 = iVar28 + 1;
                  iVar13 = iVar26 * uStack_150;
                  lVar30 = (long)((iVar13 + iVar28) * 2) * 8;
                  uStack_229 = bVar17;
                  if (plVar15 == plVar16) {
                    ppppdStack_f0 = *(double *****)(*pauStack_178 + lVar30);
                    ppppuStack_e8 = *(undefined8 *****)((long)(*pauStack_178 + lVar30) + 8);
                    dStack_290 = *(double *)
                                  (*pauStack_178 +
                                  (-(ulong)((iVar13 + iVar19 & 0x7fffffffU) >> 0x1e) &
                                   0xfffffff800000000 | (ulong)(uint)((iVar13 + iVar19) * 2) << 3));
                    dStack_288 = *(double *)
                                  ((long)(*pauStack_178 +
                                         (-(ulong)((iVar13 + iVar19 & 0x7fffffffU) >> 0x1e) &
                                          0xfffffff800000000 |
                                         (ulong)(uint)((iVar13 + iVar19) * 2) << 3)) + 8);
                    iVar13 = uStack_150 + uStack_150 * iVar26;
                    uVar34 = iVar13 + iVar19;
                    dStack_2a8 = *(double *)
                                  ((long)(*pauStack_178 +
                                         (-(ulong)((uVar34 & 0x7fffffff) >> 0x1e) &
                                          0xfffffff800000000 | (ulong)(uVar34 * 2) << 3)) + 8);
                    ppppppuStack_2b0 =
                         *(undefined8 *******)
                          (*pauStack_178 +
                          (-(ulong)((uVar34 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 |
                          (ulong)(uVar34 * 2) << 3));
                    uVar34 = iVar13 + iVar28;
                    dStack_108 = *(double *)
                                  ((long)(*pauStack_178 +
                                         (-(ulong)((uVar34 & 0x7fffffff) >> 0x1e) &
                                          0xfffffff800000000 | (ulong)(uVar34 * 2) << 3)) + 8);
                    pauStack_110 = *(undefined1 (**) [16])
                                    (*pauStack_178 +
                                    (-(ulong)((uVar34 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 |
                                    (ulong)(uVar34 * 2) << 3));
                    if (lVar18 == 0) {
                      ppppppuStack_2b0 =
                           (undefined8 ******)
                           (dStack_290 + ((double)pauStack_110 - (double)ppppdStack_f0));
                      dStack_2a8 = dStack_288 + (dStack_108 - (double)ppppuStack_e8);
                    }
                    else if (lVar18 == (long)(int)uStack_150 + -2) {
                      pauStack_110 = (undefined1 (*) [16])
                                     ((double)ppppdStack_f0 +
                                     ((double)ppppppuStack_2b0 - dStack_290));
                      dStack_108 = (double)ppppuStack_e8 + (dStack_2a8 - dStack_288);
                    }
                    else if (lVar18 == ((long)(int)uStack_14c + -2) * (long)(int)uStack_150) {
                      dStack_290 = (double)ppppdStack_f0 +
                                   ((double)ppppppuStack_2b0 - (double)pauStack_110);
                      dStack_288 = (double)ppppuStack_e8 + (dStack_2a8 - dStack_108);
                    }
                    else {
                      ppppdStack_f0 =
                           (double ****)
                           ((dStack_290 - (double)ppppppuStack_2b0) + (double)pauStack_110);
                      ppppuStack_e8 = (undefined8 ****)((dStack_288 - dStack_2a8) + dStack_108);
                    }
                    func_0x0001098ff504(&ppppdStack_120,&ppppuStack_1f0,&ppppdStack_f0,&dStack_290,
                                        &ppppppuStack_2b0,&pauStack_110);
                    pppppuVar39 = (undefined8 *****)ppppdStack_120;
                    ppppuVar42 = (undefined8 ****)pcStack_118;
                  }
                  else {
                    iVar12 = uStack_150 + uStack_150 * iVar26;
                    uVar34 = iVar12 + iVar19;
                    uVar32 = iVar12 + iVar28;
                    func_0x0001098ff740(ppppuStack_1f0,*(undefined8 *)(*pauStack_178 + lVar30),
                                        *(undefined8 *)
                                         (*pauStack_178 +
                                         (-(ulong)((iVar13 + iVar19 & 0x7fffffffU) >> 0x1e) &
                                          0xfffffff800000000 |
                                         (ulong)(uint)((iVar13 + iVar19) * 2) << 3)),
                                        *(undefined8 *)
                                         (*pauStack_178 +
                                         (-(ulong)((uVar34 & 0x7fffffff) >> 0x1e) &
                                          0xfffffff800000000 | (ulong)(uVar34 * 2) << 3)),
                                        SUB168(*(undefined1 (*) [16])
                                                (*pauStack_178 +
                                                (-(ulong)((uVar32 & 0x7fffffff) >> 0x1e) &
                                                 0xfffffff800000000 | (ulong)(uVar32 * 2) << 3)),0),
                                        &ppppdStack_f0);
                    pppppuVar39 = (undefined8 *****)ppppdStack_f0;
                    ppppuVar42 = ppppuStack_e8;
                  }
                  if ((NAN((double)pppppuVar39)) || (NAN((double)ppppuVar42))) {
                    dStack_1b8 = dStack_1e8;
                    ppppuStack_1c0 = ppppuStack_1f0;
                    dStack_290 = 0.0;
                    uStack_238 = 0;
                    uStack_278 = 0;
                    uStack_280 = 0;
                    uStack_268 = 0;
                    uStack_270 = 0;
                    uStack_258 = 0;
                    uStack_260 = 0;
                    uStack_248 = 0;
                    uStack_250 = 0;
                    uStack_240 = 0;
                    FUN_1099a9f0c(&dStack_290,&UNK_10f5898fc,0x186,2,FUN_1099aa768,0);
                    dVar43 = dStack_288;
                    iVar26 = uStack_150 * iVar26;
                    pauStack_110 = (undefined1 (*) [16])
                                   (*pauStack_178 + (long)((iVar26 + iVar28) * 2) * 8);
                    ppppdStack_120 =
                         (double ****)(*pauStack_178 + (long)((iVar26 + iVar19) * 2) * 8);
                    apdStack_130[0] =
                         (double *)
                         (*pauStack_178 + (long)(int)((uStack_150 + iVar26 + iVar19) * 2) * 8);
                    apuStack_140[0] =
                         *pauStack_178 + (long)(int)((uStack_150 + iVar26 + iVar28) * 2) * 8;
                    puStack_148 = &uStack_229;
                    ppppdStack_f0 = (double ****)&ppppuStack_f8;
                    ppauStack_e0 = &pauStack_110;
                    ppppuStack_e8 = (undefined8 ****)FUN_109901984;
                    pppppuStack_d0 = &ppppdStack_120;
                    puStack_d8 = (uint *)0x109901bb4;
                    ppdStack_c0 = apdStack_130;
                    ppppuStack_c8 = (undefined8 *****)0x109901bb4;
                    ppuStack_b0 = apuStack_140;
                    pbStack_b8 = (byte *)0x109901bb4;
                    uStack_a0 = &puStack_148;
                    uStack_a8 = 0x109901bb4;
                    pcStack_98 = FUN_109901de4;
                    ppppuStack_f8 = &ppppuStack_1f0;
                    FUN_1099ade68(&ppppppuStack_2b0,&UNK_10f589a7a,0x35,0xffffff,&ppppdStack_f0);
                    dVar44 = dStack_2a8;
                    pppppppuVar14 = (undefined8 *******)ppppppuStack_2b0;
                    if (-1 < (char)bStack_299) {
                      dVar44 = (double)(ulong)bStack_299;
                      pppppppuVar14 = &ppppppuStack_2b0;
                    }
                    FUN_1092b4db8((long)dVar43 + 0x7540,pppppppuVar14,dVar44);
                    if ((char)bStack_299 < '\0') {
                      __ZdlPv(ppppppuStack_2b0);
                    }
                    FUN_1099ab3b0(&dStack_290);
                    uStack_2fc = 1;
                  }
                  else {
                    dVar44 = (double)iVar28 / *pdStack_1a8;
                    dVar43 = (double)iVar26 / pdStack_1a8[1];
                    ppppuStack_1c0 =
                         (undefined8 ****)
                         (((dVar44 + (double)pppppuVar39 * ((double)iVar19 / *pdStack_1a8 - dVar44))
                          - **ppdStack_1a0) / **ppdStack_198);
                    dStack_1b8 = ((dVar43 + (double)ppppuVar42 *
                                            ((double)(iVar26 + 1) / pdStack_1a8[1] - dVar43)) -
                                 (*ppdStack_1a0)[1]) / (*ppdStack_198)[1];
                    bStack_1f1 = 1;
                  }
                  if (pdStack_228 != (double *)0x0) {
                    pdStack_220 = pdStack_228;
                    __ZdlPv();
                  }
                  if (plStack_210 != (long *)0x0) {
                    plStack_208 = plStack_210;
                    __ZdlPv();
                  }
                }
                pdVar21 = (double *)(lVar35 + 0x30 + (uVar31 + uVar22 * uVar36) * 0x10);
                *pdVar21 = (double)ppppuStack_1c0;
                pdVar21[1] = dStack_1b8;
                uVar31 = uVar31 + 1;
              } while (uVar31 != uVar36);
              uVar22 = uVar22 + 1;
            } while (uVar22 != uVar37);
            if (lStack_1d8 == 0) {
              return uStack_2fc ^ 1;
            }
            lStack_1d0 = lStack_1d8;
            __ZdlPv();
            return uStack_2fc ^ 1;
          }
          ppppdStack_f0 = (double ****)0x0;
          pcStack_98 = (code *)0x0;
          puStack_d8 = (uint *)0x0;
          ppauStack_e0 = (undefined1 (**) [16])0x0;
          ppppuStack_c8 = (undefined8 ****)0x0;
          pppppuStack_d0 = (undefined8 *****)0x0;
          pbStack_b8 = (byte *)0x0;
          ppdStack_c0 = (double **)0x0;
          uStack_a8 = 0;
          ppuStack_b0 = (undefined1 **)0x0;
          uStack_a0 = (undefined1 **)((ulong)uStack_a0._4_4_ << 0x20);
          FUN_1099a9f0c(&ppppdStack_f0,&UNK_10f5898fc,0x90,2,FUN_1099aa768,0);
          FUN_1092b4db8((long)ppppuStack_e8 + 0x7540,&UNK_10f589a60,0x19);
        }
      }
    }
  }
  FUN_1099ab3b0(&ppppdStack_f0);
  return 0;
}



/* Entry: 109900948; end: 109900a6b;  */

long * FUN_109900948(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,uint param_5)

{
  int iVar1;
  long *plVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined1 (*pauVar7) [16];
  undefined8 *puVar8;
  int iVar9;
  long *plVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  uint uStack_a4;
  long *plStack_48;
  long lStack_40;
  long lStack_38;
  long *plStack_30;
  long *plStack_28;
  
  lVar5 = *param_1;
  if ((long *)((param_1[2] - lVar5 >> 4) * -0x5555555555555555) < param_2) {
    if ((long *)0x555555555555555 < param_2) {
      FUN_109900d68();
      if (lStack_38 - lStack_40 != 0) {
        lStack_38 = lStack_38 + (((lStack_38 - lStack_40) - 0x30U) / 0x30) * -0x30 + -0x30;
      }
      if (plStack_48 != (long *)0x0) {
        __ZdlPv();
      }
      __Unwind_Resume();
      uVar3 = (uint)param_3;
      iVar4 = (int)param_4;
      iVar1 = iVar4 - uVar3;
      if (iVar1 == 0 || iVar4 < (int)uVar3) {
        plVar10 = (long *)0xffffffff;
      }
      else {
        puVar8 = (undefined8 *)param_1[1];
        plVar10 = (long *)(((long)puVar8 - *param_1 >> 4) * -0x5555555555555555);
        if (puVar8 < (undefined8 *)param_1[2]) {
          puVar8[3] = 0;
          puVar8[2] = 0;
          puVar8[5] = 0;
          puVar8[4] = 0;
          puVar8[1] = 0;
          *puVar8 = 0;
          puVar8[4] = 0xffffffffffffffff;
          *(undefined4 *)(puVar8 + 5) = 0xffffffff;
          plVar2 = puVar8 + 6;
        }
        else {
          plVar2 = param_1;
          FUN_109900e48();
        }
        param_1[1] = (long)plVar2;
        pauVar7 = (undefined1 (*) [16])(*param_2 + (long)(int)uVar3 * 0x28);
        auVar11 = *pauVar7;
        auVar12 = pauVar7[1];
        if ((int)(uVar3 + 1) < iVar4) {
          iVar9 = ~uVar3 + iVar4;
          pauVar7 = (undefined1 (*) [16])(*param_2 + (long)(int)(uVar3 + 1) * 0x28 + 0x10);
          do {
            auVar11 = NEON_fmin(auVar11,pauVar7[-1],8);
            auVar12 = NEON_fmax(auVar12,*pauVar7,8);
            pauVar7 = (undefined1 (*) [16])(pauVar7[2] + 8);
            iVar9 = iVar9 + -1;
          } while (iVar9 != 0);
        }
        iVar9 = (int)plVar10;
        puVar8 = (undefined8 *)(*param_1 + (long)iVar9 * 0x30);
        puVar8[1] = auVar11._8_8_;
        *puVar8 = auVar11._0_8_;
        puVar8[3] = auVar12._8_8_;
        puVar8[2] = auVar12._0_8_;
        if (iVar1 == 1) {
          *(undefined4 *)(*param_1 + (long)iVar9 * 0x30 + 0x28) =
               *(undefined4 *)(*param_2 + (long)(int)uVar3 * 0x28 + 0x20);
        }
        else {
          uStack_a4 = -(param_5 & 1);
          if (-1 < (int)param_5) {
            uStack_a4 = param_5 & 1;
          }
          iVar1 = uVar3 + iVar1 / 2;
          lVar5 = *param_2;
          if (iVar1 != iVar4) {
            FUN_109900fc0(lVar5 + (long)(int)uVar3 * 0x28,lVar5 + (long)iVar1 * 0x28,
                          lVar5 + (long)iVar4 * 0x28,&uStack_a4);
          }
          plVar2 = param_1;
          FUN_109900a6c(param_1,param_2,param_3,iVar1,param_5 + 1);
          *(int *)(*param_1 + (long)iVar9 * 0x30 + 0x20) = (int)plVar2;
          plVar2 = param_1;
          FUN_109900a6c(param_1,param_2,iVar1,param_4,param_5 + 1);
          *(int *)(*param_1 + (long)iVar9 * 0x30 + 0x24) = (int)plVar2;
        }
      }
      return plVar10;
    }
    lVar6 = param_1[1];
    plVar10 = param_1;
    plStack_28 = param_1;
    FUN_109900e04();
    lStack_40 = (long)plVar10 + (lVar6 - lVar5);
    plStack_30 = plVar10 + (long)param_2 * 6;
    plStack_48 = plVar10;
    lStack_38 = lStack_40;
    FUN_109900d7c(param_1,&plStack_48);
    if (lStack_38 - lStack_40 != 0) {
      lStack_38 = lStack_38 + (((lStack_38 - lStack_40) - 0x30U) / 0x30) * -0x30 + -0x30;
    }
    param_1 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      __ZdlPv();
      param_1 = plStack_48;
    }
  }
  return param_1;
}



/* Entry: 109900a6c; end: 109900c2f;  */

long FUN_109900a6c(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,uint param_5)

{
  int iVar1;
  long *plVar2;
  uint uVar3;
  int iVar4;
  undefined1 (*pauVar5) [16];
  undefined8 *puVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  uint uStack_54;
  
  uVar3 = (uint)param_3;
  iVar4 = (int)param_4;
  iVar1 = iVar4 - uVar3;
  if (iVar1 == 0 || iVar4 < (int)uVar3) {
    lVar9 = 0xffffffff;
  }
  else {
    puVar6 = (undefined8 *)param_1[1];
    lVar9 = ((long)puVar6 - *param_1 >> 4) * -0x5555555555555555;
    if (puVar6 < (undefined8 *)param_1[2]) {
      puVar6[3] = 0;
      puVar6[2] = 0;
      puVar6[5] = 0;
      puVar6[4] = 0;
      puVar6[1] = 0;
      *puVar6 = 0;
      puVar6[4] = 0xffffffffffffffff;
      *(undefined4 *)(puVar6 + 5) = 0xffffffff;
      plVar2 = puVar6 + 6;
    }
    else {
      plVar2 = param_1;
      FUN_109900e48();
    }
    param_1[1] = (long)plVar2;
    pauVar5 = (undefined1 (*) [16])(*param_2 + (long)(int)uVar3 * 0x28);
    auVar10 = *pauVar5;
    auVar11 = pauVar5[1];
    if ((int)(uVar3 + 1) < iVar4) {
      iVar8 = ~uVar3 + iVar4;
      pauVar5 = (undefined1 (*) [16])(*param_2 + (long)(int)(uVar3 + 1) * 0x28 + 0x10);
      do {
        auVar10 = NEON_fmin(auVar10,pauVar5[-1],8);
        auVar11 = NEON_fmax(auVar11,*pauVar5,8);
        pauVar5 = (undefined1 (*) [16])(pauVar5[2] + 8);
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    iVar8 = (int)lVar9;
    puVar6 = (undefined8 *)(*param_1 + (long)iVar8 * 0x30);
    puVar6[1] = auVar10._8_8_;
    *puVar6 = auVar10._0_8_;
    puVar6[3] = auVar11._8_8_;
    puVar6[2] = auVar11._0_8_;
    if (iVar1 == 1) {
      *(undefined4 *)(*param_1 + (long)iVar8 * 0x30 + 0x28) =
           *(undefined4 *)(*param_2 + (long)(int)uVar3 * 0x28 + 0x20);
    }
    else {
      uStack_54 = -(param_5 & 1);
      if (-1 < (int)param_5) {
        uStack_54 = param_5 & 1;
      }
      iVar1 = uVar3 + iVar1 / 2;
      lVar7 = *param_2;
      if (iVar1 != iVar4) {
        FUN_109900fc0(lVar7 + (long)(int)uVar3 * 0x28,lVar7 + (long)iVar1 * 0x28,
                      lVar7 + (long)iVar4 * 0x28,&uStack_54);
      }
      plVar2 = param_1;
      FUN_109900a6c(param_1,param_2,param_3,iVar1,param_5 + 1);
      *(int *)(*param_1 + (long)iVar8 * 0x30 + 0x20) = (int)plVar2;
      plVar2 = param_1;
      FUN_109900a6c(param_1,param_2,iVar1,param_4,param_5 + 1);
      *(int *)(*param_1 + (long)iVar8 * 0x30 + 0x24) = (int)plVar2;
    }
  }
  return lVar9;
}



/* Entry: 109900c30; end: 109900cc7;  */

undefined8 * FUN_109900c30(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    FUN_109900cc8(param_1);
    lVar2 = param_1[1];
    lVar1 = ((param_2 * 0x28 - 0x28U) / 0x28) * 0x28 + 0x28;
    _bzero(lVar2,lVar1);
    param_1[1] = lVar2 + lVar1;
  }
  return param_1;
}



/* Entry: 109900cc8; end: 109900d0f;  */

void FUN_109900cc8(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  if (param_2 < (undefined8 *)0x666666666666667) {
    plVar3 = param_1;
    FUN_109900d24();
    *param_1 = (long)plVar3;
    param_1[1] = (long)plVar3;
    param_1[2] = (long)(plVar3 + (long)param_2 * 5);
    return;
  }
  FUN_109900d10();
  func_0x000104c4f6cc(&DAT_10f62a4d8);
  if ((undefined8 *)0x666666666666666 < param_2) {
    func_0x000104c4f740();
    plVar3 = (long *)&DAT_10f62a4d8;
    func_0x000104c4f6cc();
    puVar4 = (undefined8 *)*plVar3;
    puVar2 = (undefined8 *)plVar3[1];
    puVar1 = (undefined8 *)((long)puVar4 + (param_2[1] - (long)puVar2));
    puVar6 = puVar1;
    if (puVar2 != puVar4) {
      do {
        uVar7 = *puVar4;
        puVar6[1] = puVar4[1];
        *puVar6 = uVar7;
        uVar7 = puVar4[2];
        puVar6[3] = puVar4[3];
        puVar6[2] = uVar7;
        uVar7 = puVar4[4];
        *(undefined4 *)(puVar6 + 5) = *(undefined4 *)(puVar4 + 5);
        puVar6[4] = uVar7;
        puVar4 = puVar4 + 6;
        puVar6 = puVar6 + 6;
      } while (puVar4 != puVar2);
      puVar4 = (undefined8 *)*plVar3;
    }
    param_2[1] = puVar1;
    *plVar3 = (long)puVar1;
    plVar3[1] = (long)puVar4;
    param_2[1] = puVar4;
    lVar5 = plVar3[1];
    plVar3[1] = param_2[2];
    param_2[2] = lVar5;
    lVar5 = plVar3[2];
    plVar3[2] = param_2[3];
    param_2[3] = lVar5;
    *param_2 = param_2[1];
    return;
  }
  __Znwm((long)param_2 * 0x28);
  return;
}



/* Entry: 109900d10; end: 109900d23;  */

void FUN_109900d10(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  func_0x000104c4f6cc(&DAT_10f62a4d8);
  if ((undefined8 *)0x666666666666666 < param_2) {
    func_0x000104c4f740();
    plVar3 = (long *)&DAT_10f62a4d8;
    func_0x000104c4f6cc();
    puVar4 = (undefined8 *)*plVar3;
    puVar2 = (undefined8 *)plVar3[1];
    puVar1 = (undefined8 *)((long)puVar4 + (param_2[1] - (long)puVar2));
    puVar6 = puVar1;
    if (puVar2 != puVar4) {
      do {
        uVar7 = *puVar4;
        puVar6[1] = puVar4[1];
        *puVar6 = uVar7;
        uVar7 = puVar4[2];
        puVar6[3] = puVar4[3];
        puVar6[2] = uVar7;
        uVar7 = puVar4[4];
        *(undefined4 *)(puVar6 + 5) = *(undefined4 *)(puVar4 + 5);
        puVar6[4] = uVar7;
        puVar4 = puVar4 + 6;
        puVar6 = puVar6 + 6;
      } while (puVar4 != puVar2);
      puVar4 = (undefined8 *)*plVar3;
    }
    param_2[1] = puVar1;
    *plVar3 = (long)puVar1;
    plVar3[1] = (long)puVar4;
    param_2[1] = puVar4;
    lVar5 = plVar3[1];
    plVar3[1] = param_2[2];
    param_2[2] = lVar5;
    lVar5 = plVar3[2];
    plVar3[2] = param_2[3];
    param_2[3] = lVar5;
    *param_2 = param_2[1];
    return;
  }
  __Znwm((long)param_2 * 0x28);
  return;
}



/* Entry: 109900d24; end: 109900d67;  */

void FUN_109900d24(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  if ((undefined8 *)0x666666666666666 < param_2) {
    func_0x000104c4f740();
    plVar3 = (long *)&DAT_10f62a4d8;
    func_0x000104c4f6cc();
    puVar4 = (undefined8 *)*plVar3;
    puVar2 = (undefined8 *)plVar3[1];
    puVar1 = (undefined8 *)((long)puVar4 + (param_2[1] - (long)puVar2));
    puVar6 = puVar1;
    if (puVar2 != puVar4) {
      do {
        uVar7 = *puVar4;
        puVar6[1] = puVar4[1];
        *puVar6 = uVar7;
        uVar7 = puVar4[2];
        puVar6[3] = puVar4[3];
        puVar6[2] = uVar7;
        uVar7 = puVar4[4];
        *(undefined4 *)(puVar6 + 5) = *(undefined4 *)(puVar4 + 5);
        puVar6[4] = uVar7;
        puVar4 = puVar4 + 6;
        puVar6 = puVar6 + 6;
      } while (puVar4 != puVar2);
      puVar4 = (undefined8 *)*plVar3;
    }
    param_2[1] = puVar1;
    *plVar3 = (long)puVar1;
    plVar3[1] = (long)puVar4;
    param_2[1] = puVar4;
    lVar5 = plVar3[1];
    plVar3[1] = param_2[2];
    param_2[2] = lVar5;
    lVar5 = plVar3[2];
    plVar3[2] = param_2[3];
    param_2[3] = lVar5;
    *param_2 = param_2[1];
    return;
  }
  __Znwm((long)param_2 * 0x28);
  return;
}



/* Entry: 109900d68; end: 109900d7b;  */

void FUN_109900d68(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  plVar3 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  puVar4 = (undefined8 *)*plVar3;
  puVar2 = (undefined8 *)plVar3[1];
  puVar1 = (undefined8 *)((long)puVar4 + (param_2[1] - (long)puVar2));
  puVar6 = puVar1;
  if (puVar2 != puVar4) {
    do {
      uVar7 = *puVar4;
      puVar6[1] = puVar4[1];
      *puVar6 = uVar7;
      uVar7 = puVar4[2];
      puVar6[3] = puVar4[3];
      puVar6[2] = uVar7;
      uVar7 = puVar4[4];
      *(undefined4 *)(puVar6 + 5) = *(undefined4 *)(puVar4 + 5);
      puVar6[4] = uVar7;
      puVar4 = puVar4 + 6;
      puVar6 = puVar6 + 6;
    } while (puVar4 != puVar2);
    puVar4 = (undefined8 *)*plVar3;
  }
  param_2[1] = puVar1;
  *plVar3 = (long)puVar1;
  plVar3[1] = (long)puVar4;
  param_2[1] = puVar4;
  lVar5 = plVar3[1];
  plVar3[1] = param_2[2];
  param_2[2] = lVar5;
  lVar5 = plVar3[2];
  plVar3[2] = param_2[3];
  param_2[3] = lVar5;
  *param_2 = param_2[1];
  return;
}



/* Entry: 109900d7c; end: 109900e03;  */

void FUN_109900d7c(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  puVar3 = (undefined8 *)*param_1;
  puVar2 = (undefined8 *)param_1[1];
  puVar1 = (undefined8 *)((long)puVar3 + (param_2[1] - (long)puVar2));
  puVar5 = puVar1;
  if (puVar2 != puVar3) {
    do {
      uVar6 = *puVar3;
      puVar5[1] = puVar3[1];
      *puVar5 = uVar6;
      uVar6 = puVar3[2];
      puVar5[3] = puVar3[3];
      puVar5[2] = uVar6;
      uVar6 = puVar3[4];
      *(undefined4 *)(puVar5 + 5) = *(undefined4 *)(puVar3 + 5);
      puVar5[4] = uVar6;
      puVar3 = puVar3 + 6;
      puVar5 = puVar5 + 6;
    } while (puVar3 != puVar2);
    puVar3 = (undefined8 *)*param_1;
  }
  param_2[1] = puVar1;
  *param_1 = (long)puVar1;
  param_1[1] = (long)puVar3;
  param_2[1] = puVar3;
  lVar4 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar4;
  lVar4 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar4;
  *param_2 = param_2[1];
  return;
}



/* Entry: 109900e04; end: 109900e47;  */

undefined1  [16] FUN_109900e04(long *param_1,long *param_2,long *param_3,int *param_4)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long **pplVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  double *pdVar16;
  ulong uVar17;
  long *plVar18;
  long *plVar19;
  uint uVar20;
  double dVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  double dVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  long *plStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  long *plStack_50;
  long *plStack_48;
  
  if (param_2 < (long *)0x555555555555556) {
    lVar6 = (long)param_2 * 0x30;
    __Znwm(lVar6);
    auVar27._8_8_ = param_2;
    auVar27._0_8_ = lVar6;
    return auVar27;
  }
  func_0x000104c4f740();
  lVar6 = param_1[1] - *param_1;
  uVar14 = (lVar6 >> 4) * -0x5555555555555555 + 1;
  if (uVar14 < 0x555555555555556) {
    lVar12 = param_1[2] - *param_1 >> 4;
    uVar17 = lVar12 * 0x5555555555555556;
    if (uVar17 < uVar14 || uVar17 - uVar14 == 0) {
      uVar17 = uVar14;
    }
    if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar12 * -0x5555555555555555)) {
      uVar17 = 0x555555555555555;
    }
    plStack_48 = param_1;
    if (uVar17 == 0) {
      plVar7 = (long *)0x0;
    }
    else {
      plVar7 = param_1;
      FUN_109900e04();
    }
    puStack_60 = (undefined8 *)((long)plVar7 + lVar6);
    plStack_50 = plVar7 + uVar17 * 6;
    puStack_60[3] = 0;
    puStack_60[2] = 0;
    puStack_60[5] = 0;
    puStack_60[4] = 0;
    puStack_60[1] = 0;
    *puStack_60 = 0;
    puStack_60[4] = 0xffffffffffffffff;
    *(undefined4 *)(puStack_60 + 5) = 0xffffffff;
    puStack_58 = puStack_60 + 6;
    pplVar9 = &plStack_68;
    plStack_68 = plVar7;
    FUN_109900d7c(param_1,pplVar9);
    lVar6 = param_1[1];
    if ((long)puStack_58 - (long)puStack_60 != 0) {
      puStack_58 = puStack_58 + ((((long)puStack_58 - (long)puStack_60) - 0x30U) / 0x30) * -6 + -6;
    }
    if (plStack_68 != (long *)0x0) {
      __ZdlPv();
    }
    auVar28._8_8_ = pplVar9;
    auVar28._0_8_ = lVar6;
    return auVar28;
  }
  FUN_109900d68();
  if ((long)puStack_58 - (long)puStack_60 != 0) {
    puStack_58 = (undefined8 *)
                 ((long)puStack_58 +
                  ((((long)puStack_58 - (long)puStack_60) - 0x30U) / 0x30) * -0x30 + -0x30);
  }
  if (plStack_68 != (long *)0x0) {
    __ZdlPv();
  }
  __Unwind_Resume();
  plVar7 = param_1;
  plVar10 = param_2;
joined_r0x000109900fe4:
  while (plVar5 = param_3, plVar5 != param_2) {
    uVar14 = ((long)plVar5 - (long)plVar7 >> 3) * -0x3333333333333333;
    if (uVar14 < 2) break;
    if (uVar14 == 3) {
      plVar19 = plVar5 + -5;
      plVar10 = plVar7 + 5;
      iVar4 = *param_4;
      plVar11 = plVar7 + 7;
      dVar21 = (double)plVar10[iVar4] + (double)plVar11[iVar4];
      plVar15 = plVar7 + 2;
      plVar13 = plVar5 + -3;
      if ((double)plVar7[iVar4] + (double)plVar15[iVar4] <= dVar21) {
        if (dVar21 <= (double)plVar19[iVar4] + (double)plVar13[iVar4]) {
          uVar8 = 0;
          goto LAB_1099016c8;
        }
        lVar22 = plVar7[6];
        lVar12 = *plVar10;
        lVar24 = plVar7[8];
        lVar23 = *plVar11;
        lVar6 = plVar7[9];
        lVar25 = *plVar19;
        plVar7[6] = plVar5[-4];
        *plVar10 = lVar25;
        lVar25 = *plVar13;
        plVar7[8] = plVar5[-2];
        *plVar11 = lVar25;
        *(int *)(plVar7 + 9) = (int)plVar5[-1];
        plVar5[-4] = lVar22;
        *plVar19 = lVar12;
        plVar5[-2] = lVar24;
        *plVar13 = lVar23;
        *(int *)(plVar5 + -1) = (int)lVar6;
        iVar4 = *param_4;
        if ((double)plVar10[iVar4] + (double)plVar11[iVar4] <
            (double)plVar7[iVar4] + (double)plVar15[iVar4]) {
          lVar22 = plVar7[1];
          lVar12 = *plVar7;
          lVar24 = plVar7[3];
          lVar23 = *plVar15;
          lVar6 = plVar7[4];
          plVar7[1] = plVar7[6];
          *plVar7 = *plVar10;
          plVar7[3] = plVar7[8];
          *plVar15 = *plVar11;
          *(int *)(plVar7 + 4) = (int)plVar7[9];
          plVar7[6] = lVar22;
          *plVar10 = lVar12;
          plVar7[8] = lVar24;
          *plVar11 = lVar23;
          *(int *)(plVar7 + 9) = (int)lVar6;
        }
      }
      else if (dVar21 <= (double)plVar19[iVar4] + (double)plVar13[iVar4]) {
        lVar22 = plVar7[1];
        lVar12 = *plVar7;
        lVar24 = plVar7[3];
        lVar23 = *plVar15;
        lVar6 = plVar7[4];
        plVar7[1] = plVar7[6];
        *plVar7 = *plVar10;
        plVar7[3] = plVar7[8];
        *plVar15 = *plVar11;
        *(int *)(plVar7 + 4) = (int)plVar7[9];
        plVar7[6] = lVar22;
        *plVar10 = lVar12;
        plVar7[8] = lVar24;
        *plVar11 = lVar23;
        *(int *)(plVar7 + 9) = (int)lVar6;
        iVar4 = *param_4;
        if ((double)plVar19[iVar4] + (double)plVar13[iVar4] <
            (double)plVar10[iVar4] + (double)plVar11[iVar4]) {
          lVar22 = plVar7[6];
          lVar12 = *plVar10;
          lVar24 = plVar7[8];
          lVar23 = *plVar11;
          lVar25 = *plVar19;
          plVar7[6] = plVar5[-4];
          *plVar10 = lVar25;
          lVar25 = *plVar13;
          plVar7[8] = plVar5[-2];
          *plVar11 = lVar25;
          *(int *)(plVar7 + 9) = (int)plVar5[-1];
          plVar5[-4] = lVar22;
          *plVar19 = lVar12;
          plVar5[-2] = lVar24;
          *plVar13 = lVar23;
          *(int *)(plVar5 + -1) = (int)lVar6;
        }
      }
      else {
        lVar22 = plVar7[1];
        lVar12 = *plVar7;
        lVar24 = plVar7[3];
        lVar23 = *plVar15;
        lVar6 = plVar7[4];
        lVar25 = *plVar19;
        plVar7[1] = plVar5[-4];
        *plVar7 = lVar25;
        lVar25 = *plVar13;
        plVar7[3] = plVar5[-2];
        *plVar15 = lVar25;
        *(int *)(plVar7 + 4) = (int)plVar5[-1];
        plVar5[-4] = lVar22;
        *plVar19 = lVar12;
        plVar5[-2] = lVar24;
        *plVar13 = lVar23;
        *(int *)(plVar5 + -1) = (int)lVar6;
      }
      uVar8 = 1;
LAB_1099016c8:
      auVar30._8_8_ = plVar10;
      auVar30._0_8_ = uVar8;
      return auVar30;
    }
    if (uVar14 == 2) {
      plVar15 = plVar5 + -5;
      iVar4 = *param_4;
      plVar13 = plVar5 + -3;
      plVar11 = plVar7 + 2;
      if ((double)plVar15[iVar4] + (double)plVar13[iVar4] <
          (double)plVar7[iVar4] + (double)plVar11[iVar4]) {
        lVar23 = plVar7[1];
        lVar12 = *plVar7;
        lVar25 = plVar7[3];
        lVar24 = *plVar11;
        lVar6 = plVar7[4];
        lVar22 = *plVar15;
        plVar7[1] = plVar5[-4];
        *plVar7 = lVar22;
        lVar22 = *plVar13;
        plVar7[3] = plVar5[-2];
        *plVar11 = lVar22;
        *(int *)(plVar7 + 4) = (int)plVar5[-1];
        plVar5[-4] = lVar23;
        *plVar15 = lVar12;
        plVar5[-2] = lVar25;
        *plVar13 = lVar24;
        *(int *)(plVar5 + -1) = (int)lVar6;
      }
      break;
    }
    if ((long)plVar5 - (long)plVar7 < 0x140) {
      for (; plVar5 + -5 != plVar7; plVar7 = plVar7 + 5) {
        if ((plVar5 != plVar7) && (plVar7 + 5 != plVar5)) {
          lVar6 = (long)*param_4;
          plVar10 = plVar7;
          plVar11 = plVar7;
          do {
            plVar15 = plVar11 + 10;
            plVar13 = plVar11 + 5;
            if ((double)plVar10[lVar6] + (double)(plVar10 + lVar6)[2] <=
                (double)plVar11[lVar6 + 5] + (double)plVar11[lVar6 + 7]) {
              plVar13 = plVar10;
            }
            plVar10 = plVar13;
            plVar11 = plVar11 + 5;
          } while (plVar15 != plVar5);
          if (plVar13 != plVar7) {
            lVar22 = plVar7[1];
            lVar12 = *plVar7;
            lVar25 = plVar7[3];
            lVar23 = plVar7[2];
            lVar6 = plVar7[4];
            lVar24 = *plVar13;
            plVar7[1] = plVar13[1];
            *plVar7 = lVar24;
            lVar24 = plVar13[2];
            plVar7[3] = plVar13[3];
            plVar7[2] = lVar24;
            *(int *)(plVar7 + 4) = (int)plVar13[4];
            plVar13[1] = lVar22;
            *plVar13 = lVar12;
            plVar13[3] = lVar25;
            plVar13[2] = lVar23;
            *(int *)(plVar13 + 4) = (int)lVar6;
          }
        }
      }
      auVar31._8_8_ = plVar5;
      auVar31._0_8_ = plVar7;
      return auVar31;
    }
    plVar19 = plVar7 + (uVar14 >> 1) * 5;
    plVar15 = plVar5 + -5;
    param_1 = plVar7;
    plVar10 = plVar19;
    FUN_109901530(plVar7,plVar19,plVar15,param_4);
    lVar6 = (long)*param_4;
    plVar11 = plVar7 + 2;
    dVar21 = (double)plVar7[lVar6] + (double)plVar11[lVar6];
    dVar26 = (double)plVar19[lVar6] + (double)(plVar19 + lVar6)[2];
    plVar13 = plVar15;
    if (dVar26 <= dVar21) {
      plVar18 = plVar5 + -10;
      do {
        plVar13 = plVar18;
        if (plVar13 == plVar7) {
          plVar13 = plVar7 + 5;
          plVar19 = plVar5 + -3;
          if (dVar21 < (double)plVar15[lVar6] + (double)plVar19[lVar6]) goto LAB_10990139c;
          if (plVar13 != plVar15) goto LAB_1099012f0;
          goto LAB_109900fe8;
        }
        plVar18 = plVar13 + -5;
      } while (dVar26 <= (double)plVar13[lVar6] + (double)(plVar13 + lVar6)[2]);
      lVar24 = plVar7[1];
      lVar12 = *plVar7;
      lVar25 = plVar7[3];
      lVar22 = *plVar11;
      lVar6 = plVar7[4];
      lVar23 = *plVar13;
      plVar7[1] = plVar13[1];
      *plVar7 = lVar23;
      lVar23 = plVar13[2];
      plVar7[3] = plVar13[3];
      *plVar11 = lVar23;
      *(int *)(plVar7 + 4) = (int)plVar13[4];
      plVar13[1] = lVar24;
      *plVar13 = lVar12;
      plVar13[3] = lVar25;
      plVar13[2] = lVar22;
      *(int *)(plVar13 + 4) = (int)lVar6;
      uVar20 = 1;
      if ((int)param_1 != 0) {
        uVar20 = 2;
      }
      param_1 = (long *)(ulong)uVar20;
    }
    plVar11 = plVar7 + 5;
    param_3 = plVar11;
    plVar15 = plVar11;
    plVar18 = plVar19;
    if (plVar11 < plVar13) {
      while( true ) {
        plVar19 = plVar18;
        lVar6 = (long)*param_4;
        dVar21 = (double)plVar19[lVar6] + (double)(plVar19 + lVar6)[2];
        do {
          param_3 = plVar15;
          plVar15 = param_3 + 5;
        } while ((double)(param_3 + lVar6 + 2)[-2] + (double)param_3[lVar6 + 2] < dVar21);
        do {
          plVar18 = plVar13;
          plVar13 = plVar18 + -5;
        } while (dVar21 <= (double)plVar18[lVar6 + -5] + (double)(plVar18 + lVar6 + -5)[2]);
        if (plVar13 <= param_3) break;
        lVar24 = param_3[1];
        lVar12 = *param_3;
        lVar25 = param_3[3];
        lVar22 = param_3[2];
        lVar6 = param_3[4];
        lVar23 = *plVar13;
        param_3[1] = plVar18[-4];
        *param_3 = lVar23;
        lVar23 = plVar18[-3];
        param_3[3] = plVar18[-2];
        param_3[2] = lVar23;
        *(int *)(param_3 + 4) = (int)plVar18[-1];
        plVar18[-4] = lVar24;
        *plVar13 = lVar12;
        plVar18[-2] = lVar25;
        plVar18[-3] = lVar22;
        *(int *)(plVar18 + -1) = (int)lVar6;
        param_1 = (long *)(ulong)((int)param_1 + 1);
        plVar18 = plVar13;
        if (param_3 != plVar19) {
          plVar18 = plVar19;
        }
      }
    }
    if (param_3 != plVar19) {
      iVar4 = *param_4;
      plVar15 = plVar19 + 2;
      plVar13 = param_3 + 2;
      if ((double)plVar19[iVar4] + (double)plVar15[iVar4] <
          (double)param_3[iVar4] + (double)plVar13[iVar4]) {
        lVar24 = param_3[1];
        lVar12 = *param_3;
        lVar25 = param_3[3];
        lVar22 = *plVar13;
        lVar6 = param_3[4];
        lVar23 = *plVar19;
        param_3[1] = plVar19[1];
        *param_3 = lVar23;
        lVar23 = *plVar15;
        param_3[3] = plVar19[3];
        *plVar13 = lVar23;
        *(int *)(param_3 + 4) = (int)plVar19[4];
        plVar19[1] = lVar24;
        *plVar19 = lVar12;
        plVar19[3] = lVar25;
        *plVar15 = lVar22;
        *(int *)(plVar19 + 4) = (int)lVar6;
        param_1 = (long *)(ulong)((int)param_1 + 1);
      }
    }
    if (param_3 == param_2) break;
    if ((int)param_1 == 0) {
      if (param_2 < param_3) {
        pdVar16 = (double *)(plVar7 + (long)*param_4 + 7);
        do {
          if (plVar11 == param_3) goto LAB_109900fe8;
          pdVar1 = pdVar16 + -2;
          dVar21 = *pdVar16;
          pdVar2 = pdVar16 + -7;
          pdVar3 = pdVar16 + -5;
          plVar11 = plVar11 + 5;
          pdVar16 = pdVar16 + 5;
        } while (*pdVar2 + *pdVar3 <= *pdVar1 + dVar21);
      }
      else {
        pdVar16 = (double *)(param_3 + (long)*param_4 + 7);
        plVar11 = param_3;
        do {
          plVar11 = plVar11 + 5;
          if (plVar11 == plVar5) goto LAB_109900fe8;
          pdVar1 = pdVar16 + -2;
          dVar21 = *pdVar16;
          pdVar2 = pdVar16 + -7;
          pdVar3 = pdVar16 + -5;
          pdVar16 = pdVar16 + 5;
        } while (*pdVar2 + *pdVar3 <= *pdVar1 + dVar21);
      }
    }
    if (param_3 <= param_2) {
      plVar7 = param_3 + 5;
      param_3 = plVar5;
    }
  }
  goto LAB_109900fe8;
LAB_1099012f0:
  if (dVar21 < (double)plVar13[lVar6] + (double)plVar13[lVar6 + 2]) goto LAB_109901358;
  plVar13 = plVar13 + 5;
  if (plVar13 == plVar15) goto LAB_109900fe8;
  goto LAB_1099012f0;
LAB_109901358:
  lVar24 = plVar13[1];
  lVar12 = *plVar13;
  lVar25 = plVar13[3];
  lVar22 = plVar13[2];
  lVar6 = plVar13[4];
  lVar23 = *plVar15;
  plVar13[1] = plVar5[-4];
  *plVar13 = lVar23;
  lVar23 = *plVar19;
  plVar13[3] = plVar5[-2];
  plVar13[2] = lVar23;
  *(int *)(plVar13 + 4) = (int)plVar5[-1];
  plVar5[-4] = lVar24;
  *plVar15 = lVar12;
  plVar5[-2] = lVar25;
  *plVar19 = lVar22;
  *(int *)(plVar5 + -1) = (int)lVar6;
  plVar13 = plVar13 + 5;
LAB_10990139c:
  if (plVar13 == plVar15) goto LAB_109900fe8;
  while( true ) {
    lVar6 = (long)*param_4;
    do {
      plVar19 = plVar13;
      plVar13 = plVar19 + 5;
    } while ((double)(plVar19 + lVar6 + 2)[-2] + (double)plVar19[lVar6 + 2] <=
             (double)plVar7[lVar6] + (double)plVar11[lVar6]);
    do {
      plVar18 = plVar15;
      plVar15 = plVar18 + -5;
    } while ((double)plVar7[lVar6] + (double)plVar11[lVar6] <
             (double)plVar18[lVar6 + -5] + (double)(plVar18 + lVar6 + -5)[2]);
    if (plVar15 <= plVar19) break;
    lVar24 = plVar19[1];
    lVar12 = *plVar19;
    lVar25 = plVar19[3];
    lVar22 = plVar19[2];
    lVar6 = plVar19[4];
    lVar23 = *plVar15;
    plVar19[1] = plVar18[-4];
    *plVar19 = lVar23;
    lVar23 = plVar18[-3];
    plVar19[3] = plVar18[-2];
    plVar19[2] = lVar23;
    *(int *)(plVar19 + 4) = (int)plVar18[-1];
    plVar18[-4] = lVar24;
    *plVar15 = lVar12;
    plVar18[-2] = lVar25;
    plVar18[-3] = lVar22;
    *(int *)(plVar18 + -1) = (int)lVar6;
  }
  plVar7 = plVar19;
  param_3 = plVar5;
  if (param_2 < plVar19) {
LAB_109900fe8:
    auVar29._8_8_ = plVar10;
    auVar29._0_8_ = param_1;
    return auVar29;
  }
  goto joined_r0x000109900fe4;
}



/* Entry: 109900e48; end: 109900fbf;  */

long * FUN_109900e48(long *param_1,long *param_2,long *param_3,int *param_4)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  double *pdVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  uint uVar17;
  double dVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  double dVar23;
  long *plStack_48;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  long *plStack_30;
  long *plStack_28;
  
  lVar15 = param_1[1] - *param_1;
  uVar10 = (lVar15 >> 4) * -0x5555555555555555 + 1;
  if (uVar10 < 0x555555555555556) {
    lVar8 = param_1[2] - *param_1 >> 4;
    uVar13 = lVar8 * 0x5555555555555556;
    if (uVar13 < uVar10 || uVar13 - uVar10 == 0) {
      uVar13 = uVar10;
    }
    if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar8 * -0x5555555555555555)) {
      uVar13 = 0x555555555555555;
    }
    plStack_28 = param_1;
    if (uVar13 == 0) {
      plVar14 = (long *)0x0;
    }
    else {
      plVar14 = param_1;
      FUN_109900e04();
    }
    puStack_40 = (undefined8 *)((long)plVar14 + lVar15);
    plStack_30 = plVar14 + uVar13 * 6;
    puStack_40[3] = 0;
    puStack_40[2] = 0;
    puStack_40[5] = 0;
    puStack_40[4] = 0;
    puStack_40[1] = 0;
    *puStack_40 = 0;
    puStack_40[4] = 0xffffffffffffffff;
    *(undefined4 *)(puStack_40 + 5) = 0xffffffff;
    puStack_38 = puStack_40 + 6;
    plStack_48 = plVar14;
    FUN_109900d7c(param_1,&plStack_48);
    plVar14 = (long *)param_1[1];
    if ((long)puStack_38 - (long)puStack_40 != 0) {
      puStack_38 = puStack_38 + ((((long)puStack_38 - (long)puStack_40) - 0x30U) / 0x30) * -6 + -6;
    }
    if (plStack_48 != (long *)0x0) {
      __ZdlPv();
    }
    return plVar14;
  }
  FUN_109900d68();
  if ((long)puStack_38 - (long)puStack_40 != 0) {
    puStack_38 = (undefined8 *)
                 ((long)puStack_38 +
                  ((((long)puStack_38 - (long)puStack_40) - 0x30U) / 0x30) * -0x30 + -0x30);
  }
  if (plStack_48 != (long *)0x0) {
    __ZdlPv();
  }
  __Unwind_Resume();
  plVar14 = param_1;
joined_r0x000109900fe4:
  while( true ) {
    plVar5 = param_3;
    if (plVar5 == param_2) {
      return param_1;
    }
    uVar10 = ((long)plVar5 - (long)plVar14 >> 3) * -0x3333333333333333;
    if (uVar10 < 2) {
      return param_1;
    }
    if (uVar10 == 3) {
      plVar6 = plVar5 + -5;
      plVar7 = plVar14 + 5;
      iVar4 = *param_4;
      plVar11 = plVar14 + 7;
      dVar18 = (double)plVar7[iVar4] + (double)plVar11[iVar4];
      plVar9 = plVar14 + 2;
      plVar16 = plVar5 + -3;
      if ((double)plVar14[iVar4] + (double)plVar9[iVar4] <= dVar18) {
        if (dVar18 <= (double)plVar6[iVar4] + (double)plVar16[iVar4]) {
          return (long *)0x0;
        }
        lVar19 = plVar14[6];
        lVar8 = *plVar7;
        lVar21 = plVar14[8];
        lVar20 = *plVar11;
        lVar15 = plVar14[9];
        lVar22 = *plVar6;
        plVar14[6] = plVar5[-4];
        *plVar7 = lVar22;
        lVar22 = *plVar16;
        plVar14[8] = plVar5[-2];
        *plVar11 = lVar22;
        *(int *)(plVar14 + 9) = (int)plVar5[-1];
        plVar5[-4] = lVar19;
        *plVar6 = lVar8;
        plVar5[-2] = lVar21;
        *plVar16 = lVar20;
        *(int *)(plVar5 + -1) = (int)lVar15;
        iVar4 = *param_4;
        if ((double)plVar7[iVar4] + (double)plVar11[iVar4] <
            (double)plVar14[iVar4] + (double)plVar9[iVar4]) {
          lVar19 = plVar14[1];
          lVar8 = *plVar14;
          lVar21 = plVar14[3];
          lVar20 = *plVar9;
          lVar15 = plVar14[4];
          plVar14[1] = plVar14[6];
          *plVar14 = *plVar7;
          plVar14[3] = plVar14[8];
          *plVar9 = *plVar11;
          *(int *)(plVar14 + 4) = (int)plVar14[9];
          plVar14[6] = lVar19;
          *plVar7 = lVar8;
          plVar14[8] = lVar21;
          *plVar11 = lVar20;
          *(int *)(plVar14 + 9) = (int)lVar15;
        }
      }
      else if (dVar18 <= (double)plVar6[iVar4] + (double)plVar16[iVar4]) {
        lVar19 = plVar14[1];
        lVar8 = *plVar14;
        lVar21 = plVar14[3];
        lVar20 = *plVar9;
        lVar15 = plVar14[4];
        plVar14[1] = plVar14[6];
        *plVar14 = *plVar7;
        plVar14[3] = plVar14[8];
        *plVar9 = *plVar11;
        *(int *)(plVar14 + 4) = (int)plVar14[9];
        plVar14[6] = lVar19;
        *plVar7 = lVar8;
        plVar14[8] = lVar21;
        *plVar11 = lVar20;
        *(int *)(plVar14 + 9) = (int)lVar15;
        iVar4 = *param_4;
        if ((double)plVar6[iVar4] + (double)plVar16[iVar4] <
            (double)plVar7[iVar4] + (double)plVar11[iVar4]) {
          lVar19 = plVar14[6];
          lVar8 = *plVar7;
          lVar21 = plVar14[8];
          lVar20 = *plVar11;
          lVar22 = *plVar6;
          plVar14[6] = plVar5[-4];
          *plVar7 = lVar22;
          lVar22 = *plVar16;
          plVar14[8] = plVar5[-2];
          *plVar11 = lVar22;
          *(int *)(plVar14 + 9) = (int)plVar5[-1];
          plVar5[-4] = lVar19;
          *plVar6 = lVar8;
          plVar5[-2] = lVar21;
          *plVar16 = lVar20;
          *(int *)(plVar5 + -1) = (int)lVar15;
        }
      }
      else {
        lVar19 = plVar14[1];
        lVar8 = *plVar14;
        lVar21 = plVar14[3];
        lVar20 = *plVar9;
        lVar15 = plVar14[4];
        lVar22 = *plVar6;
        plVar14[1] = plVar5[-4];
        *plVar14 = lVar22;
        lVar22 = *plVar16;
        plVar14[3] = plVar5[-2];
        *plVar9 = lVar22;
        *(int *)(plVar14 + 4) = (int)plVar5[-1];
        plVar5[-4] = lVar19;
        *plVar6 = lVar8;
        plVar5[-2] = lVar21;
        *plVar16 = lVar20;
        *(int *)(plVar5 + -1) = (int)lVar15;
      }
      return (long *)0x1;
    }
    if (uVar10 == 2) {
      plVar11 = plVar5 + -5;
      iVar4 = *param_4;
      plVar9 = plVar5 + -3;
      plVar7 = plVar14 + 2;
      if ((double)plVar14[iVar4] + (double)plVar7[iVar4] <=
          (double)plVar11[iVar4] + (double)plVar9[iVar4]) {
        return param_1;
      }
      lVar20 = plVar14[1];
      lVar8 = *plVar14;
      lVar22 = plVar14[3];
      lVar21 = *plVar7;
      lVar15 = plVar14[4];
      lVar19 = *plVar11;
      plVar14[1] = plVar5[-4];
      *plVar14 = lVar19;
      lVar19 = *plVar9;
      plVar14[3] = plVar5[-2];
      *plVar7 = lVar19;
      *(int *)(plVar14 + 4) = (int)plVar5[-1];
      plVar5[-4] = lVar20;
      *plVar11 = lVar8;
      plVar5[-2] = lVar22;
      *plVar9 = lVar21;
      *(int *)(plVar5 + -1) = (int)lVar15;
      return param_1;
    }
    if ((long)plVar5 - (long)plVar14 < 0x140) {
      for (; plVar5 + -5 != plVar14; plVar14 = plVar14 + 5) {
        if ((plVar5 != plVar14) && (plVar14 + 5 != plVar5)) {
          lVar15 = (long)*param_4;
          plVar7 = plVar14;
          plVar11 = plVar14;
          do {
            plVar9 = plVar11 + 10;
            plVar16 = plVar11 + 5;
            if ((double)plVar7[lVar15] + (double)(plVar7 + lVar15)[2] <=
                (double)plVar11[lVar15 + 5] + (double)plVar11[lVar15 + 7]) {
              plVar16 = plVar7;
            }
            plVar7 = plVar16;
            plVar11 = plVar11 + 5;
          } while (plVar9 != plVar5);
          if (plVar16 != plVar14) {
            lVar19 = plVar14[1];
            lVar8 = *plVar14;
            lVar22 = plVar14[3];
            lVar20 = plVar14[2];
            lVar15 = plVar14[4];
            lVar21 = *plVar16;
            plVar14[1] = plVar16[1];
            *plVar14 = lVar21;
            lVar21 = plVar16[2];
            plVar14[3] = plVar16[3];
            plVar14[2] = lVar21;
            *(int *)(plVar14 + 4) = (int)plVar16[4];
            plVar16[1] = lVar19;
            *plVar16 = lVar8;
            plVar16[3] = lVar22;
            plVar16[2] = lVar20;
            *(int *)(plVar16 + 4) = (int)lVar15;
          }
        }
      }
      return plVar14;
    }
    plVar16 = plVar14 + (uVar10 >> 1) * 5;
    plVar11 = plVar5 + -5;
    param_1 = plVar14;
    FUN_109901530(plVar14,plVar16,plVar11,param_4);
    lVar15 = (long)*param_4;
    plVar7 = plVar14 + 2;
    dVar18 = (double)plVar14[lVar15] + (double)plVar7[lVar15];
    dVar23 = (double)plVar16[lVar15] + (double)(plVar16 + lVar15)[2];
    plVar9 = plVar11;
    if (dVar18 < dVar23) break;
    plVar6 = plVar5 + -10;
    while (plVar9 = plVar6, plVar9 != plVar14) {
      plVar6 = plVar9 + -5;
      if ((double)plVar9[lVar15] + (double)(plVar9 + lVar15)[2] < dVar23) goto code_r0x0001099010d0;
    }
    plVar9 = plVar14 + 5;
    plVar16 = plVar5 + -3;
    if ((double)plVar11[lVar15] + (double)plVar16[lVar15] <= dVar18) {
      if (plVar9 == plVar11) {
        return param_1;
      }
      while ((double)plVar9[lVar15] + (double)plVar9[lVar15 + 2] <= dVar18) {
        plVar9 = plVar9 + 5;
        if (plVar9 == plVar11) {
          return param_1;
        }
      }
      lVar21 = plVar9[1];
      lVar8 = *plVar9;
      lVar22 = plVar9[3];
      lVar19 = plVar9[2];
      lVar15 = plVar9[4];
      lVar20 = *plVar11;
      plVar9[1] = plVar5[-4];
      *plVar9 = lVar20;
      lVar20 = *plVar16;
      plVar9[3] = plVar5[-2];
      plVar9[2] = lVar20;
      *(int *)(plVar9 + 4) = (int)plVar5[-1];
      plVar5[-4] = lVar21;
      *plVar11 = lVar8;
      plVar5[-2] = lVar22;
      *plVar16 = lVar19;
      *(int *)(plVar5 + -1) = (int)lVar15;
      plVar9 = plVar9 + 5;
    }
    if (plVar9 == plVar11) {
      return param_1;
    }
    while( true ) {
      lVar15 = (long)*param_4;
      do {
        plVar16 = plVar9;
        plVar9 = plVar16 + 5;
      } while ((double)(plVar16 + lVar15 + 2)[-2] + (double)plVar16[lVar15 + 2] <=
               (double)plVar14[lVar15] + (double)plVar7[lVar15]);
      do {
        plVar6 = plVar11;
        plVar11 = plVar6 + -5;
      } while ((double)plVar14[lVar15] + (double)plVar7[lVar15] <
               (double)plVar6[lVar15 + -5] + (double)(plVar6 + lVar15 + -5)[2]);
      if (plVar11 <= plVar16) break;
      lVar21 = plVar16[1];
      lVar8 = *plVar16;
      lVar22 = plVar16[3];
      lVar19 = plVar16[2];
      lVar15 = plVar16[4];
      lVar20 = *plVar11;
      plVar16[1] = plVar6[-4];
      *plVar16 = lVar20;
      lVar20 = plVar6[-3];
      plVar16[3] = plVar6[-2];
      plVar16[2] = lVar20;
      *(int *)(plVar16 + 4) = (int)plVar6[-1];
      plVar6[-4] = lVar21;
      *plVar11 = lVar8;
      plVar6[-2] = lVar22;
      plVar6[-3] = lVar19;
      *(int *)(plVar6 + -1) = (int)lVar15;
    }
    plVar14 = plVar16;
    param_3 = plVar5;
    if (param_2 < plVar16) {
      return param_1;
    }
  }
  goto LAB_10990111c;
code_r0x0001099010d0:
  lVar21 = plVar14[1];
  lVar8 = *plVar14;
  lVar22 = plVar14[3];
  lVar19 = *plVar7;
  lVar15 = plVar14[4];
  lVar20 = *plVar9;
  plVar14[1] = plVar9[1];
  *plVar14 = lVar20;
  lVar20 = plVar9[2];
  plVar14[3] = plVar9[3];
  *plVar7 = lVar20;
  *(int *)(plVar14 + 4) = (int)plVar9[4];
  plVar9[1] = lVar21;
  *plVar9 = lVar8;
  plVar9[3] = lVar22;
  plVar9[2] = lVar19;
  *(int *)(plVar9 + 4) = (int)lVar15;
  uVar17 = 1;
  if ((int)param_1 != 0) {
    uVar17 = 2;
  }
  param_1 = (long *)(ulong)uVar17;
LAB_10990111c:
  plVar7 = plVar14 + 5;
  param_3 = plVar7;
  plVar11 = plVar7;
  plVar6 = plVar16;
  if (plVar7 < plVar9) {
    while( true ) {
      plVar16 = plVar6;
      lVar15 = (long)*param_4;
      dVar18 = (double)plVar16[lVar15] + (double)(plVar16 + lVar15)[2];
      do {
        param_3 = plVar11;
        plVar11 = param_3 + 5;
      } while ((double)(param_3 + lVar15 + 2)[-2] + (double)param_3[lVar15 + 2] < dVar18);
      do {
        plVar6 = plVar9;
        plVar9 = plVar6 + -5;
      } while (dVar18 <= (double)plVar6[lVar15 + -5] + (double)(plVar6 + lVar15 + -5)[2]);
      if (plVar9 <= param_3) break;
      lVar21 = param_3[1];
      lVar8 = *param_3;
      lVar22 = param_3[3];
      lVar19 = param_3[2];
      lVar15 = param_3[4];
      lVar20 = *plVar9;
      param_3[1] = plVar6[-4];
      *param_3 = lVar20;
      lVar20 = plVar6[-3];
      param_3[3] = plVar6[-2];
      param_3[2] = lVar20;
      *(int *)(param_3 + 4) = (int)plVar6[-1];
      plVar6[-4] = lVar21;
      *plVar9 = lVar8;
      plVar6[-2] = lVar22;
      plVar6[-3] = lVar19;
      *(int *)(plVar6 + -1) = (int)lVar15;
      param_1 = (long *)(ulong)((int)param_1 + 1);
      plVar6 = plVar9;
      if (param_3 != plVar16) {
        plVar6 = plVar16;
      }
    }
  }
  if (param_3 != plVar16) {
    iVar4 = *param_4;
    plVar11 = plVar16 + 2;
    plVar9 = param_3 + 2;
    if ((double)plVar16[iVar4] + (double)plVar11[iVar4] <
        (double)param_3[iVar4] + (double)plVar9[iVar4]) {
      lVar21 = param_3[1];
      lVar8 = *param_3;
      lVar22 = param_3[3];
      lVar19 = *plVar9;
      lVar15 = param_3[4];
      lVar20 = *plVar16;
      param_3[1] = plVar16[1];
      *param_3 = lVar20;
      lVar20 = *plVar11;
      param_3[3] = plVar16[3];
      *plVar9 = lVar20;
      *(int *)(param_3 + 4) = (int)plVar16[4];
      plVar16[1] = lVar21;
      *plVar16 = lVar8;
      plVar16[3] = lVar22;
      *plVar11 = lVar19;
      *(int *)(plVar16 + 4) = (int)lVar15;
      param_1 = (long *)(ulong)((int)param_1 + 1);
    }
  }
  if (param_3 == param_2) {
    return param_1;
  }
  if ((int)param_1 == 0) {
    if (param_2 < param_3) {
      pdVar12 = (double *)(plVar14 + (long)*param_4 + 7);
      do {
        if (plVar7 == param_3) {
          return param_1;
        }
        pdVar1 = pdVar12 + -2;
        dVar18 = *pdVar12;
        pdVar2 = pdVar12 + -7;
        pdVar3 = pdVar12 + -5;
        plVar7 = plVar7 + 5;
        pdVar12 = pdVar12 + 5;
      } while (*pdVar2 + *pdVar3 <= *pdVar1 + dVar18);
    }
    else {
      pdVar12 = (double *)(param_3 + (long)*param_4 + 7);
      plVar7 = param_3;
      do {
        plVar7 = plVar7 + 5;
        if (plVar7 == plVar5) {
          return param_1;
        }
        pdVar1 = pdVar12 + -2;
        dVar18 = *pdVar12;
        pdVar2 = pdVar12 + -7;
        pdVar3 = pdVar12 + -5;
        pdVar12 = pdVar12 + 5;
      } while (*pdVar2 + *pdVar3 <= *pdVar1 + dVar18);
    }
  }
  if (param_3 <= param_2) {
    plVar14 = param_3 + 5;
    param_3 = plVar5;
  }
  goto joined_r0x000109900fe4;
}



/* Entry: 109900fc0; end: 10990152f;  */

undefined8 * FUN_109900fc0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,int *param_4)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  double *pdVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  uint uVar17;
  double dVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  double dVar24;
  
  puVar4 = param_1;
joined_r0x000109900fe4:
  while( true ) {
    puVar7 = param_3;
    if (puVar7 == param_2) {
      return param_1;
    }
    uVar8 = ((long)puVar7 - (long)puVar4 >> 3) * -0x3333333333333333;
    if (uVar8 < 2) {
      return param_1;
    }
    if (uVar8 == 3) {
      puVar10 = puVar7 + -5;
      puVar9 = puVar4 + 5;
      iVar6 = *param_4;
      puVar12 = puVar4 + 7;
      dVar18 = (double)puVar9[iVar6] + (double)puVar12[iVar6];
      puVar11 = puVar4 + 2;
      puVar16 = puVar7 + -3;
      if ((double)puVar4[iVar6] + (double)puVar11[iVar6] <= dVar18) {
        if (dVar18 <= (double)puVar10[iVar6] + (double)puVar16[iVar6]) {
          return (undefined8 *)0x0;
        }
        uVar20 = puVar4[6];
        uVar19 = *puVar9;
        uVar22 = puVar4[8];
        uVar21 = *puVar12;
        uVar5 = *(undefined4 *)(puVar4 + 9);
        uVar23 = *puVar10;
        puVar4[6] = puVar7[-4];
        *puVar9 = uVar23;
        uVar23 = *puVar16;
        puVar4[8] = puVar7[-2];
        *puVar12 = uVar23;
        *(undefined4 *)(puVar4 + 9) = *(undefined4 *)(puVar7 + -1);
        puVar7[-4] = uVar20;
        *puVar10 = uVar19;
        puVar7[-2] = uVar22;
        *puVar16 = uVar21;
        *(undefined4 *)(puVar7 + -1) = uVar5;
        iVar6 = *param_4;
        if ((double)puVar9[iVar6] + (double)puVar12[iVar6] <
            (double)puVar4[iVar6] + (double)puVar11[iVar6]) {
          uVar20 = puVar4[1];
          uVar19 = *puVar4;
          uVar22 = puVar4[3];
          uVar21 = *puVar11;
          uVar5 = *(undefined4 *)(puVar4 + 4);
          puVar4[1] = puVar4[6];
          *puVar4 = *puVar9;
          puVar4[3] = puVar4[8];
          *puVar11 = *puVar12;
          *(undefined4 *)(puVar4 + 4) = *(undefined4 *)(puVar4 + 9);
          puVar4[6] = uVar20;
          *puVar9 = uVar19;
          puVar4[8] = uVar22;
          *puVar12 = uVar21;
          *(undefined4 *)(puVar4 + 9) = uVar5;
        }
      }
      else if (dVar18 <= (double)puVar10[iVar6] + (double)puVar16[iVar6]) {
        uVar20 = puVar4[1];
        uVar19 = *puVar4;
        uVar22 = puVar4[3];
        uVar21 = *puVar11;
        uVar5 = *(undefined4 *)(puVar4 + 4);
        puVar4[1] = puVar4[6];
        *puVar4 = *puVar9;
        puVar4[3] = puVar4[8];
        *puVar11 = *puVar12;
        *(undefined4 *)(puVar4 + 4) = *(undefined4 *)(puVar4 + 9);
        puVar4[6] = uVar20;
        *puVar9 = uVar19;
        puVar4[8] = uVar22;
        *puVar12 = uVar21;
        *(undefined4 *)(puVar4 + 9) = uVar5;
        iVar6 = *param_4;
        if ((double)puVar10[iVar6] + (double)puVar16[iVar6] <
            (double)puVar9[iVar6] + (double)puVar12[iVar6]) {
          uVar20 = puVar4[6];
          uVar19 = *puVar9;
          uVar22 = puVar4[8];
          uVar21 = *puVar12;
          uVar23 = *puVar10;
          puVar4[6] = puVar7[-4];
          *puVar9 = uVar23;
          uVar23 = *puVar16;
          puVar4[8] = puVar7[-2];
          *puVar12 = uVar23;
          *(undefined4 *)(puVar4 + 9) = *(undefined4 *)(puVar7 + -1);
          puVar7[-4] = uVar20;
          *puVar10 = uVar19;
          puVar7[-2] = uVar22;
          *puVar16 = uVar21;
          *(undefined4 *)(puVar7 + -1) = uVar5;
        }
      }
      else {
        uVar20 = puVar4[1];
        uVar19 = *puVar4;
        uVar22 = puVar4[3];
        uVar21 = *puVar11;
        uVar5 = *(undefined4 *)(puVar4 + 4);
        uVar23 = *puVar10;
        puVar4[1] = puVar7[-4];
        *puVar4 = uVar23;
        uVar23 = *puVar16;
        puVar4[3] = puVar7[-2];
        *puVar11 = uVar23;
        *(undefined4 *)(puVar4 + 4) = *(undefined4 *)(puVar7 + -1);
        puVar7[-4] = uVar20;
        *puVar10 = uVar19;
        puVar7[-2] = uVar22;
        *puVar16 = uVar21;
        *(undefined4 *)(puVar7 + -1) = uVar5;
      }
      return (undefined8 *)0x1;
    }
    if (uVar8 == 2) {
      puVar12 = puVar7 + -5;
      iVar6 = *param_4;
      puVar11 = puVar7 + -3;
      puVar9 = puVar4 + 2;
      if ((double)puVar4[iVar6] + (double)puVar9[iVar6] <=
          (double)puVar12[iVar6] + (double)puVar11[iVar6]) {
        return param_1;
      }
      uVar21 = puVar4[1];
      uVar19 = *puVar4;
      uVar23 = puVar4[3];
      uVar22 = *puVar9;
      uVar5 = *(undefined4 *)(puVar4 + 4);
      uVar20 = *puVar12;
      puVar4[1] = puVar7[-4];
      *puVar4 = uVar20;
      uVar20 = *puVar11;
      puVar4[3] = puVar7[-2];
      *puVar9 = uVar20;
      *(undefined4 *)(puVar4 + 4) = *(undefined4 *)(puVar7 + -1);
      puVar7[-4] = uVar21;
      *puVar12 = uVar19;
      puVar7[-2] = uVar23;
      *puVar11 = uVar22;
      *(undefined4 *)(puVar7 + -1) = uVar5;
      return param_1;
    }
    if ((long)puVar7 - (long)puVar4 < 0x140) {
      for (; puVar7 + -5 != puVar4; puVar4 = puVar4 + 5) {
        if ((puVar7 != puVar4) && (puVar4 + 5 != puVar7)) {
          lVar14 = (long)*param_4;
          puVar9 = puVar4;
          puVar12 = puVar4;
          do {
            puVar11 = puVar12 + 10;
            puVar16 = puVar12 + 5;
            if ((double)puVar9[lVar14] + (double)(puVar9 + lVar14)[2] <=
                (double)puVar12[lVar14 + 5] + (double)puVar12[lVar14 + 7]) {
              puVar16 = puVar9;
            }
            puVar9 = puVar16;
            puVar12 = puVar12 + 5;
          } while (puVar11 != puVar7);
          if (puVar16 != puVar4) {
            uVar20 = puVar4[1];
            uVar19 = *puVar4;
            uVar23 = puVar4[3];
            uVar21 = puVar4[2];
            uVar5 = *(undefined4 *)(puVar4 + 4);
            uVar22 = *puVar16;
            puVar4[1] = puVar16[1];
            *puVar4 = uVar22;
            uVar22 = puVar16[2];
            puVar4[3] = puVar16[3];
            puVar4[2] = uVar22;
            *(undefined4 *)(puVar4 + 4) = *(undefined4 *)(puVar16 + 4);
            puVar16[1] = uVar20;
            *puVar16 = uVar19;
            puVar16[3] = uVar23;
            puVar16[2] = uVar21;
            *(undefined4 *)(puVar16 + 4) = uVar5;
          }
        }
      }
      return puVar4;
    }
    puVar16 = puVar4 + (uVar8 >> 1) * 5;
    puVar12 = puVar7 + -5;
    param_1 = puVar4;
    FUN_109901530(puVar4,puVar16,puVar12,param_4);
    lVar14 = (long)*param_4;
    puVar9 = puVar4 + 2;
    dVar18 = (double)puVar4[lVar14] + (double)puVar9[lVar14];
    dVar24 = (double)puVar16[lVar14] + (double)(puVar16 + lVar14)[2];
    puVar11 = puVar12;
    if (dVar18 < dVar24) break;
    puVar10 = puVar7 + -10;
    while (puVar11 = puVar10, puVar11 != puVar4) {
      puVar10 = puVar11 + -5;
      if ((double)puVar11[lVar14] + (double)(puVar11 + lVar14)[2] < dVar24)
      goto code_r0x0001099010d0;
    }
    puVar11 = puVar4 + 5;
    puVar16 = puVar7 + -3;
    if ((double)puVar12[lVar14] + (double)puVar16[lVar14] <= dVar18) {
      if (puVar11 == puVar12) {
        return param_1;
      }
      while ((double)puVar11[lVar14] + (double)puVar11[lVar14 + 2] <= dVar18) {
        puVar11 = puVar11 + 5;
        if (puVar11 == puVar12) {
          return param_1;
        }
      }
      uVar22 = puVar11[1];
      uVar19 = *puVar11;
      uVar23 = puVar11[3];
      uVar20 = puVar11[2];
      uVar5 = *(undefined4 *)(puVar11 + 4);
      uVar21 = *puVar12;
      puVar11[1] = puVar7[-4];
      *puVar11 = uVar21;
      uVar21 = *puVar16;
      puVar11[3] = puVar7[-2];
      puVar11[2] = uVar21;
      *(undefined4 *)(puVar11 + 4) = *(undefined4 *)(puVar7 + -1);
      puVar7[-4] = uVar22;
      *puVar12 = uVar19;
      puVar7[-2] = uVar23;
      *puVar16 = uVar20;
      *(undefined4 *)(puVar7 + -1) = uVar5;
      puVar11 = puVar11 + 5;
    }
    if (puVar11 == puVar12) {
      return param_1;
    }
    while( true ) {
      lVar14 = (long)*param_4;
      do {
        puVar16 = puVar11;
        puVar11 = puVar16 + 5;
      } while ((double)(puVar16 + lVar14 + 2)[-2] + (double)puVar16[lVar14 + 2] <=
               (double)puVar4[lVar14] + (double)puVar9[lVar14]);
      do {
        puVar10 = puVar12;
        puVar12 = puVar10 + -5;
      } while ((double)puVar4[lVar14] + (double)puVar9[lVar14] <
               (double)puVar10[lVar14 + -5] + (double)(puVar10 + lVar14 + -5)[2]);
      if (puVar12 <= puVar16) break;
      uVar22 = puVar16[1];
      uVar19 = *puVar16;
      uVar23 = puVar16[3];
      uVar20 = puVar16[2];
      uVar5 = *(undefined4 *)(puVar16 + 4);
      uVar21 = *puVar12;
      puVar16[1] = puVar10[-4];
      *puVar16 = uVar21;
      uVar21 = puVar10[-3];
      puVar16[3] = puVar10[-2];
      puVar16[2] = uVar21;
      *(undefined4 *)(puVar16 + 4) = *(undefined4 *)(puVar10 + -1);
      puVar10[-4] = uVar22;
      *puVar12 = uVar19;
      puVar10[-2] = uVar23;
      puVar10[-3] = uVar20;
      *(undefined4 *)(puVar10 + -1) = uVar5;
    }
    param_3 = puVar7;
    puVar4 = puVar16;
    if (param_2 < puVar16) {
      return param_1;
    }
  }
  goto LAB_10990111c;
code_r0x0001099010d0:
  uVar22 = puVar4[1];
  uVar19 = *puVar4;
  uVar23 = puVar4[3];
  uVar20 = *puVar9;
  uVar5 = *(undefined4 *)(puVar4 + 4);
  uVar21 = *puVar11;
  puVar4[1] = puVar11[1];
  *puVar4 = uVar21;
  uVar21 = puVar11[2];
  puVar4[3] = puVar11[3];
  *puVar9 = uVar21;
  *(undefined4 *)(puVar4 + 4) = *(undefined4 *)(puVar11 + 4);
  puVar11[1] = uVar22;
  *puVar11 = uVar19;
  puVar11[3] = uVar23;
  puVar11[2] = uVar20;
  *(undefined4 *)(puVar11 + 4) = uVar5;
  uVar17 = 1;
  if ((int)param_1 != 0) {
    uVar17 = 2;
  }
  param_1 = (undefined8 *)(ulong)uVar17;
LAB_10990111c:
  puVar9 = puVar4 + 5;
  puVar10 = puVar9;
  puVar12 = puVar9;
  puVar15 = puVar16;
  if (puVar9 < puVar11) {
    while( true ) {
      puVar16 = puVar15;
      lVar14 = (long)*param_4;
      dVar18 = (double)puVar16[lVar14] + (double)(puVar16 + lVar14)[2];
      do {
        puVar10 = puVar12;
        puVar12 = puVar10 + 5;
      } while ((double)(puVar10 + lVar14 + 2)[-2] + (double)puVar10[lVar14 + 2] < dVar18);
      do {
        puVar15 = puVar11;
        puVar11 = puVar15 + -5;
      } while (dVar18 <= (double)puVar15[lVar14 + -5] + (double)(puVar15 + lVar14 + -5)[2]);
      if (puVar11 <= puVar10) break;
      uVar22 = puVar10[1];
      uVar19 = *puVar10;
      uVar23 = puVar10[3];
      uVar20 = puVar10[2];
      uVar5 = *(undefined4 *)(puVar10 + 4);
      uVar21 = *puVar11;
      puVar10[1] = puVar15[-4];
      *puVar10 = uVar21;
      uVar21 = puVar15[-3];
      puVar10[3] = puVar15[-2];
      puVar10[2] = uVar21;
      *(undefined4 *)(puVar10 + 4) = *(undefined4 *)(puVar15 + -1);
      puVar15[-4] = uVar22;
      *puVar11 = uVar19;
      puVar15[-2] = uVar23;
      puVar15[-3] = uVar20;
      *(undefined4 *)(puVar15 + -1) = uVar5;
      param_1 = (undefined8 *)(ulong)((int)param_1 + 1);
      puVar15 = puVar11;
      if (puVar10 != puVar16) {
        puVar15 = puVar16;
      }
    }
  }
  if (puVar10 != puVar16) {
    iVar6 = *param_4;
    puVar12 = puVar16 + 2;
    puVar11 = puVar10 + 2;
    if ((double)puVar16[iVar6] + (double)puVar12[iVar6] <
        (double)puVar10[iVar6] + (double)puVar11[iVar6]) {
      uVar22 = puVar10[1];
      uVar19 = *puVar10;
      uVar23 = puVar10[3];
      uVar20 = *puVar11;
      uVar5 = *(undefined4 *)(puVar10 + 4);
      uVar21 = *puVar16;
      puVar10[1] = puVar16[1];
      *puVar10 = uVar21;
      uVar21 = *puVar12;
      puVar10[3] = puVar16[3];
      *puVar11 = uVar21;
      *(undefined4 *)(puVar10 + 4) = *(undefined4 *)(puVar16 + 4);
      puVar16[1] = uVar22;
      *puVar16 = uVar19;
      puVar16[3] = uVar23;
      *puVar12 = uVar20;
      *(undefined4 *)(puVar16 + 4) = uVar5;
      param_1 = (undefined8 *)(ulong)((int)param_1 + 1);
    }
  }
  if (puVar10 == param_2) {
    return param_1;
  }
  if ((int)param_1 == 0) {
    if (param_2 < puVar10) {
      pdVar13 = (double *)(puVar4 + (long)*param_4 + 7);
      do {
        if (puVar9 == puVar10) {
          return param_1;
        }
        pdVar1 = pdVar13 + -2;
        dVar18 = *pdVar13;
        pdVar2 = pdVar13 + -7;
        pdVar3 = pdVar13 + -5;
        puVar9 = puVar9 + 5;
        pdVar13 = pdVar13 + 5;
      } while (*pdVar2 + *pdVar3 <= *pdVar1 + dVar18);
    }
    else {
      pdVar13 = (double *)(puVar10 + (long)*param_4 + 7);
      puVar9 = puVar10;
      do {
        puVar9 = puVar9 + 5;
        if (puVar9 == puVar7) {
          return param_1;
        }
        pdVar1 = pdVar13 + -2;
        dVar18 = *pdVar13;
        pdVar2 = pdVar13 + -7;
        pdVar3 = pdVar13 + -5;
        pdVar13 = pdVar13 + 5;
      } while (*pdVar2 + *pdVar3 <= *pdVar1 + dVar18);
    }
  }
  param_3 = puVar10;
  if (puVar10 <= param_2) {
    param_3 = puVar7;
    puVar4 = puVar10 + 5;
  }
  goto joined_r0x000109900fe4;
}



/* Entry: 109901530; end: 1099016cf;  */

undefined8 FUN_109901530(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,int *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  int iVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  iVar5 = *param_4;
  puVar1 = param_2 + 2;
  dVar6 = (double)param_2[iVar5] + (double)puVar1[iVar5];
  puVar2 = param_1 + 2;
  puVar3 = param_3 + 2;
  if ((double)param_1[iVar5] + (double)puVar2[iVar5] <= dVar6) {
    if (dVar6 <= (double)param_3[iVar5] + (double)puVar3[iVar5]) {
      return 0;
    }
    uVar8 = param_2[1];
    uVar7 = *param_2;
    uVar10 = param_2[3];
    uVar9 = *puVar1;
    uVar4 = *(undefined4 *)(param_2 + 4);
    uVar11 = *param_3;
    param_2[1] = param_3[1];
    *param_2 = uVar11;
    uVar11 = *puVar3;
    param_2[3] = param_3[3];
    *puVar1 = uVar11;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
    param_3[1] = uVar8;
    *param_3 = uVar7;
    param_3[3] = uVar10;
    *puVar3 = uVar9;
    *(undefined4 *)(param_3 + 4) = uVar4;
    iVar5 = *param_4;
    if ((double)param_2[iVar5] + (double)puVar1[iVar5] <
        (double)param_1[iVar5] + (double)puVar2[iVar5]) {
      uVar8 = param_1[1];
      uVar7 = *param_1;
      uVar10 = param_1[3];
      uVar9 = *puVar2;
      uVar4 = *(undefined4 *)(param_1 + 4);
      uVar11 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = uVar11;
      uVar11 = *puVar1;
      param_1[3] = param_2[3];
      *puVar2 = uVar11;
      *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
      param_2[1] = uVar8;
      *param_2 = uVar7;
      param_2[3] = uVar10;
      *puVar1 = uVar9;
      *(undefined4 *)(param_2 + 4) = uVar4;
    }
  }
  else if (dVar6 <= (double)param_3[iVar5] + (double)puVar3[iVar5]) {
    uVar8 = param_1[1];
    uVar7 = *param_1;
    uVar10 = param_1[3];
    uVar9 = *puVar2;
    uVar4 = *(undefined4 *)(param_1 + 4);
    uVar11 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar11;
    uVar11 = *puVar1;
    param_1[3] = param_2[3];
    *puVar2 = uVar11;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
    param_2[1] = uVar8;
    *param_2 = uVar7;
    param_2[3] = uVar10;
    *puVar1 = uVar9;
    *(undefined4 *)(param_2 + 4) = uVar4;
    iVar5 = *param_4;
    if ((double)param_3[iVar5] + (double)puVar3[iVar5] <
        (double)param_2[iVar5] + (double)puVar1[iVar5]) {
      uVar8 = param_2[1];
      uVar7 = *param_2;
      uVar10 = param_2[3];
      uVar9 = *puVar1;
      uVar11 = *param_3;
      param_2[1] = param_3[1];
      *param_2 = uVar11;
      uVar11 = *puVar3;
      param_2[3] = param_3[3];
      *puVar1 = uVar11;
      *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
      param_3[1] = uVar8;
      *param_3 = uVar7;
      param_3[3] = uVar10;
      *puVar3 = uVar9;
      *(undefined4 *)(param_3 + 4) = uVar4;
    }
  }
  else {
    uVar8 = param_1[1];
    uVar7 = *param_1;
    uVar10 = param_1[3];
    uVar9 = *puVar2;
    uVar4 = *(undefined4 *)(param_1 + 4);
    uVar11 = *param_3;
    param_1[1] = param_3[1];
    *param_1 = uVar11;
    uVar11 = *puVar3;
    param_1[3] = param_3[3];
    *puVar2 = uVar11;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_3 + 4);
    param_3[1] = uVar8;
    *param_3 = uVar7;
    param_3[3] = uVar10;
    *puVar3 = uVar9;
    *(undefined4 *)(param_3 + 4) = uVar4;
  }
  return 1;
}



/* Entry: 1099016d0; end: 109901793;  */

void FUN_1099016d0(undefined8 *param_1,undefined8 *param_2,int *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  for (; param_2 + -5 != param_1; param_1 = param_1 + 5) {
    if ((param_2 != param_1) && (param_1 + 5 != param_2)) {
      lVar5 = (long)*param_3;
      puVar4 = param_1;
      puVar6 = param_1;
      do {
        puVar1 = puVar6 + 10;
        puVar2 = puVar6 + 5;
        if ((double)puVar4[lVar5] + (double)(puVar4 + lVar5)[2] <=
            (double)puVar6[lVar5 + 5] + (double)puVar6[lVar5 + 7]) {
          puVar2 = puVar4;
        }
        puVar4 = puVar2;
        puVar6 = puVar6 + 5;
      } while (puVar1 != param_2);
      if (puVar2 != param_1) {
        uVar8 = param_1[1];
        uVar7 = *param_1;
        uVar11 = param_1[3];
        uVar9 = param_1[2];
        uVar3 = *(undefined4 *)(param_1 + 4);
        uVar10 = *puVar2;
        param_1[1] = puVar2[1];
        *param_1 = uVar10;
        uVar10 = puVar2[2];
        param_1[3] = puVar2[3];
        param_1[2] = uVar10;
        *(undefined4 *)(param_1 + 4) = *(undefined4 *)(puVar2 + 4);
        puVar2[1] = uVar8;
        *puVar2 = uVar7;
        puVar2[3] = uVar11;
        puVar2[2] = uVar9;
        *(undefined4 *)(puVar2 + 4) = uVar3;
      }
    }
  }
  return;
}



/* Entry: 109901794; end: 109901983;  */

byte FUN_109901794(long *param_1,uint param_2,double *param_3,undefined8 *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  long *plVar10;
  byte bVar11;
  long lVar12;
  double *pdVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dStack_50;
  double dStack_48;
  
  if ((int)param_2 < 0) {
    bVar11 = 1;
  }
  else {
    do {
      pdVar13 = (double *)(*param_1 + (ulong)param_2 * 0x30);
      if ((((*param_3 < *pdVar13) || (pdVar13[2] < *param_3)) || (param_3[1] < pdVar13[1])) ||
         (pdVar13[3] < param_3[1])) break;
      iVar6 = *(int *)(pdVar13 + 5);
      if (-1 < iVar6) {
        iVar7 = *(int *)*param_4;
        iVar9 = 0;
        if (iVar7 != 0) {
          iVar9 = iVar6 / iVar7;
        }
        uVar8 = iVar6 - iVar9 * iVar7;
        lVar12 = *(long *)param_4[2];
        iVar6 = *(int *)param_4[3] * iVar9;
        uVar2 = iVar6 + uVar8;
        uVar1 = uVar8 + 1;
        uVar3 = iVar6 + uVar1;
        iVar6 = *(int *)param_4[3] * (iVar9 + 1);
        uVar4 = iVar6 + uVar8;
        uVar5 = iVar6 + uVar1;
        func_0x0001098ff740(*(undefined8 *)param_4[4],
                            *(undefined8 *)
                             (lVar12 + (-(ulong)((uVar2 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000
                                       | (ulong)(uVar2 * 2) << 3)),
                            *(undefined8 *)
                             (lVar12 + (-(ulong)((uVar3 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000
                                       | (ulong)(uVar3 * 2) << 3)),
                            *(undefined8 *)
                             (lVar12 + (-(ulong)((uVar5 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000
                                       | (ulong)(uVar5 * 2) << 3)),
                            *(undefined8 *)
                             (lVar12 + (-(ulong)((uVar4 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000
                                       | (ulong)(uVar4 * 2) << 3)),&dStack_50);
        if (((0.0 <= dStack_50) && (dStack_50 <= 1.0)) && ((0.0 <= dStack_48 && (dStack_48 <= 1.0)))
           ) {
          pdVar13 = (double *)param_4[5];
          plVar10 = (long *)param_4[6];
          dVar18 = *(double *)*plVar10;
          dVar19 = ((double *)*plVar10)[1];
          dVar14 = (double)uVar8 / dVar18;
          dVar15 = (double)iVar9 / dVar19;
          dVar16 = **(double **)plVar10[1];
          dVar17 = **(double **)plVar10[2];
          pdVar13[1] = ((dVar15 + dStack_48 * ((double)(iVar9 + 1) / dVar19 - dVar15)) -
                       (*(double **)plVar10[1])[1]) / (*(double **)plVar10[2])[1];
          *pdVar13 = ((dVar14 + dStack_50 * ((double)uVar1 / dVar18 - dVar14)) - dVar16) / dVar17;
          *(undefined1 *)param_4[7] = 1;
        }
        bVar11 = *(byte *)param_4[7] ^ 1;
        goto LAB_10990184c;
      }
      plVar10 = param_1;
      FUN_109901794(param_1,*(undefined4 *)(pdVar13 + 4),param_3,param_4);
      if ((int)plVar10 == 0) {
        bVar11 = 0;
        goto LAB_10990184c;
      }
      param_2 = *(uint *)((long)pdVar13 + 0x24);
    } while (-1 < (int)param_2);
    bVar11 = 1;
  }
LAB_10990184c:
  return bVar11 & 1;
}



/* Entry: 109901984; end: 109901de3;  */

void FUN_109901984(long *param_1,long *param_2,long *param_3)

{
  bool bVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uStack_d8;
  undefined1 uStack_d0;
  undefined7 uStack_cf;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_88;
  undefined8 **ppuStack_80;
  code *pcStack_78;
  
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_c8 = 0;
  uStack_d8._0_4_ = 0x8000;
  uStack_d8._4_4_ = 0x20;
  uStack_d0 = 0;
  uStack_cf = 0xffffffff000000;
  if (*param_2 == 0) {
    puVar2 = (undefined8 *)0x0;
    uStack_a8 = 1;
    lVar4 = 0;
  }
  else {
    puVar2 = &uStack_d8;
    FUN_1098f75c4(puVar2,param_2);
    lVar4 = *param_2;
  }
  *param_2 = (long)puVar2;
  param_2[1] = param_2[1] + (lVar4 - (long)puVar2);
  uStack_98 = ((undefined8 *)*param_1)[1];
  uStack_a0 = *(undefined8 *)*param_1;
  plVar5 = (long *)*param_3;
  lVar4 = plVar5[1];
  uVar3 = lVar4 + 1;
  if ((ulong)plVar5[2] < uVar3) {
    (*(code *)plVar5[3])(plVar5);
    lVar4 = plVar5[1];
    uVar3 = lVar4 + 1;
  }
  bVar1 = false;
  plVar5[1] = uVar3;
  *(undefined1 *)(*plVar5 + lVar4) = 0x5b;
  puVar2 = &uStack_a0;
  while( true ) {
    if ((char)uStack_a8 == '\x01') {
      plVar5 = (long *)*param_3;
      pcStack_78 = FUN_1098f7694;
      puStack_88 = puVar2;
      ppuStack_80 = &puStack_88;
      FUN_1099a63d4(plVar5,&UNK_10f5893b8,6,0xf,&ppuStack_80,0);
    }
    else {
      plVar5 = &uStack_d8;
      FUN_1098f75f0(plVar5,puVar2,param_3);
    }
    if (bVar1) break;
    lVar4 = plVar5[1];
    uVar3 = lVar4 + 1;
    if ((ulong)plVar5[2] < uVar3) {
      (*(code *)plVar5[3])(plVar5);
      lVar4 = plVar5[1];
      uVar3 = lVar4 + 1;
    }
    plVar5[1] = uVar3;
    *(undefined1 *)(*plVar5 + lVar4) = 0x2c;
    lVar4 = plVar5[1];
    uVar3 = lVar4 + 1;
    if ((ulong)plVar5[2] < uVar3) {
      (*(code *)plVar5[3])(plVar5);
      lVar4 = plVar5[1];
      uVar3 = lVar4 + 1;
    }
    plVar5[1] = uVar3;
    *(undefined1 *)(*plVar5 + lVar4) = 0x20;
    bVar1 = true;
    puVar2 = (undefined8 *)((ulong)&uStack_a0 | 8);
  }
  lVar4 = plVar5[1];
  uVar3 = lVar4 + 1;
  if ((ulong)plVar5[2] < uVar3) {
    (*(code *)plVar5[3])(plVar5);
    lVar4 = plVar5[1];
    uVar3 = lVar4 + 1;
  }
  plVar5[1] = uVar3;
  *(undefined1 *)(*plVar5 + lVar4) = 0x5d;
  return;
}



/* Entry: 109901de4; end: 109901e93;  */

/* WARNING: Removing unreachable block (ram,0x000109445bb4) */
/* WARNING: Removing unreachable block (ram,0x00010944590c) */
/* WARNING: Removing unreachable block (ram,0x000109445914) */
/* WARNING: Removing unreachable block (ram,0x000109445974) */
/* WARNING: Removing unreachable block (ram,0x00010944597c) */
/* WARNING: Removing unreachable block (ram,0x000109445af0) */
/* WARNING: Removing unreachable block (ram,0x000109445b34) */

uint * FUN_109901de4(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  byte *pbVar1;
  uint *puVar2;
  long lVar3;
  undefined *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  uint uStack_70;
  undefined1 uStack_6c;
  undefined4 uStack_6b;
  undefined7 uStack_67;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  puVar5 = &uStack_70;
  puVar8 = &uStack_70;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_70 = 0x8000;
  uStack_6c = 0x20;
  uStack_6b = 0;
  uStack_67 = 0xffffffff000000;
  FUN_109901e94();
  lVar3 = *param_2;
  *param_2 = (long)puVar5;
  param_2[1] = param_2[1] + (lVar3 - (long)puVar5);
  param_1 = (undefined8 *)*param_1;
  FUN_109901ec0(&uStack_70,param_1,param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar8;
  }
  ___stack_chk_fail();
  puVar5 = (uint *)*param_1;
  if ((param_1[1] == 0) || ((byte)*puVar5 == 0x7d)) {
    return puVar5;
  }
  puVar2 = (uint *)((long)puVar5 + param_1[1]);
  if ((long)puVar2 - (long)puVar5 < 2) {
    if (puVar5 == puVar2) {
LAB_109445bc8:
      return puVar5;
    }
  }
  else {
    uVar10 = *(byte *)((long)puVar5 + 1) - 0x3c;
    if (uVar10 < 0x23 && (1L << ((ulong)uVar10 & 0x3f) & 0x400000005U) != 0) {
      bVar9 = 0;
      goto LAB_109445820;
    }
  }
  bVar9 = (byte)*puVar5;
LAB_109445820:
  uVar10 = 0;
  puVar6 = puVar2;
  puVar7 = puVar8;
  do {
    switch(bVar9) {
    case 0x20:
    case 0x2b:
      uVar10 = 0xc00;
      if (bVar9 != 0x20) {
        uVar10 = 0x800;
      }
      *puVar8 = *puVar8 & 0xfffff3ff | uVar10;
      goto code_r0x000109445908;
    default:
      bVar9 = (byte)*puVar5;
      if (bVar9 == 0x7d) {
        return puVar5;
      }
      puVar7 = (uint *)((0x3a55000000000000U >> ((ulong)(bVar9 >> 2) & 0x3e) & 3) + 1);
      pbVar1 = (byte *)((long)puVar5 + (long)puVar7);
      if ((long)puVar2 - (long)pbVar1 < 1) goto LAB_109445bf8;
      if (bVar9 == 0x7b) goto LAB_109445c10;
      bVar9 = *pbVar1;
      if (bVar9 == 0x3c) {
        uVar11 = 8;
      }
      else if (bVar9 == 0x5e) {
        uVar11 = 0x18;
      }
      else {
        if (bVar9 != 0x3e) goto LAB_109445bf8;
        uVar11 = 0x10;
      }
      if (uVar10 != 0) goto LAB_109445bf8;
      FUN_109445c68(puVar8);
      *puVar8 = *puVar8 & 0xffffffc7 | uVar11;
      uVar10 = 1;
      puVar6 = puVar5;
      puVar5 = (uint *)(pbVar1 + 1);
      break;
    case 0x23:
      if (2 < uVar10) goto LAB_109445bf8;
      *puVar8 = *puVar8 | 0x2000;
      puVar5 = (uint *)((long)puVar5 + 1);
      uVar10 = 3;
      break;
    case 0x2d:
      goto code_r0x000109445908;
    case 0x2e:
      goto LAB_109445bf8;
    case 0x30:
      if (3 < uVar10) goto LAB_109445bf8;
      if ((*puVar8 & 0x38) == 0) {
        *(undefined1 *)(puVar8 + 1) = 0x30;
        *puVar8 = *puVar8 & 0xfffc7fc7 | 0x8020;
      }
      puVar5 = (uint *)((long)puVar5 + 1);
      uVar10 = 4;
      break;
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
    case 0x7b:
      if (4 < uVar10) goto LAB_109445bf8;
      puVar7 = puVar8 + 2;
      puVar6 = puVar2;
      FUN_109445cb8();
      *puVar8 = *puVar8 & 0xffffff3f | (int)puVar6 << 6;
      uVar10 = 5;
      break;
    case 0x3c:
    case 0x3e:
    case 0x5e:
      if (uVar10 != 0) goto LAB_109445bf8;
      uVar10 = 0;
      if (bVar9 == 0x3e) {
        uVar10 = 0x10;
      }
      uVar11 = 0x18;
      if (bVar9 != 0x5e) {
        uVar11 = uVar10;
      }
      uVar10 = 8;
      if (bVar9 != 0x3c) {
        uVar10 = uVar11;
      }
      *puVar8 = *puVar8 & 0xffffffc7 | uVar10;
      puVar5 = (uint *)((long)puVar5 + 1);
      uVar10 = 1;
      break;
    case 0x3f:
      goto LAB_109445bf8;
    case 0x41:
      *puVar8 = *puVar8 | 0x1000;
    case 0x61:
      goto LAB_109445bf8;
    case 0x42:
      *puVar8 = *puVar8 | 0x1000;
    case 0x62:
      uVar10 = *puVar8 & 0xfffffff8 | 6;
      goto code_r0x000109445bc0;
    case 0x45:
      *puVar8 = *puVar8 | 0x1000;
    case 0x65:
      goto LAB_109445bf8;
    case 0x46:
      *puVar8 = *puVar8 | 0x1000;
    case 0x66:
      goto LAB_109445bf8;
    case 0x47:
      *puVar8 = *puVar8 | 0x1000;
    case 0x67:
      goto LAB_109445bf8;
    case 0x4c:
      if (6 < uVar10) goto LAB_109445bf8;
      *puVar8 = *puVar8 | 0x4000;
      puVar5 = (uint *)((long)puVar5 + 1);
      uVar10 = 7;
      break;
    case 0x58:
      *puVar8 = *puVar8 | 0x1000;
    case 0x78:
      uVar10 = *puVar8 & 0xfffffff8 | 4;
code_r0x000109445bc0:
      *puVar8 = uVar10;
      return (uint *)((long)puVar5 + 1);
    case 99:
      goto LAB_109445bf8;
    case 100:
      uVar10 = *puVar8 & 0xfffffff8 | 3;
      goto code_r0x000109445bc0;
    case 0x6f:
      uVar10 = *puVar8 & 0xfffffff8 | 5;
      goto code_r0x000109445bc0;
    case 0x70:
      goto LAB_109445bf8;
    case 0x73:
      uVar10 = *puVar8 & 0xfffffff8 | 2;
      goto code_r0x000109445bc0;
    case 0x7d:
      goto LAB_109445bc8;
    }
    if (puVar5 == puVar2) {
      return puVar5;
    }
    bVar9 = (byte)*puVar5;
  } while( true );
code_r0x000109445908:
LAB_109445bf8:
  FUN_1099a5aa4(&UNK_10f56d78b);
  FUN_1099a5aa4(&UNK_10f3dbeea);
LAB_109445c10:
  puVar4 = &UNK_10f3dbec2;
  FUN_1099a5aa4();
  puVar5 = (uint *)(puVar4 + 1);
  if (puVar5 != puVar6) {
    FUN_109445cb8();
    *puVar7 = *puVar7 & 0xfffffcff | (int)puVar6 << 8;
    return puVar5;
  }
  puVar5 = (uint *)&UNK_10f56d7a4;
  FUN_1099a5aa4();
  *puVar5 = *puVar5 & 0xfffc7fff | (int)puVar7 << 0xf;
  if (puVar7 != (uint *)0x0) {
    if (puVar7 == (uint *)0x1) {
      *(byte *)(puVar5 + 1) = (byte)*puVar6;
      *(undefined2 *)((long)puVar5 + 5) = 0;
      return puVar5;
    }
    puVar8 = (uint *)0x0;
    do {
      *(byte *)((long)puVar5 + ((ulong)puVar8 & 3) + 4) = *(byte *)((long)puVar6 + (long)puVar8);
      puVar8 = (uint *)((long)puVar8 + 1);
    } while (puVar7 != puVar8);
  }
  return puVar5;
}



/* Entry: 109901e94; end: 109901ebf;  */

/* WARNING: Removing unreachable block (ram,0x000109445bb4) */
/* WARNING: Removing unreachable block (ram,0x00010944590c) */
/* WARNING: Removing unreachable block (ram,0x000109445914) */
/* WARNING: Removing unreachable block (ram,0x000109445974) */
/* WARNING: Removing unreachable block (ram,0x00010944597c) */
/* WARNING: Removing unreachable block (ram,0x000109445af0) */
/* WARNING: Removing unreachable block (ram,0x000109445b34) */

uint * FUN_109901e94(uint *param_1,undefined8 *param_2)

{
  byte *pbVar1;
  uint *puVar2;
  undefined *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  
  puVar2 = (uint *)*param_2;
  if ((param_2[1] == 0) || ((byte)*puVar2 == 0x7d)) {
    return puVar2;
  }
  puVar6 = (uint *)((long)puVar2 + param_2[1]);
  if ((long)puVar6 - (long)puVar2 < 2) {
    if (puVar2 == puVar6) {
LAB_109445bc8:
      return puVar2;
    }
  }
  else {
    uVar8 = *(byte *)((long)puVar2 + 1) - 0x3c;
    if (uVar8 < 0x23 && (1L << ((ulong)uVar8 & 0x3f) & 0x400000005U) != 0) {
      bVar7 = 0;
      goto LAB_109445820;
    }
  }
  bVar7 = (byte)*puVar2;
LAB_109445820:
  uVar8 = 0;
  puVar4 = puVar6;
  puVar5 = param_1;
  do {
    switch(bVar7) {
    case 0x20:
    case 0x2b:
      uVar8 = 0xc00;
      if (bVar7 != 0x20) {
        uVar8 = 0x800;
      }
      *param_1 = *param_1 & 0xfffff3ff | uVar8;
      goto code_r0x000109445908;
    default:
      bVar7 = (byte)*puVar2;
      if (bVar7 == 0x7d) {
        return puVar2;
      }
      puVar5 = (uint *)((0x3a55000000000000U >> ((ulong)(bVar7 >> 2) & 0x3e) & 3) + 1);
      pbVar1 = (byte *)((long)puVar2 + (long)puVar5);
      if ((long)puVar6 - (long)pbVar1 < 1) goto LAB_109445bf8;
      if (bVar7 == 0x7b) goto LAB_109445c10;
      bVar7 = *pbVar1;
      if (bVar7 == 0x3c) {
        uVar9 = 8;
      }
      else if (bVar7 == 0x5e) {
        uVar9 = 0x18;
      }
      else {
        if (bVar7 != 0x3e) goto LAB_109445bf8;
        uVar9 = 0x10;
      }
      if (uVar8 != 0) goto LAB_109445bf8;
      FUN_109445c68(param_1);
      *param_1 = *param_1 & 0xffffffc7 | uVar9;
      uVar8 = 1;
      puVar4 = puVar2;
      puVar2 = (uint *)(pbVar1 + 1);
      break;
    case 0x23:
      if (2 < uVar8) goto LAB_109445bf8;
      *param_1 = *param_1 | 0x2000;
      puVar2 = (uint *)((long)puVar2 + 1);
      uVar8 = 3;
      break;
    case 0x2d:
      goto code_r0x000109445908;
    case 0x2e:
      goto LAB_109445bf8;
    case 0x30:
      if (3 < uVar8) goto LAB_109445bf8;
      if ((*param_1 & 0x38) == 0) {
        *(undefined1 *)(param_1 + 1) = 0x30;
        *param_1 = *param_1 & 0xfffc7fc7 | 0x8020;
      }
      puVar2 = (uint *)((long)puVar2 + 1);
      uVar8 = 4;
      break;
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
    case 0x7b:
      if (4 < uVar8) goto LAB_109445bf8;
      puVar5 = param_1 + 2;
      puVar4 = puVar6;
      FUN_109445cb8();
      *param_1 = *param_1 & 0xffffff3f | (int)puVar4 << 6;
      uVar8 = 5;
      break;
    case 0x3c:
    case 0x3e:
    case 0x5e:
      if (uVar8 != 0) goto LAB_109445bf8;
      uVar8 = 0;
      if (bVar7 == 0x3e) {
        uVar8 = 0x10;
      }
      uVar9 = 0x18;
      if (bVar7 != 0x5e) {
        uVar9 = uVar8;
      }
      uVar8 = 8;
      if (bVar7 != 0x3c) {
        uVar8 = uVar9;
      }
      *param_1 = *param_1 & 0xffffffc7 | uVar8;
      puVar2 = (uint *)((long)puVar2 + 1);
      uVar8 = 1;
      break;
    case 0x3f:
      goto LAB_109445bf8;
    case 0x41:
      *param_1 = *param_1 | 0x1000;
    case 0x61:
      goto LAB_109445bf8;
    case 0x42:
      *param_1 = *param_1 | 0x1000;
    case 0x62:
      uVar8 = *param_1 & 0xfffffff8 | 6;
      goto code_r0x000109445bc0;
    case 0x45:
      *param_1 = *param_1 | 0x1000;
    case 0x65:
      goto LAB_109445bf8;
    case 0x46:
      *param_1 = *param_1 | 0x1000;
    case 0x66:
      goto LAB_109445bf8;
    case 0x47:
      *param_1 = *param_1 | 0x1000;
    case 0x67:
      goto LAB_109445bf8;
    case 0x4c:
      if (6 < uVar8) goto LAB_109445bf8;
      *param_1 = *param_1 | 0x4000;
      puVar2 = (uint *)((long)puVar2 + 1);
      uVar8 = 7;
      break;
    case 0x58:
      *param_1 = *param_1 | 0x1000;
    case 0x78:
      uVar8 = *param_1 & 0xfffffff8 | 4;
code_r0x000109445bc0:
      *param_1 = uVar8;
      return (uint *)((long)puVar2 + 1);
    case 99:
      goto LAB_109445bf8;
    case 100:
      uVar8 = *param_1 & 0xfffffff8 | 3;
      goto code_r0x000109445bc0;
    case 0x6f:
      uVar8 = *param_1 & 0xfffffff8 | 5;
      goto code_r0x000109445bc0;
    case 0x70:
      goto LAB_109445bf8;
    case 0x73:
      uVar8 = *param_1 & 0xfffffff8 | 2;
      goto code_r0x000109445bc0;
    case 0x7d:
      goto LAB_109445bc8;
    }
    if (puVar2 == puVar6) {
      return puVar2;
    }
    bVar7 = (byte)*puVar2;
  } while( true );
code_r0x000109445908:
LAB_109445bf8:
  FUN_1099a5aa4(&UNK_10f56d78b);
  FUN_1099a5aa4(&UNK_10f3dbeea);
LAB_109445c10:
  puVar3 = &UNK_10f3dbec2;
  FUN_1099a5aa4();
  puVar2 = (uint *)(puVar3 + 1);
  if (puVar2 != puVar4) {
    FUN_109445cb8();
    *puVar5 = *puVar5 & 0xfffffcff | (int)puVar4 << 8;
    return puVar2;
  }
  puVar2 = (uint *)&UNK_10f56d7a4;
  FUN_1099a5aa4();
  *puVar2 = *puVar2 & 0xfffc7fff | (int)puVar5 << 0xf;
  if (puVar5 != (uint *)0x0) {
    if (puVar5 == (uint *)0x1) {
      *(byte *)(puVar2 + 1) = (byte)*puVar4;
      *(undefined2 *)((long)puVar2 + 5) = 0;
      return puVar2;
    }
    puVar6 = (uint *)0x0;
    do {
      *(byte *)((long)puVar2 + ((ulong)puVar6 & 3) + 4) = *(byte *)((long)puVar4 + (long)puVar6);
      puVar6 = (uint *)((long)puVar6 + 1);
    } while (puVar5 != puVar6);
  }
  return puVar2;
}



/* Entry: 109901ec0; end: 10990209b;  */

/* WARNING: Possible PIC construction at 0x000109901f38: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109901f3c) */

long * FUN_109901ec0(ulong *param_1,byte *param_2,ulong *param_3,undefined8 param_4,long *param_5)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  char *pcVar5;
  uint uVar6;
  byte bVar7;
  int iVar8;
  ulong *puVar9;
  bool bVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  uint uVar14;
  uint uVar15;
  ulong *puVar16;
  ulong *puVar17;
  long lVar18;
  ulong *puVar19;
  ulong *puVar20;
  uint uVar21;
  ulong *unaff_x19;
  byte *unaff_x20;
  ulong *unaff_x21;
  ulong uVar22;
  ulong *puVar23;
  ulong unaff_x22;
  ulong uVar24;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  byte abStack_d1 [145];
  ulong uStack_40;
  undefined8 uStack_38;
  
  puVar9 = &uStack_40;
  puVar1 = &stack0xfffffffffffffff0;
  if ((*param_1 & 0x3c0) == 0) {
    plVar12 = (long *)*param_3;
    bVar7 = *param_2;
    puVar20 = (ulong *)param_3[3];
    puVar16 = param_1;
  }
  else {
    uStack_40 = *param_1;
    uStack_38 = param_1[1];
    uVar22 = uStack_40;
    uVar14 = (uint)uStack_40;
    unaff_x22 = uStack_40 & 0xffffffff;
    uVar21 = (uint)uStack_40 >> 6 & 3;
    uStack_40 = uVar22;
    if (uVar21 != 0) {
      FUN_1094472f0(uVar21,param_1 + 2,param_3);
      uStack_38 = CONCAT44(uStack_38._4_4_,uVar21);
    }
    uVar21 = uVar14 >> 8 & 3;
    if (uVar21 != 0) {
      FUN_1094472f0(uVar21,param_1 + 4,param_3);
      uStack_38 = CONCAT44(uVar21,(undefined4)uStack_38);
    }
    plVar12 = (long *)*param_3;
    bVar7 = *param_2;
    puVar20 = (ulong *)param_3[3];
    unaff_x30 = 0x109901f3c;
    register0x00000008 = (BADSPACEBASE *)&uStack_40;
    puVar16 = puVar9;
    unaff_x19 = param_3;
    unaff_x20 = param_2;
    unaff_x21 = param_1;
    unaff_x29 = puVar1;
  }
  plVar11 = (long *)((long)register0x00000008 + -0x60);
  puVar23 = (ulong *)((long)register0x00000008 + -0x60);
  *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(ulong **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(byte **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  *(undefined8 *)((long)register0x00000008 + -0x38) =
       *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar21 = (uint)*puVar16;
  if ((uVar21 & 5) == 0) {
    puVar19 = (ulong *)0x4;
    if (bVar7 == 0) {
      puVar19 = (ulong *)0x5;
    }
    pcVar5 = "true";
    if (bVar7 == 0) {
      pcVar5 = "false";
    }
    *(char **)((long)register0x00000008 + -0x60) = pcVar5;
    *(ulong **)((long)register0x00000008 + -0x58) = puVar19;
    puVar23 = puVar16;
    puVar20 = puVar19;
    FUN_10990209c();
    plVar13 = plVar12;
    param_5 = plVar11;
LAB_109901ff0:
    puVar17 = puVar23;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x38)) {
      return plVar12;
    }
LAB_109902098:
    ___stack_chk_fail();
    *(undefined8 *)((long)register0x00000008 + -0xa0) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x98) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0x90) = unaff_x22;
    *(ulong **)((long)register0x00000008 + -0x88) = (ulong *)(ulong)bVar7;
    *(ulong **)((long)register0x00000008 + -0x80) = puVar16;
    *(long **)((long)register0x00000008 + -0x78) = plVar12;
    *(undefined1 **)((long)register0x00000008 + -0x70) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x68) = FUN_10990209c;
    uVar22 = 0;
    if (puVar20 <= (ulong *)(ulong)(uint)puVar17[1]) {
      uVar22 = (long)(ulong)(uint)puVar17[1] - (long)puVar20;
    }
    uVar24 = uVar22 >> ((long)(char)(&UNK_10e00bce0)[(ulong)((uint)*puVar17 >> 3) & 7] & 0x3fU);
    if ((ulong)plVar13[2] <
        (long)puVar19 + uVar22 * ((ulong)((uint)*puVar17 >> 0xf) & 7) + plVar13[1]) {
      (*(code *)plVar13[3])(plVar13);
    }
    if (uVar24 != 0) {
      FUN_1094471fc(plVar13,uVar24,puVar17);
    }
    FUN_109446adc(plVar13,*param_5,*param_5 + param_5[1]);
    if (uVar22 != uVar24) {
      lVar18 = uVar22 - uVar24;
      *(undefined8 *)((long)register0x00000008 + -0x90) =
           *(undefined8 *)((long)register0x00000008 + -0x90);
      *(undefined8 *)((long)register0x00000008 + -0x88) =
           *(undefined8 *)((long)register0x00000008 + -0x88);
      *(undefined8 *)((long)register0x00000008 + -0x80) =
           *(undefined8 *)((long)register0x00000008 + -0x80);
      *(undefined8 *)((long)register0x00000008 + -0x78) =
           *(undefined8 *)((long)register0x00000008 + -0x78);
      *(undefined8 *)((long)register0x00000008 + -0x70) =
           *(undefined8 *)((long)register0x00000008 + -0x70);
      *(undefined8 *)((long)register0x00000008 + -0x68) =
           *(undefined8 *)((long)register0x00000008 + -0x68);
      uVar22 = (ulong)((uint)*puVar17 >> 0xf) & 7;
      if ((int)uVar22 == 1) {
        *(undefined1 *)((long)register0x00000008 + -0x91) = *(undefined1 *)((long)puVar17 + 4);
        func_0x000109447280(plVar13,lVar18,(undefined1 *)((long)register0x00000008 + -0x91));
      }
      else if (lVar18 != 0) {
        do {
          FUN_109446adc(plVar13,(uint *)((long)puVar17 + 4),(long)puVar17 + 4 + uVar22);
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
      }
      return plVar13;
    }
    return plVar13;
  }
  uVar14 = (uint)bVar7;
  plVar13 = plVar12;
  puVar17 = (ulong *)(ulong)bVar7;
  puVar19 = puVar16;
  if ((uVar21 >> 0xe & 1) != 0) {
    *(uint *)((long)register0x00000008 + -0x60) = uVar14;
    *(undefined4 *)((long)register0x00000008 + -0x50) = 1;
    puVar20 = (ulong *)0x0;
    FUN_1099a58c4();
    if (((ulong)plVar13 & 1) != 0) goto LAB_109901ff0;
    uVar21 = (uint)*puVar16;
    puVar17 = puVar23;
  }
  uVar21 = *(uint *)(&UNK_10e00b0d0 + (ulong)(uVar21 >> 10 & 3) * 4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)((long)register0x00000008 + -0x38))
  goto LAB_109902098;
  uVar22 = CONCAT44(uVar21,uVar14);
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) =
       *(undefined8 *)((long)register0x00000008 + -0x30);
  *(undefined8 *)((long)register0x00000008 + -0x28) =
       *(undefined8 *)((long)register0x00000008 + -0x28);
  *(undefined8 *)((long)register0x00000008 + -0x20) =
       *(undefined8 *)((long)register0x00000008 + -0x20);
  *(undefined8 *)((long)register0x00000008 + -0x18) =
       *(undefined8 *)((long)register0x00000008 + -0x18);
  *(undefined8 *)((long)register0x00000008 + -0x10) =
       *(undefined8 *)((long)register0x00000008 + -0x10);
  *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
  *(undefined8 *)((long)register0x00000008 + -0x48) =
       *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puVar20 = (ulong *)((long)register0x00000008 + -0x48);
  uVar6 = (uint)*puVar16;
  uVar15 = uVar6 & 7;
  puVar23 = puVar20;
  if (uVar15 < 6) {
    if (uVar15 == 4) {
      puVar4 = &UNK_10f416238;
      if ((uVar6 & 0x1000) != 0) {
        puVar4 = &DAT_10f3ddedc;
      }
      do {
        puVar23 = (ulong *)((long)puVar23 + -1);
        *(undefined *)puVar23 = puVar4[uVar22 & 0xf];
        uVar14 = (uint)uVar22;
        uVar22 = uVar22 >> 4 & 0xfffffff;
      } while (0xf < uVar14);
      uVar15 = 0x5830;
      uVar14 = 0x7830;
LAB_1098e2fe8:
      if ((uVar6 & 0x1000) != 0) {
        uVar14 = uVar15;
      }
      if (uVar21 != 0) {
        uVar14 = uVar14 << 8;
      }
      if ((uVar6 & 0x2000) != 0) {
        uVar21 = (uVar14 | uVar21) + 0x2000000;
      }
    }
    else {
      if (uVar15 != 5) goto LAB_1098e2f60;
      lVar18 = 0;
      do {
        uVar15 = (uint)uVar22;
        puVar23 = (ulong *)((long)puVar23 + -1);
        *(byte *)puVar23 = (byte)uVar22 & 7 | 0x30;
        lVar18 = lVar18 + 1;
        uVar22 = (ulong)(uVar15 >> 3);
      } while (7 < uVar15);
      if ((uVar6 >> 0xd & 1) != 0) {
        uVar15 = 0x30;
        if (uVar21 != 0) {
          uVar15 = 0x3000;
        }
        if ((int)*(uint *)((long)puVar16 + 0xc) <= lVar18 && uVar14 != 0) {
          uVar21 = (uVar15 | uVar21) + 0x1000000;
        }
      }
    }
  }
  else {
    if (uVar15 == 6) {
      do {
        uVar14 = (uint)uVar22;
        puVar23 = (ulong *)((long)puVar23 + -1);
        *(byte *)puVar23 = (byte)uVar22 & 1 | 0x30;
        uVar22 = (ulong)(uVar14 >> 1);
      } while (1 < uVar14);
      uVar15 = 0x4230;
      uVar14 = 0x6230;
      goto LAB_1098e2fe8;
    }
    if (uVar15 == 7) {
      *(bool *)((long)register0x00000008 + -0x80) = (uVar6 & 7) == 1;
      *(byte *)((long)register0x00000008 + -0x7f) = bVar7;
      puVar19 = (ulong *)0x1;
      FUN_1098e319c();
      plVar11 = plVar12;
      goto LAB_1098e30ec;
    }
LAB_1098e2f60:
    puVar23 = (ulong *)((long)register0x00000008 + -0x68);
    FUN_1098e3124(puVar23,uVar22,0x20);
  }
  iVar8 = (int)puVar20 - (int)puVar23;
  uVar15 = (uint)puVar16[1];
  uVar6 = *(uint *)((long)puVar16 + 0xc);
  uVar14 = iVar8 + (uVar21 >> 0x18);
  if (uVar6 == 0xffffffff && uVar15 == 0) {
    if ((ulong)plVar12[2] < plVar12[1] + (ulong)uVar14) {
      (*(code *)plVar12[3])(plVar12);
    }
    uVar14 = uVar21 & 0xffffff;
    if ((uVar21 & 0xffffff) != 0) {
      do {
        lVar18 = plVar12[1];
        uVar22 = lVar18 + 1;
        if ((ulong)plVar12[2] < uVar22) {
          (*(code *)plVar12[3])(plVar12);
          lVar18 = plVar12[1];
          uVar22 = lVar18 + 1;
        }
        plVar12[1] = uVar22;
        *(char *)(*plVar12 + lVar18) = (char)uVar14;
        bVar10 = 0xff < uVar14;
        uVar14 = uVar14 >> 8;
      } while (bVar10);
    }
    plVar11 = plVar12;
    FUN_109446adc();
    puVar16 = puVar23;
    puVar19 = puVar20;
  }
  else {
    uVar3 = uVar14;
    iVar2 = 0;
    if (uVar6 - iVar8 != 0 && iVar8 <= (int)uVar6) {
      uVar3 = uVar6 + (uVar21 >> 0x18);
      iVar2 = uVar6 - iVar8;
    }
    iVar8 = 0;
    if (uVar14 <= uVar15) {
      iVar8 = uVar15 - uVar14;
    }
    if (uVar14 > uVar15 || uVar15 - uVar14 == 0) {
      uVar15 = uVar14;
    }
    bVar10 = (*puVar16 & 0x38) == 0x20;
    if (bVar10) {
      iVar2 = iVar8;
    }
    *(uint *)((long)register0x00000008 + -0x80) = uVar21;
    *(int *)((long)register0x00000008 + -0x7c) = iVar2;
    if (bVar10) {
      uVar3 = uVar15;
    }
    puVar19 = (ulong *)(ulong)uVar3;
    *(ulong **)((long)register0x00000008 + -0x78) = puVar23;
    *(ulong **)((long)register0x00000008 + -0x70) = puVar20;
    FUN_1098e33e4();
    plVar11 = plVar12;
  }
LAB_1098e30ec:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)((long)register0x00000008 + -0x48)) {
    ___stack_chk_fail();
    uVar21 = (uint)puVar19;
    uVar14 = (uint)puVar16;
    if (99 < uVar14) {
      do {
        uVar22 = (ulong)puVar16 & 0xffffffff;
        uVar14 = (uint)(uVar22 / 100);
        uVar15 = (uint)puVar16;
        uVar21 = (int)puVar19 - 2;
        puVar19 = (ulong *)(ulong)uVar21;
        *(undefined2 *)((long)plVar11 + (long)puVar19) =
             *(undefined2 *)(&UNK_10e00b0ea + (ulong)(uVar15 + (int)(uVar22 / 100) * -100) * 2);
        puVar16 = (ulong *)(uVar22 / 100);
      } while (0x270 < uVar15 >> 4);
    }
    if (uVar14 < 10) {
      uVar22 = (ulong)(uVar21 - 1);
      *(byte *)((long)plVar11 + uVar22) = (byte)uVar14 | 0x30;
    }
    else {
      uVar22 = (ulong)(uVar21 - 2);
      *(undefined2 *)((long)plVar11 + uVar22) = *(undefined2 *)(&UNK_10e00b0ea + (ulong)uVar14 * 2);
    }
    return (long *)((long)plVar11 + uVar22);
  }
  return plVar12;
}



/* Entry: 10990209c; end: 10990216b;  */

long FUN_10990209c(long param_1,uint *param_2,long param_3,ulong param_4,long *param_5)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = 0;
  if (param_4 <= param_2[2]) {
    uVar2 = param_2[2] - param_4;
  }
  uVar3 = uVar2 >> ((long)(char)(&UNK_10e00bce0)[(ulong)(*param_2 >> 3) & 7] & 0x3fU);
  if (*(ulong *)(param_1 + 0x10) <
      *(long *)(param_1 + 8) + param_3 + uVar2 * ((ulong)(*param_2 >> 0xf) & 7)) {
    (**(code **)(param_1 + 0x18))(param_1);
  }
  if (uVar3 != 0) {
    FUN_1094471fc(param_1,uVar3,param_2);
  }
  FUN_109446adc(param_1,*param_5,*param_5 + param_5[1]);
  if (uVar2 == uVar3) {
    return param_1;
  }
  lVar1 = uVar2 - uVar3;
  uVar2 = (ulong)(*param_2 >> 0xf) & 7;
  if ((int)uVar2 == 1) {
    func_0x000109447280(param_1,lVar1,&stack0xffffffffffffffcf);
  }
  else if (lVar1 != 0) {
    do {
      FUN_109446adc(param_1,param_2 + 1,(long)(param_2 + 1) + uVar2);
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  return param_1;
}



/* Entry: 10990216c; end: 1099021fb;  */

long * FUN_10990216c(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
    __ZdlPv();
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1099021fc; end: 109902337;  */

long * FUN_1099021fc(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
    __ZdlPv();
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109902338; end: 1099023cf;  */

long * FUN_109902338(long *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)param_1[1];
  puVar1 = (undefined8 *)param_1[2];
  param_1[5] = 0;
  lVar3 = (long)puVar1 - (long)puVar4;
  while (uVar2 = lVar3 >> 3, 2 < uVar2) {
    __ZdlPv(*puVar4);
    puVar1 = (undefined8 *)param_1[2];
    puVar4 = (undefined8 *)(param_1[1] + 8);
    param_1[1] = (long)puVar4;
    lVar3 = (long)puVar1 - (long)puVar4;
  }
  if (uVar2 == 1) {
    lVar3 = 0x200;
  }
  else {
    if (uVar2 != 2) goto LAB_1099023b4;
    lVar3 = 0x400;
  }
  param_1[4] = lVar3;
LAB_1099023b4:
  for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
    __ZdlPv(*puVar4);
  }
  func_0x0001078b05cc();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1099023d0; end: 10990246f;  */

long * FUN_1099023d0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  FUN_109902470(param_1[6]);
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar3 = *plVar1;
    plVar2 = (long *)plVar1[5];
    while (plVar2 != (long *)0x0) {
      lVar4 = *plVar2;
      if (plVar2[3] != 0) {
        plVar2[4] = plVar2[3];
        __ZdlPv();
      }
      __ZdlPv(plVar2);
      plVar2 = (long *)lVar4;
    }
    lVar4 = plVar1[3];
    plVar1[3] = 0;
    if (lVar4 != 0) {
      __ZdlPv();
    }
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar3;
  }
  lVar3 = *param_1;
  *param_1 = 0;
  if (lVar3 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109902470; end: 109902513;  */

void FUN_109902470(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_109902470(*param_1);
    FUN_109902470(param_1[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 109902514; end: 1099026a3;  */

undefined8 * FUN_109902514(undefined8 *param_1,long param_2,int param_3)

{
  uint *puVar1;
  uint *puVar2;
  double *pdVar3;
  double *pdVar4;
  long lVar5;
  double *pdVar6;
  double *pdVar7;
  double *pdVar8;
  uint uVar9;
  int *piVar10;
  long lVar11;
  uint uVar12;
  double dVar13;
  undefined8 *puVar14;
  undefined *puVar15;
  long lVar16;
  undefined8 *puVar17;
  uint uVar18;
  uint uVar19;
  double *pdVar20;
  double *pdVar21;
  int *piVar22;
  long lVar23;
  ulong uVar24;
  int iVar25;
  long *plVar26;
  long lVar27;
  long lVar28;
  int iVar29;
  ulong uVar30;
  double *pdVar31;
  uint uVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined8 uStack_28;
  
  *param_1 = &PTR_DAT_110b1d028;
  param_1[1] = param_2;
  *(int *)((long)param_1 + 0x14) = param_3;
  plVar26 = *(long **)(param_2 + 0x20);
  if (plVar26 == (long *)0x0) {
    uStack_80 = 0;
    uStack_28 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_30 = 0;
    FUN_1099a9f0c(&uStack_80,&UNK_10f589ab0,0x33,3,FUN_1099aa768,0);
    puVar15 = &UNK_10f589b44;
    lVar27 = 0x1c;
    FUN_1092b4db8(lStack_78 + 0x7540);
LAB_10990269c:
    puVar14 = &uStack_80;
    func_0x0001099ab7c0();
    uVar12 = *(uint *)(puVar14 + 2);
    if (0 < (int)uVar12) {
      uVar24 = 0;
      lVar11 = *(long *)(puVar14[1] + 0x18);
      plVar26 = *(long **)(puVar14[1] + 0x20);
      lVar23 = plVar26[3];
      lVar28 = *plVar26;
      do {
        puVar1 = (uint *)(lVar23 + uVar24 * 0x20);
        uVar9 = *puVar1;
        puVar2 = (uint *)(lVar28 + (long)**(int **)(puVar1 + 2) * 8);
        pdVar3 = (double *)(lVar11 + (long)(*(int **)(puVar1 + 2))[1] * 8);
        uVar32 = *puVar2;
        uVar30 = (ulong)(int)uVar32;
        pdVar4 = (double *)(puVar15 + (long)(int)puVar1[1] * 8);
        lVar5 = lVar27 + (long)(int)puVar2[1] * 8;
        if ((uVar30 & 1) == 0) {
LAB_10990275c:
          uVar18 = uVar32 & 0xfffffffc;
          puVar14 = (undefined8 *)(ulong)uVar18;
          if ((uVar32 >> 1 & 1) != 0) {
            if ((int)uVar9 < 1) {
              dVar33 = 0.0;
              dVar34 = 0.0;
            }
            else {
              dVar33 = 0.0;
              dVar34 = 0.0;
              pdVar21 = pdVar3 + (int)uVar18;
              pdVar20 = pdVar4;
              uVar19 = uVar9;
              do {
                dVar33 = dVar33 + *pdVar21 * *pdVar20;
                dVar34 = dVar34 + pdVar21[1] * *pdVar20;
                pdVar21 = pdVar21 + uVar30;
                uVar19 = uVar19 - 1;
                pdVar20 = pdVar20 + 1;
              } while (uVar19 != 0);
            }
            lVar16 = (long)(int)uVar18 * 8;
            pdVar21 = (double *)(lVar5 + lVar16);
            dVar35 = *pdVar21;
            pdVar20 = (double *)(lVar5 + lVar16);
            pdVar20[1] = dVar34 + pdVar21[1];
            *pdVar20 = dVar33 + dVar35;
          }
          if (3 < (int)uVar32) {
            puVar17 = (undefined8 *)0x0;
            uVar18 = uVar9 & 0xfffffffc;
            uVar30 = (ulong)uVar32;
            pdVar21 = pdVar3;
            do {
              pdVar20 = pdVar4;
              if ((int)uVar9 < 4) {
                pdVar31 = pdVar3 + (long)puVar17;
                dVar33 = 0.0;
                dVar34 = 0.0;
                dVar35 = 0.0;
                dVar36 = 0.0;
              }
              else {
                iVar29 = 0;
                dVar33 = 0.0;
                dVar34 = 0.0;
                dVar35 = 0.0;
                dVar36 = 0.0;
                pdVar31 = pdVar21;
                do {
                  pdVar6 = pdVar31 + uVar30 + 2;
                  dVar13 = *pdVar20;
                  dVar37 = pdVar20[1];
                  pdVar7 = pdVar31 + uVar30 * 2 + 2;
                  dVar38 = pdVar20[2];
                  dVar39 = pdVar20[3];
                  pdVar8 = pdVar31 + uVar30 * 3 + 2;
                  dVar33 = dVar33 + dVar13 * *pdVar31 + pdVar6[-2] * dVar37 + pdVar7[-2] * dVar38 +
                           pdVar8[-2] * dVar39;
                  dVar34 = dVar34 + dVar13 * pdVar31[1] + pdVar6[-1] * dVar37 + pdVar7[-1] * dVar38
                           + pdVar8[-1] * dVar39;
                  dVar35 = dVar35 + dVar13 * pdVar31[2] + *pdVar6 * dVar37 + *pdVar7 * dVar38 +
                           *pdVar8 * dVar39;
                  dVar36 = dVar36 + dVar13 * pdVar31[3] + pdVar6[1] * dVar37 + pdVar7[1] * dVar38 +
                           pdVar8[1] * dVar39;
                  pdVar20 = pdVar20 + 4;
                  iVar29 = iVar29 + 4;
                  pdVar31 = pdVar31 + uVar30 * 4;
                } while (iVar29 < (int)uVar18);
              }
              if (uVar18 != uVar9) {
                pdVar31 = pdVar31 + 2;
                uVar32 = uVar18;
                do {
                  dVar13 = *pdVar20;
                  pdVar20 = pdVar20 + 1;
                  dVar33 = dVar33 + dVar13 * pdVar31[-2];
                  dVar34 = dVar34 + dVar13 * pdVar31[-1];
                  dVar35 = dVar35 + dVar13 * *pdVar31;
                  dVar36 = dVar36 + dVar13 * pdVar31[1];
                  uVar32 = uVar32 + 1;
                  pdVar31 = pdVar31 + uVar30;
                } while ((int)uVar32 < (int)uVar9);
              }
              pdVar20 = (double *)(lVar5 + (long)puVar17 * 8);
              pdVar20[1] = dVar34 + pdVar20[1];
              *pdVar20 = dVar33 + *pdVar20;
              pdVar20[3] = dVar36 + pdVar20[3];
              pdVar20[2] = dVar35 + pdVar20[2];
              puVar17 = (undefined8 *)((long)puVar17 + 4);
              pdVar21 = pdVar21 + 4;
            } while (puVar17 < puVar14);
          }
        }
        else {
          puVar14 = (undefined8 *)(long)(int)(uVar32 - 1);
          if ((int)uVar9 < 1) {
            dVar33 = 0.0;
          }
          else {
            dVar33 = 0.0;
            pdVar21 = pdVar3 + (long)puVar14;
            pdVar20 = pdVar4;
            uVar18 = uVar9;
            do {
              dVar33 = dVar33 + *pdVar20 * *pdVar21;
              pdVar21 = pdVar21 + uVar30;
              uVar18 = uVar18 - 1;
              pdVar20 = pdVar20 + 1;
            } while (uVar18 != 0);
          }
          *(double *)(lVar5 + (long)puVar14 * 8) = dVar33 + *(double *)(lVar5 + (long)puVar14 * 8);
          if (uVar32 != 1) goto LAB_10990275c;
        }
        uVar24 = uVar24 + 1;
      } while (uVar24 != uVar12);
    }
    return puVar14;
  }
  piVar22 = (int *)*plVar26;
  piVar10 = (int *)plVar26[1];
  lVar23 = (long)piVar10 - (long)piVar22 >> 3;
  *(int *)(param_1 + 3) = (int)lVar23 - param_3;
  *(undefined4 *)(param_1 + 2) = 0;
  lVar27 = plVar26[3];
  lVar11 = plVar26[4];
  if (lVar27 != lVar11) {
    iVar29 = 0;
    do {
      if (**(int **)(lVar27 + 8) < param_3) {
        iVar29 = iVar29 + 1;
        *(int *)(param_1 + 2) = iVar29;
      }
      lVar27 = lVar27 + 0x20;
    } while (lVar27 != lVar11);
  }
  *(undefined4 *)((long)param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  if (piVar10 == piVar22) {
    iVar29 = 0;
  }
  else {
    iVar25 = 0;
    iVar29 = 0;
    lVar27 = 0;
    do {
      if (lVar27 < param_3) {
        iVar25 = *piVar22 + iVar25;
        *(int *)((long)param_1 + 0x1c) = iVar25;
      }
      else {
        iVar29 = *piVar22 + iVar29;
        *(int *)(param_1 + 4) = iVar29;
      }
      lVar27 = lVar27 + 1;
      piVar22 = piVar22 + 2;
    } while (lVar23 != lVar27);
    iVar29 = iVar29 + iVar25;
  }
  uStack_80 = CONCAT44(uStack_80._4_4_,iVar29);
  puStack_88 = (undefined8 *)CONCAT44(puStack_88._4_4_,*(int *)(param_2 + 0xc));
  if (iVar29 != *(int *)(param_2 + 0xc)) {
    puVar14 = &uStack_80;
    FUN_109904144(puVar14,&puStack_88,&UNK_10f589b61);
    if (puVar14 != (undefined8 *)0x0) {
      puVar15 = &UNK_10f589ab0;
      lVar27 = 0x51;
      puStack_88 = puVar14;
      FUN_1099ab8e4(&uStack_80,&UNK_10f589ab0,0x51,&puStack_88);
      goto LAB_10990269c;
    }
  }
  return param_1;
}



/* Entry: 1099026a4; end: 1099028f7;  */

void FUN_1099026a4(long param_1,long param_2,long param_3)

{
  uint *puVar1;
  uint *puVar2;
  double *pdVar3;
  double *pdVar4;
  long lVar5;
  double *pdVar6;
  double *pdVar7;
  double *pdVar8;
  uint uVar9;
  long lVar10;
  long *plVar11;
  uint uVar12;
  double dVar13;
  long lVar14;
  ulong uVar15;
  uint uVar16;
  uint uVar17;
  double *pdVar18;
  double *pdVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  double *pdVar24;
  int iVar25;
  uint uVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  
  uVar12 = *(uint *)(param_1 + 0x10);
  if (0 < (int)uVar12) {
    uVar20 = 0;
    lVar10 = *(long *)(*(long *)(param_1 + 8) + 0x18);
    plVar11 = *(long **)(*(long *)(param_1 + 8) + 0x20);
    lVar21 = plVar11[3];
    lVar22 = *plVar11;
    do {
      puVar1 = (uint *)(lVar21 + uVar20 * 0x20);
      uVar9 = *puVar1;
      puVar2 = (uint *)(lVar22 + (long)**(int **)(puVar1 + 2) * 8);
      pdVar3 = (double *)(lVar10 + (long)(*(int **)(puVar1 + 2))[1] * 8);
      uVar26 = *puVar2;
      uVar15 = (ulong)(int)uVar26;
      pdVar4 = (double *)(param_2 + (long)(int)puVar1[1] * 8);
      lVar5 = param_3 + (long)(int)puVar2[1] * 8;
      if ((uVar15 & 1) == 0) {
LAB_10990275c:
        uVar16 = uVar26 & 0xfffffffc;
        if ((uVar26 >> 1 & 1) != 0) {
          if ((int)uVar9 < 1) {
            dVar27 = 0.0;
            dVar28 = 0.0;
          }
          else {
            dVar27 = 0.0;
            dVar28 = 0.0;
            pdVar19 = pdVar3 + (int)uVar16;
            pdVar18 = pdVar4;
            uVar17 = uVar9;
            do {
              dVar27 = dVar27 + *pdVar19 * *pdVar18;
              dVar28 = dVar28 + pdVar19[1] * *pdVar18;
              pdVar19 = pdVar19 + uVar15;
              uVar17 = uVar17 - 1;
              pdVar18 = pdVar18 + 1;
            } while (uVar17 != 0);
          }
          lVar14 = (long)(int)uVar16 * 8;
          pdVar19 = (double *)(lVar5 + lVar14);
          dVar29 = *pdVar19;
          pdVar18 = (double *)(lVar5 + lVar14);
          pdVar18[1] = dVar28 + pdVar19[1];
          *pdVar18 = dVar27 + dVar29;
        }
        if (3 < (int)uVar26) {
          uVar15 = 0;
          uVar17 = uVar9 & 0xfffffffc;
          uVar23 = (ulong)uVar26;
          pdVar19 = pdVar3;
          do {
            pdVar18 = pdVar4;
            if ((int)uVar9 < 4) {
              pdVar24 = pdVar3 + uVar15;
              dVar27 = 0.0;
              dVar28 = 0.0;
              dVar29 = 0.0;
              dVar30 = 0.0;
            }
            else {
              iVar25 = 0;
              dVar27 = 0.0;
              dVar28 = 0.0;
              dVar29 = 0.0;
              dVar30 = 0.0;
              pdVar24 = pdVar19;
              do {
                pdVar6 = pdVar24 + uVar23 + 2;
                dVar13 = *pdVar18;
                dVar31 = pdVar18[1];
                pdVar7 = pdVar24 + uVar23 * 2 + 2;
                dVar32 = pdVar18[2];
                dVar33 = pdVar18[3];
                pdVar8 = pdVar24 + uVar23 * 3 + 2;
                dVar27 = dVar27 + dVar13 * *pdVar24 + pdVar6[-2] * dVar31 + pdVar7[-2] * dVar32 +
                         pdVar8[-2] * dVar33;
                dVar28 = dVar28 + dVar13 * pdVar24[1] + pdVar6[-1] * dVar31 + pdVar7[-1] * dVar32 +
                         pdVar8[-1] * dVar33;
                dVar29 = dVar29 + dVar13 * pdVar24[2] + *pdVar6 * dVar31 + *pdVar7 * dVar32 +
                         *pdVar8 * dVar33;
                dVar30 = dVar30 + dVar13 * pdVar24[3] + pdVar6[1] * dVar31 + pdVar7[1] * dVar32 +
                         pdVar8[1] * dVar33;
                pdVar18 = pdVar18 + 4;
                iVar25 = iVar25 + 4;
                pdVar24 = pdVar24 + uVar23 * 4;
              } while (iVar25 < (int)uVar17);
            }
            if (uVar17 != uVar9) {
              pdVar24 = pdVar24 + 2;
              uVar26 = uVar17;
              do {
                dVar13 = *pdVar18;
                pdVar18 = pdVar18 + 1;
                dVar27 = dVar27 + dVar13 * pdVar24[-2];
                dVar28 = dVar28 + dVar13 * pdVar24[-1];
                dVar29 = dVar29 + dVar13 * *pdVar24;
                dVar30 = dVar30 + dVar13 * pdVar24[1];
                uVar26 = uVar26 + 1;
                pdVar24 = pdVar24 + uVar23;
              } while ((int)uVar26 < (int)uVar9);
            }
            pdVar18 = (double *)(lVar5 + uVar15 * 8);
            pdVar18[1] = dVar28 + pdVar18[1];
            *pdVar18 = dVar27 + *pdVar18;
            pdVar18[3] = dVar30 + pdVar18[3];
            pdVar18[2] = dVar29 + pdVar18[2];
            uVar15 = uVar15 + 4;
            pdVar19 = pdVar19 + 4;
          } while (uVar15 < uVar16);
        }
      }
      else {
        lVar14 = (long)(int)(uVar26 - 1);
        if ((int)uVar9 < 1) {
          dVar27 = 0.0;
        }
        else {
          dVar27 = 0.0;
          pdVar19 = pdVar3 + lVar14;
          pdVar18 = pdVar4;
          uVar16 = uVar9;
          do {
            dVar27 = dVar27 + *pdVar18 * *pdVar19;
            pdVar19 = pdVar19 + uVar15;
            uVar16 = uVar16 - 1;
            pdVar18 = pdVar18 + 1;
          } while (uVar16 != 0);
        }
        *(double *)(lVar5 + lVar14 * 8) = dVar27 + *(double *)(lVar5 + lVar14 * 8);
        if (uVar26 != 1) goto LAB_10990275c;
      }
      uVar20 = uVar20 + 1;
    } while (uVar20 != uVar12);
  }
  return;
}



/* Entry: 1099028f8; end: 109902df7;  */

void FUN_1099028f8(long param_1,long param_2,long param_3)

{
  uint *puVar1;
  double *pdVar2;
  double *pdVar3;
  double *pdVar4;
  double *pdVar5;
  double *pdVar6;
  uint uVar7;
  long lVar8;
  long *plVar9;
  int *piVar10;
  uint uVar11;
  int iVar12;
  double dVar13;
  double *pdVar14;
  ulong uVar15;
  int iVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  double *pdVar21;
  long lVar22;
  ulong uVar23;
  int *piVar24;
  ulong uVar25;
  long lVar26;
  long lVar27;
  uint uVar28;
  uint uVar29;
  double *pdVar30;
  uint uVar31;
  uint uVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  
  lVar8 = *(long *)(*(long *)(param_1 + 8) + 0x18);
  plVar9 = *(long **)(*(long *)(param_1 + 8) + 0x20);
  uVar11 = *(uint *)(param_1 + 0x10);
  lVar22 = plVar9[3];
  if (0 < (int)uVar11) {
    uVar23 = 0;
    do {
      puVar1 = (uint *)(lVar22 + uVar23 * 0x20);
      lVar27 = *(long *)(puVar1 + 2);
      uVar25 = *(long *)(puVar1 + 4) - lVar27 >> 3;
      if (1 < uVar25) {
        uVar31 = *puVar1;
        lVar26 = *plVar9;
        pdVar2 = (double *)(param_2 + (long)(int)puVar1[1] * 8);
        iVar12 = *(int *)(param_1 + 0x1c);
        uVar7 = uVar31 & 0xfffffffc;
        uVar15 = 1;
        do {
          piVar24 = (int *)(lVar27 + uVar15 * 8);
          puVar1 = (uint *)(lVar26 + (long)*piVar24 * 8);
          uVar32 = *puVar1;
          uVar20 = (ulong)(int)uVar32;
          pdVar3 = (double *)(lVar8 + (long)piVar24[1] * 8);
          lVar19 = param_3 + (long)iVar12 * -8 + (long)(int)puVar1[1] * 8;
          if ((uVar20 & 1) == 0) {
LAB_1099029f0:
            uVar28 = uVar32 & 0xfffffffc;
            if ((uVar32 >> 1 & 1) != 0) {
              if ((int)uVar31 < 1) {
                dVar33 = 0.0;
                dVar34 = 0.0;
              }
              else {
                dVar33 = 0.0;
                dVar34 = 0.0;
                pdVar30 = pdVar3 + (int)uVar28;
                pdVar14 = pdVar2;
                uVar29 = uVar31;
                do {
                  dVar33 = dVar33 + *pdVar30 * *pdVar14;
                  dVar34 = dVar34 + pdVar30[1] * *pdVar14;
                  pdVar30 = pdVar30 + uVar20;
                  uVar29 = uVar29 - 1;
                  pdVar14 = pdVar14 + 1;
                } while (uVar29 != 0);
              }
              lVar17 = (long)(int)uVar28 * 8;
              pdVar30 = (double *)(lVar19 + lVar17);
              dVar35 = *pdVar30;
              pdVar14 = (double *)(lVar19 + lVar17);
              pdVar14[1] = dVar34 + pdVar30[1];
              *pdVar14 = dVar33 + dVar35;
            }
            if (3 < (int)uVar32) {
              uVar20 = 0;
              uVar18 = (ulong)uVar32;
              pdVar30 = pdVar3;
              do {
                pdVar14 = pdVar2;
                if ((int)uVar31 < 4) {
                  pdVar21 = pdVar3 + uVar20;
                  dVar33 = 0.0;
                  dVar34 = 0.0;
                  dVar35 = 0.0;
                  dVar36 = 0.0;
                }
                else {
                  iVar16 = 0;
                  dVar33 = 0.0;
                  dVar34 = 0.0;
                  dVar35 = 0.0;
                  dVar36 = 0.0;
                  pdVar21 = pdVar30;
                  do {
                    pdVar4 = pdVar21 + uVar18 + 2;
                    dVar13 = *pdVar14;
                    dVar37 = pdVar14[1];
                    pdVar5 = pdVar21 + uVar18 * 2 + 2;
                    dVar38 = pdVar14[2];
                    dVar39 = pdVar14[3];
                    pdVar6 = pdVar21 + uVar18 * 3 + 2;
                    dVar33 = dVar33 + dVar13 * *pdVar21 + pdVar4[-2] * dVar37 + pdVar5[-2] * dVar38
                             + pdVar6[-2] * dVar39;
                    dVar34 = dVar34 + dVar13 * pdVar21[1] + pdVar4[-1] * dVar37 +
                             pdVar5[-1] * dVar38 + pdVar6[-1] * dVar39;
                    dVar35 = dVar35 + dVar13 * pdVar21[2] + *pdVar4 * dVar37 + *pdVar5 * dVar38 +
                             *pdVar6 * dVar39;
                    dVar36 = dVar36 + dVar13 * pdVar21[3] + pdVar4[1] * dVar37 + pdVar5[1] * dVar38
                             + pdVar6[1] * dVar39;
                    pdVar14 = pdVar14 + 4;
                    iVar16 = iVar16 + 4;
                    pdVar21 = pdVar21 + uVar18 * 4;
                  } while (iVar16 < (int)uVar7);
                }
                if (uVar7 != uVar31) {
                  pdVar21 = pdVar21 + 2;
                  uVar32 = uVar7;
                  do {
                    dVar13 = *pdVar14;
                    pdVar14 = pdVar14 + 1;
                    dVar33 = dVar33 + dVar13 * pdVar21[-2];
                    dVar34 = dVar34 + dVar13 * pdVar21[-1];
                    dVar35 = dVar35 + dVar13 * *pdVar21;
                    dVar36 = dVar36 + dVar13 * pdVar21[1];
                    uVar32 = uVar32 + 1;
                    pdVar21 = pdVar21 + uVar18;
                  } while ((int)uVar32 < (int)uVar31);
                }
                pdVar14 = (double *)(lVar19 + uVar20 * 8);
                pdVar14[1] = dVar34 + pdVar14[1];
                *pdVar14 = dVar33 + *pdVar14;
                pdVar14[3] = dVar36 + pdVar14[3];
                pdVar14[2] = dVar35 + pdVar14[2];
                uVar20 = uVar20 + 4;
                pdVar30 = pdVar30 + 4;
              } while (uVar20 < uVar28);
            }
          }
          else {
            lVar17 = (long)(int)(uVar32 - 1);
            if ((int)uVar31 < 1) {
              dVar33 = 0.0;
            }
            else {
              dVar33 = 0.0;
              pdVar30 = pdVar3 + lVar17;
              pdVar14 = pdVar2;
              uVar28 = uVar31;
              do {
                dVar33 = dVar33 + *pdVar14 * *pdVar30;
                pdVar30 = pdVar30 + uVar20;
                uVar28 = uVar28 - 1;
                pdVar14 = pdVar14 + 1;
              } while (uVar28 != 0);
            }
            *(double *)(lVar19 + lVar17 * 8) = dVar33 + *(double *)(lVar19 + lVar17 * 8);
            if (uVar32 != 1) goto LAB_1099029f0;
          }
          uVar15 = uVar15 + 1;
        } while (uVar15 != uVar25);
      }
      uVar23 = uVar23 + 1;
    } while (uVar23 != uVar11);
  }
  uVar23 = plVar9[4] - lVar22 >> 5;
  if ((ulong)(long)(int)uVar11 < uVar23) {
    uVar25 = (ulong)(int)uVar11;
    do {
      puVar1 = (uint *)(lVar22 + uVar25 * 0x20);
      piVar24 = *(int **)(puVar1 + 2);
      piVar10 = *(int **)(puVar1 + 4);
      if (piVar24 != piVar10) {
        uVar7 = *puVar1;
        lVar27 = *plVar9;
        pdVar2 = (double *)(param_2 + (long)(int)puVar1[1] * 8);
        iVar12 = *(int *)(param_1 + 0x1c);
        uVar11 = uVar7 & 0xfffffffc;
        do {
          puVar1 = (uint *)(lVar27 + (long)*piVar24 * 8);
          uVar31 = *puVar1;
          uVar15 = (ulong)(int)uVar31;
          pdVar3 = (double *)(lVar8 + (long)piVar24[1] * 8);
          lVar26 = param_3 + (long)iVar12 * -8 + (long)(int)puVar1[1] * 8;
          if ((uVar15 & 1) == 0) {
LAB_109902c48:
            uVar32 = uVar31 & 0xfffffffc;
            if ((uVar31 >> 1 & 1) != 0) {
              if ((int)uVar7 < 1) {
                dVar33 = 0.0;
                dVar34 = 0.0;
              }
              else {
                dVar33 = 0.0;
                dVar34 = 0.0;
                pdVar30 = pdVar3 + (int)uVar32;
                pdVar14 = pdVar2;
                uVar28 = uVar7;
                do {
                  dVar33 = dVar33 + *pdVar30 * *pdVar14;
                  dVar34 = dVar34 + pdVar30[1] * *pdVar14;
                  pdVar30 = pdVar30 + uVar15;
                  uVar28 = uVar28 - 1;
                  pdVar14 = pdVar14 + 1;
                } while (uVar28 != 0);
              }
              lVar19 = (long)(int)uVar32 * 8;
              pdVar30 = (double *)(lVar26 + lVar19);
              dVar35 = *pdVar30;
              pdVar14 = (double *)(lVar26 + lVar19);
              pdVar14[1] = dVar34 + pdVar30[1];
              *pdVar14 = dVar33 + dVar35;
            }
            if (3 < (int)uVar31) {
              uVar15 = 0;
              uVar20 = (ulong)uVar31;
              pdVar30 = pdVar3;
              do {
                pdVar14 = pdVar2;
                if ((int)uVar7 < 4) {
                  pdVar21 = pdVar3 + uVar15;
                  dVar33 = 0.0;
                  dVar34 = 0.0;
                  dVar35 = 0.0;
                  dVar36 = 0.0;
                }
                else {
                  iVar16 = 0;
                  dVar33 = 0.0;
                  dVar34 = 0.0;
                  dVar35 = 0.0;
                  dVar36 = 0.0;
                  pdVar21 = pdVar30;
                  do {
                    pdVar4 = pdVar21 + uVar20 + 2;
                    dVar13 = *pdVar14;
                    dVar37 = pdVar14[1];
                    pdVar5 = pdVar21 + uVar20 * 2 + 2;
                    dVar38 = pdVar14[2];
                    dVar39 = pdVar14[3];
                    pdVar6 = pdVar21 + uVar20 * 3 + 2;
                    dVar33 = dVar33 + dVar13 * *pdVar21 + pdVar4[-2] * dVar37 + pdVar5[-2] * dVar38
                             + pdVar6[-2] * dVar39;
                    dVar34 = dVar34 + dVar13 * pdVar21[1] + pdVar4[-1] * dVar37 +
                             pdVar5[-1] * dVar38 + pdVar6[-1] * dVar39;
                    dVar35 = dVar35 + dVar13 * pdVar21[2] + *pdVar4 * dVar37 + *pdVar5 * dVar38 +
                             *pdVar6 * dVar39;
                    dVar36 = dVar36 + dVar13 * pdVar21[3] + pdVar4[1] * dVar37 + pdVar5[1] * dVar38
                             + pdVar6[1] * dVar39;
                    pdVar14 = pdVar14 + 4;
                    iVar16 = iVar16 + 4;
                    pdVar21 = pdVar21 + uVar20 * 4;
                  } while (iVar16 < (int)uVar11);
                }
                if (uVar11 != uVar7) {
                  pdVar21 = pdVar21 + 2;
                  uVar31 = uVar11;
                  do {
                    dVar13 = *pdVar14;
                    pdVar14 = pdVar14 + 1;
                    dVar33 = dVar33 + dVar13 * pdVar21[-2];
                    dVar34 = dVar34 + dVar13 * pdVar21[-1];
                    dVar35 = dVar35 + dVar13 * *pdVar21;
                    dVar36 = dVar36 + dVar13 * pdVar21[1];
                    uVar31 = uVar31 + 1;
                    pdVar21 = pdVar21 + uVar20;
                  } while ((int)uVar31 < (int)uVar7);
                }
                pdVar14 = (double *)(lVar26 + uVar15 * 8);
                pdVar14[1] = dVar34 + pdVar14[1];
                *pdVar14 = dVar33 + *pdVar14;
                pdVar14[3] = dVar36 + pdVar14[3];
                pdVar14[2] = dVar35 + pdVar14[2];
                uVar15 = uVar15 + 4;
                pdVar30 = pdVar30 + 4;
              } while (uVar15 < uVar32);
            }
          }
          else {
            lVar19 = (long)(int)(uVar31 - 1);
            if ((int)uVar7 < 1) {
              dVar33 = 0.0;
            }
            else {
              dVar33 = 0.0;
              pdVar30 = pdVar3 + lVar19;
              pdVar14 = pdVar2;
              uVar32 = uVar7;
              do {
                dVar33 = dVar33 + *pdVar14 * *pdVar30;
                pdVar30 = pdVar30 + uVar15;
                uVar32 = uVar32 - 1;
                pdVar14 = pdVar14 + 1;
              } while (uVar32 != 0);
            }
            *(double *)(lVar26 + lVar19 * 8) = dVar33 + *(double *)(lVar26 + lVar19 * 8);
            if (uVar31 != 1) goto LAB_109902c48;
          }
          piVar24 = piVar24 + 2;
        } while (piVar24 != piVar10);
      }
      uVar25 = uVar25 + 1;
    } while (uVar25 != uVar23);
  }
  return;
}



/* Entry: 109902df8; end: 1099030cf;  */

void FUN_109902df8(long param_1,long param_2,long param_3)

{
  long lVar1;
  uint *puVar2;
  uint *puVar3;
  long lVar4;
  double *pdVar5;
  long lVar6;
  double *pdVar7;
  double *pdVar8;
  double *pdVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  long *plVar13;
  uint uVar14;
  uint uVar15;
  double dVar16;
  ulong uVar17;
  double *pdVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  double *pdVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  int iVar32;
  uint uVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  
  uVar14 = *(uint *)(param_1 + 0x10);
  if (0 < (int)uVar14) {
    uVar23 = 0;
    lVar12 = *(long *)(*(long *)(param_1 + 8) + 0x18);
    plVar13 = *(long **)(*(long *)(param_1 + 8) + 0x20);
    lVar24 = plVar13[3];
    lVar25 = *plVar13;
    lVar1 = lVar12 + 0x10;
    do {
      puVar2 = (uint *)(lVar24 + uVar23 * 0x20);
      uVar10 = *puVar2;
      lVar29 = (long)(*(int **)(puVar2 + 2))[1];
      puVar3 = (uint *)(lVar25 + (long)**(int **)(puVar2 + 2) * 8);
      lVar4 = lVar12 + lVar29 * 8;
      uVar11 = *puVar3;
      uVar17 = (ulong)uVar11;
      pdVar5 = (double *)(param_2 + (long)(int)puVar3[1] * 8);
      lVar6 = param_3 + (long)(int)puVar2[1] * 8;
      if ((uVar10 & 1) == 0) {
LAB_109902ecc:
        uVar21 = (ulong)uVar10 & 0xfffffffc;
        if ((uVar10 >> 1 & 1) != 0) {
          if ((int)uVar11 < 1) {
            dVar34 = 0.0;
            dVar35 = 0.0;
          }
          else {
            dVar34 = 0.0;
            dVar35 = 0.0;
            uVar19 = uVar17;
            pdVar18 = pdVar5;
            pdVar22 = (double *)(lVar4 + (long)(int)(uVar11 * (int)uVar21) * 8);
            do {
              dVar34 = dVar34 + *pdVar22 * *pdVar18;
              dVar35 = dVar35 + pdVar22[uVar17] * *pdVar18;
              uVar15 = (int)uVar19 - 1;
              uVar19 = (ulong)uVar15;
              pdVar18 = pdVar18 + 1;
              pdVar22 = pdVar22 + 1;
            } while (uVar15 != 0);
          }
          uVar17 = -(ulong)(uVar10 >> 0x1f) & 0xfffffff800000000 | uVar21 << 3;
          pdVar18 = (double *)(lVar6 + uVar17);
          dVar36 = *pdVar18;
          pdVar22 = (double *)(lVar6 + uVar17);
          pdVar22[1] = dVar35 + pdVar18[1];
          *pdVar22 = dVar34 + dVar36;
        }
        if (3 < (int)uVar10) {
          uVar17 = 0;
          lVar20 = (long)(int)uVar11;
          uVar10 = uVar11 & 0xfffffffc;
          uVar15 = uVar11 * 3;
          lVar26 = lVar1 + lVar20 * 8 + lVar29 * 8;
          lVar27 = lVar20 * 0x20;
          lVar28 = lVar1 + lVar29 * 8 + (long)(int)uVar15 * 8;
          lVar29 = lVar1 + lVar29 * 8 + (long)(int)(uVar11 << 1) * 8;
          lVar30 = lVar4;
          do {
            if ((int)uVar11 < 4) {
              pdVar18 = (double *)(lVar4 + uVar17 * lVar20 * 8);
              dVar34 = 0.0;
              dVar35 = 0.0;
              dVar36 = 0.0;
              dVar37 = 0.0;
              pdVar22 = pdVar5;
            }
            else {
              lVar31 = 0;
              iVar32 = 0;
              dVar34 = 0.0;
              dVar35 = 0.0;
              dVar36 = 0.0;
              dVar37 = 0.0;
              do {
                pdVar18 = (double *)((long)pdVar5 + lVar31);
                pdVar22 = (double *)(lVar30 + lVar31);
                pdVar7 = (double *)(lVar26 + lVar31);
                pdVar8 = (double *)(lVar29 + lVar31);
                pdVar9 = (double *)(lVar28 + lVar31);
                dVar16 = *pdVar18;
                dVar39 = pdVar18[1];
                dVar38 = pdVar18[2];
                dVar40 = pdVar18[3];
                dVar34 = dVar34 + dVar16 * *pdVar22 + pdVar22[1] * dVar39 + pdVar22[2] * dVar38 +
                         pdVar22[3] * dVar40;
                dVar35 = dVar35 + dVar16 * pdVar7[-2] + pdVar7[-1] * dVar39 + *pdVar7 * dVar38 +
                         pdVar7[1] * dVar40;
                dVar36 = dVar36 + dVar16 * pdVar8[-2] + pdVar8[-1] * dVar39 + *pdVar8 * dVar38 +
                         pdVar8[1] * dVar40;
                dVar37 = dVar37 + dVar16 * pdVar9[-2] + pdVar9[-1] * dVar39 + *pdVar9 * dVar38 +
                         pdVar9[1] * dVar40;
                iVar32 = iVar32 + 4;
                lVar31 = lVar31 + 0x20;
              } while (iVar32 < (int)uVar10);
              pdVar18 = (double *)(lVar30 + lVar31);
              pdVar22 = (double *)((long)pdVar5 + lVar31);
            }
            uVar33 = uVar10;
            if (uVar10 != uVar11) {
              do {
                dVar16 = *pdVar22;
                pdVar22 = pdVar22 + 1;
                dVar34 = dVar34 + dVar16 * *pdVar18;
                dVar35 = dVar35 + dVar16 * pdVar18[lVar20];
                dVar36 = dVar36 + dVar16 * pdVar18[(int)(uVar11 << 1)];
                dVar37 = dVar37 + dVar16 * *(double *)
                                            ((long)pdVar18 +
                                            (-(ulong)(uVar15 >> 0x1f) & 0xfffffff800000000 |
                                            (ulong)uVar15 << 3));
                pdVar18 = pdVar18 + 1;
                uVar33 = uVar33 + 1;
              } while ((int)uVar33 < (int)uVar11);
            }
            pdVar18 = (double *)(lVar6 + uVar17 * 8);
            uVar17 = uVar17 + 4;
            lVar26 = lVar26 + lVar27;
            pdVar18[1] = dVar35 + pdVar18[1];
            *pdVar18 = dVar34 + *pdVar18;
            pdVar18[3] = dVar37 + pdVar18[3];
            pdVar18[2] = dVar36 + pdVar18[2];
            lVar30 = lVar30 + lVar27;
            lVar28 = lVar28 + lVar27;
            lVar29 = lVar29 + lVar27;
          } while (uVar17 < uVar21);
        }
      }
      else {
        iVar32 = uVar10 - 1;
        if ((int)uVar11 < 1) {
          dVar34 = 0.0;
        }
        else {
          dVar34 = 0.0;
          pdVar18 = (double *)(lVar4 + (long)(int)(uVar11 * iVar32) * 8);
          uVar21 = uVar17;
          pdVar22 = pdVar5;
          do {
            dVar34 = dVar34 + *pdVar22 * *pdVar18;
            uVar15 = (int)uVar21 - 1;
            uVar21 = (ulong)uVar15;
            pdVar18 = pdVar18 + 1;
            pdVar22 = pdVar22 + 1;
          } while (uVar15 != 0);
        }
        *(double *)(lVar6 + (long)iVar32 * 8) = dVar34 + *(double *)(lVar6 + (long)iVar32 * 8);
        if (uVar10 != 1) goto LAB_109902ecc;
      }
      uVar23 = uVar23 + 1;
    } while (uVar23 != uVar14);
  }
  return;
}



/* Entry: 1099030d0; end: 10990370b;  */

void FUN_1099030d0(long param_1,long param_2,long param_3)

{
  double *pdVar1;
  long lVar2;
  uint *puVar3;
  double *pdVar4;
  double *pdVar5;
  double *pdVar6;
  double *pdVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  int *piVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  double dVar17;
  uint uVar18;
  uint uVar19;
  long lVar20;
  double *pdVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  int iVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  ulong uVar31;
  long lVar32;
  double *pdVar33;
  int iVar34;
  ulong uVar35;
  ulong uVar36;
  int *piVar37;
  ulong uVar38;
  ulong uVar39;
  long lVar40;
  long lVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  
  lVar10 = *(long *)(*(long *)(param_1 + 8) + 0x18);
  plVar12 = *(long **)(*(long *)(param_1 + 8) + 0x20);
  uVar14 = *(uint *)(param_1 + 0x10);
  lVar29 = plVar12[3];
  if (0 < (int)uVar14) {
    uVar31 = 0;
    lVar2 = lVar10 + 0x10;
    do {
      puVar3 = (uint *)(lVar29 + uVar31 * 0x20);
      lVar11 = *(long *)(puVar3 + 2);
      uVar38 = *(long *)(puVar3 + 4) - lVar11 >> 3;
      if (1 < uVar38) {
        uVar8 = *puVar3;
        lVar32 = *plVar12;
        iVar15 = *(int *)(param_1 + 0x1c);
        lVar28 = param_3 + (long)(int)puVar3[1] * 8;
        lVar26 = (long)(int)uVar8 + -1;
        iVar27 = (int)((ulong)uVar8 & 0xfffffffc);
        pdVar1 = (double *)(lVar28 + (long)iVar27 * 8);
        uVar39 = 1;
        do {
          piVar37 = (int *)(lVar11 + uVar39 * 8);
          lVar24 = (long)piVar37[1];
          puVar3 = (uint *)(lVar32 + (long)*piVar37 * 8);
          uVar9 = *puVar3;
          uVar36 = (ulong)uVar9;
          lVar25 = lVar10 + lVar24 * 8;
          pdVar4 = (double *)(param_2 + (long)iVar15 * -8 + (long)(int)puVar3[1] * 8);
          if ((uVar8 & 1) == 0) {
LAB_109903208:
            if ((uVar8 >> 1 & 1) != 0) {
              if ((int)uVar9 < 1) {
                dVar42 = 0.0;
                dVar43 = 0.0;
              }
              else {
                dVar42 = 0.0;
                dVar43 = 0.0;
                pdVar21 = (double *)(lVar25 + (long)(int)(uVar9 * iVar27) * 8);
                uVar35 = uVar36;
                pdVar33 = pdVar4;
                do {
                  dVar42 = dVar42 + *pdVar21 * *pdVar33;
                  dVar43 = dVar43 + pdVar21[uVar36] * *pdVar33;
                  uVar16 = (int)uVar35 - 1;
                  uVar35 = (ulong)uVar16;
                  pdVar21 = pdVar21 + 1;
                  pdVar33 = pdVar33 + 1;
                } while (uVar16 != 0);
              }
              pdVar1[1] = dVar43 + pdVar1[1];
              *pdVar1 = dVar42 + *pdVar1;
            }
            if (3 < (int)uVar8) {
              uVar36 = 0;
              lVar41 = (long)(int)uVar9;
              uVar16 = uVar9 & 0xfffffffc;
              uVar19 = uVar9 * 3;
              lVar30 = lVar2 + lVar41 * 8 + lVar24 * 8;
              lVar22 = lVar41 * 0x20;
              lVar23 = lVar2 + lVar24 * 8 + (long)(int)uVar19 * 8;
              lVar24 = lVar2 + lVar24 * 8 + (long)(int)(uVar9 << 1) * 8;
              lVar40 = lVar25;
              do {
                if ((int)uVar9 < 4) {
                  pdVar21 = (double *)(lVar25 + uVar36 * lVar41 * 8);
                  dVar42 = 0.0;
                  dVar43 = 0.0;
                  dVar44 = 0.0;
                  dVar45 = 0.0;
                  pdVar33 = pdVar4;
                }
                else {
                  lVar20 = 0;
                  iVar34 = 0;
                  dVar42 = 0.0;
                  dVar43 = 0.0;
                  dVar44 = 0.0;
                  dVar45 = 0.0;
                  do {
                    pdVar21 = (double *)((long)pdVar4 + lVar20);
                    pdVar33 = (double *)(lVar40 + lVar20);
                    pdVar5 = (double *)(lVar30 + lVar20);
                    pdVar6 = (double *)(lVar24 + lVar20);
                    pdVar7 = (double *)(lVar23 + lVar20);
                    dVar17 = *pdVar21;
                    dVar47 = pdVar21[1];
                    dVar46 = pdVar21[2];
                    dVar48 = pdVar21[3];
                    dVar42 = dVar42 + dVar17 * *pdVar33 + pdVar33[1] * dVar47 + pdVar33[2] * dVar46
                             + pdVar33[3] * dVar48;
                    dVar43 = dVar43 + dVar17 * pdVar5[-2] + pdVar5[-1] * dVar47 + *pdVar5 * dVar46 +
                             pdVar5[1] * dVar48;
                    dVar44 = dVar44 + dVar17 * pdVar6[-2] + pdVar6[-1] * dVar47 + *pdVar6 * dVar46 +
                             pdVar6[1] * dVar48;
                    dVar45 = dVar45 + dVar17 * pdVar7[-2] + pdVar7[-1] * dVar47 + *pdVar7 * dVar46 +
                             pdVar7[1] * dVar48;
                    iVar34 = iVar34 + 4;
                    lVar20 = lVar20 + 0x20;
                  } while (iVar34 < (int)uVar16);
                  pdVar21 = (double *)(lVar40 + lVar20);
                  pdVar33 = (double *)((long)pdVar4 + lVar20);
                }
                uVar18 = uVar16;
                if (uVar16 != uVar9) {
                  do {
                    dVar17 = *pdVar33;
                    pdVar33 = pdVar33 + 1;
                    dVar42 = dVar42 + dVar17 * *pdVar21;
                    dVar43 = dVar43 + dVar17 * pdVar21[lVar41];
                    dVar44 = dVar44 + dVar17 * pdVar21[(int)(uVar9 << 1)];
                    dVar45 = dVar45 + dVar17 * *(double *)
                                                ((long)pdVar21 +
                                                (-(ulong)(uVar19 >> 0x1f) & 0xfffffff800000000 |
                                                (ulong)uVar19 << 3));
                    pdVar21 = pdVar21 + 1;
                    uVar18 = uVar18 + 1;
                  } while ((int)uVar18 < (int)uVar9);
                }
                pdVar21 = (double *)(lVar28 + uVar36 * 8);
                uVar36 = uVar36 + 4;
                lVar30 = lVar30 + lVar22;
                pdVar21[1] = dVar43 + pdVar21[1];
                *pdVar21 = dVar42 + *pdVar21;
                pdVar21[3] = dVar45 + pdVar21[3];
                pdVar21[2] = dVar44 + pdVar21[2];
                lVar40 = lVar40 + lVar22;
                lVar23 = lVar23 + lVar22;
                lVar24 = lVar24 + lVar22;
              } while (uVar36 < ((ulong)uVar8 & 0xfffffffc));
            }
          }
          else {
            if ((int)uVar9 < 1) {
              dVar42 = 0.0;
            }
            else {
              dVar42 = 0.0;
              pdVar21 = pdVar4;
              pdVar33 = (double *)(lVar25 + (long)(int)(uVar9 * (int)lVar26) * 8);
              uVar35 = uVar36;
              do {
                dVar42 = dVar42 + *pdVar21 * *pdVar33;
                uVar16 = (int)uVar35 - 1;
                uVar35 = (ulong)uVar16;
                pdVar21 = pdVar21 + 1;
                pdVar33 = pdVar33 + 1;
              } while (uVar16 != 0);
            }
            *(double *)(lVar28 + lVar26 * 8) = dVar42 + *(double *)(lVar28 + lVar26 * 8);
            if (uVar8 != 1) goto LAB_109903208;
          }
          uVar39 = uVar39 + 1;
        } while (uVar39 != uVar38);
      }
      uVar31 = uVar31 + 1;
    } while (uVar31 != uVar14);
  }
  uVar31 = plVar12[4] - lVar29 >> 5;
  if ((ulong)(long)(int)uVar14 < uVar31) {
    uVar38 = (ulong)(int)uVar14;
    lVar2 = lVar10 + 0x10;
    do {
      puVar3 = (uint *)(lVar29 + uVar38 * 0x20);
      piVar37 = *(int **)(puVar3 + 2);
      piVar13 = *(int **)(puVar3 + 4);
      if (piVar37 != piVar13) {
        uVar14 = *puVar3;
        lVar26 = *plVar12;
        iVar15 = *(int *)(param_1 + 0x1c);
        lVar11 = param_3 + (long)(int)puVar3[1] * 8;
        lVar28 = (long)(int)uVar14 - 1;
        iVar27 = (int)((ulong)uVar14 & 0xfffffffc);
        pdVar1 = (double *)(lVar11 + (long)iVar27 * 8);
        do {
          lVar25 = (long)piVar37[1];
          puVar3 = (uint *)(lVar26 + (long)*piVar37 * 8);
          uVar8 = *puVar3;
          uVar39 = (ulong)uVar8;
          lVar32 = lVar10 + lVar25 * 8;
          pdVar4 = (double *)(param_2 + (long)iVar15 * -8 + (long)(int)puVar3[1] * 8);
          if (((long)(int)uVar14 & 1U) == 0) {
LAB_1099034f4:
            if ((uVar14 >> 1 & 1) != 0) {
              if ((int)uVar8 < 1) {
                dVar42 = 0.0;
                dVar43 = 0.0;
              }
              else {
                dVar42 = 0.0;
                dVar43 = 0.0;
                pdVar21 = (double *)(lVar32 + (long)(int)(uVar8 * iVar27) * 8);
                uVar36 = uVar39;
                pdVar33 = pdVar4;
                do {
                  dVar42 = dVar42 + *pdVar21 * *pdVar33;
                  dVar43 = dVar43 + pdVar21[uVar39] * *pdVar33;
                  uVar9 = (int)uVar36 - 1;
                  uVar36 = (ulong)uVar9;
                  pdVar21 = pdVar21 + 1;
                  pdVar33 = pdVar33 + 1;
                } while (uVar9 != 0);
              }
              pdVar1[1] = dVar43 + pdVar1[1];
              *pdVar1 = dVar42 + *pdVar1;
            }
            if (3 < (int)uVar14) {
              uVar39 = 0;
              lVar40 = (long)(int)uVar8;
              uVar9 = uVar8 & 0xfffffffc;
              uVar16 = uVar8 * 3;
              lVar24 = lVar2 + lVar40 * 8 + lVar25 * 8;
              lVar41 = lVar40 * 0x20;
              lVar30 = lVar2 + lVar25 * 8 + (long)(int)uVar16 * 8;
              lVar25 = lVar2 + lVar25 * 8 + (long)(int)(uVar8 << 1) * 8;
              lVar23 = lVar32;
              do {
                if ((int)uVar8 < 4) {
                  pdVar21 = (double *)(lVar32 + uVar39 * lVar40 * 8);
                  dVar42 = 0.0;
                  dVar43 = 0.0;
                  dVar44 = 0.0;
                  dVar45 = 0.0;
                  pdVar33 = pdVar4;
                }
                else {
                  lVar22 = 0;
                  iVar34 = 0;
                  dVar42 = 0.0;
                  dVar43 = 0.0;
                  dVar44 = 0.0;
                  dVar45 = 0.0;
                  do {
                    pdVar21 = (double *)((long)pdVar4 + lVar22);
                    pdVar33 = (double *)(lVar23 + lVar22);
                    pdVar5 = (double *)(lVar24 + lVar22);
                    pdVar6 = (double *)(lVar25 + lVar22);
                    pdVar7 = (double *)(lVar30 + lVar22);
                    dVar17 = *pdVar21;
                    dVar47 = pdVar21[1];
                    dVar46 = pdVar21[2];
                    dVar48 = pdVar21[3];
                    dVar42 = dVar42 + dVar17 * *pdVar33 + pdVar33[1] * dVar47 + pdVar33[2] * dVar46
                             + pdVar33[3] * dVar48;
                    dVar43 = dVar43 + dVar17 * pdVar5[-2] + pdVar5[-1] * dVar47 + *pdVar5 * dVar46 +
                             pdVar5[1] * dVar48;
                    dVar44 = dVar44 + dVar17 * pdVar6[-2] + pdVar6[-1] * dVar47 + *pdVar6 * dVar46 +
                             pdVar6[1] * dVar48;
                    dVar45 = dVar45 + dVar17 * pdVar7[-2] + pdVar7[-1] * dVar47 + *pdVar7 * dVar46 +
                             pdVar7[1] * dVar48;
                    iVar34 = iVar34 + 4;
                    lVar22 = lVar22 + 0x20;
                  } while (iVar34 < (int)uVar9);
                  pdVar21 = (double *)(lVar23 + lVar22);
                  pdVar33 = (double *)((long)pdVar4 + lVar22);
                }
                uVar19 = uVar9;
                if (uVar9 != uVar8) {
                  do {
                    dVar17 = *pdVar33;
                    pdVar33 = pdVar33 + 1;
                    dVar42 = dVar42 + dVar17 * *pdVar21;
                    dVar43 = dVar43 + dVar17 * pdVar21[lVar40];
                    dVar44 = dVar44 + dVar17 * pdVar21[(int)(uVar8 << 1)];
                    dVar45 = dVar45 + dVar17 * *(double *)
                                                ((long)pdVar21 +
                                                (-(ulong)(uVar16 >> 0x1f) & 0xfffffff800000000 |
                                                (ulong)uVar16 << 3));
                    pdVar21 = pdVar21 + 1;
                    uVar19 = uVar19 + 1;
                  } while ((int)uVar19 < (int)uVar8);
                }
                pdVar21 = (double *)(lVar11 + uVar39 * 8);
                uVar39 = uVar39 + 4;
                lVar24 = lVar24 + lVar41;
                pdVar21[1] = dVar43 + pdVar21[1];
                *pdVar21 = dVar42 + *pdVar21;
                pdVar21[3] = dVar45 + pdVar21[3];
                pdVar21[2] = dVar44 + pdVar21[2];
                lVar23 = lVar23 + lVar41;
                lVar30 = lVar30 + lVar41;
                lVar25 = lVar25 + lVar41;
              } while (uVar39 < ((ulong)uVar14 & 0xfffffffc));
            }
          }
          else {
            if ((int)uVar8 < 1) {
              dVar42 = 0.0;
            }
            else {
              dVar42 = 0.0;
              pdVar21 = pdVar4;
              pdVar33 = (double *)(lVar32 + (long)(int)(uVar8 * (int)lVar28) * 8);
              uVar36 = uVar39;
              do {
                dVar42 = dVar42 + *pdVar21 * *pdVar33;
                uVar9 = (int)uVar36 - 1;
                uVar36 = (ulong)uVar9;
                pdVar21 = pdVar21 + 1;
                pdVar33 = pdVar33 + 1;
              } while (uVar9 != 0);
            }
            *(double *)(lVar11 + lVar28 * 8) = dVar42 + *(double *)(lVar11 + lVar28 * 8);
            if (uVar14 != 1) goto LAB_1099034f4;
          }
          piVar37 = piVar37 + 2;
        } while (piVar37 != piVar13);
      }
      uVar38 = uVar38 + 1;
    } while (uVar38 != uVar31);
  }
  return;
}



/* Entry: 10990370c; end: 109903823;  */

void FUN_10990370c(long *param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  
  FUN_109903824(param_1,*(undefined8 *)(*(long *)(param_2 + 8) + 0x20),0,
                *(undefined4 *)(param_2 + 0x14));
  uVar1 = *(uint *)(*param_1 + 0x10);
  if (0 < (int)uVar1) {
    _bzero(*(undefined8 *)(*param_1 + 0x18),(ulong)uVar1 << 3);
  }
  if (0 < *(int *)(param_2 + 0x10)) {
    lVar2 = 0;
    do {
      FUN_109904224();
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(param_2 + 0x10));
  }
  return;
}



/* Entry: 109903824; end: 109903bc3;  */

void FUN_109903824(undefined8 *param_1,undefined8 *param_2,int param_3,int param_4)

{
  ulong uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  int iVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  int iVar19;
  
  puVar3 = (undefined8 *)0x30;
  puVar8 = param_2;
  __Znwm();
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
  if (param_3 < param_4) {
    puVar15 = (undefined8 *)0x0;
    iVar11 = 0;
    iVar19 = 0;
    lVar12 = (long)param_3;
    puVar5 = puVar3;
    puVar18 = (undefined8 *)0x0;
    do {
      puVar13 = (undefined8 *)*param_2;
      puVar6 = puVar13;
      if ((undefined8 *)puVar3[2] <= puVar18) {
        puVar17 = (undefined8 *)*puVar3;
        uVar1 = ((long)puVar18 - (long)puVar17 >> 3) + 1;
        if (uVar1 >> 0x3d != 0) goto LAB_109903bac;
        uVar9 = (long)puVar3[2] - (long)puVar17;
        uVar10 = (long)uVar9 >> 2;
        if (uVar10 <= uVar1) {
          uVar10 = uVar1;
        }
        if (0x7ffffffffffffff7 < uVar9) {
          uVar10 = 0x1fffffffffffffff;
        }
        if (uVar10 >> 0x3d == 0) {
          puVar4 = (undefined8 *)(uVar10 << 3);
          __Znwm();
          puVar8 = (undefined8 *)((long)puVar4 + ((long)puVar18 - (long)puVar17));
          puVar14 = puVar8 + 1;
          *puVar8 = 0xffffffffffffffff;
          puVar5 = puVar4;
          puVar8 = puVar17;
          _memcpy();
          *puVar3 = puVar4;
          puVar3[1] = puVar14;
          puVar3[2] = puVar4 + uVar10;
          if (puVar17 != (undefined8 *)0x0) {
            __ZdlPv();
            puVar5 = puVar17;
          }
          goto LAB_109903944;
        }
LAB_109903ba0:
        puVar14 = puVar6;
        func_0x000104c4f740();
LAB_109903ba4:
        func_0x000109904210();
        puVar13 = puVar14;
LAB_109903ba8:
        func_0x0001099041fc();
LAB_109903bac:
        func_0x0001099041e8();
        __ZdlPv(puVar13);
        __Unwind_Resume();
        if (0 < (int)*(uint *)(puVar8 + 2)) {
          _bzero(puVar8[3],(ulong)*(uint *)(puVar8 + 2) << 3);
        }
        if (0 < *(int *)(puVar5 + 2)) {
          lVar12 = 0;
          do {
            FUN_109904224();
            lVar12 = lVar12 + 1;
          } while (lVar12 < *(int *)(puVar5 + 2));
        }
        return;
      }
      puVar14 = puVar18 + 1;
      *puVar18 = 0xffffffffffffffff;
      puVar15 = (undefined8 *)puVar3[4];
LAB_109903944:
      puVar3[1] = puVar14;
      *(int *)(puVar14 + -1) = *(int *)(puVar13 + lVar12);
      *(int *)((long)puVar14 + -4) = iVar11;
      if ((undefined8 *)puVar3[5] <= puVar15) {
        puVar18 = (undefined8 *)puVar3[3];
        uVar1 = ((long)puVar15 - (long)puVar18 >> 5) + 1;
        if (uVar1 >> 0x3b == 0) {
          uVar9 = (long)puVar3[5] - (long)puVar18;
          uVar10 = (long)uVar9 >> 4;
          if (uVar10 <= uVar1) {
            uVar10 = uVar1;
          }
          if (0x7fffffffffffffdf < uVar9) {
            uVar10 = 0x7ffffffffffffff;
          }
          if (uVar10 >> 0x3b != 0) goto LAB_109903ba0;
          puVar4 = (undefined8 *)(uVar10 << 5);
          __Znwm();
          puVar17 = (undefined8 *)((long)puVar4 + ((long)puVar15 - (long)puVar18));
          *puVar17 = 0xffffffffffffffff;
          puVar17[2] = 0;
          puVar17[3] = 0;
          puVar17[1] = 0;
          puVar5 = puVar4;
          puVar6 = puVar18;
          if (puVar18 != puVar15) {
            do {
              *puVar5 = *puVar6;
              uVar7 = puVar6[1];
              puVar5[2] = puVar6[2];
              puVar5[1] = uVar7;
              puVar5[3] = puVar6[3];
              puVar6[1] = 0;
              puVar6[2] = 0;
              puVar6[3] = 0;
              puVar6 = puVar6 + 4;
              puVar5 = puVar5 + 4;
              puVar16 = puVar18;
            } while (puVar6 != puVar15);
            do {
              puVar5 = (undefined8 *)puVar16[1];
              if (puVar5 != (undefined8 *)0x0) {
                puVar16[2] = puVar5;
                __ZdlPv();
              }
              puVar16 = puVar16 + 4;
            } while (puVar16 != puVar15);
          }
          puVar15 = puVar17 + 4;
          puVar3[3] = puVar4;
          puVar3[4] = puVar15;
          puVar3[5] = puVar4 + uVar10 * 4;
          if (puVar18 != (undefined8 *)0x0) {
            __ZdlPv();
            puVar5 = puVar18;
          }
          goto LAB_109903a6c;
        }
        goto LAB_109903ba8;
      }
      *puVar15 = 0xffffffffffffffff;
      puVar15[2] = 0;
      puVar15[3] = 0;
      puVar15[1] = 0;
      puVar15 = puVar15 + 4;
LAB_109903a6c:
      puVar3[4] = puVar15;
      puVar15[-4] = puVar14[-1];
      puVar18 = (undefined8 *)puVar15[-2];
      if (puVar18 < (undefined8 *)puVar15[-1]) {
        puVar4 = puVar18 + 1;
        *puVar18 = 0xffffffffffffffff;
      }
      else {
        puVar17 = (undefined8 *)puVar15[-3];
        uVar1 = ((long)puVar18 - (long)puVar17 >> 3) + 1;
        if (uVar1 >> 0x3d != 0) goto LAB_109903ba4;
        uVar9 = (long)puVar15[-1] - (long)puVar17;
        uVar10 = (long)uVar9 >> 2;
        if (uVar10 <= uVar1) {
          uVar10 = uVar1;
        }
        if (0x7ffffffffffffff7 < uVar9) {
          uVar10 = 0x1fffffffffffffff;
        }
        puVar6 = puVar14;
        if (uVar10 >> 0x3d != 0) goto LAB_109903ba0;
        puVar6 = (undefined8 *)(uVar10 << 3);
        __Znwm();
        puVar8 = (undefined8 *)((long)puVar6 + ((long)puVar18 - (long)puVar17));
        puVar4 = puVar8 + 1;
        *puVar8 = 0xffffffffffffffff;
        puVar5 = puVar6;
        puVar8 = puVar17;
        _memcpy();
        puVar15[-3] = puVar6;
        puVar15[-2] = puVar4;
        puVar15[-1] = puVar6 + uVar10;
        if (puVar17 != (undefined8 *)0x0) {
          __ZdlPv();
          puVar5 = puVar17;
        }
      }
      puVar15[-2] = puVar4;
      *(int *)(puVar4 + -1) = (int)lVar12 - param_3;
      *(int *)((long)puVar4 + -4) = iVar19;
      iVar2 = *(int *)(puVar13 + lVar12);
      iVar11 = iVar2 + iVar11;
      iVar19 = iVar19 + iVar2 * iVar2;
      lVar12 = lVar12 + 1;
      puVar18 = puVar14;
    } while (param_4 != (int)lVar12);
  }
  uVar7 = 0x28;
  __Znwm();
  FUN_10991c340();
  *param_1 = uVar7;
  return;
}



/* Entry: 109903bc4; end: 109903cab;  */

void FUN_109903bc4(long param_1,long param_2)

{
  long lVar1;
  
  if (0 < (int)*(uint *)(param_2 + 0x10)) {
    _bzero(*(undefined8 *)(param_2 + 0x18),(ulong)*(uint *)(param_2 + 0x10) << 3);
  }
  if (0 < *(int *)(param_1 + 0x10)) {
    lVar1 = 0;
    do {
      FUN_109904224();
      lVar1 = lVar1 + 1;
    } while (lVar1 < *(int *)(param_1 + 0x10));
  }
  return;
}



/* Entry: 109903cac; end: 109903d63;  */

long * FUN_109903cac(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    plVar3 = *(long **)(lVar2 + 0x20);
    *(undefined8 *)(lVar2 + 0x20) = 0;
    if (plVar3 != (long *)0x0) {
      lVar4 = plVar3[3];
      if (lVar4 != 0) {
        lVar5 = plVar3[4];
        lVar1 = lVar4;
        if (lVar5 != lVar4) {
          do {
            if (*(long *)(lVar5 + -0x18) != 0) {
              *(long *)(lVar5 + -0x10) = *(long *)(lVar5 + -0x18);
              __ZdlPv();
            }
            lVar5 = lVar5 + -0x20;
          } while (lVar5 != lVar4);
          lVar1 = plVar3[3];
        }
        plVar3[4] = lVar4;
        __ZdlPv(lVar1);
      }
      if (*plVar3 != 0) {
        plVar3[1] = *plVar3;
        __ZdlPv();
      }
      __ZdlPv(plVar3);
    }
    lVar4 = *(long *)(lVar2 + 0x18);
    *(undefined8 *)(lVar2 + 0x18) = 0;
    if (lVar4 != 0) {
      __ZdaPv();
    }
    __ZdlPv(lVar2);
  }
  return param_1;
}



/* Entry: 109903d64; end: 109903f4f;  */

void FUN_109903d64(long *param_1,long param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  int *piVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  
  FUN_109903824(param_1,*(undefined8 *)(*(long *)(param_2 + 8) + 0x20),*(int *)(param_2 + 0x14),
                *(int *)(param_2 + 0x18) + *(int *)(param_2 + 0x14));
  lVar12 = *param_1;
  lVar8 = *(long *)(param_2 + 8);
  plVar13 = *(long **)(lVar8 + 0x20);
  lVar14 = *(long *)(lVar12 + 0x20);
  if (0 < (int)*(uint *)(lVar12 + 0x10)) {
    _bzero(*(undefined8 *)(lVar12 + 0x18),(ulong)*(uint *)(lVar12 + 0x10) << 3);
  }
  lVar8 = *(long *)(lVar8 + 0x18);
  iVar6 = *(int *)(param_2 + 0x10);
  if (0 < iVar6) {
    lVar15 = 0;
    do {
      puVar1 = (undefined4 *)(plVar13[3] + lVar15 * 0x20);
      lVar7 = *(long *)(puVar1 + 2);
      if (8 < (ulong)(*(long *)(puVar1 + 4) - lVar7)) {
        lVar16 = 0;
        uVar4 = *puVar1;
        uVar9 = 1;
        do {
          lVar3 = (long)*(int *)(lVar7 + lVar16 + 8);
          uVar5 = *(undefined4 *)(*plVar13 + lVar3 * 8);
          lVar7 = lVar8 + (long)*(int *)(lVar7 + lVar16 + 0xc) * 8;
          FUN_109904224(lVar7,uVar4,uVar5,lVar7,uVar4,uVar5,
                        *(long *)(lVar12 + 0x18) +
                        (long)*(int *)(*(long *)(*(long *)(lVar14 + 0x18) +
                                                 (lVar3 - *(int *)(param_2 + 0x14)) * 0x20 + 8) + 4)
                        * 8,0,0,uVar5,uVar5);
          uVar9 = uVar9 + 1;
          lVar7 = *(long *)(puVar1 + 2);
          lVar16 = lVar16 + 8;
        } while (uVar9 < (ulong)(*(long *)(puVar1 + 4) - lVar7 >> 3));
        iVar6 = *(int *)(param_2 + 0x10);
      }
      lVar15 = lVar15 + 1;
    } while (lVar15 < iVar6);
  }
  lVar15 = plVar13[3];
  lVar7 = plVar13[4];
  for (uVar9 = (ulong)iVar6; uVar9 < (ulong)(lVar7 - lVar15 >> 5); uVar9 = uVar9 + 1) {
    puVar1 = (undefined4 *)(lVar15 + uVar9 * 0x20);
    piVar2 = *(int **)(puVar1 + 4);
    if (*(int **)(puVar1 + 2) != piVar2) {
      uVar4 = *puVar1;
      piVar10 = *(int **)(puVar1 + 2);
      do {
        piVar11 = piVar10 + 2;
        uVar5 = *(undefined4 *)(*plVar13 + (long)*piVar10 * 8);
        lVar15 = lVar8 + (long)piVar10[1] * 8;
        FUN_109904224(lVar15,uVar4,uVar5,lVar15,uVar4,uVar5,
                      *(long *)(lVar12 + 0x18) +
                      (long)*(int *)(*(long *)(*(long *)(lVar14 + 0x18) +
                                               ((long)*piVar10 - (long)*(int *)(param_2 + 0x14)) *
                                               0x20 + 8) + 4) * 8,0,0,uVar5,uVar5);
        piVar10 = piVar11;
      } while (piVar11 != piVar2);
      lVar15 = plVar13[3];
      lVar7 = plVar13[4];
    }
  }
  return;
}



/* Entry: 109903f50; end: 109904103;  */

void FUN_109903f50(long param_1,long param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  int *piVar13;
  long lVar14;
  ulong uVar15;
  
  lVar8 = *(long *)(param_1 + 8);
  plVar9 = *(long **)(lVar8 + 0x20);
  lVar10 = *(long *)(param_2 + 0x20);
  if (0 < (int)*(uint *)(param_2 + 0x10)) {
    _bzero(*(undefined8 *)(param_2 + 0x18),(ulong)*(uint *)(param_2 + 0x10) << 3);
  }
  lVar8 = *(long *)(lVar8 + 0x18);
  iVar6 = *(int *)(param_1 + 0x10);
  if (0 < iVar6) {
    lVar11 = 0;
    do {
      puVar1 = (undefined4 *)(plVar9[3] + lVar11 * 0x20);
      lVar7 = *(long *)(puVar1 + 2);
      if (8 < (ulong)(*(long *)(puVar1 + 4) - lVar7)) {
        lVar14 = 0;
        uVar4 = *puVar1;
        uVar15 = 1;
        do {
          lVar3 = (long)*(int *)(lVar7 + lVar14 + 8);
          uVar5 = *(undefined4 *)(*plVar9 + lVar3 * 8);
          lVar7 = lVar8 + (long)*(int *)(lVar7 + lVar14 + 0xc) * 8;
          FUN_109904224(lVar7,uVar4,uVar5,lVar7,uVar4,uVar5,
                        *(long *)(param_2 + 0x18) +
                        (long)*(int *)(*(long *)(*(long *)(lVar10 + 0x18) +
                                                 (lVar3 - *(int *)(param_1 + 0x14)) * 0x20 + 8) + 4)
                        * 8,0,0,uVar5,uVar5);
          uVar15 = uVar15 + 1;
          lVar7 = *(long *)(puVar1 + 2);
          lVar14 = lVar14 + 8;
        } while (uVar15 < (ulong)(*(long *)(puVar1 + 4) - lVar7 >> 3));
        iVar6 = *(int *)(param_1 + 0x10);
      }
      lVar11 = lVar11 + 1;
    } while (lVar11 < iVar6);
  }
  lVar11 = plVar9[3];
  lVar7 = plVar9[4];
  for (uVar15 = (ulong)iVar6; uVar15 < (ulong)(lVar7 - lVar11 >> 5); uVar15 = uVar15 + 1) {
    puVar1 = (undefined4 *)(lVar11 + uVar15 * 0x20);
    piVar2 = *(int **)(puVar1 + 4);
    if (*(int **)(puVar1 + 2) != piVar2) {
      uVar4 = *puVar1;
      piVar12 = *(int **)(puVar1 + 2);
      do {
        piVar13 = piVar12 + 2;
        uVar5 = *(undefined4 *)(*plVar9 + (long)*piVar12 * 8);
        lVar11 = lVar8 + (long)piVar12[1] * 8;
        FUN_109904224(lVar11,uVar4,uVar5,lVar11,uVar4,uVar5,
                      *(long *)(param_2 + 0x18) +
                      (long)*(int *)(*(long *)(*(long *)(lVar10 + 0x18) +
                                               ((long)*piVar12 - (long)*(int *)(param_1 + 0x14)) *
                                               0x20 + 8) + 4) * 8,0,0,uVar5,uVar5);
        piVar12 = piVar13;
      } while (piVar13 != piVar2);
      lVar11 = plVar9[3];
      lVar7 = plVar9[4];
    }
  }
  return;
}



/* Entry: 109904104; end: 109904143;  */

undefined4 FUN_109904104(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



/* Entry: 109904144; end: 1099041e7;  */

long ** FUN_109904144(undefined4 *param_1,undefined4 *param_2,undefined8 param_3)

{
  long **pplVar1;
  long *plStack_28;
  
  FUN_1099ab908(&plStack_28,param_3);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi(plStack_28,*param_1);
  FUN_1092b4db8(plStack_28,&UNK_10f593767,5);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi(plStack_28,*param_2);
  pplVar1 = &plStack_28;
  FUN_1099ab984(pplVar1);
  if (plStack_28 != (long *)0x0) {
    (**(code **)(*plStack_28 + 8))();
  }
  return pplVar1;
}



/* Entry: 1099041e8; end: 109904223;  */

void FUN_1099041e8(undefined8 param_1,uint param_2,ulong param_3,long param_4,undefined8 param_5,
                  uint param_6,long param_7,int param_8)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  double *pdVar4;
  long lVar5;
  int iVar6;
  double *pdVar7;
  double *pdVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  int iVar14;
  ulong uVar15;
  double *pdVar16;
  uint uVar17;
  double *pdVar18;
  long lVar19;
  ulong uVar20;
  double *pdVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  int iStack_30;
  undefined1 *puStack_20;
  undefined8 uStack_18;
  
  func_0x000104c4f6cc(&DAT_10f62a4d8);
  uStack_18 = 0x1099041fc;
  puStack_20 = &stack0xfffffffffffffff0;
  func_0x000104c4f6cc(&DAT_10f62a4d8);
  pdVar7 = (double *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  iStack_30 = (int)&puStack_20;
  iVar14 = (int)param_3;
  if ((param_6 & 1) != 0) {
    if (0 < iVar14) {
      uVar15 = 0;
      pdVar16 = pdVar7;
      do {
        dVar22 = 0.0;
        pdVar8 = pdVar16;
        pdVar18 = (double *)(param_4 + (long)(int)(param_6 - 1) * 8);
        uVar17 = param_2;
        if (0 < (int)param_2) {
          do {
            dVar22 = dVar22 + *pdVar18 * *pdVar8;
            uVar17 = uVar17 - 1;
            pdVar8 = pdVar8 + (param_3 & 0xffffffff);
            pdVar18 = (double *)
                      ((long)pdVar18 +
                      (-(ulong)(param_6 >> 0x1f) & 0xfffffff800000000 | (ulong)param_6 << 3));
          } while (uVar17 != 0);
        }
        iVar6 = iStack_30 + (param_6 - 1) + (param_8 + (int)uVar15) * 0x9904210;
        *(double *)(param_7 + (long)iVar6 * 8) = dVar22 + *(double *)(param_7 + (long)iVar6 * 8);
        uVar15 = uVar15 + 1;
        pdVar16 = pdVar16 + 1;
      } while (uVar15 != (param_3 & 0xffffffff));
    }
    if (param_6 == 1) {
      return;
    }
  }
  if (((param_6 >> 1 & 1) != 0) && (0 < iVar14)) {
    uVar15 = 0;
    pdVar16 = pdVar7;
    do {
      dVar22 = 0.0;
      dVar23 = 0.0;
      pdVar8 = pdVar16;
      pdVar18 = (double *)(param_4 + (long)(int)(param_6 & 0xfffffffc) * 8);
      uVar17 = param_2;
      if (0 < (int)param_2) {
        do {
          dVar22 = dVar22 + *pdVar18 * *pdVar8;
          dVar23 = dVar23 + pdVar18[1] * *pdVar8;
          uVar17 = uVar17 - 1;
          pdVar8 = pdVar8 + (param_3 & 0xffffffff);
          pdVar18 = (double *)
                    ((long)pdVar18 +
                    (-(ulong)(param_6 >> 0x1f) & 0xfffffff800000000 | (ulong)param_6 << 3));
        } while (uVar17 != 0);
      }
      uVar17 = iStack_30 + (param_6 & 0xfffffffc) + (param_8 + (int)uVar15) * 0x9904210;
      uVar20 = -(ulong)(uVar17 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar17 << 3;
      pdVar8 = (double *)(param_7 + uVar20);
      dVar24 = *pdVar8;
      pdVar18 = (double *)(param_7 + uVar20);
      pdVar18[1] = dVar23 + pdVar8[1];
      *pdVar18 = dVar22 + dVar24;
      uVar15 = uVar15 + 1;
      pdVar16 = pdVar16 + 1;
    } while (uVar15 != (param_3 & 0xffffffff));
  }
  if (3 < (int)param_6) {
    uVar15 = 0;
    uVar17 = param_2 & 0xfffffffc;
    lVar19 = param_4;
    do {
      if (0 < iVar14) {
        uVar20 = 0;
        lVar5 = param_4 + uVar15 * 8;
        pdVar21 = pdVar7;
        pdVar18 = pdVar7 + (param_3 & 0xffffffff);
        pdVar8 = pdVar7 + (uint)(iVar14 << 1);
        pdVar16 = pdVar7 + (uint)(iVar14 * 3);
        do {
          if ((int)param_2 < 4) {
            uVar13 = 0;
            lVar11 = 0;
            dVar22 = 0.0;
            dVar23 = 0.0;
            dVar24 = 0.0;
            dVar25 = 0.0;
          }
          else {
            uVar13 = 0;
            iVar6 = 0;
            iVar10 = 0;
            dVar22 = 0.0;
            dVar23 = 0.0;
            dVar24 = 0.0;
            dVar25 = 0.0;
            do {
              dVar26 = pdVar21[uVar13];
              pdVar1 = (double *)(lVar5 + (long)iVar10 * 8);
              dVar28 = pdVar18[uVar13];
              pdVar2 = (double *)(lVar5 + (long)(int)(param_6 + iVar10) * 8);
              dVar29 = pdVar8[uVar13];
              pdVar3 = (double *)(lVar5 + (long)(int)(param_6 * 2 + iVar10) * 8);
              dVar27 = pdVar16[uVar13];
              pdVar4 = (double *)(lVar5 + (long)(int)(param_6 * 3 + iVar10) * 8);
              dVar22 = dVar22 + *pdVar1 * dVar26 + *pdVar2 * dVar28 + *pdVar3 * dVar29 +
                       *pdVar4 * dVar27;
              dVar23 = dVar23 + pdVar1[1] * dVar26 + pdVar2[1] * dVar28 + pdVar3[1] * dVar29 +
                       pdVar4[1] * dVar27;
              dVar24 = dVar24 + pdVar1[2] * dVar26 + pdVar2[2] * dVar28 + pdVar3[2] * dVar29 +
                       pdVar4[2] * dVar27;
              dVar25 = dVar25 + pdVar1[3] * dVar26 + pdVar2[3] * dVar28 + pdVar3[3] * dVar29 +
                       pdVar4[3] * dVar27;
              uVar13 = uVar13 + (uint)(iVar14 << 2);
              iVar10 = iVar10 + param_6 * 4;
              iVar6 = iVar6 + 4;
            } while (iVar6 < (int)uVar17);
            lVar11 = (long)iVar10;
            uVar13 = uVar13 & 0xfffffffc;
          }
          if (uVar17 != param_2) {
            lVar9 = uVar13 << 3;
            lVar11 = lVar11 << 3;
            uVar12 = uVar17;
            do {
              dVar26 = *(double *)((long)pdVar21 + lVar9);
              pdVar1 = (double *)(lVar19 + lVar11);
              dVar22 = dVar22 + *pdVar1 * dVar26;
              dVar23 = dVar23 + pdVar1[1] * dVar26;
              dVar24 = dVar24 + pdVar1[2] * dVar26;
              dVar25 = dVar25 + pdVar1[3] * dVar26;
              uVar12 = uVar12 + 1;
              lVar9 = lVar9 + (-(param_3 >> 0x1f & 1) & 0xfffffff800000000 |
                              (param_3 & 0xffffffff) << 3);
              lVar11 = lVar11 + (ulong)param_6 * 8;
            } while ((int)uVar12 < (int)param_2);
          }
          pdVar1 = (double *)
                   (param_7 +
                   (long)(iStack_30 + (int)uVar15 + (param_8 + (int)uVar20) * 0x9904210) * 8);
          uVar20 = uVar20 + 1;
          pdVar16 = pdVar16 + 1;
          pdVar1[1] = dVar23 + pdVar1[1];
          *pdVar1 = dVar22 + *pdVar1;
          pdVar1[3] = dVar25 + pdVar1[3];
          pdVar1[2] = dVar24 + pdVar1[2];
          pdVar8 = pdVar8 + 1;
          pdVar18 = pdVar18 + 1;
          pdVar21 = pdVar21 + 1;
        } while (uVar20 != (param_3 & 0xffffffff));
      }
      uVar15 = uVar15 + 4;
      lVar19 = lVar19 + 0x20;
    } while (uVar15 < (param_6 & 0xfffffffc));
  }
  return;
}



/* Entry: 109904224; end: 109904553;  */

void FUN_109904224(double *param_1,uint param_2,ulong param_3,long param_4,undefined8 param_5,
                  uint param_6,long param_7,int param_8,int param_9,undefined4 param_10,int param_11
                  )

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  double *pdVar4;
  long lVar5;
  int iVar6;
  double *pdVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  int iVar13;
  ulong uVar14;
  double *pdVar15;
  uint uVar16;
  double *pdVar17;
  long lVar18;
  ulong uVar19;
  double *pdVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  
  iVar13 = (int)param_3;
  if ((param_6 & 1) != 0) {
    if (0 < iVar13) {
      uVar14 = 0;
      pdVar15 = param_1;
      do {
        dVar21 = 0.0;
        pdVar7 = pdVar15;
        pdVar17 = (double *)(param_4 + (long)(int)(param_6 - 1) * 8);
        uVar16 = param_2;
        if (0 < (int)param_2) {
          do {
            dVar21 = dVar21 + *pdVar17 * *pdVar7;
            uVar16 = uVar16 - 1;
            pdVar7 = pdVar7 + (param_3 & 0xffffffff);
            pdVar17 = (double *)
                      ((long)pdVar17 +
                      (-(ulong)(param_6 >> 0x1f) & 0xfffffff800000000 | (ulong)param_6 << 3));
          } while (uVar16 != 0);
        }
        iVar6 = param_9 + (param_6 - 1) + (param_8 + (int)uVar14) * param_11;
        *(double *)(param_7 + (long)iVar6 * 8) = dVar21 + *(double *)(param_7 + (long)iVar6 * 8);
        uVar14 = uVar14 + 1;
        pdVar15 = pdVar15 + 1;
      } while (uVar14 != (param_3 & 0xffffffff));
    }
    if (param_6 == 1) {
      return;
    }
  }
  if (((param_6 >> 1 & 1) != 0) && (0 < iVar13)) {
    uVar14 = 0;
    pdVar15 = param_1;
    do {
      dVar21 = 0.0;
      dVar22 = 0.0;
      pdVar7 = pdVar15;
      pdVar17 = (double *)(param_4 + (long)(int)(param_6 & 0xfffffffc) * 8);
      uVar16 = param_2;
      if (0 < (int)param_2) {
        do {
          dVar21 = dVar21 + *pdVar17 * *pdVar7;
          dVar22 = dVar22 + pdVar17[1] * *pdVar7;
          uVar16 = uVar16 - 1;
          pdVar7 = pdVar7 + (param_3 & 0xffffffff);
          pdVar17 = (double *)
                    ((long)pdVar17 +
                    (-(ulong)(param_6 >> 0x1f) & 0xfffffff800000000 | (ulong)param_6 << 3));
        } while (uVar16 != 0);
      }
      uVar16 = param_9 + (param_6 & 0xfffffffc) + (param_8 + (int)uVar14) * param_11;
      uVar19 = -(ulong)(uVar16 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar16 << 3;
      pdVar7 = (double *)(param_7 + uVar19);
      dVar23 = *pdVar7;
      pdVar17 = (double *)(param_7 + uVar19);
      pdVar17[1] = dVar22 + pdVar7[1];
      *pdVar17 = dVar21 + dVar23;
      uVar14 = uVar14 + 1;
      pdVar15 = pdVar15 + 1;
    } while (uVar14 != (param_3 & 0xffffffff));
  }
  if (3 < (int)param_6) {
    uVar14 = 0;
    uVar16 = param_2 & 0xfffffffc;
    lVar18 = param_4;
    do {
      if (0 < iVar13) {
        uVar19 = 0;
        lVar5 = param_4 + uVar14 * 8;
        pdVar20 = param_1;
        pdVar17 = param_1 + (param_3 & 0xffffffff);
        pdVar7 = param_1 + (uint)(iVar13 << 1);
        pdVar15 = param_1 + (uint)(iVar13 * 3);
        do {
          if ((int)param_2 < 4) {
            uVar12 = 0;
            lVar10 = 0;
            dVar21 = 0.0;
            dVar22 = 0.0;
            dVar23 = 0.0;
            dVar24 = 0.0;
          }
          else {
            uVar12 = 0;
            iVar6 = 0;
            iVar9 = 0;
            dVar21 = 0.0;
            dVar22 = 0.0;
            dVar23 = 0.0;
            dVar24 = 0.0;
            do {
              dVar25 = pdVar20[uVar12];
              pdVar1 = (double *)(lVar5 + (long)iVar9 * 8);
              dVar27 = pdVar17[uVar12];
              pdVar2 = (double *)(lVar5 + (long)(int)(param_6 + iVar9) * 8);
              dVar28 = pdVar7[uVar12];
              pdVar3 = (double *)(lVar5 + (long)(int)(param_6 * 2 + iVar9) * 8);
              dVar26 = pdVar15[uVar12];
              pdVar4 = (double *)(lVar5 + (long)(int)(param_6 * 3 + iVar9) * 8);
              dVar21 = dVar21 + *pdVar1 * dVar25 + *pdVar2 * dVar27 + *pdVar3 * dVar28 +
                       *pdVar4 * dVar26;
              dVar22 = dVar22 + pdVar1[1] * dVar25 + pdVar2[1] * dVar27 + pdVar3[1] * dVar28 +
                       pdVar4[1] * dVar26;
              dVar23 = dVar23 + pdVar1[2] * dVar25 + pdVar2[2] * dVar27 + pdVar3[2] * dVar28 +
                       pdVar4[2] * dVar26;
              dVar24 = dVar24 + pdVar1[3] * dVar25 + pdVar2[3] * dVar27 + pdVar3[3] * dVar28 +
                       pdVar4[3] * dVar26;
              uVar12 = uVar12 + (uint)(iVar13 << 2);
              iVar9 = iVar9 + param_6 * 4;
              iVar6 = iVar6 + 4;
            } while (iVar6 < (int)uVar16);
            lVar10 = (long)iVar9;
            uVar12 = uVar12 & 0xfffffffc;
          }
          if (uVar16 != param_2) {
            lVar8 = uVar12 << 3;
            lVar10 = lVar10 << 3;
            uVar11 = uVar16;
            do {
              dVar25 = *(double *)((long)pdVar20 + lVar8);
              pdVar1 = (double *)(lVar18 + lVar10);
              dVar21 = dVar21 + *pdVar1 * dVar25;
              dVar22 = dVar22 + pdVar1[1] * dVar25;
              dVar23 = dVar23 + pdVar1[2] * dVar25;
              dVar24 = dVar24 + pdVar1[3] * dVar25;
              uVar11 = uVar11 + 1;
              lVar8 = lVar8 + (-(param_3 >> 0x1f & 1) & 0xfffffff800000000 |
                              (param_3 & 0xffffffff) << 3);
              lVar10 = lVar10 + (ulong)param_6 * 8;
            } while ((int)uVar11 < (int)param_2);
          }
          pdVar1 = (double *)
                   (param_7 + (long)(param_9 + (int)uVar14 + (param_8 + (int)uVar19) * param_11) * 8
                   );
          uVar19 = uVar19 + 1;
          pdVar15 = pdVar15 + 1;
          pdVar1[1] = dVar22 + pdVar1[1];
          *pdVar1 = dVar21 + *pdVar1;
          pdVar1[3] = dVar24 + pdVar1[3];
          pdVar1[2] = dVar23 + pdVar1[2];
          pdVar7 = pdVar7 + 1;
          pdVar17 = pdVar17 + 1;
          pdVar20 = pdVar20 + 1;
        } while (uVar19 != (param_3 & 0xffffffff));
      }
      uVar14 = uVar14 + 4;
      lVar18 = lVar18 + 0x20;
    } while (uVar14 < (param_6 & 0xfffffffc));
  }
  return;
}



/* Entry: 109904554; end: 10990475b;  */

long * FUN_109904554(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar3 = lVar2;
    lVar1 = param_1[1];
    if (param_1[1] != lVar2) {
      do {
        lVar3 = lVar1 + -0x20;
        FUN_109638924(lVar1 + -0x18,*(undefined8 *)(lVar1 + -0x10));
        lVar1 = lVar3;
      } while (lVar3 != lVar2);
      lVar3 = *param_1;
    }
    param_1[1] = lVar2;
    __ZdlPv(lVar3);
  }
  return param_1;
}



/* Entry: 10990475c; end: 109905073;  */

/* WARNING: Removing unreachable block (ram,0x000109904970) */

void FUN_10990475c(long param_1,int param_2,undefined1 param_3,long *param_4)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  int *piVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  int iVar15;
  long *plVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  long *plVar19;
  long *plVar20;
  undefined8 *puVar21;
  long lVar22;
  long lVar23;
  uint uVar24;
  long lVar25;
  int iVar26;
  ulong uVar27;
  undefined8 *puVar28;
  ulong uStack_110;
  int iStack_d0;
  uint uStack_cc;
  undefined8 *puStack_c8;
  undefined8 auStack_c0 [10];
  int *apiStack_70 [2];
  
  apiStack_70[0] = (int *)((ulong)apiStack_70[0] & 0xffffffff00000000);
  iStack_d0 = param_2;
  if (param_2 < 1) {
    piVar11 = &iStack_d0;
    FUN_109904144(piVar11,apiStack_70,&UNK_10f589b91);
    apiStack_70[0] = piVar11;
    if (piVar11 != (int *)0x0) {
      FUN_1099aa6cc(&iStack_d0,&UNK_10f589baa,0x55,apiStack_70);
      FUN_1092b4db8(puStack_c8 + 0xea8,&UNK_10f589c37,0x31);
      FUN_109365950();
      goto LAB_109904e04;
    }
  }
  *(int *)(param_1 + 0x18) = param_2;
  *(undefined1 *)(param_1 + 0x1c) = param_3;
  uStack_110 = (ulong)(param_4[1] - *param_4) >> 3;
  lVar25 = param_4[3];
  lVar13 = param_4[4];
  *(undefined4 *)(param_1 + 0x60) = 1;
  lVar23 = *(long *)(param_1 + 0x38);
  lVar4 = *(long *)(param_1 + 0x40);
  if (*(long *)(param_1 + 0x40) != lVar23) {
    do {
      lVar22 = lVar4 + -0x20;
      FUN_109638924(lVar4 + -0x18,*(undefined8 *)(lVar4 + -0x10));
      lVar4 = lVar22;
    } while (lVar22 != lVar23);
    param_2 = *(int *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x40) = lVar23;
  lVar23 = *(long *)(param_1 + 0x20);
  *(long *)(param_1 + 0x28) = lVar23;
  iVar6 = (int)uStack_110;
  param_2 = iVar6 - param_2;
  if (param_2 != 0) {
    uVar27 = (ulong)param_2;
    uVar9 = *(long *)(param_1 + 0x30) - lVar23;
    if ((ulong)((long)uVar9 >> 2) < uVar27) {
      if (param_2 < 0) goto LAB_109905044;
      uVar10 = (long)uVar9 >> 1;
      if ((ulong)((long)uVar9 >> 1) <= uVar27) {
        uVar10 = uVar27;
      }
      if (0x7ffffffffffffffb < uVar9) {
        uVar10 = 0x3fffffffffffffff;
      }
      if (uVar10 >> 0x3e != 0) goto LAB_10990503c;
      lVar4 = uVar10 << 2;
      __Znwm();
      _bzero();
      *(long *)(param_1 + 0x20) = lVar4;
      *(ulong *)(param_1 + 0x28) = lVar4 + uVar27 * 4;
      *(ulong *)(param_1 + 0x30) = lVar4 + uVar10 * 4;
      if (lVar23 != 0) {
        __ZdlPv(lVar23);
      }
    }
    else {
      _bzero(lVar23,uVar27 << 2);
      *(ulong *)(param_1 + 0x28) = lVar23 + uVar27 * 4;
    }
  }
  lVar23 = (long)*(int *)(param_1 + 0x18);
  if (*(int *)(param_1 + 0x18) < iVar6) {
    iVar7 = 0;
    lVar22 = lVar23 - iVar6;
    lVar4 = *(long *)(param_1 + 0x20) + lVar23 * 4;
    piVar11 = (int *)(*param_4 + lVar23 * 8);
    do {
      *(int *)(lVar4 + (long)*(int *)(param_1 + 0x18) * -4) = iVar7;
      iVar7 = *piVar11 + iVar7;
      lVar4 = lVar4 + 4;
      bVar3 = lVar22 != -1;
      lVar22 = lVar22 + 1;
      piVar11 = piVar11 + 2;
    } while (bVar3);
  }
  iVar6 = (int)((ulong)(lVar13 - lVar25) >> 5);
  if (0 < iVar6) {
    uVar24 = 0;
    do {
      iVar7 = **(int **)(param_4[3] + (long)(int)uVar24 * 0x20 + 8);
      if (*(int *)(param_1 + 0x18) <= iVar7) break;
      iStack_d0 = 0;
      auStack_c0[0] = 0;
      plVar5 = *(long **)(param_1 + 0x40);
      uStack_cc = uVar24;
      puStack_c8 = auStack_c0;
      if (plVar5 < *(long **)(param_1 + 0x48)) {
        *plVar5 = (ulong)uVar24 << 0x20;
        plVar5[1] = (long)auStack_c0;
        plVar5[2] = 0;
        plVar5[3] = 0;
        plVar5[1] = (long)(plVar5 + 2);
        auStack_c0[0] = 0;
        plVar5 = plVar5 + 4;
      }
      else {
        plVar16 = *(long **)(param_1 + 0x38);
        uVar9 = ((long)plVar5 - (long)plVar16 >> 5) + 1;
        if (uVar9 >> 0x3b != 0) {
          func_0x000109905908();
LAB_109905038:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10990503c);
          (*pcVar2)();
        }
        uVar10 = (long)*(long **)(param_1 + 0x48) - (long)plVar16;
        uVar27 = (long)uVar10 >> 4;
        if (uVar27 <= uVar9) {
          uVar27 = uVar9;
        }
        if (0x7fffffffffffffdf < uVar10) {
          uVar27 = 0x7ffffffffffffff;
        }
        if (uVar27 >> 0x3b != 0) {
          func_0x000104c4f740();
          goto LAB_109905038;
        }
        lVar25 = uVar27 << 5;
        __Znwm();
        puVar21 = (undefined8 *)(lVar25 + ((long)plVar5 - (long)plVar16));
        puVar21[3] = 0;
        puVar21[2] = 0;
        *puVar21 = CONCAT44(uStack_cc,iStack_d0);
        puVar21[1] = puVar21 + 2;
        if (plVar16 != plVar5) {
          lVar23 = 0;
          do {
            puVar17 = (undefined8 *)(lVar25 + lVar23);
            puVar18 = (undefined8 *)((long)plVar16 + lVar23);
            *puVar17 = *puVar18;
            puVar17[1] = puVar18[1];
            plVar14 = puVar18 + 2;
            lVar13 = *plVar14;
            plVar12 = puVar17 + 2;
            *plVar12 = lVar13;
            lVar4 = puVar18[3];
            puVar17[3] = lVar4;
            if (lVar4 == 0) {
              puVar17[1] = plVar12;
            }
            else {
              *(long **)(lVar13 + 0x10) = plVar12;
              puVar18[1] = plVar14;
              *plVar14 = 0;
              puVar18[3] = 0;
            }
            lVar23 = lVar23 + 0x20;
          } while ((long *)((long)plVar16 + lVar23) != plVar5);
          plVar16 = plVar16 + 1;
          do {
            FUN_109638924(plVar16,plVar16[1]);
            plVar14 = plVar16 + 3;
            plVar16 = plVar16 + 4;
          } while (plVar14 != plVar5);
          plVar16 = *(long **)(param_1 + 0x38);
        }
        plVar5 = puVar21 + 4;
        *(long *)(param_1 + 0x38) = lVar25;
        *(long **)(param_1 + 0x40) = plVar5;
        *(ulong *)(param_1 + 0x48) = lVar25 + uVar27 * 0x20;
        if (plVar16 != (long *)0x0) {
          __ZdlPv(plVar16);
        }
      }
      *(long **)(param_1 + 0x40) = plVar5;
      FUN_109638924(&puStack_c8,auStack_c0[0]);
      lVar25 = *(long *)(param_1 + 0x40);
      iVar15 = *(int *)(lVar25 + -0x20);
      iVar8 = iVar15 + uVar24;
      if (iVar8 < iVar6) {
        iVar26 = 0;
        iVar1 = *(int *)(*param_4 + (long)iVar7 * 8);
        puVar21 = (undefined8 *)(lVar25 + -0x10);
        do {
          lVar23 = param_4[3] + (long)iVar8 * 0x20;
          piVar11 = *(int **)(lVar23 + 8);
          if (*piVar11 != iVar7) break;
          lVar13 = *(long *)(lVar23 + 0x10);
          if (8 < (ulong)(lVar13 - (long)piVar11)) {
            uVar9 = 1;
            do {
              iVar15 = piVar11[uVar9 * 2];
              puVar18 = (undefined8 *)*puVar21;
              puVar17 = puVar21;
              while (puVar28 = puVar17, puVar18 != (undefined8 *)0x0) {
                while (puVar28 = puVar18, *(int *)((long)puVar28 + 0x1c) <= iVar15) {
                  if (iVar15 <= *(int *)((long)puVar28 + 0x1c)) goto LAB_109904d64;
                  puVar18 = (undefined8 *)puVar28[1];
                  if ((undefined8 *)puVar28[1] == (undefined8 *)0x0) {
                    puVar17 = puVar28 + 1;
                    goto LAB_109904b6c;
                  }
                }
                puVar17 = puVar28;
                puVar18 = (undefined8 *)*puVar28;
              }
LAB_109904b6c:
              plVar5 = (long *)0x28;
              __Znwm();
              *(ulong *)((long)plVar5 + 0x1c) = CONCAT44(iVar26,iVar15);
              *plVar5 = 0;
              plVar5[1] = 0;
              plVar5[2] = (long)puVar28;
              *puVar17 = plVar5;
              if (**(long **)(lVar25 + -0x18) != 0) {
                *(long *)(lVar25 + -0x18) = **(long **)(lVar25 + -0x18);
                plVar5 = (long *)*puVar17;
              }
              plVar16 = (long *)*puVar21;
              bVar3 = plVar5 == plVar16;
              *(bool *)(plVar5 + 3) = bVar3;
joined_r0x000109904bac:
              if ((bVar3) || (plVar14 = (long *)plVar5[2], (*(byte *)(plVar14 + 3) & 1) != 0))
              goto LAB_109904d38;
              plVar12 = (long *)plVar14[2];
              plVar19 = (long *)*plVar12;
              if (plVar19 == plVar14) {
                if ((plVar12[1] == 0) ||
                   (plVar20 = (long *)(plVar12[1] + 0x18), *(char *)plVar20 == '\x01')) {
                  plVar16 = plVar14;
                  if ((long *)*plVar14 != plVar5) {
                    plVar16 = (long *)plVar14[1];
                    lVar13 = *plVar16;
                    plVar14[1] = lVar13;
                    plVar5 = plVar14;
                    if (lVar13 != 0) {
                      *(long **)(lVar13 + 0x10) = plVar14;
                      plVar12 = (long *)plVar14[2];
                      plVar5 = (long *)*plVar12;
                    }
                    plVar16[2] = (long)plVar12;
                    lVar13 = 0;
                    if (plVar5 != plVar14) {
                      lVar13 = 8;
                    }
                    *(long **)((long)plVar12 + lVar13) = plVar16;
                    *plVar16 = (long)plVar14;
                    plVar14[2] = (long)plVar16;
                    plVar12 = (long *)plVar16[2];
                    plVar19 = (long *)*plVar12;
                  }
                  *(undefined1 *)(plVar16 + 3) = 1;
                  *(undefined1 *)(plVar12 + 3) = 0;
                  lVar13 = plVar19[1];
                  *plVar12 = lVar13;
                  if (lVar13 != 0) {
                    *(long **)(lVar13 + 0x10) = plVar12;
                  }
                  puVar17 = (undefined8 *)plVar12[2];
                  plVar19[2] = (long)puVar17;
                  lVar13 = 0;
                  if ((long *)*puVar17 != plVar12) {
                    lVar13 = 8;
                  }
                  *(long **)((long)puVar17 + lVar13) = plVar19;
                  plVar19[1] = (long)plVar12;
                  plVar12[2] = (long)plVar19;
                  goto LAB_109904d38;
                }
LAB_109904bf8:
                *(undefined1 *)(plVar14 + 3) = 1;
                bVar3 = plVar12 == plVar16;
                *(bool *)(plVar12 + 3) = bVar3;
                *(char *)plVar20 = '\x01';
                plVar5 = plVar12;
                goto joined_r0x000109904bac;
              }
              if ((plVar19 != (long *)0x0) && (plVar20 = plVar19 + 3, (char)*plVar20 != '\x01'))
              goto LAB_109904bf8;
              plVar16 = (long *)*plVar14;
              if (plVar16 == plVar5) {
                lVar13 = plVar16[1];
                *plVar14 = lVar13;
                if (lVar13 != 0) {
                  *(long **)(lVar13 + 0x10) = plVar14;
                  plVar12 = (long *)plVar14[2];
                }
                plVar16[2] = (long)plVar12;
                lVar13 = 0;
                if ((long *)*plVar12 != plVar14) {
                  lVar13 = 8;
                }
                *(long **)((long)plVar12 + lVar13) = plVar16;
                plVar16[1] = (long)plVar14;
                plVar14[2] = (long)plVar16;
                plVar12 = (long *)plVar16[2];
                plVar14 = plVar16;
              }
              *(undefined1 *)(plVar14 + 3) = 1;
              *(undefined1 *)(plVar12 + 3) = 0;
              plVar5 = (long *)plVar12[1];
              lVar13 = *plVar5;
              plVar12[1] = lVar13;
              if (lVar13 != 0) {
                *(long **)(lVar13 + 0x10) = plVar12;
              }
              puVar17 = (undefined8 *)plVar12[2];
              plVar5[2] = (long)puVar17;
              lVar13 = 0;
              if ((long *)*puVar17 != plVar12) {
                lVar13 = 8;
              }
              *(long **)((long)puVar17 + lVar13) = plVar5;
              *plVar5 = (long)plVar12;
              plVar12[2] = (long)plVar5;
LAB_109904d38:
              *(long *)(lVar25 + -8) = *(long *)(lVar25 + -8) + 1;
              iVar26 = iVar26 + *(int *)(*param_4 + (long)piVar11[uVar9 * 2] * 8) * iVar1;
              piVar11 = *(int **)(lVar23 + 8);
              lVar13 = *(long *)(lVar23 + 0x10);
LAB_109904d64:
              uVar9 = uVar9 + 1;
            } while (uVar9 < (ulong)(lVar13 - (long)piVar11 >> 3));
            iVar15 = *(int *)(lVar25 + -0x20);
          }
          iVar8 = iVar26;
          if (iVar26 <= *(int *)(param_1 + 0x60)) {
            iVar8 = *(int *)(param_1 + 0x60);
          }
          *(int *)(param_1 + 0x60) = iVar8;
          iVar15 = iVar15 + 1;
          *(int *)(lVar25 + -0x20) = iVar15;
          iVar8 = iVar15 + uVar24;
        } while (iVar8 < iVar6);
      }
      apiStack_70[0] = (int *)((ulong)apiStack_70[0] & 0xffffffff00000000);
      iStack_d0 = iVar15;
      if (iVar15 < 1) {
        piVar11 = &iStack_d0;
        FUN_109904144(piVar11,apiStack_70,&UNK_10f589c83);
        apiStack_70[0] = piVar11;
        if (piVar11 != (int *)0x0) {
          FUN_1099ab8e4(&iStack_d0,&UNK_10f589baa,0x9b,apiStack_70);
          goto LAB_109904e04;
        }
      }
      uVar24 = *(int *)(lVar25 + -0x20) + uVar24;
    } while ((int)uVar24 < iVar6);
  }
  do {
    *(int *)(param_1 + 100) =
         *(int *)(*(long *)(param_1 + 0x40) + -0x20) + *(int *)(*(long *)(param_1 + 0x40) + -0x1c);
    uVar24 = *(int *)(param_1 + 8) * *(int *)(param_1 + 0x60);
    uVar27 = -(ulong)(uVar24 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar24 << 3;
    uVar9 = uVar27;
    if ((int)uVar24 < 0) {
      uVar9 = 0xffffffffffffffff;
    }
    __Znam();
    _bzero();
    lVar25 = *(long *)(param_1 + 0x50);
    *(ulong *)(param_1 + 0x50) = uVar9;
    if (lVar25 != 0) {
      __ZdaPv();
      uVar24 = *(int *)(param_1 + 8) * *(int *)(param_1 + 0x60);
      uVar27 = -(ulong)(uVar24 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar24 << 3;
    }
    if ((int)uVar24 < 0) {
      uVar27 = 0xffffffffffffffff;
    }
    __Znam();
    _bzero();
    lVar25 = *(long *)(param_1 + 0x58);
    *(ulong *)(param_1 + 0x58) = uVar27;
    if (lVar25 != 0) {
      __ZdaPv();
    }
    plVar5 = *(long **)(param_1 + 0x68);
    plVar16 = *(long **)(param_1 + 0x70);
    if (plVar5 != plVar16) {
      do {
        plVar14 = plVar5 + 1;
        if (*plVar5 != 0) {
          __ZNSt3__15mutexD1Ev();
          __ZdlPv();
        }
        plVar5 = plVar14;
      } while (plVar14 != plVar16);
      plVar5 = *(long **)(param_1 + 0x68);
    }
    *(long **)(param_1 + 0x70) = plVar5;
    uVar9 = (long)(int)uStack_110 - (long)*(int *)(param_1 + 0x18);
    if ((int)uVar9 == 0) {
      return;
    }
    uVar27 = *(long *)(param_1 + 0x78) - (long)plVar5;
    if (uVar9 <= (ulong)((long)uVar27 >> 3)) {
      _bzero(plVar5,uVar9 * 8);
      *(long **)(param_1 + 0x70) = plVar5 + uVar9;
LAB_109904f60:
      if (0 < (int)uVar9) {
LAB_109904f68:
        uVar27 = 0;
        do {
          puVar21 = (undefined8 *)0x40;
          __Znwm();
          *puVar21 = 0x32aaaba7;
          puVar21[2] = 0;
          puVar21[1] = 0;
          puVar21[4] = 0;
          puVar21[3] = 0;
          puVar21[6] = 0;
          puVar21[5] = 0;
          puVar21[7] = 0;
          *(undefined8 **)(*(long *)(param_1 + 0x68) + uVar27 * 8) = puVar21;
          uVar27 = uVar27 + 1;
        } while ((uVar9 & 0xffffffff) != uVar27);
      }
      return;
    }
    if (-1 < (int)uVar9) {
      uVar10 = (long)uVar27 >> 2;
      if ((ulong)((long)uVar27 >> 2) <= uVar9) {
        uVar10 = uVar9;
      }
      if (0x7ffffffffffffff7 < uVar27) {
        uVar10 = 0x1fffffffffffffff;
      }
      if (uVar10 >> 0x3d == 0) {
        lVar25 = uVar10 << 3;
        __Znwm();
        _bzero();
        *(long *)(param_1 + 0x68) = lVar25;
        *(ulong *)(param_1 + 0x70) = lVar25 + uVar9 * 8;
        *(ulong *)(param_1 + 0x78) = lVar25 + uVar10 * 8;
        if (plVar5 == (long *)0x0) goto LAB_109904f68;
        __ZdlPv(plVar5);
        uVar9 = (ulong)(uint)((int)uStack_110 - *(int *)(param_1 + 0x18));
        goto LAB_109904f60;
      }
LAB_10990503c:
      func_0x000104c4f740();
    }
    func_0x00010990591c();
LAB_109905044:
    FUN_10923f788();
LAB_109904e04:
    func_0x0001099ab7c0(&iStack_d0);
  } while( true );
}


