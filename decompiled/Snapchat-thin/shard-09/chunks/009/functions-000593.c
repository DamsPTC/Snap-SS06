/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1072c17c0; end: 1072c1827;  */

void FUN_1072c17c0(void)

{
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001072cefd8();
  for (; unaff_x20 != unaff_x21; unaff_x20 = unaff_x20 + 0x20) {
    func_0x0001072cee80();
    func_0x0001072c17f4();
  }
  return;
}



/* Entry: 1072c1828; end: 1072c184f;  */

void FUN_1072c1828(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001072cefd8(param_2,*param_1);
  for (; unaff_x20 != unaff_x21; unaff_x20 = unaff_x20 + 0x18) {
    func_0x0001072cef80();
    func_0x0001072c16e0();
  }
  return;
}



/* Entry: 1072c1850; end: 1072c1883;  */

void FUN_1072c1850(void)

{
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001072cefd8();
  for (; unaff_x20 != unaff_x21; unaff_x20 = unaff_x20 + 0x18) {
    func_0x0001072cef80();
    func_0x0001072c16e0();
  }
  return;
}



/* Entry: 1072c1884; end: 1072c189f;  */

void FUN_1072c1884(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001072cefd8(param_2,*param_1);
  for (; unaff_x20 != unaff_x21; unaff_x20 = unaff_x20 + 0x30) {
    func_0x0001072cee80();
    FUN_1072c1764();
  }
  return;
}



/* Entry: 1072c18a0; end: 1072c18d3;  */

void FUN_1072c18a0(void)

{
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001072cefd8();
  for (; unaff_x20 != unaff_x21; unaff_x20 = unaff_x20 + 0x30) {
    func_0x0001072cee80();
    FUN_1072c1764();
  }
  return;
}



/* Entry: 1072c18d4; end: 1072c18d7;  */

void FUN_1072c18d4(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001072cefd8(param_2,*param_1);
  for (; unaff_x20 != unaff_x21; unaff_x20 = unaff_x20 + 0x18) {
    func_0x0001072cee80();
    FUN_1072c17c0();
  }
  return;
}



/* Entry: 1072c18d8; end: 1072c190b;  */

void FUN_1072c18d8(void)

{
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001072cefd8();
  for (; unaff_x20 != unaff_x21; unaff_x20 = unaff_x20 + 0x18) {
    func_0x0001072cee80();
    FUN_1072c17c0();
  }
  return;
}



/* Entry: 1072c190c; end: 1072c190f;  */

void FUN_1072c190c(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001072cefd8(param_2,*param_1);
  for (; unaff_x20 != unaff_x21; unaff_x20 = unaff_x20 + 0x38) {
    func_0x0001072cee80();
    FUN_1072c1944();
  }
  return;
}



/* Entry: 1072c1910; end: 1072c1943;  */

void FUN_1072c1910(void)

{
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001072cefd8();
  for (; unaff_x20 != unaff_x21; unaff_x20 = unaff_x20 + 0x38) {
    func_0x0001072cee80();
    FUN_1072c1944();
  }
  return;
}



/* Entry: 1072c1944; end: 1072c195f;  */

void FUN_1072c1944(void)

{
  func_0x0001072d0148();
  FUN_1072c1960();
  return;
}



/* Entry: 1072c1960; end: 1072c1a5f;  */

/* WARNING: Possible PIC construction at 0x0001072c1784: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001072c1870: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001072c18f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001072c1874) */
/* WARNING: Removing unreachable block (ram,0x0001072c1788) */
/* WARNING: Removing unreachable block (ram,0x0001072c18fc) */

void FUN_1072c1960(int *param_1,long *param_2)

{
  bool bVar1;
  long *plVar2;
  double *pdVar3;
  long lVar4;
  undefined8 unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  double dVar5;
  
  if (*param_1 == 7) {
    return;
  }
  if (*param_1 == 6) {
    pdVar3 = (double *)(param_1 + 2);
    plVar2 = (long *)*param_2;
  }
  else {
    if (*param_1 != 5) {
      if (*param_1 != 4) {
        if (*param_1 == 3) {
          plVar2 = (long *)(param_1 + 2);
          pdVar3 = (double *)*param_2;
          func_0x0001072cefd8();
          if (unaff_x20 == unaff_x21) {
            return;
          }
          func_0x0001072cef80();
          goto SUB_1072c16e0;
        }
        bVar1 = *param_1 == 2;
        if (bVar1) {
          func_0x0001072cefd8(param_1 + 2,*param_2);
          for (; unaff_x20 != unaff_x21; unaff_x20 = unaff_x20 + 0x30) {
            func_0x0001072cee80();
            FUN_1072c1764();
          }
          return;
        }
        func_0x0001072cf5e8(param_1,param_2);
        if (!bVar1) {
          func_0x0001072cefd8(param_2,*(undefined8 *)param_1);
          for (; unaff_x20 != unaff_x21; unaff_x20 = unaff_x20 + 0x38) {
            func_0x0001072cee80();
            FUN_1072c1944();
          }
          return;
        }
        unaff_x29 = &stack0xfffffffffffffff0;
        func_0x0001072cefd8(param_2,*(undefined8 *)param_1);
        if (unaff_x20 == unaff_x21) {
          return;
        }
        func_0x0001072cee80();
        unaff_x30 = 0x1072c18fc;
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
      }
      *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
      *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
      *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
      *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      func_0x0001072cefd8();
      for (; unaff_x20 != unaff_x21; unaff_x20 = unaff_x20 + 0x20) {
        func_0x0001072cee80();
        func_0x0001072c17f4();
      }
      return;
    }
    plVar2 = (long *)(param_1 + 2);
    pdVar3 = (double *)*param_2;
    func_0x0001072cefd8();
    if (unaff_x20 == unaff_x21) {
      return;
    }
    func_0x0001072cef80();
  }
SUB_1072c16e0:
  lVar4 = *plVar2;
  dVar5 = *(double *)(lVar4 + 0x88);
  if (*pdVar3 <= *(double *)(lVar4 + 0x88)) {
    dVar5 = *pdVar3;
  }
  *(double *)(lVar4 + 0x88) = dVar5;
  dVar5 = *(double *)(lVar4 + 0x90);
  if (pdVar3[1] <= *(double *)(lVar4 + 0x90)) {
    dVar5 = pdVar3[1];
  }
  *(double *)(lVar4 + 0x90) = dVar5;
  dVar5 = *(double *)(lVar4 + 0x98);
  if (*(double *)(lVar4 + 0x98) <= *pdVar3) {
    dVar5 = *pdVar3;
  }
  *(double *)(lVar4 + 0x98) = dVar5;
  dVar5 = *(double *)(lVar4 + 0xa0);
  if (*(double *)(lVar4 + 0xa0) <= pdVar3[1]) {
    dVar5 = pdVar3[1];
  }
  *(double *)(lVar4 + 0xa0) = dVar5;
  *(int *)(lVar4 + 0xa8) = *(int *)(lVar4 + 0xa8) + 1;
  return;
}



/* Entry: 1072c1a60; end: 1072c1ab3;  */

int * FUN_1072c1a60(undefined8 param_1,undefined8 param_2,undefined8 param_3,int *param_4,
                   ulong param_5)

{
  int *piVar1;
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  int extraout_w8_02;
  int extraout_w8_03;
  int extraout_w8_04;
  int *extraout_x8;
  undefined4 *extraout_x8_00;
  undefined4 *extraout_x8_01;
  ulong extraout_x9;
  int *extraout_x9_00;
  int *extraout_x10;
  undefined4 *unaff_x19;
  
  if (param_5 < 0x1745d1745d1745e) {
    func_0x0001072d0100();
    piVar1 = extraout_x10;
    if (0xba2e8ba2e8ba2d < extraout_x9) {
      piVar1 = extraout_x8;
    }
    return piVar1;
  }
  FUN_1072c03bc();
  if (*param_4 == 7) {
    *extraout_x8_00 = 7;
    return param_4;
  }
  func_0x0001072ceaec();
  if (extraout_w8 == 6) {
    piVar1 = extraout_x9_00;
    FUN_1072c1b14(extraout_x9_00,param_4 + 2);
    *unaff_x19 = 6;
    *(undefined8 *)(unaff_x19 + 2) = param_1;
    *(undefined8 *)(unaff_x19 + 4) = param_2;
    *(undefined8 *)(unaff_x19 + 6) = param_3;
    return piVar1;
  }
  func_0x0001072cf80c();
  func_0x0001072ceaec();
  if (extraout_w8_00 == 5) {
    func_0x0001072ceadc();
    FUN_1072c1c04();
    func_0x0001072ced6c();
    FUN_1072c20bc();
    func_0x0001072cebe0();
    return param_4;
  }
  func_0x0001072cf80c();
  func_0x0001072ceaec();
  if (extraout_w8_01 == 4) {
    func_0x0001072ceadc();
    FUN_1072c20dc();
    *unaff_x19 = 4;
    func_0x0001072ce25c();
    func_0x0001072c11e8();
  }
  else {
    func_0x0001072cf80c();
    func_0x0001072ceaec();
    if (extraout_w8_02 == 3) {
      func_0x0001072ceadc();
      FUN_1072c254c();
      *unaff_x19 = 3;
      func_0x0001072ce25c();
      func_0x0001072c0c9c();
    }
    else {
      func_0x0001072cf80c();
      func_0x0001072ceaec();
      if (extraout_w8_03 == 2) {
        func_0x0001072ceadc();
        FUN_1072c2620();
        *unaff_x19 = 2;
        func_0x0001072ce25c();
        FUN_1072c29e4();
      }
      else {
        func_0x0001072cf80c();
        func_0x0001072ceaec();
        if (extraout_w8_04 == 1) {
          func_0x0001072ceadc();
          FUN_1072c2a08();
          *unaff_x19 = 1;
          func_0x0001072ce25c();
          FUN_1072c2c7c();
        }
        else {
          func_0x0001072cf80c();
          func_0x0001072ceadc();
          FUN_1072c2ca0();
          *extraout_x8_01 = 0;
          func_0x0001072ce25c();
          FUN_1072c3068();
        }
      }
    }
  }
  return param_4;
}



/* Entry: 1072c1ab4; end: 1072c1ac7;  */

void FUN_1072c1ab4(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  int *param_5)

{
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  int extraout_w8_02;
  int extraout_w8_03;
  int extraout_w8_04;
  undefined4 *extraout_x8;
  undefined8 extraout_x9;
  undefined4 *unaff_x19;
  
  if (*param_5 == 7) {
    *param_1 = 7;
    return;
  }
  func_0x0001072ceaec();
  if (extraout_w8 == 6) {
    FUN_1072c1b14(extraout_x9,param_5 + 2);
    *unaff_x19 = 6;
    *(undefined8 *)(unaff_x19 + 2) = param_2;
    *(undefined8 *)(unaff_x19 + 4) = param_3;
    *(undefined8 *)(unaff_x19 + 6) = param_4;
    return;
  }
  func_0x0001072cf80c();
  func_0x0001072ceaec();
  if (extraout_w8_00 == 5) {
    func_0x0001072ceadc();
    FUN_1072c1c04();
    func_0x0001072ced6c();
    FUN_1072c20bc();
    func_0x0001072cebe0();
    return;
  }
  func_0x0001072cf80c();
  func_0x0001072ceaec();
  if (extraout_w8_01 == 4) {
    func_0x0001072ceadc();
    FUN_1072c20dc();
    *unaff_x19 = 4;
    func_0x0001072ce25c();
    func_0x0001072c11e8();
  }
  else {
    func_0x0001072cf80c();
    func_0x0001072ceaec();
    if (extraout_w8_02 == 3) {
      func_0x0001072ceadc();
      FUN_1072c254c();
      *unaff_x19 = 3;
      func_0x0001072ce25c();
      func_0x0001072c0c9c();
    }
    else {
      func_0x0001072cf80c();
      func_0x0001072ceaec();
      if (extraout_w8_03 == 2) {
        func_0x0001072ceadc();
        FUN_1072c2620();
        *unaff_x19 = 2;
        func_0x0001072ce25c();
        FUN_1072c29e4();
      }
      else {
        func_0x0001072cf80c();
        func_0x0001072ceaec();
        if (extraout_w8_04 == 1) {
          func_0x0001072ceadc();
          FUN_1072c2a08();
          *unaff_x19 = 1;
          func_0x0001072ce25c();
          FUN_1072c2c7c();
        }
        else {
          func_0x0001072cf80c();
          func_0x0001072ceadc();
          FUN_1072c2ca0();
          *extraout_x8 = 0;
          func_0x0001072ce25c();
          FUN_1072c3068();
        }
      }
    }
  }
  return;
}



/* Entry: 1072c1ac8; end: 1072c1b13;  */

void FUN_1072c1ac8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  int extraout_w8_02;
  int extraout_w8_03;
  int extraout_w8_04;
  undefined4 *extraout_x8;
  undefined8 extraout_x9;
  undefined4 *unaff_x19;
  
  func_0x0001072ceaec();
  if (extraout_w8 == 6) {
    FUN_1072c1b14(extraout_x9,param_4 + 8);
    *unaff_x19 = 6;
    *(undefined8 *)(unaff_x19 + 2) = param_1;
    *(undefined8 *)(unaff_x19 + 4) = param_2;
    *(undefined8 *)(unaff_x19 + 6) = param_3;
    return;
  }
  func_0x0001072cf80c();
  func_0x0001072ceaec();
  if (extraout_w8_00 == 5) {
    func_0x0001072ceadc();
    FUN_1072c1c04();
    func_0x0001072ced6c();
    FUN_1072c20bc();
    func_0x0001072cebe0();
    return;
  }
  func_0x0001072cf80c();
  func_0x0001072ceaec();
  if (extraout_w8_01 == 4) {
    func_0x0001072ceadc();
    FUN_1072c20dc();
    *unaff_x19 = 4;
    func_0x0001072ce25c();
    func_0x0001072c11e8();
  }
  else {
    func_0x0001072cf80c();
    func_0x0001072ceaec();
    if (extraout_w8_02 == 3) {
      func_0x0001072ceadc();
      FUN_1072c254c();
      *unaff_x19 = 3;
      func_0x0001072ce25c();
      func_0x0001072c0c9c();
    }
    else {
      func_0x0001072cf80c();
      func_0x0001072ceaec();
      if (extraout_w8_03 == 2) {
        func_0x0001072ceadc();
        FUN_1072c2620();
        *unaff_x19 = 2;
        func_0x0001072ce25c();
        FUN_1072c29e4();
      }
      else {
        func_0x0001072cf80c();
        func_0x0001072ceaec();
        if (extraout_w8_04 == 1) {
          func_0x0001072ceadc();
          FUN_1072c2a08();
          *unaff_x19 = 1;
          func_0x0001072ce25c();
          FUN_1072c2c7c();
        }
        else {
          func_0x0001072cf80c();
          func_0x0001072ceadc();
          FUN_1072c2ca0();
          *extraout_x8 = 0;
          func_0x0001072ce25c();
          FUN_1072c3068();
        }
      }
    }
  }
  return;
}



/* Entry: 1072c1b14; end: 1072c1bb7;  */

double FUN_1072c1b14(undefined8 param_1,double *param_2)

{
  double dVar1;
  
  _sin();
  dVar1 = *param_2;
  _log();
  return dVar1 / 360.0 + 0.5;
}



/* Entry: 1072c1bb8; end: 1072c1c03;  */

void FUN_1072c1bb8(void)

{
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  int extraout_w8_02;
  int extraout_w8_03;
  undefined4 *extraout_x8;
  undefined4 *unaff_x19;
  
  func_0x0001072ceaec();
  if (extraout_w8 == 5) {
    func_0x0001072ceadc();
    FUN_1072c1c04();
    func_0x0001072ced6c();
    FUN_1072c20bc();
    func_0x0001072cebe0();
    return;
  }
  func_0x0001072cf80c();
  func_0x0001072ceaec();
  if (extraout_w8_00 == 4) {
    func_0x0001072ceadc();
    FUN_1072c20dc();
    *unaff_x19 = 4;
    func_0x0001072ce25c();
    func_0x0001072c11e8();
  }
  else {
    func_0x0001072cf80c();
    func_0x0001072ceaec();
    if (extraout_w8_01 == 3) {
      func_0x0001072ceadc();
      FUN_1072c254c();
      *unaff_x19 = 3;
      func_0x0001072ce25c();
      func_0x0001072c0c9c();
    }
    else {
      func_0x0001072cf80c();
      func_0x0001072ceaec();
      if (extraout_w8_02 == 2) {
        func_0x0001072ceadc();
        FUN_1072c2620();
        *unaff_x19 = 2;
        func_0x0001072ce25c();
        FUN_1072c29e4();
      }
      else {
        func_0x0001072cf80c();
        func_0x0001072ceaec();
        if (extraout_w8_03 == 1) {
          func_0x0001072ceadc();
          FUN_1072c2a08();
          *unaff_x19 = 1;
          func_0x0001072ce25c();
          FUN_1072c2c7c();
        }
        else {
          func_0x0001072cf80c();
          func_0x0001072ceadc();
          FUN_1072c2ca0();
          *extraout_x8 = 0;
          func_0x0001072ce25c();
          FUN_1072c3068();
        }
      }
    }
  }
  return;
}



/* Entry: 1072c1c04; end: 1072c1cef;  */

void FUN_1072c1c04(long *param_1,undefined8 *param_2,long *param_3)

{
  double *pdVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  if (param_3[1] - *param_3 != 0) {
    lVar3 = param_3[1] - *param_3 >> 4;
    func_0x0001072cf0f0();
    FUN_1072c1d40();
    lVar2 = param_3[1];
    for (lVar4 = *param_3; lVar4 != lVar2; lVar4 = lVar4 + 0x10) {
      func_0x0001072cfdb4();
      func_0x0001072ce7d0();
    }
    dVar6 = (double)param_1[3];
    pdVar1 = (double *)(*param_1 + 0x20);
    while (lVar3 = lVar3 + -1, lVar3 != 0) {
      dVar5 = pdVar1[-1] - pdVar1[-4];
      _hypot(dVar5,*pdVar1 - pdVar1[-3]);
      dVar6 = dVar6 + dVar5;
      param_1[3] = (long)dVar6;
      pdVar1 = pdVar1 + 3;
    }
    FUN_1072c1d90(*param_2,param_1);
    param_1[4] = 0;
    param_1[5] = param_1[3];
  }
  return;
}



/* Entry: 1072c1cf0; end: 1072c1d3f;  */

void FUN_1072c1cf0(void)

{
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  int extraout_w8_02;
  undefined4 *extraout_x8;
  undefined4 *unaff_x19;
  
  func_0x0001072ceaec();
  if (extraout_w8 == 4) {
    func_0x0001072ceadc();
    FUN_1072c20dc();
    *unaff_x19 = 4;
    func_0x0001072ce25c();
    func_0x0001072c11e8();
  }
  else {
    func_0x0001072cf80c();
    func_0x0001072ceaec();
    if (extraout_w8_00 == 3) {
      func_0x0001072ceadc();
      FUN_1072c254c();
      *unaff_x19 = 3;
      func_0x0001072ce25c();
      func_0x0001072c0c9c();
    }
    else {
      func_0x0001072cf80c();
      func_0x0001072ceaec();
      if (extraout_w8_01 == 2) {
        func_0x0001072ceadc();
        FUN_1072c2620();
        *unaff_x19 = 2;
        func_0x0001072ce25c();
        FUN_1072c29e4();
      }
      else {
        func_0x0001072cf80c();
        func_0x0001072ceaec();
        if (extraout_w8_02 == 1) {
          func_0x0001072ceadc();
          FUN_1072c2a08();
          *unaff_x19 = 1;
          func_0x0001072ce25c();
          FUN_1072c2c7c();
        }
        else {
          func_0x0001072cf80c();
          func_0x0001072ceadc();
          FUN_1072c2ca0();
          *extraout_x8 = 0;
          func_0x0001072ce25c();
          FUN_1072c3068();
        }
      }
    }
  }
  return;
}



/* Entry: 1072c1d40; end: 1072c1d8f;  */

void FUN_1072c1d40(double param_1,long *param_2)

{
  ulong uVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_48 [40];
  
  func_0x0001072ce424();
  if ((bool)in_CY && !(bool)in_ZR) {
    func_0x0001072ce8b4();
    if ((bool)in_CY) {
      FUN_1072c0a00();
      func_0x0001072ce934();
      func_0x0001072c1e18();
      func_0x0001072ce900();
      lVar6 = *param_2;
      lVar3 = (param_2[1] - lVar6) / 0x18;
      *(undefined8 *)(lVar6 + 0x10) = 0x3ff0000000000000;
      uVar2 = lVar3 - 1;
      *(undefined8 *)(lVar6 + lVar3 * 0x18 + -8) = 0x3ff0000000000000;
      param_1 = param_1 * param_1;
      uVar4 = 0;
      dVar10 = param_1;
LAB_1072c1f58:
      uVar1 = 0;
      uVar9 = uVar2 - uVar4;
      uVar8 = uVar4;
      dVar11 = param_1;
LAB_1072c1f70:
      do {
        uVar7 = uVar9;
        uVar5 = uVar1;
        lVar6 = uVar8 * 0x18;
        uVar9 = uVar8;
        do {
          lVar6 = lVar6 + 0x18;
          uVar8 = uVar9 + 1;
          if (uVar2 <= uVar8) {
            if (param_1 < dVar11) {
              *(double *)(*param_2 + uVar5 * 0x18 + 0x10) = dVar11;
              if (1 < uVar5 - uVar4) {
                func_0x0001072cea6c();
                dVar10 = param_1;
                FUN_1072c1f24();
              }
              uVar4 = uVar5;
              if (1 < uVar2 - uVar5) goto LAB_1072c1f58;
            }
            return;
          }
          lVar3 = *param_2;
          FUN_1072c2034(lVar3 + lVar6,lVar3 + uVar4 * 0x18,lVar3 + uVar2 * 0x18);
          if (dVar11 < dVar10) {
            uVar8 = uVar9 + 1;
            uVar1 = uVar8;
            uVar9 = uVar7;
            dVar11 = dVar10;
            goto LAB_1072c1f70;
          }
          uVar9 = uVar8;
        } while (dVar10 != dVar11);
        uVar1 = uVar8 - (uVar2 - uVar4 >> 1);
        uVar9 = -uVar1;
        if (-1 < (long)uVar1) {
          uVar9 = uVar1;
        }
        uVar1 = uVar8;
        if ((long)uVar7 <= (long)uVar9) {
          uVar1 = uVar5;
          uVar9 = uVar7;
        }
      } while( true );
    }
    func_0x0001072ce548();
    FUN_1072c1de4();
    func_0x0001072ce9c4();
    FUN_1072c1dc0();
    func_0x0001072c1e18(auStack_48);
  }
  return;
}



/* Entry: 1072c1d90; end: 1072c1dbf;  */

void FUN_1072c1d90(double param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  double dVar10;
  double dVar11;
  
  lVar6 = *param_2;
  lVar3 = (param_2[1] - lVar6) / 0x18;
  *(undefined8 *)(lVar6 + 0x10) = 0x3ff0000000000000;
  uVar2 = lVar3 - 1;
  *(undefined8 *)(lVar6 + lVar3 * 0x18 + -8) = 0x3ff0000000000000;
  param_1 = param_1 * param_1;
  uVar4 = 0;
  dVar10 = param_1;
LAB_1072c1f58:
  uVar1 = 0;
  uVar9 = uVar2 - uVar4;
  uVar8 = uVar4;
  dVar11 = param_1;
LAB_1072c1f70:
  do {
    uVar7 = uVar9;
    uVar5 = uVar1;
    lVar6 = uVar8 * 0x18;
    uVar9 = uVar8;
    do {
      lVar6 = lVar6 + 0x18;
      uVar8 = uVar9 + 1;
      if (uVar2 <= uVar8) {
        if (param_1 < dVar11) {
          *(double *)(*param_2 + uVar5 * 0x18 + 0x10) = dVar11;
          if (1 < uVar5 - uVar4) {
            func_0x0001072cea6c();
            dVar10 = param_1;
            FUN_1072c1f24();
          }
          uVar4 = uVar5;
          if (1 < uVar2 - uVar5) goto LAB_1072c1f58;
        }
        return;
      }
      lVar3 = *param_2;
      FUN_1072c2034(lVar3 + lVar6,lVar3 + uVar4 * 0x18,lVar3 + uVar2 * 0x18);
      if (dVar11 < dVar10) {
        uVar8 = uVar9 + 1;
        uVar1 = uVar8;
        uVar9 = uVar7;
        dVar11 = dVar10;
        goto LAB_1072c1f70;
      }
      uVar9 = uVar8;
    } while (dVar10 != dVar11);
    uVar1 = uVar8 - (uVar2 - uVar4 >> 1);
    uVar9 = -uVar1;
    if (-1 < (long)uVar1) {
      uVar9 = uVar1;
    }
    uVar1 = uVar8;
    if ((long)uVar7 <= (long)uVar9) {
      uVar1 = uVar5;
      uVar9 = uVar7;
    }
  } while( true );
}



/* Entry: 1072c1dc0; end: 1072c1de3;  */

void FUN_1072c1dc0(void)

{
  func_0x0001072ce69c();
  func_0x0001072cef58();
  func_0x0001072cdfc8();
  return;
}



/* Entry: 1072c1de4; end: 1072c1e43;  */

void FUN_1072c1de4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001072ce6ac();
  if (param_2 != 0) {
    FUN_1072c0a0c(param_4);
  }
  func_0x0001072ce27c(0x18);
  return;
}



/* Entry: 1072c1e44; end: 1072c1e67;  */

void FUN_1072c1e44(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -0x18;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 1072c1e68; end: 1072c1e9f;  */

void FUN_1072c1e68(long param_1)

{
  if (*(ulong *)(param_1 + 8) < *(ulong *)(param_1 + 0x10)) {
    func_0x0001072cfb78();
  }
  else {
    FUN_1072c1ea0(param_1);
  }
  func_0x0001072cfa6c();
  return;
}



/* Entry: 1072c1ea0; end: 1072c1f03;  */

void FUN_1072c1ea0(void)

{
  undefined8 *unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puStack_48;
  
  func_0x0001072ce2e4();
  FUN_1072c1f04();
  func_0x0001072ce15c();
  FUN_1072c1de4();
  uVar2 = unaff_x20[1];
  uVar1 = *unaff_x20;
  puStack_48[2] = unaff_x20[2];
  puStack_48[1] = uVar2;
  *puStack_48 = uVar1;
  func_0x0001072ceac4();
  func_0x0001072ce9c4();
  FUN_1072c1dc0();
  func_0x0001072ceb54();
  func_0x0001072c1e18();
  return;
}



/* Entry: 1072c1f04; end: 1072c1f23;  */

long * FUN_1072c1f04(double param_1,long *param_2,long *param_3,long *param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  double dVar10;
  double dVar11;
  
  if (param_3 < (long *)0xaaaaaaaaaaaaaab) {
    uVar2 = (param_2[2] - *param_2) / 0x18;
    plVar4 = (long *)(uVar2 * 2);
    if (plVar4 < param_3 || (long)plVar4 - (long)param_3 == 0) {
      plVar4 = param_3;
    }
    if (0x555555555555554 < uVar2) {
      plVar4 = (long *)0xaaaaaaaaaaaaaaa;
    }
    return plVar4;
  }
  FUN_1072c0a00();
  plVar4 = param_2;
  dVar10 = param_1;
LAB_1072c1f58:
  plVar9 = (long *)0x0;
  uVar2 = (long)param_4 - (long)param_3;
  plVar8 = param_3;
  dVar11 = param_1;
LAB_1072c1f70:
  do {
    uVar7 = uVar2;
    plVar5 = plVar9;
    lVar6 = (long)plVar8 * 0x18;
    plVar9 = plVar8;
    do {
      lVar6 = lVar6 + 0x18;
      plVar8 = (long *)((long)plVar9 + 1);
      if (param_4 <= plVar8) {
        if (param_1 < dVar11) {
          *(double *)(*param_2 + (long)plVar5 * 0x18 + 0x10) = dVar11;
          if (1 < (ulong)((long)plVar5 - (long)param_3)) {
            func_0x0001072cea6c();
            dVar10 = param_1;
            FUN_1072c1f24();
          }
          param_3 = plVar5;
          if (1 < (ulong)((long)param_4 - (long)plVar5)) goto LAB_1072c1f58;
        }
        return plVar4;
      }
      lVar3 = *param_2;
      plVar4 = (long *)(lVar3 + lVar6);
      FUN_1072c2034(plVar4,lVar3 + (long)param_3 * 0x18,lVar3 + (long)param_4 * 0x18);
      if (dVar11 < dVar10) {
        plVar8 = (long *)((long)plVar9 + 1);
        plVar9 = plVar8;
        uVar2 = uVar7;
        dVar11 = dVar10;
        goto LAB_1072c1f70;
      }
      plVar9 = plVar8;
    } while (dVar10 != dVar11);
    uVar1 = (long)plVar8 - ((ulong)((long)param_4 - (long)param_3) >> 1);
    uVar2 = -uVar1;
    if (-1 < (long)uVar1) {
      uVar2 = uVar1;
    }
    if ((long)uVar7 <= (long)uVar2) {
      plVar9 = plVar5;
      uVar2 = uVar7;
    }
  } while( true );
}



/* Entry: 1072c1f24; end: 1072c2033;  */

void FUN_1072c1f24(double param_1,long *param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  double dVar8;
  double dVar9;
  
  dVar8 = param_1;
LAB_1072c1f58:
  uVar1 = 0;
  uVar7 = param_4 - param_3;
  uVar6 = param_3;
  dVar9 = param_1;
LAB_1072c1f70:
  do {
    uVar5 = uVar7;
    uVar3 = uVar1;
    lVar4 = uVar6 * 0x18;
    uVar7 = uVar6;
    do {
      lVar4 = lVar4 + 0x18;
      uVar6 = uVar7 + 1;
      if (param_4 <= uVar6) {
        if (param_1 < dVar9) {
          *(double *)(*param_2 + uVar3 * 0x18 + 0x10) = dVar9;
          if (1 < uVar3 - param_3) {
            func_0x0001072cea6c();
            dVar8 = param_1;
            FUN_1072c1f24();
          }
          param_3 = uVar3;
          if (1 < param_4 - uVar3) goto LAB_1072c1f58;
        }
        return;
      }
      lVar2 = *param_2;
      FUN_1072c2034(lVar2 + lVar4,lVar2 + param_3 * 0x18,lVar2 + param_4 * 0x18);
      if (dVar9 < dVar8) {
        uVar6 = uVar7 + 1;
        uVar1 = uVar6;
        uVar7 = uVar5;
        dVar9 = dVar8;
        goto LAB_1072c1f70;
      }
      uVar7 = uVar6;
    } while (dVar8 != dVar9);
    uVar1 = uVar6 - (param_4 - param_3 >> 1);
    uVar7 = -uVar1;
    if (-1 < (long)uVar1) {
      uVar7 = uVar1;
    }
    uVar1 = uVar6;
    if ((long)uVar5 <= (long)uVar7) {
      uVar1 = uVar3;
      uVar7 = uVar5;
    }
  } while( true );
}



/* Entry: 1072c2034; end: 1072c20bb;  */

double FUN_1072c2034(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar2 = *param_2;
  dVar1 = param_2[1];
  dVar4 = *param_3;
  dVar7 = param_3[1];
  dVar5 = dVar4 - dVar2;
  dVar6 = dVar7 - dVar1;
  if ((dVar5 == 0.0) && (dVar6 == 0.0)) {
    dVar3 = param_1[1];
    dVar7 = dVar1;
    dVar4 = dVar2;
  }
  else {
    dVar3 = param_1[1];
    dVar8 = (dVar6 * (dVar3 - dVar1) + dVar5 * (*param_1 - dVar2)) / (dVar6 * dVar6 + dVar5 * dVar5)
    ;
    if ((dVar8 <= 1.0) && (dVar7 = dVar1, dVar4 = dVar2, 0.0 < dVar8)) {
      dVar4 = dVar2 + dVar8 * dVar5;
      dVar7 = dVar1 + dVar8 * dVar6;
    }
  }
  dVar4 = *param_1 - dVar4;
  return (dVar3 - dVar7) * (dVar3 - dVar7) + dVar4 * dVar4;
}



/* Entry: 1072c20bc; end: 1072c20db;  */

void FUN_1072c20bc(void)

{
  func_0x0001072cf3dc();
  func_0x0001072c05c8();
  return;
}



/* Entry: 1072c20dc; end: 1072c2157;  */

void FUN_1072c20dc(void)

{
  long lVar1;
  long lVar2;
  long *unaff_x22;
  undefined1 auStack_70 [32];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x0001072ce790();
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  func_0x0001072ce670();
  FUN_1072c21a8(&uStack_50);
  lVar1 = unaff_x22[1];
  for (lVar2 = *unaff_x22; lVar2 != lVar1; lVar2 = lVar2 + 0x18) {
    func_0x0001072cea6c(auStack_70);
    FUN_1072c2204();
    func_0x0001072cf444();
    func_0x0001072cebe0();
  }
  func_0x0001072ce984();
  func_0x0001072c11e8();
  return;
}



/* Entry: 1072c2158; end: 1072c21a7;  */

void FUN_1072c2158(void)

{
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  undefined4 *extraout_x8;
  undefined4 *unaff_x19;
  
  func_0x0001072ceaec();
  if (extraout_w8 == 3) {
    func_0x0001072ceadc();
    FUN_1072c254c();
    *unaff_x19 = 3;
    func_0x0001072ce25c();
    func_0x0001072c0c9c();
  }
  else {
    func_0x0001072cf80c();
    func_0x0001072ceaec();
    if (extraout_w8_00 == 2) {
      func_0x0001072ceadc();
      FUN_1072c2620();
      *unaff_x19 = 2;
      func_0x0001072ce25c();
      FUN_1072c29e4();
    }
    else {
      func_0x0001072cf80c();
      func_0x0001072ceaec();
      if (extraout_w8_01 == 1) {
        func_0x0001072ceadc();
        FUN_1072c2a08();
        *unaff_x19 = 1;
        func_0x0001072ce25c();
        FUN_1072c2c7c();
      }
      else {
        func_0x0001072cf80c();
        func_0x0001072ceadc();
        FUN_1072c2ca0();
        *extraout_x8 = 0;
        func_0x0001072ce25c();
        FUN_1072c3068();
      }
    }
  }
  return;
}



/* Entry: 1072c21a8; end: 1072c2203;  */

void FUN_1072c21a8(undefined8 *param_1,long *param_2)

{
  double *pdVar1;
  long lVar2;
  long *extraout_x8;
  long extraout_x9;
  long lVar3;
  long lVar4;
  double dVar5;
  undefined1 auStack_48 [40];
  
  func_0x0001072ce464();
  if ((long *)(extraout_x9 >> 5) < param_2) {
    if ((ulong)param_2 >> 0x3b != 0) {
      FUN_1072c0b68();
      func_0x0001072ce934();
      FUN_1072c23f0();
      func_0x0001072ce900();
      extraout_x8[1] = 0;
      *extraout_x8 = 0;
      extraout_x8[3] = 0;
      extraout_x8[2] = 0;
      if (param_2[1] - *param_2 != 0) {
        lVar3 = param_2[1] - *param_2 >> 4;
        func_0x0001072cf0f0();
        FUN_1072c1d40();
        lVar2 = param_2[1];
        for (lVar4 = *param_2; lVar4 != lVar2; lVar4 = lVar4 + 0x10) {
          func_0x0001072cfdb4();
          func_0x0001072ce7d0();
        }
        pdVar1 = (double *)(*extraout_x8 + 0x20);
        dVar5 = 0.0;
        while (lVar3 = lVar3 + -1, lVar3 != 0) {
          dVar5 = dVar5 + -(pdVar1[-3] * pdVar1[-1]) + *pdVar1 * pdVar1[-4];
          pdVar1 = pdVar1 + 3;
        }
        extraout_x8[3] = (long)ABS(dVar5 * 0.5);
        FUN_1072c1d90(*param_1,extraout_x8);
      }
      return;
    }
    func_0x0001072ce808();
    FUN_1072c2318(auStack_48);
    func_0x0001072ce9c4();
    FUN_1072c22e4();
    FUN_1072c23f0(auStack_48);
  }
  return;
}



/* Entry: 1072c2204; end: 1072c22e3;  */

void FUN_1072c2204(long *param_1,undefined8 *param_2,long *param_3)

{
  double *pdVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  if (param_3[1] - *param_3 != 0) {
    lVar3 = param_3[1] - *param_3 >> 4;
    func_0x0001072cf0f0();
    FUN_1072c1d40();
    lVar2 = param_3[1];
    for (lVar4 = *param_3; lVar4 != lVar2; lVar4 = lVar4 + 0x10) {
      func_0x0001072cfdb4();
      func_0x0001072ce7d0();
    }
    pdVar1 = (double *)(*param_1 + 0x20);
    dVar5 = 0.0;
    while (lVar3 = lVar3 + -1, lVar3 != 0) {
      dVar5 = dVar5 + -(pdVar1[-3] * pdVar1[-1]) + *pdVar1 * pdVar1[-4];
      pdVar1 = pdVar1 + 3;
    }
    param_1[3] = (long)ABS(dVar5 * 0.5);
    FUN_1072c1d90(*param_2,param_1);
  }
  return;
}



/* Entry: 1072c22e4; end: 1072c2317;  */

void FUN_1072c22e4(long *param_1)

{
  long extraout_x8;
  
  func_0x0001072ce69c();
  FUN_1072c2348(param_1 + 2,*param_1,param_1[1],extraout_x8 + (*param_1 - param_1[1]));
  func_0x0001072cdfc8();
  return;
}



/* Entry: 1072c2318; end: 1072c2347;  */

void FUN_1072c2318(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001072ce6ac();
  if (param_2 != 0) {
    FUN_1072c0b74(param_4);
  }
  func_0x0001072cfbcc();
  return;
}



/* Entry: 1072c2348; end: 1072c23ab;  */

void FUN_1072c2348(void)

{
  long unaff_x19;
  long unaff_x22;
  undefined1 auStack_60 [40];
  long lStack_38;
  
  func_0x0001072ce134();
  for (; unaff_x22 != unaff_x19; unaff_x22 = unaff_x22 + 0x20) {
    func_0x0001072cf5d0();
    FUN_1072c23d8();
    lStack_38 = lStack_38 + 0x20;
  }
  func_0x0001072cebf4();
  func_0x0001072ce974();
  FUN_1072c23ac();
  FUN_1072c0c34(auStack_60);
  return;
}



/* Entry: 1072c23ac; end: 1072c23d7;  */

void FUN_1072c23ac(long param_1)

{
  long unaff_x19;
  
  func_0x0001072cf120();
  for (; param_1 != unaff_x19; param_1 = param_1 + 0x20) {
    func_0x0001072c0c9c();
  }
  return;
}



/* Entry: 1072c23d8; end: 1072c23ef;  */

void FUN_1072c23d8(long param_1,long param_2)

{
  func_0x0001072cf2bc();
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  return;
}



/* Entry: 1072c23f0; end: 1072c241b;  */

long * FUN_1072c23f0(long *param_1)

{
  FUN_1072c241c();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1072c241c; end: 1072c2423;  */

void FUN_1072c241c(long param_1)

{
  undefined1 in_ZR;
  long extraout_x8;
  long unaff_x20;
  
  func_0x0001072ce940(param_1,*(undefined8 *)(param_1 + 8));
  while (func_0x0001072cf020(), !(bool)in_ZR) {
    *(long *)(unaff_x20 + 0x10) = extraout_x8 + -0x20;
    func_0x0001072c0c9c();
  }
  return;
}



/* Entry: 1072c2424; end: 1072c24ab;  */

void FUN_1072c2424(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  long unaff_x20;
  
  func_0x0001072ce940();
  while (func_0x0001072cf020(), !(bool)in_ZR) {
    *(long *)(unaff_x20 + 0x10) = extraout_x8 + -0x20;
    func_0x0001072c0c9c();
  }
  return;
}



/* Entry: 1072c24ac; end: 1072c2523;  */

void FUN_1072c24ac(undefined8 param_1)

{
  long *unaff_x19;
  undefined1 auStack_48 [16];
  long lStack_38;
  
  func_0x0001072ce314();
  FUN_1072c2524();
  FUN_1072c2318(auStack_48,param_1,unaff_x19[1] - *unaff_x19 >> 5,unaff_x19 + 2);
  func_0x0001072cfa50();
  FUN_1072c23d8();
  lStack_38 = lStack_38 + 0x20;
  func_0x0001072ce9c4();
  FUN_1072c22e4();
  func_0x0001072ceb54();
  FUN_1072c23f0();
  return;
}



/* Entry: 1072c2524; end: 1072c254b;  */

undefined8 *
FUN_1072c2524(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long *param_5)

{
  long lVar1;
  undefined1 in_CY;
  undefined8 *puVar2;
  undefined8 *extraout_x8;
  undefined8 *extraout_x9;
  long lVar3;
  long *unaff_x22;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  if ((ulong)param_5 >> 0x3b == 0) {
    func_0x0001072d03a0();
    puVar2 = extraout_x9;
    if ((bool)in_CY) {
      puVar2 = extraout_x8;
    }
    return puVar2;
  }
  FUN_1072c0b68();
  func_0x0001072ce790();
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  puVar2 = &uStack_60;
  FUN_1072c1d40(puVar2,param_5[1] - *param_5 >> 4);
  lVar1 = unaff_x22[1];
  for (lVar3 = *unaff_x22; lVar3 != lVar1; lVar3 = lVar3 + 0x10) {
    func_0x0001072cea6c();
    FUN_1072c1b14();
    puVar2 = &uStack_60;
    uStack_78 = param_1;
    uStack_70 = param_2;
    uStack_68 = param_3;
    FUN_1072c1e68(puVar2,&uStack_78);
  }
  func_0x0001072ce984();
  func_0x0001072c0c9c();
  return puVar2;
}



/* Entry: 1072c254c; end: 1072c25cf;  */

void FUN_1072c254c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long *param_5)

{
  long lVar1;
  long lVar2;
  long *unaff_x22;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x0001072ce790();
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  FUN_1072c1d40(&uStack_50,param_5[1] - *param_5 >> 4);
  lVar1 = unaff_x22[1];
  for (lVar2 = *unaff_x22; lVar2 != lVar1; lVar2 = lVar2 + 0x10) {
    func_0x0001072cea6c();
    FUN_1072c1b14();
    uStack_68 = param_1;
    uStack_60 = param_2;
    uStack_58 = param_3;
    FUN_1072c1e68(&uStack_50,&uStack_68);
  }
  func_0x0001072ce984();
  func_0x0001072c0c9c();
  return;
}



/* Entry: 1072c25d0; end: 1072c261f;  */

void FUN_1072c25d0(void)

{
  int extraout_w8;
  int extraout_w8_00;
  undefined4 *extraout_x8;
  undefined4 *unaff_x19;
  
  func_0x0001072ceaec();
  if (extraout_w8 == 2) {
    func_0x0001072ceadc();
    FUN_1072c2620();
    *unaff_x19 = 2;
    func_0x0001072ce25c();
    FUN_1072c29e4();
  }
  else {
    func_0x0001072cf80c();
    func_0x0001072ceaec();
    if (extraout_w8_00 == 1) {
      func_0x0001072ceadc();
      FUN_1072c2a08();
      *unaff_x19 = 1;
      func_0x0001072ce25c();
      FUN_1072c2c7c();
    }
    else {
      func_0x0001072cf80c();
      func_0x0001072ceadc();
      FUN_1072c2ca0();
      *extraout_x8 = 0;
      func_0x0001072ce25c();
      FUN_1072c3068();
    }
  }
  return;
}



/* Entry: 1072c2620; end: 1072c26c7;  */

void FUN_1072c2620(void)

{
  long lVar1;
  undefined8 *unaff_x19;
  long lVar2;
  long *unaff_x22;
  undefined1 auStack_80 [48];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x0001072ce790();
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  func_0x0001072ce670();
  FUN_1072c2718(&uStack_50);
  lVar1 = unaff_x22[1];
  for (lVar2 = *unaff_x22; lVar2 != lVar1; lVar2 = lVar2 + 0x18) {
    func_0x0001072cea6c(auStack_80);
    FUN_1072c1c04();
    func_0x0001072c28e0(&uStack_50,auStack_80);
    func_0x0001072cebe0();
  }
  unaff_x19[1] = uStack_48;
  *unaff_x19 = uStack_50;
  unaff_x19[2] = uStack_40;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  FUN_1072c29e4(&uStack_50);
  return;
}



/* Entry: 1072c26c8; end: 1072c2717;  */

void FUN_1072c26c8(void)

{
  int extraout_w8;
  undefined4 *extraout_x8;
  undefined4 *unaff_x19;
  
  func_0x0001072ceaec();
  if (extraout_w8 == 1) {
    func_0x0001072ceadc();
    FUN_1072c2a08();
    *unaff_x19 = 1;
    func_0x0001072ce25c();
    FUN_1072c2c7c();
  }
  else {
    func_0x0001072cf80c();
    func_0x0001072ceadc();
    FUN_1072c2ca0();
    *extraout_x8 = 0;
    func_0x0001072ce25c();
    FUN_1072c3068();
  }
  return;
}



/* Entry: 1072c2718; end: 1072c2783;  */

void FUN_1072c2718(undefined8 param_1,ulong param_2)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 auStack_48 [40];
  
  func_0x0001072ce464();
  func_0x0001072cf3ac();
  if ((bool)in_CY && !(bool)in_ZR) {
    if (0x555555555555555 < param_2) {
      FUN_1072c0e4c();
      func_0x0001072ce934();
      func_0x0001072c287c();
      func_0x0001072ce900();
      func_0x0001072ce2cc();
      func_0x0001072cf398();
      FUN_1072c27ec();
      func_0x0001072cdfc8();
      return;
    }
    func_0x0001072ce808();
    func_0x0001072cf1ec();
    FUN_1072c27b8();
    func_0x0001072ce9c4();
    FUN_1072c2784();
    func_0x0001072c287c(auStack_48);
  }
  return;
}



/* Entry: 1072c2784; end: 1072c27b7;  */

void FUN_1072c2784(void)

{
  func_0x0001072ce2cc();
  func_0x0001072cf398();
  FUN_1072c27ec();
  func_0x0001072cdfc8();
  return;
}



/* Entry: 1072c27b8; end: 1072c27eb;  */

void FUN_1072c27b8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001072ce6ac();
  if (param_2 != 0) {
    FUN_1072c0e58(param_4);
  }
  func_0x0001072ce27c(0x30);
  return;
}



/* Entry: 1072c27ec; end: 1072c284f;  */

void FUN_1072c27ec(void)

{
  long unaff_x19;
  long unaff_x22;
  undefined1 auStack_60 [40];
  long lStack_38;
  
  func_0x0001072ce134();
  for (; unaff_x22 != unaff_x19; unaff_x22 = unaff_x22 + 0x30) {
    func_0x0001072cf5d0();
    func_0x0001072c05c8();
    lStack_38 = lStack_38 + 0x30;
  }
  func_0x0001072cebf4();
  func_0x0001072ce974();
  FUN_1072c2850();
  FUN_1072c0f0c(auStack_60);
  return;
}



/* Entry: 1072c2850; end: 1072c28a7;  */

void FUN_1072c2850(long param_1)

{
  long unaff_x19;
  
  func_0x0001072cf120();
  for (; param_1 != unaff_x19; param_1 = param_1 + 0x30) {
    func_0x0001072c0c9c();
  }
  return;
}



/* Entry: 1072c28a8; end: 1072c28af;  */

void FUN_1072c28a8(long param_1)

{
  undefined1 in_ZR;
  long extraout_x8;
  long unaff_x20;
  
  func_0x0001072ce940(param_1,*(undefined8 *)(param_1 + 8));
  while (func_0x0001072cf020(), !(bool)in_ZR) {
    *(long *)(unaff_x20 + 0x10) = extraout_x8 + -0x30;
    func_0x0001072c0c9c();
  }
  return;
}



/* Entry: 1072c28b0; end: 1072c2937;  */

void FUN_1072c28b0(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  long unaff_x20;
  
  func_0x0001072ce940();
  while (func_0x0001072cf020(), !(bool)in_ZR) {
    *(long *)(unaff_x20 + 0x10) = extraout_x8 + -0x30;
    func_0x0001072c0c9c();
  }
  return;
}



/* Entry: 1072c2938; end: 1072c299f;  */

void FUN_1072c2938(void)

{
  func_0x0001072ce314();
  func_0x0001072cf038();
  FUN_1072c29a0();
  func_0x0001072ce15c();
  FUN_1072c27b8();
  func_0x0001072cfa50();
  func_0x0001072c05c8();
  func_0x0001072ce9c4();
  FUN_1072c2784();
  func_0x0001072ceb54();
  func_0x0001072c287c();
  return;
}



/* Entry: 1072c29a0; end: 1072c29e3;  */

undefined8 FUN_1072c29a0(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 extraout_x8;
  ulong extraout_x9;
  undefined8 extraout_x10;
  undefined8 unaff_x19;
  
  if (param_2 < 0x555555555555556) {
    func_0x0001072d0100();
    uVar1 = extraout_x10;
    if (0x2aaaaaaaaaaaaa9 < extraout_x9) {
      uVar1 = extraout_x8;
    }
    return uVar1;
  }
  FUN_1072c0e4c();
  func_0x0001072ce4a0();
  func_0x0001072c0f9c();
  return unaff_x19;
}



/* Entry: 1072c29e4; end: 1072c2a07;  */

void FUN_1072c29e4(void)

{
  func_0x0001072ce4a0();
  func_0x0001072c0f9c();
  return;
}



/* Entry: 1072c2a08; end: 1072c2a97;  */

void FUN_1072c2a08(void)

{
  long lVar1;
  long lVar2;
  long *unaff_x22;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x0001072ce790();
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  func_0x0001072ce670();
  FUN_1072c2acc(&uStack_50);
  lVar1 = unaff_x22[1];
  for (lVar2 = *unaff_x22; lVar2 != lVar1; lVar2 = lVar2 + 0x18) {
    func_0x0001072cea6c(auStack_68);
    FUN_1072c20dc();
    func_0x0001072c2bd8(&uStack_50,auStack_68);
    func_0x0001072c11e8(auStack_68);
  }
  func_0x0001072ce984();
  FUN_1072c2c7c();
  return;
}



/* Entry: 1072c2a98; end: 1072c2acb;  */

void FUN_1072c2a98(undefined4 *param_1)

{
  func_0x0001072ceadc();
  FUN_1072c2ca0();
  *param_1 = 0;
  func_0x0001072ce25c();
  FUN_1072c3068();
  return;
}



/* Entry: 1072c2acc; end: 1072c2b1b;  */

void FUN_1072c2acc(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 auStack_48 [40];
  
  func_0x0001072ce424();
  if ((bool)in_CY && !(bool)in_ZR) {
    func_0x0001072ce8b4();
    if ((bool)in_CY) {
      FUN_1072c10d0();
      func_0x0001072ce934();
      func_0x0001072c2b74();
      func_0x0001072ce900();
      func_0x0001072ce69c();
      func_0x0001072cef58();
      func_0x0001072cdfc8();
      return;
    }
    func_0x0001072ce548();
    FUN_1072c2b40();
    func_0x0001072ce9c4();
    FUN_1072c2b1c();
    func_0x0001072c2b74(auStack_48);
  }
  return;
}



/* Entry: 1072c2b1c; end: 1072c2b3f;  */

void FUN_1072c2b1c(void)

{
  func_0x0001072ce69c();
  func_0x0001072cef58();
  func_0x0001072cdfc8();
  return;
}



/* Entry: 1072c2b40; end: 1072c2b9f;  */

void FUN_1072c2b40(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001072ce6ac();
  if (param_2 != 0) {
    FUN_1072c10dc(param_4);
  }
  func_0x0001072ce27c(0x18);
  return;
}



/* Entry: 1072c2ba0; end: 1072c2ba7;  */

void FUN_1072c2ba0(long param_1)

{
  undefined1 in_ZR;
  long extraout_x8;
  long unaff_x20;
  
  func_0x0001072ce940(param_1,*(undefined8 *)(param_1 + 8));
  while (func_0x0001072cf020(), !(bool)in_ZR) {
    *(long *)(unaff_x20 + 0x10) = extraout_x8 + -0x18;
    func_0x0001072c11e8();
  }
  return;
}



/* Entry: 1072c2ba8; end: 1072c2c07;  */

void FUN_1072c2ba8(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  long unaff_x20;
  
  func_0x0001072ce940();
  while (func_0x0001072cf020(), !(bool)in_ZR) {
    *(long *)(unaff_x20 + 0x10) = extraout_x8 + -0x18;
    func_0x0001072c11e8();
  }
  return;
}



/* Entry: 1072c2c08; end: 1072c2c0b;  */

void FUN_1072c2c08(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  uVar2 = *param_2;
  puVar1[1] = param_2[1];
  *puVar1 = uVar2;
  puVar1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined8 **)(param_1 + 8) = puVar1 + 3;
  return;
}



/* Entry: 1072c2c0c; end: 1072c2c5b;  */

void FUN_1072c2c0c(void)

{
  func_0x0001072ce2e4();
  FUN_1072c2c5c();
  func_0x0001072ce15c();
  FUN_1072c2b40();
  func_0x0001072ce6bc();
  func_0x0001072ce9c4();
  FUN_1072c2b1c();
  func_0x0001072ceb54();
  func_0x0001072c2b74();
  return;
}



/* Entry: 1072c2c5c; end: 1072c2c7b;  */

ulong FUN_1072c2c5c(long *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong unaff_x19;
  
  if (0xaaaaaaaaaaaaaaa < param_2) {
    FUN_1072c10d0();
    func_0x0001072ce4a0();
    func_0x0001072c1234();
    return unaff_x19;
  }
  uVar1 = (param_1[2] - *param_1) / 0x18;
  uVar2 = uVar1 * 2;
  if (uVar2 < param_2 || uVar2 - param_2 == 0) {
    uVar2 = param_2;
  }
  if (0x555555555555554 < uVar1) {
    uVar2 = 0xaaaaaaaaaaaaaaa;
  }
  return uVar2;
}



/* Entry: 1072c2c7c; end: 1072c2c9f;  */

void FUN_1072c2c7c(void)

{
  func_0x0001072ce4a0();
  func_0x0001072c1234();
  return;
}



/* Entry: 1072c2ca0; end: 1072c2d5b;  */

void FUN_1072c2ca0(undefined8 param_1,long *param_2)

{
  ulong uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined8 *unaff_x19;
  ulong uVar6;
  ulong *unaff_x22;
  undefined8 uStack_f8;
  undefined1 **ppuStack_f0;
  code *pcStack_e8;
  undefined1 auStack_d8 [40];
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_70 [64];
  
  puVar4 = &uStack_90;
  func_0x0001072ce790();
  func_0x0001072ce248();
  func_0x0001072cf014();
  puVar5 = (undefined1 *)(param_2[1] - *param_2 >> 5);
  FUN_1072c2d5c(&uStack_90);
  uVar6 = *unaff_x22;
  uVar1 = unaff_x22[1];
  while( true ) {
    uVar2 = uVar1 <= uVar6;
    uVar3 = uVar6 == uVar1;
    if ((bool)uVar3) break;
    func_0x0001072cea6c(auStack_70);
    FUN_1072c2dcc();
    puVar5 = auStack_70;
    func_0x0001072c2f54(&uStack_90);
    FUN_1072c308c(auStack_70);
    uVar6 = uVar6 + 0x20;
  }
  unaff_x19[1] = uStack_88;
  *unaff_x19 = uStack_90;
  unaff_x19[2] = uStack_80;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  FUN_1072c3068();
  func_0x0001072ce098();
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
  FUN_1072c3068();
  func_0x0001072ce900();
  pcStack_98 = FUN_1072c2d5c;
  puStack_a0 = &stack0xfffffffffffffff0;
  func_0x0001072ce464();
  func_0x0001072cf3ac();
  if ((bool)uVar2 && !(bool)uVar3) {
    if ((undefined1 *)0x492492492492492 < puVar5) {
      FUN_1072c1364();
      func_0x0001072ce934();
      func_0x0001072c2ef0();
      func_0x0001072ce900();
      pcStack_e8 = FUN_1072c2dcc;
      uStack_f8 = *puVar4;
      ppuStack_f0 = &puStack_a0;
      FUN_1072c1ab4(puVar5,&uStack_f8);
      return;
    }
    func_0x0001072ce808();
    func_0x0001072cf1ec();
    FUN_1072c2e2c();
    func_0x0001072ce9c4();
    FUN_1072c2df8();
    func_0x0001072c2ef0(auStack_d8);
  }
  return;
}



/* Entry: 1072c2d5c; end: 1072c2dcb;  */

void FUN_1072c2d5c(undefined8 *param_1,ulong param_2)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined8 uStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined1 auStack_48 [40];
  
  func_0x0001072ce464();
  func_0x0001072cf3ac();
  if ((bool)in_CY && !(bool)in_ZR) {
    if (0x492492492492492 < param_2) {
      FUN_1072c1364();
      func_0x0001072ce934();
      func_0x0001072c2ef0();
      func_0x0001072ce900();
      pcStack_58 = FUN_1072c2dcc;
      uStack_68 = *param_1;
      puStack_60 = &stack0xfffffffffffffff0;
      FUN_1072c1ab4(param_2,&uStack_68);
      return;
    }
    func_0x0001072ce808();
    func_0x0001072cf1ec();
    FUN_1072c2e2c();
    func_0x0001072ce9c4();
    FUN_1072c2df8();
    func_0x0001072c2ef0(auStack_48);
  }
  return;
}



/* Entry: 1072c2dcc; end: 1072c2df7;  */

void FUN_1072c2dcc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_18;
  
  uStack_18 = *param_1;
  FUN_1072c1ab4(param_2,&uStack_18);
  return;
}



/* Entry: 1072c2df8; end: 1072c2e2b;  */

void FUN_1072c2df8(void)

{
  func_0x0001072ce2cc();
  func_0x0001072cf398();
  FUN_1072c2e60();
  func_0x0001072cdfc8();
  return;
}



/* Entry: 1072c2e2c; end: 1072c2e5f;  */

void FUN_1072c2e2c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001072ce6ac();
  if (param_2 != 0) {
    FUN_1072c1370(param_4);
  }
  func_0x0001072ce27c(0x38);
  return;
}



/* Entry: 1072c2e60; end: 1072c2ec3;  */

void FUN_1072c2e60(void)

{
  long unaff_x19;
  long unaff_x22;
  undefined1 auStack_60 [40];
  long lStack_38;
  
  func_0x0001072ce134();
  for (; unaff_x22 != unaff_x19; unaff_x22 = unaff_x22 + 0x38) {
    func_0x0001072cf5d0();
    FUN_1072c0560();
    lStack_38 = lStack_38 + 0x38;
  }
  func_0x0001072cebf4();
  func_0x0001072ce974();
  FUN_1072c2ec4();
  FUN_1072c1420(auStack_60);
  return;
}



/* Entry: 1072c2ec4; end: 1072c2f1b;  */

void FUN_1072c2ec4(long param_1)

{
  long unaff_x19;
  
  func_0x0001072cf120();
  for (; param_1 != unaff_x19; param_1 = param_1 + 0x38) {
    FUN_1072c308c();
  }
  return;
}



/* Entry: 1072c2f1c; end: 1072c2f23;  */

void FUN_1072c2f1c(long param_1)

{
  undefined1 in_ZR;
  long extraout_x8;
  long unaff_x20;
  
  func_0x0001072ce940(param_1,*(undefined8 *)(param_1 + 8));
  while (func_0x0001072cf020(), !(bool)in_ZR) {
    *(long *)(unaff_x20 + 0x10) = extraout_x8 + -0x38;
    FUN_1072c308c();
  }
  return;
}



/* Entry: 1072c2f24; end: 1072c2fab;  */

void FUN_1072c2f24(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  long unaff_x20;
  
  func_0x0001072ce940();
  while (func_0x0001072cf020(), !(bool)in_ZR) {
    *(long *)(unaff_x20 + 0x10) = extraout_x8 + -0x38;
    FUN_1072c308c();
  }
  return;
}



/* Entry: 1072c2fac; end: 1072c3013;  */

void FUN_1072c2fac(void)

{
  func_0x0001072ce314();
  func_0x0001072cf038();
  FUN_1072c3014();
  func_0x0001072ce15c();
  FUN_1072c2e2c();
  func_0x0001072cfa50();
  FUN_1072c0560();
  func_0x0001072ce9c4();
  FUN_1072c2df8();
  func_0x0001072ceb54();
  func_0x0001072c2ef0();
  return;
}



/* Entry: 1072c3014; end: 1072c3067;  */

undefined8 FUN_1072c3014(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 extraout_x8;
  ulong extraout_x9;
  undefined8 extraout_x10;
  undefined8 unaff_x19;
  
  if (param_2 < 0x492492492492493) {
    func_0x0001072d0100();
    uVar1 = extraout_x10;
    if (0x249249249249248 < extraout_x9) {
      uVar1 = extraout_x8;
    }
    return uVar1;
  }
  FUN_1072c1364();
  func_0x0001072ce4a0();
  func_0x0001072c14b0();
  return unaff_x19;
}



/* Entry: 1072c3068; end: 1072c308b;  */

void FUN_1072c3068(void)

{
  func_0x0001072ce4a0();
  func_0x0001072c14b0();
  return;
}



/* Entry: 1072c308c; end: 1072c30b7;  */

undefined4 * FUN_1072c308c(undefined4 *param_1)

{
  FUN_1072c30b8(*param_1,param_1 + 2);
  return param_1;
}



/* Entry: 1072c30b8; end: 1072c314b;  */

void FUN_1072c30b8(int param_1,undefined8 param_2)

{
  if (param_1 == 7) {
    return;
  }
  if (param_1 == 6) {
    return;
  }
  if (param_1 != 5) {
    if (param_1 == 4) {
      func_0x0001072ce4a0(param_2);
      func_0x0001072c0ce8();
      return;
    }
    if (param_1 != 3) {
      if (param_1 == 2) {
        func_0x0001072ce4a0(param_2);
        func_0x0001072c0f9c();
        return;
      }
      if (param_1 == 1) {
        func_0x0001072ce4a0(param_2);
        func_0x0001072c1234();
        return;
      }
      if (param_1 == 0) {
        func_0x0001072ce4a0(param_2);
        func_0x0001072c14b0();
        return;
      }
      return;
    }
  }
  func_0x0001072ce4a0(param_2);
  FUN_1072c0a74();
  return;
}



/* Entry: 1072c314c; end: 1072c31af;  */

void FUN_1072c314c(double param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_2[1];
  for (lVar2 = *param_2; lVar2 != lVar1; lVar2 = lVar2 + 0xb0) {
    func_0x0001072ce9c4();
    FUN_1072c3414();
    *(double *)(lVar2 + 0x88) = param_1 + *(double *)(lVar2 + 0x88);
    *(double *)(lVar2 + 0x98) = param_1 + *(double *)(lVar2 + 0x98);
  }
  return;
}



/* Entry: 1072c31b0; end: 1072c31bf;  */

long FUN_1072c31b0(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined1 auStack_78 [40];
  
  lVar1 = (param_4 - param_3) / 0xb0;
  if (0 < lVar1) {
    lVar4 = param_1[1];
    if ((param_1[2] - lVar4) / 0xb0 < lVar1) {
      plVar3 = param_1;
      FUN_1072c1a60(param_1,(lVar4 - *param_1) / 0xb0 + lVar1);
      FUN_1072c03fc(auStack_78,plVar3,(param_2 - *param_1) / 0xb0,param_1 + 2);
      FUN_1072c39c0(auStack_78,param_3,lVar1);
      FUN_1072c3a1c(param_1,auStack_78,param_2);
      func_0x0001072ce818();
    }
    else {
      lVar4 = lVar4 - param_2;
      lVar2 = lVar1 - lVar4 / 0xb0;
      if (lVar2 == 0 || lVar1 < lVar4 / 0xb0) {
        func_0x0001072cee80();
        FUN_1072c38cc();
        func_0x0001072cea6c();
      }
      else {
        FUN_1072c38a4(param_1,param_3 + lVar4,param_4,lVar2);
        if (lVar4 < 1) {
          return param_2;
        }
        func_0x0001072cee80();
        FUN_1072c38cc();
        func_0x0001072cea6c();
      }
      FUN_1072c3940();
    }
  }
  return param_2;
}



/* Entry: 1072c31c0; end: 1072c31e7;  */

void FUN_1072c31c0(void)

{
  func_0x0001072ce208();
  func_0x0001072cf108();
  FUN_1072c31e8();
  return;
}



/* Entry: 1072c31e8; end: 1072c322f;  */

void FUN_1072c31e8(void)

{
  long in_x3;
  
  func_0x0001072cee8c();
  if (in_x3 != 0) {
    func_0x0001072ce220();
    FUN_1072c3230();
    func_0x0001072ce35c();
    FUN_1072c3274();
  }
  func_0x0001072ce630();
  FUN_1072c3388();
  return;
}



/* Entry: 1072c3230; end: 1072c3273;  */

void FUN_1072c3230(undefined8 param_1,ulong param_2)

{
  undefined8 *unaff_x19;
  
  if (param_2 < 0x1745d1745d1745e) {
    func_0x0001072cef30();
    func_0x0001072c0430();
    *unaff_x19 = param_1;
    unaff_x19[1] = param_1;
    func_0x0001072cf0b8(0xb0);
  }
  else {
    FUN_1072c03bc();
    func_0x0001072ceb2c();
    func_0x0001072ceee0();
    FUN_1072c329c();
    unaff_x19[1] = param_1;
  }
  return;
}



/* Entry: 1072c3274; end: 1072c329b;  */

void FUN_1072c3274(undefined8 param_1)

{
  long unaff_x19;
  
  func_0x0001072ceb2c();
  func_0x0001072ceee0();
  FUN_1072c329c();
  *(undefined8 *)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 1072c329c; end: 1072c32af;  */

void FUN_1072c329c(void)

{
  FUN_1072c32b0();
  return;
}



/* Entry: 1072c32b0; end: 1072c330b;  */

long FUN_1072c32b0(void)

{
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uStack_38;
  
  func_0x0001072ce058();
  for (; unaff_x21 != unaff_x19; unaff_x21 = unaff_x21 + 0xb0) {
    func_0x0001072cea6c();
    FUN_1072c330c();
    unaff_x20 = uStack_38 + 0xb0;
    uStack_38 = unaff_x20;
  }
  func_0x0001072ce708();
  FUN_1072c0678();
  return unaff_x20;
}



/* Entry: 1072c330c; end: 1072c3387;  */

void FUN_1072c330c(long param_1)

{
  long lVar1;
  int extraout_w10;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  func_0x0001003ac1fc();
  FUN_1072c08b0();
  lVar1 = *(long *)(unaff_x20 + 0x40);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(unaff_x20 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0001072ced88();
    } while (extraout_w10 != 0);
  }
  func_0x000107269bac(unaff_x19 + 0x48,unaff_x20 + 0x48);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x90);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x88);
  uVar5 = *(undefined8 *)(unaff_x20 + 0xa0);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x98);
  *(undefined4 *)(unaff_x19 + 0xa8) = *(undefined4 *)(unaff_x20 + 0xa8);
  *(undefined8 *)(unaff_x19 + 0xa0) = uVar5;
  *(undefined8 *)(unaff_x19 + 0x98) = uVar4;
  *(undefined8 *)(unaff_x19 + 0x90) = uVar3;
  *(undefined8 *)(unaff_x19 + 0x88) = uVar2;
  return;
}



/* Entry: 1072c3388; end: 1072c33db;  */

void FUN_1072c3388(void)

{
  uint extraout_w8;
  
  func_0x0001072cee98();
  if ((extraout_w8 & 1) == 0) {
    func_0x0001072c33b0();
  }
  return;
}



/* Entry: 1072c33dc; end: 1072c33e3;  */

void FUN_1072c33dc(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x0001072ce520(param_1,*param_1);
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x16;
    FUN_1072c0624();
  }
  *(undefined8 **)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1072c33e4; end: 1072c3413;  */

void FUN_1072c33e4(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072ce520();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0xb0;
    FUN_1072c0624();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1072c3414; end: 1072c342f;  */

void FUN_1072c3414(void)

{
  func_0x0001072d0148();
  FUN_1072c3430();
  return;
}



/* Entry: 1072c3430; end: 1072c34ef;  */

/* WARNING: Possible PIC construction at 0x0001072c35d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001072c35d4) */

void FUN_1072c3430(int *param_1,undefined8 *param_2)

{
  double *pdVar1;
  bool bVar2;
  long *plVar3;
  double *pdVar4;
  long unaff_x20;
  long unaff_x21;
  double dVar5;
  
  if (*param_1 == 7) {
    return;
  }
  if (*param_1 == 6) {
    *(double *)(param_1 + 2) = *(double *)*param_2 + *(double *)(param_1 + 2);
    return;
  }
  if (*param_1 != 5) {
    if (*param_1 == 4) {
      func_0x0001072cefd8(param_1 + 2,*param_2);
      for (; unaff_x20 != unaff_x21; unaff_x20 = unaff_x20 + 0x20) {
        func_0x0001072cee80();
        FUN_1072c3524();
      }
    }
    else {
      if (*param_1 == 3) {
        pdVar1 = *(double **)(param_1 + 4);
        dVar5 = *(double *)*param_2;
        for (pdVar4 = *(double **)(param_1 + 2); pdVar4 != pdVar1; pdVar4 = pdVar4 + 3) {
          *pdVar4 = dVar5 + *pdVar4;
        }
        return;
      }
      bVar2 = *param_1 == 2;
      if (bVar2) {
        plVar3 = (long *)(param_1 + 2);
        pdVar4 = (double *)*param_2;
        func_0x0001072cefd8();
        if (unaff_x20 != unaff_x21) {
          func_0x0001072cee80();
          goto SUB_1072c34a4;
        }
      }
      else {
        func_0x0001072cf5e8(param_1,param_2);
        if (bVar2) {
          func_0x0001072cefd8(param_2,*(undefined8 *)param_1);
          for (; unaff_x20 != unaff_x21; unaff_x20 = unaff_x20 + 0x18) {
            func_0x0001072cee80();
            FUN_1072c34f0();
          }
        }
        else {
          func_0x0001072cefd8(param_2,*(undefined8 *)param_1);
          for (; unaff_x20 != unaff_x21; unaff_x20 = unaff_x20 + 0x38) {
            func_0x0001072cee80();
            FUN_1072c3654();
          }
        }
      }
    }
    return;
  }
  plVar3 = (long *)(param_1 + 2);
  pdVar4 = (double *)*param_2;
SUB_1072c34a4:
  pdVar1 = (double *)plVar3[1];
  dVar5 = *pdVar4;
  for (pdVar4 = (double *)*plVar3; pdVar4 != pdVar1; pdVar4 = pdVar4 + 3) {
    *pdVar4 = dVar5 + *pdVar4;
  }
  return;
}



/* Entry: 1072c34f0; end: 1072c3523;  */

void FUN_1072c34f0(void)

{
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001072cefd8();
  for (; unaff_x20 != unaff_x21; unaff_x20 = unaff_x20 + 0x20) {
    func_0x0001072cee80();
    FUN_1072c3524();
  }
  return;
}



/* Entry: 1072c3524; end: 1072c35af;  */

void FUN_1072c3524(long *param_1,double *param_2)

{
  double *pdVar1;
  double *pdVar2;
  double dVar3;
  
  pdVar1 = (double *)param_1[1];
  dVar3 = *param_2;
  for (pdVar2 = (double *)*param_1; pdVar2 != pdVar1; pdVar2 = pdVar2 + 3) {
    *pdVar2 = dVar3 + *pdVar2;
  }
  return;
}



/* Entry: 1072c35b0; end: 1072c35e3;  */

void FUN_1072c35b0(void)

{
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001072cefd8();
  for (; unaff_x20 != unaff_x21; unaff_x20 = unaff_x20 + 0x30) {
    func_0x0001072cee80();
    func_0x0001072c34a4();
  }
  return;
}



/* Entry: 1072c35e4; end: 1072c35e7;  */

void FUN_1072c35e4(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001072cefd8(param_2,*param_1);
  for (; unaff_x20 != unaff_x21; unaff_x20 = unaff_x20 + 0x18) {
    func_0x0001072cee80();
    FUN_1072c34f0();
  }
  return;
}


