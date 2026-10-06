/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b8c649c; end: 10b8c6583;  */

void FUN_10b8c649c(undefined8 param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  long lStack_38;
  
  plVar1 = *(long **)(*(long *)(*(long *)(param_2 + 0x1d0) + 0x28) + 0x10);
  func_0x0001080da434();
  lStack_38 = param_2;
  (**(code **)(*plVar1 + 0x60))(param_1,plVar1,&lStack_38,param_3);
  func_0x00010b8cfc30();
  return;
}



/* Entry: 10b8c6584; end: 10b8c66b7;  */

bool FUN_10b8c6584(long *param_1,undefined8 param_2)

{
  bool bVar1;
  long *plVar2;
  
  plVar2 = param_1;
  func_0x0001080ce754();
  bVar1 = (long *)(*param_1 + param_1[3]) != plVar2;
  if (bVar1) {
    FUN_10b8cdc34(param_1,plVar2,param_2);
  }
  return bVar1;
}



/* Entry: 10b8c66b8; end: 10b8c66c3;  */

/* WARNING: Removing unreachable block (ram,0x00010b8c6730) */

void FUN_10b8c66b8(long *param_1)

{
  uint uVar1;
  long *plVar2;
  
  uVar1 = (uint)param_1[0x39];
  if ((uVar1 >> 7 & 1) != 0) {
    param_1[0x39] = param_1[0x39] & 0xffffffffffffff7f;
    if (param_1[0x3b] == 0) {
      if ((uVar1 >> 6 & 1) != 0) {
        plVar2 = param_1;
        FUN_10b8c6828();
        while (plVar2 = (long *)((long)plVar2 + -1), plVar2 != (long *)0xffffffffffffffff) {
          FUN_10b8c685c(param_1,plVar2);
          FUN_10b8c66c4();
        }
      }
    }
    else {
      plVar2 = param_1;
      FUN_10b8c5ea8();
      func_0x00010b8cfbe4();
      FUN_10b8c6798();
      func_0x00010b8cfe20();
      (**(code **)(*plVar2 + 0x48))();
    }
    param_1[0x33] = 0;
  }
  return;
}



/* Entry: 10b8c66c4; end: 10b8c678b;  */

void FUN_10b8c66c4(long *param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  long *plVar2;
  
  uVar1 = (uint)param_1[0x39];
  if ((uVar1 >> 7 & 1) != 0) {
    param_1[0x39] = param_1[0x39] & 0xffffffffffffff7f;
    if (param_1[0x3b] == 0) {
      if ((uVar1 >> 6 & 1) != 0) {
        plVar2 = param_1;
        FUN_10b8c6828();
        while (plVar2 = (long *)((long)plVar2 + -1), plVar2 != (long *)0xffffffffffffffff) {
          FUN_10b8c685c(param_1,plVar2);
          FUN_10b8c66c4();
        }
      }
    }
    else {
      plVar2 = param_1;
      FUN_10b8c5ea8();
      func_0x00010b8cfbe4();
      FUN_10b8c6798();
      func_0x00010b8cfe20();
      (**(code **)(*plVar2 + 0x48))();
      if (param_3 != 0) {
        func_0x00010b8cfca4();
      }
    }
    param_1[0x33] = 0;
  }
  return;
}



/* Entry: 10b8c678c; end: 10b8c6797;  */

/* WARNING: Removing unreachable block (ram,0x00010b8c6730) */

void FUN_10b8c678c(long *param_1)

{
  uint uVar1;
  long *plVar2;
  
  uVar1 = (uint)param_1[0x39];
  if ((uVar1 >> 7 & 1) != 0) {
    param_1[0x39] = param_1[0x39] & 0xffffffffffffff7f;
    if (param_1[0x3b] == 0) {
      if ((uVar1 >> 6 & 1) != 0) {
        plVar2 = param_1;
        FUN_10b8c6828();
        while (plVar2 = (long *)((long)plVar2 + -1), plVar2 != (long *)0xffffffffffffffff) {
          FUN_10b8c685c(param_1,plVar2);
          FUN_10b8c66c4();
        }
      }
    }
    else {
      plVar2 = param_1;
      FUN_10b8c5ea8();
      func_0x00010b8cfbe4();
      FUN_10b8c6798();
      func_0x00010b8cfe20();
      (**(code **)(*plVar2 + 0x48))();
    }
    param_1[0x33] = 0;
  }
  return;
}



/* Entry: 10b8c6798; end: 10b8c67cf;  */

long * FUN_10b8c6798(long param_1,long *param_2)

{
  long *plVar1;
  
  if ((*(byte *)(param_1 + 0x1ca) & 1) == 0) {
    FUN_10b8c5ea8();
    return (long *)0x113846768;
  }
  plVar1 = (long *)(*(long *)(param_1 + 0x1d0) + 0xc0);
  if (*plVar1 != 0) {
    param_2 = plVar1;
  }
  return param_2;
}



/* Entry: 10b8c67d0; end: 10b8c6827;  */

void FUN_10b8c67d0(long param_1)

{
  undefined8 uStack_28;
  
  if (((uint)*(ulong *)(param_1 + 0x1c8) >> 4 & 1) == 0) {
    *(ulong *)(param_1 + 0x1c8) = *(ulong *)(param_1 + 0x1c8) | 0x10;
    *(undefined8 *)(param_1 + 0x198) = 0;
    func_0x00010b8cf8c0();
    if (uStack_28 == 0) {
      func_0x00010b8cfc9c();
    }
    else {
      FUN_10b8c67d0(uStack_28);
    }
    func_0x00010b8cf9a4();
  }
  return;
}



/* Entry: 10b8c6828; end: 10b8c685b;  */

long FUN_10b8c6828(long param_1)

{
  long lVar1;
  
  if (((*(long **)(param_1 + 0x40) == (long *)0x0) ||
      (lVar1 = **(long **)(param_1 + 0x40), lVar1 == 0)) &&
     (lVar1 = *(long *)(param_1 + 0x18), lVar1 == 0)) {
    return 0;
  }
  return *(long *)(lVar1 + 0x2b0) - *(long *)(lVar1 + 0x2a8) >> 3;
}



/* Entry: 10b8c685c; end: 10b8c688b;  */

undefined8 FUN_10b8c685c(long param_1)

{
  long lVar1;
  
  if ((*(long **)(param_1 + 0x40) == (long *)0x0) ||
     (lVar1 = **(long **)(param_1 + 0x40), lVar1 == 0)) {
    lVar1 = *(long *)(param_1 + 0x18);
  }
  FUN_10b8c9e0c();
  return *(undefined8 *)(lVar1 + 8);
}



/* Entry: 10b8c688c; end: 10b8c69f3;  */

long * FUN_10b8c688c(long *param_1,undefined8 param_2,long *param_3)

{
  undefined1 uVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  undefined8 extraout_x8;
  long extraout_x8_00;
  code *extraout_x8_01;
  undefined8 extraout_x8_02;
  int extraout_w11;
  long *unaff_x19;
  long *unaff_x21;
  long alStack_b0 [3];
  undefined8 uStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  code *pcStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  undefined8 uStack_48;
  
  func_0x00010b8cf80c();
  uVar1 = *param_3 == param_1[0x3b];
  uStack_48 = extraout_x8;
  if ((bool)uVar1) goto LAB_10b8c69d0;
  func_0x00010b8d0028();
  FUN_10b8c678c();
  if (unaff_x19[0x3b] != 0) {
    FUN_10b8c69f4(unaff_x19 + 0x41);
    uVar1 = *(char *)(unaff_x19[0x3b] + 0x18) == '\x01';
    if ((bool)uVar1) {
      plVar3 = unaff_x19;
      FUN_10b8c6a3c();
      if (*plVar3 != 0) {
        iVar2 = *(int *)(*plVar3 + 0xc);
        func_0x00010b8cff7c();
        if ((iVar2 != 0) && (unaff_x19[0x3c] != 0)) {
          func_0x00010b951e90();
          lStack_68 = unaff_x19[0x3c];
          if ((lStack_68 != 0) && (*(long *)(lStack_68 + 0x10) != 0)) {
            do {
              func_0x00010b8cf9bc();
              lStack_68 = extraout_x8_00;
            } while (extraout_w11 != 0);
          }
          pcStack_78 = FUN_10b8cdd0c;
          ppuStack_70 = &PTR_FUN_110d71e80;
          (**(code **)(*unaff_x21 + 0x80))();
          func_0x00010b8d0114();
          (*extraout_x8_01)(&ppuStack_70);
        }
        goto LAB_10b8c697c;
      }
    }
    func_0x00010b8cff7c();
  }
LAB_10b8c697c:
  FUN_10b8c6a50(unaff_x19 + 0x3b,param_3);
  if (unaff_x19[0x30] != 0) {
    *(undefined1 *)(unaff_x19[0x30] + 0x45) = 1;
  }
  if (unaff_x19[0x3b] != 0) {
    FUN_10b8b4a9c(unaff_x19 + 0x12);
    FUN_10b8c69f4(unaff_x19 + 0x40);
    if (((uint)unaff_x19[0x39] >> 5 & 1) != 0) {
      unaff_x19[0x39] = unaff_x19[0x39] | 0x800;
    }
  }
  func_0x00010b8c6638();
  param_1 = unaff_x19;
LAB_10b8c69d0:
  func_0x00010b8cf7e8(uStack_48);
  if ((bool)uVar1) {
    return param_1;
  }
  ___stack_chk_fail();
  plVar4 = alStack_b0;
  pcStack_88 = FUN_10b8c69f4;
  puStack_90 = &stack0xfffffffffffffff0;
  func_0x00010b8cf80c();
  plVar3 = (long *)0x0;
  uStack_98 = extraout_x8_02;
  if (*param_1 != 0) {
    FUN_10b9ac09c(alStack_b0);
    func_0x000104bda914();
    plVar3 = plVar4;
  }
  func_0x00010b8cf7e8(uStack_98);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    if (plVar3[0x16] == 0) {
      if ((bRam00000001138469e8 & 1) == 0) {
        iVar2 = 0x138469e8;
        ___cxa_guard_acquire();
        if (iVar2 != 0) {
          uRam00000001138469e0 = 0;
          ___cxa_guard_release(0x1138469e8);
        }
      }
      return (long *)0x1138469e0;
    }
    return (long *)(plVar3[0x16] + 0x18);
  }
  return plVar3;
}



/* Entry: 10b8c69f4; end: 10b8c6a3b;  */

undefined1 * FUN_10b8c69f4(long *param_1)

{
  undefined1 in_ZR;
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 extraout_x8;
  undefined1 auStack_30 [24];
  undefined8 uStack_18;
  
  puVar2 = auStack_30;
  func_0x00010b8cf80c();
  puVar3 = (undefined1 *)0x0;
  uStack_18 = extraout_x8;
  if (*param_1 != 0) {
    FUN_10b9ac09c(auStack_30);
    func_0x000104bda914();
    puVar3 = puVar2;
  }
  func_0x00010b8cf7e8(uStack_18);
  if ((bool)in_ZR) {
    return puVar3;
  }
  ___stack_chk_fail();
  if (*(long *)(puVar3 + 0xb0) != 0) {
    return (undefined1 *)(*(long *)(puVar3 + 0xb0) + 0x18);
  }
  if ((bRam00000001138469e8 & 1) == 0) {
    iVar1 = 0x138469e8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam00000001138469e0 = 0;
      ___cxa_guard_release(0x1138469e8);
    }
  }
  return (undefined1 *)0x1138469e0;
}



/* Entry: 10b8c6a3c; end: 10b8c6a4f;  */

long FUN_10b8c6a3c(long param_1)

{
  int iVar1;
  
  if (*(long *)(param_1 + 0xb0) != 0) {
    return *(long *)(param_1 + 0xb0) + 0x18;
  }
  if ((bRam00000001138469e8 & 1) == 0) {
    iVar1 = 0x138469e8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam00000001138469e0 = 0;
      ___cxa_guard_release(0x1138469e8);
    }
  }
  return 0x1138469e0;
}



/* Entry: 10b8c6a50; end: 10b8c6a93;  */

void FUN_10b8c6a50(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  int extraout_w11;
  long *unaff_x19;
  
  func_0x00010b8cfcb4();
  if (!(bool)in_ZR) {
    func_0x00010b8d00c8();
    lVar1 = extraout_x8;
    if ((extraout_x8 != 0) && (*(long *)(extraout_x8 + 0x10) != 0)) {
      do {
        func_0x00010b8cf9bc();
        lVar1 = extraout_x8_00;
      } while (extraout_w11 != 0);
    }
    *unaff_x19 = lVar1;
    func_0x0001080c5c80();
  }
  return;
}



/* Entry: 10b8c6a94; end: 10b8c6b23;  */

bool FUN_10b8c6a94(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x1d8);
  if (lVar1 != 0) {
    func_0x00010b8cf8a8();
    if (param_3 != 0) {
      func_0x00010b8cfb2c();
      while (param_1 = param_1 + -1, param_1 != -1) {
        func_0x00010b8cfd8c();
        FUN_10b8c685c();
        FUN_10b8c678c();
      }
    }
    func_0x00010b8cf8b4();
    FUN_10b8c688c();
    func_0x0001080da468(0);
    func_0x0001080c5c80(0);
  }
  return lVar1 != 0;
}



/* Entry: 10b8c6b24; end: 10b8c6b5f;  */

void FUN_10b8c6b24(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000108108ae0(&uStack_30,param_2 + 0x20);
  uVar1 = uStack_30;
  uStack_30 = 0;
  uStack_28 = 0;
  *param_1 = uVar1;
  func_0x0001081091b4(&uStack_30);
  return;
}



/* Entry: 10b8c6b60; end: 10b8c6b7b;  */

void FUN_10b8c6b60(long param_1)

{
  undefined1 in_ZR;
  long lVar1;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x1d0);
  if ((lVar1 == 0) || ((*(byte *)(param_1 + 0x1ca) >> 1 & 1) != 0)) {
    return;
  }
  func_0x00010b8d7104();
  if ((*(byte *)(lVar1 + 0x1df) & 1) == 0) {
    *(undefined1 *)(lVar1 + 0x1df) = 1;
    func_0x00010b8d7620();
    FUN_10b8d37cc();
    func_0x00010b8d73c4(&PTR_DAT_110a21c28);
    func_0x00010b8d71f4(&PTR_DAT_110d72178);
  }
  func_0x00010b8d70d8(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b8d71e8();
  uVar2 = *(undefined8 *)(lVar1 + 0x1c4);
  extraout_x8_00[1] = *(undefined8 *)(lVar1 + 0x1cc);
  *extraout_x8_00 = uVar2;
  *(undefined4 *)(extraout_x8_00 + 2) = *(undefined4 *)(lVar1 + 0x1d4);
  func_0x00010b8d73a4();
  return;
}



/* Entry: 10b8c6b7c; end: 10b8c707f;  */

void FUN_10b8c6b7c(long *****param_1,long *****param_2,long *****param_3,uint param_4,
                  undefined8 param_5,long *****param_6,int param_7,long *****param_8,int *param_9,
                  long *****param_10,long *****param_11)

{
  undefined1 uVar1;
  long *****ppppplVar2;
  long *****ppppplVar3;
  long *****ppppplVar4;
  long *****ppppplVar5;
  uint uVar6;
  undefined8 extraout_x8;
  long ****pppplVar7;
  uint uVar8;
  long lVar9;
  long *****ppppplVar10;
  long ****pppplVar11;
  long *****unaff_x26;
  long ****pppplStack_1a8;
  long ****pppplStack_1a0;
  long ****pppplStack_198;
  long *plStack_190;
  long *plStack_188;
  long ****pppplStack_180;
  long ****pppplStack_178;
  long ****pppplStack_170;
  long ****pppplStack_168;
  long ****pppplStack_160;
  long ****pppplStack_158;
  undefined8 uStack_150;
  long ****pppplStack_148;
  long ****pppplStack_140;
  long ****pppplStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  long ****pppplStack_118;
  long ****pppplStack_110;
  long ****pppplStack_100;
  long ****pppplStack_f8;
  long ****pppplStack_f0;
  long ****pppplStack_e8;
  int iStack_dc;
  undefined1 auStack_d8 [8];
  long ****pppplStack_d0;
  long ****pppplStack_c8;
  long ***ppplStack_a0;
  undefined **ppuStack_98;
  long ****pppplStack_90;
  long ****pppplStack_88;
  undefined8 uStack_70;
  
  ppppplVar2 = param_1;
  pppplStack_f0 = (long ****)param_3;
  pppplStack_e8 = (long ****)param_2;
  iStack_dc = param_7;
  func_0x00010b8cf80c();
  ppppplVar10 = (long *****)ppppplVar2[0x39];
  *param_9 = *param_9 + 1;
  ppppplVar2[0x39] = (long ****)((ulong)ppppplVar10 & 0xffffffffffffffef);
  param_4 = param_4 & (uint)((ulong)ppppplVar10 >> 1) & 1;
  uStack_70 = extraout_x8;
  FUN_10b8c6798();
  pppplVar7 = param_1[0x39];
  uVar6 = (uint)((ulong)pppplVar7 >> 0xd) & 2;
  if (((ulong)pppplVar7 & 0x2000) != 0) {
    uVar6 = 1;
  }
  if (uVar6 == 1) {
    param_5 = 1;
  }
  else if (uVar6 == 2) {
    param_5 = 0;
  }
  ppppplVar3 = ppppplVar2;
  if ((((((uint)pppplVar7 >> 7 & 1) != 0) && ((uint)param_5 != 0)) &&
      (unaff_x26 = (long *****)*ppppplVar2, unaff_x26 != (long *****)0x0)) && (param_4 != 1)) {
    *(int *)((long)param_1 + 0x1a4) = *(int *)((long)param_1 + 0x1a4) + 1;
    func_0x000108108cd0(&pppplStack_d0,param_1);
    pppplStack_f8 = (long ****)param_11;
    ppplStack_a0 = (long ***)FUN_10b8cddc8;
    ppuStack_98 = &PTR_FUN_110d71ea0;
    pppplStack_88 = pppplStack_c8;
    pppplStack_90 = pppplStack_d0;
    pppplStack_d0 = (long ****)0x0;
    pppplStack_c8 = (long ****)0x0;
    param_8 = (long *****)&ppplStack_a0;
    func_0x00010b8a0780(unaff_x26);
    param_11 = (long *****)pppplStack_f8;
    (*(code *)*ppuStack_98)(&ppuStack_98);
    ppppplVar3 = &pppplStack_d0;
    func_0x0001081092d4();
    pppplVar7 = param_1[0x39];
  }
  uVar1 = *(int *)((long)param_1 + 0x1a4) == 0;
  uVar6 = (uint)pppplVar7;
  if ((uVar6 >> 0x11 & 1) == 0) {
    uVar1 = param_1[0x3b] == (long ****)0x0;
    uVar8 = (uint)!(bool)uVar1;
joined_r0x00010b8c6d2c:
    if ((uVar6 >> 6 & 1) != 0) {
      uVar1 = true;
      if (((uint)((ulong)pppplVar7 >> 7) & 1) == (uVar8 & 1)) {
LAB_10b8c6d80:
        if (((((ulong)param_6 & 1) == 0) ||
            (uVar1 = *(int *)((long)param_1 + 0x19c) == 0, *(int *)((long)param_1 + 0x19c) < 1)) &&
           (((uint)ppppplVar10 >> 4 & 1) == 0)) {
          *(int *)param_10 = *(int *)param_10 + *(int *)(param_1 + 0x33);
          *(int *)param_11 = *(int *)param_11 + *(int *)((long)param_1 + 0x19c);
          goto LAB_10b8c6fc4;
        }
      }
      else {
        if ((uVar8 & 1) == 0) {
LAB_10b8c6db8:
          pppplVar7 = (long ****)((ulong)pppplVar7 & 0xffffffffffffff7f);
        }
        else {
          pppplVar7 = (long ****)((ulong)pppplVar7 | 0x80);
        }
        param_1[0x39] = pppplVar7;
      }
      pppplStack_100 = (long ****)CONCAT44(pppplStack_100._4_4_,*(int *)param_10);
      pppplStack_f8 = (long ****)CONCAT44(pppplStack_f8._4_4_,*(int *)param_11);
      if (((uint)pppplVar7 >> 0xf & 1) == 0) {
        pppplStack_c8 = (long ****)0x0;
        pppplStack_d0 = (long ****)param_1;
        func_0x00010b8cf970();
        ppppplVar5 = (long *****)0x1;
        while (ppppplVar10 = ppppplVar5, uVar1 = 1, unaff_x26 = (long *****)-(long)param_8,
              -(long)param_8 + (long)ppppplVar10 != 1) {
          ppppplVar3 = &pppplStack_d0;
          FUN_10b8c71f4(ppppplVar3);
          pppplStack_118 = (long ****)param_10;
          pppplStack_110 = (long ****)param_11;
          func_0x00010b8d00b0();
          func_0x00010b8cf8d0();
          pppplStack_c8 = (long ****)ppppplVar10;
          ppppplVar5 = (long *****)((long)ppppplVar10 + 1);
        }
      }
      else {
        func_0x00010b8cfc7c();
        pppplVar7 = pppplStack_c8;
        for (ppppplVar10 = (long *****)pppplStack_d0; uVar1 = ppppplVar10 == (long *****)pppplVar7,
            !(bool)uVar1; ppppplVar10 = ppppplVar10 + 1) {
          pppplStack_118 = (long ****)param_10;
          pppplStack_110 = (long ****)param_11;
          func_0x00010b8d00b0(*ppppplVar10);
          func_0x00010b8cf8d0();
        }
        ppppplVar3 = &pppplStack_d0;
        FUN_10b8cde80(ppppplVar3);
        param_1 = param_11;
        ppppplVar10 = param_11;
        unaff_x26 = param_10;
      }
      *(int *)(param_1 + 0x33) = *(int *)param_10 - (int)pppplStack_100;
      *(int *)((long)param_1 + 0x19c) = *(int *)param_11 - (int)pppplStack_f8;
      goto LAB_10b8c6fc4;
    }
    if ((uVar8 & 1) == 0) goto LAB_10b8c6d50;
    if ((param_1[0x3b] == (long ****)0x0) &&
       (param_8 = (long *****)param_1[0x3a], param_8 != (long *****)0x0)) {
      pppplVar7 = param_1[0x3c];
      ppppplVar3 = (long *****)0x0;
      if (pppplVar7 == (long ****)0x0) goto LAB_10b8c6ce8;
      func_0x00010b950b58(&pppplStack_d0,pppplVar7,param_8,param_1,1);
      if ((long *****)pppplStack_d0 == (long *****)0x0) {
        ppppplVar3 = (long *****)0x0;
        func_0x0001080c5c80();
        goto LAB_10b8c6ce8;
      }
      func_0x00010b8cfee4();
      param_8 = &pppplStack_d0;
      (*(code *)(*pppplVar7)[7])();
      func_0x00010b8cf8b4();
      FUN_10b8c688c();
      ppppplVar3 = (long *****)pppplStack_d0;
      func_0x0001080c5c80();
      param_9[3] = param_9[3] + 1;
      unaff_x26 = (long *****)0x1;
    }
    else {
LAB_10b8c6ce8:
      unaff_x26 = (long *****)0x0;
    }
    uVar6 = (uint)param_1[0x39];
    pppplStack_100 = (long ****)ppppplVar10;
    if ((int)param_6 == 0) {
      if ((uVar6 >> 7 & 1) == 0) goto LAB_10b8c6e90;
    }
    else {
      if ((uVar6 >> 7 & 1) == 0) {
LAB_10b8c6e90:
        if ((long ****)*pppplStack_f0 == (long ****)0x0) goto LAB_10b8c6ee4;
      }
      else if ((long ****)*pppplStack_f0 == (long ****)0x0) {
        ppppplVar3 = param_1;
        param_8 = (long *****)pppplStack_e8;
        FUN_10b8c66b8(param_1);
        goto LAB_10b8c6ee4;
      }
      if (param_1[0x3b] != (long ****)0x0) {
        param_1[0x39] = (long ****)((ulong)param_1[0x39] | 0x80);
        func_0x00010b8cfee4();
        param_8 = (long *****)pppplStack_f0;
        (*(code *)(*ppppplVar3)[8])();
        param_9[1] = param_9[1] + 1;
        func_0x00010b8cf8b4();
        FUN_10b8c7200();
        func_0x00010b8cf8b4();
        FUN_10b8c7268();
      }
    }
LAB_10b8c6ee4:
    if (*(char *)(param_1 + 0x39) < '\0') {
      *(int *)param_10 = *(int *)param_10 + 1;
    }
    *(int *)param_11 = *(int *)param_11 + 1;
    ppppplVar10 = (long *****)pppplStack_100;
LAB_10b8c6f08:
    if ((((uint)ppppplVar10 >> 4 & 1) == 0) && ((int)unaff_x26 == 0)) goto LAB_10b8c6fc4;
  }
  else {
    if (iStack_dc != 0) {
      uVar8 = (uint)param_5 ^ 1 | 0 < *(int *)((long)param_1 + 0x1a4) | param_4;
      goto joined_r0x00010b8c6d2c;
    }
    if ((uVar6 >> 6 & 1) != 0) {
      if ((uVar6 >> 7 & 1) != 0) goto LAB_10b8c6db8;
      goto LAB_10b8c6d80;
    }
LAB_10b8c6d50:
    ppppplVar3 = param_1;
    param_8 = (long *****)pppplStack_e8;
    FUN_10b8c6a94(param_1,pppplStack_e8,0);
    unaff_x26 = (long *****)0x0;
    if ((int)ppppplVar3 == 0) goto LAB_10b8c6f08;
    param_9[2] = param_9[2] + 1;
    unaff_x26 = (long *****)0x1;
  }
  auStack_d8 = (undefined1  [8])0x0;
  if (*(char *)((long)param_1 + 0x1c9) < '\0') {
    func_0x00010b8cfc7c();
    ppppplVar5 = (long *****)pppplStack_c8;
    ppppplVar10 = (long *****)auStack_d8;
    param_6 = (long *****)(auStack_d8 + 4);
    for (param_10 = (long *****)pppplStack_d0; uVar1 = param_10 == ppppplVar5, !(bool)uVar1;
        param_10 = param_10 + 1) {
      pppplStack_118 = (long ****)param_6;
      pppplStack_110 = (long ****)ppppplVar10;
      func_0x00010b8d00b0(*param_10);
      func_0x00010b8cf8d0();
    }
    ppppplVar3 = &pppplStack_d0;
    FUN_10b8cde80(ppppplVar3);
  }
  else {
    pppplStack_c8 = (long ****)0x0;
    pppplStack_d0 = (long ****)param_1;
    func_0x00010b8cf970();
    ppppplVar10 = (long *****)-(long)param_8;
    param_10 = (long *****)auStack_d8;
    ppppplVar5 = (long *****)0x1;
    while (param_6 = ppppplVar5, uVar1 = 1, ppppplVar5 = (long *****)(auStack_d8 + 4),
          param_11 = param_1, (long)ppppplVar10 + (long)param_6 != 1) {
      ppppplVar3 = &pppplStack_d0;
      FUN_10b8c71f4();
      pppplStack_118 = (long ****)(auStack_d8 + 4);
      pppplStack_110 = (long ****)param_10;
      func_0x00010b8d00b0();
      func_0x00010b8cf8d0();
      pppplStack_c8 = (long ****)param_6;
      ppppplVar5 = (long *****)((long)param_6 + 1);
    }
  }
  param_1 = ppppplVar5;
  *(undefined4 *)(param_11 + 0x33) = auStack_d8._4_4_;
  *(undefined4 *)((long)param_11 + 0x19c) = auStack_d8._0_4_;
LAB_10b8c6fc4:
  func_0x00010b8cf7e8(uStack_70);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  pcStack_128 = FUN_10b8c7080;
  pppplStack_170 = (long ****)unaff_x26;
  pppplStack_168 = (long ****)param_6;
  pppplStack_160 = (long ****)ppppplVar10;
  pppplStack_158 = (long ****)ppppplVar2;
  uStack_150 = param_5;
  pppplStack_148 = (long ****)param_11;
  pppplStack_140 = (long ****)param_1;
  pppplStack_138 = (long ****)param_10;
  puStack_130 = &stack0xfffffffffffffff0;
  func_0x00010b8cf9f0();
  FUN_10b8cbd2c(ppppplVar3);
  func_0x00010b8cfb2c();
  func_0x00010b8cfbe4();
  func_0x00010b8cbd64();
  pppplStack_1a0 = (long ****)0x0;
  pppplStack_1a8 = (long ****)param_1;
  func_0x00010b8cf970();
  ppppplVar10 = param_10 + 2;
  func_0x00010b8d007c();
  while (ppppplVar3 = ppppplVar2, func_0x00010b8d0070(), !(bool)uVar1) {
    ppppplVar2 = &pppplStack_1a8;
    FUN_10b8c71f4();
    pppplVar7 = param_10[1];
    uVar1 = pppplVar7 == param_10[2];
    if (pppplVar7 < param_10[2]) {
      pppplVar11 = pppplVar7 + 1;
      *pppplVar7 = (long ***)ppppplVar2;
    }
    else {
      ppppplVar4 = param_10;
      FUN_10b8cd710(param_10,((long)pppplVar7 - (long)*param_10 >> 3) + 1);
      pppplVar7 = *param_10;
      pppplVar11 = param_10[1];
      ppppplVar5 = (long *****)0x0;
      pppplStack_178 = (long ****)ppppplVar10;
      if (ppppplVar4 != (long *****)0x0) {
        ppppplVar5 = ppppplVar10;
        FUN_10b8cd684();
      }
      plStack_190 = (long *)((long)ppppplVar5 + ((long)pppplVar11 - (long)pppplVar7));
      pppplStack_180 = (long ****)(ppppplVar5 + (long)ppppplVar4);
      plStack_188 = plStack_190 + 1;
      *plStack_190 = (long)ppppplVar2;
      pppplStack_198 = (long ****)ppppplVar5;
      FUN_10b8cd64c(param_10,&pppplStack_198);
      pppplVar11 = param_10[1];
      FUN_10b8cd6c0(&pppplStack_198);
    }
    param_10[1] = pppplVar11;
    ppppplVar2 = (long *****)((long)ppppplVar3 + 1);
    pppplStack_1a0 = (long ****)ppppplVar3;
  }
  lVar9 = (long)param_10[1] - (long)*param_10 >> 3;
  pppplStack_198 = (long ****)0x0;
  plStack_190 = (long *)0x0;
  if (0x80 < lVar9) {
    FUN_10b8ce954(&pppplStack_1a8,lVar9);
    FUN_10b8ce99c(&pppplStack_198,&pppplStack_1a8);
    FUN_10b8ceb6c(&pppplStack_1a8);
  }
  func_0x00010b8cf8b4();
  FUN_10b8ce9cc();
  FUN_10b8ceb6c(&pppplStack_198);
  return;
}



/* Entry: 10b8c7080; end: 10b8c71d3;  */

void FUN_10b8c7080(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  undefined1 in_ZR;
  undefined1 *puVar3;
  long *plVar4;
  long *unaff_x19;
  long lVar5;
  long *plVar6;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  
  func_0x00010b8cf9f0();
  FUN_10b8cbd2c(param_1);
  func_0x00010b8cfb2c();
  func_0x00010b8cfbe4();
  func_0x00010b8cbd64();
  func_0x00010b8cf970();
  plVar1 = unaff_x19 + 2;
  func_0x00010b8d007c();
  while (func_0x00010b8d0070(), !(bool)in_ZR) {
    puVar3 = &stack0xffffffffffffff78;
    FUN_10b8c71f4();
    plVar4 = (long *)unaff_x19[1];
    in_ZR = plVar4 == (long *)unaff_x19[2];
    if (plVar4 < (long *)unaff_x19[2]) {
      plVar6 = plVar4 + 1;
      *plVar4 = (long)puVar3;
    }
    else {
      plVar6 = unaff_x19;
      FUN_10b8cd710();
      lVar5 = *unaff_x19;
      lVar2 = unaff_x19[1];
      plVar4 = (long *)0x0;
      plStack_58 = plVar1;
      if (plVar6 != (long *)0x0) {
        plVar4 = plVar1;
        FUN_10b8cd684();
      }
      plStack_70 = (long *)((long)plVar4 + (lVar2 - lVar5));
      plStack_60 = plVar4 + (long)plVar6;
      plStack_68 = plStack_70 + 1;
      *plStack_70 = (long)puVar3;
      plStack_78 = plVar4;
      FUN_10b8cd64c();
      plVar6 = (long *)unaff_x19[1];
      FUN_10b8cd6c0(&plStack_78);
    }
    unaff_x19[1] = (long)plVar6;
  }
  lVar5 = unaff_x19[1] - *unaff_x19 >> 3;
  plStack_78 = (long *)0x0;
  plStack_70 = (long *)0x0;
  if (0x80 < lVar5) {
    FUN_10b8ce954(&stack0xffffffffffffff78,lVar5);
    FUN_10b8ce99c(&plStack_78,&stack0xffffffffffffff78);
    FUN_10b8ceb6c(&stack0xffffffffffffff78);
  }
  func_0x00010b8cf8b4();
  FUN_10b8ce9cc();
  FUN_10b8ceb6c(&plStack_78);
  return;
}



/* Entry: 10b8c71d4; end: 10b8c71f3;  */

void FUN_10b8c71d4(void)

{
  FUN_10b8c6828();
  func_0x00010b8cfbe4();
  return;
}



/* Entry: 10b8c71f4; end: 10b8c71ff;  */

undefined8 FUN_10b8c71f4(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)(*param_1 + 0x40);
  if ((plVar1 == (long *)0x0) || (lVar2 = *plVar1, lVar2 == 0)) {
    lVar2 = *(long *)(*param_1 + 0x18);
  }
  FUN_10b8c9e0c(lVar2,param_1[1]);
  return *(undefined8 *)(lVar2 + 8);
}



/* Entry: 10b8c7200; end: 10b8c7267;  */

void FUN_10b8c7200(long *param_1)

{
  long *plVar1;
  
  if ((((param_1[0x3b] != 0) && (param_1[0x30] != 0)) && (*(char *)(param_1[0x30] + 0x47) == '\x01')
      ) && (func_0x00010b8cfc74(), *(char *)((long)param_1 + 0x45) == '\x01')) {
    *(undefined1 *)((long)param_1 + 0x45) = 0;
    func_0x00010b8cf8b4();
    if (param_1[0x3b] != 0) {
      param_1[0x39] = param_1[0x39] | 1;
      plVar1 = param_1;
      func_0x00010b8cfc8c();
      (**(code **)(*plVar1 + 0x60))();
      param_1[0x39] = param_1[0x39] & 0xfffffffffffffffe;
    }
    return;
  }
  return;
}



/* Entry: 10b8c7268; end: 10b8c74ab;  */

void FUN_10b8c7268(long param_1,undefined8 param_2,long *param_3)

{
  ulong uVar1;
  
  if ((((uint)*(ulong *)(param_1 + 0x1c8) >> 0xb & 1) != 0) && (*(long *)(param_1 + 0x1d8) != 0)) {
    *(ulong *)(param_1 + 0x1c8) = *(ulong *)(param_1 + 0x1c8) & 0xfffffffffffff7ff;
    if (*param_3 != 0) {
      uVar1 = param_1 + 0x160;
      func_0x00010b9ad778();
      if ((uVar1 & 1) == 0) {
        func_0x00010b8cf8b4();
        FUN_10b8cb644();
        func_0x00010b8cf9ac();
        func_0x00010b8cf8b4();
        FUN_10b8cb644();
        return;
      }
    }
    func_0x00010b8cf8b4();
    FUN_10b8cb644();
    func_0x00010b8cf9ac();
  }
  return;
}



/* Entry: 10b8c74ac; end: 10b8c74cf;  */

void FUN_10b8c74ac(void)

{
  func_0x00010b8cf894();
  func_0x00010b8cf8b4();
  FUN_10b8ccd10();
  return;
}



/* Entry: 10b8c74d0; end: 10b8c74ff;  */

void FUN_10b8c74d0(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  
  if (*(long *)(param_2 + 0x1d0) != 0) {
    lVar4 = *(long *)(*(long *)(param_2 + 0x1d0) + 0x38);
    lVar5 = 0;
    if ((lVar4 != 0) && (lVar5 = *(long *)(*(long *)(lVar4 + 0x40) + 0x50), lVar5 != 0)) {
      plVar1 = (long *)(lVar5 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    *param_1 = lVar5;
    return;
  }
  *param_1 = 0;
  return;
}



/* Entry: 10b8c7500; end: 10b8c764f;  */

undefined1 * FUN_10b8c7500(undefined1 *param_1)

{
  undefined1 in_ZR;
  int iVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 extraout_x8;
  long unaff_x19;
  uint uVar4;
  undefined1 *puStack_d8;
  undefined1 auStack_b8 [8];
  undefined1 uStack_b0;
  undefined1 uStack_60;
  undefined4 uStack_58;
  undefined3 uStack_54;
  undefined1 uStack_51;
  undefined8 uStack_48;
  
  func_0x00010b8d0028();
  func_0x00010b8cf80c();
  uStack_48 = extraout_x8;
  func_0x00010b8cf8c0();
  if ((puStack_d8 == (undefined1 *)0x0) &&
     (param_1 = *(undefined1 **)(unaff_x19 + 0x1d0), param_1 != (undefined1 *)0x0)) {
    func_0x00010b8d3998(auStack_b8);
    uStack_58 = (undefined4)auStack_b8._1_7_;
    _uStack_54 = CONCAT13(uStack_b0,SUB73(auStack_b8._1_7_,4));
  }
  uVar4 = 0;
  while( true ) {
    iVar1 = (int)param_1;
    auStack_b8[0] = 0;
    uStack_60 = 0;
    func_0x000105c3b044();
    if (iVar1 != 0) {
      FUN_10b8c7650(auStack_b8,&UNK_10f7cb568);
    }
    uStack_58 = 0;
    __ZNSt3__16chrono12steady_clock3nowEv();
    lVar2 = unaff_x19;
    FUN_10b8c7674();
    uVar4 = uVar4 | (uint)lVar2;
    if (((*(byte *)(unaff_x19 + 0x1c9) >> 2 & 1) == 0) ||
       ((**(byte **)(unaff_x19 + 0x18) >> 2 & 1) != 0)) break;
    func_0x00010b8cfde0();
    FUN_10b8c7964();
    param_1 = auStack_b8;
    func_0x0001080e8dd4();
  }
  puVar3 = auStack_b8;
  func_0x0001080e8dd4(puVar3);
  func_0x00010b8cfde0();
  func_0x00010b8c7318();
  if ((uVar4 & 1) != 0) {
    puVar3 = *(undefined1 **)(unaff_x19 + 0x1d0);
    FUN_10b8d43b8(puVar3);
  }
  func_0x00010b8cf9a4();
  func_0x00010b8cf7e8(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b8cf894();
    func_0x00010b8cf8b4();
    FUN_10b8ccd58();
    return puStack_d8;
  }
  return puVar3;
}



/* Entry: 10b8c7650; end: 10b8c7673;  */

void FUN_10b8c7650(void)

{
  func_0x00010b8cf894();
  func_0x00010b8cf8b4();
  FUN_10b8ccd58();
  return;
}



/* Entry: 10b8c7674; end: 10b8c7963;  */

uint FUN_10b8c7674(float param_1,float param_2,float param_3,float param_4,long param_5,
                  ulong param_6,ulong param_7,ulong param_8,int *param_9)

{
  undefined8 *puVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  int *piVar7;
  long unaff_x19;
  undefined8 uVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  undefined8 *puVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  
  iVar2 = (int)&uStack_d0;
  piVar7 = param_9;
  func_0x00010b8d0028();
  *piVar7 = *piVar7 + 1;
  uVar10 = *(ulong *)(param_5 + 0x1c8);
  uVar9 = (uint)uVar10;
  if (((param_7 & 1) == 0) && ((uVar9 >> 2 & 1) == 0)) {
    uVar8 = 0;
    uVar11 = 0;
    if ((uVar9 >> 3 & 1) == 0) goto LAB_10b8c78ec;
  }
  else {
    uStack_d0 = (undefined8 *)0x0;
    uStack_c8 = (undefined8 *)0x0;
    if ((param_8 & 1) == 0) {
      if ((uVar9 >> 1 & 1) == 0) goto LAB_10b8c7824;
LAB_10b8c7758:
      uVar8 = 0;
      *(ulong *)(unaff_x19 + 0x1c8) = uVar10 & 0xfffffffffffffffd;
LAB_10b8c77f8:
      func_0x00010b8cfca4();
      if (((*(byte *)(unaff_x19 + 0x1ca) >> 3 & 1) != 0) &&
         (lVar5 = *(long *)(*(long *)(unaff_x19 + 0x1d0) + 0xa8), lVar5 != 0)) {
        func_0x00010b8d9454(lVar5,*(undefined4 *)(unaff_x19 + 0x1ac),uVar8);
      }
      uVar11 = 1;
    }
    else {
      FUN_10b8c7a80();
      uVar10 = *(ulong *)(unaff_x19 + 0x1c8);
      uVar11 = (uint)uVar10;
      fVar13 = param_2;
      fVar15 = param_1;
      fStack_80 = param_1;
      fStack_7c = param_2;
      fStack_78 = param_3;
      fStack_74 = param_4;
      if ((uVar11 >> 0x17 & 1) == 0) {
        iVar4 = (int)&fStack_80;
        fVar14 = param_3;
        fVar16 = param_4;
        func_0x00010b9ad720();
        if (iVar4 == 0) {
          if ((uVar11 >> 1 & 1) != 0) goto LAB_10b8c7758;
          goto LAB_10b8c7824;
        }
        func_0x00010b9ad7c0(&fStack_80);
        uStack_c8 = (undefined8 *)CONCAT44(fVar16,fVar14);
      }
      else {
        uStack_c8 = (undefined8 *)CONCAT44(param_4,param_3);
      }
      fVar15 = fVar15 - param_1;
      fVar13 = fVar13 - param_2;
      fVar14 = *(float *)(unaff_x19 + 0x178);
      if (0.0 <= fVar14) {
        bVar3 = true;
        if ((0.0 < fVar14) && (bVar3 = false, !NAN(fVar14))) {
          bVar3 = fVar14 == 1.0;
        }
        if (!bVar3) {
          fVar15 = fVar15 / fVar14;
          goto LAB_10b8c777c;
        }
      }
      else {
        fVar14 = -fVar14;
        fVar15 = (param_3 - (fVar15 + (float)uStack_c8)) / fVar14;
LAB_10b8c777c:
        uStack_c8 = (undefined8 *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8 / fVar14);
      }
      fVar14 = *(float *)(unaff_x19 + 0x17c);
      if (0.0 <= fVar14) {
        bVar3 = true;
        if ((0.0 < fVar14) && (bVar3 = false, !NAN(fVar14))) {
          bVar3 = fVar14 == 1.0;
        }
        if (!bVar3) {
          fVar13 = fVar13 / fVar14;
          goto LAB_10b8c77c0;
        }
      }
      else {
        fVar14 = -fVar14;
        fVar13 = (param_4 - (fVar13 + uStack_c8._4_4_)) / fVar14;
LAB_10b8c77c0:
        uStack_c8 = (undefined8 *)CONCAT44(uStack_c8._4_4_ / fVar14,(float)uStack_c8);
      }
      uStack_d0 = (undefined8 *)CONCAT44(fVar13,fVar15);
      if (*(long *)(unaff_x19 + 0x180) != 0) {
        func_0x00010b8d1ca4(*(long *)(unaff_x19 + 0x180),&uStack_d0);
      }
      if ((uVar11 >> 1 & 1) == 0) {
        *(ulong *)(unaff_x19 + 0x1c8) = uVar10 | 2;
        if ((uVar11 >> 8 & 1) != 0) {
          FUN_10b8c8684();
        }
        uVar8 = 1;
        goto LAB_10b8c77f8;
      }
LAB_10b8c7824:
      uVar11 = 0;
    }
    param_6 = unaff_x19 + 0x130;
    FUN_10b9ad8a8();
    if (iVar2 == 0) {
      if ((uVar9 >> 3 & 1) == 0) goto LAB_10b8c78ec;
      uVar8 = 0;
    }
    else {
      *(undefined8 **)(unaff_x19 + 0x138) = uStack_c8;
      *(undefined8 **)(unaff_x19 + 0x130) = uStack_d0;
      if (((*(byte *)(unaff_x19 + 0x1ca) >> 3 & 1) != 0) &&
         (lVar5 = *(long *)(*(long *)(unaff_x19 + 0x1d0) + 0xa8), lVar5 != 0)) {
        param_6 = (ulong)*(uint *)(unaff_x19 + 0x1ac);
        func_0x00010b8d95b0(lVar5,param_6,&uStack_d0);
      }
      uVar8 = 1;
      uVar11 = 1;
    }
  }
  lVar5 = *(long *)(unaff_x19 + 400);
  if (lVar5 == 0) {
    func_0x00010b8cffa0();
    puVar1 = (undefined8 *)0x1;
    while (puVar12 = puVar1, (long)puVar12 - param_6 != 1) {
      func_0x00010b8cf90c();
      func_0x00010b8cfb3c();
      uVar11 = uVar11 | (uint)lVar5;
      uStack_c8 = puVar12;
      puVar1 = (undefined8 *)((long)puVar12 + 1);
    }
  }
  else {
    func_0x00010b8d125c(&uStack_d0,lVar5,unaff_x19 + 0x130);
    for (; puVar1 = uStack_c8, puVar12 = uStack_d0, puStack_a8 != puStack_a0;
        puStack_a8 = puStack_a8 + 1) {
      uVar6 = *puStack_a8;
      FUN_10b8c7674(uVar6,unaff_x19 + 0x130,uVar8,0,param_9);
      uVar11 = uVar11 | (uint)uVar6;
    }
    for (; puVar12 != puVar1; puVar12 = puVar12 + 1) {
      uVar8 = *puVar12;
      func_0x00010b8cfb3c(uVar8);
      uVar11 = uVar11 | (uint)uVar8;
    }
    FUN_10b8cde80(&puStack_a8);
    FUN_10b8cde80(&uStack_d0);
  }
LAB_10b8c78ec:
  *(ulong *)(unaff_x19 + 0x1c8) = *(ulong *)(unaff_x19 + 0x1c8) & 0xfffffffffffffff3;
  return uVar11 & 1;
}



/* Entry: 10b8c7964; end: 10b8c7a7f;  */

long FUN_10b8c7964(long param_1,long param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  bool bVar1;
  int iVar2;
  undefined8 extraout_x8;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  float fVar6;
  ulong uVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  ulong uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined1 auStack_b8 [96];
  undefined8 uStack_58;
  ulong uVar11;
  
  lVar3 = param_1;
  func_0x00010b8cf80c();
  if (*(long *)(lVar3 + 0x1d0) == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(*(long *)(lVar3 + 0x1d0) + 0xb0);
  }
  uStack_58 = extraout_x8;
  func_0x00010b8cff88();
  iVar2 = (int)lVar3;
  if (lStack_c0 == 0) {
    uVar5 = 0;
    uVar16 = 0;
  }
  else {
    lVar3 = *(long *)(lStack_c0 + 0x180);
    uVar16 = 0;
    if ((lVar3 != 0) && (in_ZR = *(char *)(lVar3 + 0x47) == '\x01', (bool)in_ZR)) {
      uVar16 = *(undefined4 *)(lVar3 + 0x20);
    }
    uVar5 = *(undefined8 *)(lStack_c0 + 400);
  }
  func_0x00010b8cfa84();
  if (iVar2 != 0) {
    FUN_10b8c7e08(auStack_b8,&UNK_10f7cb62f);
  }
  uVar7 = (ulong)(uint)(*(float *)(param_1 + 0x150) - *(float *)(param_1 + 0x140));
  uStack_c8 = 0;
  FUN_10b8caa80(uVar7,*(float *)(param_1 + 0x154) - *(float *)(param_1 + 0x144),uVar16,param_1,
                param_2,param_3,&uStack_c8,uVar5,lVar4);
  lVar3 = param_1;
  func_0x00010b8cf9ac();
  if (lVar4 != 0) {
    func_0x00010b8d8b58();
    lVar3 = lVar4;
  }
  func_0x00010b8cfea8();
  func_0x00010b8cf9a4();
  func_0x00010b8cf7e8(uStack_58);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  lVar4 = lVar3;
  FUN_10b8c8a38();
  uVar8 = uVar7;
  func_0x00010b8cffe0();
  fVar6 = *(float *)(lVar3 + 0x178);
  fVar10 = *(float *)(lVar3 + 0x17c);
  uVar11 = (ulong)(uint)fVar10;
  uVar12 = 0x3f800000;
  bVar1 = false;
  if ((fVar6 == 1.0) && (bVar1 = false, !NAN(fVar10))) {
    bVar1 = fVar10 == 1.0;
  }
  if (bVar1) {
    lVar4 = lVar3 + 0x140;
    func_0x00010b9ad7ac(lVar4);
    uVar17 = uVar11;
    uVar18 = uVar12;
    uVar19 = uVar8;
    uVar20 = uVar7;
  }
  else {
    fVar14 = *(float *)(lVar3 + 0x148);
    fVar13 = (float)uVar7 + *(float *)(lVar3 + 0x140) + (1.0 - fVar6) * fVar14 * 0.5;
    fVar9 = (float)uVar8 +
            *(float *)(lVar3 + 0x144) + (1.0 - fVar10) * *(float *)(lVar3 + 0x14c) * 0.5;
    uVar8 = (ulong)(uint)fVar9;
    fVar15 = fVar6 * fVar14;
    fVar10 = fVar10 * *(float *)(lVar3 + 0x14c);
    uVar11 = (ulong)(uint)fVar10;
    fVar6 = -(fVar6 * fVar14);
    if (0.0 <= fVar15) {
      fVar6 = fVar15;
    }
    uVar17 = (ulong)(uint)fVar6;
    fVar6 = fVar15 + fVar13;
    if (0.0 <= fVar15) {
      fVar6 = fVar13;
    }
    uVar20 = (ulong)(uint)fVar6;
    uVar7 = (ulong)(uint)(fVar10 + fVar9);
    uVar12 = (ulong)(uint)-fVar10;
    fVar6 = fVar10;
    if (fVar10 < 0.0) {
      fVar6 = -fVar10;
    }
    uVar18 = (ulong)(uint)fVar6;
    if (fVar10 < 0.0) {
      fVar9 = fVar10 + fVar9;
    }
    uVar19 = (ulong)(uint)fVar9;
  }
  if ((*(byte *)(lVar3 + 0x1ca) >> 6 & 1) != 0) {
    func_0x00010b8cffa0();
    lVar3 = 1;
    while( true ) {
      fVar6 = (float)uVar8;
      fVar10 = (float)uVar7;
      if (lVar3 - param_2 == 1) break;
      func_0x00010b8cf90c();
      FUN_10b8c7a80();
      fVar15 = (float)uVar20;
      fVar9 = fVar10;
      if (fVar15 <= fVar10) {
        fVar9 = fVar15;
      }
      fVar14 = (float)uVar19;
      fVar13 = fVar6;
      if (fVar14 <= fVar6) {
        fVar13 = fVar14;
      }
      fVar15 = fVar9 + (float)uVar17 + (fVar15 - fVar9);
      fVar10 = fVar10 + (float)uVar11;
      if (fVar10 <= fVar15) {
        fVar10 = fVar15;
      }
      uVar17 = (ulong)(uint)(fVar10 - fVar9);
      fVar10 = fVar13 + (float)uVar18 + (fVar14 - fVar13);
      fVar6 = fVar6 + (float)uVar12;
      uVar8 = (ulong)(uint)fVar6;
      if (fVar6 <= fVar10) {
        fVar6 = fVar10;
      }
      uVar7 = (ulong)(uint)fVar6;
      uVar18 = (ulong)(uint)(fVar6 - fVar13);
      lVar3 = lVar3 + 1;
      uVar19 = (ulong)(uint)fVar13;
      uVar20 = (ulong)(uint)fVar9;
    }
  }
  return lVar4;
}



/* Entry: 10b8c7a80; end: 10b8c7beb;  */

ulong FUN_10b8c7a80(ulong param_1,long param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  float fVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  ulong uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar7;
  
  FUN_10b8c8a38();
  uVar4 = param_1;
  func_0x00010b8cffe0();
  fVar3 = *(float *)(param_2 + 0x178);
  fVar6 = *(float *)(param_2 + 0x17c);
  uVar7 = (ulong)(uint)fVar6;
  uVar8 = 0x3f800000;
  bVar1 = false;
  if ((fVar3 == 1.0) && (bVar1 = false, !NAN(fVar6))) {
    bVar1 = fVar6 == 1.0;
  }
  if (bVar1) {
    func_0x00010b9ad7ac(param_2 + 0x140);
    uVar12 = uVar7;
    uVar13 = uVar8;
    uVar14 = uVar4;
    uVar15 = param_1;
  }
  else {
    fVar10 = *(float *)(param_2 + 0x148);
    fVar9 = (float)param_1 + *(float *)(param_2 + 0x140) + (1.0 - fVar3) * fVar10 * 0.5;
    fVar5 = (float)uVar4 +
            *(float *)(param_2 + 0x144) + (1.0 - fVar6) * *(float *)(param_2 + 0x14c) * 0.5;
    uVar4 = (ulong)(uint)fVar5;
    fVar11 = fVar3 * fVar10;
    fVar6 = fVar6 * *(float *)(param_2 + 0x14c);
    uVar7 = (ulong)(uint)fVar6;
    fVar3 = -(fVar3 * fVar10);
    if (0.0 <= fVar11) {
      fVar3 = fVar11;
    }
    uVar12 = (ulong)(uint)fVar3;
    fVar3 = fVar11 + fVar9;
    if (0.0 <= fVar11) {
      fVar3 = fVar9;
    }
    uVar15 = (ulong)(uint)fVar3;
    param_1 = (ulong)(uint)(fVar6 + fVar5);
    uVar8 = (ulong)(uint)-fVar6;
    fVar3 = fVar6;
    if (fVar6 < 0.0) {
      fVar3 = -fVar6;
    }
    uVar13 = (ulong)(uint)fVar3;
    if (fVar6 < 0.0) {
      fVar5 = fVar6 + fVar5;
    }
    uVar14 = (ulong)(uint)fVar5;
  }
  if ((*(byte *)(param_2 + 0x1ca) >> 6 & 1) != 0) {
    func_0x00010b8cffa0();
    lVar2 = 1;
    while( true ) {
      fVar3 = (float)uVar4;
      fVar6 = (float)param_1;
      if (lVar2 - param_3 == 1) break;
      func_0x00010b8cf90c();
      FUN_10b8c7a80();
      fVar11 = (float)uVar15;
      fVar5 = fVar6;
      if (fVar11 <= fVar6) {
        fVar5 = fVar11;
      }
      fVar10 = (float)uVar14;
      fVar9 = fVar3;
      if (fVar10 <= fVar3) {
        fVar9 = fVar10;
      }
      fVar11 = fVar5 + (float)uVar12 + (fVar11 - fVar5);
      fVar6 = fVar6 + (float)uVar7;
      if (fVar6 <= fVar11) {
        fVar6 = fVar11;
      }
      uVar12 = (ulong)(uint)(fVar6 - fVar5);
      fVar6 = fVar9 + (float)uVar13 + (fVar10 - fVar9);
      fVar3 = fVar3 + (float)uVar8;
      uVar4 = (ulong)(uint)fVar3;
      if (fVar3 <= fVar6) {
        fVar3 = fVar6;
      }
      param_1 = (ulong)(uint)fVar3;
      uVar13 = (ulong)(uint)(fVar3 - fVar9);
      lVar2 = lVar2 + 1;
      uVar14 = (ulong)(uint)fVar9;
      uVar15 = (ulong)(uint)fVar5;
    }
  }
  return uVar15;
}



/* Entry: 10b8c7bec; end: 10b8c7c2f;  */

void FUN_10b8c7bec(long param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 2) {
    uVar1 = *(ulong *)(param_1 + 0x1c8) & 0xffffffffffff9fff | 0x4000;
  }
  else if (param_2 == 1) {
    uVar1 = *(ulong *)(param_1 + 0x1c8) & 0xffffffffffff9fff | 0x2000;
  }
  else {
    if (param_2 != 0) {
      return;
    }
    uVar1 = *(ulong *)(param_1 + 0x1c8) & 0xffffffffffff9fff;
  }
  *(ulong *)(param_1 + 0x1c8) = uVar1;
  return;
}



/* Entry: 10b8c7c30; end: 10b8c7c97;  */

void FUN_10b8c7c30(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  bool bVar2;
  undefined8 uStack_38;
  
  func_0x0001080da434();
  bVar2 = false;
  *param_1 = param_2;
  do {
    func_0x00010b8cf8c0(*param_1);
    if (uStack_38 == 0) {
      lVar1 = 0;
      bVar2 = true;
    }
    else {
      func_0x00010b8cfabc();
      FUN_10b8c7c98();
      lVar1 = uStack_38;
    }
    func_0x0001080d289c(lVar1);
  } while (uStack_38 != 0);
  if (!bVar2) {
    func_0x0001080da474(param_1);
  }
  return;
}



/* Entry: 10b8c7c98; end: 10b8c7cbf;  */

void FUN_10b8c7c98(void)

{
  undefined1 in_ZR;
  
  func_0x00010b8cfcb4();
  if (!(bool)in_ZR) {
    func_0x00010b8d005c();
    func_0x0001080d289c();
  }
  return;
}



/* Entry: 10b8c7cc0; end: 10b8c7e07;  */

void FUN_10b8c7cc0(int param_1,undefined8 param_2,float *param_3,int param_4)

{
  float fVar1;
  bool bVar2;
  undefined1 uVar3;
  float *pfVar4;
  undefined8 extraout_x8;
  float *unaff_x19;
  undefined1 auStack_a8 [96];
  undefined8 uStack_48;
  
  func_0x00010b8cf9f0();
  func_0x00010b8cf80c();
  uStack_48 = extraout_x8;
  func_0x00010b8cfa84();
  if (param_1 != 0) {
    FUN_10b8c7e08(auStack_a8,&UNK_10f7cb57f);
  }
  pfVar4 = unaff_x19;
  func_0x00010b8c7e2c();
  fVar1 = pfVar4[0x10];
  uVar3 = *param_3 == *pfVar4;
  if ((bool)uVar3) {
    bVar2 = param_3[1] != pfVar4[1];
    uVar3 = fVar1 == 1.4013e-45;
    if ((((int)fVar1 < 2) && ((*(byte *)((long)pfVar4 + 0x46) & 1) == 0)) &&
       (uVar3 = param_3[1] == pfVar4[1], (bool)uVar3)) goto LAB_10b8c7ddc;
  }
  else {
    bVar2 = true;
  }
  if ((param_4 == 0) || (*(long *)(unaff_x19 + 0x76) == 0)) {
    uVar3 = fVar1 == 1.4013e-45;
    func_0x00010b8d1d44(pfVar4,param_3,param_3);
    *(undefined2 *)((long)pfVar4 + 0x45) = 1;
    func_0x00010b8cfac8();
    FUN_10b8c7200();
    if (1 < (int)fVar1 || bVar2) {
      func_0x00010b8d1c8c(pfVar4);
      func_0x00010b8cfcc8();
      FUN_10b8c7efc();
      FUN_10b8c7fcc();
    }
  }
  else {
    *(undefined1 *)((long)pfVar4 + 0x46) = 1;
    func_0x00010b8cfac8();
    func_0x00010b8c7e74();
  }
LAB_10b8c7ddc:
  func_0x00010b8cfea8();
  func_0x00010b8cf7e8(uStack_48);
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b8cf894();
  func_0x00010b8cf8b4();
  FUN_10b8ccda0();
  return;
}



/* Entry: 10b8c7e08; end: 10b8c7efb;  */

void FUN_10b8c7e08(void)

{
  func_0x00010b8cf894();
  func_0x00010b8cf8b4();
  FUN_10b8ccda0();
  return;
}



/* Entry: 10b8c7efc; end: 10b8c7fcb;  */

void FUN_10b8c7efc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  int iVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  long lVar4;
  long lStack_e0;
  code *pcStack_d8;
  undefined **ppuStack_d0;
  long lStack_c8;
  undefined1 auStack_a8 [88];
  undefined1 uStack_50;
  undefined8 uStack_48;
  
  lVar2 = param_1;
  func_0x00010b8cf80c();
  iVar1 = (int)lVar2;
  auStack_a8[0] = 0;
  uStack_50 = 0;
  uStack_48 = extraout_x8;
  func_0x000105c3b044();
  if (iVar1 != 0) {
    FUN_10b8c74ac(auStack_a8);
  }
  lVar2 = *(long *)(param_1 + 0x1d0);
  func_0x00010b8ce368();
  lVar4 = *(long *)(lVar2 + 0x20);
  pcStack_d8 = FUN_10b8ccde8;
  ppuStack_d0 = &PTR_FUN_110d71cf0;
  lStack_e0 = lVar2;
  func_0x00010b8cfc18();
  *(long **)lVar2 = &lStack_e0;
  *(long *)(lVar2 + 8) = param_1;
  *(undefined8 *)(lVar2 + 0x10) = param_2;
  *(undefined8 *)(lVar2 + 0x18) = param_3;
  *(undefined8 *)(lVar2 + 0x20) = param_4;
  lStack_c8 = lVar2;
  (**(code **)(lVar4 + 0x30))(&pcStack_d8);
  func_0x00010b8d0114();
  (*extraout_x8_00)(&ppuStack_d0);
  func_0x0001080d26d8(lStack_e0);
  puVar3 = auStack_a8;
  func_0x0001080e8dd4();
  func_0x00010b8cf7e8(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  if ((puVar3[0x1c8] & 1) == 0) {
    func_0x00010b8c7e2c();
    puVar3[0x46] = 0;
    func_0x00010b8cfce8();
    func_0x00010b8d21f4();
  }
  return;
}



/* Entry: 10b8c7fcc; end: 10b8c802f;  */

void FUN_10b8c7fcc(long param_1)

{
  if ((*(byte *)(param_1 + 0x1c8) & 1) == 0) {
    func_0x00010b8c7e2c();
    *(undefined1 *)(param_1 + 0x46) = 0;
    func_0x00010b8cfce8();
    func_0x00010b8d21f4();
  }
  return;
}



/* Entry: 10b8c8030; end: 10b8c816f;  */

undefined1  [16]
FUN_10b8c8030(uint param_1,uint param_2,long param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  int iVar3;
  long *plVar4;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  int extraout_w11;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  undefined8 unaff_x21;
  ulong uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  uint uStack_a8;
  uint uStack_a4;
  undefined8 uStack_a0;
  undefined1 auStack_98 [80];
  undefined8 uStack_48;
  undefined8 uVar5;
  
  func_0x00010b8cf80c();
  uStack_48 = extraout_x8;
  if ((*(byte *)(param_3 + 0x1c8) & 1) == 0) {
    func_0x00010b8cf878();
    plVar4 = *(long **)(param_3 + 0x1d0);
    FUN_10b8c8170();
    FUN_10b8c5410();
    uStack_a0 = 0;
    if (*plVar4 != 0) {
      do {
        func_0x00010b8cf960();
        uStack_a0 = extraout_x8_00;
      } while (extraout_w11 != 0);
    }
    FUN_10b8c74d0(&uStack_a8);
    param_4 = unaff_x21;
    func_0x00010b8c74e4();
    FUN_10b920c8c(auStack_98,&uStack_a8,param_4,&uStack_a0);
    func_0x000104bd474c(CONCAT44(uStack_a4,uStack_a8));
    func_0x00010b8c7e2c();
    uVar5 = unaff_x21;
    func_0x00010b8cf9e4();
    iVar3 = (int)uVar5;
    func_0x00010b8d1cf8();
    if (iVar3 == 0) {
      uVar9 = 0;
      param_1 = 0;
      uVar8 = 0;
    }
    else {
      func_0x00010b8c81d4();
      uStack_a8 = param_1;
      uStack_a4 = param_2;
      func_0x00010b8cf998();
      FUN_10b8c7efc();
      func_0x00010b8d1c8c(unaff_x21);
      uVar8 = param_1 & 0xffffff00;
      param_1 = param_1 & 0xff;
      uVar9 = (ulong)param_2 << 0x20;
      param_4 = param_6;
    }
    uVar6 = (ulong)(iVar3 != 0);
    func_0x00010b92155c(auStack_98);
    func_0x000107c278f8(uStack_a0);
    uVar9 = uVar9 | (uVar8 | param_1);
  }
  else {
    uVar6 = 0;
    uVar9 = 0;
  }
  func_0x00010b8cf7e8(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    if (uVar9 == 0) {
      plVar4 = (long *)0x2;
    }
    else {
      lVar7 = *(long *)(uVar9 + 0x28);
      if (lVar7 == 0) {
        plVar4 = (long *)0x2;
      }
      else {
        plVar4 = (long *)(lVar7 + 8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = *plVar4 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        plVar4 = *(long **)(lVar7 + 0x10);
        (**(code **)(*plVar4 + 0x18))();
      }
      func_0x0001080d5b98(lVar7);
    }
    auVar11._8_8_ = param_4;
    auVar11._0_8_ = plVar4;
    return auVar11;
  }
  auVar10._8_8_ = uVar6;
  auVar10._0_8_ = uVar9;
  return auVar10;
}



/* Entry: 10b8c8170; end: 10b8c822f;  */

long * FUN_10b8c8170(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  if (param_1 == 0) {
    plVar3 = (long *)0x2;
  }
  else {
    lVar4 = *(long *)(param_1 + 0x28);
    if (lVar4 == 0) {
      plVar3 = (long *)0x2;
    }
    else {
      plVar3 = (long *)(lVar4 + 8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = *plVar3 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plVar3 = *(long **)(lVar4 + 0x10);
      (**(code **)(*plVar3 + 0x18))();
    }
    func_0x0001080d5b98(lVar4);
  }
  return plVar3;
}



/* Entry: 10b8c8230; end: 10b8c824b;  */

byte FUN_10b8c8230(long param_1)

{
  func_0x00010b8c8da8();
  return *(byte *)(param_1 + 0x28) >> 3 & 1;
}



/* Entry: 10b8c824c; end: 10b8c840b;  */

void FUN_10b8c824c(undefined4 param_1,undefined4 param_2,long param_3,undefined4 *param_4,
                  float *param_5,undefined8 param_6)

{
  undefined1 in_ZR;
  long lVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fStack_58;
  float fStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  if ((*(byte *)(param_3 + 0x1c8) & 1) == 0) {
    lVar1 = param_3;
    func_0x00010b8c7e2c();
    func_0x00010b8c81d4(param_3,param_6);
    fVar2 = *(float *)(lVar1 + 0x20);
    uVar3 = *param_4;
    uVar4 = param_4[1];
    uStack_48 = param_1;
    uStack_44 = param_2;
    func_0x00010b8cfce8();
    fStack_54 = param_5[1];
    fStack_58 = fVar2 - *param_5;
    if ((bool)in_ZR) {
      fStack_58 = *param_5;
    }
    uStack_50 = uVar3;
    uStack_4c = uVar4;
    func_0x00010b8d2180(lVar1,&uStack_50,&fStack_58,&uStack_48);
  }
  return;
}



/* Entry: 10b8c840c; end: 10b8c84af;  */

undefined8 FUN_10b8c840c(undefined8 param_1,long param_2)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_2 + 0x180);
  if (uVar1 != 0) {
    func_0x00010b8cfd20();
    func_0x00010b8d1c8c();
    func_0x00010b8cfda4();
    func_0x00010b8cfef0();
                    /* WARNING: Could not recover jumptable at 0x00010b8c8468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10e5f5a87)[uVar1 & 0xffffffff] * 4 + 0x10b8c846c))();
    return param_1;
  }
  return 0;
}



/* Entry: 10b8c84b0; end: 10b8c854b;  */

void FUN_10b8c84b0(long param_1,int param_2)

{
  long lVar1;
  
  switch(param_2 + -1) {
  case 1:
  case 2:
    break;
  case 4:
code_r0x00010b8c8528:
    if (*(long *)(param_1 + 0x18) != 0) {
      func_0x00010b8d0008();
    }
    break;
  case 7:
    lVar1 = param_1;
    FUN_10b8c8230();
    if ((int)lVar1 == 0) {
      return;
    }
  case 3:
    if (*(long *)(param_1 + 0x18) != 0) {
      func_0x00010b8d0008(2);
    }
    break;
  case 8:
    lVar1 = param_1;
    FUN_10b8c8230();
    if ((int)lVar1 != 0) goto code_r0x00010b8c8528;
  case 0:
  case 6:
  }
  return;
}



/* Entry: 10b8c854c; end: 10b8c860b;  */

undefined1 FUN_10b8c854c(float param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  
  uVar2 = (int)param_2 + 0x140;
  func_0x00010b9ad818();
  if (uVar2 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x00010b8cfef0();
    uVar4 = (uint)*(undefined8 *)(param_2 + 0x1c8);
    if ((((uVar4 >> 0x1b & 1) == 0) || (uVar2 < 2)) && (((uVar4 >> 0x1c & 1) == 0 || (1 < uVar2))))
    {
      FUN_10b8c840c(param_2,param_4);
      uVar1 = param_1 == 0.0;
      if (param_1 <= 0.0) {
        func_0x00010b8cfd8c();
        FUN_10b8c860c();
        func_0x00010b8cf970();
        func_0x00010b8cfb8c();
        do {
          func_0x00010b8cfb80();
          if ((bool)uVar1) {
            return 0;
          }
          uVar3 = 0;
          FUN_10b8c71f4();
          FUN_10b8c854c();
        } while ((uVar3 & 1) == 0);
        return 1;
      }
    }
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 10b8c860c; end: 10b8c8653;  */

void FUN_10b8c860c(void)

{
  long unaff_x19;
  
  func_0x00010b8cfffc();
  if ((*(long *)(unaff_x19 + 0x180) != 0) &&
     (*(char *)(*(long *)(unaff_x19 + 0x180) + 0x47) == '\x01')) {
    func_0x00010b8d1c8c();
  }
  func_0x00010b8cfd98();
  return;
}



/* Entry: 10b8c8654; end: 10b8c8683;  */

void FUN_10b8c8654(long param_1,int param_2)

{
  ulong uVar1;
  
  uVar1 = 0x8000000;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  *(ulong *)(param_1 + 0x1c8) = *(ulong *)(param_1 + 0x1c8) & 0xfffffffff7ffffff | uVar1;
  return;
}



/* Entry: 10b8c8684; end: 10b8c8773;  */

void FUN_10b8c8684(long param_1)

{
  undefined8 uStack_28;
  
  if (((uint)*(ulong *)(param_1 + 0x1c8) >> 10 & 1) == 0) {
    func_0x00010b8cf844(*(ulong *)(param_1 + 0x1c8) | 0x400);
    if (uStack_28 == 0) {
      func_0x00010b8cfc9c();
    }
    else {
      FUN_10b8c8684(uStack_28);
    }
    func_0x00010b8cf9a4();
  }
  return;
}



/* Entry: 10b8c8774; end: 10b8c8803;  */

void FUN_10b8c8774(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  long lStack_48;
  
  func_0x00010b8cf8c0();
  if (((lStack_48 != 0) && ((*(byte *)(lStack_48 + 0x1cc) & 1) != 0)) &&
     (*(long *)(param_1 + 0x18) != 0)) {
    lVar1 = *(long *)(lStack_48 + 0x180);
    uVar2 = 0;
    if ((lVar1 != 0) && (*(char *)(lVar1 + 0x47) == '\x01')) {
      uVar2 = *(undefined4 *)(lVar1 + 0x20);
    }
    FUN_10b8c8804(uVar2);
    func_0x00010b8cfda4();
  }
  func_0x00010b8cf8c8();
  func_0x00010b8cfd98();
  return;
}



/* Entry: 10b8c8804; end: 10b8c883f;  */

float FUN_10b8c8804(float param_1,long param_2)

{
  param_1 = param_1 + *(float *)(param_2 + 0x24c);
  if (NAN(param_1)) {
    param_1 = 0.0;
  }
  return param_1;
}



/* Entry: 10b8c8840; end: 10b8c88cf;  */

float FUN_10b8c8840(long param_1)

{
  undefined1 in_ZR;
  long lVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  undefined8 uStack_38;
  
  fVar4 = *(float *)(param_1 + 0x140);
  fVar3 = *(float *)(param_1 + 0x148);
  func_0x00010b8cf8c0();
  if (((uStack_38 != 0) && (*(long *)(uStack_38 + 0x18) != 0)) &&
     (func_0x00010b8d0008(), (bool)in_ZR)) {
    lVar1 = *(long *)(uStack_38 + 0x180);
    if ((lVar1 == 0) || ((*(byte *)(lVar1 + 0x47) & 1) == 0)) {
      pfVar2 = (float *)(uStack_38 + 0x148);
    }
    else {
      pfVar2 = (float *)(lVar1 + 0x10);
    }
    fVar4 = *pfVar2 - (fVar4 + fVar3);
  }
  func_0x0001080d289c();
  return fVar4;
}



/* Entry: 10b8c88d0; end: 10b8c8903;  */

float FUN_10b8c88d0(long param_1,float *param_2)

{
  undefined1 in_ZR;
  float fVar1;
  
  if ((*(long *)(param_1 + 0x18) == 0) || (func_0x00010b8d0008(), !(bool)in_ZR)) {
    fVar1 = *param_2;
  }
  else {
    fVar1 = *(float *)(param_1 + 0x148) - *param_2;
  }
  return fVar1;
}



/* Entry: 10b8c8904; end: 10b8c8a37;  */

void FUN_10b8c8904(long param_1)

{
  undefined8 uStack_38;
  
  FUN_10b8c88d0();
  func_0x00010b8cfda4();
  while (param_1 != 0) {
    FUN_10b8c8840(param_1);
    func_0x00010b8cf888();
    func_0x00010b8cf8c8();
    param_1 = uStack_38;
  }
  func_0x00010b8cfd98();
  return;
}



/* Entry: 10b8c8a38; end: 10b8c8a73;  */

void FUN_10b8c8a38(void)

{
  FUN_10b8c8ad4();
  return;
}



/* Entry: 10b8c8a74; end: 10b8c8a97;  */

float FUN_10b8c8a74(long param_1)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 0x174);
  if ((*(byte *)(param_1 + 0x1cc) >> 3 & 1) != 0) {
    fVar1 = (fVar1 / 100.0) * *(float *)(param_1 + 0x14c);
  }
  return fVar1;
}



/* Entry: 10b8c8a98; end: 10b8c8ad3;  */

float FUN_10b8c8a98(float param_1,undefined8 param_2)

{
  float unaff_s8;
  
  FUN_10b8c8840();
  func_0x00010b8cfda4();
  FUN_10b8c8ad4(param_2);
  func_0x00010b8cffe0();
  return unaff_s8 + param_1;
}



/* Entry: 10b8c8ad4; end: 10b8c8af7;  */

float FUN_10b8c8ad4(long param_1)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 0x170);
  if ((*(byte *)(param_1 + 0x1cc) >> 2 & 1) != 0) {
    fVar1 = (fVar1 / 100.0) * *(float *)(param_1 + 0x148);
  }
  return fVar1;
}



/* Entry: 10b8c8af8; end: 10b8c8c7b;  */

void FUN_10b8c8af8(long param_1,undefined8 param_2,long *param_3)

{
  ulong uVar1;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x19;
  long lVar2;
  ulong uVar3;
  long lStack_40;
  long lStack_38;
  
  if (*(long *)(param_1 + 0x1e0) == *param_3) {
    return;
  }
  func_0x00010b8d0028();
  FUN_10b8c6120();
  FUN_10b8c8c7c(unaff_x19 + 0x1e0,param_3);
  uVar1 = *(ulong *)(unaff_x19 + 0x1c8);
  if ((*param_3 == 0) || (*(char *)(*param_3 + 0xa9) != '\x01')) {
    uVar3 = uVar1 & 0xffffffff7fffffff;
  }
  else {
    uVar3 = uVar1 | 0x80000000;
  }
  *(ulong *)(unaff_x19 + 0x1c8) = uVar3;
  if ((int)((uint)uVar3 ^ (uint)uVar1) < 0) {
    func_0x00010b8cfde0();
    FUN_10b8c8cc0();
    if (((*(uint *)(unaff_x19 + 0x1c8) ^ (uint)uVar3) >> 8 & 1) == 0) {
      func_0x00010b8cfde0();
      FUN_10b8c8cf4();
    }
  }
  if (*param_3 == 0) {
    func_0x00010b8d00d4();
    FUN_10b8c8d58();
    lStack_40 = 0;
    func_0x00010b8b5178(unaff_x19 + 0x90,&lStack_40);
    lVar2 = lStack_40;
    goto LAB_10b8c8c60;
  }
  FUN_10b8a74c8();
  FUN_10b8c8d58();
  lVar2 = *(long *)(*param_3 + 0x28);
  if (lVar2 == 0) {
    lStack_38 = 0;
    func_0x00010b8cff70();
    func_0x0001080d5cdc(lStack_38);
LAB_10b8c8c30:
    uVar1 = *(ulong *)(unaff_x19 + 0x1c8) & 0xfffffffffeffffff;
  }
  else {
    if (*(long *)(lVar2 + 0x10) != 0) {
      do {
        func_0x00010b8d0018();
      } while (extraout_w10 != 0);
      if (*(long *)(lVar2 + 0x10) != 0) {
        do {
          func_0x00010b8d0018();
        } while (extraout_w10_00 != 0);
      }
    }
    lStack_38 = lVar2;
    func_0x00010b8cff70();
    func_0x0001080d5cdc(lStack_38);
    if (*(char *)(lVar2 + 0x68) != '\x01') goto LAB_10b8c8c30;
    uVar1 = *(ulong *)(unaff_x19 + 0x1c8) | 0x1000000;
  }
  *(ulong *)(unaff_x19 + 0x1c8) = uVar1;
  if (((uint)uVar1 >> 0x18 & 1) != 0) {
    func_0x00010b8c8da8();
    *(byte *)(unaff_x19 + 0x2c) = *(byte *)(unaff_x19 + 0x2c) & 0xfc | 2;
  }
  func_0x00010b8c8e0c();
LAB_10b8c8c60:
  func_0x0001080d5cdc(lVar2);
  return;
}



/* Entry: 10b8c8c7c; end: 10b8c8cbf;  */

void FUN_10b8c8c7c(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  int extraout_w11;
  long *unaff_x19;
  
  func_0x00010b8cfcb4();
  if (!(bool)in_ZR) {
    func_0x00010b8d00c8();
    lVar1 = extraout_x8;
    if ((extraout_x8 != 0) && (*(long *)(extraout_x8 + 0x10) != 0)) {
      do {
        func_0x00010b8cf9bc();
        lVar1 = extraout_x8_00;
      } while (extraout_w11 != 0);
    }
    *unaff_x19 = lVar1;
    func_0x0001080d2890();
  }
  return;
}



/* Entry: 10b8c8cc0; end: 10b8c8cf3;  */

void FUN_10b8c8cc0(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  long unaff_x20;
  long lVar5;
  long lStack_48;
  long lStack_40;
  
  uVar4 = (uint)*(undefined8 *)(param_1 + 0x1c8);
  if (-1 < (int)uVar4) {
    if ((uVar4 >> 9 & 1) != 0) {
      uVar3 = 1;
      goto FUN_10b8c9c10;
    }
    if (*(long *)(param_1 + 0x40) != 0) {
      uVar3 = (ulong)(*(long *)(*(long *)(param_1 + 0x40) + 0x18) != 0);
      goto FUN_10b8c9c10;
    }
  }
  uVar3 = 0;
FUN_10b8c9c10:
  func_0x00010b8cf8a8();
  uVar4 = (uint)*(undefined8 *)(param_1 + 0x1c8);
  if ((uVar3 & 1) == 0) {
    if ((uVar4 >> 8 & 1) == 0) {
      return;
    }
    uVar4 = 0;
  }
  else {
    if ((uint)(uVar4 < 0x80000000) == ((uint)((ulong)*(undefined8 *)(param_1 + 0x1c8) >> 8) & 1)) {
      return;
    }
    uVar4 = ~uVar4 >> 0x1f;
  }
  func_0x00010b8c9cd0(&lStack_48);
  uVar3 = 0x100;
  if (uVar4 == 0) {
    uVar3 = 0;
  }
  *(ulong *)(unaff_x20 + 0x1c8) = *(ulong *)(unaff_x20 + 0x1c8) & 0xfffffffffffffeff | uVar3;
  lVar1 = lStack_40;
  lVar2 = lStack_48;
  if (*(long *)(unaff_x20 + 0x40) != 0) {
    func_0x00010b8c5e5c();
    lVar1 = lStack_40;
    lVar2 = lStack_48;
  }
  while (lVar5 = lStack_48, lVar2 != lVar1) {
    func_0x00010b8cff94();
  }
  for (; lVar5 != lStack_40; lVar5 = lVar5 + 8) {
    func_0x00010b8cf8b4();
    FUN_10b8c8fd0();
  }
  func_0x00010b8ccf10(&lStack_48);
  return;
}



/* Entry: 10b8c8cf4; end: 10b8c8d57;  */

void FUN_10b8c8cf4(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lStack_48;
  long lStack_40;
  
  func_0x00010b8cf8a8();
  func_0x00010b8c9cd0(&lStack_48);
  lVar2 = lStack_40;
  lVar1 = lStack_48;
  while (lVar3 = lStack_48, lVar1 != lVar2) {
    func_0x00010b8cff94();
  }
  for (; lVar3 != lStack_40; lVar3 = lVar3 + 8) {
    func_0x00010b8cf8b4();
    FUN_10b8c8fd0();
  }
  func_0x00010b8ccf10(&lStack_48);
  return;
}



/* Entry: 10b8c8d58; end: 10b8c8e4b;  */

void FUN_10b8c8d58(long param_1,uint param_2)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  byte bVar5;
  byte *pbVar6;
  long lStack_38;
  undefined1 *puStack_30;
  undefined8 uStack_28;
  
  if (param_2 == ((uint)(*(ulong *)(param_1 + 0x1c8) >> 6) & 1)) {
    return;
  }
  uVar2 = 0x40;
  if (param_2 == 0) {
    uVar2 = 0;
  }
  *(ulong *)(param_1 + 0x1c8) = *(ulong *)(param_1 + 0x1c8) & 0xffffffffffffffbf | uVar2;
  FUN_10b8c67d0();
  pbVar6 = *(byte **)(param_1 + 0x18);
  if (pbVar6 != (byte *)0x0) {
    FUN_10b8c95f4();
    pcVar1 = FUN_10b8c98c4;
    if ((int)param_1 == 0) {
      pcVar1 = (code *)0x0;
    }
    if (pcVar1 == (code *)0x0) {
      bVar5 = *pbVar6 & 0xef;
    }
    else {
      if (*(long *)(pbVar6 + 0x2a8) != *(long *)(pbVar6 + 0x2b0)) {
        puVar4 = &UNK_10f7ced9a;
        lVar3 = 5;
        func_0x00010b95a2a0(pbVar6,5,&UNK_10f7ced9a);
        __ZSt9terminatev();
        uStack_28 = 0x10b95a650;
        if ((*(byte *)(lVar3 + 0x2c) & 0xc) == 8) {
          *(long *)(pbVar6 + 0x298) = *(long *)(pbVar6 + 0x298) + 1;
        }
        lStack_38 = lVar3;
        puStack_30 = &stack0xfffffffffffffff0;
        func_0x00010b95a69c(pbVar6 + 0x2a8,*(long *)(pbVar6 + 0x2a8) + (long)puVar4 * 8,&lStack_38);
        return;
      }
      bVar5 = *pbVar6 | 0x10;
    }
    *pbVar6 = bVar5;
    *(code **)(pbVar6 + 0x10) = pcVar1;
    return;
  }
  return;
}



/* Entry: 10b8c8e4c; end: 10b8c8eff;  */

void FUN_10b8c8e4c(long param_1,undefined8 param_2,long *param_3,int param_4)

{
  int iVar1;
  long *plVar2;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x00010b8cf8a8();
  plVar2 = *(long **)(*(long *)(*(long *)(param_1 + 0x1d0) + 0x28) + 0x10);
  (**(code **)(*plVar2 + 0x10))();
  iVar1 = (int)plVar2;
  if (iVar1 != param_4) {
    if ((iVar1 != 4 || param_4 != 2) && (param_4 != 1 || iVar1 != 4 && iVar1 != 2)) {
      return;
    }
  }
  if ((*param_3 == 0) || (*(int *)(*param_3 + 0xc) == 0)) {
    uStack_38 = 0;
  }
  else {
    FUN_10b8d2e48(&uStack_38,*(undefined8 *)(unaff_x20 + 0x1d0),param_3);
  }
  func_0x00010b8cf8b4();
  FUN_10b8c8af8();
  func_0x0001080d2890(uStack_38);
  return;
}



/* Entry: 10b8c8f00; end: 10b8c8f1f;  */

undefined8 FUN_10b8c8f00(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = (undefined4)((ulong)param_1 >> 0x20);
  uVar1 = (undefined4)param_1;
  if (*(long *)(param_2 + 0x1e0) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b8c8f14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(*(long *)(param_2 + 0x1e0) + 0x20) + 0x58))();
    return CONCAT44(uVar2,uVar1);
  }
  return 0;
}



/* Entry: 10b8c8f20; end: 10b8c8f43;  */

void FUN_10b8c8f20(long param_1)

{
  undefined8 uStack_28;
  
  FUN_10b8c8f44();
  func_0x00010b8cfca4();
  if (((uint)*(ulong *)(param_1 + 0x1c8) >> 0x1d & 1) == 0) {
    func_0x00010b8cf844(*(ulong *)(param_1 + 0x1c8) | 0x20000000);
    if (uStack_28 != 0) {
      FUN_10b8c8f5c(uStack_28);
    }
    func_0x00010b8cf8c8();
  }
  return;
}



/* Entry: 10b8c8f44; end: 10b8c8f5b;  */

/* WARNING: Possible PIC construction at 0x00010b8c8754: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b8c8758) */

void FUN_10b8c8f44(long param_1)

{
  undefined1 *puVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x19;
  long unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  if (*(long *)(param_1 + 400) == 0) {
    return;
  }
  *(undefined1 *)(*(long *)(param_1 + 400) + 0x39) = 1;
  puVar1 = (undefined1 *)register0x00000008;
  while( true ) {
    lVar2 = param_1;
    uVar3 = *(ulong *)(lVar2 + 0x1c8);
    if (((uint)uVar3 >> 3 & 1) != 0) {
      return;
    }
    *(long *)(puVar1 + -0x20) = unaff_x20;
    *(long *)(puVar1 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar1 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar1 + -8) = unaff_x30;
    unaff_x29 = puVar1 + -0x10;
    func_0x00010b8cf844(uVar3 | 8);
    unaff_x20 = *(long *)(puVar1 + -0x28);
    if (unaff_x20 == 0) break;
    unaff_x30 = 0x10b8c8758;
    puVar1 = puVar1 + -0x30;
    param_1 = unaff_x20;
    unaff_x19 = lVar2;
  }
  func_0x00010b8cfc9c();
  func_0x00010b8cf9a4();
  return;
}



/* Entry: 10b8c8f5c; end: 10b8c8f9f;  */

void FUN_10b8c8f5c(long param_1)

{
  undefined8 uStack_28;
  
  if (((uint)*(ulong *)(param_1 + 0x1c8) >> 0x1d & 1) == 0) {
    func_0x00010b8cf844(*(ulong *)(param_1 + 0x1c8) | 0x20000000);
    if (uStack_28 != 0) {
      FUN_10b8c8f5c(uStack_28);
    }
    func_0x00010b8cf8c8();
  }
  return;
}



/* Entry: 10b8c8fa0; end: 10b8c8fcf;  */

void FUN_10b8c8fa0(long param_1,uint param_2)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  byte bVar5;
  byte *pbVar6;
  long lStack_38;
  undefined1 *puStack_30;
  undefined8 uStack_28;
  
  if (param_2 == ((uint)(*(ulong *)(param_1 + 0x1c8) >> 0x11) & 1)) {
    return;
  }
  uVar2 = 0x20000;
  if (param_2 == 0) {
    uVar2 = 0;
  }
  *(ulong *)(param_1 + 0x1c8) = *(ulong *)(param_1 + 0x1c8) & 0xfffffffffffdffff | uVar2;
  pbVar6 = *(byte **)(param_1 + 0x18);
  if (pbVar6 != (byte *)0x0) {
    FUN_10b8c95f4();
    pcVar1 = FUN_10b8c98c4;
    if ((int)param_1 == 0) {
      pcVar1 = (code *)0x0;
    }
    if (pcVar1 == (code *)0x0) {
      bVar5 = *pbVar6 & 0xef;
    }
    else {
      if (*(long *)(pbVar6 + 0x2a8) != *(long *)(pbVar6 + 0x2b0)) {
        puVar4 = &UNK_10f7ced9a;
        lVar3 = 5;
        func_0x00010b95a2a0(pbVar6,5,&UNK_10f7ced9a);
        __ZSt9terminatev();
        uStack_28 = 0x10b95a650;
        if ((*(byte *)(lVar3 + 0x2c) & 0xc) == 8) {
          *(long *)(pbVar6 + 0x298) = *(long *)(pbVar6 + 0x298) + 1;
        }
        lStack_38 = lVar3;
        puStack_30 = &stack0xfffffffffffffff0;
        func_0x00010b95a69c(pbVar6 + 0x2a8,*(long *)(pbVar6 + 0x2a8) + (long)puVar4 * 8,&lStack_38);
        return;
      }
      bVar5 = *pbVar6 | 0x10;
    }
    *pbVar6 = bVar5;
    *(code **)(pbVar6 + 0x10) = pcVar1;
    return;
  }
  return;
}



/* Entry: 10b8c8fd0; end: 10b8c91bf;  */

void FUN_10b8c8fd0(ulong param_1)

{
  ulong *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong *unaff_x19;
  undefined8 unaff_x20;
  undefined8 auStack_40 [2];
  
  func_0x00010b8cf878();
  FUN_10b8c6828();
  func_0x00010b8cf998();
  puVar1 = unaff_x19;
  func_0x00010b8cf9f0();
  FUN_10b8c6128(*puVar1);
  func_0x000108108cd0(auStack_40,unaff_x19);
  func_0x000108108d18(*unaff_x19 + 0x20,auStack_40);
  func_0x0001081092d4(auStack_40);
  FUN_10b8c8fa0(*unaff_x19,1);
  uVar3 = *(ulong *)(*unaff_x19 + 0x1c8);
  *(ulong *)(*unaff_x19 + 0x1c8) =
       uVar3 & 0xffffffff80000000 | uVar3 & 0x3fffffff | (unaff_x19[0x39] >> 0x1f & 1) << 0x1e;
  puVar1 = unaff_x19;
  func_0x00010b8c8da8();
  if (param_1 <= (ulong)((long)(puVar1[0x56] - puVar1[0x55]) >> 3)) {
    if ((char)*(byte *)((long)unaff_x19 + 0x1cb) < '\0') {
      *(uint *)(*(long *)(*unaff_x19 + 0x18) + 0x28) =
           *(uint *)(*(long *)(*unaff_x19 + 0x18) + 0x28) & 0xcfffffff | 0x20000000;
    }
    else {
      *(byte *)puVar1 = (byte)*puVar1 & 0xef;
      puVar1[2] = 0;
    }
    func_0x00010b9530d4();
    uVar3 = *unaff_x19;
    *(ulong **)(uVar3 + 0x88) = unaff_x19 + 9;
    if ((*(long *)(uVar3 + 0x78) != 0) || (*(long *)(uVar3 + 0x80) != 0)) {
      FUN_10b8c91c0();
      uVar3 = *unaff_x19;
    }
    if ((*(byte *)(uVar3 + 0x1ca) >> 5 & 1) != 0) {
      FUN_10b8c91d8(unaff_x19);
      uVar3 = *unaff_x19;
    }
    if (*(int *)(uVar3 + 0x1a0) != 0) {
      unaff_x19[0x39] = unaff_x19[0x39] | 0x8000;
    }
    func_0x00010b8c921c();
    if (((uVar3 & 1) != 0) ||
       ((*(long *)(*unaff_x19 + 0x1e0) != 0 &&
        (*(char *)(*(long *)(*unaff_x19 + 0x1e0) + 0xa8) == '\x01')))) {
      func_0x00010b8cffd8();
    }
    puVar1 = unaff_x19;
    FUN_10b8c6828();
    if (((ulong *)0xa < puVar1) && (unaff_x19[0x32] == 0)) {
      puVar2 = (undefined8 *)0x40;
      __Znwm();
      *puVar2 = unaff_x19;
      puVar2[2] = 0;
      puVar2[1] = 0;
      puVar2[4] = 0;
      puVar2[3] = 0;
      puVar2[6] = 0;
      puVar2[5] = 0;
      *(undefined2 *)(puVar2 + 7) = 0x100;
      auStack_40[0] = 0;
      func_0x00010b8cdb44(unaff_x19 + 0x32,puVar2);
      func_0x00010b8cdb24(auStack_40);
    }
    func_0x00010b8c6418(*unaff_x19,unaff_x20,unaff_x19 + 0x3e);
    func_0x00010b8c8724(unaff_x19);
    FUN_10b8c8f20(unaff_x19);
  }
  return;
}



/* Entry: 10b8c91c0; end: 10b8c91d7;  */

void FUN_10b8c91c0(long param_1)

{
  undefined8 uStack_28;
  
  if (((uint)*(ulong *)(param_1 + 0x1c8) >> 0x14 & 1) == 0) {
    *(ulong *)(param_1 + 0x1c8) = *(ulong *)(param_1 + 0x1c8) | 0x100000;
    if (((uint)*(ulong *)(param_1 + 0x1c8) >> 0x15 & 1) == 0) {
      func_0x00010b8cf844(*(ulong *)(param_1 + 0x1c8) | 0x200000);
      if (uStack_28 != 0) {
        FUN_10b8c91d8(uStack_28);
      }
      func_0x00010b8cf8c8();
    }
    return;
  }
  return;
}



/* Entry: 10b8c91d8; end: 10b8c932f;  */

void FUN_10b8c91d8(long param_1)

{
  undefined8 uStack_28;
  
  if (((uint)*(ulong *)(param_1 + 0x1c8) >> 0x15 & 1) == 0) {
    func_0x00010b8cf844(*(ulong *)(param_1 + 0x1c8) | 0x200000);
    if (uStack_28 != 0) {
      FUN_10b8c91d8(uStack_28);
    }
    func_0x00010b8cf8c8();
  }
  return;
}



/* Entry: 10b8c9330; end: 10b8c935b;  */

undefined8 FUN_10b8c9330(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*(byte **)(param_1 + 0x18) != (byte *)0x0) {
    if ((**(byte **)(param_1 + 0x18) >> 2 & 1) != 0) {
      return 0;
    }
    func_0x00010b95a878();
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 10b8c935c; end: 10b8c93af;  */

void FUN_10b8c935c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  
  iVar1 = (int)param_1;
  if (((*(long **)(param_1 + 0x40) != (long *)0x0) &&
      (lVar2 = **(long **)(param_1 + 0x40), lVar2 != 0)) &&
     (func_0x00010b8cfe78(iVar1,lVar2,param_2,param_3,*(uint *)(param_1 + 0x1c8) >> 0x19 & 1,param_4
                         ), iVar1 != 0)) {
    *(ulong *)(param_1 + 0x1c8) = *(ulong *)(param_1 + 0x1c8) | 0x200000000;
  }
  return;
}



/* Entry: 10b8c93b0; end: 10b8c9487;  */

void FUN_10b8c93b0(long *param_1,long param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  long lStack_38;
  
  lStack_38 = 0;
  FUN_10b8c9488(&lStack_38,*(undefined8 *)(param_2 + 0x30),param_2 + 0x1f0,
                *(undefined8 *)(param_2 + 0x38));
  lVar1 = *param_1;
  *(undefined8 *)(lVar1 + 0x1d0) = *(undefined8 *)(param_2 + 0x1d0);
  FUN_10b8c8af8(lVar1,param_3,param_2 + 0x1e0);
  lVar1 = param_2;
  func_0x0001080da434();
  lStack_38 = lVar1;
  FUN_10b8c7c98(*param_1 + 0x128,&lStack_38);
  func_0x00010b8cfc30();
  FUN_10b8ba73c(*param_1 + 0x48,param_2 + 0x48);
  *(undefined1 *)(*param_4 + 0x18) = 0;
  FUN_10b8b4e08(param_2 + 0x90,*param_1 + 0x90);
  param_1 = (long *)*param_1;
  lStack_38 = 0;
  FUN_10b8c688c(param_1,param_3,param_4,&lStack_38);
  func_0x00010b8cf9ac();
  func_0x00010b8cfe20();
  (**(code **)(*param_1 + 0x38))();
  return;
}



/* Entry: 10b8c9488; end: 10b8c94cb;  */

void FUN_10b8c9488(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined4 uVar1;
  undefined1 in_ZR;
  undefined8 extraout_x8;
  long lVar2;
  undefined8 uStack_88;
  undefined8 auStack_38 [2];
  undefined8 uStack_28;
  
  func_0x00010b8cf80c();
  uStack_28 = extraout_x8;
  FUN_10b8ce3b0(auStack_38);
  *param_1 = auStack_38[0];
  func_0x00010b8cf7e8(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b8b46b0(param_2 + 0x90);
  if ((*(long *)(param_2 + 0x1d0) != 0) &&
     (lVar2 = *(long *)(*(long *)(param_2 + 0x1d0) + 0x20), lVar2 != 0)) {
    uVar1 = *(undefined4 *)(param_2 + 0x1ac);
    FUN_10b8a3d20(&uStack_88,*(undefined8 *)(param_2 + 0x30),param_3);
    func_0x00010b8c1e0c(lVar2,uVar1,&uStack_88,param_4,param_5);
    func_0x000107c278f8(uStack_88);
  }
  return;
}



/* Entry: 10b8c94cc; end: 10b8c9553;  */

void FUN_10b8c94cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uStack_48;
  
  func_0x00010b8b46b0(param_1 + 0x90);
  if ((*(long *)(param_1 + 0x1d0) != 0) &&
     (lVar2 = *(long *)(*(long *)(param_1 + 0x1d0) + 0x20), lVar2 != 0)) {
    uVar1 = *(undefined4 *)(param_1 + 0x1ac);
    FUN_10b8a3d20(&uStack_48,*(undefined8 *)(param_1 + 0x30),param_2);
    func_0x00010b8c1e0c(lVar2,uVar1,&uStack_48,param_3,param_4);
    func_0x000107c278f8(uStack_48);
  }
  return;
}



/* Entry: 10b8c9554; end: 10b8c95f3;  */

void FUN_10b8c9554(float param_1,long param_2)

{
  float fVar1;
  double dStack_60;
  undefined2 uStack_58;
  undefined1 auStack_50 [8];
  byte bStack_48;
  
  if ((*(byte *)(param_2 + 0x1cb) & 1) != 0) {
    fVar1 = param_1;
    func_0x00010b8b4320(auStack_50,param_2 + 0x90);
    if (((bStack_48 & 0xfc) != 4) || (FUN_10b9aa3b0(auStack_50), fVar1 != param_1)) {
      dStack_60 = (double)param_1;
      uStack_58 = 6;
      func_0x00010b8cf998();
      FUN_10b8c94cc();
      FUN_10b9a8d98(&dStack_60);
    }
    func_0x00010b8cfeb8();
  }
  return;
}



/* Entry: 10b8c95f4; end: 10b8c962b;  */

bool FUN_10b8c95f4(long param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*(undefined8 *)(param_1 + 0x1c8);
  if (((uVar1 >> 0x11 & 1) != 0) &&
     (((int)uVar1 < 0 ||
      (*(long *)(*(long *)(param_1 + 0x18) + 0x2b0) == *(long *)(*(long *)(param_1 + 0x18) + 0x2a8))
      ))) {
    if ((uVar1 >> 6 & 1) == 0) {
      return true;
    }
    return *(long *)(param_1 + 0x40) != 0;
  }
  return false;
}



/* Entry: 10b8c962c; end: 10b8c98c3;  */

/* WARNING: Type propagation algorithm not settling */

byte *******
FUN_10b8c962c(ulong param_1,undefined8 param_2,byte *******param_3,byte *******param_4,
             byte *******param_5,int param_6,byte ******param_7,uint param_8,int param_9)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  byte *******pppppppbVar4;
  undefined1 uVar5;
  byte ******ppppppbVar6;
  byte *******pppppppbVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined8 extraout_x8;
  byte *******extraout_x8_00;
  byte ******extraout_x8_01;
  byte *****pppppbVar12;
  undefined8 extraout_x8_02;
  byte ******ppppppbVar13;
  byte bVar14;
  int extraout_w11;
  int extraout_w11_00;
  byte *******pppppppbVar15;
  byte *******pppppppbVar16;
  byte *******unaff_x21;
  byte ******ppppppbVar17;
  byte ******unaff_x22;
  long lVar18;
  int iVar19;
  float fVar20;
  double dVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  byte ******ppppppbStack_2c8;
  byte ******ppppppbStack_2c0;
  byte ******ppppppbStack_2b0;
  byte *******pppppppbStack_2a8;
  byte *******pppppppbStack_2a0;
  byte *******pppppppbStack_298;
  undefined1 **ppuStack_290;
  undefined8 uStack_288;
  undefined1 auStack_280 [96];
  long lStack_220;
  long lStack_218;
  char cStack_210;
  byte ******ppppppbStack_208;
  undefined2 uStack_200;
  uint uStack_1f8;
  undefined2 uStack_1f0;
  double dStack_1e8;
  undefined2 uStack_1e0;
  uint uStack_1d8;
  undefined2 uStack_1d0;
  undefined8 uStack_1c8;
  undefined1 *puStack_160;
  code *pcStack_158;
  byte *******pppppppbStack_150;
  int iStack_144;
  byte *******pppppppbStack_140;
  byte ******ppppppbStack_138;
  byte *******pppppppbStack_130;
  undefined1 auStack_128 [80];
  undefined1 auStack_d8 [88];
  undefined1 uStack_80;
  undefined8 uStack_78;
  
  func_0x00010b8cf80c();
  param_8 = param_8 | (*(byte *)param_4 & 4) >> 2;
  pppppppbVar15 = (byte *******)(ulong)param_8;
  uVar5 = 0;
  pppppppbVar16 = param_4;
  uStack_78 = extraout_x8;
  if (param_8 == 1) {
    ppppppbVar6 = param_3[0x3a];
    FUN_10b8c8170();
    FUN_10b8c5410();
    pppppppbStack_130 = (byte *******)0x0;
    if (*ppppppbVar6 != (byte *****)0x0) {
      do {
        func_0x00010b8cf960();
        pppppppbStack_130 = extraout_x8_00;
      } while (extraout_w11 != 0);
    }
    pppppppbVar16 = param_3;
    func_0x00010b8c74e4();
    ppppppbStack_138 = (byte ******)0x0;
    if (*pppppppbVar16 != (byte ******)0x0) {
      do {
        func_0x00010b8cf960();
        ppppppbStack_138 = extraout_x8_01;
      } while (extraout_w11_00 != 0);
    }
    iVar19 = (int)pppppppbVar16;
    auStack_d8[0] = 0;
    uStack_80 = 0;
    func_0x000105c3b044();
    if (iVar19 != 0) {
      FUN_10b8ca990(auStack_d8,&UNK_10f7cb619);
    }
    func_0x00010b8c74d0(&pppppppbStack_140,param_3);
    if (param_9 == 0) {
      FUN_10b921024(auStack_128,&pppppppbStack_140,&ppppppbStack_138,&pppppppbStack_130);
    }
    else {
      FUN_10b921134();
    }
    iStack_144 = 0;
    iVar19 = 0;
    if (!NAN((float)param_1)) {
      iVar19 = (int)param_5;
    }
    iVar1 = 0;
    if (!NAN((float)param_2)) {
      iVar1 = param_6;
    }
    pppppppbVar16 = param_4 + 5;
    func_0x00010b8b9260(pppppppbVar16,0);
    param_5 = param_4 + 5;
    func_0x00010b8b9260(param_5,1);
    if (iVar19 == 2) {
      uVar8 = (ulong)pppppppbVar16 & 0xffffffffff;
      FUN_10b8ca928(param_1,uVar8);
      pppppppbVar7 = param_4 + 0x23;
      func_0x00010811df94(pppppppbVar7,(byte *)((long)param_4 + 0x8b),uVar8);
    }
    else {
      pppppppbVar7 = param_5;
      if (iVar19 != 1) {
        param_1 = 0x7fc00000;
      }
    }
    if (iVar1 == 2) {
      uVar8 = (ulong)param_5 & 0xffffffffff;
      FUN_10b8ca928(param_2,uVar8);
      pppppppbVar7 = param_4 + 0x23;
      func_0x00010811df94(pppppppbVar7,(byte *)((long)param_4 + 0x8d),uVar8);
    }
    else if (iVar1 != 1) {
      param_2 = 0x7fc00000;
    }
    func_0x00010b8cfc00();
    ppppppbVar6 = *pppppppbVar7;
    *pppppppbVar7 = (byte ******)&iStack_144;
    uVar5 = (int)param_7 == 0;
    uVar11 = 1;
    if (!(bool)uVar5) {
      uVar11 = 2;
    }
    func_0x00010b959660(param_4,uVar11);
    *pppppppbVar7 = ppppppbVar6;
    func_0x00010811df94(param_4 + 0x23,(byte *)((long)param_4 + 0x8b),
                        (ulong)pppppppbVar16 & 0xffffffffff);
    pppppppbVar7 = param_4 + 0x23;
    pppppppbVar16 = (byte *******)((long)param_4 + 0x8d);
    param_5 = (byte *******)((ulong)param_5 & 0xffffffffff);
    func_0x00010811df94();
    pppppppbVar4 = pppppppbStack_140;
    unaff_x21 = param_4;
    if (iStack_144 != 0) {
      unaff_x21 = pppppppbVar4;
      if (param_9 == 0) {
        if (pppppppbStack_140 != (byte *******)0x0) {
          func_0x00010b8cfe54();
          pppppbVar12 = (*pppppppbVar4)[0xb];
          pppppppbStack_150 = pppppppbVar7;
          goto LAB_10b8c9850;
        }
      }
      else if (pppppppbStack_140 != (byte *******)0x0) {
        func_0x00010b8cfe54();
        pppppbVar12 = (*pppppppbVar4)[0xc];
        pppppppbStack_150 = pppppppbVar7;
LAB_10b8c9850:
        pppppppbVar16 = &ppppppbStack_138;
        param_5 = (byte *******)&pppppppbStack_130;
        (*(code *)pppppbVar12)(pppppppbVar4,pppppppbVar16,param_5,&pppppppbStack_150);
      }
    }
    func_0x00010b92155c(auStack_128);
    func_0x000104bd474c(pppppppbStack_140);
    func_0x0001080e8dd4(auStack_d8);
    func_0x000107c278f8(ppppppbStack_138);
    param_3 = pppppppbStack_130;
    func_0x000107c278f8();
    unaff_x22 = param_7;
  }
  uVar9 = (uint)pppppppbVar16;
  func_0x00010b8cf7e8(uStack_78);
  if ((bool)uVar5) {
    return pppppppbVar15;
  }
  ___stack_chk_fail();
  pcStack_158 = FUN_10b8c98c4;
  puStack_160 = &stack0xfffffffffffffff0;
  func_0x00010b8cf80c();
  pppppppbVar16 = (byte *******)param_3[1];
  uStack_1c8 = extraout_x8_02;
  if (pppppppbVar16 == (byte *******)0x0) {
    uVar8 = 0;
    goto LAB_10b8c9bcc;
  }
  func_0x00010b8cfc00();
  *(int *)*param_3 = *(int *)*param_3 + 1;
  uVar2 = uVar9;
  if (uVar9 != 2) {
    uVar2 = 0;
  }
  uVar9 = uVar9 - 1;
  unaff_x22 = (byte ******)(ulong)uVar9;
  if (uVar9 == 0) {
    uVar2 = 1;
  }
  unaff_x21 = (byte *******)(ulong)uVar2;
  uVar10 = (uint)param_5;
  uVar3 = uVar10;
  if (uVar10 != 2) {
    uVar3 = 0;
  }
  if (uVar10 == 1) {
    uVar3 = 1;
  }
  pppppppbVar15 = (byte *******)(ulong)uVar3;
  ppppppbVar6 = pppppppbVar16[0x39];
  pppppppbVar16[0x39] = (byte ******)((ulong)ppppppbVar6 | 0x100000000);
  if ((int)ppppppbVar6 < 0) {
    param_3 = pppppppbVar16;
    param_5 = pppppppbVar15;
    FUN_10b8c935c(param_1,param_2,pppppppbVar16,unaff_x21,pppppppbVar15,1);
  }
  iVar19 = (int)param_3;
  if ((pppppppbVar16[0x3a] == (byte ******)0x0) ||
     (pppppbVar12 = pppppppbVar16[0x3a][5], pppppbVar12 == (byte *****)0x0)) {
    bVar14 = 1;
  }
  else {
    bVar14 = *(byte *)((long)pppppbVar12 + 0x131);
  }
  ppppppbVar13 = pppppppbVar16[8];
  fVar26 = 0.0;
  ppppppbVar6 = ppppppbVar13;
  if ((*(char *)((long)pppppppbVar16 + 0x1cb) < '\0') && ((bVar14 & 1) != 0)) {
    if (ppppppbVar13 == (byte ******)0x0) {
      ppppppbVar6 = (byte ******)0x0;
      goto LAB_10b8c99dc;
    }
    pppppbVar12 = *ppppppbVar13;
    fVar27 = 0.0;
    fVar26 = 0.0;
    if (pppppbVar12 != (byte *****)0x0) {
      fVar27 = *(float *)((long)pppppbVar12 + 0x27c) + *(float *)((long)pppppbVar12 + 0x284);
      fVar26 = *(float *)(pppppbVar12 + 0x50) + *(float *)(pppppbVar12 + 0x51);
    }
  }
  else {
LAB_10b8c99dc:
    fVar27 = 0.0;
  }
  fVar23 = (float)param_1;
  fVar25 = fVar23 - fVar27;
  if (fVar23 <= fVar27 || 1 < uVar9) {
    fVar25 = fVar23;
  }
  fVar22 = (float)param_2;
  fVar20 = fVar22 - fVar26;
  fVar24 = fVar20;
  if (fVar22 <= fVar26 || 1 < uVar10 - 1) {
    fVar24 = fVar22;
  }
  if ((ppppppbVar6 == (byte ******)0x0) || (ppppppbVar6[3] == (byte *****)0x0)) {
    if ((pppppppbVar16[0x16] != (byte ******)0x0) && (pppppppbVar16[0x16][0xb] != (byte *****)0x0))
    {
      func_0x00010b8cfe48();
      if (iVar19 != 0) {
        FUN_10b8c7e08(auStack_280,&UNK_10f7cb5d7);
      }
      param_5 = unaff_x21;
      (*(code *)(*pppppppbVar16[0x16][0xb])[4])
                (pppppppbVar16[0x16][0xb],pppppppbVar16,unaff_x21,pppppppbVar15);
      fVar20 = fVar25;
      goto LAB_10b8c9b4c;
    }
    if (ppppppbVar13 == (byte ******)0x0) {
      fVar25 = 0.0;
      fVar24 = 0.0;
    }
    else {
      fVar25 = *(float *)(ppppppbVar13 + 2);
      fVar24 = *(float *)((long)ppppppbVar13 + 0x14);
    }
  }
  else {
    func_0x00010b8cfe48();
    if (iVar19 != 0) {
      FUN_10b8c7e08(auStack_280,&UNK_10f7cb5ba);
    }
    ppppppbStack_208 = (byte ******)(double)fVar25;
    uStack_200 = 6;
    uStack_1f0 = 4;
    dVar21 = (double)fVar24;
    uStack_1e0 = 6;
    uStack_1d0 = 4;
    unaff_x22 = (byte ******)&ppppppbStack_208;
    param_5 = &ppppppbStack_208;
    uStack_1f8 = uVar2;
    dStack_1e8 = dVar21;
    uStack_1d8 = uVar3;
    func_0x000104bda910(&lStack_220,pppppppbVar16[8][3],1,param_5,4);
    fVar24 = 0.0;
    if ((lStack_220 == 1 && cStack_210 == '\t') && (lStack_218 != 0)) {
      fVar25 = 0.0;
      if (*(long *)(lStack_218 + 0x10) == 2) {
        FUN_10b9aa3b0(lStack_218 + 0x18);
        fVar25 = SUB84(dVar21,0);
        FUN_10b9aa3b0(lStack_218 + 0x28);
        fVar24 = SUB84(dVar21,0);
      }
    }
    else {
      fVar25 = 0.0;
    }
    func_0x000104bda914(&lStack_220);
    lVar18 = 0x30;
    do {
      FUN_10b9a8d98((long)unaff_x22 + lVar18);
      lVar18 = lVar18 + -0x10;
      fVar20 = SUB84(dVar21,0);
    } while (lVar18 != -0x10);
LAB_10b8c9b4c:
    func_0x0001080e8dd4(auStack_280);
  }
  pppppppbVar16[0x39] = (byte ******)((ulong)pppppppbVar16[0x39] & 0xfffffffeffffffff);
  param_3 = pppppppbVar16;
  FUN_10b8c8f00();
  fVar27 = (float)(int)((fVar27 + fVar25) * fVar20) / fVar20;
  if (uVar2 == 2) {
    uVar8 = (ulong)(uint)fVar27;
    if (fVar23 <= fVar27) {
      uVar8 = param_1 & 0xffffffff;
    }
  }
  else {
    uVar8 = (ulong)(uint)fVar27;
    if (uVar2 == 1) {
      uVar8 = param_1;
    }
  }
  if (uVar3 == 2) {
    uVar5 = (float)(int)((fVar26 + fVar24) * fVar20) / fVar20 == fVar22;
  }
  else {
    uVar5 = uVar3 == 1;
  }
LAB_10b8c9bcc:
  func_0x00010b8cf7e8(uStack_1c8,uVar8);
  if ((bool)uVar5) {
    return param_3;
  }
  ___stack_chk_fail();
  uStack_288 = 0x10b8c9c10;
  ppppppbStack_2b0 = unaff_x22;
  pppppppbStack_2a8 = unaff_x21;
  pppppppbStack_2a0 = pppppppbVar16;
  pppppppbStack_298 = pppppppbVar15;
  ppuStack_290 = &puStack_160;
  func_0x00010b8cf8a8();
  uVar9 = (uint)param_3[0x39];
  if (((ulong)param_5 & 1) == 0) {
    if ((uVar9 >> 8 & 1) == 0) {
      return param_3;
    }
    uVar9 = 0;
  }
  else {
    if ((uint)(uVar9 < 0x80000000) == ((uint)((ulong)param_3[0x39] >> 8) & 1)) {
      return param_3;
    }
    uVar9 = ~uVar9 >> 0x1f;
  }
  func_0x00010b8c9cd0(&ppppppbStack_2c8,pppppppbVar16);
  uVar8 = 0x100;
  if (uVar9 == 0) {
    uVar8 = 0;
  }
  pppppppbVar16[0x39] = (byte ******)((ulong)pppppppbVar16[0x39] & 0xfffffffffffffeff | uVar8);
  ppppppbVar6 = ppppppbStack_2c0;
  ppppppbVar13 = ppppppbStack_2c8;
  if (pppppppbVar16[8] != (byte ******)0x0) {
    func_0x00010b8c5e5c();
    ppppppbVar6 = ppppppbStack_2c0;
    ppppppbVar13 = ppppppbStack_2c8;
  }
  while (ppppppbVar17 = ppppppbStack_2c8, ppppppbVar13 != ppppppbVar6) {
    func_0x00010b8cff94();
  }
  for (; ppppppbVar17 != ppppppbStack_2c0; ppppppbVar17 = ppppppbVar17 + 1) {
    func_0x00010b8cf8b4();
    FUN_10b8c8fd0();
  }
  pppppppbVar16 = &ppppppbStack_2c8;
  func_0x00010b8ccf10(pppppppbVar16);
  return pppppppbVar16;
}



/* Entry: 10b8c98c4; end: 10b8c9c0f;  */

void FUN_10b8c98c4(ulong param_1,undefined8 param_2,undefined8 *param_3,uint param_4,double *param_5
                  )

{
  uint uVar1;
  long lVar2;
  undefined1 in_ZR;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined8 extraout_x8;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  byte bVar9;
  long *plVar10;
  double *unaff_x19;
  undefined8 *puVar11;
  double *unaff_x21;
  long lVar12;
  double *unaff_x22;
  float fVar13;
  double dVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  long lStack_178;
  long lStack_170;
  double *pdStack_160;
  double *pdStack_158;
  undefined8 *puStack_150;
  double *pdStack_148;
  undefined1 *puStack_140;
  undefined8 uStack_138;
  undefined1 auStack_130 [96];
  long lStack_d0;
  long lStack_c8;
  char cStack_c0;
  double dStack_b8;
  undefined2 uStack_b0;
  uint uStack_a8;
  undefined2 uStack_a0;
  double dStack_98;
  undefined2 uStack_90;
  uint uStack_88;
  undefined2 uStack_80;
  undefined8 uStack_78;
  
  func_0x00010b8cf80c();
  puVar11 = (undefined8 *)param_3[1];
  uStack_78 = extraout_x8;
  if (puVar11 == (undefined8 *)0x0) {
    uVar6 = 0;
    goto LAB_10b8c9bcc;
  }
  func_0x00010b8cfc00();
  *(int *)*param_3 = *(int *)*param_3 + 1;
  uVar5 = param_4;
  if (param_4 != 2) {
    uVar5 = 0;
  }
  param_4 = param_4 - 1;
  unaff_x22 = (double *)(ulong)param_4;
  if (param_4 == 0) {
    uVar5 = 1;
  }
  unaff_x21 = (double *)(ulong)uVar5;
  uVar4 = (uint)param_5;
  uVar1 = uVar4;
  if (uVar4 != 2) {
    uVar1 = 0;
  }
  if (uVar4 == 1) {
    uVar1 = 1;
  }
  unaff_x19 = (double *)(ulong)uVar1;
  uVar6 = puVar11[0x39];
  puVar11[0x39] = uVar6 | 0x100000000;
  if ((int)uVar6 < 0) {
    param_3 = puVar11;
    param_5 = unaff_x19;
    FUN_10b8c935c(param_1,param_2,puVar11,unaff_x21,unaff_x19,1);
  }
  iVar3 = (int)param_3;
  if ((puVar11[0x3a] == 0) || (lVar7 = *(long *)(puVar11[0x3a] + 0x28), lVar7 == 0)) {
    bVar9 = 1;
  }
  else {
    bVar9 = *(byte *)(lVar7 + 0x131);
  }
  plVar8 = (long *)puVar11[8];
  fVar19 = 0.0;
  plVar10 = plVar8;
  if ((*(char *)((long)puVar11 + 0x1cb) < '\0') && ((bVar9 & 1) != 0)) {
    if (plVar8 == (long *)0x0) {
      plVar10 = (long *)0x0;
      goto LAB_10b8c99dc;
    }
    lVar7 = *plVar8;
    fVar20 = 0.0;
    fVar19 = 0.0;
    if (lVar7 != 0) {
      fVar20 = *(float *)(lVar7 + 0x27c) + *(float *)(lVar7 + 0x284);
      fVar19 = *(float *)(lVar7 + 0x280) + *(float *)(lVar7 + 0x288);
    }
  }
  else {
LAB_10b8c99dc:
    fVar20 = 0.0;
  }
  fVar16 = (float)param_1;
  fVar18 = fVar16 - fVar20;
  if (fVar16 <= fVar20 || 1 < param_4) {
    fVar18 = fVar16;
  }
  fVar15 = (float)param_2;
  fVar13 = fVar15 - fVar19;
  fVar17 = fVar13;
  if (fVar15 <= fVar19 || 1 < uVar4 - 1) {
    fVar17 = fVar15;
  }
  if ((plVar10 == (long *)0x0) || (plVar10[3] == 0)) {
    if ((puVar11[0x16] != 0) && (*(long *)(puVar11[0x16] + 0x58) != 0)) {
      func_0x00010b8cfe48();
      if (iVar3 != 0) {
        FUN_10b8c7e08(auStack_130,&UNK_10f7cb5d7);
      }
      param_5 = unaff_x21;
      (**(code **)(**(long **)(puVar11[0x16] + 0x58) + 0x20))
                (*(long **)(puVar11[0x16] + 0x58),puVar11,unaff_x21,unaff_x19);
      fVar13 = fVar18;
      goto LAB_10b8c9b4c;
    }
    if (plVar8 == (long *)0x0) {
      fVar18 = 0.0;
      fVar17 = 0.0;
    }
    else {
      fVar18 = *(float *)(plVar8 + 2);
      fVar17 = *(float *)((long)plVar8 + 0x14);
    }
  }
  else {
    func_0x00010b8cfe48();
    if (iVar3 != 0) {
      FUN_10b8c7e08(auStack_130,&UNK_10f7cb5ba);
    }
    dStack_b8 = (double)fVar18;
    uStack_b0 = 6;
    uStack_a0 = 4;
    dVar14 = (double)fVar17;
    uStack_90 = 6;
    uStack_80 = 4;
    unaff_x22 = &dStack_b8;
    param_5 = &dStack_b8;
    uStack_a8 = uVar5;
    dStack_98 = dVar14;
    uStack_88 = uVar1;
    func_0x000104bda910(&lStack_d0,*(undefined8 *)(puVar11[8] + 0x18),1,param_5,4);
    fVar17 = 0.0;
    if ((lStack_d0 == 1 && cStack_c0 == '\t') && (lStack_c8 != 0)) {
      fVar18 = 0.0;
      if (*(long *)(lStack_c8 + 0x10) == 2) {
        FUN_10b9aa3b0(lStack_c8 + 0x18);
        fVar18 = SUB84(dVar14,0);
        FUN_10b9aa3b0(lStack_c8 + 0x28);
        fVar17 = SUB84(dVar14,0);
      }
    }
    else {
      fVar18 = 0.0;
    }
    func_0x000104bda914(&lStack_d0);
    lVar7 = 0x30;
    do {
      FUN_10b9a8d98((long)unaff_x22 + lVar7);
      lVar7 = lVar7 + -0x10;
      fVar13 = SUB84(dVar14,0);
    } while (lVar7 != -0x10);
LAB_10b8c9b4c:
    func_0x0001080e8dd4(auStack_130);
  }
  puVar11[0x39] = puVar11[0x39] & 0xfffffffeffffffff;
  param_3 = puVar11;
  FUN_10b8c8f00();
  fVar20 = (float)(int)((fVar20 + fVar18) * fVar13) / fVar13;
  if (uVar5 == 2) {
    uVar6 = (ulong)(uint)fVar20;
    if (fVar16 <= fVar20) {
      uVar6 = param_1 & 0xffffffff;
    }
  }
  else {
    uVar6 = (ulong)(uint)fVar20;
    if (uVar5 == 1) {
      uVar6 = param_1;
    }
  }
  if (uVar1 == 2) {
    in_ZR = (float)(int)((fVar19 + fVar17) * fVar13) / fVar13 == fVar15;
  }
  else {
    in_ZR = uVar1 == 1;
  }
LAB_10b8c9bcc:
  func_0x00010b8cf7e8(uStack_78,uVar6);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  uStack_138 = 0x10b8c9c10;
  pdStack_160 = unaff_x22;
  pdStack_158 = unaff_x21;
  puStack_150 = puVar11;
  pdStack_148 = unaff_x19;
  puStack_140 = &stack0xfffffffffffffff0;
  func_0x00010b8cf8a8();
  uVar5 = (uint)param_3[0x39];
  if (((ulong)param_5 & 1) == 0) {
    if ((uVar5 >> 8 & 1) == 0) {
      return;
    }
    uVar5 = 0;
  }
  else {
    if ((uint)(uVar5 < 0x80000000) == ((uint)((ulong)param_3[0x39] >> 8) & 1)) {
      return;
    }
    uVar5 = ~uVar5 >> 0x1f;
  }
  func_0x00010b8c9cd0(&lStack_178,puVar11);
  uVar6 = 0x100;
  if (uVar5 == 0) {
    uVar6 = 0;
  }
  puVar11[0x39] = puVar11[0x39] & 0xfffffffffffffeff | uVar6;
  lVar7 = lStack_170;
  lVar2 = lStack_178;
  if (puVar11[8] != 0) {
    func_0x00010b8c5e5c();
    lVar7 = lStack_170;
    lVar2 = lStack_178;
  }
  while (lVar12 = lStack_178, lVar2 != lVar7) {
    func_0x00010b8cff94();
  }
  for (; lVar12 != lStack_170; lVar12 = lVar12 + 8) {
    func_0x00010b8cf8b4();
    FUN_10b8c8fd0();
  }
  func_0x00010b8ccf10(&lStack_178);
  return;
}



/* Entry: 10b8c9c10; end: 10b8c9d3b;  */

void FUN_10b8c9c10(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  long unaff_x20;
  long lVar5;
  long lStack_48;
  long lStack_40;
  
  func_0x00010b8cf8a8();
  uVar4 = (uint)*(undefined8 *)(param_1 + 0x1c8);
  if ((param_3 & 1) == 0) {
    if ((uVar4 >> 8 & 1) == 0) {
      return;
    }
    uVar4 = 0;
  }
  else {
    if ((uint)(uVar4 < 0x80000000) == ((uint)((ulong)*(undefined8 *)(param_1 + 0x1c8) >> 8) & 1)) {
      return;
    }
    uVar4 = ~uVar4 >> 0x1f;
  }
  func_0x00010b8c9cd0(&lStack_48);
  uVar1 = 0x100;
  if (uVar4 == 0) {
    uVar1 = 0;
  }
  *(ulong *)(unaff_x20 + 0x1c8) = *(ulong *)(unaff_x20 + 0x1c8) & 0xfffffffffffffeff | uVar1;
  lVar2 = lStack_40;
  lVar3 = lStack_48;
  if (*(long *)(unaff_x20 + 0x40) != 0) {
    func_0x00010b8c5e5c();
    lVar2 = lStack_40;
    lVar3 = lStack_48;
  }
  while (lVar5 = lStack_48, lVar3 != lVar2) {
    func_0x00010b8cff94();
  }
  for (; lVar5 != lStack_40; lVar5 = lVar5 + 8) {
    func_0x00010b8cf8b4();
    FUN_10b8c8fd0();
  }
  func_0x00010b8ccf10(&lStack_48);
  return;
}



/* Entry: 10b8c9d3c; end: 10b8c9d5b;  */

void FUN_10b8c9d3c(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  long unaff_x20;
  long lVar5;
  long lStack_48;
  long lStack_40;
  
  uVar3 = 0x200;
  if (param_3 == 0) {
    uVar3 = 0;
  }
  *(ulong *)(param_1 + 0x1c8) = *(ulong *)(param_1 + 0x1c8) & 0xfffffffffffffdff | uVar3;
  uVar4 = (uint)*(undefined8 *)(param_1 + 0x1c8);
  if (-1 < (int)uVar4) {
    if ((uVar4 >> 9 & 1) != 0) {
      uVar3 = 1;
      goto FUN_10b8c9c10;
    }
    if (*(long *)(param_1 + 0x40) != 0) {
      uVar3 = (ulong)(*(long *)(*(long *)(param_1 + 0x40) + 0x18) != 0);
      goto FUN_10b8c9c10;
    }
  }
  uVar3 = 0;
FUN_10b8c9c10:
  func_0x00010b8cf8a8();
  uVar4 = (uint)*(undefined8 *)(param_1 + 0x1c8);
  if ((uVar3 & 1) == 0) {
    if ((uVar4 >> 8 & 1) == 0) {
      return;
    }
    uVar4 = 0;
  }
  else {
    if ((uint)(uVar4 < 0x80000000) == ((uint)((ulong)*(undefined8 *)(param_1 + 0x1c8) >> 8) & 1)) {
      return;
    }
    uVar4 = ~uVar4 >> 0x1f;
  }
  func_0x00010b8c9cd0(&lStack_48);
  uVar3 = 0x100;
  if (uVar4 == 0) {
    uVar3 = 0;
  }
  *(ulong *)(unaff_x20 + 0x1c8) = *(ulong *)(unaff_x20 + 0x1c8) & 0xfffffffffffffeff | uVar3;
  lVar1 = lStack_40;
  lVar2 = lStack_48;
  if (*(long *)(unaff_x20 + 0x40) != 0) {
    func_0x00010b8c5e5c();
    lVar1 = lStack_40;
    lVar2 = lStack_48;
  }
  while (lVar5 = lStack_48, lVar2 != lVar1) {
    func_0x00010b8cff94();
  }
  for (; lVar5 != lStack_40; lVar5 = lVar5 + 8) {
    func_0x00010b8cf8b4();
    FUN_10b8c8fd0();
  }
  func_0x00010b8ccf10(&lStack_48);
  return;
}



/* Entry: 10b8c9d5c; end: 10b8c9e0b;  */

long FUN_10b8c9d5c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  undefined8 uStack_28;
  
  plVar3 = (long *)(param_1 + 0x40);
  lVar2 = *plVar3;
  if (lVar2 == 0) {
    func_0x00010b8c9da4(&uStack_28);
    uVar1 = uStack_28;
    uStack_28 = 0;
    FUN_10b8cda48(plVar3,uVar1);
    FUN_10b8cda28(&uStack_28);
    lVar2 = *plVar3;
  }
  return lVar2;
}



/* Entry: 10b8c9e0c; end: 10b8c9e27;  */

undefined8 FUN_10b8c9e0c(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + 0x2a8);
  FUN_10b8ccfb4();
  return *puVar1;
}



/* Entry: 10b8c9e28; end: 10b8c9e93;  */

void FUN_10b8c9e28(void)

{
  undefined8 extraout_x8;
  undefined1 auStack_158 [24];
  undefined1 auStack_140 [256];
  
  func_0x00010b8cfd20();
  FUN_10b8c9e94(auStack_158);
  FUN_10b8c9f04();
  func_0x0001089a85c0(extraout_x8,auStack_140);
  func_0x000105673d7c(auStack_158);
  return;
}



/* Entry: 10b8c9e94; end: 10b8c9f03;  */

undefined8 * FUN_10b8c9e94(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  param_1[0x16] = 0;
  *param_1 = &PTR_SUB_1108a5a38;
  param_1[0x10] = &PTR_DAT_1108a5a88;
  param_1[2] = &PTR_DAT_1108a5a60;
  puVar1 = param_1;
  FUN_10b8ce5c0(param_1,&PTR_PTR_1108a5aa0,param_1 + 3);
  *puVar1 = &PTR_SUB_1108a5a38;
  puVar1[0x10] = &PTR_DAT_1108a5a88;
  puVar1[2] = &PTR_DAT_1108a5a60;
  func_0x0001089a84b0(puVar1 + 3,0x18);
  return param_1;
}



/* Entry: 10b8c9f04; end: 10b8ca16f;  */

void FUN_10b8c9f04(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined1 in_ZR;
  char *pcVar1;
  long lVar2;
  long lVar3;
  int extraout_w10;
  long unaff_x20;
  long lVar4;
  long lStack_90;
  long lStack_88;
  char *pcStack_80;
  
  func_0x00010b8cf8a8();
  FUN_10b8ca170(param_2,param_3);
  func_0x00010b8cfc94();
  lVar4 = unaff_x20;
  FUN_10b8c6a3c();
  func_0x000107c31070(param_2,lVar4);
  func_0x0001081209c4();
  func_0x00010b8cfa90();
  FUN_10b9ad8c0(&stack0xffffffffffffff88,unaff_x20 + 0x140);
  func_0x00010b8cfc94();
  func_0x00010b8cffb8();
  func_0x00010b8cfeb0();
  func_0x00010b8cffac();
  func_0x00010b8cfea0();
  func_0x00010b8cfff4();
  func_0x00010b8cfa90();
  lVar4 = *(long *)(unaff_x20 + 0x1d8);
  if ((lVar4 != 0) && (*(long *)(lVar4 + 0x10) != 0)) {
    do {
      func_0x00010b8d0018();
    } while (extraout_w10 != 0);
  }
  lStack_90 = lVar4;
  func_0x00010b9a8f78(&lStack_88,&lStack_90);
  FUN_10b9a9894(&stack0xffffffffffffff88,&lStack_88);
  pcVar1 = "view";
  func_0x00010b8cfc94();
  func_0x00010b8cffb8();
  func_0x00010b8cfeb0();
  func_0x00010b8cffac();
  func_0x00010b8cfea0();
  FUN_10b9a8d98(&lStack_88);
  func_0x000104bddf04(lVar4);
  func_0x00010b8cfff4();
  lVar4 = unaff_x20 + 0x90;
  FUN_10b8b5024(&lStack_90);
  if (*(long *)(lStack_90 + 0x20) != 0) {
    func_0x00010b8cfa90();
    lVar3 = lStack_90;
    lVar4 = lStack_90 + 0x10;
    func_0x00010527d444();
    lVar2 = *(long *)(lVar3 + 0x10);
    lVar3 = *(long *)(lVar3 + 0x28);
    lStack_88 = lVar4;
    pcStack_80 = pcVar1;
    while (in_ZR = lStack_88 == lVar2 + lVar3, !(bool)in_ZR) {
      FUN_10b9a9894(&stack0xffffffffffffff88,pcStack_80 + 8);
      func_0x0001081209c0();
      func_0x0001081401a8();
      func_0x00010b8cfeb0();
      func_0x0001081401a8();
      func_0x00010b8cfea0();
      func_0x00010527d4cc(&lStack_88);
    }
    lVar4 = lStack_88;
    func_0x00010b8cfff4();
  }
  func_0x00010b8cfb2c();
  if ((param_4 == 0) || (lVar4 == 0)) {
    func_0x00010b8cffe8();
  }
  else {
    func_0x00010b8cf970();
    func_0x00010b8d007c();
    while (func_0x00010b8d0070(), !(bool)in_ZR) {
      FUN_10b8c71f4(&stack0xffffffffffffff88);
      FUN_10b8c9f04();
    }
    func_0x00010b8cffe8();
    func_0x00010b8cfc94();
    FUN_10b8c6a3c();
    func_0x00010b8cfbe4();
    func_0x000107c31070();
  }
  func_0x0001081401a8();
  func_0x0001081209c4();
  func_0x000104bd4e64(lStack_90);
  return;
}



/* Entry: 10b8ca170; end: 10b8ca597;  */

void FUN_10b8ca170(undefined8 param_1,uint param_2)

{
  for (param_2 = param_2 & ((int)param_2 >> 0x1f ^ 0xffffffffU); param_2 != 0; param_2 = param_2 - 1
      ) {
    func_0x00010b8cfac8();
    func_0x0001081401a8();
  }
  return;
}



/* Entry: 10b8ca598; end: 10b8ca5d3;  */

void FUN_10b8ca598(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = 0;
  func_0x00010b8c89d4(param_1,&uStack_28);
  return;
}



/* Entry: 10b8ca5d4; end: 10b8ca603;  */

void FUN_10b8ca5d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  uStack_18 = *(undefined8 *)(param_1 + 0x148);
  FUN_10b8ca604(0,0,param_1,param_2,&uStack_18,param_3);
  return;
}



/* Entry: 10b8ca604; end: 10b8ca717;  */

void FUN_10b8ca604(float param_1,float param_2,long param_3)

{
  float fVar1;
  float fVar2;
  long lStack_48;
  
  if ((*(byte *)(param_3 + 0x1ca) >> 1 & 1) != 0) {
    fVar1 = param_1;
    fVar2 = param_2;
    FUN_10b8c8a98();
    FUN_10b8c6b24(&lStack_48,param_3);
    if (*(long *)(lStack_48 + 0x180) == 0) {
      func_0x00010b8cf998();
      FUN_10b8ca604(param_1 + fVar1,param_2 + fVar2);
    }
    else {
      func_0x00010b8cf998();
      FUN_10b8c7cc0();
      func_0x00010b8cf998();
      FUN_10b8ca5d4();
    }
    func_0x000107c3105c(lStack_48);
  }
  return;
}



/* Entry: 10b8ca718; end: 10b8ca8c7;  */

ulong FUN_10b8ca718(float param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  ulong uStack_58;
  
  FUN_10b8c840c(param_2,param_4);
  if ((0.0 < param_1) && (*(long *)(param_2 + 0x180) != 0)) {
    FUN_10b8c84b0(param_2,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010b8ca794. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10e5f5a94)[param_2 & 0xffffffff] * 4 + 0x10b8ca798))();
    return param_2;
  }
  if ((*(byte *)(param_2 + 0x1ca) >> 1 & 1) == 0) {
    uStack_58 = 0;
  }
  else {
    func_0x00010b8cfec0();
    FUN_10b8ca718(uStack_58,param_3,param_4,param_5,param_6,param_7);
    func_0x00010b8cf9a4();
  }
  return uStack_58;
}



/* Entry: 10b8ca8c8; end: 10b8ca927;  */

float FUN_10b8ca8c8(long param_1,float *param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  iVar1 = (int)param_1;
  fVar2 = *(float *)(param_1 + 0x148);
  fVar3 = *(float *)(param_1 + 0x14c);
  FUN_10b8c8230();
  if (iVar1 == 0) {
    if (fVar3 != 0.0) {
      return param_2[1] / fVar3;
    }
  }
  else if (fVar2 != 0.0) {
    return *param_2 / fVar2;
  }
  return 0.0;
}



/* Entry: 10b8ca928; end: 10b8ca98f;  */

ulong FUN_10b8ca928(float param_1,undefined8 param_2)

{
  ulong uVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = (float)param_2;
  uVar2 = (uint)((ulong)param_2 >> 0x20);
  if ((uVar2 & 0xff) == 2) {
    param_1 = param_1 * fVar3 * 0.01;
  }
  else {
    fVar4 = param_1;
    if (fVar3 <= param_1) {
      fVar4 = fVar3;
    }
    if (uVar2 == 1) {
      param_1 = fVar4;
    }
  }
  fVar3 = ABS(param_1);
  if (0x7f7fffff < (uint)fVar3) {
    param_1 = NAN;
  }
  uVar1 = 0x100000000;
  if (0x7f7fffff < (uint)fVar3) {
    uVar1 = 0;
  }
  return uVar1 | (uint)param_1;
}



/* Entry: 10b8ca990; end: 10b8caa7f;  */

void FUN_10b8ca990(void)

{
  func_0x00010b8cf894();
  func_0x00010b8cf8b4();
  func_0x00010b8ccfe4();
  return;
}



/* Entry: 10b8caa80; end: 10b8cb27b;  */

undefined8 *
FUN_10b8caa80(undefined **param_1,undefined **param_2,ulong param_3,float param_4,
             undefined **param_5,undefined8 param_6,int param_7,undefined **param_8,long param_9,
             long param_10)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  byte bVar4;
  undefined1 in_ZR;
  undefined1 uVar5;
  bool bVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined8 extraout_x8;
  undefined8 uVar10;
  undefined8 *extraout_x8_00;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  uint uVar14;
  byte *pbVar15;
  undefined *puVar16;
  undefined8 *puVar17;
  byte bVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  undefined *puVar22;
  undefined8 *puVar23;
  undefined **ppuVar24;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  undefined **ppuVar28;
  undefined **ppuVar29;
  undefined8 uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  float fStack_bc;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  
  ppuVar7 = param_5;
  ppuVar29 = param_1;
  ppuVar28 = param_2;
  func_0x00010b8cf80c();
  fVar25 = (float)param_3;
  fVar31 = SUB84(ppuVar28,0);
  uStack_98 = extraout_x8;
  if (param_7 == 0) {
    puVar17 = (undefined8 *)0x0;
    bVar1 = false;
    uVar14 = 0;
  }
  else {
    pbVar15 = param_5[3];
    FUN_10b8c8804(pbVar15);
    uStack_b8 = (undefined **)CONCAT44(fVar31,fVar25);
    uStack_c0 = (undefined4)param_3;
    uStack_b0 = (undefined8 *)CONCAT44(param_4,uStack_c0);
    fVar25 = SUB84(param_1,0) + fVar25;
    ppuVar29 = (undefined **)(ulong)(uint)fVar25;
    fVar31 = SUB84(param_2,0) + fVar31;
    ppuVar28 = (undefined **)(ulong)(uint)fVar31;
    uStack_c8 = (undefined **)CONCAT44(fVar31,fVar25);
    bVar4 = pbVar15[0x230] & 3;
    puVar22 = param_5[0x39];
    ppuVar7 = ppuVar28;
    fStack_bc = param_4;
    if (((uint)puVar22 >> 5 & 1) == 0) {
LAB_10b8cab30:
      FUN_10b9ad718(param_5 + 0x28);
      ppuVar28 = ppuVar7;
      fVar31 = fVar25;
      FUN_10b9ad718(&uStack_b8);
      in_ZR = SUB84(ppuVar7,0) == SUB84(ppuVar28,0);
      bVar1 = !(bool)in_ZR || fVar25 != fVar31;
      param_5[0x29] = (undefined *)uStack_b0;
      param_5[0x28] = (undefined *)uStack_b8;
      ppuVar7 = param_5;
      ppuVar29 = uStack_b8;
      func_0x00010b8c86d4();
      puVar16 = param_5[0x39];
      puVar17 = (undefined8 *)0x1;
      bVar18 = 1;
      if (((uint)puVar16 >> 5 & 1) != 0) goto LAB_10b8cab9c;
LAB_10b8cabb8:
      puVar22 = param_5[0x2b];
      ppuVar29 = (undefined **)param_5[0x2a];
      param_5[0x2b] = (undefined *)CONCAT44(fStack_bc,uStack_c0);
      param_5[0x2a] = (undefined *)uStack_c8;
      param_5[0x2d] = puVar22;
      param_5[0x2c] = (undefined *)ppuVar29;
      in_ZR = bVar4 == 2;
      uVar11 = 0x2000800;
      if (!(bool)in_ZR) {
        uVar11 = 0x800;
      }
      puVar16 = (undefined *)((ulong)puVar16 & 0xfffffffffdffffff | uVar11);
      ppuVar8 = ppuVar7;
      ppuVar28 = uStack_c8;
    }
    else {
      bVar18 = *pbVar15;
      ppuVar8 = param_5 + 0x28;
      in_ZR = bVar4 == 2;
      FUN_10b9ad8a8(ppuVar8,&uStack_b8);
      fVar25 = SUB84(ppuVar29,0);
      ppuVar7 = ppuVar28;
      if ((int)ppuVar8 != 0) goto LAB_10b8cab30;
      puVar17 = (undefined8 *)0x0;
      bVar1 = false;
      puVar16 = puVar22;
LAB_10b8cab9c:
      ppuVar7 = param_5 + 0x2a;
      FUN_10b9ad8a8(ppuVar7,&uStack_c8);
      if (((ulong)ppuVar7 & 1) != 0 || (uint)(bVar4 == 2) != ((uint)((ulong)puVar22 >> 0x19) & 1))
      goto LAB_10b8cabb8;
      ppuVar8 = ppuVar7;
      if ((bVar18 & 1) == 0) {
        uVar14 = 0;
        goto LAB_10b8caf54;
      }
    }
    param_5[0x39] = (undefined *)((ulong)puVar16 | 0x20);
    *param_5[3] = *param_5[3] & 0xfe;
    puVar22 = param_5[0x32];
    if (puVar22 != (undefined *)0x0) {
      ppuVar8 = param_5;
      FUN_10b8c8230();
      in_ZR = (uint)(byte)puVar22[0x38] == (uint)ppuVar8;
      if (!(bool)in_ZR) {
        puVar22[0x38] = (char)ppuVar8;
        puVar22[0x39] = 1;
      }
    }
    if ((*(byte *)((long)param_5 + 0x1cb) & 1) == 0) {
      if (param_5[0x30] != (undefined *)0x0) {
        param_5[0x30][0x47] = 0;
      }
      uVar14 = 1;
      ppuVar7 = ppuVar8;
    }
    else {
      func_0x00010b8cfc74();
      *(undefined1 *)((long)ppuVar8 + 0x47) = 1;
      bVar4 = param_5[3][0x230];
      ppuVar7 = param_5;
      func_0x00010b8c8da8();
      puVar22 = param_5[3];
      ppuVar29 = (undefined **)0x0;
      if ((((puVar22 != (undefined *)0x0) && ((puVar22[0x230] & 3) == 2)) && ((bVar4 >> 2 & 1) != 0)
          ) && ((*(uint *)(puVar22 + 0x28) & 0xc) == 8)) {
        plVar21 = (long *)ppuVar7[0x56];
        plVar19 = (long *)ppuVar7[0x55];
        while (plVar19 != plVar21) {
          plVar20 = plVar19 + 1;
          fVar25 = -*(float *)(*plVar19 + 0x25c);
          if (NAN(*(float *)(*plVar19 + 0x25c))) {
            fVar25 = -0.0;
          }
          FUN_10b8c8804();
          plVar19 = plVar20;
          if (fVar25 <= SUB84(ppuVar29,0)) {
            ppuVar29 = (undefined **)(ulong)(uint)fVar25;
          }
        }
        fVar25 = *(float *)(puVar22 + 0x27c);
        ppuVar28 = (undefined **)0x0;
        if (NAN(fVar25)) {
          fVar25 = 0.0;
        }
        ppuVar29 = (undefined **)(ulong)(uint)-(SUB84(ppuVar29,0) - fVar25);
      }
      plVar21 = (long *)ppuVar7[0x56];
      fVar31 = 0.0;
      plVar19 = (long *)ppuVar7[0x55];
      fVar25 = 0.0;
      while( true ) {
        fVar32 = SUB84(ppuVar28,0);
        fVar26 = (float)param_3;
        uVar5 = SBORROW8((long)plVar19,(long)plVar21);
        if (plVar19 == plVar21) break;
        plVar20 = plVar19 + 1;
        lVar12 = *plVar19;
        fVar33 = SUB84(ppuVar29,0);
        FUN_10b8c8804(lVar12);
        fVar26 = *(float *)(lVar12 + 0x264) + fVar33 + fVar26;
        param_3 = (ulong)(uint)*(float *)(lVar12 + 0x268);
        fVar32 = fVar32 + param_4 + *(float *)(lVar12 + 0x268);
        ppuVar28 = (undefined **)(ulong)(uint)fVar32;
        if (fVar31 <= fVar26) {
          fVar31 = fVar26;
        }
        plVar19 = plVar20;
        if (fVar25 <= fVar32) {
          fVar25 = fVar32;
        }
      }
      fVar31 = fVar31 + *(float *)((long)ppuVar7 + 0x284);
      ppuVar28 = (undefined **)(ulong)(uint)fVar31;
      fVar32 = *(float *)(ppuVar7 + 0x51);
      fVar25 = fVar25 + fVar32;
      uStack_b8 = (undefined **)CONCAT44(fVar25,fVar31);
      FUN_10b9ad718(param_5 + 0x28);
      uStack_c8 = (undefined **)CONCAT44(fVar32,(int)ppuVar28);
      FUN_10b8c8f00(param_5);
      ppuVar7 = param_5;
      FUN_10b8c8230(param_5);
      ppuVar9 = ppuVar8;
      func_0x00010b8d1e8c(ppuVar8,&uStack_b8,&uStack_c8,ppuVar7);
      ppuVar24 = ppuVar9;
      if ((*(byte *)((long)ppuVar8 + 0x49) & 1) != 0) {
        fVar31 = *(float *)((long)param_5 + 0x14c);
        uStack_b8 = &PTR_FUN_110d71f20;
        puVar13 = &uStack_b8;
        uStack_b0 = &uStack_b8;
        puStack_a0 = &uStack_b8;
        FUN_10b8cb394(puVar13,param_5,5);
        if (puVar13 != (undefined8 *)0x0) {
          iVar2 = *(int *)(puVar13 + 0x36);
          func_0x00010b8cfbd8(puVar13[3]);
          fVar32 = SUB84(ppuVar29,0);
          if ((bool)uVar5) {
            fVar32 = 0.0;
          }
          while( true ) {
            fVar26 = SUB84(ppuVar29,0);
            FUN_10b8c6b24(&uStack_c8);
            ppuVar7 = uStack_c8;
            func_0x00010b8cfc6c();
            if ((ppuVar7 == (undefined **)0x0) ||
               (bVar6 = SBORROW8((long)ppuVar7,(long)param_5), ppuVar7 == param_5)) break;
            func_0x00010b8cfbd8(ppuVar7[3]);
            if (bVar6) {
              fVar26 = 0.0;
            }
            ppuVar29 = (undefined **)(ulong)(uint)fVar26;
            fVar32 = fVar32 + fVar26;
          }
          fVar26 = *(float *)((long)ppuVar8 + 4);
          ppuVar29 = (undefined **)(ulong)(uint)fVar26;
          if (iVar2 != 1) {
            fVar32 = fVar32 - fVar31;
          }
          fVar31 = fVar25 - fVar31;
          fVar33 = 0.0;
          if (0.0 <= fVar31) {
            fVar33 = fVar31;
          }
          if (fVar32 <= fVar33) {
            fVar33 = fVar32;
          }
          if (fVar33 <= 0.0) {
            fVar33 = 0.0;
          }
          ppuVar28 = (undefined **)(ulong)(uint)fVar33;
          param_3 = (ulong)(uint)ABS(fVar33 - fVar26);
          param_4 = 0.5;
          if (0.5 < ABS(fVar33 - fVar26)) {
            fVar31 = (float)((ulong)*ppuVar8 >> 0x20);
            ppuVar28 = (undefined **)(ulong)(uint)fVar31;
            fVar31 = (fVar33 - fVar26) + fVar31;
            ppuVar29 = (undefined **)(ulong)(uint)fVar31;
            uStack_c8 = (undefined **)CONCAT44(fVar31,(int)*ppuVar8);
            func_0x00010b8d1d44(ppuVar8,&uStack_c8,&uStack_c8);
            *(undefined1 *)((long)ppuVar8 + 0x45) = 1;
            ppuVar24 = (undefined **)0x1;
          }
        }
        if (puStack_a0 == &uStack_b8) {
          uVar10 = 0x20;
        }
        else {
          if (puStack_a0 == (undefined8 *)0x0) goto LAB_10b8caec0;
          uVar10 = 0x28;
        }
        func_0x00010b8cffc4(uVar10);
      }
LAB_10b8caec0:
      in_ZR = 0;
      if (*(char *)((long)ppuVar8 + 0x4a) == '\x01') {
        ppuVar28 = (undefined **)(ulong)(uint)*(float *)((long)param_5 + 0x14c);
        fVar25 = fVar25 - *(float *)((long)param_5 + 0x14c);
        in_ZR = fVar25 == 0.0;
        fVar31 = 0.0;
        if (0.0 <= fVar25) {
          fVar31 = fVar25;
        }
        fVar32 = *(float *)((long)ppuVar8 + 4);
        ppuVar29 = (undefined **)(ulong)(uint)fVar32;
        if ((((*(byte *)((long)ppuVar8 + 0x44) & 1) == 0) &&
            (in_ZR = *(char *)((long)ppuVar8 + 0x4b) == '\x01', (bool)in_ZR)) &&
           (((*(byte *)((long)ppuVar8 + 0x46) & 1) == 0 &&
            ((ppuVar7 = param_5, FUN_10b8cb3c4(param_5,*(undefined4 *)(ppuVar8 + 0xb),0xc),
             ppuVar7 != (undefined **)0x0 && (ppuVar7[3] != (undefined *)0x0)))))) {
          FUN_10b8cb448(param_5,ppuVar7);
          fVar25 = fVar25 - *(float *)((long)ppuVar8 + 0x5c);
          if (fVar25 <= fVar31) {
            fVar31 = fVar25;
          }
          if (fVar31 <= 0.0) {
            fVar31 = 0.0;
          }
          fVar25 = ABS(fVar31 - fVar32);
          in_ZR = fVar25 == 0.5;
          if (0.5 < fVar25) {
            uStack_b8 = (undefined **)CONCAT44(fVar31,(int)*ppuVar8);
            func_0x00010b8d1d44(ppuVar8,&uStack_b8,&uStack_b8);
            ppuVar24 = (undefined **)0x1;
            *(undefined1 *)((long)ppuVar8 + 0x45) = 1;
            ppuVar29 = (undefined **)(ulong)(uint)fVar31;
          }
        }
        FUN_10b8cb4d4(param_5,ppuVar8);
      }
      uVar14 = 1;
      ppuVar7 = param_5;
      FUN_10b8cb2cc(param_5,1);
      if ((((ulong)ppuVar24 & 1) != 0) &&
         (ppuVar7 = param_5, func_0x00010b8c86d4(), ((uint)ppuVar9 >> 8 & 1) != 0)) {
        func_0x00010b8d1c8c(ppuVar8);
        uStack_b8 = (undefined **)CONCAT44((int)ppuVar28,(int)ppuVar29);
        uStack_c8 = (undefined **)0x0;
        FUN_10b8c7efc(param_5,&uStack_b8,&uStack_b8,&uStack_c8);
        ppuVar7 = param_5;
        FUN_10b8c7fcc(param_5,&uStack_b8,&uStack_b8);
      }
    }
  }
LAB_10b8caf54:
  puVar22 = param_5[0x39];
  if (((uint)puVar22 >> 10 & 1) != 0) {
    puVar22 = (undefined *)((ulong)puVar22 & 0xfffffffffffffbff);
    param_5[0x39] = puVar22;
    uVar14 = 1;
  }
  if ((((((uint)puVar22 >> 8 & 1) != 0) && ((long *)param_5[8] != (long *)0x0)) &&
      (((uint)puVar22 >> 1 & 1) != 0)) && (lVar12 = *(long *)param_5[8], lVar12 != 0)) {
    bVar4 = param_5[3][0x230];
    *(uint *)(lVar12 + 0x28) = *(uint *)(lVar12 + 0x28) & 0xfffffffc | bVar4 & 3;
    puVar13 = (undefined8 *)param_5[8];
    if (*(float *)(puVar13 + 1) == *(float *)(param_5 + 0x29)) {
      param_3 = (ulong)(uint)*(float *)((long)puVar13 + 0xc);
      fVar25 = *(float *)((long)param_5 + 0x14c);
      bVar6 = *(float *)((long)puVar13 + 0xc) != fVar25;
    }
    else {
      fVar25 = *(float *)((long)param_5 + 0x14c);
      bVar6 = true;
    }
    ppuVar28 = (undefined **)(ulong)(uint)fVar25;
    in_ZR = (bVar4 & 3) == (*(byte *)(lVar12 + 0x230) & 3);
    if (!(bool)in_ZR) {
      bVar6 = true;
    }
    ppuVar7 = param_5;
    FUN_10b8c962c(param_5,*puVar13,1,1,0,bVar6,1);
    ppuVar29 = (undefined **)param_5[0x29];
    *(undefined ***)(param_5[8] + 8) = ppuVar29;
    uVar14 = uVar14 | (uint)ppuVar7;
    puVar22 = param_5[0x39];
  }
  if ((int)puVar22 < 0) {
    ppuVar29 = (undefined **)(ulong)*(uint *)(param_5 + 0x29);
    ppuVar28 = (undefined **)(ulong)*(uint *)((long)param_5 + 0x14c);
    ppuVar7 = param_5;
    FUN_10b8c935c(param_5,1,1,bVar1);
    puVar22 = param_5[0x39];
    if (((ulong)puVar22 >> 0x21 & 1) == 0) goto LAB_10b8cb034;
    puVar22 = (undefined *)((ulong)puVar22 & 0xfffffffdffffffff);
    param_5[0x39] = puVar22;
    if (((uint)puVar22 >> 6 & 1) == 0) goto LAB_10b8cb03c;
LAB_10b8cb064:
    ppuVar9 = (undefined **)(ulong)(uint)(SUB84(param_1,0) + *(float *)(param_5 + 0x28));
    ppuVar29 = (undefined **)(ulong)(uint)*(float *)((long)param_5 + 0x144);
    ppuVar8 = (undefined **)(ulong)(uint)(SUB84(param_2,0) + *(float *)((long)param_5 + 0x144));
  }
  else {
LAB_10b8cb034:
    if (uVar14 == 0) goto LAB_10b8cb1ac;
    if (((uint)puVar22 >> 6 & 1) != 0) goto LAB_10b8cb064;
LAB_10b8cb03c:
    ppuVar8 = (undefined **)0x0;
    ppuVar9 = (undefined **)0x0;
    if (((uint)puVar22 >> 0x11 & 1) == 0) {
      ppuVar9 = (undefined **)(ulong)*(uint *)(param_5 + 0x28);
      ppuVar8 = (undefined **)(ulong)*(uint *)((long)param_5 + 0x144);
    }
  }
  uVar11 = 0;
  if ((param_5[0x30] != (undefined *)0x0) && (param_5[0x30][0x47] == '\x01')) {
    func_0x00010b8cfc74();
    uVar11 = (ulong)*(uint *)(ppuVar7 + 4);
  }
  ppuVar24 = param_5;
  FUN_10b8c6798();
  ppuVar7 = ppuVar24;
  if ((param_10 != 0) && (param_5[0x43] != (undefined *)0x0)) {
    ppuVar7 = (undefined **)(param_10 + 0x28);
    param_8 = param_5 + 0x43;
    func_0x00010b8c2624();
  }
  uStack_b0 = (undefined8 *)0x0;
  uStack_b8 = param_5;
  func_0x00010b8cf970();
  uVar14 = 0;
  puVar13 = (undefined8 *)0x1;
  while( true ) {
    puVar23 = puVar13;
    uVar35 = (undefined4)param_3;
    uVar34 = SUB84(ppuVar28,0);
    uVar27 = SUB84(ppuVar29,0);
    in_ZR = (long)puVar23 - (long)param_8 == 1;
    if ((bool)in_ZR) break;
    ppuVar7 = (undefined **)&uStack_b8;
    FUN_10b8c71f4();
    ppuVar29 = ppuVar9;
    ppuVar28 = ppuVar8;
    param_3 = uVar11;
    FUN_10b8caa80();
    uVar14 = uVar14 | (uint)ppuVar7;
    puVar13 = (undefined8 *)((long)puVar23 + 1);
    uStack_b0 = puVar23;
  }
  if ((((uVar14 & 1) != 0) && (*(char *)((long)param_5 + 0x1cb) < '\0')) &&
     (param_5[0x3b] != (undefined *)0x0)) {
    func_0x00010b8cfe20();
    (**(code **)(*ppuVar7 + 0x50))();
  }
  FUN_10b8c7200(param_5,param_6);
  FUN_10b8c7268(param_5,param_6,ppuVar24);
  if ((int)puVar17 != 0) {
    if (bVar1 != false) {
      FUN_10b8c8f44(param_5);
    }
    if (param_9 != 0) {
      *(undefined1 *)(param_9 + 0x39) = 1;
    }
    if (param_10 != 0) {
      uVar3 = *(undefined4 *)((long)param_5 + 0x1ac);
      FUN_10b8c8840(param_5);
      uStack_b8 = (undefined **)CONCAT44(uVar34,uVar27);
      uStack_b0 = (undefined8 *)CONCAT44(param_4,uVar35);
      func_0x00010b8d8cf0(param_10,uVar3,&uStack_b8);
    }
  }
LAB_10b8cb1ac:
  func_0x00010b8cf7e8(uStack_98);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    puVar17 = (undefined8 *)0x90;
    __Znwm();
    uVar10 = 0;
    uVar30 = 0;
    puVar17[1] = 0;
    *puVar17 = 0;
    puVar17[3] = 0;
    puVar17[2] = 0;
    puVar17[4] = 0x3f80000000000000;
    puVar17[5] = 0;
    puVar17[6] = 0;
    puVar17[7] = 0;
    *(undefined8 *)((long)puVar17 + 0x3d) = 0;
    func_0x00010b8cfd50();
    *(undefined4 *)((long)puVar17 + 0x46) = 0;
    *(undefined4 *)((long)puVar17 + 0x49) = 0;
    puVar17[0xb] = uVar30;
    puVar17[10] = uVar10;
    puVar17[0xd] = uVar30;
    puVar17[0xc] = uVar10;
    puVar17[0xf] = uVar30;
    puVar17[0xe] = uVar10;
    puVar17[0x11] = uVar30;
    puVar17[0x10] = uVar10;
    *extraout_x8_00 = puVar17;
    return puVar17;
  }
  return puVar17;
}



/* Entry: 10b8cb27c; end: 10b8cb2cb;  */

void FUN_10b8cb27c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  
  puVar1 = (undefined8 *)0x90;
  __Znwm();
  uVar2 = 0;
  uVar3 = 0;
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 0;
  uVar7 = 0;
  uVar8 = 0;
  uVar9 = 0;
  uVar10 = 0;
  uVar11 = 0;
  uVar12 = 0;
  uVar13 = 0;
  uVar14 = 0;
  uVar15 = 0;
  uVar16 = 0;
  uVar17 = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[4] = 0x3f80000000000000;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  *(undefined8 *)((long)puVar1 + 0x3d) = 0;
  func_0x00010b8cfd50();
  *(undefined4 *)((long)puVar1 + 0x46) = 0;
  *(undefined4 *)((long)puVar1 + 0x49) = 0;
  puVar1[0xb] = CONCAT17(uVar17,CONCAT16(uVar16,CONCAT15(uVar15,CONCAT14(uVar14,CONCAT13(uVar13,
                                                  CONCAT12(uVar12,CONCAT11(uVar11,uVar10)))))));
  puVar1[10] = CONCAT17(uVar9,CONCAT16(uVar8,CONCAT15(uVar7,CONCAT14(uVar6,CONCAT13(uVar5,CONCAT12(
                                                  uVar4,CONCAT11(uVar3,uVar2)))))));
  puVar1[0xd] = CONCAT17(uVar17,CONCAT16(uVar16,CONCAT15(uVar15,CONCAT14(uVar14,CONCAT13(uVar13,
                                                  CONCAT12(uVar12,CONCAT11(uVar11,uVar10)))))));
  puVar1[0xc] = CONCAT17(uVar9,CONCAT16(uVar8,CONCAT15(uVar7,CONCAT14(uVar6,CONCAT13(uVar5,CONCAT12(
                                                  uVar4,CONCAT11(uVar3,uVar2)))))));
  puVar1[0xf] = CONCAT17(uVar17,CONCAT16(uVar16,CONCAT15(uVar15,CONCAT14(uVar14,CONCAT13(uVar13,
                                                  CONCAT12(uVar12,CONCAT11(uVar11,uVar10)))))));
  puVar1[0xe] = CONCAT17(uVar9,CONCAT16(uVar8,CONCAT15(uVar7,CONCAT14(uVar6,CONCAT13(uVar5,CONCAT12(
                                                  uVar4,CONCAT11(uVar3,uVar2)))))));
  puVar1[0x11] = CONCAT17(uVar17,CONCAT16(uVar16,CONCAT15(uVar15,CONCAT14(uVar14,CONCAT13(uVar13,
                                                  CONCAT12(uVar12,CONCAT11(uVar11,uVar10)))))));
  puVar1[0x10] = CONCAT17(uVar9,CONCAT16(uVar8,CONCAT15(uVar7,CONCAT14(uVar6,CONCAT13(uVar5,CONCAT12
                                                  (uVar4,CONCAT11(uVar3,uVar2)))))));
  *param_1 = puVar1;
  return;
}



/* Entry: 10b8cb2cc; end: 10b8cb393;  */

void FUN_10b8cb2cc(undefined ***param_1,int param_2,int param_3)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  undefined ***pppuVar2;
  undefined8 extraout_x8;
  undefined **ppuVar3;
  code *extraout_x8_00;
  undefined **ppuVar4;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined1 uStack_69;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined ***pppuStack_58;
  undefined8 uStack_38;
  
  func_0x00010b8cf80c();
  uStack_69 = (undefined1)param_2;
  ppuVar3 = param_1[0x30];
  uStack_38 = extraout_x8;
  if (((ppuVar3 != (undefined **)0x0) &&
      (in_ZR = *(char *)((long)ppuVar3 + 0x4c) == '\x01', (bool)in_ZR)) &&
     (ppuVar4 = param_1[0x3a], ppuVar4 != (undefined **)0x0)) {
    uStack_70 = *(undefined4 *)((long)ppuVar3 + 4);
    uStack_74 = *(undefined4 *)(ppuVar3 + 10);
    uStack_78 = *(undefined4 *)((long)ppuVar3 + 0x54);
    pcStack_68 = FUN_10b8cd02c;
    ppuStack_60 = &PTR_FUN_110d71da0;
    pppuVar2 = param_1;
    func_0x00010b8cfc18();
    *pppuVar2 = (undefined **)param_1;
    pppuVar2[1] = (undefined **)&uStack_69;
    pppuVar2[2] = (undefined **)&uStack_74;
    pppuVar2[3] = (undefined **)&uStack_70;
    pppuVar2[4] = (undefined **)&uStack_78;
    param_2 = (int)&pcStack_68;
    pppuStack_58 = pppuVar2;
    FUN_10b8d2f54(ppuVar4);
    param_1 = &ppuStack_60;
    (*(code *)*ppuStack_60)();
  }
  func_0x00010b8cf7e8(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  if (param_1 != (undefined ***)0x0) {
    func_0x00010b8d0034();
    (*extraout_x8_00)();
    return;
  }
  func_0x000108141b38();
  if ((param_2 != 0) && (uVar1 = param_3 == 1, 0 < param_3)) {
    FUN_10b8c71d4();
    func_0x00010b8cfb8c();
    while (func_0x00010b8cfb80(), !(bool)uVar1) {
      func_0x00010b8cf90c();
      uVar1 = *(int *)((long)param_1 + 0x1ac) == param_2;
      if ((bool)uVar1) {
        return;
      }
      FUN_10b8cb3c4();
      if (param_1 != (undefined ***)0x0) {
        return;
      }
      func_0x00010b8cfd2c();
    }
  }
  return;
}



/* Entry: 10b8cb394; end: 10b8cb3c3;  */

void FUN_10b8cb394(long param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  code *extraout_x8;
  
  if (param_1 != 0) {
    func_0x00010b8d0034();
    (*extraout_x8)();
    return;
  }
  func_0x000108141b38();
  if ((param_2 != 0) && (uVar1 = param_3 == 1, 0 < param_3)) {
    FUN_10b8c71d4();
    func_0x00010b8cfb8c();
    while (func_0x00010b8cfb80(), !(bool)uVar1) {
      func_0x00010b8cf90c();
      uVar1 = *(int *)(param_1 + 0x1ac) == param_2;
      if ((bool)uVar1) {
        return;
      }
      FUN_10b8cb3c4();
      if (param_1 != 0) {
        return;
      }
      func_0x00010b8cfd2c();
    }
  }
  return;
}



/* Entry: 10b8cb3c4; end: 10b8cb447;  */

void FUN_10b8cb3c4(long param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  
  if ((param_2 != 0) && (uVar1 = param_3 == 1, 0 < param_3)) {
    FUN_10b8c71d4();
    func_0x00010b8cfb8c();
    while (func_0x00010b8cfb80(), !(bool)uVar1) {
      func_0x00010b8cf90c();
      uVar1 = *(int *)(param_1 + 0x1ac) == param_2;
      if ((bool)uVar1) {
        return;
      }
      FUN_10b8cb3c4();
      if (param_1 != 0) {
        return;
      }
      func_0x00010b8cfd2c();
    }
  }
  return;
}



/* Entry: 10b8cb448; end: 10b8cb4d3;  */

ulong FUN_10b8cb448(ulong param_1,long param_2,long param_3)

{
  undefined1 in_OV;
  bool bVar1;
  float fVar2;
  ulong uVar3;
  long lStack_38;
  
  uVar3 = 0;
  if (*(long *)(param_3 + 0x18) != 0) {
    func_0x00010b8cfbd8();
    uVar3 = param_1 & 0xffffffff;
    if ((bool)in_OV) {
      uVar3 = 0;
    }
  }
  while( true ) {
    FUN_10b8c6b24(&lStack_38,param_3);
    param_3 = lStack_38;
    func_0x00010b8cf9a4();
    fVar2 = (float)param_1;
    if ((param_3 == 0) || (bVar1 = SBORROW8(param_3,param_2), param_3 == param_2)) break;
    if (*(long *)(param_3 + 0x18) != 0) {
      func_0x00010b8cfbd8();
      if (bVar1) {
        fVar2 = 0.0;
      }
      param_1 = (ulong)(uint)fVar2;
      uVar3 = (ulong)(uint)((float)uVar3 + fVar2);
    }
  }
  return uVar3;
}



/* Entry: 10b8cb4d4; end: 10b8cb643;  */

void FUN_10b8cb4d4(float param_1,float param_2,long param_3,long param_4)

{
  byte bVar1;
  bool bVar2;
  undefined1 uVar3;
  long lVar4;
  long extraout_x8;
  long unaff_x19;
  long lVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  func_0x00010b8cf8a8();
  lVar5 = 0;
  fVar10 = 0.5;
  fVar12 = param_1 + param_2 * 0.5;
  fVar13 = 0.0;
  for (iVar8 = 0; iVar8 != 0xc; iVar8 = iVar8 + 1) {
    func_0x00010b8cff08();
    lVar6 = 0;
    bVar1 = 0;
    fVar14 = 0.0;
    lVar4 = param_4;
    for (lVar9 = 1; uVar3 = SBORROW8(lVar9 - param_4,1), lVar9 - param_4 != 1; lVar9 = lVar9 + 1) {
      func_0x00010b8cf90c();
      if (*(long *)(param_3 + 0x18) != 0) {
        func_0x00010b8cfbd8();
        if ((bool)uVar3) {
          fVar10 = 0.0;
        }
        fVar10 = fVar13 + fVar10;
        fVar11 = *(float *)(extraout_x8 + 0x238);
        if (NAN(fVar11)) {
          fVar11 = 0.0;
        }
        bVar2 = false;
        if ((fVar10 <= fVar12) && (bVar2 = false, !NAN(fVar12) && !NAN(fVar10 + fVar11))) {
          bVar2 = fVar12 < fVar10 + fVar11;
        }
        lVar7 = param_3;
        fVar11 = fVar10;
        if (bVar2) goto LAB_10b8cb5c8;
        if (fVar12 <= fVar10) {
          if ((bool)(bVar1 & fVar14 <= fVar10)) {
            bVar1 = 1;
          }
          else {
            bVar1 = 1;
            lVar6 = param_3;
            fVar14 = fVar10;
          }
        }
      }
    }
    lVar7 = lVar6;
    fVar11 = fVar14;
    if (lVar6 == 0) break;
LAB_10b8cb5c8:
    fVar13 = fVar11;
    if (*(int *)(lVar7 + 0x1ac) != 0) {
      lVar5 = lVar7;
    }
    param_4 = lVar4;
  }
  fVar10 = 0.0;
  if (lVar5 == 0) {
    uVar3 = 0;
    iVar8 = 0;
  }
  else {
    iVar8 = *(int *)(lVar5 + 0x1ac);
    if (iVar8 == 0) {
      uVar3 = 0;
    }
    else {
      func_0x00010b8cfd8c();
      FUN_10b8cb448();
      fVar10 = fVar10 - param_1;
      uVar3 = 1;
    }
  }
  *(undefined1 *)(unaff_x19 + 0x4b) = uVar3;
  *(int *)(unaff_x19 + 0x58) = iVar8;
  *(float *)(unaff_x19 + 0x5c) = fVar10;
  return;
}


