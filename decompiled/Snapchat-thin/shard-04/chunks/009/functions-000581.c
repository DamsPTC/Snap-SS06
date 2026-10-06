/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103993900; end: 10399390f; -[SCBadgeUpdateStrategy type] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103993900(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112fbbc58);
}



/* Entry: 103993910; end: 10399391f; -[SCBadgeUpdateStrategy observable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103993910(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fbbc60));
  return;
}



/* Entry: 103993920; end: 103993983;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103993920(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fbbc58) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fbbc60) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103993984; end: 1039939f3; -[SCBadgeUpdateStrategy initWithType:observable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103993984(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112fbbc58) = param_3;
  *(undefined8 *)(param_1 + _DAT_112fbbc60) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174(param_4);
  func_0x000107c61154(&lStack_40,puVar1);
  return;
}



/* Entry: 1039939f4; end: 103993a53; -[SCBadgeUpdateStrategy init] */

void FUN_1039939f4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("BadgeRankerServices.SCBadgeUpdateStrategy",0x29,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103993a20);
  (*pcVar1)();
}



/* Entry: 103993a54; end: 103993a63; -[SCBadgeUpdateStrategy .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103993a54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fbbc60));
  return;
}



/* Entry: 103993a64; end: 103993b13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103993a64(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  uVar4 = *(undefined8 *)(param_1 + _DAT_112fbbc58);
  func_0x0001000285a8(0x112fbbc68,&UNK_10dc2d950);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112fbbc60);
  func_0x000107c61174(uVar1);
  uVar2 = uVar1;
  func_0x0001000b637c();
  func_0x000107c61170(uVar1);
  uVar1 = 0x112fbbc70;
  func_0x0001000285a8(0x112fbbc70,&UNK_10dc2d958);
  pcVar3 = FUN_103993b14;
  func_0x0001000bfde0(FUN_103993b14,0,uVar1);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(param_1);
  auVar5._8_8_ = pcVar3;
  auVar5._0_8_ = uVar4;
  return auVar5;
}



/* Entry: 103993b14; end: 103993b77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103993b14(long *param_1,long *param_2)

{
  long lVar1;
  
  if (*(char *)(*param_2 + _DAT_112fbbba0) == '\x01') {
    lVar1 = *(long *)(*param_2 + _DAT_112fbbba8);
    if (lVar1 != 0) {
      func_0x000107c61174(lVar1);
    }
  }
  else {
    lVar1 = 0;
  }
  *param_1 = lVar1;
  return;
}



/* Entry: 103993b78; end: 103993b7b;  */

void FUN_103993b78(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fbbc78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc2d960;
  func_0x000107c61520(&UNK_10dc2d960,&UNK_1106b5808);
  puRam0000000112fbbc78 = puVar1;
  return;
}



/* Entry: 103993b7c; end: 103993bbb;  */

void FUN_103993b7c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fbbc78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc2d960;
  func_0x000107c61520(&UNK_10dc2d960,&UNK_1106b5808);
  puRam0000000112fbbc78 = puVar1;
  return;
}



/* Entry: 103993bbc; end: 103993bdb;  */

undefined1  [16] FUN_103993bbc(void)

{
  return ZEXT816(0x1106b5808);
}



/* Entry: 103993bdc; end: 103993c4b;  */

undefined8 * FUN_103993bdc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 103993c4c; end: 103993cdb;  */

int FUN_103993c4c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[4] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103993cdc; end: 103993cfb;  */

void FUN_103993cdc(void)

{
  func_0x000107c61168(&PTR_PTR_112909e40);
  return;
}



/* Entry: 103993cfc; end: 103993d03;  */

undefined8 * FUN_103993cfc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6157c();
  return param_1;
}



/* Entry: 103993d04; end: 103993d13; -[_TtC32SCChallengeOrchestrationServices32SCChallengeOrchestrationServices challengeOrchestrationService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103993d04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fbbd28));
  return;
}



/* Entry: 103993d14; end: 103993d5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103993d14(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fbbd28) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103993d60; end: 103993db7; -[_TtC32SCChallengeOrchestrationServices32SCChallengeOrchestrationServices initWithChallengeOrchestrationService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103993d60(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112fbbd28) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 103993db8; end: 103993e17; -[_TtC32SCChallengeOrchestrationServices32SCChallengeOrchestrationServices init] */

void FUN_103993db8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCChallengeOrchestrationServices.SCChallengeOrchestrationServices",0x41,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103993de4);
  (*pcVar1)();
}



/* Entry: 103993e18; end: 103993e27; -[_TtC32SCChallengeOrchestrationServices32SCChallengeOrchestrationServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103993e18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fbbd28));
  return;
}



/* Entry: 103993e28; end: 103993eaf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103993e28(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  func_0x000100a9a738();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112fbbd58) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112fbbd60) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103993eb0);
  (*pcVar1)();
}



/* Entry: 103993eb0; end: 103993f0f; -[_TtC37AdclActiveUserSessionScopeGraphBridge52AdclActiveUserSessionScopeGraphBridgeSaberEntryPoint init] */

void FUN_103993eb0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdclActiveUserSessionScopeGraphBridge.AdclActiveUserSessionScopeGraphBridgeSaberEntryPoint"
                      ,0x5a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103993edc);
  (*pcVar1)();
}



/* Entry: 103993f10; end: 103993f47; -[_TtC37AdclActiveUserSessionScopeGraphBridge52AdclActiveUserSessionScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103993f2c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103993f30) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103993f10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fbbd58));
  return;
}



/* Entry: 103993f48; end: 103993f6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103993f48(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112fbbd60),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112fbbd58));
  return;
}



/* Entry: 103993f70; end: 10399400b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103993f70(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112fbc740);
  *(undefined8 *)(unaff_x20 + _DAT_112fbbd90) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112fbbd98) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 10399400c; end: 10399406b; -[_TtC37AdclActiveUserSessionScopeGraphBridge58SCCameraAttachmentOperaPageResolverServicesSaberEntryPoint init] */

void FUN_10399400c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdclActiveUserSessionScopeGraphBridge.SCCameraAttachmentOperaPageResolverServicesSaberEntryPoint"
                      ,0x60,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103994038);
  (*pcVar1)();
}



/* Entry: 10399406c; end: 1039940ff; -[_TtC37AdclActiveUserSessionScopeGraphBridge58SCCameraAttachmentOperaPageResolverServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10399406c(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112fbbd90));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fbbd98));
  return;
}



/* Entry: 103994100; end: 103994107;  */

undefined8 FUN_103994100(void)

{
  return 0;
}



/* Entry: 103994108; end: 1039941a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103994108(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112fbc750);
  *(undefined8 *)(unaff_x20 + _DAT_112fbbdc8) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112fbbdd0) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 1039941a4; end: 103994203; -[_TtC37AdclActiveUserSessionScopeGraphBridge43SCUnlockablesMetricsServicesSaberEntryPoint init] */

void FUN_1039941a4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdclActiveUserSessionScopeGraphBridge.SCUnlockablesMetricsServicesSaberEntryPoint"
                      ,0x51,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1039941d0);
  (*pcVar1)();
}



/* Entry: 103994204; end: 103994297; -[_TtC37AdclActiveUserSessionScopeGraphBridge43SCUnlockablesMetricsServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103994204(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112fbbdc8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fbbdd0));
  return;
}



/* Entry: 103994298; end: 10399429f;  */

undefined8 FUN_103994298(void)

{
  return 0;
}



/* Entry: 1039942a0; end: 103994303;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1039942a0(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fbc700);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103994304; end: 10399430b;  */

void FUN_103994304(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10399430c; end: 1039943ab;  */

void FUN_10399430c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1039943ac; end: 1039943cb;  */

void FUN_1039943ac(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1039943cc; end: 10399442f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1039943cc(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fbc708);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103994430; end: 103994437;  */

void FUN_103994430(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103994438; end: 1039944d7;  */

void FUN_103994438(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1039944d8; end: 1039944f7;  */

void FUN_1039944d8(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1039944f8; end: 10399455b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1039944f8(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fbc710);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 10399455c; end: 103994563;  */

void FUN_10399455c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103994564; end: 103994603;  */

void FUN_103994564(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103994604; end: 103994623;  */

void FUN_103994604(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103994624; end: 103994687;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103994624(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fbc718);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103994688; end: 10399468f;  */

void FUN_103994688(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103994690; end: 10399472f;  */

void FUN_103994690(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103994730; end: 10399474f;  */

void FUN_103994730(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103994750; end: 1039947b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103994750(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fbc720);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1039947b4; end: 1039947bb;  */

void FUN_1039947b4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1039947bc; end: 10399485b;  */

void FUN_1039947bc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10399485c; end: 10399487b;  */

void FUN_10399485c(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 10399487c; end: 1039948df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10399487c(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fbc728);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1039948e0; end: 1039948e7;  */

void FUN_1039948e0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1039948e8; end: 103994987;  */

void FUN_1039948e8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103994988; end: 1039949a7;  */

void FUN_103994988(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1039949a8; end: 103994a0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1039949a8(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fbc730);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103994a0c; end: 103994a13;  */

void FUN_103994a0c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103994a14; end: 103994ab3;  */

void FUN_103994a14(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103994ab4; end: 103994ad3;  */

void FUN_103994ab4(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103994ad4; end: 103994b37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103994ad4(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fbc738);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103994b38; end: 103994b3f;  */

void FUN_103994b38(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103994b40; end: 103994bdf;  */

void FUN_103994b40(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103994be0; end: 103994bff;  */

void FUN_103994be0(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103994c00; end: 103994c63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103994c00(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fbc748);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103994c64; end: 103994c6b;  */

void FUN_103994c64(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103994c6c; end: 103994d0b;  */

void FUN_103994c6c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103994d0c; end: 103994d2b;  */

void FUN_103994d0c(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103994d2c; end: 103994d8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103994d2c(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fbc758);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103994d90; end: 103994d97;  */

void FUN_103994d90(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103994d98; end: 103994e37;  */

void FUN_103994d98(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103994e38; end: 103994e57;  */

void FUN_103994e38(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103994e58; end: 103994ebb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103994e58(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fbc760);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103994ebc; end: 103994ec3;  */

void FUN_103994ebc(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103994ec4; end: 103994f63;  */

void FUN_103994ec4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103994f64; end: 103994f83;  */

void FUN_103994f64(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103994f84; end: 1039950bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103994f84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fbc700) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fbc708) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112fbc710) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112fbc718) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112fbc720) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112fbc728) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112fbc730) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112fbc738) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112fbc740) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_112fbc748) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_112fbc750) = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_112fbc758) = param_12;
  *(undefined8 *)(unaff_x20 + _DAT_112fbc760) = param_13;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1039950c0; end: 10399511f; -[_TtC37AdclActiveUserSessionScopeGraphBridge45AdclActiveUserSessionScopeGraphBridgeServices init] */

void FUN_1039950c0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdclActiveUserSessionScopeGraphBridge.AdclActiveUserSessionScopeGraphBridgeServices"
                      ,0x53,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1039950ec);
  (*pcVar1)();
}



/* Entry: 103995120; end: 103995263; -[_TtC37AdclActiveUserSessionScopeGraphBridge45AdclActiveUserSessionScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010399513c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010399515c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010399517c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010399519c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001039951bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001039951dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001039951c0) */
/* WARNING: Removing unreachable block (ram,0x0001039951a0) */
/* WARNING: Removing unreachable block (ram,0x000103995180) */
/* WARNING: Removing unreachable block (ram,0x000103995160) */
/* WARNING: Removing unreachable block (ram,0x000103995140) */
/* WARNING: Removing unreachable block (ram,0x0001039951e0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103995120(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fbc740));
  return;
}



/* Entry: 103995264; end: 10399529b;  */

undefined1  [16] FUN_103995264(void)

{
  return ZEXT816(0x1106b5bd8);
}



/* Entry: 10399529c; end: 1039952df; -[SCAdclActiveUserSessionScopeGraphBridgeSaberEntryPoint end] */

void FUN_10399529c(undefined8 param_1)

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



/* Entry: 1039952e0; end: 103995313;  */

void FUN_1039952e0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103995314; end: 10399535b; -[SCAdclActiveUserSessionScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103995340: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103995344) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103995314(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fbc7b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fbc7c0));
  return;
}



/* Entry: 10399535c; end: 10399537b;  */

void FUN_10399535c(void)

{
  func_0x000107c61168(&PTR_PTR_11290a340);
  return;
}



/* Entry: 10399537c; end: 1039953bf; -[SCSCCameraAttachmentOperaPageResolverServicesSaberEntryPoint end] */

void FUN_10399537c(undefined8 param_1)

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



/* Entry: 1039953c0; end: 1039953f3;  */

void FUN_1039953c0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1039953f4; end: 10399544b; -[SCSCCameraAttachmentOperaPageResolverServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103995430: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103995434) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039953f4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fbc7f8);
  func_0x000107c61610(param_1 + _DAT_112fbc800);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fbc808));
  return;
}



/* Entry: 10399544c; end: 10399546b;  */

void FUN_10399544c(void)

{
  func_0x000107c61168(&PTR_PTR_11290a408);
  return;
}



/* Entry: 10399546c; end: 1039954af; -[SCSCUnlockablesMetricsServicesSaberEntryPoint end] */

void FUN_10399546c(undefined8 param_1)

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



/* Entry: 1039954b0; end: 1039954e3;  */

void FUN_1039954b0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1039954e4; end: 10399553b; -[SCSCUnlockablesMetricsServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103995520: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103995524) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039954e4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fbc840);
  func_0x000107c61610(param_1 + _DAT_112fbc848);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fbc850));
  return;
}



/* Entry: 10399553c; end: 10399555b;  */

void FUN_10399553c(void)

{
  func_0x000107c61168(&PTR_PTR_11290a4d8);
  return;
}



/* Entry: 10399555c; end: 103995567; -[SCAdEOVTimerServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10399555c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fbc888;
  func_0x000107c61428(param_1 + _DAT_112fbc888,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103995568; end: 103995573; -[SCAdEOVTimerServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103995568(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fbc888;
  func_0x000107c61428(param_1 + _DAT_112fbc888,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103995574; end: 10399557f; -[SCAdEOVTimerServicesSaberServiceProvider adclActiveUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103995574(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fbc890;
  func_0x000107c61428(param_1 + _DAT_112fbc890,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103995580; end: 1039955c3;  */

void FUN_103995580(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1039955c4; end: 1039955cf; -[SCAdEOVTimerServicesSaberServiceProvider setAdclActiveUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039955c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fbc890;
  func_0x000107c61428(param_1 + _DAT_112fbc890,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1039955d0; end: 103995623;  */

void FUN_1039955d0(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103995624; end: 103995837;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103995624(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uStack_48;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c3d570();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000103994330();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112fbc700);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112fbc898);
      *(long *)(unaff_x20 + _DAT_112fbc898) = lVar4;
      func_0x000107c6157c();
      func_0x000107c6157c(lVar4);
      func_0x000107c61574(uVar5);
      func_0x000100083b20(&uStack_48);
      func_0x000107c61574(lVar4);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar3);
      return uStack_48;
    }
    func_0x000107c61170(lVar2);
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
                      "AdclActiveUserSessionScopeGraphBridge/SCAdEOVTimerServicesSaberServiceProvider.swift"
                      ,0x54,2,0x28,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103995750);
  (*pcVar1)();
}



/* Entry: 103995838; end: 10399586b; -[SCAdEOVTimerServicesSaberServiceProvider provide] */

void FUN_103995838(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103995624();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}


