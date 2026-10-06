/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10432e864; end: 10432e873; -[SCSpotlightRepliesTrayPageLauncherPayload viewSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10432e864(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306edd8);
}



/* Entry: 10432e874; end: 10432e8e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10432e874(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306edc8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11306edd0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11306edd8) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10432e8e8; end: 10432ea4b; -[SCSpotlightRepliesTrayPageLauncherPayload initWithConfig:story:viewSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10432e8e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11306edc8) = param_3;
  *(undefined8 *)(param_1 + _DAT_11306edd0) = param_4;
  *(undefined8 *)(param_1 + _DAT_11306edd8) = param_5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 10432ea4c; end: 10432ea4f; -[SCSpotlightRepliesTrayPageLauncherPayload copyWithZone:] */

void FUN_10432ea4c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10432ea50; end: 10432eb2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10432ea50(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x4749464e4f43;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4749464e4f43,0xe600000000000000);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0x59524f5453;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x59524f5453,0xe500000000000000);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0x554f535f57454956;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x554f535f57454956,0xeb00000000454352);
  func_0x00010bf92fc0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10432eb30; end: 10432eb7f; -[SCSpotlightRepliesTrayPageLauncherPayload encodeWithCoder:] */

void FUN_10432eb30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_10432ea50(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10432eb80; end: 10432ebaf;  */

void FUN_10432eb80(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_10432ebb0(param_1);
  return;
}



/* Entry: 10432ebb0; end: 10432ede3;  */

undefined8 FUN_10432ebb0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 unaff_x20;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  uVar2 = 0x4749464e4f43;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4749464e4f43,0xe600000000000000);
  lVar3 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar3 == 0) {
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_80,lVar3);
    _swift_unknownObjectRelease(lVar3);
  }
  uStack_58 = uStack_78;
  uStack_60 = uStack_80;
  lStack_48 = lStack_68;
  uStack_50 = uStack_70;
  if (lStack_68 == 0) {
LAB_10432ed8c:
    _objc_release(param_1);
    func_0x00010006e7f4(&uStack_60);
  }
  else {
    uVar2 = 0;
    FUN_10432b6d0(0);
    puVar1 = PTR___sypN_11034f1a8;
    plVar4 = &lStack_88;
    _swift_dynamicCast(plVar4,&uStack_60,PTR___sypN_11034f1a8 + 8,uVar2,6);
    lVar3 = lStack_88;
    if (((ulong)plVar4 & 1) != 0) {
      uVar2 = 0x59524f5453;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x59524f5453,0xe500000000000000);
      lVar5 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      if (lVar5 == 0) {
        uStack_78 = 0;
        uStack_80 = 0;
        lStack_68 = 0;
        uStack_70 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_80,lVar5);
        _swift_unknownObjectRelease(lVar5);
      }
      uStack_58 = uStack_78;
      uStack_60 = uStack_80;
      lStack_48 = lStack_68;
      uStack_50 = uStack_70;
      if (lStack_68 == 0) {
        _objc_release(param_1);
        param_1 = lVar3;
        goto LAB_10432ed8c;
      }
      uVar2 = 0;
      func_0x000101c84db4(0);
      plVar4 = &lStack_88;
      _swift_dynamicCast(plVar4,&uStack_60,puVar1 + 8,uVar2,6);
      if (((ulong)plVar4 & 1) != 0) {
        uVar2 = 0x554f535f57454956;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x554f535f57454956,0xeb00000000454352)
        ;
        func_0x00010bf66f40(param_1);
        _objc_release(uVar2);
        func_0x00010c001000();
        _objc_release(param_1);
        _objc_release(lStack_88);
        _objc_release(lVar3);
        return unaff_x20;
      }
      _objc_release(param_1);
      param_1 = lVar3;
    }
    _objc_release(param_1);
  }
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 10432ede4; end: 10432ee0b; -[SCSpotlightRepliesTrayPageLauncherPayload initWithCoder:] */

void FUN_10432ede4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_10432ebb0();
  return;
}



/* Entry: 10432ee0c; end: 10432ee7b; -[SCSpotlightRepliesTrayPageLauncherPayload description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10432ee0c(long param_1)

{
  undefined1 auStack_78 [16];
  undefined8 uStack_68;
  undefined8 uStack_58;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_10432b5d8(auStack_78,*(undefined8 *)(param_1 + _DAT_11306edc8));
  _swift_bridgeObjectRelease(uStack_68);
  _swift_bridgeObjectRelease(uStack_58);
  _swift_bridgeObjectRelease(uStack_40);
  _objc_release(uStack_38);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10432ee7c; end: 10432eef7; -[SCSpotlightRepliesTrayPageLauncherPayload init] */

void FUN_10432ee7c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCSpotlightRepliesScope/SCSpotlightRepliesTrayPageLauncherPayloadWrapper.swift",0x4e,2
             ,0x48,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10432eec4);
  (*pcVar1)();
}



/* Entry: 10432eef8; end: 10432ef63; -[SCSpotlightRepliesTrayPageLauncherPayload .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10432eef8(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306edc8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11306edd0));
  return;
}



/* Entry: 10432ef64; end: 10432ef83;  */

void FUN_10432ef64(void)

{
  _objc_opt_self(&PTR_PTR_11299cfa0);
  return;
}



/* Entry: 10432ef84; end: 10432ef8f; -[SCSpotlightQuickShareScope storyId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10432ef84(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11306ee08))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11306ee08);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10432ef90; end: 10432efaf; -[SCSpotlightQuickShareScope operaEventAnnouncer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10432ef90(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_11306ee20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10432efb0; end: 10432efbf; -[SCSpotlightQuickShareScope story] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10432efb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306ee28));
  return;
}



/* Entry: 10432efc0; end: 10432efcb; -[SCSpotlightQuickShareScope compositeStoryId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10432efc0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11306ee30))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11306ee30);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10432efcc; end: 10432efd7; -[SCSpotlightQuickShareScope snapId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10432efcc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11306ee38))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11306ee38);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10432efd8; end: 10432f02f;  */

void FUN_10432efd8(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 10432f030; end: 10432f03f; -[SCSpotlightQuickShareScope isLongFormShow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10432f030(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306ee40);
}



/* Entry: 10432f040; end: 10432f04f; -[SCSpotlightQuickShareScope platformAnalytics] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10432f040(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306ee48));
  return;
}



/* Entry: 10432f050; end: 10432f05f; -[SCSpotlightQuickShareScope isUpsold] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10432f050(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306ee50);
}



/* Entry: 10432f060; end: 10432f103; -[SCSpotlightQuickShareScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10432f060(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306ee08 + 8));
  func_0x000100db5c4c(param_1 + _DAT_11306ee10);
  func_0x000100db5c4c(param_1 + _DAT_11306ee18);
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11306ee20));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306ee28));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306ee30 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306ee38 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11306ee48));
  return;
}



/* Entry: 10432f104; end: 10432f283;  */

void FUN_10432f104(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x11306ee58,&UNK_10dceb620);
  puVar1 = &UNK_11075a600;
  _swift_allocObject(&UNK_11075a600,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  _swift_retain(param_1);
  _swift_retain(param_2);
  func_0x0001000823a8(0x10432f184,puVar1);
  return;
}



/* Entry: 10432f284; end: 10432f35b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10432f284(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uStack_48;
  
  lVar1 = _DAT_11306ee60;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_11306ee60);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    func_0x000100083b20(&uStack_48);
    func_0x0001000285a8(0x11306eec8,&UNK_10dceb6c8);
    _objc_allocWithZone();
    uVar4 = uStack_48;
    func_0x0001003b3b80(uStack_48);
    puVar3 = PTR_PTR_1126a8c98;
    _objc_allocWithZone();
    func_0x00010c058c00();
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    _objc_retain(puVar3);
    _objc_release(uVar4);
    puVar2 = (undefined *)0x0;
  }
  _objc_retain(puVar2);
  return puVar3;
}



/* Entry: 10432f35c; end: 10432f57b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10432f35c(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    undefined8 param_9,undefined8 param_10,undefined1 param_11,undefined4 param_12,
                    undefined8 param_13,undefined1 param_14)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *aplStack_c0 [2];
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  lVar5 = param_1;
  FUN_10432f784();
  lVar6 = lVar5;
  _objc_allocWithZone();
  lVar3 = _DAT_11306ee10;
  _swift_unknownObjectWeakInit(lVar6 + _DAT_11306ee10,0);
  lVar4 = _DAT_11306ee18;
  _swift_unknownObjectWeakInit(lVar6 + _DAT_11306ee18,0);
  plVar7 = (long *)(lVar6 + _DAT_11306ee08);
  *plVar7 = param_1;
  plVar7[1] = param_2;
  _swift_beginAccess(lVar6 + lVar3,auStack_80,1,0);
  _swift_unknownObjectWeakAssign(lVar6 + lVar3,param_3);
  _swift_beginAccess(lVar6 + lVar4,auStack_98,1,0);
  _swift_unknownObjectWeakAssign(lVar6 + lVar4,param_4);
  *(undefined8 *)(lVar6 + _DAT_11306ee20) = param_5;
  *(undefined8 *)(lVar6 + _DAT_11306ee28) = param_6;
  puVar1 = (undefined8 *)(lVar6 + _DAT_11306ee30);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  puVar1 = (undefined8 *)(lVar6 + _DAT_11306ee38);
  *puVar1 = param_9;
  puVar1[1] = param_10;
  *(undefined1 *)(lVar6 + _DAT_11306ee40) = param_11;
  *(undefined8 *)(lVar6 + _DAT_11306ee48) = param_13;
  *(undefined1 *)(lVar6 + _DAT_11306ee50) = param_14;
  puVar2 = PTR_s_init_1125d9248;
  lStack_a8 = lVar6;
  lStack_a0 = lVar5;
  _swift_bridgeObjectRetain(param_2);
  _swift_unknownObjectRetain(param_5);
  _objc_retain(param_6);
  _swift_bridgeObjectRetain(param_8);
  _swift_bridgeObjectRetain(param_10);
  _objc_retain(param_13);
  plVar7 = &lStack_a8;
  _objc_msgSendSuper2(plVar7,puVar2);
  aplStack_c0[0] = plVar7;
  func_0x00010008a7c8(&uStack_b0,aplStack_c0);
  func_0x000100083b20(aplStack_c0);
  _swift_release(uStack_b0);
  plVar8 = aplStack_c0[0];
  _swift_unknownObjectRelease(aplStack_c0[0]);
  FUN_10432f284();
  func_0x00010bf9d620();
  _objc_release(plVar8);
  return plVar7;
}



/* Entry: 10432f57c; end: 10432f70f; -[_TtC26SCSpotlightQuickShareScope34SCSpotlightQuickShareScopeServices buildWithStoryId:viewDelegate:scopeLifecycleDelegate:operaEventAnnouncer:story:compositeStoryId:snapId:isLongFormShow:platformAnalytics:isUpsold:] */

void FUN_10432f57c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,long param_9
                  ,undefined1 param_10,undefined4 param_11,undefined8 param_12)

{
  undefined8 uVar1;
  undefined8 uStack_80;
  undefined8 uStack_68;
  
  if (param_3 == 0) {
    uStack_80 = 0;
    uStack_68 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uStack_80 = param_3;
    uStack_68 = param_2;
  }
  if (param_8 == 0) {
    param_8 = 0;
    uVar1 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_8);
    uVar1 = param_2;
  }
  if (param_9 == 0) {
    param_9 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  _swift_unknownObjectRetain(param_4);
  _swift_unknownObjectRetain(param_5);
  _swift_unknownObjectRetain(param_6);
  _objc_retain(param_7);
  _objc_retain();
  _objc_retain(param_1);
  FUN_10432f35c(uStack_80,uStack_68,param_4,param_5,param_6,param_7,param_8,uVar1,param_9,param_2,
                param_10);
  _swift_unknownObjectRelease(param_4);
  _swift_unknownObjectRelease(param_5);
  _swift_unknownObjectRelease(param_6);
  _objc_release(param_7);
  _objc_release(param_12);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(uVar1);
  _swift_bridgeObjectRelease(uStack_68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uStack_80);
  return;
}



/* Entry: 10432f710; end: 10432f783; -[_TtC26SCSpotlightQuickShareScope34SCSpotlightQuickShareScopeServices remove:] */

void FUN_10432f710(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_1);
  uVar1 = param_1;
  FUN_10432f284();
  uVar2 = uVar1;
  func_0x00010c12e1e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _swift_unknownObjectRelease(uVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10432f784; end: 10432f7a3;  */

void FUN_10432f784(void)

{
  _objc_opt_self(&PTR_PTR_11299d080);
  return;
}



/* Entry: 10432f7a4; end: 10432f7a7;  */

void FUN_10432f7a4(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10432f7a8; end: 10432f7db;  */

void FUN_10432f7a8(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10432f7dc; end: 10432f823; -[_TtC26SCSpotlightQuickShareScope34SCSpotlightQuickShareScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10432f7dc(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_11306ee70));
  _swift_release(*(undefined8 *)(param_1 + _DAT_11306ee68));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11306ee60));
  return;
}



/* Entry: 10432f824; end: 10432f833;  */

undefined1  [16] FUN_10432f824(void)

{
  return ZEXT816(0x11075a630);
}



/* Entry: 10432f834; end: 10432f853;  */

void FUN_10432f834(void)

{
  _objc_opt_self(&PTR_PTR_11299d188);
  return;
}



/* Entry: 10432f854; end: 10432f857;  */

void FUN_10432f854(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10432f858; end: 10432fe2b;  */

long FUN_10432f858(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10432fe2c; end: 10432fe4b; -[_TtC16SCSpotlightScope16SCSpotlightScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10432fe2c(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_11306eed8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10432fe4c; end: 10432fe57; -[_TtC16SCSpotlightScope16SCSpotlightScope parentDeckContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10432fe4c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11306eee0;
  _swift_beginAccess(param_1 + _DAT_11306eee0,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10432fe58; end: 10432fe63; -[_TtC16SCSpotlightScope16SCSpotlightScope setParentDeckContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10432fe58(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11306eee0;
  _swift_beginAccess(param_1 + _DAT_11306eee0,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10432fe64; end: 10432fe73; -[_TtC16SCSpotlightScope16SCSpotlightScope configuration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10432fe64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306eee8));
  return;
}



/* Entry: 10432fe74; end: 10432fe7f; -[_TtC16SCSpotlightScope16SCSpotlightScope swipeViewParentDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10432fe74(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11306eef0;
  _swift_beginAccess(param_1 + _DAT_11306eef0,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10432fe80; end: 10432fe8b; -[_TtC16SCSpotlightScope16SCSpotlightScope setSwipeViewParentDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10432fe80(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11306eef0;
  _swift_beginAccess(param_1 + _DAT_11306eef0,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10432fe8c; end: 10432fe97; -[_TtC16SCSpotlightScope16SCSpotlightScope parentController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10432fe8c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11306eef8;
  _swift_beginAccess(param_1 + _DAT_11306eef8,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10432fe98; end: 10432fea3; -[_TtC16SCSpotlightScope16SCSpotlightScope setParentController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10432fe98(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11306eef8;
  _swift_beginAccess(param_1 + _DAT_11306eef8,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10432fea4; end: 10432feaf; -[_TtC16SCSpotlightScope16SCSpotlightScope baseView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10432fea4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11306ef00;
  _swift_beginAccess(param_1 + _DAT_11306ef00,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10432feb0; end: 10432febb; -[_TtC16SCSpotlightScope16SCSpotlightScope setBaseView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10432feb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11306ef00;
  _swift_beginAccess(param_1 + _DAT_11306ef00,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10432febc; end: 10432fec7; -[_TtC16SCSpotlightScope16SCSpotlightScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10432febc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11306ef08;
  _swift_beginAccess(param_1 + _DAT_11306ef08,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10432fec8; end: 10432fed3; -[_TtC16SCSpotlightScope16SCSpotlightScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10432fec8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11306ef08;
  _swift_beginAccess(param_1 + _DAT_11306ef08,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10432fed4; end: 10432fedf; -[_TtC16SCSpotlightScope16SCSpotlightScope playbackDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10432fed4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11306ef10;
  _swift_beginAccess(param_1 + _DAT_11306ef10,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10432fee0; end: 10432ff23;  */

void FUN_10432fee0(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  _swift_beginAccess(param_1 + lVar1,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10432ff24; end: 10432ff2f; -[_TtC16SCSpotlightScope16SCSpotlightScope setPlaybackDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10432ff24(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11306ef10;
  _swift_beginAccess(param_1 + _DAT_11306ef10,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10432ff30; end: 10432ff83;  */

void FUN_10432ff30(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10432ff84; end: 10432fffb; -[_TtC16SCSpotlightScope16SCSpotlightScope sourcePageSessionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10432ff84(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_11306ef18);
  _swift_beginAccess(puVar1,auStack_38,0,0);
  lVar2 = puVar1[1];
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
    _swift_bridgeObjectRetain(lVar2);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3,lVar2);
    _swift_bridgeObjectRelease(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10432fffc; end: 104330073; -[_TtC16SCSpotlightScope16SCSpotlightScope setSourcePageSessionId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10432fffc(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_11306ef18);
  _swift_beginAccess(plVar1,auStack_48,1,0);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  _swift_bridgeObjectRelease(lVar2);
  return;
}



/* Entry: 104330074; end: 104330083; -[_TtC16SCSpotlightScope16SCSpotlightScope sourcePage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104330074(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306ef20);
}



/* Entry: 104330084; end: 104330093; -[_TtC16SCSpotlightScope16SCSpotlightScope viewLocation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104330084(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306ef28);
}



/* Entry: 104330094; end: 1043300a3; -[_TtC16SCSpotlightScope16SCSpotlightScope feedPageEntryType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104330094(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306ef30);
}



/* Entry: 1043300a4; end: 1043300b3; -[_TtC16SCSpotlightScope16SCSpotlightScope prefersHorizontalNavigation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1043300a4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306ef38);
}



/* Entry: 1043300b4; end: 1043301b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043300b4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long unaff_x20;
  ulong uVar6;
  undefined1 auStack_58 [24];
  
  puVar3 = &UNK_11075a7b0;
  _swift_allocObject(&UNK_11075a7b0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_1;
  *(undefined8 *)(puVar3 + 0x18) = param_2;
  lVar2 = _DAT_11306ef40;
  _swift_beginAccess(unaff_x20 + _DAT_11306ef40,auStack_58,0x21,0);
  uVar6 = *(ulong *)(unaff_x20 + lVar2);
  _swift_retain(param_2);
  uVar4 = uVar6;
  _swift_isUniquelyReferenced_nonNull_native();
  *(ulong *)(unaff_x20 + lVar2) = uVar6;
  uVar5 = uVar6;
  if ((uVar4 & 1) == 0) {
    uVar5 = 0;
    func_0x0001016cbf48(0,*(long *)(uVar6 + 0x10) + 1,1,uVar6);
    *(ulong *)(unaff_x20 + lVar2) = uVar5;
  }
  uVar4 = *(ulong *)(uVar5 + 0x10);
  uVar6 = uVar5;
  if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar4) {
    uVar6 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
    func_0x0001016cbf48(uVar6,uVar4 + 1,1,uVar5);
  }
  *(ulong *)(uVar6 + 0x10) = uVar4 + 1;
  lVar1 = uVar6 + uVar4 * 0x10;
  *(code **)(lVar1 + 0x20) = FUN_1043301b4;
  *(undefined **)(lVar1 + 0x28) = puVar3;
  *(ulong *)(unaff_x20 + lVar2) = uVar6;
  _swift_endAccess(auStack_58);
  return;
}



/* Entry: 1043301b4; end: 1043301d3;  */

void FUN_1043301b4(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1043301d4; end: 10433027b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043301d4(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined1 auStack_58 [24];
  
  lVar3 = _DAT_11306ef40;
  _swift_beginAccess(unaff_x20 + _DAT_11306ef40,auStack_58,0,0);
  lVar3 = *(long *)(unaff_x20 + lVar3);
  uVar4 = *(ulong *)(lVar3 + 0x10);
  _swift_bridgeObjectRetain(lVar3);
  if (uVar4 != 0) {
    uVar5 = 0;
    puVar6 = (undefined8 *)(lVar3 + 0x28);
    do {
      if (*(ulong *)(lVar3 + 0x10) <= uVar5) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10433027c);
        (*pcVar2)();
      }
      uVar5 = uVar5 + 1;
      pcVar2 = (code *)puVar6[-1];
      uVar1 = *puVar6;
      _swift_retain(uVar1);
      (*pcVar2)();
      _swift_release(uVar1);
      puVar6 = puVar6 + 2;
    } while (uVar4 != uVar5);
  }
  _swift_bridgeObjectRelease(lVar3);
  return;
}



/* Entry: 10433027c; end: 1043302a3; -[_TtC16SCSpotlightScope16SCSpotlightScope spotlightTabWillPresent] */

void FUN_10433027c(undefined8 param_1)

{
  _objc_retain();
  FUN_1043301d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1043302a4; end: 10433049f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1043302a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  long unaff_x20;
  undefined1 auStack_b8 [8];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  _objc_allocWithZone();
  *(undefined **)(unaff_x20 + _DAT_11306ef40) = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar3 = _DAT_11306eee0;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_11306eee0,0);
  lVar4 = _DAT_11306eef0;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_11306eef0,0);
  lVar5 = _DAT_11306eef8;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_11306eef8,0);
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_11306ef00,0);
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_11306ef08,0);
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_11306ef10,0);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306ef18);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11306eed8) = param_1;
  _swift_beginAccess(unaff_x20 + lVar3,auStack_78,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar3,param_2);
  *(undefined8 *)(unaff_x20 + _DAT_11306eee8) = param_5;
  _swift_beginAccess(unaff_x20 + lVar4,auStack_90,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar4,param_3);
  _swift_beginAccess(unaff_x20 + lVar5,auStack_a8,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar5,param_4);
  *(undefined8 *)(unaff_x20 + _DAT_11306ef20) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_11306ef28) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_11306ef30) = 0xffffffffffffffff;
  *(undefined1 *)(unaff_x20 + _DAT_11306ef38) = 0;
  puVar2 = PTR_s_init_1125d9248;
  _swift_unknownObjectRetain(param_1);
  puVar6 = auStack_b8;
  _objc_msgSendSuper2(puVar6,puVar2);
  _swift_unknownObjectRelease(param_1);
  _swift_unknownObjectRelease(param_2);
  _swift_unknownObjectRelease(param_3);
  _objc_release(param_4);
  return puVar6;
}



/* Entry: 1043304a0; end: 10433056f; -[_TtC16SCSpotlightScope16SCSpotlightScope initWithUiContainer:deckContainer:swipeViewParentDelegate:parentController:configuration:sourcePage:viewLocation:] */

undefined8
FUN_1043304a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _swift_unknownObjectRetain(param_3);
  _swift_unknownObjectRetain(param_4);
  _swift_unknownObjectRetain(param_5);
  uVar1 = param_6;
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar2 = param_3;
  FUN_104331b28(param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  _swift_unknownObjectRelease(param_3);
  _swift_unknownObjectRelease(param_4);
  _swift_unknownObjectRelease(param_5);
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 104330570; end: 104330597; -[_TtC16SCSpotlightScope16SCSpotlightScope initWithUiContainer:deckContainer:swipeViewParentDelegate:parentController:configuration:sourcePage:viewLocation:feedPageEntryType:] */

void FUN_104330570(void)

{
  func_0x00010c0582a0();
  return;
}



/* Entry: 104330598; end: 1043307a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_104330598(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined1 param_9)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  long unaff_x20;
  undefined1 auStack_b8 [8];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  _objc_allocWithZone();
  *(undefined **)(unaff_x20 + _DAT_11306ef40) = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar3 = _DAT_11306eee0;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_11306eee0,0);
  lVar4 = _DAT_11306eef0;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_11306eef0,0);
  lVar5 = _DAT_11306eef8;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_11306eef8,0);
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_11306ef00,0);
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_11306ef08,0);
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_11306ef10,0);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306ef18);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11306eed8) = param_1;
  _swift_beginAccess(unaff_x20 + lVar3,auStack_78,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar3,param_2);
  _swift_beginAccess(unaff_x20 + lVar4,auStack_90,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar4,param_3);
  *(undefined8 *)(unaff_x20 + _DAT_11306eee8) = param_5;
  _swift_beginAccess(unaff_x20 + lVar5,auStack_a8,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar5,param_4);
  *(undefined8 *)(unaff_x20 + _DAT_11306ef20) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_11306ef28) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_11306ef30) = param_8;
  *(undefined1 *)(unaff_x20 + _DAT_11306ef38) = param_9;
  puVar2 = PTR_s_init_1125d9248;
  _swift_unknownObjectRetain(param_1);
  puVar6 = auStack_b8;
  _objc_msgSendSuper2(puVar6,puVar2);
  _swift_unknownObjectRelease(param_1);
  _swift_unknownObjectRelease(param_2);
  _swift_unknownObjectRelease(param_3);
  _objc_release(param_4);
  return puVar6;
}



/* Entry: 1043307a4; end: 104330887; -[_TtC16SCSpotlightScope16SCSpotlightScope initWithUiContainer:deckContainer:swipeViewParentDelegate:parentController:configuration:sourcePage:viewLocation:feedPageEntryType:prefersHorizontalNavigation:] */

undefined8
FUN_1043307a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined1 param_11)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _swift_unknownObjectRetain(param_3);
  _swift_unknownObjectRetain(param_4);
  _swift_unknownObjectRetain(param_5);
  uVar1 = param_6;
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar2 = param_3;
  func_0x000104331d00(param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11);
  _swift_unknownObjectRelease(param_3);
  _swift_unknownObjectRelease(param_4);
  _swift_unknownObjectRelease(param_5);
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 104330888; end: 1043308b3; -[_TtC16SCSpotlightScope16SCSpotlightScope init] */

void FUN_104330888(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCSpotlightScope.SCSpotlightScope",0x21,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1043308b4);
  (*pcVar1)();
}



/* Entry: 1043308b4; end: 1043309bb; -[_TtC16SCSpotlightScope16SCSpotlightScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043308b4(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306ef40));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11306eed8));
  func_0x000100db5cc0(param_1 + _DAT_11306eee0);
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306eee8));
  func_0x000100db5cc0(param_1 + _DAT_11306eef0);
  func_0x000100db5cc0(param_1 + _DAT_11306eef8);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_11306ef00);
  func_0x000100db5cc0(param_1 + _DAT_11306ef08);
  func_0x000100db5cc0(param_1 + _DAT_11306ef10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11306ef18 + 8))
  ;
  return;
}



/* Entry: 1043309bc; end: 104330f7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1043309bc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long *aplStack_138 [2];
  undefined8 uStack_128;
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  long lStack_c0;
  long lStack_b8;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  lVar6 = param_1;
  func_0x00010037796c();
  lVar7 = lVar6;
  _objc_allocWithZone();
  *(undefined **)(lVar7 + _DAT_11306ef40) = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar3 = _DAT_11306eee0;
  _swift_unknownObjectWeakInit(lVar7 + _DAT_11306eee0,0);
  lVar4 = _DAT_11306eef0;
  _swift_unknownObjectWeakInit(lVar7 + _DAT_11306eef0,0);
  lVar5 = _DAT_11306eef8;
  _swift_unknownObjectWeakInit(lVar7 + _DAT_11306eef8,0);
  _swift_unknownObjectWeakInit(lVar7 + _DAT_11306ef00,0);
  _swift_unknownObjectWeakInit(lVar7 + _DAT_11306ef08,0);
  _swift_unknownObjectWeakInit(lVar7 + _DAT_11306ef10,0);
  puVar1 = (undefined8 *)(lVar7 + _DAT_11306ef18);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(long *)(lVar7 + _DAT_11306eed8) = param_1;
  _swift_beginAccess(lVar7 + lVar3,auStack_80,1,0);
  _swift_unknownObjectWeakAssign(lVar7 + lVar3,param_2);
  _swift_beginAccess(lVar7 + lVar4,auStack_98,1,0);
  _swift_unknownObjectWeakAssign(lVar7 + lVar4,param_3);
  *(undefined8 *)(lVar7 + _DAT_11306eee8) = param_5;
  _swift_beginAccess(lVar7 + lVar5,auStack_b0,1,0);
  _swift_unknownObjectWeakAssign(lVar7 + lVar5,param_4);
  *(undefined8 *)(lVar7 + _DAT_11306ef20) = param_6;
  *(undefined8 *)(lVar7 + _DAT_11306ef28) = param_7;
  *(undefined8 *)(lVar7 + _DAT_11306ef30) = param_8;
  *(undefined1 *)(lVar7 + _DAT_11306ef38) = 0;
  puVar2 = PTR_s_init_1125d9248;
  lStack_c0 = lVar7;
  lStack_b8 = lVar6;
  _swift_unknownObjectRetain(param_1);
  _objc_retain(param_5);
  plVar8 = &lStack_c0;
  _objc_msgSendSuper2(plVar8,puVar2);
  lVar3 = _DAT_11306ef08;
  _swift_beginAccess((long)plVar8 + _DAT_11306ef08,auStack_d8,1,0);
  _swift_unknownObjectWeakAssign((long)plVar8 + lVar3,0);
  lVar3 = _DAT_11306ef10;
  _swift_beginAccess((long)plVar8 + _DAT_11306ef10,auStack_f0,1,0);
  _swift_unknownObjectWeakAssign((long)plVar8 + lVar3,0);
  puVar1 = (undefined8 *)((long)plVar8 + _DAT_11306ef18);
  _swift_beginAccess(puVar1,auStack_108,1,0);
  uVar9 = puVar1[1];
  *puVar1 = 0;
  puVar1[1] = 0;
  _swift_bridgeObjectRelease(uVar9);
  lVar3 = _DAT_11306ef00;
  _swift_beginAccess((long)plVar8 + _DAT_11306ef00,auStack_120,1,0);
  _swift_unknownObjectWeakAssign((long)plVar8 + lVar3,0);
  aplStack_138[0] = plVar8;
  func_0x00010008a7c8(&uStack_128,aplStack_138);
  func_0x000100083b20(aplStack_138);
  _swift_release(uStack_128);
  _swift_unknownObjectRelease(aplStack_138[0]);
  return plVar8;
}



/* Entry: 104330f7c; end: 10433137f; -[_TtC16SCSpotlightScope24SCSpotlightScopeServices buildWithUiContainer:deckContainer:swipeViewParentDelegate:parentController:configuration:sourcePage:viewLocation:feedPageEntryType:] */

void FUN_104330f7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _swift_unknownObjectRetain(param_3);
  _swift_unknownObjectRetain(param_4);
  _swift_unknownObjectRetain(param_5);
  uVar1 = param_6;
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_1);
  uVar2 = param_3;
  FUN_1043309bc(param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
  _swift_unknownObjectRelease(param_3);
  _swift_unknownObjectRelease(param_4);
  _swift_unknownObjectRelease(param_5);
  _objc_release(uVar1);
  _objc_release(param_7);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104331380; end: 1043317d3; -[_TtC16SCSpotlightScope24SCSpotlightScopeServices buildWithUiContainer:deckContainer:swipeViewParentDelegate:parentController:configuration:sourcePage:viewLocation:feedPageEntryType:spotlightScopeDelegate:spotlightPlaybackDelegate:sourcePageSessionId:] */

void FUN_104331380(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  long param_13)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_13 == 0) {
    param_13 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  _swift_unknownObjectRetain(param_3);
  _swift_unknownObjectRetain(param_4);
  _swift_unknownObjectRetain(param_5);
  uVar1 = param_6;
  _objc_retain();
  _objc_retain(param_7);
  _swift_unknownObjectRetain(param_11);
  _swift_unknownObjectRetain(param_12);
  _objc_retain(param_1);
  uVar2 = param_3;
  func_0x000104330c84(param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11,
                      param_12,param_13,param_2);
  _swift_unknownObjectRelease(param_3);
  _swift_unknownObjectRelease(param_4);
  _swift_unknownObjectRelease(param_5);
  _objc_release(uVar1);
  _objc_release(param_7);
  _swift_unknownObjectRelease(param_11);
  _swift_unknownObjectRelease(param_12);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1043317d4; end: 104331933; -[_TtC16SCSpotlightScope24SCSpotlightScopeServices buildWithUiContainer:deckContainer:swipeViewParentDelegate:parentController:configuration:sourcePage:viewLocation:feedPageEntryType:spotlightScopeDelegate:spotlightPlaybackDelegate:sourcePageSessionId:prefersHorizontalNavigation:] */

void FUN_1043317d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  long param_13,undefined1 param_14)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_13 == 0) {
    param_13 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  _swift_unknownObjectRetain(param_3);
  _swift_unknownObjectRetain(param_4);
  _swift_unknownObjectRetain(param_5);
  uVar1 = param_6;
  _objc_retain();
  _objc_retain(param_7);
  _swift_unknownObjectRetain(param_11);
  _swift_unknownObjectRetain(param_12);
  _objc_retain(param_1);
  uVar2 = param_3;
  func_0x0001043314d0(param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11,
                      param_12,param_13,param_2,param_14);
  _swift_unknownObjectRelease(param_3);
  _swift_unknownObjectRelease(param_4);
  _swift_unknownObjectRelease(param_5);
  _objc_release(uVar1);
  _objc_release(param_7);
  _swift_unknownObjectRelease(param_11);
  _swift_unknownObjectRelease(param_12);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104331934; end: 104331ab3; -[_TtC16SCSpotlightScope24SCSpotlightScopeServices buildWithUiContainer:deckContainer:swipeViewParentDelegate:parentController:configuration:sourcePage:viewLocation:feedPageEntryType:spotlightScopeDelegate:spotlightPlaybackDelegate:sourcePageSessionId:prefersHorizontalNavigation:baseView:] */

void FUN_104331934(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  long param_13,undefined1 param_14,undefined4 param_15,undefined8 param_16)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_98;
  
  if (param_13 == 0) {
    uStack_98 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uStack_98 = param_13;
  }
  _swift_unknownObjectRetain(param_3);
  _swift_unknownObjectRetain(param_4);
  _swift_unknownObjectRetain(param_5);
  uVar1 = param_6;
  _objc_retain();
  _objc_retain(param_7);
  _swift_unknownObjectRetain(param_11);
  _swift_unknownObjectRetain(param_12);
  _objc_retain();
  _objc_retain(param_1);
  uVar2 = param_3;
  func_0x000104331074(param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11,
                      param_12,uStack_98,param_2,param_14);
  _swift_unknownObjectRelease(param_3);
  _swift_unknownObjectRelease(param_4);
  _swift_unknownObjectRelease(param_5);
  _objc_release(uVar1);
  _objc_release(param_7);
  _swift_unknownObjectRelease(param_11);
  _swift_unknownObjectRelease(param_12);
  _objc_release(param_16);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104331ab4; end: 104331adf; -[_TtC16SCSpotlightScope24SCSpotlightScopeServices init] */

void FUN_104331ab4(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCSpotlightScope.SCSpotlightScopeServices",0x29,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104331ae0);
  (*pcVar1)();
}



/* Entry: 104331ae0; end: 104331ae3;  */

void FUN_104331ae0(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104331ae4; end: 104331b17;  */

void FUN_104331ae4(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104331b18; end: 104331b27; -[_TtC16SCSpotlightScope24SCSpotlightScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104331b18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11306ef50));
  return;
}



/* Entry: 104331b28; end: 104331edf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104331b28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  _swift_getObjectType();
  *(undefined **)(unaff_x20 + _DAT_11306ef40) = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar3 = _DAT_11306eee0;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_11306eee0,0);
  lVar4 = _DAT_11306eef0;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_11306eef0,0);
  lVar5 = _DAT_11306eef8;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_11306eef8,0);
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_11306ef00,0);
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_11306ef08,0);
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_11306ef10,0);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306ef18);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11306eed8) = param_1;
  _swift_beginAccess(unaff_x20 + lVar3,auStack_78,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar3,param_2);
  *(undefined8 *)(unaff_x20 + _DAT_11306eee8) = param_5;
  _swift_beginAccess(unaff_x20 + lVar4,auStack_90,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar4,param_3);
  _swift_beginAccess(unaff_x20 + lVar5,auStack_a8,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar5,param_4);
  *(undefined8 *)(unaff_x20 + _DAT_11306ef20) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_11306ef28) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_11306ef30) = 0xffffffffffffffff;
  *(undefined1 *)(unaff_x20 + _DAT_11306ef38) = 0;
  puVar2 = PTR_s_init_1125d9248;
  _swift_unknownObjectRetain(param_1);
  _objc_msgSendSuper2(&stack0xffffffffffffff48,puVar2);
  return;
}



/* Entry: 104331ee0; end: 104331ef3;  */

undefined1  [16] FUN_104331ee0(void)

{
  return ZEXT816(0x11075a7e0);
}



/* Entry: 104331ef4; end: 104331fc7;  */

void FUN_104331ef4(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104331fc8; end: 104331fe7;  */

void FUN_104331fc8(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 104331fe8; end: 10433201b;  */

undefined8 FUN_104331fe8(undefined8 param_1)

{
  (*(code *)(undefined *)0x10432f9b0)();
  return param_1;
}



/* Entry: 10433201c; end: 10433204f; -[SCSpotlightConfiguration description] */

void FUN_10433201c(void)

{
  undefined1 auStack_60 [80];
  
  FUN_104332818(auStack_60);
  FUN_104331fe8(auStack_60);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104332050; end: 104332097; -[SCSpotlightConfiguration init] */

void FUN_104332050(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCSpotlightScope/SCSpotlightConfigurationWrapper.swift",0x36,2,0x95,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104332098);
  (*pcVar1)();
}



/* Entry: 104332098; end: 10433209b; -[SCSpotlightConfiguration copyWithZone:] */

void FUN_104332098(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10433209c; end: 1043320e7; +[SCSpotlightConfiguration mainScreenWithPrependedCompositeStoryId:] */

void FUN_10433209c(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  }
  FUN_104332a98();
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1043320e8; end: 1043320eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043320e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_70;
  long lStack_68;
  
  lVar3 = param_1;
  FUN_1043330d0();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined1 *)(lVar4 + _DAT_11306efa8) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306efb0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(long *)(lVar4 + _DAT_11306efb8) = param_1;
  *(undefined8 *)(lVar4 + _DAT_11306efc0) = param_2;
  *(undefined8 *)(lVar4 + _DAT_11306efc8) = param_3;
  *(undefined8 *)(lVar4 + _DAT_11306efd0) = param_4;
  *(undefined8 *)(lVar4 + _DAT_11306efd8) = param_5;
  *(undefined8 *)(lVar4 + _DAT_11306efe0) = param_6;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306efe8);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  *(undefined8 *)(lVar4 + _DAT_11306eff0) = param_9;
  *(undefined8 *)(lVar4 + _DAT_11306eff8) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306f000) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306f008) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306f010) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306f018) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306f020) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306f028) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306f030) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306f038) = 0;
  *(undefined1 *)(lVar4 + _DAT_11306f040) = 2;
  puVar2 = PTR_s_init_1125d9248;
  lStack_70 = lVar4;
  lStack_68 = lVar3;
  _swift_bridgeObjectRetain(param_1);
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _swift_bridgeObjectRetain(param_8);
  _objc_retain(param_9);
  _objc_msgSendSuper2(&lStack_70,puVar2);
  return;
}



/* Entry: 1043320ec; end: 10433223f; +[SCSpotlightConfiguration modularWithStoriesToPrepend:dedupeFpToLaunch:inChatContextParams:compositeStoryIdToMessage:prependedCommentIds:storyLoggingFieldsOverrideDict:compositeStoryIdToFetchAndPrepend:initialPlaybackStartTimeMs:] */

void FUN_1043320ec(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,undefined8 param_10)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if (param_3 == 0) {
    uStack_68 = 0;
    uStack_70 = param_2;
  }
  else {
    uStack_70 = 0;
    func_0x000101c84db4();
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ();
    uStack_68 = param_3;
  }
  if (param_9 == 0) {
    uStack_78 = 0;
    uStack_70 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uStack_78 = param_9;
  }
  uVar1 = param_4;
  _objc_retain();
  uVar2 = param_5;
  _objc_retain(param_5);
  uVar3 = param_6;
  _objc_retain(param_6);
  uVar4 = param_7;
  _objc_retain(param_7);
  uVar5 = param_8;
  _objc_retain(param_8);
  uVar6 = param_10;
  _objc_retain(param_10);
  lVar7 = uStack_68;
  FUN_104332bf0(uStack_68,param_4,param_5,param_6,param_7,param_8,uStack_78,uStack_70,param_10);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar5);
  _objc_release(uVar6);
  _swift_bridgeObjectRelease(uStack_70);
  _swift_bridgeObjectRelease(uStack_68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar7);
  return;
}



/* Entry: 104332240; end: 1043322e7; +[SCSpotlightConfiguration modularSingleSpotlightWithSpotlightStory:storyLoggingFieldsOverrideDict:inChatContextParams:prependedCommentIds:] */

void FUN_104332240(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  uVar1 = param_4;
  _objc_retain(param_4);
  uVar2 = param_5;
  _objc_retain(param_5);
  uVar3 = param_6;
  _objc_retain(param_6);
  uVar4 = param_3;
  FUN_104332db8(param_3,param_4,param_5,param_6);
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1043322e8; end: 1043323a7; +[SCSpotlightConfiguration broccoliWithPageSessionIdObservable:entryEventObservable:snapViewsSubject:pullToRefreshObservable:additionalOperaPlugin:isMixedFeedEnabled:] */

void FUN_1043322e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _swift_unknownObjectRetain(param_7);
  uVar1 = param_3;
  FUN_104332f38(param_3,param_4,param_5,param_6,param_7,param_8);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(param_6);
  _swift_unknownObjectRelease(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1043323a8; end: 104332553;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043323a8(code *param_1,undefined8 param_2,code *param_3,undefined8 param_4,code *param_5,
                  undefined8 param_6,code *param_7)

{
  byte bVar1;
  code *pcVar2;
  long unaff_x20;
  
  bVar1 = *(byte *)(unaff_x20 + _DAT_11306efa8);
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      (*param_1)(*(undefined8 *)(unaff_x20 + _DAT_11306efb0),
                 ((undefined8 *)(unaff_x20 + _DAT_11306efb0))[1]);
    }
    else {
      (*param_3)(*(undefined8 *)(unaff_x20 + _DAT_11306efb8),
                 *(undefined8 *)(unaff_x20 + _DAT_11306efc0),
                 *(undefined8 *)(unaff_x20 + _DAT_11306efc8),
                 *(undefined8 *)(unaff_x20 + _DAT_11306efd0),
                 *(undefined8 *)(unaff_x20 + _DAT_11306efd8),
                 *(undefined8 *)(unaff_x20 + _DAT_11306efe0),
                 *(undefined8 *)(unaff_x20 + _DAT_11306efe8),
                 ((undefined8 *)(unaff_x20 + _DAT_11306efe8))[1],
                 *(undefined8 *)(unaff_x20 + _DAT_11306eff0));
    }
  }
  else if (bVar1 == 2) {
    if (*(long *)(unaff_x20 + _DAT_11306eff8) == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104332540);
      (*pcVar2)();
    }
    (*param_5)(*(long *)(unaff_x20 + _DAT_11306eff8),*(undefined8 *)(unaff_x20 + _DAT_11306f000),
               *(undefined8 *)(unaff_x20 + _DAT_11306f008),
               *(undefined8 *)(unaff_x20 + _DAT_11306f010));
  }
  else {
    if (*(long *)(unaff_x20 + _DAT_11306f018) == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104332544);
      (*pcVar2)();
    }
    if (*(long *)(unaff_x20 + _DAT_11306f020) == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104332548);
      (*pcVar2)();
    }
    if (*(long *)(unaff_x20 + _DAT_11306f028) == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10433254c);
      (*pcVar2)();
    }
    if (*(long *)(unaff_x20 + _DAT_11306f030) == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104332550);
      (*pcVar2)();
    }
    if (*(char *)(unaff_x20 + _DAT_11306f040) == '\x02') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104332554);
      (*pcVar2)();
    }
    (*param_7)();
  }
  return;
}



/* Entry: 104332554; end: 1043325c7; -[SCSpotlightConfiguration matchMainScreen:modular:modularSingleSpotlight:broccoli:] */

void FUN_104332554(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_90 = param_6;
  uStack_70 = param_5;
  uStack_50 = param_4;
  uStack_30 = param_3;
  _objc_retain();
  FUN_1043323a8(FUN_104333298,auStack_40,FUN_1043332a0,auStack_60,FUN_1043332c8,auStack_80,
                0x1043332e4,auStack_a0);
  _objc_release(param_1);
  return;
}



/* Entry: 1043325c8; end: 104332693;  */

void FUN_1043325c8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,
                  undefined8 param_9,long param_10)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = 0;
    func_0x000101c84db4(0);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(param_1,uVar1);
  }
  uVar1 = 0;
  if (param_8 != 0) {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_7,param_8);
    uVar1 = param_7;
  }
  (**(code **)(param_10 + 0x10))
            (param_10,param_1,param_2,param_3,param_4,param_5,param_6,uVar1,param_9);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104332694; end: 1043326c7;  */

void FUN_104332694(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1043326c8; end: 104332807; -[SCSpotlightConfiguration .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043326c8(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306efb0 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306efb8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306efc0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306efc8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306efd0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306efd8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306efe0));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306efe8 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306eff0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306eff8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306f000));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306f008));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306f010));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306f018));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306f020));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306f028));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306f030));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_11306f038));
  return;
}



/* Entry: 104332808; end: 104332817;  */

ulong FUN_104332808(ulong param_1)

{
  if (3 < param_1) {
    param_1 = 4;
  }
  return param_1;
}



/* Entry: 104332818; end: 104332a97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104332818(long *param_1,long param_2)

{
  byte bVar1;
  code *pcVar2;
  long extraout_x9;
  long extraout_x9_00;
  long lVar3;
  long extraout_x10;
  long extraout_x10_00;
  long extraout_x10_01;
  long lVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long unaff_x22;
  long unaff_x23;
  ulong uVar8;
  long unaff_x25;
  long unaff_x26;
  ulong uVar9;
  
  bVar1 = *(byte *)(param_2 + _DAT_11306efa8);
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      lVar3 = *(long *)(param_2 + _DAT_11306efb0);
      lVar7 = ((long *)(param_2 + _DAT_11306efb0))[1];
      _swift_bridgeObjectRetain(lVar7);
      uVar5 = 0;
      uVar8 = 0;
      lVar6 = extraout_x9;
      lVar4 = extraout_x10;
    }
    else {
      lVar3 = *(long *)(param_2 + _DAT_11306efb8);
      lVar7 = *(long *)(param_2 + _DAT_11306efc0);
      unaff_x22 = *(long *)(param_2 + _DAT_11306efc8);
      unaff_x23 = *(long *)(param_2 + _DAT_11306efd0);
      lVar6 = *(long *)(param_2 + _DAT_11306efd8);
      uVar9 = *(ulong *)(param_2 + _DAT_11306efe0);
      lVar4 = *(long *)(param_2 + _DAT_11306efe8);
      unaff_x25 = ((long *)(param_2 + _DAT_11306efe8))[1];
      unaff_x26 = *(long *)(param_2 + _DAT_11306eff0);
      uVar5 = (uint)uVar9 & 0xff;
      uVar8 = uVar9 & 0xffffffffffffff00;
      _swift_bridgeObjectRetain(lVar3);
      _objc_retain(lVar7);
      _objc_retain(unaff_x22);
      _objc_retain(unaff_x23);
      _objc_retain(lVar6);
      _objc_retain(uVar9);
      _swift_bridgeObjectRetain(unaff_x25);
      _objc_retain(unaff_x26);
    }
  }
  else if (bVar1 == 2) {
    lVar3 = *(long *)(param_2 + _DAT_11306eff8);
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104332a84);
      (*pcVar2)();
    }
    lVar7 = *(long *)(param_2 + _DAT_11306f000);
    unaff_x22 = *(long *)(param_2 + _DAT_11306f008);
    unaff_x23 = *(long *)(param_2 + _DAT_11306f010);
    _objc_retain(unaff_x23);
    _objc_retain(lVar3);
    _objc_retain(lVar7);
    _objc_retain(unaff_x22);
    uVar5 = 0;
    uVar8 = 0;
    lVar6 = extraout_x9_00;
    lVar4 = extraout_x10_00;
  }
  else {
    lVar3 = *(long *)(param_2 + _DAT_11306f018);
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104332a88);
      (*pcVar2)();
    }
    lVar7 = *(long *)(param_2 + _DAT_11306f020);
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104332a8c);
      (*pcVar2)();
    }
    unaff_x22 = *(long *)(param_2 + _DAT_11306f028);
    if (unaff_x22 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104332a90);
      (*pcVar2)();
    }
    unaff_x23 = *(long *)(param_2 + _DAT_11306f030);
    if (unaff_x23 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104332a94);
      (*pcVar2)();
    }
    if (*(byte *)(param_2 + _DAT_11306f040) == 2) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104332a98);
      (*pcVar2)();
    }
    lVar6 = *(long *)(param_2 + _DAT_11306f038);
    uVar5 = *(byte *)(param_2 + _DAT_11306f040) & 1;
    _swift_unknownObjectRetain(lVar6);
    _objc_retain(lVar3);
    _objc_retain(lVar7);
    _objc_retain(unaff_x22);
    _objc_retain(unaff_x23);
    uVar8 = 0;
    lVar4 = extraout_x10_01;
  }
  *param_1 = lVar3;
  param_1[1] = lVar7;
  param_1[2] = unaff_x22;
  param_1[3] = unaff_x23;
  param_1[4] = lVar6;
  param_1[5] = uVar8 | uVar5;
  param_1[6] = lVar4;
  param_1[7] = unaff_x25;
  param_1[8] = unaff_x26;
  *(byte *)(param_1 + 9) = bVar1;
  return;
}



/* Entry: 104332a98; end: 104332bef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104332a98(long param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lStack_40;
  long lStack_38;
  
  lVar4 = param_1;
  FUN_1043330d0();
  lVar5 = lVar4;
  _objc_allocWithZone();
  *(undefined1 *)(lVar5 + _DAT_11306efa8) = 0;
  plVar1 = (long *)(lVar5 + _DAT_11306efb0);
  *plVar1 = param_1;
  plVar1[1] = param_2;
  *(undefined8 *)(lVar5 + _DAT_11306efb8) = 0;
  *(undefined8 *)(lVar5 + _DAT_11306efc0) = 0;
  *(undefined8 *)(lVar5 + _DAT_11306efc8) = 0;
  *(undefined8 *)(lVar5 + _DAT_11306efd0) = 0;
  *(undefined8 *)(lVar5 + _DAT_11306efd8) = 0;
  *(undefined8 *)(lVar5 + _DAT_11306efe0) = 0;
  puVar2 = (undefined8 *)(lVar5 + _DAT_11306efe8);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined8 *)(lVar5 + _DAT_11306eff0) = 0;
  *(undefined8 *)(lVar5 + _DAT_11306eff8) = 0;
  *(undefined8 *)(lVar5 + _DAT_11306f000) = 0;
  *(undefined8 *)(lVar5 + _DAT_11306f008) = 0;
  *(undefined8 *)(lVar5 + _DAT_11306f010) = 0;
  *(undefined8 *)(lVar5 + _DAT_11306f018) = 0;
  *(undefined8 *)(lVar5 + _DAT_11306f020) = 0;
  *(undefined8 *)(lVar5 + _DAT_11306f028) = 0;
  *(undefined8 *)(lVar5 + _DAT_11306f030) = 0;
  *(undefined8 *)(lVar5 + _DAT_11306f038) = 0;
  *(undefined1 *)(lVar5 + _DAT_11306f040) = 2;
  puVar3 = PTR_s_init_1125d9248;
  lStack_40 = lVar5;
  lStack_38 = lVar4;
  _swift_bridgeObjectRetain(param_2);
  _objc_msgSendSuper2(&lStack_40,puVar3);
  return;
}



/* Entry: 104332bf0; end: 104332db7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104332bf0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_70;
  long lStack_68;
  
  lVar3 = param_1;
  FUN_1043330d0();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined1 *)(lVar4 + _DAT_11306efa8) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306efb0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(long *)(lVar4 + _DAT_11306efb8) = param_1;
  *(undefined8 *)(lVar4 + _DAT_11306efc0) = param_2;
  *(undefined8 *)(lVar4 + _DAT_11306efc8) = param_3;
  *(undefined8 *)(lVar4 + _DAT_11306efd0) = param_4;
  *(undefined8 *)(lVar4 + _DAT_11306efd8) = param_5;
  *(undefined8 *)(lVar4 + _DAT_11306efe0) = param_6;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306efe8);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  *(undefined8 *)(lVar4 + _DAT_11306eff0) = param_9;
  *(undefined8 *)(lVar4 + _DAT_11306eff8) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306f000) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306f008) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306f010) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306f018) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306f020) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306f028) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306f030) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306f038) = 0;
  *(undefined1 *)(lVar4 + _DAT_11306f040) = 2;
  puVar2 = PTR_s_init_1125d9248;
  lStack_70 = lVar4;
  lStack_68 = lVar3;
  _swift_bridgeObjectRetain(param_1);
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _swift_bridgeObjectRetain(param_8);
  _objc_retain(param_9);
  _objc_msgSendSuper2(&lStack_70,puVar2);
  return;
}


