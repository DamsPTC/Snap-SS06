/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108897304; end: 108897327;  */

void FUN_108897304(undefined8 param_1)

{
  FUN_108897328(param_1);
  return;
}



/* Entry: 108897328; end: 10889733f;  */

undefined8 FUN_108897328(undefined8 *param_1)

{
  return *param_1;
}



/* Entry: 108897340; end: 10889748f;  */

void FUN_108897340(float *param_1,float *param_2)

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
  func_0x000108896a5c();
  pfStack_48 = pfVar1;
  if (pfVar1 < pfStack_40) {
    FUN_108897490(param_1,pfStack_40);
  }
  else if (pfStack_40 < pfVar1) {
    FUN_108892ac0();
    if (((ulong)pfVar1 & 1) == 0) {
      pfVar1 = param_1;
      FUN_108896c24();
      uVar4 = *(ulong *)pfVar1;
      pfVar1 = param_1;
      func_0x000108896c3c();
      fVar5 = (float)uVar4 / *pfVar1;
      func_0x000108892b00();
      lVar2 = (long)fVar5;
      __ZNSt3__112__next_primeEm();
    }
    else {
      pfVar1 = param_1;
      FUN_108896c24();
      uVar4 = *(ulong *)pfVar1;
      pfVar1 = param_1;
      func_0x000108896c3c();
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
      FUN_108897490(param_1,pfStack_40);
    }
  }
  return;
}



/* Entry: 108897490; end: 108897693;  */

void FUN_108897490(ulong *param_1,ulong param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puStack_60;
  ulong *puStack_50;
  ulong *puStack_48;
  ulong uStack_40;
  
  puVar2 = param_1;
  FUN_108897694();
  FUN_1088963e0();
  if (param_2 == 0) {
    puVar2 = (ulong *)0x0;
  }
  else {
    func_0x0001088976f4(puVar2,param_2);
  }
  func_0x0001088976ac(param_1,puVar2);
  puVar2 = param_1;
  FUN_108897694();
  func_0x0001088963f4();
  *puVar2 = param_2;
  if (param_2 != 0) {
    for (uStack_40 = 0; uStack_40 < param_2; uStack_40 = uStack_40 + 1) {
      puVar2 = param_1;
      FUN_108896a84(param_1,uStack_40);
      *puVar2 = 0;
    }
    puVar2 = param_1 + 2;
    func_0x000108896c80();
    puStack_48 = (ulong *)*puVar2;
    if (puStack_48 != (ulong *)0x0) {
      puStack_60 = puStack_48;
      func_0x000108896aac();
      func_0x000108890eb8();
      puVar1 = param_1;
      FUN_108896a84(param_1,puStack_60);
      *puVar1 = (ulong)puVar2;
      puStack_50 = (ulong *)*puStack_48;
      while (puStack_50 != (ulong *)0x0) {
        puVar2 = puStack_50;
        func_0x000108896aac();
        func_0x000108890eb8();
        if (puVar2 == puStack_60) {
          puStack_48 = puStack_50;
        }
        else {
          puVar1 = param_1;
          FUN_108896a84(param_1,puVar2);
          if (*puVar1 == 0) {
            puVar1 = param_1;
            FUN_108896a84(param_1,puVar2);
            *puVar1 = (ulong)puStack_48;
            puStack_48 = puStack_50;
            puStack_60 = puVar2;
          }
          else {
            *puStack_48 = *puStack_50;
            puVar1 = param_1;
            FUN_108896a84(param_1,puVar2);
            *puStack_50 = *(ulong *)*puVar1;
            puVar1 = param_1;
            FUN_108896a84(param_1,puVar2);
            *(ulong **)*puVar1 = puStack_50;
          }
        }
        puStack_50 = (ulong *)*puStack_48;
      }
    }
  }
  return;
}



/* Entry: 108897694; end: 1088976ab;  */

long FUN_108897694(long param_1)

{
  return param_1 + 8;
}



/* Entry: 1088976ac; end: 10889771f;  */

void FUN_1088976ac(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    FUN_108896350(param_1 + 1,lVar1);
  }
  return;
}



/* Entry: 108897720; end: 108897767;  */

void FUN_108897720(ulong param_1,ulong param_2)

{
  FUN_108897768();
  if (param_1 < param_2) {
    func_0x000104bd35f4();
  }
  func_0x000108897790(param_2);
  return;
}



/* Entry: 108897768; end: 1088977c7;  */

ulong FUN_108897768(ulong param_1)

{
  FUN_10888fbcc();
  return param_1 >> 3;
}



/* Entry: 1088977c8; end: 1088977fb;  */

undefined8 FUN_1088977c8(undefined8 param_1)

{
  FUN_1088977fc(param_1);
  return param_1;
}



/* Entry: 1088977fc; end: 108897843;  */

void FUN_1088977fc(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    FUN_108897844(param_1 + 1,lVar1);
  }
  return;
}



/* Entry: 108897844; end: 1088978b7;  */

void FUN_108897844(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    uVar2 = *param_1;
    lVar1 = param_2;
    func_0x000108896104(param_2);
    func_0x0001088960f0();
    func_0x0001088960c8(uVar2,lVar1);
    FUN_10889611c(param_2);
  }
  if (param_2 != 0) {
    func_0x000108896140(*param_1,param_2);
  }
  return;
}



/* Entry: 1088978b8; end: 1088978d7;  */

void FUN_1088978b8(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}



/* Entry: 1088978d8; end: 10889790f;  */

void FUN_1088978d8(undefined8 *param_1,undefined8 *param_2,byte *param_3)

{
  *param_1 = *param_2;
  *(byte *)(param_1 + 1) = *param_3 & 1;
  return;
}



/* Entry: 108897910; end: 1088979ff;  */

undefined8 FUN_108897910(undefined8 param_1,undefined8 param_2)

{
  func_0x00010889794c(param_1,param_2);
  return param_1;
}



/* Entry: 108897a00; end: 108897a33;  */

void FUN_108897a00(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}



/* Entry: 108897a34; end: 108897aab;  */

undefined8 FUN_108897a34(undefined8 param_1,undefined8 param_2)

{
  FUN_108897aac(param_1,param_2);
  return param_1;
}



/* Entry: 108897aac; end: 108897aef;  */

void FUN_108897aac(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}



/* Entry: 108897af0; end: 108897b13;  */

void FUN_108897af0(undefined8 param_1)

{
  FUN_108896628(param_1);
  return;
}



/* Entry: 108897b14; end: 108897b5b;  */

undefined8 FUN_108897b14(undefined8 param_1)

{
  undefined1 auStack_38 [16];
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  FUN_108897b5c(auStack_38);
  FUN_10888ddfc(param_1,auStack_38);
  func_0x00010888de58(auStack_38);
  return param_1;
}



/* Entry: 108897b5c; end: 108897bdb;  */

void FUN_108897b5c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [8];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0xd0;
  uStack_28 = param_1;
  __Znwm();
  FUN_108897bdc(uVar1);
  uStack_30 = uVar1;
  func_0x00010888de8c(auStack_38,uVar1);
  func_0x00010888dec8(auStack_48,uStack_30);
  func_0x00010888df04(param_1,auStack_38,auStack_48);
  func_0x000107c27f98(auStack_48);
  func_0x000107c27f9c(auStack_38);
  return;
}



/* Entry: 108897bdc; end: 108897e4f;  */

undefined8 FUN_108897bdc(undefined8 param_1)

{
  func_0x000108897c20(param_1,0x200000006);
  return param_1;
}



/* Entry: 108897e50; end: 108897e6b;  */

void FUN_108897e50(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x30] = 0;
  return;
}



/* Entry: 108897e6c; end: 108898027;  */

undefined8 * FUN_108897e6c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a802b0;
  func_0x000108897ebc(param_1 + 0x13);
  func_0x000107c31514(param_1);
  return param_1;
}



/* Entry: 108898028; end: 10889805b;  */

long FUN_108898028(long param_1)

{
  if ((*(byte *)(param_1 + 0x30) & 1) != 0) {
    func_0x0001088895a0();
  }
  return param_1;
}



/* Entry: 10889805c; end: 10889816b;  */

undefined8 FUN_10889805c(undefined8 param_1)

{
  func_0x000108898090(param_1);
  return param_1;
}



/* Entry: 10889816c; end: 1088981af;  */

void FUN_10889816c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    FUN_1088934ec(param_1 + 1,lVar1);
  }
  return;
}



/* Entry: 1088981b0; end: 108898487;  */

undefined8 FUN_1088981b0(undefined8 param_1)

{
  func_0x0001088981e4(param_1);
  return param_1;
}



/* Entry: 108898488; end: 1088984b3;  */

undefined8 FUN_108898488(undefined8 param_1)

{
  return param_1;
}



/* Entry: 1088984b4; end: 1088984e7;  */

undefined8 FUN_1088984b4(undefined8 param_1)

{
  FUN_1088984e8(param_1);
  return param_1;
}



/* Entry: 1088984e8; end: 108898523;  */

undefined8 FUN_1088984e8(undefined8 param_1)

{
  return param_1;
}



/* Entry: 108898524; end: 1088985d3;  */

void FUN_108898524(long param_1,undefined8 param_2,undefined8 param_3)

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
      FUN_1088985d4(lStack_48 + 0x98,uStack_40);
      FUN_10889861c(param_1 + 0x10,2,3);
      func_0x000107c31508(param_1,uStack_38);
      return;
    }
  } while (((uint)uStack_50 >> 1 & 1) == 0);
  return;
}



/* Entry: 1088985d4; end: 10889861b;  */

void FUN_1088985d4(undefined8 param_1,undefined8 param_2)

{
  FUN_108898650(param_1);
  func_0x00010889868c(param_1,param_2);
  FUN_108892194(param_1);
  return;
}



/* Entry: 10889861c; end: 10889864f;  */

void FUN_10889861c(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_1088987ac(param_1,param_2,param_3);
  return;
}



/* Entry: 108898650; end: 1088986cb;  */

void FUN_108898650(long param_1)

{
  if ((*(byte *)(param_1 + 0x30) & 1) != 0) {
    func_0x0001088895a0(param_1);
    *(undefined1 *)(param_1 + 0x30) = 0;
  }
  return;
}



/* Entry: 1088986cc; end: 108898723;  */

void FUN_1088986cc(undefined8 param_1,undefined8 param_2)

{
  func_0x0001088986f8(param_1,param_2);
  return;
}



/* Entry: 108898724; end: 1088987ab;  */

undefined8 FUN_108898724(undefined8 param_1,undefined8 param_2)

{
  func_0x000108898760(param_1,param_2);
  return param_1;
}



/* Entry: 1088987ac; end: 10889880b;  */

void FUN_1088987ac(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 3) {
    *param_1 = param_2;
  }
  else if (param_3 == 5) {
    *param_1 = param_2;
  }
  else {
    *param_1 = param_2;
  }
  return;
}



/* Entry: 10889880c; end: 108898a6b;  */

undefined8 FUN_10889880c(undefined8 param_1)

{
  func_0x000108898840(param_1);
  return param_1;
}



/* Entry: 108898a6c; end: 108898a97;  */

undefined8 FUN_108898a6c(undefined8 param_1)

{
  return param_1;
}



/* Entry: 108898a98; end: 108898acb;  */

undefined8 FUN_108898a98(undefined8 param_1)

{
  FUN_108898acc(param_1);
  return param_1;
}



/* Entry: 108898acc; end: 108898adf;  */

undefined8 FUN_108898acc(undefined8 param_1)

{
  return param_1;
}



/* Entry: 108898ae0; end: 108898b67;  */

void FUN_108898ae0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined7 uStack_2f;
  undefined1 uStack_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_108898ba4(param_1,param_2,param_2,param_3);
  uStack_20 = (undefined1)param_2;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 - lVar1 != 0) {
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_11034bdc0 - lVar1,param_1,
                      CONCAT71(uStack_2f,uStack_20));
  }
  return;
}



/* Entry: 108898b68; end: 108898ba3;  */

undefined8 FUN_108898b68(undefined8 param_1,undefined8 param_2)

{
  FUN_108899750(param_1,param_2);
  return param_1;
}



/* Entry: 108898ba4; end: 108898f0b;  */

undefined1  [16]
FUN_108898ba4(float *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  unkuint9 Var1;
  bool bVar2;
  float *pfVar3;
  float *pfVar4;
  ulong *puVar5;
  undefined8 uVar6;
  long lVar7;
  float fVar8;
  undefined1 auStack_d0 [8];
  float *pfStack_c8;
  long lStack_b0;
  ulong uStack_a8;
  float afStack_a0 [6];
  float *pfStack_88;
  float *pfStack_80;
  undefined1 uStack_71;
  float *pfStack_70;
  float *pfStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  float *pfStack_48;
  undefined1 auStack_40 [16];
  
  pfVar3 = param_1;
  uStack_60 = param_4;
  uStack_58 = param_3;
  uStack_50 = param_2;
  pfStack_48 = param_1;
  func_0x000108892378();
  FUN_108898f0c();
  pfVar4 = param_1;
  pfStack_68 = pfVar3;
  FUN_1088925c8();
  uStack_71 = 0;
  pfStack_70 = pfVar4;
  if (pfVar4 != (float *)0x0) {
    pfVar3 = pfStack_68;
    func_0x000108890eb8(pfStack_68,pfVar4);
    pfVar4 = param_1;
    pfStack_88 = pfVar3;
    func_0x00010889297c(param_1,pfVar3);
    pfStack_80 = *(float **)pfVar4;
    if (pfStack_80 != (float *)0x0) {
      pfStack_80 = *(float **)pfStack_80;
      do {
        bVar2 = false;
        if (pfStack_80 != (float *)0x0) {
          pfVar3 = pfStack_80;
          FUN_108892e20();
          bVar2 = true;
          if (pfVar3 != pfStack_68) {
            pfVar3 = pfStack_80;
            FUN_108892e20();
            func_0x000108890eb8();
            bVar2 = pfVar3 == pfStack_88;
          }
        }
        if (!bVar2) break;
        pfVar3 = pfStack_80;
        FUN_108892e20();
        if (pfVar3 == pfStack_68) {
          pfVar3 = param_1;
          func_0x0001088923a8();
          pfVar4 = pfStack_80;
          func_0x0001088926f0(pfStack_80);
          FUN_108892714();
          func_0x000108898f3c(pfVar3,pfVar4,uStack_50);
          if (((ulong)pfVar3 & 1) != 0) goto LAB_108898ecc;
        }
        pfStack_80 = *(float **)pfStack_80;
      } while( true );
    }
  }
  FUN_108898f74(afStack_a0,param_1,pfStack_68,uStack_58,uStack_60);
  pfVar3 = param_1;
  func_0x0001088929a4();
  lVar7 = *(long *)pfVar3;
  Var1 = ZEXT89(pfStack_70);
  pfVar4 = param_1;
  func_0x0001088923d8();
  pfVar3 = pfStack_70;
  if (((float)(unkint9)Var1 * *pfVar4 < (float)(lVar7 + 1)) || (pfStack_70 == (float *)0x0)) {
    pfVar4 = pfStack_70;
    FUN_108892ac0();
    uStack_a8 = (ulong)((uint)pfVar4 ^ 1) | (long)pfVar3 << 1;
    pfVar3 = param_1;
    func_0x0001088929a4();
    lVar7 = *(long *)pfVar3;
    pfVar3 = param_1;
    func_0x0001088923d8();
    fVar8 = (float)(lVar7 + 1) / *pfVar3;
    func_0x000108892b00();
    lStack_b0 = (long)fVar8;
    puVar5 = &uStack_a8;
    FUN_108891270(puVar5,&lStack_b0);
    FUN_10889907c(param_1,*puVar5);
    pfVar3 = param_1;
    FUN_1088925c8();
    pfVar4 = pfStack_68;
    pfStack_70 = pfVar3;
    func_0x000108890eb8(pfStack_68,pfVar3);
    pfStack_88 = pfVar4;
  }
  pfVar3 = param_1;
  func_0x00010889297c(param_1,pfStack_88);
  pfStack_c8 = *(float **)pfVar3;
  if (pfStack_c8 == (float *)0x0) {
    pfVar3 = param_1 + 4;
    FUN_108892f9c();
    lVar7 = *(long *)pfVar3;
    pfVar4 = afStack_a0;
    pfStack_c8 = pfVar3;
    FUN_108893bc0();
    *(long *)pfVar4 = lVar7;
    pfVar3 = afStack_a0;
    FUN_108893a18();
    FUN_108892f9c();
    pfVar4 = pfStack_c8;
    *(float **)pfStack_c8 = pfVar3;
    pfVar3 = param_1;
    func_0x00010889297c(param_1,pfStack_88);
    *(float **)pfVar3 = pfVar4;
    pfVar3 = afStack_a0;
    FUN_108893bc0();
    if (*(long *)pfVar3 != 0) {
      pfVar3 = afStack_a0;
      FUN_108893a18();
      FUN_108892f9c();
      pfVar4 = afStack_a0;
      FUN_108893bc0();
      uVar6 = *(undefined8 *)pfVar4;
      FUN_108892e20(uVar6);
      func_0x000108890eb8();
      pfVar4 = param_1;
      func_0x00010889297c(param_1,uVar6);
      *(float **)pfVar4 = pfVar3;
    }
  }
  else {
    lVar7 = *(long *)pfStack_c8;
    pfVar3 = afStack_a0;
    FUN_108893bc0();
    *(long *)pfVar3 = lVar7;
    pfVar3 = afStack_a0;
    FUN_108893a18();
    *(float **)pfStack_c8 = pfVar3;
  }
  pfVar3 = afStack_a0;
  func_0x000108893a30();
  pfStack_80 = pfVar3;
  func_0x0001088929a4();
  *(long *)param_1 = *(long *)param_1 + 1;
  uStack_71 = 1;
  FUN_108893a54(afStack_a0);
LAB_108898ecc:
  FUN_108892fc0(auStack_d0,pfStack_80);
  FUN_1088990a8(auStack_40,auStack_d0,&uStack_71);
  return auStack_40;
}



/* Entry: 108898f0c; end: 108898f73;  */

void FUN_108898f0c(undefined8 param_1,undefined8 *param_2)

{
  FUN_108892ffc(param_1,*param_2);
  return;
}



/* Entry: 108898f74; end: 10889907b;  */

/* WARNING: Removing unreachable block (ram,0x000108899044) */

void FUN_108898f74(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_68 [23];
  undefined1 uStack_51;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  uStack_48 = param_5;
  uStack_40 = param_4;
  uStack_38 = param_3;
  uStack_30 = param_2;
  lStack_28 = param_1;
  func_0x0001088936e4();
  uStack_51 = 0;
  uStack_50 = param_2;
  FUN_108893a88(param_2);
  FUN_108893ab8(auStack_68,uStack_50);
  func_0x000108893b00(param_1,param_2,auStack_68);
  FUN_108893b78(param_1);
  FUN_1088990ec();
  uVar1 = uStack_50;
  lVar2 = param_1;
  FUN_108893bc0(param_1);
  FUN_108892714();
  FUN_108893724();
  func_0x000108899120(uVar1,lVar2,uStack_40,uStack_48);
  func_0x000108893bd8();
  *(undefined1 *)(param_1 + 8) = 1;
  return;
}



/* Entry: 10889907c; end: 1088990a7;  */

void FUN_10889907c(undefined8 param_1,undefined8 param_2)

{
  FUN_1088993c4(param_1,param_2);
  return;
}



/* Entry: 1088990a8; end: 1088990eb;  */

undefined8 FUN_1088990a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_108899718(param_1,param_2,param_3);
  return param_1;
}



/* Entry: 1088990ec; end: 1088991f3;  */

void FUN_1088990ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000108899158(param_1,param_2,param_3);
  return;
}



/* Entry: 1088991f4; end: 1088993c3;  */

undefined8 FUN_1088991f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000108899238(param_1,param_2,param_3);
  return param_1;
}



/* Entry: 1088993c4; end: 108899513;  */

void FUN_1088993c4(float *param_1,float *param_2)

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
  FUN_1088925c8();
  pfStack_48 = pfVar1;
  if (pfVar1 < pfStack_40) {
    FUN_108899514(param_1,pfStack_40);
  }
  else if (pfStack_40 < pfVar1) {
    FUN_108892ac0();
    if (((ulong)pfVar1 & 1) == 0) {
      pfVar1 = param_1;
      func_0x0001088929a4();
      uVar4 = *(ulong *)pfVar1;
      pfVar1 = param_1;
      func_0x0001088923d8();
      fVar5 = (float)uVar4 / *pfVar1;
      func_0x000108892b00();
      lVar2 = (long)fVar5;
      __ZNSt3__112__next_primeEm();
    }
    else {
      pfVar1 = param_1;
      func_0x0001088929a4();
      uVar4 = *(ulong *)pfVar1;
      pfVar1 = param_1;
      func_0x0001088923d8();
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
      FUN_108899514(param_1,pfStack_40);
    }
  }
  return;
}



/* Entry: 108899514; end: 108899717;  */

void FUN_108899514(ulong *param_1,ulong param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puStack_60;
  ulong *puStack_50;
  ulong *puStack_48;
  ulong uStack_40;
  
  puVar2 = param_1;
  FUN_108893438();
  func_0x000108893450();
  if (param_2 == 0) {
    puVar2 = (ulong *)0x0;
  }
  else {
    func_0x0001088934ac(puVar2,param_2);
  }
  func_0x000108893464(param_1,puVar2);
  puVar2 = param_1;
  FUN_108893438();
  FUN_1088934d8();
  *puVar2 = param_2;
  if (param_2 != 0) {
    for (uStack_40 = 0; uStack_40 < param_2; uStack_40 = uStack_40 + 1) {
      puVar2 = param_1;
      func_0x00010889297c(param_1,uStack_40);
      *puVar2 = 0;
    }
    puVar2 = param_1 + 2;
    FUN_108892f9c();
    puStack_48 = (ulong *)*puVar2;
    if (puStack_48 != (ulong *)0x0) {
      puStack_60 = puStack_48;
      FUN_108892e20();
      func_0x000108890eb8();
      puVar1 = param_1;
      func_0x00010889297c(param_1,puStack_60);
      *puVar1 = (ulong)puVar2;
      puStack_50 = (ulong *)*puStack_48;
      while (puStack_50 != (ulong *)0x0) {
        puVar2 = puStack_50;
        FUN_108892e20();
        func_0x000108890eb8();
        if (puVar2 == puStack_60) {
          puStack_48 = puStack_50;
        }
        else {
          puVar1 = param_1;
          func_0x00010889297c(param_1,puVar2);
          if (*puVar1 == 0) {
            puVar1 = param_1;
            func_0x00010889297c(param_1,puVar2);
            *puVar1 = (ulong)puStack_48;
            puStack_48 = puStack_50;
            puStack_60 = puVar2;
          }
          else {
            *puStack_48 = *puStack_50;
            puVar1 = param_1;
            func_0x00010889297c(param_1,puVar2);
            *puStack_50 = *(ulong *)*puVar1;
            puVar1 = param_1;
            func_0x00010889297c(param_1,puVar2);
            *(ulong **)*puVar1 = puStack_50;
          }
        }
        puStack_50 = (ulong *)*puStack_48;
      }
    }
  }
  return;
}



/* Entry: 108899718; end: 10889974f;  */

void FUN_108899718(undefined8 *param_1,undefined8 *param_2,byte *param_3)

{
  *param_1 = *param_2;
  *(byte *)(param_1 + 1) = *param_3 & 1;
  return;
}



/* Entry: 108899750; end: 1088997e3;  */

long FUN_108899750(long param_1,undefined8 *param_2)

{
  func_0x0001088997a8(param_1,*param_2);
  *(byte *)(param_1 + 8) = *(byte *)(param_2 + 1) & 1;
  return param_1;
}



/* Entry: 1088997e4; end: 108899803;  */

void FUN_1088997e4(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}



/* Entry: 108899804; end: 10889988b;  */

void FUN_108899804(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined7 uStack_2f;
  undefined1 uStack_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10889988c(param_1,param_2,param_2,param_3);
  uStack_20 = (undefined1)param_2;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 - lVar1 != 0) {
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_11034bdc0 - lVar1,param_1,
                      CONCAT71(uStack_2f,uStack_20));
  }
  return;
}



/* Entry: 10889988c; end: 108899bf3;  */

undefined1  [16]
FUN_10889988c(float *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  unkuint9 Var1;
  bool bVar2;
  float *pfVar3;
  float *pfVar4;
  ulong *puVar5;
  undefined8 uVar6;
  long lVar7;
  float fVar8;
  undefined1 auStack_d0 [8];
  float *pfStack_c8;
  long lStack_b0;
  ulong uStack_a8;
  float afStack_a0 [6];
  float *pfStack_88;
  float *pfStack_80;
  undefined1 uStack_71;
  float *pfStack_70;
  float *pfStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  float *pfStack_48;
  undefined1 auStack_40 [16];
  
  pfVar3 = param_1;
  uStack_60 = param_4;
  uStack_58 = param_3;
  uStack_50 = param_2;
  pfStack_48 = param_1;
  func_0x000108892378();
  FUN_108898f0c();
  pfVar4 = param_1;
  pfStack_68 = pfVar3;
  FUN_1088925c8();
  uStack_71 = 0;
  pfStack_70 = pfVar4;
  if (pfVar4 != (float *)0x0) {
    pfVar3 = pfStack_68;
    func_0x000108890eb8(pfStack_68,pfVar4);
    pfVar4 = param_1;
    pfStack_88 = pfVar3;
    func_0x00010889297c(param_1,pfVar3);
    pfStack_80 = *(float **)pfVar4;
    if (pfStack_80 != (float *)0x0) {
      pfStack_80 = *(float **)pfStack_80;
      do {
        bVar2 = false;
        if (pfStack_80 != (float *)0x0) {
          pfVar3 = pfStack_80;
          FUN_108892e20();
          bVar2 = true;
          if (pfVar3 != pfStack_68) {
            pfVar3 = pfStack_80;
            FUN_108892e20();
            func_0x000108890eb8();
            bVar2 = pfVar3 == pfStack_88;
          }
        }
        if (!bVar2) break;
        pfVar3 = pfStack_80;
        FUN_108892e20();
        if (pfVar3 == pfStack_68) {
          pfVar3 = param_1;
          func_0x0001088923a8();
          pfVar4 = pfStack_80;
          func_0x0001088926f0(pfStack_80);
          FUN_108892714();
          func_0x000108898f3c(pfVar3,pfVar4,uStack_50);
          if (((ulong)pfVar3 & 1) != 0) goto LAB_108899bb4;
        }
        pfStack_80 = *(float **)pfStack_80;
      } while( true );
    }
  }
  FUN_108899bf4(afStack_a0,param_1,pfStack_68,uStack_58,uStack_60);
  pfVar3 = param_1;
  func_0x0001088929a4();
  lVar7 = *(long *)pfVar3;
  Var1 = ZEXT89(pfStack_70);
  pfVar4 = param_1;
  func_0x0001088923d8();
  pfVar3 = pfStack_70;
  if (((float)(unkint9)Var1 * *pfVar4 < (float)(lVar7 + 1)) || (pfStack_70 == (float *)0x0)) {
    pfVar4 = pfStack_70;
    FUN_108892ac0();
    uStack_a8 = (ulong)((uint)pfVar4 ^ 1) | (long)pfVar3 << 1;
    pfVar3 = param_1;
    func_0x0001088929a4();
    lVar7 = *(long *)pfVar3;
    pfVar3 = param_1;
    func_0x0001088923d8();
    fVar8 = (float)(lVar7 + 1) / *pfVar3;
    func_0x000108892b00();
    lStack_b0 = (long)fVar8;
    puVar5 = &uStack_a8;
    FUN_108891270(puVar5,&lStack_b0);
    FUN_10889907c(param_1,*puVar5);
    pfVar3 = param_1;
    FUN_1088925c8();
    pfVar4 = pfStack_68;
    pfStack_70 = pfVar3;
    func_0x000108890eb8(pfStack_68,pfVar3);
    pfStack_88 = pfVar4;
  }
  pfVar3 = param_1;
  func_0x00010889297c(param_1,pfStack_88);
  pfStack_c8 = *(float **)pfVar3;
  if (pfStack_c8 == (float *)0x0) {
    pfVar3 = param_1 + 4;
    FUN_108892f9c();
    lVar7 = *(long *)pfVar3;
    pfVar4 = afStack_a0;
    pfStack_c8 = pfVar3;
    FUN_108893bc0();
    *(long *)pfVar4 = lVar7;
    pfVar3 = afStack_a0;
    FUN_108893a18();
    FUN_108892f9c();
    pfVar4 = pfStack_c8;
    *(float **)pfStack_c8 = pfVar3;
    pfVar3 = param_1;
    func_0x00010889297c(param_1,pfStack_88);
    *(float **)pfVar3 = pfVar4;
    pfVar3 = afStack_a0;
    FUN_108893bc0();
    if (*(long *)pfVar3 != 0) {
      pfVar3 = afStack_a0;
      FUN_108893a18();
      FUN_108892f9c();
      pfVar4 = afStack_a0;
      FUN_108893bc0();
      uVar6 = *(undefined8 *)pfVar4;
      FUN_108892e20(uVar6);
      func_0x000108890eb8();
      pfVar4 = param_1;
      func_0x00010889297c(param_1,uVar6);
      *(float **)pfVar4 = pfVar3;
    }
  }
  else {
    lVar7 = *(long *)pfStack_c8;
    pfVar3 = afStack_a0;
    FUN_108893bc0();
    *(long *)pfVar3 = lVar7;
    pfVar3 = afStack_a0;
    FUN_108893a18();
    *(float **)pfStack_c8 = pfVar3;
  }
  pfVar3 = afStack_a0;
  func_0x000108893a30();
  pfStack_80 = pfVar3;
  func_0x0001088929a4();
  *(long *)param_1 = *(long *)param_1 + 1;
  uStack_71 = 1;
  FUN_108893a54(afStack_a0);
LAB_108899bb4:
  FUN_108892fc0(auStack_d0,pfStack_80);
  FUN_1088990a8(auStack_40,auStack_d0,&uStack_71);
  return auStack_40;
}



/* Entry: 108899bf4; end: 108899cfb;  */

/* WARNING: Removing unreachable block (ram,0x000108899cc4) */

void FUN_108899bf4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_68 [23];
  undefined1 uStack_51;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  uStack_48 = param_5;
  uStack_40 = param_4;
  uStack_38 = param_3;
  uStack_30 = param_2;
  lStack_28 = param_1;
  func_0x0001088936e4();
  uStack_51 = 0;
  uStack_50 = param_2;
  FUN_108893a88(param_2);
  FUN_108893ab8(auStack_68,uStack_50);
  func_0x000108893b00(param_1,param_2,auStack_68);
  FUN_108893b78(param_1);
  FUN_1088990ec();
  uVar1 = uStack_50;
  lVar2 = param_1;
  FUN_108893bc0(param_1);
  FUN_108892714();
  FUN_108893724();
  FUN_108899cfc(uVar1,lVar2,uStack_40,uStack_48);
  func_0x000108893bd8();
  *(undefined1 *)(param_1 + 8) = 1;
  return;
}



/* Entry: 108899cfc; end: 108899d9b;  */

void FUN_108899cfc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000108899d34(param_2,param_3,param_4);
  return;
}



/* Entry: 108899d9c; end: 108899e2b;  */

undefined8 FUN_108899d9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000108899de0(param_1,param_2,param_3);
  return param_1;
}



/* Entry: 108899e2c; end: 108899e43;  */

undefined8 FUN_108899e2c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108899e44; end: 108899e8b;  */

ulong FUN_108899e44(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_108896558();
  if ((uVar1 & 1) == 0) {
    FUN_1088965a4(param_1);
    param_1 = param_1 + 8;
  }
  return param_1;
}



/* Entry: 108899e8c; end: 108899ebb;  */

void FUN_108899e8c(long param_1,undefined4 param_2)

{
  undefined4 uStack_1c;
  long lStack_18;
  
  uStack_1c = param_2;
  lStack_18 = param_1;
  FUN_108899ebc(param_1 + 8,&uStack_1c);
  return;
}



/* Entry: 108899ebc; end: 108899eef;  */

undefined4 FUN_108899ebc(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  return uVar1;
}



/* Entry: 108899ef0; end: 108899f13;  */

bool FUN_108899ef0(long param_1)

{
  return *(int *)(param_1 + 8) == 0;
}



/* Entry: 108899f14; end: 108899fab;  */

undefined8 FUN_108899f14(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_108899fac(param_1,param_2);
  uVar1 = param_2;
  FUN_108899fe8(param_2);
  FUN_10889907c(param_1,uVar1);
  uVar1 = param_2;
  FUN_10889a078();
  func_0x00010888d6c8();
  FUN_10889a00c(param_1,uVar1,param_2);
  return param_1;
}



/* Entry: 108899fac; end: 108899fe7;  */

undefined8 FUN_108899fac(undefined8 param_1,undefined8 param_2)

{
  FUN_10889a0b0(param_1,param_2);
  return param_1;
}



/* Entry: 108899fe8; end: 10889a00b;  */

void FUN_108899fe8(undefined8 param_1)

{
  FUN_1088925c8(param_1);
  return;
}



/* Entry: 10889a00c; end: 10889a077;  */

void FUN_10889a00c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = param_3;
  uStack_28 = param_2;
  while( true ) {
    puVar1 = &uStack_28;
    func_0x00010888d698(puVar1,&uStack_30);
    if ((((uint)puVar1 ^ 1) & 1) == 0) break;
    func_0x00010889a370();
    func_0x00010889a2f4();
    func_0x00010889a394(&uStack_28);
  }
  return;
}



/* Entry: 10889a078; end: 10889a0af;  */

undefined8 FUN_10889a078(undefined8 param_1)

{
  undefined8 uStack_18;
  
  FUN_108892558();
  FUN_10889a898(&uStack_18,param_1);
  return uStack_18;
}



/* Entry: 10889a0b0; end: 10889a133;  */

long FUN_10889a0b0(long param_1,long param_2)

{
  undefined1 uStack_39;
  undefined1 auStack_38 [8];
  long lStack_30;
  long lStack_28;
  
  lStack_30 = param_2;
  lStack_28 = param_1;
  func_0x00010889294c(param_2);
  func_0x00010889a144();
  func_0x00010889a134();
  FUN_10889a158(auStack_38,&uStack_39);
  func_0x00010889a19c(param_1,auStack_38);
  func_0x0001088982ac(param_1 + 0x10);
  func_0x00010889a1f0(lStack_30);
  func_0x00010889a1e0();
  *(undefined8 *)(param_1 + 0x18) = 0;
  FUN_108892360(lStack_30);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(lStack_30 + 0x20);
  return param_1;
}



/* Entry: 10889a134; end: 10889a157;  */

void FUN_10889a134(void)

{
  return;
}



/* Entry: 10889a158; end: 10889a1df;  */

undefined8 FUN_10889a158(undefined8 param_1,undefined8 param_2)

{
  FUN_10889a208(param_1,param_2,0);
  return param_1;
}



/* Entry: 10889a1e0; end: 10889a207;  */

void FUN_10889a1e0(void)

{
  return;
}



/* Entry: 10889a208; end: 10889a22b;  */

void FUN_10889a208(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = param_3;
  return;
}



/* Entry: 10889a22c; end: 10889a2f3;  */

undefined8 * FUN_10889a22c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = 0;
  func_0x00010889a270(param_1 + 1,param_3);
  return param_1;
}



/* Entry: 10889a2f4; end: 10889a437;  */

void FUN_10889a2f4(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  undefined7 uStack_2f;
  
  lVar1 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010889a3b8();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 - lVar1 != 0) {
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_11034bdc0 - lVar1,param_1,
                      CONCAT71(uStack_2f,param_2));
  }
  return;
}



/* Entry: 10889a438; end: 10889a797;  */

undefined1  [16] FUN_10889a438(float *param_1,undefined8 param_2,undefined8 param_3)

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
  func_0x000108892378();
  FUN_108898f0c();
  pfVar4 = param_1;
  pfStack_60 = pfVar3;
  FUN_1088925c8();
  uStack_69 = 0;
  pfStack_68 = pfVar4;
  if (pfVar4 != (float *)0x0) {
    pfVar3 = pfStack_60;
    func_0x000108890eb8(pfStack_60,pfVar4);
    pfVar4 = param_1;
    pfStack_80 = pfVar3;
    func_0x00010889297c(param_1,pfVar3);
    pfStack_78 = *(float **)pfVar4;
    if (pfStack_78 != (float *)0x0) {
      pfStack_78 = *(float **)pfStack_78;
      do {
        bVar2 = false;
        if (pfStack_78 != (float *)0x0) {
          pfVar3 = pfStack_78;
          FUN_108892e20();
          bVar2 = true;
          if (pfVar3 != pfStack_60) {
            pfVar3 = pfStack_78;
            FUN_108892e20();
            func_0x000108890eb8();
            bVar2 = pfVar3 == pfStack_80;
          }
        }
        if (!bVar2) break;
        pfVar3 = pfStack_78;
        FUN_108892e20();
        if (pfVar3 == pfStack_60) {
          pfVar3 = param_1;
          func_0x0001088923a8();
          pfVar4 = pfStack_78;
          func_0x0001088926f0(pfStack_78);
          FUN_108892714();
          func_0x000108898f3c(pfVar3,pfVar4,uStack_50);
          if (((ulong)pfVar3 & 1) != 0) goto LAB_10889a758;
        }
        pfStack_78 = *(float **)pfStack_78;
      } while( true );
    }
  }
  FUN_10889a798(afStack_98,param_1,pfStack_60,uStack_58);
  pfVar3 = param_1;
  func_0x0001088929a4();
  lVar7 = *(long *)pfVar3;
  Var1 = ZEXT89(pfStack_68);
  pfVar4 = param_1;
  func_0x0001088923d8();
  pfVar3 = pfStack_68;
  if (((float)(unkint9)Var1 * *pfVar4 < (float)(lVar7 + 1)) || (pfStack_68 == (float *)0x0)) {
    pfVar4 = pfStack_68;
    FUN_108892ac0();
    uStack_a0 = (ulong)((uint)pfVar4 ^ 1) | (long)pfVar3 << 1;
    pfVar3 = param_1;
    func_0x0001088929a4();
    lVar7 = *(long *)pfVar3;
    pfVar3 = param_1;
    func_0x0001088923d8();
    fVar8 = (float)(lVar7 + 1) / *pfVar3;
    func_0x000108892b00();
    lStack_a8 = (long)fVar8;
    puVar5 = &uStack_a0;
    FUN_108891270(puVar5,&lStack_a8);
    FUN_10889907c(param_1,*puVar5);
    pfVar3 = param_1;
    FUN_1088925c8();
    pfVar4 = pfStack_60;
    pfStack_68 = pfVar3;
    func_0x000108890eb8(pfStack_60,pfVar3);
    pfStack_80 = pfVar4;
  }
  pfVar3 = param_1;
  func_0x00010889297c(param_1,pfStack_80);
  pfStack_c0 = *(float **)pfVar3;
  if (pfStack_c0 == (float *)0x0) {
    pfVar3 = param_1 + 4;
    FUN_108892f9c();
    lVar7 = *(long *)pfVar3;
    pfVar4 = afStack_98;
    pfStack_c0 = pfVar3;
    FUN_108893bc0();
    *(long *)pfVar4 = lVar7;
    pfVar3 = afStack_98;
    FUN_108893a18();
    FUN_108892f9c();
    pfVar4 = pfStack_c0;
    *(float **)pfStack_c0 = pfVar3;
    pfVar3 = param_1;
    func_0x00010889297c(param_1,pfStack_80);
    *(float **)pfVar3 = pfVar4;
    pfVar3 = afStack_98;
    FUN_108893bc0();
    if (*(long *)pfVar3 != 0) {
      pfVar3 = afStack_98;
      FUN_108893a18();
      FUN_108892f9c();
      pfVar4 = afStack_98;
      FUN_108893bc0();
      uVar6 = *(undefined8 *)pfVar4;
      FUN_108892e20(uVar6);
      func_0x000108890eb8();
      pfVar4 = param_1;
      func_0x00010889297c(param_1,uVar6);
      *(float **)pfVar4 = pfVar3;
    }
  }
  else {
    lVar7 = *(long *)pfStack_c0;
    pfVar3 = afStack_98;
    FUN_108893bc0();
    *(long *)pfVar3 = lVar7;
    pfVar3 = afStack_98;
    FUN_108893a18();
    *(float **)pfStack_c0 = pfVar3;
  }
  pfVar3 = afStack_98;
  func_0x000108893a30();
  pfStack_78 = pfVar3;
  func_0x0001088929a4();
  *(long *)param_1 = *(long *)param_1 + 1;
  uStack_69 = 1;
  FUN_108893a54(afStack_98);
LAB_10889a758:
  FUN_108892fc0(auStack_c8,pfStack_78);
  FUN_1088990a8(auStack_40,auStack_c8,&uStack_69);
  return auStack_40;
}



/* Entry: 10889a798; end: 10889a897;  */

/* WARNING: Removing unreachable block (ram,0x00010889a860) */

void FUN_10889a798(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  func_0x0001088936e4();
  uStack_49 = 0;
  uStack_48 = param_2;
  FUN_108893a88(param_2);
  FUN_108893ab8(auStack_60,uStack_48);
  func_0x000108893b00(param_1,param_2,auStack_60);
  FUN_108893b78(param_1);
  FUN_1088990ec();
  uVar1 = uStack_48;
  lVar2 = param_1;
  FUN_108893bc0(param_1);
  FUN_108892714();
  FUN_108893724();
  FUN_108893b90(uVar1,lVar2,uStack_40);
  func_0x000108893bd8();
  *(undefined1 *)(param_1 + 8) = 1;
  return;
}



/* Entry: 10889a898; end: 10889a8d3;  */

undefined8 FUN_10889a898(undefined8 param_1,undefined8 param_2)

{
  FUN_10889a8d4(param_1,param_2);
  return param_1;
}



/* Entry: 10889a8d4; end: 10889a90b;  */

void FUN_10889a8d4(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}



/* Entry: 10889a90c; end: 10889a963;  */

long * FUN_10889a90c(long *param_1,long param_2)

{
  FUN_10889a964(param_1,param_2);
  *param_1 = (long)(PTR___ZTVNSt3__119__shared_weak_countE_110346b30 + 0x10);
  param_1[2] = param_2;
  return param_1;
}



/* Entry: 10889a964; end: 10889a997;  */

void FUN_10889a964(long *param_1,long param_2)

{
  *param_1 = (long)(PTR___ZTVNSt3__114__shared_countE_110346b18 + 0x10);
  param_1[1] = param_2;
  return;
}



/* Entry: 10889a998; end: 10889a9d3;  */

undefined8 FUN_10889a998(undefined8 param_1,undefined8 param_2)

{
  FUN_10889a9d4(param_1,param_2);
  return param_1;
}



/* Entry: 10889a9d4; end: 10889aa17;  */

long * FUN_10889a9d4(long *param_1,long param_2)

{
  *param_1 = param_2;
  if (*param_1 != 0) {
    func_0x000107c2a1e0(param_1,*param_1);
  }
  return param_1;
}



/* Entry: 10889aa18; end: 10889aa8f;  */

undefined8 FUN_10889aa18(undefined8 param_1,undefined8 param_2)

{
  FUN_10889aa90(param_1,param_2);
  return param_1;
}



/* Entry: 10889aa90; end: 10889ab1f;  */

long * FUN_10889aa90(long *param_1,long param_2)

{
  *param_1 = param_2;
  if (*param_1 != 0) {
    FUN_10888e378(param_1,*param_1);
  }
  return param_1;
}



/* Entry: 10889ab20; end: 10889ac0f;  */

undefined8 FUN_10889ab20(undefined8 param_1,undefined8 param_2)

{
  func_0x00010888e0d4(param_1,param_2);
  return param_1;
}



/* Entry: 10889ac10; end: 10889ac63;  */

undefined8 * FUN_10889ac10(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  if (param_1[1] != 0) {
    func_0x000107c2a21c(param_1[1]);
  }
  return param_1;
}



/* Entry: 10889ac64; end: 10889ad53;  */

undefined8 FUN_10889ac64(undefined8 param_1,undefined8 param_2)

{
  func_0x00010889aca0(param_1,param_2);
  return param_1;
}



/* Entry: 10889ad54; end: 10889ae23;  */

long * FUN_10889ad54(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  FUN_10889ae24(param_1,param_2);
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  plVar1 = param_1;
  func_0x0001088929a4();
  if (*plVar1 != 0) {
    plVar1 = param_1 + 2;
    FUN_108892f9c();
    lVar2 = param_1[2];
    FUN_108892e20(lVar2);
    plVar3 = param_1;
    FUN_1088925c8(param_1);
    func_0x000108890eb8(lVar2,plVar3);
    plVar3 = param_1;
    func_0x00010889297c(param_1,lVar2);
    *plVar3 = (long)plVar1;
    param_2[2] = 0;
    func_0x0001088929a4();
    *param_2 = 0;
  }
  return param_1;
}



/* Entry: 10889ae24; end: 10889aeb3;  */

undefined8 FUN_10889ae24(undefined8 param_1,undefined8 param_2)

{
  func_0x00010889ae60(param_1,param_2);
  return param_1;
}



/* Entry: 10889aeb4; end: 10889aed7;  */

undefined8 FUN_10889aeb4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = 0;
  return uVar1;
}



/* Entry: 10889aed8; end: 10889afc7;  */

undefined8 FUN_10889aed8(undefined8 param_1,undefined8 param_2)

{
  func_0x00010889af14(param_1,param_2);
  return param_1;
}



/* Entry: 10889afc8; end: 10889b00b;  */

void FUN_10889afc8(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}



/* Entry: 10889b00c; end: 10889b06f;  */

void FUN_10889b00c(undefined8 param_1)

{
  FUN_108896628(param_1);
  return;
}



/* Entry: 10889b070; end: 10889b0e7;  */

undefined8 FUN_10889b070(undefined8 param_1,undefined8 param_2)

{
  FUN_10889b0e8(param_1,param_2);
  return param_1;
}



/* Entry: 10889b0e8; end: 10889b12b;  */

void FUN_10889b0e8(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}



/* Entry: 10889b12c; end: 10889b18b;  */

undefined8 FUN_10889b12c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [8];
  long lStack_30;
  undefined8 uStack_28;
  
  lVar1 = param_1;
  lStack_30 = param_1;
  func_0x000108896474(param_1);
  FUN_10889b18c(param_1);
  FUN_10889b070(auStack_38,lVar1 + (long)(int)param_1 * 8);
  func_0x00010889b0ac(&uStack_28,auStack_38);
  return uStack_28;
}



/* Entry: 10889b18c; end: 10889b1af;  */

void FUN_10889b18c(undefined8 param_1)

{
  FUN_108896628(param_1);
  return;
}


