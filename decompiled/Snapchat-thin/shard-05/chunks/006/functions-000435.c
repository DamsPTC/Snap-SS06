/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103fdc97c; end: 103fdca3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fdc97c(undefined4 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(byte *)(unaff_x20 + _DAT_113042760) = (byte)param_1 & 1;
  *(byte *)(unaff_x20 + _DAT_113042768) = (byte)((uint)param_1 >> 8) & 1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103fdca3c; end: 103fdca3f; -[SCPlusStoreKitEligibleOfferInfo copyWithZone:] */

void FUN_103fdca3c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103fdca40; end: 103fdca5b; -[SCPlusStoreKitEligibleOfferInfo description] */

void FUN_103fdca40(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103fdca5c; end: 103fdcaf7; -[SCPlusStoreKitEligibleOfferInfo init] */

void FUN_103fdca5c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "PlusStoreKitServices/PlusStoreKitEligibleOfferInfoWrapper.swift",0x3f,2,0x2c,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103fdcaa4);
  (*pcVar1)();
}



/* Entry: 103fdcaf8; end: 103fdcb03; -[SCPlusStoreKitPromotionalOffer offerIdentifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fdcaf8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113042798);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113042798))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103fdcb04; end: 103fdcb0f; -[SCPlusStoreKitPromotionalOffer keyIdentifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fdcb04(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_1130427a0);
  uVar1 = ((undefined8 *)(param_1 + _DAT_1130427a0))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103fdcb10; end: 103fdcba7; -[SCPlusStoreKitPromotionalOffer nonce] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fdcb10(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  __s10Foundation4UUIDVMa();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = &stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar2 = puVar3;
  (**(code **)(lVar4 + 0x10))(puVar3,param_1 + _DAT_113812988,lVar1);
  __s10Foundation4UUIDV19_bridgeToObjectiveCSo6NSUUIDCyF();
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 103fdcba8; end: 103fdcbb3; -[SCPlusStoreKitPromotionalOffer signature] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fdcba8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113812990);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113812990))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103fdcbb4; end: 103fdcbfb;  */

void FUN_103fdcbb4(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  uVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103fdcbfc; end: 103fdcc0b; -[SCPlusStoreKitPromotionalOffer timestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fdcbfc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113812998));
  return;
}



/* Entry: 103fdcc0c; end: 103fdcd0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_103fdcc0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_70 [8];
  
  puVar4 = auStack_70;
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113042798);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130427a0);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  lVar2 = _DAT_113812988;
  lVar3 = 0;
  __s10Foundation4UUIDVMa();
  lVar5 = *(long *)(lVar3 + -8);
  (**(code **)(lVar5 + 0x10))(unaff_x20 + lVar2,param_5,lVar3);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113812990);
  *puVar1 = param_6;
  puVar1[1] = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_113812998) = param_8;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  (**(code **)(lVar5 + 8))(param_5,lVar3);
  return puVar4;
}



/* Entry: 103fdcd0c; end: 103fdce77; -[SCPlusStoreKitPromotionalOffer initWithOfferIdentifier:keyIdentifier:nonce:signature:timestamp:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_103fdcd0c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long extraout_x8;
  long lVar8;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar3 = param_1;
  _swift_getObjectType();
  lVar4 = 0;
  lStack_78 = lVar3;
  __s10Foundation4UUIDVMa();
  lVar8 = *(long *)(lVar4 + -8);
  lStack_80 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar4 = (long)&lStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  uVar6 = param_2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  uVar7 = uVar6;
  __s10Foundation4UUIDV36_unconditionallyBridgeFromObjectiveCyACSo6NSUUIDCSgFZ(lVar4,param_5);
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  lVar3 = lStack_80;
  puVar1 = (undefined8 *)(param_1 + _DAT_113042798);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(param_1 + _DAT_1130427a0);
  *puVar1 = param_4;
  puVar1[1] = uVar6;
  (**(code **)(lVar8 + 0x10))(param_1 + _DAT_113812988,lVar4,lStack_80);
  puVar1 = (undefined8 *)(param_1 + _DAT_113812990);
  *puVar1 = param_6;
  puVar1[1] = uVar7;
  *(undefined8 *)(param_1 + _DAT_113812998) = param_7;
  puVar2 = PTR_s_init_1125d9248;
  lStack_68 = lStack_78;
  lStack_70 = param_1;
  _objc_retain(param_7);
  plVar5 = &lStack_70;
  _objc_msgSendSuper2(plVar5,puVar2);
  (**(code **)(lVar8 + 8))(lVar4,lVar3);
  return plVar5;
}



/* Entry: 103fdce78; end: 103fdcea7;  */

void FUN_103fdce78(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_103fdcea8(param_1);
  return;
}



/* Entry: 103fdcea8; end: 103fdcfc7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103fdcea8(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 *puVar11;
  long unaff_x20;
  undefined8 uVar12;
  
  puVar11 = &stack0xffffffffffffffa0;
  _swift_getObjectType();
  uVar3 = param_1[1];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113042798);
  *puVar1 = *param_1;
  puVar1[1] = uVar3;
  uVar4 = param_1[3];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130427a0);
  *puVar1 = param_1[2];
  puVar1[1] = uVar4;
  lVar9 = 0;
  FUN_103fda774();
  lVar8 = _DAT_113812988;
  iVar6 = *(int *)(lVar9 + 0x18);
  lVar10 = 0;
  __s10Foundation4UUIDVMa();
  (**(code **)(*(long *)(lVar10 + -8) + 0x10))(unaff_x20 + lVar8,(long)param_1 + (long)iVar6,lVar10)
  ;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar9 + 0x1c));
  uVar5 = puVar1[1];
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_113812990);
  *puVar2 = *puVar1;
  puVar2[1] = uVar5;
  uVar12 = *(undefined8 *)((long)param_1 + (long)*(int *)(lVar9 + 0x20));
  *(undefined8 *)(unaff_x20 + _DAT_113812998) = uVar12;
  puVar7 = PTR_s_init_1125d9248;
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
  _swift_bridgeObjectRetain(uVar5);
  _objc_retain(uVar12);
  _objc_msgSendSuper2(&stack0xffffffffffffffa0,puVar7);
  FUN_103fdcfc8(param_1);
  return puVar11;
}



/* Entry: 103fdcfc8; end: 103fdd003;  */

undefined8 FUN_103fdcfc8(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_103fda774();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 103fdd004; end: 103fdd007; -[SCPlusStoreKitPromotionalOffer copyWithZone:] */

void FUN_103fdd004(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103fdd008; end: 103fdd12f; -[SCPlusStoreKitPromotionalOffer description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fdd008(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long extraout_x8;
  undefined8 *puVar10;
  undefined8 uVar11;
  
  lVar7 = 0;
  FUN_103fda774();
  lVar8 = lVar7;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  lVar6 = _DAT_113812988;
  lVar9 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar10 = (undefined8 *)(&stack0xffffffffffffffb0 + lVar9);
  uVar2 = ((undefined8 *)(param_1 + _DAT_113042798))[1];
  *puVar10 = *(undefined8 *)(param_1 + _DAT_113042798);
  *(undefined8 *)(&stack0xffffffffffffffb8 + lVar9) = uVar2;
  uVar3 = ((undefined8 *)(param_1 + _DAT_1130427a0))[1];
  *(undefined8 *)(&stack0xffffffffffffffc0 + lVar9) = *(undefined8 *)(param_1 + _DAT_1130427a0);
  *(undefined8 *)(&stack0xffffffffffffffc8 + lVar9) = uVar3;
  iVar5 = *(int *)(lVar8 + 0x18);
  lVar9 = 0;
  __s10Foundation4UUIDVMa();
  (**(code **)(*(long *)(lVar9 + -8) + 0x10))((long)puVar10 + (long)iVar5,param_1 + lVar6,lVar9);
  uVar4 = ((undefined8 *)(param_1 + _DAT_113812990))[1];
  puVar1 = (undefined8 *)((long)puVar10 + (long)*(int *)(lVar7 + 0x1c));
  *puVar1 = *(undefined8 *)(param_1 + _DAT_113812990);
  puVar1[1] = uVar4;
  uVar11 = *(undefined8 *)(param_1 + _DAT_113812998);
  *(undefined8 *)((long)puVar10 + (long)*(int *)(lVar7 + 0x20)) = uVar11;
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
  _objc_retain(uVar11);
  FUN_103fdcfc8(puVar10);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103fdd130; end: 103fdd1ab; -[SCPlusStoreKitPromotionalOffer init] */

void FUN_103fdd130(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "PlusStoreKitServices/PlusStoreKitPromotionalOfferWrapper.swift",0x3e,2,0x38,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103fdd178);
  (*pcVar1)();
}



/* Entry: 103fdd1ac; end: 103fdd233; -[SCPlusStoreKitPromotionalOffer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fdd1ac(long param_1)

{
  long lVar1;
  long lVar2;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113042798 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130427a0 + 8));
  lVar1 = _DAT_113812988;
  lVar2 = 0;
  __s10Foundation4UUIDVMa();
  (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1 + lVar1,lVar2);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113812990 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113812998));
  return;
}



/* Entry: 103fdd234; end: 103fdd23b;  */

void FUN_103fdd234(void)

{
  if (lRam00000001130427d0 != 0) {
    return;
  }
  _swift_getSingletonMetadata(0,&DAT_10e7e0750);
  return;
}



/* Entry: 103fdd23c; end: 103fdd273;  */

void FUN_103fdd23c(undefined8 param_1)

{
  if (lRam00000001130427d0 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e7e0750);
  return;
}



/* Entry: 103fdd274; end: 103fdd2fb;  */

void FUN_103fdd274(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puStack_48 = &UNK_10dcbc718;
  puStack_40 = &UNK_10dcbc718;
  lVar1 = 0x13f;
  __s10Foundation4UUIDVMa();
  if (param_2 < 0x40) {
    lStack_38 = *(long *)(lVar1 + -8) + 0x40;
    puStack_30 = &UNK_10dcbc718;
    puStack_28 = PTR___sBOWV_11034d658 + 0x40;
    _swift_updateClassMetadata2(param_1,0x100,5,&puStack_48,param_1 + 0x50);
  }
  return;
}



/* Entry: 103fdd2fc; end: 103fdd307; -[SCPlusStoreKitProduct productIdentifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fdd2fc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_1130427e0);
  uVar1 = ((undefined8 *)(param_1 + _DAT_1130427e0))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103fdd308; end: 103fdd313; -[SCPlusStoreKitProduct localizedTitle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fdd308(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_1130427e8);
  uVar1 = ((undefined8 *)(param_1 + _DAT_1130427e8))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103fdd314; end: 103fdd31f; -[SCPlusStoreKitProduct localizedDescription] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fdd314(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_1130427f0);
  uVar1 = ((undefined8 *)(param_1 + _DAT_1130427f0))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103fdd320; end: 103fdd367;  */

void FUN_103fdd320(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  uVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103fdd368; end: 103fdd377; -[SCPlusStoreKitProduct price] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fdd368(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130427f8));
  return;
}



/* Entry: 103fdd378; end: 103fdd387; -[SCPlusStoreKitProduct subscriptionPeriod] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fdd378(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113042800));
  return;
}



/* Entry: 103fdd388; end: 103fdd397; -[SCPlusStoreKitProduct introductoryDiscount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fdd388(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113042808));
  return;
}



/* Entry: 103fdd398; end: 103fdd3e7; -[SCPlusStoreKitProduct discounts] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fdd398(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113042810);
  FUN_103fdeb5c(0);
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103fdd3e8; end: 103fdd4cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fdd3e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130427e0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130427e8);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130427f0);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_1130427f8) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_113042800) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_113042808) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_113042810) = param_10;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103fdd4cc; end: 103fdd60f; -[SCPlusStoreKitProduct initWithProductIdentifier:localizedTitle:localizedDescription:price:subscriptionPeriod:introductoryDiscount:discounts:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fdd4cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lStack_70;
  long lStack_68;
  
  lVar3 = param_1;
  _swift_getObjectType();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  uVar5 = param_2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  uVar6 = uVar5;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  uVar4 = 0;
  FUN_103fdeb5c(0);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_9,uVar4);
  puVar1 = (undefined8 *)(param_1 + _DAT_1130427e0);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(param_1 + _DAT_1130427e8);
  *puVar1 = param_4;
  puVar1[1] = uVar5;
  puVar1 = (undefined8 *)(param_1 + _DAT_1130427f0);
  *puVar1 = param_5;
  puVar1[1] = uVar6;
  *(undefined8 *)(param_1 + _DAT_1130427f8) = param_6;
  *(undefined8 *)(param_1 + _DAT_113042800) = param_7;
  *(undefined8 *)(param_1 + _DAT_113042808) = param_8;
  *(undefined8 *)(param_1 + _DAT_113042810) = param_9;
  puVar2 = PTR_s_init_1125d9248;
  lStack_70 = param_1;
  lStack_68 = lVar3;
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_msgSendSuper2(&lStack_70,puVar2);
  return;
}



/* Entry: 103fdd610; end: 103fdd63f;  */

void FUN_103fdd610(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_103fdd640(param_1);
  return;
}



/* Entry: 103fdd640; end: 103fddaf7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fdd640(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long unaff_x20;
  undefined *puVar16;
  long lStack_250;
  undefined *puStack_248;
  long lStack_238;
  long lStack_230;
  undefined1 auStack_228 [16];
  long lStack_218;
  long lStack_210;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  undefined1 auStack_1e8 [88];
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  long lStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _swift_getObjectType();
  uStack_d8 = param_1[1];
  uStack_e0 = *param_1;
  uStack_e8 = param_1[3];
  uStack_f0 = param_1[2];
  puVar11 = (undefined8 *)(unaff_x20 + _DAT_1130427e0);
  puVar11[1] = uStack_d8;
  *puVar11 = uStack_e0;
  puVar11 = (undefined8 *)(unaff_x20 + _DAT_1130427e8);
  puVar11[1] = uStack_e8;
  *puVar11 = uStack_f0;
  uStack_f8 = param_1[5];
  uStack_100 = param_1[4];
  puVar11 = (undefined8 *)(unaff_x20 + _DAT_1130427f0);
  puVar11[1] = uStack_f8;
  *puVar11 = uStack_100;
  uVar14 = param_1[6];
  uStack_118 = param_1[8];
  uStack_120 = param_1[7];
  uStack_108 = param_1[10];
  uStack_110 = param_1[9];
  lVar7 = 0;
  FUN_103fdee64();
  lVar15 = lVar7;
  _objc_allocWithZone();
  *(undefined8 *)(lVar15 + _DAT_1130428a0) = uVar14;
  uVar14 = param_1[7];
  puVar11 = (undefined8 *)(lVar15 + _DAT_1130428a8);
  puVar11[1] = param_1[8];
  *puVar11 = uVar14;
  uVar14 = param_1[9];
  puVar11 = (undefined8 *)(lVar15 + _DAT_1130428b0);
  puVar11[1] = param_1[10];
  *puVar11 = uVar14;
  func_0x000100402194(&uStack_e0,&uStack_d0);
  func_0x000100402194(&uStack_f0,&uStack_d0);
  func_0x000100402194(&uStack_100,&uStack_d0);
  func_0x000100402194(&uStack_120,&uStack_d0);
  func_0x000100402194(&uStack_110,&uStack_d0);
  plVar8 = &lStack_130;
  lStack_130 = lVar15;
  lStack_128 = lVar7;
  _objc_msgSendSuper2(plVar8,PTR_s_init_1125d9248);
  plVar9 = (long *)0x0;
  *(long **)(unaff_x20 + _DAT_1130427f8) = plVar8;
  if (*(char *)(param_1 + 0xd) != '\x01') {
    uVar14 = param_1[0xb];
    uVar2 = param_1[0xc];
    lVar10 = 0;
    func_0x000103fdf00c();
    lVar15 = lVar10;
    _objc_allocWithZone();
    *(undefined8 *)(lVar15 + _DAT_1130428e0) = uVar14;
    *(undefined8 *)(lVar15 + _DAT_1130428e8) = uVar2;
    plVar9 = &lStack_238;
    lStack_238 = lVar15;
    lStack_230 = lVar10;
    _objc_msgSendSuper2(plVar9,PTR_s_init_1125d9248);
  }
  *(long **)(unaff_x20 + _DAT_113042800) = plVar9;
  lVar15 = param_1[0x12];
  if (lVar15 == 0) {
    puVar11 = (undefined8 *)0x0;
  }
  else {
    uStack_c8 = param_1[0xf];
    uStack_d0 = param_1[0xe];
    uStack_b8 = param_1[0x11];
    uStack_c0 = param_1[0x10];
    uStack_a0 = param_1[0x14];
    uStack_a8 = param_1[0x13];
    uStack_90 = param_1[0x16];
    uStack_98 = param_1[0x15];
    uStack_80 = param_1[0x18];
    uStack_88 = param_1[0x17];
    lStack_b0 = lVar15;
    FUN_103fdeb5c(0);
    _objc_allocWithZone();
    uStack_188 = param_1[0xf];
    uStack_190 = param_1[0xe];
    uStack_178 = param_1[0x11];
    uStack_180 = param_1[0x10];
    uStack_160 = param_1[0x14];
    uStack_168 = param_1[0x13];
    uStack_150 = param_1[0x16];
    uStack_158 = param_1[0x15];
    uStack_140 = param_1[0x18];
    uStack_148 = param_1[0x17];
    lStack_170 = lVar15;
    FUN_103fddc74(&uStack_190,auStack_1e8);
    puVar11 = &uStack_d0;
    func_0x000103fde7fc();
  }
  *(undefined8 **)(unaff_x20 + _DAT_113042808) = puVar11;
  lVar15 = param_1[0x19];
  lStack_250 = *(long *)(lVar15 + 0x10);
  if (lStack_250 == 0) {
    func_0x000103fddcb0(param_1);
    puVar16 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puStack_138 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_103fddc58(0,lStack_250,0);
    puStack_248 = puStack_138;
    puVar11 = (undefined8 *)(lVar15 + 0x20);
    lVar15 = 0;
    FUN_103fdeb5c();
    while( true ) {
      lStack_250 = lStack_250 + -1;
      uStack_188 = puVar11[1];
      uStack_190 = *puVar11;
      uStack_178 = puVar11[3];
      uStack_180 = puVar11[2];
      uStack_168 = puVar11[5];
      lStack_170 = puVar11[4];
      uStack_158 = puVar11[7];
      uStack_160 = puVar11[6];
      uStack_148 = puVar11[9];
      uStack_150 = puVar11[8];
      uStack_140 = puVar11[10];
      lVar12 = lVar15;
      _objc_allocWithZone();
      uVar6 = uStack_160;
      uVar5 = uStack_168;
      lVar10 = lStack_170;
      uVar4 = uStack_178;
      uVar2 = uStack_180;
      uVar14 = uStack_188;
      puVar3 = (undefined8 *)(lVar12 + _DAT_113042850);
      puVar3[1] = uStack_188;
      *puVar3 = uStack_190;
      lVar13 = lVar7;
      _objc_allocWithZone();
      *(undefined8 *)(lVar13 + _DAT_1130428a0) = uVar2;
      puVar3 = (undefined8 *)(lVar13 + _DAT_1130428a8);
      *puVar3 = uVar4;
      puVar3[1] = lVar10;
      puVar3 = (undefined8 *)(lVar13 + _DAT_1130428b0);
      *puVar3 = uVar5;
      puVar3[1] = uVar6;
      FUN_103fddc74(&uStack_190,auStack_1e8);
      puVar16 = PTR_s_init_1125d9248;
      lStack_1f8 = lVar13;
      lStack_1f0 = lVar7;
      _swift_bridgeObjectRetain(uVar14);
      _swift_bridgeObjectRetain(lVar10);
      _swift_bridgeObjectRetain(uVar6);
      plVar8 = &lStack_1f8;
      _objc_msgSendSuper2(plVar8,puVar16);
      uVar2 = uStack_150;
      uVar14 = uStack_158;
      *(long **)(lVar12 + _DAT_113042858) = plVar8;
      lVar13 = 0;
      func_0x000103fdf00c();
      lVar10 = lVar13;
      _objc_allocWithZone();
      *(undefined8 *)(lVar10 + _DAT_1130428e0) = uVar14;
      *(undefined8 *)(lVar10 + _DAT_1130428e8) = uVar2;
      plVar8 = &lStack_208;
      lStack_208 = lVar10;
      lStack_200 = lVar13;
      _objc_msgSendSuper2(plVar8,PTR_s_init_1125d9248);
      *(long **)(lVar12 + _DAT_113042860) = plVar8;
      *(undefined8 *)(lVar12 + _DAT_113042868) = uStack_148;
      func_0x000103fdb2c8(&uStack_190);
      *(undefined8 *)(lVar12 + _DAT_113042870) = uStack_140;
      plVar8 = &lStack_218;
      lStack_218 = lVar12;
      lStack_210 = lVar15;
      _objc_msgSendSuper2(plVar8,PTR_s_init_1125d9248);
      puStack_138 = puStack_248;
      uVar1 = *(ulong *)(puStack_248 + 0x10);
      if (*(ulong *)(puStack_248 + 0x18) >> 1 <= uVar1) {
        FUN_103fddc58(1 < *(ulong *)(puStack_248 + 0x18),uVar1 + 1,1);
      }
      puVar16 = puStack_138;
      *(ulong *)(puStack_138 + 0x10) = uVar1 + 1;
      *(long **)(puStack_138 + uVar1 * 8 + 0x20) = plVar8;
      if (lStack_250 == 0) break;
      puVar11 = puVar11 + 0xb;
      puStack_248 = puStack_138;
    }
    func_0x000103fddcb0(param_1);
  }
  *(undefined **)(unaff_x20 + _DAT_113042810) = puVar16;
  _objc_msgSendSuper2(auStack_228,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103fddaf8; end: 103fddafb; -[SCPlusStoreKitProduct copyWithZone:] */

void FUN_103fddaf8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103fddafc; end: 103fddb47; -[SCPlusStoreKitProduct description] */

void FUN_103fddafc(undefined8 param_1)

{
  undefined1 auStack_f0 [208];
  
  _objc_retain();
  FUN_103fde140(auStack_f0);
  _objc_release(param_1);
  func_0x000103fddcb0(auStack_f0);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103fddb48; end: 103fddbc3; -[SCPlusStoreKitProduct init] */

void FUN_103fddb48(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "PlusStoreKitServices/PlusStoreKitProductWrapper.swift",0x35,2,0x47,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103fddb90);
  (*pcVar1)();
}



/* Entry: 103fddbc4; end: 103fddc57; -[SCPlusStoreKitProduct .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fddbc4(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130427e0 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130427e8 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130427f0 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130427f8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113042800));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113042808));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113042810));
  return;
}



/* Entry: 103fddc58; end: 103fddc73;  */

void FUN_103fddc58(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_103fddd00();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 103fddc74; end: 103fddce3;  */

undefined8 FUN_103fddc74(undefined8 param_1,undefined8 param_2)

{
  (*(code *)(undefined *)0x103fdb548)(param_2,param_1);
  return param_2;
}



/* Entry: 103fddce4; end: 103fddcff;  */

void FUN_103fddce4(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_103fdde24();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 103fddd00; end: 103fdde23;  */

undefined * FUN_103fddd00(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103fdde24);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = param_1;
    FUN_103fddf48();
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if (((ulong)param_1 & 1) == 0) {
    uVar5 = 0;
    FUN_103fdeb5c(0);
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      _memmove(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Entry: 103fdde24; end: 103fddf47;  */

undefined * FUN_103fdde24(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103fddf48);
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
    puVar3 = (undefined *)0x113042840;
    func_0x0001000285a8(0x113042840,&UNK_10dcbc748);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x58) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar4,puVar1,uVar6,&UNK_110730198);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x58 <= puVar4) {
      _memmove(puVar4,puVar1,uVar6 * 0x58);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Entry: 103fddf48; end: 103fddfa3;  */

void FUN_103fddf48(void)

{
  int iVar1;
  ulong *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar4 = 0;
    FUN_103fdeb5c();
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x113042848;
  plVar5 = (long *)&UNK_10dcbc750;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 103fddfa4; end: 103fde13f;  */

ulong FUN_103fddfa4(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103fde074);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103fde078);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    FUN_103fdeb5c(0);
    uVar3 = param_1;
    _swift_unknownObjectRetain();
    _swift_dynamicCastClass();
    if (uVar3 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar4 = 0xd000000000000043;
  }
  else {
    uVar3 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar3 = param_2;
    }
    __ss18_CocoaArrayWrapperVyyXlSicig(param_1,uVar3);
    uVar4 = 0;
    FUN_103fdeb5c(0);
    uVar3 = param_1;
    _swift_dynamicCastClass(param_1,uVar4);
    if (uVar3 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar4 = 0xd000000000000046;
  }
  __sSS6appendyySSF(uVar4,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  __sSS6appendyySSF(0xd00000000000001f,0x800000010f1daae0);
  __sSS6appendyySSF(0x756f662074756220,0xeb0000000020646e);
  _swift_getObjectType(param_1);
  uVar4 = 0;
  __ss9_typeName_9qualifiedSSypXp_SbtF();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar4);
  __ss17_assertionFailure__5flagss5NeverOs12StaticStringV_SSs6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103fde140);
  (*pcVar2)();
}



/* Entry: 103fde140; end: 103fde58b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fde140(undefined8 *param_1,long param_2)

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
  code *pcVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  ulong uVar21;
  long lVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  long lVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined *puVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  ulong uVar32;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar22 = *(long *)(param_2 + _DAT_1130427f8);
  lVar26 = *(long *)(param_2 + _DAT_113042800);
  if (lVar26 == 0) {
    uVar27 = 0;
    uVar28 = 0;
  }
  else {
    uVar27 = *(undefined8 *)(lVar26 + _DAT_1130428e0);
    uVar28 = *(undefined8 *)(lVar26 + _DAT_1130428e8);
  }
  uVar1 = *(undefined8 *)(param_2 + _DAT_1130427e0);
  uVar8 = ((undefined8 *)(param_2 + _DAT_1130427e0))[1];
  uVar2 = *(undefined8 *)(param_2 + _DAT_1130427e8);
  uVar9 = ((undefined8 *)(param_2 + _DAT_1130427e8))[1];
  uVar18 = *(undefined8 *)(param_2 + _DAT_1130427f0);
  uVar19 = ((undefined8 *)(param_2 + _DAT_1130427f0))[1];
  uVar24 = *(undefined8 *)(lVar22 + _DAT_1130428a0);
  uVar3 = *(undefined8 *)(lVar22 + _DAT_1130428a8);
  uVar10 = ((undefined8 *)(lVar22 + _DAT_1130428a8))[1];
  uVar4 = *(undefined8 *)(lVar22 + _DAT_1130428b0);
  uVar17 = ((undefined8 *)(lVar22 + _DAT_1130428b0))[1];
  if (*(long *)(param_2 + _DAT_113042808) == 0) {
    uStack_160 = 0;
    uStack_158 = 0;
    uStack_168 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    uStack_1a0 = 0;
  }
  else {
    func_0x000103fdea80(&uStack_c0);
    uStack_188 = uStack_a8;
    uStack_190 = uStack_b0;
    uStack_178 = uStack_b8;
    uStack_180 = uStack_c0;
    uStack_1a8 = uStack_98;
    uStack_1b0 = uStack_a0;
    uStack_198 = uStack_88;
    uStack_1a0 = uStack_90;
    uStack_160 = uStack_78;
    uStack_158 = uStack_80;
    uStack_168 = uStack_70;
  }
  uVar21 = *(ulong *)(param_2 + _DAT_113042810);
  if (uVar21 >> 0x3e == 0) {
    uVar15 = *(ulong *)((uVar21 & 0xffffffffffffff8) + 0x10);
    puVar29 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar15 = uVar21 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar21) {
      uVar15 = uVar21;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
    puVar29 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar29;
  if (uVar15 == 0) {
    _swift_bridgeObjectRetain(uVar8);
    _swift_bridgeObjectRetain(uVar9);
    _swift_bridgeObjectRetain(uVar19);
    _swift_bridgeObjectRetain(uVar10);
    _swift_bridgeObjectRetain();
    puVar29 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    _swift_bridgeObjectRetain(uVar8);
    _swift_bridgeObjectRetain(uVar9);
    _swift_bridgeObjectRetain(uVar19);
    _swift_bridgeObjectRetain(uVar10);
    _swift_bridgeObjectRetain(uVar17);
    FUN_103fddce4(0,uVar15 & ((long)uVar15 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar15 < 0) {
                    /* WARNING: Does not return */
      pcVar14 = (code *)SoftwareBreakpoint(1,0x103fde58c);
      (*pcVar14)();
    }
    uVar32 = 0;
    do {
      if ((uVar21 & 0xc000000000000001) == 0) {
        uVar16 = *(ulong *)(uVar21 + uVar32 * 8 + 0x20);
        _objc_retain();
      }
      else {
        uVar16 = uVar32;
        FUN_103fddfa4();
      }
      lVar22 = *(long *)(uVar16 + _DAT_113042858);
      uVar25 = *(undefined8 *)(lVar22 + _DAT_1130428a0);
      uVar5 = *(undefined8 *)(uVar16 + _DAT_113042850);
      uVar11 = ((undefined8 *)(uVar16 + _DAT_113042850))[1];
      uVar6 = *(undefined8 *)(lVar22 + _DAT_1130428a8);
      uVar12 = ((undefined8 *)(lVar22 + _DAT_1130428a8))[1];
      uVar7 = *(undefined8 *)(lVar22 + _DAT_1130428b0);
      uVar13 = ((undefined8 *)(lVar22 + _DAT_1130428b0))[1];
      uVar23 = *(undefined8 *)(*(long *)(uVar16 + _DAT_113042860) + _DAT_1130428e0);
      uVar20 = *(undefined8 *)(*(long *)(uVar16 + _DAT_113042860) + _DAT_1130428e8);
      uVar30 = *(undefined8 *)(uVar16 + _DAT_113042868);
      uVar31 = *(undefined8 *)(uVar16 + _DAT_113042870);
      _swift_bridgeObjectRetain(uVar11);
      _swift_bridgeObjectRetain(uVar12);
      _swift_bridgeObjectRetain(uVar13);
      _objc_release(uVar16);
      uVar16 = *(ulong *)(puVar29 + 0x10);
      if (*(ulong *)(puVar29 + 0x18) >> 1 <= uVar16) {
        FUN_103fddce4(1 < *(ulong *)(puVar29 + 0x18),uVar16 + 1,1);
      }
      uVar32 = uVar32 + 1;
      *(ulong *)(puVar29 + 0x10) = uVar16 + 1;
      *(undefined8 *)(puVar29 + uVar16 * 0x58 + 0x20) = uVar5;
      *(undefined8 *)(puVar29 + uVar16 * 0x58 + 0x28) = uVar11;
      *(undefined8 *)(puVar29 + uVar16 * 0x58 + 0x30) = uVar25;
      *(undefined8 *)(puVar29 + uVar16 * 0x58 + 0x38) = uVar6;
      *(undefined8 *)(puVar29 + uVar16 * 0x58 + 0x40) = uVar12;
      *(undefined8 *)(puVar29 + uVar16 * 0x58 + 0x48) = uVar7;
      *(undefined8 *)(puVar29 + uVar16 * 0x58 + 0x50) = uVar13;
      *(undefined8 *)(puVar29 + uVar16 * 0x58 + 0x58) = uVar23;
      *(undefined8 *)(puVar29 + uVar16 * 0x58 + 0x60) = uVar20;
      *(undefined8 *)(puVar29 + uVar16 * 0x58 + 0x68) = uVar30;
      *(undefined8 *)(puVar29 + uVar16 * 0x58 + 0x70) = uVar31;
    } while (uVar15 != uVar32);
  }
  *param_1 = uVar1;
  param_1[1] = uVar8;
  param_1[2] = uVar2;
  param_1[3] = uVar9;
  param_1[4] = uVar18;
  param_1[5] = uVar19;
  param_1[6] = uVar24;
  param_1[7] = uVar3;
  param_1[8] = uVar10;
  param_1[9] = uVar4;
  param_1[10] = uVar17;
  param_1[0xb] = uVar27;
  param_1[0xc] = uVar28;
  *(bool *)(param_1 + 0xd) = lVar26 == 0;
  param_1[0xf] = uStack_178;
  param_1[0xe] = uStack_180;
  param_1[0x11] = uStack_188;
  param_1[0x10] = uStack_190;
  param_1[0x13] = uStack_1a8;
  param_1[0x12] = uStack_1b0;
  param_1[0x15] = uStack_198;
  param_1[0x14] = uStack_1a0;
  param_1[0x16] = uStack_158;
  param_1[0x17] = uStack_160;
  param_1[0x18] = uStack_168;
  param_1[0x19] = puVar29;
  return;
}



/* Entry: 103fde58c; end: 103fde5ab;  */

void FUN_103fde58c(void)

{
  _objc_opt_self(&PTR_PTR_1129792d8);
  return;
}



/* Entry: 103fde5ac; end: 103fde5db;  */

void FUN_103fde5ac(undefined8 param_1)

{
  _objc_allocWithZone();
  func_0x000103fde7fc(param_1);
  return;
}



/* Entry: 103fde5dc; end: 103fde637; -[SCPlusStoreKitProductDiscount identifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fde5dc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113042850))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113042850);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103fde638; end: 103fde647; -[SCPlusStoreKitProductDiscount price] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fde638(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113042858));
  return;
}



/* Entry: 103fde648; end: 103fde657; -[SCPlusStoreKitProductDiscount subscriptionPeriod] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fde648(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113042860));
  return;
}



/* Entry: 103fde658; end: 103fde667; -[SCPlusStoreKitProductDiscount numberOfPeriods] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103fde658(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113042868);
}



/* Entry: 103fde668; end: 103fde677; -[SCPlusStoreKitProductDiscount paymentMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103fde668(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113042870);
}



/* Entry: 103fde678; end: 103fde723;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fde678(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113042850);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113042858) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113042860) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_113042868) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_113042870) = param_6;
  _objc_msgSendSuper2(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103fde724; end: 103fde97f; -[SCPlusStoreKitProductDiscount initWithIdentifier:price:subscriptionPeriod:numberOfPeriods:paymentMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fde724(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_60;
  long lStack_58;
  
  lVar3 = param_1;
  _swift_getObjectType();
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_113042850);
  *plVar1 = param_3;
  plVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_113042858) = param_4;
  *(undefined8 *)(param_1 + _DAT_113042860) = param_5;
  *(undefined8 *)(param_1 + _DAT_113042868) = param_6;
  *(undefined8 *)(param_1 + _DAT_113042870) = param_7;
  puVar2 = PTR_s_init_1125d9248;
  lStack_60 = param_1;
  lStack_58 = lVar3;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_msgSendSuper2(&lStack_60,puVar2);
  return;
}



/* Entry: 103fde980; end: 103fde983; -[SCPlusStoreKitProductDiscount copyWithZone:] */

void FUN_103fde980(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103fde984; end: 103fde9b7; -[SCPlusStoreKitProductDiscount description] */

void FUN_103fde984(void)

{
  undefined1 auStack_68 [88];
  
  func_0x000103fdea80(auStack_68);
  func_0x000103fdb2c8(auStack_68);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103fde9b8; end: 103fdea33; -[SCPlusStoreKitProductDiscount init] */

void FUN_103fde9b8(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "PlusStoreKitServices/PlusStoreKitProductDiscountWrapper.swift",0x3d,2,0x37,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103fdea00);
  (*pcVar1)();
}



/* Entry: 103fdea34; end: 103fdeb5b; -[SCPlusStoreKitProductDiscount .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fdea34(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113042850 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113042858));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113042860));
  return;
}



/* Entry: 103fdeb5c; end: 103fdeb7b;  */

void FUN_103fdeb5c(void)

{
  _objc_opt_self(&PTR_PTR_1129793d0);
  return;
}



/* Entry: 103fdeb7c; end: 103fdebeb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fdeb7c(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130428a0) = *param_1;
  uVar2 = param_1[1];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130428a8);
  puVar1[1] = param_1[2];
  *puVar1 = uVar2;
  uVar2 = param_1[3];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130428b0);
  puVar1[1] = param_1[4];
  *puVar1 = uVar2;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103fdebec; end: 103fdebfb; -[SCPlusStoreKitProductPrice millis] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103fdebec(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1130428a0);
}



/* Entry: 103fdebfc; end: 103fdec07; -[SCPlusStoreKitProductPrice currencyCode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fdebfc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_1130428a8);
  uVar1 = ((undefined8 *)(param_1 + _DAT_1130428a8))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103fdec08; end: 103fdec13; -[SCPlusStoreKitProductPrice localeIdentifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fdec08(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_1130428b0);
  uVar1 = ((undefined8 *)(param_1 + _DAT_1130428b0))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103fdec14; end: 103fdec5b;  */

void FUN_103fdec14(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  uVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103fdec5c; end: 103fdece7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fdec5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130428a0) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130428a8);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130428b0);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103fdece8; end: 103fded87; -[SCPlusStoreKitProductPrice initWithMillis:currencyCode:localeIdentifier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fdece8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  _swift_getObjectType();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  uVar3 = param_2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  *(undefined8 *)(param_1 + _DAT_1130428a0) = param_3;
  puVar1 = (undefined8 *)(param_1 + _DAT_1130428a8);
  *puVar1 = param_4;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(param_1 + _DAT_1130428b0);
  *puVar1 = param_5;
  puVar1[1] = uVar3;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103fded88; end: 103fded8b; -[SCPlusStoreKitProductPrice copyWithZone:] */

void FUN_103fded88(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103fded8c; end: 103fdeda7; -[SCPlusStoreKitProductPrice description] */

void FUN_103fded8c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103fdeda8; end: 103fdee23; -[SCPlusStoreKitProductPrice init] */

void FUN_103fdeda8(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "PlusStoreKitServices/PlusStoreKitProductPriceWrapper.swift",0x3a,2,0x2f,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103fdedf0);
  (*pcVar1)();
}



/* Entry: 103fdee24; end: 103fdee63; -[SCPlusStoreKitProductPrice .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fdee24(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130428a8 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_1130428b0 + 8))
  ;
  return;
}



/* Entry: 103fdee64; end: 103fdee83;  */

void FUN_103fdee64(void)

{
  _objc_opt_self(&PTR_PTR_1129794b8);
  return;
}



/* Entry: 103fdee84; end: 103fdee93; -[SCPlusStoreKitProductSubscriptionPeriod numberOfUnits] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103fdee84(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1130428e0);
}



/* Entry: 103fdee94; end: 103fdeea7; -[SCPlusStoreKitProductSubscriptionPeriod unit] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103fdee94(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1130428e8);
}



/* Entry: 103fdeea8; end: 103fdef0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fdeea8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130428e0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_1130428e8) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103fdef0c; end: 103fdef6f; -[SCPlusStoreKitProductSubscriptionPeriod initWithNumberOfUnits:unit:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fdef0c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_1130428e0) = param_3;
  *(undefined8 *)(param_1 + _DAT_1130428e8) = param_4;
  lStack_40 = param_1;
  lStack_38 = lVar1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103fdef70; end: 103fdef73; -[SCPlusStoreKitProductSubscriptionPeriod copyWithZone:] */

void FUN_103fdef70(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103fdef74; end: 103fdef8f; -[SCPlusStoreKitProductSubscriptionPeriod description] */

void FUN_103fdef74(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103fdef90; end: 103fdf02b; -[SCPlusStoreKitProductSubscriptionPeriod init] */

void FUN_103fdef90(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "PlusStoreKitServices/PlusStoreKitProductSubscriptionPeriodWrapper.swift",0x47,2,0x28,0
            );
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103fdefd8);
  (*pcVar1)();
}



/* Entry: 103fdf02c; end: 103fdf02f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fdf02c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130428e0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_1130428e8) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103fdf030; end: 103fdf03b; -[_TtC24StoryReplyMutingServices9MutedUser userId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fdf030(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113042918);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113042918))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103fdf03c; end: 103fdf04b; -[_TtC24StoryReplyMutingServices9MutedUser mutedAtTimestampMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103fdf03c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113042920);
}



/* Entry: 103fdf04c; end: 103fdf057; -[_TtC24StoryReplyMutingServices9MutedUser displayName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fdf04c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113042928);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113042928))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103fdf058; end: 103fdf063; -[_TtC24StoryReplyMutingServices9MutedUser bitmojiAvatarID] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fdf058(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113042930);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113042930))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103fdf064; end: 103fdf06f; -[_TtC24StoryReplyMutingServices9MutedUser bitmojiSelfieID] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fdf064(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113042938);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113042938))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103fdf070; end: 103fdf0b7;  */

void FUN_103fdf070(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  uVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103fdf0b8; end: 103fdf0c7; -[_TtC24StoryReplyMutingServices9MutedUser isOfficial] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103fdf0b8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113042940);
}



/* Entry: 103fdf0c8; end: 103fdf0d7; -[_TtC24StoryReplyMutingServices9MutedUser isPlusBadgeEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103fdf0c8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113042948);
}



/* Entry: 103fdf0d8; end: 103fdf0e7; -[_TtC24StoryReplyMutingServices9MutedUser fanPassSubscriptionStartTimeMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103fdf0d8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113042950);
}



/* Entry: 103fdf0e8; end: 103fdf307;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fdf0e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined4 param_10,undefined4 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113042918);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113042920) = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113042928);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113042930);
  *puVar1 = param_6;
  puVar1[1] = param_7;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113042938);
  *puVar1 = param_8;
  puVar1[1] = param_9;
  *(undefined1 *)(unaff_x20 + _DAT_113042940) = (undefined1)param_10;
  *(undefined1 *)(unaff_x20 + _DAT_113042948) = param_10._1_1_;
  *(undefined8 *)(unaff_x20 + _DAT_113042950) = param_12;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103fdf308; end: 103fdf367; -[_TtC24StoryReplyMutingServices9MutedUser init] */

void FUN_103fdf308(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("StoryReplyMutingServices.MutedUser",0x22,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103fdf334);
  (*pcVar1)();
}



/* Entry: 103fdf368; end: 103fdf41b; -[_TtC24StoryReplyMutingServices9MutedUser .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fdf368(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113042918 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113042928 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113042930 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113042938 + 8))
  ;
  return;
}



/* Entry: 103fdf41c; end: 103fdf477; -[_TtC24StoryReplyMutingServices24StoryReplyMutingServices init] */

void FUN_103fdf41c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("StoryReplyMutingServices.StoryReplyMutingServices",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103fdf448);
  (*pcVar1)();
}



/* Entry: 103fdf478; end: 103fdf497; -[_TtC24StoryReplyMutingServices24StoryReplyMutingServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fdf478(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_113042988));
  return;
}



/* Entry: 103fdf498; end: 103fdf51f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103fdf498(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  _objc_allocWithZone();
  lVar2 = unaff_x20;
  func_0x000100a57100();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_1130429b8) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_1130429c0) = param_2;
    _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
    _objc_release(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103fdf520);
  (*pcVar1)();
}



/* Entry: 103fdf520; end: 103fdf57f; -[_TtC34PreviewUserSessionScopeGraphBridge49PreviewUserSessionScopeGraphBridgeSaberEntryPoint init] */

void FUN_103fdf520(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("PreviewUserSessionScopeGraphBridge.PreviewUserSessionScopeGraphBridgeSaberEntryPoint",
             0x54,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103fdf54c);
  (*pcVar1)();
}



/* Entry: 103fdf580; end: 103fdf5b7; -[_TtC34PreviewUserSessionScopeGraphBridge49PreviewUserSessionScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fdf580(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130429b8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130429c0));
  return;
}



/* Entry: 103fdf5b8; end: 103fdf5df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fdf5b8(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_1130429c0),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_1130429b8));
  return;
}



/* Entry: 103fdf5e0; end: 103fdf67b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103fdf5e0(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  _objc_allocWithZone();
  uVar3 = *(undefined8 *)(param_2 + _DAT_1130432c8);
  *(undefined8 *)(unaff_x20 + _DAT_1130429f0) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_1130429f8) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  _swift_retain(uVar3);
  _objc_msgSendSuper2(auStack_40,puVar1);
  _objc_release(param_2);
  _objc_release(param_1);
  return puVar2;
}



/* Entry: 103fdf67c; end: 103fdf6db; -[_TtC34PreviewUserSessionScopeGraphBridge34SCGeoFilterServicesSaberEntryPoint init] */

void FUN_103fdf67c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("PreviewUserSessionScopeGraphBridge.SCGeoFilterServicesSaberEntryPoint",0x45,"init()",6
             ,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103fdf6a8);
  (*pcVar1)();
}


