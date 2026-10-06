/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103f77370; end: 103f77373; -[SCPlusSyncCampaignIcon copyWithZone:] */

void FUN_103f77370(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103f77374; end: 103f773ff; +[SCPlusSyncCampaignIcon emojiWithEmoji:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f77374(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_113036880) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_113036890);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(lVar2 + _DAT_113036888);
  *puVar1 = 0;
  puVar1[1] = 0;
  lStack_40 = lVar2;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103f77400; end: 103f7748f; +[SCPlusSyncCampaignIcon imageWithImageUrl:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f77400(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_113036880) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_113036890);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_113036888);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  lStack_40 = lVar2;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103f77490; end: 103f7750f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f77490(code *param_1,undefined8 param_2,code *param_3)

{
  code *pcVar1;
  long unaff_x20;
  
  if (*(char *)(unaff_x20 + _DAT_113036880) == '\x01') {
    if (((undefined8 *)(unaff_x20 + _DAT_113036888))[1] == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103f7750c);
      (*pcVar1)();
    }
    (*param_3)(*(undefined8 *)(unaff_x20 + _DAT_113036888));
  }
  else {
    if (((undefined8 *)(unaff_x20 + _DAT_113036890))[1] == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103f77510);
      (*pcVar1)();
    }
    (*param_1)(*(undefined8 *)(unaff_x20 + _DAT_113036890));
  }
  return;
}



/* Entry: 103f77510; end: 103f775b7; -[SCPlusSyncCampaignIcon matchEmoji:image:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f77510(long param_1,undefined8 param_2,long param_3,long param_4)

{
  code *pcVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (*(char *)(param_1 + _DAT_113036880) == '\x01') {
    puVar2 = (undefined8 *)(param_1 + _DAT_113036888);
    lVar3 = puVar2[1];
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103f775b4);
      (*pcVar1)();
    }
  }
  else {
    puVar2 = (undefined8 *)(param_1 + _DAT_113036890);
    lVar3 = puVar2[1];
    param_4 = param_3;
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103f775b8);
      (*pcVar1)();
    }
  }
  uVar4 = *puVar2;
  _objc_retain();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar4,lVar3);
  (**(code **)(param_4 + 0x10))(param_4,uVar4);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 103f775b8; end: 103f775eb;  */

void FUN_103f775b8(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103f775ec; end: 103f7762b; -[SCPlusSyncCampaignIcon .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f775ec(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113036890 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113036888 + 8))
  ;
  return;
}



/* Entry: 103f7762c; end: 103f776e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f7762c(long param_1,long param_2,char param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long alStack_50 [2];
  long alStack_40 [2];
  
  plVar5 = alStack_50;
  lVar3 = param_1;
  FUN_103f776e8();
  lVar4 = lVar3;
  _objc_allocWithZone();
  if (param_3 == '\x01') {
    *(undefined1 *)(lVar4 + _DAT_113036880) = 1;
    puVar1 = (undefined8 *)(lVar4 + _DAT_113036890);
    *puVar1 = 0;
    puVar1[1] = 0;
    plVar5 = (long *)(lVar4 + _DAT_113036888);
    *plVar5 = param_1;
    plVar5[1] = param_2;
    plVar5 = alStack_40;
  }
  else {
    *(undefined1 *)(lVar4 + _DAT_113036880) = 0;
    plVar2 = (long *)(lVar4 + _DAT_113036890);
    *plVar2 = param_1;
    plVar2[1] = param_2;
    puVar1 = (undefined8 *)(lVar4 + _DAT_113036888);
    *puVar1 = 0;
    puVar1[1] = 0;
  }
  *plVar5 = lVar4;
  plVar5[1] = lVar3;
  _objc_msgSendSuper2(plVar5,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f776e8; end: 103f77707;  */

void FUN_103f776e8(void)

{
  _objc_opt_self(&PTR_PTR_11296dbe8);
  return;
}



/* Entry: 103f77708; end: 103f7786f;  */

int FUN_103f77708(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103f77784;
        goto LAB_103f77768;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103f77768:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_103f77784:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103f77870; end: 103f778af;  */

void FUN_103f77870(void)

{
  undefined *puVar1;
  
  if (puRam00000001130368c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcb1afc;
  _swift_getWitnessTable(&UNK_10dcb1afc,&UNK_110727f58);
  puRam00000001130368c0 = puVar1;
  return;
}



/* Entry: 103f778b0; end: 103f778df;  */

void FUN_103f778b0(undefined8 param_1)

{
  _objc_allocWithZone();
  func_0x000103f77fb4(param_1);
  return;
}



/* Entry: 103f778e0; end: 103f7792f;  */

void FUN_103f778e0(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_140 [272];
  
  FUN_103f79580(auStack_140);
  _objc_release(param_2);
  _memcpy(param_1,auStack_140,0x110);
  return;
}



/* Entry: 103f77930; end: 103f7793b; -[SCPlusSyncProductInfo productIdentifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f77930(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_1130368c8);
  uVar1 = ((undefined8 *)(param_1 + _DAT_1130368c8))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103f7793c; end: 103f77947; -[SCPlusSyncProductInfo localizedTitle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f7793c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_1130368d0);
  uVar1 = ((undefined8 *)(param_1 + _DAT_1130368d0))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103f77948; end: 103f77953; -[SCPlusSyncProductInfo localizedDescription] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f77948(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_1130368d8);
  uVar1 = ((undefined8 *)(param_1 + _DAT_1130368d8))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103f77954; end: 103f7799b;  */

void FUN_103f77954(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 103f7799c; end: 103f779ab; -[SCPlusSyncProductInfo price] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f7799c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130368e0));
  return;
}



/* Entry: 103f779ac; end: 103f779bb; -[SCPlusSyncProductInfo subscriptionPeriod] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f779ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130368e8));
  return;
}



/* Entry: 103f779bc; end: 103f779cb; -[SCPlusSyncProductInfo introductoryDiscount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f779bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130368f0));
  return;
}



/* Entry: 103f779cc; end: 103f77a1b; -[SCPlusSyncProductInfo discounts] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f779cc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_1130368f8);
  FUN_103f7adac(0);
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103f77a1c; end: 103f77a2b; -[SCPlusSyncProductInfo tier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103f77a1c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113036900);
}



/* Entry: 103f77a2c; end: 103f77a3b; -[SCPlusSyncProductInfo isConsumable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103f77a2c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113036908);
}



/* Entry: 103f77a3c; end: 103f77a4b; -[SCPlusSyncProductInfo isStorage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103f77a3c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113036910);
}



/* Entry: 103f77a4c; end: 103f77a5b; -[SCPlusSyncProductInfo allowedMemoriesStorageGb] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103f77a4c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113036918);
}



/* Entry: 103f77a5c; end: 103f77a6b; -[SCPlusSyncProductInfo isFamilyPlan] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103f77a5c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113036920);
}



/* Entry: 103f77a6c; end: 103f77a7b; -[SCPlusSyncProductInfo familyPlanMaxParticipants] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103f77a6c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113036928);
}



/* Entry: 103f77a7c; end: 103f77ad7; -[SCPlusSyncProductInfo referralId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f77a7c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113036930))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113036930);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103f77ad8; end: 103f77ae7; -[SCPlusSyncProductInfo source] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103f77ad8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113036938);
}



/* Entry: 103f77ae8; end: 103f77e43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f77ae8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined4 param_12,
                  undefined4 param_13,undefined8 param_14,undefined1 param_15,undefined4 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_78 [24];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130368c8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130368d0);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130368d8);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_1130368e0) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_1130368e8) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_1130368f0) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_1130368f8) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_113036900) = param_11;
  *(undefined1 *)(unaff_x20 + _DAT_113036908) = (undefined1)param_12;
  *(undefined1 *)(unaff_x20 + _DAT_113036910) = param_12._1_1_;
  *(undefined8 *)(unaff_x20 + _DAT_113036918) = param_14;
  *(undefined1 *)(unaff_x20 + _DAT_113036920) = param_15;
  *(undefined8 *)(unaff_x20 + _DAT_113036928) = param_17;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113036930);
  *puVar1 = param_18;
  puVar1[1] = param_19;
  *(undefined8 *)(unaff_x20 + _DAT_113036938) = param_20;
  _objc_msgSendSuper2(auStack_78,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f77e44; end: 103f784eb; -[SCPlusSyncProductInfo initWithProductIdentifier:localizedTitle:localizedDescription:price:subscriptionPeriod:introductoryDiscount:discounts:tier:isConsumable:isStorage:allowedMemoriesStorageGb:isFamilyPlan:familyPlanMaxParticipants:referralId:source:] */

void FUN_103f77e44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined1 param_11)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_stack_00000030;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  uVar1 = param_2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  uVar2 = uVar1;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_5);
  FUN_103f7adac();
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ();
  if (in_stack_00000030 != 0) {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  func_0x000103f77c9c(param_3,param_2,param_4,uVar1,param_5,uVar2,param_6,param_7,param_8,param_9,
                      param_10,param_11);
  return;
}



/* Entry: 103f784ec; end: 103f784ef; -[SCPlusSyncProductInfo copyWithZone:] */

void FUN_103f784ec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103f784f0; end: 103f7898b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f784f0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_1130368c8);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar2,((undefined8 *)(unaff_x20 + _DAT_1130368c8))[1]);
  uVar1 = 0xd000000000000012;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f1d33d0);
  func_0x000107c42744(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_1130368d0);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar2,((undefined8 *)(unaff_x20 + _DAT_1130368d0))[1]);
  uVar1 = 0x455a494c41434f4c;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x455a494c41434f4c,0xef454c5449545f44);
  func_0x000107c42744(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_1130368d8);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar2,((undefined8 *)(unaff_x20 + _DAT_1130368d8))[1]);
  uVar1 = 0xd000000000000015;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f1d33f0);
  func_0x000107c42744(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = 0x4543495250;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4543495250,0xe500000000000000);
  func_0x000107c42744(param_1);
  _objc_release(uVar2);
  uVar2 = 0xd000000000000013;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f1d3410);
  func_0x000107c42744(param_1);
  _objc_release(uVar2);
  uVar2 = 0xd000000000000015;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f1d3430);
  func_0x000107c42744(param_1);
  _objc_release(uVar2);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_1130368f8);
  uVar2 = 0;
  FUN_103f7adac(0);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar1,uVar2);
  uVar2 = 0x544e554f43534944;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x544e554f43534944,0xe900000000000053);
  func_0x000107c42744(param_1);
  _objc_release(uVar1);
  _objc_release(uVar2);
  uVar2 = 0x52454954;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x52454954,0xe400000000000000);
  func_0x000107c42740(param_1);
  _objc_release(uVar2);
  uVar2 = 0x55534e4f435f5349;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x55534e4f435f5349,0xed0000454c42414d);
  func_0x000107c42724(param_1);
  _objc_release(uVar2);
  uVar2 = 0x41524f54535f5349;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x41524f54535f5349,0xea00000000004547);
  func_0x000107c42724(param_1);
  _objc_release(uVar2);
  uVar2 = 0xd00000000000001b;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001b,0x800000010f1d3450);
  func_0x000107c42740(param_1);
  _objc_release(uVar2);
  uVar2 = 0x4c494d41465f5349;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4c494d41465f5349,0xee004e414c505f59);
  func_0x000107c42724(param_1);
  _objc_release(uVar2);
  uVar2 = 0xd00000000000001c;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001c,0x800000010f1d3470);
  func_0x000107c42740(param_1);
  _objc_release(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_113036930))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113036930);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2);
  }
  uVar1 = 0x4c41525245464552;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4c41525245464552,0xeb0000000044495f);
  func_0x000107c42744(param_1);
  _swift_unknownObjectRelease(uVar2);
  _objc_release(uVar1);
  uVar2 = 0x454352554f53;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x454352554f53,0xe600000000000000);
  func_0x000107c42740(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 103f7898c; end: 103f789db; -[SCPlusSyncProductInfo encodeWithCoder:] */

void FUN_103f7898c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_103f784f0(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103f789dc; end: 103f78a0b;  */

void FUN_103f789dc(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_103f78a0c(param_1);
  return;
}



/* Entry: 103f78a0c; end: 103f793e7;  */

undefined8 FUN_103f78a0c(ulong param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  undefined8 unaff_x20;
  long lVar14;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_c8;
  ulong uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  uVar4 = 0xd000000000000012;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f1d33d0);
  uVar5 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  if (uVar5 == 0) {
    uStack_a8 = 0;
    uStack_b0 = 0;
    lStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,uVar5);
    _swift_unknownObjectRelease(uVar5);
  }
  puVar1 = PTR___sypN_11034f1a8;
  uStack_88 = uStack_a8;
  uStack_90 = uStack_b0;
  lStack_78 = lStack_98;
  uStack_80 = uStack_a0;
  if (lStack_98 == 0) {
    _objc_release(param_1);
  }
  else {
    puVar6 = &uStack_c0;
    _swift_dynamicCast(puVar6,&uStack_90,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    lVar11 = lStack_b8;
    uVar5 = uStack_c0;
    if (((ulong)puVar6 & 1) == 0) {
LAB_103f78f7c:
      _objc_release(param_1);
      goto LAB_103f79004;
    }
    uVar4 = 0x455a494c41434f4c;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x455a494c41434f4c,0xef454c5449545f44);
    uVar7 = param_1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    if (uVar7 == 0) {
      uStack_a8 = 0;
      uStack_b0 = 0;
      lStack_98 = 0;
      uStack_a0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,uVar7);
      _swift_unknownObjectRelease(uVar7);
    }
    uStack_88 = uStack_a8;
    uStack_90 = uStack_b0;
    lStack_78 = lStack_98;
    uStack_80 = uStack_a0;
    if (lStack_98 != 0) {
      puVar6 = &uStack_c0;
      _swift_dynamicCast(puVar6,&uStack_90,puVar1 + 8,PTR___sSSN_11034da80,6);
      lVar2 = lStack_b8;
      uVar7 = uStack_c0;
      if (((ulong)puVar6 & 1) == 0) {
        _objc_release(param_1);
      }
      else {
        uVar4 = 0xd000000000000015;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f1d33f0)
        ;
        uVar8 = param_1;
        func_0x00010bf67000();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar4);
        if (uVar8 == 0) {
          uStack_a8 = 0;
          uStack_b0 = 0;
          lStack_98 = 0;
          uStack_a0 = 0;
        }
        else {
          __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,uVar8);
          _swift_unknownObjectRelease(uVar8);
        }
        uStack_88 = uStack_a8;
        uStack_90 = uStack_b0;
        lStack_78 = lStack_98;
        uStack_80 = uStack_a0;
        if (lStack_98 == 0) {
          _objc_release(param_1);
LAB_103f78fb0:
          _swift_bridgeObjectRelease(lVar2);
          goto LAB_103f78fb8;
        }
        puVar6 = &uStack_c0;
        _swift_dynamicCast(puVar6,&uStack_90,puVar1 + 8,PTR___sSSN_11034da80,6);
        lVar3 = lStack_b8;
        uVar8 = uStack_c0;
        if (((ulong)puVar6 & 1) == 0) {
          _objc_release(param_1);
        }
        else {
          uVar4 = 0x4543495250;
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4543495250,0xe500000000000000);
          uVar9 = param_1;
          func_0x00010bf67000();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar4);
          if (uVar9 == 0) {
            uStack_a8 = 0;
            uStack_b0 = 0;
            lStack_98 = 0;
            uStack_a0 = 0;
          }
          else {
            __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,uVar9);
            _swift_unknownObjectRelease(uVar9);
          }
          uStack_88 = uStack_a8;
          uStack_90 = uStack_b0;
          lStack_78 = lStack_98;
          uStack_80 = uStack_a0;
          uStack_e8 = param_1;
          if (lStack_98 == 0) {
LAB_103f78fa4:
            _objc_release(uStack_e8);
            _swift_bridgeObjectRelease(lVar3);
            goto LAB_103f78fb0;
          }
          uVar4 = 0;
          FUN_103f7a204(0);
          puVar6 = &uStack_c0;
          _swift_dynamicCast(puVar6,&uStack_90,puVar1 + 8,uVar4,6);
          uVar9 = uStack_c0;
          if (((ulong)puVar6 & 1) != 0) {
            uVar4 = 0xd000000000000013;
            __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                      (0xd000000000000013,0x800000010f1d3410);
            uVar10 = param_1;
            func_0x00010bf67000();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar4);
            if (uVar10 == 0) {
              uStack_a8 = 0;
              uStack_b0 = 0;
              lStack_98 = 0;
              uStack_a0 = 0;
            }
            else {
              __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,uVar10);
              _swift_unknownObjectRelease(uVar10);
            }
            uStack_88 = uStack_a8;
            uStack_90 = uStack_b0;
            lStack_78 = lStack_98;
            uStack_80 = uStack_a0;
            if (lStack_98 == 0) {
              func_0x00010006e7f4(&uStack_90);
              uStack_e0 = 0;
            }
            else {
              uVar4 = 0;
              FUN_103f7b76c(0);
              puVar6 = &uStack_c0;
              _swift_dynamicCast(puVar6,&uStack_90,puVar1 + 8,uVar4,6);
              uStack_e0 = uStack_c0;
              if ((int)puVar6 == 0) {
                uStack_e0 = 0;
              }
            }
            uVar4 = 0xd000000000000015;
            __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                      (0xd000000000000015,0x800000010f1d3430);
            uVar10 = param_1;
            func_0x00010bf67000();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar4);
            if (uVar10 == 0) {
              uStack_a8 = 0;
              uStack_b0 = 0;
              lStack_98 = 0;
              uStack_a0 = 0;
            }
            else {
              __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,uVar10);
              _swift_unknownObjectRelease(uVar10);
            }
            uStack_88 = uStack_a8;
            uStack_90 = uStack_b0;
            lStack_78 = lStack_98;
            uStack_80 = uStack_a0;
            if (lStack_98 == 0) {
              func_0x00010006e7f4(&uStack_90);
              uStack_e8 = 0;
            }
            else {
              uVar4 = 0;
              FUN_103f7adac(0);
              puVar6 = &uStack_c0;
              _swift_dynamicCast(puVar6,&uStack_90,puVar1 + 8,uVar4,6);
              uStack_e8 = uStack_c0;
              if ((int)puVar6 == 0) {
                uStack_e8 = 0;
              }
            }
            uVar4 = 0x544e554f43534944;
            __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                      (0x544e554f43534944,0xe900000000000053);
            uVar10 = param_1;
            func_0x00010bf67000();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar4);
            if (uVar10 == 0) {
              uStack_a8 = 0;
              uStack_b0 = 0;
              lStack_98 = 0;
              uStack_a0 = 0;
            }
            else {
              __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,uVar10);
              _swift_unknownObjectRelease(uVar10);
            }
            uStack_88 = uStack_a8;
            uStack_90 = uStack_b0;
            lStack_78 = lStack_98;
            uStack_80 = uStack_a0;
            if (lStack_98 == 0) {
              _objc_release(param_1);
              _objc_release(uVar9);
              _objc_release(uStack_e0);
              goto LAB_103f78fa4;
            }
            uVar4 = 0x113036940;
            func_0x0001000285a8(0x113036940,&UNK_10dcb1ba0);
            puVar6 = &uStack_c0;
            _swift_dynamicCast(puVar6,&uStack_90,puVar1 + 8,uVar4,6);
            uVar10 = uStack_c0;
            if (((ulong)puVar6 & 1) != 0) {
              uVar4 = 0x52454954;
              uVar13 = 0;
              __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x52454954);
              func_0x00010bf66f40();
              _objc_release(uVar4);
              func_0x000103f72548();
              if ((uVar13 & 0xff) == 1) {
                _objc_release(uVar9);
                _objc_release(uStack_e0);
                _objc_release(uStack_e8);
                _swift_bridgeObjectRelease(lVar11);
                _swift_bridgeObjectRelease(lVar2);
                _swift_bridgeObjectRelease(lVar3);
                _swift_bridgeObjectRelease(uVar10);
                goto LAB_103f78f7c;
              }
              uVar4 = 0x55534e4f435f5349;
              __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                        (0x55534e4f435f5349,0xed0000454c42414d);
              func_0x00010bf66ce0();
              _objc_release(uVar4);
              uVar4 = 0x41524f54535f5349;
              __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                        (0x41524f54535f5349,0xea00000000004547);
              func_0x00010bf66ce0();
              _objc_release(uVar4);
              uVar4 = 0xd00000000000001b;
              __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                        (0xd00000000000001b,0x800000010f1d3450);
              func_0x00010bf66f40();
              _objc_release(uVar4);
              uVar4 = 0x4c494d41465f5349;
              __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                        (0x4c494d41465f5349,0xee004e414c505f59);
              func_0x00010bf66ce0();
              _objc_release(uVar4);
              uVar4 = 0xd00000000000001c;
              __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                        (0xd00000000000001c,0x800000010f1d3470);
              func_0x00010bf66f40();
              _objc_release(uVar4);
              uVar4 = 0x4c41525245464552;
              __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                        (0x4c41525245464552,0xeb0000000044495f);
              uVar12 = param_1;
              func_0x00010bf67000();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(uVar4);
              if (uVar12 == 0) {
                uStack_a8 = 0;
                uStack_b0 = 0;
                lStack_98 = 0;
                uStack_a0 = 0;
              }
              else {
                __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,uVar12);
                _swift_unknownObjectRelease(uVar12);
              }
              uStack_88 = uStack_a8;
              uStack_90 = uStack_b0;
              lStack_78 = lStack_98;
              uStack_80 = uStack_a0;
              if (lStack_98 == 0) {
                func_0x00010006e7f4(&uStack_90);
                uStack_c8 = 0;
                lVar14 = 0;
              }
              else {
                puVar6 = &uStack_c0;
                _swift_dynamicCast(puVar6,&uStack_90,puVar1 + 8,PTR___sSSN_11034da80,6);
                lVar14 = lStack_b8;
                uStack_c8 = uStack_c0;
                if ((int)puVar6 == 0) {
                  uStack_c8 = 0;
                  lVar14 = 0;
                }
              }
              uVar4 = 0x454352554f53;
              __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                        (0x454352554f53,0xe600000000000000);
              uVar12 = param_1;
              func_0x00010bf66f40();
              _objc_release(uVar4);
              if (uVar12 < 2) {
                __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar5,lVar11);
                _swift_bridgeObjectRelease(lVar11);
                __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar7,lVar2);
                _swift_bridgeObjectRelease(lVar2);
                __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar8,lVar3);
                _swift_bridgeObjectRelease(lVar3);
                uVar4 = 0;
                FUN_103f7adac(0);
                uVar12 = uVar10;
                __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar10,uVar4);
                _swift_bridgeObjectRelease(uVar10);
                if (lVar14 == 0) {
                  uStack_c8 = 0;
                }
                else {
                  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_c8,lVar14);
                  _swift_bridgeObjectRelease(lVar14);
                }
                func_0x000107c4812c();
                _objc_release(uVar5);
                _objc_release(uVar7);
                _objc_release(uVar8);
                _objc_release(uVar12);
                _objc_release(uStack_c8);
                _objc_release(param_1);
                _objc_release(uVar9);
                _objc_release(uStack_e0);
                _objc_release(uStack_e8);
                return unaff_x20;
              }
              _objc_release(uVar9);
              _objc_release(uStack_e0);
              _objc_release(uStack_e8);
              _swift_bridgeObjectRelease(lVar11);
              _swift_bridgeObjectRelease(lVar2);
              _swift_bridgeObjectRelease(lVar3);
              _swift_bridgeObjectRelease(uVar10);
              _objc_release(param_1);
              lVar11 = lVar14;
              goto LAB_103f79000;
            }
            _objc_release(param_1);
            _objc_release(uVar9);
            _objc_release(uStack_e0);
          }
          _objc_release(uStack_e8);
          _swift_bridgeObjectRelease(lVar3);
        }
        _swift_bridgeObjectRelease(lVar2);
      }
LAB_103f79000:
      _swift_bridgeObjectRelease(lVar11);
      goto LAB_103f79004;
    }
    _objc_release(param_1);
LAB_103f78fb8:
    _swift_bridgeObjectRelease(lVar11);
  }
  func_0x00010006e7f4(&uStack_90);
LAB_103f79004:
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 103f793e8; end: 103f7940f; -[SCPlusSyncProductInfo initWithCoder:] */

void FUN_103f793e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_103f78a0c();
  return;
}



/* Entry: 103f79410; end: 103f7945b; -[SCPlusSyncProductInfo description] */

void FUN_103f79410(undefined8 param_1)

{
  undefined1 auStack_130 [272];
  
  _objc_retain();
  FUN_103f79580(auStack_130);
  _objc_release(param_1);
  func_0x000103f79a94(auStack_130);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103f7945c; end: 103f794d7; -[SCPlusSyncProductInfo init] */

void FUN_103f7945c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "PlusSyncServices/SCPlusSyncProductInfoWrapper.swift",0x33,2,0xbc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f794a4);
  (*pcVar1)();
}



/* Entry: 103f794d8; end: 103f7957f; -[SCPlusSyncProductInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f794d8(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130368c8 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130368d0 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130368d8 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130368e0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130368e8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130368f0));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130368f8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113036930 + 8))
  ;
  return;
}



/* Entry: 103f79580; end: 103f79a57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f79580(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
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
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  code *pcVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  ulong uVar21;
  long lVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  long lVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined *puVar30;
  ulong uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_148;
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
  
  lVar22 = *(long *)(param_2 + _DAT_1130368e0);
  lVar27 = *(long *)(param_2 + _DAT_1130368e8);
  if (lVar27 == 0) {
    uVar29 = 0;
    uStack_148 = 0;
  }
  else {
    uVar29 = *(undefined8 *)(lVar27 + _DAT_113036a58);
    uStack_148 = *(undefined8 *)(lVar27 + _DAT_113036a60);
  }
  uVar35 = *(undefined8 *)(param_2 + _DAT_1130368c8);
  uVar6 = ((undefined8 *)(param_2 + _DAT_1130368c8))[1];
  uVar2 = *(undefined8 *)(param_2 + _DAT_1130368d0);
  uVar7 = ((undefined8 *)(param_2 + _DAT_1130368d0))[1];
  uVar3 = *(undefined8 *)(param_2 + _DAT_1130368d8);
  uVar8 = ((undefined8 *)(param_2 + _DAT_1130368d8))[1];
  uVar32 = *(undefined8 *)(lVar22 + _DAT_113036970);
  uVar4 = *(undefined8 *)(lVar22 + _DAT_113036978);
  uVar9 = ((undefined8 *)(lVar22 + _DAT_113036978))[1];
  uVar5 = *(undefined8 *)(lVar22 + _DAT_113036980);
  uVar18 = ((undefined8 *)(lVar22 + _DAT_113036980))[1];
  if (*(long *)(param_2 + _DAT_1130368f0) == 0) {
    uStack_188 = 0;
    uStack_180 = 0;
    uStack_190 = 0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
  }
  else {
    func_0x000103f7acd0(&uStack_c0);
    uStack_1a8 = uStack_a8;
    uStack_1b0 = uStack_b0;
    uStack_198 = uStack_b8;
    uStack_1a0 = uStack_c0;
    uStack_1c8 = uStack_98;
    uStack_1d0 = uStack_a0;
    uStack_1b8 = uStack_88;
    uStack_1c0 = uStack_90;
    uStack_188 = uStack_78;
    uStack_180 = uStack_80;
    uStack_190 = uStack_70;
  }
  uVar21 = *(ulong *)(param_2 + _DAT_1130368f8);
  if (uVar21 >> 0x3e == 0) {
    uVar16 = *(ulong *)((uVar21 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar16 = uVar21 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar21) {
      uVar16 = uVar21;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  puVar30 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar16 == 0) {
    _swift_bridgeObjectRetain(uVar6);
    _swift_bridgeObjectRetain(uVar7);
    _swift_bridgeObjectRetain(uVar8);
    _swift_bridgeObjectRetain(uVar9);
    _swift_bridgeObjectRetain();
    puVar30 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    _swift_bridgeObjectRetain(uVar6);
    _swift_bridgeObjectRetain(uVar7);
    _swift_bridgeObjectRetain(uVar8);
    _swift_bridgeObjectRetain(uVar9);
    _swift_bridgeObjectRetain(uVar18);
    FUN_103f749f8(0,uVar16 & ((long)uVar16 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar16 < 0) {
                    /* WARNING: Does not return */
      pcVar15 = (code *)SoftwareBreakpoint(1,0x103f79a58);
      (*pcVar15)();
    }
    uVar31 = 0;
    do {
      if ((uVar21 & 0xc000000000000001) == 0) {
        uVar17 = *(ulong *)(uVar21 + uVar31 * 8 + 0x20);
        _objc_retain();
      }
      else {
        uVar17 = uVar31;
        FUN_103f74d48();
      }
      lVar22 = *(long *)(uVar17 + _DAT_1130369b8);
      uVar24 = *(undefined8 *)(lVar22 + _DAT_113036970);
      uVar20 = *(undefined8 *)(uVar17 + _DAT_1130369b0);
      uVar28 = ((undefined8 *)(uVar17 + _DAT_1130369b0))[1];
      uVar25 = *(undefined8 *)(lVar22 + _DAT_113036978);
      uVar10 = ((undefined8 *)(lVar22 + _DAT_113036978))[1];
      uVar26 = *(undefined8 *)(lVar22 + _DAT_113036980);
      uVar11 = ((undefined8 *)(lVar22 + _DAT_113036980))[1];
      uVar23 = *(undefined8 *)(*(long *)(uVar17 + _DAT_1130369c0) + _DAT_113036a58);
      uVar19 = *(undefined8 *)(*(long *)(uVar17 + _DAT_1130369c0) + _DAT_113036a60);
      uVar33 = *(undefined8 *)(uVar17 + _DAT_1130369c8);
      uVar34 = *(undefined8 *)(uVar17 + _DAT_1130369d0);
      _swift_bridgeObjectRetain(uVar28);
      _swift_bridgeObjectRetain(uVar10);
      _swift_bridgeObjectRetain(uVar11);
      _objc_release(uVar17);
      uVar17 = *(ulong *)(puVar30 + 0x10);
      if (*(ulong *)(puVar30 + 0x18) >> 1 <= uVar17) {
        FUN_103f749f8(1 < *(ulong *)(puVar30 + 0x18),uVar17 + 1,1);
      }
      uVar31 = uVar31 + 1;
      *(ulong *)(puVar30 + 0x10) = uVar17 + 1;
      *(undefined8 *)(puVar30 + uVar17 * 0x58 + 0x20) = uVar20;
      *(undefined8 *)(puVar30 + uVar17 * 0x58 + 0x28) = uVar28;
      *(undefined8 *)(puVar30 + uVar17 * 0x58 + 0x30) = uVar24;
      *(undefined8 *)(puVar30 + uVar17 * 0x58 + 0x38) = uVar25;
      *(undefined8 *)(puVar30 + uVar17 * 0x58 + 0x40) = uVar10;
      *(undefined8 *)(puVar30 + uVar17 * 0x58 + 0x48) = uVar26;
      *(undefined8 *)(puVar30 + uVar17 * 0x58 + 0x50) = uVar11;
      *(undefined8 *)(puVar30 + uVar17 * 0x58 + 0x58) = uVar23;
      *(undefined8 *)(puVar30 + uVar17 * 0x58 + 0x60) = uVar19;
      *(undefined8 *)(puVar30 + uVar17 * 0x58 + 0x68) = uVar33;
      *(undefined8 *)(puVar30 + uVar17 * 0x58 + 0x70) = uVar34;
    } while (uVar16 != uVar31);
  }
  uVar20 = *(undefined8 *)(param_2 + _DAT_113036900);
  uVar12 = *(undefined1 *)(param_2 + _DAT_113036908);
  uVar13 = *(undefined1 *)(param_2 + _DAT_113036910);
  uVar25 = *(undefined8 *)(param_2 + _DAT_113036918);
  uVar14 = *(undefined1 *)(param_2 + _DAT_113036920);
  uVar26 = *(undefined8 *)(param_2 + _DAT_113036928);
  puVar1 = (undefined8 *)(param_2 + _DAT_113036930);
  uVar28 = *(undefined8 *)(param_2 + _DAT_113036938);
  *param_1 = uVar35;
  param_1[1] = uVar6;
  param_1[2] = uVar2;
  param_1[3] = uVar7;
  param_1[4] = uVar3;
  param_1[5] = uVar8;
  param_1[6] = uVar32;
  param_1[7] = uVar4;
  param_1[8] = uVar9;
  param_1[9] = uVar5;
  param_1[10] = uVar18;
  param_1[0xb] = uVar29;
  param_1[0xc] = uStack_148;
  *(bool *)(param_1 + 0xd) = lVar27 == 0;
  param_1[0xf] = uStack_198;
  param_1[0xe] = uStack_1a0;
  param_1[0x11] = uStack_1a8;
  param_1[0x10] = uStack_1b0;
  param_1[0x13] = uStack_1c8;
  param_1[0x12] = uStack_1d0;
  param_1[0x15] = uStack_1b8;
  param_1[0x14] = uStack_1c0;
  param_1[0x16] = uStack_180;
  param_1[0x17] = uStack_188;
  param_1[0x18] = uStack_190;
  param_1[0x19] = puVar30;
  param_1[0x1a] = uVar20;
  *(undefined1 *)(param_1 + 0x1b) = uVar12;
  *(undefined1 *)((long)param_1 + 0xd9) = uVar13;
  param_1[0x1c] = uVar25;
  *(undefined1 *)(param_1 + 0x1d) = uVar14;
  param_1[0x1e] = uVar26;
  uVar29 = puVar1[1];
  uVar35 = *puVar1;
  param_1[0x20] = puVar1[1];
  param_1[0x1f] = uVar35;
  param_1[0x21] = uVar28;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar29);
  return;
}



/* Entry: 103f79a58; end: 103f79ac7;  */

undefined8 FUN_103f79a58(undefined8 param_1,undefined8 param_2)

{
  (*(code *)(undefined *)0x103f71134)(param_2,param_1);
  return param_2;
}



/* Entry: 103f79ac8; end: 103f79ae7;  */

void FUN_103f79ac8(void)

{
  _objc_opt_self(&PTR_PTR_11296dcb8);
  return;
}



/* Entry: 103f79ae8; end: 103f79b57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f79ae8(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113036970) = *param_1;
  uVar2 = param_1[1];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113036978);
  puVar1[1] = param_1[2];
  *puVar1 = uVar2;
  uVar2 = param_1[3];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113036980);
  puVar1[1] = param_1[4];
  *puVar1 = uVar2;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f79b58; end: 103f79b67; -[SCPlusSyncProductPrice millis] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103f79b58(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113036970);
}



/* Entry: 103f79b68; end: 103f79b73; -[SCPlusSyncProductPrice currencyCode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f79b68(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113036978);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113036978))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103f79b74; end: 103f79b7f; -[SCPlusSyncProductPrice localeIdentifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f79b74(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113036980);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113036980))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103f79b80; end: 103f79bc7;  */

void FUN_103f79b80(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 103f79bc8; end: 103f79c53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f79bc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113036970) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113036978);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113036980);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f79c54; end: 103f79cf3; -[SCPlusSyncProductPrice initWithMillis:currencyCode:localeIdentifier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f79c54(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  *(undefined8 *)(param_1 + _DAT_113036970) = param_3;
  puVar1 = (undefined8 *)(param_1 + _DAT_113036978);
  *puVar1 = param_4;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(param_1 + _DAT_113036980);
  *puVar1 = param_5;
  puVar1[1] = uVar3;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f79cf4; end: 103f79cf7; -[SCPlusSyncProductPrice copyWithZone:] */

void FUN_103f79cf4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103f79cf8; end: 103f79e0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f79cf8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = 0x53494c4c494d;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x53494c4c494d,0xe600000000000000);
  func_0x000107c42740(param_1);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113036978);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar1,((undefined8 *)(unaff_x20 + _DAT_113036978))[1]);
  uVar2 = 0x59434e4552525543;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x59434e4552525543,0xed000045444f435f);
  func_0x000107c42744(param_1);
  _objc_release(uVar1);
  _objc_release(uVar2);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113036980);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar1,((undefined8 *)(unaff_x20 + _DAT_113036980))[1]);
  uVar2 = 0xd000000000000011;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x800000010f1d34d0);
  func_0x000107c42744(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 103f79e0c; end: 103f79e5b; -[SCPlusSyncProductPrice encodeWithCoder:] */

void FUN_103f79e0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_103f79cf8(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103f79e5c; end: 103f79e8b;  */

void FUN_103f79e5c(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_103f79e8c(param_1);
  return;
}



/* Entry: 103f79e8c; end: 103f7a103;  */

undefined8 FUN_103f79e8c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 unaff_x20;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  uVar4 = 0;
  uVar6 = 0;
  uVar2 = 0x53494c4c494d;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x53494c4c494d,0xe600000000000000);
  func_0x00010bf66f40(param_1);
  _objc_release(uVar2);
  uVar2 = 0x59434e4552525543;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x59434e4552525543,0xed000045444f435f);
  lVar3 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar3 == 0) {
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,lVar3);
    _swift_unknownObjectRelease(lVar3);
  }
  puVar1 = PTR___sypN_11034f1a8;
  uStack_68 = uStack_88;
  uStack_70 = uStack_90;
  lStack_58 = lStack_78;
  uStack_60 = uStack_80;
  if (lStack_78 == 0) {
    _objc_release(param_1);
  }
  else {
    _swift_dynamicCast(&uStack_a0,&uStack_70,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    uVar7 = uStack_98;
    uVar2 = uStack_a0;
    if ((uVar4 & 1) == 0) {
      _objc_release(param_1);
      goto LAB_103f7a0b4;
    }
    uVar5 = 0xd000000000000011;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x800000010f1d34d0);
    lVar3 = param_1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    if (lVar3 == 0) {
      uStack_88 = 0;
      uStack_90 = 0;
      lStack_78 = 0;
      uStack_80 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,lVar3);
      _swift_unknownObjectRelease(lVar3);
    }
    uStack_68 = uStack_88;
    uStack_70 = uStack_90;
    lStack_58 = lStack_78;
    uStack_60 = uStack_80;
    if (lStack_78 != 0) {
      _swift_dynamicCast(&uStack_a0,&uStack_70,puVar1 + 8,PTR___sSSN_11034da80,6);
      if ((uVar6 & 1) != 0) {
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar7);
        _swift_bridgeObjectRelease(uVar7);
        uVar7 = uStack_a0;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_a0,uStack_98);
        _swift_bridgeObjectRelease(uStack_98);
        func_0x000107c47804();
        _objc_release(uVar2);
        _objc_release(uVar7);
        _objc_release(param_1);
        return unaff_x20;
      }
      _objc_release(param_1);
      _swift_bridgeObjectRelease(uVar7);
      goto LAB_103f7a0b4;
    }
    _objc_release(param_1);
    _swift_bridgeObjectRelease(uVar7);
  }
  func_0x00010006e7f4(&uStack_70);
LAB_103f7a0b4:
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 103f7a104; end: 103f7a12b; -[SCPlusSyncProductPrice initWithCoder:] */

void FUN_103f7a104(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_103f79e8c();
  return;
}



/* Entry: 103f7a12c; end: 103f7a147; -[SCPlusSyncProductPrice description] */

void FUN_103f7a12c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103f7a148; end: 103f7a1c3; -[SCPlusSyncProductPrice init] */

void FUN_103f7a148(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "PlusSyncServices/SCPlusSyncProductPriceWrapper.swift",0x34,2,0x46,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f7a190);
  (*pcVar1)();
}



/* Entry: 103f7a1c4; end: 103f7a203; -[SCPlusSyncProductPrice .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f7a1c4(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113036978 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113036980 + 8))
  ;
  return;
}



/* Entry: 103f7a204; end: 103f7a223;  */

void FUN_103f7a204(void)

{
  _objc_opt_self(&PTR_PTR_11296ddf8);
  return;
}



/* Entry: 103f7a224; end: 103f7a253;  */

void FUN_103f7a224(undefined8 param_1)

{
  _objc_allocWithZone();
  func_0x000103f7a474(param_1);
  return;
}



/* Entry: 103f7a254; end: 103f7a2af; -[SCPlusSyncProductDiscount identifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f7a254(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_1130369b0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_1130369b0);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103f7a2b0; end: 103f7a2bf; -[SCPlusSyncProductDiscount price] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f7a2b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130369b8));
  return;
}



/* Entry: 103f7a2c0; end: 103f7a2cf; -[SCPlusSyncProductDiscount subscriptionPeriod] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f7a2c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130369c0));
  return;
}



/* Entry: 103f7a2d0; end: 103f7a2df; -[SCPlusSyncProductDiscount numberOfPeriods] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103f7a2d0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1130369c8);
}



/* Entry: 103f7a2e0; end: 103f7a2ef; -[SCPlusSyncProductDiscount paymentMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103f7a2e0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1130369d0);
}



/* Entry: 103f7a2f0; end: 103f7a39b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f7a2f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130369b0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_1130369b8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_1130369c0) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_1130369c8) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_1130369d0) = param_6;
  _objc_msgSendSuper2(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f7a39c; end: 103f7a5f7; -[SCPlusSyncProductDiscount initWithIdentifier:price:subscriptionPeriod:numberOfPeriods:paymentMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f7a39c(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
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
  plVar1 = (long *)(param_1 + _DAT_1130369b0);
  *plVar1 = param_3;
  plVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_1130369b8) = param_4;
  *(undefined8 *)(param_1 + _DAT_1130369c0) = param_5;
  *(undefined8 *)(param_1 + _DAT_1130369c8) = param_6;
  *(undefined8 *)(param_1 + _DAT_1130369d0) = param_7;
  puVar2 = PTR_s_init_1125d9248;
  lStack_60 = param_1;
  lStack_58 = lVar3;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_msgSendSuper2(&lStack_60,puVar2);
  return;
}



/* Entry: 103f7a5f8; end: 103f7a5fb; -[SCPlusSyncProductDiscount copyWithZone:] */

void FUN_103f7a5f8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103f7a5fc; end: 103f7a793;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f7a5fc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  if (((undefined8 *)(unaff_x20 + _DAT_1130369b0))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_1130369b0);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0x494649544e454449;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x494649544e454449,0xea00000000005245);
  func_0x000107c42744(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  uVar1 = 0x4543495250;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4543495250,0xe500000000000000);
  func_0x000107c42744(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000013;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f1d3410);
  func_0x000107c42744(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000011;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x800000010f1d3530);
  func_0x000107c42740(param_1);
  _objc_release(uVar1);
  uVar1 = 0x5f544e454d594150;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f544e454d594150,0xec00000045444f4d);
  func_0x000107c42740(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 103f7a794; end: 103f7a7e3; -[SCPlusSyncProductDiscount encodeWithCoder:] */

void FUN_103f7a794(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_103f7a5fc(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103f7a7e4; end: 103f7a813;  */

void FUN_103f7a7e4(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_103f7a814(param_1);
  return;
}



/* Entry: 103f7a814; end: 103f7abab;  */

undefined8 FUN_103f7a814(ulong param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 unaff_x20;
  long lVar7;
  ulong uVar8;
  ulong uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  iVar2 = (int)&uStack_b0;
  uVar5 = 0;
  uVar6 = 0;
  uVar3 = 0x494649544e454449;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x494649544e454449,0xea00000000005245);
  uVar8 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  if (uVar8 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,uVar8);
    _swift_unknownObjectRelease(uVar8);
  }
  puVar1 = PTR___sypN_11034f1a8;
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    func_0x00010006e7f4(&uStack_80);
    lVar7 = 0;
    uVar8 = 0;
  }
  else {
    _swift_dynamicCast(&uStack_b0,&uStack_80,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    lVar7 = lStack_a8;
    uVar8 = uStack_b0;
    if (iVar2 == 0) {
      uVar8 = 0;
      lVar7 = 0;
    }
  }
  uVar3 = 0x4543495250;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4543495250,0xe500000000000000);
  uVar4 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  if (uVar4 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,uVar4);
    _swift_unknownObjectRelease(uVar4);
  }
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
LAB_103f7aad8:
    _objc_release(param_1);
    _swift_bridgeObjectRelease(lVar7);
    func_0x00010006e7f4(&uStack_80);
  }
  else {
    uVar3 = 0;
    FUN_103f7a204(0);
    _swift_dynamicCast(&uStack_b0,&uStack_80,puVar1 + 8,uVar3,6);
    uVar4 = uStack_b0;
    if ((uVar5 & 1) != 0) {
      uVar3 = 0xd000000000000013;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f1d3410);
      uVar5 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      if (uVar5 == 0) {
        uStack_98 = 0;
        uStack_a0 = 0;
        lStack_88 = 0;
        uStack_90 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,uVar5);
        _swift_unknownObjectRelease(uVar5);
      }
      uStack_78 = uStack_98;
      uStack_80 = uStack_a0;
      lStack_68 = lStack_88;
      uStack_70 = uStack_90;
      if (lStack_88 == 0) {
        _objc_release(param_1);
        param_1 = uVar4;
        goto LAB_103f7aad8;
      }
      uVar3 = 0;
      FUN_103f7b76c(0);
      _swift_dynamicCast(&uStack_b0,&uStack_80,puVar1 + 8,uVar3,6);
      if ((uVar6 & 1) == 0) {
        _objc_release(param_1);
        param_1 = uVar4;
      }
      else {
        uVar3 = 0xd000000000000011;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x800000010f1d3530)
        ;
        func_0x00010bf66f40(param_1);
        _objc_release(uVar3);
        uVar3 = 0x5f544e454d594150;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f544e454d594150,0xec00000045444f4d)
        ;
        uVar5 = param_1;
        func_0x00010bf66f40();
        _objc_release(uVar3);
        if (uVar5 < 3) {
          if (lVar7 == 0) {
            uVar8 = 0;
          }
          else {
            __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar8,lVar7);
            _swift_bridgeObjectRelease(lVar7);
          }
          func_0x000107c46d78();
          _objc_release(uVar8);
          _objc_release(param_1);
          _objc_release(uStack_b0);
          _objc_release(uVar4);
          return unaff_x20;
        }
        _objc_release(uVar4);
        _objc_release(uStack_b0);
      }
    }
    _objc_release(param_1);
    _swift_bridgeObjectRelease(lVar7);
  }
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 103f7abac; end: 103f7abd3; -[SCPlusSyncProductDiscount initWithCoder:] */

void FUN_103f7abac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_103f7a814();
  return;
}



/* Entry: 103f7abd4; end: 103f7ac07; -[SCPlusSyncProductDiscount description] */

void FUN_103f7abd4(void)

{
  undefined1 auStack_68 [88];
  
  func_0x000103f7acd0(auStack_68);
  func_0x000103f71934(auStack_68);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103f7ac08; end: 103f7ac83; -[SCPlusSyncProductDiscount init] */

void FUN_103f7ac08(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "PlusSyncServices/SCPlusSyncProductDiscountWrapper.swift",0x37,2,0x58,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f7ac50);
  (*pcVar1)();
}



/* Entry: 103f7ac84; end: 103f7adab; -[SCPlusSyncProductDiscount .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f7ac84(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130369b0 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130369b8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130369c0));
  return;
}



/* Entry: 103f7adac; end: 103f7adcb;  */

void FUN_103f7adac(void)

{
  _objc_opt_self(&PTR_PTR_11296ded8);
  return;
}



/* Entry: 103f7adcc; end: 103f7addb; -[SCPlusSyncProductMetadata isConsumableSubscription] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103f7adcc(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113036a00);
}



/* Entry: 103f7addc; end: 103f7adeb; -[SCPlusSyncProductMetadata consumableSubscriptionPeriod] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f7addc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113036a08));
  return;
}



/* Entry: 103f7adec; end: 103f7adfb; -[SCPlusSyncProductMetadata familyPlanMaxParticipants] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103f7adec(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113036a10);
}



/* Entry: 103f7adfc; end: 103f7ae0b; -[SCPlusSyncProductMetadata allowedStorageGb] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103f7adfc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113036a18);
}



/* Entry: 103f7ae0c; end: 103f7ae17; -[SCPlusSyncProductMetadata promotionalOfferIdentifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f7ae0c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113036a20))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113036a20);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103f7ae18; end: 103f7ae23; -[SCPlusSyncProductMetadata referralId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f7ae18(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113036a28))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113036a28);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103f7ae24; end: 103f7ae7b;  */

void FUN_103f7ae24(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + *param_3);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103f7ae7c; end: 103f7af47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f7ae7c(undefined1 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_113036a00) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113036a08) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113036a10) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113036a18) = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113036a20);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113036a28);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f7af48; end: 103f7b04f; -[SCPlusSyncProductMetadata initWithIsConsumableSubscription:consumableSubscriptionPeriod:familyPlanMaxParticipants:allowedStorageGb:promotionalOfferIdentifier:referralId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f7af48(long param_1,long param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,long param_8)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lStack_70;
  long lStack_68;
  
  lVar4 = param_1;
  _swift_getObjectType();
  if (param_7 == 0) {
    lVar2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    lVar2 = param_2;
  }
  if (param_8 == 0) {
    param_8 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  *(undefined1 *)(param_1 + _DAT_113036a00) = param_3;
  *(undefined8 *)(param_1 + _DAT_113036a08) = param_4;
  *(undefined8 *)(param_1 + _DAT_113036a10) = param_5;
  *(undefined8 *)(param_1 + _DAT_113036a18) = param_6;
  plVar1 = (long *)(param_1 + _DAT_113036a20);
  *plVar1 = param_7;
  plVar1[1] = lVar2;
  plVar1 = (long *)(param_1 + _DAT_113036a28);
  *plVar1 = param_8;
  plVar1[1] = param_2;
  puVar3 = PTR_s_init_1125d9248;
  lStack_70 = param_1;
  lStack_68 = lVar4;
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_70,puVar3);
  return;
}



/* Entry: 103f7b050; end: 103f7b07f;  */

void FUN_103f7b050(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_103f7b080(param_1);
  return;
}



/* Entry: 103f7b080; end: 103f7b1ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f7b080(undefined1 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  long lStack_a0;
  long lStack_98;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  plVar4 = &lStack_a0;
  _swift_getObjectType();
  *(undefined1 *)(unaff_x20 + _DAT_113036a00) = *param_1;
  if (param_1[0x18] == '\x01') {
    plVar4 = (long *)0x0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 8);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    lVar5 = 0;
    FUN_103f7b76c();
    lVar6 = lVar5;
    _objc_allocWithZone();
    *(undefined8 *)(lVar6 + _DAT_113036a58) = uVar2;
    *(undefined8 *)(lVar6 + _DAT_113036a60) = uVar1;
    lStack_a0 = lVar6;
    lStack_98 = lVar5;
    _objc_msgSendSuper2(&lStack_a0,PTR_s_init_1125d9248);
  }
  *(long **)(unaff_x20 + _DAT_113036a08) = plVar4;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(unaff_x20 + _DAT_113036a10) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(unaff_x20 + _DAT_113036a18) = uVar2;
  uStack_58 = *(undefined8 *)(param_1 + 0x38);
  uStack_60 = *(undefined8 *)(param_1 + 0x30);
  uStack_68 = *(undefined8 *)(param_1 + 0x48);
  uStack_70 = *(undefined8 *)(param_1 + 0x40);
  puVar3 = (undefined8 *)(unaff_x20 + _DAT_113036a20);
  puVar3[1] = uStack_58;
  *puVar3 = uStack_60;
  puVar3 = (undefined8 *)(unaff_x20 + _DAT_113036a28);
  puVar3[1] = uStack_68;
  *puVar3 = uStack_70;
  func_0x000101223174(&uStack_60,auStack_80);
  func_0x000101223174(&uStack_70,auStack_80);
  FUN_103f7b1ac(param_1);
  _objc_msgSendSuper2(&stack0xffffffffffffff70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f7b1ac; end: 103f7b1df;  */

undefined8 FUN_103f7b1ac(undefined8 param_1)

{
  (*(code *)(undefined *)0x103f71d18)();
  return param_1;
}



/* Entry: 103f7b1e0; end: 103f7b1e3; -[SCPlusSyncProductMetadata copyWithZone:] */

void FUN_103f7b1e0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103f7b1e4; end: 103f7b217; -[SCPlusSyncProductMetadata description] */

void FUN_103f7b1e4(void)

{
  undefined1 auStack_60 [80];
  
  func_0x000103f7b2e4(auStack_60);
  FUN_103f7b1ac(auStack_60);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103f7b218; end: 103f7b293; -[SCPlusSyncProductMetadata init] */

void FUN_103f7b218(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "PlusSyncServices/SCPlusSyncProductMetadataWrapper.swift",0x37,2,0x3c,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f7b260);
  (*pcVar1)();
}



/* Entry: 103f7b294; end: 103f7b3a3; -[SCPlusSyncProductMetadata .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f7b294(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113036a08));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113036a20 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113036a28 + 8))
  ;
  return;
}



/* Entry: 103f7b3a4; end: 103f7b3c3;  */

void FUN_103f7b3a4(void)

{
  _objc_opt_self(&PTR_PTR_11296dfc8);
  return;
}



/* Entry: 103f7b3c4; end: 103f7b3d3; -[SCPlusSyncProductSubscriptionPeriod numberOfUnits] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103f7b3c4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113036a58);
}



/* Entry: 103f7b3d4; end: 103f7b3e7; -[SCPlusSyncProductSubscriptionPeriod unit] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103f7b3d4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113036a60);
}



/* Entry: 103f7b3e8; end: 103f7b44b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f7b3e8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113036a58) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113036a60) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f7b44c; end: 103f7b4af; -[SCPlusSyncProductSubscriptionPeriod initWithNumberOfUnits:unit:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f7b44c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_113036a58) = param_3;
  *(undefined8 *)(param_1 + _DAT_113036a60) = param_4;
  lStack_40 = param_1;
  lStack_38 = lVar1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f7b4b0; end: 103f7b4b3; -[SCPlusSyncProductSubscriptionPeriod copyWithZone:] */

void FUN_103f7b4b0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}


