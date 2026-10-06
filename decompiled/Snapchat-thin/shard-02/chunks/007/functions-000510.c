/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10215e964; end: 10215e98b;  */

void FUN_10215e964(long param_1,long *param_2,long param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long *unaff_x20;
  double dVar8;
  double dVar9;
  undefined1 auStack_98 [48];
  undefined1 auStack_68 [24];
  
  lVar7 = *param_2;
  bVar3 = *(byte *)(param_2 + 1);
  FUN_10215d56c(param_3,param_1);
  if (bVar3 < 2) {
    lVar5 = 0;
    if (bVar3 == 0) {
      func_0x00010215edb0();
      plVar1 = (long *)(param_1 + *(int *)(lVar5 + 0x18));
      *plVar1 = lVar7;
      *(undefined1 *)(plVar1 + 1) = 0;
    }
    else {
      func_0x00010215edb0();
      puVar2 = (undefined8 *)(param_1 + *(int *)(lVar5 + 0x18));
      *puVar2 = 2;
      *(undefined1 *)(puVar2 + 1) = 1;
      puVar2[3] = lVar7;
    }
  }
  else if (bVar3 == 2) {
    lVar5 = 0;
    func_0x00010215edb0();
    puVar2 = (undefined8 *)(param_1 + *(int *)(lVar5 + 0x18));
    *puVar2 = 2;
    *(undefined1 *)(puVar2 + 1) = 1;
    puVar2[4] = lVar7;
  }
  else if (lVar7 < 3) {
    if ((lVar7 == 0) || (lVar7 != 1)) {
      lVar7 = 0;
      func_0x00010215edb0();
      puVar2 = (undefined8 *)(param_1 + *(int *)(lVar7 + 0x18));
      *puVar2 = 1;
      *(undefined1 *)(puVar2 + 1) = 1;
    }
    else {
      lVar7 = 0;
      func_0x00010215edb0();
      puVar2 = (undefined8 *)(param_1 + *(int *)(lVar7 + 0x18));
      *puVar2 = 0;
      *(undefined1 *)(puVar2 + 1) = 1;
    }
  }
  else if (lVar7 < 5) {
    if (lVar7 == 3) {
      lVar7 = 0;
      func_0x00010215edb0();
      *(byte *)(param_1 + *(int *)(lVar7 + 0x18) + 9) =
           (*(byte *)(param_3 + *(int *)(lVar7 + 0x18) + 9) ^ 0xff) & 1;
    }
    else {
      lVar7 = 0;
      func_0x00010215edb0();
      iVar4 = *(int *)(lVar7 + 0x18);
      dVar8 = *(double *)(param_3 + iVar4 + 0x10) + 1.5707963267948966;
      func_0x000107c60fc4(dVar8,0x401921fb54442d18);
      *(double *)(param_1 + iVar4 + 0x10) = dVar8;
    }
  }
  else if (lVar7 == 5) {
    lVar5 = 0;
    func_0x00010215edb0();
    puVar2 = (undefined8 *)(param_1 + *(int *)(lVar5 + 0x18));
    *puVar2 = 0;
    *(undefined1 *)(puVar2 + 1) = 1;
    lVar7 = (long)unaff_x20 + *(long *)(*unaff_x20 + 0x60);
    func_0x000107c61428(lVar7,auStack_68,0,0);
    lVar7 = lVar7 + *(int *)(lVar5 + 0x18);
    dVar8 = *(double *)(lVar7 + 0x18);
    dVar9 = *(double *)(lVar7 + 0x20);
    func_0x000107c60888(auStack_98,*(undefined8 *)(lVar7 + 0x10));
    puVar6 = PTR_PTR_1126ddb78;
    func_0x000107c610f8();
    func_0x000107c482e0((float)dVar8,(float)dVar9);
    iVar4 = *(int *)(lVar5 + 0x14);
    func_0x00010215d5f4(*(undefined8 *)(param_1 + iVar4));
    *(undefined **)(param_1 + iVar4) = puVar6;
  }
  else {
    lVar7 = 0;
    func_0x00010215edb0();
    puVar2 = (undefined8 *)(param_1 + *(int *)(lVar7 + 0x18));
    *puVar2 = 0;
    *(undefined1 *)(puVar2 + 1) = 1;
    iVar4 = *(int *)(lVar7 + 0x14);
    func_0x00010215d5f4(*(undefined8 *)(param_1 + iVar4));
    *(undefined8 *)(param_1 + iVar4) = 2;
  }
  return;
}



/* Entry: 10215e98c; end: 10215ea47;  */

long * FUN_10215e98c(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar3 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar3 >> 0x11 & 1) == 0) {
    lVar5 = 0;
    func_0x000107c5ede0();
    (**(code **)(*(long *)(lVar5 + -8) + 0x10))(param_1,param_2,lVar5);
    iVar4 = *(int *)(param_3 + 0x14);
    uVar6 = *(ulong *)((long)param_2 + (long)iVar4);
    if (2 < uVar6) {
      func_0x000107c61174(uVar6);
    }
    *(ulong *)((long)param_1 + (long)iVar4) = uVar6;
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
    uVar7 = *puVar2;
    uVar9 = puVar2[3];
    uVar8 = puVar2[2];
    puVar1[1] = puVar2[1];
    *puVar1 = uVar7;
    puVar1[3] = uVar9;
    puVar1[2] = uVar8;
    puVar1[4] = puVar2[4];
  }
  else {
    lVar5 = *param_2;
    *param_1 = lVar5;
    uVar6 = (ulong)uVar3 & 0xff;
    param_1 = (long *)(lVar5 + (uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 10215ea48; end: 10215ea9f;  */

void FUN_10215ea48(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  if (*(ulong *)(param_1 + *(int *)(param_2 + 0x14)) < 3) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10215eaa0; end: 10215ec1f;  */

long FUN_10215eaa0(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar4 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar4 + -8) + 0x10))(param_1,param_2,lVar4);
  iVar3 = *(int *)(param_3 + 0x14);
  uVar5 = *(ulong *)(param_2 + iVar3);
  if (2 < uVar5) {
    func_0x000107c61174(uVar5);
  }
  *(ulong *)(param_1 + iVar3) = uVar5;
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x18));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x18));
  uVar6 = *puVar2;
  uVar8 = puVar2[3];
  uVar7 = puVar2[2];
  puVar1[1] = puVar2[1];
  *puVar1 = uVar6;
  puVar1[3] = uVar8;
  puVar1[2] = uVar7;
  puVar1[4] = puVar2[4];
  return param_1;
}



/* Entry: 10215ec20; end: 10215ec67;  */

undefined8 FUN_10215ec20(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112e5c7c0;
  func_0x0001000285a8(0x112e5c7c0,&UNK_10da629d0);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 10215ec68; end: 10215ed97;  */

long FUN_10215ec68(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar4 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar4 + -8) + 0x20))(param_1,param_2,lVar4);
  iVar3 = *(int *)(param_3 + 0x18);
  *(undefined8 *)(param_1 + *(int *)(param_3 + 0x14)) =
       *(undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  puVar1 = (undefined8 *)(param_1 + iVar3);
  puVar2 = (undefined8 *)(param_2 + iVar3);
  uVar5 = *puVar2;
  uVar7 = puVar2[3];
  uVar6 = puVar2[2];
  puVar1[1] = puVar2[1];
  *puVar1 = uVar5;
  puVar1[3] = uVar7;
  puVar1[2] = uVar6;
  puVar1[4] = puVar2[4];
  return param_1;
}



/* Entry: 10215ed98; end: 10215edc3;  */

void FUN_10215ed98(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 10215edc4; end: 10215edf3;  */

void FUN_10215edc4(undefined8 param_1,long *param_2,undefined8 param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,param_3);
  return;
}



/* Entry: 10215edf4; end: 10215ee6f;  */

void FUN_10215edf4(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  func_0x000107c5ede0();
  if (param_2 < 0x40) {
    lStack_38 = *(long *)(lVar1 + -8) + 0x40;
    puStack_30 = &UNK_10da62a00;
    puStack_28 = &UNK_10da62a18;
    func_0x000107c6153c(param_1,0x100,3,&lStack_38,param_1 + 0x10);
  }
  return;
}



/* Entry: 10215ee70; end: 10215ef3f;  */

int FUN_10215ee70(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfc < param_2) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 0xfd;
  }
  uVar1 = *(byte *)(param_1 + 2) ^ 0xff;
  if (*(byte *)(param_1 + 2) < 4) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10215ef40; end: 10215ef5f;  */

void FUN_10215ef40(void)

{
  func_0x000103dbf524();
  return;
}



/* Entry: 10215ef60; end: 10215ef77;  */

undefined * FUN_10215ef60(undefined8 param_1)

{
  code *pcVar1;
  undefined *puVar2;
  
  pcVar1 = FUN_10215e57c;
  func_0x000103dbf46c();
  func_0x0001000bfde0(FUN_10215e57c,0,PTR___sSbN_11034dd40);
  func_0x000107c61574(param_1);
  puVar2 = PTR___sSbSQsWP_11034dd50;
  func_0x000104884898(PTR___sSbSQsWP_11034dd50);
  func_0x000107c61574(pcVar1);
  return puVar2;
}



/* Entry: 10215ef78; end: 10215f04f;  */

undefined * FUN_10215ef78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x000103dbf46c();
  func_0x0001000bfde0(param_3,0,PTR___sSbN_11034dd40);
  func_0x000107c61574(param_1);
  puVar1 = PTR___sSbSQsWP_11034dd50;
  func_0x000104884898(PTR___sSbSQsWP_11034dd50);
  func_0x000107c61574(param_3);
  return puVar1;
}



/* Entry: 10215f050; end: 10215f117;  */

int FUN_10215f050(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && ((char)param_1[10] != '\0')) {
    return *param_1 + 0xff;
  }
  uVar1 = 0xffffffff;
  if (1 < *(byte *)((long)param_1 + 9)) {
    uVar1 = *(byte *)((long)param_1 + 9) + 0x7ffffffe & 0x7fffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10215f118; end: 10215f20b;  */

ulong * FUN_10215f118(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_1;
  uVar1 = *param_2;
  if (uVar2 < 0xffffffff) {
    if (uVar1 < 0xffffffff) {
      *param_1 = uVar1;
    }
    else {
      *param_1 = uVar1;
      func_0x000107c61174();
    }
  }
  else if (uVar1 < 0xffffffff) {
    func_0x000107c61170(uVar2);
    *param_1 = *param_2;
  }
  else {
    *param_1 = uVar1;
    func_0x000107c61174();
    func_0x000107c61170(uVar2);
  }
  return param_1;
}



/* Entry: 10215f20c; end: 10215f3ab;  */

int FUN_10215f20c(ulong *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffc < param_2) && ((char)param_1[1] != '\0')) {
    return (int)*param_1 + 0x7ffffffd;
  }
  uVar2 = *param_1;
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  iVar1 = 0;
  if (3 < (int)uVar2 + 1U) {
    iVar1 = (int)uVar2 + -2;
  }
  return iVar1;
}



/* Entry: 10215f3ac; end: 10215f3db;  */

void FUN_10215f3ac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10215f3dc; end: 10215f427;  */

void FUN_10215f3dc(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9f398,&UNK_10d93fb00);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10215f428,param_1);
  return;
}



/* Entry: 10215f428; end: 10215f4d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10215f428(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lStack_48;
  
  func_0x000100083b20(&lStack_48);
  func_0x0001000a0a8c(0);
  uVar3 = *(undefined8 *)(lStack_48 + _DAT_112fcd310);
  uVar1 = *(undefined8 *)(lStack_48 + _DAT_112fcd318);
  uVar2 = ((undefined8 *)(lStack_48 + _DAT_112fcd318))[1];
  func_0x000107c61174();
  func_0x000107c61434(uVar2);
  uVar4 = uVar3;
  func_0x000100a0dc54(uVar3,uVar1,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(lStack_48);
  *param_1 = uVar4;
  return;
}



/* Entry: 10215f4d8; end: 10215f4e7;  */

undefined1  [16] FUN_10215f4d8(void)

{
  return ZEXT816(0x1104d37d0);
}



/* Entry: 10215f4e8; end: 10215f58b;  */

void FUN_10215f4e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9f398,&UNK_10d93fb00);
  puVar1 = &UNK_1104d3878;
  func_0x000107c613fc(&UNK_1104d3878,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x0001000823a8(FUN_10215f58c,puVar1);
  return;
}



/* Entry: 10215f58c; end: 10215f6df;  */

void FUN_10215f58c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar7 = &puStack_90;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x0001000a0a8c(0);
  puVar5 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar6 = &UNK_1104d38c0;
  uVar8 = 0x30;
  func_0x000107c613fc(&UNK_1104d38c0,0x30,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar1;
  *(undefined8 *)(puVar6 + 0x18) = uVar3;
  *(undefined8 *)(puVar6 + 0x20) = uVar2;
  *(undefined8 *)(puVar6 + 0x28) = uVar4;
  pcStack_70 = FUN_10215f72c;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_101443eec;
  puStack_78 = &UNK_1104d38d8;
  puStack_68 = puVar6;
  func_0x000107c60bc4(&puStack_90);
  puVar6 = puStack_68;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar4);
  func_0x000107c61574(puVar6);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar7);
  ppuVar7 = &PTR____CFConstantStringClassReference_110e796d8;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110e796d8);
  puVar6 = puVar5;
  func_0x000100a0dc54(puVar5,ppuVar7,uVar8);
  func_0x000107c6142c(uVar8);
  func_0x000107c61170(puVar5);
  *param_1 = puVar6;
  return;
}



/* Entry: 10215f6e0; end: 10215f6ef;  */

undefined1  [16] FUN_10215f6e0(void)

{
  return ZEXT816(0x1104d38a0);
}



/* Entry: 10215f6f0; end: 10215f72b;  */

void FUN_10215f6f0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10215f72c; end: 10215f8af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10215f72c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uStack_50;
  long lStack_48;
  
  func_0x000100083b20(&lStack_48);
  lVar2 = lStack_48;
  lVar1 = *(long *)(lStack_48 + _DAT_113083868);
  func_0x000107c61174();
  func_0x000107c61170(lVar2);
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    func_0x000100083b20(&lStack_48);
    lVar1 = lStack_48;
    lVar3 = lStack_48;
    func_0x000107c4ec94();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    lVar1 = lVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar1 != 0) {
      func_0x000100083b20(&lStack_48);
      lVar3 = lStack_48;
      func_0x000107c41920(lStack_48);
      func_0x000107c61180();
      func_0x000107c61170(lStack_48);
      func_0x000100083b20(&uStack_50);
      uVar4 = uStack_50;
      func_0x000107c3dd7c(uStack_50);
      func_0x000107c61180();
      func_0x000107c61170(uStack_50);
      puVar5 = PTR_PTR_1126a9f78;
      func_0x000107c610f8(PTR_PTR_1126a9f78);
      func_0x000107c45a04();
      func_0x000107c615e8(uVar4);
      func_0x000107c61170(lVar3);
      func_0x000107c615e8(lVar1);
      func_0x000107c615e8(lVar2);
      return puVar5;
    }
    func_0x000107c615e8(lVar2);
  }
  return (undefined *)0x0;
}



/* Entry: 10215f8b0; end: 10215f8cb;  */

void FUN_10215f8b0(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 10215f8cc; end: 10215fa93;  */

void FUN_10215f8cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e4c7e0,&UNK_10da460f0);
  puVar1 = &UNK_1104d39b8;
  func_0x000107c613fc(&UNK_1104d39b8,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_2;
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(0x10215f970,puVar1);
  return;
}



/* Entry: 10215fa94; end: 10215faa3;  */

undefined1  [16] FUN_10215fa94(void)

{
  return ZEXT816(0x1104d39e0);
}



/* Entry: 10215faa4; end: 10215fb3b;  */

void FUN_10215faa4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9f398,&UNK_10d93fb00);
  puVar1 = &UNK_1104d3a80;
  func_0x000107c613fc(&UNK_1104d3a80,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(FUN_10215fb3c,puVar1);
  return;
}



/* Entry: 10215fb3c; end: 10215fcd3;  */

void FUN_10215fb3c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar6 = &puStack_80;
  func_0x000100083b20(&puStack_80);
  puVar3 = puStack_80;
  func_0x000100083b20(&puStack_80);
  puVar4 = puStack_80;
  func_0x000100083b20(&puStack_80);
  puVar5 = puStack_80;
  func_0x0001000a0a8c(0);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar2 = &UNK_1104d3ac8;
  uVar7 = 0x28;
  func_0x000107c613fc(&UNK_1104d3ac8,0x28,7);
  *(undefined **)(puVar2 + 0x10) = puVar3;
  *(undefined **)(puVar2 + 0x18) = puVar4;
  *(undefined **)(puVar2 + 0x20) = puStack_80;
  pcStack_60 = FUN_10215fce4;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_101443eec;
  puStack_68 = &UNK_1104d3ae0;
  puStack_58 = puVar2;
  func_0x000107c60bc4(&puStack_80);
  puVar2 = puStack_58;
  func_0x000107c61174(puVar3);
  func_0x000107c61174(puVar4);
  func_0x000107c61174(puVar5);
  func_0x000107c61574(puVar2);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar6);
  ppuVar6 = &PTR____CFConstantStringClassReference_110e796f8;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110e796f8);
  puVar2 = puVar1;
  func_0x000100a0dc54(puVar1,ppuVar6,uVar7);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar5);
  func_0x000107c6142c(uVar7);
  func_0x000107c61170(puVar1);
  *param_1 = puVar2;
  return;
}



/* Entry: 10215fcd4; end: 10215fce3;  */

undefined1  [16] FUN_10215fcd4(void)

{
  return ZEXT816(0x1104d3aa8);
}



/* Entry: 10215fce4; end: 10215fd83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10215fce4(void)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  long lVar4;
  
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  func_0x000107c42eac();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10215fd80);
    (*pcVar1)();
  }
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar4 != 0) {
    puVar3 = PTR_PTR_1126a9f88;
    func_0x000107c610f8(PTR_PTR_1126a9f88);
    func_0x000107c475cc();
    func_0x000107c615e8(lVar4);
    func_0x000107c61170(lVar2);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10215fd84);
  (*pcVar1)();
}



/* Entry: 10215fd84; end: 10215fd9f;  */

void FUN_10215fd84(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 10215fda0; end: 10215fdff; -[_TtC42SCMemPlatBackupJobProcessingImplementation18BackupJobProcessor init] */

void FUN_10215fda0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCMemPlatBackupJobProcessingImplementation.BackupJobProcessor",0x3d,"init()",
                      6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10215fdcc);
  (*pcVar1)();
}



/* Entry: 10215fe00; end: 10215fe0f; -[_TtC42SCMemPlatBackupJobProcessingImplementation18BackupJobProcessor .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10215fe00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e5c8f8));
  return;
}



/* Entry: 10215fe10; end: 10215fe2f;  */

void FUN_10215fe10(void)

{
  func_0x000107c61168(&PTR_PTR_112821610);
  return;
}



/* Entry: 10215fe30; end: 10215fec7;  */

void FUN_10215fe30(undefined8 param_1,long param_2,ulong param_3,code *param_4)

{
  undefined8 uVar1;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_102160400(param_3,param_1);
    func_0x000107c61170(param_2);
    if ((param_3 & 1) != 0) {
      uVar1 = 1;
      goto LAB_10215fea8;
    }
  }
  uVar1 = 2;
LAB_10215fea8:
  (*param_4)(uVar1,0);
  return;
}



/* Entry: 10215fec8; end: 10215ff13;  */

void FUN_10215fec8(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10215ff14; end: 102160027; -[_TtC42SCMemPlatBackupJobProcessingImplementation18BackupJobProcessor processJobWithJobConfig:input:context:onComplete:] */

void FUN_10215ff14(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000107c60bc4();
  if (param_4 == 0) {
    func_0x000107c61174(param_3);
    func_0x000107c61174(param_5);
    func_0x000107c61174(param_1);
    param_2 = 0xf000000000000000;
  }
  else {
    func_0x000107c61174(param_3);
    func_0x000107c61174(param_5);
    func_0x000107c61174(param_1);
    lVar1 = param_4;
    func_0x000107c61174(param_4);
    func_0x000107c5ee30(param_4);
    func_0x000107c61170(lVar1);
  }
  puVar2 = &UNK_1104d3ba8;
  func_0x000107c613fc(&UNK_1104d3ba8,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_6;
  uVar3 = param_3;
  FUN_102160030(param_3,param_4,param_2,FUN_102160028,puVar2);
  func_0x000107c61574(puVar2);
  func_0x0001000b44c0(param_4,param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 102160028; end: 10216002f;  */

void FUN_102160028(undefined8 param_1,long param_2)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c5ed2c(param_2);
  }
  (**(code **)(lVar1 + 0x10))(lVar1,param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 102160030; end: 102160283;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102160030(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long lVar9;
  long unaff_x20;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  if (param_3 >> 0x3c < 0xf) {
    puVar2 = PTR_PTR_1126a9f90;
    func_0x000107c610f8(PTR_PTR_1126a9f90);
    func_0x00010006c00c(param_2,param_3);
    func_0x00010006c00c(param_2,param_3);
    uVar3 = param_2;
    func_0x000107c5ee20(param_2,param_3);
    func_0x000107c485d0(puVar2);
    func_0x000107c61170(uVar3);
    func_0x0001000b44c0(param_2,param_3);
    lVar4 = *(long *)(unaff_x20 + _DAT_112e5c8f8);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar4 != 0) {
      puVar5 = &UNK_1104d3bd0;
      func_0x000107c613fc(&UNK_1104d3bd0,0x20,7);
      *(undefined8 *)(puVar5 + 0x10) = param_4;
      *(undefined8 *)(puVar5 + 0x18) = param_5;
      puVar1 = PTR___NSConcreteStackBlock_11034bd00;
      pcStack_80 = FUN_102160284;
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0x42000000;
      pcStack_90 = (code *)&UNK_1000f6b44;
      puStack_88 = &UNK_1104d3be8;
      ppuVar6 = &puStack_a0;
      puStack_78 = puVar5;
      func_0x000107c60bc4(ppuVar6);
      puVar5 = puStack_78;
      func_0x000107c6157c(param_5);
      func_0x000107c61574(puVar5);
      puVar5 = &UNK_1104d3c20;
      func_0x000107c613fc(&UNK_1104d3c20,0x18,7);
      func_0x000107c61614(puVar5 + 0x10);
      puVar7 = &UNK_1104d3c48;
      func_0x000107c613fc(&UNK_1104d3c48,0x30,7);
      *(undefined **)(puVar7 + 0x10) = puVar5;
      *(undefined8 *)(puVar7 + 0x18) = param_1;
      *(undefined8 *)(puVar7 + 0x20) = param_4;
      *(undefined8 *)(puVar7 + 0x28) = param_5;
      pcStack_80 = (code *)0x1021602c8;
      puStack_a0 = puVar1;
      uStack_98 = 0x42000000;
      pcStack_90 = FUN_10215fec8;
      puStack_88 = &UNK_1104d3c60;
      ppuVar8 = &puStack_a0;
      puStack_78 = puVar7;
      func_0x000107c60bc4(ppuVar8);
      puVar5 = puStack_78;
      func_0x000107c6157c(param_5);
      func_0x000107c61174(param_1);
      func_0x000107c61574(puVar5);
      lVar9 = lVar4;
      func_0x000107c3e608(lVar4);
      func_0x000107c61180();
      func_0x0001000b44c0(param_2,param_3);
      func_0x000107c61170(puVar2);
      func_0x000107c60bd0(ppuVar8);
      func_0x000107c60bd0(ppuVar6);
      func_0x000107c615e8(lVar4);
      return lVar9;
    }
    func_0x0001000b44c0(param_2,param_3);
    func_0x000107c61170(puVar2);
  }
  return 0;
}



/* Entry: 102160284; end: 1021602ab;  */

void FUN_102160284(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(0,0);
  return;
}



/* Entry: 1021602ac; end: 1021602d3;  */

void FUN_1021602ac(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1021602d4; end: 1021603ff;  */

uint FUN_1021602d4(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  
  plVar1 = param_1;
  func_0x000107c4a83c();
  func_0x000107c61180();
  if (plVar1 == (long *)0x0) {
    uVar4 = 0;
    func_0x00010216074c();
    goto LAB_1021603ec;
  }
  plVar2 = plVar1;
  func_0x000107c5faec();
  lVar3 = param_2;
  func_0x000107c61170();
  func_0x00010216074c();
  if (param_2 == 0) {
    uVar4 = 0;
    goto LAB_1021603ec;
  }
  if (plVar2 == (long *)*plVar1 && param_2 == plVar1[1]) {
    func_0x000107c6142c(param_2);
LAB_102160368:
    func_0x000107c4a834();
    func_0x000107c61180();
    if (param_1 == (long *)0x0) {
      func_0x000102160758();
    }
    else {
      plVar1 = param_1;
      func_0x000107c5faec();
      func_0x000107c61170();
      func_0x000102160758();
      if (lVar3 != 0) {
        if ((plVar1 == (long *)*param_1) && (lVar3 == param_1[1])) {
          uVar4 = 1;
        }
        else {
          func_0x000107c605b8(plVar1,lVar3,(long *)*param_1,param_1[1],0);
          uVar4 = (uint)plVar1;
        }
        func_0x000107c6142c(lVar3);
        goto LAB_1021603ec;
      }
    }
  }
  else {
    lVar3 = param_2;
    func_0x000107c605b8();
    func_0x000107c6142c(param_2);
    if (((ulong)plVar2 & 1) != 0) goto LAB_102160368;
  }
  uVar4 = 0;
LAB_1021603ec:
  return uVar4 & 1;
}



/* Entry: 102160400; end: 102160493;  */

void FUN_102160400(ulong param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  ulong uVar3;
  
  iVar2 = param_2;
  func_0x000107c3fcb0();
  if ((((iVar2 == 1) || (func_0x000107c3fcb0(), param_2 == 2)) &&
      (uVar3 = param_1, FUN_1021602d4(), (uVar3 & 1) != 0)) &&
     (uVar3 = param_1, func_0x000107c44aac(), (int)uVar3 != 0)) {
    func_0x000107c507f0();
    func_0x000107c61180();
    if (param_1 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102160494);
      (*pcVar1)();
    }
    func_0x000107c50834();
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 102160494; end: 10216049b;  */

void FUN_102160494(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 10216049c; end: 10216051b;  */

void FUN_10216049c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9f398,&UNK_10d93fb00);
  puVar1 = &UNK_1104d3c98;
  func_0x000107c613fc(&UNK_1104d3c98,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102160694,puVar1);
  return;
}



/* Entry: 10216051c; end: 102160693;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10216051c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  ppuVar6 = &puStack_70;
  func_0x000100083b20(&puStack_70);
  lVar3 = *(long *)(puStack_70 + _DAT_113080730);
  func_0x000107c61174();
  func_0x000107c61170(puStack_70);
  lVar4 = lVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  if (lVar4 != 0) {
    lVar3 = lVar4;
    func_0x000107c4a598();
    if ((int)lVar3 != 0) {
      puVar5 = PTR_PTR_1126ae720;
      func_0x000107c61168();
      uStack_50 = 0x102160728;
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0x42000000;
      puStack_60 = &UNK_101443eec;
      puStack_58 = &UNK_1104d3cd0;
      uStack_48 = param_3;
      func_0x000107c60bc4(&puStack_70);
      uVar1 = uStack_48;
      func_0x000107c6157c(param_3);
      func_0x000107c61574(uVar1);
      func_0x000107c3e4fc();
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar6);
      puVar7 = (undefined8 *)0x0;
      func_0x0001000a0a8c();
      func_0x00010216074c();
      uVar1 = *puVar7;
      uVar2 = puVar7[1];
      func_0x000107c61434(uVar2);
      puVar8 = puVar5;
      func_0x000100a0dc54(puVar5,uVar1,uVar2);
      func_0x000107c6142c(uVar2);
      func_0x000107c615e8(lVar4);
      func_0x000107c61170(puVar5);
      goto LAB_102160678;
    }
    func_0x000107c615e8(lVar4);
  }
  puVar8 = (undefined *)0x0;
LAB_102160678:
  *param_1 = puVar8;
  return;
}



/* Entry: 102160694; end: 1021606ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102160694(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  ppuVar6 = &puStack_70;
  func_0x000100083b20(&puStack_70,*(undefined8 *)(unaff_x20 + 0x10));
  lVar3 = *(long *)(puStack_70 + _DAT_113080730);
  func_0x000107c61174();
  func_0x000107c61170(puStack_70);
  lVar4 = lVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  if (lVar4 != 0) {
    lVar3 = lVar4;
    func_0x000107c4a598();
    if ((int)lVar3 != 0) {
      puVar5 = PTR_PTR_1126ae720;
      func_0x000107c61168();
      uStack_50 = 0x102160728;
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0x42000000;
      puStack_60 = &UNK_101443eec;
      puStack_58 = &UNK_1104d3cd0;
      uStack_48 = uVar2;
      func_0x000107c60bc4(&puStack_70);
      uVar1 = uStack_48;
      func_0x000107c6157c(uVar2);
      func_0x000107c61574(uVar1);
      func_0x000107c3e4fc();
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar6);
      puVar7 = (undefined8 *)0x0;
      func_0x0001000a0a8c();
      func_0x00010216074c();
      uVar2 = *puVar7;
      uVar1 = puVar7[1];
      func_0x000107c61434(uVar1);
      puVar8 = puVar5;
      func_0x000100a0dc54(puVar5,uVar2,uVar1);
      func_0x000107c6142c(uVar1);
      func_0x000107c615e8(lVar4);
      func_0x000107c61170(puVar5);
      goto LAB_102160678;
    }
    func_0x000107c615e8(lVar4);
  }
  puVar8 = (undefined *)0x0;
LAB_102160678:
  *param_1 = puVar8;
  return;
}



/* Entry: 1021606ac; end: 102160727;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021606ac(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  uVar1 = uStack_28;
  func_0x000107c4cab4();
  func_0x000107c61180();
  func_0x000107c61170(uStack_28);
  lVar2 = 0;
  FUN_10215fe10();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112e5c8f8) = uVar1;
  lStack_38 = lVar3;
  lStack_30 = lVar2;
  func_0x000107c61154(&lStack_38,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102160728; end: 102160763;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102160728(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  uVar1 = uStack_28;
  func_0x000107c4cab4();
  func_0x000107c61180();
  func_0x000107c61170(uStack_28);
  lVar2 = 0;
  FUN_10215fe10();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112e5c8f8) = uVar1;
  lStack_38 = lVar3;
  lStack_30 = lVar2;
  func_0x000107c61154(&lStack_38,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102160764; end: 102160817; -[SCMemPlatBackupJobSchedulingServices schedulerSCLazy] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102160764(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001003a5b88();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102160818; end: 102160883;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102160818(undefined8 param_1)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_112e5c928) = param_1;
  func_0x0001002ae9d0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102160884; end: 1021608c7; -[SCMemPlatBackupJobSchedulingServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102160884(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e5c928));
  return;
}



/* Entry: 1021608c8; end: 10216091f;  */

void FUN_1021608c8(undefined8 param_1,undefined8 param_2)

{
  func_0x0001000285a8(0x112d9f398,&UNK_10d93fb00);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_2,param_1);
  return;
}



/* Entry: 102160920; end: 10216093b;  */

void FUN_102160920(undefined8 *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined8 unaff_x20;
  undefined *puVar5;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  
  iVar1 = 0x2160a74;
  puVar4 = &UNK_1104d3e70;
  ppuVar3 = &puStack_80;
  func_0x000108ec0910();
  if (iVar1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    func_0x0001000a0a8c(0);
    puVar2 = PTR_PTR_1126ae720;
    func_0x000107c61168();
    uStack_60 = 0x102160a74;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_101443eec;
    puStack_68 = &UNK_1104d3e70;
    func_0x000107c60bc4(&puStack_80);
    func_0x000107c6157c();
    func_0x000107c61574(unaff_x20);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar3);
    ppuVar3 = &PTR____CFConstantStringClassReference_110e79818;
    func_0x000107c5faec(&PTR____CFConstantStringClassReference_110e79818);
    puVar5 = puVar2;
    func_0x000100a0dc54(puVar2,ppuVar3,puVar4);
    func_0x000107c6142c(puVar4);
    func_0x000107c61170(puVar2);
  }
  *param_1 = puVar5;
  return;
}



/* Entry: 10216093c; end: 102160a53;  */

void FUN_10216093c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 unaff_x20;
  undefined *puVar5;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  ppuVar2 = &puStack_80;
  uVar3 = param_2;
  uVar4 = param_3;
  func_0x000108ec0910();
  if ((int)uVar3 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    func_0x0001000a0a8c(0);
    puVar1 = PTR_PTR_1126ae720;
    func_0x000107c61168();
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_101443eec;
    uStack_68 = param_3;
    uStack_60 = param_2;
    func_0x000107c60bc4(&puStack_80);
    func_0x000107c6157c();
    func_0x000107c61574(unaff_x20);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar2);
    uVar3 = *param_4;
    func_0x000107c5faec(uVar3);
    puVar5 = puVar1;
    func_0x000100a0dc54(puVar1,uVar3,uVar4);
    func_0x000107c6142c(uVar4);
    func_0x000107c61170(puVar1);
  }
  *param_1 = puVar5;
  return;
}



/* Entry: 102160a54; end: 102160aa7;  */

undefined1  [16] FUN_102160a54(void)

{
  return ZEXT816(0x1104d3e40);
}



/* Entry: 102160aa8; end: 102160b1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102160aa8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar2 = *(undefined8 *)(lStack_38 + _DAT_112f8ed28);
  func_0x000107c615f0(uVar2);
  func_0x000107c61170(lStack_38);
  uVar1 = *param_1;
  func_0x000107c610f8(uVar1);
  func_0x000107c47028();
  func_0x000107c615e8(uVar2);
  return uVar1;
}



/* Entry: 102160b20; end: 102160b27;  */

void FUN_102160b20(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 102160b28; end: 102160b87; -[_TtC39MemoriesOpportunisticRetranscodeScanner12JobProcessor init] */

void FUN_102160b28(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesOpportunisticRetranscodeScanner.JobProcessor",0x34,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102160b54);
  (*pcVar1)();
}



/* Entry: 102160b88; end: 102160bdf; -[_TtC39MemoriesOpportunisticRetranscodeScanner12JobProcessor .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102160ba4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102160bc4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102160ba8) */
/* WARNING: Removing unreachable block (ram,0x000102160bc8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102160b88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e5c960));
  return;
}



/* Entry: 102160be0; end: 102160cd7;  */

void FUN_102160be0(code *param_1)

{
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  long lStack_38;
  
  (*param_1)(0,0);
  func_0x0001000d224c(auStack_58);
  func_0x0001000a8868(auStack_58,uStack_40);
  (**(code **)(lStack_38 + 0x10))(0x4024000000000000,uStack_40,lStack_38);
  func_0x0001000834e4(auStack_58);
  return;
}



/* Entry: 102160cd8; end: 102160ddf; -[_TtC39MemoriesOpportunisticRetranscodeScanner12JobProcessor processJobWithJobConfig:input:context:onComplete:] */

void FUN_102160cd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  code *pcVar3;
  
  func_0x000107c60bc4();
  if (param_4 == 0) {
    func_0x000107c61174(param_3);
    func_0x000107c61174(param_5);
    func_0x000107c61174(param_1);
    param_2 = 0xf000000000000000;
  }
  else {
    func_0x000107c61174(param_3);
    func_0x000107c61174(param_5);
    func_0x000107c61174(param_1);
    lVar1 = param_4;
    func_0x000107c61174(param_4);
    func_0x000107c5ee30(param_4);
    func_0x000107c61170(lVar1);
  }
  puVar2 = &UNK_1104d3f60;
  func_0x000107c613fc(&UNK_1104d3f60,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_6;
  pcVar3 = FUN_102160e00;
  FUN_102160e08(FUN_102160e00,puVar2);
  func_0x000107c61574(puVar2);
  func_0x0001000b44c0(param_4,param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pcVar3);
  return;
}



/* Entry: 102160de0; end: 102160dff;  */

void FUN_102160de0(void)

{
  func_0x000107c61168(&PTR_PTR_112821798);
  return;
}



/* Entry: 102160e00; end: 102160e07;  */

void FUN_102160e00(undefined8 param_1,long param_2)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c5ed2c(param_2);
  }
  (**(code **)(lVar1 + 0x10))(lVar1,param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 102160e08; end: 102160fc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102160e08(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 auStack_88 [3];
  undefined8 uStack_70;
  long lStack_68;
  
  func_0x0001000d224c(auStack_88);
  func_0x0001000a8868(auStack_88,uStack_70);
  uVar2 = uStack_70;
  (**(code **)(lStack_68 + 8))(uStack_70,lStack_68);
  func_0x0001000834e4(auStack_88);
  func_0x0001000d224c(auStack_88);
  uVar1 = auStack_88[0];
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112e5c970);
  puVar3 = &UNK_1104d3f88;
  func_0x000107c613fc(&UNK_1104d3f88,0x28,7);
  *(undefined8 *)(puVar3 + 0x10) = param_1;
  *(undefined8 *)(puVar3 + 0x18) = param_2;
  *(undefined8 *)(puVar3 + 0x20) = uVar6;
  puVar4 = &UNK_1104d3fb0;
  func_0x000107c613fc(&UNK_1104d3fb0,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_102160fc4;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(param_2);
  uVar5 = uVar1;
  func_0x00010488a220(uVar1,1,FUN_102160fd0,puVar4);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61574(puVar4);
  func_0x0001000d224c(auStack_88);
  puVar3 = &UNK_1104d3fd8;
  func_0x000107c613fc(&UNK_1104d3fd8,0x28,7);
  *(undefined8 *)(puVar3 + 0x10) = param_1;
  *(undefined8 *)(puVar3 + 0x18) = param_2;
  *(undefined8 *)(puVar3 + 0x20) = uVar6;
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(param_2);
  func_0x000104888fc0(auStack_88[0],1,FUN_102161014,puVar3);
  func_0x000107c61574(uVar5);
  func_0x000107c61170(auStack_88[0]);
  func_0x000107c61574(puVar3);
  return 0;
}



/* Entry: 102160fc4; end: 102160fcf;  */

void FUN_102160fc4(void)

{
  long unaff_x20;
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  long lStack_38;
  
  (**(code **)(unaff_x20 + 0x10))(0,0,*(undefined8 *)(unaff_x20 + 0x20));
  func_0x0001000d224c(auStack_58);
  func_0x0001000a8868(auStack_58,uStack_40);
  (**(code **)(lStack_38 + 0x10))(0x4024000000000000,uStack_40,lStack_38);
  func_0x0001000834e4(auStack_58);
  return;
}



/* Entry: 102160fd0; end: 102161013;  */

void FUN_102160fd0(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101d491a8(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 102161014; end: 102161033;  */

void FUN_102161014(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  long lStack_38;
  
  (**(code **)(unaff_x20 + 0x10))
            (2,param_1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  func_0x0001000d224c(auStack_58);
  func_0x0001000a8868(auStack_58,uStack_40);
  (**(code **)(lStack_38 + 0x10))(0x4024000000000000,uStack_40,lStack_38);
  func_0x0001000834e4(auStack_58);
  return;
}



/* Entry: 102161034; end: 102161167;  */

void FUN_102161034(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar3 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar1 = 0x646e65;
  if (cVar3 != '\x01') {
    uVar1 = 0x7472617473;
  }
  uVar2 = 0xe300000000000000;
  if (cVar3 != '\x01') {
    uVar2 = 0xe500000000000000;
  }
  func_0x000107c5fb58(auStack_68,uVar1,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000107c606a8();
  return;
}



/* Entry: 102161168; end: 1021611df;  */

void FUN_102161168(undefined1 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 uVar4;
  
  uVar2 = *(undefined8 *)(param_2 + 8);
  lVar3 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(uVar2);
  uVar4 = 1;
  if (lVar3 != 1) {
    uVar4 = 2;
  }
  uVar1 = 0;
  if (lVar3 != 0) {
    uVar1 = uVar4;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 1021611e0; end: 102161213;  */

void FUN_1021611e0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *unaff_x20;
  
  uVar1 = 0x646e65;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x7472617473;
  }
  uVar2 = 0xe300000000000000;
  if (*unaff_x20 != '\x01') {
    uVar2 = 0xe500000000000000;
  }
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}



/* Entry: 102161214; end: 10216126f;  */

void FUN_102161214(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102161270; end: 10216134f;  */

void FUN_102161270(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uStack_50;
  long lStack_48;
  
  func_0x0001000d224c(&uStack_50);
  uVar3 = uStack_50;
  func_0x000107c614f0();
  (**(code **)(*(long *)(lStack_48 + 0x18) + 0x60))();
  func_0x000107c615e8(uStack_50);
  if ((uVar3 & 1) != 0) {
    uStack_50 = 0x205d54524f5b;
    lStack_48 = 0xe600000000000000;
    func_0x000107c5fb78(param_1,param_2);
    lVar2 = lStack_48;
    uVar3 = uStack_50;
    func_0x0001000d224c(&uStack_50);
    uVar1 = uStack_50;
    uVar4 = uStack_50;
    func_0x000107c614f0(uStack_50);
    func_0x000103740d5c(uVar3,lVar2,param_3,uVar4);
    func_0x000107c6142c(lVar2);
    func_0x000107c615e8(uVar1);
  }
  return;
}



/* Entry: 102161350; end: 1021616a3;  */

void FUN_102161350(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if (param_5 == 0) {
    func_0x0001021617c4(param_3,param_4);
  }
  else {
    func_0x000107c614b0(param_5);
    FUN_1021616a4(1,param_5);
    func_0x000107c614ac(param_5);
  }
  uStack_70 = 0;
  uStack_68 = 0xe000000000000000;
  func_0x000107c602fc(0x41);
  func_0x000107c5fb78(0x206e6f6973736573,0xe800000000000000);
  func_0x000107c5fb78(param_1,param_2);
  func_0x000107c5fb78(0x64656e6e61637320,0xe900000000000020);
  puVar6 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  puVar3 = PTR___sSiN_11034deb0;
  puVar5 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  lStack_80 = param_3;
  func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar5);
  func_0x000107c5fb78(0xd000000000000015,0x800000010f066500);
  lStack_80 = param_4;
  func_0x000107c6057c(puVar3,puVar6);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar6);
  func_0x000107c5fb78(0xd000000000000015,0x800000010f066520);
  if (param_5 != 0) {
    lStack_80 = 0;
    uStack_78 = 0xe000000000000000;
    func_0x000107c614b0(param_5);
    func_0x000107c5fb78(0x203a726f72726520,0xe800000000000000);
    uVar2 = 0x112d393f0;
    lStack_88 = param_5;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    func_0x000107c603d0(&lStack_88,&lStack_80,uVar2,PTR___ss26DefaultStringInterpolationVN_11034ec00
                        ,PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
    func_0x000107c5fb78(0x2e,0xe100000000000000);
    uVar2 = uStack_78;
    func_0x000107c5fb78(lStack_80,uStack_78);
    func_0x000107c6142c(uVar2);
    func_0x000107c614ac(param_5);
  }
  func_0x0001000d224c(&lStack_80);
  lVar1 = lStack_80;
  if (lStack_80 != 0) {
    puVar3 = PTR_PTR_1126a9f98;
    func_0x000107c610f8(PTR_PTR_1126a9f98);
    func_0x000107c453e4();
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c58c2c(puVar3);
    func_0x000107c61170(param_1);
    func_0x000107c56bb0(puVar3);
    func_0x000107c56bb4(puVar3);
    func_0x000107c59aa8(puVar3);
    if (param_5 != 0) {
      lStack_80 = 0;
      uStack_78 = 0xe000000000000000;
      lStack_88 = param_5;
      func_0x000107c614b0(param_5);
      uVar2 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c603d0(&lStack_88,&lStack_80,uVar2,
                          PTR___ss26DefaultStringInterpolationVN_11034ec00,
                          PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
      uVar2 = uStack_78;
      lVar4 = lStack_80;
      func_0x000107c5fadc(lStack_80,uStack_78);
      func_0x000107c6142c(uVar2);
      func_0x000107c5487c(puVar3);
      func_0x000107c61170(lVar4);
      func_0x000107c614ac(param_5);
    }
    func_0x000107c4bfb0(lVar1);
    func_0x000107c61170(puVar3);
    func_0x000107c615e8(lVar1);
  }
  func_0x000107c6142c(uStack_68);
  return;
}



/* Entry: 1021616a4; end: 1021618f3;  */

void FUN_1021616a4(undefined1 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_50 = 0;
  uStack_48 = 0xe000000000000000;
  func_0x000107c602fc(0x20);
  func_0x000107c5fb78(0xd000000000000013,0x800000010f066540);
  puVar2 = PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08;
  puVar1 = PTR___ss26DefaultStringInterpolationVN_11034ec00;
  uStack_58 = CONCAT71(uStack_58._1_7_,param_1);
  func_0x000107c603d0(&uStack_58,&uStack_50,&UNK_1104d4098,
                      PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c5fb78(0x206f742065756420,0xe800000000000000);
  uVar3 = 0x112d393f0;
  uStack_58 = param_2;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c603d0(&uStack_58,&uStack_50,uVar3,puVar1,puVar2);
  func_0x000107c5fb78(0x2e,0xe100000000000000);
  uVar3 = uStack_48;
  FUN_102161270(uStack_50,uStack_48,0);
  func_0x000107c6142c(uVar3);
  return;
}



/* Entry: 1021618f4; end: 102161a5b;  */

int FUN_1021618f4(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_102161970;
        goto LAB_102161954;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_102161954:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_102161970:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 102161a5c; end: 102161a9b;  */

void FUN_102161a5c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e5ca60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da62e7c;
  func_0x000107c61520(&UNK_10da62e7c,&UNK_1104d4098);
  puRam0000000112e5ca60 = puVar1;
  return;
}



/* Entry: 102161a9c; end: 102161d83;  */

void FUN_102161a9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9f398,&UNK_10d93fb00);
  puVar1 = &UNK_1104d4110;
  func_0x000107c613fc(&UNK_1104d4110,0x68,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_9;
  *(undefined8 *)(puVar1 + 0x38) = param_10;
  *(undefined8 *)(puVar1 + 0x40) = param_11;
  *(undefined8 *)(puVar1 + 0x48) = param_6;
  *(undefined8 *)(puVar1 + 0x50) = param_8;
  *(undefined8 *)(puVar1 + 0x58) = param_7;
  *(undefined8 *)(puVar1 + 0x60) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_102161d84,puVar1);
  return;
}



/* Entry: 102161d84; end: 102161dbf;  */

void FUN_102161d84(void)

{
  long unaff_x20;
  
  func_0x000102161bbc(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60));
  return;
}



/* Entry: 102161dc0; end: 102161dcf;  */

undefined1  [16] FUN_102161dc0(void)

{
  return ZEXT816(0x1104d4138);
}



/* Entry: 102161dd0; end: 10216253b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_102161dd0(void)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  code *pcVar12;
  long lVar13;
  long lVar14;
  undefined8 in_x6;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long lStack_c8;
  long lStack_c0;
  long alStack_b8 [5];
  long alStack_90 [3];
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  func_0x000100083b20(alStack_b8);
  lVar14 = alStack_b8[0];
  uVar15 = *(undefined8 *)(alStack_b8[0] + _DAT_11305e778);
  func_0x000107c6157c(uVar15);
  func_0x000107c61170(lVar14);
  func_0x0001000d224c(alStack_90);
  func_0x000107c61574(uVar15);
  plVar1 = alStack_90;
  func_0x0001000a8868(plVar1,uStack_78);
  uVar2 = 3;
  func_0x00010043c5c0(3,0xd,0,uStack_78,uStack_70,plVar1);
  func_0x0001000834e4(alStack_90);
  func_0x000100083b20(alStack_90);
  lVar14 = alStack_90[0];
  uVar17 = *(undefined8 *)(alStack_90[0] + _DAT_1130806b8);
  func_0x000107c6157c(uVar17);
  func_0x000107c61170(lVar14);
  func_0x0001000285a8(0x112d51878,&UNK_10d9186c0);
  func_0x000100083b20(alStack_90);
  lVar14 = alStack_90[0];
  lVar13 = alStack_90[0];
  func_0x000107c4cb6c();
  func_0x000107c61180();
  func_0x000107c61170(lVar14);
  lVar3 = lVar13;
  func_0x0001000bda74();
  func_0x000107c61170(lVar13);
  func_0x0001000285a8(0x112e06ab8,&UNK_10d9daa38);
  func_0x000100083b20(alStack_90);
  lVar14 = alStack_90[0];
  lVar13 = alStack_90[0];
  func_0x000107c4cc44();
  func_0x000107c61180();
  func_0x000107c61170(lVar14);
  lVar4 = lVar13;
  func_0x0001000bda74();
  func_0x000107c61170(lVar13);
  puVar5 = &UNK_1104d41a8;
  func_0x000107c613fc(&UNK_1104d41a8,0x28,7);
  *(long *)(puVar5 + 0x10) = lVar3;
  *(long *)(puVar5 + 0x18) = lVar4;
  *(undefined8 *)(puVar5 + 0x20) = uVar2;
  func_0x0001000285a8(0x112e5cac0,&UNK_10da62ef0);
  func_0x000107c613fc();
  func_0x000107c6157c(lVar3);
  func_0x000107c6157c(lVar4);
  func_0x000107c6157c(uVar2);
  uVar15 = 0x102162a10;
  func_0x0001000bdd8c(0x102162a10,puVar5);
  func_0x000100083b20(alStack_90);
  lVar14 = alStack_90[0];
  uVar21 = *(undefined8 *)(alStack_90[0] + _DAT_112fd9d28);
  func_0x000107c6157c(uVar21);
  func_0x000107c61170(lVar14);
  func_0x0001000285a8(0x112deed20,&UNK_10d9bbf88);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar17);
  uVar6 = 0x102162a1c;
  func_0x0001000bdd8c(0x102162a1c,uVar17);
  func_0x000100083b20(alStack_90);
  uVar18 = *(undefined8 *)(alStack_90[0] + _DAT_112f8f510);
  func_0x000107c6157c(uVar18);
  func_0x000107c61170(alStack_90[0]);
  func_0x0001000285a8(0x112d382e8,&UNK_10d902020);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar17);
  uVar7 = 0x102162a24;
  func_0x0001000bdd8c(0x102162a24,uVar17);
  func_0x000100083b20(alStack_b8);
  lVar14 = alStack_b8[0];
  FUN_102162a2c(alStack_b8[0] + _DAT_113080760,alStack_90);
  func_0x000107c61170(lVar14);
  FUN_102162a2c(alStack_90,alStack_b8);
  puVar5 = &UNK_1104d41d0;
  func_0x000107c613fc(&UNK_1104d41d0,0x68,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar18;
  *(undefined8 *)(puVar5 + 0x18) = uVar21;
  *(undefined8 *)(puVar5 + 0x20) = uVar2;
  *(undefined8 *)(puVar5 + 0x28) = uVar6;
  *(undefined8 *)(puVar5 + 0x30) = uVar7;
  FUN_102162a70(alStack_b8,puVar5 + 0x38);
  *(undefined8 *)(puVar5 + 0x60) = in_x6;
  func_0x0001000285a8(0x112e5cac8,&UNK_10da62ef8);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar21);
  func_0x000107c6157c(uVar18);
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(uVar7);
  func_0x000107c6157c(in_x6);
  uVar8 = 0x102162a88;
  func_0x0001000bdd8c(0x102162a88,puVar5);
  func_0x000100083b20(alStack_b8);
  lVar14 = alStack_b8[0];
  uVar9 = *(undefined8 *)(alStack_b8[0] + _DAT_112f8f4d8);
  func_0x000107c6157c();
  func_0x000107c61170(lVar14);
  func_0x0001000285a8(0x112d39420,&UNK_10d979900);
  func_0x000100083b20(alStack_b8);
  lVar14 = alStack_b8[0];
  uVar10 = *(undefined8 *)(alStack_b8[0] + _DAT_113083868);
  func_0x000107c61174();
  func_0x000107c61170(lVar14);
  uVar11 = uVar10;
  func_0x0001000bda74();
  func_0x000107c61170(uVar10);
  puVar5 = &UNK_1104d41f8;
  func_0x000107c613fc(&UNK_1104d41f8,0x28,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar9;
  *(undefined8 *)(puVar5 + 0x18) = uVar17;
  *(undefined8 *)(puVar5 + 0x20) = uVar11;
  func_0x0001000285a8(0x112e5cad0,&UNK_10da62f08);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar17);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(uVar11);
  pcVar12 = FUN_102162ad4;
  func_0x0001000bdd8c(FUN_102162ad4,puVar5);
  func_0x000100083b20(alStack_b8);
  lVar14 = alStack_b8[0];
  uVar20 = *(undefined8 *)(alStack_b8[0] + _DAT_112ff4ca0);
  func_0x000107c6157c(uVar20);
  func_0x000107c61170(lVar14);
  func_0x000100083b20(alStack_b8);
  uVar19 = *(undefined8 *)(alStack_b8[0] + _DAT_112fd9e48);
  puVar5 = &UNK_1104d4220;
  func_0x000107c613fc(&UNK_1104d4220,0x50,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar17;
  *(undefined8 *)(puVar5 + 0x18) = uVar21;
  *(undefined8 *)(puVar5 + 0x20) = uVar15;
  *(undefined8 *)(puVar5 + 0x28) = uVar2;
  *(undefined8 *)(puVar5 + 0x30) = uVar8;
  *(undefined8 *)(puVar5 + 0x38) = uVar20;
  *(code **)(puVar5 + 0x40) = pcVar12;
  *(undefined8 *)(puVar5 + 0x48) = uVar19;
  func_0x0001000285a8(0x112e5cad8,&UNK_10da62f10);
  func_0x000107c613fc();
  func_0x000107c61580(uVar19,2);
  func_0x000107c6157c(uVar17);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar21);
  func_0x000107c6157c(uVar20);
  func_0x000107c6157c(uVar15);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(pcVar12);
  uVar10 = 0x102162ae0;
  func_0x0001000bdd8c(0x102162ae0,puVar5);
  uVar16 = *(undefined8 *)(alStack_b8[0] + _DAT_112fd9e40);
  lVar13 = 0;
  FUN_102160de0();
  lVar14 = lVar13;
  func_0x000107c610f8();
  *(undefined8 *)(lVar14 + _DAT_112e5c960) = uVar10;
  *(undefined8 *)(lVar14 + _DAT_112e5c968) = uVar2;
  *(undefined8 *)(lVar14 + _DAT_112e5c970) = uVar16;
  *(code **)(lVar14 + _DAT_112e5c978) = pcVar12;
  puVar5 = PTR_s_init_1125d9248;
  lStack_c8 = lVar14;
  lStack_c0 = lVar13;
  func_0x000107c61580(uVar16,2);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(pcVar12);
  func_0x000107c6157c(uVar10);
  plVar1 = &lStack_c8;
  func_0x000107c61154(plVar1,puVar5);
  func_0x000107c61574(lVar3);
  func_0x000107c61574(lVar4);
  func_0x000107c61574(uVar2);
  func_0x000107c61574(uVar17);
  func_0x000107c61574(uVar18);
  func_0x000107c61574(uVar21);
  func_0x000107c61574(uVar6);
  func_0x000107c61574(uVar7);
  func_0x000107c61574(uVar9);
  func_0x000107c61574(uVar11);
  func_0x000107c61574(uVar15);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(uVar20);
  func_0x000107c61574(pcVar12);
  func_0x000107c61574(uVar19);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(uVar16);
  func_0x000107c61170(alStack_b8[0]);
  func_0x0001000834e4(alStack_90);
  return plVar1;
}



/* Entry: 10216253c; end: 1021625eb;  */

void FUN_10216253c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1021625ec; end: 102162667;  */

/* WARNING: Possible PIC construction at 0x000102162644: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102162648) */

void FUN_1021625ec(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0;
  func_0x000102164340();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x10) = param_2;
  *(undefined8 *)(lVar2 + 0x18) = param_3;
  *(undefined8 *)(lVar2 + 0x20) = param_4;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_1104d45e0;
  *param_1 = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 102162668; end: 10216273b;  */

void FUN_102162668(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x0001000d224c(&uStack_40);
  uVar1 = uStack_40;
  func_0x000107c614f0();
  (**(code **)(*(long *)(lStack_38 + 0x18) + 0x20))();
  func_0x000107c615e8(uStack_40);
  *param_1 = uVar1;
  return;
}



/* Entry: 10216273c; end: 102162837;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10216273c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_68;
  
  func_0x000100083b20(&lStack_68);
  uVar3 = *(undefined8 *)(lStack_68 + _DAT_11303ea08);
  func_0x000107c6157c(uVar3);
  func_0x000107c61170(lStack_68);
  lVar1 = 0;
  func_0x000102164814();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x10) = param_2;
  *(undefined8 *)(lVar2 + 0x18) = param_3;
  *(undefined8 *)(lVar2 + 0x20) = param_4;
  *(undefined8 *)(lVar2 + 0x28) = param_5;
  *(undefined8 *)(lVar2 + 0x30) = param_6;
  FUN_102162a2c(param_7,lVar2 + 0x38);
  *(undefined8 *)(lVar2 + 0x60) = uVar3;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_1104d4668;
  *param_1 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  return;
}



/* Entry: 102162838; end: 1021628c7;  */

/* WARNING: Possible PIC construction at 0x0001021628a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021628a8) */

void FUN_102162838(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  lVar1 = 0;
  func_0x000102161250();
  lVar2 = lVar1;
  func_0x000107c613fc();
  puVar3 = PTR_PTR_1126a95b0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined8 *)(lVar2 + 0x10) = param_2;
  *(undefined8 *)(lVar2 + 0x18) = param_3;
  *(undefined8 *)(lVar2 + 0x20) = param_4;
  *(undefined **)(lVar2 + 0x28) = puVar3;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_1104d3ff0;
  *param_1 = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 1021628c8; end: 1021629f3;  */

void FUN_1021628c8(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  
  lVar1 = 0;
  func_0x000102162e2c();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x10) = param_2;
  *(undefined8 *)(lVar2 + 0x18) = param_3;
  *(undefined8 *)(lVar2 + 0x20) = param_4;
  *(undefined8 *)(lVar2 + 0x28) = param_5;
  *(undefined8 *)(lVar2 + 0x30) = param_6;
  *(undefined8 *)(lVar2 + 0x38) = param_7;
  *(undefined8 *)(lVar2 + 0x40) = param_8;
  *(undefined8 *)(lVar2 + 0x48) = param_9;
  func_0x0001000285a8(0x112e5cae0,&UNK_10da62f18);
  func_0x000107c613fc();
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  pcVar3 = FUN_102162d6c;
  func_0x0001000bdd8c(FUN_102162d6c,0);
  *(code **)(lVar2 + 0x50) = pcVar3;
  uVar4 = 1;
  func_0x000107c60f6c();
  *(undefined8 *)(lVar2 + 0x58) = uVar4;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_1104d42c8;
  *param_1 = lVar2;
  return;
}



/* Entry: 1021629f4; end: 102162a2b;  */

void FUN_1021629f4(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 102162a2c; end: 102162a6f;  */

long FUN_102162a2c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 102162a70; end: 102162a9f;  */

undefined8 * FUN_102162a70(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 102162aa0; end: 102162ad3;  */

void FUN_102162aa0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102162ad4; end: 102162b07;  */

/* WARNING: Possible PIC construction at 0x0001021628a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021628a8) */

void FUN_102162ad4(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar3 = 0;
  func_0x000102161250();
  lVar4 = lVar3;
  func_0x000107c613fc();
  puVar5 = PTR_PTR_1126a95b0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined8 *)(lVar4 + 0x10) = uVar1;
  *(undefined8 *)(lVar4 + 0x18) = uVar2;
  *(undefined8 *)(lVar4 + 0x20) = uVar6;
  *(undefined **)(lVar4 + 0x28) = puVar5;
  param_1[3] = lVar3;
  param_1[4] = (long)&PTR_DAT_1104d3ff0;
  *param_1 = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 102162b08; end: 102162bb3;  */

void FUN_102162b08(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 102162bb4; end: 102162bb7;  */

void FUN_102162bb4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e5cae8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da62f20;
  func_0x000107c61520(&UNK_10da62f20,&UNK_1104d42b8);
  puRam0000000112e5cae8 = puVar1;
  return;
}



/* Entry: 102162bb8; end: 102162bf7;  */

void FUN_102162bb8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e5cae8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da62f20;
  func_0x000107c61520(&UNK_10da62f20,&UNK_1104d42b8);
  puRam0000000112e5cae8 = puVar1;
  return;
}



/* Entry: 102162bf8; end: 102162d6b;  */

void FUN_102162bf8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 102162d6c; end: 102162da7;  */

void FUN_102162d6c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *param_1 = uVar1;
  return;
}



/* Entry: 102162da8; end: 102162e4b;  */

void FUN_102162da8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  return;
}


