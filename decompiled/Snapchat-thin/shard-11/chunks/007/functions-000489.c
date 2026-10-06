/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1088a0ba4; end: 1088a0bd7;  */

undefined8 FUN_1088a0ba4(undefined8 param_1)

{
  FUN_1088a0cc8(param_1);
  return param_1;
}



/* Entry: 1088a0bd8; end: 1088a0c13;  */

void FUN_1088a0bd8(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  FUN_1088a0c14(param_1,*param_2,*param_3);
  return;
}



/* Entry: 1088a0c14; end: 1088a0c9b;  */

undefined8 FUN_1088a0c14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x0001088a0c58(param_1,param_2,param_3);
  return param_1;
}



/* Entry: 1088a0c9c; end: 1088a0cc7;  */

void FUN_1088a0c9c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}



/* Entry: 1088a0cc8; end: 1088a0fd3;  */

undefined8 FUN_1088a0cc8(undefined8 param_1)

{
  FUN_10865b418(param_1);
  return param_1;
}



/* Entry: 1088a0fd4; end: 1088a0fff;  */

undefined8 FUN_1088a0fd4(undefined8 param_1)

{
  return param_1;
}



/* Entry: 1088a1000; end: 1088a1033;  */

undefined8 FUN_1088a1000(undefined8 param_1)

{
  FUN_1088a1034(param_1);
  return param_1;
}



/* Entry: 1088a1034; end: 1088a106f;  */

undefined8 FUN_1088a1034(undefined8 param_1)

{
  return param_1;
}



/* Entry: 1088a1070; end: 1088a10cb;  */

void FUN_1088a1070(float *param_1,ulong param_2)

{
  float *pfVar1;
  float fVar2;
  
  pfVar1 = param_1;
  func_0x00010889f330();
  fVar2 = (float)param_2 / *pfVar1;
  func_0x000108892b00(fVar2);
  FUN_1088a10cc(param_1,(long)fVar2);
  return;
}



/* Entry: 1088a10cc; end: 1088a10f7;  */

void FUN_1088a10cc(undefined8 param_1,undefined8 param_2)

{
  FUN_1088a10f8(param_1,param_2);
  return;
}



/* Entry: 1088a10f8; end: 1088a1247;  */

void FUN_1088a10f8(float *param_1,float *param_2)

{
  float *pfVar1;
  long lVar2;
  float **ppfVar3;
  ulong uVar4;
  float fVar5;
  long lStack_50;
  float *pfStack_48;
  float *pfStack_40;
  float *pfStack_38;
  
  pfStack_38 = param_1;
  if (param_2 == (float *)0x1) {
    pfStack_40 = (float *)0x2;
  }
  else {
    pfStack_40 = param_2;
    if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
      __ZNSt3__112__next_primeEm();
      pfStack_40 = param_2;
    }
  }
  pfVar1 = param_1;
  FUN_108890f34();
  pfStack_48 = pfVar1;
  if (pfVar1 < pfStack_40) {
    FUN_1088a1248(param_1,pfStack_40);
  }
  else if (pfStack_40 < pfVar1) {
    FUN_108892ac0();
    if (((ulong)pfVar1 & 1) == 0) {
      pfVar1 = param_1;
      FUN_108890e54();
      uVar4 = *(ulong *)pfVar1;
      pfVar1 = param_1;
      func_0x00010889f330();
      fVar5 = (float)uVar4 / *pfVar1;
      func_0x000108892b00();
      lVar2 = (long)fVar5;
      __ZNSt3__112__next_primeEm();
    }
    else {
      pfVar1 = param_1;
      FUN_108890e54();
      uVar4 = *(ulong *)pfVar1;
      pfVar1 = param_1;
      func_0x00010889f330();
      fVar5 = (float)uVar4 / *pfVar1;
      func_0x000108892b00();
      lVar2 = (long)fVar5;
      FUN_108892b18();
    }
    ppfVar3 = &pfStack_40;
    lStack_50 = lVar2;
    FUN_108891270(ppfVar3,&lStack_50);
    pfStack_40 = *ppfVar3;
    if (pfStack_40 < pfStack_48) {
      FUN_1088a1248(param_1,pfStack_40);
    }
  }
  return;
}



/* Entry: 1088a1248; end: 1088a144b;  */

void FUN_1088a1248(ulong *param_1,ulong param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puStack_60;
  ulong *puStack_50;
  ulong *puStack_48;
  ulong uStack_40;
  
  puVar2 = param_1;
  func_0x000108890fd4();
  FUN_10889c458();
  if (param_2 == 0) {
    puVar2 = (ulong *)0x0;
  }
  else {
    FUN_1088a144c(puVar2,param_2);
  }
  FUN_10889f2a4(param_1,puVar2);
  puVar2 = param_1;
  func_0x000108890fd4();
  FUN_108891070();
  *puVar2 = param_2;
  if (param_2 != 0) {
    for (uStack_40 = 0; uStack_40 < param_2; uStack_40 = uStack_40 + 1) {
      puVar2 = param_1;
      FUN_108890e90(param_1,uStack_40);
      *puVar2 = 0;
    }
    puVar2 = param_1 + 2;
    FUN_108890e6c();
    puStack_48 = (ulong *)*puVar2;
    if (puStack_48 != (ulong *)0x0) {
      puStack_60 = puStack_48;
      func_0x000108890f1c();
      func_0x000108890eb8();
      puVar1 = param_1;
      FUN_108890e90(param_1,puStack_60);
      *puVar1 = (ulong)puVar2;
      puStack_50 = (ulong *)*puStack_48;
      while (puStack_50 != (ulong *)0x0) {
        puVar2 = puStack_50;
        func_0x000108890f1c();
        func_0x000108890eb8();
        if (puVar2 == puStack_60) {
          puStack_48 = puStack_50;
        }
        else {
          puVar1 = param_1;
          FUN_108890e90(param_1,puVar2);
          if (*puVar1 == 0) {
            puVar1 = param_1;
            FUN_108890e90(param_1,puVar2);
            *puVar1 = (ulong)puStack_48;
            puStack_48 = puStack_50;
            puStack_60 = puVar2;
          }
          else {
            *puStack_48 = *puStack_50;
            puVar1 = param_1;
            FUN_108890e90(param_1,puVar2);
            *puStack_50 = *(ulong *)*puVar1;
            puVar1 = param_1;
            FUN_108890e90(param_1,puVar2);
            *(ulong **)*puVar1 = puStack_50;
          }
        }
        puStack_50 = (ulong *)*puStack_48;
      }
    }
  }
  return;
}



/* Entry: 1088a144c; end: 1088a1477;  */

void FUN_1088a144c(undefined8 param_1,undefined8 param_2)

{
  FUN_1088a1478(param_1,param_2);
  return;
}



/* Entry: 1088a1478; end: 1088a14bf;  */

void FUN_1088a1478(ulong param_1,ulong param_2)

{
  FUN_1088a14c0();
  if (param_1 < param_2) {
    func_0x000104bd35f4();
  }
  func_0x0001088a14e8(param_2);
  return;
}



/* Entry: 1088a14c0; end: 1088a159b;  */

ulong FUN_1088a14c0(ulong param_1)

{
  FUN_10888fbcc();
  return param_1 >> 3;
}



/* Entry: 1088a159c; end: 1088a15d7;  */

undefined8 FUN_1088a159c(undefined8 param_1,undefined8 param_2)

{
  FUN_1088a21b0(param_1,param_2);
  return param_1;
}



/* Entry: 1088a15d8; end: 1088a1657;  */

void FUN_1088a15d8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined7 uStack_2f;
  undefined1 uStack_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_1088a1658(param_1,param_2,param_2);
  uStack_20 = (undefined1)param_2;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 - lVar1 != 0) {
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_11034bdc0 - lVar1,param_1,
                      CONCAT71(uStack_2f,uStack_20));
  }
  return;
}



/* Entry: 1088a1658; end: 1088a19b7;  */

undefined1  [16] FUN_1088a1658(float *param_1,undefined8 param_2,undefined8 param_3)

{
  unkuint9 Var1;
  bool bVar2;
  float *pfVar3;
  float *pfVar4;
  ulong *puVar5;
  undefined8 uVar6;
  long lVar7;
  float fVar8;
  undefined1 auStack_c8 [8];
  float *pfStack_c0;
  long lStack_a8;
  ulong uStack_a0;
  float afStack_98 [6];
  float *pfStack_80;
  float *pfStack_78;
  undefined1 uStack_69;
  float *pfStack_68;
  float *pfStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  float *pfStack_48;
  undefined1 auStack_40 [16];
  
  pfVar3 = param_1;
  uStack_58 = param_3;
  uStack_50 = param_2;
  pfStack_48 = param_1;
  FUN_10889f318();
  FUN_108891d1c();
  pfVar4 = param_1;
  pfStack_60 = pfVar3;
  FUN_108890f34();
  uStack_69 = 0;
  pfStack_68 = pfVar4;
  if (pfVar4 != (float *)0x0) {
    pfVar3 = pfStack_60;
    func_0x000108890eb8(pfStack_60,pfVar4);
    pfVar4 = param_1;
    pfStack_80 = pfVar3;
    func_0x000108890e90(param_1,pfVar3);
    pfStack_78 = *(float **)pfVar4;
    if (pfStack_78 != (float *)0x0) {
      pfStack_78 = *(float **)pfStack_78;
      do {
        bVar2 = false;
        if (pfStack_78 != (float *)0x0) {
          pfVar3 = pfStack_78;
          func_0x000108890f1c();
          bVar2 = true;
          if (pfVar3 != pfStack_60) {
            pfVar3 = pfStack_78;
            func_0x000108890f1c();
            func_0x000108890eb8();
            bVar2 = pfVar3 == pfStack_80;
          }
        }
        if (!bVar2) break;
        pfVar3 = pfStack_78;
        func_0x000108890f1c();
        if (pfVar3 == pfStack_60) {
          pfVar3 = param_1;
          func_0x00010889f348();
          pfVar4 = pfStack_78;
          func_0x000108891d98(pfStack_78);
          FUN_108891dbc();
          func_0x000108891d60(pfVar3,pfVar4,uStack_50);
          if (((ulong)pfVar3 & 1) != 0) goto LAB_1088a1978;
        }
        pfStack_78 = *(float **)pfStack_78;
      } while( true );
    }
  }
  FUN_1088a19b8(afStack_98,param_1,pfStack_60,uStack_58);
  pfVar3 = param_1;
  FUN_108890e54();
  lVar7 = *(long *)pfVar3;
  Var1 = ZEXT89(pfStack_68);
  pfVar4 = param_1;
  func_0x00010889f330();
  pfVar3 = pfStack_68;
  if (((float)(unkint9)Var1 * *pfVar4 < (float)(lVar7 + 1)) || (pfStack_68 == (float *)0x0)) {
    pfVar4 = pfStack_68;
    FUN_108892ac0();
    uStack_a0 = (ulong)((uint)pfVar4 ^ 1) | (long)pfVar3 << 1;
    pfVar3 = param_1;
    FUN_108890e54();
    lVar7 = *(long *)pfVar3;
    pfVar3 = param_1;
    func_0x00010889f330();
    fVar8 = (float)(lVar7 + 1) / *pfVar3;
    func_0x000108892b00();
    lStack_a8 = (long)fVar8;
    puVar5 = &uStack_a0;
    FUN_108891270(puVar5,&lStack_a8);
    FUN_1088a10cc(param_1,*puVar5);
    pfVar3 = param_1;
    FUN_108890f34();
    pfVar4 = pfStack_60;
    pfStack_68 = pfVar3;
    func_0x000108890eb8(pfStack_60,pfVar3);
    pfStack_80 = pfVar4;
  }
  pfVar3 = param_1;
  func_0x000108890e90(param_1,pfStack_80);
  pfStack_c0 = *(float **)pfVar3;
  if (pfStack_c0 == (float *)0x0) {
    pfVar3 = param_1 + 4;
    FUN_108890e6c();
    lVar7 = *(long *)pfVar3;
    pfVar4 = afStack_98;
    pfStack_c0 = pfVar3;
    FUN_1088a1ab8();
    *(long *)pfVar4 = lVar7;
    pfVar3 = afStack_98;
    func_0x0001088a1ad0();
    FUN_108890e6c();
    pfVar4 = pfStack_c0;
    *(float **)pfStack_c0 = pfVar3;
    pfVar3 = param_1;
    func_0x000108890e90(param_1,pfStack_80);
    *(float **)pfVar3 = pfVar4;
    pfVar3 = afStack_98;
    FUN_1088a1ab8();
    if (*(long *)pfVar3 != 0) {
      pfVar3 = afStack_98;
      func_0x0001088a1ad0();
      FUN_108890e6c();
      pfVar4 = afStack_98;
      FUN_1088a1ab8();
      uVar6 = *(undefined8 *)pfVar4;
      func_0x000108890f1c(uVar6);
      func_0x000108890eb8();
      pfVar4 = param_1;
      func_0x000108890e90(param_1,uVar6);
      *(float **)pfVar4 = pfVar3;
    }
  }
  else {
    lVar7 = *(long *)pfStack_c0;
    pfVar3 = afStack_98;
    FUN_1088a1ab8();
    *(long *)pfVar3 = lVar7;
    pfVar3 = afStack_98;
    func_0x0001088a1ad0();
    *(float **)pfStack_c0 = pfVar3;
  }
  pfVar3 = afStack_98;
  func_0x0001088a1ae8();
  pfStack_78 = pfVar3;
  FUN_108890e54();
  *(long *)param_1 = *(long *)param_1 + 1;
  uStack_69 = 1;
  func_0x0001088a1b0c(afStack_98);
LAB_1088a1978:
  func_0x0001088a1b40(auStack_c8,pfStack_78);
  func_0x0001088a1b7c(auStack_40,auStack_c8,&uStack_69);
  return auStack_40;
}



/* Entry: 1088a19b8; end: 1088a1ab7;  */

/* WARNING: Removing unreachable block (ram,0x0001088a1a80) */

void FUN_1088a19b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_60 [23];
  undefined1 uStack_49;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  uStack_40 = param_4;
  uStack_38 = param_3;
  uStack_30 = param_2;
  lStack_28 = param_1;
  FUN_10889c1c4();
  uStack_49 = 0;
  uStack_48 = param_2;
  FUN_1088a1bc0(param_2);
  FUN_1088a1bf0(auStack_60,uStack_48);
  func_0x0001088a1c38(param_1,param_2,auStack_60);
  FUN_1088a1cb0(param_1);
  FUN_1088a1c7c();
  uVar1 = uStack_48;
  lVar2 = param_1;
  FUN_1088a1ab8(param_1);
  FUN_108891dbc();
  FUN_10889c204();
  FUN_1088a1cc8(uVar1,lVar2,uStack_40);
  FUN_1088a1cf8();
  *(undefined1 *)(param_1 + 8) = 1;
  return;
}



/* Entry: 1088a1ab8; end: 1088a1b0b;  */

undefined8 FUN_1088a1ab8(undefined8 *param_1)

{
  return *param_1;
}



/* Entry: 1088a1b0c; end: 1088a1bbf;  */

undefined8 FUN_1088a1b0c(undefined8 param_1)

{
  func_0x0001088a2068(param_1);
  return param_1;
}



/* Entry: 1088a1bc0; end: 1088a1bef;  */

void FUN_1088a1bc0(undefined8 param_1)

{
  FUN_1088a1d10(param_1,1);
  return;
}



/* Entry: 1088a1bf0; end: 1088a1c7b;  */

undefined8 FUN_1088a1bf0(undefined8 param_1,undefined8 param_2)

{
  FUN_1088a1dbc(param_1,param_2,0);
  return param_1;
}



/* Entry: 1088a1c7c; end: 1088a1caf;  */

void FUN_1088a1c7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1088a1ea8(param_1,param_2,param_3);
  return;
}



/* Entry: 1088a1cb0; end: 1088a1cc7;  */

undefined8 FUN_1088a1cb0(undefined8 *param_1)

{
  return *param_1;
}



/* Entry: 1088a1cc8; end: 1088a1cf7;  */

void FUN_1088a1cc8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1088a1f88(param_2,param_3);
  return;
}



/* Entry: 1088a1cf8; end: 1088a1d0f;  */

long FUN_1088a1cf8(long param_1)

{
  return param_1 + 8;
}



/* Entry: 1088a1d10; end: 1088a1d57;  */

void FUN_1088a1d10(ulong param_1,ulong param_2)

{
  FUN_1088a1d58();
  if (param_1 < param_2) {
    func_0x000104bd35f4();
  }
  func_0x0001088a1d80(param_2);
  return;
}



/* Entry: 1088a1d58; end: 1088a1dbb;  */

ulong FUN_1088a1d58(ulong param_1)

{
  FUN_10888fbcc();
  return param_1 / 0x60;
}



/* Entry: 1088a1dbc; end: 1088a1deb;  */

void FUN_1088a1dbc(undefined8 *param_1,undefined8 param_2,byte param_3)

{
  *param_1 = param_2;
  *(byte *)(param_1 + 1) = param_3 & 1;
  return;
}



/* Entry: 1088a1dec; end: 1088a1e77;  */

undefined8 * FUN_1088a1dec(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = param_2;
  param_1[1] = *param_3;
  param_1[2] = param_3[1];
  func_0x0001088a1e44((long)param_1 + 0x11);
  return param_1;
}



/* Entry: 1088a1e78; end: 1088a1ea7;  */

undefined1 * FUN_1088a1e78(undefined1 *param_1)

{
  undefined1 *puVar1;
  
  puVar1 = param_1;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  } while (puVar1 != param_1 + 7);
  return param_1;
}



/* Entry: 1088a1ea8; end: 1088a1edb;  */

void FUN_1088a1ea8(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  FUN_1088a1edc(param_1,*param_3);
  return;
}



/* Entry: 1088a1edc; end: 1088a1f67;  */

undefined8 FUN_1088a1edc(undefined8 param_1,undefined8 param_2)

{
  func_0x0001088a1f20(param_1,0,param_2);
  return param_1;
}



/* Entry: 1088a1f68; end: 1088a1f87;  */

void FUN_1088a1f68(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}



/* Entry: 1088a1f88; end: 1088a1fdf;  */

void FUN_1088a1f88(undefined8 param_1,undefined8 param_2)

{
  func_0x0001088a1fb4(param_1,param_2);
  return;
}



/* Entry: 1088a1fe0; end: 1088a209b;  */

undefined8 FUN_1088a1fe0(undefined8 param_1,undefined8 param_2)

{
  func_0x0001088a201c(param_1,param_2);
  return param_1;
}



/* Entry: 1088a209c; end: 1088a20e3;  */

void FUN_1088a209c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    FUN_1088a20e4(param_1 + 1,lVar1);
  }
  return;
}



/* Entry: 1088a20e4; end: 1088a2157;  */

void FUN_1088a20e4(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    uVar2 = *param_1;
    lVar1 = param_2;
    FUN_108891dbc(param_2);
    FUN_10889c204();
    FUN_10889c1dc(uVar2,lVar1);
    FUN_10889c218(param_2);
  }
  if (param_2 != 0) {
    func_0x00010889c23c(*param_1,param_2);
  }
  return;
}



/* Entry: 1088a2158; end: 1088a2177;  */

void FUN_1088a2158(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}



/* Entry: 1088a2178; end: 1088a21af;  */

void FUN_1088a2178(undefined8 *param_1,undefined8 *param_2,byte *param_3)

{
  *param_1 = *param_2;
  *(byte *)(param_1 + 1) = *param_3 & 1;
  return;
}



/* Entry: 1088a21b0; end: 1088a2243;  */

long FUN_1088a21b0(long param_1,undefined8 *param_2)

{
  func_0x0001088a2208(param_1,*param_2);
  *(byte *)(param_1 + 8) = *(byte *)(param_2 + 1) & 1;
  return param_1;
}



/* Entry: 1088a2244; end: 1088a227b;  */

void FUN_1088a2244(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}



/* Entry: 1088a227c; end: 1088a22c3;  */

undefined8 FUN_1088a227c(undefined8 param_1)

{
  undefined1 auStack_38 [16];
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  FUN_1088a22c4(auStack_38);
  FUN_10888ddfc(param_1,auStack_38);
  func_0x00010888de58(auStack_38);
  return param_1;
}



/* Entry: 1088a22c4; end: 1088a234b;  */

void FUN_1088a22c4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [8];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0xa8;
  uStack_28 = param_1;
  __Znwm();
  FUN_1088a234c(uVar1,0x200000006);
  uStack_30 = uVar1;
  func_0x00010888de8c(auStack_38,uVar1);
  func_0x00010888dec8(auStack_48,uStack_30);
  func_0x00010888df04(param_1,auStack_38,auStack_48);
  func_0x000107c27f98(auStack_48);
  func_0x000107c27f9c(auStack_38);
  return;
}



/* Entry: 1088a234c; end: 1088a25b7;  */

undefined8 FUN_1088a234c(undefined8 param_1,undefined8 param_2)

{
  func_0x0001088a2388(param_1,param_2);
  return param_1;
}



/* Entry: 1088a25b8; end: 1088a25d3;  */

void FUN_1088a25b8(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[8] = 0;
  return;
}



/* Entry: 1088a25d4; end: 1088a2607;  */

undefined8 FUN_1088a25d4(undefined8 param_1)

{
  func_0x000107c31514(param_1);
  return param_1;
}



/* Entry: 1088a2608; end: 1088a26b7;  */

void FUN_1088a2608(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  
  lStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_2;
  lStack_30 = param_1;
  do {
    uStack_50 = 0;
    uVar1 = param_1 + 0x10;
    func_0x000107c27ff0(uVar1,&uStack_50,1,2);
    if ((uVar1 & 1) != 0) {
      FUN_1088a26b8(lStack_48 + 0x98,uStack_40);
      FUN_10889861c(param_1 + 0x10,2,3);
      func_0x000107c31508(param_1,uStack_38);
      return;
    }
  } while (((uint)uStack_50 >> 1 & 1) == 0);
  return;
}



/* Entry: 1088a26b8; end: 1088a26ff;  */

void FUN_1088a26b8(undefined8 param_1,undefined8 param_2)

{
  FUN_1088a2700(param_1);
  FUN_1088a2720(param_1,param_2);
  FUN_10888e73c(param_1);
  return;
}



/* Entry: 1088a2700; end: 1088a271f;  */

void FUN_1088a2700(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    *(undefined1 *)(param_1 + 8) = 0;
  }
  return;
}



/* Entry: 1088a2720; end: 1088a275f;  */

void FUN_1088a2720(long param_1,undefined8 param_2)

{
  FUN_1088a2760(param_1,param_2);
  *(undefined1 *)(param_1 + 8) = 1;
  return;
}



/* Entry: 1088a2760; end: 1088a278b;  */

void FUN_1088a2760(undefined8 param_1,undefined8 param_2)

{
  FUN_1088a278c(param_1,param_2);
  return;
}



/* Entry: 1088a278c; end: 1088a27b7;  */

void FUN_1088a278c(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  return;
}



/* Entry: 1088a27b8; end: 1088a282f;  */

undefined8 FUN_1088a27b8(undefined8 param_1,undefined8 param_2)

{
  func_0x0001088a27f4(param_1,param_2);
  return param_1;
}



/* Entry: 1088a2830; end: 1088a288f;  */

void FUN_1088a2830(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  func_0x0001088a2860(param_2);
  uStack_20 = param_1;
  FUN_1088a2890(&uStack_20);
  return;
}



/* Entry: 1088a2890; end: 1088a28a7;  */

undefined8 FUN_1088a2890(undefined8 *param_1)

{
  return *param_1;
}



/* Entry: 1088a28a8; end: 1088a28f7;  */

undefined8 FUN_1088a28a8(undefined8 param_1,long param_2)

{
  double dStack_30;
  long lStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  lStack_28 = param_2;
  uStack_20 = param_1;
  func_0x000108891f5c();
  dStack_30 = (double)param_2 / 1000.0;
  FUN_1088a28f8(&uStack_18,&dStack_30);
  return uStack_18;
}



/* Entry: 1088a28f8; end: 1088a2933;  */

undefined8 FUN_1088a28f8(undefined8 param_1,undefined8 param_2)

{
  FUN_1088a2934(param_1,param_2);
  return param_1;
}



/* Entry: 1088a2934; end: 1088a2957;  */

void FUN_1088a2934(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Entry: 1088a2958; end: 1088a2aaf;  */

ulong * FUN_1088a2958(ulong *param_1,undefined8 param_2)

{
  bool bVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puStack_58;
  ulong *puStack_28;
  
  puVar2 = param_1;
  FUN_1088925c8();
  if ((puVar2 != (ulong *)0x0) && (puVar3 = param_1, FUN_1088a2ab0(), puVar3 != (ulong *)0x0)) {
    puVar3 = param_1;
    FUN_108892360();
    FUN_108898f0c();
    puVar4 = puVar3;
    func_0x000108890eb8(puVar3,puVar2);
    puVar2 = param_1;
    func_0x00010889297c(param_1,puVar4);
    if ((ulong *)*puVar2 != (ulong *)0x0) {
      puStack_58 = *(ulong **)*puVar2;
      while( true ) {
        bVar1 = false;
        if (puStack_58 != (ulong *)0x0) {
          puVar2 = puStack_58;
          FUN_108892e20();
          bVar1 = true;
          if (puVar3 != puVar2) {
            puVar2 = puStack_58;
            FUN_108892e20();
            func_0x000108890eb8();
            bVar1 = puVar2 == puVar4;
          }
        }
        if (!bVar1) break;
        puVar2 = puStack_58;
        FUN_108892e20();
        if (puVar2 == puVar3) {
          puVar2 = param_1;
          func_0x000108892390();
          puVar5 = puStack_58;
          func_0x0001088926f0(puStack_58);
          FUN_108892714();
          func_0x000108898f3c(puVar2,puVar5,param_2);
          if (((ulong)puVar2 & 1) != 0) {
            FUN_108894038(&puStack_28,puStack_58);
            return puStack_28;
          }
        }
        puStack_58 = (ulong *)*puStack_58;
      }
    }
  }
  func_0x000108892588();
  return param_1;
}



/* Entry: 1088a2ab0; end: 1088a2adb;  */

undefined8 FUN_1088a2ab0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1088a2adc; end: 1088a2e53;  */

void FUN_1088a2adc(undefined8 *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  code *pcVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 **ppuVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  char cVar13;
  long lVar14;
  undefined1 auStack_90 [31];
  undefined1 uStack_71;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  
  puVar1 = param_1 + 4;
  plVar2 = param_1 + 5;
  puVar11 = param_1 + 6;
  puVar3 = param_1 + 7;
  uVar4 = (long)param_1 + 0x4b;
  puVar5 = param_1 + 2;
  puStack_70 = param_1;
  if (*(byte *)(param_1 + 9) == 2) {
    cVar13 = '\0';
  }
  else {
    if ((*(byte *)(param_1 + 9) & 3) == 0) {
      func_0x000107c2a19c((long)param_1 + 0x49);
      FUN_10889e158(puVar11,param_1[8] + 0x38,puVar1);
      FUN_108894808(plVar2,puVar11);
      plVar7 = plVar2;
      func_0x000107c2a1a4();
      if (((ulong)plVar7 & 1) == 0) {
        *(undefined1 *)(param_1 + 9) = 1;
        puVar8 = param_1;
        FUN_10889e0f8();
        ppuVar9 = &puStack_68;
        puStack_68 = puVar8;
        func_0x00010889e128(ppuVar9);
        plVar7 = plVar2;
        func_0x000107c28830(plVar2,ppuVar9);
        if (((ulong)plVar7 & 1) != 0) {
          cVar13 = -1;
          goto LAB_1088a2bc0;
        }
      }
    }
    else {
      cVar13 = '\0';
LAB_1088a2bc0:
      if (cVar13 != '\0') {
        return;
      }
    }
    plVar7 = plVar2;
    func_0x000107c28870();
    lVar14 = *plVar7;
    FUN_108894834(plVar2);
    func_0x000108894868(puVar11);
    *(byte *)((long)param_1 + 0x4a) = lVar14 == 0;
    if ((*(byte *)((long)param_1 + 0x4a) & 1) != 0) {
      lVar14 = param_1[8];
      uStack_71 = 1;
      uVar10 = 0x10;
      ___cxa_allocate_exception(0x10);
      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                (auStack_90,&UNK_10f4afc25,lVar14 + 0x20);
      func_0x00010889489c(uVar10,auStack_90);
      uStack_71 = 0;
      ___cxa_throw(uVar10,&PTR_DAT_110a60aa8,FUN_10865a9d4);
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1088a2e54);
      (*pcVar6)();
    }
    FUN_10888c1cc(puVar3,puVar1);
    puVar11 = puVar3;
    func_0x000107c2a1a4();
    if (((ulong)puVar11 & 1) != 0) goto LAB_1088a2d1c;
    *(undefined1 *)(param_1 + 9) = 2;
    puVar11 = param_1;
    FUN_10889e0f8();
    ppuVar9 = &puStack_60;
    puStack_60 = puVar11;
    func_0x00010889e128(ppuVar9);
    puVar11 = puVar3;
    func_0x000107c28830(puVar3,ppuVar9);
    if (((ulong)puVar11 & 1) == 0) goto LAB_1088a2d1c;
    cVar13 = -1;
  }
  if (cVar13 != '\0') {
    return;
  }
LAB_1088a2d1c:
  puVar11 = puVar3;
  FUN_10865ae40(puVar3);
  FUN_10865ae78(puVar5,puVar11);
  func_0x00010888c264(puVar3);
  FUN_108885f88(puVar5);
  uVar12 = uVar4;
  func_0x000107c2a18c();
  if ((uVar12 & 1) == 0) {
    *param_1 = 0;
    *(undefined1 *)(param_1 + 9) = 3;
    FUN_10889e0f8();
    ppuVar9 = &puStack_58;
    puStack_58 = param_1;
    func_0x00010889e128(ppuVar9);
    FUN_108885f40(uVar4,ppuVar9);
  }
  else {
    func_0x000107c2a19c(uVar4);
    FUN_10889e24c(puVar5);
    func_0x00010888c298(puVar1);
    __ZdlPv(param_1);
  }
  return;
}



/* Entry: 1088a2e54; end: 1088a2f6b;  */

void FUN_1088a2e54(long param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x48);
  if (bVar1 == 2) {
    func_0x00010888c264(param_1 + 0x38);
  }
  else if ((((bVar1 ^ 0xff) & 3) != 0) && ((bVar1 & 3) != 0)) {
    FUN_108894834(param_1 + 0x28);
    func_0x000108894868(param_1 + 0x30);
  }
  FUN_10889e24c(param_1 + 0x10);
  func_0x00010888c298(param_1 + 0x20);
  __ZdlPv(param_1);
  return;
}



/* Entry: 1088a2f6c; end: 1088a3b6f;  */

void FUN_1088a2f6c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long *plVar15;
  undefined8 *puVar16;
  ulong uVar17;
  undefined8 *puVar18;
  byte bVar19;
  undefined4 uVar20;
  undefined8 **ppuVar21;
  undefined8 *puVar22;
  long lVar23;
  long *plVar24;
  long lVar25;
  long *plVar26;
  undefined8 uVar27;
  long *plVar28;
  undefined1 *puVar29;
  ulong uVar30;
  char cVar31;
  int iVar32;
  undefined8 *puVar33;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined8 **ppuStack_170;
  undefined1 auStack_168 [32];
  undefined1 auStack_148 [31];
  byte bStack_129;
  long lStack_128;
  undefined1 *puStack_120;
  long lStack_118;
  undefined1 uStack_110;
  undefined1 auStack_108 [40];
  long *plStack_e0;
  long *plStack_d8;
  undefined1 auStack_d0 [40];
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  long lStack_80;
  undefined1 *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar28 = param_1 + 0x38;
  puVar1 = param_1 + 0x2b;
  puVar22 = param_1 + 0x3a;
  puVar33 = param_1 + 0x3b;
  plVar24 = param_1 + 0x3d;
  plVar26 = param_1 + 0x3e;
  puVar2 = param_1 + 0x17;
  puVar3 = param_1 + 0x3f;
  puVar4 = param_1 + 0x40;
  puVar5 = param_1 + 0x2e;
  puVar6 = param_1 + 0x1c;
  puVar7 = param_1 + 0x41;
  puVar8 = param_1 + 0x42;
  puVar9 = param_1 + 0x31;
  puVar10 = param_1 + 0x21;
  puVar11 = param_1 + 0x43;
  puVar12 = param_1 + 0x44;
  puVar13 = param_1 + 0x45;
  puVar14 = param_1 + 0x34;
  plVar15 = param_1 + 0x46;
  puVar16 = param_1 + 0x26;
  uVar17 = (long)param_1 + 0x242;
  puVar18 = param_1 + 2;
  bVar19 = *(byte *)(param_1 + 0x48);
  puStack_a8 = param_1;
  if (bVar19 == 0) {
    func_0x000107c2a19c((long)param_1 + 0x241);
    func_0x00010888b450(puVar1);
    *puVar22 = param_1[0x37];
    uVar27 = *puVar22;
    func_0x00010888b484();
    *puVar33 = uVar27;
    uVar27 = *puVar22;
    func_0x00010888b4bc();
    param_1[0x3c] = uVar27;
    goto LAB_1088a30e0;
  }
  if ((bVar19 & 7) == 1) {
    cVar31 = '\0';
    while (cVar31 == '\0') {
      do {
        do {
          puVar22 = puVar3;
          FUN_10866291c(puVar3);
          FUN_10888b59c(puVar2,puVar22);
          func_0x00010888b5d8(puVar3);
          func_0x00010888b60c(puVar4);
          func_0x000108888464(puVar5);
          lVar25 = *plVar26;
          FUN_10888b6c8(puVar6,param_1[0x47],puVar2);
          func_0x00010888b9c4(param_1 + 0xe,lVar25,puVar6);
          FUN_10888b640();
          func_0x00010888ba08(param_1 + 0xe);
          func_0x00010888ba3c(puVar6);
          func_0x00010888ba70(puVar2);
          do {
            lVar25 = param_1[0x39];
            FUN_10888baa4(lVar25,*plVar26);
            if (lVar25 == 0) {
              lVar25 = *plVar24 + 0x20;
              lVar23 = *plVar28;
              FUN_10888bb44(lVar23,*plVar26);
              func_0x00010888bad0(lVar25,lVar23);
              if (lVar25 != 0) {
                FUN_10888bbec(puVar1,*plVar26);
              }
            }
            func_0x00010888bc18(puVar33);
LAB_1088a30e0:
            puVar22 = puVar33;
            func_0x00010888b4f4(puVar33,param_1 + 0x3c);
            if ((((uint)puVar22 ^ 1) & 1) == 0) {
              puVar22 = puVar1;
              FUN_10888bc3c();
              if (((ulong)puVar22 & 1) == 0) {
                lVar25 = param_1[0x47];
                FUN_10888bc64(puVar9);
                FUN_108885a44(puVar10,0x243);
                FUN_108681bac(param_1 + 4,lVar25 + 0x1a0,puVar10,0,1);
                lVar25 = param_1[0x47];
                FUN_108657130(puVar10);
                plVar24 = (long *)(lVar25 + 400);
                FUN_10888c0b8();
                FUN_10888c0d0(puVar14,puVar1);
                (**(code **)(*plVar24 + 0x10))(puVar13,plVar24,puVar14,0x5d0207);
                FUN_10888bc98(puVar12,lVar25 + 0x88,puVar13);
                FUN_10888c1cc(puVar11,puVar12);
                puVar22 = puVar11;
                func_0x000107c2a1a4();
                if (((ulong)puVar22 & 1) != 0) goto LAB_1088a3658;
                *(undefined1 *)(param_1 + 0x48) = 3;
                puVar22 = param_1;
                func_0x000107c2a194();
                ppuVar21 = &puStack_90;
                puStack_90 = puVar22;
                func_0x000107c2a198(ppuVar21);
                puVar22 = puVar11;
                func_0x000107c28830(puVar11,ppuVar21);
                if (((ulong)puVar22 & 1) == 0) goto LAB_1088a3658;
                cVar31 = -1;
                goto LAB_1088a35f4;
              }
              func_0x00010bcd3464(puVar8);
              func_0x000107c2a1a0(puVar7,puVar8);
              puVar22 = puVar7;
              func_0x000107c2a1a4();
              if (((ulong)puVar22 & 1) != 0) goto LAB_1088a3494;
              *(undefined1 *)(param_1 + 0x48) = 2;
              puVar22 = param_1;
              func_0x000107c2a194();
              ppuVar21 = &puStack_98;
              puStack_98 = puVar22;
              func_0x000107c2a198(ppuVar21);
              puVar22 = puVar7;
              func_0x000107c28830(puVar7,ppuVar21);
              if (((ulong)puVar22 & 1) == 0) goto LAB_1088a3494;
              cVar31 = -1;
              goto LAB_1088a3474;
            }
            puVar22 = puVar33;
            func_0x00010888b524();
            *plVar24 = (long)puVar22;
            *plVar26 = *plVar24;
            lVar25 = *plVar28;
            func_0x00010888b548(lVar25,*plVar26);
          } while (lVar25 != 0);
          lVar25 = param_1[0x47];
          func_0x000107c29ee0(puVar5,*plVar26);
          FUN_1086682a4(puVar4,lVar25 + 0xe8,puVar5);
          func_0x00010888b574(puVar3,puVar4);
          puVar22 = puVar3;
          func_0x000107c2a1a4();
        } while (((ulong)puVar22 & 1) != 0);
        *(undefined1 *)(param_1 + 0x48) = 1;
        puVar22 = param_1;
        func_0x000107c2a194();
        ppuVar21 = &puStack_a0;
        puStack_a0 = puVar22;
        func_0x000107c2a198(ppuVar21);
        puVar22 = puVar3;
        func_0x000107c28830(puVar3,ppuVar21);
      } while (((ulong)puVar22 & 1) == 0);
      cVar31 = -1;
    }
    goto LAB_1088a3ab8;
  }
  if ((bVar19 & 7) == 2) {
    cVar31 = '\0';
LAB_1088a3474:
    if (cVar31 != '\0') goto LAB_1088a3ab8;
LAB_1088a3494:
    func_0x000107c28834(puVar7);
    FUN_108885f54(puVar7);
    func_0x000107c2a1ac(puVar8);
    func_0x000107c287c8(puVar18);
    iVar32 = 3;
  }
  else {
    cVar31 = '\0';
LAB_1088a35f4:
    if (cVar31 != '\0') goto LAB_1088a3ab8;
LAB_1088a3658:
    puVar22 = puVar11;
    FUN_10865ae40(puVar11);
    FUN_10888c1f4(puVar9,puVar22);
    func_0x00010888c264(puVar11);
    func_0x00010888c298(puVar12);
    func_0x00010888c298(puVar13);
    func_0x00010888c2cc(puVar14);
    FUN_108681bac(param_1 + 4);
    *plVar15 = 0;
    puVar22 = puVar9;
    FUN_10888c300();
    puVar33 = puVar9;
    puStack_180 = puVar22;
    func_0x00010888c32c();
    puStack_178 = puVar33;
    while( true ) {
      ppuVar21 = &puStack_180;
      func_0x00010888c358(ppuVar21,&puStack_178);
      if (((ulong)ppuVar21 & 1) == 0) break;
      ppuVar21 = &puStack_180;
      func_0x00010888c38c();
      ppuStack_170 = ppuVar21;
      FUN_108847298(auStack_148,ppuVar21);
      func_0x000107c29ee4(auStack_168,auStack_148);
      func_0x000108888464(auStack_148);
      bStack_129 = *(int *)(ppuStack_170 + 3) == 1;
      lVar25 = param_1[0x39];
      puVar29 = auStack_168;
      FUN_1086a30ac();
      lStack_128 = lVar25;
      puStack_120 = puVar29;
      if ((bStack_129 & 1) != 0) {
        *plVar15 = *plVar15 + 1;
        lVar25 = *plVar28;
        FUN_10888b6c8(auStack_108,param_1[0x47],ppuStack_170 + 3);
        puVar29 = auStack_168;
        FUN_10888c3b8(lVar25,puVar29,auStack_108);
        puStack_78._0_1_ = SUB81(puVar29,0);
        uStack_110 = puStack_78._0_1_;
        lStack_118 = lVar25;
        lStack_80 = lVar25;
        puStack_78 = puVar29;
        func_0x00010888ba3c(auStack_108);
        plVar24 = &lStack_118;
        FUN_10888c474();
        plVar26 = &lStack_118;
        plStack_e0 = plVar24;
        func_0x00010888c498();
        uVar27 = param_1[0x37];
        plStack_d8 = plVar26;
        func_0x00010888c524(uVar27,auStack_168);
        plVar24 = plStack_e0;
        FUN_10888c594(plStack_e0);
        func_0x00010888c4bc(param_1[0x47],uVar27,plVar24 + 4);
      }
      func_0x0001088bf334(auStack_168);
      func_0x00010888c5bc(&puStack_180);
    }
    plVar28 = (long *)(param_1[0x47] + 0x1a0);
    FUN_108885c24();
    FUN_108885a44(auStack_d0,0x243);
    puVar33 = (undefined8 *)*plVar15;
    puVar22 = puVar9;
    func_0x00010888c5dc();
    uVar20 = 0x30011;
    if (puVar33 != puVar22) {
      uVar20 = 0x30012;
    }
    puVar29 = auStack_d0;
    FUN_108659af8(puVar29,uVar20);
    FUN_10888c5f4(puVar16,puVar29);
    (**(code **)(*plVar28 + 0x50))(plVar28,puVar16);
    FUN_108657130(puVar16);
    FUN_108657130(auStack_d0);
    func_0x00010888c630(puVar9);
    iVar32 = 0;
  }
  func_0x00010888c664(puVar1);
  if (iVar32 == 0) {
    func_0x000107c287c8(puVar18);
LAB_1088a3a14:
    FUN_108885f88(puVar18);
    uVar30 = uVar17;
    func_0x000107c2a18c();
    if ((uVar30 & 1) == 0) {
      *param_1 = 0;
      *(undefined1 *)(param_1 + 0x48) = 4;
      func_0x000107c2a194();
      ppuVar21 = &puStack_88;
      puStack_88 = param_1;
      func_0x000107c2a198(ppuVar21);
      FUN_108885f40(uVar17,ppuVar21);
      goto LAB_1088a3ab8;
    }
    func_0x000107c2a19c(uVar17);
  }
  else if (iVar32 == 3) goto LAB_1088a3a14;
  FUN_108885f98(puVar18);
  __ZdlPv(param_1);
LAB_1088a3ab8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 - lStack_70 != 0) {
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_11034bdc0 - lStack_70);
  }
  return;
}



/* Entry: 1088a3b70; end: 1088a3d83;  */

void FUN_1088a3b70(long param_1)

{
  byte bVar1;
  long lVar2;
  
  lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
  bVar1 = *(byte *)(param_1 + 0x240);
  if ((bVar1 != 4) && ((bVar1 & 7) != 0)) {
    if ((bVar1 & 7) == 1) {
      func_0x00010888b5d8(param_1 + 0x1f8);
      func_0x00010888b60c(param_1 + 0x200);
      func_0x000108888464(param_1 + 0x170);
    }
    else if ((bVar1 & 7) == 2) {
      FUN_108885f54(param_1 + 0x208);
      func_0x000107c2a1ac(param_1 + 0x210);
    }
    else {
      func_0x00010888c264(param_1 + 0x218);
      func_0x00010888c298(param_1 + 0x220);
      func_0x00010888c298(param_1 + 0x228);
      func_0x00010888c2cc(param_1 + 0x1a0);
      FUN_108681bac(param_1 + 0x20);
      func_0x00010888c630(param_1 + 0x188);
    }
    func_0x00010888c664(param_1 + 0x158);
  }
  FUN_108885f98(param_1 + 0x10);
  __ZdlPv(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 - lVar2 != 0) {
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_11034bdc0 - lVar2);
  }
  return;
}



/* Entry: 1088a3d84; end: 1088a4af7;  */

void FUN_1088a3d84(undefined8 *param_1)

{
  ulong *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  code *pcVar16;
  long *plVar17;
  undefined8 *puVar18;
  undefined8 **ppuVar19;
  ulong uVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  undefined1 *puVar23;
  undefined1 *puVar24;
  long *plVar25;
  undefined8 *puVar26;
  undefined4 *puVar27;
  char cVar28;
  int iVar29;
  long lVar30;
  ulong uVar31;
  undefined1 auStack_4d8 [472];
  undefined1 auStack_300 [8];
  undefined1 auStack_2f8 [44];
  undefined4 uStack_2cc;
  undefined1 auStack_2c8 [8];
  undefined1 auStack_2c0 [44];
  undefined4 uStack_294;
  undefined1 auStack_290 [32];
  undefined1 auStack_270 [40];
  undefined1 auStack_248 [8];
  undefined1 uStack_240;
  undefined4 uStack_238;
  undefined1 uStack_231;
  undefined8 *puStack_230;
  long lStack_228;
  undefined1 auStack_220 [8];
  undefined1 auStack_218 [64];
  undefined8 *puStack_1d8;
  long lStack_1d0;
  undefined1 auStack_1c8 [8];
  undefined1 auStack_1c0 [48];
  undefined1 auStack_190 [24];
  long *plStack_178;
  undefined1 auStack_170 [16];
  undefined1 auStack_160 [60];
  undefined4 uStack_124;
  undefined1 auStack_120 [8];
  undefined1 auStack_118 [44];
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined1 uStack_e4;
  undefined4 auStack_e0 [2];
  undefined4 uStack_d8;
  undefined1 uStack_d4;
  undefined1 auStack_d0 [40];
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  long alStack_88 [3];
  long alStack_70 [2];
  
  alStack_70[0] = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_1 + 0x1a;
  puVar21 = param_1 + 0x1b;
  puVar2 = param_1 + 0x1c;
  puVar3 = param_1 + 0x1d;
  puVar4 = param_1 + 4;
  puVar5 = param_1 + 0x1e;
  puVar6 = param_1 + 0xc;
  puVar7 = param_1 + 0x1f;
  puVar8 = param_1 + 0x20;
  plVar25 = param_1 + 0x22;
  plVar9 = param_1 + 0x11;
  puVar10 = param_1 + 0x13;
  puVar26 = param_1 + 0x27;
  puVar11 = param_1 + 0x23;
  puVar12 = param_1 + 0x24;
  puVar13 = param_1 + 0x25;
  uVar14 = (long)param_1 + 0x143;
  puVar15 = param_1 + 2;
  puStack_a8 = param_1;
  if (*(byte *)(param_1 + 0x28) == 2) {
    cVar28 = '\0';
LAB_1088a46fc:
    if (cVar28 != '\0') goto LAB_1088a4a2c;
LAB_1088a47cc:
    puVar21 = puVar11;
    func_0x000107c28a1c();
    *(undefined4 *)puVar26 = *(undefined4 *)puVar21;
    *(undefined4 *)((long)param_1 + 0x13c) = *(undefined4 *)((long)puVar21 + 4);
    FUN_10888a5a0(puVar11);
    func_0x00010888a5d4(puVar12);
    func_0x00010888a5d4(puVar13);
    uStack_124 = 3;
    puVar21 = puVar26;
    FUN_10888a608(puVar26,&uStack_124);
    if (((ulong)puVar21 & 1) == 0) {
      FUN_10888a660();
      if (((ulong)puVar26 & 1) == 0) {
        FUN_10888a2fc(&uStack_e8);
      }
      else {
        auStack_e0[0] = 9;
        puVar27 = auStack_e0;
        FUN_10888a67c();
        uStack_e8 = SUB84(puVar27,0);
        uStack_e4 = (undefined1)((ulong)puVar27 >> 0x20);
      }
      uStack_d8 = uStack_e8;
      uStack_d4 = uStack_e4;
      func_0x00010888a6a8(auStack_d0,puVar6);
      func_0x0001088894e4(puVar15,&uStack_d8);
      func_0x0001088895a0(&uStack_d8);
    }
    else {
      uStack_ec = 5;
      func_0x000108889530(auStack_120,&uStack_ec);
      func_0x00010888956c(auStack_118);
      func_0x0001088894e4(puVar15,auStack_120);
      func_0x0001088895a0(auStack_120);
    }
    func_0x00010888a6e4(puVar10);
    func_0x00010888a718(plVar9);
LAB_1088a494c:
    func_0x00010888a74c(puVar6);
    FUN_1088f0578(puVar4);
  }
  else {
    if ((*(byte *)(param_1 + 0x28) & 3) == 0) {
      func_0x000107c2a19c((long)param_1 + 0x142);
      if ((*(byte *)((long)param_1 + 0x141) & 1) != 0) {
        lVar30 = param_1[0x26];
        plVar17 = (long *)(lVar30 + 0x1c0);
        FUN_108889444();
        (**(code **)(*plVar17 + 0x18))(puVar3);
        func_0x000107c2883c(puVar2,lVar30 + 0x88,puVar3);
        func_0x000107c2a1a0(puVar21,puVar2);
        puVar18 = puVar21;
        func_0x000107c2a1a4();
        if (((ulong)puVar18 & 1) == 0) {
          *(undefined1 *)(param_1 + 0x28) = 1;
          puVar18 = param_1;
          FUN_1088893e4();
          ppuVar19 = &puStack_a0;
          puStack_a0 = puVar18;
          func_0x000108889414(ppuVar19);
          puVar18 = puVar21;
          func_0x000107c28830(puVar21,ppuVar19);
          if (((ulong)puVar18 & 1) != 0) {
            cVar28 = -1;
            goto LAB_1088a3f28;
          }
        }
        goto LAB_1088a3f54;
      }
    }
    else {
      cVar28 = '\0';
LAB_1088a3f28:
      if (cVar28 != '\0') goto LAB_1088a4a2c;
LAB_1088a3f54:
      func_0x000107c28834(puVar21);
      FUN_108885f54(puVar21);
      func_0x000107c2a1ac(puVar2);
      func_0x000107c2a1ac(puVar3);
    }
    func_0x000108885a88(param_1[0x26] + 0x180);
    func_0x000107c29f64(auStack_4d8);
    FUN_10888945c(*puVar1,auStack_4d8);
    FUN_108889488(auStack_4d8);
    uVar20 = *puVar1;
    FUN_1088894bc();
    if ((uVar20 & 1) == 0) {
      uStack_2cc = 4;
      func_0x000108889530(auStack_300,&uStack_2cc);
      func_0x00010888956c(auStack_2f8);
      func_0x0001088894e4(puVar15,auStack_300);
      func_0x0001088895a0(auStack_300);
    }
    else {
      lVar30 = param_1[0x26];
      uVar20 = *puVar1;
      FUN_1088895d4();
      uVar20 = uVar20 + 0x18;
      FUN_1086a6a98(uVar20,lVar30 + 0x10);
      if ((uVar20 & 1) != 0) {
        puVar21 = puVar4;
        FUN_10865ec40();
        func_0x0001088895f8();
        func_0x000108889624();
        *puVar5 = (ulong)puVar21;
        uVar31 = *puVar5;
        uVar20 = *puVar1;
        FUN_1088895d4();
        func_0x00010888965c(uVar31,*(undefined8 *)(uVar20 + 0x158));
        func_0x000107c29ee4(auStack_290,param_1[0x17]);
        func_0x00010865ec64(*puVar5);
        func_0x000107c287d0();
        func_0x0001088bf334(auStack_290);
        func_0x00010888956c(puVar6);
        *puVar7 = param_1[0x18];
        uVar22 = *puVar7;
        FUN_108889688();
        *puVar8 = uVar22;
        uVar22 = *puVar7;
        func_0x0001088896cc();
        param_1[0x21] = uVar22;
        while (puVar21 = puVar8, func_0x000108889710(puVar8,param_1 + 0x21),
              (((uint)puVar21 ^ 1) & 1) != 0) {
          puVar21 = puVar8;
          FUN_108889758();
          *plVar25 = (long)puVar21;
          uVar20 = *plVar25 + 0x50;
          FUN_108889770();
          func_0x000108889794();
          func_0x0001088897b8();
          func_0x0001088897dc();
          func_0x000108889800();
          if ((uVar20 & 1) == 0) {
            FUN_10865ece4(auStack_220);
            puVar23 = auStack_220;
            FUN_108889928(puVar23);
            puVar21 = (undefined8 *)(*plVar25 + 0x20);
            func_0x00010888996c();
            func_0x000108889940(puVar23,*puVar21);
            lVar30 = *plVar25;
            puVar23 = auStack_220;
            FUN_108889928(puVar23);
            FUN_10865ed14();
            puVar24 = auStack_220;
            FUN_108889928(puVar24);
            FUN_10888a080();
            FUN_108889990(auStack_218,param_1[0x26],lVar30,puVar23,puVar24,param_1[0x19]);
            uVar20 = 0;
            func_0x00010888a0ac();
            if ((uVar20 & 1) != 0) {
              lVar30 = *plVar25 + 0x18;
              puVar23 = auStack_218;
              func_0x00010888a164(puVar23);
              puVar21 = puVar6;
              func_0x00010888a0d4(puVar6,lVar30,puVar23);
              puStack_1d8 = puVar21;
              lStack_1d0 = lVar30;
            }
            uVar20 = 0;
            func_0x00010888a0ac();
            if ((uVar20 & 1) == 0) {
LAB_1088a43f8:
              uVar20 = *puVar5;
              func_0x00010888a1ac(uVar20);
              puVar23 = auStack_220;
              FUN_10888a204(puVar23);
              func_0x00010888a1d8(uVar20,puVar23);
            }
            else {
              puVar23 = auStack_218;
              func_0x00010888a188();
              if ((puVar23[0x30] & 1) != 0) goto LAB_1088a43f8;
            }
            FUN_10888a228(auStack_218);
            func_0x00010888a25c(auStack_220);
            iVar29 = 0;
          }
          else {
            lVar30 = *plVar25 + 0x18;
            FUN_1088898c0(auStack_270);
            uStack_231 = 1;
            uStack_238 = 0;
            func_0x000108889530(auStack_248,&uStack_238);
            uStack_240 = 0;
            uStack_231 = 0;
            puVar21 = puVar6;
            func_0x000108889830(puVar6,lVar30,auStack_270);
            puStack_230 = puVar21;
            lStack_228 = lVar30;
            func_0x0001088898f4(auStack_270);
            iVar29 = 5;
          }
          if ((iVar29 != 0) && (iVar29 != 5)) goto LAB_1088a4a7c;
          FUN_10888a290(0,puVar8);
        }
        uVar20 = *puVar5;
        FUN_10888a2b0();
        func_0x00010888a2d4();
        if ((uVar20 & 1) == 0) {
          FUN_1086e5330(plVar9,param_1[0x26] + 0x1b0);
          plVar25 = plVar9;
          FUN_10888a36c();
          if (((ulong)plVar25 & 1) == 0) {
            uVar22 = 0x10;
            ___cxa_allocate_exception(0x10);
            FUN_10888a39c(uVar22,&UNK_10f4ea037);
            ___cxa_throw(uVar22,&PTR_DAT_110a60aa8,FUN_10865a9d4);
LAB_1088a4a7c:
                    /* WARNING: Does not return */
            pcVar16 = (code *)SoftwareBreakpoint(1,0x1088a4a80);
            (*pcVar16)();
          }
          FUN_1086708f8(puVar10);
          plVar25 = plVar9;
          FUN_10888a3d8();
          plStack_178 = alStack_88;
          func_0x000107c2a1c0(alStack_88,param_1[0x17]);
          param_1[0x15] = alStack_88;
          param_1[0x16] = 1;
          FUN_10888a3f0(auStack_190,param_1[0x15],param_1[0x16]);
          FUN_10888a424(auStack_170,puVar10);
          func_0x00010888a460(auStack_160);
          (**(code **)(*plVar25 + 0x88))(plVar25,puVar4,auStack_190,auStack_170,auStack_160);
          func_0x00010888a494(auStack_160);
          func_0x00010888a4c8(auStack_170);
          func_0x00010888a4fc(auStack_190);
          plVar25 = alStack_70;
          do {
            plVar25 = plVar25 + -3;
            func_0x000108888464(plVar25);
          } while (plVar25 != alStack_88);
          lVar30 = param_1[0x26];
          puVar21 = puVar10;
          FUN_10888a530(puVar10);
          FUN_10888a548(puVar13,puVar21 + 1);
          FUN_108851798(puVar12,lVar30 + 0x88,puVar13);
          func_0x00010888a574(puVar11,puVar12);
          puVar21 = puVar11;
          func_0x000107c2a1a4();
          if (((ulong)puVar21 & 1) == 0) {
            *(undefined1 *)(param_1 + 0x28) = 2;
            puVar21 = param_1;
            FUN_1088893e4();
            ppuVar19 = &puStack_98;
            puStack_98 = puVar21;
            func_0x000108889414(ppuVar19);
            puVar21 = puVar11;
            func_0x000107c28830(puVar11,ppuVar19);
            if (((ulong)puVar21 & 1) != 0) {
              cVar28 = -1;
              goto LAB_1088a46fc;
            }
          }
          goto LAB_1088a47cc;
        }
        plVar25 = (long *)(param_1[0x26] + 0x1a0);
        FUN_108885c24();
        (**(code **)(*plVar25 + 0x48))();
        FUN_10888a2fc(auStack_1c8);
        func_0x00010888a330(auStack_1c0,puVar6);
        func_0x0001088894e4(puVar15,auStack_1c8);
        func_0x0001088895a0(auStack_1c8);
        goto LAB_1088a494c;
      }
      uStack_294 = 4;
      func_0x000108889530(auStack_2c8,&uStack_294);
      func_0x00010888956c(auStack_2c0);
      func_0x0001088894e4(puVar15,auStack_2c8);
      func_0x0001088895a0(auStack_2c8);
    }
  }
  FUN_108885f88(puVar15);
  uVar20 = uVar14;
  func_0x000107c2a18c();
  if ((uVar20 & 1) == 0) {
    *param_1 = 0;
    *(undefined1 *)(param_1 + 0x28) = 3;
    FUN_1088893e4();
    ppuVar19 = &puStack_90;
    puStack_90 = param_1;
    func_0x000108889414(ppuVar19);
    FUN_108885f40(uVar14,ppuVar19);
  }
  else {
    func_0x000107c2a19c(uVar14);
    func_0x00010888a780(puVar15);
    __ZdlPv(param_1);
  }
LAB_1088a4a2c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 - alStack_70[0] != 0) {
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_11034bdc0 - alStack_70[0]);
  }
  return;
}



/* Entry: 1088a4af8; end: 1088a4c9f;  */

void FUN_1088a4af8(long param_1)

{
  byte bVar1;
  long lVar2;
  
  lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
  bVar1 = *(byte *)(param_1 + 0x140);
  if (bVar1 == 2) {
    FUN_10888a5a0(param_1 + 0x118);
    func_0x00010888a5d4(param_1 + 0x120);
    func_0x00010888a5d4(param_1 + 0x128);
    func_0x00010888a6e4(param_1 + 0x98);
    func_0x00010888a718(param_1 + 0x88);
    func_0x00010888a74c(param_1 + 0x60);
    FUN_1088f0578(param_1 + 0x20);
  }
  else if ((((bVar1 ^ 0xff) & 3) != 0) && ((bVar1 & 3) != 0)) {
    FUN_108885f54(param_1 + 0xd8);
    func_0x000107c2a1ac(param_1 + 0xe0);
    func_0x000107c2a1ac(param_1 + 0xe8);
  }
  func_0x00010888a780(param_1 + 0x10);
  __ZdlPv(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 - lVar2 != 0) {
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_11034bdc0 - lVar2);
  }
  return;
}



/* Entry: 1088a4ca0; end: 1088a52db;  */

void FUN_1088a4ca0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined4 uVar12;
  byte bVar13;
  undefined1 *puVar14;
  undefined8 *puVar15;
  undefined8 **ppuVar16;
  undefined8 *puVar17;
  long *plVar18;
  undefined8 uVar19;
  undefined8 *puVar20;
  ulong uVar21;
  char cVar22;
  long lVar23;
  undefined8 uVar24;
  undefined1 auStack_f8 [52];
  undefined4 uStack_c4;
  undefined8 *puStack_c0;
  byte bStack_b1;
  undefined1 auStack_b0 [40];
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 *apuStack_70 [2];
  
  puVar1 = param_1 + 0x5d;
  puVar2 = param_1 + 0x5e;
  puVar15 = param_1 + 0x4f;
  puVar17 = param_1 + 0x54;
  puVar20 = param_1 + 0x57;
  puVar3 = param_1 + 4;
  puVar4 = param_1 + 0x49;
  puVar5 = param_1 + 0x60;
  puVar6 = param_1 + 0x61;
  puVar7 = param_1 + 0x62;
  puVar8 = param_1 + 99;
  puVar9 = param_1 + 0x5a;
  uVar10 = (long)param_1 + 0x332;
  puVar11 = param_1 + 2;
  puStack_88 = param_1;
  if (*(byte *)(param_1 + 0x66) == 2) {
    cVar22 = '\0';
LAB_1088a4fd0:
    if (cVar22 != '\0') {
      return;
    }
  }
  else {
    if ((*(byte *)(param_1 + 0x66) & 3) == 0) {
      func_0x000107c2a19c((long)param_1 + 0x331);
      lVar23 = param_1[0x65];
      FUN_108885a44(auStack_f8,0x23d);
      func_0x000107c2a17c(puVar17,&DAT_10f3a381b);
      puVar14 = auStack_f8;
      func_0x000107c28818(puVar14,puVar17,1);
      FUN_10888c5f4(puVar15,puVar14);
      FUN_108681bac(param_1 + 0x3f,lVar23 + 0x1a0,puVar15,0,1);
      FUN_108657130(puVar15);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev(puVar17);
      FUN_108657130(auStack_f8);
      FUN_10888ce18(puVar20,1);
      uVar19 = param_1[0x65];
      func_0x00010888ce54(puVar3);
      FUN_1088884b8(puVar6,uVar19,*puVar1,*puVar2,param_1[0x5f],puVar3,0);
      FUN_10888ce88(puVar5,puVar6);
      puVar15 = puVar5;
      func_0x000107c2a1a4();
      if (((ulong)puVar15 & 1) == 0) {
        *(undefined1 *)(param_1 + 0x66) = 1;
        puVar15 = param_1;
        FUN_10888cdb8();
        ppuVar16 = &puStack_80;
        puStack_80 = puVar15;
        func_0x00010888cde8(ppuVar16);
        puVar15 = puVar5;
        func_0x000107c28830(puVar5,ppuVar16);
        if (((ulong)puVar15 & 1) != 0) {
          cVar22 = -1;
          goto LAB_1088a4e94;
        }
      }
    }
    else {
      cVar22 = '\0';
LAB_1088a4e94:
      if (cVar22 != '\0') {
        return;
      }
    }
    puVar15 = puVar5;
    FUN_10888ceb0(puVar5);
    FUN_10888cf30(puVar4,puVar15);
    func_0x00010888cf6c(puVar5);
    func_0x00010888cfa0(puVar6);
    uStack_c4 = 5;
    puVar15 = puVar4;
    FUN_108888308(puVar4,&uStack_c4);
    if (((ulong)puVar15 & 1) == 0) goto LAB_1088a5058;
    FUN_1088884b8(puVar8,param_1[0x65],*puVar1,*puVar2,param_1[0x5f],puVar3,1);
    FUN_10888ce88(puVar7,puVar8);
    puVar15 = puVar7;
    func_0x000107c2a1a4();
    if (((ulong)puVar15 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x66) = 2;
      puVar15 = param_1;
      FUN_10888cdb8();
      ppuVar16 = &puStack_78;
      puStack_78 = puVar15;
      func_0x00010888cde8(ppuVar16);
      puVar15 = puVar7;
      func_0x000107c28830(puVar7,ppuVar16);
      if (((ulong)puVar15 & 1) != 0) {
        cVar22 = -1;
        goto LAB_1088a4fd0;
      }
    }
  }
  puVar15 = puVar7;
  FUN_10888ceb0(puVar7);
  puVar17 = puVar4;
  func_0x00010888cfd4(puVar4,puVar15);
  puStack_c0 = puVar17;
  func_0x00010888cf6c(puVar7);
  func_0x00010888cfa0(puVar8);
LAB_1088a5058:
  lVar23 = param_1[0x65];
  puVar15 = puVar4;
  FUN_10888d028();
  bStack_b1 = (byte)puVar15 ^ 1;
  plVar18 = (long *)(lVar23 + 0x1a0);
  FUN_108885c24();
  FUN_108885a44(auStack_b0,0x23d);
  uVar12 = 0x30011;
  if ((bStack_b1 & 1) == 0) {
    uVar12 = 0x30012;
  }
  puVar14 = auStack_b0;
  FUN_108659af8(puVar14,uVar12);
  func_0x000107c2a17c(puVar9,&DAT_10f3a381b);
  func_0x000107c28818(puVar14,puVar9,1);
  uVar19 = *puVar2;
  FUN_1088882e0(uVar19);
  (**(code **)(*plVar18 + 0x58))(plVar18,puVar14,uVar19);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev(puVar9);
  FUN_108657130(auStack_b0);
  bVar13 = bStack_b1;
  uVar19 = *puVar2;
  uVar24 = *puVar1;
  func_0x000107c2825c();
  param_1[100] = puVar20;
  FUN_10888d044(param_1[0x65],uVar19,uVar24,puVar3,bVar13 & 1,puVar4,param_1 + 0x4a,param_1[100]);
  FUN_10888d558(puVar11,puVar4);
  func_0x0001088895a0(puVar4);
  FUN_108889488(puVar3);
  FUN_108681bac(param_1 + 0x3f);
  FUN_108885f88(puVar11);
  uVar21 = uVar10;
  func_0x000107c2a18c();
  if ((uVar21 & 1) == 0) {
    *param_1 = 0;
    *(undefined1 *)(param_1 + 0x66) = 3;
    FUN_10888cdb8();
    ppuVar16 = apuStack_70;
    apuStack_70[0] = param_1;
    func_0x00010888cde8(ppuVar16);
    FUN_108885f40(uVar10,ppuVar16);
  }
  else {
    func_0x000107c2a19c(uVar10);
    func_0x00010888d5a4(puVar11);
    __ZdlPv(param_1);
  }
  return;
}



/* Entry: 1088a52dc; end: 1088a5427;  */

void FUN_1088a52dc(long param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x330);
  if (bVar1 == 2) {
    func_0x00010888cf6c(param_1 + 0x310);
    func_0x00010888cfa0(param_1 + 0x318);
    func_0x0001088895a0(param_1 + 0x248);
  }
  else {
    if ((((bVar1 ^ 0xff) & 3) == 0) || ((bVar1 & 3) == 0)) goto LAB_1088a53f4;
    func_0x00010888cf6c(param_1 + 0x300);
    func_0x00010888cfa0(param_1 + 0x308);
  }
  FUN_108889488(param_1 + 0x20);
  FUN_108681bac(param_1 + 0x1f8);
LAB_1088a53f4:
  func_0x00010888d5a4(param_1 + 0x10);
  __ZdlPv(param_1);
  return;
}



/* Entry: 1088a5428; end: 1088a5b73;  */

void FUN_1088a5428(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  int iVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 **ppuVar20;
  ulong uVar21;
  char cVar22;
  long lVar23;
  int iVar24;
  undefined8 uVar25;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 *apuStack_70 [2];
  
  puVar1 = param_1 + 0x2c;
  puVar19 = param_1 + 0x14;
  puVar2 = param_1 + 0x19;
  puVar3 = param_1 + 0x1e;
  puVar4 = param_1 + 0x2f;
  puVar5 = param_1 + 0xe;
  puVar6 = param_1 + 0x28;
  puVar7 = param_1 + 0x23;
  puVar8 = param_1 + 0x32;
  puVar9 = param_1 + 0x34;
  puVar10 = param_1 + 0x38;
  puVar11 = param_1 + 0x39;
  puVar12 = param_1 + 0x3a;
  puVar13 = param_1 + 0x3b;
  uVar14 = (long)param_1 + 0x1f6;
  puVar15 = param_1 + 2;
  if (*(byte *)((long)param_1 + 500) == 2) {
    cVar22 = '\0';
    goto LAB_1088a58e0;
  }
  if ((*(byte *)((long)param_1 + 500) & 3) != 0) {
    cVar22 = '\0';
    do {
      if (cVar22 != '\0') {
        return;
      }
      do {
        do {
          func_0x000107c28834(puVar10);
          FUN_108885f54(puVar10);
          func_0x000107c2a1ac(puVar11);
          uVar25 = param_1[0x3c];
          puVar19 = puVar6;
          FUN_108886a30(puVar6);
          FUN_108887acc(puVar13,uVar25,puVar1,puVar19,puVar2);
          FUN_1088881a8(puVar12,puVar13);
          puVar19 = puVar12;
          func_0x000107c2a1a4();
          if (((ulong)puVar19 & 1) == 0) {
            *(undefined1 *)((long)param_1 + 500) = 2;
            puVar19 = param_1;
            func_0x000107c2a194();
            ppuVar20 = &puStack_78;
            puStack_78 = puVar19;
            func_0x000107c2a198(ppuVar20);
            puVar19 = puVar12;
            func_0x000107c28830(puVar12,ppuVar20);
            if (((ulong)puVar19 & 1) != 0) {
              cVar22 = -1;
LAB_1088a58e0:
              if (cVar22 != '\0') {
                return;
              }
            }
          }
          puVar19 = puVar12;
          FUN_1088881d4();
          *(undefined4 *)(param_1 + 0x3d) = *(undefined4 *)puVar19;
          *(undefined4 *)((long)param_1 + 0x1ec) = *(undefined4 *)((long)puVar19 + 4);
          FUN_108888254(puVar12);
          func_0x000108888288(puVar13);
          puVar19 = puVar6;
          FUN_1088882bc(puVar6);
          FUN_1088882e0();
          FUN_108681d9c(puVar4,puVar19);
          *(undefined4 *)(param_1 + 0x3e) = 4;
          puVar19 = param_1 + 0x3d;
          FUN_108888308();
          if (((ulong)puVar19 & 1) == 0) {
            iVar24 = 0;
          }
          else {
            iVar24 = 5;
          }
          FUN_108888360(puVar7);
          if (iVar24 == 0) {
            iVar24 = 0;
          }
          while( true ) {
            func_0x000108888394(puVar6);
            if (iVar24 != 0) {
              iVar16 = iVar24 + -5;
              if (iVar16 == 0) {
                iVar24 = 0;
              }
              func_0x0001088883c8(iVar16,puVar5);
              FUN_108681d9c(puVar4);
              func_0x0001088883fc(puVar3);
              func_0x000108888430(puVar2);
              FUN_108681bac(param_1 + 4);
              if (iVar24 == 0) {
                func_0x000107c287c8(puVar15);
                FUN_108885f88(puVar15);
                uVar21 = uVar14;
                func_0x000107c2a18c();
                if ((uVar21 & 1) == 0) {
                  *param_1 = 0;
                  *(undefined1 *)((long)param_1 + 500) = 3;
                  func_0x000107c2a194();
                  ppuVar20 = apuStack_70;
                  apuStack_70[0] = param_1;
                  func_0x000107c2a198(ppuVar20);
                  FUN_108885f40(uVar14,ppuVar20);
                  return;
                }
                func_0x000107c2a19c(uVar14);
              }
              FUN_108885f98(puVar15);
              func_0x000108888464(puVar1);
              __ZdlPv(param_1);
              return;
            }
LAB_1088a55c8:
            func_0x0001088869a0(puVar6,puVar5);
            puVar19 = puVar6;
            func_0x0001088869d4();
            if (((ulong)puVar19 & 1) != 0) break;
            iVar24 = 5;
          }
          FUN_1088869fc(puVar7);
          puVar19 = puVar6;
          FUN_108886a30();
          puVar17 = puVar19;
          FUN_108886a54();
          *puVar8 = puVar17;
          func_0x000108886a98();
          param_1[0x33] = puVar19;
          while (puVar19 = puVar8, func_0x000108886adc(puVar8,param_1 + 0x33),
                (((uint)puVar19 ^ 1) & 1) != 0) {
            puVar19 = puVar8;
            FUN_108886b24();
            puVar19 = puVar19 + 10;
            FUN_108886b3c();
            func_0x000108886b60();
            puVar17 = puVar19;
            func_0x000108886b84();
            *puVar9 = puVar17;
            FUN_108886bc4();
            param_1[0x35] = puVar19;
            while (puVar19 = puVar9, FUN_108886c24(puVar9,param_1 + 0x35), ((ulong)puVar19 & 1) != 0
                  ) {
              puVar19 = puVar9;
              func_0x000108886c54();
              puVar17 = puVar19;
              FUN_108886c70();
              FUN_108886d3c(puVar19);
              puVar18 = puVar7;
              FUN_108886c94(puVar7,puVar19);
              puVar19 = puVar17;
              func_0x000108886d60();
              param_1[0x36] = puVar19;
              FUN_108886da0();
              param_1[0x37] = puVar17;
              func_0x000107c2a1b8(puVar18,param_1[0x36],param_1[0x37]);
              func_0x000108886e00(puVar9);
            }
            func_0x000108886e20(puVar8);
          }
          FUN_108886e40(puVar11,param_1[0x3c],puVar7,puVar2,puVar3);
          func_0x000107c2a1a0(puVar10,puVar11);
          puVar19 = puVar10;
          func_0x000107c2a1a4();
        } while (((ulong)puVar19 & 1) != 0);
        *(undefined1 *)((long)param_1 + 500) = 1;
        puVar19 = param_1;
        func_0x000107c2a194();
        ppuVar20 = &puStack_80;
        puStack_80 = puVar19;
        func_0x000107c2a198(ppuVar20);
        puVar19 = puVar10;
        func_0x000107c28830(puVar10,ppuVar20);
      } while (((ulong)puVar19 & 1) == 0);
      cVar22 = -1;
    } while( true );
  }
  func_0x000107c2a19c((long)param_1 + 0x1f5);
  lVar23 = param_1[0x3c];
  FUN_108885a44(puVar19,0x23c);
  FUN_108681bac(param_1 + 4,lVar23 + 0x1a0,puVar19,1,1);
  lVar23 = param_1[0x3c];
  FUN_108657130(puVar19);
  func_0x0001088868f8(puVar2);
  func_0x00010888692c(puVar3);
  lVar23 = lVar23 + 0x1a0;
  FUN_108885a70(lVar23);
  FUN_108681d54(puVar4,lVar23,0x23e);
  func_0x000108886960(puVar5,param_1[0x3c],puVar1);
  goto LAB_1088a55c8;
}



/* Entry: 1088a5b74; end: 1088a5d1f;  */

void FUN_1088a5b74(long param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 500);
  if (bVar1 == 2) {
    FUN_108888254(param_1 + 0x1d0);
    func_0x000108888288(param_1 + 0x1d8);
  }
  else {
    if ((((bVar1 ^ 0xff) & 3) == 0) || ((bVar1 & 3) == 0)) goto LAB_1088a5ce0;
    FUN_108885f54(param_1 + 0x1c0);
    func_0x000107c2a1ac(param_1 + 0x1c8);
  }
  FUN_108888360(param_1 + 0x118);
  func_0x000108888394(param_1 + 0x140);
  func_0x0001088883c8(param_1 + 0x70);
  FUN_108681d9c(param_1 + 0x178);
  func_0x0001088883fc(param_1 + 0xf0);
  func_0x000108888430(param_1 + 200);
  FUN_108681bac(param_1 + 0x20);
LAB_1088a5ce0:
  FUN_108885f98(param_1 + 0x10);
  func_0x000108888464(param_1 + 0x160);
  __ZdlPv(param_1);
  return;
}



/* Entry: 1088a5d20; end: 1088a5fa3;  */

void FUN_1088a5d20(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 **ppuVar6;
  ulong uVar7;
  char cVar8;
  long lVar9;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  
  puVar5 = param_1 + 0xe;
  puVar1 = param_1 + 0x13;
  puVar2 = param_1 + 0x14;
  uVar3 = (long)param_1 + 0xb2;
  puVar4 = param_1 + 2;
  if (*(char *)(param_1 + 0x16) == '\0') {
    func_0x000107c2a19c((long)param_1 + 0xb1);
    lVar9 = param_1[0x15];
    FUN_108885a44(puVar5,0x23f);
    FUN_108681bac(param_1 + 4,lVar9 + 0x1a0,puVar5,1,1);
    lVar9 = param_1[0x15];
    FUN_108657130(puVar5);
    FUN_1088b0f60(puVar2,lVar9 + 8);
    func_0x000107c2a1a0(puVar1,puVar2);
    puVar5 = puVar1;
    func_0x000107c2a1a4();
    if (((ulong)puVar5 & 1) != 0) goto LAB_1088a5e64;
    *(undefined1 *)(param_1 + 0x16) = 1;
    puVar5 = param_1;
    func_0x000107c2a194();
    ppuVar6 = &puStack_60;
    puStack_60 = puVar5;
    func_0x000107c2a198(ppuVar6);
    puVar5 = puVar1;
    func_0x000107c28830(puVar1,ppuVar6);
    if (((ulong)puVar5 & 1) == 0) goto LAB_1088a5e64;
    cVar8 = -1;
  }
  else {
    cVar8 = '\0';
  }
  if (cVar8 != '\0') {
    return;
  }
LAB_1088a5e64:
  func_0x000107c28834(puVar1);
  FUN_108885f54(puVar1);
  func_0x000107c2a1ac(puVar2);
  FUN_108681bac(param_1 + 4);
  func_0x000107c287c8(puVar4);
  FUN_108885f88(puVar4);
  uVar7 = uVar3;
  func_0x000107c2a18c();
  if ((uVar7 & 1) == 0) {
    *param_1 = 0;
    *(undefined1 *)(param_1 + 0x16) = 2;
    func_0x000107c2a194();
    ppuVar6 = &puStack_58;
    puStack_58 = param_1;
    func_0x000107c2a198(ppuVar6);
    FUN_108885f40(uVar3,ppuVar6);
  }
  else {
    func_0x000107c2a19c(uVar3);
    FUN_108885f98(puVar4);
    __ZdlPv(param_1);
  }
  return;
}



/* Entry: 1088a5fa4; end: 1088a608b;  */

void FUN_1088a5fa4(long param_1)

{
  if ((*(byte *)(param_1 + 0xb0) != 2) && ((*(byte *)(param_1 + 0xb0) & 3) != 0)) {
    FUN_108885f54(param_1 + 0x98);
    func_0x000107c2a1ac(param_1 + 0xa0);
    FUN_108681bac(param_1 + 0x20);
  }
  FUN_108885f98(param_1 + 0x10);
  __ZdlPv(param_1);
  return;
}



/* Entry: 1088a608c; end: 1088a609f;  */

undefined8 FUN_1088a608c(undefined8 param_1)

{
  return param_1;
}



/* Entry: 1088a60a0; end: 1088a60f3;  */

void FUN_1088a60a0(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  FUN_1088b012c(param_1 + 8,param_2);
  plVar1 = (long *)(param_1 + 400);
  FUN_108885c24();
  (**(code **)(*plVar1 + 0x48))();
  return;
}



/* Entry: 1088a60f4; end: 1088a63f7;  */

void FUN_1088a60f4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 **ppuVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 *apuStack_70 [2];
  
  puVar5 = (undefined8 *)0xb8;
  __Znwm();
  *puVar5 = FUN_1088afdc0;
  puVar5[1] = FUN_1088b0044;
  uVar9 = (long)puVar5 + 0xb1;
  puVar7 = puVar5 + 0xe;
  puVar1 = puVar5 + 0x13;
  puVar2 = puVar5 + 0x14;
  uVar3 = (long)puVar5 + 0xb2;
  puVar4 = puVar5 + 2;
  puVar5[0x15] = param_2;
  func_0x000107c2a184(puVar4);
  func_0x000107c287c4(param_1,puVar4);
  func_0x000107c2a188(puVar4);
  uVar6 = uVar9;
  func_0x000107c2a18c();
  if ((uVar6 & 1) == 0) {
    *(undefined1 *)(puVar5 + 0x16) = 0;
    func_0x000107c2a194();
    ppuVar8 = &puStack_80;
    puStack_80 = puVar5;
    func_0x000107c2a198(ppuVar8);
    FUN_108885f40(uVar9,ppuVar8);
  }
  else {
    func_0x000107c2a19c(uVar9);
    lVar10 = puVar5[0x15];
    FUN_108885a44(puVar7,0x22d);
    FUN_108681bac(puVar5 + 4,lVar10 + 400,puVar7,1,1);
    lVar10 = puVar5[0x15];
    FUN_108657130(puVar7);
    FUN_1088b0f60(puVar2,lVar10 + 8);
    func_0x000107c2a1a0(puVar1,puVar2);
    puVar7 = puVar1;
    func_0x000107c2a1a4();
    if (((ulong)puVar7 & 1) == 0) {
      *(undefined1 *)(puVar5 + 0x16) = 1;
      puVar7 = puVar5;
      func_0x000107c2a194();
      ppuVar8 = &puStack_78;
      puStack_78 = puVar7;
      func_0x000107c2a198(ppuVar8);
      puVar7 = puVar1;
      func_0x000107c28830(puVar1,ppuVar8);
      if (((ulong)puVar7 & 1) != 0) {
        return;
      }
    }
    func_0x000107c28834(puVar1);
    FUN_108885f54(puVar1);
    func_0x000107c2a1ac(puVar2);
    FUN_108681bac(puVar5 + 4);
    func_0x000107c287c8(puVar4);
    FUN_108885f88(puVar4);
    uVar9 = uVar3;
    func_0x000107c2a18c();
    if ((uVar9 & 1) == 0) {
      *puVar5 = 0;
      *(undefined1 *)(puVar5 + 0x16) = 2;
      func_0x000107c2a194();
      ppuVar8 = apuStack_70;
      apuStack_70[0] = puVar5;
      func_0x000107c2a198(ppuVar8);
      FUN_108885f40(uVar3,ppuVar8);
    }
    else {
      func_0x000107c2a19c(uVar3);
      FUN_108885f98(puVar4);
      __ZdlPv(puVar5);
    }
  }
  return;
}



/* Entry: 1088a63f8; end: 1088a6437;  */

void FUN_1088a63f8(long param_1)

{
  long *plVar1;
  
  plVar1 = (long *)(param_1 + 400);
  FUN_108885c24();
  (**(code **)(*plVar1 + 0x48))();
  return;
}



/* Entry: 1088a6438; end: 1088a6457;  */

void FUN_1088a6438(long param_1)

{
  long *plVar1;
  
  plVar1 = (long *)(param_1 + 0x188);
  FUN_108885c24();
  (**(code **)(*plVar1 + 0x48))();
  return;
}



/* Entry: 1088a6458; end: 1088a6613;  */

void FUN_1088a6458(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 auStack_168 [40];
  undefined1 auStack_140 [40];
  undefined1 *puStack_118;
  undefined1 auStack_110 [48];
  undefined1 auStack_e0 [40];
  undefined1 auStack_b8 [40];
  undefined1 auStack_90 [80];
  long lStack_40;
  undefined8 uStack_38;
  
  lStack_40 = param_2;
  uStack_38 = param_1;
  FUN_108885a44(auStack_b8,0x228);
  FUN_108681bac(auStack_90,param_2 + 400,auStack_b8,1,1);
  FUN_108657130(auStack_b8);
  lVar1 = param_2 + 400;
  FUN_108885a70(lVar1);
  FUN_108681d54(auStack_e0,lVar1,0x229);
  func_0x000108885a88(param_2 + 0x180);
  FUN_108863bd4(auStack_110);
  puStack_118 = auStack_110;
  func_0x000107c29010(auStack_140,puStack_118);
  FUN_108885aa0(auStack_168,puStack_118);
  while( true ) {
    puVar2 = auStack_140;
    FUN_108885ae4(puVar2,auStack_168);
    if (((ulong)puVar2 & 1) == 0) break;
    puVar2 = auStack_140;
    FUN_1086afc30();
    FUN_1088b012c(param_2 + 8,puVar2);
    FUN_108681d9c(auStack_e0,1);
    func_0x000108885b18(auStack_140);
  }
  func_0x000108885b4c(auStack_168);
  func_0x000108885b4c(auStack_140);
  func_0x00010bcd3464(param_1);
  func_0x000108885b80(auStack_110);
  FUN_108681d9c(auStack_e0);
  FUN_108681bac(auStack_90);
  return;
}



/* Entry: 1088a6614; end: 1088a662f;  */

void FUN_1088a6614(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 auStack_168 [40];
  undefined1 auStack_140 [40];
  undefined1 *puStack_118;
  undefined1 auStack_110 [48];
  undefined1 auStack_e0 [40];
  undefined1 auStack_b8 [40];
  undefined1 auStack_90 [80];
  long lStack_40;
  undefined8 uStack_38;
  
  lStack_40 = param_2 + -8;
  uStack_38 = param_1;
  FUN_108885a44(auStack_b8,0x228);
  FUN_108681bac(auStack_90,param_2 + 0x188,auStack_b8,1,1);
  FUN_108657130(auStack_b8);
  lVar1 = param_2 + 0x188;
  FUN_108885a70(lVar1);
  FUN_108681d54(auStack_e0,lVar1,0x229);
  func_0x000108885a88(param_2 + 0x178);
  FUN_108863bd4(auStack_110);
  puStack_118 = auStack_110;
  func_0x000107c29010(auStack_140,puStack_118);
  FUN_108885aa0(auStack_168,puStack_118);
  while( true ) {
    puVar2 = auStack_140;
    FUN_108885ae4(puVar2,auStack_168);
    if (((ulong)puVar2 & 1) == 0) break;
    puVar2 = auStack_140;
    FUN_1086afc30();
    FUN_1088b012c(param_2,puVar2);
    FUN_108681d9c(auStack_e0,1);
    func_0x000108885b18(auStack_140);
  }
  func_0x000108885b4c(auStack_168);
  func_0x000108885b4c(auStack_140);
  func_0x00010bcd3464(param_1);
  func_0x000108885b80(auStack_110);
  FUN_108681d9c(auStack_e0);
  FUN_108681bac(auStack_90);
  return;
}



/* Entry: 1088a6630; end: 1088a7293;  */

void FUN_1088a6630(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  ulong uVar21;
  undefined8 *puVar22;
  undefined4 uVar23;
  int iVar24;
  bool bVar25;
  byte bVar26;
  undefined8 *puVar27;
  ulong uVar28;
  undefined8 *puVar29;
  undefined8 *puVar30;
  ulong uVar31;
  long *plVar32;
  undefined8 **ppuVar33;
  long lVar34;
  int iVar35;
  undefined8 uVar36;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 *apuStack_a8 [7];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar27 = (undefined8 *)0x5f0;
  __Znwm();
  *puVar27 = FUN_1088af0d0;
  puVar27[1] = FUN_1088afc10;
  puVar1 = puVar27 + 0x97;
  uVar31 = (long)puVar27 + 0x5e9;
  puVar29 = puVar27 + 0x84;
  puVar2 = puVar27 + 0x9a;
  puVar3 = puVar27 + 0x7e;
  puVar4 = puVar27 + 0x9d;
  puVar5 = puVar27 + 4;
  puVar6 = puVar27 + 0xa0;
  puVar7 = puVar27 + 0xa3;
  puVar8 = puVar27 + 0x93;
  puVar9 = puVar27 + 0xaf;
  puVar10 = puVar27 + 0x3f;
  puVar11 = puVar27 + 0xa6;
  puVar12 = puVar27 + 0xa9;
  puVar13 = puVar27 + 0xac;
  puVar14 = puVar27 + 0xbb;
  puVar15 = puVar27 + 0xb1;
  puVar16 = puVar27 + 0xb2;
  puVar17 = puVar27 + 0xb3;
  puVar18 = puVar27 + 0xb4;
  puVar19 = puVar27 + 0x89;
  puVar20 = puVar27 + 0x8e;
  uVar21 = (long)puVar27 + 0x5ea;
  puVar22 = puVar27 + 2;
  puVar27[0xb8] = param_2;
  FUN_1088868bc(puVar1,param_3);
  func_0x000107c2a184(puVar22);
  func_0x000107c287c4(param_1,puVar22);
  func_0x000107c2a188(puVar22);
  uVar28 = uVar31;
  func_0x000107c2a18c();
  if ((uVar28 & 1) == 0) {
    *(undefined1 *)(puVar27 + 0xbd) = 0;
    func_0x000107c2a194();
    ppuVar33 = &puStack_c0;
    puStack_c0 = puVar27;
    func_0x000107c2a198(ppuVar33);
    FUN_108885f40(uVar31,ppuVar33);
  }
  else {
    func_0x000107c2a19c(uVar31);
    lVar34 = puVar27[0xb8];
    FUN_108885a44(puVar29,0x22a);
    FUN_108681bac(puVar27 + 0x74,lVar34 + 400,puVar29,1,1);
    lVar34 = puVar27[0xb8];
    FUN_108657130(puVar29);
    lVar34 = lVar34 + 400;
    FUN_108885a70(lVar34);
    FUN_108681d54(puVar2,lVar34,0x22c);
    FUN_1088a7294(puVar3,puVar27[0xb8],puVar1);
    do {
      FUN_10888ce18(puVar4,1);
      func_0x000108885a88(puVar27[0xb8] + 0x180);
      func_0x000107c29f64(puVar5);
      puVar29 = puVar5;
      FUN_1088894bc();
      if (((ulong)puVar29 & 1) == 0) {
        iVar35 = 5;
      }
      else {
        lVar34 = puVar27[0xb8];
        puVar29 = puVar5;
        FUN_1088895d4();
        puVar29 = puVar29 + 3;
        FUN_1086a6a98(puVar29,lVar34 + 0x10);
        if (((ulong)puVar29 & 1) == 0) {
          iVar35 = 5;
        }
        else {
          FUN_10889fa84(puVar6);
          FUN_10889fa84(puVar7);
          func_0x0001088869a0(puVar8,puVar3);
          puVar29 = puVar8;
          func_0x00010888e4c0();
          if (((ulong)puVar29 & 1) == 0) {
            iVar35 = 5;
          }
          else {
            puVar29 = puVar8;
            FUN_1088882bc(puVar8);
            FUN_1088882e0();
            FUN_108681d9c(puVar2,puVar29);
            puVar29 = puVar8;
            FUN_108886a30();
            puVar30 = puVar29;
            FUN_108886a54();
            *puVar9 = puVar30;
            func_0x000108886a98();
            puVar27[0xb0] = puVar29;
            while (puVar29 = puVar9, func_0x000108886adc(puVar9,puVar27 + 0xb0),
                  (((uint)puVar29 ^ 1) & 1) != 0) {
              puVar29 = puVar9;
              FUN_108886b24(puVar9);
              puVar30 = puVar10;
              FUN_10889fe48(puVar10,puVar29);
              bVar25 = false;
              uVar31 = (long)puVar30 + 0x144;
              *(undefined4 *)(puVar27 + 0xbc) = 2;
              func_0x0001088a72d4();
              if ((uVar31 & 1) != 0) {
                FUN_1088a732c(puVar27 + 0xb9);
                func_0x0001088a7360(puVar27 + 0xba);
                *(undefined1 *)((long)puVar27 + 0x5d6) = 1;
                puVar29 = puVar5;
                FUN_1088895d4();
                bVar26 = (char)puVar29 + 0x18;
                FUN_1086a52c8();
                *(byte *)((long)puVar27 + 0x5d7) = bVar26 & 1;
                plVar32 = (long *)(puVar27[0xb8] + 0x1d0);
                FUN_1088a7394();
                (**(code **)(*plVar32 + 0x18))();
                bVar25 = (int)plVar32 == 2;
              }
              if (bVar25) {
                FUN_1088449f4(puVar11,2);
                FUN_10888eba0(puVar27 + 0x58,puVar11);
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev(puVar11);
                FUN_10889fbd4(puVar7,puVar10);
              }
              else {
                FUN_10889fbd4(puVar6,puVar10);
              }
              func_0x00010888e95c(puVar10);
              func_0x000108886e20(puVar9);
            }
            iVar35 = 0;
          }
          func_0x000108888394(puVar8);
          if (iVar35 == 0) {
            FUN_108848684(puVar13);
            func_0x000107c29e04(puVar12,puVar13);
            func_0x000108888464(puVar13);
            puVar29 = puVar7;
            FUN_10889fc00();
            if (((ulong)puVar29 & 1) == 0) {
              uVar36 = puVar27[0xb8];
              puVar29 = puVar5;
              FUN_1088a7674(puVar5);
              FUN_1088a73ac(uVar36,puVar29,puVar7,puVar12);
              plVar32 = (long *)(puVar27[0xb8] + 400);
              FUN_108885c24();
              puVar29 = puVar7;
              FUN_1088882e0(puVar7);
              (**(code **)(*plVar32 + 0x48))(plVar32,0x230,puVar29);
            }
            puVar29 = puVar6;
            FUN_10889fc00();
            if (((ulong)puVar29 & 1) == 0) {
              uVar36 = puVar27[0xb8];
              puVar29 = puVar5;
              FUN_1088a7674(puVar5);
              FUN_1088a7698(puVar16,uVar36,puVar29,puVar6,0);
              FUN_1088881a8(puVar15,puVar16);
              puVar29 = puVar15;
              func_0x000107c2a1a4();
              if (((ulong)puVar29 & 1) == 0) {
                *(undefined1 *)(puVar27 + 0xbd) = 1;
                puVar29 = puVar27;
                func_0x000107c2a194();
                ppuVar33 = &puStack_b8;
                puStack_b8 = puVar29;
                func_0x000107c2a198(ppuVar33);
                puVar29 = puVar15;
                func_0x000107c28830(puVar15,ppuVar33);
                if (((ulong)puVar29 & 1) != 0) goto LAB_1088a71c8;
              }
              puVar29 = puVar15;
              FUN_1088881d4();
              *(undefined4 *)puVar14 = *(undefined4 *)puVar29;
              *(undefined4 *)((long)puVar27 + 0x5dc) = *(undefined4 *)((long)puVar29 + 4);
              FUN_108888254(puVar15);
              func_0x000108888288(puVar16);
              *(undefined4 *)((long)puVar27 + 0x5e4) = 5;
              puVar29 = puVar14;
              FUN_108888308();
              if (((ulong)puVar29 & 1) != 0) {
                uVar36 = puVar27[0xb8];
                puVar29 = puVar5;
                FUN_1088a7674(puVar5);
                FUN_1088a7698(puVar18,uVar36,puVar29,puVar6,1);
                FUN_1088881a8(puVar17,puVar18);
                puVar29 = puVar17;
                func_0x000107c2a1a4();
                if (((ulong)puVar29 & 1) == 0) {
                  *(undefined1 *)(puVar27 + 0xbd) = 2;
                  puVar29 = puVar27;
                  func_0x000107c2a194();
                  ppuVar33 = &puStack_b0;
                  puStack_b0 = puVar29;
                  func_0x000107c2a198(ppuVar33);
                  puVar29 = puVar17;
                  func_0x000107c28830(puVar17,ppuVar33);
                  if (((ulong)puVar29 & 1) != 0) goto LAB_1088a71c8;
                }
                puVar29 = puVar17;
                FUN_1088881d4();
                *(undefined4 *)puVar14 = *(undefined4 *)puVar29;
                *(undefined1 *)((long)puVar27 + 0x5dc) = *(undefined1 *)((long)puVar29 + 4);
                FUN_108888254(puVar17);
                func_0x000108888288(puVar18);
              }
              lVar34 = puVar27[0xb8];
              puVar29 = puVar14;
              FUN_10888d028();
              bVar26 = (byte)puVar29 ^ 1;
              plVar32 = (long *)(lVar34 + 400);
              FUN_108885c24();
              FUN_108885a44(puVar19,0x22b);
              uVar23 = 0x30011;
              if ((bVar26 & 1) == 0) {
                uVar23 = 0x30012;
              }
              puVar29 = puVar19;
              FUN_108659af8(puVar19,uVar23);
              puVar30 = puVar6;
              FUN_1088882e0(puVar6);
              (**(code **)(*plVar32 + 0x58))(plVar32,puVar29,puVar30);
              FUN_108657130(puVar19);
              puVar29 = puVar5;
              FUN_1088a7674(puVar5);
              puVar30 = puVar4;
              func_0x000107c2825c();
              puVar27[0xb5] = puVar30;
              FUN_1088a829c(puVar27[0xb8],puVar6,puVar29,puVar12,bVar26 & 1,puVar14,puVar27[0xb5]);
            }
            plVar32 = (long *)(puVar27[0xb8] + 400);
            FUN_108885c24();
            FUN_108885a44(puVar20,0x22b);
            puVar29 = puVar4;
            func_0x000107c2825c();
            puVar27[0xb7] = puVar29;
            puVar29 = puVar27 + 0xb7;
            FUN_1088a84ec();
            puVar27[0xb6] = puVar29;
            (**(code **)(*plVar32 + 0x18))(plVar32,puVar20);
            FUN_108657130(puVar20);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev(puVar12);
            iVar35 = 0;
          }
          func_0x00010888e928(puVar7);
          func_0x00010888e928(puVar6);
        }
      }
      FUN_108889488(puVar5);
    } while (iVar35 == 0);
    iVar24 = iVar35 + -5;
    if (iVar24 == 0) {
      iVar35 = 0;
    }
    func_0x0001088883c8(iVar24,puVar3);
    FUN_108681d9c(puVar2);
    FUN_108681bac(puVar27 + 0x74);
    if (iVar35 == 0) {
      func_0x000107c287c8(puVar22);
      FUN_108885f88(puVar22);
      uVar31 = uVar21;
      func_0x000107c2a18c();
      if ((uVar31 & 1) == 0) {
        *puVar27 = 0;
        *(undefined1 *)(puVar27 + 0xbd) = 3;
        func_0x000107c2a194();
        ppuVar33 = apuStack_a8;
        apuStack_a8[0] = puVar27;
        func_0x000107c2a198(ppuVar33);
        FUN_108885f40(uVar21,ppuVar33);
        goto LAB_1088a71c8;
      }
      func_0x000107c2a19c(uVar21);
    }
    FUN_108885f98(puVar22);
    func_0x000108888464(puVar1);
    __ZdlPv(puVar27);
  }
LAB_1088a71c8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 - lStack_70 != 0) {
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_11034bdc0 - lStack_70);
  }
  return;
}



/* Entry: 1088a7294; end: 1088a732b;  */

void FUN_1088a7294(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_40 = 0;
  uStack_38 = param_2;
  uStack_30 = param_3;
  uStack_28 = param_3;
  uStack_20 = param_2;
  uStack_18 = param_1;
  FUN_1088a8560(param_1,&uStack_40);
  return;
}



/* Entry: 1088a732c; end: 1088a7393;  */

undefined8 FUN_1088a732c(undefined8 param_1)

{
  FUN_1088a9784(param_1);
  return param_1;
}



/* Entry: 1088a7394; end: 1088a73ab;  */

undefined8 FUN_1088a7394(undefined8 *param_1)

{
  return *param_1;
}



/* Entry: 1088a73ac; end: 1088a7673;  */

void FUN_1088a73ac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined1 auStack_110 [24];
  undefined8 auStack_f8 [2];
  undefined1 auStack_e4 [20];
  undefined8 *puStack_d0;
  undefined1 auStack_c8 [32];
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  uStack_90 = param_3;
  uStack_88 = param_4;
  uStack_80 = param_3;
  uStack_78 = param_2;
  lStack_70 = param_1;
  FUN_108889688();
  uVar4 = uStack_90;
  uStack_98 = param_3;
  func_0x0001088896cc();
  uStack_a0 = uVar4;
  while( true ) {
    puVar5 = &uStack_98;
    func_0x000108889710(puVar5,&uStack_a0);
    if ((((uint)puVar5 ^ 1) & 1) == 0) break;
    puVar5 = &uStack_98;
    FUN_108889758();
    plVar6 = (long *)(param_1 + 0x180);
    puStack_a8 = puVar5;
    func_0x000108885a88();
    (**(code **)(*plVar6 + 0x10))();
    plVar6 = (long *)(param_1 + 0x1e0);
    FUN_1088a8d10();
    (**(code **)(*plVar6 + 0x68))();
    func_0x000107c29e2c(auStack_c8,puStack_a8 + 10);
    uVar9 = 0;
    func_0x00010888d5fc();
    if ((uVar9 & 1) != 0) {
      puVar5 = puStack_a8 + 10;
      FUN_108886b3c();
      func_0x00010888d818();
      plVar6 = (long *)(param_1 + 0x1c0);
      puStack_d0 = puVar5;
      FUN_10888d7dc();
      puVar7 = auStack_c8;
      func_0x00010888d7f4(puVar7);
      uVar4 = uStack_88;
      uVar10 = *(undefined8 *)(param_1 + 0x80);
      FUN_1088a8d28(auStack_e4);
      puVar1 = puStack_d0;
      puVar5 = puStack_a8 + 10;
      FUN_10888a9ec();
      iVar3 = (int)puStack_a8 + 0x50;
      FUN_108889770();
      func_0x00010888d83c();
      puVar8 = puStack_a8 + 4;
      func_0x00010888d790();
      uVar2 = uStack_78;
      if (((ulong)puVar8 & 1) != 0) {
        puVar8 = puStack_a8 + 4;
        func_0x00010888996c();
        FUN_10883fbf0(uVar2,param_1 + 0x10,*puVar8);
      }
      FUN_108886b3c();
      func_0x00010888d860();
      (**(code **)(*plVar6 + 0x20))(plVar6,puVar7,uVar4,uVar10,1,auStack_e4,0,puVar1,puVar5,iVar3);
    }
    FUN_10888d884(auStack_c8);
    FUN_10888a290(&uStack_98);
  }
  FUN_1086e54d0(auStack_f8,param_1 + 0x1f0);
  uVar9 = 0;
  FUN_1088a8d5c();
  if ((uVar9 & 1) != 0) {
    puVar5 = auStack_f8;
    FUN_1088a8d8c();
    uVar2 = uStack_78;
    uVar4 = uStack_80;
    FUN_1088a8da4(auStack_110);
    (**(code **)*puVar5)(puVar5,uVar2,uVar2,0,uVar4,auStack_110);
    func_0x0001088a8dd8(auStack_110);
  }
  func_0x0001088a8e0c(auStack_f8);
  return;
}



/* Entry: 1088a7674; end: 1088a7697;  */

void FUN_1088a7674(undefined8 param_1)

{
  FUN_10888f40c(param_1);
  return;
}



/* Entry: 1088a7698; end: 1088a829b;  */

void FUN_1088a7698(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  byte param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  byte *pbVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 *puVar14;
  code *pcVar15;
  undefined8 *puVar16;
  ulong uVar17;
  long *plVar18;
  undefined8 *puVar19;
  undefined8 **ppuVar20;
  undefined8 *puVar21;
  long lVar22;
  long *plVar23;
  undefined8 uVar24;
  byte *pbVar25;
  undefined8 *puVar26;
  undefined4 *puVar27;
  ulong uVar28;
  long lVar29;
  undefined8 uVar30;
  long lVar31;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined1 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  byte bStack_2c9;
  undefined4 auStack_2b4 [11];
  undefined1 auStack_288 [56];
  undefined1 auStack_250 [16];
  long *plStack_240;
  undefined1 auStack_228 [56];
  undefined8 *puStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined1 auStack_1d0 [40];
  undefined1 auStack_1a8 [191];
  byte bStack_e9;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  long alStack_88 [3];
  long alStack_70 [2];
  
  alStack_70[0] = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar16 = (undefined8 *)0x118;
  bStack_e9 = param_5;
  uStack_e8 = param_4;
  lStack_e0 = param_3;
  uStack_d8 = param_2;
  uStack_d0 = param_1;
  __Znwm();
  *puVar16 = FUN_1088ae3d0;
  puVar16[1] = FUN_1088aeedc;
  plVar23 = puVar16 + 0x14;
  uVar28 = (long)puVar16 + 0x112;
  puVar21 = puVar16 + 0x16;
  puVar1 = puVar16 + 0x17;
  puVar2 = puVar16 + 0x18;
  plVar3 = puVar16 + 0x19;
  puVar4 = puVar16 + 4;
  puVar5 = puVar16 + 0x1a;
  plVar6 = puVar16 + 0xc;
  puVar7 = puVar16 + 0xe;
  puVar26 = puVar16 + 0x21;
  puVar8 = puVar16 + 0x1b;
  puVar9 = puVar16 + 0x1c;
  puVar10 = puVar16 + 0x1d;
  pbVar11 = (byte *)(puVar16 + 0x1e);
  puVar12 = puVar16 + 0x1f;
  uVar13 = (long)puVar16 + 0x114;
  puVar14 = puVar16 + 2;
  puVar16[0x20] = param_2;
  *plVar23 = lStack_e0;
  puVar16[0x15] = uStack_e8;
  *(byte *)((long)puVar16 + 0x111) = bStack_e9 & 1;
  FUN_10888cd30(puVar14);
  FUN_10888cd64(param_1,puVar14);
  func_0x000107c2a188(puVar14);
  uVar17 = uVar28;
  func_0x000107c2a18c();
  if ((uVar17 & 1) == 0) {
    *(undefined1 *)(puVar16 + 0x22) = 0;
    FUN_10888cdb8();
    ppuVar20 = &puStack_b0;
    puStack_b0 = puVar16;
    func_0x00010888cde8(ppuVar20);
    FUN_108885f40(uVar28,ppuVar20);
  }
  else {
    func_0x000107c2a19c(uVar28);
    if ((*(byte *)((long)puVar16 + 0x111) & 1) != 0) {
      lVar29 = puVar16[0x20];
      plVar18 = (long *)(lVar29 + 0x1b0);
      FUN_108889444();
      (**(code **)(*plVar18 + 0x18))(puVar2);
      func_0x000107c2883c(puVar1,lVar29 + 0x88,puVar2);
      func_0x000107c2a1a0(puVar21,puVar1);
      puVar19 = puVar21;
      func_0x000107c2a1a4();
      if (((ulong)puVar19 & 1) == 0) {
        *(undefined1 *)(puVar16 + 0x22) = 1;
        puVar19 = puVar16;
        FUN_10888cdb8();
        ppuVar20 = &puStack_a8;
        puStack_a8 = puVar19;
        func_0x00010888cde8(ppuVar20);
        puVar19 = puVar21;
        func_0x000107c28830(puVar21,ppuVar20);
        if (((ulong)puVar19 & 1) != 0) goto LAB_1088a81d0;
      }
      func_0x000107c28834(puVar21);
      FUN_108885f54(puVar21);
      func_0x000107c2a1ac(puVar1);
      func_0x000107c2a1ac(puVar2);
    }
    *plVar3 = *plVar23;
    FUN_10865ec40(puVar4);
    puVar21 = puVar4;
    FUN_1088a859c();
    lVar29 = puVar16[0x20] + 0x5c;
    lVar22 = lVar29;
    func_0x00010888cb2c(lVar29);
    func_0x00010888cb50(lVar29);
    FUN_10888cb78(auStack_1a8,lVar22,lVar29);
    puVar16[0x12] = puVar21;
    puVar16[0x13] = auStack_1a8;
    lVar22 = puVar16[0x12];
    lStack_b8 = lVar22 + 0x10;
    lVar29 = lVar22 + 0x28;
    lVar31 = puVar16[0x13];
    func_0x00010888ec74();
    FUN_1088ab020(lVar29,lVar31,lVar22);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev(auStack_1a8);
    puVar21 = puVar4;
    FUN_1088a859c();
    func_0x0001088a85c8();
    func_0x0001088a85f4();
    *puVar5 = puVar21;
    func_0x0001088a8618(*puVar5,*(undefined8 *)(*plVar23 + 0x158));
    func_0x000107c29ee4(auStack_1d0,*plVar3);
    func_0x0001088a8644(*puVar5);
    func_0x000107c287d0();
    func_0x0001088bf334(auStack_1d0);
    uVar30 = puVar16[0x15];
    uStack_1d8 = uVar30;
    FUN_108889688();
    uVar24 = uStack_1d8;
    uStack_1e0 = uVar30;
    func_0x0001088896cc();
    uStack_1e8 = uVar24;
    while( true ) {
      puVar21 = &uStack_1e0;
      func_0x000108889710(puVar21,&uStack_1e8);
      if ((((uint)puVar21 ^ 1) & 1) == 0) break;
      puVar21 = &uStack_1e0;
      FUN_108889758();
      uVar24 = *puVar5;
      puStack_1f0 = puVar21;
      func_0x0001088a8698(uVar24);
      puVar21 = puStack_1f0 + 4;
      func_0x00010888996c();
      FUN_108767594(uVar24,*puVar21);
      FUN_10888a290(&uStack_1e0);
    }
    FUN_1086e5330(plVar6,puVar16[0x20] + 0x1a0);
    plVar23 = plVar6;
    FUN_10888a36c();
    if (((ulong)plVar23 & 1) == 0) {
      uVar24 = 0x10;
      ___cxa_allocate_exception(0x10);
      FUN_10888a39c(uVar24,&UNK_10f4ea037);
      ___cxa_throw(uVar24,&PTR_DAT_110a60aa8,FUN_10865a9d4);
                    /* WARNING: Does not return */
      pcVar15 = (code *)SoftwareBreakpoint(1,0x1088a8234);
      (*pcVar15)();
    }
    FUN_1086708f8(puVar7);
    plVar23 = plVar6;
    FUN_10888a3d8();
    plStack_240 = alStack_88;
    func_0x000107c2a1c0(alStack_88,*plVar3);
    puVar16[0x10] = alStack_88;
    puVar16[0x11] = 1;
    FUN_10888a3f0(auStack_228,puVar16[0x10],puVar16[0x11]);
    FUN_10888a424(auStack_250,puVar7);
    func_0x00010888a460(auStack_288);
    (**(code **)(*plVar23 + 0x88))(plVar23,puVar4,auStack_228,auStack_250,auStack_288);
    func_0x00010888a494(auStack_288);
    func_0x00010888a4c8(auStack_250);
    func_0x00010888a4fc(auStack_228);
    plVar23 = alStack_70;
    do {
      plVar23 = plVar23 + -3;
      func_0x000108888464(plVar23);
    } while (plVar23 != alStack_88);
    lVar29 = puVar16[0x20];
    puVar21 = puVar7;
    FUN_10888a530(puVar7);
    FUN_10888a548(puVar10,puVar21 + 1);
    FUN_108851798(puVar9,lVar29 + 0x88,puVar10);
    func_0x00010888a574(puVar8,puVar9);
    puVar21 = puVar8;
    func_0x000107c2a1a4();
    if (((ulong)puVar21 & 1) == 0) {
      *(undefined1 *)(puVar16 + 0x22) = 2;
      puVar21 = puVar16;
      FUN_10888cdb8();
      ppuVar20 = &puStack_a0;
      puStack_a0 = puVar21;
      func_0x00010888cde8(ppuVar20);
      puVar21 = puVar8;
      func_0x000107c28830(puVar8,ppuVar20);
      if (((ulong)puVar21 & 1) != 0) goto LAB_1088a81d0;
    }
    puVar21 = puVar8;
    func_0x000107c28a1c();
    *(undefined4 *)puVar26 = *(undefined4 *)puVar21;
    *(undefined4 *)((long)puVar16 + 0x10c) = *(undefined4 *)((long)puVar21 + 4);
    FUN_10888a5a0(puVar8);
    func_0x00010888a5d4(puVar9);
    func_0x00010888a5d4(puVar10);
    auStack_2b4[0] = 4;
    puVar21 = puVar26;
    FUN_10888a608(puVar26,auStack_2b4);
    if (((ulong)puVar21 & 1) == 0) {
      uStack_2d4 = 3;
      puVar21 = puVar26;
      FUN_10888a608(puVar26,&uStack_2d4);
      if (((ulong)puVar21 & 1) == 0) {
        FUN_10888a660();
        if (((ulong)puVar26 & 1) == 0) {
          FUN_10888a2fc(&uStack_2e0);
        }
        else {
          uStack_2e4 = 9;
          puVar27 = &uStack_2e4;
          FUN_10888a67c();
          uStack_2e0 = SUB84(puVar27,0);
          uStack_2dc = (undefined1)((ulong)puVar27 >> 0x20);
        }
        func_0x0001088a8cc4(puVar14,&uStack_2e0);
      }
      else {
        uStack_2d8 = 5;
        func_0x0001088a8c78(puVar14,&uStack_2d8);
      }
    }
    else {
      plVar23 = (long *)(puVar16[0x20] + 400);
      FUN_108885c24();
      (**(code **)(*plVar23 + 0x48))();
      FUN_1088a86c4(puVar12,puVar16[0x20]);
      FUN_1088a8be4(pbVar11,puVar12);
      pbVar25 = pbVar11;
      func_0x000107c2a1a4();
      if (((ulong)pbVar25 & 1) == 0) {
        *(undefined1 *)(puVar16 + 0x22) = 3;
        puVar21 = puVar16;
        FUN_10888cdb8();
        ppuVar20 = &puStack_98;
        puStack_98 = puVar21;
        func_0x00010888cde8(ppuVar20);
        pbVar25 = pbVar11;
        func_0x000107c28830(pbVar11,ppuVar20);
        if (((ulong)pbVar25 & 1) != 0) goto LAB_1088a81d0;
      }
      pbVar25 = pbVar11;
      FUN_1086c1de4();
      bStack_2c9 = *pbVar25 & 1;
      FUN_1088a8c10(pbVar11);
      func_0x0001088a8c44(puVar12);
      *(byte *)((long)puVar16 + 0x113) = bStack_2c9;
      uStack_2d0 = 0xb;
      func_0x0001088a8c78(puVar14,&uStack_2d0);
    }
    func_0x00010888a6e4(puVar7);
    func_0x00010888a718(plVar6);
    FUN_1088f0578(puVar4);
    FUN_108885f88(puVar14);
    uVar28 = uVar13;
    func_0x000107c2a18c();
    if ((uVar28 & 1) == 0) {
      *puVar16 = 0;
      *(undefined1 *)(puVar16 + 0x22) = 4;
      FUN_10888cdb8();
      ppuVar20 = &puStack_90;
      puStack_90 = puVar16;
      func_0x00010888cde8(ppuVar20);
      FUN_108885f40(uVar13,ppuVar20);
    }
    else {
      func_0x000107c2a19c(uVar13);
      func_0x00010888d5a4(puVar14);
      __ZdlPv(puVar16);
    }
  }
LAB_1088a81d0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 - alStack_70[0] != 0) {
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_11034bdc0 - alStack_70[0]);
  }
  return;
}



/* Entry: 1088a829c; end: 1088a84eb;  */

void FUN_1088a829c(double param_1,long param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
                  byte param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  ulong *puVar9;
  long *plVar10;
  undefined1 *puVar11;
  ulong *puVar12;
  ulong *puVar13;
  undefined8 uVar14;
  undefined1 auStack_f8 [32];
  ulong *puStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  byte bStack_a1;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  long lStack_88;
  undefined8 auStack_80 [2];
  
  uStack_b0 = param_7;
  bStack_a1 = param_6;
  uStack_a0 = param_5;
  uStack_98 = param_4;
  uStack_90 = param_3;
  lStack_88 = param_2;
  auStack_80[0] = param_8;
  FUN_10888d5d8(auStack_80);
  uVar7 = uStack_90;
  FUN_1088882e0();
  lStack_b8 = (long)(param_1 / (double)uVar7);
  uStack_c0 = uStack_90;
  uVar7 = uStack_90;
  FUN_108889688();
  uVar8 = uStack_c0;
  uStack_c8 = uVar7;
  func_0x0001088896cc();
  uStack_d0 = uVar8;
  while( true ) {
    puVar9 = &uStack_c8;
    func_0x000108889710(puVar9,&uStack_d0);
    if ((((uint)puVar9 ^ 1) & 1) == 0) break;
    puVar9 = &uStack_c8;
    FUN_108889758();
    puStack_d8 = puVar9;
    func_0x00010884431c(auStack_f8,puVar9);
    uVar7 = 0;
    func_0x00010888d5fc();
    if ((uVar7 & 1) != 0) {
      plVar10 = (long *)(param_2 + 0x1c0);
      FUN_10888d7dc();
      puVar11 = auStack_f8;
      FUN_10888d7f4(puVar11);
      uVar4 = uStack_a0;
      bVar3 = bStack_a1;
      uVar2 = uStack_b0;
      lVar1 = lStack_b8;
      uVar14 = *(undefined8 *)(param_2 + 0x80);
      puVar9 = puStack_d8 + 10;
      FUN_108886b3c(puVar9);
      func_0x00010888d818();
      puVar12 = puStack_d8 + 10;
      FUN_10888a9ec();
      iVar6 = (int)puStack_d8 + 0x50;
      FUN_108889770();
      func_0x00010888d83c();
      puVar13 = puStack_d8 + 4;
      func_0x00010888d790();
      uVar5 = uStack_98;
      if (((ulong)puVar13 & 1) != 0) {
        puVar13 = puStack_d8 + 4;
        func_0x00010888996c();
        FUN_10883fbf0(uVar5,param_2 + 0x10,*puVar13);
      }
      FUN_108886b3c();
      func_0x00010888d860();
      (**(code **)(*plVar10 + 0x18))
                (plVar10,puVar11,uVar4,uVar14,bVar3 & 1,uVar2,lVar1,puVar9,puVar12,iVar6);
    }
    FUN_10888d884(auStack_f8);
    FUN_10888a290(&uStack_c8);
  }
  return;
}



/* Entry: 1088a84ec; end: 1088a853f;  */

undefined8 FUN_1088a84ec(undefined8 param_1)

{
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  puStack_28 = &UNK_10df6ad30;
  uStack_20 = param_1;
  FUN_1088aa5d4(param_1,&UNK_10df6ad30);
  uStack_38 = param_1;
  FUN_1088aa628(&uStack_30,&uStack_38);
  func_0x000108894c54(&uStack_18,uStack_30);
  return uStack_18;
}



/* Entry: 1088a8540; end: 1088a855f;  */

void FUN_1088a8540(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  ulong uVar21;
  undefined8 *puVar22;
  undefined4 uVar23;
  int iVar24;
  bool bVar25;
  byte bVar26;
  undefined8 *puVar27;
  ulong uVar28;
  undefined8 *puVar29;
  undefined8 *puVar30;
  ulong uVar31;
  long *plVar32;
  undefined8 **ppuVar33;
  long lVar34;
  int iVar35;
  undefined8 uVar36;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 *apuStack_a8 [7];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar27 = (undefined8 *)0x5f0;
  __Znwm();
  *puVar27 = FUN_1088af0d0;
  puVar27[1] = FUN_1088afc10;
  puVar1 = puVar27 + 0x97;
  uVar31 = (long)puVar27 + 0x5e9;
  puVar29 = puVar27 + 0x84;
  puVar2 = puVar27 + 0x9a;
  puVar3 = puVar27 + 0x7e;
  puVar4 = puVar27 + 0x9d;
  puVar5 = puVar27 + 4;
  puVar6 = puVar27 + 0xa0;
  puVar7 = puVar27 + 0xa3;
  puVar8 = puVar27 + 0x93;
  puVar9 = puVar27 + 0xaf;
  puVar10 = puVar27 + 0x3f;
  puVar11 = puVar27 + 0xa6;
  puVar12 = puVar27 + 0xa9;
  puVar13 = puVar27 + 0xac;
  puVar14 = puVar27 + 0xbb;
  puVar15 = puVar27 + 0xb1;
  puVar16 = puVar27 + 0xb2;
  puVar17 = puVar27 + 0xb3;
  puVar18 = puVar27 + 0xb4;
  puVar19 = puVar27 + 0x89;
  puVar20 = puVar27 + 0x8e;
  uVar21 = (long)puVar27 + 0x5ea;
  puVar22 = puVar27 + 2;
  puVar27[0xb8] = param_2 + -8;
  FUN_1088868bc(puVar1,param_3);
  func_0x000107c2a184(puVar22);
  func_0x000107c287c4(param_1,puVar22);
  func_0x000107c2a188(puVar22);
  uVar28 = uVar31;
  func_0x000107c2a18c();
  if ((uVar28 & 1) == 0) {
    *(undefined1 *)(puVar27 + 0xbd) = 0;
    func_0x000107c2a194();
    ppuVar33 = &puStack_c0;
    puStack_c0 = puVar27;
    func_0x000107c2a198(ppuVar33);
    FUN_108885f40(uVar31,ppuVar33);
  }
  else {
    func_0x000107c2a19c(uVar31);
    lVar34 = puVar27[0xb8];
    FUN_108885a44(puVar29,0x22a);
    FUN_108681bac(puVar27 + 0x74,lVar34 + 400,puVar29,1,1);
    lVar34 = puVar27[0xb8];
    FUN_108657130(puVar29);
    lVar34 = lVar34 + 400;
    FUN_108885a70(lVar34);
    FUN_108681d54(puVar2,lVar34,0x22c);
    FUN_1088a7294(puVar3,puVar27[0xb8],puVar1);
    do {
      FUN_10888ce18(puVar4,1);
      func_0x000108885a88(puVar27[0xb8] + 0x180);
      func_0x000107c29f64(puVar5);
      puVar29 = puVar5;
      FUN_1088894bc();
      if (((ulong)puVar29 & 1) == 0) {
        iVar35 = 5;
      }
      else {
        lVar34 = puVar27[0xb8];
        puVar29 = puVar5;
        FUN_1088895d4();
        puVar29 = puVar29 + 3;
        FUN_1086a6a98(puVar29,lVar34 + 0x10);
        if (((ulong)puVar29 & 1) == 0) {
          iVar35 = 5;
        }
        else {
          FUN_10889fa84(puVar6);
          FUN_10889fa84(puVar7);
          func_0x0001088869a0(puVar8,puVar3);
          puVar29 = puVar8;
          func_0x00010888e4c0();
          if (((ulong)puVar29 & 1) == 0) {
            iVar35 = 5;
          }
          else {
            puVar29 = puVar8;
            FUN_1088882bc(puVar8);
            FUN_1088882e0();
            FUN_108681d9c(puVar2,puVar29);
            puVar29 = puVar8;
            FUN_108886a30();
            puVar30 = puVar29;
            FUN_108886a54();
            *puVar9 = puVar30;
            func_0x000108886a98();
            puVar27[0xb0] = puVar29;
            while (puVar29 = puVar9, func_0x000108886adc(puVar9,puVar27 + 0xb0),
                  (((uint)puVar29 ^ 1) & 1) != 0) {
              puVar29 = puVar9;
              FUN_108886b24(puVar9);
              puVar30 = puVar10;
              FUN_10889fe48(puVar10,puVar29);
              bVar25 = false;
              uVar31 = (long)puVar30 + 0x144;
              *(undefined4 *)(puVar27 + 0xbc) = 2;
              func_0x0001088a72d4();
              if ((uVar31 & 1) != 0) {
                FUN_1088a732c(puVar27 + 0xb9);
                func_0x0001088a7360(puVar27 + 0xba);
                *(undefined1 *)((long)puVar27 + 0x5d6) = 1;
                puVar29 = puVar5;
                FUN_1088895d4();
                bVar26 = (char)puVar29 + 0x18;
                FUN_1086a52c8();
                *(byte *)((long)puVar27 + 0x5d7) = bVar26 & 1;
                plVar32 = (long *)(puVar27[0xb8] + 0x1d0);
                FUN_1088a7394();
                (**(code **)(*plVar32 + 0x18))();
                bVar25 = (int)plVar32 == 2;
              }
              if (bVar25) {
                FUN_1088449f4(puVar11,2);
                FUN_10888eba0(puVar27 + 0x58,puVar11);
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev(puVar11);
                FUN_10889fbd4(puVar7,puVar10);
              }
              else {
                FUN_10889fbd4(puVar6,puVar10);
              }
              func_0x00010888e95c(puVar10);
              func_0x000108886e20(puVar9);
            }
            iVar35 = 0;
          }
          func_0x000108888394(puVar8);
          if (iVar35 == 0) {
            FUN_108848684(puVar13);
            func_0x000107c29e04(puVar12,puVar13);
            func_0x000108888464(puVar13);
            puVar29 = puVar7;
            FUN_10889fc00();
            if (((ulong)puVar29 & 1) == 0) {
              uVar36 = puVar27[0xb8];
              puVar29 = puVar5;
              FUN_1088a7674(puVar5);
              FUN_1088a73ac(uVar36,puVar29,puVar7,puVar12);
              plVar32 = (long *)(puVar27[0xb8] + 400);
              FUN_108885c24();
              puVar29 = puVar7;
              FUN_1088882e0(puVar7);
              (**(code **)(*plVar32 + 0x48))(plVar32,0x230,puVar29);
            }
            puVar29 = puVar6;
            FUN_10889fc00();
            if (((ulong)puVar29 & 1) == 0) {
              uVar36 = puVar27[0xb8];
              puVar29 = puVar5;
              FUN_1088a7674(puVar5);
              FUN_1088a7698(puVar16,uVar36,puVar29,puVar6,0);
              FUN_1088881a8(puVar15,puVar16);
              puVar29 = puVar15;
              func_0x000107c2a1a4();
              if (((ulong)puVar29 & 1) == 0) {
                *(undefined1 *)(puVar27 + 0xbd) = 1;
                puVar29 = puVar27;
                func_0x000107c2a194();
                ppuVar33 = &puStack_b8;
                puStack_b8 = puVar29;
                func_0x000107c2a198(ppuVar33);
                puVar29 = puVar15;
                func_0x000107c28830(puVar15,ppuVar33);
                if (((ulong)puVar29 & 1) != 0) goto LAB_1088a71c8;
              }
              puVar29 = puVar15;
              FUN_1088881d4();
              *(undefined4 *)puVar14 = *(undefined4 *)puVar29;
              *(undefined4 *)((long)puVar27 + 0x5dc) = *(undefined4 *)((long)puVar29 + 4);
              FUN_108888254(puVar15);
              func_0x000108888288(puVar16);
              *(undefined4 *)((long)puVar27 + 0x5e4) = 5;
              puVar29 = puVar14;
              FUN_108888308();
              if (((ulong)puVar29 & 1) != 0) {
                uVar36 = puVar27[0xb8];
                puVar29 = puVar5;
                FUN_1088a7674(puVar5);
                FUN_1088a7698(puVar18,uVar36,puVar29,puVar6,1);
                FUN_1088881a8(puVar17,puVar18);
                puVar29 = puVar17;
                func_0x000107c2a1a4();
                if (((ulong)puVar29 & 1) == 0) {
                  *(undefined1 *)(puVar27 + 0xbd) = 2;
                  puVar29 = puVar27;
                  func_0x000107c2a194();
                  ppuVar33 = &puStack_b0;
                  puStack_b0 = puVar29;
                  func_0x000107c2a198(ppuVar33);
                  puVar29 = puVar17;
                  func_0x000107c28830(puVar17,ppuVar33);
                  if (((ulong)puVar29 & 1) != 0) goto LAB_1088a71c8;
                }
                puVar29 = puVar17;
                FUN_1088881d4();
                *(undefined4 *)puVar14 = *(undefined4 *)puVar29;
                *(undefined1 *)((long)puVar27 + 0x5dc) = *(undefined1 *)((long)puVar29 + 4);
                FUN_108888254(puVar17);
                func_0x000108888288(puVar18);
              }
              lVar34 = puVar27[0xb8];
              puVar29 = puVar14;
              FUN_10888d028();
              bVar26 = (byte)puVar29 ^ 1;
              plVar32 = (long *)(lVar34 + 400);
              FUN_108885c24();
              FUN_108885a44(puVar19,0x22b);
              uVar23 = 0x30011;
              if ((bVar26 & 1) == 0) {
                uVar23 = 0x30012;
              }
              puVar29 = puVar19;
              FUN_108659af8(puVar19,uVar23);
              puVar30 = puVar6;
              FUN_1088882e0(puVar6);
              (**(code **)(*plVar32 + 0x58))(plVar32,puVar29,puVar30);
              FUN_108657130(puVar19);
              puVar29 = puVar5;
              FUN_1088a7674(puVar5);
              puVar30 = puVar4;
              func_0x000107c2825c();
              puVar27[0xb5] = puVar30;
              FUN_1088a829c(puVar27[0xb8],puVar6,puVar29,puVar12,bVar26 & 1,puVar14,puVar27[0xb5]);
            }
            plVar32 = (long *)(puVar27[0xb8] + 400);
            FUN_108885c24();
            FUN_108885a44(puVar20,0x22b);
            puVar29 = puVar4;
            func_0x000107c2825c();
            puVar27[0xb7] = puVar29;
            puVar29 = puVar27 + 0xb7;
            FUN_1088a84ec();
            puVar27[0xb6] = puVar29;
            (**(code **)(*plVar32 + 0x18))(plVar32,puVar20);
            FUN_108657130(puVar20);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev(puVar12);
            iVar35 = 0;
          }
          func_0x00010888e928(puVar7);
          func_0x00010888e928(puVar6);
        }
      }
      FUN_108889488(puVar5);
    } while (iVar35 == 0);
    iVar24 = iVar35 + -5;
    if (iVar24 == 0) {
      iVar35 = 0;
    }
    func_0x0001088883c8(iVar24,puVar3);
    FUN_108681d9c(puVar2);
    FUN_108681bac(puVar27 + 0x74);
    if (iVar35 == 0) {
      func_0x000107c287c8(puVar22);
      FUN_108885f88(puVar22);
      uVar31 = uVar21;
      func_0x000107c2a18c();
      if ((uVar31 & 1) == 0) {
        *puVar27 = 0;
        *(undefined1 *)(puVar27 + 0xbd) = 3;
        func_0x000107c2a194();
        ppuVar33 = apuStack_a8;
        apuStack_a8[0] = puVar27;
        func_0x000107c2a198(ppuVar33);
        FUN_108885f40(uVar21,ppuVar33);
        goto LAB_1088a71c8;
      }
      func_0x000107c2a19c(uVar21);
    }
    FUN_108885f98(puVar22);
    func_0x000108888464(puVar1);
    __ZdlPv(puVar27);
  }
LAB_1088a71c8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 - lStack_70 != 0) {
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_11034bdc0 - lStack_70);
  }
  return;
}



/* Entry: 1088a8560; end: 1088a859b;  */

undefined8 FUN_1088a8560(undefined8 param_1,undefined8 param_2)

{
  FUN_1088aa880(param_1,param_2);
  return param_1;
}



/* Entry: 1088a859c; end: 1088a86c3;  */

undefined8 FUN_1088a859c(undefined8 param_1)

{
  FUN_10875d330();
  return param_1;
}



/* Entry: 1088a86c4; end: 1088a8be3;  */

void FUN_1088a86c4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  code *pcVar9;
  uint uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined8 **ppuVar15;
  undefined8 *puVar16;
  undefined1 *puVar17;
  undefined8 uVar18;
  ulong uVar19;
  long lVar20;
  byte bStack_181;
  undefined1 auStack_180 [168];
  undefined1 auStack_d8 [72];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 *apuStack_70 [2];
  
  puVar11 = (undefined8 *)0xc0;
  uStack_90 = param_2;
  uStack_88 = param_1;
  __Znwm();
  *puVar11 = FUN_1088ade5c;
  puVar11[1] = FUN_1088ae2d4;
  uVar19 = (long)puVar11 + 0xb9;
  puVar1 = puVar11 + 0x11;
  puVar2 = puVar11 + 4;
  puVar16 = puVar11 + 0x13;
  puVar3 = puVar11 + 0x14;
  puVar4 = puVar11 + 0x15;
  puVar5 = puVar11 + 0xc;
  uVar6 = (long)puVar11 + 0xba;
  puVar7 = puVar11 + 2;
  puVar11[0x16] = param_2;
  func_0x0001088a8e40(puVar7);
  FUN_108653ba0(param_1,puVar7);
  func_0x000107c2a188(puVar7);
  uVar12 = uVar19;
  func_0x000107c2a18c();
  if ((uVar12 & 1) == 0) {
    *(undefined1 *)(puVar11 + 0x17) = 0;
    FUN_1088a8e74();
    ppuVar15 = &puStack_80;
    puStack_80 = puVar11;
    func_0x0001088a8ea4(ppuVar15);
    FUN_108885f40(uVar19,ppuVar15);
  }
  else {
    func_0x000107c2a19c(uVar19);
    FUN_1088a8ed4(puVar1);
    plVar13 = (long *)(puVar11[0x16] + 0xe8);
    FUN_1088a8f10();
    FUN_1088a8f28(auStack_d8,puVar1);
    (**(code **)(*plVar13 + 0x48))(plVar13,auStack_d8);
    lVar20 = puVar11[0x16];
    func_0x0001088a8f64(auStack_d8);
    puVar14 = puVar1;
    FUN_1088a93b8(puVar1);
    FUN_1088a93d0(puVar4,puVar14 + 1);
    FUN_1088a8f98(puVar3,lVar20 + 0x88,puVar4);
    func_0x0001088a93f8(puVar16,puVar3);
    puVar14 = puVar16;
    func_0x000107c2a1a4();
    if (((ulong)puVar14 & 1) == 0) {
      *(undefined1 *)(puVar11 + 0x17) = 1;
      puVar14 = puVar11;
      FUN_1088a8e74();
      ppuVar15 = &puStack_78;
      puStack_78 = puVar14;
      func_0x0001088a8ea4(ppuVar15);
      puVar14 = puVar16;
      func_0x000107c28830(puVar16,ppuVar15);
      if (((ulong)puVar14 & 1) != 0) {
        return;
      }
    }
    puVar14 = puVar16;
    FUN_1088a9420(puVar16);
    FUN_1088a94a0(puVar2,puVar14);
    func_0x0001088a94dc(puVar16);
    func_0x0001088a9510(puVar3);
    func_0x0001088a9510(puVar4);
    plVar13 = (long *)(puVar11[0x16] + 400);
    FUN_108885c24();
    FUN_108885a44(auStack_180,0x231);
    puVar16 = puVar2;
    FUN_1088a9544();
    uVar8 = 0x30011;
    if ((int)puVar16 == 0) {
      uVar8 = 0x30012;
    }
    puVar17 = auStack_180;
    FUN_108659af8(puVar17,uVar8);
    FUN_10888c5f4(puVar5,puVar17);
    (**(code **)(*plVar13 + 0x50))(plVar13,puVar5);
    FUN_108657130(puVar5);
    FUN_108657130(auStack_180);
    puVar16 = puVar2;
    FUN_1088a9544();
    if (((ulong)puVar16 & 1) != 0) {
      puVar16 = puVar2;
      func_0x0001088a956c();
      uVar10 = (uint)puVar16;
      func_0x000107c28078();
      if (((uVar10 ^ 1) & 1) != 0) {
        plVar13 = (long *)(puVar11[0x16] + 400);
        FUN_108885c24();
        (**(code **)(*plVar13 + 0x48))();
        uVar18 = 0x10;
        ___cxa_allocate_exception(0x10);
        FUN_10888a39c(uVar18,&UNK_10f4ea085);
        ___cxa_throw(uVar18,&PTR_DAT_110a60aa8,FUN_10865a9d4);
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x1088a8be4);
        (*pcVar9)();
      }
    }
    puVar16 = puVar2;
    FUN_1088a9590();
    bStack_181 = (byte)puVar16 & 1;
    FUN_108653be8(puVar7,&bStack_181);
    FUN_1088a95ac(puVar2);
    func_0x0001088a95e0(puVar1);
    FUN_108885f88(puVar7);
    uVar19 = uVar6;
    func_0x000107c2a18c();
    if ((uVar19 & 1) == 0) {
      *puVar11 = 0;
      *(undefined1 *)(puVar11 + 0x17) = 2;
      FUN_1088a8e74();
      ppuVar15 = apuStack_70;
      apuStack_70[0] = puVar11;
      func_0x0001088a8ea4(ppuVar15);
      FUN_108885f40(uVar6,ppuVar15);
    }
    else {
      func_0x000107c2a19c(uVar6);
      func_0x0001088a9614(puVar7);
      __ZdlPv(puVar11);
    }
  }
  return;
}



/* Entry: 1088a8be4; end: 1088a8c0f;  */

void FUN_1088a8be4(undefined8 param_1,undefined8 param_2)

{
  FUN_1088a9af4(param_1,param_2);
  return;
}



/* Entry: 1088a8c10; end: 1088a8d0f;  */

undefined8 FUN_1088a8c10(undefined8 param_1)

{
  func_0x0001088a9b6c(param_1);
  return param_1;
}



/* Entry: 1088a8d10; end: 1088a8d27;  */

undefined8 FUN_1088a8d10(undefined8 *param_1)

{
  return *param_1;
}



/* Entry: 1088a8d28; end: 1088a8d5b;  */

undefined8 FUN_1088a8d28(undefined8 param_1)

{
  func_0x0001088a9bd4(param_1);
  return param_1;
}



/* Entry: 1088a8d5c; end: 1088a8d8b;  */

bool FUN_1088a8d5c(long param_1)

{
  func_0x0001088ab368(param_1);
  return param_1 != 0;
}



/* Entry: 1088a8d8c; end: 1088a8da3;  */

undefined8 FUN_1088a8d8c(undefined8 *param_1)

{
  return *param_1;
}


