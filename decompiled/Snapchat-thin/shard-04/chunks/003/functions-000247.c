/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1033b930c; end: 1033b934f; -[_TtC18GamesActionBarImpl25GamesActionBarSharePlugin didDismissWithRecipientsCount:groupsCount:] */

void FUN_1033b930c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174();
  FUN_1033b9154(param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1033b9350; end: 1033b93db;  */

void FUN_1033b9350(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_1033b81e4();
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1033b93dc; end: 1033b9713;  */

undefined1  [16] FUN_1033b93dc(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffe4;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f147c80);
  uVar3 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f147ca0);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1033b94a8);
  (*pcVar1)();
}



/* Entry: 1033b9714; end: 1033b974b;  */

void FUN_1033b9714(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_11064c5f0;
  if (lRam0000000112f61ea8 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112f61ea8 = param_1;
  }
  return;
}



/* Entry: 1033b974c; end: 1033b978f;  */

void FUN_1033b974c(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 1033b9790; end: 1033b9797;  */

bool FUN_1033b9790(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1033b9798; end: 1033b97ff;  */

void FUN_1033b9798(long param_1,undefined8 param_2)

{
  long lVar1;
  
  func_0x0001070bd6bc();
  func_0x000107c61180();
  if (param_1 == 0) {
    param_2 = 0xe500000000000000;
    lVar1 = 0x73656d6147;
  }
  else {
    lVar1 = param_1;
    func_0x000107c5faec();
    func_0x000107c61170(param_1);
  }
  lRam0000000113807240 = lVar1;
  uRam0000000113807248 = param_2;
  return;
}



/* Entry: 1033b9800; end: 1033b991f;  */

void FUN_1033b9800(undefined8 param_1,undefined8 param_2)

{
  FUN_1033caffc();
  uRam0000000113807250 = param_1;
  uRam0000000113807258 = param_2;
  return;
}



/* Entry: 1033b9920; end: 1033b992f;  */

undefined1  [16] FUN_1033b9920(void)

{
  return ZEXT816(0x11064c660);
}



/* Entry: 1033b9930; end: 1033b9967;  */

void FUN_1033b9930(undefined8 param_1)

{
  if (lRam0000000112f61f30 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e761414);
  return;
}



/* Entry: 1033b9968; end: 1033b9a97;  */

long * FUN_1033b9968(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  
  uVar3 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar3 >> 0x11 & 1) == 0) {
    lVar5 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar5;
    lVar1 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = lVar1;
    lVar7 = (long)*(int *)(param_3 + 0x18);
    lVar4 = 0;
    func_0x000107c5ede0();
    lVar8 = *(long *)(lVar4 + -8);
    pcVar9 = *(code **)(lVar8 + 0x30);
    func_0x000107c61434(lVar5);
    func_0x000107c61434(lVar1);
    lVar5 = (long)param_2 + lVar7;
    (*pcVar9)(lVar5,1,lVar4);
    if ((int)lVar5 == 0) {
      (**(code **)(lVar8 + 0x10))((long)param_1 + lVar7,(long)param_2 + lVar7,lVar4);
      (**(code **)(lVar8 + 0x38))((long)param_1 + lVar7,0,1,lVar4);
    }
    else {
      lVar5 = 0x112d36580;
      func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
      func_0x000107c610b4((long)param_1 + lVar7,(long)param_2 + lVar7,
                          *(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
    }
    iVar2 = *(int *)(param_3 + 0x20);
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
    *(undefined1 *)((long)param_1 + (long)iVar2) = *(undefined1 *)((long)param_2 + (long)iVar2);
    func_0x000107c61174();
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



/* Entry: 1033b9a98; end: 1033b9b1b;  */

void FUN_1033b9a98(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x18));
  iVar1 = *(int *)(param_2 + 0x18);
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar4 = *(long *)(lVar2 + -8);
  lVar3 = param_1 + iVar1;
  (**(code **)(lVar4 + 0x30))(lVar3,1,lVar2);
  if ((int)lVar3 == 0) {
    (**(code **)(lVar4 + 8))(param_1 + iVar1,lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x1c)));
  return;
}



/* Entry: 1033b9b1c; end: 1033b9c1f;  */

undefined8 * FUN_1033b9b1c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  lVar6 = (long)*(int *)(param_3 + 0x18);
  lVar4 = 0;
  func_0x000107c5ede0();
  lVar7 = *(long *)(lVar4 + -8);
  pcVar8 = *(code **)(lVar7 + 0x30);
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  lVar5 = (long)param_2 + lVar6;
  (*pcVar8)(lVar5,1,lVar4);
  if ((int)lVar5 == 0) {
    (**(code **)(lVar7 + 0x10))((long)param_1 + lVar6,(long)param_2 + lVar6,lVar4);
    (**(code **)(lVar7 + 0x38))((long)param_1 + lVar6,0,1,lVar4);
  }
  else {
    lVar5 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    func_0x000107c610b4((long)param_1 + lVar6,(long)param_2 + lVar6,
                        *(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  }
  iVar3 = *(int *)(param_3 + 0x20);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  *(undefined1 *)((long)param_1 + (long)iVar3) = *(undefined1 *)((long)param_2 + (long)iVar3);
  func_0x000107c61174();
  return param_1;
}



/* Entry: 1033b9c20; end: 1033b9d8f;  */

undefined8 * FUN_1033b9c20(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  
  *param_1 = *param_2;
  uVar4 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  param_1[2] = param_2[2];
  uVar4 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  lVar5 = (long)*(int *)(param_3 + 0x18);
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar6 = *(long *)(lVar1 + -8);
  pcVar7 = *(code **)(lVar6 + 0x30);
  lVar3 = (long)param_1 + lVar5;
  (*pcVar7)(lVar3,1,lVar1);
  lVar2 = (long)param_2 + lVar5;
  (*pcVar7)(lVar2,1,lVar1);
  if ((int)lVar3 == 0) {
    if ((int)lVar2 == 0) {
      (**(code **)(lVar6 + 0x18))((long)param_1 + lVar5,(long)param_2 + lVar5,lVar1);
      goto LAB_1033b9d34;
    }
    (**(code **)(lVar6 + 8))((long)param_1 + lVar5,lVar1);
  }
  else if ((int)lVar2 == 0) {
    (**(code **)(lVar6 + 0x10))((long)param_1 + lVar5,(long)param_2 + lVar5,lVar1);
    (**(code **)(lVar6 + 0x38))((long)param_1 + lVar5,0,1,lVar1);
    goto LAB_1033b9d34;
  }
  lVar3 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  func_0x000107c610b4((long)param_1 + lVar5,(long)param_2 + lVar5,
                      *(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
LAB_1033b9d34:
  lVar3 = (long)*(int *)(param_3 + 0x1c);
  uVar4 = *(undefined8 *)((long)param_1 + lVar3);
  *(undefined8 *)((long)param_1 + lVar3) = *(undefined8 *)((long)param_2 + lVar3);
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x20)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  return param_1;
}



/* Entry: 1033b9d90; end: 1033b9e67;  */

undefined8 * FUN_1033b9d90(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar6 = *param_2;
  uVar8 = param_2[3];
  uVar7 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar6;
  param_1[3] = uVar8;
  param_1[2] = uVar7;
  lVar4 = (long)*(int *)(param_3 + 0x18);
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar5 = *(long *)(lVar2 + -8);
  lVar3 = (long)param_2 + lVar4;
  (**(code **)(lVar5 + 0x30))(lVar3,1,lVar2);
  if ((int)lVar3 == 0) {
    (**(code **)(lVar5 + 0x20))((long)param_1 + lVar4,(long)param_2 + lVar4,lVar2);
    (**(code **)(lVar5 + 0x38))((long)param_1 + lVar4,0,1,lVar2);
  }
  else {
    lVar3 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    func_0x000107c610b4((long)param_1 + lVar4,(long)param_2 + lVar4,
                        *(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  }
  iVar1 = *(int *)(param_3 + 0x20);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  *(undefined1 *)((long)param_1 + (long)iVar1) = *(undefined1 *)((long)param_2 + (long)iVar1);
  return param_1;
}



/* Entry: 1033b9e68; end: 1033b9faf;  */

undefined8 * FUN_1033b9e68(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  
  uVar4 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar4;
  func_0x000107c6142c(uVar1);
  uVar4 = param_2[3];
  uVar1 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar4;
  func_0x000107c6142c(uVar1);
  lVar6 = (long)*(int *)(param_3 + 0x18);
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar7 = *(long *)(lVar2 + -8);
  pcVar8 = *(code **)(lVar7 + 0x30);
  lVar5 = (long)param_1 + lVar6;
  (*pcVar8)(lVar5,1,lVar2);
  lVar3 = (long)param_2 + lVar6;
  (*pcVar8)(lVar3,1,lVar2);
  if ((int)lVar5 == 0) {
    if ((int)lVar3 == 0) {
      (**(code **)(lVar7 + 0x28))((long)param_1 + lVar6,(long)param_2 + lVar6,lVar2);
      goto LAB_1033b9f5c;
    }
    (**(code **)(lVar7 + 8))((long)param_1 + lVar6,lVar2);
  }
  else if ((int)lVar3 == 0) {
    (**(code **)(lVar7 + 0x20))((long)param_1 + lVar6,(long)param_2 + lVar6,lVar2);
    (**(code **)(lVar7 + 0x38))((long)param_1 + lVar6,0,1,lVar2);
    goto LAB_1033b9f5c;
  }
  lVar5 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  func_0x000107c610b4((long)param_1 + lVar6,(long)param_2 + lVar6,
                      *(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
LAB_1033b9f5c:
  lVar5 = (long)*(int *)(param_3 + 0x1c);
  uVar4 = *(undefined8 *)((long)param_1 + lVar5);
  *(undefined8 *)((long)param_1 + lVar5) = *(undefined8 *)((long)param_2 + lVar5);
  func_0x000107c61170(uVar4);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x20)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  return param_1;
}



/* Entry: 1033b9fb0; end: 1033b9fc7;  */

void FUN_1033b9fb0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 1033b9fc8; end: 1033ba05b;  */

void FUN_1033b9fc8(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puStack_48 = &UNK_10dbbe708;
  puStack_40 = &UNK_10dbbe720;
  lVar1 = 0x13f;
  func_0x0001000ee934();
  if (param_2 < 0x40) {
    lStack_38 = *(long *)(lVar1 + -8) + 0x40;
    puStack_30 = PTR___sBOWV_11034d658 + 0x40;
    puStack_28 = &UNK_10dbbe738;
    func_0x000107c6153c(param_1,0x100,5,&puStack_48,param_1 + 0x10);
  }
  return;
}



/* Entry: 1033ba05c; end: 1033ba187;  */

undefined1 FUN_1033ba05c(void)

{
  undefined *puVar1;
  undefined1 uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 uStack_41;
  
  uStack_41 = 0;
  puVar4 = &UNK_11064c680;
  func_0x000107c613fc(&UNK_11064c680,0x18,7);
  *(undefined1 **)(puVar4 + 0x10) = &uStack_41;
  puVar5 = &UNK_11064c6a8;
  func_0x000107c613fc(&UNK_11064c6a8,0x20,7);
  *(code **)(puVar5 + 0x10) = FUN_1033ba188;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  pcStack_58 = FUN_1033ba198;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0x42000000;
  uStack_68 = 0x1033ba1b8;
  puStack_60 = &UNK_11064c6c0;
  ppuVar6 = &puStack_78;
  puStack_50 = puVar5;
  func_0x000107c60bc4(ppuVar6);
  puVar1 = puStack_50;
  func_0x000107c6157c(puVar5);
  func_0x000107c61574(puVar1);
  func_0x000107c4c658();
  func_0x000107c60bd0(ppuVar6);
  uVar2 = uStack_41;
  func_0x000107c61574(puVar4);
  puVar4 = puVar5;
  func_0x000107c61544(puVar5,"",0x89,9,0xd,1);
  func_0x000107c61574(puVar5);
  if (((ulong)puVar4 & 1) == 0) {
    return uVar2;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1033ba188);
  (*pcVar3)();
}



/* Entry: 1033ba188; end: 1033ba197;  */

void FUN_1033ba188(void)

{
  long unaff_x20;
  
  **(undefined1 **)(unaff_x20 + 0x10) = 1;
  return;
}



/* Entry: 1033ba198; end: 1033ba1db;  */

void FUN_1033ba198(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1033ba1dc; end: 1033ba1f7;  */

void FUN_1033ba1dc(long param_1,long param_2)

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



/* Entry: 1033ba1f8; end: 1033ba3d7;  */

void FUN_1033ba1f8(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined8 *unaff_x20;
  undefined8 uVar8;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined8 uStack_68;
  
  ppuVar5 = &puStack_90;
  ppuVar6 = &puStack_90;
  if (unaff_x20[5] == 0) {
    uVar8 = *unaff_x20;
    lVar1 = unaff_x20[2];
    func_0x000107c3f6e8();
    func_0x000107c61180();
    lVar2 = lVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar2 == 0) {
      func_0x0001007d6c6c(3,0xd00000000000003b,0x800000010f147d20,uVar8,&PTR_DAT_11064c6e8);
    }
    else {
      puVar3 = PTR_PTR_1126cce30;
      func_0x000107c61168(PTR_PTR_1126cce30);
      func_0x000107c4156c();
      func_0x000107c61180();
      lVar1 = lVar2;
      func_0x000107c3f6ec();
      func_0x000107c61180();
      func_0x000107c61170(puVar3);
      uVar8 = unaff_x20[5];
      unaff_x20[5] = lVar1;
      func_0x000107c615f0(lVar1);
      func_0x000107c615e8(uVar8);
      lVar4 = lVar1;
      func_0x000107c3f6f0();
      func_0x000107c61180();
      puVar3 = PTR___NSConcreteStackBlock_11034bd00;
      pcStack_70 = FUN_1033ba3d8;
      uStack_68 = 0;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_102e29f64;
      puStack_78 = &UNK_11064c758;
      func_0x000107c60bc4(&puStack_90);
      pcStack_70 = FUN_1033ba3d8;
      uStack_68 = 0;
      puStack_90 = puVar3;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_1000f6b44;
      puStack_78 = &UNK_11064c780;
      func_0x000107c60bc4(&puStack_90);
      lVar7 = lVar4;
      func_0x000107c5c324();
      func_0x000107c61180();
      func_0x000107c615e8(lVar2);
      func_0x000107c615e8(lVar1);
      func_0x000107c60bd0(ppuVar6);
      func_0x000107c60bd0(ppuVar5);
      func_0x000107c61170(lVar4);
      uVar8 = unaff_x20[6];
      unaff_x20[6] = lVar7;
      func_0x000107c61170(uVar8);
    }
  }
  return;
}



/* Entry: 1033ba3d8; end: 1033ba3df;  */

void FUN_1033ba3d8(void)

{
  return;
}



/* Entry: 1033ba3e0; end: 1033ba443;  */

void FUN_1033ba3e0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1033ba444; end: 1033ba44b;  */

void FUN_1033ba444(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1033ba44c; end: 1033ba487;  */

void FUN_1033ba44c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = 0;
  func_0x0001033be244();
  param_1[3] = uVar1;
  param_1[4] = &PTR_DAT_11064ca50;
  *param_1 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar2);
  return;
}



/* Entry: 1033ba488; end: 1033ba48b;  */

void FUN_1033ba488(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined8 *unaff_x20;
  undefined8 uVar8;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined8 uStack_68;
  
  ppuVar5 = &puStack_90;
  ppuVar6 = &puStack_90;
  if (unaff_x20[5] == 0) {
    uVar8 = *unaff_x20;
    lVar1 = unaff_x20[2];
    func_0x000107c3f6e8();
    func_0x000107c61180();
    lVar2 = lVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar2 == 0) {
      func_0x0001007d6c6c(3,0xd00000000000003b,0x800000010f147d20,uVar8,&PTR_DAT_11064c6e8);
    }
    else {
      puVar3 = PTR_PTR_1126cce30;
      func_0x000107c61168(PTR_PTR_1126cce30);
      func_0x000107c4156c();
      func_0x000107c61180();
      lVar1 = lVar2;
      func_0x000107c3f6ec();
      func_0x000107c61180();
      func_0x000107c61170(puVar3);
      uVar8 = unaff_x20[5];
      unaff_x20[5] = lVar1;
      func_0x000107c615f0(lVar1);
      func_0x000107c615e8(uVar8);
      lVar4 = lVar1;
      func_0x000107c3f6f0();
      func_0x000107c61180();
      puVar3 = PTR___NSConcreteStackBlock_11034bd00;
      pcStack_70 = FUN_1033ba3d8;
      uStack_68 = 0;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_102e29f64;
      puStack_78 = &UNK_11064c758;
      func_0x000107c60bc4(&puStack_90);
      pcStack_70 = FUN_1033ba3d8;
      uStack_68 = 0;
      puStack_90 = puVar3;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_1000f6b44;
      puStack_78 = &UNK_11064c780;
      func_0x000107c60bc4(&puStack_90);
      lVar7 = lVar4;
      func_0x000107c5c324();
      func_0x000107c61180();
      func_0x000107c615e8(lVar2);
      func_0x000107c615e8(lVar1);
      func_0x000107c60bd0(ppuVar6);
      func_0x000107c60bd0(ppuVar5);
      func_0x000107c61170(lVar4);
      uVar8 = unaff_x20[6];
      unaff_x20[6] = lVar7;
      func_0x000107c61170(uVar8);
    }
  }
  return;
}



/* Entry: 1033ba48c; end: 1033ba50b;  */

void FUN_1033ba48c(void)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  lVar2 = *(long *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(lVar2 + 0x20);
  func_0x000107c614f0(uVar3);
  puVar1 = &UNK_11064c740;
  func_0x000107c613fc(&UNK_11064c740,0x18,7);
  func_0x000107c61644(puVar1 + 0x10,lVar2);
  func_0x000107c6157c(puVar1);
  func_0x00010090569c(0x1033ba530,puVar1,uVar3);
  func_0x000107c61578(puVar1,2);
  return;
}



/* Entry: 1033ba50c; end: 1033ba55b;  */

void FUN_1033ba50c(void)

{
  long in_x4;
  
                    /* WARNING: Could not recover jumptable at 0x0001033ba51c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_x4 + 0x10))();
  return;
}



/* Entry: 1033ba55c; end: 1033ba5bb;  */

void FUN_1033ba55c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    FUN_1033ba5bc(uVar1,0);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 1033ba5bc; end: 1033bad2f;  */

void FUN_1033ba5bc(long param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  code *pcVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined **ppuVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 *unaff_x20;
  undefined *puVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  long lVar19;
  undefined *puStack_c8;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  
  uVar17 = *unaff_x20;
  uVar15 = unaff_x20[7];
  unaff_x20[7] = param_1;
  func_0x000107c61434();
  func_0x000107c6142c(uVar15);
  puStack_b0 = (undefined *)0x0;
  uStack_a8 = 0xe000000000000000;
  func_0x000107c602fc(0x37);
  func_0x000107c5fb78(0xd000000000000027,0x800000010f147d60);
  uVar15 = 0x112d38270;
  puStack_80 = (undefined *)param_1;
  func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
  uVar6 = uVar15;
  func_0x00010011d734();
  uVar13 = 0xe100000000000000;
  func_0x000107c5fa80(0x2c,0xe100000000000000,uVar15);
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar13);
  func_0x000107c5fb78(0x726665527369205d,0xec0000003d687365);
  bVar5 = (param_2 & 1) == 0;
  uVar13 = 0x65757274;
  if (bVar5) {
    uVar13 = 0x65736c6166;
  }
  uVar1 = 0xe400000000000000;
  if (bVar5) {
    uVar1 = 0xe500000000000000;
  }
  func_0x000107c5fb78(uVar13,uVar1);
  func_0x000107c6142c(uVar1);
  uVar13 = uStack_a8;
  func_0x0001007d6c6c(1,puStack_b0,uStack_a8,uVar17,&PTR_DAT_11064c7b8);
  func_0x000107c6142c(uVar13);
  func_0x0001000d224c(&puStack_b0);
  puVar2 = puStack_b0;
  if (puStack_b0 != (undefined *)0x0) {
    func_0x0001000d224c(&puStack_b0);
    puVar3 = puStack_b0;
    if (puStack_b0 != (undefined *)0x0) {
      if (*(long *)(param_1 + 0x10) != 0) {
        puVar18 = (undefined8 *)(param_1 + 0x28);
        lVar19 = 1 - *(long *)(param_1 + 0x10);
        while( true ) {
          uVar13 = puVar18[-1];
          uVar1 = *puVar18;
          puVar7 = PTR_PTR_1126ccbc8;
          func_0x000107c610f8();
          func_0x000107c61434(uVar1);
          uVar11 = uVar13;
          func_0x000107c5fadc(uVar13,uVar1);
          puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
          func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,PTR___sSSN_11034da80);
          func_0x000107c48544();
          func_0x000107c61170(uVar11);
          func_0x000107c61170(puVar8);
          puVar8 = puVar3;
          if ((param_2 & 1) == 0) {
            func_0x000107c43168();
          }
          else {
            func_0x000107c4fb70();
          }
          func_0x000107c61180();
          uVar11 = uVar13;
          uVar14 = uVar1;
          func_0x000107c5fadc(uVar13);
          puVar9 = puVar2;
          func_0x000107c4b3a0();
          func_0x000107c61180();
          func_0x000107c61170(uVar11);
          puVar16 = puVar8;
          func_0x000107c4f79c();
          func_0x000107c61180();
          if (puVar16 == (undefined *)0x0) {
            puStack_c8 = (undefined *)0x0;
            uStack_b8 = 0xe000000000000000;
            uVar11 = uVar14;
          }
          else {
            puStack_c8 = puVar16;
            func_0x000107c5faec();
            uVar11 = uVar14;
            func_0x000107c61170(puVar16);
            uStack_b8 = uVar14;
          }
          puVar16 = puVar8;
          func_0x000107c4f774();
          func_0x000107c61180();
          if (puVar16 == (undefined *)0x0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1033bad28);
            (*pcVar4)();
          }
          puVar10 = puVar16;
          func_0x000107c4f798();
          func_0x000107c61180();
          func_0x000107c61170(puVar16);
          if (puVar10 == (undefined *)0x0) {
            puVar16 = (undefined *)0x0;
            uVar11 = 0xe000000000000000;
          }
          else {
            puVar16 = puVar10;
            func_0x000107c5faec(puVar10);
            func_0x000107c61170(puVar10);
          }
          puVar10 = puVar9;
          func_0x000107c3f3fc();
          if ((int)puVar10 == 0) {
            func_0x000107c6142c(uStack_b8);
            func_0x000107c6142c(uVar11);
            puStack_b0 = (undefined *)0x0;
            uStack_a8 = 0xe000000000000000;
            func_0x000107c602fc(0x40);
            func_0x000107c5fb78(0xd000000000000022,0x800000010f147dd0);
            func_0x000107c5fb78(uVar13,uVar1);
            func_0x000107c6142c(uVar1);
            func_0x000107c5fb78(0xd00000000000001c,0x800000010f147e00);
            uVar13 = uStack_a8;
            func_0x0001007d6c6c(1,puStack_b0,uStack_a8,uVar17,&PTR_DAT_11064c7b8);
            func_0x000107c61170(puVar7);
            func_0x000107c61170(puVar8);
            func_0x000107c615e8(puVar9);
            func_0x000107c6142c(uVar13);
          }
          else {
            puStack_b0 = (undefined *)0x0;
            uStack_a8 = 0xe000000000000000;
            func_0x000107c602fc(0x54);
            func_0x000107c5fb78(0xd000000000000022,0x800000010f147e20);
            func_0x000107c5fb78(uVar13,uVar1);
            func_0x000107c5fb78(0x5555797265757120,0xeb000000003d4449);
            func_0x000107c5fb78(puStack_c8,uStack_b8);
            func_0x000107c5fb78(0x7954797265757120,0xeb000000003d6570);
            func_0x000107c5fb78(puVar16,uVar11);
            func_0x000107c6142c(uVar11);
            func_0x000107c5fb78(0xd000000000000013,0x800000010f147e50);
            puVar16 = puVar8;
            func_0x000107c4f774();
            func_0x000107c61180();
            if (puVar16 == (undefined *)0x0) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x1033bad2c);
              (*pcVar4)();
            }
            puVar10 = puVar16;
            func_0x000107c50460();
            func_0x000107c61180();
            func_0x000107c61170(puVar16);
            if (puVar10 == (undefined *)0x0) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x1033bad30);
              (*pcVar4)();
            }
            puVar16 = puVar10;
            func_0x000107c5fc54(puVar10,PTR___sSSN_11034da80);
            func_0x000107c61170(puVar10);
            uVar11 = 0x2c;
            uVar14 = 0xe100000000000000;
            puStack_80 = puVar16;
            func_0x000107c5fa80(0x2c,0xe100000000000000,uVar15,uVar6);
            func_0x000107c6142c(puVar16);
            func_0x000107c5fb78(uVar11,uVar14);
            func_0x000107c6142c(uVar14);
            func_0x000107c5fb78(0x5d,0xe100000000000000);
            uVar11 = uStack_a8;
            func_0x0001007d6c6c(1,puStack_b0,uStack_a8,uVar17,&PTR_DAT_11064c7b8);
            func_0x000107c6142c(uVar11);
            func_0x000107c61428(unaff_x20 + 6,&puStack_b0,0x21,0);
            func_0x000107c61434(uVar1);
            func_0x000107c615f0(puVar9);
            uVar11 = unaff_x20[6];
            func_0x000107c61558(uVar11);
            puStack_80 = (undefined *)unaff_x20[6];
            unaff_x20[6] = 0x8000000000000000;
            FUN_1033bb2dc(puVar9,uVar13,uVar1,uVar11);
            func_0x000107c6142c(uVar1);
            unaff_x20[6] = puStack_80;
            func_0x000107c614a8(&puStack_b0);
            puVar16 = &UNK_11064c7e8;
            func_0x000107c613fc(&UNK_11064c7e8,0x38,7);
            *(undefined8 *)(puVar16 + 0x10) = uVar13;
            *(undefined8 *)(puVar16 + 0x18) = uVar1;
            *(undefined **)(puVar16 + 0x20) = puStack_c8;
            *(undefined8 *)(puVar16 + 0x28) = uStack_b8;
            *(undefined8 *)(puVar16 + 0x30) = uVar17;
            pcStack_90 = FUN_1033bb42c;
            puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_a8 = 0x42000000;
            puStack_a0 = &UNK_1024ff1e4;
            puStack_98 = &UNK_11064c800;
            ppuVar12 = &puStack_b0;
            puStack_88 = puVar16;
            func_0x000107c60bc4(ppuVar12);
            func_0x000107c61574(puStack_88);
            func_0x000107c50708(puVar9);
            func_0x000107c60bd0(ppuVar12);
            func_0x000107c61170(puVar7);
            func_0x000107c61170(puVar8);
            func_0x000107c615e8(puVar9);
          }
          if (lVar19 == 0) break;
          puVar18 = puVar18 + 2;
          lVar19 = lVar19 + 1;
          if (lVar19 == 1) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1033bad24);
            (*pcVar4)();
          }
        }
      }
      func_0x000107c615e8(puVar3);
      func_0x000107c615e8(puVar2);
      return;
    }
    func_0x000107c615e8(puVar2);
  }
  func_0x0001007d6c6c(3,0xd00000000000003c,0x800000010f147d90,uVar17,&PTR_DAT_11064c7b8);
  return;
}



/* Entry: 1033bad30; end: 1033badaf;  */

void FUN_1033bad30(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 0x38);
    if (*(long *)(lVar1 + 0x10) == 0) {
      func_0x000107c61574(param_1);
    }
    else {
      func_0x000107c61434(lVar1);
      FUN_1033ba5bc();
      func_0x000107c61574(param_1);
      func_0x000107c6142c(lVar1);
    }
  }
  return;
}



/* Entry: 1033badb0; end: 1033baff7;  */

void FUN_1033badb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  puVar3 = &UNK_11064c838;
  func_0x000107c613fc(&UNK_11064c838,0x38,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  *(undefined8 *)(puVar3 + 0x20) = param_4;
  *(undefined8 *)(puVar3 + 0x28) = param_5;
  *(undefined8 *)(puVar3 + 0x30) = param_6;
  puVar4 = &UNK_11064c860;
  func_0x000107c613fc(&UNK_11064c860,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = 0x1033bb454;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_1033bb460;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_102e29534;
  puStack_88 = &UNK_11064c878;
  ppuVar5 = &puStack_a0;
  puStack_78 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  puVar6 = puStack_78;
  func_0x000107c61434(param_3);
  func_0x000107c61434(param_5);
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar6);
  puVar6 = &UNK_11064c8b0;
  func_0x000107c613fc(&UNK_11064c8b0,0x38,7);
  *(undefined8 *)(puVar6 + 0x10) = param_2;
  *(undefined8 *)(puVar6 + 0x18) = param_3;
  *(undefined8 *)(puVar6 + 0x20) = param_4;
  *(undefined8 *)(puVar6 + 0x28) = param_5;
  *(undefined8 *)(puVar6 + 0x30) = param_6;
  puVar7 = &UNK_11064c8d8;
  func_0x000107c613fc(&UNK_11064c8d8,0x20,7);
  *(code **)(puVar7 + 0x10) = FUN_1033bb4ac;
  *(undefined **)(puVar7 + 0x18) = puVar6;
  pcStack_80 = (code *)0x1033bbe44;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_100e27b38;
  puStack_88 = &UNK_11064c8f0;
  ppuVar8 = &puStack_a0;
  puStack_78 = puVar7;
  func_0x000107c60bc4(ppuVar8);
  puVar1 = puStack_78;
  func_0x000107c61434(param_3);
  func_0x000107c61434(param_5);
  func_0x000107c6157c(puVar7);
  func_0x000107c61574(puVar1);
  func_0x000107c4c754(param_1);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61574(puVar3);
  puVar3 = puVar4;
  func_0x000107c61544(puVar4,"",0x6f,0x56,0x25,1);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(puVar4);
  if (((ulong)puVar3 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1033baff4);
    (*pcVar2)();
  }
  puVar3 = puVar7;
  func_0x000107c61544(puVar7,"",0x6f,0x58,0x1d,1);
  func_0x000107c61574(puVar7);
  if (((ulong)puVar3 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1033baff8);
  (*pcVar2)();
}



/* Entry: 1033baff8; end: 1033bb0db;  */

/* WARNING: Possible PIC construction at 0x0001033bb03c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033bb040) */

void FUN_1033baff8(void)

{
  func_0x000107c602fc(0x32);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(0xe000000000000000);
  return;
}



/* Entry: 1033bb0dc; end: 1033bb24b;  */

void FUN_1033bb0dc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uStack_60 = 0;
  uStack_58 = 0xe000000000000000;
  func_0x000107c602fc(0x38);
  func_0x000107c5fb78(0xd000000000000020,0x800000010f147e70);
  func_0x000107c5fb78(param_2,param_3);
  func_0x000107c5fb78(0x5555797265757120,0xeb000000003d4449);
  func_0x000107c5fb78(param_4,param_5);
  func_0x000107c5fb78(0x3d726f72726520,0xe700000000000000);
  if (param_1 == 0) {
    uStack_70 = 0xed0000726f727265;
  }
  else {
    func_0x000107c614cc(param_1,auStack_68,auStack_80);
    func_0x000107c60640(uStack_78,uStack_70);
  }
  func_0x000107c5fb78();
  func_0x000107c6142c(uStack_70);
  uVar1 = uStack_58;
  func_0x0001007d6c6c(3,uStack_60,uStack_58,param_6,&PTR_DAT_11064c7b8);
  func_0x000107c6142c(uVar1);
  return;
}



/* Entry: 1033bb24c; end: 1033bb2b7;  */

void FUN_1033bb24c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1033bb2b8; end: 1033bb2db;  */

void FUN_1033bb2b8(void)

{
  long in_x4;
  
                    /* WARNING: Could not recover jumptable at 0x0001033bb2c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_x4 + 0x10))();
  return;
}



/* Entry: 1033bb2dc; end: 1033bb42b;  */

void FUN_1033bb2dc(undefined8 param_1,ulong param_2,ulong param_3,uint param_4)

{
  ulong *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  lVar9 = *unaff_x20;
  uVar3 = param_2;
  uVar4 = param_3;
  func_0x000100029284();
  lVar5 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar4 & 1;
  lVar6 = lVar5 + uVar8;
  if (SCARRY8(lVar5,uVar8)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1033bb3b4);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar6) {
    FUN_1033bb8fc(lVar6,param_4 & 1);
    uVar3 = param_2;
    uVar8 = param_3;
    func_0x000100029284();
    if (((uint)uVar4 & 1) != ((uint)uVar8 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1033bb37c);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    func_0x0001033bb61c();
    lVar6 = *unaff_x20;
    goto joined_r0x0001033bb3c8;
  }
  lVar6 = *unaff_x20;
joined_r0x0001033bb3c8:
  if ((uVar4 & 1) != 0) {
    uVar7 = *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8);
    *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar7);
    return;
  }
  lVar5 = lVar6 + (uVar3 >> 6) * 8;
  *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar3 & 0x3f);
  puVar1 = (ulong *)(*(long *)(lVar6 + 0x30) + uVar3 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
  if (SCARRY8(*(long *)(lVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1033bb42c);
    (*pcVar2)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 1033bb42c; end: 1033bb45f;  */

void FUN_1033bb42c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  code *pcVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined8 uVar13;
  long unaff_x20;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x30);
  puVar7 = &UNK_11064c838;
  func_0x000107c613fc(&UNK_11064c838,0x38,7);
  *(undefined8 *)(puVar7 + 0x10) = uVar1;
  *(undefined8 *)(puVar7 + 0x18) = uVar3;
  *(undefined8 *)(puVar7 + 0x20) = uVar2;
  *(undefined8 *)(puVar7 + 0x28) = uVar4;
  *(undefined8 *)(puVar7 + 0x30) = uVar13;
  puVar8 = &UNK_11064c860;
  func_0x000107c613fc(&UNK_11064c860,0x20,7);
  *(undefined8 *)(puVar8 + 0x10) = 0x1033bb454;
  *(undefined **)(puVar8 + 0x18) = puVar7;
  puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_1033bb460;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_102e29534;
  puStack_88 = &UNK_11064c878;
  ppuVar9 = &puStack_a0;
  puStack_78 = puVar8;
  func_0x000107c60bc4(ppuVar9);
  puVar10 = puStack_78;
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar4);
  func_0x000107c6157c(puVar8);
  func_0x000107c61574(puVar10);
  puVar10 = &UNK_11064c8b0;
  func_0x000107c613fc(&UNK_11064c8b0,0x38,7);
  *(undefined8 *)(puVar10 + 0x10) = uVar1;
  *(undefined8 *)(puVar10 + 0x18) = uVar3;
  *(undefined8 *)(puVar10 + 0x20) = uVar2;
  *(undefined8 *)(puVar10 + 0x28) = uVar4;
  *(undefined8 *)(puVar10 + 0x30) = uVar13;
  puVar11 = &UNK_11064c8d8;
  func_0x000107c613fc(&UNK_11064c8d8,0x20,7);
  *(code **)(puVar11 + 0x10) = FUN_1033bb4ac;
  *(undefined **)(puVar11 + 0x18) = puVar10;
  pcStack_80 = (code *)0x1033bbe44;
  puStack_a0 = puVar5;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_100e27b38;
  puStack_88 = &UNK_11064c8f0;
  ppuVar12 = &puStack_a0;
  puStack_78 = puVar11;
  func_0x000107c60bc4(ppuVar12);
  puVar5 = puStack_78;
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar4);
  func_0x000107c6157c(puVar11);
  func_0x000107c61574(puVar5);
  func_0x000107c4c754(param_1);
  func_0x000107c60bd0(ppuVar12);
  func_0x000107c60bd0(ppuVar9);
  func_0x000107c61574(puVar7);
  puVar7 = puVar8;
  func_0x000107c61544(puVar8,"",0x6f,0x56,0x25,1);
  func_0x000107c61574(puVar10);
  func_0x000107c61574(puVar8);
  if (((ulong)puVar7 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1033baff4);
    (*pcVar6)();
  }
  puVar7 = puVar11;
  func_0x000107c61544(puVar11,"",0x6f,0x58,0x1d,1);
  func_0x000107c61574(puVar11);
  if (((ulong)puVar7 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1033baff8);
    (*pcVar6)();
  }
  return;
}



/* Entry: 1033bb460; end: 1033bb47f;  */

void FUN_1033bb460(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1033bb480; end: 1033bb4ab;  */

void FUN_1033bb480(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1033bb4ac; end: 1033bb4cb;  */

void FUN_1033bb4ac(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x30);
  uStack_60 = 0;
  uStack_58 = 0xe000000000000000;
  func_0x000107c602fc(0x38);
  func_0x000107c5fb78(0xd000000000000020,0x800000010f147e70);
  func_0x000107c5fb78(uVar1,uVar3);
  func_0x000107c5fb78(0x5555797265757120,0xeb000000003d4449);
  func_0x000107c5fb78(uVar2,uVar4);
  func_0x000107c5fb78(0x3d726f72726520,0xe700000000000000);
  if (param_1 == 0) {
    uStack_70 = 0xed0000726f727265;
  }
  else {
    func_0x000107c614cc(param_1,auStack_68,auStack_80);
    func_0x000107c60640(uStack_78,uStack_70);
  }
  func_0x000107c5fb78();
  func_0x000107c6142c(uStack_70);
  uVar1 = uStack_58;
  func_0x0001007d6c6c(3,uStack_60,uStack_58,uVar5,&PTR_DAT_11064c7b8);
  func_0x000107c6142c(uVar1);
  return;
}



/* Entry: 1033bb4cc; end: 1033bb8fb;  */

void FUN_1033bb4cc(undefined8 param_1,ulong param_2,ulong param_3,uint param_4)

{
  ulong *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  lVar9 = *unaff_x20;
  uVar3 = param_2;
  uVar4 = param_3;
  func_0x000100029284();
  lVar5 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar4 & 1;
  lVar6 = lVar5 + uVar8;
  if (SCARRY8(lVar5,uVar8)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1033bb5a4);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar6) {
    func_0x0001033bbb98(lVar6,param_4 & 1);
    uVar3 = param_2;
    uVar8 = param_3;
    func_0x000100029284();
    if (((uint)uVar4 & 1) != ((uint)uVar8 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1033bb56c);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    func_0x0001033bb78c();
    lVar6 = *unaff_x20;
    goto joined_r0x0001033bb5b8;
  }
  lVar6 = *unaff_x20;
joined_r0x0001033bb5b8:
  if ((uVar4 & 1) != 0) {
    uVar7 = *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8);
    *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar7);
    return;
  }
  lVar5 = lVar6 + (uVar3 >> 6) * 8;
  *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar3 & 0x3f);
  puVar1 = (ulong *)(*(long *)(lVar6 + 0x30) + uVar3 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
  if (SCARRY8(*(long *)(lVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1033bb61c);
    (*pcVar2)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 1033bb8fc; end: 1033bbe33;  */

void FUN_1033bb8fc(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  ulong uVar15;
  ulong *puVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  undefined1 auStack_a8 [72];
  
  lVar17 = *unaff_x20;
  lVar1 = *(long *)(lVar17 + 0x18);
  if (*(long *)(lVar17 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar6 = 0x112f62100;
  func_0x0001000285a8(0x112f62100,&UNK_10dbbee80);
  lVar7 = lVar17;
  func_0x000107c60490(lVar17,lVar1,param_2,uVar6);
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_1033bbb64:
    func_0x000107c61574(lVar17);
    *unaff_x20 = lVar7;
    return;
  }
  puVar16 = (ulong *)(lVar17 + 0x40);
  uVar12 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar15 = uVar15 & *puVar16;
  lVar1 = lVar7 + 0x40;
  lVar10 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar19 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1033bbb94);
          (*pcVar5)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar19) {
          if ((param_2 & 1) != 0) {
            uVar15 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
            if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
              *puVar16 = -1L << (uVar15 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar16,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar17 + 0x10) = 0;
          }
          goto LAB_1033bbb64;
        }
        uVar15 = puVar16[lVar19];
        lVar10 = lVar10 + 1;
      } while (uVar15 == 0);
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar19 = lVar10;
    }
    uVar9 = LZCOUNT(uVar9) | lVar19 << 6;
    puVar2 = (undefined8 *)(*(long *)(lVar17 + 0x30) + uVar9 * 0x10);
    uVar6 = *puVar2;
    uVar3 = puVar2[1];
    uVar18 = *(undefined8 *)(*(long *)(lVar17 + 0x38) + uVar9 * 8);
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(uVar3);
      func_0x000107c615f0(uVar18);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
    puVar8 = auStack_a8;
    func_0x000107c5fb58(puVar8,uVar6,uVar3);
    func_0x000107c606a8();
    uVar14 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar13 = (ulong)puVar8 & (uVar14 ^ 0xffffffffffffffff);
    uVar11 = uVar13 >> 6;
    uVar9 = -1L << (uVar13 & 0x3f) & (*(ulong *)(lVar1 + uVar11 * 8) ^ 0xffffffffffffffff);
    if (uVar9 == 0) {
      bVar4 = false;
      uVar9 = 0x3f - uVar14 >> 6;
      do {
        uVar13 = uVar11 + 1;
        if ((uVar13 == uVar9) && (bVar4)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1033bbb98);
          (*pcVar5)();
        }
        uVar11 = 0;
        if (uVar13 != uVar9) {
          uVar11 = uVar13;
        }
        bVar4 = (bool)(uVar13 == uVar9 | bVar4);
        uVar13 = *(ulong *)(lVar1 + uVar11 * 8);
      } while (uVar13 == 0xffffffffffffffff);
      uVar13 = ~uVar13;
      uVar9 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar11 << 6;
    }
    else {
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar13 & 0x7fffffffffffffc0;
    }
    uVar11 = uVar9 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar11) = 1L << (uVar9 & 0x3f) | *(ulong *)(lVar1 + uVar11);
    puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar9 * 0x10);
    *puVar2 = uVar6;
    puVar2[1] = uVar3;
    *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar9 * 8) = uVar18;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar10 = lVar19;
  } while( true );
}



/* Entry: 1033bbe34; end: 1033bbe47;  */

void FUN_1033bbe34(long param_1,long param_2)

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



/* Entry: 1033bbe48; end: 1033bbf1f;  */

void FUN_1033bbe48(undefined8 *param_1,long *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar7 = *param_2;
  lVar6 = *(long *)(lVar7 + 0x10);
  if (lVar6 != 0) {
    func_0x000100403514(0,lVar6,0);
    puVar8 = (undefined8 *)(lVar7 + 0x28);
    do {
      uVar1 = puVar8[-1];
      uVar3 = *puVar8;
      uVar2 = *(ulong *)(puVar5 + 0x10);
      uVar4 = *(ulong *)(puVar5 + 0x18);
      func_0x000107c61434(uVar3);
      if (uVar4 >> 1 <= uVar2) {
        func_0x000100403514(1 < uVar4,uVar2 + 1,1);
      }
      puVar8 = puVar8 + 4;
      *(ulong *)(puVar5 + 0x10) = uVar2 + 1;
      *(undefined8 *)(puVar5 + uVar2 * 0x10 + 0x20) = uVar1;
      *(undefined8 *)(puVar5 + uVar2 * 0x10 + 0x28) = uVar3;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  *param_1 = puVar5;
  return;
}



/* Entry: 1033bbf20; end: 1033bc537;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1033bbf20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte *pbVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  char *pcVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  code *pcVar14;
  undefined *puVar15;
  undefined *puVar16;
  code *pcVar17;
  long extraout_x8;
  undefined8 uVar18;
  undefined8 uVar19;
  code *pcVar20;
  undefined1 auStack_c0 [8];
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long *plStack_98;
  long *plStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  
  lVar2 = 0;
  uStack_b0 = param_7;
  uStack_a8 = param_8;
  plStack_98 = (long *)param_2;
  func_0x000107c5f804();
  plStack_90 = *(long **)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)((long)plStack_90 + 0x40));
  lVar3 = 0;
  func_0x0001033bcb70();
  func_0x000107c613fc();
  func_0x0001000285a8(0x112f62110,&UNK_10dc14a10);
  func_0x000107c613fc();
  uVar4 = 1;
  func_0x00010008747c();
  *(undefined8 *)(lVar3 + 0x10) = uVar4;
  func_0x0001000285a8(0x112f62118,&UNK_10dbbe828);
  func_0x000107c613fc();
  uVar4 = 1;
  func_0x00010008747c();
  *(undefined8 *)(lVar3 + 0x18) = uVar4;
  func_0x0001000285a8(0x112f62120,&UNK_10dbbe830);
  func_0x000107c613fc();
  uVar4 = 1;
  func_0x00010008747c();
  *(undefined8 *)(lVar3 + 0x20) = uVar4;
  lStack_a0 = param_3;
  func_0x0001000d224c(&plStack_78);
  plVar7 = plStack_78;
  plVar8 = plStack_90;
  if (plStack_78 == (long *)0x0) {
    (**(code **)((long)plStack_90 + 0x68))
              (auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
               *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0,
               lVar2);
    plVar5 = (long *)PTR_PTR_1126ae790;
    func_0x000107c610f8();
    uVar4 = 0xd00000000000002b;
    func_0x000107c5fadc(0xd00000000000002b,0x800000010f147ed0);
    lStack_b8 = lVar2;
    func_0x000107c5f800();
    func_0x000107c470d0();
    func_0x000107c61170(uVar4);
    (**(code **)((long)plVar8 + 8))
              (auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lStack_b8);
  }
  else {
    plVar5 = plStack_78;
    func_0x000107c51f40();
    func_0x000107c61180();
    func_0x000107c615e8(plVar7);
  }
  lVar6 = 0;
  FUN_1033c8b88();
  lVar2 = lVar6;
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112f62890) = lVar3;
  *(undefined8 *)(lVar2 + _DAT_112f62898) = param_4;
  pbVar1 = (byte *)(lVar2 + _DAT_112f628a0);
  *pbVar1 = (byte)param_5 & 1;
  pbVar1[1] = (byte)((ulong)param_5 >> 8) & 1;
  *(undefined8 *)(pbVar1 + 8) = param_6;
  *(long **)(lVar2 + _DAT_112f628a8) = plVar5;
  puVar16 = PTR_s_init_1125d9248;
  lStack_88 = lVar2;
  lStack_80 = lVar6;
  func_0x000107c6157c(lVar3);
  func_0x000107c615f0(plVar5);
  plVar7 = &lStack_88;
  func_0x000107c61154(plVar7,puVar16);
  plVar8 = plStack_98;
  plStack_98 = plVar7;
  func_0x000107c4f750();
  func_0x000107c61180();
  func_0x0001000285a8(0x112ea2b10,&UNK_10dab4f28);
  func_0x000107c61174();
  uVar4 = plVar8;
  func_0x000107c412bc();
  func_0x000107c61180();
  uVar19 = uVar4;
  func_0x0001000bda74();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(lVar3 + 0x10);
  uVar12 = *(undefined8 *)(lVar3 + 0x18);
  uVar18 = *(undefined8 *)(lVar3 + 0x20);
  uVar9 = 0;
  func_0x0001033be244(0);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar12);
  func_0x000107c6157c(uVar18);
  uVar13 = uStack_b0;
  func_0x000107c615f0(uStack_b0);
  uVar10 = uVar19;
  FUN_1033be2ac(param_1,uVar19,uVar4,uVar12,uVar18,uVar13,uVar9,uStack_a8);
  uStack_a8 = uVar10;
  func_0x000107c61574(uVar19);
  func_0x000107c61574(uVar4);
  func_0x000107c61574(uVar12);
  func_0x000107c61574(uVar18);
  func_0x000107c615e8(uVar13);
  func_0x0001000d224c(&plStack_78);
  plStack_90 = plVar5;
  if (plStack_78 == (long *)0x0) {
    pcVar11 = "GamesExplorerAuxFeedFetcher";
    func_0x0001000c10c0();
    func_0x000107c61180();
  }
  else {
    pcVar11 = (char *)plStack_78;
    func_0x000107c51f40();
    func_0x000107c61180();
    func_0x000107c615e8(plStack_78);
  }
  func_0x0001000285a8(0x112ea2b08,&UNK_10dab4f20);
  uVar4 = plVar8;
  func_0x000107c4f754();
  func_0x000107c61180();
  uVar12 = uVar4;
  func_0x0001000bda74();
  func_0x000107c61170(uVar4);
  func_0x0001000285a8(0x112ea2b00,&UNK_10db560c0);
  uVar4 = plVar8;
  func_0x000107c4f758();
  func_0x000107c61180();
  func_0x000107c61170(plVar8);
  uVar13 = uVar4;
  func_0x0001000bda74();
  func_0x000107c61170(uVar4);
  uVar19 = *(undefined8 *)(lVar3 + 0x18);
  func_0x000107c6157c(uVar19);
  uVar4 = 0x112d38270;
  func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
  pcVar14 = FUN_1033bbe48;
  func_0x0001000bfde0(FUN_1033bbe48,0,uVar4);
  lStack_a0 = lVar3;
  func_0x000107c61574(uVar19);
  lVar2 = 0;
  func_0x0001033bb298();
  func_0x000107c613fc();
  uVar4 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(lVar2 + 0x28) = uVar4;
  puVar16 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar15 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_1033c8ba8();
  *(undefined **)(lVar2 + 0x30) = puVar15;
  *(undefined **)(lVar2 + 0x38) = puVar16;
  *(undefined8 *)(lVar2 + 0x10) = uVar12;
  *(undefined8 *)(lVar2 + 0x18) = uVar13;
  *(char **)(lVar2 + 0x20) = pcVar11;
  uStack_b0 = uVar12;
  func_0x000107c6157c(uVar12);
  func_0x000107c6157c(uVar13);
  plVar7 = (long *)pcVar11;
  func_0x000107c615f0();
  func_0x000100471e0c();
  plVar5 = plVar7;
  FUN_1033bc538();
  func_0x0001000c2068();
  func_0x000107c61574(plVar7);
  puVar16 = &UNK_11064c930;
  func_0x000107c613fc(&UNK_11064c930,0x18,7);
  func_0x000107c61644(puVar16 + 0x10,lVar2);
  pcVar17 = FUN_1033bc5a0;
  puVar15 = puVar16;
  (**(code **)(*plVar5 + 0x60))(FUN_1033bc5a0);
  func_0x000107c61574(plVar5);
  func_0x000107c61574(puVar16);
  func_0x000107c614f0(pcVar17);
  uVar4 = *(undefined8 *)(lVar2 + 0x28);
  pcVar20 = *(code **)(puVar15 + 0x10);
  func_0x000107c6157c(uVar4);
  (*pcVar20)();
  func_0x000107c61170(plStack_98);
  func_0x000107c615e8(plStack_90);
  func_0x000107c61574(lStack_a0);
  func_0x000107c61574(uStack_b0);
  func_0x000107c61574(uVar13);
  func_0x000107c61574(pcVar14);
  func_0x000107c615e8(pcVar11);
  func_0x000107c615e8(pcVar17);
  func_0x000107c61574(uVar4);
  return plVar8;
}



/* Entry: 1033bc538; end: 1033bc59f;  */

void FUN_1033bc538(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puStack_18;
  
  if (puRam0000000112f62128 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112d38270;
  func_0x00010002969c(0x112d38270,&UNK_10d905a20);
  puStack_18 = PTR___sSSSQsWP_11034da98;
  puVar2 = PTR___sSayxGSQsSQRzlMc_11034dd00;
  func_0x000107c61520(PTR___sSayxGSQsSQRzlMc_11034dd00,uVar1,&puStack_18);
  puRam0000000112f62128 = puVar2;
  return;
}



/* Entry: 1033bc5a0; end: 1033bc5a7;  */

void FUN_1033bc5a0(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  uVar2 = *param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    FUN_1033ba5bc(uVar2,0);
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 1033bc5a8; end: 1033bc6a7;  */

undefined1  [16]
FUN_1033bc5a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  long lVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  lVar1 = 0;
  func_0x0001033ba424();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x28) = 0;
  *(undefined8 *)(lVar1 + 0x30) = 0;
  pcVar2 = "GamesExplorerQueryContextFeedAdapter";
  func_0x0001000c10c0("GamesExplorerQueryContextFeedAdapter");
  func_0x000107c61180();
  func_0x000107c614f0();
  func_0x000107c615f0(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c61434(param_5);
  uVar3 = param_1;
  uVar4 = param_2;
  FUN_1033bbf20(0x4024000000000000);
  func_0x000107c615e8(param_1);
  func_0x000107c61574(param_2);
  func_0x000107c615e8(pcVar2);
  *(undefined8 *)(lVar1 + 0x10) = uVar3;
  *(undefined8 *)(lVar1 + 0x18) = uVar4;
  *(undefined8 *)(lVar1 + 0x20) = param_3;
  auVar5._8_8_ = &PTR_DAT_11064c708;
  auVar5._0_8_ = lVar1;
  return auVar5;
}



/* Entry: 1033bc6a8; end: 1033bc6b7;  */

undefined1  [16] FUN_1033bc6a8(void)

{
  return ZEXT816(0x11064c958);
}



/* Entry: 1033bc6b8; end: 1033bc7b3;  */

/* WARNING: Possible PIC construction at 0x0001033bc6f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033bc6f8) */

long FUN_1033bc6b8(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  lVar3 = *param_2;
  lVar4 = param_2[1];
  if ((lVar1 == lVar3 && lVar2 == lVar4) &&
     (lVar1 = param_1[2], lVar2 = param_1[3], lVar3 = param_2[2], lVar4 = param_2[3],
     param_1[2] == param_2[2] && param_1[3] == param_2[3])) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
  )(lVar1,lVar2,lVar3,lVar4,0);
  return lVar1;
}



/* Entry: 1033bc7b4; end: 1033bca23;  */

void FUN_1033bc7b4(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *unaff_x20;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lStack_70;
  undefined8 uStack_68;
  
  uVar8 = *unaff_x20;
  lStack_70 = 0;
  uStack_68 = 0xe000000000000000;
  func_0x000107c602fc(0x43);
  func_0x000107c5fb78(0xd000000000000033,0x800000010f147f50);
  func_0x000107c5fb78(param_1,param_2);
  func_0x000107c5fb78(0x6e6f697463657320,0xeb000000005b3d73);
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar9 = *(long *)(param_3 + 0x10);
  if (lVar9 != 0) {
    func_0x000100403514(0,lVar9,0);
    puVar7 = (undefined8 *)(param_3 + 0x38);
    do {
      uVar3 = puVar7[-3];
      uVar5 = puVar7[-2];
      uVar4 = puVar7[-1];
      uVar6 = *puVar7;
      func_0x000107c61438(uVar5,2);
      func_0x000107c61434(uVar6);
      func_0x000107c5fb78(0x28,0xe100000000000000);
      func_0x000107c5fb78(uVar4,uVar6);
      func_0x000107c5fb78(0x29,0xe100000000000000);
      func_0x000107c6142c(uVar6);
      func_0x000107c6142c(uVar5);
      uVar1 = *(ulong *)(puVar2 + 0x10);
      if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar1) {
        func_0x000100403514(1 < *(ulong *)(puVar2 + 0x18),uVar1 + 1,1);
      }
      puVar7 = puVar7 + 4;
      *(ulong *)(puVar2 + 0x10) = uVar1 + 1;
      *(undefined8 *)(puVar2 + uVar1 * 0x10 + 0x20) = uVar3;
      *(undefined8 *)(puVar2 + uVar1 * 0x10 + 0x28) = uVar5;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  uVar3 = 0x112d38270;
  func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
  uVar4 = uVar3;
  func_0x00010011d734();
  uVar5 = 0x2c;
  uVar6 = 0xe100000000000000;
  func_0x000107c5fa80(0x2c,0xe100000000000000,uVar3,uVar4);
  func_0x000107c6142c(puVar2);
  func_0x000107c5fb78(uVar5,uVar6);
  func_0x000107c6142c(uVar6);
  func_0x000107c5fb78(0x5d,0xe100000000000000);
  uVar3 = uStack_68;
  func_0x0001007d6c6c(1,lStack_70,uStack_68,uVar8,&PTR_DAT_11064c9e8);
  func_0x000107c6142c(uVar3);
  lStack_70 = param_1;
  uStack_68 = param_2;
  func_0x000100087c34(&lStack_70);
  lStack_70 = param_3;
  func_0x000100087c34(&lStack_70);
  return;
}



/* Entry: 1033bca24; end: 1033bcb3b;  */

void FUN_1033bca24(char param_1)

{
  undefined8 *unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *unaff_x20;
  func_0x000107c602fc(0x22);
  func_0x000107c6142c(0xe000000000000000);
  if (param_1 == '\0') {
    uVar2 = 0xd000000000000011;
    uVar3 = 0x800000010f147fe0;
  }
  else {
    uVar2 = 0x6375537974706d65;
    uVar3 = 0xec00000073736563;
    if (param_1 != '\x01') {
      uVar2 = 0xd000000000000014;
      uVar3 = 0x800000010f147fc0;
    }
  }
  func_0x000107c5fb78(uVar2,uVar3);
  func_0x000107c6142c(uVar3);
  func_0x0001007d6c6c(3,0xd000000000000020,0x800000010f147f90,uVar1,&PTR_DAT_11064c9e8);
  func_0x000107c6142c(0x800000010f147f90);
  func_0x000100087c34();
  return;
}



/* Entry: 1033bcb3c; end: 1033bcb8f;  */

void FUN_1033bcb3c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1033bcb90; end: 1033bcc1f;  */

long FUN_1033bcb90(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1033bcc20; end: 1033bcc8b;  */

undefined8 * FUN_1033bcc20(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 1033bcc8c; end: 1033bcccf;  */

undefined8 * FUN_1033bcc8c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 1033bccd0; end: 1033bcd8b;  */

int FUN_1033bccd0(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[8] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1033bcd8c; end: 1033bcf6f;  */

void FUN_1033bcd8c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  long lStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar10 = *(long *)(param_1 + 0x10);
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar10 != 0) {
    puVar11 = (undefined8 *)(param_1 + 0x38);
    do {
      uStack_70 = puVar11[-1];
      uVar2 = *puVar11;
      puStack_80 = (undefined *)puVar11[-3];
      uVar3 = puVar11[-2];
      uStack_78 = uVar3;
      uStack_68 = uVar2;
      func_0x000107c61434(uVar3);
      func_0x000107c61434(uVar2);
      FUN_1033bdcfc(&lStack_88,&puStack_80,param_2);
      func_0x000107c6142c(uVar2);
      func_0x000107c6142c(uVar3);
      lVar5 = lStack_88;
      if (lStack_88 != 0) {
        puVar7 = puVar8;
        func_0x000107c61550();
        if ((((int)puVar7 == 0) || ((long)puVar8 < 0)) ||
           (puVar7 = puVar8, ((ulong)puVar8 >> 0x3e & 1) != 0)) {
          if ((ulong)puVar8 >> 0x3e == 0) {
            puVar6 = *(undefined **)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar6 = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar8) {
              puVar6 = puVar8;
            }
            func_0x000107c60480(puVar6);
          }
          puVar7 = (undefined *)0x0;
          FUN_1033c7fec(0,puVar6 + 1,1,puVar8);
        }
        uVar9 = (ulong)puVar7 & 0xffffffffffffff8;
        uVar1 = *(ulong *)(uVar9 + 0x10);
        puVar8 = puVar7;
        if (*(ulong *)(uVar9 + 0x18) >> 1 <= uVar1) {
          puVar8 = (undefined *)(ulong)(1 < *(ulong *)(uVar9 + 0x18));
          FUN_1033c7fec(puVar8,uVar1 + 1,1,puVar7);
          uVar9 = (ulong)puVar8 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar9 + 0x10) = uVar1 + 1;
        *(long *)(uVar9 + uVar1 * 8 + 0x20) = lVar5;
      }
      puVar11 = puVar11 + 4;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  if ((ulong)puVar8 >> 0x3e == 0) {
    puVar7 = *(undefined **)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar7 = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar8) {
      puVar7 = puVar8;
    }
    func_0x000107c60480();
  }
  if (puVar7 == (undefined *)0x0) {
    func_0x000107c6142c(puVar8);
    func_0x0001000285a8(0x112f622e0,&UNK_10dbbe9c8);
    puStack_80 = puVar4;
    func_0x000100854cb0(&puStack_80);
  }
  else {
    func_0x0001000285a8(0x112f622d8,&UNK_10dbbe9c0);
    func_0x000100b658a4(puVar8);
    func_0x000107c6142c(puVar8);
  }
  return;
}



/* Entry: 1033bcf70; end: 1033bd02b;  */

void FUN_1033bcf70(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  func_0x000107c602fc(0x29);
  func_0x000107c6142c(0xe000000000000000);
  func_0x000107c5fb78(uVar1,uVar2);
  func_0x0001007d6c6c(1,0xd000000000000027,0x800000010f1480c0,param_3,&PTR_DAT_11064ca30);
  func_0x000107c6142c(0x800000010f1480c0);
  FUN_1033bd02c(uVar1,uVar2,param_2);
  return;
}



/* Entry: 1033bd02c; end: 1033bd2cb;  */

void FUN_1033bd02c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined8 unaff_x20;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  
  func_0x0001000d224c(&lStack_80);
  if (lStack_80 != 0) {
    uVar1 = param_1;
    func_0x000107c5fadc(param_1,param_2);
    lVar2 = lStack_80;
    func_0x000107c4b160();
    func_0x000107c61180();
    func_0x000107c615e8(lStack_80);
    func_0x000107c61170(uVar1);
    lVar3 = lVar2;
    func_0x000107c3db5c();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lStack_80 = 0;
      uStack_78 = 0xe000000000000000;
      func_0x000107c602fc(0x32);
      func_0x000107c6142c(uStack_78);
      lStack_80 = -0x2fffffffffffffd0;
      uStack_78 = 0x800000010f148120;
      func_0x000107c5fb78(param_1,param_2);
      uVar1 = uStack_78;
      func_0x0001007d6c6c(1,lStack_80,uStack_78);
      func_0x000107c6142c(uVar1);
      func_0x0001000285a8(0x112d5a8a0,&UNK_10d927f50);
      lVar4 = lVar3;
      func_0x0001000b637c(lVar3);
      uVar1 = 0x112f622c0;
      func_0x0001000285a8(0x112f622c0,&UNK_10dbbe9a8);
      pcVar5 = FUN_1033bd700;
      func_0x0001000bfde0(FUN_1033bd700,0,uVar1);
      func_0x000107c61574(lVar4);
      puVar6 = &UNK_11064cb70;
      func_0x000107c613fc(&UNK_11064cb70,0x30,7);
      *(undefined8 *)(puVar6 + 0x10) = param_1;
      *(undefined8 *)(puVar6 + 0x18) = param_2;
      *(long *)(puVar6 + 0x20) = lVar2;
      *(undefined8 *)(puVar6 + 0x28) = unaff_x20;
      func_0x000107c61434(param_2);
      func_0x000107c615f0(lVar2);
      uVar1 = 0x1033be770;
      func_0x0001000d5158(0x1033be770,puVar6,&UNK_11064cc30);
      func_0x000107c61574(pcVar5);
      func_0x000107c61574(puVar6);
      func_0x000107c615e8(lVar2);
      func_0x000107c61170(lVar3);
      func_0x00010061b458(1);
      func_0x000107c61574(uVar1);
      return;
    }
    func_0x000107c615e8(lVar2);
  }
  lStack_80 = 0;
  uStack_78 = 0xe000000000000000;
  func_0x000107c602fc(0x30);
  func_0x000107c6142c(uStack_78);
  lStack_80 = -0x2fffffffffffffd2;
  uStack_78 = 0x800000010f1480f0;
  func_0x000107c5fb78(param_1,param_2);
  uVar1 = uStack_78;
  func_0x0001007d6c6c(3,lStack_80,uStack_78);
  func_0x000107c6142c(uVar1);
  func_0x0001000285a8(0x112f622b0,&UNK_10dbbe998);
  uStack_78 = 0;
  lStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 2;
  func_0x000100854cb0(&lStack_80);
  return;
}



/* Entry: 1033bd2cc; end: 1033bd33b;  */

void FUN_1033bd2cc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (*(char *)(param_2 + 4) == '\0') {
    uVar2 = param_2[2];
    uVar1 = param_2[3];
    uVar4 = *param_2;
    uVar3 = param_2[1];
    func_0x000107c61434(uVar3);
    func_0x000107c61434(uVar2);
    func_0x000107c61434(uVar1);
  }
  else {
    uVar4 = 0;
    uVar3 = 0;
    uVar2 = 0;
    uVar1 = 0;
  }
  *param_1 = uVar4;
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  param_1[3] = uVar1;
  return;
}



/* Entry: 1033bd33c; end: 1033bd34f;  */

void FUN_1033bd33c(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 4) = 2;
  return;
}



/* Entry: 1033bd350; end: 1033bd6cf;  */

void FUN_1033bd350(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  bool bVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar7 = *param_1;
  if ((char)param_1[4] == '\0') {
    uVar1 = param_1[2];
    lVar9 = param_1[3];
    uVar10 = param_1[1];
    if (*(long *)(lVar9 + 0x10) == 0) {
      lVar6 = 0;
    }
    else {
      func_0x000107c61434(lVar9);
      lVar6 = lVar7;
      uVar3 = uVar10;
      func_0x000100029284();
      if ((uVar3 & 1) == 0) {
        lVar6 = 0;
      }
      else {
        lVar6 = *(long *)(*(long *)(lVar9 + 0x38) + lVar6 * 8);
        func_0x000107c61174(lVar6);
      }
      func_0x000107c6142c(lVar9);
    }
    uStack_60 = 0;
    uStack_58 = 0xe000000000000000;
    func_0x000107c602fc(0x58);
    func_0x000107c5fb78(0xd00000000000002c,0x800000010f148090);
    func_0x000107c5fb78(lVar7,uVar10);
    func_0x000107c5fb78(0x756f436d65746920,0xeb000000003d746e);
    if (uVar1 >> 0x3e != 0) {
      func_0x000107c60480();
    }
    puVar4 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar4);
    uVar5 = 0xeb000000003d6449;
    func_0x000107c5fb78(0x7473657571657220,0xeb000000003d6449);
    if (lVar6 == 0) {
      func_0x000107c5fb78(0x6c696e,0xe300000000000000);
      func_0x000107c6142c(0xe300000000000000);
      func_0x000107c5fb78(0x65726f4d73616820,0xee003d736d657449);
      uVar8 = 0xe200000000000000;
      uVar5 = 0x4f4e;
    }
    else {
      lVar7 = lVar6;
      func_0x000107c50374();
      func_0x000107c61180();
      if (lVar7 == 0) {
        lVar9 = 0x6c696e;
        uVar5 = 0xe300000000000000;
      }
      else {
        lVar9 = lVar7;
        func_0x000107c5faec();
        func_0x000107c61170(lVar7);
      }
      func_0x000107c5fb78(lVar9,uVar5);
      func_0x000107c6142c(uVar5);
      func_0x000107c5fb78(0x65726f4d73616820,0xee003d736d657449);
      lVar7 = lVar6;
      func_0x000107c44998();
      bVar2 = (int)lVar7 == 0;
      uVar5 = 0x534559;
      if (bVar2) {
        uVar5 = 0x4f4e;
      }
      uVar8 = 0xe300000000000000;
      if (bVar2) {
        uVar8 = 0xe200000000000000;
      }
    }
    func_0x000107c5fb78(uVar5,uVar8);
    func_0x000107c6142c(uVar8);
    uVar5 = uStack_58;
    func_0x0001007d6c6c(1,uStack_60,uStack_58,param_2,&PTR_DAT_11064ca30);
    func_0x000107c61170(lVar6);
  }
  else {
    if ((char)param_1[4] != '\x01') {
      func_0x0001007d6c6c(3,0xd00000000000001f,0x800000010f148070,param_2,&PTR_DAT_11064ca30);
      return;
    }
    uStack_60 = 0;
    uStack_58 = 0xe000000000000000;
    func_0x000107c602fc(0x35);
    func_0x000107c5fb78(0xd000000000000033,0x800000010f148030);
    func_0x000107c5fddc(lVar7,&uStack_60,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                        PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
    uVar5 = uStack_58;
    func_0x0001007d6c6c(3,uStack_60,uStack_58,param_2,&PTR_DAT_11064ca30);
  }
  func_0x000107c6142c(uVar5);
  return;
}



/* Entry: 1033bd6d0; end: 1033bd6ff;  */

void FUN_1033bd6d0(ulong *param_1,ulong *param_2)

{
  byte bVar1;
  ulong uVar2;
  undefined1 uVar3;
  
  bVar1 = (byte)param_2[4];
  uVar2 = (ulong)bVar1;
  if (bVar1 != 0) {
    if (bVar1 == 1) {
      uVar3 = 0;
      uVar2 = *param_2;
      goto LAB_1033bd6f4;
    }
    uVar2 = 1;
  }
  uVar3 = 1;
LAB_1033bd6f4:
  *param_1 = uVar2;
  *(undefined1 *)(param_1 + 1) = uVar3;
  return;
}



/* Entry: 1033bd700; end: 1033bd74b;  */

void FUN_1033bd700(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_28;
  
  uVar2 = *param_2;
  uStack_28 = 0;
  uVar1 = 0;
  FUN_103321c48(0);
  func_0x000107c5fc50(uVar2,&uStack_28,uVar1);
  *param_1 = uStack_28;
  return;
}



/* Entry: 1033bd74c; end: 1033bdcfb;  */

void FUN_1033bd74c(undefined8 *param_1,ulong *param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined8 uVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  
  uVar8 = *param_2;
  if (uVar8 == 0) {
    func_0x000107c602fc(0x35);
    func_0x000107c5fb78(0xd000000000000033,0x800000010f148160);
    func_0x000107c5fb78(param_3,param_4);
    uVar7 = 3;
  }
  else {
    func_0x000107c61434(uVar8);
    func_0x000107c4fe48();
    func_0x000107c61180();
    if (param_5 != 0) {
      if (uVar8 >> 0x3e == 0) {
        uVar3 = *(ulong *)((uVar8 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar3 = uVar8 & 0xffffffffffffff8;
        if ((uVar8 & 0x8000000000000000) != 0) {
          uVar3 = uVar8;
        }
        func_0x000107c60480();
      }
      uVar7 = 0xeb000000003d6449;
      if (uVar3 != 0) {
        func_0x000107c602fc(0x4e);
        func_0x000107c5fb78(0xd000000000000022,0x800000010f1481e0);
        func_0x000107c5fb78(param_3,param_4);
        func_0x000107c5fb78(0x756f436d65746920,0xeb000000003d746e);
        if (uVar8 >> 0x3e != 0) {
          func_0x000107c60480();
        }
        lVar9 = 0x6c696e;
        puVar5 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
        func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
        func_0x000107c5fb78();
        func_0x000107c6142c(puVar5);
        uVar7 = 0xeb000000003d6449;
        func_0x000107c5fb78(0x7473657571657220,0xeb000000003d6449);
        lVar4 = param_5;
        func_0x000107c50374();
        func_0x000107c61180();
        if (lVar4 == 0) {
          uVar7 = 0xe300000000000000;
        }
        else {
          lVar9 = lVar4;
          func_0x000107c5faec();
          func_0x000107c61170(lVar4);
        }
        func_0x000107c5fb78(lVar9,uVar7);
        func_0x000107c6142c(uVar7);
        func_0x000107c5fb78(0x65726f4d73616820,0xee003d736d657449);
        lVar4 = param_5;
        func_0x000107c44998();
        bVar2 = (int)lVar4 == 0;
        uVar7 = 0x534559;
        if (bVar2) {
          uVar7 = 0x4f4e;
        }
        uVar1 = 0xe300000000000000;
        if (bVar2) {
          uVar1 = 0xe200000000000000;
        }
        func_0x000107c5fb78(uVar7,uVar1);
        func_0x000107c6142c(uVar1);
        func_0x0001007d6c6c(1,0,0xe000000000000000,param_6,&PTR_DAT_11064ca30);
        func_0x000107c6142c(0xe000000000000000);
        lVar4 = 0x112f622c8;
        func_0x0001000285a8(0x112f622c8,&UNK_10dbbe9b0);
        func_0x000107c61534();
        *(undefined8 *)(lVar4 + 0x18) = 2;
        *(undefined8 *)(lVar4 + 0x10) = 1;
        *(undefined8 *)(lVar4 + 0x20) = param_3;
        *(undefined8 *)(lVar4 + 0x28) = param_4;
        *(long *)(lVar4 + 0x30) = param_5;
        func_0x000107c61434(param_4);
        lVar9 = lVar4;
        FUN_1033c8ca4();
        func_0x000107c61588(lVar4);
        FUN_1033be77c((undefined8 *)(lVar4 + 0x20));
        *param_1 = param_3;
        param_1[1] = param_4;
        param_1[2] = uVar8;
        param_1[3] = lVar9;
        *(undefined1 *)(param_1 + 4) = 0;
        func_0x000107c61434(param_4);
        return;
      }
      func_0x000107c6142c(uVar8);
      func_0x000107c602fc(0x4a);
      func_0x000107c5fb78(0xd00000000000002b,0x800000010f148210);
      func_0x000107c5fb78(param_3,param_4);
      func_0x000107c5fb78(0x7473657571657220,0xeb000000003d6449);
      lVar4 = param_5;
      func_0x000107c50374();
      func_0x000107c61180();
      if (lVar4 == 0) {
        uVar7 = 0xe300000000000000;
        lVar9 = 0x6c696e;
      }
      else {
        lVar9 = lVar4;
        func_0x000107c5faec();
        func_0x000107c61170(lVar4);
      }
      func_0x000107c5fb78(lVar9,uVar7);
      func_0x000107c6142c(uVar7);
      func_0x000107c5fb78(0x65726f4d73616820,0xee003d736d657449);
      lVar4 = param_5;
      func_0x000107c44998();
      bVar2 = (int)lVar4 == 0;
      uVar7 = 0x534559;
      if (bVar2) {
        uVar7 = 0x4f4e;
      }
      uVar1 = 0xe300000000000000;
      if (bVar2) {
        uVar1 = 0xe200000000000000;
      }
      func_0x000107c5fb78(uVar7,uVar1);
      func_0x000107c6142c(uVar1);
      func_0x0001007d6c6c(3,0,0xe000000000000000,param_6,&PTR_DAT_11064ca30);
      func_0x000107c6142c(0xe000000000000000);
      func_0x000107c61170(param_5);
      param_1[1] = 0;
      *param_1 = 0;
      param_1[3] = 0;
      param_1[2] = 0;
      uVar6 = 2;
      goto LAB_1033bd9a4;
    }
    func_0x000107c602fc(0x4b);
    func_0x000107c5fb78(0xd00000000000003c,0x800000010f1481a0);
    func_0x000107c5fb78(param_3,param_4);
    func_0x000107c5fb78(0x756f436d65746920,0xeb000000003d746e);
    if (uVar8 >> 0x3e != 0) {
      func_0x000107c60480();
    }
    func_0x000107c6142c(uVar8);
    puVar5 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar5);
    uVar7 = 1;
  }
  func_0x0001007d6c6c(uVar7,0,0xe000000000000000,param_6,&PTR_DAT_11064ca30);
  func_0x000107c6142c(0xe000000000000000);
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  uVar6 = 0xff;
LAB_1033bd9a4:
  *(undefined1 *)(param_1 + 4) = uVar6;
  return;
}



/* Entry: 1033bdcfc; end: 1033bdfab;  */

void FUN_1033bdcfc(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined *puVar10;
  code *pcVar11;
  long *plVar12;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined *puStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar1 = *param_2;
  lVar3 = param_2[1];
  lVar2 = param_2[2];
  lVar4 = param_2[3];
  func_0x0001000d224c(&lStack_98);
  if (lStack_98 != 0) {
    func_0x000107c61434(lVar3);
    lVar5 = lVar1;
    func_0x000107c5fadc(lVar1,lVar3);
    lVar6 = lStack_98;
    func_0x000107c4b160();
    func_0x000107c61180();
    func_0x000107c615e8(lStack_98);
    func_0x000107c61170(lVar5);
    lVar5 = lVar6;
    func_0x000107c3db5c();
    func_0x000107c61180();
    if (lVar5 != 0) {
      func_0x0001000285a8(0x112d5a8a0,&UNK_10d927f50);
      func_0x000107c61434(lVar4);
      lVar7 = lVar5;
      func_0x0001000b637c(lVar5);
      uVar8 = 0x112f59b48;
      func_0x0001000285a8(0x112f59b48,&UNK_10dbb19b0);
      pcVar9 = FUN_1033bdfac;
      func_0x0001000bfde0(FUN_1033bdfac,0,uVar8);
      func_0x000107c61574(lVar7);
      puVar10 = &UNK_11064cb98;
      func_0x000107c613fc(&UNK_11064cb98,0x30,7);
      *(long *)(puVar10 + 0x10) = lVar1;
      *(long *)(puVar10 + 0x18) = lVar3;
      *(long *)(puVar10 + 0x20) = lVar2;
      *(long *)(puVar10 + 0x28) = lVar4;
      func_0x000107c61434(lVar3);
      func_0x000107c61434(lVar4);
      pcVar11 = FUN_1033be7c4;
      func_0x0001000bfde0(FUN_1033be7c4,puVar10,&UNK_1106a2ad8);
      func_0x000107c61574(pcVar9);
      func_0x000107c61574(puVar10);
      puStack_78 = PTR___swiftEmptyArrayStorage_11034f1c8;
      plVar12 = &lStack_98;
      lStack_98 = lVar1;
      lStack_90 = lVar3;
      lStack_88 = lVar2;
      lStack_80 = lVar4;
      func_0x0001006c71a4();
      func_0x000107c6142c(lVar4);
      func_0x000107c6142c(lVar3);
      func_0x000107c61574(pcVar11);
      func_0x000107c615e8(lVar6);
      func_0x000107c61170(lVar5);
      goto LAB_1033bdf84;
    }
    func_0x000107c615e8(lVar6);
    func_0x000107c6142c(lVar3);
  }
  lStack_98 = 0;
  lStack_90 = 0xe000000000000000;
  func_0x000107c602fc(0x25);
  func_0x000107c5fb78(0xd000000000000023,0x800000010f148240);
  lStack_70 = lVar1;
  lStack_68 = lVar3;
  func_0x000107c61434(lVar3);
  func_0x000107c5fb78(0x28,0xe100000000000000);
  func_0x000107c5fb78(lVar2,lVar4);
  func_0x000107c5fb78(0x29,0xe100000000000000);
  lVar1 = lStack_68;
  func_0x000107c5fb78(lStack_70,lStack_68);
  func_0x000107c6142c(lVar1);
  lVar1 = lStack_90;
  func_0x0001007d6c6c(3,lStack_98,lStack_90,param_4,&PTR_DAT_11064ca30);
  func_0x000107c6142c(lVar1);
  plVar12 = (long *)0x0;
LAB_1033bdf84:
  *param_1 = (long)plVar12;
  return;
}



/* Entry: 1033bdfac; end: 1033be047;  */

void FUN_1033bdfac(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_28;
  
  uVar3 = *param_2;
  puStack_28 = (undefined *)0x0;
  uVar2 = 0;
  FUN_103321c48(0);
  func_0x000107c5fc50(uVar3,&puStack_28,uVar2);
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puStack_28 != (undefined *)0x0) {
    puVar1 = puStack_28;
  }
  *param_1 = puVar1;
  return;
}



/* Entry: 1033be048; end: 1033be20f;  */

void FUN_1033be048(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  long extraout_x8;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  lVar1 = 0;
  func_0x000107c5f7fc();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar7 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar2 = &UNK_11064cb20;
  func_0x000107c613fc(&UNK_11064cb20,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  pcStack_60 = FUN_1033be6e4;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  puStack_68 = &UNK_11064cb38;
  ppuVar3 = &puStack_80;
  puStack_58 = puVar2;
  func_0x000107c60bc4(ppuVar3);
  puStack_88 = PTR___swiftEmptyArrayStorage_11034f1c8;
  ppuVar4 = ppuVar3;
  func_0x0001001c7eec();
  func_0x000107c6157c(param_2);
  uVar5 = 0x112d4af90;
  func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
  uVar6 = uVar5;
  func_0x0001001c7f30();
  func_0x000107c60264(puVar7,&puStack_88,uVar5,uVar6,lVar1,ppuVar4);
  func_0x000107c5f850();
  func_0x000107c613fc();
  func_0x000107c5f844(puVar7,ppuVar3);
  func_0x000107c61574(puStack_58);
  func_0x000107c614f0(param_3);
  func_0x000107c6157c(puVar7);
  func_0x00010488b6c8(param_1,FUN_1033be74c,puVar7,param_3);
  func_0x000107c61574(puVar7);
  func_0x0001000b6d30(0);
  func_0x000107c613fc();
  func_0x0001000b6d50(FUN_1033be76c,puVar7);
  return;
}



/* Entry: 1033be210; end: 1033be263;  */

void FUN_1033be210(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1033be264; end: 1033be2ab;  */

void FUN_1033be264(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(*(undefined8 *)(*unaff_x20 + 0x10));
  return;
}



/* Entry: 1033be2ac; end: 1033be5f3;  */

undefined8 * FUN_1033be2ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 in_x4;
  undefined8 *in_x5;
  undefined8 uVar9;
  
  uVar9 = *in_x5;
  uVar5 = param_2;
  FUN_1033be5f4();
  func_0x0001000c2068();
  puVar1 = &UNK_11064ca80;
  func_0x000107c613fc(&UNK_11064ca80,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = uVar9;
  func_0x000107c6157c(param_2);
  uVar3 = 0x112f622a8;
  func_0x0001000285a8(0x112f622a8,&UNK_10dbbe990);
  pcVar2 = FUN_1033be6a4;
  func_0x000100775358(FUN_1033be6a4,puVar1,uVar3);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(puVar1);
  uVar3 = 1;
  func_0x00010487fe40();
  func_0x000107c61574(pcVar2);
  in_x5[4] = uVar3;
  func_0x0001007d6c6c(1,0xd00000000000002a,0x800000010f148000,uVar9,&PTR_DAT_11064ca30);
  puVar4 = PTR___sSSSQsWP_11034da98;
  func_0x0001000c2068(PTR___sSSSQsWP_11034da98);
  puVar1 = &UNK_11064caa8;
  func_0x000107c613fc(&UNK_11064caa8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = uVar9;
  func_0x000107c6157c(param_2);
  pcVar2 = FUN_1033be6c8;
  func_0x000100775358(FUN_1033be6c8,puVar1,&UNK_11064cc30);
  func_0x000107c61574(puVar4);
  func_0x000107c61574(puVar1);
  uVar5 = 1;
  func_0x00010487fe40();
  func_0x000107c61574(pcVar2);
  pcVar2 = FUN_1033bd2cc;
  func_0x0001000d5158(FUN_1033bd2cc,0,&UNK_1106a2b90);
  in_x5[2] = pcVar2;
  lVar6 = 0x112f622b0;
  func_0x0001000285a8(0x112f622b0,&UNK_10dbbe998);
  func_0x0001033c25d8();
  func_0x000107c613fc();
  *(undefined8 *)(lVar6 + 0x18) = 7;
  *(undefined8 *)(lVar6 + 0x10) = 3;
  *(undefined8 *)(lVar6 + 0x20) = uVar5;
  func_0x000107c6157c(uVar5);
  pcVar2 = FUN_1033bd33c;
  func_0x0001000bfde0(FUN_1033bd33c,0,&UNK_11064cc30);
  *(code **)(lVar6 + 0x28) = pcVar2;
  puVar1 = &UNK_11064cad0;
  func_0x000107c613fc(&UNK_11064cad0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = in_x4;
  func_0x0001000285a8(0x112f622b8,&UNK_10dbbe9a0);
  func_0x000107c613fc();
  func_0x000107c615f0(in_x4);
  uVar3 = 0x1033be6d0;
  func_0x0001000b64ac(0x1033be6d0,puVar1);
  *(undefined8 *)(lVar6 + 0x30) = uVar3;
  lVar7 = lVar6;
  func_0x0001000c19f0(lVar6);
  func_0x000107c61574(lVar6);
  uVar8 = 1;
  func_0x00010061b458(1);
  func_0x000107c61574(lVar7);
  puVar1 = &UNK_11064caf8;
  func_0x000107c613fc(&UNK_11064caf8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar9;
  uVar3 = 0x1033be6dc;
  func_0x00010487e4e0(0x1033be6dc,puVar1);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(puVar1);
  uVar8 = 1;
  func_0x00010487fe40(1);
  func_0x000107c61574(uVar3);
  pcVar2 = FUN_1033bd6d0;
  func_0x0001000bfde0(FUN_1033bd6d0,0,&UNK_1106a2a60);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(uVar5);
  in_x5[3] = pcVar2;
  return in_x5;
}



/* Entry: 1033be5f4; end: 1033be663;  */

void FUN_1033be5f4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_28;
  
  if (puRam0000000112f62290 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f62298;
  func_0x00010002969c(0x112f62298,&UNK_10dbbe988);
  uVar2 = uVar1;
  FUN_1033be664();
  puVar3 = PTR___sSayxGSQsSQRzlMc_11034dd00;
  uStack_28 = uVar2;
  func_0x000107c61520(PTR___sSayxGSQsSQRzlMc_11034dd00,uVar1,&uStack_28);
  puRam0000000112f62290 = puVar3;
  return;
}



/* Entry: 1033be664; end: 1033be6a3;  */

void FUN_1033be664(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f622a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbbe8bc;
  func_0x000107c61520(&UNK_10dbbe8bc,&UNK_11064c9d0);
  puRam0000000112f622a0 = puVar1;
  return;
}



/* Entry: 1033be6a4; end: 1033be6c7;  */

void FUN_1033be6a4(undefined8 *param_1)

{
  long unaff_x20;
  
  FUN_1033bcd8c(*param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1033be6c8; end: 1033be6e3;  */

void FUN_1033be6c8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *param_1;
  uVar3 = param_1[1];
  func_0x000107c602fc(0x29);
  func_0x000107c6142c(0xe000000000000000);
  func_0x000107c5fb78(uVar1,uVar3);
  func_0x0001007d6c6c(1,0xd000000000000027,0x800000010f1480c0,uVar4,&PTR_DAT_11064ca30);
  func_0x000107c6142c(0x800000010f1480c0);
  FUN_1033bd02c(uVar1,uVar3,uVar2);
  return;
}



/* Entry: 1033be6e4; end: 1033be72f;  */

void FUN_1033be6e4(void)

{
  long unaff_x20;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  uStack_48 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_40 = 0;
  uStack_28 = 1;
  func_0x000100087f6c(&uStack_48);
  func_0x000100c7f554();
  return;
}



/* Entry: 1033be730; end: 1033be74b;  */

void FUN_1033be730(long param_1,long param_2)

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



/* Entry: 1033be74c; end: 1033be76b;  */

void FUN_1033be74c(uint param_1)

{
  func_0x000107c5f840();
  if ((param_1 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb6f74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s8Dispatch0A8WorkItemC7performyyFTj_11034f8a8)();
  return;
}



/* Entry: 1033be76c; end: 1033be77b;  */

void FUN_1033be76c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb6f68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s8Dispatch0A8WorkItemC6cancelyyFTj_11034f8a0)();
  return;
}



/* Entry: 1033be77c; end: 1033be7c3;  */

undefined8 FUN_1033be77c(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112f622d0;
  func_0x0001000285a8(0x112f622d0,&UNK_10dbbe9b8);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 1033be7c4; end: 1033be7cf;  */

/* WARNING: Possible PIC construction at 0x0001033be02c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033be030) */

void FUN_1033be7c4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar4 = *param_2;
  *param_1 = *(undefined8 *)(unaff_x20 + 0x10);
  param_1[1] = uVar2;
  param_1[2] = uVar1;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar2);
  return;
}



/* Entry: 1033be7d0; end: 1033be83b;  */

long FUN_1033be7d0(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1033be83c; end: 1033be84f;  */

/* WARNING: Possible PIC construction at 0x0001033be874: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033be878) */

undefined8 FUN_1033be83c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1[1];
  if (*(char *)(param_1 + 4) != '\0') {
    return *param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1,uVar1,param_1[2],param_1[3]);
  return uVar1;
}



/* Entry: 1033be850; end: 1033be88f;  */

/* WARNING: Possible PIC construction at 0x0001033be874: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033be878) */

void FUN_1033be850(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  char param_5)

{
  if (param_5 != '\0') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1033be890; end: 1033be95f;  */

undefined8 * FUN_1033be890(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar2 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = *(undefined1 *)(param_2 + 4);
  func_0x0001033be7fc(uVar1,uVar3,uVar2,uVar4,uVar5);
  *param_1 = uVar1;
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  param_1[3] = uVar4;
  *(undefined1 *)(param_1 + 4) = uVar5;
  return param_1;
}



/* Entry: 1033be960; end: 1033be9a7;  */

undefined8 * FUN_1033be960(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar3 = *(undefined1 *)(param_2 + 4);
  uVar5 = *param_1;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar6 = param_1[3];
  uVar7 = *param_2;
  uVar9 = param_2[3];
  uVar8 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  param_1[3] = uVar9;
  param_1[2] = uVar8;
  uVar4 = *(undefined1 *)(param_1 + 4);
  *(undefined1 *)(param_1 + 4) = uVar3;
  FUN_1033be850(uVar5,uVar1,uVar2,uVar6,uVar4);
  return param_1;
}



/* Entry: 1033be9a8; end: 1033bea7f;  */

int FUN_1033be9a8(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfd < param_2) && (*(char *)((long)param_1 + 0x21) != '\0')) {
    return *param_1 + 0xfe;
  }
  uVar1 = *(byte *)(param_1 + 8) ^ 0xff;
  if (*(byte *)(param_1 + 8) < 3) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1033bea80; end: 1033becbb;  */

/* WARNING: Possible PIC construction at 0x0001033bebd4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033bebd8) */

void FUN_1033bea80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  
  if (*(long *)(unaff_x20 + 0x38) != 0) {
    FUN_1033becbc();
  }
  lVar1 = 0;
  func_0x0001033bf308();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  uVar2 = *(undefined8 *)(unaff_x20 + 0x38);
  *(long *)(unaff_x20 + 0x38) = lVar1;
  func_0x000107c61580();
  func_0x000107c61574(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar1 = *(long *)(unaff_x20 + 0x28);
  func_0x000107c614f0(uVar2);
  (**(code **)(lVar1 + 8))(param_1,param_2,param_5,uVar2,lVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c614f0(uVar2);
  (**(code **)(lVar1 + 0x20))(param_1,param_3,param_6,param_7,uVar2,lVar1);
  pcVar4 = *(code **)(lVar1 + 0x10);
  func_0x000107c615f0(param_8);
  (*pcVar4)();
  (**(code **)(lVar1 + 0x28))(0,uVar2,lVar1);
  uVar2 = 1;
  func_0x00010061b458(1);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x000107c615f0(uVar3);
  func_0x000100471e0c();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar3);
  return;
}



/* Entry: 1033becbc; end: 1033bed97;  */

void FUN_1033becbc(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  long lVar5;
  code *pcVar6;
  
  lVar3 = *(long *)(unaff_x20 + 0x38);
  if (lVar3 != 0) {
    *(undefined8 *)(unaff_x20 + 0x38) = 0;
    lVar4 = *(long *)(lVar3 + 0x10);
    if (lVar4 == 0) {
      uVar2 = 0;
    }
    else {
      lVar5 = *(long *)(lVar3 + 0x18);
      lVar1 = lVar4;
      func_0x000107c614f0(lVar4);
      pcVar6 = *(code **)(lVar5 + 8);
      func_0x000107c615f0(lVar4);
      (*pcVar6)(lVar1,lVar5);
      func_0x000107c615e8(lVar4);
      uVar2 = *(undefined8 *)(lVar3 + 0x10);
    }
    *(long *)(lVar3 + 0x10) = 0;
    *(undefined8 *)(lVar3 + 0x18) = 0;
    func_0x000107c615e8(uVar2);
    lVar4 = *(long *)(unaff_x20 + 0x28);
    func_0x000107c614f0(*(undefined8 *)(unaff_x20 + 0x20));
    (**(code **)(lVar4 + 0x18))();
    lVar4 = *(long *)(unaff_x20 + 0x18);
    func_0x000107c614f0(*(undefined8 *)(unaff_x20 + 0x10));
    (**(code **)(lVar4 + 0x30))();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(lVar3);
    return;
  }
  return;
}



/* Entry: 1033bed98; end: 1033befef;  */

void FUN_1033bed98(undefined8 *param_1,long param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  code *pcVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  uVar10 = *param_1;
  uVar1 = *(undefined1 *)(param_1 + 1);
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    func_0x000107c61428(param_3 + 0x10,auStack_90,0,0);
    param_3 = param_3 + 0x10;
    func_0x000107c61648();
    if (param_3 != 0) {
      if (param_3 == *(long *)(param_2 + 0x38)) {
        lVar9 = *(long *)(param_3 + 0x10);
        if (lVar9 == 0) {
          uVar3 = 0;
        }
        else {
          lVar11 = *(long *)(param_3 + 0x18);
          lVar2 = lVar9;
          func_0x000107c614f0(lVar9);
          pcVar8 = *(code **)(lVar11 + 8);
          func_0x000107c615f0(lVar9);
          (*pcVar8)(lVar2,lVar11);
          func_0x000107c615e8(lVar9);
          uVar3 = *(undefined8 *)(param_3 + 0x10);
        }
        *(long *)(param_3 + 0x10) = 0;
        *(undefined8 *)(param_3 + 0x18) = 0;
        func_0x000107c615e8(uVar3);
        uVar3 = *(undefined8 *)(param_2 + 0x20);
        lVar9 = *(long *)(param_2 + 0x28);
        uVar4 = uVar3;
        func_0x000107c614f0();
        puVar5 = &UNK_11064cc98;
        func_0x000107c613fc(&UNK_11064cc98,0x18,7);
        func_0x000107c61644(puVar5 + 0x10,param_2);
        puVar6 = &UNK_11064ccc0;
        func_0x000107c613fc(&UNK_11064ccc0,0x18,7);
        func_0x000107c61644(puVar6 + 0x10,param_3);
        puVar7 = &UNK_11064cd10;
        func_0x000107c613fc(&UNK_11064cd10,0x48,7);
        *(undefined **)(puVar7 + 0x10) = puVar5;
        *(undefined **)(puVar7 + 0x18) = puVar6;
        *(undefined8 *)(puVar7 + 0x20) = uVar10;
        puVar7[0x28] = uVar1;
        *(undefined8 *)(puVar7 + 0x30) = param_4;
        *(undefined8 *)(puVar7 + 0x38) = param_5;
        *(undefined8 *)(puVar7 + 0x40) = param_6;
        pcVar8 = *(code **)(lVar9 + 0x10);
        func_0x000107c615f0(uVar3);
        func_0x000107c6157c(puVar5);
        func_0x000107c6157c(puVar6);
        func_0x000107c615f0(param_4);
        (*pcVar8)(1,0x1033bf338,puVar7,uVar4,lVar9);
        func_0x000107c61574(param_2);
        func_0x000107c61574(param_3);
        func_0x000107c61574(puVar5);
        func_0x000107c61574(puVar6);
        func_0x000107c615e8(uVar3);
        func_0x000107c61574(puVar7);
        return;
      }
      func_0x000107c61574(param_2);
      param_2 = param_3;
    }
    func_0x000107c61574(param_2);
  }
  func_0x0001007d6c6c(2,0xd00000000000003a,0x800000010f148270,param_6,&PTR_DAT_11064cc50);
  return;
}



/* Entry: 1033beff0; end: 1033bf25b;  */

void FUN_1033beff0(long param_1,long param_2,long param_3,char param_4,undefined8 param_5,
                  long param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_88,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    func_0x000107c61428(param_2 + 0x10,auStack_a0,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61648();
    if (param_2 != 0) {
      if (param_2 == *(long *)(param_1 + 0x38)) {
        uVar3 = *(undefined8 *)(param_1 + 0x10);
        lVar1 = *(long *)(param_1 + 0x18);
        uVar2 = uVar3;
        func_0x000107c614f0(uVar3);
        pcVar4 = *(code **)(lVar1 + 0x28);
        func_0x000107c615f0(uVar3);
        if (param_4 == '\x01') {
          if (param_3 == 0) {
            (*pcVar4)(1,uVar2,lVar1);
            func_0x000107c61574(param_1);
            func_0x000107c615e8(uVar3);
            goto LAB_1033bf22c;
          }
          (*pcVar4)(0,uVar2,lVar1);
          func_0x000107c615e8(uVar3);
          func_0x000107c614f0(param_5);
          pcVar4 = *(code **)(param_6 + 8);
          param_3 = 0;
          uVar3 = 1;
        }
        else {
          (*pcVar4)(0,uVar2,lVar1);
          func_0x000107c615e8(uVar3);
          uStack_b0 = 0;
          uStack_a8 = 0xe000000000000000;
          func_0x000107c602fc(0x2c);
          func_0x000107c5fb78(0xd000000000000029,0x800000010f148300);
          func_0x000107c5fddc(param_3,&uStack_b0,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                              PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08)
          ;
          func_0x000107c5fb78(0x73,0xe100000000000000);
          uVar3 = uStack_a8;
          func_0x0001007d6c6c(3,uStack_b0,uStack_a8,param_7,&PTR_DAT_11064cc50);
          func_0x000107c6142c(uVar3);
          func_0x000107c614f0(param_5);
          pcVar4 = *(code **)(param_6 + 8);
          uVar3 = 0;
        }
        (*pcVar4)(param_3,uVar3,param_5,param_6);
        func_0x000107c61574(param_1);
LAB_1033bf22c:
        func_0x000107c61574(param_2);
        return;
      }
      func_0x000107c61574(param_1);
      param_1 = param_2;
    }
    func_0x000107c61574(param_1);
  }
  func_0x0001007d6c6c(2,0xd000000000000042,0x800000010f1482b0,param_7,&PTR_DAT_11064cc50);
  return;
}



/* Entry: 1033bf25c; end: 1033bf2b7;  */

void FUN_1033bf25c(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1033bf2b8; end: 1033bf2e3;  */

/* WARNING: Possible PIC construction at 0x0001033bebd4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033bebd8) */

void FUN_1033bf2b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  code *pcVar4;
  
  if (*(long *)(unaff_x20 + 0x38) != 0) {
    FUN_1033becbc();
  }
  lVar1 = 0;
  func_0x0001033bf308();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  uVar2 = *(undefined8 *)(unaff_x20 + 0x38);
  *(long *)(unaff_x20 + 0x38) = lVar1;
  func_0x000107c61580();
  func_0x000107c61574(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar1 = *(long *)(unaff_x20 + 0x28);
  func_0x000107c614f0(uVar2);
  (**(code **)(lVar1 + 8))(param_1,param_2,param_5,uVar2,lVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c614f0(uVar2);
  (**(code **)(lVar1 + 0x20))(param_1,param_3,param_6,param_7,uVar2,lVar1);
  pcVar4 = *(code **)(lVar1 + 0x10);
  func_0x000107c615f0(param_8);
  (*pcVar4)();
  (**(code **)(lVar1 + 0x28))(0,uVar2,lVar1);
  uVar2 = 1;
  func_0x00010061b458(1);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x000107c615f0(uVar3);
  func_0x000100471e0c();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar3);
  return;
}



/* Entry: 1033bf2e4; end: 1033bf327;  */

void FUN_1033bf2e4(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1033bf328; end: 1033bf34f;  */

void FUN_1033bf328(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  code *pcVar13;
  long lVar14;
  long unaff_x20;
  undefined8 uVar15;
  long lVar16;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar5 = *(long *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar15 = *param_1;
  uVar3 = *(undefined1 *)(param_1 + 1);
  func_0x000107c61428(lVar4 + 0x10,auStack_78,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61648();
  if (lVar4 != 0) {
    func_0x000107c61428(lVar5 + 0x10,auStack_90,0,0);
    lVar5 = lVar5 + 0x10;
    func_0x000107c61648();
    if (lVar5 != 0) {
      if (lVar5 == *(long *)(lVar4 + 0x38)) {
        lVar14 = *(long *)(lVar5 + 0x10);
        if (lVar14 == 0) {
          uVar7 = 0;
        }
        else {
          lVar16 = *(long *)(lVar5 + 0x18);
          lVar6 = lVar14;
          func_0x000107c614f0(lVar14);
          pcVar13 = *(code **)(lVar16 + 8);
          func_0x000107c615f0(lVar14);
          (*pcVar13)(lVar6,lVar16);
          func_0x000107c615e8(lVar14);
          uVar7 = *(undefined8 *)(lVar5 + 0x10);
        }
        *(long *)(lVar5 + 0x10) = 0;
        *(undefined8 *)(lVar5 + 0x18) = 0;
        func_0x000107c615e8(uVar7);
        uVar7 = *(undefined8 *)(lVar4 + 0x20);
        lVar14 = *(long *)(lVar4 + 0x28);
        uVar8 = uVar7;
        func_0x000107c614f0();
        puVar9 = &UNK_11064cc98;
        func_0x000107c613fc(&UNK_11064cc98,0x18,7);
        func_0x000107c61644(puVar9 + 0x10,lVar4);
        puVar10 = &UNK_11064ccc0;
        func_0x000107c613fc(&UNK_11064ccc0,0x18,7);
        func_0x000107c61644(puVar10 + 0x10,lVar5);
        puVar11 = &UNK_11064cd10;
        func_0x000107c613fc(&UNK_11064cd10,0x48,7);
        *(undefined **)(puVar11 + 0x10) = puVar9;
        *(undefined **)(puVar11 + 0x18) = puVar10;
        *(undefined8 *)(puVar11 + 0x20) = uVar15;
        puVar11[0x28] = uVar3;
        *(undefined8 *)(puVar11 + 0x30) = uVar1;
        *(undefined8 *)(puVar11 + 0x38) = uVar2;
        *(undefined8 *)(puVar11 + 0x40) = uVar12;
        pcVar13 = *(code **)(lVar14 + 0x10);
        func_0x000107c615f0(uVar7);
        func_0x000107c6157c(puVar9);
        func_0x000107c6157c(puVar10);
        func_0x000107c615f0(uVar1);
        (*pcVar13)(1,0x1033bf338,puVar11,uVar8,lVar14);
        func_0x000107c61574(lVar4);
        func_0x000107c61574(lVar5);
        func_0x000107c61574(puVar9);
        func_0x000107c61574(puVar10);
        func_0x000107c615e8(uVar7);
        func_0x000107c61574(puVar11);
        return;
      }
      func_0x000107c61574(lVar4);
      lVar4 = lVar5;
    }
    func_0x000107c61574(lVar4);
  }
  func_0x0001007d6c6c(2,0xd00000000000003a,0x800000010f148270,uVar12,&PTR_DAT_11064cc50);
  return;
}



/* Entry: 1033bf350; end: 1033bf3df;  */

undefined1  [16]
FUN_1033bf350(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  char *pcVar2;
  undefined1 auVar3 [16];
  
  lVar1 = 0;
  func_0x0001033bf298();
  func_0x000107c613fc();
  pcVar2 = "GamesExplorerPresentationChromeController";
  func_0x0001000c10c0();
  func_0x000107c61180();
  *(char **)(lVar1 + 0x30) = pcVar2;
  *(undefined8 *)(lVar1 + 0x38) = 0;
  *(undefined8 *)(lVar1 + 0x10) = param_1;
  *(undefined8 *)(lVar1 + 0x18) = param_2;
  *(undefined8 *)(lVar1 + 0x20) = param_3;
  *(undefined8 *)(lVar1 + 0x28) = param_4;
  func_0x000107c615f0(param_1);
  func_0x000107c615f0(param_3);
  auVar3._8_8_ = &PTR_DAT_11064cc70;
  auVar3._0_8_ = lVar1;
  return auVar3;
}


