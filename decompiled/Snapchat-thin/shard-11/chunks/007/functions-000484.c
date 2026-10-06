/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108891cbc; end: 108891d1b;  */

bool FUN_108891cbc(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 108891d1c; end: 108891d47;  */

void FUN_108891d1c(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c278c4(param_1,param_2);
  return;
}



/* Entry: 108891d48; end: 108891d5f;  */

long FUN_108891d48(long param_1)

{
  return param_1 + 0x20;
}



/* Entry: 108891d60; end: 108891dbb;  */

uint FUN_108891d60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c28238(param_1,param_2,param_3);
  return (uint)param_1 & 1;
}



/* Entry: 108891dbc; end: 108891dd3;  */

long FUN_108891dbc(long param_1)

{
  return param_1 + 0x10;
}



/* Entry: 108891dd4; end: 108891e0f;  */

undefined8 FUN_108891dd4(undefined8 param_1,undefined8 param_2)

{
  FUN_108891e10(param_1,param_2);
  return param_1;
}



/* Entry: 108891e10; end: 108891e47;  */

void FUN_108891e10(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}



/* Entry: 108891e48; end: 108891e6b;  */

void FUN_108891e48(undefined8 param_1)

{
  func_0x000108891e84(param_1);
  return;
}



/* Entry: 108891e6c; end: 108891e97;  */

long FUN_108891e6c(long param_1)

{
  return param_1 + 0x10;
}



/* Entry: 108891e98; end: 108891ecb;  */

undefined8 FUN_108891e98(undefined8 param_1)

{
  FUN_108891ecc(param_1);
  return param_1;
}



/* Entry: 108891ecc; end: 108891efb;  */

void FUN_108891ecc(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 108891efc; end: 108891f37;  */

undefined8 FUN_108891efc(undefined8 param_1,undefined8 param_2)

{
  FUN_108891f38(param_1,param_2);
  return param_1;
}



/* Entry: 108891f38; end: 108891f73;  */

void FUN_108891f38(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Entry: 108891f74; end: 1088920ab;  */

undefined8 FUN_108891f74(undefined8 param_1)

{
  func_0x000108891fa8(param_1);
  return param_1;
}



/* Entry: 1088920ac; end: 1088920c7;  */

void FUN_1088920ac(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x1d0] = 0;
  return;
}



/* Entry: 1088920c8; end: 10889213f;  */

undefined8 FUN_1088920c8(undefined8 param_1,undefined8 param_2)

{
  func_0x000108892104(param_1,param_2);
  return param_1;
}



/* Entry: 108892140; end: 108892193;  */

void FUN_108892140(long param_1)

{
  func_0x000108892170(param_1 + 0x98);
  return;
}



/* Entry: 108892194; end: 1088921a7;  */

undefined8 FUN_108892194(undefined8 param_1)

{
  return param_1;
}



/* Entry: 1088921a8; end: 10889225b;  */

undefined8 * FUN_1088921a8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  func_0x00010888a330(param_1 + 1,param_2 + 1);
  return param_1;
}



/* Entry: 10889225c; end: 108892287;  */

void FUN_10889225c(undefined8 param_1,undefined8 param_2)

{
  FUN_108892288(param_1,param_2);
  return;
}



/* Entry: 108892288; end: 108892333;  */

void FUN_108892288(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  if (param_2 != param_3) {
    FUN_108892334(param_2,param_3);
    FUN_108892360(param_3);
    func_0x000108892378(param_2);
    func_0x000108892390(param_3);
    func_0x0001088923a8(param_2);
    func_0x0001088923c0(param_3);
    puVar1 = param_2;
    func_0x0001088923d8();
    *puVar1 = param_1;
    puVar1 = param_3;
    FUN_108892558();
    func_0x000108892588();
    FUN_1088923f0(param_2,puVar1,param_3);
  }
  return;
}



/* Entry: 108892334; end: 10889235f;  */

void FUN_108892334(undefined8 param_1,undefined8 param_2)

{
  FUN_1088925b4(param_1,param_2);
  return;
}



/* Entry: 108892360; end: 1088923ef;  */

long FUN_108892360(long param_1)

{
  return param_1 + 0x18;
}



/* Entry: 1088923f0; end: 108892557;  */

void FUN_1088923f0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puStack_40;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = param_1;
  uStack_30 = param_3;
  uStack_28 = param_2;
  FUN_1088925c8();
  if (puVar1 != (undefined8 *)0x0) {
    puStack_40 = param_1;
    FUN_1088925f0();
    while( true ) {
      puVar1 = (undefined8 *)0x0;
      if (puStack_40 != (undefined8 *)0x0) {
        puVar1 = &uStack_28;
        FUN_108892674(puVar1,&uStack_30);
      }
      if (((ulong)puVar1 & 1) == 0) break;
      puVar1 = puStack_40;
      func_0x0001088926f0(puStack_40);
      FUN_108892714();
      puVar2 = &uStack_28;
      FUN_10889272c(puVar2);
      func_0x0001088926a8(param_1,puVar1,puVar2);
      puVar1 = (undefined8 *)*puStack_40;
      func_0x0001088926f0(puStack_40);
      FUN_108892758(param_1,puStack_40);
      FUN_1088927fc(&uStack_28);
      puStack_40 = puVar1;
    }
    FUN_10889281c(param_1,puStack_40);
  }
  while( true ) {
    puVar1 = &uStack_28;
    FUN_108892674(puVar1,&uStack_30);
    if (((ulong)puVar1 & 1) == 0) break;
    puVar1 = &uStack_28;
    FUN_10889272c(puVar1);
    FUN_108892938();
    FUN_1088928b4(param_1,puVar1);
    FUN_1088927fc(&uStack_28);
  }
  return;
}



/* Entry: 108892558; end: 1088925b3;  */

undefined8 FUN_108892558(long param_1)

{
  undefined8 uStack_18;
  
  FUN_108894038(&uStack_18,*(undefined8 *)(param_1 + 0x10));
  return uStack_18;
}



/* Entry: 1088925b4; end: 1088925c7;  */

void FUN_1088925b4(void)

{
  return;
}



/* Entry: 1088925c8; end: 1088925ef;  */

void FUN_1088925c8(undefined8 param_1)

{
  func_0x00010889294c(param_1);
  func_0x000108892964();
  return;
}



/* Entry: 1088925f0; end: 108892673;  */

undefined8 FUN_1088925f0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puStack_38;
  
  puVar1 = param_1;
  FUN_1088925c8();
  for (puStack_38 = (undefined8 *)0x0; puStack_38 < puVar1;
      puStack_38 = (undefined8 *)((long)puStack_38 + 1)) {
    puVar2 = param_1;
    func_0x00010889297c(param_1,puStack_38);
    *puVar2 = 0;
  }
  puVar1 = param_1;
  func_0x0001088929a4();
  *puVar1 = 0;
  uVar3 = param_1[2];
  param_1[2] = 0;
  return uVar3;
}



/* Entry: 108892674; end: 108892713;  */

uint FUN_108892674(undefined8 param_1,undefined8 param_2)

{
  func_0x0001088929bc(param_1,param_2);
  return ((uint)param_1 ^ 1) & 1;
}



/* Entry: 108892714; end: 10889272b;  */

long FUN_108892714(long param_1)

{
  return param_1 + 0x10;
}



/* Entry: 10889272c; end: 108892757;  */

void FUN_10889272c(undefined8 *param_1)

{
  func_0x0001088926f0(*param_1);
  FUN_108892714();
  return;
}



/* Entry: 108892758; end: 1088927fb;  */

undefined8 FUN_108892758(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000108892378();
  lVar2 = param_2;
  FUN_108892714(param_2);
  FUN_108892bfc(uVar1,lVar2);
  *(undefined8 *)(param_2 + 8) = uVar1;
  lVar2 = param_2;
  FUN_108892e20(param_2);
  lVar3 = param_2;
  FUN_108892714(param_2);
  uVar1 = param_1;
  FUN_108892c2c(param_1,lVar2,lVar3);
  FUN_108892e38(param_1,param_2,uVar1);
  FUN_108892f9c(param_2);
  FUN_108892fc0(&uStack_28,param_2);
  return uStack_28;
}



/* Entry: 1088927fc; end: 10889281b;  */

void FUN_1088927fc(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return;
}



/* Entry: 10889281c; end: 1088928b3;  */

void FUN_10889281c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uStack_30;
  
  func_0x0001088936e4();
  uStack_30 = param_2;
  while (uStack_30 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*uStack_30;
    func_0x0001088926f0();
    puVar1 = uStack_30;
    FUN_108892714(uStack_30);
    FUN_108893724();
    FUN_1088936fc(param_1,puVar1);
    FUN_108893738(uStack_30);
    func_0x00010889375c(param_1,uStack_30);
    uStack_30 = puVar2;
  }
  return;
}



/* Entry: 1088928b4; end: 108892937;  */

undefined8 FUN_1088928b4(undefined8 param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_50 [24];
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = param_2;
  uStack_30 = param_1;
  FUN_1088938d8(auStack_50,param_1,param_2);
  puVar1 = auStack_50;
  FUN_108893a18(puVar1);
  FUN_108892758(param_1,puVar1);
  uStack_28 = param_1;
  func_0x000108893a30(auStack_50);
  FUN_108893a54(auStack_50);
  return uStack_28;
}



/* Entry: 108892938; end: 1088929eb;  */

undefined8 FUN_108892938(undefined8 param_1)

{
  return param_1;
}



/* Entry: 1088929ec; end: 108892a37;  */

void FUN_1088929ec(long param_1,long param_2)

{
  FUN_108892a38(param_1,param_2);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(param_2 + 0x30);
  return;
}



/* Entry: 108892a38; end: 108892abf;  */

void FUN_108892a38(undefined8 param_1,undefined8 param_2)

{
  func_0x00010729c30c(param_1,param_2);
  return;
}



/* Entry: 108892ac0; end: 108892b17;  */

bool FUN_108892ac0(ulong param_1)

{
  return 2 < param_1 && (param_1 & param_1 - 1) == 0;
}



/* Entry: 108892b18; end: 108892b67;  */

ulong FUN_108892b18(ulong param_1)

{
  long lVar1;
  
  if (1 < param_1) {
    lVar1 = param_1 - 1;
    FUN_108892b68(lVar1);
    param_1 = 1L << ((ulong)(0x40 - (int)lVar1) & 0x3f);
  }
  return param_1;
}



/* Entry: 108892b68; end: 108892b8b;  */

undefined4 FUN_108892b68(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0x40;
  if (param_1 != 0) {
    uVar1 = (undefined4)LZCOUNT(param_1);
  }
  return uVar1;
}



/* Entry: 108892b8c; end: 108892bc7;  */

undefined8 FUN_108892b8c(undefined8 param_1,undefined8 param_2)

{
  FUN_108892bc8(param_1,param_2);
  return param_1;
}



/* Entry: 108892bc8; end: 108892bfb;  */

void FUN_108892bc8(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}



/* Entry: 108892bfc; end: 108892c2b;  */

void FUN_108892bfc(undefined8 param_1,undefined8 *param_2)

{
  FUN_108892ffc(param_1,*param_2);
  return;
}



/* Entry: 108892c2c; end: 108892e1f;  */

long * FUN_108892c2c(float *param_1,long param_2,undefined8 param_3)

{
  unkuint9 Var1;
  bool bVar2;
  uint uVar3;
  float *pfVar4;
  float *pfVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  float fVar9;
  byte bStack_81;
  long *plStack_80;
  long lStack_70;
  long lStack_68;
  float *pfStack_60;
  undefined8 uStack_58;
  long lStack_50;
  float *pfStack_48;
  
  pfVar4 = param_1;
  uStack_58 = param_3;
  lStack_50 = param_2;
  pfStack_48 = param_1;
  FUN_1088925c8();
  pfVar5 = param_1;
  pfStack_60 = pfVar4;
  func_0x0001088929a4();
  lVar8 = *(long *)pfVar5;
  Var1 = ZEXT89(pfStack_60);
  pfVar5 = param_1;
  func_0x0001088923d8();
  pfVar4 = pfStack_60;
  if (((float)(unkint9)Var1 * *pfVar5 < (float)(lVar8 + 1)) || (pfStack_60 == (float *)0x0)) {
    pfVar5 = pfStack_60;
    FUN_108892ac0();
    lStack_68 = (ulong)(((uint)pfVar5 ^ 1) & 1) + (long)pfVar4 * 2;
    pfVar4 = param_1;
    func_0x0001088929a4();
    lVar8 = *(long *)pfVar4;
    pfVar4 = param_1;
    func_0x0001088923d8();
    fVar9 = (float)(lVar8 + 1) / *pfVar4;
    func_0x000108892b00();
    lStack_70 = (long)fVar9;
    plVar6 = &lStack_68;
    FUN_108891270(plVar6,&lStack_70);
    FUN_108893014(param_1,*plVar6);
    pfVar4 = param_1;
    FUN_1088925c8();
    pfStack_60 = pfVar4;
  }
  lVar8 = lStack_50;
  func_0x000108890eb8(lStack_50,pfStack_60);
  pfVar4 = param_1;
  func_0x00010889297c(param_1,lVar8);
  plStack_80 = *(long **)pfVar4;
  if (plStack_80 != (long *)0x0) {
    bStack_81 = 0;
    while( true ) {
      bVar2 = false;
      if (*plStack_80 != 0) {
        lVar7 = *plStack_80;
        FUN_108892e20();
        func_0x000108890eb8();
        bVar2 = lVar7 == lVar8;
      }
      if (!bVar2) break;
      lVar7 = *plStack_80;
      FUN_108892e20();
      uVar3 = 0;
      if (lVar7 == lStack_50) {
        pfVar4 = param_1;
        func_0x0001088923a8();
        lVar7 = *plStack_80;
        func_0x0001088926f0(lVar7);
        FUN_108892714();
        func_0x000108893040(pfVar4,lVar7,uStack_58);
        uVar3 = (uint)pfVar4;
      }
      if ((uint)bStack_81 != (uVar3 & 1)) {
        if (bStack_81 != 0) {
          return plStack_80;
        }
        bStack_81 = 1;
      }
      plStack_80 = (long *)*plStack_80;
    }
  }
  return plStack_80;
}



/* Entry: 108892e20; end: 108892e37;  */

undefined8 FUN_108892e20(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108892e38; end: 108892f9b;  */

void FUN_108892e38(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar1 = param_1;
  FUN_1088925c8();
  lVar2 = param_2[1];
  func_0x000108890eb8(lVar2,plVar1);
  if (param_3 == (long *)0x0) {
    plVar1 = param_1 + 2;
    FUN_108892f9c();
    *param_2 = *plVar1;
    plVar3 = param_2;
    FUN_108892f9c();
    *plVar1 = (long)plVar3;
    plVar3 = param_1;
    func_0x00010889297c(param_1,lVar2);
    *plVar3 = (long)plVar1;
    if (*param_2 != 0) {
      plVar1 = param_2;
      FUN_108892f9c();
      lVar2 = *param_2;
      FUN_108892e20(lVar2);
      func_0x000108890eb8();
      plVar3 = param_1;
      func_0x00010889297c(param_1,lVar2);
      *plVar3 = (long)plVar1;
    }
  }
  else {
    *param_2 = *param_3;
    plVar1 = param_2;
    FUN_108892f9c();
    *param_3 = (long)plVar1;
    if (*param_2 != 0) {
      lVar4 = *param_2;
      FUN_108892e20();
      func_0x000108890eb8();
      if (lVar4 != lVar2) {
        FUN_108892f9c();
        plVar1 = param_1;
        func_0x00010889297c(param_1,lVar4);
        *plVar1 = (long)param_2;
      }
    }
  }
  func_0x0001088929a4();
  *param_1 = *param_1 + 1;
  return;
}



/* Entry: 108892f9c; end: 108892fbf;  */

void FUN_108892f9c(undefined8 param_1)

{
  func_0x000108892be8(param_1);
  return;
}



/* Entry: 108892fc0; end: 108892ffb;  */

undefined8 FUN_108892fc0(undefined8 param_1,undefined8 param_2)

{
  FUN_1088936c4(param_1,param_2);
  return param_1;
}



/* Entry: 108892ffc; end: 108893013;  */

undefined8 FUN_108892ffc(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}



/* Entry: 108893014; end: 108893077;  */

void FUN_108893014(undefined8 param_1,undefined8 param_2)

{
  FUN_108893078(param_1,param_2);
  return;
}



/* Entry: 108893078; end: 1088931c7;  */

void FUN_108893078(float *param_1,float *param_2)

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
    FUN_1088931c8(param_1,pfStack_40);
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
      FUN_1088931c8(param_1,pfStack_40);
    }
  }
  return;
}



/* Entry: 1088931c8; end: 108893437;  */

void FUN_1088931c8(ulong *param_1,ulong param_2)

{
  ulong *puVar1;
  long *plVar2;
  ulong *puVar3;
  long *plVar4;
  long lVar5;
  long *plStack_78;
  long *plStack_70;
  long *plStack_60;
  long *plStack_58;
  ulong uStack_50;
  
  puVar3 = param_1;
  FUN_108893438();
  func_0x000108893450();
  if (param_2 == 0) {
    puVar3 = (ulong *)0x0;
  }
  else {
    func_0x0001088934ac(puVar3,param_2);
  }
  func_0x000108893464(param_1,puVar3);
  puVar3 = param_1;
  FUN_108893438();
  FUN_1088934d8();
  *puVar3 = param_2;
  if (param_2 != 0) {
    for (uStack_50 = 0; uStack_50 < param_2; uStack_50 = uStack_50 + 1) {
      puVar3 = param_1;
      func_0x00010889297c(param_1,uStack_50);
      *puVar3 = 0;
    }
    puVar3 = param_1 + 2;
    FUN_108892f9c();
    plStack_58 = (long *)*puVar3;
    if (plStack_58 != (long *)0x0) {
      plStack_70 = plStack_58;
      FUN_108892e20();
      func_0x000108890eb8();
      puVar1 = param_1;
      func_0x00010889297c(param_1,plStack_70);
      *puVar1 = (ulong)puVar3;
      plStack_60 = (long *)*plStack_58;
      while (plStack_60 != (long *)0x0) {
        plVar2 = plStack_60;
        FUN_108892e20();
        func_0x000108890eb8();
        if (plVar2 == plStack_70) {
          plStack_58 = plStack_60;
        }
        else {
          puVar3 = param_1;
          func_0x00010889297c(param_1,plVar2);
          if (*puVar3 == 0) {
            puVar3 = param_1;
            func_0x00010889297c(param_1,plVar2);
            *puVar3 = (ulong)plStack_58;
            plStack_58 = plStack_60;
            plStack_70 = plVar2;
          }
          else {
            plStack_78 = plStack_60;
            while( true ) {
              puVar3 = (ulong *)0x0;
              if (*plStack_78 != 0) {
                puVar3 = param_1;
                func_0x0001088923a8();
                plVar4 = plStack_60;
                func_0x0001088926f0(plStack_60);
                FUN_108892714();
                lVar5 = *plStack_78;
                func_0x0001088926f0(lVar5);
                FUN_108892714();
                func_0x000108893040(puVar3,plVar4,lVar5);
              }
              if (((ulong)puVar3 & 1) == 0) break;
              plStack_78 = (long *)*plStack_78;
            }
            *plStack_58 = *plStack_78;
            puVar3 = param_1;
            func_0x00010889297c(param_1,plVar2);
            *plStack_78 = *(long *)*puVar3;
            puVar3 = param_1;
            func_0x00010889297c(param_1,plVar2);
            *(long **)*puVar3 = plStack_60;
          }
        }
        plStack_60 = (long *)*plStack_58;
      }
    }
  }
  return;
}



/* Entry: 108893438; end: 108893463;  */

long FUN_108893438(long param_1)

{
  return param_1 + 8;
}



/* Entry: 108893464; end: 1088934d7;  */

void FUN_108893464(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    FUN_1088934ec(param_1 + 1,lVar1);
  }
  return;
}



/* Entry: 1088934d8; end: 1088934eb;  */

undefined8 FUN_1088934d8(undefined8 param_1)

{
  return param_1;
}



/* Entry: 1088934ec; end: 108893547;  */

void FUN_1088934ec(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  func_0x000108893450(param_1);
  FUN_1088934d8();
  FUN_108893548(puVar1,param_2,*param_1);
  return;
}



/* Entry: 108893548; end: 1088935e7;  */

void FUN_108893548(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010889357c(param_1,param_2,param_3);
  return;
}



/* Entry: 1088935e8; end: 10889362f;  */

void FUN_1088935e8(ulong param_1,ulong param_2)

{
  FUN_108893630();
  if (param_1 < param_2) {
    func_0x000104bd35f4();
  }
  func_0x000108893658(param_2);
  return;
}



/* Entry: 108893630; end: 10889368f;  */

ulong FUN_108893630(ulong param_1)

{
  FUN_10888fbcc();
  return param_1 >> 3;
}



/* Entry: 108893690; end: 1088936c3;  */

bool FUN_108893690(undefined8 param_1,long *param_2,long *param_3)

{
  return *param_2 == *param_3;
}



/* Entry: 1088936c4; end: 1088936fb;  */

void FUN_1088936c4(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}



/* Entry: 1088936fc; end: 108893723;  */

void FUN_1088936fc(undefined8 param_1,undefined8 param_2)

{
  func_0x000108893794(param_2);
  return;
}



/* Entry: 108893724; end: 108893737;  */

undefined8 FUN_108893724(undefined8 param_1)

{
  return param_1;
}



/* Entry: 108893738; end: 1088937b7;  */

void FUN_108893738(undefined8 param_1)

{
  func_0x000108893820(param_1);
  return;
}



/* Entry: 1088937b8; end: 108893853;  */

undefined8 FUN_1088937b8(undefined8 param_1)

{
  func_0x0001088937ec(param_1);
  return param_1;
}



/* Entry: 108893854; end: 108893867;  */

undefined8 FUN_108893854(undefined8 param_1)

{
  return param_1;
}



/* Entry: 108893868; end: 1088938d7;  */

void FUN_108893868(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000108893898(param_2,param_3);
  return;
}



/* Entry: 1088938d8; end: 108893a17;  */

/* WARNING: Removing unreachable block (ram,0x0001088939dc) */

void FUN_1088938d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_68 [23];
  undefined1 uStack_51;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  uVar1 = param_2;
  uStack_48 = param_3;
  uStack_40 = param_2;
  lStack_38 = param_1;
  func_0x0001088936e4();
  uStack_51 = 0;
  uStack_50 = uVar1;
  FUN_108893a88(uVar1);
  FUN_108893ab8(auStack_68,uStack_50);
  func_0x000108893b00(param_1,uVar1,auStack_68);
  FUN_108893b78(param_1);
  FUN_108893b44();
  uVar1 = uStack_50;
  lVar2 = param_1;
  FUN_108893bc0(param_1);
  FUN_108892714();
  FUN_108893724();
  FUN_108893b90(uVar1,lVar2,uStack_48);
  lVar2 = param_1;
  func_0x000108893bd8();
  *(undefined1 *)(lVar2 + 8) = 1;
  func_0x000108892378();
  lVar2 = param_1;
  FUN_108893bc0(param_1);
  FUN_108892714();
  FUN_108892bfc(param_2,lVar2);
  FUN_108893bc0();
  *(undefined8 *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 108893a18; end: 108893a53;  */

undefined8 FUN_108893a18(undefined8 *param_1)

{
  return *param_1;
}



/* Entry: 108893a54; end: 108893a87;  */

undefined8 FUN_108893a54(undefined8 param_1)

{
  func_0x000108893f48(param_1);
  return param_1;
}



/* Entry: 108893a88; end: 108893ab7;  */

void FUN_108893a88(undefined8 param_1)

{
  FUN_108893bf0(param_1,1);
  return;
}



/* Entry: 108893ab8; end: 108893b43;  */

undefined8 FUN_108893ab8(undefined8 param_1,undefined8 param_2)

{
  FUN_108893c9c(param_1,param_2,0);
  return param_1;
}



/* Entry: 108893b44; end: 108893b77;  */

void FUN_108893b44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_108893d88(param_1,param_2,param_3);
  return;
}



/* Entry: 108893b78; end: 108893b8f;  */

undefined8 FUN_108893b78(undefined8 *param_1)

{
  return *param_1;
}



/* Entry: 108893b90; end: 108893bbf;  */

void FUN_108893b90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_108893e68(param_2,param_3);
  return;
}



/* Entry: 108893bc0; end: 108893bef;  */

undefined8 FUN_108893bc0(undefined8 *param_1)

{
  return *param_1;
}



/* Entry: 108893bf0; end: 108893c37;  */

void FUN_108893bf0(ulong param_1,ulong param_2)

{
  FUN_108893c38();
  if (param_1 < param_2) {
    func_0x000104bd35f4();
  }
  func_0x000108893c60(param_2);
  return;
}



/* Entry: 108893c38; end: 108893c9b;  */

ulong FUN_108893c38(ulong param_1)

{
  FUN_10888fbcc();
  return param_1 / 0x50;
}



/* Entry: 108893c9c; end: 108893ccb;  */

void FUN_108893c9c(undefined8 *param_1,undefined8 param_2,byte param_3)

{
  *param_1 = param_2;
  *(byte *)(param_1 + 1) = param_3 & 1;
  return;
}



/* Entry: 108893ccc; end: 108893d57;  */

undefined8 * FUN_108893ccc(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = param_2;
  param_1[1] = *param_3;
  param_1[2] = param_3[1];
  func_0x000108893d24((long)param_1 + 0x11);
  return param_1;
}



/* Entry: 108893d58; end: 108893d87;  */

undefined1 * FUN_108893d58(undefined1 *param_1)

{
  undefined1 *puVar1;
  
  puVar1 = param_1;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  } while (puVar1 != param_1 + 7);
  return param_1;
}



/* Entry: 108893d88; end: 108893dbb;  */

void FUN_108893d88(undefined8 param_1,undefined8 param_2,int *param_3)

{
  FUN_108893dbc(param_1,(long)*param_3);
  return;
}



/* Entry: 108893dbc; end: 108893e47;  */

undefined8 FUN_108893dbc(undefined8 param_1,undefined8 param_2)

{
  func_0x000108893e00(param_1,0,param_2);
  return param_1;
}



/* Entry: 108893e48; end: 108893e67;  */

void FUN_108893e48(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}



/* Entry: 108893e68; end: 108893ebf;  */

void FUN_108893e68(undefined8 param_1,undefined8 param_2)

{
  func_0x000108893e94(param_1,param_2);
  return;
}



/* Entry: 108893ec0; end: 108893f7b;  */

undefined8 FUN_108893ec0(undefined8 param_1,undefined8 param_2)

{
  func_0x000108893efc(param_1,param_2);
  return param_1;
}



/* Entry: 108893f7c; end: 108893fc3;  */

void FUN_108893f7c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    FUN_108893fc4(param_1 + 1,lVar1);
  }
  return;
}



/* Entry: 108893fc4; end: 108894037;  */

void FUN_108893fc4(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    uVar2 = *param_1;
    lVar1 = param_2;
    FUN_108892714(param_2);
    FUN_108893724();
    FUN_1088936fc(uVar2,lVar1);
    FUN_108893738(param_2);
  }
  if (param_2 != 0) {
    func_0x00010889375c(*param_1,param_2);
  }
  return;
}



/* Entry: 108894038; end: 108894073;  */

undefined8 FUN_108894038(undefined8 param_1,undefined8 param_2)

{
  FUN_108894074(param_1,param_2);
  return param_1;
}



/* Entry: 108894074; end: 108894093;  */

void FUN_108894074(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}



/* Entry: 108894094; end: 1088940c7;  */

undefined8 FUN_108894094(undefined8 param_1)

{
  func_0x000107c27fb8(param_1);
  return param_1;
}



/* Entry: 1088940c8; end: 1088940e3;  */

byte FUN_1088940c8(long param_1)

{
  return *(byte *)(param_1 + 0x18) & 1;
}



/* Entry: 1088940e4; end: 108894133;  */

undefined8 FUN_1088940e4(undefined8 param_1)

{
  _memset(param_1,0,0x18);
  FUN_10888d978(param_1);
  func_0x00010888ee10(param_1,0);
  return param_1;
}



/* Entry: 108894134; end: 1088941d7;  */

byte FUN_108894134(long param_1)

{
  return *(byte *)(param_1 + 8) & 1;
}



/* Entry: 1088941d8; end: 10889465f;  */

undefined8 FUN_1088941d8(undefined8 param_1)

{
  func_0x00010889420c(param_1);
  return param_1;
}



/* Entry: 108894660; end: 10889467f;  */

void FUN_108894660(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x108894674);
  (*pcVar1)();
}



/* Entry: 108894680; end: 1088946e7;  */

undefined8 FUN_108894680(undefined8 param_1)

{
  func_0x0001088946b4(param_1);
  return param_1;
}



/* Entry: 1088946e8; end: 108894717;  */

long FUN_1088946e8(long param_1)

{
  return param_1 + 0x10;
}



/* Entry: 108894718; end: 1088947cb;  */

undefined8 FUN_108894718(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c2a1dc(param_1,param_2);
  return param_1;
}


