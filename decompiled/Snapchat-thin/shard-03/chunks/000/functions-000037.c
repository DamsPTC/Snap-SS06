/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1023da7f0; end: 1023da853;  */

void FUN_1023da7f0(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1023da854; end: 1023da8d7;  */

void FUN_1023da854(undefined8 param_1)

{
  if (lRam0000000112e93e88 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e6d3f54);
  return;
}



/* Entry: 1023da8d8; end: 1023da8fb;  */

void FUN_1023da8d8(undefined8 *param_1,undefined8 param_2)

{
  FUN_1023da5a0();
  *param_1 = param_2;
  return;
}



/* Entry: 1023da8fc; end: 1023da98b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023da8fc(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e93f50);
  *puVar1 = 0x454d484341545441;
  puVar1[1] = 0xea0000000000544e;
  lVar2 = _DAT_112e93f58;
  lVar3 = unaff_x20;
  FUN_1023db18c();
  *(long *)(unaff_x20 + lVar2) = lVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112e93f60) = param_1;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1023da98c; end: 1023daa27; -[SCAttachmentSticker initWithItemInstance:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023da98c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lStack_40;
  long lStack_38;
  
  lVar3 = param_1;
  func_0x000107c614f0();
  puVar1 = (undefined8 *)(param_1 + _DAT_112e93f50);
  *puVar1 = 0x454d484341545441;
  puVar1[1] = 0xea0000000000544e;
  lVar2 = _DAT_112e93f58;
  func_0x000107c61174();
  uVar4 = param_3;
  FUN_1023db18c();
  *(undefined8 *)(param_1 + lVar2) = uVar4;
  *(undefined8 *)(param_1 + _DAT_112e93f60) = param_3;
  lStack_40 = param_1;
  lStack_38 = lVar3;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1023daa28; end: 1023daabf; -[SCAttachmentSticker initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023daa28(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112e93f50);
  *puVar1 = 0x454d484341545441;
  puVar1[1] = 0xea0000000000544e;
  lVar2 = _DAT_112e93f58;
  lVar4 = param_1;
  FUN_1023db18c();
  *(long *)(param_1 + lVar2) = lVar4;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SCAttachmentSticker/AttachmentSticker.swift",0x2b,2,0x16,0);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1023daac0);
  (*pcVar3)();
}



/* Entry: 1023daac0; end: 1023dab9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1023daac0(undefined8 param_1)

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
      FUN_1023db0bc(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112e93f60);
      uVar3 = *(undefined8 *)(lStack_58 + _DAT_112e93f60);
      func_0x000107c61174(uVar3);
      func_0x000107c60118(uVar5,uVar3);
      uVar4 = (uint)uVar5;
      func_0x000107c61170(lStack_58);
      func_0x000107c61170(uVar3);
      goto LAB_1023dab88;
    }
  }
  uVar4 = 0;
LAB_1023dab88:
  return uVar4 & 1;
}



/* Entry: 1023daba0; end: 1023dac1f; -[SCAttachmentSticker isEqual:] */

uint FUN_1023daba0(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1023daac0(&uStack_40);
  func_0x000107c61170(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1023dac20; end: 1023dac4b; -[SCAttachmentSticker hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_1023dac20(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + _DAT_112e93f58);
  func_0x000107c44c3c(uVar1);
  return uVar1 ^ 0x5504762;
}



/* Entry: 1023dac4c; end: 1023dac53; -[SCAttachmentSticker infoType] */

undefined8 FUN_1023dac4c(void)

{
  return 0xc;
}



/* Entry: 1023dac54; end: 1023dac5f; -[SCAttachmentSticker stickerId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023dac54(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + _DAT_112e93f50);
  lVar3 = ((long *)(param_1 + _DAT_112e93f50))[1];
  func_0x000107c61174();
  func_0x000107c5fadc(lVar1,lVar3);
  lVar2 = lVar1;
  (*(code *)&UNK_108ebb990)();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 == 0) {
    lVar2 = 0;
    func_0x000107c5faec(0);
    func_0x000107c5fadc();
    func_0x000107c6142c(lVar3);
  }
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1023dac60; end: 1023dac6b; -[SCAttachmentSticker shortLoggingName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023dac60(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + _DAT_112e93f50);
  lVar3 = ((long *)(param_1 + _DAT_112e93f50))[1];
  func_0x000107c61174();
  func_0x000107c5fadc(lVar1,lVar3);
  lVar2 = lVar1;
  (*(code *)&UNK_108ebb9cc)();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 == 0) {
    lVar2 = 0;
    func_0x000107c5faec(0);
    func_0x000107c5fadc();
    func_0x000107c6142c(lVar3);
  }
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1023dac6c; end: 1023dacfb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023dac6c(long param_1,undefined8 param_2,code *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + _DAT_112e93f50);
  lVar3 = ((long *)(param_1 + _DAT_112e93f50))[1];
  func_0x000107c61174();
  func_0x000107c5fadc(lVar1,lVar3);
  lVar2 = lVar1;
  (*param_3)();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 == 0) {
    lVar2 = 0;
    func_0x000107c5faec(0);
    func_0x000107c5fadc();
    func_0x000107c6142c(lVar3);
  }
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1023dacfc; end: 1023dad0b; -[SCAttachmentSticker toCTPItem] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023dacfc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112e93f58));
  return;
}



/* Entry: 1023dad0c; end: 1023dad1b; -[SCAttachmentSticker toCTItemInstance] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023dad0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112e93f60));
  return;
}



/* Entry: 1023dad1c; end: 1023dad23; -[SCAttachmentSticker supportedFlows] */

undefined8 FUN_1023dad1c(void)

{
  return 0;
}



/* Entry: 1023dad24; end: 1023dad37; -[SCAttachmentSticker intrinsicSize] */

void FUN_1023dad24(void)

{
  return;
}



/* Entry: 1023dad38; end: 1023daee7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_1023dad38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x000107c5d0f0();
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112e93f58);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e93f60);
  puVar1 = PTR_PTR_1126ba898;
  func_0x000107c610f8(PTR_PTR_1126ba898);
  uVar2 = 0;
  FUN_1023db0bc(0,0x112dc0158,&PTR_PTR_1126d91a8);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c5fc48(param_7,uVar2);
  uVar2 = 0;
  FUN_1023db0bc(0,0x112d74ac8,&PTR_PTR_1126bb2a8);
  func_0x000107c5fc48(param_10,uVar2);
  func_0x000107c48ec0(param_1,param_2,param_3,param_4,param_5,param_6,puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_10);
  return puVar1;
}



/* Entry: 1023daee8; end: 1023db00b; -[SCAttachmentSticker stickerStateWithRelativeSize:center:rotation:scale:tappableElementBounds:isTracking:isTimed:trackingTrajectory:isFlipped:] */

void FUN_1023daee8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_1023db0bc(0,0x112dc0158,&PTR_PTR_1126d91a8);
  func_0x000107c5fc54(param_9,uVar1);
  uVar1 = 0;
  FUN_1023db0bc(0,0x112d74ac8,&PTR_PTR_1126bb2a8);
  func_0x000107c5fc54(param_12,uVar1);
  func_0x000107c61174(param_7);
  uVar1 = param_9;
  FUN_1023dad38(param_1,param_2,param_3,param_4,param_5,param_6,param_9,param_10,param_11,param_12,
                param_13);
  func_0x000107c61170(param_7);
  func_0x000107c6142c(param_9);
  func_0x000107c6142c(param_12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1023db00c; end: 1023db06b; -[SCAttachmentSticker init] */

void FUN_1023db00c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCAttachmentSticker.AttachmentSticker",0x25,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1023db038);
  (*pcVar1)();
}



/* Entry: 1023db06c; end: 1023db0b7; -[SCAttachmentSticker .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001023db09c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001023db0a0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023db06c(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112e93f50 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e93f58));
  return;
}



/* Entry: 1023db0b8; end: 1023db0bb;  */

void FUN_1023db0b8(void)

{
  return;
}



/* Entry: 1023db0bc; end: 1023db0fb;  */

void FUN_1023db0bc(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1023db0fc; end: 1023db11b;  */

void FUN_1023db0fc(void)

{
  func_0x000107c61168(&PTR_PTR_11283b158);
  return;
}



/* Entry: 1023db11c; end: 1023db157; -[SCAttachmentStickerHelpers init] */

void FUN_1023db11c(undefined8 param_1)

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



/* Entry: 1023db158; end: 1023db18b;  */

void FUN_1023db158(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1023db18c; end: 1023db31b;  */

undefined * FUN_1023db18c(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
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
  puVar3 = puVar2;
  func_0x00010011df08();
  func_0x000107c61180();
  puVar4 = puVar3;
  func_0x000107c5faec();
  func_0x000107c61170(puVar3);
  if (puVar2 == (undefined *)0x0) {
    lVar5 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
  }
  else {
    lVar5 = 0;
    func_0x00010197cbdc();
  }
  puStack_70 = puVar2;
  lStack_58 = lVar5;
  func_0x000107c61174(puVar2);
  func_0x000107c5fadc(puVar4,param_2);
  func_0x000107c6142c(param_2);
  if (lVar5 == 0) {
    lVar6 = 0;
  }
  else {
    func_0x0001006732c8(&puStack_70,lVar5);
    lVar8 = *(long *)(lVar5 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
    lVar7 = (long)&puStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar8 + 0x10))(lVar7);
    lVar6 = lVar7;
    func_0x000107c605b0(lVar7,lVar5);
    (**(code **)(lVar8 + 8))(lVar7,lVar5);
    func_0x000100183ab8(&puStack_70);
  }
  puVar3 = PTR_PTR_1126baa60;
  func_0x000107c610f8();
  func_0x000107c46fcc();
  func_0x000107c61170(puVar4);
  func_0x000107c615e8(lVar6);
  if (puVar3 != (undefined *)0x0) {
    func_0x000107c61170(puVar2);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1023db31c);
  (*pcVar1)();
}



/* Entry: 1023db31c; end: 1023db33b;  */

void FUN_1023db31c(void)

{
  func_0x000107c61168(&PTR_PTR_11283b228);
  return;
}



/* Entry: 1023db33c; end: 1023db55b;  */

void FUN_1023db33c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  long lStack_38;
  
  lVar1 = unaff_x20 + 0x28;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c426e0();
    if ((int)lVar2 != 0) {
      uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
      func_0x000107c6157c(uVar3);
      func_0x0001000d224c(&lStack_38);
      func_0x000107c61574(uVar3);
      if (lStack_38 != 0) {
        lVar2 = lVar1;
        func_0x000107c5b198(lVar1);
        func_0x000107c61180();
        func_0x000107c4a5c4(lStack_38,param_2,lVar2);
        func_0x000107c615e8(lVar1);
        func_0x000107c615e8(lStack_38);
        func_0x000107c61170(lVar2);
        return;
      }
    }
    func_0x000107c615e8(lVar1);
  }
  return;
}



/* Entry: 1023db55c; end: 1023db5bf;  */

void FUN_1023db55c(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61610(unaff_x20 + 0x18);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  FUN_1023db970(unaff_x20 + 0x28);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1023db5c0; end: 1023db5f3; -[_TtC29AudioEffectsMixingServiceImpl32AudioEffectsMixingConfigProvider shouldForceDisableMixing] */

uint FUN_1023db5c0(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = param_1;
  func_0x000107c6157c();
  uVar1 = (uint)uVar2;
  FUN_1023db5f4();
  func_0x000107c61574(param_1);
  return uVar1 & 1;
}



/* Entry: 1023db5f4; end: 1023db75b;  */

undefined8 FUN_1023db5f4(void)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  
  lVar1 = unaff_x20 + 0x18;
  func_0x000107c61618();
  if (lVar1 == 0) {
    return 1;
  }
  uVar2 = unaff_x20 + 0x18;
  func_0x000107c61618();
  if (uVar2 != 0) {
    uVar3 = 0x112e940d0;
    func_0x0001000285a8(0x112e940d0,&UNK_10da9f818);
    func_0x000107c61538();
    FUN_1023db838();
    uVar4 = uVar2;
    func_0x000107c3f27c();
    func_0x0001023db4a0();
    func_0x000107c6142c(uVar3);
    func_0x000107c61170();
    if ((((uVar4 & 1) != 0) && (func_0x0001023db33c(), (uVar2 & 1) == 0)) &&
       (func_0x0001023db3f0(), (uVar2 & 1) == 0)) {
      lVar5 = unaff_x20 + 0x18;
      func_0x000107c61618();
      if (lVar5 != 0) {
        lVar6 = lVar5;
        func_0x000107c502ec();
        func_0x000107c61180();
        func_0x000107c61170(lVar5);
        if (lVar6 != 0) {
          func_0x000107c61170(lVar6);
          goto LAB_1023db6bc;
        }
      }
      lVar5 = lVar1;
      func_0x000107c4a488();
      if (((int)lVar5 != 0) || (lVar5 = lVar1, func_0x000107c5ae10(), (int)lVar5 != 0)) {
        func_0x000107c61170(lVar1);
        return 0;
      }
      uVar2 = unaff_x20 + 0x28;
      func_0x000107c61618();
      if (uVar2 != 0) {
        uVar4 = uVar2;
        func_0x000107c426e0();
        func_0x000107c615e8(uVar2);
        if ((uVar4 & 1) == 0) goto LAB_1023db6bc;
      }
      lVar5 = lVar1;
      func_0x000107c4d1ac();
      func_0x000107c61180();
      func_0x000107c61170(lVar1);
      if (lVar5 != 0) {
        func_0x000107c615e8(lVar5);
        return 1;
      }
      return 0;
    }
  }
LAB_1023db6bc:
  func_0x000107c61170(lVar1);
  return 1;
}



/* Entry: 1023db75c; end: 1023db807;  */

void FUN_1023db75c(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 1023db808; end: 1023db837;  */

bool FUN_1023db808(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1023db838; end: 1023db96f;  */

undefined * FUN_1023db838(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined1 auStack_a8 [72];
  
  puVar9 = *(undefined **)(param_1 + 0x10);
  puVar2 = PTR___swiftEmptySetSingleton_11034f1d8;
  if (puVar9 != (undefined *)0x0) {
    func_0x0001000285a8(0x112e940d8,&UNK_10da9f820);
    puVar2 = puVar9;
    func_0x000107c602e8();
    puVar11 = (undefined *)0x0;
    do {
      uVar10 = *(ulong *)(param_1 + 0x20 + (long)puVar11 * 8);
      func_0x000107c6068c(auStack_a8,*(undefined8 *)(puVar2 + 0x28));
      uVar3 = uVar10;
      func_0x000107c60690();
      func_0x000107c606a8();
      uVar8 = -1L << ((ulong)(byte)puVar2[0x20] & 0x3f);
      uVar3 = uVar3 & (uVar8 ^ 0xffffffffffffffff);
      uVar5 = uVar3 >> 6;
      uVar6 = *(ulong *)(puVar2 + uVar5 * 8 + 0x38);
      uVar7 = 1L << (uVar3 & 0x3f);
      lVar4 = *(long *)(puVar2 + 0x30);
      if ((uVar7 & uVar6) != 0) {
        do {
          if (*(ulong *)(lVar4 + uVar3 * 8) == uVar10) goto LAB_1023db8bc;
          uVar3 = uVar3 + 1 & ~uVar8;
          uVar5 = uVar3 >> 6;
          uVar6 = *(ulong *)(puVar2 + uVar5 * 8 + 0x38);
          uVar7 = 1L << (uVar3 & 0x3f);
        } while ((uVar7 & uVar6) != 0);
      }
      *(ulong *)(puVar2 + uVar5 * 8 + 0x38) = uVar7 | uVar6;
      *(ulong *)(lVar4 + uVar3 * 8) = uVar10;
      if (SCARRY8(*(long *)(puVar2 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1023db970);
        (*pcVar1)();
      }
      *(long *)(puVar2 + 0x10) = *(long *)(puVar2 + 0x10) + 1;
LAB_1023db8bc:
      puVar11 = puVar11 + 1;
    } while (puVar11 != puVar9);
  }
  return puVar2;
}



/* Entry: 1023db970; end: 1023db993;  */

undefined8 FUN_1023db970(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1023db994; end: 1023db9e3;  */

void FUN_1023db994(undefined8 param_1)

{
  undefined *puVar1;
  
  if (lRam0000000112e940e0 != 0) {
    return;
  }
  puVar1 = &UNK_1104ff450;
  func_0x000107c614d4();
  if (puVar1 != (undefined *)0x0) {
    return;
  }
  lRam0000000112e940e0 = param_1;
  return;
}



/* Entry: 1023db9e4; end: 1023db9e7;  */

void FUN_1023db9e4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112e940e8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_1023db994(0xff);
  puVar2 = &UNK_10da9f87c;
  func_0x000107c61520(&UNK_10da9f87c,uVar1);
  puRam0000000112e940e8 = puVar2;
  return;
}



/* Entry: 1023db9e8; end: 1023dba2b;  */

void FUN_1023db9e8(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112e940e8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_1023db994(0xff);
  puVar2 = &UNK_10da9f87c;
  func_0x000107c61520(&UNK_10da9f87c,uVar1);
  puRam0000000112e940e8 = puVar2;
  return;
}



/* Entry: 1023dba2c; end: 1023dbdfb;  */

void FUN_1023dba2c(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  long unaff_x20;
  long lVar9;
  
  func_0x000107c613fc();
  lVar9 = param_2;
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar9 != 0) {
    lVar2 = param_1;
    func_0x000107c4ad1c();
    func_0x000107c61180();
    func_0x0001000285a8(0x112e940f0,&UNK_10da9f8e0);
    uVar3 = param_3;
    func_0x000107c5b12c();
    func_0x000107c61180();
    uVar4 = uVar3;
    func_0x0001000bda74();
    func_0x000107c61170(uVar3);
    uVar3 = param_4;
    func_0x000107c5b1b8(param_4);
    func_0x000107c61180();
    func_0x0001000285a8(0x112e31ac0,&UNK_10da1ac70);
    uVar5 = param_5;
    func_0x000107c44db4();
    func_0x000107c61180();
    uVar6 = uVar5;
    func_0x0001000bda74();
    func_0x000107c61170(uVar5);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    lVar7 = 0;
    func_0x0001023db5a0();
    func_0x000107c613fc();
    func_0x000107c61614(lVar7 + 0x18,0);
    func_0x000107c61614(lVar7 + 0x28,0);
    *(long *)(lVar7 + 0x10) = lVar9;
    if (lVar2 == 0) {
      lVar9 = 0;
    }
    else {
      puVar8 = PTR_PTR_1126afee0;
      func_0x000107c61168(PTR_PTR_1126afee0);
      lVar9 = lVar2;
      func_0x000107c6148c(lVar2,puVar8);
      if (lVar9 == 0) {
        func_0x000107c615e8(lVar2);
      }
    }
    func_0x000107c61604(lVar7 + 0x18,lVar9);
    func_0x000107c61170(lVar9);
    *(undefined8 *)(lVar7 + 0x20) = uVar4;
    func_0x000107c61604(lVar7 + 0x28,uVar3);
    func_0x000107c615e8(uVar3);
    *(undefined8 *)(lVar7 + 0x30) = uVar6;
    *(long *)(unaff_x20 + 0x10) = lVar7;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1023dbc1c);
  (*pcVar1)();
}



/* Entry: 1023dbdfc; end: 1023dbe33;  */

void FUN_1023dbdfc(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1023e5690(0);
  func_0x000107c610f8();
  func_0x000107c6157c(uVar1);
  func_0x0001023e55d4();
  return;
}



/* Entry: 1023dbe34; end: 1023dbe3b;  */

void FUN_1023dbe34(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1023dbe3c; end: 1023dbedb;  */

void FUN_1023dbe3c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1023dbedc; end: 1023dbf27;  */

void FUN_1023dbedc(undefined8 *param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1023e5690(0);
  func_0x000107c610f8();
  func_0x000107c6157c();
  func_0x0001023e55d4();
  *param_1 = uVar1;
  return;
}



/* Entry: 1023dbf28; end: 1023dbf7b;  */

void FUN_1023dbf28(long param_1)

{
  long lVar1;
  undefined *puVar2;
  
  puVar2 = &UNK_109201880;
  (*(code *)&UNK_109201880)();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar1 = 0;
    puVar2 = (undefined *)0x0;
  }
  else {
    lVar1 = param_1;
    func_0x000107c5faec();
    func_0x000107c61170(param_1);
  }
  lRam00000001134b96f8 = lVar1;
  puRam00000001134b9700 = puVar2;
  return;
}



/* Entry: 1023dbf7c; end: 1023dbfe7;  */

void FUN_1023dbf7c(long param_1,code *param_2,long *param_3,undefined8 *param_4)

{
  long lVar1;
  
  (*param_2)();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar1 = 0;
    param_2 = (code *)0x0;
  }
  else {
    lVar1 = param_1;
    func_0x000107c5faec();
    func_0x000107c61170(param_1);
  }
  *param_3 = lVar1;
  *param_4 = param_2;
  return;
}



/* Entry: 1023dbfe8; end: 1023dc123;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1023dbfe8(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112e94228;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112e94228);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    func_0x000107c610f8();
    func_0x000107c453e4();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar3;
}



/* Entry: 1023dc124; end: 1023dc12f; -[SCPreviewFeatureAudioEffectsToolbarItemManager delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023dc124(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e941d0;
  func_0x000107c61428(param_1 + _DAT_112e941d0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1023dc130; end: 1023dc13b; -[SCPreviewFeatureAudioEffectsToolbarItemManager setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023dc130(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e941d0;
  func_0x000107c61428(param_1 + _DAT_112e941d0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1023dc13c; end: 1023dc147; -[SCPreviewFeatureAudioEffectsToolbarItemManager previewView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023dc13c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e941d8;
  func_0x000107c61428(param_1 + _DAT_112e941d8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1023dc148; end: 1023dc18b;  */

void FUN_1023dc148(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1023dc18c; end: 1023dc197; -[SCPreviewFeatureAudioEffectsToolbarItemManager setPreviewView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023dc18c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e941d8;
  func_0x000107c61428(param_1 + _DAT_112e941d8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1023dc198; end: 1023dc29b;  */

void FUN_1023dc198(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1023dc29c; end: 1023dc577;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023dc29c(void)

{
  int *piVar1;
  undefined *puVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  long extraout_x8;
  long lVar14;
  long lVar15;
  long unaff_x20;
  long lVar16;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [32];
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [24];
  long lStack_68;
  
  lVar4 = 0;
  func_0x000107c5ed50();
  lVar16 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar16 + 0x40));
  lVar14 = (long)&lStack_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar5 = *(ulong *)(unaff_x20 + _DAT_112e94238);
  func_0x000107c3e3e8();
  if ((uVar5 & 1) == 0) {
    lVar15 = *(long *)(unaff_x20 + _DAT_112e94240);
    lVar6 = lVar15;
    func_0x000107c426e0();
    if ((int)lVar6 != 0) {
      lVar6 = lVar15;
      func_0x000107c5b198();
      func_0x000107c61180();
      lVar7 = lVar6;
      func_0x000107c4ca10();
      func_0x000107c61180();
      func_0x000107c61170(lVar6);
      if (lVar7 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1023dc570);
        (*pcVar3)();
      }
      lStack_d0 = lVar7;
      func_0x000107c600f4(lVar14);
      func_0x000100e15a08();
      func_0x000107c601c0(auStack_80,lVar4,lVar6);
      puVar2 = PTR___sypN_11034f1a8;
      puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
      while (lStack_68 != 0) {
        func_0x000100102924(auStack_80,auStack_a0);
        func_0x0001000bb420(auStack_a0,auStack_c0);
        uVar8 = 0;
        func_0x0001012e2f20(0);
        puVar9 = &uStack_c8;
        func_0x000107c6147c(puVar9,auStack_c0,puVar2 + 8,uVar8,6);
        uVar8 = uStack_c8;
        if (((ulong)puVar9 & 1) == 0) {
          func_0x000100183ab8(auStack_a0);
        }
        else {
          uVar10 = uStack_c8;
          func_0x000107c4ca5c();
          func_0x000107c61170(uVar8);
          func_0x000100183ab8(auStack_a0);
          puVar11 = puVar13;
          func_0x000107c61558();
          puVar12 = puVar13;
          if (((ulong)puVar11 & 1) == 0) {
            puVar12 = (undefined *)0x0;
            FUN_1023dda6c(0,*(long *)(puVar13 + 0x10) + 1,1,puVar13);
          }
          uVar5 = *(ulong *)(puVar12 + 0x10);
          puVar13 = puVar12;
          if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar5) {
            puVar13 = (undefined *)(ulong)(1 < *(ulong *)(puVar12 + 0x18));
            FUN_1023dda6c(puVar13,uVar5 + 1,1,puVar12);
          }
          *(ulong *)(puVar13 + 0x10) = uVar5 + 1;
          *(int *)(puVar13 + uVar5 * 4 + 0x20) = (int)uVar10;
        }
        func_0x000107c601c0(auStack_80,lVar4,lVar6);
      }
      func_0x000107c61170(lStack_d0);
      (**(code **)(lVar16 + 8))(lVar14,lVar4);
      lVar14 = *(long *)(puVar13 + 0x10);
      lVar4 = 0x20;
      do {
        if (lVar14 == 0) {
          func_0x000107c6142c(puVar13);
          return;
        }
        piVar1 = (int *)(puVar13 + lVar4);
        lVar4 = lVar4 + 4;
        lVar14 = lVar14 + -1;
      } while (*piVar1 != 3);
      func_0x000107c6142c(puVar13);
      func_0x000107c5b198();
      func_0x000107c61180();
      lVar4 = lVar15;
      func_0x000107c4e8d8();
      func_0x000107c61180();
      func_0x000107c61170(lVar15);
      if (lVar4 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1023dc574);
        (*pcVar3)();
      }
      lVar14 = lVar4;
      func_0x000107c4e8ec();
      func_0x000107c61180();
      func_0x000107c61170(lVar4);
      if (lVar14 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1023dc578);
        (*pcVar3)();
      }
      func_0x000107c44b24(lVar14);
      func_0x000107c61170(lVar14);
    }
  }
  return;
}



/* Entry: 1023dc578; end: 1023dc5ab; -[SCPreviewFeatureAudioEffectsToolbarItemManager shouldAppearEnabled] */

uint FUN_1023dc578(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1023dc5ac();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 1023dc5ac; end: 1023dc6ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1023dc5ac(void)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  long unaff_x20;
  uint uVar7;
  uint uVar8;
  
  uVar2 = unaff_x20 + _DAT_112e941e0;
  func_0x000107c61618();
  if (uVar2 != 0) {
    uVar3 = uVar2;
    func_0x000107c5ac74();
    func_0x000107c615e8(uVar2);
    if ((uVar3 & 1) != 0) {
      return 1;
    }
  }
  lVar4 = unaff_x20 + _DAT_112e941e8;
  func_0x000107c61618();
  if (lVar4 == 0) {
LAB_1023dc638:
    uVar7 = 1;
  }
  else {
    lVar5 = lVar4;
    func_0x000107c3ec50();
    func_0x000107c61180();
    func_0x000107c615e8(lVar4);
    if (lVar5 == 0) goto LAB_1023dc638;
    func_0x000107c61170(lVar5);
    uVar7 = 0;
  }
  lVar4 = unaff_x20 + _DAT_112e941f0;
  func_0x000107c61618();
  if (lVar4 == 0) {
LAB_1023dc680:
    uVar8 = 1;
  }
  else {
    lVar5 = lVar4;
    func_0x000107c51cc8();
    func_0x000107c61180();
    func_0x000107c615e8(lVar4);
    if (lVar5 == 0) goto LAB_1023dc680;
    func_0x000107c61170(lVar5);
    uVar8 = 0;
  }
  lVar4 = unaff_x20 + _DAT_112e941f8;
  func_0x000107c61618();
  if (lVar4 != 0) {
    lVar5 = lVar4;
    func_0x000107c3e004();
    func_0x000107c61180();
    func_0x000107c615e8(lVar4);
    if (lVar5 != 0) {
      func_0x000107c61170(lVar5);
      uVar1 = (uint)lVar5;
      uVar6 = 0;
      goto LAB_1023dc6cc;
    }
  }
  uVar1 = (uint)lVar4;
  uVar6 = 1;
LAB_1023dc6cc:
  FUN_1023dc29c();
  return uVar6 & uVar8 & uVar7 & uVar1;
}



/* Entry: 1023dc6f0; end: 1023dc723; -[SCPreviewFeatureAudioEffectsToolbarItemManager audioButtonToolbarItemConfiguration] */

void FUN_1023dc6f0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1023dc724();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1023dc724; end: 1023dc9db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1023dc724(undefined *param_1,long param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  long unaff_x20;
  undefined *puVar9;
  
  FUN_1023dd8f4();
  if (param_1 == (undefined *)0x0) {
    func_0x0001023dc1ec();
    bVar2 = ((ulong)param_1 & 1) == 0;
    uVar3 = 0xd000000000000010;
    if (bVar2) {
      uVar3 = 0x6e6f5f6f69647561;
    }
    lVar5 = -0x7ffffffef0f690f0;
    if (bVar2) {
      lVar5 = -0x1091908b8b8a9da1;
    }
    param_2 = lVar5;
    func_0x000107c5fadc(uVar3);
    param_1 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x000107c61168(PTR__OBJC_CLASS___UIImage_1126aea68);
    func_0x000107c450cc();
    func_0x000107c61180();
    func_0x000107c61170(uVar3);
    func_0x000107c6142c(lVar5);
  }
  lVar4 = *(long *)(unaff_x20 + _DAT_112e94248);
  func_0x000107c3ce84();
  func_0x000107c61180();
  lVar5 = lVar4;
  func_0x000107c4f1c0();
  func_0x000107c615e8(lVar4);
  puVar6 = PTR_PTR_1126b0c40;
  if (lVar5 == 2) {
    func_0x000107c61168(PTR_PTR_1126b0c40);
    puVar9 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c5af88();
    func_0x000107c61180();
  }
  else {
    if (lVar5 != 1) {
      puVar9 = (undefined *)0x6e6f5f6f69647561;
      param_2 = -0x1091908b8b8a9da1;
      func_0x000107c5fadc(0x6e6f5f6f69647561);
      puVar6 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x000107c61168(PTR__OBJC_CLASS___UIImage_1126aea68);
      func_0x000107c450cc();
      goto LAB_1023dc8d4;
    }
    func_0x000107c61168(PTR_PTR_1126b0c40);
    puVar9 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c5af88();
    func_0x000107c61180();
  }
  func_0x000107c45098(0x4038000000000000,0x4038000000000000,puVar6);
LAB_1023dc8d4:
  func_0x000107c61180();
  func_0x000107c61170(puVar9);
  func_0x0001023ddb6c();
  ppuVar7 = &PTR____CFConstantStringClassReference_110f03278;
  lVar4 = param_2;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f03278);
  lVar5 = param_2;
  func_0x000107c61434();
  func_0x000109201838();
  func_0x000107c61180();
  if (lVar5 != 0) {
    if (param_2 == 0) {
      puVar9 = (undefined *)0x0;
    }
    else {
      func_0x000107c5fadc(puVar9,param_2);
      func_0x000107c6142c(param_2);
    }
    puVar8 = PTR_PTR_1126c4010;
    func_0x000107c610f8(PTR_PTR_1126c4010);
    func_0x000107c5fadc(ppuVar7,lVar4);
    func_0x000107c6142c(lVar4);
    func_0x000107c46ffc(puVar8);
    func_0x000107c61170(param_1);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar9);
    func_0x000107c61170(ppuVar7);
    func_0x000107c61170(lVar5);
    return puVar8;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1023dc9dc);
  (*pcVar1)();
}



/* Entry: 1023dc9dc; end: 1023dcc3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1023dc9dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  long unaff_x20;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  func_0x000107c610f8();
  lVar2 = _DAT_112e941e0;
  func_0x000107c61614(unaff_x20 + _DAT_112e941e0,0);
  lVar3 = _DAT_112e941e8;
  func_0x000107c61614(unaff_x20 + _DAT_112e941e8,0);
  lVar4 = _DAT_112e941f0;
  func_0x000107c61614(unaff_x20 + _DAT_112e941f0,0);
  lVar6 = _DAT_112e94200;
  func_0x000107c61614(unaff_x20 + _DAT_112e94200,0);
  lVar5 = _DAT_112e941f8;
  func_0x000107c61614(unaff_x20 + _DAT_112e941f8,0);
  lVar7 = _DAT_112e94208;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_80 = 1;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_68 = 0;
  func_0x0001000285a8(0x112e941c8,&UNK_10da9f930);
  func_0x000107c613fc();
  puVar8 = &uStack_90;
  func_0x00010042e6a0();
  *(undefined8 **)(unaff_x20 + lVar7) = puVar8;
  puVar8 = (undefined8 *)(unaff_x20 + _DAT_112e94210);
  puVar8[1] = 0;
  *puVar8 = 0;
  puVar8[2] = 1;
  puVar8[4] = 0;
  puVar8[3] = 0;
  *(undefined1 *)(puVar8 + 5) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e94218) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e94220) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e94228) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e94230) = 0;
  func_0x000107c61614(unaff_x20 + _DAT_112e941d0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112e941d8,0);
  *(undefined8 *)(unaff_x20 + _DAT_112e94238) = param_1;
  func_0x000107c61604(unaff_x20 + lVar2,param_2);
  func_0x000107c61604(unaff_x20 + lVar3,param_3);
  func_0x000107c61604(unaff_x20 + lVar4,param_4);
  func_0x000107c61604(unaff_x20 + lVar6,param_5);
  func_0x000107c61604(unaff_x20 + lVar5,param_6);
  *(undefined8 *)(unaff_x20 + _DAT_112e94240) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112e94248) = param_8;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c615f0(param_1);
  puVar9 = auStack_a0;
  func_0x000107c61154(puVar9,puVar1);
  func_0x000107c615e8(param_1);
  func_0x000107c615e8(param_2);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_4);
  func_0x000107c615e8(param_5);
  func_0x000107c615e8(param_6);
  return puVar9;
}



/* Entry: 1023dcc40; end: 1023dcd33; -[SCPreviewFeatureAudioEffectsToolbarItemManager initWithPreviewConfiguration:previewFeatureAudioEffects:previewFeatureBounce:previewFeatureMusic:previewFeatureVideoPlayback:previewFeatureVoiceover:snapDocEditor:previewABServices:] */

undefined8
FUN_1023dcc40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c615f0(param_5);
  func_0x000107c615f0(param_6);
  func_0x000107c615f0(param_7);
  func_0x000107c615f0(param_8);
  func_0x000107c615f0(param_9);
  func_0x000107c61174(param_10);
  uVar1 = param_3;
  FUN_1023ddc78(param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_4);
  func_0x000107c615e8(param_5);
  func_0x000107c615e8(param_6);
  func_0x000107c615e8(param_7);
  func_0x000107c615e8(param_8);
  return uVar1;
}



/* Entry: 1023dcd34; end: 1023dcd67;  */

void FUN_1023dcd34(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1023dcd68; end: 1023dce8f; -[SCPreviewFeatureAudioEffectsToolbarItemManager .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001023dcd94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023dcdb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023dcdd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023dce74: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001023dcdd8) */
/* WARNING: Removing unreachable block (ram,0x0001023dcdb8) */
/* WARNING: Removing unreachable block (ram,0x0001023dcd98) */
/* WARNING: Removing unreachable block (ram,0x0001023dce78) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1023dcd68(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e94238));
  param_1 = param_1 + _DAT_112e941e0;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1023dce90; end: 1023dd2ab;  */

/* WARNING: Possible PIC construction at 0x0001023dced4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023dcf7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023dd288: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001023dced8) */
/* WARNING: Removing unreachable block (ram,0x0001023dcedc) */
/* WARNING: Removing unreachable block (ram,0x0001023dcee8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023dce90(void)

{
  undefined8 uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  long lVar9;
  long unaff_x20;
  int iVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_a8 [24];
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar9 = unaff_x20 + _DAT_112e941e0;
  func_0x000107c61618();
  if (lVar9 == 0) {
    func_0x0001023dc1ec();
    func_0x000107c529f4(*(undefined8 *)(unaff_x20 + _DAT_112e94238));
    iVar10 = (int)*(undefined8 *)(unaff_x20 + _DAT_112e94240);
    func_0x000107c426e0();
    if (iVar10 != 0) {
      func_0x000107c61168(PTR_PTR_1126bcd68);
      func_0x000107c5a4fc();
    }
    lVar9 = unaff_x20 + _DAT_112e941e0;
    func_0x000107c61618();
    if (lVar9 == 0) {
      func_0x0001023dc1ec();
      lVar9 = _DAT_112e941d8;
      func_0x000107c61428(unaff_x20 + _DAT_112e941d8,auStack_a8,0,0);
      puVar3 = (undefined *)(unaff_x20 + lVar9);
      func_0x000107c61618();
      if (puVar3 != (undefined *)0x0) {
        lVar9 = *(long *)(unaff_x20 + _DAT_112e94218);
        if (lVar9 != 0) {
          func_0x000107c61174();
          lVar6 = lVar9;
          func_0x000107c4a360();
          if ((int)lVar6 != 0) {
            func_0x000107c5be08(lVar9);
          }
          func_0x000107c61170(lVar9);
        }
        func_0x000107c61174();
        puVar4 = puVar3;
        FUN_1023dbfe8();
        puVar5 = puVar4;
        FUN_1023dd8f4();
        if (puVar5 == (undefined *)0x0) {
          func_0x0001023dc1ec();
          bVar2 = ((ulong)puVar5 & 1) == 0;
          uVar7 = 0xd000000000000010;
          if (bVar2) {
            uVar7 = 0x6e6f5f6f69647561;
          }
          uVar1 = 0x800000010f096f10;
          if (bVar2) {
            uVar1 = 0xef6e6f747475625f;
          }
          func_0x000107c5fadc(uVar7,uVar1);
          puVar5 = PTR__OBJC_CLASS___UIImage_1126aea68;
          func_0x000107c61168(PTR__OBJC_CLASS___UIImage_1126aea68);
          func_0x000107c450cc();
          func_0x000107c61180();
          func_0x000107c61170(uVar7);
          func_0x000107c6142c(uVar1);
        }
        func_0x000107c55258(puVar4);
        func_0x000107c61170(puVar4);
        func_0x000107c61170(puVar5);
        func_0x0001023dc054();
        dVar11 = 1.0;
        func_0x000107c526c0(0x3ff0000000000000);
        func_0x000107c61170(puVar5);
        lVar9 = _DAT_112e94230;
        lVar6 = *(long *)(unaff_x20 + _DAT_112e94230);
        func_0x000107c5c42c();
        func_0x000107c61180();
        if (lVar6 == 0) {
          func_0x000107c3d89c(puVar3);
          uVar7 = *(undefined8 *)(unaff_x20 + lVar9);
          func_0x000107c61174(uVar7);
          func_0x000107c3ec60(puVar3);
          func_0x000107c54b80(uVar7);
          func_0x000107c61170(uVar7);
          uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112e94228);
          func_0x000107c61174(uVar7);
          func_0x000107c3ec60(puVar3);
          func_0x000107c609cc();
          dVar11 = dVar11 * 0.5;
          dVar12 = dVar11 + -25.0;
          func_0x000107c3ec60(puVar3);
          func_0x000107c609b0();
          func_0x000107c54b80(dVar12,dVar11 * 0.5 + -25.0,0x4049000000000000,0x4049000000000000,
                              uVar7);
        }
        func_0x000107c61170();
        func_0x000107c61170(puVar3);
        if (*(long *)(unaff_x20 + _DAT_112e94220) != 0) {
          func_0x000107c498f8();
        }
        puVar5 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
        func_0x000107c61168();
        puVar4 = &UNK_1104ff5b8;
        func_0x000107c613fc(&UNK_1104ff5b8,0x18,7);
        func_0x000107c61614(puVar4 + 0x10);
        pcStack_70 = FUN_1023dded8;
        puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_88 = 0x42000000;
        puStack_80 = &UNK_100fef460;
        puStack_78 = &UNK_1104ff5d0;
        ppuVar8 = &puStack_90;
        puStack_68 = puVar4;
        func_0x000107c60bc4(ppuVar8);
        func_0x000107c61574(puStack_68);
        func_0x000107c51924(0x3fe0000000000000);
        func_0x000107c61180();
        func_0x000107c60bd0(ppuVar8);
        uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112e94220);
        *(undefined **)(unaff_x20 + _DAT_112e94220) = puVar5;
        func_0x000107c61170(puVar3);
        func_0x000107c61170(uVar7);
      }
      lVar9 = _DAT_112e941d0;
      func_0x000107c61428(unaff_x20 + _DAT_112e941d0,&puStack_90,0,0);
      lVar9 = unaff_x20 + lVar9;
      func_0x000107c61618();
      if (lVar9 == 0) {
        return;
      }
      func_0x000107c5cbb4();
    }
    else {
      func_0x000107c5d3f4();
    }
  }
  else {
    func_0x000107c5ac74();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar9);
  return;
}



/* Entry: 1023dd2ac; end: 1023dd2d3; -[SCPreviewFeatureAudioEffectsToolbarItemManager handleAudioToolbarButtonTapped] */

void FUN_1023dd2ac(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1023dce90();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1023dd2d4; end: 1023dd43f; -[SCPreviewFeatureAudioEffectsToolbarItemManager toolbarItemViewModelObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023dd2d4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61174();
  uVar1 = 0x112d38358;
  func_0x0001000285a8(0x112d38358,&UNK_10d902090);
  uVar2 = 0x1023dd350;
  func_0x0001000bfde0(0x1023dd350,0,uVar1);
  uVar1 = uVar2;
  func_0x0001004575f0();
  func_0x000107c61170(param_1);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1023dd440; end: 1023dd537;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023dd440(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long unaff_x20;
  undefined8 uStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  undefined1 uStack_48;
  
  uVar10 = *(ulong *)(unaff_x20 + _DAT_112e94238);
  uVar7 = uVar10;
  func_0x000107c49ecc();
  if (((uVar7 & 1) == 0) && (func_0x000107c49a98(), (uVar10 & 1) == 0)) {
    FUN_1023dc5ac();
    uVar7 = unaff_x20 + _DAT_112e941e0;
    func_0x000107c61618();
    if (uVar7 == 0) {
      uStack_58 = 0;
    }
    else {
      uVar8 = uVar7;
      func_0x000107c5ac74();
      func_0x000107c615e8();
      uStack_58 = uVar8 & 0xffffffff;
    }
    func_0x0001023dc1ec();
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e94210);
    uVar2 = *puVar1;
    uVar4 = puVar1[1];
    uVar3 = puVar1[2];
    uVar5 = puVar1[3];
    uVar9 = puVar1[4];
    *puVar1 = 7;
    puVar1[1] = uVar10 & 1;
    puVar1[2] = 0;
    puVar1[3] = uStack_58;
    puVar1[4] = uVar7 & 1;
    uVar6 = *(undefined1 *)(puVar1 + 5);
    *(undefined1 *)(puVar1 + 5) = 3;
    FUN_1023dde90(uVar2,uVar4,uVar3,uVar5,uVar9,uVar6);
    uStack_70 = 7;
    uStack_60 = 0;
    uStack_48 = 3;
    uStack_68 = uVar10 & 1;
    uStack_50 = uVar7 & 1;
    func_0x0001007d6d78(&uStack_70);
  }
  return;
}



/* Entry: 1023dd538; end: 1023dd55f; -[SCPreviewFeatureAudioEffectsToolbarItemManager prepareToolbarItem] */

void FUN_1023dd538(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1023dd440();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1023dd560; end: 1023dd8ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023dd560(undefined *param_1,long param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  bool bVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 uVar18;
  ulong uVar19;
  long unaff_x20;
  undefined *puVar20;
  ulong uVar21;
  undefined8 uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  undefined1 uStack_68;
  
  puVar20 = param_1;
  FUN_1023dd8f4();
  if (puVar20 == (undefined *)0x0) {
    func_0x0001023dc1ec();
    bVar11 = ((ulong)puVar20 & 1) == 0;
    uVar12 = 0xd000000000000010;
    if (bVar11) {
      uVar12 = 0x6e6f5f6f69647561;
    }
    lVar13 = -0x7ffffffef0f690f0;
    if (bVar11) {
      lVar13 = -0x1091908b8b8a9da1;
    }
    param_2 = lVar13;
    func_0x000107c5fadc(uVar12);
    puVar20 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x000107c61168();
    func_0x000107c450cc();
    func_0x000107c61180();
    func_0x000107c61170(uVar12);
    func_0x000107c6142c(lVar13);
    if (puVar20 != (undefined *)0x0) goto LAB_1023dd61c;
    if (param_1 == (undefined *)0x0) goto LAB_1023dd714;
  }
  else {
LAB_1023dd61c:
    if (param_1 == (undefined *)0x0) {
      func_0x000107c61170();
      goto LAB_1023dd714;
    }
    func_0x000107c5d4bc(param_1);
    func_0x000107c61170(puVar20);
  }
  func_0x0001023ddb6c();
  if (param_2 == 0) {
    puVar20 = (undefined *)0x0;
  }
  else {
    func_0x000107c61434(param_2);
    func_0x000107c5fadc(puVar20,param_2);
    func_0x000107c6142c(param_2);
  }
  func_0x000107c520fc(param_1);
  func_0x000107c61170(puVar20);
  FUN_1023dc5ac();
  func_0x000107c54190(param_1);
  lVar14 = _DAT_112e941e0;
  lVar13 = unaff_x20 + _DAT_112e941e0;
  func_0x000107c61618();
  if (lVar13 != 0) {
    func_0x000107c5ac74();
    func_0x000107c615e8(lVar13);
  }
  func_0x000107c58dd8(param_1);
  lVar14 = unaff_x20 + lVar14;
  func_0x000107c61618();
  if (lVar14 != 0) {
    func_0x000107c5ac74();
    func_0x000107c615e8(lVar14);
  }
  func_0x000107c58e44(param_1);
LAB_1023dd714:
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e94210);
  uVar19 = puVar1[2];
  if (uVar19 != 1) {
    uVar12 = *puVar1;
    uVar5 = puVar1[1];
    uVar2 = puVar1[3];
    uVar6 = puVar1[4];
    uVar9 = *(undefined1 *)(puVar1 + 5);
    uVar15 = uVar19;
    func_0x000107c61174();
    uVar16 = uVar15;
    FUN_1023dc5ac();
    uVar17 = unaff_x20 + _DAT_112e941e0;
    func_0x000107c61618();
    if (uVar17 == 0) {
      uVar21 = 0;
    }
    else {
      uVar21 = uVar17;
      func_0x000107c5ac74();
      func_0x000107c615e8();
      uVar21 = uVar21 & 0xffffffff;
    }
    func_0x0001023dc1ec();
    uVar21 = uVar21 | uVar2 & 0x100;
    uVar3 = *puVar1;
    uVar7 = puVar1[1];
    uVar4 = puVar1[2];
    uVar8 = puVar1[3];
    uVar18 = puVar1[4];
    uVar10 = *(undefined1 *)(puVar1 + 5);
    func_0x0001023ddea4(uVar12,uVar5,uVar19,uVar2,uVar6,uVar9);
    *puVar1 = uVar12;
    puVar1[1] = uVar16 & 1;
    puVar1[2] = uVar19;
    puVar1[3] = uVar21;
    puVar1[4] = uVar17 & 1;
    *(undefined1 *)(puVar1 + 5) = 3;
    func_0x000107c61174(uVar15);
    func_0x0001023dde90(uVar3,uVar7,uVar4,uVar8,uVar18,uVar10);
    uStack_68 = 3;
    uStack_90 = uVar12;
    uStack_88 = uVar16 & 1;
    uStack_80 = uVar19;
    uStack_78 = uVar21;
    uStack_70 = uVar17 & 1;
    func_0x000107c61174(uVar15);
    func_0x0001007d6d78(&uStack_90);
    func_0x0001023dde90(uVar12,uVar5,uVar19,uVar2,uVar6,uVar9);
    func_0x0001023dde90(uVar12,uVar5,uVar19,uVar2,uVar6,uVar9);
    func_0x000107c61170(uVar15);
  }
  return;
}



/* Entry: 1023dd8ac; end: 1023dd8f3; -[SCPreviewFeatureAudioEffectsToolbarItemManager updateButtonAppearance:] */

void FUN_1023dd8ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_1023dd560(param_3);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1023dd8f4; end: 1023dda5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1023dd8f4(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  uVar1 = *(ulong *)(unaff_x20 + _DAT_112e94248);
  func_0x000107c3ce84();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c4f1c0();
  func_0x000107c615e8();
  if (uVar2 == 2) {
    func_0x0001023dc1ec();
    puVar3 = PTR_PTR_1126b0c40;
    func_0x000107c61168(PTR_PTR_1126b0c40);
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c5af88();
    func_0x000107c61180();
    if ((uVar1 & 1) == 0) {
      uVar5 = 0x27a;
    }
    else {
      uVar5 = 0x279;
    }
  }
  else {
    if (uVar2 != 1) {
      return (undefined *)0x0;
    }
    func_0x0001023dc1ec();
    puVar3 = PTR_PTR_1126b0c40;
    func_0x000107c61168(PTR_PTR_1126b0c40);
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c5af88();
    func_0x000107c61180();
    if ((uVar1 & 1) == 0) {
      uVar5 = 0x277;
    }
    else {
      uVar5 = 0x278;
    }
  }
  func_0x000107c45098(0x4038000000000000,0x4038000000000000,puVar3,param_2,uVar5,puVar4);
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  return puVar3;
}



/* Entry: 1023dda5c; end: 1023dda6b;  */

void FUN_1023dda5c(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 1023dda6c; end: 1023ddc77;  */

undefined * FUN_1023dda6c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1023ddb6c);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112e94278;
    func_0x0001000285a8(0x112e94278,&UNK_10da9f9b0);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x1d;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 2) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c610b4(puVar1,puVar4,uVar6 << 2);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 4 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar6 << 2);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 1023ddc78; end: 1023dde8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023ddc78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long unaff_x20;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  func_0x000107c614f0();
  lVar2 = _DAT_112e941e0;
  func_0x000107c61614(unaff_x20 + _DAT_112e941e0,0);
  lVar3 = _DAT_112e941e8;
  func_0x000107c61614(unaff_x20 + _DAT_112e941e8,0);
  lVar4 = _DAT_112e941f0;
  func_0x000107c61614(unaff_x20 + _DAT_112e941f0,0);
  lVar6 = _DAT_112e94200;
  func_0x000107c61614(unaff_x20 + _DAT_112e94200,0);
  lVar5 = _DAT_112e941f8;
  func_0x000107c61614(unaff_x20 + _DAT_112e941f8,0);
  lVar7 = _DAT_112e94208;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_80 = 1;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_68 = 0;
  func_0x0001000285a8(0x112e941c8,&UNK_10da9f930);
  func_0x000107c613fc();
  puVar8 = &uStack_90;
  func_0x00010042e6a0();
  *(undefined8 **)(unaff_x20 + lVar7) = puVar8;
  puVar8 = (undefined8 *)(unaff_x20 + _DAT_112e94210);
  puVar8[1] = 0;
  *puVar8 = 0;
  puVar8[2] = 1;
  puVar8[4] = 0;
  puVar8[3] = 0;
  *(undefined1 *)(puVar8 + 5) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e94218) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e94220) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e94228) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e94230) = 0;
  func_0x000107c61614(unaff_x20 + _DAT_112e941d0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112e941d8,0);
  *(undefined8 *)(unaff_x20 + _DAT_112e94238) = param_1;
  func_0x000107c61604(unaff_x20 + lVar2,param_2);
  func_0x000107c61604(unaff_x20 + lVar3,param_3);
  func_0x000107c61604(unaff_x20 + lVar4,param_4);
  func_0x000107c61604(unaff_x20 + lVar6,param_5);
  func_0x000107c61604(unaff_x20 + lVar5,param_6);
  *(undefined8 *)(unaff_x20 + _DAT_112e94240) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112e94248) = param_8;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c615f0(param_1);
  func_0x000107c61154(&stack0xffffffffffffff60,puVar1);
  return;
}



/* Entry: 1023dde90; end: 1023ddeb7;  */

void FUN_1023dde90(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1023ddeb8; end: 1023dded7;  */

void FUN_1023ddeb8(void)

{
  func_0x000107c61168(&PTR_PTR_11283b2d8);
  return;
}



/* Entry: 1023dded8; end: 1023de0b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023dded8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  long lVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined1 auStack_a8 [24];
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_a8,0,0);
  lVar3 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    puVar7 = &UNK_1104ff5b8;
    puVar4 = puVar7;
    func_0x000107c613fc(&UNK_1104ff5b8,0x18,7);
    func_0x000107c61614(puVar4 + 0x10,lVar3);
    puVar5 = PTR__OBJC_CLASS___UIViewPropertyAnimator_1126b0db0;
    func_0x000107c610f8();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_70 = FUN_1023de0d0;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000f6b44;
    puStack_78 = &UNK_1104ff5f8;
    ppuVar6 = &puStack_90;
    puStack_68 = puVar4;
    func_0x000107c60bc4(ppuVar6);
    puVar2 = puStack_68;
    func_0x000107c6157c(puVar4);
    func_0x000107c61574(puVar2);
    func_0x000107c4670c(0x3fe0000000000000);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c61574(puVar4);
    func_0x000107c613fc(&UNK_1104ff5b8,0x18,7);
    func_0x000107c61614(puVar7 + 0x10,lVar3);
    pcStack_70 = (code *)0x1023de138;
    puStack_90 = puVar1;
    uStack_88 = 0x42000000;
    puStack_80 = (undefined *)0x1023dda20;
    puStack_78 = &UNK_1104ff620;
    ppuVar6 = &puStack_90;
    puStack_68 = puVar7;
    func_0x000107c60bc4(ppuVar6);
    func_0x000107c61574(puStack_68);
    func_0x000107c3d62c(puVar5);
    func_0x000107c60bd0(ppuVar6);
    lVar8 = _DAT_112e94218;
    uVar9 = *(undefined8 *)(lVar3 + _DAT_112e94218);
    *(undefined **)(lVar3 + _DAT_112e94218) = puVar5;
    func_0x000107c61174(puVar5);
    func_0x000107c61170(uVar9);
    lVar8 = *(long *)(lVar3 + lVar8);
    if (lVar8 != 0) {
      func_0x000107c61174();
      func_0x000107c5ba5c();
      func_0x000107c61170(lVar8);
    }
    func_0x000107c61170(puVar5);
    func_0x000107c61170(lVar3);
  }
  return;
}



/* Entry: 1023de0b4; end: 1023de0cf;  */

void FUN_1023de0b4(long param_1,long param_2)

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



/* Entry: 1023de0d0; end: 1023de1a3;  */

void FUN_1023de0d0(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x0001023dc054();
    func_0x000107c61170(lVar1);
    func_0x000107c526c0(0,lVar2);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 1023de1a4; end: 1023de1b3;  */

void FUN_1023de1a4(long param_1,long param_2)

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



/* Entry: 1023de1b4; end: 1023de1e7;  */

void FUN_1023de1b4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 1023de1e8; end: 1023de1ef;  */

void FUN_1023de1e8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1023de1f0; end: 1023de213;  */

void FUN_1023de1f0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1023de214; end: 1023de2bf;  */

void FUN_1023de214(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c3ce84();
  func_0x000107c61180();
  uVar2 = 0;
  func_0x000103bf1ed0(0);
  func_0x000107c610f8();
  func_0x000103bf1774(uVar1,uVar2);
  func_0x000103bf2074(0);
  func_0x000107c610f8();
  func_0x000107c61174();
  uVar2 = uVar1;
  func_0x000103bf1f60();
  uVar3 = 0;
  func_0x000103bf2204(0);
  func_0x000107c610f8();
  func_0x000103bf20f0(uVar2,uVar3);
  func_0x000107c61170(uVar1);
  *param_1 = uVar2;
  return;
}



/* Entry: 1023de2c0; end: 1023de33b;  */

void FUN_1023de2c0(undefined8 param_1)

{
  if (lRam0000000112e942a8 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e6d414c);
  return;
}



/* Entry: 1023de33c; end: 1023de42f;  */

void FUN_1023de33c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 1023de430; end: 1023de437;  */

void FUN_1023de430(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1023de438; end: 1023de4d7;  */

void FUN_1023de438(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1023de4d8; end: 1023de583;  */

void FUN_1023de4d8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c3ce84();
  func_0x000107c61180();
  uVar2 = 0;
  func_0x000103bf1ed0(0);
  func_0x000107c610f8();
  func_0x000103bf1774(uVar1,uVar2);
  func_0x000103bf2074(0);
  func_0x000107c610f8();
  func_0x000107c61174();
  uVar2 = uVar1;
  func_0x000103bf1f60();
  uVar3 = 0;
  func_0x000103bf2394(0);
  func_0x000107c610f8();
  func_0x000103bf2280(uVar2,uVar3);
  func_0x000107c61170(uVar1);
  *param_1 = uVar2;
  return;
}



/* Entry: 1023de584; end: 1023de58f; -[SCAIRemixScopedPreviewFeatureCTLensAiModeConfigurationServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023de584(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e94420;
  func_0x000107c61428(param_1 + _DAT_112e94420,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1023de590; end: 1023de59b; -[SCAIRemixScopedPreviewFeatureCTLensAiModeConfigurationServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023de590(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e94420;
  func_0x000107c61428(param_1 + _DAT_112e94420,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1023de59c; end: 1023de5a7; -[SCAIRemixScopedPreviewFeatureCTLensAiModeConfigurationServiceProvider previewABServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023de59c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e94428;
  func_0x000107c61428(param_1 + _DAT_112e94428,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1023de5a8; end: 1023de5eb;  */

void FUN_1023de5a8(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1023de5ec; end: 1023de5f7; -[SCAIRemixScopedPreviewFeatureCTLensAiModeConfigurationServiceProvider setPreviewABServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023de5ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e94428;
  func_0x000107c61428(param_1 + _DAT_112e94428,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1023de5f8; end: 1023de64b;  */

void FUN_1023de5f8(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1023de64c; end: 1023de79b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023de64c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c4f0b0();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c61170(lVar1);
    }
    else {
      lVar3 = 0;
      FUN_1023de2c0();
      func_0x000107c613fc();
      *(long *)(lVar3 + 0x10) = lVar2;
      uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112e94430);
      *(long *)(unaff_x20 + _DAT_112e94430) = lVar3;
      func_0x000107c61174(lVar2);
      func_0x000107c6157c(lVar3);
      func_0x000107c61574(uVar6);
      uVar4 = *(undefined8 *)(lVar3 + 0x10);
      func_0x000107c3ce84(uVar4);
      func_0x000107c61180();
      uVar6 = 0;
      func_0x000103bf1ed0(0);
      func_0x000107c610f8();
      func_0x000103bf1774(uVar4,uVar6);
      func_0x000103bf2074(0);
      func_0x000107c610f8();
      func_0x000107c61174(uVar4);
      uVar6 = uVar4;
      func_0x000103bf1f60();
      uVar5 = 0;
      func_0x000103bf2204(0);
      func_0x000107c610f8();
      func_0x000103bf20f0(uVar6,uVar5);
      func_0x000107c61170(lVar1);
      func_0x000107c61170(lVar2);
      func_0x000107c61574(lVar3);
      func_0x000107c61170(uVar4);
    }
  }
  return;
}



/* Entry: 1023de79c; end: 1023de827; -[SCAIRemixScopedPreviewFeatureCTLensAiModeConfigurationServiceProvider provide] */

void FUN_1023de79c(long param_1)

{
  code *pcVar1;
  long lVar2;
  
  func_0x000107c61174();
  lVar2 = param_1;
  FUN_1023de64c();
  if (lVar2 != 0) {
    func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
    return;
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
                      "PreviewFeatureCTLensAiModeConfigurationImpl/SCAIRemixScopedPreviewFeatureCTLensAiModeConfigurationServiceProvider.swift"
                      ,0x77,2,0x19,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1023de828);
  (*pcVar1)();
}



/* Entry: 1023de828; end: 1023de85b; -[SCAIRemixScopedPreviewFeatureCTLensAiModeConfigurationServiceProvider __safeProvide] */

void FUN_1023de828(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1023de64c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1023de85c; end: 1023de89f; -[SCAIRemixScopedPreviewFeatureCTLensAiModeConfigurationServiceProvider end] */

void FUN_1023de85c(undefined8 param_1)

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



/* Entry: 1023de8a0; end: 1023dea37;  */

void FUN_1023de8a0(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffef) || (param_3 != -0x7ffffffef10dfd20)) {
      uVar2 = 0xd000000000000011;
      func_0x000107c605b8(0xd000000000000011,0x800000010ef202e0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "PreviewFeatureCTLensAiModeConfigurationImpl/SCAIRemixScopedPreviewFeatureCTLensAiModeConfigurationServiceProvider.swift"
                            ,0x77,2,0x2e,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1023dea38);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c57768();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1023dea38; end: 1023deae3; -[SCAIRemixScopedPreviewFeatureCTLensAiModeConfigurationServiceProvider setValue:forIvarName:] */

void FUN_1023dea38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1023de8a0(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}


