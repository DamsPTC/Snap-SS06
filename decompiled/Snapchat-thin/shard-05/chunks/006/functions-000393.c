/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103f5f4e8; end: 103f5f55b; +[SCSendToEducationCellIcon uiimageWithIcon:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f5f4e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_113034ea0) = 0;
  *(undefined8 *)(lVar2 + _DAT_113034ea8) = param_3;
  *(undefined8 *)(lVar2 + _DAT_113034eb0) = 0;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103f5f55c; end: 103f5f5d3; +[SCSendToEducationCellIcon boltWithIcon:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f5f55c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_113034ea0) = 1;
  *(undefined8 *)(lVar2 + _DAT_113034ea8) = 0;
  *(undefined8 *)(lVar2 + _DAT_113034eb0) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103f5f5d4; end: 103f5f61f; -[SCSendToEducationCellIcon matchUiimage:bolt:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f5f5d4(long param_1,undefined8 param_2,long param_3,long param_4)

{
  code *pcVar1;
  
  if (*(char *)(param_1 + _DAT_113034ea0) == '\x01') {
    param_3 = param_4;
    if (*(long *)(param_1 + _DAT_113034eb0) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103f5f600);
      (*pcVar1)();
    }
  }
  else if (*(long *)(param_1 + _DAT_113034ea8) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103f5f620);
    (*pcVar1)();
  }
                    /* WARNING: Could not recover jumptable at 0x000103f5f618. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0x10))(param_3);
  return;
}



/* Entry: 103f5f620; end: 103f5f653;  */

void FUN_103f5f620(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103f5f654; end: 103f5f68b; -[SCSendToEducationCellIcon .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f5f654(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113034ea8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113034eb0));
  return;
}



/* Entry: 103f5f68c; end: 103f5f6ab;  */

void FUN_103f5f68c(void)

{
  _objc_opt_self(&PTR_PTR_11296aab0);
  return;
}



/* Entry: 103f5f6ac; end: 103f5f813;  */

int FUN_103f5f6ac(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103f5f728;
        goto LAB_103f5f70c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103f5f70c:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_103f5f728:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103f5f814; end: 103f5f853;  */

void FUN_103f5f814(void)

{
  undefined *puVar1;
  
  if (puRam0000000113034ee0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcaed70;
  _swift_getWitnessTable(&UNK_10dcaed70,&UNK_110725308);
  puRam0000000113034ee0 = puVar1;
  return;
}



/* Entry: 103f5f854; end: 103f5f863; -[SCSendToContentData thumbnail] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f5f854(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113034ee8));
  return;
}



/* Entry: 103f5f864; end: 103f5f873; -[SCSendToContentData type] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103f5f864(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113034ef0);
}



/* Entry: 103f5f874; end: 103f5f88b; -[SCSendToContentData duration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103f5f874(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113034ef8);
}



/* Entry: 103f5f88c; end: 103f5fa0b; -[SCSendToContentData initWithThumbnail:type:duration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f5f88c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_2;
  _swift_getObjectType();
  *(undefined8 *)(param_2 + _DAT_113034ee8) = param_4;
  *(undefined8 *)(param_2 + _DAT_113034ef0) = param_5;
  *(undefined8 *)(param_2 + _DAT_113034ef8) = param_1;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = param_2;
  lStack_48 = lVar2;
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_50,puVar1);
  return;
}



/* Entry: 103f5fa0c; end: 103f5fa0f; -[SCSendToContentData copyWithZone:] */

void FUN_103f5fa0c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103f5fa10; end: 103f5fa2b; -[SCSendToContentData description] */

void FUN_103f5fa10(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103f5fa2c; end: 103f5faa7; -[SCSendToContentData init] */

void FUN_103f5fa2c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCSendToScope/SCSendToContentDataWrapper.swift",0x2e,2,0x2d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f5fa74);
  (*pcVar1)();
}



/* Entry: 103f5faa8; end: 103f5fab7; -[SCSendToContentData .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f5faa8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113034ee8));
  return;
}



/* Entry: 103f5fab8; end: 103f5fad7;  */

void FUN_103f5fab8(void)

{
  _objc_opt_self(&PTR_PTR_11296ab80);
  return;
}



/* Entry: 103f5fad8; end: 103f5fadb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f5fad8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113034ee8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113034ef0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113034ef8) = param_1;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f5fadc; end: 103f5fb3b; -[SCSendToSelectionState selectedItems] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f5fadc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113034f28);
  FUN_103f61448(0,0x112d60fb0,&PTR_PTR_1126b3568);
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103f5fb3c; end: 103f5fb47; -[SCSendToSelectionState selectedPhoneNumbers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f5fb3c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113034f30);
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103f5fb48; end: 103f5fb53; -[SCSendToSelectionState selectedExternalDestinations] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f5fb48(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113034f38);
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103f5fb54; end: 103f5fb97;  */

void FUN_103f5fb54(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103f5fb98; end: 103f5fba3; -[SCSendToSelectionState additionalText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f5fb98(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113034f40))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113034f40);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103f5fba4; end: 103f5fbb7; -[SCSendToSelectionState newlyCreatedCustomStories] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f5fba4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113034f48);
  (*(code *)&SUB_1043f7068)(0);
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103f5fbb8; end: 103f5fc03;  */

void FUN_103f5fbb8(long param_1,undefined8 param_2,long *param_3,code *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  (*param_4)(0);
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103f5fc04; end: 103f5fc17; -[SCSendToSelectionState selectedTopics] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f5fc04(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113034f50);
  (*(code *)&SUB_104409d84)(0);
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103f5fc18; end: 103f5fc27; -[SCSendToSelectionState placeTagsMetadata] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f5fc18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113034f58));
  return;
}



/* Entry: 103f5fc28; end: 103f5fc33; -[SCSendToSelectionState spotlightDescription] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f5fc28(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113034f60))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113034f60);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103f5fc34; end: 103f5fc9f; -[SCSendToSelectionState spotlightDescriptionMentions] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f5fc34(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_113034f68);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    FUN_103f61448(0,0x112d70b48,&PTR_PTR_1126d95f0);
    lVar2 = lVar1;
    _swift_bridgeObjectRetain(lVar1);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 103f5fca0; end: 103f5fcab; -[SCSendToSelectionState spotlightMemberRoleBusinessId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f5fca0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113034f70))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113034f70);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103f5fcac; end: 103f5fd03;  */

void FUN_103f5fcac(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 103f5fd04; end: 103f5fd13; -[SCSendToSelectionState shouldCreateHighlight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103f5fd04(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113034f78);
}



/* Entry: 103f5fd14; end: 103f5fd23; -[SCSendToSelectionState shareAnonymously] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f5fd14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113034f80));
  return;
}



/* Entry: 103f5fd24; end: 103f5fd33; -[SCSendToSelectionState selectedSponsor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f5fd24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113034f88));
  return;
}



/* Entry: 103f5fd34; end: 103f5fe0b; -[SCSendToSelectionState goLiveTimestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f5fd34(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffd0 + -extraout_x8;
  func_0x000103f61250(param_1 + _DAT_1138127a0,puVar4,0x112d373d8,&UNK_10d9014c0);
  lVar1 = 0;
  __s10Foundation4DateVMa();
  lVar5 = *(long *)(lVar1 + -8);
  puVar2 = puVar4;
  (**(code **)(lVar5 + 0x30))(puVar4,1,lVar1);
  uVar3 = 0;
  if ((int)puVar2 != 1) {
    __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF(0);
    (**(code **)(lVar5 + 8))(puVar4,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 103f5fe0c; end: 103f5fe7b; -[SCSendToSelectionState toggleValues] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f5fe0c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_1138127a8);
  FUN_103f61448(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103f5fe7c; end: 103f5fe8b; -[SCSendToSelectionState spotlightTile] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f5fe7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1138127b0));
  return;
}



/* Entry: 103f5fe8c; end: 103f6024b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_103f5fe8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined1 param_14,undefined4 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_78 [24];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113034f28) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113034f30) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113034f38) = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113034f40);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_113034f48) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_113034f50) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_113034f58) = param_8;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113034f60);
  *puVar1 = param_9;
  puVar1[1] = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_113034f68) = param_11;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113034f70);
  *puVar1 = param_12;
  puVar1[1] = param_13;
  *(undefined1 *)(unaff_x20 + _DAT_113034f78) = param_14;
  *(undefined8 *)(unaff_x20 + _DAT_113034f80) = param_16;
  *(undefined8 *)(unaff_x20 + _DAT_113034f88) = param_17;
  func_0x000103f61250(param_18,unaff_x20 + _DAT_1138127a0,0x112d373d8,&UNK_10d9014c0);
  *(undefined8 *)(unaff_x20 + _DAT_1138127a8) = param_19;
  *(undefined8 *)(unaff_x20 + _DAT_1138127b0) = param_20;
  puVar2 = auStack_78;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  func_0x0001000d1dcc(param_18);
  return puVar2;
}



/* Entry: 103f6024c; end: 103f6054b; -[SCSendToSelectionState initWithSelectedItems:selectedPhoneNumbers:selectedExternalDestinations:additionalText:newlyCreatedCustomStories:selectedTopics:placeTagsMetadata:spotlightDescription:spotlightDescriptionMentions:spotlightMemberRoleBusinessId:shouldCreateHighlight:shareAnonymously:selectedSponsor:goLiveTimestamp:toggleValues:spotlightTile:] */

void FUN_103f6024c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,long param_10,long param_11,long param_12,undefined1 param_13,
                  undefined4 param_14,undefined8 param_15,undefined8 param_16,long param_17,
                  undefined8 param_18,undefined8 param_19)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long extraout_x8;
  long lVar9;
  long alStack_130 [5];
  undefined1 auStack_108 [8];
  long alStack_100 [6];
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lVar1 = 0x112d373d8;
  uStack_78 = param_1;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = -extraout_x8;
  lVar9 = (long)&uStack_d0 + lVar1;
  uVar2 = 0;
  FUN_103f61448(0,0x112d60fb0,&PTR_PTR_1126b3568);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_3,uVar2);
  puVar8 = PTR___sSSN_11034da80;
  uStack_80 = param_3;
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
            (param_4,PTR___sSSN_11034da80);
  uStack_88 = param_4;
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ();
  uStack_90 = param_5;
  if (param_6 == 0) {
    puStack_a0 = (undefined *)0x0;
    lStack_98 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    puStack_a0 = puVar8;
    lStack_98 = param_6;
  }
  uStack_d0 = param_19;
  lStack_70 = param_17;
  uVar2 = 0;
  func_0x0001043f7068(0);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_7,uVar2);
  uVar2 = 0;
  uStack_a8 = param_7;
  func_0x000104409d84();
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ();
  uStack_b0 = param_8;
  if (param_10 == 0) {
    uStack_c0 = 0;
    lStack_b8 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uStack_c0 = uVar2;
    lStack_b8 = param_10;
  }
  if (param_11 == 0) {
    lStack_c8 = 0;
  }
  else {
    uVar2 = 0;
    FUN_103f61448(0,0x112d70b48,&PTR_PTR_1126d95f0);
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ();
    lStack_c8 = param_11;
  }
  _objc_retain(param_9);
  lVar5 = param_12;
  _objc_retain();
  _objc_retain();
  _objc_retain();
  lVar3 = lStack_70;
  _objc_retain();
  _objc_retain();
  uVar4 = uStack_d0;
  _objc_retain();
  if (lVar5 == 0) {
    param_12 = 0;
    uVar2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(lVar5);
  }
  if (lVar3 == 0) {
    lVar5 = 0;
    __s10Foundation4DateVMa();
  }
  else {
    __s10Foundation4DateV36_unconditionallyBridgeFromObjectiveCyACSo6NSDateCSgFZ(lVar9,lStack_70);
    _objc_release(lVar3);
    lVar5 = 0;
    __s10Foundation4DateVMa();
  }
  (**(code **)(*(long *)(lVar5 + -8) + 0x38))(lVar9,lVar3 == 0,1);
  uVar6 = 0;
  FUN_103f61448(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar7 = param_18;
  __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
            (param_18,PTR___sSSN_11034da80,uVar6,PTR___sSSSHsWP_11034da90);
  _objc_release(param_18);
  *(undefined8 *)((long)alStack_100 + lVar1 + 0x18) = uVar7;
  *(undefined8 *)((long)alStack_100 + lVar1 + 0x20) = uVar4;
  *(undefined8 *)((long)alStack_100 + lVar1 + 8) = param_16;
  *(long *)((long)alStack_100 + lVar1 + 0x10) = lVar9;
  *(undefined8 *)((long)alStack_100 + lVar1) = param_15;
  auStack_108[lVar1] = param_13;
  *(long *)((long)alStack_130 + lVar1 + 0x18) = param_12;
  *(undefined8 *)((long)alStack_130 + lVar1 + 0x20) = uVar2;
  *(long *)((long)alStack_130 + lVar1 + 0x10) = lStack_c8;
  *(undefined8 *)((long)alStack_130 + lVar1 + 8) = uStack_c0;
  *(long *)((long)alStack_130 + lVar1) = lStack_b8;
  func_0x000103f60070(uStack_80,uStack_88,uStack_90,lStack_98,puStack_a0,uStack_a8,uStack_b0,param_9
                     );
  return;
}



/* Entry: 103f6054c; end: 103f6057b;  */

void FUN_103f6054c(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_103f6057c(param_1);
  return;
}



/* Entry: 103f6057c; end: 103f60a47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103f6057c(undefined8 *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined **ppuVar7;
  long *plVar8;
  undefined1 *puVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined1 auStack_168 [16];
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  undefined *puStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 uStack_d0;
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
  
  _swift_getObjectType();
  uVar5 = *param_1;
  uVar11 = param_1[1];
  *(undefined8 *)(unaff_x20 + _DAT_113034f28) = uVar5;
  *(undefined8 *)(unaff_x20 + _DAT_113034f30) = uVar11;
  uVar10 = param_1[2];
  *(undefined8 *)(unaff_x20 + _DAT_113034f38) = uVar10;
  uVar18 = param_1[3];
  puVar12 = (undefined8 *)(unaff_x20 + _DAT_113034f40);
  puVar12[1] = param_1[4];
  *puVar12 = uVar18;
  uVar18 = param_1[4];
  lVar14 = param_1[5];
  lVar13 = *(long *)(lVar14 + 0x10);
  if (lVar13 == 0) {
    _swift_bridgeObjectRetain(uVar18);
    _swift_bridgeObjectRetain(uVar5);
    _swift_bridgeObjectRetain(uVar11);
    _swift_bridgeObjectRetain(uVar10);
    puVar15 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puStack_118 = PTR___swiftEmptyArrayStorage_11034f1c8;
    _swift_bridgeObjectRetain(uVar5);
    _swift_bridgeObjectRetain(uVar11);
    _swift_bridgeObjectRetain(uVar10);
    _swift_bridgeObjectRetain(uVar18);
    func_0x000102f031cc(0,lVar13,0);
    puVar15 = puStack_118;
    puVar12 = (undefined8 *)(lVar14 + 0x20);
    uVar5 = 0;
    func_0x0001043f7068(0);
    do {
      uStack_b8 = puVar12[1];
      uStack_c0 = *puVar12;
      uStack_a8 = puVar12[3];
      uStack_b0 = puVar12[2];
      uStack_98 = puVar12[5];
      uStack_a0 = puVar12[4];
      uStack_88 = puVar12[7];
      uStack_90 = puVar12[6];
      _objc_allocWithZone(uVar5);
      FUN_103f61214(&uStack_c0,&lStack_158);
      puVar6 = &uStack_c0;
      func_0x0001043f6814();
      uVar1 = *(ulong *)(puVar15 + 0x10);
      puStack_118 = puVar15;
      if (*(ulong *)(puVar15 + 0x18) >> 1 <= uVar1) {
        func_0x000102f031cc(1 < *(ulong *)(puVar15 + 0x18),uVar1 + 1,1);
      }
      *(ulong *)(puStack_118 + 0x10) = uVar1 + 1;
      *(undefined8 **)(puStack_118 + uVar1 * 8 + 0x20) = puVar6;
      puVar12 = puVar12 + 8;
      lVar13 = lVar13 + -1;
      puVar15 = puStack_118;
    } while (lVar13 != 0);
  }
  *(undefined **)(unaff_x20 + _DAT_113034f48) = puVar15;
  lVar13 = param_1[6];
  lVar14 = *(long *)(lVar13 + 0x10);
  puVar15 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar14 != 0) {
    puStack_118 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_103f611e0(0,lVar14,0);
    puVar15 = puStack_118;
    puVar12 = (undefined8 *)(lVar13 + 0x20);
    uVar5 = 0;
    func_0x000104409d84(0);
    do {
      uStack_e8 = puVar12[1];
      uStack_f0 = *puVar12;
      uStack_d8 = puVar12[3];
      uStack_e0 = puVar12[2];
      uStack_d0 = *(undefined1 *)(puVar12 + 4);
      _objc_allocWithZone(uVar5);
      uStack_78 = uStack_e8;
      uStack_80 = uStack_f0;
      func_0x000103f61250(&uStack_80,&lStack_158,0x112d35ff8,&UNK_10d900cd0);
      puVar6 = &uStack_f0;
      func_0x000104409708();
      uVar1 = *(ulong *)(puVar15 + 0x10);
      puStack_118 = puVar15;
      if (*(ulong *)(puVar15 + 0x18) >> 1 <= uVar1) {
        FUN_103f611e0(1 < *(ulong *)(puVar15 + 0x18),uVar1 + 1,1);
      }
      *(ulong *)(puStack_118 + 0x10) = uVar1 + 1;
      *(undefined8 **)(puStack_118 + uVar1 * 8 + 0x20) = puVar6;
      puVar12 = puVar12 + 5;
      lVar14 = lVar14 + -1;
      puVar15 = puStack_118;
    } while (lVar14 != 0);
  }
  *(undefined **)(unaff_x20 + _DAT_113034f50) = puVar15;
  uVar10 = param_1[7];
  *(undefined8 *)(unaff_x20 + _DAT_113034f58) = uVar10;
  uVar5 = param_1[8];
  puVar12 = (undefined8 *)(unaff_x20 + _DAT_113034f60);
  puVar12[1] = param_1[9];
  *puVar12 = uVar5;
  uVar5 = param_1[9];
  uVar18 = param_1[10];
  *(undefined8 *)(unaff_x20 + _DAT_113034f68) = uVar18;
  uVar11 = param_1[0xc];
  uVar16 = param_1[0xb];
  puVar12 = (undefined8 *)(unaff_x20 + _DAT_113034f70);
  puVar12[1] = param_1[0xc];
  *puVar12 = uVar16;
  *(undefined1 *)(unaff_x20 + _DAT_113034f78) = *(undefined1 *)(param_1 + 0xd);
  uVar16 = param_1[0xe];
  *(undefined8 *)(unaff_x20 + _DAT_113034f80) = uVar16;
  lVar14 = param_1[0x10];
  if (lVar14 == 1) {
    _objc_retain(uVar16);
    _objc_retain(uVar10);
    _swift_bridgeObjectRetain(uVar5);
    _swift_bridgeObjectRetain(uVar18);
    _swift_bridgeObjectRetain(uVar11);
    ppuVar7 = (undefined **)0x0;
  }
  else {
    uStack_f8 = *(undefined4 *)(param_1 + 0x13);
    puStack_118 = (undefined *)param_1[0xf];
    uVar17 = param_1[0x12];
    uStack_100 = param_1[0x12];
    uStack_108 = param_1[0x11];
    lStack_110 = lVar14;
    func_0x0001043f7404(0);
    _objc_allocWithZone();
    _swift_bridgeObjectRetain(uVar17);
    _objc_retain(uVar10);
    _swift_bridgeObjectRetain(uVar5);
    _swift_bridgeObjectRetain(uVar18);
    _swift_bridgeObjectRetain(uVar11);
    _objc_retain(uVar16);
    _swift_bridgeObjectRetain(lVar14);
    ppuVar7 = &puStack_118;
    func_0x0001043f72bc();
  }
  *(undefined ***)(unaff_x20 + _DAT_113034f88) = ppuVar7;
  lVar14 = 0;
  FUN_103f5b6d4();
  func_0x000103f61250((long)param_1 + (long)*(int *)(lVar14 + 0x44),unaff_x20 + _DAT_1138127a0,
                      0x112d373d8,&UNK_10d9014c0);
  uVar5 = *(undefined8 *)((long)param_1 + (long)*(int *)(lVar14 + 0x48));
  *(undefined8 *)(unaff_x20 + _DAT_1138127a8) = uVar5;
  plVar8 = (long *)((long)param_1 + (long)*(int *)(lVar14 + 0x4c));
  lVar14 = *plVar8;
  if (lVar14 == 0) {
    _swift_bridgeObjectRetain(uVar5);
    plVar8 = (long *)0x0;
  }
  else {
    lVar13 = plVar8[3];
    lVar3 = plVar8[4];
    lVar2 = plVar8[1];
    lVar4 = plVar8[2];
    lStack_158 = lVar14;
    lStack_150 = lVar2;
    lStack_148 = lVar4;
    lStack_140 = lVar13;
    lStack_138 = lVar3;
    func_0x0001043f8630(0);
    _objc_allocWithZone();
    _swift_bridgeObjectRetain(uVar5);
    FUN_103f612d4(lVar14,lVar2,lVar4,lVar13,lVar3);
    plVar8 = &lStack_158;
    func_0x0001043f7f20();
  }
  *(long **)(unaff_x20 + _DAT_1138127b0) = plVar8;
  puVar9 = auStack_168;
  _objc_msgSendSuper2(puVar9,PTR_s_init_1125d9248);
  func_0x000103f61298(param_1);
  return puVar9;
}



/* Entry: 103f60a48; end: 103f60a4b; -[SCSendToSelectionState copyWithZone:] */

void FUN_103f60a48(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103f60a4c; end: 103f60ac3; -[SCSendToSelectionState description] */

void FUN_103f60a4c(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  
  lVar1 = 0;
  FUN_103f5b6d4();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  _objc_retain(param_1);
  FUN_103f60ac4(&stack0xffffffffffffffe0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000103f61298(&stack0xffffffffffffffe0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103f60ac4; end: 103f60fe3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f60ac4(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  code *pcVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar15 = *(undefined8 *)(param_2 + _DAT_113034f28);
  uVar13 = *(undefined8 *)(param_2 + _DAT_113034f30);
  *param_1 = uVar15;
  param_1[1] = uVar13;
  uVar9 = *(undefined8 *)(param_2 + _DAT_113034f38);
  param_1[2] = uVar9;
  puVar1 = (undefined8 *)(param_2 + _DAT_113034f40);
  uVar17 = puVar1[1];
  uVar16 = *puVar1;
  param_1[4] = puVar1[1];
  param_1[3] = uVar16;
  uVar11 = *(ulong *)(param_2 + _DAT_113034f48);
  if (uVar11 >> 0x3e == 0) {
    uVar12 = *(ulong *)((uVar11 & 0xffffffffffffff8) + 0x10);
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar12 = uVar11 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar11) {
      uVar12 = uVar11;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar10;
  if (uVar12 == 0) {
    _swift_bridgeObjectRetain(uVar17);
    _swift_bridgeObjectRetain(uVar15);
    _swift_bridgeObjectRetain(uVar13);
    _swift_bridgeObjectRetain(uVar9);
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    _swift_bridgeObjectRetain(uVar15);
    _swift_bridgeObjectRetain(uVar13);
    _swift_bridgeObjectRetain(uVar9);
    _swift_bridgeObjectRetain(uVar17);
    func_0x000103f61338(0,uVar12 & ((long)uVar12 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar12 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x103f60fe0);
      (*pcVar4)();
    }
    uVar14 = 0;
    do {
      if ((uVar11 & 0xc000000000000001) == 0) {
        _objc_retain(*(undefined8 *)(uVar11 + uVar14 * 8 + 0x20));
      }
      else {
        func_0x000102f02c38(uVar14,uVar11);
      }
      func_0x0001043f6488(&uStack_a0);
      uVar5 = *(ulong *)(puVar10 + 0x10);
      if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar5) {
        func_0x000103f61338(1 < *(ulong *)(puVar10 + 0x18),uVar5 + 1,1);
      }
      uVar14 = uVar14 + 1;
      *(ulong *)(puVar10 + 0x10) = uVar5 + 1;
      *(undefined8 *)(puVar10 + uVar5 * 0x40 + 0x48) = uStack_78;
      *(undefined8 *)(puVar10 + uVar5 * 0x40 + 0x40) = uStack_80;
      *(undefined8 *)(puVar10 + uVar5 * 0x40 + 0x58) = uStack_68;
      *(undefined8 *)(puVar10 + uVar5 * 0x40 + 0x50) = uStack_70;
      *(undefined8 *)(puVar10 + uVar5 * 0x40 + 0x28) = uStack_98;
      *(undefined8 *)(puVar10 + uVar5 * 0x40 + 0x20) = uStack_a0;
      *(undefined8 *)(puVar10 + uVar5 * 0x40 + 0x38) = uStack_88;
      *(undefined8 *)(puVar10 + uVar5 * 0x40 + 0x30) = uStack_90;
    } while (uVar12 != uVar14);
  }
  param_1[5] = puVar10;
  uVar11 = *(ulong *)(param_2 + _DAT_113034f50);
  if (uVar11 >> 0x3e == 0) {
    uVar12 = *(ulong *)((uVar11 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar12 = uVar11 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar11) {
      uVar12 = uVar11;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar12 != 0) {
    func_0x000103f6131c(0,uVar12 & ((long)uVar12 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar12 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x103f60fe4);
      (*pcVar4)();
    }
    uVar14 = 0;
    do {
      if ((uVar11 & 0xc000000000000001) == 0) {
        uVar5 = *(ulong *)(uVar11 + uVar14 * 8 + 0x20);
        _objc_retain();
      }
      else {
        uVar5 = uVar14;
        func_0x000101321510();
      }
      uVar9 = *(undefined8 *)(uVar5 + _DAT_1130775b8);
      uVar13 = ((undefined8 *)(uVar5 + _DAT_1130775b8))[1];
      uVar17 = *(undefined8 *)(uVar5 + _DAT_1130775c0);
      uVar15 = *(undefined8 *)(uVar5 + _DAT_1130775c8);
      uVar3 = *(undefined1 *)(uVar5 + _DAT_1130775d0);
      _swift_bridgeObjectRetain(uVar13);
      _objc_release(uVar5);
      uVar5 = *(ulong *)(puVar10 + 0x10);
      if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar5) {
        func_0x000103f6131c(1 < *(ulong *)(puVar10 + 0x18),uVar5 + 1,1);
      }
      uVar14 = uVar14 + 1;
      *(ulong *)(puVar10 + 0x10) = uVar5 + 1;
      *(undefined8 *)(puVar10 + uVar5 * 0x28 + 0x20) = uVar9;
      *(undefined8 *)(puVar10 + uVar5 * 0x28 + 0x28) = uVar13;
      *(undefined8 *)(puVar10 + uVar5 * 0x28 + 0x30) = uVar17;
      *(undefined8 *)(puVar10 + uVar5 * 0x28 + 0x38) = uVar15;
      puVar10[uVar5 * 0x28 + 0x40] = uVar3;
    } while (uVar12 != uVar14);
  }
  uVar9 = *(undefined8 *)(param_2 + _DAT_113034f58);
  param_1[6] = puVar10;
  param_1[7] = uVar9;
  puVar1 = (undefined8 *)(param_2 + _DAT_113034f60);
  uVar13 = puVar1[1];
  uVar15 = *puVar1;
  param_1[9] = puVar1[1];
  param_1[8] = uVar15;
  uVar15 = *(undefined8 *)(param_2 + _DAT_113034f68);
  param_1[10] = uVar15;
  puVar1 = (undefined8 *)(param_2 + _DAT_113034f70);
  uVar17 = puVar1[1];
  uVar16 = *puVar1;
  param_1[0xc] = puVar1[1];
  param_1[0xb] = uVar16;
  uVar16 = *(undefined8 *)(param_2 + _DAT_113034f80);
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + _DAT_113034f78);
  param_1[0xe] = uVar16;
  lVar7 = *(long *)(param_2 + _DAT_113034f88);
  if (lVar7 == 0) {
    uVar8 = 0;
    uVar22 = 1;
    uVar20 = 0;
    uVar19 = 0;
    uVar21 = 0;
  }
  else {
    puVar1 = (undefined8 *)(lVar7 + _DAT_113076b30);
    puVar2 = (undefined8 *)(lVar7 + _DAT_113076b38);
    uVar22 = puVar1[1];
    uVar20 = *puVar1;
    uVar18 = puVar1[1];
    uVar21 = puVar2[1];
    uVar19 = *puVar2;
    uVar8 = *(undefined4 *)(lVar7 + _DAT_113076b40);
    _swift_bridgeObjectRetain(puVar2[1]);
    _swift_bridgeObjectRetain(uVar18);
  }
  param_1[0x10] = uVar22;
  param_1[0xf] = uVar20;
  param_1[0x12] = uVar21;
  param_1[0x11] = uVar19;
  *(undefined4 *)(param_1 + 0x13) = uVar8;
  lVar7 = _DAT_1138127a0;
  lVar6 = 0;
  FUN_103f5b6d4();
  func_0x000103f61250(param_2 + lVar7,(long)param_1 + (long)*(int *)(lVar6 + 0x44),0x112d373d8,
                      &UNK_10d9014c0);
  uVar19 = *(undefined8 *)(param_2 + _DAT_1138127a8);
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar6 + 0x48)) = uVar19;
  param_1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar6 + 0x4c));
  lVar7 = *(long *)(param_2 + _DAT_1138127b0);
  if (lVar7 == 0) {
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
  }
  else {
    *param_1 = *(undefined8 *)(lVar7 + _DAT_113076ba8);
    uVar21 = ((undefined8 *)(lVar7 + _DAT_113076bb0))[1];
    param_1[1] = *(undefined8 *)(lVar7 + _DAT_113076bb0);
    param_1[2] = uVar21;
    uVar20 = *(undefined8 *)(lVar7 + _DAT_113076bb8);
    uVar22 = ((undefined8 *)(lVar7 + _DAT_113076bb8))[1];
    param_1[3] = uVar20;
    param_1[4] = uVar22;
    _objc_retain();
    _swift_bridgeObjectRetain(uVar21);
    func_0x000100de78a0(uVar20,uVar22);
  }
  _objc_retain(uVar16);
  _swift_bridgeObjectRetain(uVar19);
  _objc_retain(uVar9);
  _swift_bridgeObjectRetain(uVar13);
  _swift_bridgeObjectRetain(uVar15);
  _swift_bridgeObjectRetain(uVar17);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 103f60fe4; end: 103f6105f; -[SCSendToSelectionState init] */

void FUN_103f60fe4(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCSendToScope/SCSendToSelectionStateWrapper.swift",0x31,2,0x7f,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f6102c);
  (*pcVar1)();
}



/* Entry: 103f61060; end: 103f61173; -[SCSendToSelectionState .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f61060(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113034f28));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113034f30));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113034f38));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113034f40 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113034f48));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113034f50));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113034f58));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113034f60 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113034f68));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113034f70 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113034f80));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113034f88));
  func_0x0001000d1dcc(param_1 + _DAT_1138127a0);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1138127a8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1138127b0));
  return;
}



/* Entry: 103f61174; end: 103f611df;  */

void FUN_103f61174(code *param_1,ulong *param_2,long *param_3)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    (*param_1)();
    if (lVar3 != 0) {
      param_2 = (ulong *)0x112d36e60;
      param_3 = (long *)&UNK_10d901170;
    }
  }
  if (*param_2 == 0 || (*param_2 & 1) != 0) {
    puVar2 = (undefined *)((long)param_3 + (long)(int)*param_3);
    func_0x000107c61518(puVar2,*param_3 >> 0x20,0,0);
    *param_2 = (ulong)puVar2;
  }
  return;
}



/* Entry: 103f611e0; end: 103f61213;  */

void FUN_103f611e0(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_103f61488();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 103f61214; end: 103f612d3;  */

undefined8 FUN_103f61214(undefined8 param_1,undefined8 param_2)

{
  (*(code *)&DAT_1043effd4)(param_2,param_1);
  return param_2;
}



/* Entry: 103f612d4; end: 103f6131b;  */

/* WARNING: Possible PIC construction at 0x00010006c030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c034) */

void FUN_103f612d4(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,ulong param_5)

{
  uint uVar1;
  
  if (param_1 == 0) {
    return;
  }
  _objc_retain();
  _swift_bridgeObjectRetain(param_3);
  if (param_5 >> 0x3c < 0xf) {
    uVar1 = (uint)(param_5 >> 0x3e);
    if (uVar1 == 1) {
      param_4 = param_5 & 0x3fffffffffffffff;
    }
    else if (uVar1 != 2) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_retain_11034f4d0)(param_4);
    return;
  }
  return;
}



/* Entry: 103f6131c; end: 103f61353;  */

void FUN_103f6131c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_103f615c4();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 103f61354; end: 103f6135b;  */

void FUN_103f61354(void)

{
  if (lRam0000000113034fb8 != 0) {
    return;
  }
  _swift_getSingletonMetadata(0,&DAT_10e7d71dc);
  return;
}



/* Entry: 103f6135c; end: 103f61393;  */

void FUN_103f6135c(undefined8 param_1)

{
  if (lRam0000000113034fb8 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e7d71dc);
  return;
}



/* Entry: 103f61394; end: 103f61447;  */

void FUN_103f61394(long param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR___sBbWV_11034d660 + 0x40;
  puStack_98 = &UNK_10dcaee50;
  puStack_80 = &UNK_10dcaee68;
  puStack_78 = &UNK_10dcaee50;
  puStack_70 = &UNK_10dcaee68;
  puStack_68 = &UNK_10dcaee50;
  puStack_60 = &UNK_10dcaee80;
  puStack_58 = &UNK_10dcaee68;
  puStack_50 = &UNK_10dcaee68;
  lVar2 = 0x13f;
  puStack_b0 = puVar1;
  puStack_a8 = puVar1;
  puStack_a0 = puVar1;
  puStack_90 = puVar1;
  puStack_88 = puVar1;
  func_0x0001000776dc();
  if (param_2 < 0x40) {
    lStack_48 = *(long *)(lVar2 + -8) + 0x40;
    puStack_38 = &UNK_10dcaee68;
    puStack_40 = puVar1;
    _swift_updateClassMetadata2(param_1,0x100,0x10,&puStack_b0,param_1 + 0x50);
  }
  return;
}



/* Entry: 103f61448; end: 103f61487;  */

void FUN_103f61448(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  _objc_opt_self();
  _swift_getObjCClassMetadata();
  *param_2 = lVar1;
  return;
}



/* Entry: 103f61488; end: 103f615c3;  */

code * FUN_103f61488(ulong param_1,ulong param_2,ulong param_3,code *param_4,code *param_5,
                    undefined8 param_6,undefined8 param_7)

{
  code *pcVar1;
  code *pcVar2;
  code *pcVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103f615c4);
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
  pcVar2 = (code *)PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    pcVar2 = param_5;
    FUN_103f61174(param_5,param_6,param_7);
    _swift_allocObject();
    pcVar3 = pcVar2;
    _malloc_size();
    pcVar1 = pcVar3 + -0x19;
    if (0x1f < (long)pcVar3) {
      pcVar1 = pcVar3 + -0x20;
    }
    *(ulong *)(pcVar2 + 0x10) = uVar6;
    *(ulong *)(pcVar2 + 0x18) = ((long)pcVar1 >> 3) << 1 | 1;
  }
  pcVar1 = pcVar2 + 0x20;
  pcVar3 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar4 = 0;
    (*param_5)(0);
    _swift_arrayInitWithCopy(pcVar1,pcVar3,uVar6,uVar4);
  }
  else {
    if (pcVar2 != param_4 || pcVar3 + uVar6 * 8 <= pcVar1) {
      _memmove(pcVar1,pcVar3,uVar6 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return pcVar2;
}



/* Entry: 103f615c4; end: 103f617e3;  */

undefined * FUN_103f615c4(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = param_2;
  if ((param_3 & 1) != 0) {
    uVar4 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar4 < (long)param_2) {
      if ((long)(uVar4 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103f616dc);
        (*pcVar1)();
      }
      uVar4 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar4 <= (long)param_2) {
        uVar4 = param_2;
      }
    }
  }
  uVar5 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar4 <= (long)uVar5) {
    uVar4 = uVar5;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar4 != 0) {
    puVar2 = (undefined *)0x113034fc8;
    func_0x0001000285a8(0x113034fc8,&UNK_10dcaee98);
    _swift_allocObject();
    puVar3 = puVar2;
    _malloc_size();
    *(ulong *)(puVar2 + 0x10) = uVar5;
    *(long *)(puVar2 + 0x18) = ((long)(puVar3 + -0x20) / 0x28) * 2;
  }
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar2 + 0x20,param_4 + 0x20,uVar5,&UNK_1107694f0);
  }
  else {
    if (puVar2 != param_4 || param_4 + 0x20 + uVar5 * 0x28 <= puVar2 + 0x20) {
      _memmove();
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar2;
}



/* Entry: 103f617e4; end: 103f61a9b;  */

int FUN_103f617e4(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf5 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 10) {
      iVar2 = 4;
    }
    if (param_2 + 10 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103f61860;
        goto LAB_103f61844;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103f61844:
      return ((uint)*param_1 | uVar1 << 8) - 10;
    }
  }
LAB_103f61860:
  iVar2 = *param_1 - 0xb;
  if (*param_1 < 0xb) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103f61a9c; end: 103f61ae3; -[_TtC20SCCameraFeatureScope45SCAddToStoryCameraScopedCameraFeatureServices cameraFeatureServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f61a9c(undefined8 param_1)

{
  undefined8 uStack_28;
  
  _objc_retain();
  func_0x000100083b20(&uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uStack_28);
  return;
}



/* Entry: 103f61ae4; end: 103f61afb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f61ae4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113034fd8) = param_1;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f61afc; end: 103f61b27; -[_TtC20SCCameraFeatureScope45SCAddToStoryCameraScopedCameraFeatureServices init] */

void FUN_103f61afc(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCCameraFeatureScope.SCAddToStoryCameraScopedCameraFeatureServices",0x42,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f61b28);
  (*pcVar1)();
}



/* Entry: 103f61b28; end: 103f61b37; -[_TtC20SCCameraFeatureScope45SCAddToStoryCameraScopedCameraFeatureServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f61b28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113034fd8));
  return;
}



/* Entry: 103f61b38; end: 103f61b53; -[_TtC20SCCameraFeatureScope39SCMainCameraScopedCameraFeatureServices cameraFeatureServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f61b38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113034fe0));
  return;
}



/* Entry: 103f61b54; end: 103f61b5f; -[_TtC20SCCameraFeatureScope39SCMainCameraScopedCameraFeatureServices initWithCameraFeatureServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f61b54(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_113034fe0) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 103f61b60; end: 103f61b8b; -[_TtC20SCCameraFeatureScope39SCMainCameraScopedCameraFeatureServices init] */

void FUN_103f61b60(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCCameraFeatureScope.SCMainCameraScopedCameraFeatureServices",0x3c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f61b8c);
  (*pcVar1)();
}



/* Entry: 103f61b8c; end: 103f61b9b; -[_TtC20SCCameraFeatureScope39SCMainCameraScopedCameraFeatureServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f61b8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113034fe0));
  return;
}



/* Entry: 103f61b9c; end: 103f61bc3; -[_TtC20SCCameraFeatureScope39SCCaaSCameraScopedCameraFeatureServices cameraFeatureServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f61b9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113034fe8));
  return;
}



/* Entry: 103f61bc4; end: 103f61bcf; -[_TtC20SCCameraFeatureScope39SCCaaSCameraScopedCameraFeatureServices initWithCameraFeatureServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f61bc4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_113034fe8) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 103f61bd0; end: 103f61bfb; -[_TtC20SCCameraFeatureScope39SCCaaSCameraScopedCameraFeatureServices init] */

void FUN_103f61bd0(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCCameraFeatureScope.SCCaaSCameraScopedCameraFeatureServices",0x3c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f61bfc);
  (*pcVar1)();
}



/* Entry: 103f61bfc; end: 103f61c0b; -[_TtC20SCCameraFeatureScope39SCCaaSCameraScopedCameraFeatureServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f61bfc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113034fe8));
  return;
}



/* Entry: 103f61c0c; end: 103f61c33; -[_TtC20SCCameraFeatureScope48SCLensesModularCameraScopedCameraFeatureServices cameraFeatureServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f61c0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113034ff0));
  return;
}



/* Entry: 103f61c34; end: 103f61c3f; -[_TtC20SCCameraFeatureScope48SCLensesModularCameraScopedCameraFeatureServices initWithCameraFeatureServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f61c34(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_113034ff0) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 103f61c40; end: 103f61c6b; -[_TtC20SCCameraFeatureScope48SCLensesModularCameraScopedCameraFeatureServices init] */

void FUN_103f61c40(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCCameraFeatureScope.SCLensesModularCameraScopedCameraFeatureServices",0x45,"init()",6
             ,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f61c6c);
  (*pcVar1)();
}



/* Entry: 103f61c6c; end: 103f61c7b; -[_TtC20SCCameraFeatureScope48SCLensesModularCameraScopedCameraFeatureServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f61c6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113034ff0));
  return;
}



/* Entry: 103f61c7c; end: 103f61c97; -[_TtC20SCCameraFeatureScope39SCChatCameraScopedCameraFeatureServices cameraFeatureServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f61c7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113034ff8));
  return;
}



/* Entry: 103f61c98; end: 103f61ceb;  */

void FUN_103f61c98(undefined8 param_1,long *param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + *param_2) = param_1;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f61cec; end: 103f61cf7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f61cec(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_113034ff8) = param_1;
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f61cf8; end: 103f61d03; -[_TtC20SCCameraFeatureScope39SCChatCameraScopedCameraFeatureServices initWithCameraFeatureServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f61cf8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_113034ff8) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 103f61d04; end: 103f61d63;  */

void FUN_103f61d04(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + *param_4) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 103f61d64; end: 103f61d8f; -[_TtC20SCCameraFeatureScope39SCChatCameraScopedCameraFeatureServices init] */

void FUN_103f61d64(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCCameraFeatureScope.SCChatCameraScopedCameraFeatureServices",0x3c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f61d90);
  (*pcVar1)();
}



/* Entry: 103f61d90; end: 103f61d93;  */

void FUN_103f61d90(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103f61d94; end: 103f61dc7;  */

void FUN_103f61d94(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103f61dc8; end: 103f61dd7; -[_TtC20SCCameraFeatureScope39SCChatCameraScopedCameraFeatureServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f61dc8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113034ff8));
  return;
}



/* Entry: 103f61dd8; end: 103f61e57;  */

void FUN_103f61dd8(void)

{
  _objc_opt_self(&PTR_PTR_11296ada0);
  return;
}



/* Entry: 103f61e58; end: 103f61e67;  */

void FUN_103f61e58(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103f61e68; end: 103f61fc3;  */

long FUN_103f61e68(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_allocObject();
  func_0x000103f61ea8(param_1,unaff_x20 + 0x10);
  return unaff_x20;
}



/* Entry: 103f61fc4; end: 103f61fd3; -[_TtC20SCCameraFeatureScope26SCCameraFeaturePluginScope plugInRegistry] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f61fc4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130352a8));
  return;
}



/* Entry: 103f61fd4; end: 103f61fe3; -[_TtC20SCCameraFeatureScope26SCCameraFeaturePluginScope featureUpdateEventSubject] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f61fd4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130352b0));
  return;
}



/* Entry: 103f61fe4; end: 103f62003; -[_TtC20SCCameraFeatureScope26SCCameraFeaturePluginScope privateFeatureContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f61fe4(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_1130352b8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103f62004; end: 103f62013; -[_TtC20SCCameraFeatureScope26SCCameraFeaturePluginScope cameraFeatureScopeInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f62004(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130352c0));
  return;
}



/* Entry: 103f62014; end: 103f6209f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f62014(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130352a8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_1130352b0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_1130352b8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_1130352c0) = param_4;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f620a0; end: 103f6214f; -[_TtC20SCCameraFeatureScope26SCCameraFeaturePluginScope initWithPluginRegistry:privateFeatureContainer:featureUpdateEventSubject:cameraFeatureScopeInfo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f620a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_1130352a8) = param_3;
  *(undefined8 *)(param_1 + _DAT_1130352b0) = param_5;
  *(undefined8 *)(param_1 + _DAT_1130352b8) = param_4;
  *(undefined8 *)(param_1 + _DAT_1130352c0) = param_6;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  _objc_retain(param_3);
  _swift_unknownObjectRetain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_msgSendSuper2(&lStack_50,puVar1);
  return;
}



/* Entry: 103f62150; end: 103f621af; -[_TtC20SCCameraFeatureScope26SCCameraFeaturePluginScope init] */

void FUN_103f62150(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCCameraFeatureScope.SCCameraFeaturePluginScope",0x2f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f6217c);
  (*pcVar1)();
}



/* Entry: 103f621b0; end: 103f62207; -[_TtC20SCCameraFeatureScope26SCCameraFeaturePluginScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f621b0(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130352a8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130352b0));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_1130352b8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130352c0));
  return;
}



/* Entry: 103f62208; end: 103f6221b;  */

bool FUN_103f62208(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103f6221c; end: 103f622f3;  */

void FUN_103f6221c(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 103f622f4; end: 103f62313;  */

void FUN_103f622f4(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 103f62314; end: 103f62353;  */

void FUN_103f62314(void)

{
  undefined *puVar1;
  
  if (puRam00000001130352f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcaf150;
  _swift_getWitnessTable(&UNK_10dcaf150,&UNK_110725598);
  puRam00000001130352f0 = puVar1;
  return;
}



/* Entry: 103f62354; end: 103f62363;  */

undefined1  [16] FUN_103f62354(void)

{
  return ZEXT816(0x110725598);
}



/* Entry: 103f62364; end: 103f62427;  */

void FUN_103f62364(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x113035330;
  func_0x0001000285a8(0x113035330,&UNK_10dcaf220);
  _swift_initStaticObject();
  *param_1 = uVar1;
  return;
}


