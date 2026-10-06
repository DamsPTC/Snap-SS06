/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10bd2762c; end: 10bd27697;  */

void FUN_10bd2762c(undefined4 *param_1,undefined4 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  long *plVar1;
  undefined8 uVar2;
  
  func_0x00010bd280bc();
  *param_1 = *param_2;
  plVar1 = (long *)(param_1 + 2);
  if (*plVar1 != 0) {
    FUN_10bd23540(plVar1);
    __ZdlPv(*plVar1);
    *plVar1 = 0;
    *(undefined8 *)(param_1 + 4) = 0;
    *(undefined8 *)(param_1 + 6) = 0;
  }
  uVar2 = *(undefined8 *)(unaff_x20 + 8);
  *(undefined8 *)(unaff_x19 + 0x10) = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x19 + 8) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x18) = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x20 + 8) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  return;
}



/* Entry: 10bd27698; end: 10bd278b3;  */

void FUN_10bd27698(undefined8 *param_1,long param_2,long *param_3,ulong param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  long lVar6;
  char *pcVar7;
  ulong uVar8;
  long lVar9;
  char *pcVar10;
  ulong uVar11;
  undefined1 uStack_61;
  long lStack_60;
  ulong uStack_58;
  
  lVar3 = 0;
  lVar9 = param_4 * 0x18;
  plVar1 = param_3;
  for (lVar4 = lVar9; lVar4 != 0; lVar4 = lVar4 + -0x18) {
    if (*(char *)((long)plVar1 + 0x14) != '\x02') {
      lVar6 = (long)*(char *)(*(long *)(*plVar1 + 8) + 0x17);
      if (lVar6 < 0) {
        lVar6 = *(long *)(*(long *)(*plVar1 + 8) + 8);
      }
      lVar3 = lVar6 + lVar3;
    }
    plVar1 = plVar1 + 3;
  }
  if (lVar3 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    lVar4 = *(long *)(param_2 + 8);
    uVar8 = (ulong)*(char *)(lVar4 + 0x2f);
    if ((long)uVar8 < 0) {
      lVar6 = *(long *)(lVar4 + 0x18);
      uVar8 = *(ulong *)(lVar4 + 0x20);
    }
    else {
      lVar6 = lVar4 + 0x18;
    }
    uVar11 = uVar8;
    if (0xfe < uVar8) {
      uVar11 = 0xff;
    }
    uStack_61 = 0;
    lStack_60 = lVar6;
    uStack_58 = uVar8;
    func_0x000107c27fbc(param_1,(param_4 & 0xfffffffffffffff8) + lVar3 + uVar11 + 8,&uStack_61);
    pcVar10 = (char *)*param_1;
    *pcVar10 = (char)uVar11;
    plVar1 = param_3;
    for (lVar3 = lVar9; pcVar10 = pcVar10 + 1, lVar3 != 0; lVar3 = lVar3 + -0x18) {
      if (*(char *)((long)plVar1 + 0x14) != '\x02') {
        cVar5 = *(char *)(*(long *)(*plVar1 + 8) + 0x17);
        if (cVar5 < '\0') {
          cVar5 = *(char *)(*(long *)(*plVar1 + 8) + 8);
        }
        *pcVar10 = cVar5;
      }
      plVar1 = plVar1 + 3;
    }
    uVar11 = (ulong)~(uint)param_4 & 7;
    pcVar7 = pcVar10 + uVar11;
    if (uVar8 < 0x100) {
      if (uVar8 != 0) {
        _memcpy(pcVar7,lVar6,uVar8);
        pcVar7 = pcVar10 + uVar8 + uVar11;
      }
    }
    else {
      lVar3 = 0;
      func_0x000107c2810c(&lStack_60,0,0x7e);
      if (lVar3 != 0) {
        func_0x00010bd28064();
        pcVar7 = pcVar10 + lVar3 + uVar11;
      }
      pcVar7[2] = '.';
      pcVar10 = pcVar7 + 3;
      pcVar7[0] = '.';
      pcVar7[1] = '.';
      lVar3 = uStack_58 - 0x7e;
      func_0x000107c2810c(&lStack_60,lVar3,0xffffffffffffffff);
      pcVar7 = pcVar10;
      if (lVar3 != 0) {
        func_0x00010bd28064();
        pcVar7 = pcVar10 + lVar3;
      }
    }
    for (; lVar9 != 0; lVar9 = lVar9 + -0x18) {
      if (*(char *)((long)param_3 + 0x14) != '\x02') {
        puVar2 = *(undefined8 **)(*param_3 + 8);
        lVar3 = (long)*(char *)((long)puVar2 + 0x17);
        if (lVar3 < 0) {
          lVar3 = puVar2[1];
          puVar2 = (undefined8 *)*puVar2;
        }
        if (lVar3 != 0) {
          _memcpy(pcVar7,puVar2,lVar3);
          pcVar7 = pcVar7 + lVar3;
        }
      }
      param_3 = param_3 + 3;
    }
  }
  return;
}



/* Entry: 10bd278b4; end: 10bd2799f;  */

void FUN_10bd278b4(long *param_1,ulong param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long *unaff_x19;
  ulong unaff_x20;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  undefined1 auStack_68 [8];
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  long *plStack_50;
  long *plStack_48;
  
  func_0x00010bd280bc();
  puVar1 = (undefined8 *)param_1[1];
  uVar7 = (long)puVar1 - *param_1 >> 4;
  if (uVar7 < param_2) {
    uVar8 = unaff_x20 - uVar7;
    plVar9 = unaff_x19 + 2;
    if ((ulong)(*plVar9 - (long)puVar1 >> 4) < uVar8) {
      plVar4 = unaff_x19;
      uVar5 = unaff_x20;
      FUN_10bd27cf4();
      lVar6 = *unaff_x19;
      lVar2 = unaff_x19[1];
      plStack_48 = plVar9;
      if (plVar4 == (long *)0x0) {
        uVar5 = 0;
      }
      else {
        FUN_10bd27d40();
      }
      puStack_60 = (undefined8 *)((long)plVar4 + (lVar2 - lVar6));
      plStack_50 = plVar4 + uVar5 * 2;
      puStack_58 = puStack_60 + uVar8 * 2;
      puVar1 = puStack_60;
      for (lVar6 = unaff_x20 * 0x10 + uVar7 * -0x10; lVar6 != 0; lVar6 = lVar6 + -0x10) {
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = puVar1 + 2;
      }
      func_0x00010bd280f0();
      FUN_10bd27e38(auStack_68);
    }
    else {
      puVar3 = puVar1;
      for (lVar6 = unaff_x20 * 0x10 + uVar7 * -0x10; lVar6 != 0; lVar6 = lVar6 + -0x10) {
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3 = puVar3 + 2;
      }
      unaff_x19[1] = (long)(puVar1 + uVar8 * 2);
    }
  }
  else if (unaff_x20 < uVar7) {
    unaff_x19[1] = *param_1 + unaff_x20 * 0x10;
  }
  return;
}



/* Entry: 10bd279a0; end: 10bd27a57;  */

bool FUN_10bd279a0(long param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x00010787827c();
  if (((int)lVar2 == 0xb) && ((*(byte *)(param_1 + 1) >> 5 & 1) == 0)) {
    bVar1 = *(short *)(param_2 + 0x10) != 0;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 10bd27a58; end: 10bd27bf7;  */

short ** FUN_10bd27a58(short **param_1,short *param_2,short *param_3)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  short *psVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  int *piVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  short **ppsVar16;
  int iVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  short *apsStack_158 [32];
  short *psStack_58;
  short **ppsStack_50;
  undefined8 uStack_48;
  
  uStack_48 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = *(uint *)((long)param_1 + 4);
  lVar7 = (long)(int)uVar6;
  iVar9 = *(int *)(param_1[7] + 2);
  uVar4 = uVar6 - 1 == (int)*(short *)((long)param_1 + 2);
  if ((bool)uVar4) {
    if ((iVar9 + 0x8000U | uVar6) >> 0x10 == 0) {
      *param_2 = (short)iVar9;
      *param_3 = (short)uVar6;
      ppsVar16 = (short **)0x1;
      goto LAB_10bd27b60;
    }
  }
  else {
    piVar10 = (int *)(param_1[7] + 0x1a);
    iVar17 = iVar9;
    for (lVar12 = 1; lVar12 < lVar7; lVar12 = lVar12 + 1) {
      iVar3 = *piVar10;
      iVar2 = iVar3;
      if (iVar17 <= iVar3) {
        iVar2 = iVar17;
      }
      if (iVar9 <= iVar3) {
        iVar9 = iVar3;
      }
      piVar10 = piVar10 + 0xc;
      iVar17 = iVar2;
    }
    lVar12 = (long)iVar9 - (long)iVar17;
    uVar4 = lVar12 == lVar7;
    if (lVar12 < lVar7) {
      ppsVar16 = (short **)0x0;
      uVar4 = iVar17 == (short)iVar17;
      if (((bool)uVar4) && (uVar1 = lVar12 + 1, uVar1 >> 0x10 == 0)) {
        *param_2 = (short)iVar17;
        *param_3 = (short)uVar1;
        psVar5 = (short *)(lVar12 + 0x40U >> 6);
        ppsVar16 = apsStack_158;
        psStack_58 = psVar5;
        ppsStack_50 = ppsVar16;
        if (0x83f < lVar12 + 0x40U) {
          ppsVar16 = &psStack_58;
          func_0x000106e52738();
          psVar5 = psStack_58;
          ppsStack_50 = ppsVar16;
        }
        while (param_2 = (short *)((long)psVar5 + -1), 0 < (long)psVar5) {
          *ppsVar16 = (short *)0x0;
          psVar5 = param_2;
          ppsVar16 = ppsVar16 + 1;
        }
        uVar8 = 0;
        lVar7 = 4;
        for (uVar11 = (ulong)(*(uint *)((long)param_1 + 4) &
                             ((int)*(uint *)((long)param_1 + 4) >> 0x1f ^ 0xffffffffU)); uVar11 != 0
            ; uVar11 = uVar11 - 1) {
          uVar13 = (long)*(int *)((long)param_1[7] + lVar7) - (long)iVar17;
          uVar14 = uVar13 >> 3 & 0x1ffffffffffffff8;
          uVar15 = *(ulong *)((long)ppsStack_50 + uVar14);
          uVar13 = 1L << (uVar13 & 0x3f);
          uVar6 = (uint)uVar8;
          if ((uVar13 & uVar15) == 0) {
            uVar6 = uVar6 + 1;
          }
          uVar8 = (ulong)uVar6;
          *(ulong *)((long)ppsStack_50 + uVar14) = uVar13 | uVar15;
          lVar7 = lVar7 + 0x30;
        }
        uVar4 = uVar1 == uVar8;
        ppsVar16 = (short **)(ulong)(byte)uVar4;
        param_1 = apsStack_158;
        FUN_10bd27f34();
      }
      goto LAB_10bd27b60;
    }
  }
  ppsVar16 = (short **)0x0;
LAB_10bd27b60:
  func_0x00010bd28138(uStack_48);
  if ((bool)uVar4) {
    return ppsVar16;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  psVar5 = param_1[1];
  for (; param_2 != param_3; param_2 = param_2 + 0x10) {
    uVar18 = *(undefined8 *)param_2;
    uVar20 = *(undefined8 *)(param_2 + 0xc);
    uVar19 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(psVar5 + 4) = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)psVar5 = uVar18;
    *(undefined8 *)(psVar5 + 0xc) = uVar20;
    *(undefined8 *)(psVar5 + 8) = uVar19;
    psVar5 = psVar5 + 0x10;
  }
  param_1[1] = psVar5;
  return param_1;
}



/* Entry: 10bd27bf8; end: 10bd27c17;  */

void FUN_10bd27bf8(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  for (; param_2 != param_3; param_2 = param_2 + 4) {
    uVar2 = *param_2;
    uVar4 = param_2[3];
    uVar3 = param_2[2];
    puVar1[1] = param_2[1];
    *puVar1 = uVar2;
    puVar1[3] = uVar4;
    puVar1[2] = uVar3;
    puVar1 = puVar1 + 4;
  }
  *(undefined8 **)(param_1 + 8) = puVar1;
  return;
}



/* Entry: 10bd27c18; end: 10bd27c87;  */

void FUN_10bd27c18(long *param_1)

{
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 10bd27c88; end: 10bd27cd3;  */

/* WARNING: Possible PIC construction at 0x00010bd27cc4: Changing call to branch */

long * FUN_10bd27c88(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  
  if ((ulong)param_2 >> 0x3b == 0) {
    plVar1 = (long *)(param_1[2] - *param_1 >> 4);
    if (plVar1 <= param_2) {
      plVar1 = param_2;
    }
    if (0x7fffffffffffffdf < (ulong)(param_1[2] - *param_1)) {
      plVar1 = (long *)0x7ffffffffffffff;
    }
    return plVar1;
  }
  func_0x00010bd28008();
  plVar1 = (long *)param_1[1];
  for (; param_2 != param_3; param_2 = param_2 + 2) {
    lVar2 = *param_2;
    plVar1[1] = param_2[1];
    *plVar1 = lVar2;
    plVar1 = plVar1 + 2;
  }
  param_1[1] = (long)plVar1;
  return param_1;
}



/* Entry: 10bd27cd4; end: 10bd27cf3;  */

void FUN_10bd27cd4(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  for (; param_2 != param_3; param_2 = param_2 + 2) {
    uVar2 = *param_2;
    puVar1[1] = param_2[1];
    *puVar1 = uVar2;
    puVar1 = puVar1 + 2;
  }
  *(undefined8 **)(param_1 + 8) = puVar1;
  return;
}



/* Entry: 10bd27cf4; end: 10bd27d3f;  */

/* WARNING: Possible PIC construction at 0x00010bd27d30: Changing call to branch */

undefined1  [16] FUN_10bd27cf4(long *param_1,undefined4 *param_2)

{
  long lVar1;
  undefined4 *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if ((ulong)param_2 >> 0x3c == 0) {
    puVar2 = (undefined4 *)(param_1[2] - *param_1 >> 3);
    if (puVar2 <= param_2) {
      puVar2 = param_2;
    }
    if (0x7fffffffffffffef < (ulong)(param_1[2] - *param_1)) {
      puVar2 = (undefined4 *)0xfffffffffffffff;
    }
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = puVar2;
    return auVar3;
  }
  func_0x00010bd28008();
  if ((ulong)param_1 >> 0x3c == 0) {
    lVar1 = (long)param_1 << 4;
    __Znwm(lVar1);
    auVar4._8_8_ = param_1;
    auVar4._0_8_ = lVar1;
    return auVar4;
  }
  func_0x000104bd35f4();
  *(undefined4 *)param_1 = *param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = 0;
  lVar1 = *(long *)(param_2 + 2);
  param_1[2] = *(long *)(param_2 + 4);
  param_1[1] = lVar1;
  param_1[3] = *(long *)(param_2 + 6);
  *(undefined8 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 6) = 0;
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = param_1;
  return auVar5;
}



/* Entry: 10bd27d40; end: 10bd27d73;  */

void FUN_10bd27d40(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  if ((ulong)param_1 >> 0x3c == 0) {
    __Znwm((long)param_1 << 4);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  uVar1 = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 2) = uVar1;
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 6) = 0;
  return;
}



/* Entry: 10bd27d74; end: 10bd27d9f;  */

void FUN_10bd27d74(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  uVar1 = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 2) = uVar1;
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 6) = 0;
  return;
}



/* Entry: 10bd27da0; end: 10bd27db7;  */

void FUN_10bd27da0(long *param_1,undefined8 *param_2)

{
  long lVar1;
  
  func_0x00010bd28008();
  func_0x00010bd28008();
  lVar1 = param_2[1] - (param_1[1] - *param_1);
  _memcpy(lVar1);
  param_2[1] = lVar1;
  lVar1 = *param_1;
  param_1[1] = lVar1;
  *param_1 = param_2[1];
  param_2[1] = lVar1;
  lVar1 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar1;
  lVar1 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar1;
  *param_2 = param_2[1];
  return;
}



/* Entry: 10bd27db8; end: 10bd27e37;  */

void FUN_10bd27db8(long *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_2[1] - (param_1[1] - *param_1);
  _memcpy(lVar1);
  param_2[1] = lVar1;
  lVar1 = *param_1;
  param_1[1] = lVar1;
  *param_1 = param_2[1];
  param_2[1] = lVar1;
  lVar1 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar1;
  lVar1 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar1;
  *param_2 = param_2[1];
  return;
}



/* Entry: 10bd27e38; end: 10bd27e7b;  */

long * FUN_10bd27e38(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  while (lVar1 != param_1[1]) {
    lVar1 = lVar1 + -0x10;
    param_1[2] = lVar1;
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10bd27e7c; end: 10bd27e87;  */

void FUN_10bd27e7c(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  long *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar6;
  undefined1 auStack_78 [8];
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  long *plStack_60;
  ulong *puStack_58;
  
  func_0x00010bd28008();
  func_0x00010bd280bc();
  puStack_58 = (ulong *)(param_1 + 0x10);
  puVar5 = *(undefined8 **)(param_1 + 8);
  if (puVar5 < (undefined8 *)*puStack_58) {
    uVar6 = *unaff_x20;
    puVar5[1] = unaff_x20[1];
    *puVar5 = uVar6;
    puVar5 = puVar5 + 2;
  }
  else {
    lVar4 = ((long)puVar5 - *unaff_x19 >> 4) + 1;
    plVar3 = unaff_x19;
    FUN_10bd27cf4();
    lVar1 = *unaff_x19;
    lVar2 = unaff_x19[1];
    if (plVar3 == (long *)0x0) {
      lVar4 = 0;
    }
    else {
      FUN_10bd27d40();
    }
    puStack_70 = (undefined8 *)((long)plVar3 + (lVar2 - lVar1));
    plStack_60 = plVar3 + lVar4 * 2;
    uVar6 = *unaff_x20;
    puStack_70[1] = unaff_x20[1];
    *puStack_70 = uVar6;
    puStack_68 = puStack_70 + 2;
    func_0x00010bd280f0();
    puVar5 = (undefined8 *)unaff_x19[1];
    FUN_10bd27e38(auStack_78);
  }
  unaff_x19[1] = (long)puVar5;
  return;
}



/* Entry: 10bd27e88; end: 10bd27f33;  */

void FUN_10bd27e88(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  long *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar6;
  undefined1 auStack_68 [8];
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  long *plStack_50;
  ulong *puStack_48;
  
  func_0x00010bd280bc();
  puStack_48 = (ulong *)(param_1 + 0x10);
  puVar5 = *(undefined8 **)(param_1 + 8);
  if (puVar5 < (undefined8 *)*puStack_48) {
    uVar6 = *unaff_x20;
    puVar5[1] = unaff_x20[1];
    *puVar5 = uVar6;
    puVar5 = puVar5 + 2;
  }
  else {
    lVar4 = ((long)puVar5 - *unaff_x19 >> 4) + 1;
    plVar3 = unaff_x19;
    FUN_10bd27cf4();
    lVar1 = *unaff_x19;
    lVar2 = unaff_x19[1];
    if (plVar3 == (long *)0x0) {
      lVar4 = 0;
    }
    else {
      FUN_10bd27d40();
    }
    puStack_60 = (undefined8 *)((long)plVar3 + (lVar2 - lVar1));
    plStack_50 = plVar3 + lVar4 * 2;
    uVar6 = *unaff_x20;
    puStack_60[1] = unaff_x20[1];
    *puStack_60 = uVar6;
    puStack_58 = puStack_60 + 2;
    func_0x00010bd280f0();
    puVar5 = (undefined8 *)unaff_x19[1];
    FUN_10bd27e38(auStack_68);
  }
  unaff_x19[1] = (long)puVar5;
  return;
}



/* Entry: 10bd27f34; end: 10bd27fd3;  */

long FUN_10bd27f34(long param_1)

{
  if (0x20 < *(ulong *)(param_1 + 0x100)) {
    __ZdlPv(*(undefined8 *)(param_1 + 0x108));
  }
  return param_1;
}



/* Entry: 10bd27fd4; end: 10bd2814b;  */

void FUN_10bd27fd4(void)

{
  return;
}



/* Entry: 10bd2814c; end: 10bd28213;  */

void FUN_10bd2814c(int param_1)

{
  func_0x00010bd2afb4();
                    /* WARNING: Could not recover jumptable at 0x00010bd28174. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((ulong)(byte)(&UNK_10e60b928)[param_1 - 1] * 4 + 0x10bd28178))();
  return;
}



/* Entry: 10bd28214; end: 10bd28273;  */

uint * FUN_10bd28214(long param_1)

{
  int iVar1;
  uint *puVar2;
  uint extraout_w8;
  undefined4 extraout_var;
  uint *unaff_x19;
  undefined1 auStack_20 [16];
  
  iVar1 = (int)auStack_20;
  if (*(uint *)(param_1 + 0x18) != 0) {
    return (uint *)(ulong)*(uint *)(param_1 + 0x18);
  }
  func_0x00010bd2af64();
  FUN_10bdb2a00(auStack_20);
  func_0x00010bd16744(auStack_20,&UNK_10f835a24);
  func_0x00010b4d165c();
  func_0x00010b4d184c();
  func_0x00010bd2b120();
  func_0x00010bd2afb4();
  if (iVar1 != 9) {
    func_0x00010bd2aec4();
    FUN_10bdb2a00();
    func_0x00010bd2ae58();
    func_0x00010bd16784();
    func_0x00010bd2aeac();
    func_0x00010bd2aea0();
    func_0x00010bd2b0b0();
    func_0x00010bd2af54();
    func_0x00010bd2ae94();
    func_0x00010bd2ae88();
    func_0x00010bd2af18();
    func_0x00010bd2ae68();
    func_0x00010bd2ae7c();
    func_0x00010bd2af5c();
    func_0x00010bd2afb4();
    if (iVar1 != 2) {
      func_0x00010bd2aec4();
      FUN_10bdb2a00();
      func_0x00010bd2ae58();
      func_0x00010b4c9df4();
      func_0x00010bd2aeac();
      func_0x00010bd2aea0();
      func_0x00010bd2b0a0();
      func_0x00010bd2af54();
      func_0x00010bd2ae94();
      func_0x00010bd2ae88();
      func_0x00010bd2af18();
      func_0x00010bd2ae68();
      func_0x00010bd2ae7c();
      func_0x00010bd2af5c();
      func_0x00010bd2afb4();
      if (iVar1 == 1) {
        puVar2 = (uint *)(ulong)*unaff_x19;
      }
      else {
        func_0x00010bd2aec4();
        FUN_10bdb2a00();
        func_0x00010bd2ae58();
        func_0x00010b4c9df4();
        func_0x00010bd2aeac();
        func_0x00010bd2aea0();
        func_0x00010bd2b090();
        func_0x00010bd2af54();
        func_0x00010bd2ae94();
        func_0x00010bd2ae88();
        func_0x00010bd2af18();
        func_0x00010bd2ae68();
        func_0x00010bd2ae7c();
        func_0x00010bd2af5c();
        func_0x00010bd2afb4();
        if (iVar1 == 4) {
          return *(uint **)unaff_x19;
        }
        func_0x00010bd2aec4();
        FUN_10bdb2a00();
        func_0x00010bd2ae58();
        func_0x00010bd16784();
        func_0x00010bd2aeac();
        func_0x00010bd2aea0();
        func_0x00010bd2b080();
        func_0x00010bd2af54();
        func_0x00010bd2ae94();
        func_0x00010bd2ae88();
        func_0x00010bd2af18();
        func_0x00010bd2ae68();
        func_0x00010bd2ae7c();
        func_0x00010bd2af5c();
        func_0x00010bd2afb4();
        if (iVar1 == 3) {
          puVar2 = (uint *)(ulong)*unaff_x19;
        }
        else {
          func_0x00010bd2aec4();
          FUN_10bdb2a00();
          func_0x00010bd2ae58();
          func_0x00010bd16784();
          func_0x00010bd2aeac();
          func_0x00010bd2aea0();
          func_0x00010bd2b0d0();
          func_0x00010bd2af54();
          func_0x00010bd2ae94();
          func_0x00010bd2ae88();
          func_0x00010bd2af18();
          func_0x00010bd2ae68();
          func_0x00010bd2ae7c();
          func_0x00010bd2af5c();
          func_0x00010bd2afb4();
          if (iVar1 != 7) {
            func_0x00010bd2aec4();
            FUN_10bdb2a00();
            func_0x00010bd2ae58();
            func_0x00010b4bfe50();
            func_0x00010bd2aeac();
            func_0x00010bd2aea0();
            func_0x00010bd2b0c0();
            func_0x00010bd2af54();
            func_0x00010bd2ae94();
            func_0x00010bd2ae88();
            func_0x00010bd2af18();
            func_0x00010bd2ae68();
            func_0x00010bd2ae7c();
            func_0x00010bd2af5c();
            func_0x00010bd2afd8();
            if ((extraout_w8 & 1) != 0) {
              func_0x00010bd2a2d0(CONCAT44(extraout_var,extraout_w8) + -1);
            }
            __ZdlPv();
            return unaff_x19;
          }
          puVar2 = (uint *)(ulong)(byte)*unaff_x19;
        }
      }
      return puVar2;
    }
    unaff_x19 = *(uint **)unaff_x19;
  }
  return unaff_x19;
}



/* Entry: 10bd28274; end: 10bd282eb;  */

uint * FUN_10bd28274(int param_1)

{
  uint *puVar1;
  uint extraout_w8;
  undefined4 extraout_var;
  uint *unaff_x19;
  
  func_0x00010bd2afb4();
  if (param_1 != 9) {
    func_0x00010bd2aec4();
    FUN_10bdb2a00();
    func_0x00010bd2ae58();
    func_0x00010bd16784();
    func_0x00010bd2aeac();
    func_0x00010bd2aea0();
    func_0x00010bd2b0b0();
    func_0x00010bd2af54();
    func_0x00010bd2ae94();
    func_0x00010bd2ae88();
    func_0x00010bd2af18();
    func_0x00010bd2ae68();
    func_0x00010bd2ae7c();
    func_0x00010bd2af5c();
    func_0x00010bd2afb4();
    if (param_1 != 2) {
      func_0x00010bd2aec4();
      FUN_10bdb2a00();
      func_0x00010bd2ae58();
      func_0x00010b4c9df4();
      func_0x00010bd2aeac();
      func_0x00010bd2aea0();
      func_0x00010bd2b0a0();
      func_0x00010bd2af54();
      func_0x00010bd2ae94();
      func_0x00010bd2ae88();
      func_0x00010bd2af18();
      func_0x00010bd2ae68();
      func_0x00010bd2ae7c();
      func_0x00010bd2af5c();
      func_0x00010bd2afb4();
      if (param_1 == 1) {
        puVar1 = (uint *)(ulong)*unaff_x19;
      }
      else {
        func_0x00010bd2aec4();
        FUN_10bdb2a00();
        func_0x00010bd2ae58();
        func_0x00010b4c9df4();
        func_0x00010bd2aeac();
        func_0x00010bd2aea0();
        func_0x00010bd2b090();
        func_0x00010bd2af54();
        func_0x00010bd2ae94();
        func_0x00010bd2ae88();
        func_0x00010bd2af18();
        func_0x00010bd2ae68();
        func_0x00010bd2ae7c();
        func_0x00010bd2af5c();
        func_0x00010bd2afb4();
        if (param_1 == 4) {
          return *(uint **)unaff_x19;
        }
        func_0x00010bd2aec4();
        FUN_10bdb2a00();
        func_0x00010bd2ae58();
        func_0x00010bd16784();
        func_0x00010bd2aeac();
        func_0x00010bd2aea0();
        func_0x00010bd2b080();
        func_0x00010bd2af54();
        func_0x00010bd2ae94();
        func_0x00010bd2ae88();
        func_0x00010bd2af18();
        func_0x00010bd2ae68();
        func_0x00010bd2ae7c();
        func_0x00010bd2af5c();
        func_0x00010bd2afb4();
        if (param_1 == 3) {
          puVar1 = (uint *)(ulong)*unaff_x19;
        }
        else {
          func_0x00010bd2aec4();
          FUN_10bdb2a00();
          func_0x00010bd2ae58();
          func_0x00010bd16784();
          func_0x00010bd2aeac();
          func_0x00010bd2aea0();
          func_0x00010bd2b0d0();
          func_0x00010bd2af54();
          func_0x00010bd2ae94();
          func_0x00010bd2ae88();
          func_0x00010bd2af18();
          func_0x00010bd2ae68();
          func_0x00010bd2ae7c();
          func_0x00010bd2af5c();
          func_0x00010bd2afb4();
          if (param_1 != 7) {
            func_0x00010bd2aec4();
            FUN_10bdb2a00();
            func_0x00010bd2ae58();
            func_0x00010b4bfe50();
            func_0x00010bd2aeac();
            func_0x00010bd2aea0();
            func_0x00010bd2b0c0();
            func_0x00010bd2af54();
            func_0x00010bd2ae94();
            func_0x00010bd2ae88();
            func_0x00010bd2af18();
            func_0x00010bd2ae68();
            func_0x00010bd2ae7c();
            func_0x00010bd2af5c();
            func_0x00010bd2afd8();
            if ((extraout_w8 & 1) != 0) {
              func_0x00010bd2a2d0(CONCAT44(extraout_var,extraout_w8) + -1);
            }
            __ZdlPv();
            return unaff_x19;
          }
          puVar1 = (uint *)(ulong)(byte)*unaff_x19;
        }
      }
      return puVar1;
    }
    unaff_x19 = *(uint **)unaff_x19;
  }
  return unaff_x19;
}



/* Entry: 10bd282ec; end: 10bd28363;  */

uint * FUN_10bd282ec(int param_1)

{
  uint *puVar1;
  uint extraout_w8;
  undefined4 extraout_var;
  uint *unaff_x19;
  
  func_0x00010bd2afb4();
  if (param_1 == 2) {
    return *(uint **)unaff_x19;
  }
  func_0x00010bd2aec4();
  FUN_10bdb2a00();
  func_0x00010bd2ae58();
  func_0x00010b4c9df4();
  func_0x00010bd2aeac();
  func_0x00010bd2aea0();
  func_0x00010bd2b0a0();
  func_0x00010bd2af54();
  func_0x00010bd2ae94();
  func_0x00010bd2ae88();
  func_0x00010bd2af18();
  func_0x00010bd2ae68();
  func_0x00010bd2ae7c();
  func_0x00010bd2af5c();
  func_0x00010bd2afb4();
  if (param_1 == 1) {
    puVar1 = (uint *)(ulong)*unaff_x19;
  }
  else {
    func_0x00010bd2aec4();
    FUN_10bdb2a00();
    func_0x00010bd2ae58();
    func_0x00010b4c9df4();
    func_0x00010bd2aeac();
    func_0x00010bd2aea0();
    func_0x00010bd2b090();
    func_0x00010bd2af54();
    func_0x00010bd2ae94();
    func_0x00010bd2ae88();
    func_0x00010bd2af18();
    func_0x00010bd2ae68();
    func_0x00010bd2ae7c();
    func_0x00010bd2af5c();
    func_0x00010bd2afb4();
    if (param_1 == 4) {
      return *(uint **)unaff_x19;
    }
    func_0x00010bd2aec4();
    FUN_10bdb2a00();
    func_0x00010bd2ae58();
    func_0x00010bd16784();
    func_0x00010bd2aeac();
    func_0x00010bd2aea0();
    func_0x00010bd2b080();
    func_0x00010bd2af54();
    func_0x00010bd2ae94();
    func_0x00010bd2ae88();
    func_0x00010bd2af18();
    func_0x00010bd2ae68();
    func_0x00010bd2ae7c();
    func_0x00010bd2af5c();
    func_0x00010bd2afb4();
    if (param_1 == 3) {
      puVar1 = (uint *)(ulong)*unaff_x19;
    }
    else {
      func_0x00010bd2aec4();
      FUN_10bdb2a00();
      func_0x00010bd2ae58();
      func_0x00010bd16784();
      func_0x00010bd2aeac();
      func_0x00010bd2aea0();
      func_0x00010bd2b0d0();
      func_0x00010bd2af54();
      func_0x00010bd2ae94();
      func_0x00010bd2ae88();
      func_0x00010bd2af18();
      func_0x00010bd2ae68();
      func_0x00010bd2ae7c();
      func_0x00010bd2af5c();
      func_0x00010bd2afb4();
      if (param_1 != 7) {
        func_0x00010bd2aec4();
        FUN_10bdb2a00();
        func_0x00010bd2ae58();
        func_0x00010b4bfe50();
        func_0x00010bd2aeac();
        func_0x00010bd2aea0();
        func_0x00010bd2b0c0();
        func_0x00010bd2af54();
        func_0x00010bd2ae94();
        func_0x00010bd2ae88();
        func_0x00010bd2af18();
        func_0x00010bd2ae68();
        func_0x00010bd2ae7c();
        func_0x00010bd2af5c();
        func_0x00010bd2afd8();
        if ((extraout_w8 & 1) != 0) {
          func_0x00010bd2a2d0(CONCAT44(extraout_var,extraout_w8) + -1);
        }
        __ZdlPv();
        return unaff_x19;
      }
      puVar1 = (uint *)(ulong)(byte)*unaff_x19;
    }
  }
  return puVar1;
}



/* Entry: 10bd28364; end: 10bd283db;  */

uint * FUN_10bd28364(int param_1)

{
  uint *puVar1;
  uint extraout_w8;
  undefined4 extraout_var;
  uint *unaff_x19;
  
  func_0x00010bd2afb4();
  if (param_1 == 1) {
    puVar1 = (uint *)(ulong)*unaff_x19;
  }
  else {
    func_0x00010bd2aec4();
    FUN_10bdb2a00();
    func_0x00010bd2ae58();
    func_0x00010b4c9df4();
    func_0x00010bd2aeac();
    func_0x00010bd2aea0();
    func_0x00010bd2b090();
    func_0x00010bd2af54();
    func_0x00010bd2ae94();
    func_0x00010bd2ae88();
    func_0x00010bd2af18();
    func_0x00010bd2ae68();
    func_0x00010bd2ae7c();
    func_0x00010bd2af5c();
    func_0x00010bd2afb4();
    if (param_1 == 4) {
      return *(uint **)unaff_x19;
    }
    func_0x00010bd2aec4();
    FUN_10bdb2a00();
    func_0x00010bd2ae58();
    func_0x00010bd16784();
    func_0x00010bd2aeac();
    func_0x00010bd2aea0();
    func_0x00010bd2b080();
    func_0x00010bd2af54();
    func_0x00010bd2ae94();
    func_0x00010bd2ae88();
    func_0x00010bd2af18();
    func_0x00010bd2ae68();
    func_0x00010bd2ae7c();
    func_0x00010bd2af5c();
    func_0x00010bd2afb4();
    if (param_1 == 3) {
      puVar1 = (uint *)(ulong)*unaff_x19;
    }
    else {
      func_0x00010bd2aec4();
      FUN_10bdb2a00();
      func_0x00010bd2ae58();
      func_0x00010bd16784();
      func_0x00010bd2aeac();
      func_0x00010bd2aea0();
      func_0x00010bd2b0d0();
      func_0x00010bd2af54();
      func_0x00010bd2ae94();
      func_0x00010bd2ae88();
      func_0x00010bd2af18();
      func_0x00010bd2ae68();
      func_0x00010bd2ae7c();
      func_0x00010bd2af5c();
      func_0x00010bd2afb4();
      if (param_1 != 7) {
        func_0x00010bd2aec4();
        FUN_10bdb2a00();
        func_0x00010bd2ae58();
        func_0x00010b4bfe50();
        func_0x00010bd2aeac();
        func_0x00010bd2aea0();
        func_0x00010bd2b0c0();
        func_0x00010bd2af54();
        func_0x00010bd2ae94();
        func_0x00010bd2ae88();
        func_0x00010bd2af18();
        func_0x00010bd2ae68();
        func_0x00010bd2ae7c();
        func_0x00010bd2af5c();
        func_0x00010bd2afd8();
        if ((extraout_w8 & 1) != 0) {
          func_0x00010bd2a2d0(CONCAT44(extraout_var,extraout_w8) + -1);
        }
        __ZdlPv();
        return unaff_x19;
      }
      puVar1 = (uint *)(ulong)(byte)*unaff_x19;
    }
  }
  return puVar1;
}



/* Entry: 10bd283dc; end: 10bd28453;  */

uint * FUN_10bd283dc(int param_1)

{
  uint *puVar1;
  uint extraout_w8;
  undefined4 extraout_var;
  uint *unaff_x19;
  
  func_0x00010bd2afb4();
  if (param_1 == 4) {
    return *(uint **)unaff_x19;
  }
  func_0x00010bd2aec4();
  FUN_10bdb2a00();
  func_0x00010bd2ae58();
  func_0x00010bd16784();
  func_0x00010bd2aeac();
  func_0x00010bd2aea0();
  func_0x00010bd2b080();
  func_0x00010bd2af54();
  func_0x00010bd2ae94();
  func_0x00010bd2ae88();
  func_0x00010bd2af18();
  func_0x00010bd2ae68();
  func_0x00010bd2ae7c();
  func_0x00010bd2af5c();
  func_0x00010bd2afb4();
  if (param_1 == 3) {
    puVar1 = (uint *)(ulong)*unaff_x19;
  }
  else {
    func_0x00010bd2aec4();
    FUN_10bdb2a00();
    func_0x00010bd2ae58();
    func_0x00010bd16784();
    func_0x00010bd2aeac();
    func_0x00010bd2aea0();
    func_0x00010bd2b0d0();
    func_0x00010bd2af54();
    func_0x00010bd2ae94();
    func_0x00010bd2ae88();
    func_0x00010bd2af18();
    func_0x00010bd2ae68();
    func_0x00010bd2ae7c();
    func_0x00010bd2af5c();
    func_0x00010bd2afb4();
    if (param_1 != 7) {
      func_0x00010bd2aec4();
      FUN_10bdb2a00();
      func_0x00010bd2ae58();
      func_0x00010b4bfe50();
      func_0x00010bd2aeac();
      func_0x00010bd2aea0();
      func_0x00010bd2b0c0();
      func_0x00010bd2af54();
      func_0x00010bd2ae94();
      func_0x00010bd2ae88();
      func_0x00010bd2af18();
      func_0x00010bd2ae68();
      func_0x00010bd2ae7c();
      func_0x00010bd2af5c();
      func_0x00010bd2afd8();
      if ((extraout_w8 & 1) != 0) {
        func_0x00010bd2a2d0(CONCAT44(extraout_var,extraout_w8) + -1);
      }
      __ZdlPv();
      return unaff_x19;
    }
    puVar1 = (uint *)(ulong)(byte)*unaff_x19;
  }
  return puVar1;
}



/* Entry: 10bd28454; end: 10bd284cb;  */

uint * FUN_10bd28454(int param_1)

{
  uint *puVar1;
  uint extraout_w8;
  undefined4 extraout_var;
  uint *unaff_x19;
  
  func_0x00010bd2afb4();
  if (param_1 == 3) {
    puVar1 = (uint *)(ulong)*unaff_x19;
  }
  else {
    func_0x00010bd2aec4();
    FUN_10bdb2a00();
    func_0x00010bd2ae58();
    func_0x00010bd16784();
    func_0x00010bd2aeac();
    func_0x00010bd2aea0();
    func_0x00010bd2b0d0();
    func_0x00010bd2af54();
    func_0x00010bd2ae94();
    func_0x00010bd2ae88();
    func_0x00010bd2af18();
    func_0x00010bd2ae68();
    func_0x00010bd2ae7c();
    func_0x00010bd2af5c();
    func_0x00010bd2afb4();
    if (param_1 != 7) {
      func_0x00010bd2aec4();
      FUN_10bdb2a00();
      func_0x00010bd2ae58();
      func_0x00010b4bfe50();
      func_0x00010bd2aeac();
      func_0x00010bd2aea0();
      func_0x00010bd2b0c0();
      func_0x00010bd2af54();
      func_0x00010bd2ae94();
      func_0x00010bd2ae88();
      func_0x00010bd2af18();
      func_0x00010bd2ae68();
      func_0x00010bd2ae7c();
      func_0x00010bd2af5c();
      func_0x00010bd2afd8();
      if ((extraout_w8 & 1) != 0) {
        func_0x00010bd2a2d0(CONCAT44(extraout_var,extraout_w8) + -1);
      }
      __ZdlPv();
      return unaff_x19;
    }
    puVar1 = (uint *)(ulong)(byte)*unaff_x19;
  }
  return puVar1;
}



/* Entry: 10bd284cc; end: 10bd28543;  */

byte * FUN_10bd284cc(int param_1)

{
  uint extraout_w8;
  undefined4 extraout_var;
  byte *unaff_x19;
  
  func_0x00010bd2afb4();
  if (param_1 != 7) {
    func_0x00010bd2aec4();
    FUN_10bdb2a00();
    func_0x00010bd2ae58();
    func_0x00010b4bfe50();
    func_0x00010bd2aeac();
    func_0x00010bd2aea0();
    func_0x00010bd2b0c0();
    func_0x00010bd2af54();
    func_0x00010bd2ae94();
    func_0x00010bd2ae88();
    func_0x00010bd2af18();
    func_0x00010bd2ae68();
    func_0x00010bd2ae7c();
    func_0x00010bd2af5c();
    func_0x00010bd2afd8();
    if ((extraout_w8 & 1) != 0) {
      func_0x00010bd2a2d0(CONCAT44(extraout_var,extraout_w8) + -1);
    }
    __ZdlPv();
    return unaff_x19;
  }
  return (byte *)(ulong)*unaff_x19;
}



/* Entry: 10bd28544; end: 10bd285a7;  */

void FUN_10bd28544(void)

{
  uint extraout_w8;
  undefined4 extraout_var;
  
  func_0x00010bd2afd8();
  if ((extraout_w8 & 1) != 0) {
    func_0x00010bd2a2d0(CONCAT44(extraout_var,extraout_w8) + -1);
  }
  __ZdlPv();
  return;
}



/* Entry: 10bd285a8; end: 10bd28977;  */

void FUN_10bd285a8(long *param_1)

{
  ulong *puVar1;
  code *pcVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  int iVar4;
  long *plVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong *apuStack_d0 [12];
  undefined4 uStack_70;
  undefined8 uStack_68;
  
  uStack_68 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if (((param_1[1] & 1U) != 0) && (in_ZR = 0, *(int *)(param_1[1] + 0x1f) == 1)) {
    plVar5 = param_1;
    FUN_10bd28a98();
    puVar6 = (ulong *)(plVar5 + 3);
    apuStack_d0[0] = puVar6;
    func_0x000107c2b9f0();
    in_ZR = (int)plVar5[4] == 1;
    if ((bool)in_ZR) {
      func_0x00010bd2b134(*(undefined8 *)(*param_1 + 0x28));
      func_0x00010bd2b06c();
      if ((int)puVar6[1] != 0) {
        uVar3 = (*puVar6 & 1) == 0;
        puVar1 = puVar6;
        if (!(bool)uVar3) {
          puVar1 = (ulong *)(*puVar6 + 7);
        }
        uVar7 = *puVar1;
        FUN_10bd2b4f4(uVar7);
        FUN_10bd2b4f4();
        func_0x00010bd2afbc();
        if ((bool)uVar3) {
          iVar4 = (int)*(undefined8 *)(uVar7 + 0x38);
        }
        else {
          iVar4 = 0;
        }
        in_ZR = (*puVar6 & 1) == 0;
        if (((long)(int)puVar6[1] & 0x1fffffffffffffffU) != 0) {
          uStack_70 = 0;
          func_0x00010b91adc8();
                    /* WARNING: Could not recover jumptable at 0x00010bd286c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((ulong)(byte)(&UNK_10e60b931)[iVar4 - 1] * 4 + 0x10bd286cc))();
          return;
        }
      }
      *(undefined4 *)(plVar5 + 4) = 2;
    }
    func_0x000107c30384(apuStack_d0);
  }
  func_0x00010bd2b13c(uStack_68);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10bd28934);
  (*pcVar2)();
}



/* Entry: 10bd28978; end: 10bd2898f;  */

void FUN_10bd28978(long param_1)

{
  FUN_10bd28a98();
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}



/* Entry: 10bd28990; end: 10bd28a2b;  */

void FUN_10bd28990(undefined8 param_1)

{
  undefined8 *unaff_x19;
  long *unaff_x20;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  func_0x00010bd2afe8();
  func_0x00010bd2b04c();
  func_0x00010564c19c(&uStack_38,param_1);
  unaff_x19[1] = uStack_30;
  *unaff_x19 = uStack_38;
  *(undefined4 *)(unaff_x19 + 2) = uStack_28;
  func_0x00010bd2b134(*(undefined8 *)(*unaff_x20 + 0x18));
  return;
}



/* Entry: 10bd28a2c; end: 10bd28a97;  */

void FUN_10bd28a2c(long param_1)

{
  ulong extraout_x8;
  long lStack_28;
  
  func_0x00010bd2afd8();
  if (((extraout_x8 & 1) == 0) || (*(int *)(extraout_x8 + 0x1f) == 0)) {
    func_0x00010bd2b06c();
    lStack_28 = param_1 + 0x18;
    func_0x000107c2b9f0();
    if (*(int *)(param_1 + 0x20) == 0) {
      FUN_10bd28c14();
      *(undefined4 *)(param_1 + 0x20) = 2;
    }
    func_0x000107c30384(&lStack_28);
  }
  return;
}



/* Entry: 10bd28a98; end: 10bd28aaf;  */

long FUN_10bd28a98(long param_1)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    return *(ulong *)(param_1 + 8) - 1;
  }
  puVar2 = (ulong *)(param_1 + 8);
  uStack_48 = *puVar2;
  uVar3 = uStack_48;
  if ((uStack_48 & 1) == 0) {
    puVar1 = &uStack_38;
    uStack_40 = uStack_48;
    uStack_38 = uStack_48;
    func_0x00010bd2a414(puVar1,&uStack_48);
    uVar3 = (long)puVar1 + 1;
    FUN_10bd28b84(puVar2,&uStack_40,uVar3,4);
    if (((int)puVar2 == 0) && (uVar3 = uStack_40, uStack_48 == 0)) {
      if (puVar1 != (ulong *)0x0) {
        func_0x00010bd2a2d0(puVar1);
      }
      __ZdlPv(puVar1);
      uVar3 = uStack_40;
    }
  }
  return uVar3 - 1;
}



/* Entry: 10bd28ab0; end: 10bd28adb;  */

long FUN_10bd28ab0(long param_1)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  
  FUN_10bd28a2c();
  FUN_10bd28adc(param_1);
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    return *(ulong *)(param_1 + 8) - 1;
  }
  puVar2 = (ulong *)(param_1 + 8);
  uStack_48 = *puVar2;
  uVar3 = uStack_48;
  if ((uStack_48 & 1) == 0) {
    puVar1 = &uStack_38;
    uStack_40 = uStack_48;
    uStack_38 = uStack_48;
    func_0x00010bd2a414(puVar1,&uStack_48);
    uVar3 = (long)puVar1 + 1;
    FUN_10bd28b84(puVar2,&uStack_40,uVar3,4);
    if (((int)puVar2 == 0) && (uVar3 = uStack_40, uStack_48 == 0)) {
      if (puVar1 != (ulong *)0x0) {
        func_0x00010bd2a2d0(puVar1);
      }
      __ZdlPv(puVar1);
      uVar3 = uStack_40;
    }
  }
  return uVar3 - 1;
}



/* Entry: 10bd28adc; end: 10bd28af7;  */

void FUN_10bd28adc(long param_1)

{
  FUN_10bd28a98();
  *(undefined4 *)(param_1 + 0x20) = 1;
  return;
}



/* Entry: 10bd28af8; end: 10bd28b83;  */

long FUN_10bd28af8(long param_1)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  
  puVar2 = (ulong *)(param_1 + 8);
  uStack_48 = *puVar2;
  uVar3 = uStack_48;
  if ((uStack_48 & 1) == 0) {
    puVar1 = &uStack_38;
    uStack_40 = uStack_48;
    uStack_38 = uStack_48;
    func_0x00010bd2a414(puVar1,&uStack_48);
    uVar3 = (long)puVar1 + 1;
    FUN_10bd28b84(puVar2,&uStack_40,uVar3,4);
    if (((int)puVar2 == 0) && (uVar3 = uStack_40, uStack_48 == 0)) {
      if (puVar1 != (ulong *)0x0) {
        func_0x00010bd2a2d0(puVar1);
      }
      __ZdlPv(puVar1);
      uVar3 = uStack_40;
    }
  }
  return uVar3 - 1;
}



/* Entry: 10bd28b84; end: 10bd28baf;  */

undefined8 FUN_10bd28b84(long *param_1,long *param_2,long param_3,int param_4)

{
  int iVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  iVar1 = 2;
  if (param_4 != 4) {
    iVar1 = param_4;
  }
  iVar2 = 0;
  if (param_4 != 3) {
    iVar2 = iVar1;
  }
  switch(param_4) {
  case 1:
  case 2:
    if (iVar2 - 1U < 2) {
      lVar6 = *param_2;
      do {
        lVar5 = *param_1;
        if (lVar5 != lVar6) {
LAB_10bd2a6b8:
          ClearExclusiveLocal();
          *param_2 = lVar5;
          return 0;
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar4) {
          *param_1 = param_3;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    else if (iVar2 == 5) {
      lVar6 = *param_2;
      do {
        lVar5 = *param_1;
        if (lVar5 != lVar6) goto LAB_10bd2a6b8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar4) {
          *param_1 = param_3;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    else {
      lVar6 = *param_2;
      do {
        lVar5 = *param_1;
        if (lVar5 != lVar6) goto LAB_10bd2a6b8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar4) {
          *param_1 = param_3;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    break;
  case 3:
    if (iVar2 - 1U < 2) {
      lVar6 = *param_2;
      do {
        lVar5 = *param_1;
        if (lVar5 != lVar6) goto LAB_10bd2a6b8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar4) {
          *param_1 = param_3;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    else if (iVar2 == 5) {
      lVar6 = *param_2;
      do {
        lVar5 = *param_1;
        if (lVar5 != lVar6) goto LAB_10bd2a6b8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar4) {
          *param_1 = param_3;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    else {
      lVar6 = *param_2;
      do {
        lVar5 = *param_1;
        if (lVar5 != lVar6) goto LAB_10bd2a6b8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar4) {
          *param_1 = param_3;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    break;
  case 4:
    if (iVar2 - 1U < 2) {
      lVar6 = *param_2;
      do {
        lVar5 = *param_1;
        if (lVar5 != lVar6) goto LAB_10bd2a6b8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar4) {
          *param_1 = param_3;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    else if (iVar2 == 5) {
      lVar6 = *param_2;
      do {
        lVar5 = *param_1;
        if (lVar5 != lVar6) goto LAB_10bd2a6b8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar4) {
          *param_1 = param_3;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    else {
      lVar6 = *param_2;
      do {
        lVar5 = *param_1;
        if (lVar5 != lVar6) goto LAB_10bd2a6b8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar4) {
          *param_1 = param_3;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    break;
  case 5:
    if (iVar2 - 1U < 2) {
      lVar6 = *param_2;
      do {
        lVar5 = *param_1;
        if (lVar5 != lVar6) goto LAB_10bd2a6b8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar4) {
          *param_1 = param_3;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    else if (iVar2 == 5) {
      lVar6 = *param_2;
      do {
        lVar5 = *param_1;
        if (lVar5 != lVar6) goto LAB_10bd2a6b8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar4) {
          *param_1 = param_3;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    else {
      lVar6 = *param_2;
      do {
        lVar5 = *param_1;
        if (lVar5 != lVar6) goto LAB_10bd2a6b8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar4) {
          *param_1 = param_3;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    break;
  default:
    if (iVar2 - 1U < 2) {
      lVar6 = *param_2;
      do {
        lVar5 = *param_1;
        if (lVar5 != lVar6) goto LAB_10bd2a6b8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar4) {
          *param_1 = param_3;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    else if (iVar2 == 5) {
      lVar6 = *param_2;
      do {
        lVar5 = *param_1;
        if (lVar5 != lVar6) goto LAB_10bd2a6b8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar4) {
          *param_1 = param_3;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    else {
      lVar6 = *param_2;
      do {
        lVar5 = *param_1;
        if (lVar5 != lVar6) goto LAB_10bd2a6b8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar4) {
          *param_1 = param_3;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
  }
  return 1;
}



/* Entry: 10bd28bb0; end: 10bd28c13;  */

long * FUN_10bd28bb0(long *param_1)

{
  if ((param_1[1] & 1U) == 0) {
    param_1 = (long *)0x0;
  }
  else {
    func_0x000107c2b9f0();
    (**(code **)(*param_1 + 0x48))(param_1);
    func_0x00010bd2afcc();
  }
  return param_1;
}



/* Entry: 10bd28c14; end: 10bd28fb7;  */

void FUN_10bd28c14(long *param_1)

{
  code *pcVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long lStack_128;
  undefined8 uStack_120;
  undefined4 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined1 auStack_a0 [48];
  undefined8 uStack_70;
  
  uStack_70 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = param_1;
  (**(code **)(*param_1 + 0x50))();
  FUN_10bd2b4f4();
  plVar5 = plVar4;
  FUN_10bd2b4f4();
  plVar6 = plVar5;
  func_0x00010bd2afbc();
  if ((bool)in_ZR) {
    iVar3 = (int)plVar5[7];
  }
  else {
    iVar3 = 0;
  }
  func_0x00010bd2b06c();
  FUN_10bd1d41c();
  func_0x00010bd2b128(&lStack_c0);
  func_0x00010bd2b128(&uStack_110);
  func_0x00010564c19c(&lStack_128,param_1 + 2);
  uStack_b8 = uStack_120;
  lStack_c0 = lStack_128;
  uStack_b0 = uStack_118;
  (**(code **)(*param_1 + 0x18))(&lStack_c0);
  uStack_110 = 0;
  uStack_108 = 0;
  uStack_100 = 0;
  uVar2 = lStack_c0 == 0;
  if (!(bool)uVar2) {
    uVar7 = param_1[1];
    if ((uVar7 & 1) != 0) {
      uVar7 = *(ulong *)(uVar7 + 0xf);
    }
    (**(code **)(*plVar4 + 0x10))(plVar4,uVar7);
    func_0x00010bd206f0(plVar6,plVar4);
    func_0x00010b91adc8();
                    /* WARNING: Could not recover jumptable at 0x00010bd28d3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10e60b944)[iVar3 - 1] * 4 + 0x10bd28d40))();
    return;
  }
  func_0x00010bd2b100(&uStack_110);
  FUN_10bd22954(auStack_a0);
  func_0x00010bd2b13c(uStack_70);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bd28f5c);
  (*pcVar1)();
}



/* Entry: 10bd28fb8; end: 10bd2902f;  */

long * FUN_10bd28fb8(undefined8 param_1,long *param_2)

{
  long *plVar1;
  undefined1 uVar2;
  undefined *puVar3;
  ulong extraout_x8;
  long *unaff_x19;
  undefined4 uVar4;
  undefined8 uVar5;
  
  func_0x00010bd2af70();
  if ((int)param_2 == 9) {
    plVar1 = (long *)*unaff_x19;
  }
  else {
    func_0x00010bd2aec4();
    FUN_10bdb2a00();
    func_0x00010bd2ae58();
    func_0x00010bcfd128();
    func_0x00010bd2aeac();
    func_0x00010bd2aea0();
    func_0x00010bd2b0b0();
    func_0x00010bd2af54();
    func_0x00010bd2ae94();
    func_0x00010bd2ae88();
    func_0x00010bd2aeb8();
    func_0x00010bd2ae68();
    func_0x00010bd2ae7c();
    func_0x00010bd2af5c();
    func_0x00010bd2af70();
    if ((int)param_2 != 2) {
      func_0x00010bd2aec4();
      FUN_10bdb2a00();
      func_0x00010bd2ae58();
      FUN_10bd2a394();
      func_0x00010bd2aeac();
      func_0x00010bd2aea0();
      func_0x00010bd2b0a0();
      func_0x00010bd2af54();
      func_0x00010bd2ae94();
      func_0x00010bd2ae88();
      func_0x00010bd2aeb8();
      func_0x00010bd2ae68();
      func_0x00010bd2ae7c();
      func_0x00010bd2af5c();
      func_0x00010bd2af70();
      if ((int)param_2 == 1) {
        plVar1 = (long *)(ulong)*(uint *)*unaff_x19;
      }
      else {
        func_0x00010bd2aec4();
        FUN_10bdb2a00();
        func_0x00010bd2ae58();
        FUN_10bd2a394();
        func_0x00010bd2aeac();
        func_0x00010bd2aea0();
        func_0x00010bd2b090();
        func_0x00010bd2af54();
        func_0x00010bd2ae94();
        func_0x00010bd2ae88();
        func_0x00010bd2aeb8();
        func_0x00010bd2ae68();
        func_0x00010bd2ae7c();
        func_0x00010bd2af5c();
        func_0x00010bd2af70();
        if ((int)param_2 == 4) {
          return *(long **)*unaff_x19;
        }
        func_0x00010bd2aec4();
        FUN_10bdb2a00();
        func_0x00010bd2ae58();
        func_0x00010bcfd128();
        func_0x00010bd2aeac();
        func_0x00010bd2aea0();
        func_0x00010bd2b080();
        func_0x00010bd2af54();
        func_0x00010bd2ae94();
        func_0x00010bd2ae88();
        func_0x00010bd2aeb8();
        func_0x00010bd2ae68();
        func_0x00010bd2ae7c();
        func_0x00010bd2af5c();
        func_0x00010bd2af70();
        if ((int)param_2 == 3) {
          plVar1 = (long *)(ulong)*(uint *)*unaff_x19;
        }
        else {
          func_0x00010bd2aec4();
          FUN_10bdb2a00();
          func_0x00010bd2ae58();
          func_0x00010bcfd128();
          func_0x00010bd2aeac();
          func_0x00010bd2aea0();
          func_0x00010bd2b0d0();
          func_0x00010bd2af54();
          func_0x00010bd2ae94();
          func_0x00010bd2ae88();
          func_0x00010bd2aeb8();
          func_0x00010bd2ae68();
          func_0x00010bd2ae7c();
          func_0x00010bd2af5c();
          func_0x00010bd2af70();
          if ((int)param_2 == 7) {
            plVar1 = (long *)(ulong)*(byte *)*unaff_x19;
          }
          else {
            func_0x00010bd2aec4();
            FUN_10bdb2a00();
            func_0x00010bd2ae58();
            func_0x00010b4c3120();
            func_0x00010bd2aeac();
            func_0x00010bd2aea0();
            func_0x00010bd2b0c0();
            func_0x00010bd2af54();
            func_0x00010bd2ae94();
            func_0x00010bd2ae88();
            func_0x00010bd2aeb8();
            func_0x00010bd2ae68();
            func_0x00010bd2ae7c();
            func_0x00010bd2af5c();
            func_0x00010bd2af70();
            if ((int)param_2 == 5) {
              return param_2;
            }
            func_0x00010bd2aec4();
            FUN_10bdb2a00();
            func_0x00010bd2ae58();
            func_0x00010bcfd128();
            func_0x00010bd2aeac();
            func_0x00010bd2aea0();
            func_0x00010bd2af54();
            func_0x00010bd2ae94();
            func_0x00010bd2ae88();
            func_0x00010bd2aeb8();
            func_0x00010bd2ae68();
            func_0x00010bd2ae7c();
            func_0x00010bd2af5c();
            func_0x00010bd2af70();
            if ((int)param_2 == 6) {
              return param_2;
            }
            func_0x00010bd2aec4();
            FUN_10bdb2a00();
            func_0x00010bd2ae58();
            FUN_10bd2a394();
            func_0x00010bd2aeac();
            func_0x00010bd2aea0();
            func_0x00010bd2af54();
            func_0x00010bd2ae94();
            func_0x00010bd2ae88();
            func_0x00010bd2aeb8();
            func_0x00010bd2ae68();
            func_0x00010bd2ae7c();
            func_0x00010bd2af5c();
            func_0x00010bd2af70();
            if ((int)param_2 != 8) {
              func_0x00010bd2aec4();
              FUN_10bdb2a00();
              func_0x00010bd2ae58();
              func_0x00010b4c3120();
              func_0x00010bd2aeac();
              func_0x00010bd2aea0();
              func_0x00010bd2af54();
              func_0x00010bd2ae94();
              func_0x00010bd2ae88();
              func_0x00010bd2aeb8();
              func_0x00010bd2ae68();
              func_0x00010bd2ae7c();
              func_0x00010bd2af5c();
              func_0x00010bd2af70();
              if ((int)param_2 == 10) {
                return (long *)*unaff_x19;
              }
              func_0x00010bd2aec4();
              FUN_10bdb2a00();
              func_0x00010bd2ae58();
              uVar4 = 0xf835e48;
              func_0x00010bd16744();
              func_0x00010bd2aeac();
              func_0x00010bd2aea0();
              func_0x00010bd2af54();
              func_0x00010bd2ae94();
              func_0x00010bd2ae88();
              func_0x00010bd2aeb8();
              func_0x00010bd2ae68();
              func_0x00010bd2ae7c();
              func_0x00010bd2af5c();
              func_0x00010bd2af70();
              if ((int)param_2 == 1) {
                *(undefined4 *)*unaff_x19 = uVar4;
              }
              else {
                func_0x00010bd2aec4();
                FUN_10bdb2a00();
                func_0x00010bd2ae58();
                puVar3 = &UNK_10f835e6a;
                func_0x00010bd2a3b4();
                func_0x00010bd2aeac();
                func_0x00010bd2aea0();
                func_0x00010bd2b090();
                func_0x00010bd2af54();
                func_0x00010bd2ae94();
                func_0x00010bd2ae88();
                func_0x00010bd2aeb8();
                func_0x00010bd2ae68();
                func_0x00010bd2ae7c();
                func_0x00010bd2af5c();
                func_0x00010bd2af70();
                if ((int)param_2 == 2) {
                  *(undefined **)*unaff_x19 = puVar3;
                }
                else {
                  func_0x00010bd2aec4();
                  FUN_10bdb2a00();
                  func_0x00010bd2ae58();
                  uVar4 = 0xf835e85;
                  func_0x00010bd2a3b4();
                  func_0x00010bd2aeac();
                  func_0x00010bd2aea0();
                  func_0x00010bd2b0a0();
                  func_0x00010bd2af54();
                  func_0x00010bd2ae94();
                  func_0x00010bd2ae88();
                  func_0x00010bd2aeb8();
                  func_0x00010bd2ae68();
                  func_0x00010bd2ae7c();
                  func_0x00010bd2af5c();
                  func_0x00010bd2af70();
                  if ((int)param_2 == 3) {
                    *(undefined4 *)*unaff_x19 = uVar4;
                  }
                  else {
                    func_0x00010bd2aec4();
                    FUN_10bdb2a00();
                    func_0x00010bd2ae58();
                    puVar3 = &UNK_10f835ea0;
                    func_0x00010bd2a3d4();
                    func_0x00010bd2aeac();
                    func_0x00010bd2aea0();
                    func_0x00010bd2b0d0();
                    func_0x00010bd2af54();
                    func_0x00010bd2ae94();
                    func_0x00010bd2ae88();
                    func_0x00010bd2aeb8();
                    func_0x00010bd2ae68();
                    func_0x00010bd2ae7c();
                    func_0x00010bd2af5c();
                    func_0x00010bd2af70();
                    if ((int)param_2 != 4) {
                      func_0x00010bd2aec4();
                      FUN_10bdb2a00();
                      func_0x00010bd2ae58();
                      func_0x00010bd2a3d4();
                      func_0x00010bd2aeac();
                      func_0x00010bd2aea0();
                      func_0x00010bd2b080();
                      func_0x00010bd2af54();
                      func_0x00010bd2ae94();
                      func_0x00010bd2ae88();
                      func_0x00010bd2aeb8();
                      func_0x00010bd2ae68();
                      func_0x00010bd2ae7c();
                      func_0x00010bd2af5c();
                      uVar5 = param_1;
                      func_0x00010bd2af70();
                      uVar4 = (undefined4)uVar5;
                      if ((int)param_2 == 5) {
                        *(undefined8 *)*unaff_x19 = param_1;
                      }
                      else {
                        func_0x00010bd2aec4();
                        FUN_10bdb2a00();
                        func_0x00010bd2ae58();
                        func_0x00010bd2a3d4();
                        func_0x00010bd2aeac();
                        func_0x00010bd2aea0();
                        func_0x00010bd2af54();
                        func_0x00010bd2ae94();
                        func_0x00010bd2ae88();
                        func_0x00010bd2aeb8();
                        func_0x00010bd2ae68();
                        func_0x00010bd2ae7c();
                        func_0x00010bd2af5c();
                        func_0x00010bd2af70();
                        if ((int)param_2 != 6) {
                          func_0x00010bd2aec4();
                          FUN_10bdb2a00();
                          func_0x00010bd2ae58();
                          uVar2 = 0xf4;
                          func_0x00010bd2a3b4();
                          func_0x00010bd2aeac();
                          func_0x00010bd2aea0();
                          func_0x00010bd2af54();
                          func_0x00010bd2ae94();
                          func_0x00010bd2ae88();
                          func_0x00010bd2aeb8();
                          func_0x00010bd2ae68();
                          func_0x00010bd2ae7c();
                          func_0x00010bd2af5c();
                          func_0x00010bd2af70();
                          if ((int)param_2 == 7) {
                            *(undefined1 *)*unaff_x19 = uVar2;
                            return param_2;
                          }
                          func_0x00010bd2aec4();
                          FUN_10bdb2a00();
                          func_0x00010bd2ae58();
                          puVar3 = &UNK_10f835f0f;
                          func_0x00010bd2a3f4();
                          func_0x00010bd2aeac();
                          func_0x00010bd2aea0();
                          func_0x00010bd2b0c0();
                          func_0x00010bd2af54();
                          func_0x00010bd2ae94();
                          func_0x00010bd2ae88();
                          func_0x00010bd2aeb8();
                          func_0x00010bd2ae68();
                          func_0x00010bd2ae7c();
                          func_0x00010bd2af5c();
                          func_0x00010bd2af70();
                          if ((int)param_2 != 9) {
                            func_0x00010bd2aec4();
                            FUN_10bdb2a00();
                            func_0x00010bd2ae58();
                            uVar4 = 0xf835f29;
                            func_0x00010bd2a3d4();
                            func_0x00010bd2aeac();
                            func_0x00010bd2aea0();
                            func_0x00010bd2b0b0();
                            func_0x00010bd2af54();
                            func_0x00010bd2ae94();
                            func_0x00010bd2ae88();
                            func_0x00010bd2aeb8();
                            func_0x00010bd2ae68();
                            func_0x00010bd2ae7c();
                            func_0x00010bd2af5c();
                            func_0x00010bd2af70();
                            if ((int)param_2 == 8) {
                              *(undefined4 *)*unaff_x19 = uVar4;
                              return param_2;
                            }
                            func_0x00010bd2aec4();
                            FUN_10bdb2a00();
                            func_0x00010bd2ae58();
                            func_0x00010bd2a3f4();
                            func_0x00010bd2aeac();
                            func_0x00010bd2aea0();
                            func_0x00010bd2af54();
                            func_0x00010bd2ae94();
                            func_0x00010bd2ae88();
                            func_0x00010bd2aeb8();
                            func_0x00010bd2ae68();
                            func_0x00010bd2ae7c();
                            func_0x00010bd2af5c();
                            func_0x00010bd2afd8();
                            if ((extraout_x8 & 1) != 0) {
                              FUN_10bd1d41c(extraout_x8 - 1);
                            }
                            func_0x00010bd2b134(*(undefined8 *)(*unaff_x19 + 0x28));
                            FUN_10bd28a98();
                            *(undefined4 *)(unaff_x19 + 4) = 0;
                            return unaff_x19;
                          }
                          plVar1 = (long *)*unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbce60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                          (*(code *)
                            PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5__110346350
                          )(plVar1,puVar3);
                          return plVar1;
                        }
                        *(undefined4 *)*unaff_x19 = uVar4;
                      }
                      return param_2;
                    }
                    *(undefined **)*unaff_x19 = puVar3;
                  }
                }
              }
              return param_2;
            }
            plVar1 = (long *)(ulong)*(uint *)*unaff_x19;
          }
        }
      }
      return plVar1;
    }
    plVar1 = *(long **)*unaff_x19;
  }
  return plVar1;
}



/* Entry: 10bd29030; end: 10bd290ab;  */

long * FUN_10bd29030(undefined8 param_1,long *param_2)

{
  long *plVar1;
  undefined1 uVar2;
  undefined *puVar3;
  ulong extraout_x8;
  long *unaff_x19;
  undefined4 uVar4;
  undefined8 uVar5;
  
  func_0x00010bd2af70();
  if ((int)param_2 == 2) {
    return *(long **)*unaff_x19;
  }
  func_0x00010bd2aec4();
  FUN_10bdb2a00();
  func_0x00010bd2ae58();
  FUN_10bd2a394();
  func_0x00010bd2aeac();
  func_0x00010bd2aea0();
  func_0x00010bd2b0a0();
  func_0x00010bd2af54();
  func_0x00010bd2ae94();
  func_0x00010bd2ae88();
  func_0x00010bd2aeb8();
  func_0x00010bd2ae68();
  func_0x00010bd2ae7c();
  func_0x00010bd2af5c();
  func_0x00010bd2af70();
  if ((int)param_2 == 1) {
    plVar1 = (long *)(ulong)*(uint *)*unaff_x19;
  }
  else {
    func_0x00010bd2aec4();
    FUN_10bdb2a00();
    func_0x00010bd2ae58();
    FUN_10bd2a394();
    func_0x00010bd2aeac();
    func_0x00010bd2aea0();
    func_0x00010bd2b090();
    func_0x00010bd2af54();
    func_0x00010bd2ae94();
    func_0x00010bd2ae88();
    func_0x00010bd2aeb8();
    func_0x00010bd2ae68();
    func_0x00010bd2ae7c();
    func_0x00010bd2af5c();
    func_0x00010bd2af70();
    if ((int)param_2 == 4) {
      return *(long **)*unaff_x19;
    }
    func_0x00010bd2aec4();
    FUN_10bdb2a00();
    func_0x00010bd2ae58();
    func_0x00010bcfd128();
    func_0x00010bd2aeac();
    func_0x00010bd2aea0();
    func_0x00010bd2b080();
    func_0x00010bd2af54();
    func_0x00010bd2ae94();
    func_0x00010bd2ae88();
    func_0x00010bd2aeb8();
    func_0x00010bd2ae68();
    func_0x00010bd2ae7c();
    func_0x00010bd2af5c();
    func_0x00010bd2af70();
    if ((int)param_2 == 3) {
      plVar1 = (long *)(ulong)*(uint *)*unaff_x19;
    }
    else {
      func_0x00010bd2aec4();
      FUN_10bdb2a00();
      func_0x00010bd2ae58();
      func_0x00010bcfd128();
      func_0x00010bd2aeac();
      func_0x00010bd2aea0();
      func_0x00010bd2b0d0();
      func_0x00010bd2af54();
      func_0x00010bd2ae94();
      func_0x00010bd2ae88();
      func_0x00010bd2aeb8();
      func_0x00010bd2ae68();
      func_0x00010bd2ae7c();
      func_0x00010bd2af5c();
      func_0x00010bd2af70();
      if ((int)param_2 == 7) {
        plVar1 = (long *)(ulong)*(byte *)*unaff_x19;
      }
      else {
        func_0x00010bd2aec4();
        FUN_10bdb2a00();
        func_0x00010bd2ae58();
        func_0x00010b4c3120();
        func_0x00010bd2aeac();
        func_0x00010bd2aea0();
        func_0x00010bd2b0c0();
        func_0x00010bd2af54();
        func_0x00010bd2ae94();
        func_0x00010bd2ae88();
        func_0x00010bd2aeb8();
        func_0x00010bd2ae68();
        func_0x00010bd2ae7c();
        func_0x00010bd2af5c();
        func_0x00010bd2af70();
        if ((int)param_2 == 5) {
          return param_2;
        }
        func_0x00010bd2aec4();
        FUN_10bdb2a00();
        func_0x00010bd2ae58();
        func_0x00010bcfd128();
        func_0x00010bd2aeac();
        func_0x00010bd2aea0();
        func_0x00010bd2af54();
        func_0x00010bd2ae94();
        func_0x00010bd2ae88();
        func_0x00010bd2aeb8();
        func_0x00010bd2ae68();
        func_0x00010bd2ae7c();
        func_0x00010bd2af5c();
        func_0x00010bd2af70();
        if ((int)param_2 == 6) {
          return param_2;
        }
        func_0x00010bd2aec4();
        FUN_10bdb2a00();
        func_0x00010bd2ae58();
        FUN_10bd2a394();
        func_0x00010bd2aeac();
        func_0x00010bd2aea0();
        func_0x00010bd2af54();
        func_0x00010bd2ae94();
        func_0x00010bd2ae88();
        func_0x00010bd2aeb8();
        func_0x00010bd2ae68();
        func_0x00010bd2ae7c();
        func_0x00010bd2af5c();
        func_0x00010bd2af70();
        if ((int)param_2 != 8) {
          func_0x00010bd2aec4();
          FUN_10bdb2a00();
          func_0x00010bd2ae58();
          func_0x00010b4c3120();
          func_0x00010bd2aeac();
          func_0x00010bd2aea0();
          func_0x00010bd2af54();
          func_0x00010bd2ae94();
          func_0x00010bd2ae88();
          func_0x00010bd2aeb8();
          func_0x00010bd2ae68();
          func_0x00010bd2ae7c();
          func_0x00010bd2af5c();
          func_0x00010bd2af70();
          if ((int)param_2 == 10) {
            return (long *)*unaff_x19;
          }
          func_0x00010bd2aec4();
          FUN_10bdb2a00();
          func_0x00010bd2ae58();
          uVar4 = 0xf835e48;
          func_0x00010bd16744();
          func_0x00010bd2aeac();
          func_0x00010bd2aea0();
          func_0x00010bd2af54();
          func_0x00010bd2ae94();
          func_0x00010bd2ae88();
          func_0x00010bd2aeb8();
          func_0x00010bd2ae68();
          func_0x00010bd2ae7c();
          func_0x00010bd2af5c();
          func_0x00010bd2af70();
          if ((int)param_2 == 1) {
            *(undefined4 *)*unaff_x19 = uVar4;
          }
          else {
            func_0x00010bd2aec4();
            FUN_10bdb2a00();
            func_0x00010bd2ae58();
            puVar3 = &UNK_10f835e6a;
            func_0x00010bd2a3b4();
            func_0x00010bd2aeac();
            func_0x00010bd2aea0();
            func_0x00010bd2b090();
            func_0x00010bd2af54();
            func_0x00010bd2ae94();
            func_0x00010bd2ae88();
            func_0x00010bd2aeb8();
            func_0x00010bd2ae68();
            func_0x00010bd2ae7c();
            func_0x00010bd2af5c();
            func_0x00010bd2af70();
            if ((int)param_2 == 2) {
              *(undefined **)*unaff_x19 = puVar3;
            }
            else {
              func_0x00010bd2aec4();
              FUN_10bdb2a00();
              func_0x00010bd2ae58();
              uVar4 = 0xf835e85;
              func_0x00010bd2a3b4();
              func_0x00010bd2aeac();
              func_0x00010bd2aea0();
              func_0x00010bd2b0a0();
              func_0x00010bd2af54();
              func_0x00010bd2ae94();
              func_0x00010bd2ae88();
              func_0x00010bd2aeb8();
              func_0x00010bd2ae68();
              func_0x00010bd2ae7c();
              func_0x00010bd2af5c();
              func_0x00010bd2af70();
              if ((int)param_2 == 3) {
                *(undefined4 *)*unaff_x19 = uVar4;
              }
              else {
                func_0x00010bd2aec4();
                FUN_10bdb2a00();
                func_0x00010bd2ae58();
                puVar3 = &UNK_10f835ea0;
                func_0x00010bd2a3d4();
                func_0x00010bd2aeac();
                func_0x00010bd2aea0();
                func_0x00010bd2b0d0();
                func_0x00010bd2af54();
                func_0x00010bd2ae94();
                func_0x00010bd2ae88();
                func_0x00010bd2aeb8();
                func_0x00010bd2ae68();
                func_0x00010bd2ae7c();
                func_0x00010bd2af5c();
                func_0x00010bd2af70();
                if ((int)param_2 != 4) {
                  func_0x00010bd2aec4();
                  FUN_10bdb2a00();
                  func_0x00010bd2ae58();
                  func_0x00010bd2a3d4();
                  func_0x00010bd2aeac();
                  func_0x00010bd2aea0();
                  func_0x00010bd2b080();
                  func_0x00010bd2af54();
                  func_0x00010bd2ae94();
                  func_0x00010bd2ae88();
                  func_0x00010bd2aeb8();
                  func_0x00010bd2ae68();
                  func_0x00010bd2ae7c();
                  func_0x00010bd2af5c();
                  uVar5 = param_1;
                  func_0x00010bd2af70();
                  uVar4 = (undefined4)uVar5;
                  if ((int)param_2 == 5) {
                    *(undefined8 *)*unaff_x19 = param_1;
                  }
                  else {
                    func_0x00010bd2aec4();
                    FUN_10bdb2a00();
                    func_0x00010bd2ae58();
                    func_0x00010bd2a3d4();
                    func_0x00010bd2aeac();
                    func_0x00010bd2aea0();
                    func_0x00010bd2af54();
                    func_0x00010bd2ae94();
                    func_0x00010bd2ae88();
                    func_0x00010bd2aeb8();
                    func_0x00010bd2ae68();
                    func_0x00010bd2ae7c();
                    func_0x00010bd2af5c();
                    func_0x00010bd2af70();
                    if ((int)param_2 != 6) {
                      func_0x00010bd2aec4();
                      FUN_10bdb2a00();
                      func_0x00010bd2ae58();
                      uVar2 = 0xf4;
                      func_0x00010bd2a3b4();
                      func_0x00010bd2aeac();
                      func_0x00010bd2aea0();
                      func_0x00010bd2af54();
                      func_0x00010bd2ae94();
                      func_0x00010bd2ae88();
                      func_0x00010bd2aeb8();
                      func_0x00010bd2ae68();
                      func_0x00010bd2ae7c();
                      func_0x00010bd2af5c();
                      func_0x00010bd2af70();
                      if ((int)param_2 == 7) {
                        *(undefined1 *)*unaff_x19 = uVar2;
                        return param_2;
                      }
                      func_0x00010bd2aec4();
                      FUN_10bdb2a00();
                      func_0x00010bd2ae58();
                      puVar3 = &UNK_10f835f0f;
                      func_0x00010bd2a3f4();
                      func_0x00010bd2aeac();
                      func_0x00010bd2aea0();
                      func_0x00010bd2b0c0();
                      func_0x00010bd2af54();
                      func_0x00010bd2ae94();
                      func_0x00010bd2ae88();
                      func_0x00010bd2aeb8();
                      func_0x00010bd2ae68();
                      func_0x00010bd2ae7c();
                      func_0x00010bd2af5c();
                      func_0x00010bd2af70();
                      if ((int)param_2 != 9) {
                        func_0x00010bd2aec4();
                        FUN_10bdb2a00();
                        func_0x00010bd2ae58();
                        uVar4 = 0xf835f29;
                        func_0x00010bd2a3d4();
                        func_0x00010bd2aeac();
                        func_0x00010bd2aea0();
                        func_0x00010bd2b0b0();
                        func_0x00010bd2af54();
                        func_0x00010bd2ae94();
                        func_0x00010bd2ae88();
                        func_0x00010bd2aeb8();
                        func_0x00010bd2ae68();
                        func_0x00010bd2ae7c();
                        func_0x00010bd2af5c();
                        func_0x00010bd2af70();
                        if ((int)param_2 == 8) {
                          *(undefined4 *)*unaff_x19 = uVar4;
                          return param_2;
                        }
                        func_0x00010bd2aec4();
                        FUN_10bdb2a00();
                        func_0x00010bd2ae58();
                        func_0x00010bd2a3f4();
                        func_0x00010bd2aeac();
                        func_0x00010bd2aea0();
                        func_0x00010bd2af54();
                        func_0x00010bd2ae94();
                        func_0x00010bd2ae88();
                        func_0x00010bd2aeb8();
                        func_0x00010bd2ae68();
                        func_0x00010bd2ae7c();
                        func_0x00010bd2af5c();
                        func_0x00010bd2afd8();
                        if ((extraout_x8 & 1) != 0) {
                          FUN_10bd1d41c(extraout_x8 - 1);
                        }
                        func_0x00010bd2b134(*(undefined8 *)(*unaff_x19 + 0x28));
                        FUN_10bd28a98();
                        *(undefined4 *)(unaff_x19 + 4) = 0;
                        return unaff_x19;
                      }
                      plVar1 = (long *)*unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbce60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                      (*(code *)
                        PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5__110346350
                      )(plVar1,puVar3);
                      return plVar1;
                    }
                    *(undefined4 *)*unaff_x19 = uVar4;
                  }
                  return param_2;
                }
                *(undefined **)*unaff_x19 = puVar3;
              }
            }
          }
          return param_2;
        }
        plVar1 = (long *)(ulong)*(uint *)*unaff_x19;
      }
    }
  }
  return plVar1;
}



/* Entry: 10bd290ac; end: 10bd29127;  */

long * FUN_10bd290ac(undefined8 param_1,long *param_2)

{
  long *plVar1;
  undefined1 uVar2;
  undefined *puVar3;
  ulong extraout_x8;
  long *unaff_x19;
  undefined4 uVar4;
  undefined8 uVar5;
  
  func_0x00010bd2af70();
  if ((int)param_2 == 1) {
    plVar1 = (long *)(ulong)*(uint *)*unaff_x19;
  }
  else {
    func_0x00010bd2aec4();
    FUN_10bdb2a00();
    func_0x00010bd2ae58();
    FUN_10bd2a394();
    func_0x00010bd2aeac();
    func_0x00010bd2aea0();
    func_0x00010bd2b090();
    func_0x00010bd2af54();
    func_0x00010bd2ae94();
    func_0x00010bd2ae88();
    func_0x00010bd2aeb8();
    func_0x00010bd2ae68();
    func_0x00010bd2ae7c();
    func_0x00010bd2af5c();
    func_0x00010bd2af70();
    if ((int)param_2 == 4) {
      return *(long **)*unaff_x19;
    }
    func_0x00010bd2aec4();
    FUN_10bdb2a00();
    func_0x00010bd2ae58();
    func_0x00010bcfd128();
    func_0x00010bd2aeac();
    func_0x00010bd2aea0();
    func_0x00010bd2b080();
    func_0x00010bd2af54();
    func_0x00010bd2ae94();
    func_0x00010bd2ae88();
    func_0x00010bd2aeb8();
    func_0x00010bd2ae68();
    func_0x00010bd2ae7c();
    func_0x00010bd2af5c();
    func_0x00010bd2af70();
    if ((int)param_2 == 3) {
      plVar1 = (long *)(ulong)*(uint *)*unaff_x19;
    }
    else {
      func_0x00010bd2aec4();
      FUN_10bdb2a00();
      func_0x00010bd2ae58();
      func_0x00010bcfd128();
      func_0x00010bd2aeac();
      func_0x00010bd2aea0();
      func_0x00010bd2b0d0();
      func_0x00010bd2af54();
      func_0x00010bd2ae94();
      func_0x00010bd2ae88();
      func_0x00010bd2aeb8();
      func_0x00010bd2ae68();
      func_0x00010bd2ae7c();
      func_0x00010bd2af5c();
      func_0x00010bd2af70();
      if ((int)param_2 == 7) {
        plVar1 = (long *)(ulong)*(byte *)*unaff_x19;
      }
      else {
        func_0x00010bd2aec4();
        FUN_10bdb2a00();
        func_0x00010bd2ae58();
        func_0x00010b4c3120();
        func_0x00010bd2aeac();
        func_0x00010bd2aea0();
        func_0x00010bd2b0c0();
        func_0x00010bd2af54();
        func_0x00010bd2ae94();
        func_0x00010bd2ae88();
        func_0x00010bd2aeb8();
        func_0x00010bd2ae68();
        func_0x00010bd2ae7c();
        func_0x00010bd2af5c();
        func_0x00010bd2af70();
        if ((int)param_2 == 5) {
          return param_2;
        }
        func_0x00010bd2aec4();
        FUN_10bdb2a00();
        func_0x00010bd2ae58();
        func_0x00010bcfd128();
        func_0x00010bd2aeac();
        func_0x00010bd2aea0();
        func_0x00010bd2af54();
        func_0x00010bd2ae94();
        func_0x00010bd2ae88();
        func_0x00010bd2aeb8();
        func_0x00010bd2ae68();
        func_0x00010bd2ae7c();
        func_0x00010bd2af5c();
        func_0x00010bd2af70();
        if ((int)param_2 == 6) {
          return param_2;
        }
        func_0x00010bd2aec4();
        FUN_10bdb2a00();
        func_0x00010bd2ae58();
        FUN_10bd2a394();
        func_0x00010bd2aeac();
        func_0x00010bd2aea0();
        func_0x00010bd2af54();
        func_0x00010bd2ae94();
        func_0x00010bd2ae88();
        func_0x00010bd2aeb8();
        func_0x00010bd2ae68();
        func_0x00010bd2ae7c();
        func_0x00010bd2af5c();
        func_0x00010bd2af70();
        if ((int)param_2 != 8) {
          func_0x00010bd2aec4();
          FUN_10bdb2a00();
          func_0x00010bd2ae58();
          func_0x00010b4c3120();
          func_0x00010bd2aeac();
          func_0x00010bd2aea0();
          func_0x00010bd2af54();
          func_0x00010bd2ae94();
          func_0x00010bd2ae88();
          func_0x00010bd2aeb8();
          func_0x00010bd2ae68();
          func_0x00010bd2ae7c();
          func_0x00010bd2af5c();
          func_0x00010bd2af70();
          if ((int)param_2 == 10) {
            return (long *)*unaff_x19;
          }
          func_0x00010bd2aec4();
          FUN_10bdb2a00();
          func_0x00010bd2ae58();
          uVar4 = 0xf835e48;
          func_0x00010bd16744();
          func_0x00010bd2aeac();
          func_0x00010bd2aea0();
          func_0x00010bd2af54();
          func_0x00010bd2ae94();
          func_0x00010bd2ae88();
          func_0x00010bd2aeb8();
          func_0x00010bd2ae68();
          func_0x00010bd2ae7c();
          func_0x00010bd2af5c();
          func_0x00010bd2af70();
          if ((int)param_2 == 1) {
            *(undefined4 *)*unaff_x19 = uVar4;
          }
          else {
            func_0x00010bd2aec4();
            FUN_10bdb2a00();
            func_0x00010bd2ae58();
            puVar3 = &UNK_10f835e6a;
            func_0x00010bd2a3b4();
            func_0x00010bd2aeac();
            func_0x00010bd2aea0();
            func_0x00010bd2b090();
            func_0x00010bd2af54();
            func_0x00010bd2ae94();
            func_0x00010bd2ae88();
            func_0x00010bd2aeb8();
            func_0x00010bd2ae68();
            func_0x00010bd2ae7c();
            func_0x00010bd2af5c();
            func_0x00010bd2af70();
            if ((int)param_2 == 2) {
              *(undefined **)*unaff_x19 = puVar3;
            }
            else {
              func_0x00010bd2aec4();
              FUN_10bdb2a00();
              func_0x00010bd2ae58();
              uVar4 = 0xf835e85;
              func_0x00010bd2a3b4();
              func_0x00010bd2aeac();
              func_0x00010bd2aea0();
              func_0x00010bd2b0a0();
              func_0x00010bd2af54();
              func_0x00010bd2ae94();
              func_0x00010bd2ae88();
              func_0x00010bd2aeb8();
              func_0x00010bd2ae68();
              func_0x00010bd2ae7c();
              func_0x00010bd2af5c();
              func_0x00010bd2af70();
              if ((int)param_2 == 3) {
                *(undefined4 *)*unaff_x19 = uVar4;
              }
              else {
                func_0x00010bd2aec4();
                FUN_10bdb2a00();
                func_0x00010bd2ae58();
                puVar3 = &UNK_10f835ea0;
                func_0x00010bd2a3d4();
                func_0x00010bd2aeac();
                func_0x00010bd2aea0();
                func_0x00010bd2b0d0();
                func_0x00010bd2af54();
                func_0x00010bd2ae94();
                func_0x00010bd2ae88();
                func_0x00010bd2aeb8();
                func_0x00010bd2ae68();
                func_0x00010bd2ae7c();
                func_0x00010bd2af5c();
                func_0x00010bd2af70();
                if ((int)param_2 != 4) {
                  func_0x00010bd2aec4();
                  FUN_10bdb2a00();
                  func_0x00010bd2ae58();
                  func_0x00010bd2a3d4();
                  func_0x00010bd2aeac();
                  func_0x00010bd2aea0();
                  func_0x00010bd2b080();
                  func_0x00010bd2af54();
                  func_0x00010bd2ae94();
                  func_0x00010bd2ae88();
                  func_0x00010bd2aeb8();
                  func_0x00010bd2ae68();
                  func_0x00010bd2ae7c();
                  func_0x00010bd2af5c();
                  uVar5 = param_1;
                  func_0x00010bd2af70();
                  uVar4 = (undefined4)uVar5;
                  if ((int)param_2 == 5) {
                    *(undefined8 *)*unaff_x19 = param_1;
                  }
                  else {
                    func_0x00010bd2aec4();
                    FUN_10bdb2a00();
                    func_0x00010bd2ae58();
                    func_0x00010bd2a3d4();
                    func_0x00010bd2aeac();
                    func_0x00010bd2aea0();
                    func_0x00010bd2af54();
                    func_0x00010bd2ae94();
                    func_0x00010bd2ae88();
                    func_0x00010bd2aeb8();
                    func_0x00010bd2ae68();
                    func_0x00010bd2ae7c();
                    func_0x00010bd2af5c();
                    func_0x00010bd2af70();
                    if ((int)param_2 != 6) {
                      func_0x00010bd2aec4();
                      FUN_10bdb2a00();
                      func_0x00010bd2ae58();
                      uVar2 = 0xf4;
                      func_0x00010bd2a3b4();
                      func_0x00010bd2aeac();
                      func_0x00010bd2aea0();
                      func_0x00010bd2af54();
                      func_0x00010bd2ae94();
                      func_0x00010bd2ae88();
                      func_0x00010bd2aeb8();
                      func_0x00010bd2ae68();
                      func_0x00010bd2ae7c();
                      func_0x00010bd2af5c();
                      func_0x00010bd2af70();
                      if ((int)param_2 == 7) {
                        *(undefined1 *)*unaff_x19 = uVar2;
                        return param_2;
                      }
                      func_0x00010bd2aec4();
                      FUN_10bdb2a00();
                      func_0x00010bd2ae58();
                      puVar3 = &UNK_10f835f0f;
                      func_0x00010bd2a3f4();
                      func_0x00010bd2aeac();
                      func_0x00010bd2aea0();
                      func_0x00010bd2b0c0();
                      func_0x00010bd2af54();
                      func_0x00010bd2ae94();
                      func_0x00010bd2ae88();
                      func_0x00010bd2aeb8();
                      func_0x00010bd2ae68();
                      func_0x00010bd2ae7c();
                      func_0x00010bd2af5c();
                      func_0x00010bd2af70();
                      if ((int)param_2 != 9) {
                        func_0x00010bd2aec4();
                        FUN_10bdb2a00();
                        func_0x00010bd2ae58();
                        uVar4 = 0xf835f29;
                        func_0x00010bd2a3d4();
                        func_0x00010bd2aeac();
                        func_0x00010bd2aea0();
                        func_0x00010bd2b0b0();
                        func_0x00010bd2af54();
                        func_0x00010bd2ae94();
                        func_0x00010bd2ae88();
                        func_0x00010bd2aeb8();
                        func_0x00010bd2ae68();
                        func_0x00010bd2ae7c();
                        func_0x00010bd2af5c();
                        func_0x00010bd2af70();
                        if ((int)param_2 == 8) {
                          *(undefined4 *)*unaff_x19 = uVar4;
                          return param_2;
                        }
                        func_0x00010bd2aec4();
                        FUN_10bdb2a00();
                        func_0x00010bd2ae58();
                        func_0x00010bd2a3f4();
                        func_0x00010bd2aeac();
                        func_0x00010bd2aea0();
                        func_0x00010bd2af54();
                        func_0x00010bd2ae94();
                        func_0x00010bd2ae88();
                        func_0x00010bd2aeb8();
                        func_0x00010bd2ae68();
                        func_0x00010bd2ae7c();
                        func_0x00010bd2af5c();
                        func_0x00010bd2afd8();
                        if ((extraout_x8 & 1) != 0) {
                          FUN_10bd1d41c(extraout_x8 - 1);
                        }
                        func_0x00010bd2b134(*(undefined8 *)(*unaff_x19 + 0x28));
                        FUN_10bd28a98();
                        *(undefined4 *)(unaff_x19 + 4) = 0;
                        return unaff_x19;
                      }
                      plVar1 = (long *)*unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbce60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                      (*(code *)
                        PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5__110346350
                      )(plVar1,puVar3);
                      return plVar1;
                    }
                    *(undefined4 *)*unaff_x19 = uVar4;
                  }
                  return param_2;
                }
                *(undefined **)*unaff_x19 = puVar3;
              }
            }
          }
          return param_2;
        }
        plVar1 = (long *)(ulong)*(uint *)*unaff_x19;
      }
    }
  }
  return plVar1;
}



/* Entry: 10bd29128; end: 10bd291a3;  */

long * FUN_10bd29128(undefined8 param_1,long *param_2)

{
  long *plVar1;
  undefined1 uVar2;
  undefined *puVar3;
  ulong extraout_x8;
  long *unaff_x19;
  undefined4 uVar4;
  undefined8 uVar5;
  
  func_0x00010bd2af70();
  if ((int)param_2 == 4) {
    return *(long **)*unaff_x19;
  }
  func_0x00010bd2aec4();
  FUN_10bdb2a00();
  func_0x00010bd2ae58();
  func_0x00010bcfd128();
  func_0x00010bd2aeac();
  func_0x00010bd2aea0();
  func_0x00010bd2b080();
  func_0x00010bd2af54();
  func_0x00010bd2ae94();
  func_0x00010bd2ae88();
  func_0x00010bd2aeb8();
  func_0x00010bd2ae68();
  func_0x00010bd2ae7c();
  func_0x00010bd2af5c();
  func_0x00010bd2af70();
  if ((int)param_2 == 3) {
    plVar1 = (long *)(ulong)*(uint *)*unaff_x19;
  }
  else {
    func_0x00010bd2aec4();
    FUN_10bdb2a00();
    func_0x00010bd2ae58();
    func_0x00010bcfd128();
    func_0x00010bd2aeac();
    func_0x00010bd2aea0();
    func_0x00010bd2b0d0();
    func_0x00010bd2af54();
    func_0x00010bd2ae94();
    func_0x00010bd2ae88();
    func_0x00010bd2aeb8();
    func_0x00010bd2ae68();
    func_0x00010bd2ae7c();
    func_0x00010bd2af5c();
    func_0x00010bd2af70();
    if ((int)param_2 == 7) {
      plVar1 = (long *)(ulong)*(byte *)*unaff_x19;
    }
    else {
      func_0x00010bd2aec4();
      FUN_10bdb2a00();
      func_0x00010bd2ae58();
      func_0x00010b4c3120();
      func_0x00010bd2aeac();
      func_0x00010bd2aea0();
      func_0x00010bd2b0c0();
      func_0x00010bd2af54();
      func_0x00010bd2ae94();
      func_0x00010bd2ae88();
      func_0x00010bd2aeb8();
      func_0x00010bd2ae68();
      func_0x00010bd2ae7c();
      func_0x00010bd2af5c();
      func_0x00010bd2af70();
      if ((int)param_2 == 5) {
        return param_2;
      }
      func_0x00010bd2aec4();
      FUN_10bdb2a00();
      func_0x00010bd2ae58();
      func_0x00010bcfd128();
      func_0x00010bd2aeac();
      func_0x00010bd2aea0();
      func_0x00010bd2af54();
      func_0x00010bd2ae94();
      func_0x00010bd2ae88();
      func_0x00010bd2aeb8();
      func_0x00010bd2ae68();
      func_0x00010bd2ae7c();
      func_0x00010bd2af5c();
      func_0x00010bd2af70();
      if ((int)param_2 == 6) {
        return param_2;
      }
      func_0x00010bd2aec4();
      FUN_10bdb2a00();
      func_0x00010bd2ae58();
      FUN_10bd2a394();
      func_0x00010bd2aeac();
      func_0x00010bd2aea0();
      func_0x00010bd2af54();
      func_0x00010bd2ae94();
      func_0x00010bd2ae88();
      func_0x00010bd2aeb8();
      func_0x00010bd2ae68();
      func_0x00010bd2ae7c();
      func_0x00010bd2af5c();
      func_0x00010bd2af70();
      if ((int)param_2 != 8) {
        func_0x00010bd2aec4();
        FUN_10bdb2a00();
        func_0x00010bd2ae58();
        func_0x00010b4c3120();
        func_0x00010bd2aeac();
        func_0x00010bd2aea0();
        func_0x00010bd2af54();
        func_0x00010bd2ae94();
        func_0x00010bd2ae88();
        func_0x00010bd2aeb8();
        func_0x00010bd2ae68();
        func_0x00010bd2ae7c();
        func_0x00010bd2af5c();
        func_0x00010bd2af70();
        if ((int)param_2 == 10) {
          return (long *)*unaff_x19;
        }
        func_0x00010bd2aec4();
        FUN_10bdb2a00();
        func_0x00010bd2ae58();
        uVar4 = 0xf835e48;
        func_0x00010bd16744();
        func_0x00010bd2aeac();
        func_0x00010bd2aea0();
        func_0x00010bd2af54();
        func_0x00010bd2ae94();
        func_0x00010bd2ae88();
        func_0x00010bd2aeb8();
        func_0x00010bd2ae68();
        func_0x00010bd2ae7c();
        func_0x00010bd2af5c();
        func_0x00010bd2af70();
        if ((int)param_2 == 1) {
          *(undefined4 *)*unaff_x19 = uVar4;
        }
        else {
          func_0x00010bd2aec4();
          FUN_10bdb2a00();
          func_0x00010bd2ae58();
          puVar3 = &UNK_10f835e6a;
          func_0x00010bd2a3b4();
          func_0x00010bd2aeac();
          func_0x00010bd2aea0();
          func_0x00010bd2b090();
          func_0x00010bd2af54();
          func_0x00010bd2ae94();
          func_0x00010bd2ae88();
          func_0x00010bd2aeb8();
          func_0x00010bd2ae68();
          func_0x00010bd2ae7c();
          func_0x00010bd2af5c();
          func_0x00010bd2af70();
          if ((int)param_2 == 2) {
            *(undefined **)*unaff_x19 = puVar3;
          }
          else {
            func_0x00010bd2aec4();
            FUN_10bdb2a00();
            func_0x00010bd2ae58();
            uVar4 = 0xf835e85;
            func_0x00010bd2a3b4();
            func_0x00010bd2aeac();
            func_0x00010bd2aea0();
            func_0x00010bd2b0a0();
            func_0x00010bd2af54();
            func_0x00010bd2ae94();
            func_0x00010bd2ae88();
            func_0x00010bd2aeb8();
            func_0x00010bd2ae68();
            func_0x00010bd2ae7c();
            func_0x00010bd2af5c();
            func_0x00010bd2af70();
            if ((int)param_2 == 3) {
              *(undefined4 *)*unaff_x19 = uVar4;
            }
            else {
              func_0x00010bd2aec4();
              FUN_10bdb2a00();
              func_0x00010bd2ae58();
              puVar3 = &UNK_10f835ea0;
              func_0x00010bd2a3d4();
              func_0x00010bd2aeac();
              func_0x00010bd2aea0();
              func_0x00010bd2b0d0();
              func_0x00010bd2af54();
              func_0x00010bd2ae94();
              func_0x00010bd2ae88();
              func_0x00010bd2aeb8();
              func_0x00010bd2ae68();
              func_0x00010bd2ae7c();
              func_0x00010bd2af5c();
              func_0x00010bd2af70();
              if ((int)param_2 != 4) {
                func_0x00010bd2aec4();
                FUN_10bdb2a00();
                func_0x00010bd2ae58();
                func_0x00010bd2a3d4();
                func_0x00010bd2aeac();
                func_0x00010bd2aea0();
                func_0x00010bd2b080();
                func_0x00010bd2af54();
                func_0x00010bd2ae94();
                func_0x00010bd2ae88();
                func_0x00010bd2aeb8();
                func_0x00010bd2ae68();
                func_0x00010bd2ae7c();
                func_0x00010bd2af5c();
                uVar5 = param_1;
                func_0x00010bd2af70();
                uVar4 = (undefined4)uVar5;
                if ((int)param_2 == 5) {
                  *(undefined8 *)*unaff_x19 = param_1;
                }
                else {
                  func_0x00010bd2aec4();
                  FUN_10bdb2a00();
                  func_0x00010bd2ae58();
                  func_0x00010bd2a3d4();
                  func_0x00010bd2aeac();
                  func_0x00010bd2aea0();
                  func_0x00010bd2af54();
                  func_0x00010bd2ae94();
                  func_0x00010bd2ae88();
                  func_0x00010bd2aeb8();
                  func_0x00010bd2ae68();
                  func_0x00010bd2ae7c();
                  func_0x00010bd2af5c();
                  func_0x00010bd2af70();
                  if ((int)param_2 != 6) {
                    func_0x00010bd2aec4();
                    FUN_10bdb2a00();
                    func_0x00010bd2ae58();
                    uVar2 = 0xf4;
                    func_0x00010bd2a3b4();
                    func_0x00010bd2aeac();
                    func_0x00010bd2aea0();
                    func_0x00010bd2af54();
                    func_0x00010bd2ae94();
                    func_0x00010bd2ae88();
                    func_0x00010bd2aeb8();
                    func_0x00010bd2ae68();
                    func_0x00010bd2ae7c();
                    func_0x00010bd2af5c();
                    func_0x00010bd2af70();
                    if ((int)param_2 == 7) {
                      *(undefined1 *)*unaff_x19 = uVar2;
                      return param_2;
                    }
                    func_0x00010bd2aec4();
                    FUN_10bdb2a00();
                    func_0x00010bd2ae58();
                    puVar3 = &UNK_10f835f0f;
                    func_0x00010bd2a3f4();
                    func_0x00010bd2aeac();
                    func_0x00010bd2aea0();
                    func_0x00010bd2b0c0();
                    func_0x00010bd2af54();
                    func_0x00010bd2ae94();
                    func_0x00010bd2ae88();
                    func_0x00010bd2aeb8();
                    func_0x00010bd2ae68();
                    func_0x00010bd2ae7c();
                    func_0x00010bd2af5c();
                    func_0x00010bd2af70();
                    if ((int)param_2 != 9) {
                      func_0x00010bd2aec4();
                      FUN_10bdb2a00();
                      func_0x00010bd2ae58();
                      uVar4 = 0xf835f29;
                      func_0x00010bd2a3d4();
                      func_0x00010bd2aeac();
                      func_0x00010bd2aea0();
                      func_0x00010bd2b0b0();
                      func_0x00010bd2af54();
                      func_0x00010bd2ae94();
                      func_0x00010bd2ae88();
                      func_0x00010bd2aeb8();
                      func_0x00010bd2ae68();
                      func_0x00010bd2ae7c();
                      func_0x00010bd2af5c();
                      func_0x00010bd2af70();
                      if ((int)param_2 == 8) {
                        *(undefined4 *)*unaff_x19 = uVar4;
                        return param_2;
                      }
                      func_0x00010bd2aec4();
                      FUN_10bdb2a00();
                      func_0x00010bd2ae58();
                      func_0x00010bd2a3f4();
                      func_0x00010bd2aeac();
                      func_0x00010bd2aea0();
                      func_0x00010bd2af54();
                      func_0x00010bd2ae94();
                      func_0x00010bd2ae88();
                      func_0x00010bd2aeb8();
                      func_0x00010bd2ae68();
                      func_0x00010bd2ae7c();
                      func_0x00010bd2af5c();
                      func_0x00010bd2afd8();
                      if ((extraout_x8 & 1) != 0) {
                        FUN_10bd1d41c(extraout_x8 - 1);
                      }
                      func_0x00010bd2b134(*(undefined8 *)(*unaff_x19 + 0x28));
                      FUN_10bd28a98();
                      *(undefined4 *)(unaff_x19 + 4) = 0;
                      return unaff_x19;
                    }
                    plVar1 = (long *)*unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbce60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    (*(code *)
                      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5__110346350
                    )(plVar1,puVar3);
                    return plVar1;
                  }
                  *(undefined4 *)*unaff_x19 = uVar4;
                }
                return param_2;
              }
              *(undefined **)*unaff_x19 = puVar3;
            }
          }
        }
        return param_2;
      }
      plVar1 = (long *)(ulong)*(uint *)*unaff_x19;
    }
  }
  return plVar1;
}



/* Entry: 10bd291a4; end: 10bd2921f;  */

long * FUN_10bd291a4(undefined8 param_1,long *param_2)

{
  long *plVar1;
  undefined1 uVar2;
  undefined *puVar3;
  ulong extraout_x8;
  long *unaff_x19;
  undefined4 uVar4;
  undefined8 uVar5;
  
  func_0x00010bd2af70();
  if ((int)param_2 == 3) {
    plVar1 = (long *)(ulong)*(uint *)*unaff_x19;
  }
  else {
    func_0x00010bd2aec4();
    FUN_10bdb2a00();
    func_0x00010bd2ae58();
    func_0x00010bcfd128();
    func_0x00010bd2aeac();
    func_0x00010bd2aea0();
    func_0x00010bd2b0d0();
    func_0x00010bd2af54();
    func_0x00010bd2ae94();
    func_0x00010bd2ae88();
    func_0x00010bd2aeb8();
    func_0x00010bd2ae68();
    func_0x00010bd2ae7c();
    func_0x00010bd2af5c();
    func_0x00010bd2af70();
    if ((int)param_2 == 7) {
      plVar1 = (long *)(ulong)*(byte *)*unaff_x19;
    }
    else {
      func_0x00010bd2aec4();
      FUN_10bdb2a00();
      func_0x00010bd2ae58();
      func_0x00010b4c3120();
      func_0x00010bd2aeac();
      func_0x00010bd2aea0();
      func_0x00010bd2b0c0();
      func_0x00010bd2af54();
      func_0x00010bd2ae94();
      func_0x00010bd2ae88();
      func_0x00010bd2aeb8();
      func_0x00010bd2ae68();
      func_0x00010bd2ae7c();
      func_0x00010bd2af5c();
      func_0x00010bd2af70();
      if ((int)param_2 == 5) {
        return param_2;
      }
      func_0x00010bd2aec4();
      FUN_10bdb2a00();
      func_0x00010bd2ae58();
      func_0x00010bcfd128();
      func_0x00010bd2aeac();
      func_0x00010bd2aea0();
      func_0x00010bd2af54();
      func_0x00010bd2ae94();
      func_0x00010bd2ae88();
      func_0x00010bd2aeb8();
      func_0x00010bd2ae68();
      func_0x00010bd2ae7c();
      func_0x00010bd2af5c();
      func_0x00010bd2af70();
      if ((int)param_2 == 6) {
        return param_2;
      }
      func_0x00010bd2aec4();
      FUN_10bdb2a00();
      func_0x00010bd2ae58();
      FUN_10bd2a394();
      func_0x00010bd2aeac();
      func_0x00010bd2aea0();
      func_0x00010bd2af54();
      func_0x00010bd2ae94();
      func_0x00010bd2ae88();
      func_0x00010bd2aeb8();
      func_0x00010bd2ae68();
      func_0x00010bd2ae7c();
      func_0x00010bd2af5c();
      func_0x00010bd2af70();
      if ((int)param_2 != 8) {
        func_0x00010bd2aec4();
        FUN_10bdb2a00();
        func_0x00010bd2ae58();
        func_0x00010b4c3120();
        func_0x00010bd2aeac();
        func_0x00010bd2aea0();
        func_0x00010bd2af54();
        func_0x00010bd2ae94();
        func_0x00010bd2ae88();
        func_0x00010bd2aeb8();
        func_0x00010bd2ae68();
        func_0x00010bd2ae7c();
        func_0x00010bd2af5c();
        func_0x00010bd2af70();
        if ((int)param_2 == 10) {
          return (long *)*unaff_x19;
        }
        func_0x00010bd2aec4();
        FUN_10bdb2a00();
        func_0x00010bd2ae58();
        uVar4 = 0xf835e48;
        func_0x00010bd16744();
        func_0x00010bd2aeac();
        func_0x00010bd2aea0();
        func_0x00010bd2af54();
        func_0x00010bd2ae94();
        func_0x00010bd2ae88();
        func_0x00010bd2aeb8();
        func_0x00010bd2ae68();
        func_0x00010bd2ae7c();
        func_0x00010bd2af5c();
        func_0x00010bd2af70();
        if ((int)param_2 == 1) {
          *(undefined4 *)*unaff_x19 = uVar4;
        }
        else {
          func_0x00010bd2aec4();
          FUN_10bdb2a00();
          func_0x00010bd2ae58();
          puVar3 = &UNK_10f835e6a;
          func_0x00010bd2a3b4();
          func_0x00010bd2aeac();
          func_0x00010bd2aea0();
          func_0x00010bd2b090();
          func_0x00010bd2af54();
          func_0x00010bd2ae94();
          func_0x00010bd2ae88();
          func_0x00010bd2aeb8();
          func_0x00010bd2ae68();
          func_0x00010bd2ae7c();
          func_0x00010bd2af5c();
          func_0x00010bd2af70();
          if ((int)param_2 == 2) {
            *(undefined **)*unaff_x19 = puVar3;
          }
          else {
            func_0x00010bd2aec4();
            FUN_10bdb2a00();
            func_0x00010bd2ae58();
            uVar4 = 0xf835e85;
            func_0x00010bd2a3b4();
            func_0x00010bd2aeac();
            func_0x00010bd2aea0();
            func_0x00010bd2b0a0();
            func_0x00010bd2af54();
            func_0x00010bd2ae94();
            func_0x00010bd2ae88();
            func_0x00010bd2aeb8();
            func_0x00010bd2ae68();
            func_0x00010bd2ae7c();
            func_0x00010bd2af5c();
            func_0x00010bd2af70();
            if ((int)param_2 == 3) {
              *(undefined4 *)*unaff_x19 = uVar4;
            }
            else {
              func_0x00010bd2aec4();
              FUN_10bdb2a00();
              func_0x00010bd2ae58();
              puVar3 = &UNK_10f835ea0;
              func_0x00010bd2a3d4();
              func_0x00010bd2aeac();
              func_0x00010bd2aea0();
              func_0x00010bd2b0d0();
              func_0x00010bd2af54();
              func_0x00010bd2ae94();
              func_0x00010bd2ae88();
              func_0x00010bd2aeb8();
              func_0x00010bd2ae68();
              func_0x00010bd2ae7c();
              func_0x00010bd2af5c();
              func_0x00010bd2af70();
              if ((int)param_2 != 4) {
                func_0x00010bd2aec4();
                FUN_10bdb2a00();
                func_0x00010bd2ae58();
                func_0x00010bd2a3d4();
                func_0x00010bd2aeac();
                func_0x00010bd2aea0();
                func_0x00010bd2b080();
                func_0x00010bd2af54();
                func_0x00010bd2ae94();
                func_0x00010bd2ae88();
                func_0x00010bd2aeb8();
                func_0x00010bd2ae68();
                func_0x00010bd2ae7c();
                func_0x00010bd2af5c();
                uVar5 = param_1;
                func_0x00010bd2af70();
                uVar4 = (undefined4)uVar5;
                if ((int)param_2 == 5) {
                  *(undefined8 *)*unaff_x19 = param_1;
                }
                else {
                  func_0x00010bd2aec4();
                  FUN_10bdb2a00();
                  func_0x00010bd2ae58();
                  func_0x00010bd2a3d4();
                  func_0x00010bd2aeac();
                  func_0x00010bd2aea0();
                  func_0x00010bd2af54();
                  func_0x00010bd2ae94();
                  func_0x00010bd2ae88();
                  func_0x00010bd2aeb8();
                  func_0x00010bd2ae68();
                  func_0x00010bd2ae7c();
                  func_0x00010bd2af5c();
                  func_0x00010bd2af70();
                  if ((int)param_2 != 6) {
                    func_0x00010bd2aec4();
                    FUN_10bdb2a00();
                    func_0x00010bd2ae58();
                    uVar2 = 0xf4;
                    func_0x00010bd2a3b4();
                    func_0x00010bd2aeac();
                    func_0x00010bd2aea0();
                    func_0x00010bd2af54();
                    func_0x00010bd2ae94();
                    func_0x00010bd2ae88();
                    func_0x00010bd2aeb8();
                    func_0x00010bd2ae68();
                    func_0x00010bd2ae7c();
                    func_0x00010bd2af5c();
                    func_0x00010bd2af70();
                    if ((int)param_2 == 7) {
                      *(undefined1 *)*unaff_x19 = uVar2;
                      return param_2;
                    }
                    func_0x00010bd2aec4();
                    FUN_10bdb2a00();
                    func_0x00010bd2ae58();
                    puVar3 = &UNK_10f835f0f;
                    func_0x00010bd2a3f4();
                    func_0x00010bd2aeac();
                    func_0x00010bd2aea0();
                    func_0x00010bd2b0c0();
                    func_0x00010bd2af54();
                    func_0x00010bd2ae94();
                    func_0x00010bd2ae88();
                    func_0x00010bd2aeb8();
                    func_0x00010bd2ae68();
                    func_0x00010bd2ae7c();
                    func_0x00010bd2af5c();
                    func_0x00010bd2af70();
                    if ((int)param_2 != 9) {
                      func_0x00010bd2aec4();
                      FUN_10bdb2a00();
                      func_0x00010bd2ae58();
                      uVar4 = 0xf835f29;
                      func_0x00010bd2a3d4();
                      func_0x00010bd2aeac();
                      func_0x00010bd2aea0();
                      func_0x00010bd2b0b0();
                      func_0x00010bd2af54();
                      func_0x00010bd2ae94();
                      func_0x00010bd2ae88();
                      func_0x00010bd2aeb8();
                      func_0x00010bd2ae68();
                      func_0x00010bd2ae7c();
                      func_0x00010bd2af5c();
                      func_0x00010bd2af70();
                      if ((int)param_2 == 8) {
                        *(undefined4 *)*unaff_x19 = uVar4;
                        return param_2;
                      }
                      func_0x00010bd2aec4();
                      FUN_10bdb2a00();
                      func_0x00010bd2ae58();
                      func_0x00010bd2a3f4();
                      func_0x00010bd2aeac();
                      func_0x00010bd2aea0();
                      func_0x00010bd2af54();
                      func_0x00010bd2ae94();
                      func_0x00010bd2ae88();
                      func_0x00010bd2aeb8();
                      func_0x00010bd2ae68();
                      func_0x00010bd2ae7c();
                      func_0x00010bd2af5c();
                      func_0x00010bd2afd8();
                      if ((extraout_x8 & 1) != 0) {
                        FUN_10bd1d41c(extraout_x8 - 1);
                      }
                      func_0x00010bd2b134(*(undefined8 *)(*unaff_x19 + 0x28));
                      FUN_10bd28a98();
                      *(undefined4 *)(unaff_x19 + 4) = 0;
                      return unaff_x19;
                    }
                    plVar1 = (long *)*unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbce60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    (*(code *)
                      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5__110346350
                    )(plVar1,puVar3);
                    return plVar1;
                  }
                  *(undefined4 *)*unaff_x19 = uVar4;
                }
                return param_2;
              }
              *(undefined **)*unaff_x19 = puVar3;
            }
          }
        }
        return param_2;
      }
      plVar1 = (long *)(ulong)*(uint *)*unaff_x19;
    }
  }
  return plVar1;
}



/* Entry: 10bd29220; end: 10bd2929b;  */

long * FUN_10bd29220(undefined8 param_1,long *param_2)

{
  long *plVar1;
  undefined1 uVar2;
  undefined *puVar3;
  ulong extraout_x8;
  long *unaff_x19;
  undefined4 uVar4;
  undefined8 uVar5;
  
  func_0x00010bd2af70();
  if ((int)param_2 == 7) {
    plVar1 = (long *)(ulong)*(byte *)*unaff_x19;
  }
  else {
    func_0x00010bd2aec4();
    FUN_10bdb2a00();
    func_0x00010bd2ae58();
    func_0x00010b4c3120();
    func_0x00010bd2aeac();
    func_0x00010bd2aea0();
    func_0x00010bd2b0c0();
    func_0x00010bd2af54();
    func_0x00010bd2ae94();
    func_0x00010bd2ae88();
    func_0x00010bd2aeb8();
    func_0x00010bd2ae68();
    func_0x00010bd2ae7c();
    func_0x00010bd2af5c();
    func_0x00010bd2af70();
    if ((int)param_2 == 5) {
      return param_2;
    }
    func_0x00010bd2aec4();
    FUN_10bdb2a00();
    func_0x00010bd2ae58();
    func_0x00010bcfd128();
    func_0x00010bd2aeac();
    func_0x00010bd2aea0();
    func_0x00010bd2af54();
    func_0x00010bd2ae94();
    func_0x00010bd2ae88();
    func_0x00010bd2aeb8();
    func_0x00010bd2ae68();
    func_0x00010bd2ae7c();
    func_0x00010bd2af5c();
    func_0x00010bd2af70();
    if ((int)param_2 == 6) {
      return param_2;
    }
    func_0x00010bd2aec4();
    FUN_10bdb2a00();
    func_0x00010bd2ae58();
    FUN_10bd2a394();
    func_0x00010bd2aeac();
    func_0x00010bd2aea0();
    func_0x00010bd2af54();
    func_0x00010bd2ae94();
    func_0x00010bd2ae88();
    func_0x00010bd2aeb8();
    func_0x00010bd2ae68();
    func_0x00010bd2ae7c();
    func_0x00010bd2af5c();
    func_0x00010bd2af70();
    if ((int)param_2 != 8) {
      func_0x00010bd2aec4();
      FUN_10bdb2a00();
      func_0x00010bd2ae58();
      func_0x00010b4c3120();
      func_0x00010bd2aeac();
      func_0x00010bd2aea0();
      func_0x00010bd2af54();
      func_0x00010bd2ae94();
      func_0x00010bd2ae88();
      func_0x00010bd2aeb8();
      func_0x00010bd2ae68();
      func_0x00010bd2ae7c();
      func_0x00010bd2af5c();
      func_0x00010bd2af70();
      if ((int)param_2 == 10) {
        return (long *)*unaff_x19;
      }
      func_0x00010bd2aec4();
      FUN_10bdb2a00();
      func_0x00010bd2ae58();
      uVar4 = 0xf835e48;
      func_0x00010bd16744();
      func_0x00010bd2aeac();
      func_0x00010bd2aea0();
      func_0x00010bd2af54();
      func_0x00010bd2ae94();
      func_0x00010bd2ae88();
      func_0x00010bd2aeb8();
      func_0x00010bd2ae68();
      func_0x00010bd2ae7c();
      func_0x00010bd2af5c();
      func_0x00010bd2af70();
      if ((int)param_2 == 1) {
        *(undefined4 *)*unaff_x19 = uVar4;
      }
      else {
        func_0x00010bd2aec4();
        FUN_10bdb2a00();
        func_0x00010bd2ae58();
        puVar3 = &UNK_10f835e6a;
        func_0x00010bd2a3b4();
        func_0x00010bd2aeac();
        func_0x00010bd2aea0();
        func_0x00010bd2b090();
        func_0x00010bd2af54();
        func_0x00010bd2ae94();
        func_0x00010bd2ae88();
        func_0x00010bd2aeb8();
        func_0x00010bd2ae68();
        func_0x00010bd2ae7c();
        func_0x00010bd2af5c();
        func_0x00010bd2af70();
        if ((int)param_2 == 2) {
          *(undefined **)*unaff_x19 = puVar3;
        }
        else {
          func_0x00010bd2aec4();
          FUN_10bdb2a00();
          func_0x00010bd2ae58();
          uVar4 = 0xf835e85;
          func_0x00010bd2a3b4();
          func_0x00010bd2aeac();
          func_0x00010bd2aea0();
          func_0x00010bd2b0a0();
          func_0x00010bd2af54();
          func_0x00010bd2ae94();
          func_0x00010bd2ae88();
          func_0x00010bd2aeb8();
          func_0x00010bd2ae68();
          func_0x00010bd2ae7c();
          func_0x00010bd2af5c();
          func_0x00010bd2af70();
          if ((int)param_2 == 3) {
            *(undefined4 *)*unaff_x19 = uVar4;
          }
          else {
            func_0x00010bd2aec4();
            FUN_10bdb2a00();
            func_0x00010bd2ae58();
            puVar3 = &UNK_10f835ea0;
            func_0x00010bd2a3d4();
            func_0x00010bd2aeac();
            func_0x00010bd2aea0();
            func_0x00010bd2b0d0();
            func_0x00010bd2af54();
            func_0x00010bd2ae94();
            func_0x00010bd2ae88();
            func_0x00010bd2aeb8();
            func_0x00010bd2ae68();
            func_0x00010bd2ae7c();
            func_0x00010bd2af5c();
            func_0x00010bd2af70();
            if ((int)param_2 != 4) {
              func_0x00010bd2aec4();
              FUN_10bdb2a00();
              func_0x00010bd2ae58();
              func_0x00010bd2a3d4();
              func_0x00010bd2aeac();
              func_0x00010bd2aea0();
              func_0x00010bd2b080();
              func_0x00010bd2af54();
              func_0x00010bd2ae94();
              func_0x00010bd2ae88();
              func_0x00010bd2aeb8();
              func_0x00010bd2ae68();
              func_0x00010bd2ae7c();
              func_0x00010bd2af5c();
              uVar5 = param_1;
              func_0x00010bd2af70();
              uVar4 = (undefined4)uVar5;
              if ((int)param_2 == 5) {
                *(undefined8 *)*unaff_x19 = param_1;
              }
              else {
                func_0x00010bd2aec4();
                FUN_10bdb2a00();
                func_0x00010bd2ae58();
                func_0x00010bd2a3d4();
                func_0x00010bd2aeac();
                func_0x00010bd2aea0();
                func_0x00010bd2af54();
                func_0x00010bd2ae94();
                func_0x00010bd2ae88();
                func_0x00010bd2aeb8();
                func_0x00010bd2ae68();
                func_0x00010bd2ae7c();
                func_0x00010bd2af5c();
                func_0x00010bd2af70();
                if ((int)param_2 != 6) {
                  func_0x00010bd2aec4();
                  FUN_10bdb2a00();
                  func_0x00010bd2ae58();
                  uVar2 = 0xf4;
                  func_0x00010bd2a3b4();
                  func_0x00010bd2aeac();
                  func_0x00010bd2aea0();
                  func_0x00010bd2af54();
                  func_0x00010bd2ae94();
                  func_0x00010bd2ae88();
                  func_0x00010bd2aeb8();
                  func_0x00010bd2ae68();
                  func_0x00010bd2ae7c();
                  func_0x00010bd2af5c();
                  func_0x00010bd2af70();
                  if ((int)param_2 == 7) {
                    *(undefined1 *)*unaff_x19 = uVar2;
                    return param_2;
                  }
                  func_0x00010bd2aec4();
                  FUN_10bdb2a00();
                  func_0x00010bd2ae58();
                  puVar3 = &UNK_10f835f0f;
                  func_0x00010bd2a3f4();
                  func_0x00010bd2aeac();
                  func_0x00010bd2aea0();
                  func_0x00010bd2b0c0();
                  func_0x00010bd2af54();
                  func_0x00010bd2ae94();
                  func_0x00010bd2ae88();
                  func_0x00010bd2aeb8();
                  func_0x00010bd2ae68();
                  func_0x00010bd2ae7c();
                  func_0x00010bd2af5c();
                  func_0x00010bd2af70();
                  if ((int)param_2 != 9) {
                    func_0x00010bd2aec4();
                    FUN_10bdb2a00();
                    func_0x00010bd2ae58();
                    uVar4 = 0xf835f29;
                    func_0x00010bd2a3d4();
                    func_0x00010bd2aeac();
                    func_0x00010bd2aea0();
                    func_0x00010bd2b0b0();
                    func_0x00010bd2af54();
                    func_0x00010bd2ae94();
                    func_0x00010bd2ae88();
                    func_0x00010bd2aeb8();
                    func_0x00010bd2ae68();
                    func_0x00010bd2ae7c();
                    func_0x00010bd2af5c();
                    func_0x00010bd2af70();
                    if ((int)param_2 == 8) {
                      *(undefined4 *)*unaff_x19 = uVar4;
                      return param_2;
                    }
                    func_0x00010bd2aec4();
                    FUN_10bdb2a00();
                    func_0x00010bd2ae58();
                    func_0x00010bd2a3f4();
                    func_0x00010bd2aeac();
                    func_0x00010bd2aea0();
                    func_0x00010bd2af54();
                    func_0x00010bd2ae94();
                    func_0x00010bd2ae88();
                    func_0x00010bd2aeb8();
                    func_0x00010bd2ae68();
                    func_0x00010bd2ae7c();
                    func_0x00010bd2af5c();
                    func_0x00010bd2afd8();
                    if ((extraout_x8 & 1) != 0) {
                      FUN_10bd1d41c(extraout_x8 - 1);
                    }
                    func_0x00010bd2b134(*(undefined8 *)(*unaff_x19 + 0x28));
                    FUN_10bd28a98();
                    *(undefined4 *)(unaff_x19 + 4) = 0;
                    return unaff_x19;
                  }
                  plVar1 = (long *)*unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbce60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*(code *)
                    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5__110346350
                  )(plVar1,puVar3);
                  return plVar1;
                }
                *(undefined4 *)*unaff_x19 = uVar4;
              }
              return param_2;
            }
            *(undefined **)*unaff_x19 = puVar3;
          }
        }
      }
      return param_2;
    }
    plVar1 = (long *)(ulong)*(uint *)*unaff_x19;
  }
  return plVar1;
}



/* Entry: 10bd2929c; end: 10bd29327;  */

long * FUN_10bd2929c(undefined8 param_1,long *param_2)

{
  long *plVar1;
  undefined1 uVar2;
  undefined *puVar3;
  ulong extraout_x8;
  long *unaff_x19;
  undefined4 uVar4;
  undefined8 uVar5;
  
  func_0x00010bd2af70();
  if ((int)param_2 == 5) {
    return param_2;
  }
  func_0x00010bd2aec4();
  FUN_10bdb2a00();
  func_0x00010bd2ae58();
  func_0x00010bcfd128();
  func_0x00010bd2aeac();
  func_0x00010bd2aea0();
  func_0x00010bd2af54();
  func_0x00010bd2ae94();
  func_0x00010bd2ae88();
  func_0x00010bd2aeb8();
  func_0x00010bd2ae68();
  func_0x00010bd2ae7c();
  func_0x00010bd2af5c();
  func_0x00010bd2af70();
  if ((int)param_2 == 6) {
    return param_2;
  }
  func_0x00010bd2aec4();
  FUN_10bdb2a00();
  func_0x00010bd2ae58();
  FUN_10bd2a394();
  func_0x00010bd2aeac();
  func_0x00010bd2aea0();
  func_0x00010bd2af54();
  func_0x00010bd2ae94();
  func_0x00010bd2ae88();
  func_0x00010bd2aeb8();
  func_0x00010bd2ae68();
  func_0x00010bd2ae7c();
  func_0x00010bd2af5c();
  func_0x00010bd2af70();
  if ((int)param_2 == 8) {
    return (long *)(ulong)*(uint *)*unaff_x19;
  }
  func_0x00010bd2aec4();
  FUN_10bdb2a00();
  func_0x00010bd2ae58();
  func_0x00010b4c3120();
  func_0x00010bd2aeac();
  func_0x00010bd2aea0();
  func_0x00010bd2af54();
  func_0x00010bd2ae94();
  func_0x00010bd2ae88();
  func_0x00010bd2aeb8();
  func_0x00010bd2ae68();
  func_0x00010bd2ae7c();
  func_0x00010bd2af5c();
  func_0x00010bd2af70();
  if ((int)param_2 != 10) {
    func_0x00010bd2aec4();
    FUN_10bdb2a00();
    func_0x00010bd2ae58();
    uVar4 = 0xf835e48;
    func_0x00010bd16744();
    func_0x00010bd2aeac();
    func_0x00010bd2aea0();
    func_0x00010bd2af54();
    func_0x00010bd2ae94();
    func_0x00010bd2ae88();
    func_0x00010bd2aeb8();
    func_0x00010bd2ae68();
    func_0x00010bd2ae7c();
    func_0x00010bd2af5c();
    func_0x00010bd2af70();
    if ((int)param_2 == 1) {
      *(undefined4 *)*unaff_x19 = uVar4;
    }
    else {
      func_0x00010bd2aec4();
      FUN_10bdb2a00();
      func_0x00010bd2ae58();
      puVar3 = &UNK_10f835e6a;
      func_0x00010bd2a3b4();
      func_0x00010bd2aeac();
      func_0x00010bd2aea0();
      func_0x00010bd2b090();
      func_0x00010bd2af54();
      func_0x00010bd2ae94();
      func_0x00010bd2ae88();
      func_0x00010bd2aeb8();
      func_0x00010bd2ae68();
      func_0x00010bd2ae7c();
      func_0x00010bd2af5c();
      func_0x00010bd2af70();
      if ((int)param_2 == 2) {
        *(undefined **)*unaff_x19 = puVar3;
      }
      else {
        func_0x00010bd2aec4();
        FUN_10bdb2a00();
        func_0x00010bd2ae58();
        uVar4 = 0xf835e85;
        func_0x00010bd2a3b4();
        func_0x00010bd2aeac();
        func_0x00010bd2aea0();
        func_0x00010bd2b0a0();
        func_0x00010bd2af54();
        func_0x00010bd2ae94();
        func_0x00010bd2ae88();
        func_0x00010bd2aeb8();
        func_0x00010bd2ae68();
        func_0x00010bd2ae7c();
        func_0x00010bd2af5c();
        func_0x00010bd2af70();
        if ((int)param_2 == 3) {
          *(undefined4 *)*unaff_x19 = uVar4;
        }
        else {
          func_0x00010bd2aec4();
          FUN_10bdb2a00();
          func_0x00010bd2ae58();
          puVar3 = &UNK_10f835ea0;
          func_0x00010bd2a3d4();
          func_0x00010bd2aeac();
          func_0x00010bd2aea0();
          func_0x00010bd2b0d0();
          func_0x00010bd2af54();
          func_0x00010bd2ae94();
          func_0x00010bd2ae88();
          func_0x00010bd2aeb8();
          func_0x00010bd2ae68();
          func_0x00010bd2ae7c();
          func_0x00010bd2af5c();
          func_0x00010bd2af70();
          if ((int)param_2 != 4) {
            func_0x00010bd2aec4();
            FUN_10bdb2a00();
            func_0x00010bd2ae58();
            func_0x00010bd2a3d4();
            func_0x00010bd2aeac();
            func_0x00010bd2aea0();
            func_0x00010bd2b080();
            func_0x00010bd2af54();
            func_0x00010bd2ae94();
            func_0x00010bd2ae88();
            func_0x00010bd2aeb8();
            func_0x00010bd2ae68();
            func_0x00010bd2ae7c();
            func_0x00010bd2af5c();
            uVar5 = param_1;
            func_0x00010bd2af70();
            uVar4 = (undefined4)uVar5;
            if ((int)param_2 == 5) {
              *(undefined8 *)*unaff_x19 = param_1;
            }
            else {
              func_0x00010bd2aec4();
              FUN_10bdb2a00();
              func_0x00010bd2ae58();
              func_0x00010bd2a3d4();
              func_0x00010bd2aeac();
              func_0x00010bd2aea0();
              func_0x00010bd2af54();
              func_0x00010bd2ae94();
              func_0x00010bd2ae88();
              func_0x00010bd2aeb8();
              func_0x00010bd2ae68();
              func_0x00010bd2ae7c();
              func_0x00010bd2af5c();
              func_0x00010bd2af70();
              if ((int)param_2 != 6) {
                func_0x00010bd2aec4();
                FUN_10bdb2a00();
                func_0x00010bd2ae58();
                uVar2 = 0xf4;
                func_0x00010bd2a3b4();
                func_0x00010bd2aeac();
                func_0x00010bd2aea0();
                func_0x00010bd2af54();
                func_0x00010bd2ae94();
                func_0x00010bd2ae88();
                func_0x00010bd2aeb8();
                func_0x00010bd2ae68();
                func_0x00010bd2ae7c();
                func_0x00010bd2af5c();
                func_0x00010bd2af70();
                if ((int)param_2 == 7) {
                  *(undefined1 *)*unaff_x19 = uVar2;
                  return param_2;
                }
                func_0x00010bd2aec4();
                FUN_10bdb2a00();
                func_0x00010bd2ae58();
                puVar3 = &UNK_10f835f0f;
                func_0x00010bd2a3f4();
                func_0x00010bd2aeac();
                func_0x00010bd2aea0();
                func_0x00010bd2b0c0();
                func_0x00010bd2af54();
                func_0x00010bd2ae94();
                func_0x00010bd2ae88();
                func_0x00010bd2aeb8();
                func_0x00010bd2ae68();
                func_0x00010bd2ae7c();
                func_0x00010bd2af5c();
                func_0x00010bd2af70();
                if ((int)param_2 != 9) {
                  func_0x00010bd2aec4();
                  FUN_10bdb2a00();
                  func_0x00010bd2ae58();
                  uVar4 = 0xf835f29;
                  func_0x00010bd2a3d4();
                  func_0x00010bd2aeac();
                  func_0x00010bd2aea0();
                  func_0x00010bd2b0b0();
                  func_0x00010bd2af54();
                  func_0x00010bd2ae94();
                  func_0x00010bd2ae88();
                  func_0x00010bd2aeb8();
                  func_0x00010bd2ae68();
                  func_0x00010bd2ae7c();
                  func_0x00010bd2af5c();
                  func_0x00010bd2af70();
                  if ((int)param_2 == 8) {
                    *(undefined4 *)*unaff_x19 = uVar4;
                    return param_2;
                  }
                  func_0x00010bd2aec4();
                  FUN_10bdb2a00();
                  func_0x00010bd2ae58();
                  func_0x00010bd2a3f4();
                  func_0x00010bd2aeac();
                  func_0x00010bd2aea0();
                  func_0x00010bd2af54();
                  func_0x00010bd2ae94();
                  func_0x00010bd2ae88();
                  func_0x00010bd2aeb8();
                  func_0x00010bd2ae68();
                  func_0x00010bd2ae7c();
                  func_0x00010bd2af5c();
                  func_0x00010bd2afd8();
                  if ((extraout_x8 & 1) != 0) {
                    FUN_10bd1d41c(extraout_x8 - 1);
                  }
                  func_0x00010bd2b134(*(undefined8 *)(*unaff_x19 + 0x28));
                  FUN_10bd28a98();
                  *(undefined4 *)(unaff_x19 + 4) = 0;
                  return unaff_x19;
                }
                plVar1 = (long *)*unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbce60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(code *)
                  PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5__110346350
                )(plVar1,puVar3);
                return plVar1;
              }
              *(undefined4 *)*unaff_x19 = uVar4;
            }
            return param_2;
          }
          *(undefined **)*unaff_x19 = puVar3;
        }
      }
    }
    return param_2;
  }
  return (long *)*unaff_x19;
}



/* Entry: 10bd29328; end: 10bd293b3;  */

long * FUN_10bd29328(undefined8 param_1,long *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  ulong extraout_x8;
  long *unaff_x19;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar7 = (undefined4)((ulong)param_1 >> 0x20);
  uVar6 = (undefined4)param_1;
  func_0x00010bd2af70();
  if ((int)param_2 == 6) {
    return param_2;
  }
  func_0x00010bd2aec4();
  FUN_10bdb2a00();
  func_0x00010bd2ae58();
  FUN_10bd2a394();
  func_0x00010bd2aeac();
  func_0x00010bd2aea0();
  func_0x00010bd2af54();
  func_0x00010bd2ae94();
  func_0x00010bd2ae88();
  func_0x00010bd2aeb8();
  func_0x00010bd2ae68();
  func_0x00010bd2ae7c();
  func_0x00010bd2af5c();
  func_0x00010bd2af70();
  if ((int)param_2 == 8) {
    return (long *)(ulong)*(uint *)*unaff_x19;
  }
  func_0x00010bd2aec4();
  FUN_10bdb2a00();
  func_0x00010bd2ae58();
  func_0x00010b4c3120();
  func_0x00010bd2aeac();
  func_0x00010bd2aea0();
  func_0x00010bd2af54();
  func_0x00010bd2ae94();
  func_0x00010bd2ae88();
  func_0x00010bd2aeb8();
  func_0x00010bd2ae68();
  func_0x00010bd2ae7c();
  func_0x00010bd2af5c();
  func_0x00010bd2af70();
  if ((int)param_2 == 10) {
    return (long *)*unaff_x19;
  }
  func_0x00010bd2aec4();
  FUN_10bdb2a00();
  func_0x00010bd2ae58();
  uVar4 = 0xf835e48;
  func_0x00010bd16744();
  func_0x00010bd2aeac();
  func_0x00010bd2aea0();
  func_0x00010bd2af54();
  func_0x00010bd2ae94();
  func_0x00010bd2ae88();
  func_0x00010bd2aeb8();
  func_0x00010bd2ae68();
  func_0x00010bd2ae7c();
  func_0x00010bd2af5c();
  func_0x00010bd2af70();
  if ((int)param_2 == 1) {
    *(undefined4 *)*unaff_x19 = uVar4;
  }
  else {
    func_0x00010bd2aec4();
    FUN_10bdb2a00();
    func_0x00010bd2ae58();
    puVar5 = &UNK_10f835e6a;
    func_0x00010bd2a3b4();
    func_0x00010bd2aeac();
    func_0x00010bd2aea0();
    func_0x00010bd2b090();
    func_0x00010bd2af54();
    func_0x00010bd2ae94();
    func_0x00010bd2ae88();
    func_0x00010bd2aeb8();
    func_0x00010bd2ae68();
    func_0x00010bd2ae7c();
    func_0x00010bd2af5c();
    func_0x00010bd2af70();
    if ((int)param_2 == 2) {
      *(undefined **)*unaff_x19 = puVar5;
    }
    else {
      func_0x00010bd2aec4();
      FUN_10bdb2a00();
      func_0x00010bd2ae58();
      uVar4 = 0xf835e85;
      func_0x00010bd2a3b4();
      func_0x00010bd2aeac();
      func_0x00010bd2aea0();
      func_0x00010bd2b0a0();
      func_0x00010bd2af54();
      func_0x00010bd2ae94();
      func_0x00010bd2ae88();
      func_0x00010bd2aeb8();
      func_0x00010bd2ae68();
      func_0x00010bd2ae7c();
      func_0x00010bd2af5c();
      func_0x00010bd2af70();
      if ((int)param_2 == 3) {
        *(undefined4 *)*unaff_x19 = uVar4;
      }
      else {
        func_0x00010bd2aec4();
        FUN_10bdb2a00();
        func_0x00010bd2ae58();
        puVar5 = &UNK_10f835ea0;
        func_0x00010bd2a3d4();
        func_0x00010bd2aeac();
        func_0x00010bd2aea0();
        func_0x00010bd2b0d0();
        func_0x00010bd2af54();
        func_0x00010bd2ae94();
        func_0x00010bd2ae88();
        func_0x00010bd2aeb8();
        func_0x00010bd2ae68();
        func_0x00010bd2ae7c();
        func_0x00010bd2af5c();
        func_0x00010bd2af70();
        if ((int)param_2 != 4) {
          func_0x00010bd2aec4();
          FUN_10bdb2a00();
          func_0x00010bd2ae58();
          func_0x00010bd2a3d4();
          func_0x00010bd2aeac();
          func_0x00010bd2aea0();
          func_0x00010bd2b080();
          func_0x00010bd2af54();
          func_0x00010bd2ae94();
          func_0x00010bd2ae88();
          func_0x00010bd2aeb8();
          func_0x00010bd2ae68();
          func_0x00010bd2ae7c();
          func_0x00010bd2af5c();
          uVar1 = CONCAT44(uVar7,uVar6);
          func_0x00010bd2af70();
          if ((int)param_2 == 5) {
            *(undefined8 *)*unaff_x19 = uVar1;
          }
          else {
            func_0x00010bd2aec4();
            FUN_10bdb2a00();
            func_0x00010bd2ae58();
            func_0x00010bd2a3d4();
            func_0x00010bd2aeac();
            func_0x00010bd2aea0();
            func_0x00010bd2af54();
            func_0x00010bd2ae94();
            func_0x00010bd2ae88();
            func_0x00010bd2aeb8();
            func_0x00010bd2ae68();
            func_0x00010bd2ae7c();
            func_0x00010bd2af5c();
            func_0x00010bd2af70();
            if ((int)param_2 != 6) {
              func_0x00010bd2aec4();
              FUN_10bdb2a00();
              func_0x00010bd2ae58();
              uVar3 = 0xf4;
              func_0x00010bd2a3b4();
              func_0x00010bd2aeac();
              func_0x00010bd2aea0();
              func_0x00010bd2af54();
              func_0x00010bd2ae94();
              func_0x00010bd2ae88();
              func_0x00010bd2aeb8();
              func_0x00010bd2ae68();
              func_0x00010bd2ae7c();
              func_0x00010bd2af5c();
              func_0x00010bd2af70();
              if ((int)param_2 == 7) {
                *(undefined1 *)*unaff_x19 = uVar3;
                return param_2;
              }
              func_0x00010bd2aec4();
              FUN_10bdb2a00();
              func_0x00010bd2ae58();
              puVar5 = &UNK_10f835f0f;
              func_0x00010bd2a3f4();
              func_0x00010bd2aeac();
              func_0x00010bd2aea0();
              func_0x00010bd2b0c0();
              func_0x00010bd2af54();
              func_0x00010bd2ae94();
              func_0x00010bd2ae88();
              func_0x00010bd2aeb8();
              func_0x00010bd2ae68();
              func_0x00010bd2ae7c();
              func_0x00010bd2af5c();
              func_0x00010bd2af70();
              if ((int)param_2 != 9) {
                func_0x00010bd2aec4();
                FUN_10bdb2a00();
                func_0x00010bd2ae58();
                uVar6 = 0xf835f29;
                func_0x00010bd2a3d4();
                func_0x00010bd2aeac();
                func_0x00010bd2aea0();
                func_0x00010bd2b0b0();
                func_0x00010bd2af54();
                func_0x00010bd2ae94();
                func_0x00010bd2ae88();
                func_0x00010bd2aeb8();
                func_0x00010bd2ae68();
                func_0x00010bd2ae7c();
                func_0x00010bd2af5c();
                func_0x00010bd2af70();
                if ((int)param_2 == 8) {
                  *(undefined4 *)*unaff_x19 = uVar6;
                  return param_2;
                }
                func_0x00010bd2aec4();
                FUN_10bdb2a00();
                func_0x00010bd2ae58();
                func_0x00010bd2a3f4();
                func_0x00010bd2aeac();
                func_0x00010bd2aea0();
                func_0x00010bd2af54();
                func_0x00010bd2ae94();
                func_0x00010bd2ae88();
                func_0x00010bd2aeb8();
                func_0x00010bd2ae68();
                func_0x00010bd2ae7c();
                func_0x00010bd2af5c();
                func_0x00010bd2afd8();
                if ((extraout_x8 & 1) != 0) {
                  FUN_10bd1d41c(extraout_x8 - 1);
                }
                func_0x00010bd2b134(*(undefined8 *)(*unaff_x19 + 0x28));
                FUN_10bd28a98();
                *(undefined4 *)(unaff_x19 + 4) = 0;
                return unaff_x19;
              }
              plVar2 = (long *)*unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbce60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)
                PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5__110346350
              )(plVar2,puVar5);
              return plVar2;
            }
            *(undefined4 *)*unaff_x19 = uVar6;
          }
          return param_2;
        }
        *(undefined **)*unaff_x19 = puVar5;
      }
    }
  }
  return param_2;
}



/* Entry: 10bd293b4; end: 10bd29437;  */

long * FUN_10bd293b4(undefined8 param_1,long *param_2)

{
  long *plVar1;
  undefined1 uVar2;
  undefined *puVar3;
  ulong extraout_x8;
  long *unaff_x19;
  undefined4 uVar4;
  undefined8 uVar5;
  
  func_0x00010bd2af70();
  if ((int)param_2 == 8) {
    return (long *)(ulong)*(uint *)*unaff_x19;
  }
  func_0x00010bd2aec4();
  FUN_10bdb2a00();
  func_0x00010bd2ae58();
  func_0x00010b4c3120();
  func_0x00010bd2aeac();
  func_0x00010bd2aea0();
  func_0x00010bd2af54();
  func_0x00010bd2ae94();
  func_0x00010bd2ae88();
  func_0x00010bd2aeb8();
  func_0x00010bd2ae68();
  func_0x00010bd2ae7c();
  func_0x00010bd2af5c();
  func_0x00010bd2af70();
  if ((int)param_2 == 10) {
    return (long *)*unaff_x19;
  }
  func_0x00010bd2aec4();
  FUN_10bdb2a00();
  func_0x00010bd2ae58();
  uVar4 = 0xf835e48;
  func_0x00010bd16744();
  func_0x00010bd2aeac();
  func_0x00010bd2aea0();
  func_0x00010bd2af54();
  func_0x00010bd2ae94();
  func_0x00010bd2ae88();
  func_0x00010bd2aeb8();
  func_0x00010bd2ae68();
  func_0x00010bd2ae7c();
  func_0x00010bd2af5c();
  func_0x00010bd2af70();
  if ((int)param_2 == 1) {
    *(undefined4 *)*unaff_x19 = uVar4;
  }
  else {
    func_0x00010bd2aec4();
    FUN_10bdb2a00();
    func_0x00010bd2ae58();
    puVar3 = &UNK_10f835e6a;
    func_0x00010bd2a3b4();
    func_0x00010bd2aeac();
    func_0x00010bd2aea0();
    func_0x00010bd2b090();
    func_0x00010bd2af54();
    func_0x00010bd2ae94();
    func_0x00010bd2ae88();
    func_0x00010bd2aeb8();
    func_0x00010bd2ae68();
    func_0x00010bd2ae7c();
    func_0x00010bd2af5c();
    func_0x00010bd2af70();
    if ((int)param_2 == 2) {
      *(undefined **)*unaff_x19 = puVar3;
    }
    else {
      func_0x00010bd2aec4();
      FUN_10bdb2a00();
      func_0x00010bd2ae58();
      uVar4 = 0xf835e85;
      func_0x00010bd2a3b4();
      func_0x00010bd2aeac();
      func_0x00010bd2aea0();
      func_0x00010bd2b0a0();
      func_0x00010bd2af54();
      func_0x00010bd2ae94();
      func_0x00010bd2ae88();
      func_0x00010bd2aeb8();
      func_0x00010bd2ae68();
      func_0x00010bd2ae7c();
      func_0x00010bd2af5c();
      func_0x00010bd2af70();
      if ((int)param_2 == 3) {
        *(undefined4 *)*unaff_x19 = uVar4;
      }
      else {
        func_0x00010bd2aec4();
        FUN_10bdb2a00();
        func_0x00010bd2ae58();
        puVar3 = &UNK_10f835ea0;
        func_0x00010bd2a3d4();
        func_0x00010bd2aeac();
        func_0x00010bd2aea0();
        func_0x00010bd2b0d0();
        func_0x00010bd2af54();
        func_0x00010bd2ae94();
        func_0x00010bd2ae88();
        func_0x00010bd2aeb8();
        func_0x00010bd2ae68();
        func_0x00010bd2ae7c();
        func_0x00010bd2af5c();
        func_0x00010bd2af70();
        if ((int)param_2 != 4) {
          func_0x00010bd2aec4();
          FUN_10bdb2a00();
          func_0x00010bd2ae58();
          func_0x00010bd2a3d4();
          func_0x00010bd2aeac();
          func_0x00010bd2aea0();
          func_0x00010bd2b080();
          func_0x00010bd2af54();
          func_0x00010bd2ae94();
          func_0x00010bd2ae88();
          func_0x00010bd2aeb8();
          func_0x00010bd2ae68();
          func_0x00010bd2ae7c();
          func_0x00010bd2af5c();
          uVar5 = param_1;
          func_0x00010bd2af70();
          uVar4 = (undefined4)uVar5;
          if ((int)param_2 == 5) {
            *(undefined8 *)*unaff_x19 = param_1;
          }
          else {
            func_0x00010bd2aec4();
            FUN_10bdb2a00();
            func_0x00010bd2ae58();
            func_0x00010bd2a3d4();
            func_0x00010bd2aeac();
            func_0x00010bd2aea0();
            func_0x00010bd2af54();
            func_0x00010bd2ae94();
            func_0x00010bd2ae88();
            func_0x00010bd2aeb8();
            func_0x00010bd2ae68();
            func_0x00010bd2ae7c();
            func_0x00010bd2af5c();
            func_0x00010bd2af70();
            if ((int)param_2 != 6) {
              func_0x00010bd2aec4();
              FUN_10bdb2a00();
              func_0x00010bd2ae58();
              uVar2 = 0xf4;
              func_0x00010bd2a3b4();
              func_0x00010bd2aeac();
              func_0x00010bd2aea0();
              func_0x00010bd2af54();
              func_0x00010bd2ae94();
              func_0x00010bd2ae88();
              func_0x00010bd2aeb8();
              func_0x00010bd2ae68();
              func_0x00010bd2ae7c();
              func_0x00010bd2af5c();
              func_0x00010bd2af70();
              if ((int)param_2 == 7) {
                *(undefined1 *)*unaff_x19 = uVar2;
                return param_2;
              }
              func_0x00010bd2aec4();
              FUN_10bdb2a00();
              func_0x00010bd2ae58();
              puVar3 = &UNK_10f835f0f;
              func_0x00010bd2a3f4();
              func_0x00010bd2aeac();
              func_0x00010bd2aea0();
              func_0x00010bd2b0c0();
              func_0x00010bd2af54();
              func_0x00010bd2ae94();
              func_0x00010bd2ae88();
              func_0x00010bd2aeb8();
              func_0x00010bd2ae68();
              func_0x00010bd2ae7c();
              func_0x00010bd2af5c();
              func_0x00010bd2af70();
              if ((int)param_2 != 9) {
                func_0x00010bd2aec4();
                FUN_10bdb2a00();
                func_0x00010bd2ae58();
                uVar4 = 0xf835f29;
                func_0x00010bd2a3d4();
                func_0x00010bd2aeac();
                func_0x00010bd2aea0();
                func_0x00010bd2b0b0();
                func_0x00010bd2af54();
                func_0x00010bd2ae94();
                func_0x00010bd2ae88();
                func_0x00010bd2aeb8();
                func_0x00010bd2ae68();
                func_0x00010bd2ae7c();
                func_0x00010bd2af5c();
                func_0x00010bd2af70();
                if ((int)param_2 == 8) {
                  *(undefined4 *)*unaff_x19 = uVar4;
                  return param_2;
                }
                func_0x00010bd2aec4();
                FUN_10bdb2a00();
                func_0x00010bd2ae58();
                func_0x00010bd2a3f4();
                func_0x00010bd2aeac();
                func_0x00010bd2aea0();
                func_0x00010bd2af54();
                func_0x00010bd2ae94();
                func_0x00010bd2ae88();
                func_0x00010bd2aeb8();
                func_0x00010bd2ae68();
                func_0x00010bd2ae7c();
                func_0x00010bd2af5c();
                func_0x00010bd2afd8();
                if ((extraout_x8 & 1) != 0) {
                  FUN_10bd1d41c(extraout_x8 - 1);
                }
                func_0x00010bd2b134(*(undefined8 *)(*unaff_x19 + 0x28));
                FUN_10bd28a98();
                *(undefined4 *)(unaff_x19 + 4) = 0;
                return unaff_x19;
              }
              plVar1 = (long *)*unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbce60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)
                PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5__110346350
              )(plVar1,puVar3);
              return plVar1;
            }
            *(undefined4 *)*unaff_x19 = uVar4;
          }
          return param_2;
        }
        *(undefined **)*unaff_x19 = puVar3;
      }
    }
  }
  return param_2;
}



/* Entry: 10bd29438; end: 10bd294b7;  */

long * FUN_10bd29438(undefined8 param_1,long *param_2)

{
  long *plVar1;
  undefined1 uVar2;
  undefined *puVar3;
  ulong extraout_x8;
  long *unaff_x19;
  undefined4 uVar4;
  undefined8 uVar5;
  
  func_0x00010bd2af70();
  if ((int)param_2 == 10) {
    return (long *)*unaff_x19;
  }
  func_0x00010bd2aec4();
  FUN_10bdb2a00();
  func_0x00010bd2ae58();
  uVar4 = 0xf835e48;
  func_0x00010bd16744();
  func_0x00010bd2aeac();
  func_0x00010bd2aea0();
  func_0x00010bd2af54();
  func_0x00010bd2ae94();
  func_0x00010bd2ae88();
  func_0x00010bd2aeb8();
  func_0x00010bd2ae68();
  func_0x00010bd2ae7c();
  func_0x00010bd2af5c();
  func_0x00010bd2af70();
  if ((int)param_2 == 1) {
    *(undefined4 *)*unaff_x19 = uVar4;
  }
  else {
    func_0x00010bd2aec4();
    FUN_10bdb2a00();
    func_0x00010bd2ae58();
    puVar3 = &UNK_10f835e6a;
    func_0x00010bd2a3b4();
    func_0x00010bd2aeac();
    func_0x00010bd2aea0();
    func_0x00010bd2b090();
    func_0x00010bd2af54();
    func_0x00010bd2ae94();
    func_0x00010bd2ae88();
    func_0x00010bd2aeb8();
    func_0x00010bd2ae68();
    func_0x00010bd2ae7c();
    func_0x00010bd2af5c();
    func_0x00010bd2af70();
    if ((int)param_2 == 2) {
      *(undefined **)*unaff_x19 = puVar3;
    }
    else {
      func_0x00010bd2aec4();
      FUN_10bdb2a00();
      func_0x00010bd2ae58();
      uVar4 = 0xf835e85;
      func_0x00010bd2a3b4();
      func_0x00010bd2aeac();
      func_0x00010bd2aea0();
      func_0x00010bd2b0a0();
      func_0x00010bd2af54();
      func_0x00010bd2ae94();
      func_0x00010bd2ae88();
      func_0x00010bd2aeb8();
      func_0x00010bd2ae68();
      func_0x00010bd2ae7c();
      func_0x00010bd2af5c();
      func_0x00010bd2af70();
      if ((int)param_2 == 3) {
        *(undefined4 *)*unaff_x19 = uVar4;
      }
      else {
        func_0x00010bd2aec4();
        FUN_10bdb2a00();
        func_0x00010bd2ae58();
        puVar3 = &UNK_10f835ea0;
        func_0x00010bd2a3d4();
        func_0x00010bd2aeac();
        func_0x00010bd2aea0();
        func_0x00010bd2b0d0();
        func_0x00010bd2af54();
        func_0x00010bd2ae94();
        func_0x00010bd2ae88();
        func_0x00010bd2aeb8();
        func_0x00010bd2ae68();
        func_0x00010bd2ae7c();
        func_0x00010bd2af5c();
        func_0x00010bd2af70();
        if ((int)param_2 != 4) {
          func_0x00010bd2aec4();
          FUN_10bdb2a00();
          func_0x00010bd2ae58();
          func_0x00010bd2a3d4();
          func_0x00010bd2aeac();
          func_0x00010bd2aea0();
          func_0x00010bd2b080();
          func_0x00010bd2af54();
          func_0x00010bd2ae94();
          func_0x00010bd2ae88();
          func_0x00010bd2aeb8();
          func_0x00010bd2ae68();
          func_0x00010bd2ae7c();
          func_0x00010bd2af5c();
          uVar5 = param_1;
          func_0x00010bd2af70();
          uVar4 = (undefined4)uVar5;
          if ((int)param_2 == 5) {
            *(undefined8 *)*unaff_x19 = param_1;
          }
          else {
            func_0x00010bd2aec4();
            FUN_10bdb2a00();
            func_0x00010bd2ae58();
            func_0x00010bd2a3d4();
            func_0x00010bd2aeac();
            func_0x00010bd2aea0();
            func_0x00010bd2af54();
            func_0x00010bd2ae94();
            func_0x00010bd2ae88();
            func_0x00010bd2aeb8();
            func_0x00010bd2ae68();
            func_0x00010bd2ae7c();
            func_0x00010bd2af5c();
            func_0x00010bd2af70();
            if ((int)param_2 != 6) {
              func_0x00010bd2aec4();
              FUN_10bdb2a00();
              func_0x00010bd2ae58();
              uVar2 = 0xf4;
              func_0x00010bd2a3b4();
              func_0x00010bd2aeac();
              func_0x00010bd2aea0();
              func_0x00010bd2af54();
              func_0x00010bd2ae94();
              func_0x00010bd2ae88();
              func_0x00010bd2aeb8();
              func_0x00010bd2ae68();
              func_0x00010bd2ae7c();
              func_0x00010bd2af5c();
              func_0x00010bd2af70();
              if ((int)param_2 == 7) {
                *(undefined1 *)*unaff_x19 = uVar2;
                return param_2;
              }
              func_0x00010bd2aec4();
              FUN_10bdb2a00();
              func_0x00010bd2ae58();
              puVar3 = &UNK_10f835f0f;
              func_0x00010bd2a3f4();
              func_0x00010bd2aeac();
              func_0x00010bd2aea0();
              func_0x00010bd2b0c0();
              func_0x00010bd2af54();
              func_0x00010bd2ae94();
              func_0x00010bd2ae88();
              func_0x00010bd2aeb8();
              func_0x00010bd2ae68();
              func_0x00010bd2ae7c();
              func_0x00010bd2af5c();
              func_0x00010bd2af70();
              if ((int)param_2 != 9) {
                func_0x00010bd2aec4();
                FUN_10bdb2a00();
                func_0x00010bd2ae58();
                uVar4 = 0xf835f29;
                func_0x00010bd2a3d4();
                func_0x00010bd2aeac();
                func_0x00010bd2aea0();
                func_0x00010bd2b0b0();
                func_0x00010bd2af54();
                func_0x00010bd2ae94();
                func_0x00010bd2ae88();
                func_0x00010bd2aeb8();
                func_0x00010bd2ae68();
                func_0x00010bd2ae7c();
                func_0x00010bd2af5c();
                func_0x00010bd2af70();
                if ((int)param_2 == 8) {
                  *(undefined4 *)*unaff_x19 = uVar4;
                  return param_2;
                }
                func_0x00010bd2aec4();
                FUN_10bdb2a00();
                func_0x00010bd2ae58();
                func_0x00010bd2a3f4();
                func_0x00010bd2aeac();
                func_0x00010bd2aea0();
                func_0x00010bd2af54();
                func_0x00010bd2ae94();
                func_0x00010bd2ae88();
                func_0x00010bd2aeb8();
                func_0x00010bd2ae68();
                func_0x00010bd2ae7c();
                func_0x00010bd2af5c();
                func_0x00010bd2afd8();
                if ((extraout_x8 & 1) != 0) {
                  FUN_10bd1d41c(extraout_x8 - 1);
                }
                func_0x00010bd2b134(*(undefined8 *)(*unaff_x19 + 0x28));
                FUN_10bd28a98();
                *(undefined4 *)(unaff_x19 + 4) = 0;
                return unaff_x19;
              }
              plVar1 = (long *)*unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbce60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)
                PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5__110346350
              )(plVar1,puVar3);
              return plVar1;
            }
            *(undefined4 *)*unaff_x19 = uVar4;
          }
          return param_2;
        }
        *(undefined **)*unaff_x19 = puVar3;
      }
    }
  }
  return param_2;
}



/* Entry: 10bd294b8; end: 10bd29537;  */

void FUN_10bd294b8(undefined8 param_1,int param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined *puVar2;
  ulong extraout_x8;
  long *unaff_x19;
  undefined4 uVar3;
  undefined8 uVar4;
  
  func_0x00010bd2af70();
  if (param_2 == 1) {
    *(undefined4 *)*unaff_x19 = param_3;
  }
  else {
    func_0x00010bd2aec4();
    FUN_10bdb2a00();
    func_0x00010bd2ae58();
    puVar2 = &UNK_10f835e6a;
    func_0x00010bd2a3b4();
    func_0x00010bd2aeac();
    func_0x00010bd2aea0();
    func_0x00010bd2b090();
    func_0x00010bd2af54();
    func_0x00010bd2ae94();
    func_0x00010bd2ae88();
    func_0x00010bd2aeb8();
    func_0x00010bd2ae68();
    func_0x00010bd2ae7c();
    func_0x00010bd2af5c();
    func_0x00010bd2af70();
    if (param_2 == 2) {
      *(undefined **)*unaff_x19 = puVar2;
    }
    else {
      func_0x00010bd2aec4();
      FUN_10bdb2a00();
      func_0x00010bd2ae58();
      uVar3 = 0xf835e85;
      func_0x00010bd2a3b4();
      func_0x00010bd2aeac();
      func_0x00010bd2aea0();
      func_0x00010bd2b0a0();
      func_0x00010bd2af54();
      func_0x00010bd2ae94();
      func_0x00010bd2ae88();
      func_0x00010bd2aeb8();
      func_0x00010bd2ae68();
      func_0x00010bd2ae7c();
      func_0x00010bd2af5c();
      func_0x00010bd2af70();
      if (param_2 == 3) {
        *(undefined4 *)*unaff_x19 = uVar3;
      }
      else {
        func_0x00010bd2aec4();
        FUN_10bdb2a00();
        func_0x00010bd2ae58();
        puVar2 = &UNK_10f835ea0;
        func_0x00010bd2a3d4();
        func_0x00010bd2aeac();
        func_0x00010bd2aea0();
        func_0x00010bd2b0d0();
        func_0x00010bd2af54();
        func_0x00010bd2ae94();
        func_0x00010bd2ae88();
        func_0x00010bd2aeb8();
        func_0x00010bd2ae68();
        func_0x00010bd2ae7c();
        func_0x00010bd2af5c();
        func_0x00010bd2af70();
        if (param_2 != 4) {
          func_0x00010bd2aec4();
          FUN_10bdb2a00();
          func_0x00010bd2ae58();
          func_0x00010bd2a3d4();
          func_0x00010bd2aeac();
          func_0x00010bd2aea0();
          func_0x00010bd2b080();
          func_0x00010bd2af54();
          func_0x00010bd2ae94();
          func_0x00010bd2ae88();
          func_0x00010bd2aeb8();
          func_0x00010bd2ae68();
          func_0x00010bd2ae7c();
          func_0x00010bd2af5c();
          uVar4 = param_1;
          func_0x00010bd2af70();
          uVar3 = (undefined4)uVar4;
          if (param_2 == 5) {
            *(undefined8 *)*unaff_x19 = param_1;
          }
          else {
            func_0x00010bd2aec4();
            FUN_10bdb2a00();
            func_0x00010bd2ae58();
            func_0x00010bd2a3d4();
            func_0x00010bd2aeac();
            func_0x00010bd2aea0();
            func_0x00010bd2af54();
            func_0x00010bd2ae94();
            func_0x00010bd2ae88();
            func_0x00010bd2aeb8();
            func_0x00010bd2ae68();
            func_0x00010bd2ae7c();
            func_0x00010bd2af5c();
            func_0x00010bd2af70();
            if (param_2 != 6) {
              func_0x00010bd2aec4();
              FUN_10bdb2a00();
              func_0x00010bd2ae58();
              uVar1 = 0xf4;
              func_0x00010bd2a3b4();
              func_0x00010bd2aeac();
              func_0x00010bd2aea0();
              func_0x00010bd2af54();
              func_0x00010bd2ae94();
              func_0x00010bd2ae88();
              func_0x00010bd2aeb8();
              func_0x00010bd2ae68();
              func_0x00010bd2ae7c();
              func_0x00010bd2af5c();
              func_0x00010bd2af70();
              if (param_2 == 7) {
                *(undefined1 *)*unaff_x19 = uVar1;
                return;
              }
              func_0x00010bd2aec4();
              FUN_10bdb2a00();
              func_0x00010bd2ae58();
              puVar2 = &UNK_10f835f0f;
              func_0x00010bd2a3f4();
              func_0x00010bd2aeac();
              func_0x00010bd2aea0();
              func_0x00010bd2b0c0();
              func_0x00010bd2af54();
              func_0x00010bd2ae94();
              func_0x00010bd2ae88();
              func_0x00010bd2aeb8();
              func_0x00010bd2ae68();
              func_0x00010bd2ae7c();
              func_0x00010bd2af5c();
              func_0x00010bd2af70();
              if (param_2 != 9) {
                func_0x00010bd2aec4();
                FUN_10bdb2a00();
                func_0x00010bd2ae58();
                uVar3 = 0xf835f29;
                func_0x00010bd2a3d4();
                func_0x00010bd2aeac();
                func_0x00010bd2aea0();
                func_0x00010bd2b0b0();
                func_0x00010bd2af54();
                func_0x00010bd2ae94();
                func_0x00010bd2ae88();
                func_0x00010bd2aeb8();
                func_0x00010bd2ae68();
                func_0x00010bd2ae7c();
                func_0x00010bd2af5c();
                func_0x00010bd2af70();
                if (param_2 == 8) {
                  *(undefined4 *)*unaff_x19 = uVar3;
                  return;
                }
                func_0x00010bd2aec4();
                FUN_10bdb2a00();
                func_0x00010bd2ae58();
                func_0x00010bd2a3f4();
                func_0x00010bd2aeac();
                func_0x00010bd2aea0();
                func_0x00010bd2af54();
                func_0x00010bd2ae94();
                func_0x00010bd2ae88();
                func_0x00010bd2aeb8();
                func_0x00010bd2ae68();
                func_0x00010bd2ae7c();
                func_0x00010bd2af5c();
                func_0x00010bd2afd8();
                if ((extraout_x8 & 1) != 0) {
                  FUN_10bd1d41c(extraout_x8 - 1);
                }
                func_0x00010bd2b134(*(undefined8 *)(*unaff_x19 + 0x28));
                FUN_10bd28a98();
                *(undefined4 *)(unaff_x19 + 4) = 0;
                return;
              }
                    /* WARNING: Could not recover jumptable at 0x00010bdbce60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)
                PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5__110346350
              )(*unaff_x19,puVar2);
              return;
            }
            *(undefined4 *)*unaff_x19 = uVar3;
          }
          return;
        }
        *(undefined **)*unaff_x19 = puVar2;
      }
    }
  }
  return;
}



/* Entry: 10bd29538; end: 10bd295b7;  */

void FUN_10bd29538(undefined8 param_1,int param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined *puVar2;
  ulong extraout_x8;
  long *unaff_x19;
  undefined4 uVar3;
  undefined8 uVar4;
  
  func_0x00010bd2af70();
  if (param_2 == 2) {
    *(undefined8 *)*unaff_x19 = param_3;
  }
  else {
    func_0x00010bd2aec4();
    FUN_10bdb2a00();
    func_0x00010bd2ae58();
    uVar3 = 0xf835e85;
    func_0x00010bd2a3b4();
    func_0x00010bd2aeac();
    func_0x00010bd2aea0();
    func_0x00010bd2b0a0();
    func_0x00010bd2af54();
    func_0x00010bd2ae94();
    func_0x00010bd2ae88();
    func_0x00010bd2aeb8();
    func_0x00010bd2ae68();
    func_0x00010bd2ae7c();
    func_0x00010bd2af5c();
    func_0x00010bd2af70();
    if (param_2 == 3) {
      *(undefined4 *)*unaff_x19 = uVar3;
    }
    else {
      func_0x00010bd2aec4();
      FUN_10bdb2a00();
      func_0x00010bd2ae58();
      puVar2 = &UNK_10f835ea0;
      func_0x00010bd2a3d4();
      func_0x00010bd2aeac();
      func_0x00010bd2aea0();
      func_0x00010bd2b0d0();
      func_0x00010bd2af54();
      func_0x00010bd2ae94();
      func_0x00010bd2ae88();
      func_0x00010bd2aeb8();
      func_0x00010bd2ae68();
      func_0x00010bd2ae7c();
      func_0x00010bd2af5c();
      func_0x00010bd2af70();
      if (param_2 != 4) {
        func_0x00010bd2aec4();
        FUN_10bdb2a00();
        func_0x00010bd2ae58();
        func_0x00010bd2a3d4();
        func_0x00010bd2aeac();
        func_0x00010bd2aea0();
        func_0x00010bd2b080();
        func_0x00010bd2af54();
        func_0x00010bd2ae94();
        func_0x00010bd2ae88();
        func_0x00010bd2aeb8();
        func_0x00010bd2ae68();
        func_0x00010bd2ae7c();
        func_0x00010bd2af5c();
        uVar4 = param_1;
        func_0x00010bd2af70();
        uVar3 = (undefined4)uVar4;
        if (param_2 == 5) {
          *(undefined8 *)*unaff_x19 = param_1;
        }
        else {
          func_0x00010bd2aec4();
          FUN_10bdb2a00();
          func_0x00010bd2ae58();
          func_0x00010bd2a3d4();
          func_0x00010bd2aeac();
          func_0x00010bd2aea0();
          func_0x00010bd2af54();
          func_0x00010bd2ae94();
          func_0x00010bd2ae88();
          func_0x00010bd2aeb8();
          func_0x00010bd2ae68();
          func_0x00010bd2ae7c();
          func_0x00010bd2af5c();
          func_0x00010bd2af70();
          if (param_2 != 6) {
            func_0x00010bd2aec4();
            FUN_10bdb2a00();
            func_0x00010bd2ae58();
            uVar1 = 0xf4;
            func_0x00010bd2a3b4();
            func_0x00010bd2aeac();
            func_0x00010bd2aea0();
            func_0x00010bd2af54();
            func_0x00010bd2ae94();
            func_0x00010bd2ae88();
            func_0x00010bd2aeb8();
            func_0x00010bd2ae68();
            func_0x00010bd2ae7c();
            func_0x00010bd2af5c();
            func_0x00010bd2af70();
            if (param_2 == 7) {
              *(undefined1 *)*unaff_x19 = uVar1;
              return;
            }
            func_0x00010bd2aec4();
            FUN_10bdb2a00();
            func_0x00010bd2ae58();
            puVar2 = &UNK_10f835f0f;
            func_0x00010bd2a3f4();
            func_0x00010bd2aeac();
            func_0x00010bd2aea0();
            func_0x00010bd2b0c0();
            func_0x00010bd2af54();
            func_0x00010bd2ae94();
            func_0x00010bd2ae88();
            func_0x00010bd2aeb8();
            func_0x00010bd2ae68();
            func_0x00010bd2ae7c();
            func_0x00010bd2af5c();
            func_0x00010bd2af70();
            if (param_2 != 9) {
              func_0x00010bd2aec4();
              FUN_10bdb2a00();
              func_0x00010bd2ae58();
              uVar3 = 0xf835f29;
              func_0x00010bd2a3d4();
              func_0x00010bd2aeac();
              func_0x00010bd2aea0();
              func_0x00010bd2b0b0();
              func_0x00010bd2af54();
              func_0x00010bd2ae94();
              func_0x00010bd2ae88();
              func_0x00010bd2aeb8();
              func_0x00010bd2ae68();
              func_0x00010bd2ae7c();
              func_0x00010bd2af5c();
              func_0x00010bd2af70();
              if (param_2 == 8) {
                *(undefined4 *)*unaff_x19 = uVar3;
                return;
              }
              func_0x00010bd2aec4();
              FUN_10bdb2a00();
              func_0x00010bd2ae58();
              func_0x00010bd2a3f4();
              func_0x00010bd2aeac();
              func_0x00010bd2aea0();
              func_0x00010bd2af54();
              func_0x00010bd2ae94();
              func_0x00010bd2ae88();
              func_0x00010bd2aeb8();
              func_0x00010bd2ae68();
              func_0x00010bd2ae7c();
              func_0x00010bd2af5c();
              func_0x00010bd2afd8();
              if ((extraout_x8 & 1) != 0) {
                FUN_10bd1d41c(extraout_x8 - 1);
              }
              func_0x00010bd2b134(*(undefined8 *)(*unaff_x19 + 0x28));
              FUN_10bd28a98();
              *(undefined4 *)(unaff_x19 + 4) = 0;
              return;
            }
                    /* WARNING: Could not recover jumptable at 0x00010bdbce60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)
              PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5__110346350
            )(*unaff_x19,puVar2);
            return;
          }
          *(undefined4 *)*unaff_x19 = uVar3;
        }
        return;
      }
      *(undefined **)*unaff_x19 = puVar2;
    }
  }
  return;
}



/* Entry: 10bd295b8; end: 10bd29637;  */

void FUN_10bd295b8(undefined8 param_1,int param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined *puVar2;
  ulong extraout_x8;
  long *unaff_x19;
  undefined4 uVar3;
  undefined8 uVar4;
  
  func_0x00010bd2af70();
  if (param_2 == 3) {
    *(undefined4 *)*unaff_x19 = param_3;
  }
  else {
    func_0x00010bd2aec4();
    FUN_10bdb2a00();
    func_0x00010bd2ae58();
    puVar2 = &UNK_10f835ea0;
    func_0x00010bd2a3d4();
    func_0x00010bd2aeac();
    func_0x00010bd2aea0();
    func_0x00010bd2b0d0();
    func_0x00010bd2af54();
    func_0x00010bd2ae94();
    func_0x00010bd2ae88();
    func_0x00010bd2aeb8();
    func_0x00010bd2ae68();
    func_0x00010bd2ae7c();
    func_0x00010bd2af5c();
    func_0x00010bd2af70();
    if (param_2 != 4) {
      func_0x00010bd2aec4();
      FUN_10bdb2a00();
      func_0x00010bd2ae58();
      func_0x00010bd2a3d4();
      func_0x00010bd2aeac();
      func_0x00010bd2aea0();
      func_0x00010bd2b080();
      func_0x00010bd2af54();
      func_0x00010bd2ae94();
      func_0x00010bd2ae88();
      func_0x00010bd2aeb8();
      func_0x00010bd2ae68();
      func_0x00010bd2ae7c();
      func_0x00010bd2af5c();
      uVar4 = param_1;
      func_0x00010bd2af70();
      uVar3 = (undefined4)uVar4;
      if (param_2 == 5) {
        *(undefined8 *)*unaff_x19 = param_1;
      }
      else {
        func_0x00010bd2aec4();
        FUN_10bdb2a00();
        func_0x00010bd2ae58();
        func_0x00010bd2a3d4();
        func_0x00010bd2aeac();
        func_0x00010bd2aea0();
        func_0x00010bd2af54();
        func_0x00010bd2ae94();
        func_0x00010bd2ae88();
        func_0x00010bd2aeb8();
        func_0x00010bd2ae68();
        func_0x00010bd2ae7c();
        func_0x00010bd2af5c();
        func_0x00010bd2af70();
        if (param_2 != 6) {
          func_0x00010bd2aec4();
          FUN_10bdb2a00();
          func_0x00010bd2ae58();
          uVar1 = 0xf4;
          func_0x00010bd2a3b4();
          func_0x00010bd2aeac();
          func_0x00010bd2aea0();
          func_0x00010bd2af54();
          func_0x00010bd2ae94();
          func_0x00010bd2ae88();
          func_0x00010bd2aeb8();
          func_0x00010bd2ae68();
          func_0x00010bd2ae7c();
          func_0x00010bd2af5c();
          func_0x00010bd2af70();
          if (param_2 == 7) {
            *(undefined1 *)*unaff_x19 = uVar1;
            return;
          }
          func_0x00010bd2aec4();
          FUN_10bdb2a00();
          func_0x00010bd2ae58();
          puVar2 = &UNK_10f835f0f;
          func_0x00010bd2a3f4();
          func_0x00010bd2aeac();
          func_0x00010bd2aea0();
          func_0x00010bd2b0c0();
          func_0x00010bd2af54();
          func_0x00010bd2ae94();
          func_0x00010bd2ae88();
          func_0x00010bd2aeb8();
          func_0x00010bd2ae68();
          func_0x00010bd2ae7c();
          func_0x00010bd2af5c();
          func_0x00010bd2af70();
          if (param_2 != 9) {
            func_0x00010bd2aec4();
            FUN_10bdb2a00();
            func_0x00010bd2ae58();
            uVar3 = 0xf835f29;
            func_0x00010bd2a3d4();
            func_0x00010bd2aeac();
            func_0x00010bd2aea0();
            func_0x00010bd2b0b0();
            func_0x00010bd2af54();
            func_0x00010bd2ae94();
            func_0x00010bd2ae88();
            func_0x00010bd2aeb8();
            func_0x00010bd2ae68();
            func_0x00010bd2ae7c();
            func_0x00010bd2af5c();
            func_0x00010bd2af70();
            if (param_2 == 8) {
              *(undefined4 *)*unaff_x19 = uVar3;
              return;
            }
            func_0x00010bd2aec4();
            FUN_10bdb2a00();
            func_0x00010bd2ae58();
            func_0x00010bd2a3f4();
            func_0x00010bd2aeac();
            func_0x00010bd2aea0();
            func_0x00010bd2af54();
            func_0x00010bd2ae94();
            func_0x00010bd2ae88();
            func_0x00010bd2aeb8();
            func_0x00010bd2ae68();
            func_0x00010bd2ae7c();
            func_0x00010bd2af5c();
            func_0x00010bd2afd8();
            if ((extraout_x8 & 1) != 0) {
              FUN_10bd1d41c(extraout_x8 - 1);
            }
            func_0x00010bd2b134(*(undefined8 *)(*unaff_x19 + 0x28));
            FUN_10bd28a98();
            *(undefined4 *)(unaff_x19 + 4) = 0;
            return;
          }
                    /* WARNING: Could not recover jumptable at 0x00010bdbce60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)
            PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5__110346350)
                    (*unaff_x19,puVar2);
          return;
        }
        *(undefined4 *)*unaff_x19 = uVar3;
      }
      return;
    }
    *(undefined **)*unaff_x19 = puVar2;
  }
  return;
}



/* Entry: 10bd29638; end: 10bd296b7;  */

void FUN_10bd29638(undefined8 param_1,int param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined *puVar2;
  ulong extraout_x8;
  long *unaff_x19;
  undefined4 uVar3;
  undefined8 uVar4;
  
  func_0x00010bd2af70();
  if (param_2 == 4) {
    *(undefined8 *)*unaff_x19 = param_3;
    return;
  }
  func_0x00010bd2aec4();
  FUN_10bdb2a00();
  func_0x00010bd2ae58();
  func_0x00010bd2a3d4();
  func_0x00010bd2aeac();
  func_0x00010bd2aea0();
  func_0x00010bd2b080();
  func_0x00010bd2af54();
  func_0x00010bd2ae94();
  func_0x00010bd2ae88();
  func_0x00010bd2aeb8();
  func_0x00010bd2ae68();
  func_0x00010bd2ae7c();
  func_0x00010bd2af5c();
  uVar4 = param_1;
  func_0x00010bd2af70();
  uVar3 = (undefined4)uVar4;
  if (param_2 == 5) {
    *(undefined8 *)*unaff_x19 = param_1;
  }
  else {
    func_0x00010bd2aec4();
    FUN_10bdb2a00();
    func_0x00010bd2ae58();
    func_0x00010bd2a3d4();
    func_0x00010bd2aeac();
    func_0x00010bd2aea0();
    func_0x00010bd2af54();
    func_0x00010bd2ae94();
    func_0x00010bd2ae88();
    func_0x00010bd2aeb8();
    func_0x00010bd2ae68();
    func_0x00010bd2ae7c();
    func_0x00010bd2af5c();
    func_0x00010bd2af70();
    if (param_2 != 6) {
      func_0x00010bd2aec4();
      FUN_10bdb2a00();
      func_0x00010bd2ae58();
      uVar1 = 0xf4;
      func_0x00010bd2a3b4();
      func_0x00010bd2aeac();
      func_0x00010bd2aea0();
      func_0x00010bd2af54();
      func_0x00010bd2ae94();
      func_0x00010bd2ae88();
      func_0x00010bd2aeb8();
      func_0x00010bd2ae68();
      func_0x00010bd2ae7c();
      func_0x00010bd2af5c();
      func_0x00010bd2af70();
      if (param_2 == 7) {
        *(undefined1 *)*unaff_x19 = uVar1;
        return;
      }
      func_0x00010bd2aec4();
      FUN_10bdb2a00();
      func_0x00010bd2ae58();
      puVar2 = &UNK_10f835f0f;
      func_0x00010bd2a3f4();
      func_0x00010bd2aeac();
      func_0x00010bd2aea0();
      func_0x00010bd2b0c0();
      func_0x00010bd2af54();
      func_0x00010bd2ae94();
      func_0x00010bd2ae88();
      func_0x00010bd2aeb8();
      func_0x00010bd2ae68();
      func_0x00010bd2ae7c();
      func_0x00010bd2af5c();
      func_0x00010bd2af70();
      if (param_2 != 9) {
        func_0x00010bd2aec4();
        FUN_10bdb2a00();
        func_0x00010bd2ae58();
        uVar3 = 0xf835f29;
        func_0x00010bd2a3d4();
        func_0x00010bd2aeac();
        func_0x00010bd2aea0();
        func_0x00010bd2b0b0();
        func_0x00010bd2af54();
        func_0x00010bd2ae94();
        func_0x00010bd2ae88();
        func_0x00010bd2aeb8();
        func_0x00010bd2ae68();
        func_0x00010bd2ae7c();
        func_0x00010bd2af5c();
        func_0x00010bd2af70();
        if (param_2 == 8) {
          *(undefined4 *)*unaff_x19 = uVar3;
          return;
        }
        func_0x00010bd2aec4();
        FUN_10bdb2a00();
        func_0x00010bd2ae58();
        func_0x00010bd2a3f4();
        func_0x00010bd2aeac();
        func_0x00010bd2aea0();
        func_0x00010bd2af54();
        func_0x00010bd2ae94();
        func_0x00010bd2ae88();
        func_0x00010bd2aeb8();
        func_0x00010bd2ae68();
        func_0x00010bd2ae7c();
        func_0x00010bd2af5c();
        func_0x00010bd2afd8();
        if ((extraout_x8 & 1) != 0) {
          FUN_10bd1d41c(extraout_x8 - 1);
        }
        func_0x00010bd2b134(*(undefined8 *)(*unaff_x19 + 0x28));
        FUN_10bd28a98();
        *(undefined4 *)(unaff_x19 + 4) = 0;
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbce60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5__110346350)
                (*unaff_x19,puVar2);
      return;
    }
    *(undefined4 *)*unaff_x19 = uVar3;
  }
  return;
}



/* Entry: 10bd296b8; end: 10bd29743;  */

void FUN_10bd296b8(undefined8 param_1,int param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  ulong extraout_x8;
  long *unaff_x19;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar4 = param_1;
  func_0x00010bd2af70();
  uVar3 = (undefined4)uVar4;
  if (param_2 == 5) {
    *(undefined8 *)*unaff_x19 = param_1;
  }
  else {
    func_0x00010bd2aec4();
    FUN_10bdb2a00();
    func_0x00010bd2ae58();
    func_0x00010bd2a3d4();
    func_0x00010bd2aeac();
    func_0x00010bd2aea0();
    func_0x00010bd2af54();
    func_0x00010bd2ae94();
    func_0x00010bd2ae88();
    func_0x00010bd2aeb8();
    func_0x00010bd2ae68();
    func_0x00010bd2ae7c();
    func_0x00010bd2af5c();
    func_0x00010bd2af70();
    if (param_2 != 6) {
      func_0x00010bd2aec4();
      FUN_10bdb2a00();
      func_0x00010bd2ae58();
      uVar1 = 0xf4;
      func_0x00010bd2a3b4();
      func_0x00010bd2aeac();
      func_0x00010bd2aea0();
      func_0x00010bd2af54();
      func_0x00010bd2ae94();
      func_0x00010bd2ae88();
      func_0x00010bd2aeb8();
      func_0x00010bd2ae68();
      func_0x00010bd2ae7c();
      func_0x00010bd2af5c();
      func_0x00010bd2af70();
      if (param_2 == 7) {
        *(undefined1 *)*unaff_x19 = uVar1;
      }
      else {
        func_0x00010bd2aec4();
        FUN_10bdb2a00();
        func_0x00010bd2ae58();
        puVar2 = &UNK_10f835f0f;
        func_0x00010bd2a3f4();
        func_0x00010bd2aeac();
        func_0x00010bd2aea0();
        func_0x00010bd2b0c0();
        func_0x00010bd2af54();
        func_0x00010bd2ae94();
        func_0x00010bd2ae88();
        func_0x00010bd2aeb8();
        func_0x00010bd2ae68();
        func_0x00010bd2ae7c();
        func_0x00010bd2af5c();
        func_0x00010bd2af70();
        if (param_2 == 9) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbce60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)
            PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5__110346350)
                    (*unaff_x19,puVar2);
          return;
        }
        func_0x00010bd2aec4();
        FUN_10bdb2a00();
        func_0x00010bd2ae58();
        uVar3 = 0xf835f29;
        func_0x00010bd2a3d4();
        func_0x00010bd2aeac();
        func_0x00010bd2aea0();
        func_0x00010bd2b0b0();
        func_0x00010bd2af54();
        func_0x00010bd2ae94();
        func_0x00010bd2ae88();
        func_0x00010bd2aeb8();
        func_0x00010bd2ae68();
        func_0x00010bd2ae7c();
        func_0x00010bd2af5c();
        func_0x00010bd2af70();
        if (param_2 != 8) {
          func_0x00010bd2aec4();
          FUN_10bdb2a00();
          func_0x00010bd2ae58();
          func_0x00010bd2a3f4();
          func_0x00010bd2aeac();
          func_0x00010bd2aea0();
          func_0x00010bd2af54();
          func_0x00010bd2ae94();
          func_0x00010bd2ae88();
          func_0x00010bd2aeb8();
          func_0x00010bd2ae68();
          func_0x00010bd2ae7c();
          func_0x00010bd2af5c();
          func_0x00010bd2afd8();
          if ((extraout_x8 & 1) != 0) {
            FUN_10bd1d41c(extraout_x8 - 1);
          }
          func_0x00010bd2b134(*(undefined8 *)(*unaff_x19 + 0x28));
          FUN_10bd28a98();
          *(undefined4 *)(unaff_x19 + 4) = 0;
          return;
        }
        *(undefined4 *)*unaff_x19 = uVar3;
      }
      return;
    }
    *(undefined4 *)*unaff_x19 = uVar3;
  }
  return;
}



/* Entry: 10bd29744; end: 10bd297cf;  */

void FUN_10bd29744(undefined4 param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  ulong extraout_x8;
  long *unaff_x19;
  
  func_0x00010bd2af70();
  if (param_2 == 6) {
    *(undefined4 *)*unaff_x19 = param_1;
    return;
  }
  func_0x00010bd2aec4();
  FUN_10bdb2a00();
  func_0x00010bd2ae58();
  uVar1 = 0xf4;
  func_0x00010bd2a3b4();
  func_0x00010bd2aeac();
  func_0x00010bd2aea0();
  func_0x00010bd2af54();
  func_0x00010bd2ae94();
  func_0x00010bd2ae88();
  func_0x00010bd2aeb8();
  func_0x00010bd2ae68();
  func_0x00010bd2ae7c();
  func_0x00010bd2af5c();
  func_0x00010bd2af70();
  if (param_2 == 7) {
    *(undefined1 *)*unaff_x19 = uVar1;
  }
  else {
    func_0x00010bd2aec4();
    FUN_10bdb2a00();
    func_0x00010bd2ae58();
    puVar3 = &UNK_10f835f0f;
    func_0x00010bd2a3f4();
    func_0x00010bd2aeac();
    func_0x00010bd2aea0();
    func_0x00010bd2b0c0();
    func_0x00010bd2af54();
    func_0x00010bd2ae94();
    func_0x00010bd2ae88();
    func_0x00010bd2aeb8();
    func_0x00010bd2ae68();
    func_0x00010bd2ae7c();
    func_0x00010bd2af5c();
    func_0x00010bd2af70();
    if (param_2 == 9) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbce60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5__110346350)
                (*unaff_x19,puVar3);
      return;
    }
    func_0x00010bd2aec4();
    FUN_10bdb2a00();
    func_0x00010bd2ae58();
    uVar2 = 0xf835f29;
    func_0x00010bd2a3d4();
    func_0x00010bd2aeac();
    func_0x00010bd2aea0();
    func_0x00010bd2b0b0();
    func_0x00010bd2af54();
    func_0x00010bd2ae94();
    func_0x00010bd2ae88();
    func_0x00010bd2aeb8();
    func_0x00010bd2ae68();
    func_0x00010bd2ae7c();
    func_0x00010bd2af5c();
    func_0x00010bd2af70();
    if (param_2 != 8) {
      func_0x00010bd2aec4();
      FUN_10bdb2a00();
      func_0x00010bd2ae58();
      func_0x00010bd2a3f4();
      func_0x00010bd2aeac();
      func_0x00010bd2aea0();
      func_0x00010bd2af54();
      func_0x00010bd2ae94();
      func_0x00010bd2ae88();
      func_0x00010bd2aeb8();
      func_0x00010bd2ae68();
      func_0x00010bd2ae7c();
      func_0x00010bd2af5c();
      func_0x00010bd2afd8();
      if ((extraout_x8 & 1) != 0) {
        FUN_10bd1d41c(extraout_x8 - 1);
      }
      func_0x00010bd2b134(*(undefined8 *)(*unaff_x19 + 0x28));
      FUN_10bd28a98();
      *(undefined4 *)(unaff_x19 + 4) = 0;
      return;
    }
    *(undefined4 *)*unaff_x19 = uVar2;
  }
  return;
}



/* Entry: 10bd297d0; end: 10bd2984f;  */

void FUN_10bd297d0(int param_1,undefined1 param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  ulong extraout_x8;
  long *unaff_x19;
  
  func_0x00010bd2af70();
  if (param_1 == 7) {
    *(undefined1 *)*unaff_x19 = param_2;
  }
  else {
    func_0x00010bd2aec4();
    FUN_10bdb2a00();
    func_0x00010bd2ae58();
    puVar2 = &UNK_10f835f0f;
    func_0x00010bd2a3f4();
    func_0x00010bd2aeac();
    func_0x00010bd2aea0();
    func_0x00010bd2b0c0();
    func_0x00010bd2af54();
    func_0x00010bd2ae94();
    func_0x00010bd2ae88();
    func_0x00010bd2aeb8();
    func_0x00010bd2ae68();
    func_0x00010bd2ae7c();
    func_0x00010bd2af5c();
    func_0x00010bd2af70();
    if (param_1 == 9) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbce60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5__110346350)
                (*unaff_x19,puVar2);
      return;
    }
    func_0x00010bd2aec4();
    FUN_10bdb2a00();
    func_0x00010bd2ae58();
    uVar1 = 0xf835f29;
    func_0x00010bd2a3d4();
    func_0x00010bd2aeac();
    func_0x00010bd2aea0();
    func_0x00010bd2b0b0();
    func_0x00010bd2af54();
    func_0x00010bd2ae94();
    func_0x00010bd2ae88();
    func_0x00010bd2aeb8();
    func_0x00010bd2ae68();
    func_0x00010bd2ae7c();
    func_0x00010bd2af5c();
    func_0x00010bd2af70();
    if (param_1 != 8) {
      func_0x00010bd2aec4();
      FUN_10bdb2a00();
      func_0x00010bd2ae58();
      func_0x00010bd2a3f4();
      func_0x00010bd2aeac();
      func_0x00010bd2aea0();
      func_0x00010bd2af54();
      func_0x00010bd2ae94();
      func_0x00010bd2ae88();
      func_0x00010bd2aeb8();
      func_0x00010bd2ae68();
      func_0x00010bd2ae7c();
      func_0x00010bd2af5c();
      func_0x00010bd2afd8();
      if ((extraout_x8 & 1) != 0) {
        FUN_10bd1d41c(extraout_x8 - 1);
      }
      func_0x00010bd2b134(*(undefined8 *)(*unaff_x19 + 0x28));
      FUN_10bd28a98();
      *(undefined4 *)(unaff_x19 + 4) = 0;
      return;
    }
    *(undefined4 *)*unaff_x19 = uVar1;
  }
  return;
}



/* Entry: 10bd29850; end: 10bd298d7;  */

void FUN_10bd29850(int param_1,undefined8 param_2)

{
  undefined4 uVar1;
  ulong extraout_x8;
  long *unaff_x19;
  
  func_0x00010bd2af70();
  if (param_1 == 9) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbce60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5__110346350
    )(*unaff_x19,param_2);
    return;
  }
  func_0x00010bd2aec4();
  FUN_10bdb2a00();
  func_0x00010bd2ae58();
  uVar1 = 0xf835f29;
  func_0x00010bd2a3d4();
  func_0x00010bd2aeac();
  func_0x00010bd2aea0();
  func_0x00010bd2b0b0();
  func_0x00010bd2af54();
  func_0x00010bd2ae94();
  func_0x00010bd2ae88();
  func_0x00010bd2aeb8();
  func_0x00010bd2ae68();
  func_0x00010bd2ae7c();
  func_0x00010bd2af5c();
  func_0x00010bd2af70();
  if (param_1 == 8) {
    *(undefined4 *)*unaff_x19 = uVar1;
    return;
  }
  func_0x00010bd2aec4();
  FUN_10bdb2a00();
  func_0x00010bd2ae58();
  func_0x00010bd2a3f4();
  func_0x00010bd2aeac();
  func_0x00010bd2aea0();
  func_0x00010bd2af54();
  func_0x00010bd2ae94();
  func_0x00010bd2ae88();
  func_0x00010bd2aeb8();
  func_0x00010bd2ae68();
  func_0x00010bd2ae7c();
  func_0x00010bd2af5c();
  func_0x00010bd2afd8();
  if ((extraout_x8 & 1) != 0) {
    FUN_10bd1d41c(extraout_x8 - 1);
  }
  func_0x00010bd2b134(*(undefined8 *)(*unaff_x19 + 0x28));
  FUN_10bd28a98();
  *(undefined4 *)(unaff_x19 + 4) = 0;
  return;
}



/* Entry: 10bd298d8; end: 10bd2995f;  */

void FUN_10bd298d8(int param_1,undefined4 param_2)

{
  ulong extraout_x8;
  long *unaff_x19;
  
  func_0x00010bd2af70();
  if (param_1 == 8) {
    *(undefined4 *)*unaff_x19 = param_2;
    return;
  }
  func_0x00010bd2aec4();
  FUN_10bdb2a00();
  func_0x00010bd2ae58();
  func_0x00010bd2a3f4();
  func_0x00010bd2aeac();
  func_0x00010bd2aea0();
  func_0x00010bd2af54();
  func_0x00010bd2ae94();
  func_0x00010bd2ae88();
  func_0x00010bd2aeb8();
  func_0x00010bd2ae68();
  func_0x00010bd2ae7c();
  func_0x00010bd2af5c();
  func_0x00010bd2afd8();
  if ((extraout_x8 & 1) != 0) {
    FUN_10bd1d41c(extraout_x8 - 1);
  }
  func_0x00010bd2b134(*(undefined8 *)(*unaff_x19 + 0x28));
  FUN_10bd28a98();
  *(undefined4 *)(unaff_x19 + 4) = 0;
  return;
}



/* Entry: 10bd29960; end: 10bd29997;  */

void FUN_10bd29960(void)

{
  ulong extraout_x8;
  long *unaff_x19;
  
  func_0x00010bd2afd8();
  if ((extraout_x8 & 1) != 0) {
    FUN_10bd1d41c(extraout_x8 - 1);
  }
  func_0x00010bd2b134(*(undefined8 *)(*unaff_x19 + 0x28));
  FUN_10bd28a98();
  *(undefined4 *)(unaff_x19 + 4) = 0;
  return;
}



/* Entry: 10bd29998; end: 10bd299c3;  */

void FUN_10bd29998(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_DAT_110d9d230;
  param_1[1] = 0;
  param_1[3] = 0x100000000;
  param_1[2] = 0x100000000;
  param_1[4] = &DAT_10e5b4a18;
  param_1[5] = 0;
  param_1[6] = param_2;
  return;
}



/* Entry: 10bd299c4; end: 10bd29a97;  */

bool FUN_10bd299c4(void)

{
  long lVar1;
  undefined8 *unaff_x19;
  long unaff_x21;
  
  func_0x00010bd2b02c();
  lVar1 = unaff_x21 + 0x10;
  func_0x00010bd2afa0();
  if ((unaff_x19 != (undefined8 *)0x0) && (lVar1 != 0)) {
    *(undefined4 *)(unaff_x19 + 1) = *(undefined4 *)(lVar1 + 0x30);
    *unaff_x19 = *(undefined8 *)(lVar1 + 0x28);
  }
  return lVar1 != 0;
}



/* Entry: 10bd29a98; end: 10bd29ad7;  */

void FUN_10bd29a98(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    FUN_10bd2a9e4(param_1 + 4,lVar1 + 8);
    *(undefined4 *)(param_1 + 9) = *(undefined4 *)(lVar1 + 0x30);
    param_1[8] = *(long *)(lVar1 + 0x28);
  }
  return;
}



/* Entry: 10bd29ad8; end: 10bd29b4f;  */

bool FUN_10bd29ad8(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  lVar1 = param_1 + 0x10;
  func_0x00010bd2afa0();
  if (lVar1 == 0) {
    puVar2 = (undefined8 *)(param_1 + 0x10);
    func_0x00010bd2a204(puVar2,param_2);
    func_0x00010bd2a0a8(param_1,puVar2);
    puVar3 = puVar2 + 1;
  }
  else {
    puVar2 = (undefined8 *)(lVar1 + 0x28);
    puVar3 = (undefined8 *)(lVar1 + 0x30);
  }
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)puVar3;
  *param_3 = *puVar2;
  return lVar1 == 0;
}



/* Entry: 10bd29b50; end: 10bd29b9b;  */

void FUN_10bd29b50(void)

{
  ulong extraout_x8;
  ulong uVar1;
  long unaff_x19;
  undefined8 uStack_38;
  
  func_0x00010bd2afd8();
  uVar1 = extraout_x8;
  if ((extraout_x8 & 1) != 0) {
    uVar1 = *(ulong *)(extraout_x8 + 0xf);
  }
  if (uVar1 == 0) {
    func_0x00010bd2b114();
    while (uStack_38 != 0) {
      FUN_10bd29ff4(uStack_38 + 0x28);
      func_0x00010bd2aff4();
    }
  }
  FUN_10bd2a058(unaff_x19 + 0x10);
  return;
}



/* Entry: 10bd29b9c; end: 10bd29d3b;  */

void FUN_10bd29b9c(long param_1,long param_2)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long lVar1;
  long lVar2;
  long extraout_x8;
  long alStack_48 [3];
  
  lVar1 = param_1;
  FUN_10bd2a2a8();
  func_0x00010564c19c(alStack_48,param_2 + 0x10);
  while( true ) {
    if (alStack_48[0] == 0) {
      return;
    }
    lVar2 = lVar1;
    func_0x00010bd2afa0(lVar1,alStack_48[0] + 8);
    if (lVar2 == 0) {
      lVar2 = param_1 + 0x10;
      func_0x00010bd2a204(lVar2,alStack_48[0] + 8);
      func_0x00010bd2a0a8(param_1,lVar2);
    }
    lVar2 = *(long *)(param_1 + 0x30);
    FUN_10bd2b4f4();
    func_0x00010bd2afbc();
    if ((bool)in_ZR) {
      lVar2 = *(long *)(lVar2 + 0x38) + 0x58;
    }
    else {
      lVar2 = 0;
    }
    func_0x00010b91adc8(lVar2);
    func_0x00010bd2b074();
    if (!(bool)in_CY || (bool)in_ZR) break;
    func_0x00010bd2aff4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bd29c4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((ulong)(byte)(&UNK_10e60b957)[extraout_x8] * 4 + 0x10bd29c50))();
  return;
}



/* Entry: 10bd29d3c; end: 10bd29ea3;  */

void FUN_10bd29d3c(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long unaff_x19;
  long unaff_x20;
  long lVar6;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined1 auStack_48 [24];
  
  func_0x00010bd2afe8();
  uVar4 = *(ulong *)(param_1 + 8);
  if ((uVar4 & 1) != 0) {
    uVar4 = *(ulong *)(uVar4 + 0xf);
  }
  uVar5 = *(ulong *)(unaff_x19 + 8);
  if ((uVar5 & 1) != 0) {
    uVar5 = *(ulong *)(uVar5 + 0xf);
  }
  if (uVar4 == uVar5) {
    uVar3 = *(undefined8 *)(unaff_x19 + 8);
    *(undefined8 *)(unaff_x19 + 8) = *(undefined8 *)(unaff_x20 + 8);
    *(undefined8 *)(unaff_x20 + 8) = uVar3;
  }
  else {
    lVar2 = 0;
    if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
      lVar2 = *(ulong *)(unaff_x20 + 8) - 1;
    }
    lVar6 = 0;
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      lVar6 = *(ulong *)(unaff_x19 + 8) - 1;
    }
    if (lVar2 != 0 || lVar6 != 0) {
      if (lVar2 == 0) {
        lVar2 = unaff_x20;
        FUN_10bd28a98();
        param_1 = lVar2;
      }
      if (lVar6 == 0) {
        func_0x00010bd2b06c();
        lVar6 = param_1;
      }
      func_0x00010bd28b8c(lVar2,lVar6);
      uVar1 = *(undefined4 *)(lVar6 + 0x20);
      *(undefined4 *)(lVar6 + 0x20) = *(undefined4 *)(lVar2 + 0x20);
      *(undefined4 *)(lVar2 + 0x20) = uVar1;
    }
  }
  if (*(long *)(unaff_x20 + 0x28) != *(long *)(unaff_x19 + 0x28)) {
    uStack_68 = 0x100000000;
    uStack_70 = 0x100000000;
    puStack_60 = &DAT_10e5b4a18;
    uStack_58 = 0;
    func_0x00010564c19c(auStack_48,unaff_x20 + 0x10);
    FUN_10bd2aadc(&uStack_70,auStack_48,0);
    FUN_10bd2aa94(unaff_x20 + 0x10,unaff_x19 + 0x10);
    FUN_10bd2aa94(unaff_x19 + 0x10,&uStack_70);
    FUN_10bd2a6cc(&uStack_70);
    return;
  }
  uVar1 = *(undefined4 *)(unaff_x20 + 0x10);
  *(undefined4 *)(unaff_x20 + 0x10) = *(undefined4 *)(unaff_x19 + 0x10);
  *(undefined4 *)(unaff_x19 + 0x10) = uVar1;
  uVar1 = *(undefined4 *)(unaff_x20 + 0x14);
  *(undefined4 *)(unaff_x20 + 0x14) = *(undefined4 *)(unaff_x19 + 0x14);
  *(undefined4 *)(unaff_x19 + 0x14) = uVar1;
  uVar1 = *(undefined4 *)(unaff_x20 + 0x18);
  *(undefined4 *)(unaff_x20 + 0x18) = *(undefined4 *)(unaff_x19 + 0x18);
  *(undefined4 *)(unaff_x19 + 0x18) = uVar1;
  uVar1 = *(undefined4 *)(unaff_x20 + 0x1c);
  *(undefined4 *)(unaff_x20 + 0x1c) = *(undefined4 *)(unaff_x19 + 0x1c);
  *(undefined4 *)(unaff_x19 + 0x1c) = uVar1;
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x20) = *(undefined8 *)(unaff_x19 + 0x20);
  *(undefined8 *)(unaff_x19 + 0x20) = uVar3;
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x28) = *(undefined8 *)(unaff_x19 + 0x28);
  *(undefined8 *)(unaff_x19 + 0x28) = uVar3;
  return;
}



/* Entry: 10bd29ea4; end: 10bd29eaf;  */

void FUN_10bd29ea4(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bd29eac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x38))();
  return;
}



/* Entry: 10bd29eb0; end: 10bd29f9b;  */

long FUN_10bd29eb0(long param_1)

{
  uint uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  long lVar4;
  long extraout_x8;
  long lVar5;
  long lVar6;
  long lStack_48;
  
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(ulong *)(param_1 + 8) - 1;
    func_0x00010bd1a150(lVar5);
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if (uVar1 != 0) {
    func_0x00010bd2b108();
    lVar4 = lStack_48 + 8;
    FUN_10bd28214();
    lVar6 = (ulong)uVar1 * 0x18;
    uVar2 = 8 < (uint)lVar4;
    uVar3 = (uint)lVar4 == 9;
    if (!(bool)uVar3) {
      lVar6 = 0;
    }
    lVar5 = lVar5 + (ulong)uVar1 * 0x30 + lVar6;
    func_0x00010bd2afa8();
    FUN_10bd238ec();
    func_0x00010bd2b074();
    if (!(bool)uVar2 || (bool)uVar3) {
                    /* WARNING: Could not recover jumptable at 0x00010bd29f40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10e60b961)[extraout_x8] * 4 + 0x10bd29f44))();
      return lVar4;
    }
  }
  return lVar5;
}



/* Entry: 10bd29f9c; end: 10bd29fa3;  */

undefined8 FUN_10bd29f9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10bd29fa4; end: 10bd29ff3;  */

void FUN_10bd29fa4(long param_1)

{
  undefined8 uStack_38;
  
  func_0x00010bd2b114();
  while (uStack_38 != 0) {
    FUN_10bd29ff4(uStack_38 + 0x28);
    func_0x00010bd2aff4();
  }
  FUN_10bd2a058(param_1 + 0x10);
  FUN_10bd2a080(param_1);
  return;
}



/* Entry: 10bd29ff4; end: 10bd2a057;  */

void FUN_10bd29ff4(long *param_1)

{
  switch((int)param_1[1]) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
    break;
  case 9:
    if (*param_1 != 0) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    }
    break;
  case 10:
    if ((long *)*param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bd2a034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)*param_1 + 8))();
      return;
    }
  default:
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bd2a058; end: 10bd2a07f;  */

/* WARNING: Possible PIC construction at 0x00010063c1b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010063c1b4) */
/* WARNING: Removing unreachable block (ram,0x00010055ea88) */
/* WARNING: Removing unreachable block (ram,0x00010055ea90) */
/* WARNING: Removing unreachable block (ram,0x00010055eabc) */
/* WARNING: Removing unreachable block (ram,0x000104c61180) */
/* WARNING: Removing unreachable block (ram,0x000104c611a4) */
/* WARNING: Removing unreachable block (ram,0x000104c61188) */
/* WARNING: Removing unreachable block (ram,0x000104c611a8) */
/* WARNING: Removing unreachable block (ram,0x000104c611bc) */
/* WARNING: Removing unreachable block (ram,0x000104c611c4) */
/* WARNING: Removing unreachable block (ram,0x000104c611d0) */
/* WARNING: Removing unreachable block (ram,0x000104c61160) */
/* WARNING: Removing unreachable block (ram,0x000104c61170) */
/* WARNING: Removing unreachable block (ram,0x00010055ead0) */
/* WARNING: Removing unreachable block (ram,0x00010055eac8) */

void FUN_10bd2a058(undefined4 *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined4 *puVar4;
  long lVar5;
  ulong uVar6;
  
  if (param_1[1] == 1) {
    return;
  }
  if (*(long *)(param_1 + 6) == 0) {
    lVar5 = *(long *)(param_1 + 4);
    uVar1 = param_1[1];
    for (uVar6 = (ulong)(uint)param_1[3]; uVar6 < uVar1; uVar6 = uVar6 + 1) {
      puVar4 = *(undefined4 **)(lVar5 + uVar6 * 8);
      if (((ulong)puVar4 & 1) != 0) {
        lVar3 = (long)puVar4 + -1;
        puVar4 = param_1;
        func_0x000107c30314(param_1,lVar3);
      }
      if (puVar4 != (undefined4 *)0x0) {
        FUN_10bd2a714(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(puVar4);
        return;
      }
    }
  }
  uVar1 = param_1[1];
  puVar2 = *(undefined8 **)(param_1 + 4);
  uVar6 = (ulong)uVar1;
  while (0 < (long)uVar6) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
    uVar6 = uVar6 - 1;
  }
  *param_1 = 0;
  param_1[3] = uVar1;
  return;
}



/* Entry: 10bd2a080; end: 10bd2a0a7;  */

undefined8 FUN_10bd2a080(long param_1)

{
  uint extraout_w8;
  undefined4 extraout_var;
  undefined8 unaff_x19;
  
  FUN_10bd2a6cc(param_1 + 0x10);
  func_0x00010bd2afd8(param_1);
  if ((extraout_w8 & 1) != 0) {
    func_0x00010bd2a2d0(CONCAT44(extraout_var,extraout_w8) + -1);
  }
  __ZdlPv();
  return unaff_x19;
}



/* Entry: 10bd2a0a8; end: 10bd2a2a7;  */

void FUN_10bd2a0a8(long param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long lVar1;
  long lVar2;
  long extraout_x8;
  long unaff_x19;
  
  func_0x00010bd2afe8();
  lVar1 = *(long *)(param_1 + 0x30);
  FUN_10bd2b4f4();
  func_0x00010bd2afbc();
  if ((bool)in_ZR) {
    lVar1 = *(long *)(lVar1 + 0x38) + 0x58;
  }
  else {
    lVar1 = 0;
  }
  lVar2 = lVar1;
  func_0x00010b91adc8();
  *(int *)(unaff_x19 + 8) = (int)lVar2;
  func_0x00010b91adc8(lVar1);
  func_0x00010bd2b074();
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010bd2a110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10e60b975)[extraout_x8] * 4 + 0x10bd2a114))();
    return;
  }
  return;
}



/* Entry: 10bd2a2a8; end: 10bd2a2f7;  */

long FUN_10bd2a2a8(long param_1)

{
  FUN_10bd285a8();
  FUN_10bd28978(param_1);
  return param_1 + 0x10;
}



/* Entry: 10bd2a2f8; end: 10bd2a393;  */

undefined8 * FUN_10bd2a2f8(undefined8 *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[3] = param_2;
  if (*(char *)(*(long *)(param_3 + 0x20) + 0x53) == '\x01') {
    uVar2 = *(undefined8 *)(param_3 + 0x38);
  }
  func_0x00010b91adc8(uVar2);
  FUN_10bd2290c(param_1 + 4,uVar2);
  if (*(char *)(*(long *)(param_3 + 0x20) + 0x53) == '\x01') {
    iVar1 = (int)*(undefined8 *)(param_3 + 0x38) + 0x58;
  }
  else {
    iVar1 = 0;
  }
  func_0x00010b91adc8();
  *(int *)(param_1 + 9) = iVar1;
  return param_1;
}



/* Entry: 10bd2a394; end: 10bd2a463;  */

void FUN_10bd2a394(void)

{
  func_0x00010bd2af24();
  func_0x00010bd2af34();
  return;
}



/* Entry: 10bd2a464; end: 10bd2a6cb;  */

long * FUN_10bd2a464(long *param_1)

{
  func_0x00010ae7c720(param_1 + 3);
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10bd2a6cc; end: 10bd2a713;  */

long FUN_10bd2a6cc(long param_1)

{
  if (*(int *)(param_1 + 4) != 1) {
    func_0x000107c30320(param_1,0x800380028,FUN_10bd2a714);
  }
  return param_1;
}



/* Entry: 10bd2a714; end: 10bd2a71b;  */

void FUN_10bd2a714(long param_1)

{
  if (*(int *)(param_1 + 0x20) == 9) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  return;
}



/* Entry: 10bd2a71c; end: 10bd2a813;  */

void FUN_10bd2a71c(int *param_1,uint param_2,ulong *param_3)

{
  ulong *puVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong *puVar4;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  puVar3 = (ulong *)(ulong)(param_1[1] - 1U & param_2);
  puVar1 = *(ulong **)(*(long *)(param_1 + 4) + (long)puVar3 * 8);
  puVar4 = puVar3;
  if (puVar1 != param_3) {
    if ((puVar1 != (ulong *)0x0) && (((ulong)puVar1 & 1) == 0)) {
      do {
        puVar1 = (ulong *)*puVar1;
      } while (puVar1 != param_3 && puVar1 != (ulong *)0x0);
      if (puVar1 != (ulong *)0x0) goto LAB_10bd2a7a8;
    }
    puVar3 = param_3 + 1;
    FUN_10bd2a814(param_1,puVar3,&uStack_40);
    if ((*(ulong *)(*(long *)(param_1 + 4) + ((ulong)puVar3 & 0xffffffff) * 8) & 1) != 0) {
      func_0x00010b4cf510(param_1,puVar3,uStack_40,CONCAT44(uStack_34,uStack_38));
      goto LAB_10bd2a7b8;
    }
    puVar4 = (ulong *)((ulong)puVar3 & 0xffffffff);
  }
LAB_10bd2a7a8:
  func_0x00010958a940();
  *(ulong **)(*(long *)(param_1 + 4) + (long)puVar4 * 8) = param_3;
LAB_10bd2a7b8:
  *param_1 = *param_1 + -1;
  if ((int)puVar3 == param_1[3]) {
    uVar2 = (ulong)puVar3 & 0xffffffff;
    while ((uVar2 < (uint)param_1[1] && (*(long *)(*(long *)(param_1 + 4) + uVar2 * 8) == 0))) {
      uVar2 = uVar2 + 1;
      param_1[3] = (int)uVar2;
    }
  }
  return;
}



/* Entry: 10bd2a814; end: 10bd2a99f;  */

undefined1  [16] FUN_10bd2a814(ulong param_1,long param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined *puVar9;
  long extraout_x8;
  ulong uVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined *puStack_80;
  undefined *puStack_78;
  ulong uStack_70;
  ulong uStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined1 auStack_50 [16];
  
  puVar4 = auStack_50;
  puVar5 = auStack_50;
  uVar11 = param_1;
  lVar8 = param_2;
  FUN_10bd2a9a0();
  uVar10 = uVar11 & 0xffffffff;
  uVar11 = *(ulong *)(*(long *)(param_1 + 0x10) + (uVar11 & 0xffffffff) * 8);
  if ((uVar11 != 0) && ((uVar11 & 1) == 0)) {
    uVar1 = *(uint *)(param_2 + 0x18) <= *(uint *)(uVar11 + 0x20);
    uVar2 = *(uint *)(uVar11 + 0x20) == *(uint *)(param_2 + 0x18);
    if ((bool)uVar2) {
      lVar3 = uVar11 + 8;
      FUN_10bd28214(lVar3);
      func_0x00010bd2b074();
      if (!(bool)uVar1 || (bool)uVar2) {
                    /* WARNING: Could not recover jumptable at 0x00010bd2a884. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ulong)(byte)(&UNK_10e60b984)[extraout_x8] * 4 + 0x10bd2a888))();
        auVar12._8_8_ = lVar8;
        auVar12._0_8_ = lVar3;
        return auVar12;
      }
      func_0x00010bd2af64();
      FUN_10bdb2a00(auStack_50);
      puVar6 = &UNK_10f835f7a;
      func_0x00010b22d104(auStack_50);
      puVar4 = puVar5;
    }
    else {
      func_0x00010bd2af64();
      FUN_10bdb2a00(auStack_50);
      puVar6 = &UNK_10f835f5f;
      func_0x00010bd2a3b4(auStack_50);
    }
    func_0x00010bd2b120();
    ppuVar7 = &puStack_80;
    pcStack_58 = FUN_10bd2a9a0;
    puVar9 = puVar6;
    uStack_70 = uVar11;
    uStack_68 = uVar10;
    puStack_60 = &stack0xfffffffffffffff0;
    FUN_10bd2814c();
    puStack_80 = puVar6;
    puStack_78 = puVar9;
    func_0x00010b4cf618(&puStack_80);
    func_0x0001053aba88(puVar4,ppuVar7);
    auVar14._8_8_ = ppuVar7;
    auVar14._0_8_ = puVar4;
    return auVar14;
  }
  if ((uVar11 & 1) == 0) {
    param_1 = 0;
    uVar11 = 0;
  }
  else {
    FUN_10bd2814c(param_2);
    func_0x00010b4cf928(param_1,uVar10,param_2,lVar8,param_3);
    uVar11 = uVar10 & 0xffffffff00000000;
    uVar10 = uVar10 & 0xffffffff;
  }
  auVar13._8_8_ = uVar11 | uVar10;
  auVar13._0_8_ = param_1;
  return auVar13;
}



/* Entry: 10bd2a9a0; end: 10bd2a9e3;  */

void FUN_10bd2a9a0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_30;
  uVar2 = param_2;
  FUN_10bd2814c();
  uStack_30 = param_2;
  uStack_28 = uVar2;
  func_0x00010b4cf618(&uStack_30);
  func_0x0001053aba88(param_1,puVar1);
  return;
}



/* Entry: 10bd2a9e4; end: 10bd2aa93;  */

undefined8 * FUN_10bd2a9e4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_68 [24];
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  undefined1 *puStack_40;
  code *pcStack_38;
  undefined8 auStack_30 [2];
  
  puVar3 = auStack_30;
  puVar1 = param_2;
  FUN_10bd28214();
  puVar2 = param_1;
  FUN_10bd2290c(param_1);
  switch(*(undefined4 *)(param_1 + 3)) {
  case 1:
  case 3:
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    break;
  case 2:
  case 4:
    *param_1 = *param_2;
    break;
  case 5:
  case 6:
  case 8:
  case 10:
    func_0x00010bd2af64();
    FUN_10bdb2a00();
    func_0x00010bd2b05c();
    func_0x00010bd2b120();
    pcStack_38 = FUN_10bd2aa94;
    if (puVar3 != puVar1) {
      puStack_50 = param_2;
      puStack_48 = param_1;
      puStack_40 = &stack0xfffffffffffffff0;
      FUN_10bd2a058(puVar3);
      func_0x00010bd2b108();
      FUN_10bd2aadc(puVar3,auStack_68,0);
    }
    return puVar3;
  case 7:
    *(undefined1 *)param_1 = *(undefined1 *)param_2;
    break;
  case 9:
                    /* WARNING: Could not recover jumptable at 0x00010bdbce60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5__110346350
    )(param_1,param_2);
    return param_1;
  }
  return puVar2;
}



/* Entry: 10bd2aa94; end: 10bd2aadb;  */

long FUN_10bd2aa94(long param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  if (param_1 != param_2) {
    FUN_10bd2a058(param_1);
    func_0x00010bd2b108();
    FUN_10bd2aadc(param_1,auStack_38,0);
  }
  return param_1;
}



/* Entry: 10bd2aadc; end: 10bd2aba3;  */

void FUN_10bd2aadc(int *param_1,long *param_2,long param_3)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  while (lVar3 = *param_2, lVar3 != param_3) {
    lVar2 = lVar3 + 8;
    piVar1 = param_1;
    func_0x00010bd2afa0(param_1,lVar2);
    if (piVar1 == (int *)0x0) {
      piVar1 = param_1;
      FUN_10bd2aba4(param_1,*param_1 + 1);
      if ((int)piVar1 != 0) {
        lVar2 = lVar3 + 8;
        func_0x00010bd2afa0(param_1,lVar2);
      }
      piVar1 = param_1;
      func_0x000107c27d64(param_1,0x38);
      FUN_10bd2ad18(piVar1 + 2,*(undefined8 *)(param_1 + 6),lVar3 + 8);
      uVar4 = *(undefined8 *)(lVar3 + 0x28);
      *(undefined8 *)(piVar1 + 0xc) = *(undefined8 *)(lVar3 + 0x30);
      *(undefined8 *)(piVar1 + 10) = uVar4;
      FUN_10bd2ad64(param_1,lVar2,piVar1);
      *param_1 = *param_1 + 1;
    }
    func_0x000107c27d54(param_2);
  }
  return;
}



/* Entry: 10bd2aba4; end: 10bd2ad17;  */

undefined8 FUN_10bd2aba4(long param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong *puVar8;
  ulong *puVar9;
  
  uVar1 = *(uint *)(param_1 + 4);
  uVar6 = (ulong)uVar1;
  uVar4 = (uVar6 & 0xfffffffe) - ((ulong)(uVar1 >> 2) & 0x3ffffffc);
  if (uVar4 < param_2) {
    if ((int)uVar1 < 0) {
      return 0;
    }
    if (uVar1 == 1) {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 4) = 2;
      lVar3 = param_1;
      func_0x000107c27d6c(param_1,2);
      *(long *)(param_1 + 0x10) = lVar3;
      lVar3 = param_1;
      func_0x000104c610b8();
      *(int *)(param_1 + 8) = (int)lVar3;
      return 1;
    }
    uVar2 = uVar1 << 1;
  }
  else {
    if (uVar1 < 3 || uVar4 >> 2 < param_2) {
      return 0;
    }
    uVar5 = 0;
    do {
      uVar5 = uVar5 + 1;
    } while (param_2 + (param_2 >> 2) + 1 << (uVar5 & 0x3f) < uVar4);
    uVar2 = uVar1 >> (ulong)((uint)uVar5 & 0x1f);
    if (uVar2 < 3) {
      uVar2 = 2;
    }
    if (uVar2 == uVar1) {
      return 0;
    }
  }
  lVar7 = *(long *)(param_1 + 0x10);
  *(uint *)(param_1 + 4) = uVar2;
  lVar3 = param_1;
  func_0x000107c27d6c();
  *(long *)(param_1 + 0x10) = lVar3;
  uVar1 = *(uint *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 4);
  for (uVar4 = (ulong)uVar1; uVar4 < uVar6; uVar4 = uVar4 + 1) {
    puVar8 = *(ulong **)(lVar7 + uVar4 * 8);
    if ((puVar8 == (ulong *)0x0) || (((ulong)puVar8 & 1) != 0)) {
      if (((ulong)puVar8 & 1) != 0) {
        func_0x00010b4cf860(param_1,(long)puVar8 - 1,FUN_10bd2ae00);
      }
    }
    else {
      do {
        puVar9 = (ulong *)*puVar8;
        lVar3 = param_1;
        FUN_10bd2a9a0(param_1,puVar8 + 1);
        FUN_10bd2ad64(param_1,lVar3,puVar8);
        puVar8 = puVar9;
      } while (puVar9 != (ulong *)0x0);
    }
  }
  func_0x000107c27d70(param_1,lVar7,uVar6);
  return 1;
}



/* Entry: 10bd2ad18; end: 10bd2ad63;  */

void FUN_10bd2ad18(long param_1,long *param_2,undefined8 param_3)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  ulong extraout_x9;
  ulong extraout_x9_00;
  ulong uVar2;
  ulong extraout_x10;
  ulong extraout_x10_00;
  
  lVar1 = param_1;
  FUN_10bd2ae08(param_1,param_3);
  if ((lVar1 != 0) && (param_2 != (long *)0x0)) {
    func_0x00010b4d7468();
    lVar1 = param_2[1];
    if (0xf < (ulong)(lVar1 - *param_2)) {
      param_2[1] = lVar1 + -0x10;
      if (((lVar1 + -0x10) - param_2[3] < 0x181) && ((ulong)param_2[2] < (ulong)param_2[3])) {
        func_0x00010b4d826c();
        for (uVar2 = extraout_x9_00; extraout_x10_00 < uVar2; uVar2 = uVar2 - 0x40) {
          Hint_Prefetch(uVar2,2,0,0);
        }
        param_2[3] = uVar2;
        lVar1 = extraout_x8_00;
      }
      *(long *)(lVar1 + -0x10) = param_1;
      *(code **)(lVar1 + -8) = FUN_10bd2ae2c;
      return;
    }
    func_0x00010b4d74c4();
    lVar1 = param_2[1];
    param_2[1] = lVar1 + -0x10;
    if (((lVar1 + -0x10) - param_2[3] < 0x181) && ((ulong)param_2[2] < (ulong)param_2[3])) {
      func_0x00010b4d826c();
      for (uVar2 = extraout_x9; extraout_x10 < uVar2; uVar2 = uVar2 - 0x40) {
        Hint_Prefetch(uVar2,2,0,0);
      }
      param_2[3] = uVar2;
      lVar1 = extraout_x8;
    }
    *(long *)(lVar1 + -0x10) = param_1;
    *(code **)(lVar1 + -8) = FUN_10bd2ae2c;
    return;
  }
  return;
}



/* Entry: 10bd2ad64; end: 10bd2adff;  */

void FUN_10bd2ad64(ulong param_1,ulong param_2,undefined8 *param_3)

{
  uint uVar1;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lStack_60;
  ulong uStack_58;
  undefined8 *puStack_48;
  
  lVar3 = *(long *)(param_1 + 0x10);
  uVar4 = *(ulong *)(lVar3 + (param_2 & 0xffffffff) * 8);
  if (uVar4 == 0) {
    *param_3 = 0;
    *(undefined8 **)(lVar3 + (param_2 & 0xffffffff) * 8) = param_3;
    uVar1 = (uint)param_2;
    if (*(uint *)(param_1 + 0xc) <= (uint)param_2) {
      uVar1 = *(uint *)(param_1 + 0xc);
    }
    *(uint *)(param_1 + 0xc) = uVar1;
  }
  else {
    if (((uVar4 & 1) != 0) ||
       (uVar4 = param_1, func_0x0001053abc1c(param_1,param_2), (uVar4 & 1) != 0)) {
      uVar5 = *(ulong *)(*(long *)(param_1 + 0x10) + (param_2 & 0xffffffff) * 8);
      uVar4 = uVar5;
      puStack_48 = param_3;
      if ((uVar5 != 0) && ((uVar5 & 1) == 0)) {
        uVar4 = param_1;
        func_0x00010b4cf740(param_1,uVar5,FUN_10bd2ae00);
        *(ulong *)(*(long *)(param_1 + 0x10) + (param_2 & 0xffffffff) * 8) = uVar4;
      }
      FUN_10bd2ae00();
      func_0x00010b4d122c(&lStack_60);
      if (lStack_60 != **(long **)(uVar4 - 1) || (uStack_58 & 0xffffffff) != 0) {
        func_0x00010b4cf5a8(lStack_60,uStack_58);
        func_0x00010b4d1160();
        **(undefined8 **)(extraout_x8 + 0x20) = puStack_48;
      }
      func_0x00010b4cf834(lStack_60,uStack_58,1);
      if (*(long *)(uVar4 + 0xf) == lStack_60 &&
          (uint)uStack_58 == (uint)*(byte *)(*(long *)(uVar4 + 0xf) + 10)) {
        uVar2 = 0;
      }
      else {
        func_0x00010b4d1160();
        uVar2 = *(undefined8 *)(extraout_x8_00 + 0x20);
      }
      *puStack_48 = uVar2;
      return;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    *param_3 = *(undefined8 *)(lVar3 + (param_2 & 0xffffffff) * 8);
    *(undefined8 **)(lVar3 + (param_2 & 0xffffffff) * 8) = param_3;
  }
  return;
}



/* Entry: 10bd2ae00; end: 10bd2ae07;  */

void FUN_10bd2ae00(int param_1)

{
  param_1 = param_1 + 8;
  func_0x00010bd2afb4();
                    /* WARNING: Could not recover jumptable at 0x00010bd28174. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((ulong)(byte)(&UNK_10e60b928)[param_1 - 1] * 4 + 0x10bd28178))();
  return;
}



/* Entry: 10bd2ae08; end: 10bd2ae2b;  */

long FUN_10bd2ae08(long param_1)

{
  *(undefined4 *)(param_1 + 0x18) = 0;
  FUN_10bd2a9e4();
  return param_1;
}



/* Entry: 10bd2ae2c; end: 10bd2ae2f;  */

void FUN_10bd2ae2c(long param_1)

{
  if (*(int *)(param_1 + 0x18) == 9) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  return;
}



/* Entry: 10bd2ae30; end: 10bd2ae57;  */

void FUN_10bd2ae30(undefined4 *param_1)

{
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)0x4;
    __Znwm();
  }
  else {
    func_0x00010bd2b004();
  }
  *param_1 = 0;
  return;
}



/* Entry: 10bd2ae58; end: 10bd2b173;  */

void FUN_10bd2ae58(void)

{
  func_0x00010bd17790(&stack0x00000010,&UNK_10f835a24);
  func_0x00010bd1771c();
  return;
}



/* Entry: 10bd2b174; end: 10bd2b19b;  */

void FUN_10bd2b174(ulong *param_1)

{
  long lVar1;
  long lVar2;
  
  if ((*param_1 & 1) == 0) {
    func_0x00010bd2b26c();
  }
  else {
    param_1 = (ulong *)((*param_1 & 0xfffffffffffffffe) + 8);
  }
  if (*param_1 != param_1[1]) {
    lVar1 = (long)((param_1[1] - *param_1) * 0x10000000) >> 0x20;
    lVar2 = lVar1 + 1;
    lVar1 = lVar1 * 0x10;
    do {
      lVar1 = lVar1 + -0x10;
      FUN_10bd36708(*param_1 + lVar1);
      lVar2 = lVar2 + -1;
    } while (1 < lVar2);
    param_1[1] = *param_1;
    return;
  }
  return;
}



/* Entry: 10bd2b19c; end: 10bd2b2db;  */

void FUN_10bd2b19c(ulong *param_1,long *param_2)

{
  long lVar1;
  long unaff_x22;
  
  if ((*param_1 & 1) == 0) {
    func_0x00010bd2b26c();
  }
  if (0 < (int)((ulong)(param_2[1] - *param_2) >> 4)) {
    func_0x00010bd374f4();
    for (lVar1 = 0; unaff_x22 * 0x10 - lVar1 != 0; lVar1 = lVar1 + 0x10) {
      func_0x00010bd37570();
      func_0x00010bd375bc();
    }
  }
  return;
}



/* Entry: 10bd2b2dc; end: 10bd2b2eb;  */

long ***** FUN_10bd2b2dc(long *****param_1,long *****param_2)

{
  long ***ppplVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  uint uVar4;
  long *****ppppplVar5;
  long *****ppppplVar6;
  long *****ppppplVar7;
  long ****pppplVar8;
  undefined8 extraout_x8;
  long *****unaff_x21;
  long *****ppppplVar9;
  long lVar10;
  long ****pppplVar11;
  long *****ppppplVar12;
  long *****ppppplVar13;
  long ***ppplVar14;
  uint uVar15;
  long *****ppppplVar16;
  long *****ppppplVar17;
  undefined1 auStack_2c0 [24];
  long ***ppplStack_2a8;
  long ***ppplStack_2a0;
  undefined8 uStack_298;
  long ****pppplStack_230;
  long ****pppplStack_228;
  long ****pppplStack_220;
  long ***ppplStack_218;
  undefined8 uStack_210;
  undefined4 uStack_208;
  long ***appplStack_1c8 [8];
  long ***appplStack_188 [2];
  undefined8 uStack_178;
  long ***appplStack_108 [2];
  undefined1 auStack_f8 [24];
  long ****pppplStack_e0;
  long ****pppplStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  uint uStack_bc;
  long ***ppplStack_b8;
  long ***appplStack_b0 [3];
  long ***appplStack_98 [3];
  long ****pppplStack_80;
  long ***ppplStack_78;
  undefined8 uStack_70;
  long ****pppplStack_68;
  
  if (param_2 == param_1) {
    ppppplVar13 = param_2;
    ppppplVar7 = param_1;
    func_0x00010bd2dce0(param_2,param_1,&UNK_10f836129);
    func_0x00010ae6ab0c();
    func_0x00010802bcb8();
    ppppplVar5 = (long *****)&UNK_10f836135;
    FUN_10bdb2a88(&pppplStack_80,&UNK_10f836135,0x33,ppppplVar13,ppppplVar7);
  }
  else {
    ppppplVar13 = param_2;
    FUN_10bd2b4f4();
    pppplStack_68 = (long ****)ppppplVar13;
    func_0x00010bd2dd3c();
    ppppplVar5 = &pppplStack_80;
    pppplStack_80 = (long ****)ppppplVar13;
    FUN_10bd208b4(ppppplVar5,&pppplStack_68,&UNK_10f83616e);
    if (ppppplVar5 == (long *****)0x0) {
      FUN_10bd2d5d0();
      func_0x00010bd2ddb0();
      ppppplVar16 = (long *****)unaff_x21[0xb];
      ppppplVar13 = param_2;
      func_0x000107c3a8e8();
      ppppplVar17 = (long *****)param_2[0xb];
      ppppplVar7 = ppppplVar13;
      func_0x000107c3a8e8();
      pppplStack_80 = (long ****)0x0;
      ppplStack_78 = (long ***)0x0;
      uStack_70 = 0;
      ppppplVar5 = unaff_x21;
      FUN_10bd1d54c();
      ppplStack_b8 = ppplStack_78;
      uStack_bc = (uint)((ppppplVar16 == ppppplVar13) != (ppppplVar17 != ppppplVar7));
      pppplVar8 = pppplStack_80;
      do {
        uVar2 = pppplVar8 == (long ****)ppplStack_b8;
        if ((bool)uVar2) {
          func_0x00010bd2dd90();
          if (*ppppplVar5 != ppppplVar5[1]) {
            func_0x00010bd1b8b8(param_2,param_1);
            ppppplVar5 = param_2;
            func_0x00010bd2dd90();
            FUN_10bd36884(param_2,ppppplVar5);
          }
          ppppplVar5 = &pppplStack_80;
          FUN_10bce0514(ppppplVar5);
          return ppppplVar5;
        }
        ppppplVar13 = (long *****)*pppplVar8;
        if ((*(byte *)((long)ppppplVar13 + 1) >> 5 & 1) == 0) {
          func_0x00010bd2dd78();
          switch((int)ppppplVar5) {
          case 1:
            func_0x00010bd2dcc0();
            FUN_10bd1d784();
            func_0x00010bd2dcd0();
            FUN_10bd1d830();
            break;
          case 2:
            func_0x00010bd2dcc0();
            FUN_10bd1daa0();
            func_0x00010bd2dcd0();
            FUN_10bd1db4c();
            break;
          case 3:
            func_0x00010bd2dcc0();
            FUN_10bd1ddc4();
            func_0x00010bd2dcd0();
            FUN_10bd1de70();
            break;
          case 4:
            func_0x00010bd2dcc0();
            FUN_10bd1e0e0();
            func_0x00010bd2dcd0();
            FUN_10bd1e18c();
            break;
          case 5:
            func_0x00010bd2dcc0();
            FUN_10bd1e748();
            func_0x00010bd2dcd0();
            FUN_10bd1e7f4();
            break;
          case 6:
            func_0x00010bd2dcc0();
            FUN_10bd1e404();
            func_0x00010bd2dcd0();
            FUN_10bd1e4b0();
            break;
          case 7:
            func_0x00010bd2dcc0();
            FUN_10bd1ea8c();
            func_0x00010bd2dcd0();
            FUN_10bd1eb3c();
            break;
          case 8:
            func_0x00010bd2dcc0();
            FUN_10bd1f9dc();
            func_0x00010bd2dcd0();
            FUN_10bd1fac4();
            break;
          case 9:
            func_0x00010bd2dcc0(appplStack_b0);
            FUN_10bd1edd0();
            func_0x00010bd2dcd0();
            FUN_10bd1f144();
            ppppplVar5 = (long *****)appplStack_b0;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
            break;
          case 10:
            func_0x00010bd2dcc0();
            func_0x00010bd2dda8();
            if (unaff_x21 == param_2) {
              FUN_10bd2b4f4();
            }
            func_0x00010bd2dcd0();
            FUN_10bd2002c();
            FUN_10bd2b2ec();
          }
        }
        else {
          if ((uStack_bc != 0) &&
             (func_0x00010b91c030(), ppppplVar5 = ppppplVar13, (int)ppppplVar13 != 0)) {
            func_0x00010bd2dcc0();
            func_0x00010bd21278();
            ppppplVar5 = ppppplVar13;
            func_0x00010bd2dcd0();
            func_0x00010bd2123c();
            if (((((ulong)ppppplVar5[1] & 1) == 0) || (func_0x00010bd2dcec(), !(bool)uVar2)) &&
               ((((ulong)ppppplVar13[1] & 1) == 0 || (func_0x00010bd2dcec(), !(bool)uVar2)))) {
              (*(code *)(*ppppplVar5)[6])();
              goto LAB_10bd2d464;
            }
          }
          func_0x00010bd2dcc0();
          FUN_10bd1d250();
          uVar4 = (uint)ppppplVar5;
          for (uVar15 = 0; (uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU)) != uVar15;
              uVar15 = uVar15 + 1) {
            func_0x00010bd2dd78();
            switch((int)ppppplVar5) {
            case 1:
              func_0x00010bd2dcac();
              func_0x00010bd1d948();
              func_0x00010bd2dcd0();
              FUN_10bd1d9d8();
              break;
            case 2:
              func_0x00010bd2dcac();
              func_0x00010bd1dc68();
              func_0x00010bd2dcd0();
              FUN_10bd1dcf8();
              break;
            case 3:
              func_0x00010bd2dcac();
              func_0x00010bd1df88();
              func_0x00010bd2dcd0();
              FUN_10bd1e018();
              break;
            case 4:
              func_0x00010bd2dcac();
              func_0x00010bd1e2a8();
              func_0x00010bd2dcd0();
              FUN_10bd1e338();
              break;
            case 5:
              func_0x00010bd2dcac();
              FUN_10bd1e91c();
              func_0x00010bd2dcd0();
              FUN_10bd1e9ac();
              break;
            case 6:
              func_0x00010bd2dcac();
              FUN_10bd1e5d8();
              func_0x00010bd2dcd0();
              FUN_10bd1e668();
              break;
            case 7:
              func_0x00010bd2dcac();
              func_0x00010bd1ec54();
              func_0x00010bd2dcd0();
              FUN_10bd1ed08();
              break;
            case 8:
              func_0x00010bd2dcac();
              FUN_10bd1fc24();
              func_0x00010bd2dcd0();
              FUN_10bd1fce0();
              break;
            case 9:
              func_0x00010bd2dcac(appplStack_98);
              FUN_10bd1f74c();
              func_0x00010bd2dcd0();
              FUN_10bd1f8c4();
              ppppplVar5 = (long *****)appplStack_98;
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
              break;
            case 10:
              func_0x00010bd2dcac();
              func_0x00010bd203bc();
              if (unaff_x21 == param_2) {
                FUN_10bd2b4f4();
              }
              func_0x00010bd2dcd0();
              FUN_10bd20468();
              FUN_10bd2b2ec();
            }
          }
        }
LAB_10bd2d464:
        pppplVar8 = pppplVar8 + 1;
      } while( true );
    }
    pppplVar8 = (long ****)(long)*(char *)((long)ppppplVar5 + 0x17);
    ppppplVar13 = ppppplVar5;
    if ((long)pppplVar8 < 0) {
      ppppplVar13 = (long *****)*ppppplVar5;
      pppplVar8 = ppppplVar5[1];
    }
    FUN_10bdb2a08(&pppplStack_80,&UNK_10f836135,0x36,ppppplVar13,pppplVar8);
    param_2 = &pppplStack_80;
    func_0x00010b4c31b4(param_2,&UNK_10f836190);
    func_0x00010ae6bd08();
    func_0x00010bd2dd6c(pppplStack_68[1]);
    ppppplVar5 = param_2;
    func_0x00010ae6bd08(param_2,&UNK_10f40acbc,4);
    func_0x00010bd2dd3c();
    func_0x00010bd2dd6c(ppppplVar5[1]);
    ppppplVar5 = (long *****)&DAT_10f684600;
    func_0x00010b4c3214(param_2);
  }
  ppppplVar13 = &pppplStack_80;
  func_0x00010ae6c700();
  pcStack_c8 = FUN_10bd2d5d0;
  pppplStack_e0 = (long ****)param_2;
  pppplStack_d8 = (long ****)param_1;
  puStack_d0 = &stack0xfffffffffffffff0;
  FUN_10bd2b4f4();
  if (ppppplVar5 != (long *****)0x0) {
    return ppppplVar5;
  }
  func_0x00010bd2dd3c();
  if (ppppplVar13 == (long *****)0x0) {
    func_0x000107c278b8(auStack_f8,&UNK_10f8361c4);
  }
  else {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_f8,ppppplVar13[1]);
  }
  ppppplVar13 = (long *****)0x26;
  FUN_10bdb2a00(appplStack_108,&UNK_10f836135,0x26);
  func_0x00010b4d6a18(appplStack_108,&UNK_10f8361cc);
  func_0x00010ae6c448();
  pppplVar8 = (long ****)&UNK_10f8361f7;
  FUN_10bcf57f4();
  ppppplVar5 = (long *****)appplStack_108;
  func_0x00010ae6c700();
  func_0x00010bd2dd5c();
  func_0x00010bd2dcfc();
  ppppplVar7 = &pppplStack_230;
  func_0x00010bd2dd18();
  uStack_178 = extraout_x8;
  FUN_10bd2b4f4();
  func_0x00010bd2ddb0();
  uVar15 = *(uint *)((long)unaff_x21 + 4);
  for (lVar10 = 0; (ulong)(uVar15 & ((int)uVar15 >> 0x1f ^ 0xffffffffU)) * 0x58 - lVar10 != 0;
      lVar10 = lVar10 + 0x58) {
    ppppplVar13 = (long *****)((long)unaff_x21[7] + lVar10);
    uVar2 = *(int *)(ppppplVar13[9] + 6) == 3;
    if ((bool)uVar2) {
      func_0x00010bd2dce0();
      FUN_10bd1d188();
      if ((int)ppppplVar5 == 0) {
        ppppplVar16 = (long *****)0x0;
        goto LAB_10bd2d898;
      }
    }
  }
  pppplStack_230 = (long ****)0x0;
  pppplStack_228 = (long ****)0x0;
  pppplStack_220 = (long ****)0x0;
  if (*(char *)((long)unaff_x21[4] + 0x53) == '\x01') {
    pppplVar11 = unaff_x21[7];
    ppppplVar5 = &pppplStack_220;
    pppplVar8 = (long ****)0x1;
    FUN_10bce02dc();
    pppplStack_220 = (long ****)(ppppplVar5 + (long)pppplVar8);
    pppplStack_228 = (long ****)(ppppplVar5 + 1);
    *ppppplVar5 = pppplVar11 + 0xb;
    ppppplVar7 = ppppplVar13;
    ppppplVar9 = ppppplVar5;
    pppplStack_230 = (long ****)ppppplVar5;
    ppppplVar17 = (long *****)pppplStack_228;
  }
  else {
    func_0x00010bd2dce0();
    FUN_10bd1d54c();
    ppppplVar9 = (long *****)pppplStack_230;
    ppppplVar17 = (long *****)pppplStack_228;
  }
  while( true ) {
    ppppplVar16 = (long *****)(ulong)(ppppplVar9 == ppppplVar17);
    uVar2 = 1;
    ppppplVar13 = ppppplVar7;
    if (ppppplVar9 == ppppplVar17) break;
    ppppplVar12 = (long *****)*ppppplVar9;
    ppppplVar5 = ppppplVar12;
    func_0x00010b91adc8();
    uVar2 = (int)ppppplVar5 == 10;
    if ((bool)uVar2) {
      ppppplVar6 = ppppplVar12;
      func_0x00010b91c030();
      if ((int)ppppplVar6 == 0) {
LAB_10bd2d7c4:
        ppppplVar5 = ppppplVar6;
        if ((*(byte *)((long)ppppplVar12 + 1) >> 5 & 1) == 0) {
          func_0x00010bd2dce0();
          func_0x00010bd2dda8();
          func_0x000107c30328();
          ppppplVar7 = ppppplVar12;
          ppppplVar13 = ppppplVar12;
          if (((ulong)ppppplVar5 & 1) == 0) break;
        }
        else {
          func_0x00010bd2dce0();
          ppppplVar13 = ppppplVar12;
          FUN_10bd1d250();
          uVar15 = 0;
          uVar4 = (uint)ppppplVar5;
          while (uVar2 = (uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU)) == uVar15,
                ppppplVar7 = ppppplVar13, !(bool)uVar2) {
            func_0x00010bd2dce0();
            ppppplVar13 = ppppplVar12;
            func_0x00010bd203bc();
            func_0x000107c30328();
            uVar15 = uVar15 + 1;
            if (((ulong)ppppplVar5 & 1) == 0) goto LAB_10bd2d890;
          }
        }
      }
      else {
        ppppplVar5 = ppppplVar12;
        FUN_10bcee28c();
        ppppplVar5 = (long *****)(ppppplVar5[7] + 0xb);
        func_0x00010b91adc8();
        uVar3 = (int)ppppplVar5 == 10;
        if ((bool)uVar3) {
          func_0x00010bd2dce0();
          ppppplVar13 = ppppplVar12;
          func_0x00010bd21278();
          if (((ulong)ppppplVar5[1] & 1) != 0) {
            ppppplVar6 = ppppplVar5;
            func_0x00010bd2dcec();
            uVar2 = 1;
            if ((bool)uVar3) goto LAB_10bd2d7c4;
          }
          func_0x00010bd2dd9c(appplStack_1c8);
          func_0x00010bd2dd9c(&ppplStack_218);
          pppplVar8 = appplStack_1c8;
          FUN_10bd28990(ppppplVar5,pppplVar8);
          ppplStack_218 = (long ***)0x0;
          uStack_210 = 0;
          uStack_208 = 0;
          while (uVar2 = appplStack_1c8[0] == ppplStack_218, !(bool)uVar2) {
            ppppplVar5 = (long *****)appplStack_188;
            FUN_10bd29438();
            func_0x000107c30328();
            if (((ulong)ppppplVar5 & 1) == 0) {
              func_0x00010bd2dd88();
              func_0x00010bd2dd80();
LAB_10bd2d890:
              ppppplVar16 = (long *****)0x0;
              goto LAB_10bd2d894;
            }
            ppppplVar5 = (long *****)appplStack_1c8;
            FUN_10bd21e18();
          }
          func_0x00010bd2dd88();
          func_0x00010bd2dd80();
          ppppplVar7 = ppppplVar13;
        }
      }
    }
    ppppplVar9 = ppppplVar9 + 1;
  }
LAB_10bd2d894:
  func_0x00010bd2dd44();
LAB_10bd2d898:
  func_0x00010bd2dd04(uStack_178);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    func_0x00010bd2dd44();
    func_0x00010bd2dcfc();
    ppppplVar7 = ppppplVar5;
    FUN_10bd2b4f4();
    ppppplVar16 = ppppplVar5;
    FUN_10bd2d5d0();
    uVar15 = *(uint *)((long)ppppplVar7 + 4);
    for (lVar10 = 0; (ulong)(uVar15 & ((int)uVar15 >> 0x1f ^ 0xffffffffU)) * 0x58 - lVar10 != 0;
        lVar10 = lVar10 + 0x58) {
      if ((*(int *)(*(long *)((long)ppppplVar7[7] + lVar10 + 0x48) + 0x30) == 3) &&
         (ppppplVar17 = ppppplVar16, FUN_10bd1d188(ppppplVar16,ppppplVar5),
         ((ulong)ppppplVar17 & 1) == 0)) {
        func_0x000107c27fa4(&ppplStack_2a8,pppplVar8,
                            *(undefined8 *)((long)ppppplVar7[7] + lVar10 + 8));
        func_0x000107c27940(ppppplVar13,&ppplStack_2a8);
        func_0x00010bd2dd5c();
      }
    }
    ppplStack_2a8 = (long ***)0x0;
    ppplStack_2a0 = (long ***)0x0;
    uStack_298 = 0;
    FUN_10bd1d54c(ppppplVar16,ppppplVar5,&ppplStack_2a8);
    ppplVar1 = ppplStack_2a0;
    for (pppplVar11 = (long ****)ppplStack_2a8; pppplVar11 != (long ****)ppplVar1;
        pppplVar11 = pppplVar11 + 1) {
      ppplVar14 = *pppplVar11;
      func_0x00010bd2dd78();
      if ((int)ppppplVar16 == 10) {
        if ((*(byte *)((long)ppplVar14 + 1) >> 5 & 1) == 0) {
          func_0x00010bd2dd4c();
          func_0x00010bd2dda8();
          FUN_10bd2db00(auStack_2c0,pppplVar8,ppplVar14,0xffffffff);
          FUN_10bd2d910(ppppplVar16,auStack_2c0,ppppplVar13);
          func_0x00010bd2dd34();
        }
        else {
          func_0x00010bd2dd4c();
          FUN_10bd1d250();
          uVar4 = (uint)ppppplVar16;
          for (uVar15 = 0; (uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU)) != uVar15;
              uVar15 = uVar15 + 1) {
            func_0x00010bd2dd4c();
            func_0x00010bd203bc();
            FUN_10bd2db00(auStack_2c0,pppplVar8,ppplVar14,uVar15);
            FUN_10bd2d910(ppppplVar16,auStack_2c0,ppppplVar13);
            func_0x00010bd2dd34();
          }
        }
      }
    }
    ppppplVar5 = (long *****)&ppplStack_2a8;
    FUN_10bce0514(ppppplVar5);
    return ppppplVar5;
  }
  return ppppplVar16;
}



/* Entry: 10bd2b2ec; end: 10bd2b343;  */

long ***** FUN_10bd2b2ec(long *****param_1,long *****param_2)

{
  long ***ppplVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  uint uVar4;
  long *****ppppplVar5;
  long *****ppppplVar6;
  long *****ppppplVar7;
  long *****ppppplVar8;
  long ****UNRECOVERED_JUMPTABLE;
  undefined8 extraout_x8;
  long *****unaff_x21;
  long lVar9;
  long ****pppplVar10;
  long *****ppppplVar11;
  long *****ppppplVar12;
  long ***ppplVar13;
  uint uVar14;
  long *****ppppplVar15;
  long *****ppppplVar16;
  undefined1 auStack_2c0 [24];
  long ***ppplStack_2a8;
  long ***ppplStack_2a0;
  undefined8 uStack_298;
  long ****pppplStack_230;
  long ****pppplStack_228;
  long ****pppplStack_220;
  long ***ppplStack_218;
  undefined8 uStack_210;
  undefined4 uStack_208;
  long ***appplStack_1c8 [8];
  long ***appplStack_188 [2];
  undefined8 uStack_178;
  long ***appplStack_108 [2];
  undefined1 auStack_f8 [24];
  long ****pppplStack_e0;
  long ****pppplStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  uint uStack_bc;
  long ***ppplStack_b8;
  long ***appplStack_b0 [3];
  long ***appplStack_98 [3];
  long ****pppplStack_80;
  long ***ppplStack_78;
  undefined8 uStack_70;
  long ****pppplStack_68;
  
  func_0x00010bd2ced8();
  func_0x00010bd2cda8();
  ppppplVar11 = param_1;
  func_0x00010bd2cd98();
  if (param_1 != (long *****)0x0 && param_1 == ppppplVar11) {
    UNRECOVERED_JUMPTABLE = param_1[4];
    func_0x00010bd2ce44();
                    /* WARNING: Could not recover jumptable at 0x00010bd2b340. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)UNRECOVERED_JUMPTABLE)();
    return ppppplVar11;
  }
  func_0x00010bd2cecc();
  if (ppppplVar11 == param_2) {
    ppppplVar5 = ppppplVar11;
    ppppplVar12 = param_2;
    func_0x00010bd2dce0();
    func_0x00010ae6ab0c();
    func_0x00010802bcb8();
    ppppplVar8 = (long *****)&UNK_10f836135;
    FUN_10bdb2a88(&pppplStack_80,&UNK_10f836135,0x33,ppppplVar5,ppppplVar12);
  }
  else {
    ppppplVar5 = ppppplVar11;
    FUN_10bd2b4f4();
    pppplStack_68 = (long ****)ppppplVar5;
    func_0x00010bd2dd3c();
    ppppplVar8 = &pppplStack_80;
    pppplStack_80 = (long ****)ppppplVar5;
    FUN_10bd208b4(ppppplVar8,&pppplStack_68,&UNK_10f83616e);
    if (ppppplVar8 == (long *****)0x0) {
      ppppplVar5 = ppppplVar11;
      FUN_10bd2d5d0();
      func_0x00010bd2ddb0();
      ppppplVar15 = (long *****)unaff_x21[0xb];
      ppppplVar12 = ppppplVar5;
      func_0x000107c3a8e8();
      ppppplVar16 = (long *****)ppppplVar5[0xb];
      ppppplVar7 = ppppplVar12;
      func_0x000107c3a8e8();
      pppplStack_80 = (long ****)0x0;
      ppplStack_78 = (long ***)0x0;
      uStack_70 = 0;
      ppppplVar8 = unaff_x21;
      FUN_10bd1d54c(unaff_x21,ppppplVar11,&pppplStack_80);
      ppplStack_b8 = ppplStack_78;
      uStack_bc = (uint)((ppppplVar15 == ppppplVar12) != (ppppplVar16 != ppppplVar7));
      UNRECOVERED_JUMPTABLE = pppplStack_80;
      do {
        uVar2 = UNRECOVERED_JUMPTABLE == (long ****)ppplStack_b8;
        if ((bool)uVar2) {
          func_0x00010bd2dd90();
          if (*ppppplVar8 != ppppplVar8[1]) {
            func_0x00010bd1b8b8(ppppplVar5,param_2);
            ppppplVar11 = ppppplVar5;
            func_0x00010bd2dd90();
            FUN_10bd36884(ppppplVar5,ppppplVar11);
          }
          ppppplVar11 = &pppplStack_80;
          FUN_10bce0514(ppppplVar11);
          return ppppplVar11;
        }
        ppppplVar11 = (long *****)*UNRECOVERED_JUMPTABLE;
        if ((*(byte *)((long)ppppplVar11 + 1) >> 5 & 1) == 0) {
          func_0x00010bd2dd78();
          switch((int)ppppplVar8) {
          case 1:
            func_0x00010bd2dcc0();
            FUN_10bd1d784();
            func_0x00010bd2dcd0();
            FUN_10bd1d830();
            break;
          case 2:
            func_0x00010bd2dcc0();
            FUN_10bd1daa0();
            func_0x00010bd2dcd0();
            FUN_10bd1db4c();
            break;
          case 3:
            func_0x00010bd2dcc0();
            FUN_10bd1ddc4();
            func_0x00010bd2dcd0();
            FUN_10bd1de70();
            break;
          case 4:
            func_0x00010bd2dcc0();
            FUN_10bd1e0e0();
            func_0x00010bd2dcd0();
            FUN_10bd1e18c();
            break;
          case 5:
            func_0x00010bd2dcc0();
            FUN_10bd1e748();
            func_0x00010bd2dcd0();
            FUN_10bd1e7f4();
            break;
          case 6:
            func_0x00010bd2dcc0();
            FUN_10bd1e404();
            func_0x00010bd2dcd0();
            FUN_10bd1e4b0();
            break;
          case 7:
            func_0x00010bd2dcc0();
            FUN_10bd1ea8c();
            func_0x00010bd2dcd0();
            FUN_10bd1eb3c();
            break;
          case 8:
            func_0x00010bd2dcc0();
            FUN_10bd1f9dc();
            func_0x00010bd2dcd0();
            FUN_10bd1fac4();
            break;
          case 9:
            func_0x00010bd2dcc0(appplStack_b0);
            FUN_10bd1edd0();
            func_0x00010bd2dcd0();
            FUN_10bd1f144();
            ppppplVar8 = (long *****)appplStack_b0;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
            break;
          case 10:
            func_0x00010bd2dcc0();
            func_0x00010bd2dda8();
            if (unaff_x21 == ppppplVar5) {
              FUN_10bd2b4f4();
            }
            func_0x00010bd2dcd0();
            FUN_10bd2002c();
            FUN_10bd2b2ec();
          }
        }
        else {
          if ((uStack_bc != 0) &&
             (func_0x00010b91c030(), ppppplVar8 = ppppplVar11, (int)ppppplVar11 != 0)) {
            func_0x00010bd2dcc0();
            func_0x00010bd21278();
            ppppplVar8 = ppppplVar11;
            func_0x00010bd2dcd0();
            func_0x00010bd2123c();
            if (((((ulong)ppppplVar8[1] & 1) == 0) || (func_0x00010bd2dcec(), !(bool)uVar2)) &&
               ((((ulong)ppppplVar11[1] & 1) == 0 || (func_0x00010bd2dcec(), !(bool)uVar2)))) {
              (*(code *)(*ppppplVar8)[6])();
              goto LAB_10bd2d464;
            }
          }
          func_0x00010bd2dcc0();
          FUN_10bd1d250();
          uVar4 = (uint)ppppplVar8;
          for (uVar14 = 0; (uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU)) != uVar14;
              uVar14 = uVar14 + 1) {
            func_0x00010bd2dd78();
            switch((int)ppppplVar8) {
            case 1:
              func_0x00010bd2dcac();
              func_0x00010bd1d948();
              func_0x00010bd2dcd0();
              FUN_10bd1d9d8();
              break;
            case 2:
              func_0x00010bd2dcac();
              func_0x00010bd1dc68();
              func_0x00010bd2dcd0();
              FUN_10bd1dcf8();
              break;
            case 3:
              func_0x00010bd2dcac();
              func_0x00010bd1df88();
              func_0x00010bd2dcd0();
              FUN_10bd1e018();
              break;
            case 4:
              func_0x00010bd2dcac();
              func_0x00010bd1e2a8();
              func_0x00010bd2dcd0();
              FUN_10bd1e338();
              break;
            case 5:
              func_0x00010bd2dcac();
              FUN_10bd1e91c();
              func_0x00010bd2dcd0();
              FUN_10bd1e9ac();
              break;
            case 6:
              func_0x00010bd2dcac();
              FUN_10bd1e5d8();
              func_0x00010bd2dcd0();
              FUN_10bd1e668();
              break;
            case 7:
              func_0x00010bd2dcac();
              func_0x00010bd1ec54();
              func_0x00010bd2dcd0();
              FUN_10bd1ed08();
              break;
            case 8:
              func_0x00010bd2dcac();
              FUN_10bd1fc24();
              func_0x00010bd2dcd0();
              FUN_10bd1fce0();
              break;
            case 9:
              func_0x00010bd2dcac(appplStack_98);
              FUN_10bd1f74c();
              func_0x00010bd2dcd0();
              FUN_10bd1f8c4();
              ppppplVar8 = (long *****)appplStack_98;
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
              break;
            case 10:
              func_0x00010bd2dcac();
              func_0x00010bd203bc();
              if (unaff_x21 == ppppplVar5) {
                FUN_10bd2b4f4();
              }
              func_0x00010bd2dcd0();
              FUN_10bd20468();
              FUN_10bd2b2ec();
            }
          }
        }
LAB_10bd2d464:
        UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE + 1;
      } while( true );
    }
    UNRECOVERED_JUMPTABLE = (long ****)(long)*(char *)((long)ppppplVar8 + 0x17);
    ppppplVar11 = ppppplVar8;
    if ((long)UNRECOVERED_JUMPTABLE < 0) {
      ppppplVar11 = (long *****)*ppppplVar8;
      UNRECOVERED_JUMPTABLE = ppppplVar8[1];
    }
    FUN_10bdb2a08(&pppplStack_80,&UNK_10f836135,0x36,ppppplVar11,UNRECOVERED_JUMPTABLE);
    ppppplVar11 = &pppplStack_80;
    func_0x00010b4c31b4(ppppplVar11,&UNK_10f836190);
    func_0x00010ae6bd08();
    func_0x00010bd2dd6c(pppplStack_68[1]);
    ppppplVar8 = ppppplVar11;
    func_0x00010ae6bd08(ppppplVar11,&UNK_10f40acbc,4);
    func_0x00010bd2dd3c();
    func_0x00010bd2dd6c(ppppplVar8[1]);
    ppppplVar8 = (long *****)&DAT_10f684600;
    func_0x00010b4c3214(ppppplVar11);
  }
  ppppplVar5 = &pppplStack_80;
  func_0x00010ae6c700();
  pcStack_c8 = FUN_10bd2d5d0;
  pppplStack_e0 = (long ****)ppppplVar11;
  pppplStack_d8 = (long ****)param_2;
  puStack_d0 = &stack0xfffffffffffffff0;
  FUN_10bd2b4f4();
  if (ppppplVar8 != (long *****)0x0) {
    return ppppplVar8;
  }
  func_0x00010bd2dd3c();
  if (ppppplVar5 == (long *****)0x0) {
    func_0x000107c278b8(auStack_f8,&UNK_10f8361c4);
  }
  else {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_f8,ppppplVar5[1]);
  }
  ppppplVar8 = (long *****)0x26;
  FUN_10bdb2a00(appplStack_108,&UNK_10f836135,0x26);
  func_0x00010b4d6a18(appplStack_108,&UNK_10f8361cc);
  func_0x00010ae6c448();
  UNRECOVERED_JUMPTABLE = (long ****)&UNK_10f8361f7;
  FUN_10bcf57f4();
  ppppplVar11 = (long *****)appplStack_108;
  func_0x00010ae6c700();
  func_0x00010bd2dd5c();
  func_0x00010bd2dcfc();
  ppppplVar5 = &pppplStack_230;
  func_0x00010bd2dd18();
  uStack_178 = extraout_x8;
  FUN_10bd2b4f4();
  func_0x00010bd2ddb0();
  uVar14 = *(uint *)((long)unaff_x21 + 4);
  for (lVar9 = 0; (ulong)(uVar14 & ((int)uVar14 >> 0x1f ^ 0xffffffffU)) * 0x58 - lVar9 != 0;
      lVar9 = lVar9 + 0x58) {
    ppppplVar8 = (long *****)((long)unaff_x21[7] + lVar9);
    uVar2 = *(int *)(ppppplVar8[9] + 6) == 3;
    if ((bool)uVar2) {
      func_0x00010bd2dce0();
      FUN_10bd1d188();
      if ((int)ppppplVar11 == 0) {
        ppppplVar12 = (long *****)0x0;
        goto LAB_10bd2d898;
      }
    }
  }
  pppplStack_230 = (long ****)0x0;
  pppplStack_228 = (long ****)0x0;
  pppplStack_220 = (long ****)0x0;
  if (*(char *)((long)unaff_x21[4] + 0x53) == '\x01') {
    pppplVar10 = unaff_x21[7];
    ppppplVar11 = &pppplStack_220;
    UNRECOVERED_JUMPTABLE = (long ****)0x1;
    FUN_10bce02dc();
    pppplStack_220 = (long ****)(ppppplVar11 + (long)UNRECOVERED_JUMPTABLE);
    pppplStack_228 = (long ****)(ppppplVar11 + 1);
    *ppppplVar11 = pppplVar10 + 0xb;
    ppppplVar5 = ppppplVar8;
    ppppplVar15 = ppppplVar11;
    pppplStack_230 = (long ****)ppppplVar11;
    ppppplVar7 = (long *****)pppplStack_228;
  }
  else {
    func_0x00010bd2dce0();
    FUN_10bd1d54c();
    ppppplVar15 = (long *****)pppplStack_230;
    ppppplVar7 = (long *****)pppplStack_228;
  }
  while( true ) {
    ppppplVar12 = (long *****)(ulong)(ppppplVar15 == ppppplVar7);
    uVar2 = 1;
    ppppplVar8 = ppppplVar5;
    if (ppppplVar15 == ppppplVar7) break;
    ppppplVar16 = (long *****)*ppppplVar15;
    ppppplVar11 = ppppplVar16;
    func_0x00010b91adc8();
    uVar2 = (int)ppppplVar11 == 10;
    if ((bool)uVar2) {
      ppppplVar6 = ppppplVar16;
      func_0x00010b91c030();
      if ((int)ppppplVar6 == 0) {
LAB_10bd2d7c4:
        ppppplVar11 = ppppplVar6;
        if ((*(byte *)((long)ppppplVar16 + 1) >> 5 & 1) == 0) {
          func_0x00010bd2dce0();
          func_0x00010bd2dda8();
          func_0x000107c30328();
          ppppplVar5 = ppppplVar16;
          ppppplVar8 = ppppplVar16;
          if (((ulong)ppppplVar11 & 1) == 0) break;
        }
        else {
          func_0x00010bd2dce0();
          ppppplVar8 = ppppplVar16;
          FUN_10bd1d250();
          uVar14 = 0;
          uVar4 = (uint)ppppplVar11;
          while (uVar2 = (uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU)) == uVar14,
                ppppplVar5 = ppppplVar8, !(bool)uVar2) {
            func_0x00010bd2dce0();
            ppppplVar8 = ppppplVar16;
            func_0x00010bd203bc();
            func_0x000107c30328();
            uVar14 = uVar14 + 1;
            if (((ulong)ppppplVar11 & 1) == 0) goto LAB_10bd2d890;
          }
        }
      }
      else {
        ppppplVar11 = ppppplVar16;
        FUN_10bcee28c();
        ppppplVar11 = (long *****)(ppppplVar11[7] + 0xb);
        func_0x00010b91adc8();
        uVar3 = (int)ppppplVar11 == 10;
        if ((bool)uVar3) {
          func_0x00010bd2dce0();
          ppppplVar8 = ppppplVar16;
          func_0x00010bd21278();
          if (((ulong)ppppplVar11[1] & 1) != 0) {
            ppppplVar6 = ppppplVar11;
            func_0x00010bd2dcec();
            uVar2 = 1;
            if ((bool)uVar3) goto LAB_10bd2d7c4;
          }
          func_0x00010bd2dd9c(appplStack_1c8);
          func_0x00010bd2dd9c(&ppplStack_218);
          UNRECOVERED_JUMPTABLE = appplStack_1c8;
          FUN_10bd28990(ppppplVar11,UNRECOVERED_JUMPTABLE);
          ppplStack_218 = (long ***)0x0;
          uStack_210 = 0;
          uStack_208 = 0;
          while (uVar2 = appplStack_1c8[0] == ppplStack_218, !(bool)uVar2) {
            ppppplVar11 = (long *****)appplStack_188;
            FUN_10bd29438();
            func_0x000107c30328();
            if (((ulong)ppppplVar11 & 1) == 0) {
              func_0x00010bd2dd88();
              func_0x00010bd2dd80();
LAB_10bd2d890:
              ppppplVar12 = (long *****)0x0;
              goto LAB_10bd2d894;
            }
            ppppplVar11 = (long *****)appplStack_1c8;
            FUN_10bd21e18();
          }
          func_0x00010bd2dd88();
          func_0x00010bd2dd80();
          ppppplVar5 = ppppplVar8;
        }
      }
    }
    ppppplVar15 = ppppplVar15 + 1;
  }
LAB_10bd2d894:
  func_0x00010bd2dd44();
LAB_10bd2d898:
  func_0x00010bd2dd04(uStack_178);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    func_0x00010bd2dd44();
    func_0x00010bd2dcfc();
    ppppplVar5 = ppppplVar11;
    FUN_10bd2b4f4();
    ppppplVar12 = ppppplVar11;
    FUN_10bd2d5d0();
    uVar14 = *(uint *)((long)ppppplVar5 + 4);
    for (lVar9 = 0; (ulong)(uVar14 & ((int)uVar14 >> 0x1f ^ 0xffffffffU)) * 0x58 - lVar9 != 0;
        lVar9 = lVar9 + 0x58) {
      if ((*(int *)(*(long *)((long)ppppplVar5[7] + lVar9 + 0x48) + 0x30) == 3) &&
         (ppppplVar7 = ppppplVar12, FUN_10bd1d188(ppppplVar12,ppppplVar11),
         ((ulong)ppppplVar7 & 1) == 0)) {
        func_0x000107c27fa4(&ppplStack_2a8,UNRECOVERED_JUMPTABLE,
                            *(undefined8 *)((long)ppppplVar5[7] + lVar9 + 8));
        func_0x000107c27940(ppppplVar8,&ppplStack_2a8);
        func_0x00010bd2dd5c();
      }
    }
    ppplStack_2a8 = (long ***)0x0;
    ppplStack_2a0 = (long ***)0x0;
    uStack_298 = 0;
    FUN_10bd1d54c(ppppplVar12,ppppplVar11,&ppplStack_2a8);
    ppplVar1 = ppplStack_2a0;
    for (pppplVar10 = (long ****)ppplStack_2a8; pppplVar10 != (long ****)ppplVar1;
        pppplVar10 = pppplVar10 + 1) {
      ppplVar13 = *pppplVar10;
      func_0x00010bd2dd78();
      if ((int)ppppplVar12 == 10) {
        if ((*(byte *)((long)ppplVar13 + 1) >> 5 & 1) == 0) {
          func_0x00010bd2dd4c();
          func_0x00010bd2dda8();
          FUN_10bd2db00(auStack_2c0,UNRECOVERED_JUMPTABLE,ppplVar13,0xffffffff);
          FUN_10bd2d910(ppppplVar12,auStack_2c0,ppppplVar8);
          func_0x00010bd2dd34();
        }
        else {
          func_0x00010bd2dd4c();
          FUN_10bd1d250();
          uVar4 = (uint)ppppplVar12;
          for (uVar14 = 0; (uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU)) != uVar14;
              uVar14 = uVar14 + 1) {
            func_0x00010bd2dd4c();
            func_0x00010bd203bc();
            FUN_10bd2db00(auStack_2c0,UNRECOVERED_JUMPTABLE,ppplVar13,uVar14);
            FUN_10bd2d910(ppppplVar12,auStack_2c0,ppppplVar8);
            func_0x00010bd2dd34();
          }
        }
      }
    }
    ppppplVar11 = (long *****)&ppplStack_2a8;
    FUN_10bce0514(ppppplVar11);
    return ppppplVar11;
  }
  return ppppplVar12;
}



/* Entry: 10bd2b344; end: 10bd2b347;  */

long ***** FUN_10bd2b344(long *****param_1,long *****param_2)

{
  long ***ppplVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  uint uVar4;
  long *****ppppplVar5;
  long *****ppppplVar6;
  long *****ppppplVar7;
  long *****ppppplVar8;
  long ****UNRECOVERED_JUMPTABLE;
  undefined8 extraout_x8;
  long *****unaff_x21;
  long lVar9;
  long ****pppplVar10;
  long *****ppppplVar11;
  long *****ppppplVar12;
  long ***ppplVar13;
  uint uVar14;
  long *****ppppplVar15;
  long *****ppppplVar16;
  undefined1 auStack_2c0 [24];
  long ***ppplStack_2a8;
  long ***ppplStack_2a0;
  undefined8 uStack_298;
  long ****pppplStack_230;
  long ****pppplStack_228;
  long ****pppplStack_220;
  long ***ppplStack_218;
  undefined8 uStack_210;
  undefined4 uStack_208;
  long ***appplStack_1c8 [8];
  long ***appplStack_188 [2];
  undefined8 uStack_178;
  long ***appplStack_108 [2];
  undefined1 auStack_f8 [24];
  long ****pppplStack_e0;
  long ****pppplStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  uint uStack_bc;
  long ***ppplStack_b8;
  long ***appplStack_b0 [3];
  long ***appplStack_98 [3];
  long ****pppplStack_80;
  long ***ppplStack_78;
  undefined8 uStack_70;
  long ****pppplStack_68;
  
  func_0x00010bd2ced8();
  func_0x00010bd2cda8();
  ppppplVar11 = param_1;
  func_0x00010bd2cd98();
  if (param_1 != (long *****)0x0 && param_1 == ppppplVar11) {
    UNRECOVERED_JUMPTABLE = param_1[4];
    func_0x00010bd2ce44();
                    /* WARNING: Could not recover jumptable at 0x00010bd2b340. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)UNRECOVERED_JUMPTABLE)();
    return ppppplVar11;
  }
  func_0x00010bd2cecc();
  if (ppppplVar11 == param_2) {
    ppppplVar5 = ppppplVar11;
    ppppplVar12 = param_2;
    func_0x00010bd2dce0();
    func_0x00010ae6ab0c();
    func_0x00010802bcb8();
    ppppplVar8 = (long *****)&UNK_10f836135;
    FUN_10bdb2a88(&pppplStack_80,&UNK_10f836135,0x33,ppppplVar5,ppppplVar12);
  }
  else {
    ppppplVar5 = ppppplVar11;
    FUN_10bd2b4f4();
    pppplStack_68 = (long ****)ppppplVar5;
    func_0x00010bd2dd3c();
    ppppplVar8 = &pppplStack_80;
    pppplStack_80 = (long ****)ppppplVar5;
    FUN_10bd208b4(ppppplVar8,&pppplStack_68,&UNK_10f83616e);
    if (ppppplVar8 == (long *****)0x0) {
      ppppplVar5 = ppppplVar11;
      FUN_10bd2d5d0();
      func_0x00010bd2ddb0();
      ppppplVar15 = (long *****)unaff_x21[0xb];
      ppppplVar12 = ppppplVar5;
      func_0x000107c3a8e8();
      ppppplVar16 = (long *****)ppppplVar5[0xb];
      ppppplVar7 = ppppplVar12;
      func_0x000107c3a8e8();
      pppplStack_80 = (long ****)0x0;
      ppplStack_78 = (long ***)0x0;
      uStack_70 = 0;
      ppppplVar8 = unaff_x21;
      FUN_10bd1d54c(unaff_x21,ppppplVar11,&pppplStack_80);
      ppplStack_b8 = ppplStack_78;
      uStack_bc = (uint)((ppppplVar15 == ppppplVar12) != (ppppplVar16 != ppppplVar7));
      UNRECOVERED_JUMPTABLE = pppplStack_80;
      do {
        uVar2 = UNRECOVERED_JUMPTABLE == (long ****)ppplStack_b8;
        if ((bool)uVar2) {
          func_0x00010bd2dd90();
          if (*ppppplVar8 != ppppplVar8[1]) {
            func_0x00010bd1b8b8(ppppplVar5,param_2);
            ppppplVar11 = ppppplVar5;
            func_0x00010bd2dd90();
            FUN_10bd36884(ppppplVar5,ppppplVar11);
          }
          ppppplVar11 = &pppplStack_80;
          FUN_10bce0514(ppppplVar11);
          return ppppplVar11;
        }
        ppppplVar11 = (long *****)*UNRECOVERED_JUMPTABLE;
        if ((*(byte *)((long)ppppplVar11 + 1) >> 5 & 1) == 0) {
          func_0x00010bd2dd78();
          switch((int)ppppplVar8) {
          case 1:
            func_0x00010bd2dcc0();
            FUN_10bd1d784();
            func_0x00010bd2dcd0();
            FUN_10bd1d830();
            break;
          case 2:
            func_0x00010bd2dcc0();
            FUN_10bd1daa0();
            func_0x00010bd2dcd0();
            FUN_10bd1db4c();
            break;
          case 3:
            func_0x00010bd2dcc0();
            FUN_10bd1ddc4();
            func_0x00010bd2dcd0();
            FUN_10bd1de70();
            break;
          case 4:
            func_0x00010bd2dcc0();
            FUN_10bd1e0e0();
            func_0x00010bd2dcd0();
            FUN_10bd1e18c();
            break;
          case 5:
            func_0x00010bd2dcc0();
            FUN_10bd1e748();
            func_0x00010bd2dcd0();
            FUN_10bd1e7f4();
            break;
          case 6:
            func_0x00010bd2dcc0();
            FUN_10bd1e404();
            func_0x00010bd2dcd0();
            FUN_10bd1e4b0();
            break;
          case 7:
            func_0x00010bd2dcc0();
            FUN_10bd1ea8c();
            func_0x00010bd2dcd0();
            FUN_10bd1eb3c();
            break;
          case 8:
            func_0x00010bd2dcc0();
            FUN_10bd1f9dc();
            func_0x00010bd2dcd0();
            FUN_10bd1fac4();
            break;
          case 9:
            func_0x00010bd2dcc0(appplStack_b0);
            FUN_10bd1edd0();
            func_0x00010bd2dcd0();
            FUN_10bd1f144();
            ppppplVar8 = (long *****)appplStack_b0;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
            break;
          case 10:
            func_0x00010bd2dcc0();
            func_0x00010bd2dda8();
            if (unaff_x21 == ppppplVar5) {
              FUN_10bd2b4f4();
            }
            func_0x00010bd2dcd0();
            FUN_10bd2002c();
            FUN_10bd2b2ec();
          }
        }
        else {
          if ((uStack_bc != 0) &&
             (func_0x00010b91c030(), ppppplVar8 = ppppplVar11, (int)ppppplVar11 != 0)) {
            func_0x00010bd2dcc0();
            func_0x00010bd21278();
            ppppplVar8 = ppppplVar11;
            func_0x00010bd2dcd0();
            func_0x00010bd2123c();
            if (((((ulong)ppppplVar8[1] & 1) == 0) || (func_0x00010bd2dcec(), !(bool)uVar2)) &&
               ((((ulong)ppppplVar11[1] & 1) == 0 || (func_0x00010bd2dcec(), !(bool)uVar2)))) {
              (*(code *)(*ppppplVar8)[6])();
              goto LAB_10bd2d464;
            }
          }
          func_0x00010bd2dcc0();
          FUN_10bd1d250();
          uVar4 = (uint)ppppplVar8;
          for (uVar14 = 0; (uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU)) != uVar14;
              uVar14 = uVar14 + 1) {
            func_0x00010bd2dd78();
            switch((int)ppppplVar8) {
            case 1:
              func_0x00010bd2dcac();
              func_0x00010bd1d948();
              func_0x00010bd2dcd0();
              FUN_10bd1d9d8();
              break;
            case 2:
              func_0x00010bd2dcac();
              func_0x00010bd1dc68();
              func_0x00010bd2dcd0();
              FUN_10bd1dcf8();
              break;
            case 3:
              func_0x00010bd2dcac();
              func_0x00010bd1df88();
              func_0x00010bd2dcd0();
              FUN_10bd1e018();
              break;
            case 4:
              func_0x00010bd2dcac();
              func_0x00010bd1e2a8();
              func_0x00010bd2dcd0();
              FUN_10bd1e338();
              break;
            case 5:
              func_0x00010bd2dcac();
              FUN_10bd1e91c();
              func_0x00010bd2dcd0();
              FUN_10bd1e9ac();
              break;
            case 6:
              func_0x00010bd2dcac();
              FUN_10bd1e5d8();
              func_0x00010bd2dcd0();
              FUN_10bd1e668();
              break;
            case 7:
              func_0x00010bd2dcac();
              func_0x00010bd1ec54();
              func_0x00010bd2dcd0();
              FUN_10bd1ed08();
              break;
            case 8:
              func_0x00010bd2dcac();
              FUN_10bd1fc24();
              func_0x00010bd2dcd0();
              FUN_10bd1fce0();
              break;
            case 9:
              func_0x00010bd2dcac(appplStack_98);
              FUN_10bd1f74c();
              func_0x00010bd2dcd0();
              FUN_10bd1f8c4();
              ppppplVar8 = (long *****)appplStack_98;
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
              break;
            case 10:
              func_0x00010bd2dcac();
              func_0x00010bd203bc();
              if (unaff_x21 == ppppplVar5) {
                FUN_10bd2b4f4();
              }
              func_0x00010bd2dcd0();
              FUN_10bd20468();
              FUN_10bd2b2ec();
            }
          }
        }
LAB_10bd2d464:
        UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE + 1;
      } while( true );
    }
    UNRECOVERED_JUMPTABLE = (long ****)(long)*(char *)((long)ppppplVar8 + 0x17);
    ppppplVar11 = ppppplVar8;
    if ((long)UNRECOVERED_JUMPTABLE < 0) {
      ppppplVar11 = (long *****)*ppppplVar8;
      UNRECOVERED_JUMPTABLE = ppppplVar8[1];
    }
    FUN_10bdb2a08(&pppplStack_80,&UNK_10f836135,0x36,ppppplVar11,UNRECOVERED_JUMPTABLE);
    ppppplVar11 = &pppplStack_80;
    func_0x00010b4c31b4(ppppplVar11,&UNK_10f836190);
    func_0x00010ae6bd08();
    func_0x00010bd2dd6c(pppplStack_68[1]);
    ppppplVar8 = ppppplVar11;
    func_0x00010ae6bd08(ppppplVar11,&UNK_10f40acbc,4);
    func_0x00010bd2dd3c();
    func_0x00010bd2dd6c(ppppplVar8[1]);
    ppppplVar8 = (long *****)&DAT_10f684600;
    func_0x00010b4c3214(ppppplVar11);
  }
  ppppplVar5 = &pppplStack_80;
  func_0x00010ae6c700();
  pcStack_c8 = FUN_10bd2d5d0;
  pppplStack_e0 = (long ****)ppppplVar11;
  pppplStack_d8 = (long ****)param_2;
  puStack_d0 = &stack0xfffffffffffffff0;
  FUN_10bd2b4f4();
  if (ppppplVar8 != (long *****)0x0) {
    return ppppplVar8;
  }
  func_0x00010bd2dd3c();
  if (ppppplVar5 == (long *****)0x0) {
    func_0x000107c278b8(auStack_f8,&UNK_10f8361c4);
  }
  else {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_f8,ppppplVar5[1]);
  }
  ppppplVar8 = (long *****)0x26;
  FUN_10bdb2a00(appplStack_108,&UNK_10f836135,0x26);
  func_0x00010b4d6a18(appplStack_108,&UNK_10f8361cc);
  func_0x00010ae6c448();
  UNRECOVERED_JUMPTABLE = (long ****)&UNK_10f8361f7;
  FUN_10bcf57f4();
  ppppplVar11 = (long *****)appplStack_108;
  func_0x00010ae6c700();
  func_0x00010bd2dd5c();
  func_0x00010bd2dcfc();
  ppppplVar5 = &pppplStack_230;
  func_0x00010bd2dd18();
  uStack_178 = extraout_x8;
  FUN_10bd2b4f4();
  func_0x00010bd2ddb0();
  uVar14 = *(uint *)((long)unaff_x21 + 4);
  for (lVar9 = 0; (ulong)(uVar14 & ((int)uVar14 >> 0x1f ^ 0xffffffffU)) * 0x58 - lVar9 != 0;
      lVar9 = lVar9 + 0x58) {
    ppppplVar8 = (long *****)((long)unaff_x21[7] + lVar9);
    uVar2 = *(int *)(ppppplVar8[9] + 6) == 3;
    if ((bool)uVar2) {
      func_0x00010bd2dce0();
      FUN_10bd1d188();
      if ((int)ppppplVar11 == 0) {
        ppppplVar12 = (long *****)0x0;
        goto LAB_10bd2d898;
      }
    }
  }
  pppplStack_230 = (long ****)0x0;
  pppplStack_228 = (long ****)0x0;
  pppplStack_220 = (long ****)0x0;
  if (*(char *)((long)unaff_x21[4] + 0x53) == '\x01') {
    pppplVar10 = unaff_x21[7];
    ppppplVar11 = &pppplStack_220;
    UNRECOVERED_JUMPTABLE = (long ****)0x1;
    FUN_10bce02dc();
    pppplStack_220 = (long ****)(ppppplVar11 + (long)UNRECOVERED_JUMPTABLE);
    pppplStack_228 = (long ****)(ppppplVar11 + 1);
    *ppppplVar11 = pppplVar10 + 0xb;
    ppppplVar5 = ppppplVar8;
    ppppplVar15 = ppppplVar11;
    pppplStack_230 = (long ****)ppppplVar11;
    ppppplVar7 = (long *****)pppplStack_228;
  }
  else {
    func_0x00010bd2dce0();
    FUN_10bd1d54c();
    ppppplVar15 = (long *****)pppplStack_230;
    ppppplVar7 = (long *****)pppplStack_228;
  }
  while( true ) {
    ppppplVar12 = (long *****)(ulong)(ppppplVar15 == ppppplVar7);
    uVar2 = 1;
    ppppplVar8 = ppppplVar5;
    if (ppppplVar15 == ppppplVar7) break;
    ppppplVar16 = (long *****)*ppppplVar15;
    ppppplVar11 = ppppplVar16;
    func_0x00010b91adc8();
    uVar2 = (int)ppppplVar11 == 10;
    if ((bool)uVar2) {
      ppppplVar6 = ppppplVar16;
      func_0x00010b91c030();
      if ((int)ppppplVar6 == 0) {
LAB_10bd2d7c4:
        ppppplVar11 = ppppplVar6;
        if ((*(byte *)((long)ppppplVar16 + 1) >> 5 & 1) == 0) {
          func_0x00010bd2dce0();
          func_0x00010bd2dda8();
          func_0x000107c30328();
          ppppplVar5 = ppppplVar16;
          ppppplVar8 = ppppplVar16;
          if (((ulong)ppppplVar11 & 1) == 0) break;
        }
        else {
          func_0x00010bd2dce0();
          ppppplVar8 = ppppplVar16;
          FUN_10bd1d250();
          uVar14 = 0;
          uVar4 = (uint)ppppplVar11;
          while (uVar2 = (uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU)) == uVar14,
                ppppplVar5 = ppppplVar8, !(bool)uVar2) {
            func_0x00010bd2dce0();
            ppppplVar8 = ppppplVar16;
            func_0x00010bd203bc();
            func_0x000107c30328();
            uVar14 = uVar14 + 1;
            if (((ulong)ppppplVar11 & 1) == 0) goto LAB_10bd2d890;
          }
        }
      }
      else {
        ppppplVar11 = ppppplVar16;
        FUN_10bcee28c();
        ppppplVar11 = (long *****)(ppppplVar11[7] + 0xb);
        func_0x00010b91adc8();
        uVar3 = (int)ppppplVar11 == 10;
        if ((bool)uVar3) {
          func_0x00010bd2dce0();
          ppppplVar8 = ppppplVar16;
          func_0x00010bd21278();
          if (((ulong)ppppplVar11[1] & 1) != 0) {
            ppppplVar6 = ppppplVar11;
            func_0x00010bd2dcec();
            uVar2 = 1;
            if ((bool)uVar3) goto LAB_10bd2d7c4;
          }
          func_0x00010bd2dd9c(appplStack_1c8);
          func_0x00010bd2dd9c(&ppplStack_218);
          UNRECOVERED_JUMPTABLE = appplStack_1c8;
          FUN_10bd28990(ppppplVar11,UNRECOVERED_JUMPTABLE);
          ppplStack_218 = (long ***)0x0;
          uStack_210 = 0;
          uStack_208 = 0;
          while (uVar2 = appplStack_1c8[0] == ppplStack_218, !(bool)uVar2) {
            ppppplVar11 = (long *****)appplStack_188;
            FUN_10bd29438();
            func_0x000107c30328();
            if (((ulong)ppppplVar11 & 1) == 0) {
              func_0x00010bd2dd88();
              func_0x00010bd2dd80();
LAB_10bd2d890:
              ppppplVar12 = (long *****)0x0;
              goto LAB_10bd2d894;
            }
            ppppplVar11 = (long *****)appplStack_1c8;
            FUN_10bd21e18();
          }
          func_0x00010bd2dd88();
          func_0x00010bd2dd80();
          ppppplVar5 = ppppplVar8;
        }
      }
    }
    ppppplVar15 = ppppplVar15 + 1;
  }
LAB_10bd2d894:
  func_0x00010bd2dd44();
LAB_10bd2d898:
  func_0x00010bd2dd04(uStack_178);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    func_0x00010bd2dd44();
    func_0x00010bd2dcfc();
    ppppplVar5 = ppppplVar11;
    FUN_10bd2b4f4();
    ppppplVar12 = ppppplVar11;
    FUN_10bd2d5d0();
    uVar14 = *(uint *)((long)ppppplVar5 + 4);
    for (lVar9 = 0; (ulong)(uVar14 & ((int)uVar14 >> 0x1f ^ 0xffffffffU)) * 0x58 - lVar9 != 0;
        lVar9 = lVar9 + 0x58) {
      if ((*(int *)(*(long *)((long)ppppplVar5[7] + lVar9 + 0x48) + 0x30) == 3) &&
         (ppppplVar7 = ppppplVar12, FUN_10bd1d188(ppppplVar12,ppppplVar11),
         ((ulong)ppppplVar7 & 1) == 0)) {
        func_0x000107c27fa4(&ppplStack_2a8,UNRECOVERED_JUMPTABLE,
                            *(undefined8 *)((long)ppppplVar5[7] + lVar9 + 8));
        func_0x000107c27940(ppppplVar8,&ppplStack_2a8);
        func_0x00010bd2dd5c();
      }
    }
    ppplStack_2a8 = (long ***)0x0;
    ppplStack_2a0 = (long ***)0x0;
    uStack_298 = 0;
    FUN_10bd1d54c(ppppplVar12,ppppplVar11,&ppplStack_2a8);
    ppplVar1 = ppplStack_2a0;
    for (pppplVar10 = (long ****)ppplStack_2a8; pppplVar10 != (long ****)ppplVar1;
        pppplVar10 = pppplVar10 + 1) {
      ppplVar13 = *pppplVar10;
      func_0x00010bd2dd78();
      if ((int)ppppplVar12 == 10) {
        if ((*(byte *)((long)ppplVar13 + 1) >> 5 & 1) == 0) {
          func_0x00010bd2dd4c();
          func_0x00010bd2dda8();
          FUN_10bd2db00(auStack_2c0,UNRECOVERED_JUMPTABLE,ppplVar13,0xffffffff);
          FUN_10bd2d910(ppppplVar12,auStack_2c0,ppppplVar8);
          func_0x00010bd2dd34();
        }
        else {
          func_0x00010bd2dd4c();
          FUN_10bd1d250();
          uVar4 = (uint)ppppplVar12;
          for (uVar14 = 0; (uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU)) != uVar14;
              uVar14 = uVar14 + 1) {
            func_0x00010bd2dd4c();
            func_0x00010bd203bc();
            FUN_10bd2db00(auStack_2c0,UNRECOVERED_JUMPTABLE,ppplVar13,uVar14);
            FUN_10bd2d910(ppppplVar12,auStack_2c0,ppppplVar8);
            func_0x00010bd2dd34();
          }
        }
      }
    }
    ppppplVar11 = (long *****)&ppplStack_2a8;
    FUN_10bce0514(ppppplVar11);
    return ppppplVar11;
  }
  return ppppplVar12;
}



/* Entry: 10bd2b348; end: 10bd2b46f;  */

long * FUN_10bd2b348(long *param_1,long *param_2)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  long lVar2;
  long unaff_x19;
  long *unaff_x20;
  long alStack_48 [2];
  undefined1 auStack_38 [8];
  
  if (param_2 != param_1) {
    func_0x00010bd2ced8();
    func_0x00010bd2cda8();
    plVar1 = param_1;
    func_0x00010bd2cd98();
    if (plVar1 != (long *)0x0 && plVar1 == param_1) {
      (**(code **)(*unaff_x20 + 0x18))();
      UNRECOVERED_JUMPTABLE = (code *)param_1[4];
      func_0x00010bd2ce44();
                    /* WARNING: Could not recover jumptable at 0x00010bd2b3f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return unaff_x20;
    }
    FUN_10bd2b4f4();
    FUN_10bd2b4f4();
    param_1 = alStack_48;
    FUN_10bd208b4(param_1,auStack_38,&UNK_10f835f8a);
    if (param_1 != (long *)0x0) {
      lVar2 = (long)*(char *)((long)param_1 + 0x17);
      plVar1 = param_1;
      if (lVar2 < 0) {
        plVar1 = (long *)*param_1;
        lVar2 = param_1[1];
      }
      FUN_10bdb2a08(alStack_48,&UNK_10f835fad,0x66,plVar1,lVar2);
      plVar1 = alStack_48;
      FUN_10bd2b470(plVar1,&UNK_10f835fdf);
      func_0x00010ae6c448();
      func_0x00010bd16764();
      FUN_10bd2b4f4();
      lVar2 = *(long *)(unaff_x19 + 8) + 0x18;
      func_0x00010ae6c448(plVar1,lVar2);
      func_0x00010ae6c700(alStack_48);
      func_0x00010bd2ced8();
      _strlen(lVar2);
      func_0x00010bd2ce44();
      func_0x00010ae6bd08();
      return plVar1;
    }
    func_0x00010bd2cecc();
    FUN_10bd2cfc4();
  }
  return param_1;
}


