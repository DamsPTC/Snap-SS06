/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101b4b490; end: 101b4b4e3;  */

void FUN_101b4b490(void)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x101b4b4e8;
  plVar1[3] = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b4b188,0,0);
  return;
}



/* Entry: 101b4b4e4; end: 101b4b4eb;  */

void FUN_101b4b4e4(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101b4b2f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101b4b4ec; end: 101b4b56b;  */

void FUN_101b4b4ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112df8910,&UNK_10d9c8e80);
  puVar1 = &UNK_1104496b8;
  func_0x000107c613fc(&UNK_1104496b8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_101b4b624,puVar1);
  return;
}



/* Entry: 101b4b56c; end: 101b4b623;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b4b56c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long *plVar5;
  long lStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  plVar5 = &lStack_60;
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  lVar2 = 0;
  FUN_101b4b714();
  lVar3 = lVar2;
  func_0x000107c610f8();
  lVar1 = _DAT_112e03a98;
  puVar4 = PTR_PTR_1126a8ad0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar3 + lVar1) = puVar4;
  *(undefined8 *)(lVar3 + _DAT_112e03a88) = uStack_48;
  *(undefined8 *)(lVar3 + _DAT_112e03a90) = uStack_50;
  lStack_60 = lVar3;
  lStack_58 = lVar2;
  func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  *param_1 = plVar5;
  return;
}



/* Entry: 101b4b624; end: 101b4b66b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b4b624(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long *plVar5;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  plVar5 = &lStack_60;
  func_0x000100083b20(&uStack_48,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x000100083b20(&uStack_50);
  lVar2 = 0;
  FUN_101b4b714();
  lVar3 = lVar2;
  func_0x000107c610f8();
  lVar1 = _DAT_112e03a98;
  puVar4 = PTR_PTR_1126a8ad0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar3 + lVar1) = puVar4;
  *(undefined8 *)(lVar3 + _DAT_112e03a88) = uStack_48;
  *(undefined8 *)(lVar3 + _DAT_112e03a90) = uStack_50;
  lStack_60 = lVar3;
  lStack_58 = lVar2;
  func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  *param_1 = plVar5;
  return;
}



/* Entry: 101b4b66c; end: 101b4b6cb; -[_TtC39MutualFriendsBillboardFSTSignalProvider39MutualFriendsBillboardFSTSignalProvider init] */

void FUN_101b4b66c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MutualFriendsBillboardFSTSignalProvider.MutualFriendsBillboardFSTSignalProvider"
                      ,0x4f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101b4b698);
  (*pcVar1)();
}



/* Entry: 101b4b6cc; end: 101b4b713; -[_TtC39MutualFriendsBillboardFSTSignalProvider39MutualFriendsBillboardFSTSignalProvider .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101b4b6e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b4b6ec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b4b6cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e03a88));
  return;
}



/* Entry: 101b4b714; end: 101b4b733;  */

void FUN_101b4b714(void)

{
  func_0x000107c61168(&PTR_PTR_1127f9c90);
  return;
}



/* Entry: 101b4b734; end: 101b4b73b; -[_TtC39MutualFriendsBillboardFSTSignalProvider39MutualFriendsBillboardFSTSignalProvider preCheckSource] */

undefined8 FUN_101b4b734(void)

{
  return 0x2a;
}



/* Entry: 101b4b73c; end: 101b4b863;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b4b73c(ulong param_1,byte param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((param_1 & 1) != 0) {
    if (*(long *)(unaff_x20 + _DAT_112e03a98) != 0) {
      plVar5 = *(long **)(*(long *)(unaff_x20 + _DAT_112e03a98) + 8);
      uStack_40 = 0;
      uStack_38 = 0;
      (**(code **)(*plVar5 + 0x18))(plVar5,&UNK_1108acc80,&uStack_40,1);
      func_0x00010007e5dc(&stack0xffffffffffffffd8);
    }
    return;
  }
  if (param_2 != 4) {
    uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112e03a98);
    uVar2 = 0xed00006e695f6465;
    uVar4 = 0x74706f5f72657375;
    if (param_2 != 2) {
      uVar2 = 0x800000010efff150;
      uVar4 = 0xd00000000000001a;
    }
    uVar1 = 0x800000010efff130;
    uVar3 = 0xd000000000000014;
    if (param_2 != 0) {
      uVar1 = 0xec00000064656c62;
      uVar3 = 0x617369645f666f63;
    }
    if (param_2 < 2) {
      uVar2 = uVar1;
      uVar4 = uVar3;
    }
    func_0x000107c5fadc(uVar4,uVar2);
    func_0x000107c6142c(uVar2);
    func_0x000105719740(uVar6,uVar4,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar4);
    return;
  }
  return;
}



/* Entry: 101b4b864; end: 101b4b897; -[_TtC39MutualFriendsBillboardFSTSignalProvider39MutualFriendsBillboardFSTSignalProvider eligibleWithRequestor:campaignName:] */

void FUN_101b4b864(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101b4b898();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101b4b898; end: 101b4ba93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101b4b898(void)

{
  char cVar1;
  char cVar2;
  char cVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined4 uVar12;
  long unaff_x20;
  undefined8 uVar13;
  
  uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112e03a98);
  func_0x000105719650(uVar13,1);
  lVar5 = *(long *)(*(long *)(unaff_x20 + _DAT_112e03a88) + _DAT_113021f38);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar5 != 0) {
    lVar6 = *(long *)(unaff_x20 + _DAT_112e03a90);
    func_0x000107c42eac();
    func_0x000107c61180();
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x101b4ba94);
      (*pcVar4)();
    }
    lVar7 = lVar6;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar6);
    if (lVar7 != 0) {
      lVar6 = lVar5;
      func_0x000107c4415c();
      func_0x000107c61180();
      cVar3 = *(char *)(lVar6 + _DAT_113021bc0);
      func_0x000107c61170();
      lVar6 = lVar7;
      func_0x000107c5aeb4();
      lVar8 = lVar7;
      func_0x000107c4d328();
      uVar12 = 3;
      if (lVar8 == 0) {
        uVar12 = 4;
      }
      if (lVar6 == 1) {
        uVar12 = 2;
      }
      cVar1 = '\0';
      if (lVar6 != 1) {
        cVar1 = cVar3;
      }
      cVar2 = '\0';
      if (lVar8 == 0) {
        cVar2 = cVar1;
      }
      if (cVar3 == '\0') {
        uVar12 = 1;
      }
      FUN_101b4b73c(cVar2,uVar12);
      puVar10 = PTR_PTR_1126ae558;
      func_0x000107c61168(PTR_PTR_1126ae558);
      puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c45a48();
      func_0x000107c451b0(puVar10);
      func_0x000107c61180();
      func_0x000107c615e8(lVar5);
      func_0x000107c61170(lVar7);
      goto LAB_101b4ba70;
    }
    func_0x000107c615e8(lVar5);
  }
  uVar9 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010efff130);
  func_0x000105719740(uVar13,uVar9,1);
  func_0x000107c61170(uVar9);
  puVar10 = PTR_PTR_1126ae558;
  func_0x000107c61168(PTR_PTR_1126ae558);
  puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c451b0(puVar10);
  func_0x000107c61180();
LAB_101b4ba70:
  func_0x000107c61170(puVar11);
  return puVar10;
}



/* Entry: 101b4ba94; end: 101b4bb13;  */

void FUN_101b4ba94(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112df8910,&UNK_10d9c8e80);
  puVar1 = &UNK_1104497b8;
  func_0x000107c613fc(&UNK_1104497b8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_101b4bbcc,puVar1);
  return;
}



/* Entry: 101b4bb14; end: 101b4bbcb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b4bb14(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long *plVar5;
  long lStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  plVar5 = &lStack_60;
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  lVar2 = 0;
  FUN_101b4bcbc();
  lVar3 = lVar2;
  func_0x000107c610f8();
  lVar1 = _DAT_112e03b00;
  puVar4 = PTR_PTR_1126a8ad8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar3 + lVar1) = puVar4;
  *(undefined8 *)(lVar3 + _DAT_112e03af0) = uStack_48;
  *(undefined8 *)(lVar3 + _DAT_112e03af8) = uStack_50;
  lStack_60 = lVar3;
  lStack_58 = lVar2;
  func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  *param_1 = plVar5;
  return;
}



/* Entry: 101b4bbcc; end: 101b4bc13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b4bbcc(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long *plVar5;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  plVar5 = &lStack_60;
  func_0x000100083b20(&uStack_48,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x000100083b20(&uStack_50);
  lVar2 = 0;
  FUN_101b4bcbc();
  lVar3 = lVar2;
  func_0x000107c610f8();
  lVar1 = _DAT_112e03b00;
  puVar4 = PTR_PTR_1126a8ad8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar3 + lVar1) = puVar4;
  *(undefined8 *)(lVar3 + _DAT_112e03af0) = uStack_48;
  *(undefined8 *)(lVar3 + _DAT_112e03af8) = uStack_50;
  lStack_60 = lVar3;
  lStack_58 = lVar2;
  func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  *param_1 = plVar5;
  return;
}



/* Entry: 101b4bc14; end: 101b4bc73; -[_TtC50MutualFriendsEducationalBillboardFSTSignalProvider50MutualFriendsEducationalBillboardFSTSignalProvider init] */

void FUN_101b4bc14(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MutualFriendsEducationalBillboardFSTSignalProvider.MutualFriendsEducationalBillboardFSTSignalProvider"
                      ,0x65,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101b4bc40);
  (*pcVar1)();
}



/* Entry: 101b4bc74; end: 101b4bcbb; -[_TtC50MutualFriendsEducationalBillboardFSTSignalProvider50MutualFriendsEducationalBillboardFSTSignalProvider .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101b4bc90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b4bc94) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b4bc74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e03af0));
  return;
}



/* Entry: 101b4bcbc; end: 101b4bcdb;  */

void FUN_101b4bcbc(void)

{
  func_0x000107c61168(&PTR_PTR_1127f9d60);
  return;
}



/* Entry: 101b4bcdc; end: 101b4bce3; -[_TtC50MutualFriendsEducationalBillboardFSTSignalProvider50MutualFriendsEducationalBillboardFSTSignalProvider preCheckSource] */

undefined8 FUN_101b4bcdc(void)

{
  return 0x32;
}



/* Entry: 101b4bce4; end: 101b4bddf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b4bce4(ulong param_1,char param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((param_1 & 1) != 0) {
    if (*(long *)(unaff_x20 + _DAT_112e03b00) != 0) {
      plVar1 = *(long **)(*(long *)(unaff_x20 + _DAT_112e03b00) + 8);
      uStack_40 = 0;
      uStack_38 = 0;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_1108acd80,&uStack_40,1);
      func_0x00010007e5dc(&stack0xffffffffffffffd8);
    }
    return;
  }
  if (param_2 == '\x03') {
    return;
  }
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112e03b00);
  if (param_2 == '\0') {
    uVar2 = 0xd000000000000014;
    uVar4 = 0x800000010efff130;
  }
  else {
    uVar2 = 0x617369645f666f63;
    uVar4 = 0xec00000064656c62;
    if (param_2 != '\x01') {
      uVar2 = 0xd000000000000011;
      uVar4 = 0x800000010efff1c0;
    }
  }
  func_0x000107c5fadc(uVar2,uVar4);
  func_0x000107c6142c(uVar4);
  func_0x000105719a18(uVar3,uVar2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 101b4bde0; end: 101b4be13; -[_TtC50MutualFriendsEducationalBillboardFSTSignalProvider50MutualFriendsEducationalBillboardFSTSignalProvider eligibleWithRequestor:campaignName:] */

void FUN_101b4bde0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101b4be14();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101b4be14; end: 101b4c07f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101b4be14(void)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined4 uVar11;
  long unaff_x20;
  byte bVar12;
  undefined8 uVar13;
  
  uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112e03b00);
  func_0x000105719928(uVar13,1);
  lVar4 = *(long *)(*(long *)(unaff_x20 + _DAT_112e03af0) + _DAT_113021f38);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar5 = *(long *)(unaff_x20 + _DAT_112e03af8);
    func_0x000107c42eac();
    func_0x000107c61180();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101b4c080);
      (*pcVar2)();
    }
    lVar6 = lVar5;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    if (lVar6 != 0) {
      lVar5 = lVar4;
      func_0x000107c4415c();
      func_0x000107c61180();
      bVar12 = *(byte *)(lVar5 + _DAT_113021bc0);
      func_0x000107c61170();
      lVar5 = lVar6;
      func_0x000107c5aeb4();
      func_0x00010098a0cc(0);
      uVar13 = 0xc;
      func_0x00010098a590(0xc);
      lVar7 = lVar4;
      func_0x000107c497f8();
      func_0x000107c61170(uVar13);
      if (lVar5 == -1) {
        uVar11 = 3;
        if (bVar12 == 0) {
          uVar11 = 1;
        }
        bVar1 = 0;
        if (lVar7 == 1) {
          bVar1 = bVar12;
        }
        bVar3 = bVar12 != 0;
        bVar12 = bVar1;
        if (bVar3 && lVar7 != 1) {
LAB_101b4bfec:
          uVar11 = 2;
          bVar12 = 0;
        }
      }
      else if (lVar5 == 1) {
        uVar11 = 3;
        if (bVar12 == 0) {
          uVar11 = 1;
        }
      }
      else {
        if ((bVar12 & 1) != 0) goto LAB_101b4bfec;
        uVar11 = 1;
        bVar12 = 0;
      }
      FUN_101b4bce4(bVar12,uVar11);
      puVar9 = PTR_PTR_1126ae558;
      func_0x000107c61168(PTR_PTR_1126ae558);
      puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c45a48();
      func_0x000107c451b0(puVar9);
      func_0x000107c61180();
      func_0x000107c615e8(lVar4);
      func_0x000107c61170(lVar6);
      goto LAB_101b4c058;
    }
    func_0x000107c615e8(lVar4);
  }
  uVar8 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010efff130);
  func_0x000105719a18(uVar13,uVar8,1);
  func_0x000107c61170(uVar8);
  puVar9 = PTR_PTR_1126ae558;
  func_0x000107c61168(PTR_PTR_1126ae558);
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c451b0(puVar9);
  func_0x000107c61180();
LAB_101b4c058:
  func_0x000107c61170(puVar10);
  return puVar9;
}



/* Entry: 101b4c080; end: 101b4c0eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b4c080(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_101b4c474();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112e03b38) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 101b4c0ec; end: 101b4c157;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b4c0ec(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e03b38) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101b4c158; end: 101b4c1b7; -[_TtC61StartupCompleteSnapAnyoneListenerScopedFactoryServiceProvider49SCStartupCompleteSnapAnyoneListenerScopedServices init] */

void FUN_101b4c158(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("StartupCompleteSnapAnyoneListenerScopedFactoryServiceProvider.SCStartupCompleteSnapAnyoneListenerScopedServices"
                      ,0x6f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101b4c184);
  (*pcVar1)();
}



/* Entry: 101b4c1b8; end: 101b4c1c7; -[_TtC61StartupCompleteSnapAnyoneListenerScopedFactoryServiceProvider49SCStartupCompleteSnapAnyoneListenerScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b4c1b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e03b38));
  return;
}



/* Entry: 101b4c1c8; end: 101b4c233;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b4c1c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1104499f0;
  func_0x000107c613fc(&UNK_1104499f0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_101b4c550,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 101b4c234; end: 101b4c2cf;  */

void FUN_101b4c234(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  func_0x000100083b20(auStack_60);
  func_0x000100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_110449900;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110449900;
  return;
}



/* Entry: 101b4c2d0; end: 101b4c307;  */

void FUN_101b4c2d0(long *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000100094f24();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *param_1 = lVar1;
  return;
}



/* Entry: 101b4c308; end: 101b4c30f;  */

undefined8 FUN_101b4c308(void)

{
  return 0x1b;
}



/* Entry: 101b4c310; end: 101b4c443;  */

void FUN_101b4c310(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_110449a18;
  func_0x000107c613fc(&UNK_110449a18,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_101b4c528;
  func_0x00010058fa64(FUN_101b4c528,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101b4c444; end: 101b4c473;  */

undefined ** FUN_101b4c444(void)

{
  return &PTR_DAT_112f329c8;
}



/* Entry: 101b4c474; end: 101b4c493;  */

void FUN_101b4c474(void)

{
  func_0x000107c61168(&PTR_PTR_1127f9e30);
  return;
}



/* Entry: 101b4c494; end: 101b4c4e3;  */

undefined1  [16] FUN_101b4c494(void)

{
  return ZEXT816(0x110449950);
}



/* Entry: 101b4c4e4; end: 101b4c527;  */

void FUN_101b4c4e4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e03ba0 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126a8ae0;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112e03ba0 = puVar1;
  return;
}



/* Entry: 101b4c528; end: 101b4c54f;  */

void FUN_101b4c528(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 101b4c550; end: 101b4c563;  */

void FUN_101b4c550(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101b4c564; end: 101b4c897;  */

void FUN_101b4c564(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  code *pcVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_68;
  
  uVar8 = *param_2;
  func_0x0001000285a8(0x112e03bb8,&UNK_10d9d6f58);
  puVar1 = &uStack_68;
  uStack_68 = uVar8;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112e03bc0,&UNK_10d9d6f60);
  puVar2 = &UNK_110449ac8;
  func_0x000107c613fc(&UNK_110449ac8,0x40,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  *(undefined8 *)(puVar2 + 0x28) = param_5;
  *(undefined8 *)(puVar2 + 0x30) = param_6;
  *(undefined8 *)(puVar2 + 0x38) = param_7;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  uVar8 = 0x101b4c8a8;
  func_0x0001000823a8(0x101b4c8a8,puVar2);
  func_0x000100082720("SCSnapAnyoneNativeMessagingListenerEntryPointWrapperServiceProvider",0x43,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar3 = FUN_101b4c2d0;
  func_0x0001000823a8(FUN_101b4c2d0,0);
  pcVar4 = "SCStartupCompleteSnapAnyoneListenerScopedServicesCleanupRelayServiceProvider";
  func_0x000100082720("SCStartupCompleteSnapAnyoneListenerScopedServicesCleanupRelayServiceProvider"
                      ,0x4c,2);
  FUN_101b4da10();
  func_0x000100082720("StartupCompleteSnapAnyoneListenerScopeGraphBridgeServicesServiceProvider",
                      0x48,2);
  func_0x0001000285a8(0x112e03bc8,&UNK_10d9d6f70);
  puVar2 = &UNK_110449af0;
  func_0x000107c613fc(&UNK_110449af0,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar8;
  *(undefined8 **)(puVar2 + 0x18) = puVar1;
  *(code **)(puVar2 + 0x20) = pcVar3;
  *(char **)(puVar2 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(pcVar3);
  func_0x000107c6157c(pcVar4);
  uVar5 = 0x101b4c8b8;
  func_0x0001000823a8(0x101b4c8b8,puVar2);
  func_0x000100082720("SCStartupCompleteSnapAnyoneListenerScopeInitializationPluginRegistryServiceProvider"
                      ,0x53,2);
  func_0x0001000285a8(0x112e03b40,&UNK_10d9d6c60);
  func_0x000107c6157c(uVar5);
  uVar6 = 0x101b4c8c4;
  func_0x0001000823a8(0x101b4c8c4,uVar5);
  func_0x000100082720("SCStartupCompleteSnapAnyoneListenerScopeInitializationServiceProvider",0x45,2
                     );
  func_0x0001000285a8(0x112e03b30,&UNK_10d9d6c50);
  func_0x000107c6157c(uVar6);
  uVar7 = 0x101b4c8cc;
  func_0x0001000823a8(0x101b4c8cc,uVar6);
  func_0x000100082720("SCStartupCompleteSnapAnyoneListenerScopedServicesServiceProvider",0x40,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar2 = &UNK_110449b18;
  func_0x000107c613fc(&UNK_110449b18,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar7;
  *(code **)(puVar2 + 0x18) = pcVar3;
  func_0x000107c6157c(pcVar3);
  uVar7 = 0x101b4c8d4;
  func_0x0001000823a8(0x101b4c8d4,puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(uVar6);
  func_0x000100082720("SCStartupCompleteSnapAnyoneListenerScopeEntryPointProvider",0x3a,2);
  *param_1 = uVar7;
  return;
}



/* Entry: 101b4c898; end: 101b4c8db;  */

void FUN_101b4c898(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined8 uStack_68;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar10 = *param_2;
  func_0x0001000285a8(0x112e03bb8,&UNK_10d9d6f58);
  puVar1 = &uStack_68;
  uStack_68 = uVar10;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112e03bc0,&UNK_10d9d6f60);
  puVar2 = &UNK_110449ac8;
  func_0x000107c613fc(&UNK_110449ac8,0x40,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar3;
  *(undefined8 *)(puVar2 + 0x20) = uVar7;
  *(undefined8 *)(puVar2 + 0x28) = uVar6;
  *(undefined8 *)(puVar2 + 0x30) = uVar8;
  *(undefined8 *)(puVar2 + 0x38) = uVar9;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar7);
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(uVar9);
  uVar3 = 0x101b4c8a8;
  func_0x0001000823a8(0x101b4c8a8,puVar2);
  func_0x000100082720("SCSnapAnyoneNativeMessagingListenerEntryPointWrapperServiceProvider",0x43,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_101b4c2d0;
  func_0x0001000823a8(FUN_101b4c2d0,0);
  pcVar5 = "SCStartupCompleteSnapAnyoneListenerScopedServicesCleanupRelayServiceProvider";
  func_0x000100082720("SCStartupCompleteSnapAnyoneListenerScopedServicesCleanupRelayServiceProvider"
                      ,0x4c,2);
  FUN_101b4da10();
  func_0x000100082720("StartupCompleteSnapAnyoneListenerScopeGraphBridgeServicesServiceProvider",
                      0x48,2);
  func_0x0001000285a8(0x112e03bc8,&UNK_10d9d6f70);
  puVar2 = &UNK_110449af0;
  func_0x000107c613fc(&UNK_110449af0,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar3;
  *(undefined8 **)(puVar2 + 0x18) = puVar1;
  *(code **)(puVar2 + 0x20) = pcVar4;
  *(char **)(puVar2 + 0x28) = pcVar5;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(pcVar4);
  func_0x000107c6157c(pcVar5);
  uVar6 = 0x101b4c8b8;
  func_0x0001000823a8(0x101b4c8b8,puVar2);
  func_0x000100082720("SCStartupCompleteSnapAnyoneListenerScopeInitializationPluginRegistryServiceProvider"
                      ,0x53,2);
  func_0x0001000285a8(0x112e03b40,&UNK_10d9d6c60);
  func_0x000107c6157c(uVar6);
  uVar7 = 0x101b4c8c4;
  func_0x0001000823a8(0x101b4c8c4,uVar6);
  func_0x000100082720("SCStartupCompleteSnapAnyoneListenerScopeInitializationServiceProvider",0x45,2
                     );
  func_0x0001000285a8(0x112e03b30,&UNK_10d9d6c50);
  func_0x000107c6157c(uVar7);
  uVar8 = 0x101b4c8cc;
  func_0x0001000823a8(0x101b4c8cc,uVar7);
  func_0x000100082720("SCStartupCompleteSnapAnyoneListenerScopedServicesServiceProvider",0x40,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar2 = &UNK_110449b18;
  func_0x000107c613fc(&UNK_110449b18,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar8;
  *(code **)(puVar2 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar8 = 0x101b4c8d4;
  func_0x0001000823a8(0x101b4c8d4,puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(uVar6);
  func_0x000107c61574(uVar7);
  func_0x000100082720("SCStartupCompleteSnapAnyoneListenerScopeEntryPointProvider",0x3a,2);
  *param_1 = uVar8;
  return;
}



/* Entry: 101b4c8dc; end: 101b4cfc3;  */

void FUN_101b4c8dc(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  FUN_101b4d11c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  puVar1 = PTR_PTR_1126a8ae8;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar6 = uStack_90;
  func_0x000107c61174(uStack_90);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar7 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar8 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010eff6980);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(puVar1);
  uVar8 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef134e0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(puVar1);
  uVar8 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010efc4750);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(puVar1);
  uVar8 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(puVar1);
  uVar8 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef1c990);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(puVar1);
  uVar8 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef113a0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar8);
  func_0x000107c3e740(puVar1);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  *param_1 = param_2;
  return;
}



/* Entry: 101b4cfc4; end: 101b4d00f;  */

void FUN_101b4cfc4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101b4d010; end: 101b4d017;  */

undefined8 FUN_101b4d010(void)

{
  return 0x1b;
}



/* Entry: 101b4d018; end: 101b4d09b;  */

void FUN_101b4d018(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x101b4d15c,param_2,FUN_101b4d160,param_2,FUN_101b4d188,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 101b4d09c; end: 101b4d0eb;  */

undefined8 FUN_101b4d09c(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101b4d0ec; end: 101b4d11b;  */

undefined ** FUN_101b4d0ec(void)

{
  return &PTR_DAT_112f329c8;
}



/* Entry: 101b4d11c; end: 101b4d13b;  */

void FUN_101b4d11c(void)

{
  func_0x000107c61168(&PTR_PTR_112e03c38);
  return;
}



/* Entry: 101b4d13c; end: 101b4d15f;  */

undefined1  [16] FUN_101b4d13c(void)

{
  return ZEXT816(0x110449b70);
}



/* Entry: 101b4d160; end: 101b4d187;  */

void FUN_101b4d160(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101b4d188; end: 101b4d18f;  */

undefined8 FUN_101b4d188(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101b4d190; end: 101b4d1cb;  */

void FUN_101b4d190(undefined8 *param_1,undefined8 param_2)

{
  FUN_101b4d1cc();
  func_0x0001000a7f38("SCStartupCompleteSnapAnyoneListenerScopeInitializationPluginRegistryServiceProvider"
                      ,0x53,2);
  *param_1 = param_2;
  return;
}



/* Entry: 101b4d1cc; end: 101b4d3b7;  */

void FUN_101b4d1cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_1105fcf70;
  ppuVar4 = &PTR_DAT_112f329c8;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  func_0x000107c6157c(param_1);
  uVar2 = 0x112e03cc0;
  func_0x0001000285a8(0x112e03cc0,&UNK_10d9d7118);
  func_0x0001000a6ee8(&UNK_110449b70,
                      "SCSnapAnyoneNativeMessagingListenerEntryPointWrapperScopeInitializationPluginKey"
                      ,0x50,2,FUN_101b4d42c,param_1,uVar2,&UNK_110449b70,&PTR_DAT_112e03bd0);
  func_0x000107c61574(param_1);
  puVar3 = &UNK_110449bc0;
  func_0x000107c613fc(&UNK_110449bc0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_110449990,
                      "SCStartupCompleteSnapAnyoneListenerScopedServicesScopeInitializationPluginKey"
                      ,0x4d,2,FUN_101b4d4dc,puVar3,uVar2,&UNK_110449990,&PTR_DAT_112e03b48);
  func_0x000107c61574(puVar3);
  puVar3 = &UNK_110449be8;
  func_0x000107c613fc(&UNK_110449be8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_110449d78,
                      "StartupCompleteSnapAnyoneListenerScopeGraphBridgeScopeInitializationPluginKey"
                      ,0x4d,2,FUN_101b4d4e4,puVar3,uVar2,&UNK_110449d78,&PTR_DAT_112e03d50);
  func_0x000107c61574(puVar3);
  uVar2 = 0x112e03cc8;
  func_0x0001000285a8(0x112e03cc8,&UNK_10d9d7120);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar2);
  return;
}



/* Entry: 101b4d3b8; end: 101b4d42b;  */

void FUN_101b4d3b8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x101b4d558;
  func_0x0001000823a8(0x101b4d558,param_3);
  func_0x000100082720("SCSnapAnyoneNativeMessagingListenerEntryPointWrapperScopeInitializationPluginProvider"
                      ,0x55,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101b4d42c; end: 101b4d433;  */

void FUN_101b4d42c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x101b4d558;
  func_0x0001000823a8();
  func_0x000100082720("SCSnapAnyoneNativeMessagingListenerEntryPointWrapperScopeInitializationPluginProvider"
                      ,0x55,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101b4d434; end: 101b4d4db;  */

void FUN_101b4d434(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110449c10;
  func_0x000107c613fc(&UNK_110449c10,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_101b4d550;
  func_0x0001000823a8(FUN_101b4d550,puVar1);
  func_0x000100082720("SCStartupCompleteSnapAnyoneListenerScopedServicesScopeInitializationPluginProvider"
                      ,0x52,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 101b4d4dc; end: 101b4d4e3;  */

void FUN_101b4d4dc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_110449c10;
  func_0x000107c613fc(&UNK_110449c10,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_101b4d550;
  func_0x0001000823a8(FUN_101b4d550,puVar3);
  func_0x000100082720("SCStartupCompleteSnapAnyoneListenerScopedServicesScopeInitializationPluginProvider"
                      ,0x52,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 101b4d4e4; end: 101b4d523;  */

void FUN_101b4d4e4(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_101b4daf4(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("StartupCompleteSnapAnyoneListenerScopeGraphBridgeScopeInitializationPluginProvider"
                      ,0x52,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101b4d524; end: 101b4d54f;  */

void FUN_101b4d524(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101b4d550; end: 101b4d55f;  */

void FUN_101b4d550(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_110449a18;
  func_0x000107c613fc(&UNK_110449a18,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_101b4c528;
  func_0x00010058fa64(FUN_101b4c528,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101b4d560; end: 101b4d5e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101b4d560(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_101b4d920();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112e03cd0) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112e03cd8) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101b4d5e8);
  (*pcVar1)();
}



/* Entry: 101b4d5e8; end: 101b4d647; -[_TtC49StartupCompleteSnapAnyoneListenerScopeGraphBridge64StartupCompleteSnapAnyoneListenerScopeGraphBridgeSaberEntryPoint init] */

void FUN_101b4d5e8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("StartupCompleteSnapAnyoneListenerScopeGraphBridge.StartupCompleteSnapAnyoneListenerScopeGraphBridgeSaberEntryPoint"
                      ,0x72,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101b4d614);
  (*pcVar1)();
}



/* Entry: 101b4d648; end: 101b4d67f; -[_TtC49StartupCompleteSnapAnyoneListenerScopeGraphBridge64StartupCompleteSnapAnyoneListenerScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101b4d664: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b4d668) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b4d648(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e03cd0));
  return;
}



/* Entry: 101b4d680; end: 101b4d6a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b4d680(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112e03cd8),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112e03cd0));
  return;
}



/* Entry: 101b4d6a8; end: 101b4d6c7;  */

void FUN_101b4d6a8(void)

{
  func_0x000107c61168(&PTR_PTR_1127f9ef0);
  return;
}



/* Entry: 101b4d6c8; end: 101b4d74f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101b4d6c8(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e03d08) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112e03d10);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101b4d750);
  (*pcVar2)();
}



/* Entry: 101b4d750; end: 101b4d837;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101b4d750(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  code *pcVar5;
  
  puVar2 = PTR_PTR_1126afc98;
  func_0x000107c61168();
  func_0x000107c3e26c();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e03d08);
  *(undefined **)(unaff_x20 + _DAT_112e03d08) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e03d10);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112e03d10))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_110449cd8;
  func_0x000107c613fc(&UNK_110449cd8,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x101b4d83c,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 101b4d838; end: 101b4d843;  */

void FUN_101b4d838(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 101b4d844; end: 101b4d8a3; -[_TtC49StartupCompleteSnapAnyoneListenerScopeGraphBridge64SCStartupCompleteSnapAnyoneListenerScopedServicesSaberEntryPoint init] */

void FUN_101b4d844(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("StartupCompleteSnapAnyoneListenerScopeGraphBridge.SCStartupCompleteSnapAnyoneListenerScopedServicesSaberEntryPoint"
                      ,0x72,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101b4d870);
  (*pcVar1)();
}



/* Entry: 101b4d8a4; end: 101b4d8db; -[_TtC49StartupCompleteSnapAnyoneListenerScopeGraphBridge64SCStartupCompleteSnapAnyoneListenerScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b4d8a4(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e03d10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e03d08));
  return;
}



/* Entry: 101b4d8dc; end: 101b4d8df;  */

void FUN_101b4d8dc(void)

{
  return;
}



/* Entry: 101b4d8e0; end: 101b4d8ff;  */

void FUN_101b4d8e0(void)

{
  FUN_101b4d750();
  return;
}



/* Entry: 101b4d900; end: 101b4d91f;  */

void FUN_101b4d900(void)

{
  func_0x000107c61168(&PTR_PTR_1127f9fb8);
  return;
}



/* Entry: 101b4d920; end: 101b4d9ef;  */

undefined8 FUN_101b4d920(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x20;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x000107c61428(0x112e03d40,&uStack_40,0x20,0);
  func_0x000107c61134();
  func_0x000107c61180();
  puVar1 = &uStack_40;
  func_0x000107c614a8(puVar1);
  if (unaff_x20 == (undefined8 *)0x0) {
    uStack_58 = 0;
    uStack_60 = 0;
    lStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    func_0x000107c60234(&uStack_60,unaff_x20);
    func_0x000107c615e8(unaff_x20);
    puVar1 = unaff_x20;
  }
  uStack_38 = uStack_58;
  uStack_40 = uStack_60;
  lStack_28 = lStack_48;
  uStack_30 = uStack_50;
  if (lStack_48 == 0) {
    func_0x00010006e7f4(&uStack_40);
    uStack_68 = 0;
  }
  else {
    FUN_101b4d9f0();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 101b4d9f0; end: 101b4da0f;  */

void FUN_101b4d9f0(void)

{
  func_0x000107c61168(&PTR_PTR_1127fa080);
  return;
}



/* Entry: 101b4da10; end: 101b4da7b;  */

void FUN_101b4da10(void)

{
  func_0x0001000285a8(0x112e03d48,&UNK_10d9d7228);
  func_0x0001000823a8(0x101b4da50,0);
  return;
}



/* Entry: 101b4da7c; end: 101b4dab7; -[_TtC49StartupCompleteSnapAnyoneListenerScopeGraphBridge57StartupCompleteSnapAnyoneListenerScopeGraphBridgeServices init] */

void FUN_101b4da7c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101b4dab8; end: 101b4daeb;  */

void FUN_101b4dab8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101b4daec; end: 101b4daf3;  */

undefined8 FUN_101b4daec(void)

{
  return 0x1b;
}



/* Entry: 101b4daf4; end: 101b4dc6b;  */

void FUN_101b4daf4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110449d20;
  func_0x000107c613fc(&UNK_110449d20,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_101b4dc6c,puVar1);
  return;
}



/* Entry: 101b4dc6c; end: 101b4dc73;  */

void FUN_101b4dc6c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  func_0x000100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x000100083b20(&uStack_38);
  func_0x000107c61428(0x112e03d40,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112e03d40,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_110449db8;
  func_0x000107c613fc(&UNK_110449db8,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x101b4dd20;
  func_0x00010058fa64(0x101b4dd20,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101b4dc74; end: 101b4dccf;  */

void FUN_101b4dc74(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112e03d40,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112e03d40,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 101b4dcd0; end: 101b4dd27;  */

undefined ** FUN_101b4dcd0(void)

{
  return &PTR_DAT_112f329c8;
}



/* Entry: 101b4dd28; end: 101b4dd6f; -[SCStartupCompleteSnapAnyoneListenerScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b4dd28(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e03da0;
  func_0x000107c61428(param_1 + _DAT_112e03da0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101b4dd70; end: 101b4ddc7; -[SCStartupCompleteSnapAnyoneListenerScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b4dd70(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e03da0;
  func_0x000107c61428(param_1 + _DAT_112e03da0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101b4ddc8; end: 101b4de0f; -[SCStartupCompleteSnapAnyoneListenerScopeGraphBridgeSaberEntryPoint startupCompleteSnapAnyoneListenerScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b4ddc8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e03da8;
  func_0x000107c61428(param_1 + _DAT_112e03da8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 101b4de10; end: 101b4de73; -[SCStartupCompleteSnapAnyoneListenerScopeGraphBridgeSaberEntryPoint setStartupCompleteSnapAnyoneListenerScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b4de10(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e03da8;
  func_0x000107c61428(param_1 + _DAT_112e03da8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101b4de74; end: 101b4dfa7;  */

/* WARNING: Possible PIC construction at 0x000101b4df2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b4df48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b4df64: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b4df30) */
/* WARNING: Removing unreachable block (ram,0x000101b4df4c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b4de74(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  func_0x000107c5bc90();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_101b4d6a8();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_101b4d920();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101b4dfa8);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_112e03cd0) = lVar5;
    *(long *)(lVar4 + _DAT_112e03cd8) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 101b4dfa8; end: 101b4dfcf; -[SCStartupCompleteSnapAnyoneListenerScopeGraphBridgeSaberEntryPoint begin] */

void FUN_101b4dfa8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101b4de74();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101b4dfd0; end: 101b4e013; -[SCStartupCompleteSnapAnyoneListenerScopeGraphBridgeSaberEntryPoint end] */

void FUN_101b4dfd0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101b4e014; end: 101b4e1ab;  */

void FUN_101b4e014(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffc0) || (param_3 != -0x7ffffffef10007f0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000040,0x800000010efff810,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "StartupCompleteSnapAnyoneListenerScopeGraphBridge/SCStartupCompleteSnapAnyoneListenerScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x7a,2,0x2f,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101b4e1ac);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c5980c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101b4e1ac; end: 101b4e257; -[SCStartupCompleteSnapAnyoneListenerScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_101b4e1ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_101b4e014(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101b4e258; end: 101b4e2c3; -[SCStartupCompleteSnapAnyoneListenerScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b4e258(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e03da0,0);
  *(undefined8 *)(param_1 + _DAT_112e03da8) = 0;
  *(undefined8 *)(param_1 + _DAT_112e03db0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101b4e2c4; end: 101b4e2f7;  */

void FUN_101b4e2c4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101b4e2f8; end: 101b4e33f; -[SCStartupCompleteSnapAnyoneListenerScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101b4e324: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b4e328) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b4e2f8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e03da0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e03da8));
  return;
}



/* Entry: 101b4e340; end: 101b4e35f;  */

void FUN_101b4e340(void)

{
  func_0x000107c61168(&PTR_PTR_1127fa130);
  return;
}



/* Entry: 101b4e360; end: 101b4e3a7; -[SCSCStartupCompleteSnapAnyoneListenerScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b4e360(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e03de0;
  func_0x000107c61428(param_1 + _DAT_112e03de0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101b4e3a8; end: 101b4e3ff; -[SCSCStartupCompleteSnapAnyoneListenerScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b4e3a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e03de0;
  func_0x000107c61428(param_1 + _DAT_112e03de0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101b4e400; end: 101b4e4d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b4e400(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  plVar7 = &lStack_50;
  lVar3 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar4 = 0;
    FUN_101b4d900();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112e03d08) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101b4e4d8);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112e03d10);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e03de8);
    *(long **)(unaff_x20 + _DAT_112e03de8) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 101b4e4d8; end: 101b4e4ff; -[SCSCStartupCompleteSnapAnyoneListenerScopedServicesSaberEntryPoint begin] */

void FUN_101b4e4d8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101b4e400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101b4e500; end: 101b4e677;  */

/* WARNING: Possible PIC construction at 0x000101b4e568: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b4e600: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b4e56c) */
/* WARNING: Removing unreachable block (ram,0x000101b4e604) */
/* WARNING: Removing unreachable block (ram,0x000101b4e61c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b4e500(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112e03de8);
  if (lVar2 == 0) {
    func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_end_1125c29d0);
  }
  else {
    puVar1 = PTR_PTR_1126afc98;
    func_0x000107c61168(PTR_PTR_1126afc98);
    func_0x000107c61174(lVar2);
    func_0x000107c3e26c(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 101b4e678; end: 101b4e67f;  */

void FUN_101b4e678(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}


