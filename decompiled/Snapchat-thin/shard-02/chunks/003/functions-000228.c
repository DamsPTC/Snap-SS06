/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101be2c30; end: 101be2cdb;  */

undefined8 * FUN_101be2c30(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[3];
  uVar1 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[5];
  uVar1 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar2;
  uVar2 = param_1[8];
  param_1[8] = param_2[8];
  func_0x000107c6142c(uVar2);
  uVar2 = param_2[10];
  uVar1 = param_1[10];
  param_1[9] = param_2[9];
  param_1[10] = uVar2;
  func_0x000107c6142c(uVar1);
  param_1[0xb] = param_2[0xb];
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  uVar2 = param_2[0xe];
  uVar1 = param_1[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_1[0xf];
  uVar1 = param_1[0x10];
  uVar3 = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  param_1[0xf] = uVar3;
  func_0x00010006c090(uVar2,uVar1);
  return param_1;
}



/* Entry: 101be2cdc; end: 101be2dcb;  */

int FUN_101be2cdc(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x22] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101be2dcc; end: 101be2ddb;  */

undefined1  [16] FUN_101be2dcc(void)

{
  return ZEXT816(0x110454288);
}



/* Entry: 101be2ddc; end: 101be2f5b;  */

void FUN_101be2ddc(void)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  undefined8 uStack_50;
  undefined4 auStack_48 [2];
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffc0 + -extraout_x8;
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  lVar5 = (long)puVar4 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000100028750();
  lVar1 = lVar2;
  func_0x000100028790(lVar2,0x113803b68);
  func_0x000107c5edd0(puVar4,0xd000000000000053,0x800000010f003130);
  puVar3 = puVar4;
  (**(code **)(lVar6 + 0x30))(puVar4,1,lVar2);
  if ((int)puVar3 != 1) {
    pcVar7 = *(code **)(lVar6 + 0x20);
    (*pcVar7)(lVar5,puVar4,lVar2);
    (*pcVar7)(lVar1,lVar5,lVar2);
    return;
  }
  func_0x0001000293e4(puVar4);
  *(undefined4 *)(lVar5 + -8) = 0;
  *(undefined8 *)(lVar5 + -0x10) = 8;
  func_0x000107c60450("Fatal error",0xb,2,0xd00000000000003b,0x800000010f0031f0,
                      "ExternalMusicNotificationServiceImplementation/ExternalMusicNotificationConstants.swift"
                      ,0x57,2);
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x101be2f5c);
  (*pcVar7)();
}



/* Entry: 101be2f5c; end: 101be2f6f;  */

bool FUN_101be2f5c(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 101be2f70; end: 101be301b;  */

void FUN_101be2f70(void)

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



/* Entry: 101be301c; end: 101be3043;  */

void FUN_101be301c(undefined8 param_1)

{
  if (lRam0000000112e08670 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e67a4bc);
  return;
}



/* Entry: 101be3044; end: 101be3073;  */

void FUN_101be3044(undefined8 param_1,long *param_2,undefined8 param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,param_3);
  return;
}



/* Entry: 101be3074; end: 101be3087;  */

void FUN_101be3074(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_retain_11034f4d0)(param_2);
    return;
  }
  return;
}



/* Entry: 101be3088; end: 101be30c7;  */

void FUN_101be3088(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e08610 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9dd150;
  func_0x000107c61520(&UNK_10d9dd150,&UNK_1104543a0);
  puRam0000000112e08610 = puVar1;
  return;
}



/* Entry: 101be30c8; end: 101be3193;  */

long * FUN_101be30c8(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  bool bVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  
  uVar1 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    uVar3 = 0;
    func_0x000101be4478(0);
    plVar4 = param_2;
    func_0x000107c614c4(param_2,uVar3);
    bVar2 = (int)plVar4 != 1;
    if (bVar2) {
      *param_1 = *param_2;
      func_0x000107c61174();
    }
    else {
      lVar5 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar5 + -8) + 0x10))(param_1,param_2,lVar5);
    }
    func_0x000107c6159c(param_1,uVar3,!bVar2);
    *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x14)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  }
  else {
    lVar5 = *param_2;
    *param_1 = lVar5;
    uVar6 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar5 + (uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 101be3194; end: 101be31f3;  */

void FUN_101be3194(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  
  uVar1 = 0;
  func_0x000101be4478(0);
  puVar2 = param_1;
  func_0x000107c614c4(param_1,uVar1);
  if ((int)puVar2 == 1) {
    lVar3 = 0;
    func_0x000107c5ede0();
                    /* WARNING: Could not recover jumptable at 0x000101be31e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar3 + -8) + 8))(param_1,lVar3);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*param_1);
  return;
}



/* Entry: 101be31f4; end: 101be34ab;  */

undefined8 * FUN_101be31f4(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  
  uVar2 = 0;
  func_0x000101be4478(0);
  puVar3 = param_2;
  func_0x000107c614c4(param_2,uVar2);
  bVar1 = (int)puVar3 != 1;
  if (bVar1) {
    *param_1 = *param_2;
    func_0x000107c61174();
  }
  else {
    lVar4 = 0;
    func_0x000107c5ede0();
    (**(code **)(*(long *)(lVar4 + -8) + 0x10))(param_1,param_2,lVar4);
  }
  func_0x000107c6159c(param_1,uVar2,!bVar1);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x14)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  return param_1;
}



/* Entry: 101be34ac; end: 101be34c3;  */

void FUN_101be34ac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 101be34c4; end: 101be3533;  */

void FUN_101be34c4(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  func_0x000101be4478();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = &UNK_10d9dd210;
    func_0x000107c6153c(param_1,0x100,2,&lStack_30,param_1 + 0x10);
  }
  return;
}



/* Entry: 101be3534; end: 101be3697;  */

int FUN_101be3534(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_101be35b0;
        goto LAB_101be3594;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_101be3594:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_101be35b0:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 101be3698; end: 101be384b;  */

long * FUN_101be3698(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  uint uVar6;
  bool bVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  code *pcVar14;
  
  uVar6 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar6 >> 0x11 & 1) == 0) {
    lVar11 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar11;
    lVar5 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = lVar5;
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
    lVar8 = 0;
    FUN_101be301c();
    lVar13 = *(long *)(lVar8 + -8);
    pcVar14 = *(code **)(lVar13 + 0x30);
    func_0x000107c61434(lVar11);
    func_0x000107c61434(lVar5);
    puVar9 = puVar2;
    (*pcVar14)(puVar2,1,lVar8);
    if ((int)puVar9 == 0) {
      uVar10 = 0;
      func_0x000101be4478(0);
      puVar9 = puVar2;
      func_0x000107c614c4(puVar2,uVar10);
      bVar7 = (int)puVar9 != 1;
      if (bVar7) {
        *puVar1 = *puVar2;
        func_0x000107c61174();
      }
      else {
        lVar11 = 0;
        func_0x000107c5ede0();
        (**(code **)(*(long *)(lVar11 + -8) + 0x10))(puVar1,puVar2,lVar11);
      }
      func_0x000107c6159c(puVar1,uVar10,!bVar7);
      *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar8 + 0x14)) =
           *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar8 + 0x14));
      (**(code **)(lVar13 + 0x38))(puVar1,0,1,lVar8);
    }
    else {
      lVar11 = 0x112e08600;
      func_0x0001000285a8(0x112e08600,&UNK_10d9dd140);
      func_0x000107c610b4(puVar1,puVar2,*(undefined8 *)(*(long *)(lVar11 + -8) + 0x40));
    }
    plVar3 = (long *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
    plVar4 = (long *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
    if (*plVar4 == 0) {
      lVar11 = *plVar4;
      plVar3[1] = plVar4[1];
      *plVar3 = lVar11;
    }
    else {
      lVar11 = plVar4[1];
      *plVar3 = *plVar4;
      plVar3[1] = lVar11;
      func_0x000107c6157c();
    }
    *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x20)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  }
  else {
    lVar11 = *param_2;
    *param_1 = lVar11;
    uVar12 = (ulong)uVar6 & 0xff;
    param_1 = (long *)(lVar11 + (uVar12 + 0x10 & (uVar12 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 101be384c; end: 101be3913;  */

void FUN_101be384c(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x18));
  lVar5 = (long)*(int *)(param_2 + 0x18);
  lVar2 = 0;
  FUN_101be301c();
  lVar4 = param_1 + lVar5;
  (**(code **)(*(long *)(lVar2 + -8) + 0x30))(lVar4,1,lVar2);
  if ((int)lVar4 == 0) {
    uVar3 = 0;
    func_0x000101be4478(0);
    lVar4 = param_1 + lVar5;
    func_0x000107c614c4(lVar4,uVar3);
    if ((int)lVar4 == 1) {
      lVar4 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar4 + -8) + 8))(param_1 + lVar5,lVar4);
    }
    else {
      func_0x000107c61170(*(undefined8 *)(param_1 + lVar5));
    }
  }
  plVar1 = (long *)(param_1 + *(int *)(param_2 + 0x1c));
  if (*plVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(plVar1[1]);
    return;
  }
  return;
}



/* Entry: 101be3914; end: 101be3d2b;  */

undefined8 * FUN_101be3914(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  bool bVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  code *pcVar12;
  
  uVar9 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar9;
  uVar5 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar5;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  lVar7 = 0;
  FUN_101be301c();
  lVar11 = *(long *)(lVar7 + -8);
  pcVar12 = *(code **)(lVar11 + 0x30);
  func_0x000107c61434(uVar9);
  func_0x000107c61434(uVar5);
  puVar8 = puVar2;
  (*pcVar12)(puVar2,1,lVar7);
  if ((int)puVar8 == 0) {
    uVar9 = 0;
    func_0x000101be4478(0);
    puVar8 = puVar2;
    func_0x000107c614c4(puVar2,uVar9);
    bVar6 = (int)puVar8 != 1;
    if (bVar6) {
      *puVar1 = *puVar2;
      func_0x000107c61174();
    }
    else {
      lVar10 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar10 + -8) + 0x10))(puVar1,puVar2,lVar10);
    }
    func_0x000107c6159c(puVar1,uVar9,!bVar6);
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar7 + 0x14)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar7 + 0x14));
    (**(code **)(lVar11 + 0x38))(puVar1,0,1,lVar7);
  }
  else {
    lVar7 = 0x112e08600;
    func_0x0001000285a8(0x112e08600,&UNK_10d9dd140);
    func_0x000107c610b4(puVar1,puVar2,*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  }
  plVar3 = (long *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
  plVar4 = (long *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  if (*plVar4 == 0) {
    lVar7 = *plVar4;
    plVar3[1] = plVar4[1];
    *plVar3 = lVar7;
  }
  else {
    lVar7 = plVar4[1];
    *plVar3 = *plVar4;
    plVar3[1] = lVar7;
    func_0x000107c6157c();
  }
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x20)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  return param_1;
}



/* Entry: 101be3d2c; end: 101be3d67;  */

undefined8 FUN_101be3d2c(undefined8 param_1,code *param_2)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_2)();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 101be3d68; end: 101be3eaf;  */

undefined8 * FUN_101be3d68(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar10 = *param_2;
  uVar12 = param_2[3];
  uVar11 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar10;
  param_1[3] = uVar12;
  param_1[2] = uVar11;
  lVar1 = (long)param_1 + (long)*(int *)(param_3 + 0x18);
  lVar2 = (long)param_2 + (long)*(int *)(param_3 + 0x18);
  lVar6 = 0;
  FUN_101be301c();
  lVar9 = *(long *)(lVar6 + -8);
  lVar8 = lVar2;
  (**(code **)(lVar9 + 0x30))(lVar2,1,lVar6);
  if ((int)lVar8 == 0) {
    lVar7 = 0;
    func_0x000101be4478();
    lVar8 = lVar2;
    func_0x000107c614c4(lVar2,lVar7);
    if ((int)lVar8 == 1) {
      lVar8 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar8 + -8) + 0x20))(lVar1,lVar2,lVar8);
      func_0x000107c6159c(lVar1,lVar7,1);
    }
    else {
      func_0x000107c610b4(lVar1,lVar2,*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
    }
    *(undefined1 *)(lVar1 + *(int *)(lVar6 + 0x14)) =
         *(undefined1 *)(lVar2 + *(int *)(lVar6 + 0x14));
    (**(code **)(lVar9 + 0x38))(lVar1,0,1,lVar6);
  }
  else {
    lVar8 = 0x112e08600;
    func_0x0001000285a8(0x112e08600,&UNK_10d9dd140);
    func_0x000107c610b4(lVar1,lVar2,*(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
  }
  iVar3 = *(int *)(param_3 + 0x20);
  puVar4 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  uVar10 = *puVar4;
  puVar5 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
  puVar5[1] = puVar4[1];
  *puVar5 = uVar10;
  *(undefined1 *)((long)param_1 + (long)iVar3) = *(undefined1 *)((long)param_2 + (long)iVar3);
  return param_1;
}



/* Entry: 101be3eb0; end: 101be411b;  */

undefined8 * FUN_101be3eb0(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  
  uVar3 = param_2[1];
  uVar4 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  func_0x000107c6142c(uVar4);
  uVar3 = param_2[3];
  uVar4 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar3;
  func_0x000107c6142c(uVar4);
  lVar9 = (long)param_1 + (long)*(int *)(param_3 + 0x18);
  lVar8 = (long)param_2 + (long)*(int *)(param_3 + 0x18);
  lVar5 = 0;
  FUN_101be301c();
  lVar10 = *(long *)(lVar5 + -8);
  pcVar11 = *(code **)(lVar10 + 0x30);
  lVar7 = lVar9;
  (*pcVar11)(lVar9,1,lVar5);
  lVar6 = lVar8;
  (*pcVar11)(lVar8,1,lVar5);
  if ((int)lVar7 == 0) {
    if ((int)lVar6 != 0) {
      FUN_101be3d2c(lVar9,FUN_101be301c);
      goto LAB_101be3fac;
    }
    if (param_1 != param_2) {
      FUN_101be3d2c(lVar9,0x101be4478);
      lVar6 = 0;
      func_0x000101be4478();
      lVar7 = lVar8;
      func_0x000107c614c4(lVar8,lVar6);
      if ((int)lVar7 == 1) {
        lVar7 = 0;
        func_0x000107c5ede0();
        (**(code **)(*(long *)(lVar7 + -8) + 0x20))(lVar9,lVar8,lVar7);
        func_0x000107c6159c(lVar9,lVar6,1);
      }
      else {
        func_0x000107c610b4(lVar9,lVar8,*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
      }
    }
    *(undefined1 *)(lVar9 + *(int *)(lVar5 + 0x14)) =
         *(undefined1 *)(lVar8 + *(int *)(lVar5 + 0x14));
  }
  else if ((int)lVar6 == 0) {
    lVar6 = 0;
    func_0x000101be4478();
    lVar7 = lVar8;
    func_0x000107c614c4(lVar8,lVar6);
    if ((int)lVar7 == 1) {
      lVar7 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar7 + -8) + 0x20))(lVar9,lVar8,lVar7);
      func_0x000107c6159c(lVar9,lVar6,1);
    }
    else {
      func_0x000107c610b4(lVar9,lVar8,*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
    }
    *(undefined1 *)(lVar9 + *(int *)(lVar5 + 0x14)) =
         *(undefined1 *)(lVar8 + *(int *)(lVar5 + 0x14));
    (**(code **)(lVar10 + 0x38))(lVar9,0,1,lVar5);
  }
  else {
LAB_101be3fac:
    lVar7 = 0x112e08600;
    func_0x0001000285a8(0x112e08600,&UNK_10d9dd140);
    func_0x000107c610b4(lVar9,lVar8,*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  }
  plVar1 = (long *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
  plVar2 = (long *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  lVar9 = *plVar2;
  if (*plVar1 == 0) {
    if (lVar9 != 0) {
      lVar8 = plVar2[1];
      *plVar1 = lVar9;
      plVar1[1] = lVar8;
      goto LAB_101be40f0;
    }
  }
  else {
    if (lVar9 != 0) {
      lVar7 = plVar2[1];
      lVar8 = plVar1[1];
      *plVar1 = lVar9;
      plVar1[1] = lVar7;
      func_0x000107c61574(lVar8);
      goto LAB_101be40f0;
    }
    func_0x000107c61574(plVar1[1]);
  }
  lVar9 = *plVar2;
  plVar1[1] = plVar2[1];
  *plVar1 = lVar9;
LAB_101be40f0:
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x20)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  return param_1;
}



/* Entry: 101be411c; end: 101be4133;  */

void FUN_101be411c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 101be4134; end: 101be420f;  */

void FUN_101be4134(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puStack_48 = &UNK_10d9dd258;
  puStack_40 = &UNK_10d9dd270;
  lVar1 = 0x13f;
  func_0x000101be41bc();
  if (param_2 < 0x40) {
    lStack_38 = *(long *)(lVar1 + -8) + 0x40;
    puStack_30 = &UNK_10d9dd270;
    puStack_28 = &UNK_10d9dd210;
    func_0x000107c6153c(param_1,0x100,5,&puStack_48,param_1 + 0x10);
  }
  return;
}



/* Entry: 101be4210; end: 101be468b;  */

long * FUN_101be4210(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  
  uVar1 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    plVar3 = param_2;
    func_0x000107c614c4(param_2,param_3);
    bVar2 = (int)plVar3 != 1;
    if (bVar2) {
      *param_1 = *param_2;
      func_0x000107c61174();
    }
    else {
      lVar4 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar4 + -8) + 0x10))(param_1,param_2,lVar4);
    }
    func_0x000107c6159c(param_1,param_3,!bVar2);
  }
  else {
    lVar4 = *param_2;
    *param_1 = lVar4;
    uVar5 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar4 + (uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 101be468c; end: 101be472f;  */

void FUN_101be468c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e087f8,&UNK_10d9dd2c0);
  puVar1 = &UNK_1104543f8;
  func_0x000107c613fc(&UNK_1104543f8,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x0001000823a8(FUN_101be47e8,puVar1);
  return;
}



/* Entry: 101be4730; end: 101be47e7;  */

void FUN_101be4730(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined8 uStack_58;
  
  func_0x000100083b20(&uStack_58);
  func_0x000100083b20(&uStack_70);
  param_1[3] = &UNK_1104544d0;
  param_1[4] = &PTR_DAT_110454410;
  puVar1 = &UNK_110454640;
  func_0x000107c613fc(&UNK_110454640,0x39,7);
  *param_1 = puVar1;
  *(undefined8 *)(puVar1 + 0x10) = uStack_58;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = uStack_70;
  *(undefined8 *)(puVar1 + 0x30) = uStack_68;
  puVar1[0x38] = uStack_60;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  return;
}



/* Entry: 101be47e8; end: 101be47f3;  */

void FUN_101be47e8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined8 uStack_58;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000100083b20(&uStack_58,uVar1,*(undefined8 *)(unaff_x20 + 0x18),uVar2,
                      *(undefined8 *)(unaff_x20 + 0x28));
  func_0x000100083b20(&uStack_70);
  param_1[3] = &UNK_1104544d0;
  param_1[4] = &PTR_DAT_110454410;
  puVar3 = &UNK_110454640;
  func_0x000107c613fc(&UNK_110454640,0x39,7);
  *param_1 = puVar3;
  *(undefined8 *)(puVar3 + 0x10) = uStack_58;
  *(undefined8 *)(puVar3 + 0x18) = uVar1;
  *(undefined8 *)(puVar3 + 0x20) = uVar2;
  *(undefined8 *)(puVar3 + 0x28) = uStack_70;
  *(undefined8 *)(puVar3 + 0x30) = uStack_68;
  puVar3[0x38] = uStack_60;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  return;
}



/* Entry: 101be47f4; end: 101be4f3b;  */

void FUN_101be47f4(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  long extraout_x8;
  long extraout_x8_00;
  long lVar13;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x12;
  long extraout_x12_00;
  long lVar14;
  undefined *puVar15;
  undefined8 *unaff_x20;
  long lVar16;
  undefined *puVar17;
  long lVar18;
  long lVar19;
  undefined *puVar20;
  long lVar21;
  long lVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined **ppuVar25;
  long lVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 auStack_130 [2];
  undefined1 auStack_120 [8];
  undefined8 uStack_118;
  long alStack_110 [4];
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  undefined8 *puStack_d8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  
  lVar6 = 0x112e08808;
  puStack_d8 = param_1;
  func_0x0001000285a8(0x112e08808,&UNK_10d9dd370);
  lStack_f0 = *(long *)(lVar6 + -8);
  lStack_e8 = lVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_f0 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar6 = 0x112e08810;
  alStack_110[3] = (long)alStack_110 - extraout_x8;
  func_0x0001000285a8(0x112e08810,&UNK_10d9dd378);
  lVar22 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar22 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = ((long)alStack_110 - extraout_x8) - extraout_x8_00;
  lVar7 = 0;
  alStack_110[1] = lVar13;
  FUN_101be301c();
  lVar18 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar18 + 0x40));
  lVar13 = lVar13 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar8 = 0x112e08600;
  func_0x0001000285a8(0x112e08600,&UNK_10d9dd140);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar16 = lVar13 - extraout_x8_02;
  lVar8 = 0x112e08818;
  func_0x0001000285a8(0x112e08818,&UNK_10d9dd388);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
  lVar21 = lVar16 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar19 = lVar21 - extraout_x12;
  lVar8 = 0x112e08820;
  func_0x0001000285a8(0x112e08820,&UNK_10d9dd390);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
  lVar14 = lVar19 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar26 = lVar14 - extraout_x12_00;
  lVar8 = 0;
  func_0x000101be3030();
  lStack_e0 = lVar8;
  FUN_101be68a8((long)puStack_d8 + (long)*(int *)(lVar8 + 0x18),lVar16,0x112e08600,&UNK_10d9dd140);
  lVar8 = lVar16;
  alStack_110[2] = lVar7;
  (**(code **)(lVar18 + 0x30))(lVar16,1,lVar7);
  bVar5 = (int)lVar8 == 1;
  if (!bVar5) {
    func_0x000101be6bac(lVar16,lVar13,FUN_101be301c);
    FUN_101be5a88(lVar19,lVar13,unaff_x20);
    func_0x000101be69b4(lVar13,FUN_101be301c);
  }
  (**(code **)(lVar22 + 0x38))(lVar19,bVar5,1,lVar6);
  FUN_101be68a8(lVar19,lVar21,0x112e08818,&UNK_10d9dd388);
  lVar7 = lVar21;
  (**(code **)(lVar22 + 0x30))(lVar21,1,lVar6);
  lVar8 = lStack_e8;
  lVar6 = alStack_110[1];
  bVar5 = (int)lVar7 == 1;
  if (!bVar5) {
    func_0x000101be6b64(lVar21,alStack_110[1],0x112e08810,&UNK_10d9dd378);
    iVar3 = *(int *)(lVar8 + 0x30);
    lVar7 = lVar6;
    func_0x000101be69f0(lVar6,lVar26,FUN_101be301c);
    func_0x00010488b298();
    *(long *)(lVar26 + iVar3) = lVar7;
    func_0x000101be6974(lVar6,0x112e08810,&UNK_10d9dd378);
  }
  func_0x000101be6974(lVar19,0x112e08818,&UNK_10d9dd388);
  lVar6 = lStack_f0;
  (**(code **)(lStack_f0 + 0x38))(lVar26,bVar5,1,lVar8);
  FUN_101be68a8(lVar26,lVar14,0x112e08820,&UNK_10d9dd390);
  lVar7 = lVar14;
  (**(code **)(lVar6 + 0x30))(lVar14,1,lVar8);
  lVar8 = lStack_e0;
  lVar6 = alStack_110[3];
  if ((int)lVar7 == 1) {
    puVar17 = (undefined *)0x0;
  }
  else {
    func_0x000101be6b64(lVar14,alStack_110[3],0x112e08808,&UNK_10d9dd370);
    cVar2 = *(char *)(lVar6 + *(int *)(alStack_110[2] + 0x14));
    puVar17 = PTR_PTR_1126c3378;
    func_0x000107c61168(PTR_PTR_1126c3378);
    if (cVar2 == '\0') {
      func_0x000107c4a978();
    }
    else {
      func_0x000107c44f94();
    }
    func_0x000107c61180();
    func_0x000101be6974(lVar6,0x112e08808,&UNK_10d9dd370);
  }
  func_0x000101be6974(lVar26,0x112e08820,&UNK_10d9dd390);
  puVar4 = puStack_d8;
  plVar1 = (long *)((long)puStack_d8 + (long)*(int *)(lVar8 + 0x1c));
  lVar6 = *plVar1;
  lVar7 = plVar1[1];
  if (lVar6 == 0) {
    uVar24 = 0;
    puVar20 = (undefined *)0x0;
  }
  else {
    uVar24 = *unaff_x20;
    uVar10 = unaff_x20[1];
    uVar23 = unaff_x20[2];
    uStack_88 = unaff_x20[4];
    uStack_90 = unaff_x20[3];
    uStack_80 = *(undefined1 *)(unaff_x20 + 5);
    puVar15 = &UNK_1104545a0;
    func_0x000107c613fc(&UNK_1104545a0,0x50,7);
    uVar27 = *unaff_x20;
    uVar29 = unaff_x20[3];
    uVar28 = unaff_x20[2];
    *(undefined8 *)(puVar15 + 0x18) = unaff_x20[1];
    *(undefined8 *)(puVar15 + 0x10) = uVar27;
    *(undefined8 *)(puVar15 + 0x28) = uVar29;
    *(undefined8 *)(puVar15 + 0x20) = uVar28;
    uVar27 = *(undefined8 *)((long)unaff_x20 + 0x19);
    *(undefined8 *)(puVar15 + 0x31) = *(undefined8 *)((long)unaff_x20 + 0x21);
    *(undefined8 *)(puVar15 + 0x29) = uVar27;
    *(long *)(puVar15 + 0x40) = lVar6;
    *(long *)(puVar15 + 0x48) = lVar7;
    puVar20 = &UNK_1104545c8;
    func_0x000107c613fc(&UNK_1104545c8,0x20,7);
    *(undefined8 *)(puVar20 + 0x10) = 0x101be690c;
    *(undefined **)(puVar20 + 0x18) = puVar15;
    func_0x000107c6157c(uVar24);
    func_0x000107c6157c(uVar10);
    func_0x000107c6157c(uVar23);
    func_0x000101be6938(&uStack_90,&puStack_c0);
    uVar24 = 0x101be6918;
  }
  if (*(char *)((long)puVar4 + (long)*(int *)(lVar8 + 0x20)) == '\x01') {
    puVar9 = PTR_PTR_1126b0c40;
    func_0x000107c61168(PTR_PTR_1126b0c40);
    puVar15 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    FUN_101be3074(lVar6,lVar7);
    func_0x000107c5af88(puVar15);
    func_0x000107c61180();
    func_0x000107c45098(0x4030000000000000,0x4030000000000000,puVar9);
    func_0x000107c61180();
    func_0x000107c61170(puVar15);
    puVar15 = PTR_PTR_1126b15a0;
    func_0x000107c61168();
    func_0x000107c3ee68();
    func_0x000107c61180();
    func_0x000107c61170(puVar9);
  }
  else {
    FUN_101be3074(lVar6,lVar7);
    puVar15 = (undefined *)0x0;
  }
  uVar10 = *puVar4;
  func_0x000107c5fadc(uVar10,puVar4[1]);
  if (puVar4[3] == 0) {
    uVar23 = 0;
    puVar9 = PTR___NSConcreteStackBlock_11034bd00;
  }
  else {
    uVar23 = puVar4[2];
    func_0x000107c5fadc(uVar23);
    puVar9 = PTR___NSConcreteStackBlock_11034bd00;
  }
  ppuVar11 = (undefined **)0x0;
  PTR___NSConcreteStackBlock_11034bd00 = puVar9;
  if (lVar6 != 0) {
    uStack_b8 = 0x42000000;
    puStack_b0 = &UNK_1000f6b44;
    puStack_a8 = &UNK_110454568;
    ppuVar11 = &puStack_c0;
    puStack_c0 = puVar9;
    uStack_a0 = uVar24;
    puStack_98 = puVar20;
    func_0x000107c60bc4(ppuVar11);
    puVar12 = puStack_98;
    func_0x000107c6157c(puVar20);
    func_0x000107c61574(puVar12);
    if (puVar15 != (undefined *)0x0) {
      uStack_b8 = 0x42000000;
      puStack_b0 = &UNK_1000f6b44;
      puStack_a8 = &UNK_110454540;
      ppuVar25 = &puStack_c0;
      puStack_c0 = puVar9;
      uStack_a0 = uVar24;
      puStack_98 = puVar20;
      func_0x000107c60bc4();
      puVar9 = puStack_98;
      func_0x000107c6157c(puVar20);
      func_0x000107c61574(puVar9);
      goto LAB_101be4e60;
    }
  }
  ppuVar25 = (undefined **)0x0;
LAB_101be4e60:
  puVar12 = PTR_PTR_1126b0ae0;
  func_0x000107c61168(PTR_PTR_1126b0ae0);
  *(undefined8 *)(lVar26 + -8) = 0;
  *(undefined1 *)(lVar26 + -0x10) = 1;
  *(undefined ***)(lVar26 + -0x20) = ppuVar25;
  *(undefined8 *)(lVar26 + -0x18) = 0;
  func_0x000107c40b00();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar25);
  func_0x000107c60bd0(ppuVar11);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar23);
  func_0x000100083b20(&puStack_c0);
  puVar9 = puStack_c0;
  func_0x000107c5c2e0(puStack_c0);
  func_0x000107c61170(puVar15);
  func_0x000107c61170(puVar12);
  func_0x000107c615e8(puVar9);
  func_0x00010058d43c(uVar24,puVar20);
  func_0x000107c61170(puVar17);
  return;
}



/* Entry: 101be4f3c; end: 101be5087;  */

void FUN_101be4f3c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long extraout_x8;
  code *pcVar8;
  undefined8 *puVar9;
  
  lVar3 = 0;
  func_0x000101be3030();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar2 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar9 = (undefined8 *)(&stack0xffffffffffffffb0 + lVar2);
  puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x000107c61168();
  func_0x000107c5af9c();
  func_0x000107c61180();
  puVar5 = puVar4;
  func_0x000101be6cd0();
  puVar1 = (undefined8 *)((long)puVar9 + (long)*(int *)(lVar3 + 0x18));
  if (puVar4 == (undefined *)0x0) {
    lVar7 = 0;
    func_0x000101be301c();
    pcVar8 = *(code **)(*(long *)(lVar7 + -8) + 0x38);
  }
  else {
    *puVar1 = puVar4;
    uVar6 = 0;
    func_0x000101be4478(0);
    func_0x000107c6159c(puVar1,uVar6,0);
    lVar7 = 0;
    func_0x000101be301c();
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar7 + 0x14)) = 1;
    pcVar8 = *(code **)(*(long *)(lVar7 + -8) + 0x38);
  }
  (*pcVar8)(puVar1,puVar4 == (undefined *)0x0,1,lVar7);
  *puVar9 = puVar5;
  *(undefined8 *)(&stack0xffffffffffffffb8 + lVar2) = param_2;
  *(undefined8 *)(&stack0xffffffffffffffc0 + lVar2) = 0;
  *(undefined8 *)(&stack0xffffffffffffffc8 + lVar2) = 0;
  puVar1 = (undefined8 *)((long)puVar9 + (long)*(int *)(lVar3 + 0x1c));
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)((long)puVar9 + (long)*(int *)(lVar3 + 0x20)) = 0;
  FUN_101be47f4(puVar9);
  func_0x000101be69b4(puVar9,0x101be3030);
  return;
}



/* Entry: 101be5088; end: 101be594f;  */

void FUN_101be5088(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined1 auStack_b0 [24];
  undefined8 uStack_98;
  long lStack_90;
  long alStack_88 [3];
  undefined8 uStack_70;
  long lStack_68;
  
  func_0x00010008a7c8(alStack_88);
  if (alStack_88[0] == 0) {
    lVar4 = 0;
    func_0x000101be3030();
    pcVar8 = *(code **)(*(long *)(lVar4 + -8) + 0x38);
    uVar7 = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x000107c61168();
    func_0x000107c5af9c();
    func_0x000107c61180();
    puVar3 = puVar2;
    func_0x000101be6da0();
    lVar4 = 0x112d36008;
    func_0x0001000285a8(0x112d36008,&UNK_10d900720);
    func_0x000107c613fc();
    *(undefined8 *)(lVar4 + 0x18) = 2;
    *(undefined8 *)(lVar4 + 0x10) = 1;
    func_0x000100083b20(alStack_88);
    func_0x0001000a8868(alStack_88,uStack_70);
    (**(code **)(lStack_68 + 0x18))(auStack_b0,uStack_70,lStack_68);
    func_0x0001000a8868(auStack_b0,uStack_98);
    uVar7 = uStack_98;
    lVar6 = lStack_90;
    (**(code **)(lStack_90 + 8))();
    *(undefined **)(lVar4 + 0x38) = PTR___sSSN_11034da80;
    uVar5 = uVar7;
    func_0x00010075bbf0();
    *(undefined8 *)(lVar4 + 0x40) = uVar5;
    *(undefined8 *)(lVar4 + 0x20) = uVar7;
    *(long *)(lVar4 + 0x28) = lVar6;
    func_0x0001000834e4(auStack_b0);
    func_0x0001000834e4(alStack_88);
    uVar7 = param_3;
    func_0x000107c5fb00(puVar3,param_3,lVar4);
    func_0x000107c6142c(param_3);
    func_0x000107c61574(alStack_88[0]);
    lVar4 = 0;
    func_0x000101be3030();
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar4 + 0x18));
    if (puVar2 == (undefined *)0x0) {
      lVar6 = 0;
      func_0x000101be301c();
      pcVar8 = *(code **)(*(long *)(lVar6 + -8) + 0x38);
    }
    else {
      *puVar1 = puVar2;
      uVar5 = 0;
      func_0x000101be4478(0);
      func_0x000107c6159c(puVar1,uVar5,0);
      lVar6 = 0;
      func_0x000101be301c();
      *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x14)) = 1;
      pcVar8 = *(code **)(*(long *)(lVar6 + -8) + 0x38);
    }
    (*pcVar8)(puVar1,puVar2 == (undefined *)0x0,1,lVar6);
    *param_1 = puVar3;
    param_1[1] = uVar7;
    param_1[2] = 0;
    param_1[3] = 0;
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar4 + 0x1c));
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined1 *)((long)param_1 + (long)*(int *)(lVar4 + 0x20)) = 0;
    pcVar8 = *(code **)(*(long *)(lVar4 + -8) + 0x38);
    uVar7 = 0;
  }
  (*pcVar8)(param_1,uVar7,1,lVar4);
  return;
}



/* Entry: 101be5950; end: 101be5967;  */

void FUN_101be5950(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101be5968,0,0);
  return;
}



/* Entry: 101be5968; end: 101be59cf;  */

void FUN_101be5968(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x20) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101be59d0,uVar1,uVar2);
  return;
}



/* Entry: 101be59d0; end: 101be5a07;  */

void FUN_101be59d0(void)

{
  code *pcVar1;
  long unaff_x22;
  
  pcVar1 = *(code **)(unaff_x22 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x20));
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x000101be5a04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101be5a08; end: 101be5a1f;  */

void FUN_101be5a08(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101be5a20,0,0);
  return;
}



/* Entry: 101be5a20; end: 101be5a87;  */

void FUN_101be5a20(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x20) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x101be6bf8,uVar1,uVar2);
  return;
}



/* Entry: 101be5a88; end: 101be5d2b;  */

void FUN_101be5a88(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  long extraout_x8;
  ulong uVar6;
  long extraout_x12;
  code *pcVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 uStack_e0;
  uint uStack_d4;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined1 auStack_b0 [40];
  undefined8 auStack_88 [5];
  
  lVar2 = 0;
  lStack_b8 = param_1;
  func_0x000107c5ede0();
  lVar10 = *(long *)(lVar2 + -8);
  lVar13 = *(long *)(lVar10 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = (long)&uStack_e0 - (lVar13 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar12 - extraout_x12;
  lVar3 = 0;
  func_0x000101be4478();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  puVar14 = (undefined8 *)(lVar11 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000101be69f0(param_2,puVar14);
  puVar4 = puVar14;
  func_0x000107c614c4(puVar14,lVar3);
  if ((int)puVar4 == 1) {
    pcVar7 = *(code **)(lVar10 + 0x20);
    (*pcVar7)(lVar11,puVar14,lVar2);
    uVar8 = 0x112d4f918;
    func_0x0001000285a8(0x112d4f918,&UNK_10d933050);
    uStack_c8 = *(undefined8 *)(param_3 + 0x18);
    uStack_d0 = *(undefined8 *)(param_3 + 0x20);
    uStack_d4 = (uint)*(byte *)(param_3 + 0x28);
    uStack_c0 = uVar8;
    func_0x000100083b20(auStack_88);
    FUN_101be6a34(auStack_88,auStack_b0);
    (**(code **)(lVar10 + 0x10))(lVar12,lVar11,lVar2);
    uVar6 = (ulong)*(byte *)(lVar10 + 0x50);
    uVar9 = uVar6 + 0x38 & (uVar6 ^ 0xffffffffffffffff);
    puVar5 = &UNK_1104545f0;
    func_0x000107c613fc(&UNK_1104545f0,uVar9 + lVar13,uVar6 | 7);
    FUN_101be6a34(auStack_b0,puVar5 + 0x10);
    (*pcVar7)(puVar5 + uVar9,lVar12,lVar2);
    uVar8 = uStack_c8;
    func_0x000104887c7c(uStack_c8,uStack_d0,uStack_d4,4,0xd00000000000001a,0x800000010f003230,
                        &UNK_10d9dd3a8,puVar5);
    func_0x000107c61574(puVar5);
    (**(code **)(lVar10 + 8))(lVar11,lVar2);
    lVar2 = 0x112e08810;
    func_0x0001000285a8(0x112e08810,&UNK_10d9dd378);
    lVar3 = lStack_b8;
    iVar1 = *(int *)(lVar2 + 0x30);
    func_0x000101be69f0(param_2,lStack_b8,FUN_101be301c);
    *(undefined8 *)(lVar3 + iVar1) = uVar8;
  }
  else {
    uVar8 = *puVar14;
    lVar2 = 0x112e08810;
    func_0x0001000285a8(0x112e08810,&UNK_10d9dd378);
    lVar3 = lStack_b8;
    iVar1 = *(int *)(lVar2 + 0x30);
    func_0x000101be69f0(param_2,lStack_b8,FUN_101be301c);
    func_0x0001000285a8(0x112d4f918,&UNK_10d933050);
    puVar4 = auStack_88;
    auStack_88[0] = uVar8;
    func_0x000104888f7c();
    func_0x000107c61170(uVar8);
    *(undefined8 **)(lVar3 + iVar1) = puVar4;
  }
  return;
}



/* Entry: 101be5d2c; end: 101be5d47;  */

void FUN_101be5d2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101be5d48,0,0);
  return;
}



/* Entry: 101be5d48; end: 101be5dc7;  */

void FUN_101be5d48(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  int *piVar6;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x18);
  uVar2 = *(undefined8 *)(lVar4 + 0x18);
  lVar3 = *(long *)(lVar4 + 0x20);
  func_0x0001000a8868(lVar4,uVar2);
  piVar6 = *(int **)(lVar3 + 0x10);
  iVar1 = *piVar6;
  plVar5 = (long *)(ulong)(uint)piVar6[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x28) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_101be5dc8;
                    /* WARNING: Could not recover jumptable at 0x000101be5dc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))(*(undefined8 *)(unaff_x22 + 0x20),uVar2,lVar3);
  return;
}



/* Entry: 101be5dc8; end: 101be5e17;  */

void FUN_101be5dc8(undefined8 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x30) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101be5e18,0,0);
  return;
}



/* Entry: 101be5e18; end: 101be5e2f;  */

void FUN_101be5e18(void)

{
  long unaff_x22;
  
  **(undefined8 **)(unaff_x22 + 0x10) = *(undefined8 *)(unaff_x22 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x000101be5e2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101be5e30; end: 101be5edb;  */

/* WARNING: Possible PIC construction at 0x000101be5ebc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101be5ec0) */

void FUN_101be5e30(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined *puVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined1 *)(param_1 + 0x28);
  puVar4 = &UNK_110454618;
  func_0x000107c613fc(&UNK_110454618,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = param_2;
  *(undefined8 *)(puVar4 + 0x18) = param_3;
  func_0x000107c6157c(param_3);
  func_0x0001001ca524(uVar1,uVar2,uVar3,4,0,0,&UNK_10d9dd3b8,puVar4,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar4);
  return;
}



/* Entry: 101be5edc; end: 101be5f57;  */

void FUN_101be5edc(undefined8 param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x22;
  
  uVar2 = 0;
  func_0x000107c5fcec();
  *(undefined8 *)(unaff_x22 + 0x10) = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x18) = uVar2;
  iVar1 = *param_2;
  plVar3 = (long *)(ulong)(uint)param_2[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x20) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101be5f58;
                    /* WARNING: Could not recover jumptable at 0x000101be5f54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_2))();
  return;
}



/* Entry: 101be5f58; end: 101be5fbb;  */

void FUN_101be5f58(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *unaff_x22;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x20);
  uVar2 = *(undefined8 *)(*unaff_x22 + 0x10);
  func_0x000107c615c0(uVar1);
  func_0x000100eea164();
  func_0x000107c5fca8(uVar2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101be5fbc,uVar2,uVar1);
  return;
}



/* Entry: 101be5fbc; end: 101be5feb;  */

void FUN_101be5fbc(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x000101be5fe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101be5fec; end: 101be605b;  */

void FUN_101be5fec(void)

{
  FUN_101be62f4();
  return;
}



/* Entry: 101be605c; end: 101be6073;  */

void FUN_101be605c(void)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  long lVar3;
  undefined8 *unaff_x20;
  long lVar4;
  long lVar5;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined7 uStack_57;
  undefined1 uStack_50;
  undefined8 uStack_4f;
  
  lVar1 = 0x112e08800;
  func_0x0001000285a8(0x112e08800,&UNK_10d9dd2c8);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = (long)&uStack_70 - extraout_x8;
  lVar2 = 0;
  func_0x000101be3030();
  lVar5 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  lVar4 = lVar3 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uStack_68 = unaff_x20[1];
  uStack_70 = *unaff_x20;
  uStack_60 = unaff_x20[2];
  uStack_58 = (undefined1)unaff_x20[3];
  uStack_4f = *(undefined8 *)((long)unaff_x20 + 0x21);
  uStack_57 = (undefined7)*(undefined8 *)((long)unaff_x20 + 0x19);
  uStack_50 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x20 + 0x19) >> 0x38);
  FUN_101be5088(lVar3);
  lVar1 = lVar3;
  (**(code **)(lVar5 + 0x30))(lVar3,1,lVar2);
  if ((int)lVar1 == 1) {
    func_0x000101be6974(lVar3,0x112e08800,&UNK_10d9dd2c8);
  }
  else {
    func_0x000101be6bac(lVar3,lVar4,0x101be3030);
    FUN_101be47f4(lVar4);
    func_0x000101be69b4(lVar4,0x101be3030);
  }
  return;
}



/* Entry: 101be6074; end: 101be619b;  */

void FUN_101be6074(undefined8 param_1,undefined8 param_2,code *param_3)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  long lVar3;
  undefined8 *unaff_x20;
  long lVar4;
  long lVar5;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined7 uStack_57;
  undefined1 uStack_50;
  undefined8 uStack_4f;
  
  lVar1 = 0x112e08800;
  func_0x0001000285a8(0x112e08800,&UNK_10d9dd2c8);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = (long)&uStack_70 - extraout_x8;
  lVar2 = 0;
  func_0x000101be3030();
  lVar5 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  lVar4 = lVar3 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uStack_68 = unaff_x20[1];
  uStack_70 = *unaff_x20;
  uStack_60 = unaff_x20[2];
  uStack_58 = (undefined1)unaff_x20[3];
  uStack_4f = *(undefined8 *)((long)unaff_x20 + 0x21);
  uStack_57 = (undefined7)*(undefined8 *)((long)unaff_x20 + 0x19);
  uStack_50 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x20 + 0x19) >> 0x38);
  (*param_3)(lVar3);
  lVar1 = lVar3;
  (**(code **)(lVar5 + 0x30))(lVar3,1,lVar2);
  if ((int)lVar1 == 1) {
    func_0x000101be6974(lVar3,0x112e08800,&UNK_10d9dd2c8);
  }
  else {
    func_0x000101be6bac(lVar3,lVar4,0x101be3030);
    FUN_101be47f4(lVar4);
    func_0x000101be69b4(lVar4,0x101be3030);
  }
  return;
}



/* Entry: 101be619c; end: 101be61b3;  */

void FUN_101be619c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  long lVar3;
  undefined8 *unaff_x20;
  long lVar4;
  long lVar5;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined7 uStack_67;
  undefined1 uStack_60;
  undefined8 uStack_5f;
  
  lVar1 = 0x112e08800;
  func_0x0001000285a8(0x112e08800,&UNK_10d9dd2c8);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = (long)&uStack_80 - extraout_x8;
  lVar2 = 0;
  func_0x000101be3030();
  lVar5 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  lVar4 = lVar3 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uStack_78 = unaff_x20[1];
  uStack_80 = *unaff_x20;
  uStack_70 = unaff_x20[2];
  uStack_68 = (undefined1)unaff_x20[3];
  uStack_5f = *(undefined8 *)((long)unaff_x20 + 0x21);
  uStack_67 = (undefined7)*(undefined8 *)((long)unaff_x20 + 0x19);
  uStack_60 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x20 + 0x19) >> 0x38);
  (*(code *)0x101be5520)(lVar3,param_1,param_2);
  lVar1 = lVar3;
  (**(code **)(lVar5 + 0x30))(lVar3,1,lVar2);
  if ((int)lVar1 == 1) {
    func_0x000101be6974(lVar3,0x112e08800,&UNK_10d9dd2c8);
  }
  else {
    func_0x000101be6bac(lVar3,lVar4,0x101be3030);
    FUN_101be47f4(lVar4);
    func_0x000101be69b4(lVar4,0x101be3030);
  }
  return;
}



/* Entry: 101be61b4; end: 101be62f3;  */

void FUN_101be61b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  long lVar3;
  undefined8 *unaff_x20;
  long lVar4;
  long lVar5;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined7 uStack_67;
  undefined1 uStack_60;
  undefined8 uStack_5f;
  
  lVar1 = 0x112e08800;
  func_0x0001000285a8(0x112e08800,&UNK_10d9dd2c8);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = (long)&uStack_80 - extraout_x8;
  lVar2 = 0;
  func_0x000101be3030();
  lVar5 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  lVar4 = lVar3 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uStack_78 = unaff_x20[1];
  uStack_80 = *unaff_x20;
  uStack_70 = unaff_x20[2];
  uStack_68 = (undefined1)unaff_x20[3];
  uStack_5f = *(undefined8 *)((long)unaff_x20 + 0x21);
  uStack_67 = (undefined7)*(undefined8 *)((long)unaff_x20 + 0x19);
  uStack_60 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x20 + 0x19) >> 0x38);
  (*param_5)(lVar3,param_1,param_2);
  lVar1 = lVar3;
  (**(code **)(lVar5 + 0x30))(lVar3,1,lVar2);
  if ((int)lVar1 == 1) {
    func_0x000101be6974(lVar3,0x112e08800,&UNK_10d9dd2c8);
  }
  else {
    func_0x000101be6bac(lVar3,lVar4,0x101be3030);
    FUN_101be47f4(lVar4);
    func_0x000101be69b4(lVar4,0x101be3030);
  }
  return;
}



/* Entry: 101be62f4; end: 101be6533;  */

void FUN_101be62f4(void)

{
  undefined8 *puVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  code *pcVar9;
  long extraout_x12;
  long *plVar10;
  undefined1 *puVar11;
  long lVar12;
  
  lVar3 = 0x112e08608;
  puVar8 = &UNK_10d9dd3c0;
  func_0x0001000285a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  puVar11 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = (long)puVar11 - extraout_x12;
  lVar4 = 0;
  func_0x000101be3030();
  lVar3 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  plVar10 = (long *)(lVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  FUN_101be6c04();
  if (lRam0000000112e085f8 != -1) {
    func_0x000107c61568(0x112e085f8,FUN_101be2ddc);
  }
  lVar5 = 0;
  func_0x000107c5ede0();
  lVar6 = lVar5;
  func_0x000100028790();
  (**(code **)(*(long *)(lVar5 + -8) + 0x10))(lVar12,lVar6,lVar5);
  lVar6 = 0;
  func_0x000101be4478();
  func_0x000107c6159c(lVar12,lVar6,1);
  lVar5 = *(long *)(lVar6 + -8);
  (**(code **)(lVar5 + 0x38))(lVar12,0,1,lVar6);
  *plVar10 = lVar3;
  plVar10[1] = (long)puVar8;
  plVar10[2] = 0;
  plVar10[3] = 0;
  lVar3 = (long)plVar10 + (long)*(int *)(lVar4 + 0x18);
  FUN_101be6b64(lVar12,puVar11,0x112e08608,&UNK_10d9dd3c0);
  puVar7 = puVar11;
  (**(code **)(lVar5 + 0x30))(puVar11,1,lVar6);
  bVar2 = (int)puVar7 != 1;
  if (bVar2) {
    func_0x000101be6bac(puVar11,lVar3,0x101be4478);
    lVar12 = 0;
    func_0x000101be301c();
    *(undefined1 *)(lVar3 + *(int *)(lVar12 + 0x14)) = 0;
    pcVar9 = *(code **)(*(long *)(lVar12 + -8) + 0x38);
  }
  else {
    lVar12 = 0;
    func_0x000101be301c();
    pcVar9 = *(code **)(*(long *)(lVar12 + -8) + 0x38);
  }
  (*pcVar9)(lVar3,!bVar2,1,lVar12);
  puVar1 = (undefined8 *)((long)plVar10 + (long)*(int *)(lVar4 + 0x1c));
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)((long)plVar10 + (long)*(int *)(lVar4 + 0x20)) = 0;
  FUN_101be47f4(plVar10);
  func_0x000101be69b4(plVar10,0x101be3030);
  return;
}



/* Entry: 101be6534; end: 101be6543;  */

undefined1  [16] FUN_101be6534(void)

{
  return ZEXT816(0x110454458);
}



/* Entry: 101be6544; end: 101be65ab;  */

long FUN_101be6544(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 101be65ac; end: 101be661f;  */

undefined8 * FUN_101be65ac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  uVar1 = param_2[2];
  uVar3 = param_2[3];
  param_1[2] = uVar1;
  uVar5 = param_2[4];
  uVar4 = *(undefined1 *)(param_2 + 5);
  func_0x000107c6157c();
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar1);
  func_0x0001000ab9d4(uVar3,uVar5,uVar4);
  param_1[3] = uVar3;
  param_1[4] = uVar5;
  *(undefined1 *)(param_1 + 5) = uVar4;
  return param_1;
}



/* Entry: 101be6620; end: 101be66bf;  */

undefined8 * FUN_101be6620(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  
  uVar6 = *param_1;
  *param_1 = *param_2;
  func_0x000107c6157c();
  func_0x000107c61574(uVar6);
  uVar6 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c6157c();
  func_0x000107c61574(uVar6);
  uVar6 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c6157c();
  func_0x000107c61574(uVar6);
  uVar6 = param_2[3];
  uVar2 = param_2[4];
  uVar4 = *(undefined1 *)(param_2 + 5);
  func_0x0001000ab9d4(uVar6,uVar2,uVar4);
  uVar1 = param_1[3];
  uVar3 = param_1[4];
  param_1[3] = uVar6;
  param_1[4] = uVar2;
  uVar5 = *(undefined1 *)(param_1 + 5);
  *(undefined1 *)(param_1 + 5) = uVar4;
  func_0x00010007d980(uVar1,uVar3,uVar5);
  return param_1;
}



/* Entry: 101be66c0; end: 101be6727;  */

undefined8 * FUN_101be66c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  func_0x000107c61574(*param_1);
  uVar3 = param_1[1];
  uVar4 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar4;
  func_0x000107c61574(uVar3);
  uVar3 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61574(uVar3);
  uVar1 = *(undefined1 *)(param_2 + 5);
  uVar3 = param_1[3];
  uVar4 = param_1[4];
  uVar5 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar5;
  uVar2 = *(undefined1 *)(param_1 + 5);
  *(undefined1 *)(param_1 + 5) = uVar1;
  func_0x00010007d980(uVar3,uVar4,uVar2);
  return param_1;
}



/* Entry: 101be6728; end: 101be67cb;  */

int FUN_101be6728(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x29) != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101be67cc; end: 101be681b;  */

void FUN_101be67cc(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x101be6bfc;
  plVar3[2] = lVar1;
  plVar3[3] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101be5a20,0,0);
  return;
}



/* Entry: 101be681c; end: 101be686b;  */

void FUN_101be681c(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101be686c;
  plVar3[2] = lVar1;
  plVar3[3] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101be5968,0,0);
  return;
}



/* Entry: 101be686c; end: 101be68a7;  */

void FUN_101be686c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101be68a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101be68a8; end: 101be68ef;  */

undefined8 FUN_101be68a8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 101be68f0; end: 101be6917;  */

void FUN_101be68f0(long param_1,long param_2)

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



/* Entry: 101be6918; end: 101be6a33;  */

void FUN_101be6918(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101be6a34; end: 101be6a4b;  */

undefined8 * FUN_101be6a34(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 101be6a4c; end: 101be6ac3;  */

void FUN_101be6a4c(long param_1)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  uVar3 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  plVar2 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_101be6ac4;
  plVar2[3] = unaff_x20 + 0x10;
  plVar2[4] = unaff_x20 + (uVar3 + 0x38 & (uVar3 ^ 0xffffffffffffffff));
  plVar2[2] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101be5d48,0,0);
  return;
}



/* Entry: 101be6ac4; end: 101be6aff;  */

void FUN_101be6ac4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101be6afc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101be6b00; end: 101be6b63;  */

void FUN_101be6b00(void)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long unaff_x20;
  long unaff_x22;
  
  piVar2 = *(int **)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar6 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = 0x101be6c00;
  lVar4 = 0;
  func_0x000107c5fcec(0,piVar2,uVar3);
  plVar6[2] = lVar4;
  func_0x000107c5fce8();
  plVar6[3] = lVar4;
  iVar1 = *piVar2;
  plVar5 = (long *)(ulong)(uint)piVar2[1];
  func_0x000107c615b8();
  plVar6[4] = (long)plVar5;
  *plVar5 = (long)plVar6;
  plVar5[1] = (long)FUN_101be5f58;
                    /* WARNING: Could not recover jumptable at 0x000101be5f54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))();
  return;
}



/* Entry: 101be6b64; end: 101be6bef;  */

undefined8 FUN_101be6b64(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x20))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 101be6bf0; end: 101be6c03;  */

void FUN_101be6bf0(long param_1,long param_2)

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



/* Entry: 101be6c04; end: 101be7267;  */

undefined1  [16] FUN_101be6c04(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffe6;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f003370);
  uVar3 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f003270);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101be6cd0);
  (*pcVar1)();
}



/* Entry: 101be7268; end: 101be729f;  */

undefined1  [16] FUN_101be7268(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f003390;
  auVar1._0_8_ = 0xd000000000000023;
  return auVar1;
}



/* Entry: 101be72a0; end: 101be7367;  */

void FUN_101be72a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e08828,&UNK_10d9dd3d0);
  puVar1 = &UNK_1104546f0;
  func_0x000107c613fc(&UNK_1104546f0,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x0001000823a8(FUN_101be7368,puVar1);
  return;
}



/* Entry: 101be7368; end: 101be7437;  */

/* WARNING: Possible PIC construction at 0x000101be73f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101be7404: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101be7414: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101be7408) */
/* WARNING: Removing unreachable block (ram,0x000101be73f8) */
/* WARNING: Removing unreachable block (ram,0x000101be7418) */

void FUN_101be7368(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  FUN_101bee178();
  lVar7 = param_2;
  func_0x000107c613fc();
  func_0x000107c61474();
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_101beda4c();
  *(undefined **)(lVar7 + 0xa0) = puVar8;
  FUN_101bedbd8();
  *(undefined **)(lVar7 + 0xa8) = puVar9;
  *(undefined1 *)(lVar7 + 0xb0) = 0;
  *(undefined8 *)(lVar7 + 0x70) = uVar2;
  *(undefined8 *)(lVar7 + 0x78) = uVar1;
  *(undefined8 *)(lVar7 + 0x80) = uVar5;
  *(undefined8 *)(lVar7 + 0x88) = uVar3;
  *(undefined8 *)(lVar7 + 0x90) = uVar6;
  *(undefined8 *)(lVar7 + 0x98) = uVar4;
  param_1[3] = param_2;
  param_1[4] = (long)&PTR_DAT_1104547a8;
  *param_1 = lVar7;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 101be7438; end: 101be74cb;  */

long FUN_101be7438(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  func_0x000107c61474();
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_101beda4c();
  *(undefined **)(unaff_x20 + 0xa0) = puVar1;
  FUN_101bedbd8();
  *(undefined **)(unaff_x20 + 0xa8) = puVar2;
  *(undefined1 *)(unaff_x20 + 0xb0) = 0;
  *(undefined8 *)(unaff_x20 + 0x70) = param_3;
  *(undefined8 *)(unaff_x20 + 0x78) = param_1;
  *(undefined8 *)(unaff_x20 + 0x80) = param_4;
  *(undefined8 *)(unaff_x20 + 0x88) = param_5;
  *(undefined8 *)(unaff_x20 + 0x90) = param_6;
  *(undefined8 *)(unaff_x20 + 0x98) = param_2;
  return unaff_x20;
}



/* Entry: 101be74cc; end: 101be7547;  */

void FUN_101be74cc(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined1 param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = param_3;
  *(undefined8 *)(unaff_x22 + 0x50) = unaff_x20;
  *(undefined1 *)(unaff_x22 + 0x9d) = param_4;
  *(undefined4 *)(unaff_x22 + 0x98) = param_2;
  *(undefined8 *)(unaff_x22 + 0x40) = param_1;
  lVar1 = 0x112d5ed18;
  func_0x0001000285a8(0x112d5ed18,&UNK_10d925c50);
  uVar3 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x58) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x60) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101be7548);
  return;
}



/* Entry: 101be7548; end: 101be75e7;  */

void FUN_101be7548(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  long *plVar5;
  int *piVar6;
  long unaff_x22;
  
  uVar4 = *(uint *)(unaff_x22 + 0x98);
  func_0x000100083b20(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar3 = *(long *)(unaff_x22 + 0x30);
  func_0x0001000a8868(unaff_x22 + 0x10,uVar2);
  piVar6 = *(int **)(lVar3 + 8);
  iVar1 = *piVar6;
  plVar5 = (long *)(ulong)(uint)piVar6[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x68) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_101be75e8;
                    /* WARNING: Could not recover jumptable at 0x000101be75e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))
            (plVar5,uVar4 & 0xffffff,*(undefined8 *)(unaff_x22 + 0x48),
             *(undefined1 *)(unaff_x22 + 0x9d),uVar2,lVar3);
  return;
}



/* Entry: 101be75e8; end: 101be7653;  */

void FUN_101be75e8(undefined1 param_1)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x70) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x68));
  if (unaff_x20 == 0) {
    *(undefined1 *)(lVar2 + 0x9e) = param_1;
    pcVar1 = FUN_101be7654;
  }
  else {
    pcVar1 = FUN_101be7884;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,*(undefined8 *)(lVar2 + 0x50),0);
  return;
}



/* Entry: 101be7654; end: 101be7787;  */

void FUN_101be7654(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined4 uVar3;
  char cVar4;
  undefined1 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long *plVar9;
  long unaff_x22;
  
  cVar4 = *(char *)(unaff_x22 + 0x9e);
  func_0x0001000834e4(unaff_x22 + 0x10);
  if (cVar4 == '\x01') {
    uVar8 = *(undefined8 *)(unaff_x22 + 0x40);
    lVar6 = 0;
    func_0x000103a814dc();
    (**(code **)(*(long *)(lVar6 + -8) + 0x38))(uVar8,1,1,lVar6);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x58);
    func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x60));
    func_0x000107c615c0(uVar8);
                    /* WARNING: Could not recover jumptable at 0x000101be76e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar5 = *(undefined1 *)(unaff_x22 + 0x9d);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar3 = *(undefined4 *)(unaff_x22 + 0x98);
  puVar7 = &UNK_110454718;
  func_0x000107c613fc(&UNK_110454718,0x29,7);
  *(undefined **)(unaff_x22 + 0x78) = puVar7;
  *(undefined8 *)(puVar7 + 0x10) = uVar1;
  puVar7[0x18] = (char)uVar3;
  puVar7[0x19] = (char)((uint)uVar3 >> 8);
  puVar7[0x1a] = (char)((uint)uVar3 >> 0x10);
  *(undefined8 *)(puVar7 + 0x20) = uVar8;
  puVar7[0x28] = uVar5;
  plVar9 = (long *)0x1c0;
  func_0x000107c6157c(uVar1);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x80) = plVar9;
  *plVar9 = unaff_x22;
  plVar9[1] = (long)FUN_101be7788;
  lVar6 = *(long *)(unaff_x22 + 0x50);
  lVar2 = *(long *)(unaff_x22 + 0x58);
  plVar9[0x2b] = (long)puVar7;
  plVar9[0x2c] = lVar6;
  plVar9[0x29] = lVar2;
  plVar9[0x2a] = (long)&UNK_10d9dd3f0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101beabe0,lVar6,0);
  return;
}



/* Entry: 101be7788; end: 101be77f3;  */

void FUN_101be7788(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long unaff_x20;
  long lVar3;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x78);
  *(long *)(lVar3 + 0x88) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x80));
  func_0x000107c61574(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_101be77f4;
  }
  else {
    pcVar2 = FUN_101be78c8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,*(undefined8 *)(lVar3 + 0x50),0);
  return;
}



/* Entry: 101be77f4; end: 101be7883;  */

void FUN_101be77f4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  long lVar3;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
  lVar3 = *(long *)(unaff_x22 + 0x50);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x40);
  FUN_101bedf7c(*(undefined8 *)(unaff_x22 + 0x58),uVar1,0x112d5ed18,&UNK_10d925c50);
  *(undefined1 *)(lVar3 + 0xb0) = 0;
  FUN_101bedf7c(uVar1,uVar2,0x112d5ed18,&UNK_10d925c50);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x60));
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101be7880. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101be7884; end: 101be78c7;  */

void FUN_101be7884(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x60));
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101be78c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101be78c8; end: 101be79a7;  */

void FUN_101be78c8(void)

{
  long *plVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x88);
  func_0x000107c614b0();
  uVar3 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  lVar4 = unaff_x22 + 0x9c;
  func_0x000107c6147c(lVar4,(undefined8 *)(unaff_x22 + 0x38),uVar3,&UNK_1106c6770,0);
  if (((int)lVar4 != 0) && (*(char *)(unaff_x22 + 0x9c) == '\x01')) {
    uVar2 = *(uint *)(unaff_x22 + 0x98);
    func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x88));
    plVar5 = (long *)0xb0;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x90) = plVar5;
    *plVar5 = unaff_x22;
    plVar5[1] = (long)FUN_101be79a8;
    lVar4 = *(long *)(unaff_x22 + 0x48);
    plVar1 = *(long **)(unaff_x22 + 0x50);
    *(undefined1 *)((long)plVar5 + 0xac) = *(undefined1 *)(unaff_x22 + 0x9d);
    plVar5[0x11] = lVar4;
    plVar5[0x12] = (long)plVar1;
    *(uint *)(plVar5 + 0x15) = uVar2 & 0xffffff;
    plVar5[0x13] = *plVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_101bea514,plVar1,0);
    return;
  }
  func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x38));
  uVar3 = *(undefined8 *)(unaff_x22 + 0x58);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x60));
  func_0x000107c615c0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000101be79a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101be79a8; end: 101be79f3;  */

void FUN_101be79a8(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x50);
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x90));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101be79f4,uVar1,0);
  return;
}



/* Entry: 101be79f4; end: 101be7a6b;  */

void FUN_101be79f4(undefined1 *param_1)

{
  undefined8 uVar1;
  long unaff_x22;
  
  FUN_101be27fc();
  func_0x000107c613f8(&UNK_1106c6770,param_1,0,0);
  *param_1 = 1;
  func_0x000107c61654();
  func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x38));
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x60));
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101be7a68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101be7a6c; end: 101be7a83;  */

void FUN_101be7a6c(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  long unaff_x22;
  
  *(undefined4 *)(unaff_x22 + 0x58) = param_3;
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
  *(undefined8 *)(unaff_x22 + 0x40) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101be7a84,param_2,0);
  return;
}



/* Entry: 101be7a84; end: 101be7ac7;  */

void FUN_101be7a84(void)

{
  long unaff_x22;
  
  func_0x000100083b20(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101be7ac8,0,0);
  return;
}



/* Entry: 101be7ac8; end: 101be7b57;  */

void FUN_101be7ac8(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 uVar4;
  long *plVar5;
  int *piVar6;
  long unaff_x22;
  
  uVar4 = *(undefined4 *)(unaff_x22 + 0x58);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar3 = *(long *)(unaff_x22 + 0x30);
  func_0x0001000a8868(unaff_x22 + 0x10,uVar2);
  piVar6 = *(int **)(lVar3 + 8);
  iVar1 = *piVar6;
  plVar5 = (long *)(ulong)(uint)piVar6[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x48) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_101be7b58;
                    /* WARNING: Could not recover jumptable at 0x000101be7b54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))
            (plVar5,*(undefined8 *)(unaff_x22 + 0x38),uVar4,uVar2,lVar3);
  return;
}



/* Entry: 101be7b58; end: 101be7c1b;  */

void FUN_101be7b58(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x50) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x48));
  if (unaff_x20 == 0) {
    uVar1 = 0x101be7bb4;
  }
  else {
    uVar1 = 0x101be7be8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(uVar1,0,0);
  return;
}



/* Entry: 101be7c1c; end: 101be7def;  */

void FUN_101be7c1c(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined1 param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x68) = param_3;
  *(undefined8 *)(unaff_x22 + 0x70) = unaff_x20;
  *(undefined1 *)(unaff_x22 + 0x18c) = param_4;
  *(undefined4 *)(unaff_x22 + 0x188) = param_2;
  *(undefined8 *)(unaff_x22 + 0x60) = param_1;
  lVar3 = 0x112e08830;
  func_0x0001000285a8(0x112e08830,&UNK_10d9dd418);
  uVar2 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xf;
  uVar1 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x78) = uVar1;
  uVar1 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x80) = uVar1;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x88) = uVar2;
  lVar3 = 0x112d5ed18;
  func_0x0001000285a8(0x112d5ed18,&UNK_10d925c50);
  uVar2 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xf;
  uVar1 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x90) = uVar1;
  uVar1 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x98) = uVar1;
  uVar1 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xa0) = uVar1;
  uVar1 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xa8) = uVar1;
  uVar1 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xb0) = uVar1;
  uVar1 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xb8) = uVar1;
  uVar1 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xc0) = uVar1;
  uVar1 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 200) = uVar1;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xd0) = uVar2;
  lVar3 = 0;
  func_0x000103a814dc();
  *(long *)(unaff_x22 + 0xd8) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0xe0) = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xf;
  uVar1 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xe8) = uVar1;
  uVar1 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xf0) = uVar1;
  uVar1 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xf8) = uVar1;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x100) = uVar2;
  lVar3 = 0;
  FUN_101bedd44();
  *(long *)(unaff_x22 + 0x108) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0x110) = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xf;
  uVar1 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x118) = uVar1;
  uVar1 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x120) = uVar1;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x128) = uVar2;
  lVar3 = 0;
  func_0x000107c5eea4();
  *(long *)(unaff_x22 + 0x130) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0x138) = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xf;
  uVar1 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x140) = uVar1;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x148) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101be7df0);
  return;
}



/* Entry: 101be7df0; end: 101be8673;  */

void FUN_101be7df0(double param_1)

{
  ulong *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined4 uVar20;
  undefined1 uVar21;
  undefined *puVar22;
  ulong uVar23;
  ulong uVar24;
  undefined *puVar25;
  ulong uVar26;
  undefined *puVar27;
  long lVar28;
  ulong uVar29;
  long lVar30;
  ulong *puVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  long lVar34;
  code *pcVar35;
  long unaff_x22;
  long lVar36;
  undefined8 uVar37;
  long *plVar38;
  long lVar39;
  undefined8 uVar40;
  code *pcVar41;
  undefined8 uVar42;
  double dVar43;
  double dVar44;
  
  lVar30 = *(long *)(unaff_x22 + 0x60);
  lVar39 = *(long *)(lVar30 + 0x10);
  if (lVar39 == 0) {
    puVar27 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_101bedd7c(PTR___swiftEmptyArrayStorage_11034f1c8);
  }
  else {
    lVar2 = *(long *)(unaff_x22 + 0x108);
    lVar9 = *(long *)(unaff_x22 + 0x110);
    lVar28 = *(long *)(unaff_x22 + 0xe0);
    lVar34 = *(long *)(unaff_x22 + 0x70);
    func_0x000107c5eea0(*(undefined8 *)(unaff_x22 + 0x148));
    puVar25 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puVar27 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_101bedd7c();
    puVar22 = &UNK_110454740;
    func_0x000107c613fc(&UNK_110454740,0x18,7);
    *(undefined **)(unaff_x22 + 0x150) = puVar22;
    *(undefined **)(puVar22 + 0x10) = puVar25;
    func_0x000107c61428(lVar34 + 0xa0,unaff_x22 + 0x10,0,0);
    puVar31 = (ulong *)(lVar30 + 0x28);
    do {
      uVar24 = puVar31[-1];
      uVar10 = *puVar31;
      lVar36 = *(long *)(lVar34 + 0xa0);
      lVar30 = *(long *)(lVar36 + 0x10);
      func_0x000107c61434(uVar10);
      if (lVar30 == 0) {
LAB_101be8170:
        uVar29 = *(ulong *)(puVar22 + 0x10);
        uVar23 = uVar29;
        func_0x000107c61558();
        *(ulong *)(puVar22 + 0x10) = uVar29;
        uVar26 = uVar29;
        dVar44 = param_1;
        if ((uVar23 & 1) == 0) {
          uVar26 = 0;
          func_0x0001000d182c(0,*(long *)(uVar29 + 0x10) + 1,1,uVar29);
          *(ulong *)(puVar22 + 0x10) = uVar26;
          dVar44 = param_1;
        }
        uVar23 = *(ulong *)(uVar26 + 0x10);
        uVar29 = uVar26;
        if (*(ulong *)(uVar26 + 0x18) >> 1 <= uVar23) {
          uVar29 = (ulong)(1 < *(ulong *)(uVar26 + 0x18));
          func_0x0001000d182c(uVar29,uVar23 + 1,1,uVar26);
        }
        *(ulong *)(uVar29 + 0x10) = uVar23 + 1;
        lVar30 = uVar29 + uVar23 * 0x10;
        *(ulong *)(lVar30 + 0x20) = uVar24;
        *(ulong *)(lVar30 + 0x28) = uVar10;
        *(ulong *)(puVar22 + 0x10) = uVar29;
      }
      else {
        func_0x000107c61434(lVar36);
        uVar23 = uVar24;
        uVar26 = uVar10;
        func_0x000100029284(uVar24);
        if ((uVar26 & 1) == 0) {
          func_0x000107c6142c(lVar36);
          goto LAB_101be8170;
        }
        uVar32 = *(undefined8 *)(unaff_x22 + 0x120);
        lVar30 = *(long *)(unaff_x22 + 0x128);
        func_0x000101bee04c(*(long *)(lVar36 + 0x38) + *(long *)(lVar9 + 0x48) * uVar23,uVar32,
                            FUN_101bedd44);
        func_0x000107c6142c(lVar36);
        func_0x000101bedfc4(uVar32,lVar30,FUN_101bedd44);
        func_0x000107c5ee68(lVar30 + *(int *)(lVar2 + 0x14));
        dVar43 = param_1;
        func_0x000100083b20(unaff_x22 + 0x58);
        uVar32 = *(undefined8 *)(unaff_x22 + 0x58);
        func_0x000107c4d8a4(uVar32);
        dVar44 = dVar43;
        func_0x000107c615e8(uVar32);
        if (dVar43 <= param_1) {
          func_0x000101bee090(*(undefined8 *)(unaff_x22 + 0x128),FUN_101bedd44);
          param_1 = dVar44;
          goto LAB_101be8170;
        }
        uVar32 = *(undefined8 *)(unaff_x22 + 0xd0);
        uVar37 = *(undefined8 *)(unaff_x22 + 0xd8);
        func_0x000101befa84(*(undefined8 *)(unaff_x22 + 0x128),uVar32,0x112d5ed18,&UNK_10d925c50);
        pcVar35 = *(code **)(lVar28 + 0x30);
        (*pcVar35)(uVar32,1,uVar37);
        if ((int)uVar32 == 1) {
          uVar32 = *(undefined8 *)(unaff_x22 + 0xd0);
          func_0x000101bee090(*(undefined8 *)(unaff_x22 + 0x128),FUN_101bedd44);
          func_0x000107c6142c(uVar10);
          func_0x000101befa44(uVar32,0x112d5ed18,&UNK_10d925c50);
        }
        else {
          uVar33 = *(undefined8 *)(unaff_x22 + 0x100);
          uVar37 = *(undefined8 *)(unaff_x22 + 0xd8);
          uVar32 = *(undefined8 *)(unaff_x22 + 0xc0);
          uVar42 = *(undefined8 *)(unaff_x22 + 200);
          func_0x000101bedfc4(*(undefined8 *)(unaff_x22 + 0xd0),uVar33,&SUB_103a814dc);
          func_0x000101bee04c(uVar33,uVar42,&SUB_103a814dc);
          pcVar41 = *(code **)(lVar28 + 0x38);
          (*pcVar41)(uVar42,0,1,uVar37);
          func_0x000101bedf7c(uVar42,uVar32,0x112d5ed18,&UNK_10d925c50);
          (*pcVar35)(uVar32,1,uVar37);
          if ((int)uVar32 == 1) {
            func_0x000101befa44(*(undefined8 *)(unaff_x22 + 0xc0),0x112d5ed18,&UNK_10d925c50);
            func_0x000107c61434(puVar27);
            uVar23 = uVar10;
            func_0x000100029284();
            func_0x000107c6142c(puVar27);
            if ((uVar23 & 1) == 0) {
              uVar32 = *(undefined8 *)(unaff_x22 + 0x128);
              uVar37 = *(undefined8 *)(unaff_x22 + 0x100);
              func_0x000107c6142c(uVar10);
              func_0x000101bee090(uVar37,&SUB_103a814dc);
              func_0x000101bee090(uVar32,FUN_101bedd44);
              uVar32 = 1;
            }
            else {
              puVar25 = puVar27;
              func_0x000107c61558();
              if ((int)puVar25 == 0) {
                FUN_101becac0(&SUB_103a814dc,0x112e085e0,&UNK_10d9dcfc0);
              }
              uVar32 = *(undefined8 *)(unaff_x22 + 0x128);
              uVar37 = *(undefined8 *)(unaff_x22 + 0x100);
              uVar42 = *(undefined8 *)(unaff_x22 + 0xb8);
              func_0x000107c6142c(*(undefined8 *)(*(long *)(puVar27 + 0x30) + uVar24 * 0x10 + 8));
              func_0x000101bedfc4(*(long *)(puVar27 + 0x38) + *(long *)(lVar28 + 0x48) * uVar24,
                                  uVar42,&SUB_103a814dc);
              func_0x000101bed3ec(uVar24,puVar27,&SUB_103a814dc);
              func_0x000107c6142c(uVar10);
              func_0x000101bee090(uVar37,&SUB_103a814dc);
              func_0x000101bee090(uVar32,FUN_101bedd44);
              uVar32 = 0;
            }
            uVar37 = *(undefined8 *)(unaff_x22 + 0xb8);
            (*pcVar41)(uVar37,uVar32,1,*(undefined8 *)(unaff_x22 + 0xd8));
            func_0x000101befa44(uVar37,0x112d5ed18,&UNK_10d925c50);
          }
          else {
            func_0x000101bedfc4(*(undefined8 *)(unaff_x22 + 0xc0),*(undefined8 *)(unaff_x22 + 0xf8),
                                &SUB_103a814dc);
            puVar25 = puVar27;
            func_0x000107c61558();
            uVar23 = uVar24;
            uVar26 = uVar10;
            func_0x000100029284();
            uVar29 = (ulong)~(uint)uVar26 & 1;
            lVar30 = *(long *)(puVar27 + 0x10) + uVar29;
            if (SCARRY8(*(long *)(puVar27 + 0x10),uVar29)) {
                    /* WARNING: Does not return */
              pcVar35 = (code *)SoftwareBreakpoint(1,0x101be8670);
              (*pcVar35)();
            }
            if (*(long *)(puVar27 + 0x18) < lVar30) {
              func_0x000101bece48(lVar30,puVar25,&SUB_103a814dc,0x112e085e0,&UNK_10d9dcfc0);
              uVar23 = uVar24;
              uVar29 = uVar10;
              func_0x000100029284();
              if (((uint)uVar26 & 1) != ((uint)uVar29 & 1)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdb9b24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(code *)
                  PTR___ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF_11034edd0
                )(PTR___sSSN_11034da80);
                return;
              }
            }
            else if (((ulong)puVar25 & 1) == 0) {
              FUN_101becac0(&SUB_103a814dc,0x112e085e0,&UNK_10d9dcfc0);
            }
            uVar42 = *(undefined8 *)(unaff_x22 + 0x128);
            uVar32 = *(undefined8 *)(unaff_x22 + 0xf8);
            uVar37 = *(undefined8 *)(unaff_x22 + 0x100);
            if ((uVar26 & 1) == 0) {
              *(ulong *)(puVar27 + (uVar23 >> 6) * 8 + 0x40) =
                   *(ulong *)(puVar27 + (uVar23 >> 6) * 8 + 0x40) | 1L << (uVar23 & 0x3f);
              puVar1 = (ulong *)(*(long *)(puVar27 + 0x30) + uVar23 * 0x10);
              *puVar1 = uVar24;
              puVar1[1] = uVar10;
              func_0x000101bedfc4(uVar32,*(long *)(puVar27 + 0x38) +
                                         *(long *)(lVar28 + 0x48) * uVar23,&SUB_103a814dc);
              func_0x000101bee090(uVar37,&SUB_103a814dc);
              func_0x000101bee090(uVar42,FUN_101bedd44);
              if (SCARRY8(*(long *)(puVar27 + 0x10),1)) {
                    /* WARNING: Does not return */
                pcVar35 = (code *)SoftwareBreakpoint(1,0x101be8674);
                (*pcVar35)();
              }
              *(long *)(puVar27 + 0x10) = *(long *)(puVar27 + 0x10) + 1;
            }
            else {
              func_0x000101bee008(uVar32,*(long *)(puVar27 + 0x38) +
                                         *(long *)(lVar28 + 0x48) * uVar23,&SUB_103a814dc);
              func_0x000107c6142c(uVar10);
              func_0x000101bee090(uVar37,&SUB_103a814dc);
              func_0x000101bee090(uVar42,FUN_101bedd44);
            }
          }
        }
      }
      puVar31 = puVar31 + 2;
      *(undefined **)(unaff_x22 + 0x158) = puVar27;
      *(undefined **)(unaff_x22 + 0x160) = puVar27;
      lVar39 = lVar39 + -1;
      param_1 = dVar44;
    } while (lVar39 != 0);
    if (*(long *)(*(long *)(puVar22 + 0x10) + 0x10) != 0) {
      uVar21 = *(undefined1 *)(unaff_x22 + 0x18c);
      uVar32 = *(undefined8 *)(unaff_x22 + 0x68);
      uVar37 = *(undefined8 *)(unaff_x22 + 0x70);
      uVar20 = *(undefined4 *)(unaff_x22 + 0x188);
      puVar27 = &UNK_110454768;
      func_0x000107c613fc(&UNK_110454768,0x31,7);
      *(undefined **)(unaff_x22 + 0x168) = puVar27;
      *(undefined8 *)(puVar27 + 0x10) = uVar37;
      *(undefined **)(puVar27 + 0x18) = puVar22;
      puVar27[0x20] = (char)uVar20;
      puVar27[0x21] = (char)((uint)uVar20 >> 8);
      puVar27[0x22] = (char)((uint)uVar20 >> 0x10);
      *(undefined8 *)(puVar27 + 0x28) = uVar32;
      puVar27[0x30] = uVar21;
      plVar38 = (long *)0x1c0;
      func_0x000107c6157c(uVar37);
      func_0x000107c6157c(puVar22);
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x170) = plVar38;
      *plVar38 = unaff_x22;
      plVar38[1] = (long)FUN_101be8674;
      lVar39 = *(long *)(unaff_x22 + 0x70);
      plVar38[0x2b] = (long)puVar27;
      plVar38[0x2c] = lVar39;
      plVar38[0x2a] = (long)&UNK_10d9dd428;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(FUN_101beb114,lVar39,0);
      return;
    }
    (**(code **)(*(long *)(unaff_x22 + 0x138) + 8))
              (*(undefined8 *)(unaff_x22 + 0x148),*(undefined8 *)(unaff_x22 + 0x130));
    func_0x000107c61574(puVar22);
  }
  uVar32 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar37 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar40 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar42 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar33 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar13 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar3 = *(undefined8 *)(unaff_x22 + 200);
  uVar14 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar15 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar16 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar17 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x80);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x148));
  func_0x000107c615c0(uVar32);
  func_0x000107c615c0(uVar11);
  func_0x000107c615c0(uVar37);
  func_0x000107c615c0(uVar40);
  func_0x000107c615c0(uVar12);
  func_0x000107c615c0(uVar42);
  func_0x000107c615c0(uVar13);
  func_0x000107c615c0(uVar33);
  func_0x000107c615c0(uVar14);
  func_0x000107c615c0(uVar3);
  func_0x000107c615c0(uVar15);
  func_0x000107c615c0(uVar4);
  func_0x000107c615c0(uVar16);
  func_0x000107c615c0(uVar5);
  func_0x000107c615c0(uVar17);
  func_0x000107c615c0(uVar6);
  func_0x000107c615c0(uVar18);
  func_0x000107c615c0(uVar7);
  func_0x000107c615c0(uVar19);
  func_0x000107c615c0(uVar8);
                    /* WARNING: Could not recover jumptable at 0x000101be863c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(puVar27);
  return;
}



/* Entry: 101be8674; end: 101be86e3;  */

void FUN_101be8674(undefined8 param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  long unaff_x20;
  long lVar3;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x168);
  *(undefined8 *)(lVar3 + 0x178) = param_1;
  *(long *)(lVar3 + 0x180) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x170));
  func_0x000107c61574(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_101be86e4;
  }
  else {
    pcVar2 = FUN_101be9168;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,*(undefined8 *)(lVar3 + 0x70),0);
  return;
}



/* Entry: 101be86e4; end: 101be9167;  */

void FUN_101be86e4(void)

{
  ulong *puVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  int iVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  long lVar26;
  long lVar27;
  ulong uVar28;
  undefined8 uVar29;
  long lVar30;
  long lVar31;
  undefined8 uVar32;
  long lVar33;
  undefined8 uVar34;
  code *pcVar35;
  undefined8 uVar36;
  long unaff_x22;
  ulong uVar37;
  undefined8 uVar38;
  long lVar39;
  long lVar40;
  ulong *puVar41;
  ulong uStack_b8;
  code *pcStack_78;
  
  lVar30 = *(long *)(unaff_x22 + 0x150);
  func_0x000107c5eea0(*(undefined8 *)(unaff_x22 + 0x140));
  func_0x000107c61428(lVar30 + 0x10,unaff_x22 + 0x28,0,0);
  lVar31 = *(long *)(lVar30 + 0x10);
  uVar25 = *(ulong *)(lVar31 + 0x10);
  lVar30 = *(long *)(unaff_x22 + 0x178);
  if (uVar25 == 0) {
    uStack_b8 = *(ulong *)(unaff_x22 + 0x160);
  }
  else {
    lVar27 = *(long *)(unaff_x22 + 0x138);
    lVar26 = *(long *)(unaff_x22 + 0x110);
    uVar3 = *(ulong *)(unaff_x22 + 0x158);
    uStack_b8 = *(ulong *)(unaff_x22 + 0x160);
    func_0x000107c61434(lVar31);
    uVar37 = 0;
    puVar41 = (ulong *)(lVar31 + 0x28);
    do {
      if (*(ulong *)(lVar31 + 0x10) <= uVar37) {
                    /* WARNING: Does not return */
        pcVar35 = (code *)SoftwareBreakpoint(1,0x101be9158);
        (*pcVar35)();
      }
      uVar23 = puVar41[-1];
      uVar10 = *puVar41;
      if (*(long *)(lVar30 + 0x10) == 0) {
        pcStack_78 = *(code **)(*(long *)(unaff_x22 + 0xe0) + 0x38);
        (*pcStack_78)(*(undefined8 *)(unaff_x22 + 0xb0),1,1,*(undefined8 *)(unaff_x22 + 0xd8));
        func_0x000107c61434(uVar10);
      }
      else {
        uVar32 = *(undefined8 *)(unaff_x22 + 0x178);
        func_0x000107c61434(uVar10);
        func_0x000107c61434(uVar32);
        uVar21 = uVar23;
        uVar24 = uVar10;
        func_0x000100029284(uVar23);
        uVar38 = *(undefined8 *)(unaff_x22 + 0x178);
        uVar32 = *(undefined8 *)(unaff_x22 + 0xd8);
        lVar33 = *(long *)(unaff_x22 + 0xe0);
        uVar29 = *(undefined8 *)(unaff_x22 + 0xb0);
        bVar2 = (uVar24 & 1) == 0;
        if (bVar2) {
          func_0x000107c6142c(uVar38);
          pcStack_78 = *(code **)(lVar33 + 0x38);
        }
        else {
          func_0x000101bee04c(*(long *)(lVar30 + 0x38) + *(long *)(lVar33 + 0x48) * uVar21,uVar29,
                              &SUB_103a814dc);
          func_0x000107c6142c(uVar38);
          pcStack_78 = *(code **)(lVar33 + 0x38);
        }
        (*pcStack_78)(uVar29,bVar2,1,uVar32);
      }
      uVar38 = *(undefined8 *)(unaff_x22 + 0x140);
      uVar29 = *(undefined8 *)(unaff_x22 + 0x130);
      lVar39 = *(long *)(unaff_x22 + 0x108);
      uVar32 = *(undefined8 *)(unaff_x22 + 0x80);
      lVar33 = *(long *)(unaff_x22 + 0x88);
      lVar40 = *(long *)(unaff_x22 + 0x70);
      func_0x000101befa84(*(undefined8 *)(unaff_x22 + 0xb0),lVar33,0x112d5ed18,&UNK_10d925c50);
      (**(code **)(lVar27 + 0x10))(lVar33 + *(int *)(lVar39 + 0x14),uVar38,uVar29);
      pcVar35 = *(code **)(lVar26 + 0x38);
      (*pcVar35)(lVar33,0,1,lVar39);
      func_0x000107c61428(lVar40 + 0xa0,unaff_x22 + 0x40,0x21,0);
      func_0x000101bedf7c(lVar33,uVar32,0x112e08830,&UNK_10d9dd418);
      (**(code **)(lVar26 + 0x30))(uVar32,1,lVar39);
      if ((int)uVar32 == 1) {
        lVar33 = *(long *)(unaff_x22 + 0x70);
        func_0x000101befa44(*(undefined8 *)(unaff_x22 + 0x80),0x112e08830,&UNK_10d9dd418);
        uVar32 = *(undefined8 *)(lVar33 + 0xa0);
        func_0x000107c61434(uVar32);
        uVar21 = uVar23;
        uVar24 = uVar10;
        func_0x000100029284();
        func_0x000107c6142c(uVar32);
        if ((uVar24 & 1) == 0) {
          uVar32 = 1;
        }
        else {
          lVar33 = *(long *)(unaff_x22 + 0x70);
          iVar20 = (int)*(undefined8 *)(lVar33 + 0xa0);
          func_0x000107c61558();
          lVar39 = *(long *)(lVar33 + 0xa0);
          *(undefined8 *)(lVar33 + 0xa0) = 0x8000000000000000;
          if (iVar20 == 0) {
            FUN_101becac0(FUN_101bedd44,0x112e08a50,&UNK_10d9dd5b8);
          }
          lVar40 = *(long *)(unaff_x22 + 0x110);
          lVar33 = *(long *)(unaff_x22 + 0x70);
          uVar32 = *(undefined8 *)(unaff_x22 + 0x78);
          func_0x000107c6142c(*(undefined8 *)(*(long *)(lVar39 + 0x30) + uVar21 * 0x10 + 8));
          func_0x000101bedfc4(*(long *)(lVar39 + 0x38) + *(long *)(lVar40 + 0x48) * uVar21,uVar32,
                              FUN_101bedd44);
          func_0x000101bed3ec(uVar21,lVar39,FUN_101bedd44);
          uVar32 = *(undefined8 *)(lVar33 + 0xa0);
          *(long *)(lVar33 + 0xa0) = lVar39;
          func_0x000107c6142c(uVar32);
          uVar32 = 0;
        }
        uVar29 = *(undefined8 *)(unaff_x22 + 0x78);
        (*pcVar35)(uVar29,uVar32,1,*(undefined8 *)(unaff_x22 + 0x108));
        func_0x000101befa44(uVar29,0x112e08830,&UNK_10d9dd418);
      }
      else {
        lVar33 = *(long *)(unaff_x22 + 0x70);
        func_0x000101bedfc4(*(undefined8 *)(unaff_x22 + 0x80),*(undefined8 *)(unaff_x22 + 0x118),
                            FUN_101bedd44);
        uVar22 = *(ulong *)(lVar33 + 0xa0);
        func_0x000107c61558();
        lVar39 = *(long *)(lVar33 + 0xa0);
        *(undefined8 *)(lVar33 + 0xa0) = 0x8000000000000000;
        uVar21 = uVar23;
        uVar24 = uVar10;
        func_0x000100029284();
        uVar28 = (ulong)~(uint)uVar24 & 1;
        lVar33 = *(long *)(lVar39 + 0x10) + uVar28;
        if (SCARRY8(*(long *)(lVar39 + 0x10),uVar28)) {
                    /* WARNING: Does not return */
          pcVar35 = (code *)SoftwareBreakpoint(1,0x101be915c);
          (*pcVar35)();
        }
        if (*(long *)(lVar39 + 0x18) < lVar33) {
          func_0x000101bece48(lVar33,uVar22,FUN_101bedd44,0x112e08a50,&UNK_10d9dd5b8);
          uVar21 = uVar23;
          uVar22 = uVar10;
          func_0x000100029284();
          if (((uint)uVar24 & 1) != ((uint)uVar22 & 1)) goto LAB_101be912c;
          lVar33 = *(long *)(unaff_x22 + 0x110);
          uVar32 = *(undefined8 *)(unaff_x22 + 0x118);
joined_r0x000101be8b68:
          if ((uVar24 & 1) == 0) goto LAB_101be8b6c;
LAB_101be8afc:
          func_0x000101bee008(uVar32,*(long *)(lVar39 + 0x38) + *(long *)(lVar33 + 0x48) * uVar21,
                              FUN_101bedd44);
        }
        else {
          if ((uVar22 & 1) == 0) {
            FUN_101becac0(FUN_101bedd44,0x112e08a50,&UNK_10d9dd5b8);
            lVar33 = *(long *)(unaff_x22 + 0x110);
            uVar32 = *(undefined8 *)(unaff_x22 + 0x118);
            goto joined_r0x000101be8b68;
          }
          lVar33 = *(long *)(unaff_x22 + 0x110);
          uVar32 = *(undefined8 *)(unaff_x22 + 0x118);
          if ((uVar24 & 1) != 0) goto LAB_101be8afc;
LAB_101be8b6c:
          lVar40 = lVar39 + (uVar21 >> 6) * 8;
          *(ulong *)(lVar40 + 0x40) = *(ulong *)(lVar40 + 0x40) | 1L << (uVar21 & 0x3f);
          puVar1 = (ulong *)(*(long *)(lVar39 + 0x30) + uVar21 * 0x10);
          *puVar1 = uVar23;
          puVar1[1] = uVar10;
          func_0x000101bedfc4(uVar32,*(long *)(lVar39 + 0x38) + *(long *)(lVar33 + 0x48) * uVar21,
                              FUN_101bedd44);
          if (SCARRY8(*(long *)(lVar39 + 0x10),1)) {
                    /* WARNING: Does not return */
            pcVar35 = (code *)SoftwareBreakpoint(1,0x101be9164);
            (*pcVar35)();
          }
          *(long *)(lVar39 + 0x10) = *(long *)(lVar39 + 0x10) + 1;
          func_0x000107c61434(uVar10);
        }
        uVar32 = *(undefined8 *)(*(long *)(unaff_x22 + 0x70) + 0xa0);
        *(long *)(*(long *)(unaff_x22 + 0x70) + 0xa0) = lVar39;
        func_0x000107c6142c(uVar32);
      }
      uVar32 = *(undefined8 *)(unaff_x22 + 0xd8);
      lVar33 = *(long *)(unaff_x22 + 0xe0);
      uVar29 = *(undefined8 *)(unaff_x22 + 0xa8);
      uVar38 = *(undefined8 *)(unaff_x22 + 0xb0);
      func_0x000107c614a8(unaff_x22 + 0x40);
      func_0x000101befa84(uVar38,uVar29,0x112d5ed18,&UNK_10d925c50);
      pcVar35 = *(code **)(lVar33 + 0x30);
      (*pcVar35)(uVar29,1,uVar32);
      if ((int)uVar29 == 1) {
        uVar32 = *(undefined8 *)(unaff_x22 + 0xa8);
        func_0x000101befa44(*(undefined8 *)(unaff_x22 + 0xb0),0x112d5ed18,&UNK_10d925c50);
        func_0x000107c6142c(uVar10);
LAB_101be8780:
        func_0x000101befa44(uVar32,0x112d5ed18,&UNK_10d925c50);
      }
      else {
        uVar34 = *(undefined8 *)(unaff_x22 + 0xf0);
        uVar38 = *(undefined8 *)(unaff_x22 + 0xd8);
        uVar32 = *(undefined8 *)(unaff_x22 + 0xa0);
        uVar29 = *(undefined8 *)(unaff_x22 + 0x98);
        func_0x000101bedfc4(*(undefined8 *)(unaff_x22 + 0xa8),uVar34,&SUB_103a814dc);
        func_0x000101bee04c(uVar34,uVar32,&SUB_103a814dc);
        (*pcStack_78)(uVar32,0,1,uVar38);
        func_0x000101bedf7c(uVar32,uVar29,0x112d5ed18,&UNK_10d925c50);
        (*pcVar35)(uVar29,1,uVar38);
        if ((int)uVar29 == 1) {
          func_0x000101befa44(*(undefined8 *)(unaff_x22 + 0x98),0x112d5ed18,&UNK_10d925c50);
          func_0x000107c61434(uStack_b8);
          uVar21 = uVar10;
          func_0x000100029284();
          func_0x000107c6142c(uStack_b8);
          if ((uVar21 & 1) == 0) {
            uVar29 = *(undefined8 *)(unaff_x22 + 0xf0);
            uVar32 = *(undefined8 *)(unaff_x22 + 0xb0);
            func_0x000107c6142c(uVar10);
            func_0x000101bee090(uVar29,&SUB_103a814dc);
            func_0x000101befa44(uVar32,0x112d5ed18,&UNK_10d925c50);
            uVar29 = 1;
          }
          else {
            uVar21 = uVar3;
            func_0x000107c61558();
            if ((int)uVar21 == 0) {
              FUN_101becac0(&SUB_103a814dc,0x112e085e0,&UNK_10d9dcfc0);
            }
            uVar32 = *(undefined8 *)(unaff_x22 + 0xf0);
            lVar33 = *(long *)(unaff_x22 + 0xe0);
            uVar38 = *(undefined8 *)(unaff_x22 + 0xb0);
            uVar29 = *(undefined8 *)(unaff_x22 + 0x90);
            func_0x000107c6142c(*(undefined8 *)(*(long *)(uVar3 + 0x30) + uVar23 * 0x10 + 8));
            func_0x000101bedfc4(*(long *)(uVar3 + 0x38) + *(long *)(lVar33 + 0x48) * uVar23,uVar29,
                                &SUB_103a814dc);
            func_0x000101bed3ec(uVar23,uVar3,&SUB_103a814dc);
            func_0x000107c6142c(uVar10);
            func_0x000101bee090(uVar32,&SUB_103a814dc);
            func_0x000101befa44(uVar38,0x112d5ed18,&UNK_10d925c50);
            uVar29 = 0;
            uStack_b8 = uVar3;
          }
          uVar32 = *(undefined8 *)(unaff_x22 + 0x90);
          (*pcStack_78)(uVar32,uVar29,1,*(undefined8 *)(unaff_x22 + 0xd8));
          goto LAB_101be8780;
        }
        func_0x000101bedfc4(*(undefined8 *)(unaff_x22 + 0x98),*(undefined8 *)(unaff_x22 + 0xe8),
                            &SUB_103a814dc);
        uVar21 = uVar3;
        func_0x000107c61558();
        uVar24 = uVar23;
        uVar22 = uVar10;
        func_0x000100029284();
        uVar28 = (ulong)~(uint)uVar22 & 1;
        lVar33 = *(long *)(uVar3 + 0x10) + uVar28;
        if (SCARRY8(*(long *)(uVar3 + 0x10),uVar28)) {
                    /* WARNING: Does not return */
          pcVar35 = (code *)SoftwareBreakpoint(1,0x101be9160);
          (*pcVar35)();
        }
        if (*(long *)(uVar3 + 0x18) < lVar33) {
          func_0x000101bece48(lVar33,uVar21,&SUB_103a814dc,0x112e085e0,&UNK_10d9dcfc0);
          uVar24 = uVar23;
          uVar21 = uVar10;
          func_0x000100029284();
          if (((uint)uVar22 & 1) != ((uint)uVar21 & 1)) {
LAB_101be912c:
                    /* WARNING: Could not recover jumptable at 0x00010bdb9b24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)
              PTR___ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF_11034edd0
            )(PTR___sSSN_11034da80);
            return;
          }
        }
        else if ((uVar21 & 1) == 0) {
          FUN_101becac0(&SUB_103a814dc,0x112e085e0,&UNK_10d9dcfc0);
        }
        uVar32 = *(undefined8 *)(unaff_x22 + 0xe8);
        uVar29 = *(undefined8 *)(unaff_x22 + 0xf0);
        lVar33 = *(long *)(unaff_x22 + 0xe0);
        uVar38 = *(undefined8 *)(unaff_x22 + 0xb0);
        if ((uVar22 & 1) == 0) {
          lVar39 = uVar3 + (uVar24 >> 6) * 8;
          *(ulong *)(lVar39 + 0x40) = *(ulong *)(lVar39 + 0x40) | 1L << (uVar24 & 0x3f);
          puVar1 = (ulong *)(*(long *)(uVar3 + 0x30) + uVar24 * 0x10);
          *puVar1 = uVar23;
          puVar1[1] = uVar10;
          func_0x000101bedfc4(uVar32,*(long *)(uVar3 + 0x38) + *(long *)(lVar33 + 0x48) * uVar24,
                              &SUB_103a814dc);
          func_0x000101bee090(uVar29,&SUB_103a814dc);
          func_0x000101befa44(uVar38,0x112d5ed18,&UNK_10d925c50);
          if (SCARRY8(*(long *)(uVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
            pcVar35 = (code *)SoftwareBreakpoint(1,0x101be9168);
            (*pcVar35)();
          }
          *(long *)(uVar3 + 0x10) = *(long *)(uVar3 + 0x10) + 1;
          uStack_b8 = uVar3;
        }
        else {
          func_0x000101bee008(uVar32,*(long *)(uVar3 + 0x38) + *(long *)(lVar33 + 0x48) * uVar24,
                              &SUB_103a814dc);
          func_0x000107c6142c(uVar10);
          func_0x000101bee090(uVar29,&SUB_103a814dc);
          func_0x000101befa44(uVar38,0x112d5ed18,&UNK_10d925c50);
          uStack_b8 = uVar3;
        }
      }
      uVar37 = uVar37 + 1;
      puVar41 = puVar41 + 2;
    } while (uVar25 != uVar37);
    func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x178));
    lVar30 = lVar31;
  }
  uVar32 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar29 = *(undefined8 *)(unaff_x22 + 0x150);
  lVar31 = *(long *)(unaff_x22 + 0x138);
  uVar38 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar34 = *(undefined8 *)(unaff_x22 + 0x130);
  func_0x000107c6142c(lVar30);
  pcVar35 = *(code **)(lVar31 + 8);
  (*pcVar35)(uVar38,uVar34);
  (*pcVar35)(uVar32,uVar34);
  func_0x000107c61574(uVar29);
  uVar32 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar29 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar36 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar38 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar34 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar13 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar4 = *(undefined8 *)(unaff_x22 + 200);
  uVar14 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar15 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar16 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar17 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x80);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x148));
  func_0x000107c615c0(uVar32);
  func_0x000107c615c0(uVar11);
  func_0x000107c615c0(uVar29);
  func_0x000107c615c0(uVar36);
  func_0x000107c615c0(uVar12);
  func_0x000107c615c0(uVar38);
  func_0x000107c615c0(uVar13);
  func_0x000107c615c0(uVar34);
  func_0x000107c615c0(uVar14);
  func_0x000107c615c0(uVar4);
  func_0x000107c615c0(uVar15);
  func_0x000107c615c0(uVar5);
  func_0x000107c615c0(uVar16);
  func_0x000107c615c0(uVar6);
  func_0x000107c615c0(uVar17);
  func_0x000107c615c0(uVar7);
  func_0x000107c615c0(uVar18);
  func_0x000107c615c0(uVar8);
  func_0x000107c615c0(uVar19);
  func_0x000107c615c0(uVar9);
                    /* WARNING: Could not recover jumptable at 0x000101be9128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uStack_b8);
  return;
}



/* Entry: 101be9168; end: 101be92c7;  */

void FUN_101be9168(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  long unaff_x22;
  undefined8 uVar23;
  
  uVar23 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x150);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar16 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar6 = *(undefined8 *)(unaff_x22 + 200);
  uVar17 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar18 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar19 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar20 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x80);
  (**(code **)(*(long *)(unaff_x22 + 0x138) + 8))(uVar1,*(undefined8 *)(unaff_x22 + 0x130));
  func_0x000107c6142c(uVar23);
  func_0x000107c61574(uVar12);
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar13);
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar14);
  func_0x000107c615c0(uVar3);
  func_0x000107c615c0(uVar15);
  func_0x000107c615c0(uVar4);
  func_0x000107c615c0(uVar16);
  func_0x000107c615c0(uVar5);
  func_0x000107c615c0(uVar17);
  func_0x000107c615c0(uVar6);
  func_0x000107c615c0(uVar18);
  func_0x000107c615c0(uVar7);
  func_0x000107c615c0(uVar19);
  func_0x000107c615c0(uVar8);
  func_0x000107c615c0(uVar20);
  func_0x000107c615c0(uVar9);
  func_0x000107c615c0(uVar21);
  func_0x000107c615c0(uVar10);
  func_0x000107c615c0(uVar22);
  func_0x000107c615c0(uVar11);
                    /* WARNING: Could not recover jumptable at 0x000101be92c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101be92c8; end: 101be947b;  */

void FUN_101be92c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined8 *unaff_x20;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = 0x112e08830;
  uStack_70 = param_2;
  func_0x0001000285a8(0x112e08830,&UNK_10d9dd418);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar5 = (long)&uStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = lVar5 - extraout_x12;
  lVar2 = 0;
  FUN_101bedd44();
  lVar4 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  lVar7 = lVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  FUN_101bedf7c(param_1,lVar6,0x112e08830,&UNK_10d9dd418);
  lVar1 = lVar6;
  (**(code **)(lVar4 + 0x30))(lVar6,1,lVar2);
  if ((int)lVar1 == 1) {
    FUN_101befa44(lVar6,0x112e08830,&UNK_10d9dd418);
    FUN_101bec608(lVar5,uStack_70,param_3);
    func_0x000107c6142c(param_3);
    FUN_101befa44(lVar5,0x112e08830,&UNK_10d9dd418);
  }
  else {
    func_0x000101bedfc4(lVar6,lVar7,FUN_101bedd44);
    uVar3 = *unaff_x20;
    func_0x000107c61558(uVar3);
    uStack_68 = *unaff_x20;
    FUN_101bec804(lVar7,uStack_70,param_3,uVar3);
    func_0x000107c6142c(param_3);
    *unaff_x20 = uStack_68;
  }
  return;
}



/* Entry: 101be947c; end: 101be9497;  */

void FUN_101be947c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  long unaff_x22;
  
  *(undefined4 *)(unaff_x22 + 0x88) = param_4;
  *(undefined8 *)(unaff_x22 + 0x58) = param_2;
  *(undefined8 *)(unaff_x22 + 0x60) = param_3;
  *(undefined8 *)(unaff_x22 + 0x50) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101be9498,param_2,0);
  return;
}



/* Entry: 101be9498; end: 101be94db;  */

void FUN_101be9498(void)

{
  long unaff_x22;
  
  func_0x000100083b20(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101be94dc,0,0);
  return;
}



/* Entry: 101be94dc; end: 101be959b;  */

void FUN_101be94dc(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 uVar4;
  long *plVar5;
  int *piVar6;
  long unaff_x22;
  long lVar7;
  undefined8 uVar8;
  
  uVar4 = *(undefined4 *)(unaff_x22 + 0x88);
  lVar7 = *(long *)(unaff_x22 + 0x60);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar3 = *(long *)(unaff_x22 + 0x30);
  func_0x0001000a8868(unaff_x22 + 0x10,uVar2);
  func_0x000107c61428(lVar7 + 0x10,unaff_x22 + 0x38,0,0);
  uVar8 = *(undefined8 *)(lVar7 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x68) = uVar8;
  piVar6 = *(int **)(lVar3 + 0x10);
  iVar1 = *piVar6;
  plVar5 = (long *)(ulong)(uint)piVar6[1];
  func_0x000107c61434(uVar8);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x70) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_101be959c;
                    /* WARNING: Could not recover jumptable at 0x000101be9598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))(uVar8,uVar4,uVar2,lVar3);
  return;
}



/* Entry: 101be959c; end: 101be960f;  */

void FUN_101be959c(undefined8 param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  long unaff_x20;
  long *unaff_x22;
  long lVar3;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x68);
  *(long *)(lVar3 + 0x78) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x70));
  func_0x000107c6142c(uVar1);
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar3 + 0x80) = param_1;
    pcVar2 = FUN_101be9610;
  }
  else {
    pcVar2 = (code *)0x101be9650;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 101be9610; end: 101be9683;  */

void FUN_101be9610(void)

{
  long unaff_x22;
  
  **(undefined8 **)(unaff_x22 + 0x50) = *(undefined8 *)(unaff_x22 + 0x80);
  func_0x0001000834e4(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000101be964c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101be9684; end: 101be978f;  */

void FUN_101be9684(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xd8) = param_5;
  *(undefined8 *)(unaff_x22 + 0xe0) = unaff_x20;
  *(undefined1 *)(unaff_x22 + 0x17c) = param_6;
  *(undefined4 *)(unaff_x22 + 0x178) = param_4;
  *(undefined8 *)(unaff_x22 + 200) = param_2;
  *(undefined8 *)(unaff_x22 + 0xd0) = param_3;
  *(undefined8 *)(unaff_x22 + 0xc0) = param_1;
  lVar3 = 0x112d5ed18;
  func_0x0001000285a8(0x112d5ed18,&UNK_10d925c50);
  *(long *)(unaff_x22 + 0xe8) = lVar3;
  uVar2 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xf;
  uVar1 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xf0) = uVar1;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xf8) = uVar2;
  lVar3 = 0x112e08830;
  func_0x0001000285a8(0x112e08830,&UNK_10d9dd418);
  uVar2 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xf;
  uVar1 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x100) = uVar1;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x108) = uVar2;
  lVar3 = 0;
  FUN_101bedd44();
  *(long *)(unaff_x22 + 0x110) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0x118) = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x120) = uVar2;
  lVar3 = 0;
  func_0x000107c5eea4();
  *(long *)(unaff_x22 + 0x128) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0x130) = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x138) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101be9790);
  return;
}


