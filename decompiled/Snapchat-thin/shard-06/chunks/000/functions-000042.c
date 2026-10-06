/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10441eda0; end: 10441edaf; -[SCContextLoggingActionSource contextMenuSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10441eda0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113078348);
}



/* Entry: 10441edb0; end: 10441edbf; -[SCContextLoggingActionSource contextMenuSourceSpecific] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10441edb0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113078350);
}



/* Entry: 10441edc0; end: 10441edcf; -[SCContextLoggingActionSource interactionContext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10441edc0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113078358);
}



/* Entry: 10441edd0; end: 10441ef07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10441edd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113078338) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113078340) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113078348) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113078350) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_113078358) = param_5;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10441ef08; end: 10441efa3; -[SCContextLoggingActionSource initWithActionType:contextMenuType:contextMenuSource:contextMenuSourceSpecific:interactionContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10441ef08(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lStack_50;
  long lStack_48;
  
  lVar1 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_113078338) = param_3;
  *(undefined8 *)(param_1 + _DAT_113078340) = param_4;
  *(undefined8 *)(param_1 + _DAT_113078348) = param_5;
  *(undefined8 *)(param_1 + _DAT_113078350) = param_6;
  *(undefined8 *)(param_1 + _DAT_113078358) = param_7;
  lStack_50 = param_1;
  lStack_48 = lVar1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10441efa4; end: 10441f02b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10441efa4(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  uVar1 = param_1[1];
  *(undefined8 *)(unaff_x20 + _DAT_113078338) = *param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113078340) = uVar1;
  uVar1 = param_1[3];
  *(undefined8 *)(unaff_x20 + _DAT_113078348) = param_1[2];
  *(undefined8 *)(unaff_x20 + _DAT_113078350) = uVar1;
  *(undefined8 *)(unaff_x20 + _DAT_113078358) = param_1[4];
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10441f02c; end: 10441f02f; -[SCContextLoggingActionSource copyWithZone:] */

void FUN_10441f02c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10441f030; end: 10441f04b; -[SCContextLoggingActionSource description] */

void FUN_10441f030(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10441f04c; end: 10441f093; -[SCContextLoggingActionSource init] */

void FUN_10441f04c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCContextLoggingServices/SCContextLoggingActionSourceWrapper.swift",0x42,2,0x38,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10441f094);
  (*pcVar1)();
}



/* Entry: 10441f094; end: 10441f0af; +[SCContextLoggingActionSourceBuilder contextLoggingActionSource] */

void FUN_10441f094(void)

{
  _swift_getObjCClassMetadata();
  _objc_allocWithZone();
  func_0x00010bfee200();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10441f0b0; end: 10441f0ef; +[SCContextLoggingActionSourceBuilder contextLoggingActionSourceWithExistingContextLoggingActionSource:] */

void FUN_10441f0b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  FUN_10441f510(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10441f0f0; end: 10441f107; -[SCContextLoggingActionSourceBuilder withActionType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10441f0f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_113078360);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 10441f108; end: 10441f11f; -[SCContextLoggingActionSourceBuilder withContextMenuType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10441f108(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_113078368);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 10441f120; end: 10441f137; -[SCContextLoggingActionSourceBuilder withContextMenuSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10441f120(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_113078370);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 10441f138; end: 10441f14f; -[SCContextLoggingActionSourceBuilder withContextMenuSourceSpecific:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10441f138(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_113078378);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 10441f150; end: 10441f167; -[SCContextLoggingActionSourceBuilder withInteractionContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10441f150(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_113078380);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 10441f168; end: 10441f337;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10441f168(long param_1)

{
  char *pcVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lStack_60;
  long lStack_58;
  
  if (*(char *)((undefined8 *)(unaff_x20 + _DAT_113078360) + 1) == '\x01') {
    uVar2 = 0x79546e6f69746361;
    uVar4 = 0xea00000000006570;
  }
  else if (*(char *)((undefined8 *)(unaff_x20 + _DAT_113078368) + 1) == '\x01') {
    uVar2 = 0x4d747865746e6f63;
    uVar4 = 0xef65707954756e65;
  }
  else if (*(char *)((undefined8 *)(unaff_x20 + _DAT_113078370) + 1) == '\x01') {
    uVar4 = 0x800000010f1fd4c0;
    uVar2 = 0xd000000000000011;
  }
  else {
    if (*(char *)((undefined8 *)(unaff_x20 + _DAT_113078378) + 1) == '\x01') {
      pcVar1 = "contextMenuSourceSpecific";
      uVar2 = 0xd000000000000019;
    }
    else {
      if (*(char *)((undefined8 *)(unaff_x20 + _DAT_113078380) + 1) != '\x01') {
        uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113078360);
        uVar5 = *(undefined8 *)(unaff_x20 + _DAT_113078368);
        uVar6 = *(undefined8 *)(unaff_x20 + _DAT_113078370);
        uVar7 = *(undefined8 *)(unaff_x20 + _DAT_113078378);
        uVar8 = *(undefined8 *)(unaff_x20 + _DAT_113078380);
        FUN_10441f7c8();
        lVar3 = param_1;
        _objc_allocWithZone();
        *(undefined8 *)(lVar3 + _DAT_113078338) = uVar2;
        *(undefined8 *)(lVar3 + _DAT_113078340) = uVar5;
        *(undefined8 *)(lVar3 + _DAT_113078348) = uVar6;
        *(undefined8 *)(lVar3 + _DAT_113078350) = uVar7;
        *(undefined8 *)(lVar3 + _DAT_113078358) = uVar8;
        lStack_60 = lVar3;
        lStack_58 = param_1;
        _objc_msgSendSuper2(&lStack_60,PTR_s_init_1125d9248);
        return;
      }
      pcVar1 = "interactionContext";
      uVar2 = 0xd000000000000012;
    }
    uVar4 = (ulong)(pcVar1 + -0x20) | 0x8000000000000000;
  }
  FUN_10441f620(uVar2,uVar4);
  _swift_willThrow();
  return;
}



/* Entry: 10441f338; end: 10441f3a3; -[SCContextLoggingActionSourceBuilder build] */

/* WARNING: Removing unreachable block (ram,0x00010441f384) */

void FUN_10441f338(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_10441f168();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10441f3a4; end: 10441f433; -[SCContextLoggingActionSourceBuilder safeBuildAndReturnError:] */

/* WARNING: Removing unreachable block (ram,0x00010441f3e0) */
/* WARNING: Removing unreachable block (ram,0x00010441f414) */
/* WARNING: Removing unreachable block (ram,0x00010441f3e4) */

void FUN_10441f3a4(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_10441f168();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10441f434; end: 10441f4d7; -[SCContextLoggingActionSourceBuilder init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10441f434(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  puVar1 = (undefined8 *)(param_1 + _DAT_113078360);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(param_1 + _DAT_113078368);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(param_1 + _DAT_113078370);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(param_1 + _DAT_113078378);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(param_1 + _DAT_113078380);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10441f4d8; end: 10441f4db;  */

void FUN_10441f4d8(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10441f4dc; end: 10441f50f;  */

void FUN_10441f4dc(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10441f510; end: 10441f61f;  */

/* WARNING: Possible PIC construction at 0x00010441f544: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010441f548) */

void FUN_10441f510(long param_1)

{
  if (param_1 == 0) {
    func_0x00010441f7e8();
    _objc_allocWithZone();
  }
  else {
    func_0x00010441f7e8();
    _objc_allocWithZone();
    _objc_retain(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfee210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10441f620; end: 10441f7c7;  */

undefined * FUN_10441f620(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined1 auStack_90 [80];
  
  lVar2 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  puVar6 = auStack_90;
  _swift_initStackObject();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  uVar3 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  *(undefined8 *)(lVar2 + 0x20) = uVar3;
  *(undefined1 **)(lVar2 + 0x28) = puVar6;
  __ss11_StringGutsV4growyySiF(0x33);
  __sSS6appendyySSF(0xd000000000000027,0x800000010f11f8b0);
  __sSS6appendyySSF(param_1,param_2);
  __sSS6appendyySSF(0x736e752073692027,0xea00000000007465);
  puVar1 = PTR___sSSN_11034da80;
  *(undefined **)(lVar2 + 0x48) = PTR___sSSN_11034da80;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  *(undefined8 *)(lVar2 + 0x38) = 0xe000000000000000;
  lVar4 = lVar2;
  func_0x000100214a84(lVar2);
  _swift_setDeallocating(lVar2);
  func_0x000100f15a0c((undefined8 *)(lVar2 + 0x20));
  puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
  _objc_allocWithZone(PTR__OBJC_CLASS___NSError_1126ae858);
  uVar3 = 0xd000000000000023;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000023,0x800000010f11f880);
  lVar2 = lVar4;
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (lVar4,puVar1,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  _swift_bridgeObjectRelease(lVar4);
  func_0x00010c00e2e0(puVar5);
  _objc_release(uVar3);
  _objc_release(lVar2);
  return puVar5;
}



/* Entry: 10441f7c8; end: 10441f807;  */

void FUN_10441f7c8(void)

{
  _objc_opt_self(&PTR_PTR_1129b12d8);
  return;
}



/* Entry: 10441f808; end: 10441f80b;  */

void FUN_10441f808(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10441f80c; end: 10441f81b; -[SCContextActionMetricsParams source] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10441f80c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130783d8));
  return;
}



/* Entry: 10441f81c; end: 10441f82b; -[SCContextActionMetricsParams metricsParams] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10441f81c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130783e0));
  return;
}



/* Entry: 10441f82c; end: 10441f88f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10441f82c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130783d8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_1130783e0) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10441f890; end: 10441f907; -[SCContextActionMetricsParams initWithSource:metricsParams:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10441f890(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_1130783d8) = param_3;
  *(undefined8 *)(param_1 + _DAT_1130783e0) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 10441f908; end: 10441f937;  */

void FUN_10441f908(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_10441f938(param_1);
  return;
}



/* Entry: 10441f938; end: 10441fa77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10441f938(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  long unaff_x20;
  undefined8 uVar9;
  long lStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
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
  undefined4 uStack_70;
  
  _swift_getObjectType();
  uVar1 = *param_1;
  uVar3 = param_1[1];
  uVar2 = param_1[2];
  uVar4 = param_1[3];
  uVar9 = param_1[4];
  lVar5 = 0;
  FUN_10441f7c8();
  lVar6 = lVar5;
  _objc_allocWithZone();
  *(undefined8 *)(lVar6 + _DAT_113078338) = uVar1;
  *(undefined8 *)(lVar6 + _DAT_113078340) = uVar3;
  *(undefined8 *)(lVar6 + _DAT_113078348) = uVar2;
  *(undefined8 *)(lVar6 + _DAT_113078350) = uVar4;
  *(undefined8 *)(lVar6 + _DAT_113078358) = uVar9;
  plVar7 = &lStack_e0;
  lStack_e0 = lVar6;
  lStack_d8 = lVar5;
  _objc_msgSendSuper2(plVar7,PTR_s_init_1125d9248);
  *(long **)(unaff_x20 + _DAT_1130783d8) = plVar7;
  uStack_98 = param_1[0xc];
  uStack_a0 = param_1[0xb];
  uStack_88 = param_1[0xe];
  uStack_90 = param_1[0xd];
  uStack_78 = param_1[0x10];
  uStack_80 = param_1[0xf];
  uStack_70 = *(undefined4 *)(param_1 + 0x11);
  uStack_c8 = param_1[6];
  uStack_d0 = param_1[5];
  uStack_b8 = param_1[8];
  uStack_c0 = param_1[7];
  uStack_a8 = param_1[10];
  uStack_b0 = param_1[9];
  FUN_104420494(0);
  _objc_allocWithZone();
  puVar8 = &uStack_d0;
  FUN_104420184();
  *(undefined8 **)(unaff_x20 + _DAT_1130783e0) = puVar8;
  _objc_msgSendSuper2(&stack0xffffffffffffff10,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10441fa78; end: 10441fa7b; -[SCContextActionMetricsParams copyWithZone:] */

void FUN_10441fa78(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10441fa7c; end: 10441faaf; -[SCContextActionMetricsParams description] */

void FUN_10441fa7c(void)

{
  undefined1 auStack_a0 [144];
  
  FUN_10441fb64(auStack_a0);
  FUN_10441fc4c(auStack_a0);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10441fab0; end: 10441fb2b; -[SCContextActionMetricsParams init] */

void FUN_10441fab0(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCContextLoggingServices/SCContextActionMetricsParamsWrapper.swift",0x42,2,0x26,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10441faf8);
  (*pcVar1)();
}



/* Entry: 10441fb2c; end: 10441fb63; -[SCContextActionMetricsParams .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10441fb2c(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130783d8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130783e0));
  return;
}



/* Entry: 10441fb64; end: 10441fc4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10441fb64(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  lVar1 = *(long *)(param_2 + _DAT_1130783d8);
  uVar2 = *(undefined8 *)(lVar1 + _DAT_113078338);
  uVar3 = *(undefined8 *)(lVar1 + _DAT_113078340);
  uVar4 = *(undefined8 *)(lVar1 + _DAT_113078348);
  uVar5 = *(undefined8 *)(lVar1 + _DAT_113078350);
  uVar6 = *(undefined8 *)(lVar1 + _DAT_113078358);
  func_0x000104420390(&uStack_a8,*(undefined8 *)(param_2 + _DAT_1130783e0));
  param_1[0xc] = uStack_70;
  param_1[0xb] = uStack_78;
  param_1[0xe] = uStack_60;
  param_1[0xd] = uStack_68;
  param_1[0x10] = uStack_50;
  param_1[0xf] = uStack_58;
  param_1[6] = uStack_a0;
  param_1[5] = uStack_a8;
  param_1[8] = uStack_90;
  param_1[7] = uStack_98;
  *param_1 = uVar2;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  param_1[4] = uVar6;
  *(undefined4 *)(param_1 + 0x11) = uStack_48;
  param_1[10] = uStack_80;
  param_1[9] = uStack_88;
  return;
}



/* Entry: 10441fc4c; end: 10441fc7f;  */

undefined8 FUN_10441fc4c(undefined8 param_1)

{
  (*(code *)(undefined *)0x10441cc48)();
  return param_1;
}



/* Entry: 10441fc80; end: 10441fc9f;  */

void FUN_10441fc80(void)

{
  _objc_opt_self(&PTR_PTR_1129b1498);
  return;
}



/* Entry: 10441fca0; end: 10441fccf;  */

void FUN_10441fca0(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_104420184(param_1);
  return;
}



/* Entry: 10441fcd0; end: 10441fd1b; -[SCContextMetricsParams sessionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10441fcd0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113078410);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113078410))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10441fd1c; end: 10441fd2b; -[SCContextMetricsParams launchSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10441fd1c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113078418);
}



/* Entry: 10441fd2c; end: 10441fd3b; -[SCContextMetricsParams actionType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10441fd2c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113078420);
}



/* Entry: 10441fd3c; end: 10441fd4b; -[SCContextMetricsParams sourceType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10441fd3c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113078428);
}



/* Entry: 10441fd4c; end: 10441fd5b; -[SCContextMetricsParams contextActionSourceType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10441fd4c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113078430);
}



/* Entry: 10441fd5c; end: 10441fd6b; -[SCContextMetricsParams commercePage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10441fd5c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113078438);
}



/* Entry: 10441fd6c; end: 10441fd7b; -[SCContextMetricsParams adViewSourceSpecific] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10441fd6c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113078440);
}



/* Entry: 10441fd7c; end: 10441fd8b; -[SCContextMetricsParams broadcastViewLocation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10441fd7c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113078448);
}



/* Entry: 10441fd8c; end: 10441fd9b; -[SCContextMetricsParams storyType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10441fd8c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113078450);
}



/* Entry: 10441fd9c; end: 10441fdf7; -[SCContextMetricsParams storyId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10441fd9c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113078458))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113078458);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10441fdf8; end: 10441fe07; -[SCContextMetricsParams lensMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10441fdf8(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_113078460);
}



/* Entry: 10441fe08; end: 104420067;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10441fe08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined4 param_13)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113078410);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113078418) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113078420) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_113078428) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_113078430) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_113078438) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_113078440) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_113078448) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_113078450) = param_10;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113078458);
  *puVar1 = param_11;
  puVar1[1] = param_12;
  *(undefined4 *)(unaff_x20 + _DAT_113078460) = param_13;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104420068; end: 104420183; -[SCContextMetricsParams initWithSessionId:launchSource:actionType:sourceType:contextActionSourceType:commercePage:adViewSourceSpecific:broadcastViewLocation:storyType:storyId:lensMode:] */

void FUN_104420068(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long in_stack_00000018;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  if (in_stack_00000018 != 0) {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  func_0x00010441ff38();
  return;
}



/* Entry: 104420184; end: 10442029b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104420184(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _swift_getObjectType();
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113078410);
  puVar1[1] = uStack_38;
  *puVar1 = uStack_40;
  uVar2 = param_1[3];
  *(undefined8 *)(unaff_x20 + _DAT_113078418) = param_1[2];
  *(undefined8 *)(unaff_x20 + _DAT_113078420) = uVar2;
  uVar2 = param_1[5];
  *(undefined8 *)(unaff_x20 + _DAT_113078428) = param_1[4];
  *(undefined8 *)(unaff_x20 + _DAT_113078430) = uVar2;
  uVar2 = param_1[7];
  *(undefined8 *)(unaff_x20 + _DAT_113078438) = param_1[6];
  *(undefined8 *)(unaff_x20 + _DAT_113078440) = uVar2;
  uVar2 = param_1[9];
  *(undefined8 *)(unaff_x20 + _DAT_113078448) = param_1[8];
  *(undefined8 *)(unaff_x20 + _DAT_113078450) = uVar2;
  uStack_48 = param_1[0xb];
  uStack_50 = param_1[10];
  uVar2 = param_1[10];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113078458);
  puVar1[1] = param_1[0xb];
  *puVar1 = uVar2;
  func_0x000100402194(&uStack_40,auStack_60);
  func_0x000101223174(&uStack_50,auStack_60);
  func_0x000104420460(param_1);
  *(undefined4 *)(unaff_x20 + _DAT_113078460) = *(undefined4 *)(param_1 + 0xc);
  _objc_msgSendSuper2(&stack0xffffffffffffff90,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10442029c; end: 10442029f; -[SCContextMetricsParams copyWithZone:] */

void FUN_10442029c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1044202a0; end: 1044202d3; -[SCContextMetricsParams description] */

void FUN_1044202a0(void)

{
  undefined1 auStack_78 [104];
  
  func_0x000104420390(auStack_78);
  func_0x000104420460(auStack_78);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044202d4; end: 10442034f; -[SCContextMetricsParams init] */

void FUN_1044202d4(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCContextLoggingServices/SCContextMetricsParamsWrapper.swift",0x3c,2,0x4e,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10442031c);
  (*pcVar1)();
}



/* Entry: 104420350; end: 104420493; -[SCContextMetricsParams .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104420350(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113078410 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113078458 + 8))
  ;
  return;
}



/* Entry: 104420494; end: 1044204b3;  */

void FUN_104420494(void)

{
  _objc_opt_self(&PTR_PTR_1129b1568);
  return;
}



/* Entry: 1044204b4; end: 1044204c7;  */

bool FUN_1044204b4(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1044204c8; end: 10442059f;  */

void FUN_1044204c8(void)

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



/* Entry: 1044205a0; end: 1044205ab;  */

void FUN_1044205a0(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1044205ac; end: 1044205bb; -[_TtC22SCContextCardsServices22SCContextCardsServices cardsDataFetcher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044205ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113078490));
  return;
}



/* Entry: 1044205bc; end: 104420607;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044205bc(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113078490) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104420608; end: 104420667; -[_TtC22SCContextCardsServices22SCContextCardsServices init] */

void FUN_104420608(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCContextCardsServices.SCContextCardsServices",0x2d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104420634);
  (*pcVar1)();
}



/* Entry: 104420668; end: 10442068b; -[_TtC22SCContextCardsServices22SCContextCardsServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104420668(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113078490));
  return;
}



/* Entry: 10442068c; end: 1044206cb;  */

void FUN_10442068c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113078498 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfc790;
  _swift_getWitnessTable(&UNK_10dcfc790,&UNK_11076cc38);
  puRam0000000113078498 = puVar1;
  return;
}



/* Entry: 1044206cc; end: 1044206db;  */

undefined1  [16] FUN_1044206cc(void)

{
  return ZEXT816(0x11076cc38);
}



/* Entry: 1044206dc; end: 104420733;  */

uint FUN_1044206dc(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_60 = param_1[6];
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_28 = param_2[5];
  uStack_30 = param_2[4];
  uStack_20 = param_2[6];
  FUN_104420734(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 104420734; end: 10442099b;  */

bool FUN_104420734(ulong *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = *param_1;
  lVar3 = *param_2;
  if (uVar2 == 0) {
    if (lVar3 != 0) {
      return false;
    }
  }
  else {
    if (lVar3 == 0) {
      return false;
    }
    FUN_104420c68(0,0x112e152f0,&PTR_PTR_1126b5b00);
    _objc_retain(lVar3);
    _objc_retain();
    uVar1 = uVar2;
    __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
    _objc_release(uVar2);
    _objc_release(lVar3);
    if ((uVar1 & 1) == 0) {
      return false;
    }
  }
  uVar2 = param_1[1];
  lVar3 = param_2[1];
  if (uVar2 == 0) {
    if (lVar3 != 0) {
      return false;
    }
  }
  else {
    if (lVar3 == 0) {
      return false;
    }
    FUN_104420c68(0,0x1130784c8,&PTR_PTR_1126d4b30);
    _objc_retain(lVar3);
    _objc_retain();
    uVar1 = uVar2;
    __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
    _objc_release(uVar2);
    _objc_release(lVar3);
    if ((uVar1 & 1) == 0) {
      return false;
    }
  }
  uVar2 = param_1[2];
  lVar3 = param_2[2];
  if (uVar2 == 0) {
    if (lVar3 != 0) {
      return false;
    }
  }
  else {
    if (lVar3 == 0) {
      return false;
    }
    FUN_1044254f0(0);
    _objc_retain(lVar3);
    _objc_retain();
    uVar1 = uVar2;
    __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
    _objc_release(uVar2);
    _objc_release(lVar3);
    if ((uVar1 & 1) == 0) {
      return false;
    }
  }
  uVar2 = param_1[3];
  lVar3 = param_2[3];
  if (uVar2 == 0) {
    if (lVar3 != 0) {
      return false;
    }
  }
  else {
    if (lVar3 == 0) {
      return false;
    }
    FUN_104420c68(0,0x1130784c8,&PTR_PTR_1126d4b30);
    _objc_retain(lVar3);
    _objc_retain();
    uVar1 = uVar2;
    __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
    _objc_release(uVar2);
    _objc_release(lVar3);
    if ((uVar1 & 1) == 0) {
      return false;
    }
  }
  uVar2 = param_1[4];
  lVar3 = param_2[4];
  if (uVar2 == 0) {
    if (lVar3 != 0) {
      return false;
    }
  }
  else {
    if (lVar3 == 0) {
      return false;
    }
    FUN_1044254f0(0);
    _objc_retain(lVar3);
    _objc_retain();
    uVar1 = uVar2;
    __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
    _objc_release(uVar2);
    _objc_release(lVar3);
    if ((uVar1 & 1) == 0) {
      return false;
    }
  }
  if ((int)param_1[5] != (int)param_2[5]) {
    return false;
  }
  return (int)param_1[6] == (int)param_2[6];
}



/* Entry: 10442099c; end: 104420a07;  */

long FUN_10442099c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 104420a08; end: 104420a7b;  */

undefined8 * FUN_104420a08(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  uVar1 = param_2[2];
  uVar3 = param_2[3];
  param_1[2] = uVar1;
  param_1[3] = uVar3;
  uVar4 = param_2[4];
  param_1[4] = uVar4;
  uVar5 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar5;
  _objc_retain();
  _objc_retain(uVar2);
  _objc_retain(uVar1);
  _objc_retain(uVar3);
  _objc_retain(uVar4);
  return param_1;
}



/* Entry: 104420a7c; end: 104420b2f;  */

undefined8 * FUN_104420a7c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _objc_retain();
  _objc_release(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _objc_retain();
  _objc_release(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _objc_retain();
  _objc_release(uVar1);
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _objc_retain();
  _objc_release(uVar1);
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  _objc_retain();
  _objc_release(uVar1);
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  return param_1;
}



/* Entry: 104420b30; end: 104420b9b;  */

undefined8 * FUN_104420b30(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_release(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  _objc_release(uVar1);
  _objc_release(param_1[2]);
  uVar1 = param_1[3];
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  _objc_release(uVar1);
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  _objc_release(uVar1);
  uVar1 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar1;
  return param_1;
}



/* Entry: 104420b9c; end: 104420c67;  */

int FUN_104420b9c(ulong *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[7] != '\0')) {
    return (int)*param_1 + 0x7fffffff;
  }
  uVar2 = *param_1;
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 104420c68; end: 104420ca7;  */

void FUN_104420c68(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 104420ca8; end: 104420cbf;  */

bool FUN_104420ca8(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 104420cc0; end: 104420cff;  */

void FUN_104420cc0(void)

{
  undefined *puVar1;
  
  if (puRam00000001130784d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfc8e0;
  _swift_getWitnessTable(&UNK_10dcfc8e0,&UNK_11076cde0);
  puRam00000001130784d0 = puVar1;
  return;
}



/* Entry: 104420d00; end: 104420dab;  */

void FUN_104420d00(void)

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



/* Entry: 104420dac; end: 104420de3;  */

void FUN_104420dac(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 3) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 2 < uVar2;
  return;
}



/* Entry: 104420de4; end: 104420e03; -[_TtC29SCContextPostSnapDataServices40SCContextPostSnapActionsObserverServices observer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104420de4(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_1130784d8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104420e04; end: 104420e4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104420e04(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130784d8) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104420e50; end: 104420ea7; -[_TtC29SCContextPostSnapDataServices40SCContextPostSnapActionsObserverServices initWithObserver:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104420e50(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_1130784d8) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _swift_unknownObjectRetain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}



/* Entry: 104420ea8; end: 104420f07; -[_TtC29SCContextPostSnapDataServices40SCContextPostSnapActionsObserverServices init] */

void FUN_104420ea8(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCContextPostSnapDataServices.SCContextPostSnapActionsObserverServices",0x46,"init()",
             6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104420ed4);
  (*pcVar1)();
}



/* Entry: 104420f08; end: 104420f17; -[_TtC29SCContextPostSnapDataServices40SCContextPostSnapActionsObserverServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104420f08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_1130784d8));
  return;
}



/* Entry: 104420f18; end: 104420f27; -[_TtC29SCContextPostSnapDataServices29SCContextPostSnapDataServices postSnapDataFetcher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104420f18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113078508));
  return;
}



/* Entry: 104420f28; end: 104420f37; -[_TtC29SCContextPostSnapDataServices29SCContextPostSnapDataServices postSnapFeedDataFetcher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104420f28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113078510));
  return;
}



/* Entry: 104420f38; end: 104420f8f; -[_TtC29SCContextPostSnapDataServices29SCContextPostSnapDataServices setChatActionResetDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104420f38(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113078520;
  _swift_beginAccess(param_1 + _DAT_113078520,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 104420f90; end: 10442109f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_104420f90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_78 [8];
  undefined1 auStack_68 [24];
  
  _objc_allocWithZone();
  lVar2 = _DAT_113078520;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_113078520,0);
  *(undefined8 *)(unaff_x20 + _DAT_113078508) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113078510) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113078518) = param_3;
  _swift_beginAccess(unaff_x20 + lVar2,auStack_68,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar2,param_4);
  puVar1 = PTR_s_init_1125d9248;
  _objc_retain(param_1);
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar3 = auStack_78;
  _objc_msgSendSuper2(puVar3,puVar1);
  _objc_release(param_1);
  _objc_release(param_2);
  _objc_release(param_3);
  _objc_release(param_4);
  return puVar3;
}



/* Entry: 1044210a0; end: 1044210ff; -[_TtC29SCContextPostSnapDataServices29SCContextPostSnapDataServices init] */

void FUN_1044210a0(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCContextPostSnapDataServices.SCContextPostSnapDataServices",0x3b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044210cc);
  (*pcVar1)();
}



/* Entry: 104421100; end: 104421157; -[_TtC29SCContextPostSnapDataServices29SCContextPostSnapDataServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104421100(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113078508));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113078510));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113078518));
                    /* WARNING: Could not recover jumptable at 0x00010bdc05f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakDestroy_11034f580)(param_1 + _DAT_113078520);
  return;
}



/* Entry: 104421158; end: 1044211af;  */

uint FUN_104421158(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined2 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined2 uStack_20;
  
  uVar1 = 0;
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  uStack_70 = *(undefined2 *)(param_1 + 8);
  uStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  uStack_38 = param_2[5];
  uStack_40 = param_2[4];
  uStack_28 = param_2[7];
  uStack_30 = param_2[6];
  uStack_20 = *(undefined2 *)(param_2 + 8);
  uStack_58 = param_2[1];
  uStack_60 = *param_2;
  uStack_48 = param_2[3];
  uStack_50 = param_2[2];
  FUN_1044211b0(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 1044211b0; end: 104421393;  */

byte FUN_1044211b0(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_118 [56];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar5 = *param_1;
  lVar4 = *param_2;
  if (lVar5 == 0) {
    if (lVar4 == 0) goto LAB_1044212a4;
  }
  else if ((lVar4 != 0) && (lVar6 = *(long *)(lVar5 + 0x10), lVar6 == *(long *)(lVar4 + 0x10))) {
    if (lVar6 != 0 && lVar5 != lVar4) {
      _swift_bridgeObjectRetain(lVar4);
      lVar7 = 0x20;
      do {
        puVar1 = (undefined8 *)(lVar5 + lVar7);
        uStack_d8 = puVar1[1];
        uStack_e0 = *puVar1;
        uStack_c8 = puVar1[3];
        uStack_d0 = puVar1[2];
        uStack_b8 = puVar1[5];
        uStack_c0 = puVar1[4];
        uStack_b0 = puVar1[6];
        puVar1 = (undefined8 *)(lVar4 + lVar7);
        uStack_98 = puVar1[1];
        uStack_a0 = *puVar1;
        uStack_88 = puVar1[3];
        uStack_90 = puVar1[2];
        uStack_78 = puVar1[5];
        uStack_80 = puVar1[4];
        uStack_70 = puVar1[6];
        FUN_104421658(&uStack_e0,auStack_118);
        FUN_104421658(&uStack_a0,auStack_118);
        puVar1 = &uStack_e0;
        FUN_104420734(puVar1,&uStack_a0);
        func_0x000104421694(&uStack_a0);
        func_0x000104421694(&uStack_e0);
        if (((ulong)puVar1 & 1) == 0) {
          _swift_bridgeObjectRelease(lVar4);
          goto LAB_10442136c;
        }
        lVar7 = lVar7 + 0x38;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
      _swift_bridgeObjectRelease(lVar4);
    }
LAB_1044212a4:
    func_0x0001007bbbf8(0);
    uVar2 = param_1[1];
    __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar2,param_2[1]);
    if ((uVar2 & 1) != 0) {
      uVar2 = param_1[2];
      if (((uVar2 == param_2[2]) && (param_1[3] == param_2[3])) ||
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (), (uVar2 & 1) != 0)) {
        lVar4 = param_2[5];
        if (param_1[5] == 0) {
          if (lVar4 == 0) goto LAB_104421320;
        }
        else if ((lVar4 != 0) &&
                (((uVar2 = param_1[4], uVar2 == param_2[4] && (param_1[5] == lVar4)) ||
                 (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                            (), (uVar2 & 1) != 0)))) {
LAB_104421320:
          if (((((*(byte *)(param_1 + 6) ^ *(byte *)(param_2 + 6)) & 1) == 0) &&
              ((double)param_1[7] == (double)param_2[7])) &&
             (((*(byte *)(param_1 + 8) ^ *(byte *)(param_2 + 8)) & 1) == 0)) {
            bVar3 = *(byte *)((long)param_1 + 0x41) ^ *(byte *)((long)param_2 + 0x41) ^ 1;
            goto LAB_104421370;
          }
        }
      }
    }
  }
LAB_10442136c:
  bVar3 = 0;
LAB_104421370:
  return bVar3 & 1;
}



/* Entry: 104421394; end: 1044213f7;  */

long FUN_104421394(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1044213f8; end: 10442152f;  */

undefined8 * FUN_1044213f8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  uVar3 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar3;
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  param_1[7] = param_2[7];
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  *(undefined1 *)((long)param_1 + 0x41) = *(undefined1 *)((long)param_2 + 0x41);
  _swift_bridgeObjectRetain();
  _objc_retain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  return param_1;
}



/* Entry: 104421530; end: 1044215ab;  */

undefined8 * FUN_104421530(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _swift_bridgeObjectRelease(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  _objc_release(uVar1);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[5];
  uVar2 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  param_1[7] = param_2[7];
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  *(undefined1 *)((long)param_1 + 0x41) = *(undefined1 *)((long)param_2 + 0x41);
  return param_1;
}



/* Entry: 1044215ac; end: 104421657;  */

int FUN_1044215ac(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x42) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 104421658; end: 1044216c7;  */

undefined8 FUN_104421658(undefined8 param_1,undefined8 param_2)

{
  FUN_104420a08(param_2,param_1);
  return param_2;
}



/* Entry: 1044216c8; end: 1044216df;  */

bool FUN_1044216c8(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1044216e0; end: 10442171f;  */

void FUN_1044216e0(void)

{
  undefined *puVar1;
  
  if (puRam0000000113078550 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfca40;
  _swift_getWitnessTable(&UNK_10dcfca40,&UNK_11076cf00);
  puRam0000000113078550 = puVar1;
  return;
}


