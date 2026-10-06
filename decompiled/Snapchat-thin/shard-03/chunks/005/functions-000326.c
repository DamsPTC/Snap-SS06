/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10292db38; end: 10292dbb7;  */

undefined8 FUN_10292db38(undefined8 param_1,undefined8 param_2,code *param_3)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_3)();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 10292dbb8; end: 10292dbcf;  */

void FUN_10292dbb8(void)

{
  long unaff_x20;
  
  FUN_10292b028(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 10292dbd0; end: 10292dbfb;  */

undefined1  [16] FUN_10292dbd0(void)

{
  return ZEXT816(0x11056ded8);
}



/* Entry: 10292dbfc; end: 10292dc2b;  */

void FUN_10292dbfc(undefined8 param_1,long *param_2,undefined8 param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,param_3);
  return;
}



/* Entry: 10292dc2c; end: 10292dd0f;  */

void FUN_10292dc2c(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_58 = PTR___sBOWV_11034d658 + 0x40;
  puStack_38 = PTR___sBoWV_11034d678 + 0x40;
  lVar1 = 0x13f;
  puStack_50 = puStack_58;
  puStack_48 = puStack_58;
  puStack_40 = puStack_58;
  puStack_30 = puStack_38;
  func_0x00010292dcbc();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    func_0x000107c61630(param_1,0x100,7,&puStack_58,param_1 + 0x50);
  }
  return;
}



/* Entry: 10292dd10; end: 10292dde3;  */

long * FUN_10292dd10(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  code *pcVar8;
  
  uVar5 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar5 >> 0x11 & 1) == 0) {
    lVar6 = 0;
    func_0x000107c5ede0();
    pcVar8 = *(code **)(*(long *)(lVar6 + -8) + 0x10);
    (*pcVar8)(param_1,param_2,lVar6);
    iVar4 = *(int *)(param_3 + 0x18);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
    uVar3 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar3;
    *(undefined8 *)((long)param_1 + (long)iVar4) = *(undefined8 *)((long)param_2 + (long)iVar4);
    iVar4 = *(int *)(param_3 + 0x20);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
    uVar3 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar3;
    func_0x000107c61434();
    func_0x000107c61434(uVar3);
    (*pcVar8)((long)param_1 + (long)iVar4,(long)param_2 + (long)iVar4,lVar6);
  }
  else {
    lVar6 = *param_2;
    *param_1 = lVar6;
    uVar7 = (ulong)uVar5 & 0xff;
    param_1 = (long *)(lVar6 + (uVar7 + 0x10 & (uVar7 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 10292dde4; end: 10292de6b;  */

void FUN_10292dde4(long param_1,long param_2)

{
  long lVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar1 + -8) + 8);
  (*UNRECOVERED_JUMPTABLE)(param_1,lVar1);
  func_0x000107c6142c(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x14) + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x1c) + 8));
                    /* WARNING: Could not recover jumptable at 0x00010292de68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1 + *(int *)(param_2 + 0x20),lVar1);
  return;
}



/* Entry: 10292de6c; end: 10292e123;  */

long FUN_10292de6c(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  code *pcVar6;
  
  lVar5 = 0;
  func_0x000107c5ede0();
  pcVar6 = *(code **)(*(long *)(lVar5 + -8) + 0x10);
  (*pcVar6)(param_1,param_2,lVar5);
  iVar4 = *(int *)(param_3 + 0x18);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x14));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  uVar3 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar3;
  *(undefined8 *)(param_1 + iVar4) = *(undefined8 *)(param_2 + iVar4);
  iVar4 = *(int *)(param_3 + 0x20);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x1c));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x1c));
  uVar3 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar3;
  func_0x000107c61434();
  func_0x000107c61434(uVar3);
  (*pcVar6)(param_1 + iVar4,param_2 + iVar4,lVar5);
  return param_1;
}



/* Entry: 10292e124; end: 10292e13b;  */

void FUN_10292e124(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 10292e13c; end: 10292e1bf;  */

void FUN_10292e13c(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lVar1 = 0x13f;
  func_0x000107c5ede0();
  if (param_2 < 0x40) {
    lStack_48 = *(long *)(lVar1 + -8) + 0x40;
    puStack_40 = &UNK_10daf3258;
    puStack_38 = PTR___sBi64_WV_11034d670 + 0x40;
    puStack_30 = &UNK_10daf3258;
    lStack_28 = lStack_48;
    func_0x000107c6153c(param_1,0x100,5,&lStack_48,param_1 + 0x10);
  }
  return;
}



/* Entry: 10292e1c0; end: 10292e26f;  */

long * FUN_10292e1c0(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  code *pcVar6;
  
  uVar1 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    lVar4 = *param_2;
    lVar3 = param_2[1];
    func_0x00010006c00c(lVar4,lVar3);
    *param_1 = lVar4;
    param_1[1] = lVar3;
    lVar4 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = lVar4;
    iVar2 = *(int *)(param_3 + 0x18);
    lVar3 = 0;
    func_0x000107c5ede0();
    pcVar6 = *(code **)(*(long *)(lVar3 + -8) + 0x10);
    func_0x000107c61434(lVar4);
    (*pcVar6)((long)param_1 + (long)iVar2,(long)param_2 + (long)iVar2,lVar3);
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



/* Entry: 10292e270; end: 10292e2bf;  */

void FUN_10292e270(undefined8 *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  func_0x00010006c090(*param_1,param_1[1]);
  func_0x000107c6142c(param_1[3]);
  iVar1 = *(int *)(param_2 + 0x18);
  lVar2 = 0;
  func_0x000107c5ede0();
                    /* WARNING: Could not recover jumptable at 0x00010292e2bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 8))((long)param_1 + (long)iVar1,lVar2);
  return;
}



/* Entry: 10292e2c0; end: 10292e3db;  */

undefined8 * FUN_10292e2c0(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  code *pcVar5;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  func_0x00010006c00c(uVar1,uVar2);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  iVar3 = *(int *)(param_3 + 0x18);
  lVar4 = 0;
  func_0x000107c5ede0();
  pcVar5 = *(code **)(*(long *)(lVar4 + -8) + 0x10);
  func_0x000107c61434(uVar1);
  (*pcVar5)((long)param_1 + (long)iVar3,(long)param_2 + (long)iVar3,lVar4);
  return param_1;
}



/* Entry: 10292e3dc; end: 10292e4ab;  */

undefined8 * FUN_10292e3dc(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar3 = *param_2;
  uVar5 = param_2[3];
  uVar4 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  param_1[3] = uVar5;
  param_1[2] = uVar4;
  iVar1 = *(int *)(param_3 + 0x18);
  lVar2 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar2 + -8) + 0x20))
            ((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,lVar2);
  return param_1;
}



/* Entry: 10292e4ac; end: 10292e4c3;  */

void FUN_10292e4ac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 10292e4c4; end: 10292e53f;  */

void FUN_10292e4c4(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_38 = &UNK_10daf3288;
  puStack_30 = &UNK_10daf3258;
  lVar1 = 0x13f;
  func_0x000107c5ede0();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    func_0x000107c6153c(param_1,0x100,3,&puStack_38,param_1 + 0x10);
  }
  return;
}



/* Entry: 10292e540; end: 10292e6b7;  */

long * FUN_10292e540(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  code *pcVar12;
  
  uVar5 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar5 >> 0x11 & 1) == 0) {
    plVar8 = param_2;
    func_0x000107c614c4(param_2,param_3);
    bVar7 = (int)plVar8 != 1;
    if (bVar7) {
      lVar9 = *param_2;
      lVar10 = param_2[1];
      func_0x00010006c00c(lVar9,lVar10);
      *param_1 = lVar9;
      param_1[1] = lVar10;
      lVar9 = param_2[3];
      param_1[2] = param_2[2];
      param_1[3] = lVar9;
      lVar10 = 0;
      func_0x00010292da2c();
      iVar6 = *(int *)(lVar10 + 0x18);
      lVar10 = 0;
      func_0x000107c5ede0();
      pcVar12 = *(code **)(*(long *)(lVar10 + -8) + 0x10);
      func_0x000107c61434(lVar9);
      (*pcVar12)((long)param_1 + (long)iVar6,(long)param_2 + (long)iVar6,lVar10);
    }
    else {
      lVar9 = 0;
      func_0x000107c5ede0();
      pcVar12 = *(code **)(*(long *)(lVar9 + -8) + 0x10);
      (*pcVar12)(param_1,param_2,lVar9);
      lVar10 = 0;
      func_0x00010292da40();
      puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0x14));
      puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x14));
      uVar3 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = uVar3;
      *(undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0x18)) =
           *(undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x18));
      puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0x1c));
      puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x1c));
      uVar4 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = uVar4;
      iVar6 = *(int *)(lVar10 + 0x20);
      func_0x000107c61434(uVar3);
      func_0x000107c61434(uVar4);
      (*pcVar12)((long)param_1 + (long)iVar6,(long)param_2 + (long)iVar6,lVar9);
    }
    func_0x000107c6159c(param_1,param_3,!bVar7);
  }
  else {
    lVar9 = *param_2;
    *param_1 = lVar9;
    uVar11 = (ulong)uVar5 & 0xff;
    param_1 = (long *)(lVar9 + (uVar11 + 0x10 & (uVar11 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 10292e6b8; end: 10292e78b;  */

void FUN_10292e6b8(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  code *UNRECOVERED_JUMPTABLE;
  long lVar4;
  
  puVar2 = param_1;
  func_0x000107c614c4();
  if ((int)puVar2 == 1) {
    lVar3 = 0;
    func_0x000107c5ede0();
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar3 + -8) + 8);
    (*UNRECOVERED_JUMPTABLE)(param_1,lVar3);
    lVar4 = 0;
    func_0x00010292da40();
    func_0x000107c6142c(*(undefined8 *)((long)param_1 + (long)*(int *)(lVar4 + 0x14) + 8));
    func_0x000107c6142c(*(undefined8 *)((long)param_1 + (long)*(int *)(lVar4 + 0x1c) + 8));
    iVar1 = *(int *)(lVar4 + 0x20);
  }
  else {
    func_0x00010006c090(*param_1,param_1[1]);
    func_0x000107c6142c(param_1[3]);
    lVar3 = 0;
    func_0x00010292da2c();
    iVar1 = *(int *)(lVar3 + 0x18);
    lVar3 = 0;
    func_0x000107c5ede0();
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar3 + -8) + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010292e788. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)((long)param_1 + (long)iVar1,lVar3);
  return;
}



/* Entry: 10292e78c; end: 10292ea43;  */

undefined8 * FUN_10292e78c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  bool bVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  
  puVar6 = param_2;
  func_0x000107c614c4(param_2,param_3);
  bVar5 = (int)puVar6 != 1;
  if (bVar5) {
    uVar2 = *param_2;
    uVar3 = param_2[1];
    func_0x00010006c00c(uVar2,uVar3);
    *param_1 = uVar2;
    param_1[1] = uVar3;
    uVar2 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = uVar2;
    lVar7 = 0;
    func_0x00010292da2c();
    iVar4 = *(int *)(lVar7 + 0x18);
    lVar7 = 0;
    func_0x000107c5ede0();
    pcVar9 = *(code **)(*(long *)(lVar7 + -8) + 0x10);
    func_0x000107c61434(uVar2);
    (*pcVar9)((long)param_1 + (long)iVar4,(long)param_2 + (long)iVar4,lVar7);
  }
  else {
    lVar7 = 0;
    func_0x000107c5ede0();
    pcVar9 = *(code **)(*(long *)(lVar7 + -8) + 0x10);
    (*pcVar9)(param_1,param_2,lVar7);
    lVar8 = 0;
    func_0x00010292da40();
    puVar6 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar8 + 0x14));
    puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar8 + 0x14));
    uVar2 = puVar1[1];
    *puVar6 = *puVar1;
    puVar6[1] = uVar2;
    *(undefined8 *)((long)param_1 + (long)*(int *)(lVar8 + 0x18)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar8 + 0x18));
    puVar6 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar8 + 0x1c));
    puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar8 + 0x1c));
    uVar3 = puVar1[1];
    *puVar6 = *puVar1;
    puVar6[1] = uVar3;
    iVar4 = *(int *)(lVar8 + 0x20);
    func_0x000107c61434(uVar2);
    func_0x000107c61434(uVar3);
    (*pcVar9)((long)param_1 + (long)iVar4,(long)param_2 + (long)iVar4,lVar7);
  }
  func_0x000107c6159c(param_1,param_3,!bVar5);
  return param_1;
}



/* Entry: 10292ea44; end: 10292ec53;  */

undefined8 * FUN_10292ea44(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  puVar4 = param_2;
  func_0x000107c614c4(param_2,param_3);
  bVar3 = (int)puVar4 != 1;
  if (bVar3) {
    uVar8 = *param_2;
    uVar10 = param_2[3];
    uVar9 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar8;
    param_1[3] = uVar10;
    param_1[2] = uVar9;
    lVar5 = 0;
    func_0x00010292da2c();
    iVar1 = *(int *)(lVar5 + 0x18);
    lVar5 = 0;
    func_0x000107c5ede0();
    (**(code **)(*(long *)(lVar5 + -8) + 0x20))
              ((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,lVar5);
  }
  else {
    lVar5 = 0;
    func_0x000107c5ede0();
    pcVar7 = *(code **)(*(long *)(lVar5 + -8) + 0x20);
    (*pcVar7)(param_1,param_2,lVar5);
    lVar6 = 0;
    func_0x00010292da40();
    puVar4 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar6 + 0x14));
    uVar8 = *puVar4;
    puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar6 + 0x14));
    puVar2[1] = puVar4[1];
    *puVar2 = uVar8;
    *(undefined8 *)((long)param_1 + (long)*(int *)(lVar6 + 0x18)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar6 + 0x18));
    puVar4 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar6 + 0x1c));
    uVar8 = *puVar4;
    puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar6 + 0x1c));
    puVar2[1] = puVar4[1];
    *puVar2 = uVar8;
    (*pcVar7)((long)param_1 + (long)*(int *)(lVar6 + 0x20),
              (long)param_2 + (long)*(int *)(lVar6 + 0x20),lVar5);
  }
  func_0x000107c6159c(param_1,param_3,!bVar3);
  return param_1;
}



/* Entry: 10292ec54; end: 10292ec83;  */

void FUN_10292ec54(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010292ec5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + -8) + 0x30))();
  return;
}



/* Entry: 10292ec84; end: 10292ed03;  */

void FUN_10292ec84(undefined8 param_1,ulong param_2)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = 0x13f;
  FUN_10292da2c();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    lVar1 = 0x13f;
    func_0x00010292da40();
    if (param_2 < 0x40) {
      lStack_28 = *(long *)(lVar1 + -8) + 0x40;
      func_0x000107c61528(param_1,0x100,2,&lStack_30);
    }
  }
  return;
}



/* Entry: 10292ed04; end: 10292ed27;  */

void FUN_10292ed04(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar2 = 0;
    func_0x000107c5fcec(0);
    uStack_60 = param_2;
    uStack_58 = param_1;
    lStack_50 = lVar1;
    func_0x000100f7a598(FUN_10292ed28,auStack_70,
                        "CreatorSubscriptionOnboardingImplementation/PaywallMediaProcessor.swift",
                        0x47,2,0x89,uVar2);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 10292ed28; end: 10292ed43;  */

void FUN_10292ed28(void)

{
  long unaff_x20;
  
  FUN_10292b2ac(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 10292ed44; end: 10292edc3;  */

void FUN_10292ed44(void)

{
  FUN_10292b554();
  return;
}



/* Entry: 10292edc4; end: 10292ef67;  */

undefined *
FUN_10292edc4(double param_1,double param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
             ,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long extraout_x8;
  long lVar4;
  double dVar5;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar2 = PTR_PTR_1126c6608;
  func_0x000107c610f8(PTR_PTR_1126c6608);
  func_0x000107c5fadc(param_4,param_5);
  func_0x000107c46fe0(puVar2);
  func_0x000107c61170(param_4);
  func_0x000107c61174(puVar2);
  func_0x000107c5b078(param_3);
  dVar5 = param_1;
  func_0x000107c51820(param_3);
  param_1 = param_1 * dVar5;
  func_0x000107c5b078(param_3);
  func_0x000107c51820(param_3);
  param_2 = param_2 * dVar5;
  func_0x000107c5eea0(&stack0xffffffffffffff80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c5ee8c();
  (**(code **)(lVar4 + 8))
            (&stack0xffffffffffffff80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  puVar3 = PTR_PTR_1126c6610;
  func_0x000107c610f8(PTR_PTR_1126c6610);
  func_0x000107c46fe4(param_1,param_2,0,dVar5 * 1000.0);
  func_0x000107c61170(puVar2);
  func_0x000107c5fadc(param_6,param_7);
  func_0x000107c59d34(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_6);
  return puVar3;
}



/* Entry: 10292ef68; end: 10292f207;  */

undefined * FUN_10292ef68(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puStack_68;
  
  lVar5 = param_1;
  func_0x000107c44a2c();
  if ((int)lVar5 != 0) {
    lVar5 = param_1;
    func_0x000107c4e8d8();
    func_0x000107c61180();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10292f200);
      (*pcVar4)();
    }
    lVar6 = lVar5;
    func_0x000107c4e928();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10292f204);
      (*pcVar4)();
    }
    lVar5 = lVar6;
    func_0x000107c40808();
    func_0x000107c61170(lVar6);
    if (0 < lVar5) {
      func_0x000107c4e8d8();
      func_0x000107c61180();
      if (param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10292f208);
        (*pcVar4)();
      }
      lVar5 = param_1;
      func_0x000107c4e928();
      func_0x000107c61180();
      func_0x000107c61170(param_1);
      if (lVar5 != 0) {
        puStack_68 = (undefined *)0x0;
        uVar7 = 0;
        func_0x00010292f784(0,0x112d55598,&PTR_PTR_1126b25d0);
        func_0x000107c5fc50(lVar5,&puStack_68,uVar7);
        func_0x000107c61170(lVar5);
        puVar3 = puStack_68;
        if (puStack_68 != (undefined *)0x0) {
          puVar14 = (undefined *)((ulong)puStack_68 & 0xffffffffffffff8);
          if ((ulong)puStack_68 >> 0x3e == 0) {
            puVar12 = *(undefined **)(puVar14 + 0x10);
            puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
          }
          else {
            puVar12 = puStack_68;
            if (-1 < (long)puStack_68) {
              puVar12 = puVar14;
            }
            func_0x000107c60480();
            puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
          }
          PTR___swiftEmptyArrayStorage_11034f1c8 = puVar13;
          if (puVar12 != (undefined *)0x0) {
            puVar11 = (undefined *)0x0;
            do {
              while( true ) {
                if (((ulong)puVar3 & 0xc000000000000001) == 0) {
                  if (*(undefined **)(puVar14 + 0x10) <= puVar11) {
                    /* WARNING: Does not return */
                    pcVar4 = (code *)SoftwareBreakpoint(1,0x10292f1cc);
                    (*pcVar4)();
                  }
                  puVar8 = *(undefined **)(puVar3 + (long)puVar11 * 8 + 0x20);
                  func_0x000107c61174();
                }
                else {
                  puVar8 = puVar11;
                  FUN_10292d764(puVar11,puVar3,&PTR_PTR_1126b25d0,0x112d55598);
                }
                puVar1 = puVar11 + 1;
                if (SCARRY8((long)puVar11,1)) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x10292f1c8);
                  (*pcVar4)();
                }
                puVar9 = puVar8;
                func_0x000107c4abb4();
                if ((int)puVar9 == 1) break;
LAB_10292f080:
                func_0x000107c61170(puVar8);
                puVar11 = puVar11 + 1;
                if (puVar1 == puVar12) goto LAB_10292f1e8;
              }
              puVar9 = puVar8;
              func_0x000107c4c930();
              func_0x000107c61180();
              if (puVar9 == (undefined *)0x0) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x10292f1fc);
                (*pcVar4)();
              }
              puVar10 = puVar9;
              func_0x000107c3e240();
              func_0x000107c61170(puVar9);
              if ((int)puVar10 != 5) goto LAB_10292f080;
              puVar11 = puVar13;
              func_0x000107c61558();
              puStack_68 = puVar13;
              if (((ulong)puVar11 & 1) == 0) {
                func_0x000101a17c14(0,*(long *)(puVar13 + 0x10) + 1,1);
              }
              uVar2 = *(ulong *)(puStack_68 + 0x10);
              if (*(ulong *)(puStack_68 + 0x18) >> 1 <= uVar2) {
                func_0x000101a17c14(1 < *(ulong *)(puStack_68 + 0x18),uVar2 + 1,1);
              }
              *(ulong *)(puStack_68 + 0x10) = uVar2 + 1;
              *(undefined **)(puStack_68 + uVar2 * 8 + 0x20) = puVar8;
              puVar11 = puVar1;
              puVar13 = puStack_68;
            } while (puVar1 != puVar12);
          }
LAB_10292f1e8:
          func_0x000107c6142c(puVar3);
          return puVar13;
        }
      }
    }
  }
  return (undefined *)0x0;
}



/* Entry: 10292f208; end: 10292f26b;  */

void FUN_10292f208(void)

{
  FUN_10292ccc4();
  return;
}



/* Entry: 10292f26c; end: 10292f36b;  */

void FUN_10292f26c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long unaff_x20;
  long unaff_x22;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  
  lVar4 = 0;
  func_0x000107c5ede0();
  uVar6 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  uVar8 = uVar6 + 0x20 & (uVar6 ^ 0xffffffffffffffff);
  uVar6 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + uVar8 + 7 & 0xfffffffffffffff8;
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar1 = *(long *)(unaff_x20 + uVar6);
  lVar3 = ((long *)(unaff_x20 + uVar6))[1];
  lVar7 = *(long *)(unaff_x20 + uVar6 + 0x10);
  lVar9 = *(long *)(unaff_x20 + uVar6 + 0x18);
  lVar10 = *(long *)(unaff_x20 + uVar6 + 0x20);
  plVar5 = (long *)0x100;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x10292f99c;
  plVar5[0x10] = lVar9;
  plVar5[0x11] = lVar10;
  plVar5[0xe] = lVar3;
  plVar5[0xf] = lVar7;
  plVar5[0xc] = unaff_x20 + uVar8;
  plVar5[0xd] = lVar1;
  plVar5[10] = lVar4;
  plVar5[0xb] = lVar2;
  lVar4 = 0x112ecda40;
  func_0x0001000285a8(0x112ecda40,&UNK_10daf31d0);
  uVar6 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[0x12] = uVar6;
  lVar4 = 0;
  func_0x00010292da40();
  plVar5[0x13] = lVar4;
  uVar6 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[0x14] = uVar6;
  lVar4 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar6 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[0x15] = uVar6;
  lVar4 = 0;
  func_0x000107c5ede0();
  plVar5[0x16] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar5[0x17] = lVar4;
  uVar6 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[0x18] = uVar6;
  lVar4 = 0;
  func_0x000107c5eec8();
  plVar5[0x19] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar5[0x1a] = lVar4;
  uVar6 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[0x1b] = uVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10292c6b8,0,0);
  return;
}



/* Entry: 10292f36c; end: 10292f4eb;  */

undefined8 * FUN_10292f36c(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = (undefined8 *)PTR__OBJC_CLASS___AVAssetImageGenerator_1126ba170;
  func_0x000107c610f8();
  func_0x000107c457a0();
  func_0x000107c52860();
  uVar7 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uVar1 = *(undefined4 *)(PTR__kCMTimeZero_110348670 + 8);
  uVar2 = *(undefined4 *)(PTR__kCMTimeZero_110348670 + 0xc);
  uVar10 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  puVar6 = &uStack_60;
  uStack_60 = uVar7;
  uStack_58 = uVar1;
  uStack_54 = uVar2;
  puStack_50 = (undefined8 *)uVar10;
  func_0x000107c57e18(puVar3);
  uVar4 = 600;
  func_0x000107c600d0(0x3fb999999999999a);
  uStack_58 = (undefined4)param_2;
  uStack_54 = (undefined4)((ulong)param_2 >> 0x20);
  uStack_60 = uVar4;
  puStack_50 = puVar6;
  func_0x000107c57e14(puVar3);
  puVar6 = &uStack_60;
  puVar5 = puVar3;
  uStack_60 = uVar7;
  uStack_58 = uVar1;
  uStack_54 = uVar2;
  puStack_50 = (undefined8 *)uVar10;
  func_0x000107c40798();
  puVar8 = (undefined8 *)0x0;
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = puVar8;
    func_0x000107c61174();
    func_0x000107c5ed30(0);
    func_0x000107c61170(puVar5);
    func_0x000107c61654();
    func_0x000107c61170(puVar3);
    func_0x000107c614ac(puVar8);
    puVar9 = (undefined8 *)0x0;
  }
  else {
    puVar9 = (undefined8 *)PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x000107c610f8(PTR__OBJC_CLASS___UIImage_1126aea68);
    func_0x000107c61174(0);
    puVar6 = puVar5;
    func_0x000107c45af0(puVar9);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar5);
    puVar8 = puVar5;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar9;
  }
  func_0x000107c60e78();
  func_0x0001000285a8(param_2,puVar6);
  (**(code **)(*(long *)(param_2 + -8) + 8))(puVar8,param_2);
  return puVar8;
}



/* Entry: 10292f4ec; end: 10292f56f;  */

undefined8 FUN_10292f4ec(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 10292f570; end: 10292f733;  */

undefined * FUN_10292f570(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  long extraout_x8;
  long lVar9;
  double dVar10;
  double dVar11;
  
  lVar3 = 0;
  func_0x000107c5eea4();
  lVar9 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar4 = 0;
  func_0x00010292da40();
  puVar1 = (undefined8 *)(param_3 + *(int *)(lVar4 + 0x14));
  uVar6 = *puVar1;
  uVar2 = puVar1[1];
  puVar5 = PTR_PTR_1126c6608;
  func_0x000107c610f8(PTR_PTR_1126c6608);
  func_0x000107c5fadc(uVar6,uVar2);
  func_0x000107c46fe0(puVar5);
  func_0x000107c61170(uVar6);
  dVar10 = *(double *)(param_3 + *(int *)(lVar4 + 0x18));
  dVar11 = (double)(long)dVar10;
  func_0x000107c61174(puVar5);
  func_0x000107c5eea0(&stack0xffffffffffffff90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c5ee8c();
  (**(code **)(lVar9 + 8))
            (&stack0xffffffffffffff90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar3);
  puVar7 = PTR_PTR_1126c6610;
  func_0x000107c610f8(PTR_PTR_1126c6610);
  func_0x000107c46fe4(param_1,param_2,dVar11,dVar10 * 1000.0);
  puVar8 = puVar5;
  func_0x000107c61170(puVar5);
  func_0x000107c5ed70();
  lVar9 = lVar3;
  func_0x000107c5fadc();
  func_0x000107c6142c(lVar3);
  func_0x000107c53894(puVar7);
  func_0x000107c61170(puVar8);
  func_0x000107c5ed70((long)*(int *)(lVar4 + 0x20));
  func_0x000107c5fadc();
  func_0x000107c6142c(lVar9);
  func_0x000107c59d34(puVar7);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar8);
  return puVar7;
}



/* Entry: 10292f734; end: 10292f7c3;  */

undefined8 FUN_10292f734(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112ecda40;
  func_0x0001000285a8(0x112ecda40,&UNK_10daf31d0);
  (**(code **)(*(long *)(lVar1 + -8) + 0x18))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 10292f7c4; end: 10292f7df;  */

void FUN_10292f7c4(void)

{
  long unaff_x20;
  
  FUN_10292cd70(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 10292f7e0; end: 10292f843;  */

void FUN_10292f7e0(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x280) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x10292f998;
  plVar3[0xd] = lVar1;
  plVar3[0xe] = lVar2;
  plVar3[0xc] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10292ce04,0,0);
  return;
}



/* Entry: 10292f844; end: 10292f8a7;  */

void FUN_10292f844(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x280) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_10292f8a8;
  plVar3[0xd] = lVar1;
  plVar3[0xe] = lVar2;
  plVar3[0xc] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10292cf64,0,0);
  return;
}



/* Entry: 10292f8a8; end: 10292f8e3;  */

void FUN_10292f8a8(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x280));
                    /* WARNING: Could not recover jumptable at 0x00010292f8e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10292f8e4; end: 10292f8f3;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_10292f8e4(ulong param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 *puVar9;
  ulong uVar10;
  uint uVar11;
  undefined8 *puVar12;
  long unaff_x20;
  undefined1 auStack_90 [80];
  
  uVar10 = *(ulong *)(unaff_x20 + 0x10);
  puVar9 = auStack_90;
  uVar7 = uVar10;
  func_0x000107c51f54();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar4 = 0x112d4b5e8;
    func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
    func_0x000107c61534();
    *(undefined8 *)(lVar4 + 0x18) = 2;
    *(undefined8 *)(lVar4 + 0x10) = 1;
    uVar3 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    func_0x000107c5faec();
    *(undefined8 *)(lVar4 + 0x20) = uVar3;
    puVar1 = PTR___sSSN_11034da80;
    *(undefined **)(lVar4 + 0x48) = PTR___sSSN_11034da80;
    *(undefined1 **)(lVar4 + 0x28) = puVar9;
    *(undefined8 *)(lVar4 + 0x30) = 0xd000000000000034;
    *(undefined8 *)(lVar4 + 0x38) = 0x800000010f0ccda0;
    lVar5 = lVar4;
    func_0x000100214a84(lVar4);
    func_0x000107c61588(lVar4);
    FUN_10292f4ec((undefined8 *)(lVar4 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
    puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8();
    uVar3 = 0xd00000000000001d;
    func_0x000107c5fadc(0xd00000000000001d,0x800000010f0ccbf0);
    lVar4 = lVar5;
    func_0x000107c5f9dc(lVar5,puVar1,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
    func_0x000107c6142c(lVar5);
    func_0x000107c466bc();
    func_0x000107c61170(uVar3);
    func_0x000107c61170(lVar4);
    uVar3 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    puVar12 = (undefined8 *)PTR___ss5ErrorWS_11034ee10;
    func_0x000107c613f8();
    *puVar12 = puVar6;
    func_0x000107c61454(uVar10,uVar3);
    return;
  }
  uVar2 = param_1;
  func_0x000107c5ee30();
  func_0x000107c61170(param_1);
  uVar3 = 0;
  uVar8 = uVar2;
  func_0x000107c5ee24(0,uVar2,uVar7);
  puVar12 = *(undefined8 **)(*(long *)(uVar10 + 0x40) + 0x28);
  *puVar12 = uVar3;
  puVar12[1] = uVar8;
  func_0x000107c61450(uVar10);
  uVar11 = (uint)(uVar7 >> 0x3e);
  if (uVar11 == 1) {
    uVar2 = uVar7 & 0x3fffffffffffffff;
  }
  else if (uVar11 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 10292f8f4; end: 10292f93b;  */

undefined8 FUN_10292f8f4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 10292f93c; end: 10292f973;  */

void FUN_10292f93c(long param_1,long param_2)

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



/* Entry: 10292f974; end: 10292f987;  */

void FUN_10292f974(void)

{
  FUN_10292dbb8();
  return;
}



/* Entry: 10292f988; end: 10292f99f;  */

void FUN_10292f988(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10292f9a0; end: 10292fb0f;  */

undefined1  [16] FUN_10292f9a0(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffd4;
  func_0x000107c5fadc(0xd00000000000002c,0x800000010f0ccde0);
  uVar3 = 0xd00000000000002b;
  func_0x000107c5fadc(0xd00000000000002b,0x800000010f0cce10);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10292fa6c);
  (*pcVar1)();
}



/* Entry: 10292fb10; end: 10292fb1f;  */

undefined1  [16] FUN_10292fb10(void)

{
  return ZEXT816(0x11056e248);
}



/* Entry: 10292fb20; end: 10292fd13;  */

void FUN_10292fb20(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uStack_48;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *param_2;
  func_0x0001000285a8(0x112ecdcb8,&UNK_10daf3360);
  puVar2 = &uStack_48;
  uStack_48 = uVar4;
  func_0x0001000838ec(puVar2);
  func_0x00010292fbbc(uVar3,puVar2,uVar1);
  func_0x000107c61574(puVar2);
  func_0x000100082720("CreatorSubscriptionsBlockedMutedUsersViewControllerEntryPointProvider",0x45,2
                     );
  *param_1 = uVar3;
  return;
}



/* Entry: 10292fd14; end: 10292fe27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10292fd14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ecdcc0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ecdcc8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ecdcd0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ecdcd8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ecdce0) = param_3;
  func_0x000107c61154(auStack_40,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  return;
}



/* Entry: 10292fe28; end: 10292fe2f; -[_TtC51CreatorSubscriptionsBlockedMutedUsersImplementation51CreatorSubscriptionsBlockedMutedUsersViewController modalPresentationStyle] */

undefined8 FUN_10292fe28(void)

{
  return 0;
}



/* Entry: 10292fe30; end: 10292fe33; -[_TtC51CreatorSubscriptionsBlockedMutedUsersImplementation51CreatorSubscriptionsBlockedMutedUsersViewController setModalPresentationStyle:] */

void FUN_10292fe30(void)

{
  return;
}



/* Entry: 10292fe34; end: 10292ff8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10292fe34(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  char *pcVar5;
  undefined8 unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  func_0x000107c614f0();
  uVar1 = unaff_x20;
  func_0x000107c53dec();
  func_0x00010292fda8();
  func_0x000107c5a048();
  func_0x000107c615e8(uVar1);
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_viewDidLoad_112684cd8);
  func_0x000100083b20(&puStack_70);
  puVar2 = puStack_70;
  func_0x000107c5dbd4(puStack_70);
  func_0x000107c61180();
  func_0x000107c61170(puStack_70);
  puVar3 = &UNK_11056e338;
  func_0x000107c613fc(&UNK_11056e338,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = unaff_x20;
  pcStack_50 = FUN_102930718;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_100f0f800;
  puStack_58 = &UNK_11056e350;
  puStack_48 = puVar3;
  func_0x000107c60bc4(&puStack_70);
  puVar3 = puStack_48;
  func_0x000107c61174();
  func_0x000107c61574(puVar3);
  pcVar5 = "viewDidLoad()";
  func_0x0001000c10c0("viewDidLoad()");
  func_0x000107c61180();
  func_0x000107c44288(puVar2);
  func_0x000107c615e8(pcVar5);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c615e8(puVar2);
  return;
}



/* Entry: 10292ff8c; end: 10292fffb;  */

void FUN_10292ff8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  *(undefined8 *)(unaff_x22 + 0x38) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x40) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x48) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x50) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10292fffc,uVar1,uVar2);
  return;
}



/* Entry: 10292fffc; end: 10293009b;  */

void FUN_10292fffc(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0x30);
  func_0x000107c61428(lVar3 + 0x10,unaff_x22 + 0x10,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  *(long *)(unaff_x22 + 0x58) = lVar3;
  if (lVar3 != 0) {
    plVar1 = (long *)0x60;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x60) = plVar1;
    *plVar1 = unaff_x22;
    plVar1[1] = (long)FUN_10293009c;
    plVar1[8] = *(long *)(unaff_x22 + 0x38);
    plVar1[9] = lVar3;
    lVar2 = 0;
    func_0x000107c5fcec();
    lVar3 = lVar2;
    func_0x000107c5fce8();
    plVar1[10] = lVar3;
    func_0x000100eea164();
    func_0x000107c5fca8(lVar2,lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_10293018c,lVar2,lVar3);
    return;
  }
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x40));
  **(undefined1 **)(unaff_x22 + 0x28) = 1;
                    /* WARNING: Could not recover jumptable at 0x000102930098. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10293009c; end: 1029300e7;  */

void FUN_10293009c(void)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0x58);
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x60));
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_1029300e8,*(undefined8 *)(lVar2 + 0x48),*(undefined8 *)(lVar2 + 0x50));
  return;
}



/* Entry: 1029300e8; end: 10293011f;  */

void FUN_1029300e8(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x40));
  **(undefined1 **)(unaff_x22 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010293011c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102930120; end: 10293018b;  */

void FUN_102930120(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = param_1;
  *(undefined8 *)(unaff_x22 + 0x48) = unaff_x20;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x50) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10293018c,uVar1,uVar2);
  return;
}



/* Entry: 10293018c; end: 10293067f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10293018c(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long unaff_x22;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  
  lVar9 = *(long *)(unaff_x22 + 0x40);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x50));
  if (lVar9 != 0) {
    uVar1 = *(undefined8 *)(unaff_x22 + 0x40);
    lVar9 = *(long *)(unaff_x22 + 0x48);
    puVar3 = PTR_PTR_1126ab9c8;
    func_0x000107c610f8();
    func_0x000107c615f0(uVar1);
    func_0x000107c453e4();
    puVar4 = &UNK_11056e3a8;
    func_0x000107c613fc(&UNK_11056e3a8,0x18,7);
    func_0x000107c61614(puVar4 + 0x10,lVar9);
    puVar10 = (undefined8 *)(unaff_x22 + 0x10);
    *puVar10 = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(unaff_x22 + 0x30) = 0x102930a6c;
    *(undefined **)(unaff_x22 + 0x38) = puVar4;
    *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
    *(undefined **)(unaff_x22 + 0x20) = &UNK_1000f6b44;
    *(undefined **)(unaff_x22 + 0x28) = &UNK_11056e3e8;
    func_0x000107c60bc4(puVar10);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x38));
    func_0x000107c56d08(puVar3);
    func_0x000107c60bd0(puVar10);
    puVar4 = PTR_PTR_1126ab9d0;
    func_0x000107c610f8(PTR_PTR_1126ab9d0);
    func_0x000107c453e4();
    puVar5 = PTR_PTR_1126ab9d8;
    func_0x000107c610f8();
    func_0x000107c49520();
    uVar11 = *(undefined8 *)(lVar9 + _DAT_112ecdcc8);
    *(undefined **)(lVar9 + _DAT_112ecdcc8) = puVar5;
    func_0x000107c61174();
    func_0x000107c61170(uVar11);
    func_0x000107c61174();
    func_0x000107c5a050();
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar9 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102930670);
      (*pcVar2)();
    }
    lVar13 = *(long *)(unaff_x22 + 0x48);
    func_0x000107c3d89c();
    func_0x000107c61170(lVar9);
    lVar9 = 0x112d360b8;
    func_0x000102930b64(0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,0x112d36e78,
                        &UNK_10d9011a0);
    func_0x000107c613fc();
    *(undefined8 *)(lVar9 + 0x18) = 9;
    *(undefined8 *)(lVar9 + 0x10) = 4;
    puVar6 = puVar5;
    func_0x000107c4acb0();
    func_0x000107c61180();
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar13 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102930674);
      (*pcVar2)();
    }
    lVar14 = *(long *)(unaff_x22 + 0x48);
    lVar12 = lVar13;
    func_0x000107c4acb0();
    func_0x000107c61180();
    func_0x000107c61170(lVar13);
    puVar7 = puVar6;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(lVar12);
    func_0x000107c61170(puVar6);
    *(undefined **)(lVar9 + 0x20) = puVar7;
    puVar6 = puVar5;
    func_0x000107c5ce8c();
    func_0x000107c61180();
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar14 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102930678);
      (*pcVar2)();
    }
    lVar12 = *(long *)(unaff_x22 + 0x48);
    lVar13 = lVar14;
    func_0x000107c5ce8c();
    func_0x000107c61180();
    func_0x000107c61170(lVar14);
    puVar7 = puVar6;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(lVar13);
    func_0x000107c61170(puVar6);
    *(undefined **)(lVar9 + 0x28) = puVar7;
    puVar6 = puVar5;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar12 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10293067c);
      (*pcVar2)();
    }
    lVar14 = *(long *)(unaff_x22 + 0x48);
    lVar13 = lVar12;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    func_0x000107c61170(lVar12);
    puVar7 = puVar6;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(lVar13);
    func_0x000107c61170(puVar6);
    *(undefined **)(lVar9 + 0x30) = puVar7;
    puVar6 = puVar5;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar14 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102930680);
      (*pcVar2)();
    }
    puVar7 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    lVar13 = lVar14;
    func_0x000107c3ec1c(lVar14);
    func_0x000107c61180();
    func_0x000107c61170(lVar14);
    puVar8 = puVar6;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(lVar13);
    func_0x000107c61170(puVar6);
    *(undefined **)(lVar9 + 0x38) = puVar8;
    uVar11 = 0;
    FUN_102930bdc(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    lVar13 = lVar9;
    func_0x000107c5fc48(lVar9,uVar11);
    func_0x000107c61574(lVar9);
    func_0x000107c3d048(puVar7);
    func_0x000107c61170(lVar13);
    func_0x00010292fda8();
    lVar9 = 0x112d360b0;
    func_0x000102930b64(0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20,0x112d36e80,&UNK_10d904c70);
    func_0x000107c613fc();
    *(undefined8 *)(lVar9 + 0x18) = 3;
    *(undefined8 *)(lVar9 + 0x10) = 1;
    *(undefined **)(lVar9 + 0x20) = puVar5;
    uVar11 = 0;
    FUN_102930bdc(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
    lVar12 = lVar9;
    func_0x000107c5fc48(lVar9,uVar11);
    func_0x000107c61574(lVar9);
    func_0x000107c497d0(lVar13);
    func_0x000107c61170(lVar12);
    func_0x000107c615e8(lVar13);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar3);
    func_0x000107c615e8(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x000102930668. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102930680; end: 1029306a7; -[_TtC51CreatorSubscriptionsBlockedMutedUsersImplementation51CreatorSubscriptionsBlockedMutedUsersViewController viewDidLoad] */

void FUN_102930680(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10292fe34();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1029306a8; end: 102930717; -[_TtC51CreatorSubscriptionsBlockedMutedUsersImplementation51CreatorSubscriptionsBlockedMutedUsersViewController initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029306a8(long param_1)

{
  code *pcVar1;
  
  *(undefined8 *)(param_1 + _DAT_112ecdcc0) = 0;
  *(undefined8 *)(param_1 + _DAT_112ecdcc8) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "CreatorSubscriptionsBlockedMutedUsersImplementation/CreatorSubscriptionsBlockedMutedUsersViewController.swift"
                      ,0x6d,2,0x11,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102930718);
  (*pcVar1)();
}



/* Entry: 102930718; end: 1029307d7;  */

/* WARNING: Possible PIC construction at 0x0001029307bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029307c0) */

void FUN_102930718(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar1 = &UNK_11056e3a8;
  func_0x000107c613fc(&UNK_11056e3a8,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,uVar3);
  puVar2 = &UNK_11056e3d0;
  func_0x000107c613fc(&UNK_11056e3d0,0x20,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  func_0x000107c615f0(param_1);
  uVar3 = 0x112d518a8;
  func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
  func_0x0001001ca524(0xcb,0,0x60,4,0,0,&UNK_10daf3440,puVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)();
  return;
}



/* Entry: 1029307d8; end: 1029307f3;  */

void FUN_1029307d8(long param_1,long param_2)

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



/* Entry: 1029307f4; end: 102930827;  */

void FUN_1029307f4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102930828; end: 10293088f; -[_TtC51CreatorSubscriptionsBlockedMutedUsersImplementation51CreatorSubscriptionsBlockedMutedUsersViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102930828(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ecdcd8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ecdcd0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ecdce0));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ecdcc0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ecdcc8));
  return;
}



/* Entry: 102930890; end: 10293089b; -[_TtC51CreatorSubscriptionsBlockedMutedUsersImplementation51CreatorSubscriptionsBlockedMutedUsersViewController cardTransitionWillBeginWithView:] */

void FUN_102930890(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 10293089c; end: 102930993; -[_TtC51CreatorSubscriptionsBlockedMutedUsersImplementation51CreatorSubscriptionsBlockedMutedUsersViewController cardTransitionShouldBeginWithView:touchLocation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10293089c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  ulong param_5)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_3 + _DAT_112ecdcc8);
  if (lVar3 != 0) {
    FUN_102930bdc(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c61174();
    func_0x000107c61174(param_3);
    func_0x000107c61174(lVar3);
    uVar1 = param_5;
    func_0x000107c60118(param_5,lVar3);
    if ((uVar1 & 1) != 0) {
      lVar2 = lVar3;
      func_0x000107c3f42c(param_1,param_2,lVar3);
      func_0x000107c61170(lVar3);
      func_0x000107c61170(param_5);
      func_0x000107c61170(param_3);
      return (uint)lVar2 ^ 1;
    }
    func_0x000107c61170(lVar3);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_3);
  }
  return 1;
}



/* Entry: 102930994; end: 1029309a7; -[_TtC51CreatorSubscriptionsBlockedMutedUsersImplementation51CreatorSubscriptionsBlockedMutedUsersViewController cardToExpandTransition] */

void FUN_102930994(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1029309a8; end: 1029309c7;  */

void FUN_1029309a8(void)

{
  func_0x000107c61168(&PTR_PTR_1128711c8);
  return;
}



/* Entry: 1029309c8; end: 1029309cb; -[_TtC51CreatorSubscriptionsBlockedMutedUsersImplementation51CreatorSubscriptionsBlockedMutedUsersViewController cardTransitionEndedWithView:transitionType:] */

void FUN_1029309c8(void)

{
  return;
}



/* Entry: 1029309cc; end: 102930a2f;  */

void FUN_1029309cc(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_102930a30;
  plVar3[6] = lVar2;
  plVar3[7] = lVar1;
  plVar3[5] = param_1;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[8] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar3[9] = lVar1;
  plVar3[10] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10292fffc,lVar1,lVar2);
  return;
}



/* Entry: 102930a30; end: 102930a6b;  */

void FUN_102930a30(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102930a68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102930a6c; end: 102930bdb;  */

void FUN_102930a6c(void)

{
  long lVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    pcVar2 = "dismiss()";
    func_0x0001000c10c0("dismiss()");
    func_0x000107c61180();
    puVar3 = &UNK_11056e3a8;
    func_0x000107c613fc(&UNK_11056e3a8,0x18,7);
    func_0x000107c61614(puVar3 + 0x10,lVar1);
    uStack_58 = 0x102930c1c;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    puStack_68 = &UNK_1000f6b44;
    puStack_60 = &UNK_11056e410;
    ppuVar4 = &puStack_78;
    puStack_50 = puVar3;
    func_0x000107c60bc4(ppuVar4);
    func_0x000107c61574(puStack_50);
    func_0x000107c4e524(pcVar2);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c615e8(pcVar2);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 102930bdc; end: 102930cb3;  */

void FUN_102930bdc(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 102930cb4; end: 102930ccf;  */

void FUN_102930cb4(long param_1,long param_2)

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



/* Entry: 102930cd0; end: 102930d27; -[_TtC42CreatorSubscriptionsBlockedMutedUsersScope42CreatorSubscriptionsBlockedMutedUsersScope initWithUiContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102930cd0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  *(undefined8 *)(param_1 + _DAT_112ecdd10) = param_3;
  lVar2 = param_1;
  func_0x000100333a5c();
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c615f0(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 102930d28; end: 102930d57;  */

void FUN_102930d28(void)

{
  func_0x000100333a5c();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102930d58; end: 102930d67; -[_TtC42CreatorSubscriptionsBlockedMutedUsersScope42CreatorSubscriptionsBlockedMutedUsersScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102930d58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112ecdd10));
  return;
}



/* Entry: 102930d68; end: 102930dcf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102930d68(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x00010033d4bc();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112ecdd20) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 102930dd0; end: 102930ddb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102930dd0(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ecdd20) = param_1;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102930ddc; end: 102930e2f;  */

void FUN_102930ddc(undefined8 param_1,long *param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + *param_2) = param_1;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102930e30; end: 102930eb7; -[_TtC42CreatorSubscriptionsBlockedMutedUsersScope57CreatorSubscriptionsBlockedMutedUsersScopeFactoryServices build:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102930e30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x00010008a7c8(&uStack_38,&uStack_40);
  func_0x000100083b20(&uStack_40);
  func_0x000107c61574(uStack_38);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uStack_40);
  return;
}



/* Entry: 102930eb8; end: 102930eeb;  */

void FUN_102930eb8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102930eec; end: 102930efb;  */

undefined1  [16] FUN_102930eec(void)

{
  return ZEXT816(0x11056e4d0);
}



/* Entry: 102930efc; end: 102930f0b; -[_TtC42CreatorSubscriptionsBlockedMutedUsersScope57CreatorSubscriptionsBlockedMutedUsersScopeFactoryServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102930efc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ecdd20));
  return;
}



/* Entry: 102930f0c; end: 102930fc7;  */

/* WARNING: Possible PIC construction at 0x000102930fa4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102930fa8) */

void FUN_102930f0c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar2 = &UNK_11056e5c0;
  func_0x000107c613fc(&UNK_11056e5c0,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar3;
  *(undefined8 *)(puVar2 + 0x20) = uVar5;
  uVar3 = 0x112ecdd80;
  func_0x0001000285a8(0x112ecdd80,&UNK_10daf3588);
  func_0x000107c613fc();
  pcVar4 = FUN_10293100c;
  func_0x0001000841fc(FUN_10293100c,puVar2,uVar3);
  func_0x000100084214(&UNK_10daf3550,0x34,2);
  *param_1 = pcVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 102930fc8; end: 102930fd7;  */

undefined1  [16] FUN_102930fc8(void)

{
  return ZEXT816(0x11056e5a0);
}



/* Entry: 102930fd8; end: 10293100b;  */

void FUN_102930fd8(void)

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



/* Entry: 10293100c; end: 1029310db;  */

void FUN_10293100c(long *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_48;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar6 = *param_2;
  func_0x0001000285a8(0x112ecdd88,&UNK_10daf3590);
  puVar2 = &uStack_48;
  uStack_48 = uVar6;
  func_0x0001000838ec();
  FUN_1029311fc(uVar3,uVar1,uVar5,puVar2);
  func_0x000100082720("FanPassAccountManagementViewControllerServiceProvider",0x35,2);
  puVar4 = puVar2;
  FUN_1029310dc(puVar2,uVar3);
  func_0x000107c61574(uVar3);
  func_0x000107c61574(puVar2);
  func_0x000100082720("FanPassAccountManagementViewControllerEntryPointProvider",0x38,2);
  *param_1 = (long)puVar4;
  return;
}



/* Entry: 1029310dc; end: 1029311fb;  */

void FUN_1029310dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e9c1f8,&UNK_10daaa000);
  puVar1 = &UNK_11056e668;
  func_0x000107c613fc(&UNK_11056e668,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x10293115c,puVar1);
  return;
}



/* Entry: 1029311fc; end: 102931423;  */

void FUN_1029311fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ecdd90,&UNK_10daf3598);
  puVar1 = &UNK_11056e690;
  func_0x000107c613fc(&UNK_11056e690,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x0001000823a8(0x1029312a0,puVar1);
  return;
}



/* Entry: 102931424; end: 102931aff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102931424(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  char *pcVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  long unaff_x20;
  long lVar16;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112ecdda0);
  func_0x000107c5dbd4();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar3 != 0) {
    lVar2 = lVar3;
    func_0x000107c509b4();
    func_0x000107c61180();
    func_0x000107c615e8(lVar3);
    if (lVar2 != 0) {
      puVar4 = PTR_PTR_1126ab9e0;
      func_0x000107c610f8(PTR_PTR_1126ab9e0);
      func_0x000107c453e4();
      puVar14 = &UNK_11056e6f8;
      puVar5 = puVar14;
      func_0x000107c613fc(&UNK_11056e6f8,0x18,7);
      func_0x000107c61614(puVar5 + 0x10);
      puVar9 = PTR___NSConcreteStackBlock_11034bd00;
      pcStack_80 = FUN_102932304;
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0x42000000;
      puStack_90 = &UNK_1000f6b44;
      puStack_88 = &UNK_11056e738;
      ppuVar15 = &puStack_a0;
      puStack_78 = puVar5;
      func_0x000107c60bc4(ppuVar15);
      func_0x000107c61574(puStack_78);
      func_0x000107c56d08(puVar4);
      func_0x000107c60bd0(ppuVar15);
      puVar5 = puVar14;
      func_0x000107c613fc(&UNK_11056e6f8,0x18,7);
      func_0x000107c61614(puVar5 + 0x10);
      pcStack_80 = FUN_1029323fc;
      puStack_a0 = puVar9;
      uStack_98 = 0x42000000;
      puStack_90 = &UNK_1000f6b44;
      puStack_88 = &UNK_11056e760;
      ppuVar15 = &puStack_a0;
      puStack_78 = puVar5;
      func_0x000107c60bc4(ppuVar15);
      func_0x000107c61574(puStack_78);
      func_0x000107c56f00(puVar4);
      func_0x000107c60bd0(ppuVar15);
      func_0x000107c613fc(&UNK_11056e6f8,0x18,7);
      func_0x000107c61614(puVar14 + 0x10);
      pcStack_80 = (code *)0x102932404;
      puStack_a0 = puVar9;
      uStack_98 = 0x42000000;
      puStack_90 = &UNK_1000f6b44;
      puStack_88 = &UNK_11056e788;
      ppuVar15 = &puStack_a0;
      puStack_78 = puVar14;
      func_0x000107c60bc4(ppuVar15);
      func_0x000107c61574(puStack_78);
      func_0x000107c56eac(puVar4);
      func_0x000107c60bd0(ppuVar15);
      lVar3 = _DAT_113041e48;
      lVar16 = *(long *)(unaff_x20 + _DAT_112ecdda8);
      uVar6 = *(undefined8 *)(lVar16 + _DAT_113041e48);
      func_0x000107c40cfc(uVar6);
      func_0x000107c61180();
      pcStack_80 = (code *)0x102931e94;
      puStack_78 = (undefined *)0x0;
      puStack_a0 = puVar9;
      uStack_98 = 0x42000000;
      puStack_90 = &UNK_101ce99e0;
      puStack_88 = &UNK_11056e7b0;
      ppuVar15 = &puStack_a0;
      func_0x000107c60bc4(ppuVar15);
      uVar7 = uVar6;
      func_0x000107c4c280(uVar6);
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar15);
      func_0x000107c61170(uVar6);
      puVar14 = PTR_PTR_1126ab9e8;
      func_0x000107c610f8(PTR_PTR_1126ab9e8);
      func_0x000107c61174(uVar7);
      func_0x000107c453e4(puVar14);
      uVar8 = *(undefined8 *)(lVar16 + lVar3);
      func_0x000107c5df58(uVar8);
      func_0x000107c61180();
      uVar6 = uVar8;
      func_0x000107c5cb24();
      func_0x000107c61180();
      func_0x000107c61170(uVar8);
      func_0x000107c5a5a0(puVar14);
      func_0x000107c61170(uVar6);
      uVar6 = uVar7;
      func_0x000107c5cb24(uVar7);
      func_0x000107c61180();
      func_0x000107c591dc(puVar14);
      func_0x000107c61170(uVar6);
      puVar9 = PTR_PTR_1126ab9f0;
      func_0x000107c610f8();
      func_0x000107c49520();
      uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112ecdd98);
      *(undefined **)(unaff_x20 + _DAT_112ecdd98) = puVar9;
      func_0x000107c61174();
      func_0x000107c61170(uVar6);
      func_0x000107c61174();
      func_0x000107c5a050();
      lVar3 = unaff_x20;
      func_0x000107c5de64();
      func_0x000107c61180();
      if (lVar3 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102931af0);
        (*pcVar1)();
      }
      func_0x000107c3d89c();
      func_0x000107c61170();
      func_0x0001008478a8();
      func_0x000107c613fc();
      *(undefined8 *)(lVar3 + 0x18) = 9;
      *(undefined8 *)(lVar3 + 0x10) = 4;
      puVar5 = puVar9;
      func_0x000107c4acb0();
      func_0x000107c61180();
      lVar16 = unaff_x20;
      func_0x000107c5de64();
      func_0x000107c61180();
      if (lVar16 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102931af4);
        (*pcVar1)();
      }
      lVar10 = lVar16;
      func_0x000107c4acb0();
      func_0x000107c61180();
      func_0x000107c61170(lVar16);
      puVar11 = puVar5;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(puVar5);
      func_0x000107c61170(lVar10);
      *(undefined **)(lVar3 + 0x20) = puVar11;
      puVar5 = puVar9;
      func_0x000107c5ce8c();
      func_0x000107c61180();
      lVar16 = unaff_x20;
      func_0x000107c5de64();
      func_0x000107c61180();
      if (lVar16 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102931af8);
        (*pcVar1)();
      }
      lVar10 = lVar16;
      func_0x000107c5ce8c();
      func_0x000107c61180();
      func_0x000107c61170(lVar16);
      puVar11 = puVar5;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(puVar5);
      func_0x000107c61170(lVar10);
      *(undefined **)(lVar3 + 0x28) = puVar11;
      puVar5 = puVar9;
      func_0x000107c5cbe4();
      func_0x000107c61180();
      lVar16 = unaff_x20;
      func_0x000107c5de64();
      func_0x000107c61180();
      if (lVar16 != 0) {
        lVar10 = lVar16;
        func_0x000107c5cbe4();
        func_0x000107c61180();
        func_0x000107c61170(lVar16);
        puVar11 = puVar5;
        func_0x000107c40280();
        func_0x000107c61180();
        func_0x000107c61170(puVar5);
        func_0x000107c61170(lVar10);
        *(undefined **)(lVar3 + 0x30) = puVar11;
        puVar5 = puVar9;
        func_0x000107c3ec1c();
        func_0x000107c61180();
        func_0x000107c61170(puVar9);
        func_0x000107c5de64();
        func_0x000107c61180();
        if (unaff_x20 != 0) {
          puVar11 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
          func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
          lVar16 = unaff_x20;
          func_0x000107c3ec1c(unaff_x20);
          func_0x000107c61180();
          func_0x000107c61170(unaff_x20);
          puVar12 = puVar5;
          func_0x000107c40280();
          func_0x000107c61180();
          func_0x000107c61170(puVar5);
          func_0x000107c61170(lVar16);
          *(undefined **)(lVar3 + 0x38) = puVar12;
          uVar6 = 0;
          func_0x000102932464(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
          lVar16 = lVar3;
          func_0x000107c5fc48(lVar3,uVar6);
          func_0x000107c61574(lVar3);
          func_0x000107c3d048(puVar11);
          func_0x000107c615e8(lVar2);
          func_0x000107c61170(puVar4);
          func_0x000107c61170(uVar7);
          func_0x000107c61170(uVar7);
          func_0x000107c61170(puVar14);
          func_0x000107c61170(puVar9);
          func_0x000107c61170(lVar16);
          return;
        }
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102931b00);
        (*pcVar1)();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102931afc);
      (*pcVar1)();
    }
  }
  pcVar13 = "dismissPage()";
  func_0x0001000c10c0("dismissPage()");
  func_0x000107c61180();
  puVar14 = &UNK_11056e6f8;
  func_0x000107c613fc(&UNK_11056e6f8,0x18,7);
  func_0x000107c61614(puVar14 + 0x10);
  pcStack_80 = FUN_1029322e0;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1000f6b44;
  puStack_88 = &UNK_11056e710;
  ppuVar15 = &puStack_a0;
  puStack_78 = puVar14;
  func_0x000107c60bc4(ppuVar15);
  func_0x000107c61574(puStack_78);
  func_0x000107c4e524(pcVar13);
  func_0x000107c60bd0(ppuVar15);
  func_0x000107c615e8(pcVar13);
  return;
}



/* Entry: 102931b00; end: 102931b5b; -[_TtC38FanPassAccountManagementImplementation38FanPassAccountManagementViewController viewDidLoad] */

void FUN_102931b00(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_viewDidLoad_112684cd8;
  uStack_30 = param_1;
  uStack_28 = uVar2;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&uStack_30,puVar1);
  FUN_102931424();
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 102931b5c; end: 102931c27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102931b5c(uint param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_viewDidDisappear__112684c48,param_1 & 1);
  uVar1 = unaff_x20;
  func_0x000107c49aa0();
  if ((uVar1 & 1) == 0) {
    uVar1 = unaff_x20;
    func_0x000107c4d508();
    func_0x000107c61180();
    if (uVar1 != 0) {
      uVar2 = uVar1;
      func_0x000107c49aa0();
      func_0x000107c61170();
      if ((uVar2 & 1) != 0) goto LAB_102931bd8;
    }
    uVar1 = unaff_x20;
    func_0x000107c4a094();
    if ((int)uVar1 == 0) {
      return;
    }
  }
LAB_102931bd8:
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & **(ulong **)(unaff_x20 + _DAT_112ecddb8)) +
              0x68))();
  if (uVar1 != 0) {
    func_0x000107c41b20();
    func_0x000107c615e8(uVar1);
  }
  return;
}



/* Entry: 102931c28; end: 102931c57; -[_TtC38FanPassAccountManagementImplementation38FanPassAccountManagementViewController viewDidDisappear:] */

void FUN_102931c28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_102931b5c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102931c58; end: 102931efb; -[_TtC38FanPassAccountManagementImplementation38FanPassAccountManagementViewController didMoveToParentViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102931c58(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lStack_40;
  long lStack_38;
  
  plVar3 = &lStack_40;
  lVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_didMoveToParentViewController__1125bb948;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61154(&lStack_40,puVar1,param_3);
  if (param_3 == 0) {
    (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & **(ulong **)(param_1 + _DAT_112ecddb8)) +
                0x68))();
    if (plVar3 != (long *)0x0) {
      func_0x000107c41b20();
      func_0x000107c615e8(plVar3);
    }
  }
  else {
    func_0x000107c61170(param_3);
  }
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 102931efc; end: 10293205b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102931efc(long param_1,uint param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  undefined8 uVar4;
  ulong *puStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  puVar1 = (ulong *)(param_1 + 0x10);
  func_0x000107c61618();
  if (puVar1 != (ulong *)0x0) {
    puVar2 = puVar1;
    func_0x000107c4d508();
    func_0x000107c61180();
    if (puVar2 != (ulong *)0x0) {
      puVar3 = (ulong *)PTR_PTR_1126aead0;
      func_0x000107c610f8();
      func_0x000107c47994();
      uVar4 = *(undefined8 *)(*(long *)((long)puVar1 + _DAT_112ecddb8) + _DAT_112ecddf0);
      func_0x00010036604c(0);
      func_0x000107c610f8();
      func_0x000107c61174(uVar4);
      func_0x000103928328(puVar3,uVar4,0);
      (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar3) + 0x98))(param_2 & 1);
      puStack_68 = puVar3;
      func_0x00010008a7c8(&uStack_60,&puStack_68);
      func_0x000100083b20(&puStack_68);
      func_0x000107c61574(uStack_60);
      func_0x000107c61170(puVar2);
      func_0x000107c61170(puVar1);
      func_0x000107c61170(puVar3);
      puVar1 = puStack_68;
    }
    func_0x000107c61170(puVar1);
  }
  return;
}



/* Entry: 10293205c; end: 10293219f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10293205c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  ppuVar3 = &puStack_90;
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  lVar1 = param_1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar4 = *(long *)(lVar1 + _DAT_112ecddb8);
    func_0x000107c61174();
    func_0x000107c61170(lVar1);
    uVar5 = *(undefined8 *)(lVar4 + _DAT_112ecdde8);
    func_0x000107c615f0(uVar5);
    func_0x000107c61170(lVar4);
    puVar2 = &UNK_11056e6f8;
    func_0x000107c613fc(&UNK_11056e6f8,0x18,7);
    func_0x000107c61428(param_1 + 0x10,auStack_60,0,0);
    param_1 = param_1 + 0x10;
    func_0x000107c61618(param_1);
    func_0x000107c61614(puVar2 + 0x10,param_1);
    func_0x000107c61170(param_1);
    uStack_70 = 0x1029324d0;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000b0c7c;
    puStack_78 = &UNK_11056e878;
    puStack_68 = puVar2;
    func_0x000107c60bc4(&puStack_90);
    func_0x000107c61574(puStack_68);
    func_0x000107c41864(uVar5);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c615e8(uVar5);
  }
  return;
}



/* Entry: 1029321a0; end: 102932237; -[_TtC38FanPassAccountManagementImplementation38FanPassAccountManagementViewController initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029321a0(long param_1)

{
  code *pcVar1;
  
  *(undefined8 *)(param_1 + _DAT_112ecdd98) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "FanPassAccountManagementImplementation/FanPassAccountManagementViewController.swift"
                      ,0x53,2,0x22,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102932204);
  (*pcVar1)();
}



/* Entry: 102932238; end: 102932257;  */

undefined1  [16] FUN_102932238(void)

{
  return ZEXT816(0x11056e6b8);
}



/* Entry: 102932258; end: 1029322bf; -[_TtC38FanPassAccountManagementImplementation38FanPassAccountManagementViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102932274: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102932294: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102932278) */
/* WARNING: Removing unreachable block (ram,0x000102932298) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102932258(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ecddb8));
  return;
}



/* Entry: 1029322c0; end: 1029322df;  */

void FUN_1029322c0(void)

{
  func_0x000107c61168(&PTR_PTR_112871428);
  return;
}



/* Entry: 1029322e0; end: 102932303;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029322e0(void)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  ppuVar3 = &puStack_90;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar4 = *(long *)(lVar1 + _DAT_112ecddb8);
    func_0x000107c61174();
    func_0x000107c61170(lVar1);
    uVar5 = *(undefined8 *)(lVar4 + _DAT_112ecdde8);
    func_0x000107c615f0(uVar5);
    func_0x000107c61170(lVar4);
    puVar2 = &UNK_11056e6f8;
    func_0x000107c613fc(&UNK_11056e6f8,0x18,7);
    func_0x000107c61428(unaff_x20 + 0x10,auStack_60,0,0);
    lVar1 = unaff_x20 + 0x10;
    func_0x000107c61618(lVar1);
    func_0x000107c61614(puVar2 + 0x10,lVar1);
    func_0x000107c61170(lVar1);
    uStack_70 = 0x1029324d0;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000b0c7c;
    puStack_78 = &UNK_11056e878;
    puStack_68 = puVar2;
    func_0x000107c60bc4(&puStack_90);
    func_0x000107c61574(puStack_68);
    func_0x000107c41864(uVar5);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c615e8(uVar5);
  }
  return;
}



/* Entry: 102932304; end: 1029323fb;  */

void FUN_102932304(void)

{
  long lVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    pcVar2 = "dismissPage()";
    func_0x0001000c10c0("dismissPage()");
    func_0x000107c61180();
    puVar3 = &UNK_11056e6f8;
    func_0x000107c613fc(&UNK_11056e6f8,0x18,7);
    func_0x000107c61614(puVar3 + 0x10,lVar1);
    uStack_58 = 0x1029325a8;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    puStack_68 = &UNK_1000f6b44;
    puStack_60 = &UNK_11056e850;
    ppuVar4 = &puStack_78;
    puStack_50 = puVar3;
    func_0x000107c60bc4(ppuVar4);
    func_0x000107c61574(puStack_50);
    func_0x000107c4e524(pcVar2);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c615e8(pcVar2);
    func_0x000107c61170(lVar1);
  }
  return;
}


