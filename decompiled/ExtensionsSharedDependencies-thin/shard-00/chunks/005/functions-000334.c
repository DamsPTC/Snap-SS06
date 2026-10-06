/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 0067ce74; end: 0067ce93;  */

void FUN_0067ce74(void)

{
  Hint_Prefetch(0xb28a40,0,0,0);
  Hint_Prefetch(PTR_DAT_00b28a40,0,0,0);
  return;
}



/* Entry: 0067ce94; end: 0067cef7;  */

void FUN_0067ce94(ulong *param_1,long *param_2,uint param_3)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long lVar2;
  long unaff_x22;
  
  func_0x006803bc();
  uVar1 = *(uint *)(param_2 + 2);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x006800dc(*(undefined8 *)(unaff_x20 + 0x18));
      if ((param_3 & 1) != 0) {
        func_0x00680334();
      }
      param_1 = (ulong *)(unaff_x19 + 0x18);
      func_0x006802a8();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      *(undefined1 *)(unaff_x19 + 0x20) = *(undefined1 *)(unaff_x20 + 0x20);
    }
  }
  func_0x006800f0();
  if ((extraout_x8 & 1) != 0) {
    func_0x00680144();
    if ((*param_1 & 1) == 0) {
      func_0x00699010();
    }
    if (0 < (int)((ulong)(param_2[1] - *param_2) >> 4)) {
      func_0x006a5744();
      for (lVar2 = 0; unaff_x22 * 0x10 - lVar2 != 0; lVar2 = lVar2 + 0x10) {
        func_0x006a57c0();
        func_0x006a580c();
      }
    }
    return;
  }
  return;
}



/* Entry: 0067cef8; end: 0067cf37;  */

void FUN_0067cef8(long param_1)

{
  long lVar1;
  ulong *puVar2;
  long lVar3;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x00680498();
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    func_0x00699010();
  }
  else {
    puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
  }
  if (*puVar2 != puVar2[1]) {
    lVar1 = (long)((puVar2[1] - *puVar2) * 0x10000000) >> 0x20;
    lVar3 = lVar1 + 1;
    lVar1 = lVar1 * 0x10;
    do {
      lVar1 = lVar1 + -0x10;
      FUN_006a4904(*puVar2 + lVar1);
      lVar3 = lVar3 + -1;
    } while (1 < lVar3);
    puVar2[1] = *puVar2;
    return;
  }
  return;
}



/* Entry: 0067cf38; end: 0067cf9b;  */

long * FUN_0067cf38(long *param_1,long *param_2,long *param_3,long *param_4)

{
  int *piVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  uint uVar7;
  long unaff_x20;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  func_0x00680024();
  uVar7 = *(uint *)(param_1 + 2);
  if ((uVar7 & 1) != 0) {
    func_0x0067ff44(*(undefined8 *)(unaff_x20 + 0x18));
    param_4 = param_1;
  }
  if ((uVar7 >> 1 & 1) != 0) {
    func_0x0067ff6c();
    param_2 = param_1;
    func_0x00680550();
    func_0x0067ff54();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x0067fe84();
  lVar10 = 0;
  plVar3 = param_1;
  do {
    if ((int)((ulong)(param_1[1] - *param_1) >> 4) <= lVar10) {
      return param_2;
    }
    piVar1 = (int *)(*param_1 + lVar10 * 0x10);
    func_0x006aad90();
    plVar6 = plVar3;
    param_2 = plVar3;
    switch(piVar1[1]) {
    case 0:
      plVar6 = *(long **)(piVar1 + 2);
      uVar4 = (ulong)(uint)(*piVar1 << 3);
      func_0x006aac48(uVar4);
      func_0x00487cf0(plVar6,uVar4);
      param_2 = plVar6;
      break;
    case 1:
      iVar2 = piVar1[2];
      plVar6 = (long *)(ulong)(*piVar1 << 3 | 5);
      func_0x006aac48();
      *(int *)plVar6 = iVar2;
      param_2 = (long *)((long)plVar6 + 4);
      break;
    case 2:
      lVar8 = *(long *)(piVar1 + 2);
      plVar6 = (long *)(ulong)(*piVar1 << 3 | 1);
      func_0x006aac48();
      *plVar6 = lVar8;
      param_2 = plVar6 + 1;
      break;
    case 3:
      iVar2 = *piVar1;
      lVar8 = *(long *)(piVar1 + 2);
      lVar9 = (long)*(char *)(lVar8 + 0x17);
      if ((-1 < lVar9) || (lVar9 = *(long *)(lVar8 + 8), lVar9 < 0x80)) {
        lVar11 = *param_3;
        uVar7 = iVar2 << 3;
        plVar6 = (long *)(ulong)uVar7;
        func_0x00487c84();
        if (lVar9 <= lVar11 + ~((long)plVar3 + (long)(int)plVar6) + 0x10) {
          lVar8 = (long)plVar3 + 2;
          for (uVar7 = uVar7 | 2; 0x7f < uVar7; uVar7 = uVar7 >> 7) {
            *(byte *)(lVar8 + -2) = (byte)uVar7 | 0x80;
            lVar8 = lVar8 + 1;
          }
          *(byte *)(lVar8 + -2) = (byte)uVar7;
          *(char *)(lVar8 + -1) = (char)lVar9;
          func_0x006aaec0();
          _memcpy();
          param_2 = (long *)(lVar8 + lVar9);
          break;
        }
      }
      plVar6 = param_3;
      func_0x0054f030(param_3,iVar2,lVar8,plVar3);
      param_2 = plVar6;
      break;
    case 4:
      uVar4 = (ulong)(*piVar1 << 3 | 3);
      func_0x006aac48(uVar4);
      uVar5 = *(undefined8 *)(piVar1 + 2);
      FUN_006a5a40(uVar5,uVar4,param_3);
      func_0x006aad84();
      plVar6 = (long *)(ulong)(*piVar1 << 3 | 4);
      func_0x00487cbc(plVar6,uVar5);
      param_2 = plVar6;
    }
    lVar10 = lVar10 + 1;
    plVar3 = plVar6;
  } while( true );
}



/* Entry: 0067cf9c; end: 0067cfe7;  */

long FUN_0067cf9c(long param_1,undefined8 param_2,undefined4 *param_3)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) == 0) {
    lVar2 = 0;
  }
  else {
    if ((uVar1 & 1) == 0) {
      lVar2 = 0;
    }
    else {
      func_0x0068019c();
      lVar2 = param_1 + 1;
    }
    lVar2 = lVar2 + ((ulong)uVar1 & 2);
  }
  func_0x00680394();
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    *param_3 = (int)lVar2;
    return lVar2;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    FUN_006a480c();
  }
  else {
    param_1 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8;
  }
  FUN_006a5cc8();
  *param_3 = (int)(param_1 + lVar2);
  return param_1 + lVar2;
}



/* Entry: 0067cfe8; end: 0067d027;  */

long FUN_0067cfe8(long param_1)

{
  func_0x006802c0();
  func_0x00680738();
  func_0x00532f74(param_1 + 0x38);
  func_0x00532f74(param_1 + 0x40);
  FUN_0067ec24(param_1 + 0x18);
  return param_1;
}



/* Entry: 0067d028; end: 0067d02b;  */

long FUN_0067d028(long param_1)

{
  func_0x006802c0();
  func_0x00680738();
  func_0x00532f74(param_1 + 0x38);
  func_0x00532f74(param_1 + 0x40);
  FUN_0067ec24(param_1 + 0x18);
  return param_1;
}



/* Entry: 0067d02c; end: 0067d03f;  */

void FUN_0067d02c(void)

{
  FUN_0067cfe8();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0067d040; end: 0067d04b;  */

void FUN_0067d040(void)

{
  Hint_Prefetch(0xb28b48,0,0,0);
  Hint_Prefetch(PTR_DAT_00b28b48,0,0,0);
  return;
}



/* Entry: 0067d04c; end: 0067d17b;  */

bool FUN_0067d04c(ulong param_1)

{
  int iVar1;
  char in_NG;
  char in_OV;
  
  iVar1 = *(int *)(param_1 + 0x20);
  do {
    func_0x00680670();
    if (in_NG != in_OV) break;
    func_0x00680920();
    func_0x0067ce80();
  } while ((param_1 & 1) != 0);
  return iVar1 + 1 < 1;
}



/* Entry: 0067d17c; end: 0067d1f7;  */

void FUN_0067d17c(void)

{
  uint uVar1;
  char in_NG;
  char in_OV;
  ulong extraout_x8;
  long lVar2;
  ulong *unaff_x19;
  long lVar3;
  
  func_0x006805bc();
  if (in_NG == in_OV) {
    func_0x006806c0();
  }
  uVar1 = (uint)unaff_x19[2];
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00680688();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_006773ec(unaff_x19[7]);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      FUN_006773ec(unaff_x19[8]);
    }
  }
  if ((uVar1 & 0x38) != 0) {
    unaff_x19[9] = 0;
    unaff_x19[10] = 0;
    unaff_x19[0xb] = 0;
  }
  func_0x00680478();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    func_0x00699010();
  }
  else {
    unaff_x19 = (ulong *)((*unaff_x19 & 0xfffffffffffffffe) + 8);
  }
  if (*unaff_x19 == unaff_x19[1]) {
    return;
  }
  lVar2 = (long)((unaff_x19[1] - *unaff_x19) * 0x10000000) >> 0x20;
  lVar3 = lVar2 + 1;
  lVar2 = lVar2 * 0x10;
  do {
    lVar2 = lVar2 + -0x10;
    FUN_006a4904(*unaff_x19 + lVar2);
    lVar3 = lVar3 + -1;
  } while (1 < lVar3);
  unaff_x19[1] = *unaff_x19;
  return;
}



/* Entry: 0067d1f8; end: 0067d3c7;  */

/* WARNING: Type propagation algorithm not settling */

dword * FUN_0067d1f8(dword *param_1,dword *param_2,dword *param_3,dword *param_4)

{
  int *piVar1;
  int iVar2;
  dword dVar3;
  dword *pdVar4;
  dword *pdVar5;
  ulong uVar6;
  undefined8 uVar7;
  dword *pdVar8;
  uint uVar9;
  long unaff_x20;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  
  func_0x00680024();
  lVar13 = *(long *)(param_1 + 8);
  while ((int)lVar13 != 0) {
    func_0x0067fd70();
    param_1 = (dword *)((long)&MACH_HEADER.magic + 2);
    func_0x00680280();
    func_0x0068046c();
  }
  uVar9 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar9 & 1) != 0) {
    func_0x00680174(*(undefined8 *)(unaff_x20 + 0x30));
    param_4 = param_1;
  }
  pdVar4 = param_1;
  if ((uVar9 >> 3 & 1) != 0) {
    func_0x0067ff6c();
    param_4 = *(dword **)(unaff_x20 + 0x48);
    func_0x00680634();
    func_0x00487cf0(param_4,param_1);
    pdVar4 = param_4;
    param_2 = param_1;
  }
  if ((uVar9 >> 4 & 1) != 0) {
    param_2 = *(dword **)(unaff_x20 + 0x50);
    func_0x0068059c();
    func_0x00438480();
    param_4 = pdVar4;
  }
  pdVar5 = pdVar4;
  if ((uVar9 >> 5 & 1) != 0) {
    func_0x0067ff6c();
    lVar13 = *(long *)(unaff_x20 + 0x58);
    pdVar5 = (dword *)(segment_command_00000020.segname + 9);
    func_0x00487cbc(0x31,pdVar4);
    param_4 = pdVar5 + 2;
    *(long *)pdVar5 = lVar13;
    param_2 = pdVar4;
  }
  if ((uVar9 >> 1 & 1) != 0) {
    func_0x00680328(*(undefined8 *)(unaff_x20 + 0x38));
    param_2 = (dword *)((long)&MACH_HEADER.cputype + 3);
    FUN_00435e9c();
    param_4 = pdVar5;
  }
  if ((uVar9 >> 2 & 1) != 0) {
    func_0x00680328(*(undefined8 *)(unaff_x20 + 0x40));
    param_2 = &MACH_HEADER.cpusubtype;
    FUN_00435e9c();
    param_4 = pdVar5;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x0067fe84();
  lVar13 = 0;
  pdVar4 = pdVar5;
  do {
    if ((int)((ulong)(*(long *)(pdVar5 + 2) - *(long *)pdVar5) >> 4) <= lVar13) {
      return param_2;
    }
    piVar1 = (int *)(*(long *)pdVar5 + lVar13 * 0x10);
    func_0x006aad90();
    pdVar8 = pdVar4;
    param_2 = pdVar4;
    switch(piVar1[1]) {
    case 0:
      pdVar8 = *(dword **)(piVar1 + 2);
      uVar6 = (ulong)(uint)(*piVar1 << 3);
      func_0x006aac48(uVar6);
      func_0x00487cf0(pdVar8,uVar6);
      param_2 = pdVar8;
      break;
    case 1:
      dVar3 = piVar1[2];
      pdVar8 = (dword *)(ulong)(*piVar1 << 3 | 5);
      func_0x006aac48();
      *pdVar8 = dVar3;
      param_2 = pdVar8 + 1;
      break;
    case 2:
      lVar11 = *(long *)(piVar1 + 2);
      pdVar8 = (dword *)(ulong)(*piVar1 << 3 | 1);
      func_0x006aac48();
      *(long *)pdVar8 = lVar11;
      param_2 = pdVar8 + 2;
      break;
    case 3:
      iVar2 = *piVar1;
      lVar11 = *(long *)(piVar1 + 2);
      lVar12 = (long)*(char *)(lVar11 + 0x17);
      if ((-1 < lVar12) || (lVar12 = *(long *)(lVar11 + 8), lVar12 < 0x80)) {
        lVar14 = *(long *)param_3;
        uVar9 = iVar2 << 3;
        pdVar8 = (dword *)(ulong)uVar9;
        func_0x00487c84();
        if (lVar12 <= lVar14 + ~((long)pdVar4 + (long)(int)pdVar8) + 0x10) {
          puVar10 = (undefined1 *)((long)pdVar4 + 2);
          for (uVar9 = uVar9 | 2; 0x7f < uVar9; uVar9 = uVar9 >> 7) {
            puVar10[-2] = (byte)uVar9 | 0x80;
            puVar10 = puVar10 + 1;
          }
          puVar10[-2] = (byte)uVar9;
          puVar10[-1] = (char)lVar12;
          func_0x006aaec0();
          _memcpy();
          param_2 = (dword *)(puVar10 + lVar12);
          break;
        }
      }
      pdVar8 = param_3;
      func_0x0054f030(param_3,iVar2,lVar11,pdVar4);
      param_2 = pdVar8;
      break;
    case 4:
      uVar6 = (ulong)(*piVar1 << 3 | 3);
      func_0x006aac48(uVar6);
      uVar7 = *(undefined8 *)(piVar1 + 2);
      FUN_006a5a40(uVar7,uVar6,param_3);
      func_0x006aad84();
      pdVar8 = (dword *)(ulong)(*piVar1 << 3 | 4);
      func_0x00487cbc(pdVar8,uVar7);
      param_2 = pdVar8;
    }
    lVar13 = lVar13 + 1;
    pdVar4 = pdVar8;
  } while( true );
}



/* Entry: 0067d3c8; end: 0067d3df;  */

void FUN_0067d3c8(long *param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long *unaff_x19;
  int unaff_w20;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *unaff_x25;
  long unaff_x26;
  
  if (*(int *)(param_2 + 8) == 0) {
    return;
  }
  FUN_0054d5a8();
  plVar2 = param_1;
  func_0x0054d67c();
  func_0x0054d6a8();
  puVar4 = unaff_x25;
  if (0 < (int)plVar2) {
    func_0x0054d6b0();
    param_1 = param_1 + (int)plVar2;
    puVar4 = unaff_x25 + (int)plVar2;
  }
  lVar3 = unaff_x19[2];
  for (; iVar1 = (int)plVar2, puVar4 < unaff_x25 + unaff_x26; puVar4 = puVar4 + 1) {
    plVar2 = (long *)lVar3;
    FUN_0067fbcc(lVar3,*puVar4);
    *param_1 = (long)plVar2;
    param_1 = param_1 + 1;
  }
  func_0x0054d60c();
  if (iVar1 < unaff_w20) {
    *(int *)(*unaff_x19 + -1) = unaff_w20;
  }
  return;
}



/* Entry: 0067d3e0; end: 0067d447;  */

void FUN_0067d3e0(void)

{
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x0067ffd4();
  func_0x0068048c(&PTR_FUN_00a0e138);
  if ((extraout_x8 & 1) != 0) {
    func_0x0067ff60();
  }
  *(undefined8 *)(unaff_x19 + 0x10) = unaff_x21;
  *(undefined4 *)(unaff_x19 + 0x18) = 0;
  *(undefined8 *)(unaff_x19 + 0x20) = 0;
  *(undefined4 *)(unaff_x19 + 0x28) = *(undefined4 *)(unaff_x20 + 0x28);
  *(undefined4 *)(unaff_x19 + 0x2c) = 0;
  FUN_00534b28();
  uVar2 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(unaff_x19 + 0x40) = *(undefined8 *)(unaff_x20 + 0x40);
  *(undefined8 *)(unaff_x19 + 0x38) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x30) = uVar1;
  return;
}



/* Entry: 0067d448; end: 0067d473;  */

long FUN_0067d448(long param_1)

{
  func_0x006802c0();
  FUN_005338d0(param_1 + 0x10);
  return param_1;
}



/* Entry: 0067d474; end: 0067d477;  */

long FUN_0067d474(long param_1)

{
  func_0x006802c0();
  FUN_005338d0(param_1 + 0x10);
  return param_1;
}



/* Entry: 0067d478; end: 0067d48b;  */

void FUN_0067d478(void)

{
  FUN_0067d448();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0067d48c; end: 0067d4a7;  */

void FUN_0067d48c(void)

{
  Hint_Prefetch(0xb28d00,0,0,0);
  Hint_Prefetch(PTR_DAT_00b28d00,0,0,0);
  return;
}



/* Entry: 0067d4a8; end: 0067d55f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_0067d4a8(undefined8 param_1,long param_2)

{
  uint uVar1;
  ulong *puVar2;
  undefined **ppuVar3;
  long unaff_x19;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  func_0x006803bc();
  uVar1 = *(uint *)(param_2 + 0x28);
  if ((uVar1 & 0x3f) != 0) {
    if ((uVar1 & 1) != 0) {
      *(undefined4 *)(unaff_x19 + 0x30) = *(undefined4 *)(unaff_x20 + 0x30);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      *(undefined4 *)(unaff_x19 + 0x34) = *(undefined4 *)(unaff_x20 + 0x34);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      *(undefined4 *)(unaff_x19 + 0x38) = *(undefined4 *)(unaff_x20 + 0x38);
    }
    if ((uVar1 >> 3 & 1) != 0) {
      *(undefined4 *)(unaff_x19 + 0x3c) = *(undefined4 *)(unaff_x20 + 0x3c);
    }
    if ((uVar1 >> 4 & 1) != 0) {
      *(undefined4 *)(unaff_x19 + 0x40) = *(undefined4 *)(unaff_x20 + 0x40);
    }
    if ((uVar1 >> 5 & 1) != 0) {
      *(undefined4 *)(unaff_x19 + 0x44) = *(undefined4 *)(unaff_x20 + 0x44);
    }
  }
  *(uint *)(unaff_x19 + 0x28) = *(uint *)(unaff_x19 + 0x28) | uVar1;
  ppuVar3 = &PTR_PTR_00b25a18;
  puVar2 = (ulong *)(unaff_x19 + 0x10);
  FUN_00534b28(puVar2,&PTR_PTR_00b25a18,unaff_x20 + 0x10);
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00680144();
    if ((*puVar2 & 1) == 0) {
      func_0x00699010();
    }
    if (0 < (int)((ulong)((long)ppuVar3[1] - (long)*ppuVar3) >> 4)) {
      func_0x006a5744();
      for (lVar4 = 0; unaff_x22 * 0x10 - lVar4 != 0; lVar4 = lVar4 + 0x10) {
        func_0x006a57c0();
        func_0x006a580c();
      }
    }
    return;
  }
  return;
}



/* Entry: 0067d560; end: 0067d66f;  */

/* WARNING: Type propagation algorithm not settling */

char * FUN_0067d560(void)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  ulong uVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined **ppuVar8;
  char *pcVar9;
  uint uVar10;
  ulong extraout_x8;
  long unaff_x20;
  uint unaff_w22;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  
  func_0x0068009c();
  if ((unaff_w22 & 1) != 0) {
    func_0x0067ff38();
    func_0x0068063c();
    func_0x0067ffb8();
  }
  if ((unaff_w22 >> 1 & 1) != 0) {
    func_0x0067ff38();
    func_0x00680550();
    func_0x0067ffb8();
  }
  if ((unaff_w22 >> 2 & 1) != 0) {
    func_0x0067ff38();
    func_0x00680464();
    func_0x0067ffb8();
  }
  if ((unaff_w22 >> 3 & 1) != 0) {
    func_0x0067ff38();
    func_0x00680634();
    func_0x0067ffb8();
  }
  if ((unaff_w22 >> 4 & 1) != 0) {
    func_0x0067ff38();
    func_0x006804e0();
    func_0x0067ffb8();
  }
  if ((unaff_w22 >> 5 & 1) != 0) {
    func_0x0067ff38();
    func_0x00680654();
    func_0x0067ffb8();
  }
  ppuVar8 = &PTR_PTR_00b25a18;
  pcVar3 = (char *)(unaff_x20 + 0x10);
  pcVar9 = section_000003d8.segname;
  func_0x00547798(pcVar3,&PTR_PTR_00b25a18,1000,&UNK_00002711);
  func_0x00680500();
  if ((extraout_x8 & 1) == 0) {
    return (char *)ppuVar8;
  }
  func_0x006801a8();
  lVar13 = 0;
  pcVar4 = pcVar3;
  do {
    if ((int)((ulong)((long)*(undefined **)(pcVar3 + 8) - (long)*(undefined **)pcVar3) >> 4) <=
        lVar13) {
      return (char *)ppuVar8;
    }
    piVar1 = (int *)(*(undefined **)pcVar3 + lVar13 * 0x10);
    func_0x006aad90();
    pcVar7 = pcVar4;
    ppuVar8 = (undefined **)pcVar4;
    switch(piVar1[1]) {
    case 0:
      pcVar7 = *(char **)(piVar1 + 2);
      uVar5 = (ulong)(uint)(*piVar1 << 3);
      func_0x006aac48(uVar5);
      func_0x00487cf0(pcVar7,uVar5);
      ppuVar8 = (undefined **)pcVar7;
      break;
    case 1:
      iVar2 = piVar1[2];
      pcVar7 = (char *)(ulong)(*piVar1 << 3 | 5);
      func_0x006aac48();
      *(int *)pcVar7 = iVar2;
      ppuVar8 = (undefined **)(pcVar7 + 4);
      break;
    case 2:
      puVar14 = *(undefined **)(piVar1 + 2);
      pcVar7 = (char *)(ulong)(*piVar1 << 3 | 1);
      func_0x006aac48();
      *(undefined **)pcVar7 = puVar14;
      ppuVar8 = (undefined **)(pcVar7 + 8);
      break;
    case 3:
      iVar2 = *piVar1;
      lVar11 = *(long *)(piVar1 + 2);
      lVar12 = (long)*(char *)(lVar11 + 0x17);
      if ((-1 < lVar12) || (lVar12 = *(long *)(lVar11 + 8), lVar12 < 0x80)) {
        puVar14 = *(undefined **)pcVar9;
        uVar10 = iVar2 << 3;
        pcVar7 = (char *)(ulong)uVar10;
        func_0x00487c84();
        if (lVar12 <= (long)(puVar14 + ~(ulong)(pcVar4 + (int)pcVar7) + 0x10)) {
          pcVar4 = pcVar4 + 2;
          for (uVar10 = uVar10 | 2; 0x7f < uVar10; uVar10 = uVar10 >> 7) {
            pcVar4[-2] = (byte)uVar10 | 0x80;
            pcVar4 = pcVar4 + 1;
          }
          pcVar4[-2] = (byte)uVar10;
          pcVar4[-1] = (char)lVar12;
          func_0x006aaec0();
          _memcpy();
          ppuVar8 = (undefined **)(pcVar4 + lVar12);
          break;
        }
      }
      pcVar7 = pcVar9;
      func_0x0054f030(pcVar9,iVar2,lVar11,pcVar4);
      ppuVar8 = (undefined **)pcVar7;
      break;
    case 4:
      uVar5 = (ulong)(*piVar1 << 3 | 3);
      func_0x006aac48(uVar5);
      uVar6 = *(undefined8 *)(piVar1 + 2);
      FUN_006a5a40(uVar6,uVar5,pcVar9);
      func_0x006aad84();
      pcVar7 = (char *)(ulong)(*piVar1 << 3 | 4);
      func_0x00487cbc(pcVar7,uVar6);
      ppuVar8 = (undefined **)pcVar7;
    }
    lVar13 = lVar13 + 1;
    pcVar4 = pcVar7;
  } while( true );
}



/* Entry: 0067d670; end: 0067d78b;  */

/* WARNING: Type propagation algorithm not settling */

long FUN_0067d670(long param_1)

{
  undefined4 *puVar1;
  long extraout_x8;
  uint extraout_w9;
  uint extraout_w9_00;
  uint extraout_w9_01;
  uint extraout_w9_02;
  uint extraout_w9_03;
  uint uVar2;
  long unaff_x19;
  
  func_0x00680154();
  uVar2 = *(uint *)(unaff_x19 + 0x28);
  if ((uVar2 & 0x3f) != 0) {
    if ((uVar2 & 1) != 0) {
      func_0x00680034(0xfffffff7);
      uVar2 = extraout_w9;
    }
    if ((uVar2 >> 1 & 1) != 0) {
      func_0x00680034();
      uVar2 = extraout_w9_00;
    }
    if ((uVar2 >> 2 & 1) != 0) {
      func_0x00680034();
      uVar2 = extraout_w9_01;
    }
    if ((uVar2 >> 3 & 1) != 0) {
      func_0x00680034();
      uVar2 = extraout_w9_02;
    }
    if ((uVar2 >> 4 & 1) != 0) {
      func_0x00680034();
      uVar2 = extraout_w9_03;
    }
    if ((uVar2 >> 5 & 1) != 0) {
      func_0x00680564();
      param_1 = param_1 + extraout_x8 + 1;
    }
  }
  puVar1 = (undefined4 *)(unaff_x19 + 0x2c);
  if ((*(byte *)(unaff_x19 + 8) & 1) != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) == 0) {
      FUN_006a480c();
    }
    else {
      unaff_x19 = (*(ulong *)(unaff_x19 + 8) & 0xfffffffffffffffe) + 8;
    }
    FUN_006a5cc8();
    *puVar1 = (int)(unaff_x19 + param_1);
    return unaff_x19 + param_1;
  }
  *puVar1 = (int)param_1;
  return param_1;
}



/* Entry: 0067d78c; end: 0067d7b7;  */

undefined8 FUN_0067d78c(undefined8 param_1)

{
  func_0x006802c0();
  FUN_0067d7b8(param_1);
  return param_1;
}



/* Entry: 0067d7b8; end: 0067d7ef;  */

void FUN_0067d7b8(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_0067d448();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_0067d448();
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0067d7f0; end: 0067d7f3;  */

undefined8 FUN_0067d7f0(undefined8 param_1)

{
  func_0x006802c0();
  FUN_0067d7b8(param_1);
  return param_1;
}



/* Entry: 0067d7f4; end: 0067d807;  */

void FUN_0067d7f4(void)

{
  FUN_0067d78c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0067d808; end: 0067d813;  */

void FUN_0067d808(void)

{
  Hint_Prefetch(0xb28e90,0,0,0);
  Hint_Prefetch(PTR_DAT_00b28e90,0,0,0);
  return;
}



/* Entry: 0067d814; end: 0067d857;  */

void FUN_0067d814(long param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 & 1) != 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
    func_0x0067d498();
    if (iVar1 == 0) {
      return;
    }
    uVar2 = *(uint *)(param_1 + 0x10);
  }
  if ((uVar2 >> 1 & 1) != 0) {
    func_0x0067d498();
  }
  return;
}



/* Entry: 0067d858; end: 0067d8ff;  */

void FUN_0067d858(ulong *param_1,long *param_2)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  long lVar2;
  ulong unaff_x22;
  
  func_0x0067ff18();
  if ((unaff_x22 & 1) != 0) {
    func_0x00680400();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x18);
      param_2 = *(long **)(unaff_x20 + 0x18);
      if (param_1 == (ulong *)0x0) {
        func_0x006803ac();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_0067d4a8();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x20);
      param_2 = *(long **)(unaff_x20 + 0x20);
      if (param_1 == (ulong *)0x0) {
        func_0x006803ac();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        FUN_0067d4a8();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      *(undefined4 *)(unaff_x21 + 0x28) = *(undefined4 *)(unaff_x20 + 0x28);
    }
  }
  func_0x0067fff4();
  if ((extraout_x8 & 1) != 0) {
    func_0x00680064();
    if ((*param_1 & 1) == 0) {
      func_0x00699010();
    }
    if (0 < (int)((ulong)(param_2[1] - *param_2) >> 4)) {
      func_0x006a5744();
      for (lVar2 = 0; unaff_x22 * 0x10 - lVar2 != 0; lVar2 = lVar2 + 0x10) {
        func_0x006a57c0();
        func_0x006a580c();
      }
    }
    return;
  }
  return;
}



/* Entry: 0067d900; end: 0067d94b;  */

void FUN_0067d900(void)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  long lVar1;
  ulong *unaff_x19;
  uint unaff_w20;
  long lVar2;
  
  func_0x006803d8();
  if (!(bool)in_ZR) {
    if ((unaff_w20 & 1) != 0) {
      FUN_00678b18(unaff_x19[3]);
    }
    if ((unaff_w20 >> 1 & 1) != 0) {
      FUN_00678b18(unaff_x19[4]);
    }
  }
  func_0x00680558();
  *(undefined4 *)(unaff_x19 + 1) = 0;
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    func_0x00699010();
  }
  else {
    unaff_x19 = (ulong *)((*unaff_x19 & 0xfffffffffffffffe) + 8);
  }
  if (*unaff_x19 != unaff_x19[1]) {
    lVar1 = (long)((unaff_x19[1] - *unaff_x19) * 0x10000000) >> 0x20;
    lVar2 = lVar1 + 1;
    lVar1 = lVar1 * 0x10;
    do {
      lVar1 = lVar1 + -0x10;
      FUN_006a4904(*unaff_x19 + lVar1);
      lVar2 = lVar2 + -1;
    } while (1 < lVar2);
    unaff_x19[1] = *unaff_x19;
    return;
  }
  return;
}



/* Entry: 0067d94c; end: 0067da4f;  */

dword * FUN_0067d94c(dword *param_1,dword *param_2,dword *param_3,dword *param_4)

{
  int *piVar1;
  int iVar2;
  dword dVar3;
  dword *pdVar4;
  ulong uVar5;
  undefined8 uVar6;
  dword *pdVar7;
  uint uVar8;
  long unaff_x20;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  func_0x00680024();
  uVar8 = param_1[4];
  if ((uVar8 >> 2 & 1) != 0) {
    func_0x0067ff6c();
    param_2 = param_1;
    func_0x00680464();
    func_0x0067ffb8();
    param_4 = param_1;
  }
  if ((uVar8 & 1) != 0) {
    param_2 = *(dword **)(unaff_x20 + 0x18);
    param_3 = (dword *)(ulong)param_2[0xb];
    param_1 = &MACH_HEADER.cputype;
    func_0x00680280();
    param_4 = param_1;
  }
  if ((uVar8 >> 1 & 1) != 0) {
    param_2 = *(dword **)(unaff_x20 + 0x20);
    param_3 = (dword *)(ulong)param_2[0xb];
    param_1 = (dword *)((long)&MACH_HEADER.cputype + 1);
    func_0x00680280();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x0067fe84();
  lVar12 = 0;
  pdVar4 = param_1;
  do {
    if ((int)((ulong)(*(long *)(param_1 + 2) - *(long *)param_1) >> 4) <= lVar12) {
      return param_2;
    }
    piVar1 = (int *)(*(long *)param_1 + lVar12 * 0x10);
    func_0x006aad90();
    pdVar7 = pdVar4;
    param_2 = pdVar4;
    switch(piVar1[1]) {
    case 0:
      pdVar7 = *(dword **)(piVar1 + 2);
      uVar5 = (ulong)(uint)(*piVar1 << 3);
      func_0x006aac48(uVar5);
      func_0x00487cf0(pdVar7,uVar5);
      param_2 = pdVar7;
      break;
    case 1:
      dVar3 = piVar1[2];
      pdVar7 = (dword *)(ulong)(*piVar1 << 3 | 5);
      func_0x006aac48();
      *pdVar7 = dVar3;
      param_2 = pdVar7 + 1;
      break;
    case 2:
      lVar10 = *(long *)(piVar1 + 2);
      pdVar7 = (dword *)(ulong)(*piVar1 << 3 | 1);
      func_0x006aac48();
      *(long *)pdVar7 = lVar10;
      param_2 = pdVar7 + 2;
      break;
    case 3:
      iVar2 = *piVar1;
      lVar10 = *(long *)(piVar1 + 2);
      lVar11 = (long)*(char *)(lVar10 + 0x17);
      if ((-1 < lVar11) || (lVar11 = *(long *)(lVar10 + 8), lVar11 < 0x80)) {
        lVar13 = *(long *)param_3;
        uVar8 = iVar2 << 3;
        pdVar7 = (dword *)(ulong)uVar8;
        func_0x00487c84();
        if (lVar11 <= lVar13 + ~((long)pdVar4 + (long)(int)pdVar7) + 0x10) {
          puVar9 = (undefined1 *)((long)pdVar4 + 2);
          for (uVar8 = uVar8 | 2; 0x7f < uVar8; uVar8 = uVar8 >> 7) {
            puVar9[-2] = (byte)uVar8 | 0x80;
            puVar9 = puVar9 + 1;
          }
          puVar9[-2] = (byte)uVar8;
          puVar9[-1] = (char)lVar11;
          func_0x006aaec0();
          _memcpy();
          param_2 = (dword *)(puVar9 + lVar11);
          break;
        }
      }
      pdVar7 = param_3;
      func_0x0054f030(param_3,iVar2,lVar10,pdVar4);
      param_2 = pdVar7;
      break;
    case 4:
      uVar5 = (ulong)(*piVar1 << 3 | 3);
      func_0x006aac48(uVar5);
      uVar6 = *(undefined8 *)(piVar1 + 2);
      FUN_006a5a40(uVar6,uVar5,param_3);
      func_0x006aad84();
      pdVar7 = (dword *)(ulong)(*piVar1 << 3 | 4);
      func_0x00487cbc(pdVar7,uVar6);
      param_2 = pdVar7;
    }
    lVar12 = lVar12 + 1;
    pdVar4 = pdVar7;
  } while( true );
}



/* Entry: 0067da50; end: 0067da7b;  */

long FUN_0067da50(long param_1)

{
  func_0x006802c0();
  FUN_0067ec4c(param_1 + 0x18);
  return param_1;
}



/* Entry: 0067da7c; end: 0067da7f;  */

long FUN_0067da7c(long param_1)

{
  func_0x006802c0();
  FUN_0067ec4c(param_1 + 0x18);
  return param_1;
}



/* Entry: 0067da80; end: 0067da93;  */

void FUN_0067da80(void)

{
  FUN_0067da50();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0067da94; end: 0067da9f;  */

void FUN_0067da94(void)

{
  Hint_Prefetch(0xb28fa0,0,0,0);
  Hint_Prefetch(PTR_DAT_00b28fa0,0,0,0);
  return;
}



/* Entry: 0067daa0; end: 0067dae3;  */

void FUN_0067daa0(uint param_1)

{
  char in_NG;
  char in_OV;
  
  do {
    func_0x006807f4();
    if (in_NG != in_OV) break;
    func_0x0067ff98();
    FUN_0067d814();
  } while ((param_1 & 1) != 0);
  func_0x006807e8();
  return;
}



/* Entry: 0067dae4; end: 0067db87;  */

void FUN_0067dae4(ulong *param_1,long *param_2)

{
  uint uVar1;
  long unaff_x19;
  long unaff_x20;
  long lVar2;
  long unaff_x22;
  
  func_0x00680370();
  FUN_0067dcac();
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      *(undefined4 *)(unaff_x19 + 0x30) = *(undefined4 *)(unaff_x20 + 0x30);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      *(undefined4 *)(unaff_x19 + 0x34) = *(undefined4 *)(unaff_x20 + 0x34);
    }
  }
  *(uint *)(unaff_x19 + 0x10) = *(uint *)(unaff_x19 + 0x10) | uVar1;
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00680144();
    if ((*param_1 & 1) == 0) {
      func_0x00699010();
    }
    if (0 < (int)((ulong)(param_2[1] - *param_2) >> 4)) {
      func_0x006a5744();
      for (lVar2 = 0; unaff_x22 * 0x10 - lVar2 != 0; lVar2 = lVar2 + 0x10) {
        func_0x006a57c0();
        func_0x006a580c();
      }
    }
    return;
  }
  return;
}



/* Entry: 0067db88; end: 0067dcab;  */

long * FUN_0067db88(long *param_1,long *param_2,long *param_3,long *param_4)

{
  int *piVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  uint uVar7;
  long unaff_x20;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  func_0x00680024();
  lVar10 = param_1[4];
  while ((int)lVar10 != 0) {
    func_0x0067fd70();
    param_1 = (long *)((long)&MACH_HEADER.magic + 1);
    func_0x00680280();
    func_0x0068046c();
  }
  uVar7 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar7 & 1) != 0) {
    func_0x0067ff6c();
    param_2 = param_1;
    func_0x00680634();
    func_0x0067ffb8();
    param_4 = param_1;
  }
  if ((uVar7 >> 1 & 1) != 0) {
    func_0x0067ff6c();
    param_2 = param_1;
    func_0x006804e0();
    func_0x0067ffb8();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x0067fe84();
  lVar10 = 0;
  plVar3 = param_1;
  do {
    if ((int)((ulong)(param_1[1] - *param_1) >> 4) <= lVar10) {
      return param_2;
    }
    piVar1 = (int *)(*param_1 + lVar10 * 0x10);
    func_0x006aad90();
    plVar6 = plVar3;
    param_2 = plVar3;
    switch(piVar1[1]) {
    case 0:
      plVar6 = *(long **)(piVar1 + 2);
      uVar4 = (ulong)(uint)(*piVar1 << 3);
      func_0x006aac48(uVar4);
      func_0x00487cf0(plVar6,uVar4);
      param_2 = plVar6;
      break;
    case 1:
      iVar2 = piVar1[2];
      plVar6 = (long *)(ulong)(*piVar1 << 3 | 5);
      func_0x006aac48();
      *(int *)plVar6 = iVar2;
      param_2 = (long *)((long)plVar6 + 4);
      break;
    case 2:
      lVar8 = *(long *)(piVar1 + 2);
      plVar6 = (long *)(ulong)(*piVar1 << 3 | 1);
      func_0x006aac48();
      *plVar6 = lVar8;
      param_2 = plVar6 + 1;
      break;
    case 3:
      iVar2 = *piVar1;
      lVar8 = *(long *)(piVar1 + 2);
      lVar9 = (long)*(char *)(lVar8 + 0x17);
      if ((-1 < lVar9) || (lVar9 = *(long *)(lVar8 + 8), lVar9 < 0x80)) {
        lVar11 = *param_3;
        uVar7 = iVar2 << 3;
        plVar6 = (long *)(ulong)uVar7;
        func_0x00487c84();
        if (lVar9 <= lVar11 + ~((long)plVar3 + (long)(int)plVar6) + 0x10) {
          lVar8 = (long)plVar3 + 2;
          for (uVar7 = uVar7 | 2; 0x7f < uVar7; uVar7 = uVar7 >> 7) {
            *(byte *)(lVar8 + -2) = (byte)uVar7 | 0x80;
            lVar8 = lVar8 + 1;
          }
          *(byte *)(lVar8 + -2) = (byte)uVar7;
          *(char *)(lVar8 + -1) = (char)lVar9;
          func_0x006aaec0();
          _memcpy();
          param_2 = (long *)(lVar8 + lVar9);
          break;
        }
      }
      plVar6 = param_3;
      func_0x0054f030(param_3,iVar2,lVar8,plVar3);
      param_2 = plVar6;
      break;
    case 4:
      uVar4 = (ulong)(*piVar1 << 3 | 3);
      func_0x006aac48(uVar4);
      uVar5 = *(undefined8 *)(piVar1 + 2);
      FUN_006a5a40(uVar5,uVar4,param_3);
      func_0x006aad84();
      plVar6 = (long *)(ulong)(*piVar1 << 3 | 4);
      func_0x00487cbc(plVar6,uVar5);
      param_2 = plVar6;
    }
    lVar10 = lVar10 + 1;
    plVar3 = plVar6;
  } while( true );
}



/* Entry: 0067dcac; end: 0067dcbb;  */

void FUN_0067dcac(long *param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long *unaff_x19;
  int unaff_w20;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *unaff_x25;
  long unaff_x26;
  
  if (*(int *)(param_2 + 8) == 0) {
    return;
  }
  FUN_0054d5a8();
  plVar2 = param_1;
  func_0x0054d67c();
  func_0x0054d6a8();
  puVar4 = unaff_x25;
  if (0 < (int)plVar2) {
    func_0x0054d6b0();
    param_1 = param_1 + (int)plVar2;
    puVar4 = unaff_x25 + (int)plVar2;
  }
  lVar3 = unaff_x19[2];
  for (; iVar1 = (int)plVar2, puVar4 < unaff_x25 + unaff_x26; puVar4 = puVar4 + 1) {
    plVar2 = (long *)lVar3;
    FUN_0067fc34(lVar3,*puVar4);
    *param_1 = (long)plVar2;
    param_1 = param_1 + 1;
  }
  func_0x0054d60c();
  if (iVar1 < unaff_w20) {
    *(int *)(*unaff_x19 + -1) = unaff_w20;
  }
  return;
}



/* Entry: 0067dcbc; end: 0067dce7;  */

undefined8 * FUN_0067dcbc(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_00a0dff8;
  param_1[1] = param_2;
  FUN_0067dce8();
  return param_1;
}



/* Entry: 0067dce8; end: 0067dd13;  */

void FUN_0067dce8(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = param_2;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = param_2;
  *(undefined **)(param_1 + 0x60) = &DAT_00b69408;
  *(undefined **)(param_1 + 0x68) = &DAT_00b69408;
  return;
}



/* Entry: 0067dd14; end: 0067ddb3;  */

void FUN_0067dd14(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong extraout_x8;
  long unaff_x19;
  
  func_0x006803bc();
  *(undefined8 *)(param_1 + 8) = param_2;
  func_0x0068048c(&PTR_FUN_00a0dff8);
  if ((extraout_x8 & 1) != 0) {
    func_0x0067ff60();
  }
  func_0x006807ac();
  FUN_0048ece4();
  *(undefined4 *)(unaff_x19 + 0x28) = 0;
  FUN_0048ece4(unaff_x19 + 0x30);
  *(undefined4 *)(unaff_x19 + 0x40) = 0;
  func_0x00680690();
  lVar1 = param_3 + 0x60;
  func_0x00680348();
  *(long *)(unaff_x19 + 0x60) = lVar1;
  param_3 = param_3 + 0x68;
  func_0x00680348();
  *(long *)(unaff_x19 + 0x68) = param_3;
  return;
}



/* Entry: 0067ddb4; end: 0067ddf3;  */

long FUN_0067ddb4(long param_1)

{
  func_0x006802c0();
  func_0x00680890();
  func_0x00532f74(param_1 + 0x68);
  func_0x006806a0();
  FUN_0048ed64(param_1 + 0x30);
  func_0x00680848();
  return param_1;
}



/* Entry: 0067ddf4; end: 0067ddf7;  */

long FUN_0067ddf4(long param_1)

{
  func_0x006802c0();
  func_0x00680890();
  func_0x00532f74(param_1 + 0x68);
  func_0x006806a0();
  FUN_0048ed64(param_1 + 0x30);
  func_0x00680848();
  return param_1;
}



/* Entry: 0067ddf8; end: 0067de0b;  */

void FUN_0067ddf8(void)

{
  FUN_0067ddb4();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0067de0c; end: 0067de17;  */

void FUN_0067de0c(void)

{
  Hint_Prefetch(0xb29090,0,0,0);
  Hint_Prefetch(PTR_DAT_00b29090,0,0,0);
  return;
}



/* Entry: 0067de18; end: 0067deaf;  */

void FUN_0067de18(undefined8 param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  ulong *puVar2;
  long *plVar3;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  func_0x00680370();
  FUN_0048ebf4();
  FUN_0048ebf4(unaff_x19 + 0x30,unaff_x20 + 0x30);
  puVar2 = (ulong *)(unaff_x19 + 0x48);
  plVar3 = (long *)(unaff_x20 + 0x48);
  FUN_0048cf14();
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x006800dc(*(undefined8 *)(unaff_x20 + 0x60));
      if ((param_3 & 1) != 0) {
        func_0x00680334();
      }
      puVar2 = (ulong *)(unaff_x19 + 0x60);
      func_0x006802a8();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x006804c4(*(undefined8 *)(unaff_x20 + 0x68));
      if ((param_3 & 1) != 0) {
        func_0x00680334();
      }
      puVar2 = (ulong *)(unaff_x19 + 0x68);
      func_0x006802a8();
    }
  }
  func_0x006800f0();
  if ((extraout_x8 & 1) != 0) {
    func_0x00680144();
    if ((*puVar2 & 1) == 0) {
      func_0x00699010();
    }
    if (0 < (int)((ulong)(plVar3[1] - *plVar3) >> 4)) {
      func_0x006a5744();
      for (lVar4 = 0; unaff_x22 * 0x10 - lVar4 != 0; lVar4 = lVar4 + 0x10) {
        func_0x006a57c0();
        func_0x006a580c();
      }
    }
    return;
  }
  return;
}



/* Entry: 0067deb0; end: 0067df07;  */

void FUN_0067deb0(ulong *param_1)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  long lVar1;
  uint unaff_w20;
  long lVar2;
  
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  FUN_0048cfec(param_1 + 9);
  func_0x006809b0();
  if (!(bool)in_ZR) {
    if ((unaff_w20 & 1) != 0) {
      func_0x00680874();
    }
    if ((unaff_w20 >> 1 & 1) != 0) {
      FUN_006773ec(param_1[0xd]);
    }
  }
  func_0x00680478();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  if ((*param_1 & 1) == 0) {
    func_0x00699010();
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
      FUN_006a4904(*param_1 + lVar1);
      lVar2 = lVar2 + -1;
    } while (1 < lVar2);
    param_1[1] = *param_1;
    return;
  }
  return;
}



/* Entry: 0067df08; end: 0067e07f;  */

/* WARNING: Removing unreachable block (ram,0x0067e018) */

dword * FUN_0067df08(dword *param_1,dword *param_2,dword *param_3,dword *param_4)

{
  int iVar1;
  dword dVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  dword *pdVar6;
  undefined8 uVar7;
  dword *pdVar8;
  undefined1 *puVar9;
  int extraout_w8;
  uint uVar10;
  ulong uVar11;
  ulong extraout_x8;
  ulong extraout_x8_00;
  dword *unaff_x19;
  long unaff_x20;
  int *piVar12;
  int *unaff_x22;
  long lVar13;
  long lVar14;
  long unaff_x24;
  long lVar15;
  long lVar16;
  
  func_0x00680024();
  uVar10 = param_1[10];
  if (0 < (int)uVar10) {
    func_0x0067ff6c();
    *(undefined1 *)param_1 = 10;
    while (0x7f < uVar10) {
      func_0x0068053c();
    }
    func_0x00680934();
    do {
      func_0x0067ff6c();
      uVar11 = (ulong)*(int *)(ulong)uVar10;
      param_4 = (dword *)((long)param_1 + 1);
      while (bVar3 = 0x7f < uVar11, bVar3) {
        func_0x00680528();
        uVar11 = extraout_x8;
      }
      func_0x0068077c();
    } while (!bVar3);
  }
  uVar10 = *(uint *)(unaff_x20 + 0x40);
  cVar4 = SBORROW4(uVar10,1);
  cVar5 = (int)(uVar10 - 1) < 0;
  if (0 < (int)uVar10) {
    func_0x0067ff6c();
    puVar9 = (undefined1 *)((long)param_1 + 2);
    *(undefined1 *)param_1 = 0x12;
    while (0x7f < uVar10) {
      func_0x0068053c();
    }
    puVar9[-1] = (char)uVar10;
    piVar12 = *(int **)(unaff_x20 + 0x38);
    unaff_x22 = piVar12 + *(int *)(unaff_x20 + 0x30);
    do {
      func_0x0067ff6c();
      uVar11 = (ulong)*piVar12;
      param_4 = (dword *)((long)param_1 + 1);
      while( true ) {
        bVar3 = 0x7f < uVar11;
        cVar4 = SBORROW8(uVar11,0x80);
        cVar5 = (long)(uVar11 - 0x80) < 0;
        if (!bVar3) break;
        func_0x00680528();
        uVar11 = extraout_x8_00;
      }
      func_0x0068077c();
    } while (!bVar3);
  }
  uVar10 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar10 & 1) != 0) {
    func_0x00680174(*(undefined8 *)(unaff_x20 + 0x60));
    param_4 = param_1;
  }
  if ((uVar10 >> 1 & 1) != 0) {
    func_0x00680328(*(undefined8 *)(unaff_x20 + 0x68));
    param_2 = &MACH_HEADER.cputype;
    FUN_00435e9c();
    param_4 = param_1;
  }
  func_0x00680990();
  for (; unaff_x24 != 0; unaff_x24 = unaff_x24 + -1) {
    func_0x00680288();
    func_0x0068035c();
    if (cVar5 == cVar4) {
      func_0x0068075c();
      if (extraout_w8 < 0) {
        param_3 = *(dword **)param_3;
      }
      func_0x00680160();
      param_4 = (dword *)((long)unaff_x22 + (ulong)uVar10);
    }
    else {
      param_2 = (dword *)((long)&MACH_HEADER.cputype + 2);
      param_1 = unaff_x19;
      func_0x0054f030();
      param_4 = param_1;
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x0067fe84();
  lVar15 = 0;
  pdVar6 = param_1;
  do {
    if ((int)((ulong)(*(long *)(param_1 + 2) - *(long *)param_1) >> 4) <= lVar15) {
      return param_2;
    }
    piVar12 = (int *)(*(long *)param_1 + lVar15 * 0x10);
    func_0x006aad90();
    pdVar8 = pdVar6;
    param_2 = pdVar6;
    switch(piVar12[1]) {
    case 0:
      pdVar8 = *(dword **)(piVar12 + 2);
      uVar11 = (ulong)(uint)(*piVar12 << 3);
      func_0x006aac48(uVar11);
      func_0x00487cf0(pdVar8,uVar11);
      param_2 = pdVar8;
      break;
    case 1:
      dVar2 = piVar12[2];
      pdVar8 = (dword *)(ulong)(*piVar12 << 3 | 5);
      func_0x006aac48();
      *pdVar8 = dVar2;
      param_2 = pdVar8 + 1;
      break;
    case 2:
      lVar13 = *(long *)(piVar12 + 2);
      pdVar8 = (dword *)(ulong)(*piVar12 << 3 | 1);
      func_0x006aac48();
      *(long *)pdVar8 = lVar13;
      param_2 = pdVar8 + 2;
      break;
    case 3:
      iVar1 = *piVar12;
      lVar13 = *(long *)(piVar12 + 2);
      lVar14 = (long)*(char *)(lVar13 + 0x17);
      if ((-1 < lVar14) || (lVar14 = *(long *)(lVar13 + 8), lVar14 < 0x80)) {
        lVar16 = *(long *)param_3;
        uVar10 = iVar1 << 3;
        pdVar8 = (dword *)(ulong)uVar10;
        func_0x00487c84();
        if (lVar14 <= (long)(lVar16 + ~(ulong)((long)pdVar6 + (long)(int)pdVar8) + 0x10)) {
          puVar9 = (undefined1 *)((long)pdVar6 + 2);
          for (uVar10 = uVar10 | 2; 0x7f < uVar10; uVar10 = uVar10 >> 7) {
            puVar9[-2] = (byte)uVar10 | 0x80;
            puVar9 = puVar9 + 1;
          }
          puVar9[-2] = (byte)uVar10;
          puVar9[-1] = (char)lVar14;
          func_0x006aaec0();
          _memcpy();
          param_2 = (dword *)(puVar9 + lVar14);
          break;
        }
      }
      pdVar8 = param_3;
      func_0x0054f030(param_3,iVar1,lVar13,pdVar6);
      param_2 = pdVar8;
      break;
    case 4:
      uVar11 = (ulong)(*piVar12 << 3 | 3);
      func_0x006aac48(uVar11);
      uVar7 = *(undefined8 *)(piVar12 + 2);
      FUN_006a5a40(uVar7,uVar11,param_3);
      func_0x006aad84();
      pdVar8 = (dword *)(ulong)(*piVar12 << 3 | 4);
      func_0x00487cbc(pdVar8,uVar7);
      param_2 = pdVar8;
    }
    lVar15 = lVar15 + 1;
    pdVar6 = pdVar8;
  } while( true );
}



/* Entry: 0067e080; end: 0067e143;  */

long FUN_0067e080(undefined4 param_1,undefined8 param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined1 uVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long unaff_x19;
  
  uVar5 = (undefined4)((ulong)param_2 >> 0x20);
  uVar4 = (undefined4)param_2;
  func_0x00680740();
  *(undefined4 *)(unaff_x19 + 0x28) = param_1;
  lVar3 = unaff_x19 + 0x30;
  FUN_0054de38();
  *(int *)(unaff_x19 + 0x40) = (int)lVar3;
  uVar2 = lVar3 == 0;
  uVar1 = *(uint *)(unaff_x19 + 0x50);
  while ((uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) != 0) {
    func_0x00680008();
    func_0x00680518();
  }
  func_0x006808fc();
  if (!(bool)uVar2) {
    if ((unaff_x19 + 0x48U & 1) != 0) {
      func_0x006802b0(*(undefined8 *)(unaff_x19 + 0x60));
      func_0x00680350();
    }
    if (((uint)(unaff_x19 + 0x48U) >> 1 & 1) != 0) {
      func_0x006802b0(*(undefined8 *)(unaff_x19 + 0x68));
      func_0x00680350();
    }
  }
  func_0x00680128();
  if ((*(byte *)(lVar3 + 8) & 1) != 0) {
    if ((*(ulong *)(lVar3 + 8) & 1) == 0) {
      FUN_006a480c();
    }
    else {
      lVar3 = (*(ulong *)(lVar3 + 8) & 0xfffffffffffffffe) + 8;
    }
    FUN_006a5cc8();
    lVar3 = lVar3 + CONCAT44(uVar5,uVar4);
    *param_3 = (int)lVar3;
    return lVar3;
  }
  *param_3 = uVar4;
  return CONCAT44(uVar5,uVar4);
}



/* Entry: 0067e144; end: 0067e173;  */

void FUN_0067e144(long param_1,long param_2,uint param_3)

{
  uint uVar1;
  ulong *puVar2;
  long *plVar3;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x0068031c();
  FUN_0067deb0();
  func_0x006803f4();
  func_0x00680370();
  FUN_0048ebf4();
  FUN_0048ebf4(unaff_x19 + 0x30,unaff_x20 + 0x30);
  puVar2 = (ulong *)(unaff_x19 + 0x48);
  plVar3 = (long *)(unaff_x20 + 0x48);
  FUN_0048cf14();
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x006800dc(*(undefined8 *)(unaff_x20 + 0x60));
      if ((param_3 & 1) != 0) {
        func_0x00680334();
      }
      puVar2 = (ulong *)(unaff_x19 + 0x60);
      func_0x006802a8();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x006804c4(*(undefined8 *)(unaff_x20 + 0x68));
      if ((param_3 & 1) != 0) {
        func_0x00680334();
      }
      puVar2 = (ulong *)(unaff_x19 + 0x68);
      func_0x006802a8();
    }
  }
  func_0x006800f0();
  if ((extraout_x8 & 1) != 0) {
    func_0x00680144();
    if ((*puVar2 & 1) == 0) {
      func_0x00699010();
    }
    if (0 < (int)((ulong)(plVar3[1] - *plVar3) >> 4)) {
      func_0x006a5744();
      for (lVar4 = 0; unaff_x22 * 0x10 - lVar4 != 0; lVar4 = lVar4 + 0x10) {
        func_0x006a57c0();
        func_0x006a580c();
      }
    }
    return;
  }
  return;
}



/* Entry: 0067e174; end: 0067e19f;  */

long FUN_0067e174(long param_1)

{
  func_0x006802c0();
  FUN_006734dc(param_1 + 0x10);
  return param_1;
}



/* Entry: 0067e1a0; end: 0067e1a3;  */

long FUN_0067e1a0(long param_1)

{
  func_0x006802c0();
  FUN_006734dc(param_1 + 0x10);
  return param_1;
}



/* Entry: 0067e1a4; end: 0067e1b7;  */

void FUN_0067e1a4(void)

{
  FUN_0067e174();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0067e1b8; end: 0067e1c3;  */

void FUN_0067e1b8(void)

{
  Hint_Prefetch(0xb29248,0,0,0);
  Hint_Prefetch(PTR_DAT_00b29248,0,0,0);
  return;
}



/* Entry: 0067e1c4; end: 0067e1fb;  */

void FUN_0067e1c4(long param_1,long param_2)

{
  ulong *puVar1;
  long *plVar2;
  long unaff_x20;
  long lVar3;
  long unaff_x22;
  
  func_0x006803bc();
  puVar1 = (ulong *)(param_1 + 0x10);
  plVar2 = (long *)(param_2 + 0x10);
  FUN_0067e294();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00680144();
    if ((*puVar1 & 1) == 0) {
      func_0x00699010();
    }
    if (0 < (int)((ulong)(plVar2[1] - *plVar2) >> 4)) {
      func_0x006a5744();
      for (lVar3 = 0; unaff_x22 * 0x10 - lVar3 != 0; lVar3 = lVar3 + 0x10) {
        func_0x006a57c0();
        func_0x006a580c();
      }
    }
    return;
  }
  return;
}



/* Entry: 0067e1fc; end: 0067e293;  */

long * FUN_0067e1fc(long *param_1,long *param_2,long *param_3,long *param_4)

{
  int *piVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  uint uVar7;
  long unaff_x20;
  int unaff_w21;
  int unaff_w22;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  func_0x00680024();
  func_0x0068079c();
  while (unaff_w22 != unaff_w21) {
    func_0x0067fd70();
    param_1 = (long *)((long)&MACH_HEADER.magic + 1);
    func_0x00680280();
    func_0x0068046c();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x0067fe84();
  lVar10 = 0;
  plVar3 = param_1;
  do {
    if ((int)((ulong)(param_1[1] - *param_1) >> 4) <= lVar10) {
      return param_2;
    }
    piVar1 = (int *)(*param_1 + lVar10 * 0x10);
    func_0x006aad90();
    plVar6 = plVar3;
    param_2 = plVar3;
    switch(piVar1[1]) {
    case 0:
      plVar6 = *(long **)(piVar1 + 2);
      uVar4 = (ulong)(uint)(*piVar1 << 3);
      func_0x006aac48(uVar4);
      func_0x00487cf0(plVar6,uVar4);
      param_2 = plVar6;
      break;
    case 1:
      iVar2 = piVar1[2];
      plVar6 = (long *)(ulong)(*piVar1 << 3 | 5);
      func_0x006aac48();
      *(int *)plVar6 = iVar2;
      param_2 = (long *)((long)plVar6 + 4);
      break;
    case 2:
      lVar8 = *(long *)(piVar1 + 2);
      plVar6 = (long *)(ulong)(*piVar1 << 3 | 1);
      func_0x006aac48();
      *plVar6 = lVar8;
      param_2 = plVar6 + 1;
      break;
    case 3:
      iVar2 = *piVar1;
      lVar8 = *(long *)(piVar1 + 2);
      lVar9 = (long)*(char *)(lVar8 + 0x17);
      if ((-1 < lVar9) || (lVar9 = *(long *)(lVar8 + 8), lVar9 < 0x80)) {
        lVar11 = *param_3;
        uVar7 = iVar2 << 3;
        plVar6 = (long *)(ulong)uVar7;
        func_0x00487c84();
        if (lVar9 <= lVar11 + ~((long)plVar3 + (long)(int)plVar6) + 0x10) {
          lVar8 = (long)plVar3 + 2;
          for (uVar7 = uVar7 | 2; 0x7f < uVar7; uVar7 = uVar7 >> 7) {
            *(byte *)(lVar8 + -2) = (byte)uVar7 | 0x80;
            lVar8 = lVar8 + 1;
          }
          *(byte *)(lVar8 + -2) = (byte)uVar7;
          *(char *)(lVar8 + -1) = (char)lVar9;
          func_0x006aaec0();
          _memcpy();
          param_2 = (long *)(lVar8 + lVar9);
          break;
        }
      }
      plVar6 = param_3;
      func_0x0054f030(param_3,iVar2,lVar8,plVar3);
      param_2 = plVar6;
      break;
    case 4:
      uVar4 = (ulong)(*piVar1 << 3 | 3);
      func_0x006aac48(uVar4);
      uVar5 = *(undefined8 *)(piVar1 + 2);
      FUN_006a5a40(uVar5,uVar4,param_3);
      func_0x006aad84();
      plVar6 = (long *)(ulong)(*piVar1 << 3 | 4);
      func_0x00487cbc(plVar6,uVar5);
      param_2 = plVar6;
    }
    lVar10 = lVar10 + 1;
    plVar3 = plVar6;
  } while( true );
}



/* Entry: 0067e294; end: 0067e2a3;  */

void FUN_0067e294(long *param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long *unaff_x19;
  int unaff_w20;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *unaff_x25;
  long unaff_x26;
  
  if (*(int *)(param_2 + 8) == 0) {
    return;
  }
  FUN_0054d5a8();
  plVar2 = param_1;
  func_0x0054d67c();
  func_0x0054d6a8();
  puVar4 = unaff_x25;
  if (0 < (int)plVar2) {
    func_0x0054d6b0();
    param_1 = param_1 + (int)plVar2;
    puVar4 = unaff_x25 + (int)plVar2;
  }
  lVar3 = unaff_x19[2];
  for (; iVar1 = (int)plVar2, puVar4 < unaff_x25 + unaff_x26; puVar4 = puVar4 + 1) {
    plVar2 = (long *)lVar3;
    FUN_0067352c(lVar3,*puVar4);
    *param_1 = (long)plVar2;
    param_1 = param_1 + 1;
  }
  func_0x0054d60c();
  if (iVar1 < unaff_w20) {
    *(int *)(*unaff_x19 + -1) = unaff_w20;
  }
  return;
}



/* Entry: 0067e2a4; end: 0067e2d3;  */

void FUN_0067e2a4(long param_1,long param_2)

{
  ulong *puVar1;
  long *plVar2;
  long unaff_x20;
  long lVar3;
  long unaff_x22;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x0068031c();
  func_0x00677510();
  func_0x006803f4();
  func_0x006803bc();
  puVar1 = (ulong *)(param_1 + 0x10);
  plVar2 = (long *)(param_2 + 0x10);
  FUN_0067e294();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00680144();
    if ((*puVar1 & 1) == 0) {
      func_0x00699010();
    }
    if (0 < (int)((ulong)(plVar2[1] - *plVar2) >> 4)) {
      func_0x006a5744();
      for (lVar3 = 0; unaff_x22 * 0x10 - lVar3 != 0; lVar3 = lVar3 + 0x10) {
        func_0x006a57c0();
        func_0x006a580c();
      }
    }
    return;
  }
  return;
}



/* Entry: 0067e2d4; end: 0067e2ff;  */

undefined8 FUN_0067e2d4(undefined8 param_1)

{
  func_0x006802c0();
  func_0x00680738();
  func_0x00680848();
  return param_1;
}



/* Entry: 0067e300; end: 0067e303;  */

undefined8 FUN_0067e300(undefined8 param_1)

{
  func_0x006802c0();
  func_0x00680738();
  func_0x00680848();
  return param_1;
}



/* Entry: 0067e304; end: 0067e317;  */

void FUN_0067e304(void)

{
  FUN_0067e2d4();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0067e318; end: 0067e323;  */

void FUN_0067e318(void)

{
  Hint_Prefetch(0xb29300,0,0,0);
  Hint_Prefetch(PTR_DAT_00b29300,0,0,0);
  return;
}



/* Entry: 0067e324; end: 0067e3b3;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_0067e324(ulong *param_1,long *param_2,uint param_3)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long lVar2;
  long unaff_x22;
  
  func_0x00680370();
  FUN_0048ebf4();
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x006800dc(*(undefined8 *)(unaff_x20 + 0x30));
      if ((param_3 & 1) != 0) {
        func_0x00680334();
      }
      param_1 = (ulong *)(unaff_x19 + 0x30);
      func_0x006802a8();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      *(undefined4 *)(unaff_x19 + 0x38) = *(undefined4 *)(unaff_x20 + 0x38);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      *(undefined4 *)(unaff_x19 + 0x3c) = *(undefined4 *)(unaff_x20 + 0x3c);
    }
    if ((uVar1 >> 3 & 1) != 0) {
      *(undefined4 *)(unaff_x19 + 0x40) = *(undefined4 *)(unaff_x20 + 0x40);
    }
  }
  func_0x006800f0();
  if ((extraout_x8 & 1) != 0) {
    func_0x00680144();
    if ((*param_1 & 1) == 0) {
      func_0x00699010();
    }
    if (0 < (int)((ulong)(param_2[1] - *param_2) >> 4)) {
      func_0x006a5744();
      for (lVar2 = 0; unaff_x22 * 0x10 - lVar2 != 0; lVar2 = lVar2 + 0x10) {
        func_0x006a57c0();
        func_0x006a580c();
      }
    }
    return;
  }
  return;
}



/* Entry: 0067e3b4; end: 0067e3ff;  */

void FUN_0067e3b4(ulong *param_1)

{
  ulong uVar1;
  ulong extraout_x8;
  long lVar2;
  long lVar3;
  
  *(undefined4 *)(param_1 + 3) = 0;
  uVar1 = param_1[2];
  if ((uVar1 & 1) != 0) {
    func_0x00680688();
  }
  if ((uVar1 & 0xe) != 0) {
    *(undefined4 *)(param_1 + 8) = 0;
    param_1[7] = 0;
  }
  func_0x00680478();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  if ((*param_1 & 1) == 0) {
    func_0x00699010();
  }
  else {
    param_1 = (ulong *)((*param_1 & 0xfffffffffffffffe) + 8);
  }
  if (*param_1 != param_1[1]) {
    lVar2 = (long)((param_1[1] - *param_1) * 0x10000000) >> 0x20;
    lVar3 = lVar2 + 1;
    lVar2 = lVar2 * 0x10;
    do {
      lVar2 = lVar2 + -0x10;
      FUN_006a4904(*param_1 + lVar2);
      lVar3 = lVar3 + -1;
    } while (1 < lVar3);
    param_1[1] = *param_1;
    return;
  }
  return;
}



/* Entry: 0067e400; end: 0067e587;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_0067e400(long *param_1,long *param_2,long *param_3,long *param_4)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  uint uVar7;
  ulong uVar8;
  ulong extraout_x8;
  long unaff_x20;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  func_0x00680024();
  uVar7 = *(uint *)(param_1 + 5);
  if (0 < (int)uVar7) {
    func_0x0067ff6c();
    *(undefined1 *)param_1 = 10;
    while (0x7f < uVar7) {
      func_0x0068053c();
    }
    func_0x00680934();
    do {
      func_0x0067ff6c();
      uVar8 = (ulong)*(int *)(ulong)uVar7;
      param_4 = (long *)((long)param_1 + 1);
      while (bVar3 = 0x7f < uVar8, bVar3) {
        func_0x00680528();
        uVar8 = extraout_x8;
      }
      func_0x0068077c();
    } while (!bVar3);
  }
  uVar7 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar7 & 1) != 0) {
    func_0x006800b0(*(undefined8 *)(unaff_x20 + 0x30));
    param_4 = param_1;
  }
  if ((uVar7 >> 1 & 1) != 0) {
    param_2 = (long *)(ulong)*(uint *)(unaff_x20 + 0x38);
    func_0x0068059c();
    func_0x0048c654();
    param_4 = param_1;
  }
  if ((uVar7 >> 2 & 1) != 0) {
    param_2 = (long *)(ulong)*(uint *)(unaff_x20 + 0x3c);
    func_0x0068059c();
    FUN_004d92e0();
    param_4 = param_1;
  }
  if ((uVar7 >> 3 & 1) != 0) {
    func_0x0067ff6c();
    param_2 = param_1;
    func_0x006804e0();
    func_0x0067ffb8();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x0067fe84();
  lVar12 = 0;
  plVar4 = param_1;
  do {
    if ((int)((ulong)(param_1[1] - *param_1) >> 4) <= lVar12) {
      return param_2;
    }
    piVar1 = (int *)(*param_1 + lVar12 * 0x10);
    func_0x006aad90();
    plVar6 = plVar4;
    param_2 = plVar4;
    switch(piVar1[1]) {
    case 0:
      plVar6 = *(long **)(piVar1 + 2);
      uVar8 = (ulong)(uint)(*piVar1 << 3);
      func_0x006aac48(uVar8);
      func_0x00487cf0(plVar6,uVar8);
      param_2 = plVar6;
      break;
    case 1:
      iVar2 = piVar1[2];
      plVar6 = (long *)(ulong)(*piVar1 << 3 | 5);
      func_0x006aac48();
      *(int *)plVar6 = iVar2;
      param_2 = (long *)((long)plVar6 + 4);
      break;
    case 2:
      lVar10 = *(long *)(piVar1 + 2);
      plVar6 = (long *)(ulong)(*piVar1 << 3 | 1);
      func_0x006aac48();
      *plVar6 = lVar10;
      param_2 = plVar6 + 1;
      break;
    case 3:
      iVar2 = *piVar1;
      lVar10 = *(long *)(piVar1 + 2);
      lVar11 = (long)*(char *)(lVar10 + 0x17);
      if ((-1 < lVar11) || (lVar11 = *(long *)(lVar10 + 8), lVar11 < 0x80)) {
        lVar13 = *param_3;
        uVar7 = iVar2 << 3;
        plVar6 = (long *)(ulong)uVar7;
        func_0x00487c84();
        if (lVar11 <= (long)(lVar13 + ~(ulong)((long)plVar4 + (long)(int)plVar6) + 0x10)) {
          puVar9 = (undefined1 *)((long)plVar4 + 2);
          for (uVar7 = uVar7 | 2; 0x7f < uVar7; uVar7 = uVar7 >> 7) {
            puVar9[-2] = (byte)uVar7 | 0x80;
            puVar9 = puVar9 + 1;
          }
          puVar9[-2] = (byte)uVar7;
          puVar9[-1] = (char)lVar11;
          func_0x006aaec0();
          _memcpy();
          param_2 = (long *)(puVar9 + lVar11);
          break;
        }
      }
      plVar6 = param_3;
      func_0x0054f030(param_3,iVar2,lVar10,plVar4);
      param_2 = plVar6;
      break;
    case 4:
      uVar8 = (ulong)(*piVar1 << 3 | 3);
      func_0x006aac48(uVar8);
      uVar5 = *(undefined8 *)(piVar1 + 2);
      FUN_006a5a40(uVar5,uVar8,param_3);
      func_0x006aad84();
      plVar6 = (long *)(ulong)(*piVar1 << 3 | 4);
      func_0x00487cbc(plVar6,uVar5);
      param_2 = plVar6;
    }
    lVar12 = lVar12 + 1;
    plVar4 = plVar6;
  } while( true );
}



/* Entry: 0067e588; end: 0067e5bf;  */

long FUN_0067e588(long param_1)

{
  func_0x006802c0();
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_0054cf94();
  }
  return param_1;
}



/* Entry: 0067e5c0; end: 0067e5c3;  */

long FUN_0067e5c0(long param_1)

{
  func_0x006802c0();
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_0054cf94();
  }
  return param_1;
}



/* Entry: 0067e5c4; end: 0067e5d7;  */

void FUN_0067e5c4(void)

{
  FUN_0067e588();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0067e5d8; end: 0067e5e3;  */

void FUN_0067e5d8(void)

{
  Hint_Prefetch(0xb29490,0,0,0);
  Hint_Prefetch(PTR_DAT_00b29490,0,0,0);
  return;
}



/* Entry: 0067e5e4; end: 0067e663;  */

void FUN_0067e5e4(ulong *param_1,long *param_2)

{
  long unaff_x20;
  long lVar1;
  long unaff_x22;
  
  func_0x006803bc();
  if ((int)param_2[3] != 0) {
    func_0x0068087c();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00680144();
    if ((*param_1 & 1) == 0) {
      func_0x00699010();
    }
    if (0 < (int)((ulong)(param_2[1] - *param_2) >> 4)) {
      func_0x006a5744();
      for (lVar1 = 0; unaff_x22 * 0x10 - lVar1 != 0; lVar1 = lVar1 + 0x10) {
        func_0x006a57c0();
        func_0x006a580c();
      }
    }
    return;
  }
  return;
}



/* Entry: 0067e664; end: 0067e6fb;  */

long * FUN_0067e664(long *param_1,long *param_2,long *param_3,long *param_4)

{
  int *piVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  uint uVar7;
  long unaff_x20;
  int unaff_w21;
  int unaff_w22;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  func_0x00680024();
  func_0x0068079c();
  while (unaff_w22 != unaff_w21) {
    func_0x0067fd70();
    param_1 = (long *)((long)&MACH_HEADER.magic + 1);
    func_0x00680280();
    func_0x0068046c();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x0067fe84();
  lVar10 = 0;
  plVar3 = param_1;
  do {
    if ((int)((ulong)(param_1[1] - *param_1) >> 4) <= lVar10) {
      return param_2;
    }
    piVar1 = (int *)(*param_1 + lVar10 * 0x10);
    func_0x006aad90();
    plVar6 = plVar3;
    param_2 = plVar3;
    switch(piVar1[1]) {
    case 0:
      plVar6 = *(long **)(piVar1 + 2);
      uVar4 = (ulong)(uint)(*piVar1 << 3);
      func_0x006aac48(uVar4);
      func_0x00487cf0(plVar6,uVar4);
      param_2 = plVar6;
      break;
    case 1:
      iVar2 = piVar1[2];
      plVar6 = (long *)(ulong)(*piVar1 << 3 | 5);
      func_0x006aac48();
      *(int *)plVar6 = iVar2;
      param_2 = (long *)((long)plVar6 + 4);
      break;
    case 2:
      lVar8 = *(long *)(piVar1 + 2);
      plVar6 = (long *)(ulong)(*piVar1 << 3 | 1);
      func_0x006aac48();
      *plVar6 = lVar8;
      param_2 = plVar6 + 1;
      break;
    case 3:
      iVar2 = *piVar1;
      lVar8 = *(long *)(piVar1 + 2);
      lVar9 = (long)*(char *)(lVar8 + 0x17);
      if ((-1 < lVar9) || (lVar9 = *(long *)(lVar8 + 8), lVar9 < 0x80)) {
        lVar11 = *param_3;
        uVar7 = iVar2 << 3;
        plVar6 = (long *)(ulong)uVar7;
        func_0x00487c84();
        if (lVar9 <= lVar11 + ~((long)plVar3 + (long)(int)plVar6) + 0x10) {
          lVar8 = (long)plVar3 + 2;
          for (uVar7 = uVar7 | 2; 0x7f < uVar7; uVar7 = uVar7 >> 7) {
            *(byte *)(lVar8 + -2) = (byte)uVar7 | 0x80;
            lVar8 = lVar8 + 1;
          }
          *(byte *)(lVar8 + -2) = (byte)uVar7;
          *(char *)(lVar8 + -1) = (char)lVar9;
          func_0x006aaec0();
          _memcpy();
          param_2 = (long *)(lVar8 + lVar9);
          break;
        }
      }
      plVar6 = param_3;
      func_0x0054f030(param_3,iVar2,lVar8,plVar3);
      param_2 = plVar6;
      break;
    case 4:
      uVar4 = (ulong)(*piVar1 << 3 | 3);
      func_0x006aac48(uVar4);
      uVar5 = *(undefined8 *)(piVar1 + 2);
      FUN_006a5a40(uVar5,uVar4,param_3);
      func_0x006aad84();
      plVar6 = (long *)(ulong)(*piVar1 << 3 | 4);
      func_0x00487cbc(plVar6,uVar5);
      param_2 = plVar6;
    }
    lVar10 = lVar10 + 1;
    plVar3 = plVar6;
  } while( true );
}



/* Entry: 0067e6fc; end: 0067e803;  */

void FUN_0067e6fc(undefined8 param_1,long param_2)

{
  undefined8 extraout_x8;
  
  if (param_2 == 0) {
    func_0x006805f4();
  }
  else {
    func_0x00680590();
  }
  func_0x006805cc(&PTR_FUN_00a0dfa8);
  *(undefined8 *)(param_2 + 0x18) = extraout_x8;
  *(undefined1 *)(param_2 + 0x20) = 0;
  return;
}



/* Entry: 0067e804; end: 0067e863;  */

void FUN_0067e804(void)

{
  func_0x00680254();
  FUN_006779e4();
  return;
}



/* Entry: 0067e864; end: 0067e88b;  */

void FUN_0067e864(void)

{
  long extraout_x8;
  
  func_0x006803e8();
  if (extraout_x8 != 0) {
    func_0x00680384();
  }
  return;
}



/* Entry: 0067e88c; end: 0067e8b3;  */

void FUN_0067e88c(void)

{
  long extraout_x8;
  
  func_0x006803e8();
  if (extraout_x8 != 0) {
    func_0x00680384();
  }
  return;
}



/* Entry: 0067e8b4; end: 0067e8db;  */

void FUN_0067e8b4(void)

{
  long extraout_x8;
  
  func_0x006803e8();
  if (extraout_x8 != 0) {
    func_0x00680384();
  }
  return;
}



/* Entry: 0067e8dc; end: 0067e903;  */

void FUN_0067e8dc(void)

{
  long extraout_x8;
  
  func_0x006803e8();
  if (extraout_x8 != 0) {
    func_0x00680384();
  }
  return;
}



/* Entry: 0067e904; end: 0067e957;  */

long FUN_0067e904(long param_1)

{
  FUN_0048ed64(param_1 + 0x90);
  FUN_0048ed64(param_1 + 0x80);
  FUN_0067e864(param_1 + 0x68);
  FUN_0067e88c(param_1 + 0x50);
  FUN_0067e8b4(param_1 + 0x38);
  FUN_0067e8dc(param_1 + 0x20);
  FUN_00437b14(param_1 + 8);
  return param_1;
}



/* Entry: 0067e958; end: 0067e97f;  */

void FUN_0067e958(void)

{
  long extraout_x8;
  
  func_0x006803e8();
  if (extraout_x8 != 0) {
    func_0x00680384();
  }
  return;
}



/* Entry: 0067e980; end: 0067e9a7;  */

void FUN_0067e980(void)

{
  long extraout_x8;
  
  func_0x006803e8();
  if (extraout_x8 != 0) {
    func_0x00680384();
  }
  return;
}



/* Entry: 0067e9a8; end: 0067e9cf;  */

void FUN_0067e9a8(void)

{
  long extraout_x8;
  
  func_0x006803e8();
  if (extraout_x8 != 0) {
    func_0x00680384();
  }
  return;
}



/* Entry: 0067e9d0; end: 0067ea0f;  */

void FUN_0067e9d0(void)

{
  func_0x00680254();
  FUN_00678d00();
  return;
}



/* Entry: 0067ea10; end: 0067ea37;  */

void FUN_0067ea10(void)

{
  long extraout_x8;
  
  func_0x006803e8();
  if (extraout_x8 != 0) {
    func_0x00680384();
  }
  return;
}



/* Entry: 0067ea38; end: 0067ea63;  */

long * FUN_0067ea38(long *param_1)

{
  char cVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  
  FUN_0067ea64(param_1 + 7);
  FUN_0067ea10(param_1 + 4);
  if (*param_1 == 0) {
    puVar3 = (undefined8 *)param_1[2];
    if ((long)*(short *)((long)param_1 + 10) < 0) {
      lVar4 = puVar3[1];
      lVar2 = *(long *)*puVar3;
      cVar1 = *(char *)(lVar4 + 10);
      while (lVar2 != lVar4 || cVar1 != '\0') {
        FUN_005355f0(lVar2 + 0x18);
        func_0x0053a9bc();
      }
    }
    else {
      for (lVar4 = (long)*(short *)((long)param_1 + 10) << 5; lVar4 != 0; lVar4 = lVar4 + -0x20) {
        FUN_005355f0(puVar3 + 1);
        puVar3 = puVar3 + 4;
      }
    }
    if (*(short *)((long)param_1 + 10) < 0) {
      if (param_1[2] != 0) {
        FUN_00537e04();
      }
      __ZdlPv();
    }
    else {
      __ZdaPv();
    }
  }
  return param_1;
}



/* Entry: 0067ea64; end: 0067ea8b;  */

void FUN_0067ea64(void)

{
  long extraout_x8;
  
  func_0x006803e8();
  if (extraout_x8 != 0) {
    func_0x00680384();
  }
  return;
}



/* Entry: 0067ea8c; end: 0067eab3;  */

void FUN_0067ea8c(void)

{
  long extraout_x8;
  
  func_0x006803e8();
  if (extraout_x8 != 0) {
    func_0x00680384();
  }
  return;
}



/* Entry: 0067eab4; end: 0067eadb;  */

void FUN_0067eab4(void)

{
  long extraout_x8;
  
  func_0x006803e8();
  if (extraout_x8 != 0) {
    func_0x00680384();
  }
  return;
}



/* Entry: 0067eadc; end: 0067eb03;  */

void FUN_0067eadc(void)

{
  long extraout_x8;
  
  func_0x006803e8();
  if (extraout_x8 != 0) {
    func_0x00680384();
  }
  return;
}



/* Entry: 0067eb04; end: 0067eb3b;  */

void FUN_0067eb04(void)

{
  char cVar1;
  long lVar2;
  long *unaff_x19;
  undefined8 *puVar3;
  long lVar4;
  
  func_0x006801b8();
  if (*unaff_x19 == 0) {
    puVar3 = (undefined8 *)unaff_x19[2];
    if ((long)*(short *)((long)unaff_x19 + 10) < 0) {
      lVar4 = puVar3[1];
      lVar2 = *(long *)*puVar3;
      cVar1 = *(char *)(lVar4 + 10);
      while (lVar2 != lVar4 || cVar1 != '\0') {
        FUN_005355f0(lVar2 + 0x18);
        func_0x0053a9bc();
      }
    }
    else {
      for (lVar4 = (long)*(short *)((long)unaff_x19 + 10) << 5; lVar4 != 0; lVar4 = lVar4 + -0x20) {
        FUN_005355f0(puVar3 + 1);
        puVar3 = puVar3 + 4;
      }
    }
    if (*(short *)((long)unaff_x19 + 10) < 0) {
      if (unaff_x19[2] != 0) {
        FUN_00537e04();
      }
      __ZdlPv();
    }
    else {
      __ZdaPv();
    }
  }
  return;
}



/* Entry: 0067eb3c; end: 0067eb63;  */

void FUN_0067eb3c(void)

{
  long extraout_x8;
  
  func_0x006803e8();
  if (extraout_x8 != 0) {
    func_0x00680384();
  }
  return;
}



/* Entry: 0067eb64; end: 0067ec23;  */

long * FUN_0067eb64(long *param_1)

{
  char cVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  
  FUN_0067ea64(param_1 + 9);
  FUN_0067eb3c(param_1 + 6);
  FUN_0048ed64(param_1 + 4);
  if (*param_1 == 0) {
    puVar3 = (undefined8 *)param_1[2];
    if ((long)*(short *)((long)param_1 + 10) < 0) {
      lVar4 = puVar3[1];
      lVar2 = *(long *)*puVar3;
      cVar1 = *(char *)(lVar4 + 10);
      while (lVar2 != lVar4 || cVar1 != '\0') {
        FUN_005355f0(lVar2 + 0x18);
        func_0x0053a9bc();
      }
    }
    else {
      for (lVar4 = (long)*(short *)((long)param_1 + 10) << 5; lVar4 != 0; lVar4 = lVar4 + -0x20) {
        FUN_005355f0(puVar3 + 1);
        puVar3 = puVar3 + 4;
      }
    }
    if (*(short *)((long)param_1 + 10) < 0) {
      if (param_1[2] != 0) {
        FUN_00537e04();
      }
      __ZdlPv();
    }
    else {
      __ZdaPv();
    }
  }
  return param_1;
}



/* Entry: 0067ec24; end: 0067ec4b;  */

void FUN_0067ec24(void)

{
  long extraout_x8;
  
  func_0x006803e8();
  if (extraout_x8 != 0) {
    func_0x00680384();
  }
  return;
}



/* Entry: 0067ec4c; end: 0067ec73;  */

void FUN_0067ec4c(void)

{
  long extraout_x8;
  
  func_0x006803e8();
  if (extraout_x8 != 0) {
    func_0x00680384();
  }
  return;
}



/* Entry: 0067ec74; end: 0067ef03;  */

void FUN_0067ec74(long param_1)

{
  undefined8 extraout_x8;
  
  if (param_1 == 0) {
    func_0x006805f4();
  }
  else {
    func_0x00680590();
  }
  func_0x006805cc(&PTR_FUN_00a0dfa8);
  *(undefined8 *)(param_1 + 0x18) = extraout_x8;
  *(undefined1 *)(param_1 + 0x20) = 0;
  return;
}



/* Entry: 0067ef04; end: 0067ef53;  */

void FUN_0067ef04(ulong *param_1)

{
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  
  if (0 < (int)param_1[1]) {
    uVar1 = (uint)param_1[1];
    puVar2 = param_1;
    if ((*param_1 & 1) != 0) {
      puVar2 = (ulong *)(*param_1 + 7);
    }
    if ((int)uVar1 < 2) {
      uVar1 = 1;
    }
    uVar3 = (ulong)uVar1;
    do {
      (**(code **)(*(long *)*puVar2 + 0x18))();
      uVar3 = uVar3 - 1;
      puVar2 = puVar2 + 1;
    } while (uVar3 != 0);
    *(undefined4 *)(param_1 + 1) = 0;
    return;
  }
  return;
}



/* Entry: 0067ef54; end: 0067f0f7;  */

qword * FUN_0067ef54(qword *param_1,long param_2)

{
  uint uVar1;
  qword *pqVar2;
  long lVar3;
  qword *pqVar4;
  
  if (param_1 == (qword *)0x0) {
    pqVar2 = &section_000000b8.size;
    __Znwm();
  }
  else {
    pqVar2 = param_1;
    func_0x005510c4(param_1,0xe0);
  }
  pqVar2[1] = (qword)param_1;
  *pqVar2 = (qword)&PTR_FUN_00a0e958;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x0067ff60();
  }
  *(dword *)(pqVar2 + 2) = *(dword *)(param_2 + 0x10);
  *(dword *)((long)pqVar2 + 0x14) = 0;
  FUN_0048cf2c(pqVar2 + 3,param_1,param_2 + 0x18);
  FUN_0067e804(pqVar2 + 6,param_1,param_2 + 0x30);
  func_0x0067e824(pqVar2 + 9,param_1,param_2 + 0x48);
  pqVar2[0xc] = 0;
  pqVar2[0xd] = 0;
  pqVar2[0xe] = (qword)param_1;
  func_0x00677a14(pqVar2 + 0xc,param_2 + 0x60);
  func_0x0067e844(pqVar2 + 0xf,param_1,param_2 + 0x78);
  func_0x00680888(pqVar2 + 0x12);
  func_0x00680888(pqVar2 + 0x14);
  lVar3 = param_2 + 0xb0;
  func_0x00680340();
  pqVar2[0x16] = lVar3;
  lVar3 = param_2 + 0xb8;
  func_0x00680340();
  pqVar2[0x17] = lVar3;
  lVar3 = param_2 + 0xc0;
  func_0x00680340();
  pqVar2[0x18] = lVar3;
  uVar1 = *(uint *)(pqVar2 + 2);
  if ((uVar1 >> 3 & 1) == 0) {
    pqVar4 = (qword *)0x0;
  }
  else {
    pqVar4 = param_1;
    FUN_0067f0f8(param_1,*(undefined8 *)(param_2 + 200));
  }
  pqVar2[0x19] = (qword)pqVar4;
  if ((uVar1 >> 4 & 1) == 0) {
    param_1 = (qword *)0x0;
  }
  else {
    FUN_0067f134(param_1,*(undefined8 *)(param_2 + 0xd0));
  }
  pqVar2[0x1a] = (qword)param_1;
  *(undefined4 *)(pqVar2 + 0x1b) = *(undefined4 *)(param_2 + 0xd8);
  return pqVar2;
}



/* Entry: 0067f0f8; end: 0067f133;  */

long FUN_0067f0f8(long param_1)

{
  long lVar1;
  ulong extraout_x8;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0068031c();
  if (param_1 == 0) {
    __Znwm(0xb0);
  }
  else {
    func_0x005510c4();
  }
  func_0x006804ac();
  func_0x0067ffd4();
  func_0x0068048c(&PTR_FUN_00a0e4f8);
  if ((extraout_x8 & 1) != 0) {
    func_0x0067ff60();
  }
  func_0x0067feac();
  func_0x006800c0();
  lVar1 = unaff_x20 + 0x48;
  func_0x00680340();
  *(long *)(unaff_x19 + 0x48) = lVar1;
  lVar1 = unaff_x20 + 0x50;
  func_0x00680340();
  *(long *)(unaff_x19 + 0x50) = lVar1;
  lVar1 = unaff_x20 + 0x58;
  func_0x00680340();
  *(long *)(unaff_x19 + 0x58) = lVar1;
  lVar1 = unaff_x20 + 0x60;
  func_0x00680340();
  *(long *)(unaff_x19 + 0x60) = lVar1;
  lVar1 = unaff_x20 + 0x68;
  func_0x00680340();
  *(long *)(unaff_x19 + 0x68) = lVar1;
  lVar1 = unaff_x20 + 0x70;
  func_0x00680340();
  *(long *)(unaff_x19 + 0x70) = lVar1;
  lVar1 = unaff_x20 + 0x78;
  func_0x00680340();
  *(long *)(unaff_x19 + 0x78) = lVar1;
  lVar1 = unaff_x20 + 0x80;
  func_0x00680340();
  *(long *)(unaff_x19 + 0x80) = lVar1;
  lVar1 = unaff_x20 + 0x88;
  func_0x00680340();
  *(long *)(unaff_x19 + 0x88) = lVar1;
  lVar1 = unaff_x20 + 0x90;
  func_0x00680340();
  *(long *)(unaff_x19 + 0x90) = lVar1;
  func_0x0067ffc4();
  if ((*(byte *)(unaff_x19 + 0x29) >> 2 & 1) == 0) {
    lVar1 = 0;
  }
  else {
    func_0x00680484();
  }
  *(long *)(unaff_x19 + 0x98) = lVar1;
  uVar2 = *(undefined8 *)(unaff_x20 + 0xa0);
  *(undefined8 *)(unaff_x19 + 0xa5) = *(undefined8 *)(unaff_x20 + 0xa5);
  *(undefined8 *)(unaff_x19 + 0xa0) = uVar2;
  return unaff_x19;
}



/* Entry: 0067f134; end: 0067f193;  */

void FUN_0067f134(long param_1)

{
  ulong extraout_x8;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  
  func_0x0068031c();
  if (param_1 == 0) {
    func_0x006803c8();
  }
  else {
    func_0x00680310();
  }
  func_0x006804f4();
  func_0x0068050c(&PTR_FUN_00a0e2c8);
  if ((extraout_x8 & 1) != 0) {
    func_0x0067ff60();
  }
  *(undefined8 *)(unaff_x21 + 0x10) = 0;
  *(undefined8 *)(unaff_x21 + 0x18) = 0;
  *(undefined8 *)(unaff_x21 + 0x20) = unaff_x20;
  FUN_0067e294((undefined8 *)(unaff_x21 + 0x10),unaff_x19 + 0x10);
  *(undefined4 *)(unaff_x21 + 0x28) = 0;
  return;
}



/* Entry: 0067f194; end: 0067f327;  */

dword * FUN_0067f194(dword *param_1,long param_2)

{
  dword *pdVar1;
  long lVar2;
  
  if (param_1 == (dword *)0x0) {
    pdVar1 = &section_000000b8.offset;
    __Znwm();
  }
  else {
    pdVar1 = param_1;
    func_0x005510c4(param_1,0xe8);
  }
  *(dword **)(pdVar1 + 2) = param_1;
  *(undefined ***)pdVar1 = &PTR_FUN_00a0e908;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x0067ff60();
  }
  func_0x006807ac();
  func_0x0067e844();
  func_0x0067e804(pdVar1 + 0xc,param_1,param_2 + 0x30);
  func_0x0067e824(pdVar1 + 0x12,param_1,param_2 + 0x48);
  *(undefined8 *)(pdVar1 + 0x18) = 0;
  *(undefined8 *)(pdVar1 + 0x1a) = 0;
  *(dword **)(pdVar1 + 0x1c) = param_1;
  FUN_006785d8(pdVar1 + 0x18,param_2 + 0x60);
  func_0x0067e844(pdVar1 + 0x1e,param_1,param_2 + 0x78);
  *(undefined8 *)(pdVar1 + 0x24) = 0;
  *(undefined8 *)(pdVar1 + 0x26) = 0;
  *(dword **)(pdVar1 + 0x28) = param_1;
  func_0x006785f0(pdVar1 + 0x24,param_2 + 0x90);
  *(undefined8 *)(pdVar1 + 0x2a) = 0;
  *(undefined8 *)(pdVar1 + 0x2c) = 0;
  *(dword **)(pdVar1 + 0x2e) = param_1;
  func_0x00678608(pdVar1 + 0x2a,param_2 + 0xa8);
  FUN_0048cf2c(pdVar1 + 0x30,param_1,param_2 + 0xc0);
  lVar2 = param_2 + 0xd8;
  func_0x00680348();
  *(long *)(pdVar1 + 0x36) = lVar2;
  if (((byte)pdVar1[4] >> 1 & 1) == 0) {
    param_1 = (dword *)0x0;
  }
  else {
    func_0x0067f598(param_1,*(undefined8 *)(param_2 + 0xe0));
  }
  *(dword **)(pdVar1 + 0x38) = param_1;
  return pdVar1;
}



/* Entry: 0067f328; end: 0067f3fb;  */

char * FUN_0067f328(char *param_1,long param_2)

{
  char *pcVar1;
  long lVar2;
  
  if (param_1 == (char *)0x0) {
    pcVar1 = section_00000068.sectname + 8;
    __Znwm();
  }
  else {
    pcVar1 = param_1;
    func_0x006808cc();
  }
  *(char **)(pcVar1 + 8) = param_1;
  *(undefined ***)pcVar1 = &PTR_FUN_00a0e8b8;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x0067ff60();
  }
  func_0x00680604();
  FUN_00679b74();
  *(undefined8 *)(pcVar1 + 0x30) = 0;
  *(undefined8 *)(pcVar1 + 0x38) = 0;
  *(char **)(pcVar1 + 0x40) = param_1;
  func_0x00679b8c(pcVar1 + 0x30,param_2 + 0x30);
  func_0x00680690();
  lVar2 = param_2 + 0x60;
  func_0x00680348();
  *(long *)(pcVar1 + 0x60) = lVar2;
  if (((byte)pcVar1[0x10] >> 1 & 1) == 0) {
    param_1 = (char *)0x0;
  }
  else {
    func_0x0067f910(param_1,*(undefined8 *)(param_2 + 0x68));
  }
  *(char **)(pcVar1 + 0x68) = param_1;
  return pcVar1;
}


