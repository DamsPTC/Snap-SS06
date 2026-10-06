/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10197cfe4; end: 10197cfeb; -[SCSnapcodeSticker supportedFlows] */

undefined8 FUN_10197cfe4(void)

{
  return 0;
}



/* Entry: 10197cfec; end: 10197cffb; -[SCSnapcodeSticker intrinsicSize] */

undefined1  [16] FUN_10197cfec(void)

{
  return *(undefined1 (*) [16])PTR__CGSizeZero_110347620;
}



/* Entry: 10197cffc; end: 10197d1ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_10197cffc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x000107c5d0f0();
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112ddde28);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ddde30);
  puVar1 = PTR_PTR_1126ba898;
  func_0x000107c610f8(PTR_PTR_1126ba898);
  uVar2 = 0;
  func_0x00010197d368(0,0x112dc0158,&PTR_PTR_1126d91a8);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c5fc48(param_7,uVar2);
  uVar2 = 0;
  func_0x00010197d368(0,0x112d74ac8,&PTR_PTR_1126bb2a8);
  func_0x000107c5fc48(param_10,uVar2);
  func_0x000107c48ec0(param_1,param_2,param_3,param_4,param_5,param_6,puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_10);
  return puVar1;
}



/* Entry: 10197d1ac; end: 10197d2cf; -[SCSnapcodeSticker stickerStateWithRelativeSize:center:rotation:scale:tappableElementBounds:isTracking:isTimed:trackingTrajectory:isFlipped:] */

void FUN_10197d1ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x00010197d368(0,0x112dc0158,&PTR_PTR_1126d91a8);
  func_0x000107c5fc54(param_9,uVar1);
  uVar1 = 0;
  func_0x00010197d368(0,0x112d74ac8,&PTR_PTR_1126bb2a8);
  func_0x000107c5fc54(param_12,uVar1);
  func_0x000107c61174(param_7);
  uVar1 = param_9;
  FUN_10197cffc(param_1,param_2,param_3,param_4,param_5,param_6,param_9,param_10,param_11,param_12,
                param_13);
  func_0x000107c61170(param_7);
  func_0x000107c6142c(param_9);
  func_0x000107c6142c(param_12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10197d2d0; end: 10197d32f; -[SCSnapcodeSticker init] */

void FUN_10197d2d0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSnapcodeSticker.SnapcodeSticker",0x21,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10197d2fc);
  (*pcVar1)();
}



/* Entry: 10197d330; end: 10197d3a7; -[SCSnapcodeSticker .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010197d34c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010197d350) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10197d330(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ddde28));
  return;
}



/* Entry: 10197d3a8; end: 10197d3c7;  */

void FUN_10197d3a8(void)

{
  func_0x000107c61168(&PTR_PTR_1127ee740);
  return;
}



/* Entry: 10197d3c8; end: 10197d403; -[SCSnapcodeStickerHelpers init] */

void FUN_10197d3c8(undefined8 param_1)

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



/* Entry: 10197d404; end: 10197d437;  */

void FUN_10197d404(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10197d438; end: 10197d5a7;  */

undefined * FUN_10197d438(void)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long extraout_x8;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  puVar2 = PTR_PTR_1126ba8d8;
  func_0x000107c610f8();
  func_0x000107c46e80();
  if (puVar2 == (undefined *)0x0) {
    lVar3 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
  }
  else {
    lVar3 = 0;
    func_0x00010197cbdc();
  }
  puStack_70 = puVar2;
  lStack_58 = lVar3;
  func_0x000107c61174();
  uVar4 = 0x45444f4350414e53;
  func_0x000107c5fadc(0x45444f4350414e53,0xe800000000000000);
  if (lVar3 == 0) {
    lVar6 = 0;
  }
  else {
    func_0x0001006732c8(&puStack_70,lVar3);
    lVar8 = *(long *)(lVar3 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
    lVar7 = (long)&puStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar8 + 0x10))(lVar7);
    lVar6 = lVar7;
    func_0x000107c605b0(lVar7,lVar3);
    (**(code **)(lVar8 + 8))(lVar7,lVar3);
    func_0x000100183ab8(&puStack_70);
  }
  puVar5 = PTR_PTR_1126baa60;
  func_0x000107c610f8();
  func_0x000107c46fcc();
  func_0x000107c61170(uVar4);
  func_0x000107c615e8(lVar6);
  if (puVar5 != (undefined *)0x0) {
    func_0x000107c61170(puVar2);
    return puVar5;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10197d5a8);
  (*pcVar1)();
}



/* Entry: 10197d5a8; end: 10197d5c7;  */

void FUN_10197d5a8(void)

{
  func_0x000107c61168(&PTR_PTR_1127ee808);
  return;
}



/* Entry: 10197d5c8; end: 10197d62f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10197d5c8(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  lVar1 = _DAT_112ddde88;
  lVar2 = unaff_x20;
  FUN_10197de0c();
  *(long *)(unaff_x20 + lVar1) = lVar2;
  *(undefined8 *)(unaff_x20 + _DAT_112ddde90) = param_1;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10197d630; end: 10197d6a3; -[SCStoryInviteSticker initWithItemInstance:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10197d630(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  lVar1 = _DAT_112ddde88;
  func_0x000107c61174();
  uVar3 = param_3;
  FUN_10197de0c();
  *(undefined8 *)(param_1 + lVar1) = uVar3;
  *(undefined8 *)(param_1 + _DAT_112ddde90) = param_3;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10197d6a4; end: 10197d713; -[SCStoryInviteSticker initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10197d6a4(long param_1)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  
  lVar1 = _DAT_112ddde88;
  lVar3 = param_1;
  FUN_10197de0c();
  *(long *)(param_1 + lVar1) = lVar3;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SCStoryInviteSticker/StoryInviteSticker.swift",0x2d,2,0x15,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10197d714);
  (*pcVar2)();
}



/* Entry: 10197d714; end: 10197d7f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10197d714(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  uint uVar4;
  long unaff_x20;
  undefined8 uVar5;
  long lStack_58;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  lVar1 = unaff_x20;
  func_0x000107c614f0();
  func_0x000100672b50(param_1,auStack_50);
  if (lStack_38 == 0) {
    func_0x00010006e7f4(auStack_50);
  }
  else {
    plVar2 = &lStack_58;
    func_0x000107c6147c(plVar2,auStack_50,PTR___sypN_11034f1a8 + 8,lVar1,6);
    if (((ulong)plVar2 & 1) != 0) {
      func_0x00010197dd3c(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112ddde90);
      uVar3 = *(undefined8 *)(lStack_58 + _DAT_112ddde90);
      func_0x000107c61174(uVar3);
      func_0x000107c60118(uVar5,uVar3);
      uVar4 = (uint)uVar5;
      func_0x000107c61170(lStack_58);
      func_0x000107c61170(uVar3);
      goto LAB_10197d7dc;
    }
  }
  uVar4 = 0;
LAB_10197d7dc:
  return uVar4 & 1;
}



/* Entry: 10197d7f4; end: 10197d873; -[SCStoryInviteSticker isEqual:] */

uint FUN_10197d7f4(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_40);
    func_0x000107c615e8(param_3);
  }
  FUN_10197d714(&uStack_40);
  func_0x000107c61170(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10197d874; end: 10197d89f; -[SCStoryInviteSticker hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_10197d874(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + _DAT_112ddde88);
  func_0x000107c44c3c(uVar1);
  return uVar1 ^ 0x5504762;
}



/* Entry: 10197d8a0; end: 10197d8a7; -[SCStoryInviteSticker infoType] */

undefined8 FUN_10197d8a0(void)

{
  return 10;
}



/* Entry: 10197d8a8; end: 10197d91b; -[SCStoryInviteSticker stickerId] */

void FUN_10197d8a8(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x800000010efc42c0;
  lVar1 = -0x2fffffffffffffe4;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010efc42c0);
  lVar2 = lVar1;
  func_0x000108ebb990();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 == 0) {
    lVar2 = 0;
    func_0x000107c5faec(0);
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10197d91c; end: 10197d997; -[SCStoryInviteSticker shortLoggingName] */

void FUN_10197d91c(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = 0x5f45544156495250;
  uVar3 = 0xed000059524f5453;
  func_0x000107c5fadc(0x5f45544156495250,0xed000059524f5453);
  lVar2 = lVar1;
  func_0x000108ebb9cc();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 == 0) {
    lVar2 = 0;
    func_0x000107c5faec(0);
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10197d998; end: 10197d9a7; -[SCStoryInviteSticker toCTPItem] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10197d998(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ddde88));
  return;
}



/* Entry: 10197d9a8; end: 10197d9b7; -[SCStoryInviteSticker toCTItemInstance] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10197d9a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ddde90));
  return;
}



/* Entry: 10197d9b8; end: 10197d9bf; -[SCStoryInviteSticker supportedFlows] */

undefined8 FUN_10197d9b8(void)

{
  return 0;
}



/* Entry: 10197d9c0; end: 10197d9cf; -[SCStoryInviteSticker intrinsicSize] */

undefined1  [16] FUN_10197d9c0(void)

{
  return *(undefined1 (*) [16])PTR__CGSizeZero_110347620;
}



/* Entry: 10197d9d0; end: 10197db7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_10197d9d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x000107c5d0f0();
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112ddde88);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ddde90);
  puVar1 = PTR_PTR_1126ba898;
  func_0x000107c610f8(PTR_PTR_1126ba898);
  uVar2 = 0;
  func_0x00010197dd3c(0,0x112dc0158,&PTR_PTR_1126d91a8);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c5fc48(param_7,uVar2);
  uVar2 = 0;
  func_0x00010197dd3c(0,0x112d74ac8,&PTR_PTR_1126bb2a8);
  func_0x000107c5fc48(param_10,uVar2);
  func_0x000107c48ec0(param_1,param_2,param_3,param_4,param_5,param_6,puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_10);
  return puVar1;
}



/* Entry: 10197db80; end: 10197dca3; -[SCStoryInviteSticker stickerStateWithRelativeSize:center:rotation:scale:tappableElementBounds:isTracking:isTimed:trackingTrajectory:isFlipped:] */

void FUN_10197db80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x00010197dd3c(0,0x112dc0158,&PTR_PTR_1126d91a8);
  func_0x000107c5fc54(param_9,uVar1);
  uVar1 = 0;
  func_0x00010197dd3c(0,0x112d74ac8,&PTR_PTR_1126bb2a8);
  func_0x000107c5fc54(param_12,uVar1);
  func_0x000107c61174(param_7);
  uVar1 = param_9;
  FUN_10197d9d0(param_1,param_2,param_3,param_4,param_5,param_6,param_9,param_10,param_11,param_12,
                param_13);
  func_0x000107c61170(param_7);
  func_0x000107c6142c(param_9);
  func_0x000107c6142c(param_12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10197dca4; end: 10197dd03; -[SCStoryInviteSticker init] */

void FUN_10197dca4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCStoryInviteSticker.StoryInviteSticker",0x27,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10197dcd0);
  (*pcVar1)();
}



/* Entry: 10197dd04; end: 10197dd7b; -[SCStoryInviteSticker .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010197dd20: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010197dd24) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10197dd04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ddde88));
  return;
}



/* Entry: 10197dd7c; end: 10197dd9b;  */

void FUN_10197dd7c(void)

{
  func_0x000107c61168(&PTR_PTR_1127ee8b8);
  return;
}



/* Entry: 10197dd9c; end: 10197ddd7; -[SCStoryInviteStickerHelpers init] */

void FUN_10197dd9c(undefined8 param_1)

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



/* Entry: 10197ddd8; end: 10197de0b;  */

void FUN_10197ddd8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10197de0c; end: 10197df7f;  */

undefined * FUN_10197de0c(void)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long extraout_x8;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  puVar2 = PTR_PTR_1126ba8d8;
  func_0x000107c610f8();
  func_0x000107c46e80();
  if (puVar2 == (undefined *)0x0) {
    lVar3 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
  }
  else {
    lVar3 = 0;
    func_0x00010197cbdc();
  }
  puStack_70 = puVar2;
  lStack_58 = lVar3;
  func_0x000107c61174();
  uVar4 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010efc42c0);
  if (lVar3 == 0) {
    lVar6 = 0;
  }
  else {
    func_0x0001006732c8(&puStack_70,lVar3);
    lVar8 = *(long *)(lVar3 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
    lVar7 = (long)&puStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar8 + 0x10))(lVar7);
    lVar6 = lVar7;
    func_0x000107c605b0(lVar7,lVar3);
    (**(code **)(lVar8 + 8))(lVar7,lVar3);
    func_0x000100183ab8(&puStack_70);
  }
  puVar5 = PTR_PTR_1126baa60;
  func_0x000107c610f8();
  func_0x000107c46fcc();
  func_0x000107c61170(uVar4);
  func_0x000107c615e8(lVar6);
  if (puVar5 != (undefined *)0x0) {
    func_0x000107c61170(puVar2);
    return puVar5;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10197df80);
  (*pcVar1)();
}



/* Entry: 10197df80; end: 10197df9f;  */

void FUN_10197df80(void)

{
  func_0x000107c61168(&PTR_PTR_1127ee980);
  return;
}



/* Entry: 10197dfa0; end: 10197e007;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10197dfa0(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  lVar1 = _DAT_112dddee8;
  lVar2 = unaff_x20;
  FUN_10197e7b4();
  *(long *)(unaff_x20 + lVar1) = lVar2;
  *(undefined8 *)(unaff_x20 + _DAT_112dddef0) = param_1;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10197e008; end: 10197e07b; -[SCVenueSticker initWithItemInstance:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10197e008(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  lVar1 = _DAT_112dddee8;
  func_0x000107c61174();
  uVar3 = param_3;
  FUN_10197e7b4();
  *(undefined8 *)(param_1 + lVar1) = uVar3;
  *(undefined8 *)(param_1 + _DAT_112dddef0) = param_3;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10197e07c; end: 10197e0eb; -[SCVenueSticker initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10197e07c(long param_1)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  
  lVar1 = _DAT_112dddee8;
  lVar3 = param_1;
  FUN_10197e7b4();
  *(long *)(param_1 + lVar1) = lVar3;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SCVenueSticker/VenueSticker.swift",0x21,2,0x14,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10197e0ec);
  (*pcVar2)();
}



/* Entry: 10197e0ec; end: 10197e1e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10197e0ec(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lStack_68;
  undefined1 auStack_60 [24];
  long lStack_48;
  
  lVar1 = unaff_x20;
  func_0x000107c614f0();
  func_0x000100672b50(param_1,auStack_60);
  if (lStack_48 == 0) {
    func_0x00010006e7f4(auStack_60);
  }
  else {
    plVar2 = &lStack_68;
    func_0x000107c6147c(plVar2,auStack_60,PTR___sypN_11034f1a8 + 8,lVar1,6);
    if (((ulong)plVar2 & 1) != 0) {
      func_0x00010197e6e4(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
      uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112dddef0);
      uVar6 = *(undefined8 *)(lStack_68 + _DAT_112dddef0);
      func_0x000107c61174(uVar3);
      func_0x000107c61174(uVar6);
      uVar4 = uVar3;
      func_0x000107c60118(uVar3,uVar6);
      uVar5 = (uint)uVar4;
      func_0x000107c61170(lStack_68);
      func_0x000107c61170(uVar3);
      func_0x000107c61170(uVar6);
      goto LAB_10197e1cc;
    }
  }
  uVar5 = 0;
LAB_10197e1cc:
  return uVar5 & 1;
}



/* Entry: 10197e1e8; end: 10197e267; -[SCVenueSticker isEqual:] */

uint FUN_10197e1e8(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_40);
    func_0x000107c615e8(param_3);
  }
  FUN_10197e0ec(&uStack_40);
  func_0x000107c61170(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10197e268; end: 10197e277; -[SCVenueSticker hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10197e268(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112dddee8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 10197e278; end: 10197e27f; -[SCVenueSticker infoType] */

undefined8 FUN_10197e278(void)

{
  return 5;
}



/* Entry: 10197e280; end: 10197e28b; -[SCVenueSticker stickerId] */

void FUN_10197e280(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = 0x45554e4556;
  uVar3 = 0xe500000000000000;
  func_0x000107c5fadc(0x45554e4556,0xe500000000000000);
  lVar2 = lVar1;
  (*(code *)&SUB_108ebb990)();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 == 0) {
    lVar2 = 0;
    func_0x000107c5faec(0);
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10197e28c; end: 10197e297; -[SCVenueSticker shortLoggingName] */

void FUN_10197e28c(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = 0x45554e4556;
  uVar3 = 0xe500000000000000;
  func_0x000107c5fadc(0x45554e4556,0xe500000000000000);
  lVar2 = lVar1;
  (*(code *)&SUB_108ebb9cc)();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 == 0) {
    lVar2 = 0;
    func_0x000107c5faec(0);
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10197e298; end: 10197e30b;  */

void FUN_10197e298(undefined8 param_1,undefined8 param_2,code *param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = 0x45554e4556;
  uVar3 = 0xe500000000000000;
  func_0x000107c5fadc(0x45554e4556,0xe500000000000000);
  lVar2 = lVar1;
  (*param_3)();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 == 0) {
    lVar2 = 0;
    func_0x000107c5faec(0);
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10197e30c; end: 10197e31b; -[SCVenueSticker toCTPItem] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10197e30c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112dddee8));
  return;
}



/* Entry: 10197e31c; end: 10197e32b; -[SCVenueSticker toCTItemInstance] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10197e31c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112dddef0));
  return;
}



/* Entry: 10197e32c; end: 10197e35f; -[SCVenueSticker updateItemInstance:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10197e32c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112dddef0);
  *(undefined8 *)(param_1 + _DAT_112dddef0) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10197e360; end: 10197e367; -[SCVenueSticker supportedFlows] */

undefined8 FUN_10197e360(void)

{
  return 0;
}



/* Entry: 10197e368; end: 10197e377; -[SCVenueSticker intrinsicSize] */

undefined1  [16] FUN_10197e368(void)

{
  return *(undefined1 (*) [16])PTR__CGSizeZero_110347620;
}



/* Entry: 10197e378; end: 10197e527;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_10197e378(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x000107c5d0f0();
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112dddee8);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112dddef0);
  puVar1 = PTR_PTR_1126ba898;
  func_0x000107c610f8(PTR_PTR_1126ba898);
  uVar2 = 0;
  func_0x00010197e6e4(0,0x112dc0158,&PTR_PTR_1126d91a8);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c5fc48(param_7,uVar2);
  uVar2 = 0;
  func_0x00010197e6e4(0,0x112d74ac8,&PTR_PTR_1126bb2a8);
  func_0x000107c5fc48(param_10,uVar2);
  func_0x000107c48ec0(param_1,param_2,param_3,param_4,param_5,param_6,puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_10);
  return puVar1;
}



/* Entry: 10197e528; end: 10197e64b; -[SCVenueSticker stickerStateWithRelativeSize:center:rotation:scale:tappableElementBounds:isTracking:isTimed:trackingTrajectory:isFlipped:] */

void FUN_10197e528(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x00010197e6e4(0,0x112dc0158,&PTR_PTR_1126d91a8);
  func_0x000107c5fc54(param_9,uVar1);
  uVar1 = 0;
  func_0x00010197e6e4(0,0x112d74ac8,&PTR_PTR_1126bb2a8);
  func_0x000107c5fc54(param_12,uVar1);
  func_0x000107c61174(param_7);
  uVar1 = param_9;
  FUN_10197e378(param_1,param_2,param_3,param_4,param_5,param_6,param_9,param_10,param_11,param_12,
                param_13);
  func_0x000107c61170(param_7);
  func_0x000107c6142c(param_9);
  func_0x000107c6142c(param_12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10197e64c; end: 10197e6ab; -[SCVenueSticker init] */

void FUN_10197e64c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCVenueSticker.VenueSticker",0x1b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10197e678);
  (*pcVar1)();
}



/* Entry: 10197e6ac; end: 10197e723; -[SCVenueSticker .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010197e6c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010197e6cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10197e6ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112dddee8));
  return;
}



/* Entry: 10197e724; end: 10197e743;  */

void FUN_10197e724(void)

{
  func_0x000107c61168(&PTR_PTR_1127eea30);
  return;
}



/* Entry: 10197e744; end: 10197e77f; -[SCVenueStickerHelpers init] */

void FUN_10197e744(undefined8 param_1)

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



/* Entry: 10197e780; end: 10197e7b3;  */

void FUN_10197e780(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10197e7b4; end: 10197e91f;  */

undefined * FUN_10197e7b4(void)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long extraout_x8;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  puVar2 = PTR_PTR_1126ba8d8;
  func_0x000107c610f8();
  func_0x000107c46e80();
  if (puVar2 == (undefined *)0x0) {
    lVar3 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
  }
  else {
    lVar3 = 0;
    func_0x00010197cbdc();
  }
  puStack_70 = puVar2;
  lStack_58 = lVar3;
  func_0x000107c61174();
  uVar4 = 0x45554e4556;
  func_0x000107c5fadc(0x45554e4556,0xe500000000000000);
  if (lVar3 == 0) {
    lVar6 = 0;
  }
  else {
    func_0x0001006732c8(&puStack_70,lVar3);
    lVar8 = *(long *)(lVar3 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
    lVar7 = (long)&puStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar8 + 0x10))(lVar7);
    lVar6 = lVar7;
    func_0x000107c605b0(lVar7,lVar3);
    (**(code **)(lVar8 + 8))(lVar7,lVar3);
    func_0x000100183ab8(&puStack_70);
  }
  puVar5 = PTR_PTR_1126baa60;
  func_0x000107c610f8();
  func_0x000107c46fcc();
  func_0x000107c61170(uVar4);
  func_0x000107c615e8(lVar6);
  if (puVar5 != (undefined *)0x0) {
    func_0x000107c61170(puVar2);
    return puVar5;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10197e920);
  (*pcVar1)();
}



/* Entry: 10197e920; end: 10197e93f;  */

void FUN_10197e920(void)

{
  func_0x000107c61168(&PTR_PTR_1127eeaf8);
  return;
}



/* Entry: 10197e940; end: 10197e9a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10197e940(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112dddf48) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112dddf50) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10197e9a4; end: 10197ea1b; -[_TtC24SnapMeStickerInjectorAPI29SnapMeStickerInjectorServices initWithStickerInjector:config:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10197e9a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112dddf48) = param_3;
  *(undefined8 *)(param_1 + _DAT_112dddf50) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61154(&lStack_40,puVar1);
  return;
}



/* Entry: 10197ea1c; end: 10197ea4f;  */

void FUN_10197ea1c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10197ea50; end: 10197ea87; -[_TtC24SnapMeStickerInjectorAPI29SnapMeStickerInjectorServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010197ea6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010197ea70) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10197ea50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112dddf48));
  return;
}



/* Entry: 10197ea88; end: 10197eaf7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10197ea88(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  lVar1 = _DAT_112dddf80;
  lVar2 = unaff_x20;
  FUN_10197f7b4();
  *(long *)(unaff_x20 + lVar1) = lVar2;
  func_0x00010197f924();
  *(undefined8 *)(unaff_x20 + _DAT_112dddf88) = param_1;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10197eaf8; end: 10197eb67; -[SCUVIndexSticker initWithUvIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10197eaf8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  lVar1 = _DAT_112dddf80;
  lVar3 = lVar2;
  FUN_10197f7b4();
  *(long *)(param_1 + lVar1) = lVar3;
  func_0x00010197f924();
  *(undefined8 *)(param_1 + _DAT_112dddf88) = param_3;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10197eb68; end: 10197ebd7; -[SCUVIndexSticker initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10197eb68(long param_1)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  
  lVar1 = _DAT_112dddf80;
  lVar3 = param_1;
  FUN_10197f7b4();
  *(long *)(param_1 + lVar1) = lVar3;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SCUVIndexSticker/UVIndexSticker.swift",0x25,2,0x14,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10197ebd8);
  (*pcVar2)();
}



/* Entry: 10197ebd8; end: 10197ecb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10197ebd8(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  uint uVar4;
  long unaff_x20;
  undefined8 uVar5;
  long lStack_58;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  lVar1 = unaff_x20;
  func_0x000107c614f0();
  func_0x000100672b50(param_1,auStack_50);
  if (lStack_38 == 0) {
    func_0x00010006e7f4(auStack_50);
  }
  else {
    plVar2 = &lStack_58;
    func_0x000107c6147c(plVar2,auStack_50,PTR___sypN_11034f1a8 + 8,lVar1,6);
    if (((ulong)plVar2 & 1) != 0) {
      func_0x00010197f1a0(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112dddf88);
      uVar3 = *(undefined8 *)(lStack_58 + _DAT_112dddf88);
      func_0x000107c61174(uVar3);
      func_0x000107c60118(uVar5,uVar3);
      uVar4 = (uint)uVar5;
      func_0x000107c61170(lStack_58);
      func_0x000107c61170(uVar3);
      goto LAB_10197eca0;
    }
  }
  uVar4 = 0;
LAB_10197eca0:
  return uVar4 & 1;
}



/* Entry: 10197ecb8; end: 10197ed37; -[SCUVIndexSticker isEqual:] */

uint FUN_10197ecb8(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_40);
    func_0x000107c615e8(param_3);
  }
  FUN_10197ebd8(&uStack_40);
  func_0x000107c61170(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10197ed38; end: 10197ed63; -[SCUVIndexSticker hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_10197ed38(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + _DAT_112dddf80);
  func_0x000107c44c3c(uVar1);
  return uVar1 ^ 0x5504762;
}



/* Entry: 10197ed64; end: 10197ed6b; -[SCUVIndexSticker infoType] */

undefined8 FUN_10197ed64(void)

{
  return 0x14;
}



/* Entry: 10197ed6c; end: 10197ed77; -[SCUVIndexSticker stickerId] */

void FUN_10197ed6c(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = 0x5845444e495f5655;
  uVar3 = 0xe800000000000000;
  func_0x000107c5fadc(0x5845444e495f5655,0xe800000000000000);
  lVar2 = lVar1;
  (*(code *)&SUB_108ebb990)();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 == 0) {
    lVar2 = 0;
    func_0x000107c5faec(0);
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10197ed78; end: 10197ed83; -[SCUVIndexSticker shortLoggingName] */

void FUN_10197ed78(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = 0x5845444e495f5655;
  uVar3 = 0xe800000000000000;
  func_0x000107c5fadc(0x5845444e495f5655,0xe800000000000000);
  lVar2 = lVar1;
  (*(code *)&SUB_108ebb9cc)();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 == 0) {
    lVar2 = 0;
    func_0x000107c5faec(0);
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10197ed84; end: 10197edfb;  */

void FUN_10197ed84(undefined8 param_1,undefined8 param_2,code *param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = 0x5845444e495f5655;
  uVar3 = 0xe800000000000000;
  func_0x000107c5fadc(0x5845444e495f5655,0xe800000000000000);
  lVar2 = lVar1;
  (*param_3)();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 == 0) {
    lVar2 = 0;
    func_0x000107c5faec(0);
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10197edfc; end: 10197ee0b; -[SCUVIndexSticker toCTPItem] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10197edfc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112dddf80));
  return;
}



/* Entry: 10197ee0c; end: 10197ee1b; -[SCUVIndexSticker toCTItemInstance] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10197ee0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112dddf88));
  return;
}



/* Entry: 10197ee1c; end: 10197ee23; -[SCUVIndexSticker supportedFlows] */

undefined8 FUN_10197ee1c(void)

{
  return 0;
}



/* Entry: 10197ee24; end: 10197ee33; -[SCUVIndexSticker intrinsicSize] */

undefined1  [16] FUN_10197ee24(void)

{
  return *(undefined1 (*) [16])PTR__CGSizeZero_110347620;
}



/* Entry: 10197ee34; end: 10197efe3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_10197ee34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x000107c5d0f0();
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112dddf80);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112dddf88);
  puVar1 = PTR_PTR_1126ba898;
  func_0x000107c610f8(PTR_PTR_1126ba898);
  uVar2 = 0;
  func_0x00010197f1a0(0,0x112dc0158,&PTR_PTR_1126d91a8);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c5fc48(param_7,uVar2);
  uVar2 = 0;
  func_0x00010197f1a0(0,0x112d74ac8,&PTR_PTR_1126bb2a8);
  func_0x000107c5fc48(param_10,uVar2);
  func_0x000107c48ec0(param_1,param_2,param_3,param_4,param_5,param_6,puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_10);
  return puVar1;
}



/* Entry: 10197efe4; end: 10197f107; -[SCUVIndexSticker stickerStateWithRelativeSize:center:rotation:scale:tappableElementBounds:isTracking:isTimed:trackingTrajectory:isFlipped:] */

void FUN_10197efe4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x00010197f1a0(0,0x112dc0158,&PTR_PTR_1126d91a8);
  func_0x000107c5fc54(param_9,uVar1);
  uVar1 = 0;
  func_0x00010197f1a0(0,0x112d74ac8,&PTR_PTR_1126bb2a8);
  func_0x000107c5fc54(param_12,uVar1);
  func_0x000107c61174(param_7);
  uVar1 = param_9;
  FUN_10197ee34(param_1,param_2,param_3,param_4,param_5,param_6,param_9,param_10,param_11,param_12,
                param_13);
  func_0x000107c61170(param_7);
  func_0x000107c6142c(param_9);
  func_0x000107c6142c(param_12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10197f108; end: 10197f167; -[SCUVIndexSticker init] */

void FUN_10197f108(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCUVIndexSticker.UVIndexSticker",0x1f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10197f134);
  (*pcVar1)();
}



/* Entry: 10197f168; end: 10197f1df; -[SCUVIndexSticker .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010197f184: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010197f188) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10197f168(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112dddf80));
  return;
}



/* Entry: 10197f1e0; end: 10197f1ff;  */

void FUN_10197f1e0(void)

{
  func_0x000107c61168(&PTR_PTR_1127eec70);
  return;
}



/* Entry: 10197f200; end: 10197f217;  */

void FUN_10197f200(void)

{
  uRam00000001138038f8 = 0x4062c00000000000;
  uRam00000001138038f0 = 0x4062c00000000000;
  return;
}



/* Entry: 10197f218; end: 10197f337;  */

void FUN_10197f218(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [24];
  
  puVar1 = &UNK_11041d998;
  func_0x000107c613fc(&UNK_11041d998,0x18,7);
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618(param_3);
  func_0x000107c61614(puVar1 + 0x10,param_3);
  func_0x000107c61170(param_3);
  puVar2 = &UNK_11041da88;
  func_0x000107c613fc(&UNK_11041da88,0x28,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  puVar1 = &UNK_11041dab0;
  func_0x000107c613fc(&UNK_11041dab0,0x20,7);
  *(undefined **)(puVar1 + 0x10) = &UNK_10d9a43c0;
  *(undefined **)(puVar1 + 0x18) = puVar2;
  func_0x000107c6157c(param_2);
  uVar3 = 0x112d518a8;
  func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
  uVar4 = 0xce;
  func_0x0001001ca524(0xce,3,0x2c,4,0,0,&UNK_10d9a43d0,puVar1,uVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar4);
  return;
}



/* Entry: 10197f338; end: 10197f3a7;  */

void FUN_10197f338(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10197f3a8,uVar1,uVar2);
  return;
}



/* Entry: 10197f3a8; end: 10197f44b;  */

void FUN_10197f3a8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong *puVar3;
  long lVar4;
  long unaff_x22;
  code *pcVar5;
  
  lVar4 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x40));
  func_0x000107c61428(lVar4 + 0x10,unaff_x22 + 0x10,0,0);
  puVar3 = (ulong *)(lVar4 + 0x10);
  func_0x000107c61618();
  if (puVar3 != (ulong *)0x0) {
    uVar1 = *(undefined8 *)(unaff_x22 + 0x30);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x38);
    pcVar5 = *(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar3) + 0xd0);
    func_0x000107c6157c(uVar2);
    (*pcVar5)(uVar1,uVar2);
    func_0x000107c61170(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010197f448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(puVar3 == (ulong *)0x0);
  return;
}



/* Entry: 10197f44c; end: 10197f48f;  */

void FUN_10197f44c(undefined1 param_1)

{
  undefined1 *puVar1;
  long *unaff_x22;
  long lVar2;
  
  puVar1 = *(undefined1 **)(*unaff_x22 + 0x10);
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x18));
  *puVar1 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010197f48c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Entry: 10197f490; end: 10197f573;  */

/* WARNING: Possible PIC construction at 0x00010197f554: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010197f558) */

void FUN_10197f490(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = &UNK_11041da38;
  func_0x000107c613fc(&UNK_11041da38,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  puVar2 = &UNK_11041da60;
  func_0x000107c613fc(&UNK_11041da60,0x20,7);
  *(undefined **)(puVar2 + 0x10) = &UNK_10d9a43a0;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c6157c(param_4);
  func_0x0001001ca524(0xce,3,0x2c,4,0,0,&UNK_10d9a43b0,puVar2,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar2);
  return;
}



/* Entry: 10197f574; end: 10197f5e3;  */

void FUN_10197f574(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x30) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10197f5e4,uVar1,uVar2);
  return;
}



/* Entry: 10197f5e4; end: 10197f677;  */

void FUN_10197f5e4(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  ulong *puVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x18);
  pcVar2 = *(code **)(unaff_x22 + 0x20);
  puVar4 = *(ulong **)(unaff_x22 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x30));
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar4) + 0x130))(uVar1);
  puVar3 = PTR_PTR_1126af5d0;
  func_0x000107c61168(PTR_PTR_1126af5d0);
  func_0x000107c5c3c8();
  func_0x000107c61180();
  (*pcVar2)();
  func_0x000107c61170(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010197f674. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10197f678; end: 10197f6b3;  */

void FUN_10197f678(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010197f6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10197f6b4; end: 10197f743; +[SCUVIndexStickerHelpers uvIndexStickerViewFromItemInstance:runtime:completion:] */

void FUN_10197f6b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  func_0x000107c60bc4();
  puVar1 = &UNK_11041d970;
  func_0x000107c613fc(&UNK_11041d970,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_5;
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_4);
  FUN_10197fa78(param_3,param_4,FUN_10197fd64,puVar1);
  func_0x000107c61170(param_3);
  func_0x000107c615e8(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 10197f744; end: 10197f77f; -[SCUVIndexStickerHelpers init] */

void FUN_10197f744(undefined8 param_1)

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



/* Entry: 10197f780; end: 10197f7b3;  */

void FUN_10197f780(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10197f7b4; end: 10197fa77;  */

undefined * FUN_10197f7b4(void)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long extraout_x8;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  puVar2 = PTR_PTR_1126ba8d8;
  func_0x000107c610f8();
  func_0x000107c46e80();
  if (puVar2 == (undefined *)0x0) {
    lVar3 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
  }
  else {
    lVar3 = 0;
    func_0x00010197cbdc();
  }
  puStack_70 = puVar2;
  lStack_58 = lVar3;
  func_0x000107c61174();
  uVar4 = 0x5845444e495f5655;
  func_0x000107c5fadc(0x5845444e495f5655,0xe800000000000000);
  if (lVar3 == 0) {
    lVar6 = 0;
  }
  else {
    func_0x0001006732c8(&puStack_70,lVar3);
    lVar8 = *(long *)(lVar3 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
    lVar7 = (long)&puStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar8 + 0x10))(lVar7);
    lVar6 = lVar7;
    func_0x000107c605b0(lVar7,lVar3);
    (**(code **)(lVar8 + 8))(lVar7,lVar3);
    func_0x000100183ab8(&puStack_70);
  }
  puVar5 = PTR_PTR_1126baa60;
  func_0x000107c610f8();
  func_0x000107c46fcc();
  func_0x000107c61170(uVar4);
  func_0x000107c615e8(lVar6);
  if (puVar5 != (undefined *)0x0) {
    func_0x000107c61170(puVar2);
    return puVar5;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10197f924);
  (*pcVar1)();
}



/* Entry: 10197fa78; end: 10197fd43;  */

void FUN_10197fa78(ulong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  ppuVar9 = &puStack_90;
  ppuVar11 = &puStack_90;
  FUN_10197f7b4();
  func_0x000103ede4c0(0);
  func_0x000107c610f8();
  func_0x000107c61174();
  puVar3 = param_1;
  func_0x000103ede3d8();
  if (lRam0000000112dddfe0 != -1) {
    func_0x000107c61568(0x112dddfe0,FUN_10197f200);
  }
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar3) + 0xa0))
            (uRam00000001138038f0,uRam00000001138038f8);
  func_0x000107c4ce20();
  func_0x000107c61180();
  if (param_1 == (ulong *)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10197fd3c);
    (*pcVar2)();
  }
  puVar4 = param_1;
  func_0x000107c453bc();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  if (puVar4 == (ulong *)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10197fd40);
    (*pcVar2)();
  }
  puVar5 = puVar4;
  func_0x000107c5db74();
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  if (puVar5 != (ulong *)0x0) {
    puVar4 = puVar5;
    func_0x000107c5db68(puVar5);
    func_0x000107c61170(puVar5);
    puVar6 = PTR_PTR_1126a8120;
    func_0x000107c610f8(PTR_PTR_1126a8120);
    func_0x000107c4943c((double)(int)puVar4);
    puVar7 = PTR_PTR_1126a8128;
    func_0x000107c610f8(PTR_PTR_1126a8128);
    func_0x000107c453e4();
    puVar8 = &UNK_11041d998;
    func_0x000107c613fc(&UNK_11041d998,0x18,7);
    func_0x000107c61614(puVar8 + 0x10,puVar3);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x10197fd74;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    pcStack_80 = FUN_1016b32e4;
    puStack_78 = &UNK_11041d9b0;
    puStack_68 = puVar8;
    func_0x000107c60bc4(&puStack_90);
    func_0x000107c61574(puStack_68);
    func_0x000107c579b8(puVar7);
    func_0x000107c60bd0(ppuVar9);
    puVar10 = PTR_PTR_1126a8130;
    func_0x000107c610f8();
    func_0x000107c49520();
    puVar8 = &UNK_11041d9e8;
    func_0x000107c613fc(&UNK_11041d9e8,0x30,7);
    *(ulong **)(puVar8 + 0x10) = puVar3;
    *(undefined **)(puVar8 + 0x18) = puVar10;
    *(undefined8 *)(puVar8 + 0x20) = param_3;
    *(undefined8 *)(puVar8 + 0x28) = param_4;
    uStack_70 = 0x10197fd98;
    puStack_90 = puVar1;
    uStack_88 = 0x42000000;
    pcStack_80 = (code *)&UNK_1000f6b44;
    puStack_78 = &UNK_11041da00;
    puStack_68 = puVar8;
    func_0x000107c60bc4(&puStack_90);
    puVar8 = puStack_68;
    func_0x000107c61174(puVar3);
    func_0x000107c61174(puVar10);
    func_0x000107c6157c(param_4);
    func_0x000107c61574(puVar8);
    func_0x000107c5e078(puVar10);
    func_0x000107c60bd0(ppuVar11);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar10);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10197fd44);
  (*pcVar2)();
}



/* Entry: 10197fd44; end: 10197fd63;  */

void FUN_10197fd44(void)

{
  func_0x000107c61168(&PTR_PTR_1127eed38);
  return;
}



/* Entry: 10197fd64; end: 10197fda3;  */

void FUN_10197fd64(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010197fd70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Entry: 10197fda4; end: 10197fdd7;  */

void FUN_10197fda4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10197fdd8; end: 10197fe3b;  */

void FUN_10197fdd8(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar3 = *(long *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_10197fe3c;
  plVar5[4] = lVar3;
  plVar5[5] = lVar2;
  plVar5[2] = lVar4;
  plVar5[3] = lVar1;
  lVar3 = 0;
  func_0x000107c5fcec();
  lVar4 = lVar3;
  func_0x000107c5fce8();
  plVar5[6] = lVar4;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar3,lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10197f5e4,lVar3,lVar4);
  return;
}



/* Entry: 10197fe3c; end: 10197fe77;  */

void FUN_10197fe3c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010197fe74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10197fe78; end: 10197fee7;  */

void FUN_10197fe78(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x101980004;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}


