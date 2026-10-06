/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10452c8b0; end: 10452c917;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10452c8b0(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x0001002d94bc();
  lVar1 = param_2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar1 + _DAT_113083f20) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  _objc_msgSendSuper2(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10452c918; end: 10452c923;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10452c918(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113083f20) = param_1;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10452c924; end: 10452ca1b;  */

void FUN_10452c924(undefined8 param_1,long *param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + *param_2) = param_1;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10452ca1c; end: 10452ca77; -[_TtC21SCUserNavigationScope29SCUserNavigationScopeServices buildWithUIContainer:] */

void FUN_10452ca1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_1);
  uVar1 = param_3;
  func_0x00010452c978(param_3);
  _swift_unknownObjectRelease(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10452ca78; end: 10452ca7b;  */

void FUN_10452ca78(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10452ca7c; end: 10452caaf;  */

void FUN_10452ca7c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10452cab0; end: 10452cabf;  */

undefined1  [16] FUN_10452cab0(void)

{
  return ZEXT816(0x110784b40);
}



/* Entry: 10452cac0; end: 10452cad3; -[_TtC21SCUserNavigationScope29SCUserNavigationScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10452cac0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113083f20));
  return;
}



/* Entry: 10452cad4; end: 10452cb37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10452cad4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113083f78) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113083f80) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10452cb38; end: 10452cbaf; -[_TtC24SCActiveUserSessionScope24SCActiveUserSessionScope initWithUserSession:userSessionContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10452cb38(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_113083f78) = param_3;
  *(undefined8 *)(param_1 + _DAT_113083f80) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 10452cbb0; end: 10452cc33; -[_TtC24SCActiveUserSessionScope24SCActiveUserSessionScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10452cbb0(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113083f78));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113083f80));
  return;
}



/* Entry: 10452cc34; end: 10452cc37;  */

void FUN_10452cc34(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10452cc38; end: 10452cc6b;  */

void FUN_10452cc38(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10452cc6c; end: 10452cc7b;  */

undefined1  [16] FUN_10452cc6c(void)

{
  return ZEXT816(0x110784bf0);
}



/* Entry: 10452cc7c; end: 10452cc8f; -[_TtC24SCActiveUserSessionScope32SCActiveUserSessionScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10452cc7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113083f90));
  return;
}



/* Entry: 10452cc90; end: 10452ccd7; -[SCMutableConfigHeuristicRecoveryConstantsUpdateImpl syncFreshnessTimeoutSec] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10452cc90(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113083fe8;
  _swift_beginAccess(param_1 + _DAT_113083fe8,auStack_38,0,0);
  _objc_retainAutoreleaseReturnValue(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10452ccd8; end: 10452cce3; -[SCMutableConfigHeuristicRecoveryConstantsUpdateImpl setSyncFreshnessTimeoutSec:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10452ccd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113083fe8;
  _swift_beginAccess(param_1 + _DAT_113083fe8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  return;
}



/* Entry: 10452cce4; end: 10452cd2b; -[SCMutableConfigHeuristicRecoveryConstantsUpdateImpl attemptNumberToStartRecovery] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10452cce4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113083ff0;
  _swift_beginAccess(param_1 + _DAT_113083ff0,auStack_38,0,0);
  _objc_retainAutoreleaseReturnValue(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10452cd2c; end: 10452cd37; -[SCMutableConfigHeuristicRecoveryConstantsUpdateImpl setAttemptNumberToStartRecovery:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10452cd2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113083ff0;
  _swift_beginAccess(param_1 + _DAT_113083ff0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  return;
}



/* Entry: 10452cd38; end: 10452cd7f; -[SCMutableConfigHeuristicRecoveryConstantsUpdateImpl attemptNumberToEnterSafeMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10452cd38(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113083ff8;
  _swift_beginAccess(param_1 + _DAT_113083ff8,auStack_38,0,0);
  _objc_retainAutoreleaseReturnValue(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10452cd80; end: 10452cd8b; -[SCMutableConfigHeuristicRecoveryConstantsUpdateImpl setAttemptNumberToEnterSafeMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10452cd80(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113083ff8;
  _swift_beginAccess(param_1 + _DAT_113083ff8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  return;
}



/* Entry: 10452cd8c; end: 10452cdd3; -[SCMutableConfigHeuristicRecoveryConstantsUpdateImpl safeModeStrategy] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10452cd8c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113084000;
  _swift_beginAccess(param_1 + _DAT_113084000,auStack_38,0,0);
  _objc_retainAutoreleaseReturnValue(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10452cdd4; end: 10452cddf; -[SCMutableConfigHeuristicRecoveryConstantsUpdateImpl setSafeModeStrategy:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10452cdd4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113084000;
  _swift_beginAccess(param_1 + _DAT_113084000,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  return;
}



/* Entry: 10452cde0; end: 10452ce27; -[SCMutableConfigHeuristicRecoveryConstantsUpdateImpl safeModeTreatmentID] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10452cde0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113084008;
  _swift_beginAccess(param_1 + _DAT_113084008,auStack_38,0,0);
  _objc_retainAutoreleaseReturnValue(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10452ce28; end: 10452ce33; -[SCMutableConfigHeuristicRecoveryConstantsUpdateImpl setSafeModeTreatmentID:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10452ce28(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113084008;
  _swift_beginAccess(param_1 + _DAT_113084008,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  return;
}



/* Entry: 10452ce34; end: 10452ce93;  */

void FUN_10452ce34(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar2 = *param_4;
  _swift_beginAccess(param_1 + lVar2,auStack_48,1,0);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  return;
}



/* Entry: 10452ce94; end: 10452cf0b; -[SCMutableConfigHeuristicRecoveryConstantsUpdateImpl safeModeStudyName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10452ce94(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_113084010);
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



/* Entry: 10452cf0c; end: 10452cf83; -[SCMutableConfigHeuristicRecoveryConstantsUpdateImpl setSafeModeStudyName:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10452cf0c(long param_1,long param_2,long param_3)

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
  plVar1 = (long *)(param_1 + _DAT_113084010);
  _swift_beginAccess(plVar1,auStack_48,1,0);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  _swift_bridgeObjectRelease(lVar2);
  return;
}



/* Entry: 10452cf84; end: 10452d11f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10452cf84(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *puStack_f0;
  undefined8 *puStack_e8;
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar5 = _DAT_113083fe8;
  _swift_beginAccess(unaff_x20 + _DAT_113083fe8,auStack_68,0,0);
  lVar6 = _DAT_113083ff0;
  uVar9 = *(undefined8 *)(unaff_x20 + lVar5);
  _swift_beginAccess(unaff_x20 + _DAT_113083ff0,auStack_80,0,0);
  lVar5 = _DAT_113083ff8;
  uVar13 = *(undefined8 *)(unaff_x20 + lVar6);
  _swift_beginAccess(unaff_x20 + _DAT_113083ff8,auStack_98,0,0);
  lVar6 = _DAT_113084000;
  uVar10 = *(undefined8 *)(unaff_x20 + lVar5);
  _swift_beginAccess(unaff_x20 + _DAT_113084000,auStack_b0,0,0);
  lVar5 = _DAT_113084008;
  uVar11 = *(undefined8 *)(unaff_x20 + lVar6);
  _swift_beginAccess(unaff_x20 + _DAT_113084008,auStack_c8,0,0);
  uVar12 = *(undefined8 *)(unaff_x20 + lVar5);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113084010);
  puVar7 = puVar1;
  _swift_beginAccess(puVar1,auStack_e0,0,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  FUN_10452d120();
  puVar8 = puVar7;
  _objc_allocWithZone();
  *(undefined8 *)((long)puVar8 + _DAT_113084018) = uVar9;
  *(undefined8 *)((long)puVar8 + _DAT_113084020) = uVar13;
  *(undefined8 *)((long)puVar8 + _DAT_113084028) = uVar10;
  *(undefined8 *)((long)puVar8 + _DAT_113084030) = uVar11;
  *(undefined8 *)((long)puVar8 + _DAT_113084038) = uVar12;
  puVar1 = (undefined8 *)((long)puVar8 + _DAT_113084040);
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  puVar4 = PTR_s_init_1125d9248;
  puStack_f0 = puVar8;
  puStack_e8 = puVar7;
  _objc_retain(uVar9);
  _objc_retain(uVar13);
  _objc_retain(uVar10);
  _objc_retain(uVar11);
  _objc_retain(uVar12);
  _swift_bridgeObjectRetain(uVar3);
  _objc_msgSendSuper2(&puStack_f0,puVar4);
  return;
}



/* Entry: 10452d120; end: 10452d13f;  */

void FUN_10452d120(void)

{
  _objc_opt_self(&PTR_PTR_1129cd1d0);
  return;
}



/* Entry: 10452d140; end: 10452d173; -[SCMutableConfigHeuristicRecoveryConstantsUpdateImpl immutableCopy] */

void FUN_10452d140(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_10452cf84();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10452d174; end: 10452d1fb; -[SCMutableConfigHeuristicRecoveryConstantsUpdateImpl init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10452d174(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_113083fe8) = 0;
  *(undefined8 *)(param_1 + _DAT_113083ff0) = 0;
  *(undefined8 *)(param_1 + _DAT_113083ff8) = 0;
  *(undefined8 *)(param_1 + _DAT_113084000) = 0;
  *(undefined8 *)(param_1 + _DAT_113084008) = 0;
  puVar1 = (undefined8 *)(param_1 + _DAT_113084010);
  *puVar1 = 0;
  puVar1[1] = 0;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10452d1fc; end: 10452d277; -[SCMutableConfigHeuristicRecoveryConstantsUpdateImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10452d1fc(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113083fe8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113083ff0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113083ff8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113084000));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113084008));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113084010 + 8))
  ;
  return;
}



/* Entry: 10452d278; end: 10452d287; -[SCConfigHeuristicRecoveryConstantsUpdateImpl syncFreshnessTimeoutSec] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10452d278(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113084018));
  return;
}



/* Entry: 10452d288; end: 10452d297; -[SCConfigHeuristicRecoveryConstantsUpdateImpl attemptNumberToStartRecovery] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10452d288(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113084020));
  return;
}



/* Entry: 10452d298; end: 10452d2a7; -[SCConfigHeuristicRecoveryConstantsUpdateImpl attemptNumberToEnterSafeMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10452d298(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113084028));
  return;
}



/* Entry: 10452d2a8; end: 10452d2b7; -[SCConfigHeuristicRecoveryConstantsUpdateImpl safeModeStrategy] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10452d2a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113084030));
  return;
}



/* Entry: 10452d2b8; end: 10452d2c7; -[SCConfigHeuristicRecoveryConstantsUpdateImpl safeModeTreatmentID] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10452d2b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113084038));
  return;
}



/* Entry: 10452d2c8; end: 10452d323; -[SCConfigHeuristicRecoveryConstantsUpdateImpl safeModeStudyName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10452d2c8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113084040))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113084040);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10452d324; end: 10452d34f; -[SCConfigHeuristicRecoveryConstantsUpdateImpl init] */

void FUN_10452d324(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCConfigCrashRecoveryImpl.ConfigHeuristicRecoveryConstantsUpdateImpl",0x44,"init()",6,
             0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10452d350);
  (*pcVar1)();
}



/* Entry: 10452d350; end: 10452d353;  */

void FUN_10452d350(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10452d354; end: 10452d387;  */

void FUN_10452d354(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10452d388; end: 10452d403; -[SCConfigHeuristicRecoveryConstantsUpdateImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10452d388(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113084018));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113084020));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113084028));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113084030));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113084038));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113084040 + 8))
  ;
  return;
}



/* Entry: 10452d404; end: 10452d423;  */

void FUN_10452d404(void)

{
  _objc_opt_self(&PTR_PTR_1129cd0f0);
  return;
}



/* Entry: 10452d424; end: 10452d427;  */

void FUN_10452d424(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10452d428; end: 10452d76f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10452d428(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long unaff_x20;
  byte *pbVar7;
  byte *pbVar8;
  long lVar9;
  byte *pbVar10;
  long lVar11;
  byte abStack_c0 [8];
  undefined8 uStack_b8;
  uint uStack_ac;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  byte *pbStack_90;
  long lStack_88;
  undefined1 auStack_78 [24];
  
  lVar4 = 0x112d71bc8;
  func_0x0001000285a8(0x112d71bc8,&UNK_10d932780);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  pbVar8 = abStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pbVar7 = pbVar8 + -extraout_x12;
  lVar4 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  lVar9 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = _DAT_113084098;
  _swift_beginAccess(unaff_x20 + _DAT_113084098,auStack_78,0,0);
  FUN_10452ec48(unaff_x20 + lVar3,pbVar7,0x112d71bc8,&UNK_10d932780);
  pbVar10 = pbVar7;
  (**(code **)(lVar9 + 0x30))(pbVar7,1,lVar4);
  if ((int)pbVar10 != 1) {
    func_0x0001001021cc(pbVar7,(long)pbVar7 - extraout_x8_00);
    func_0x0001001021cc((long)pbVar7 - extraout_x8_00,param_1);
    return;
  }
  lVar6 = 0x112d71bc8;
  func_0x00010452ec90(pbVar7,0x112d71bc8,&UNK_10d932780);
  FUN_10452d770();
  pbVar10 = pbVar7;
  FUN_1048969bc();
  uStack_ac = (uint)*pbVar10;
  func_0x0001000ad07c();
  uStack_a8 = param_1;
  if (lVar6 != 0) {
    uStack_a0 = 0x2e;
    uStack_98 = 0xe100000000000000;
    pbStack_90 = pbVar7;
    lStack_88 = lVar6;
    func_0x000100e8b654();
    puVar5 = &uStack_a0;
    __sSy10FoundationE10components11separatedBySaySSGqd___tSyRd__lF
              (puVar5,PTR___sSSN_11034da80,PTR___sSSN_11034da80,pbVar10,pbVar10);
    if (1 < (ulong)puVar5[2]) {
      pbVar10 = (byte *)puVar5[4];
      uVar1 = puVar5[5];
      uStack_b8 = puVar5[6];
      uVar2 = puVar5[7];
      _swift_bridgeObjectRetain(uVar2);
      _swift_bridgeObjectRetain(uVar1);
      _swift_bridgeObjectRelease(puVar5);
      pbStack_90 = pbVar10;
      lStack_88 = uVar1;
      __sSS6appendyySSF(uStack_b8,uVar2);
      _swift_bridgeObjectRelease(uVar2);
      pbVar10 = pbStack_90;
      lVar11 = lStack_88;
      goto LAB_10452d648;
    }
    _swift_bridgeObjectRelease();
  }
  pbVar10 = (byte *)0x7974706d65;
  lVar11 = 0xe500000000000000;
LAB_10452d648:
  pbStack_90 = (byte *)0x42;
  if (uStack_ac == 0) {
    pbStack_90 = (byte *)0x50;
  }
  lStack_88 = 0xe100000000000000;
  __sSS6appendyySSF(0x5f,0xe100000000000000);
  __sSS6appendyySSF(0x49,0xe100000000000000);
  __sSS6appendyySSF(0x5f,0xe100000000000000);
  __sSS6appendyySSF(pbVar10,lVar11);
  _swift_bridgeObjectRelease(lVar6);
  _swift_bridgeObjectRelease(lVar11);
  lVar6 = lStack_88;
  pbVar10 = pbStack_90;
  pbStack_90 = (byte *)0xd000000000000022;
  lStack_88 = 0x800000010f2072e0;
  __sSS6appendyySSF(pbVar10,lVar6);
  _swift_bridgeObjectRelease(lVar6);
  lVar6 = lStack_88;
  uVar1 = uStack_a8;
  __s10Foundation3URLV6stringACSgSSh_tcfC(uStack_a8,pbStack_90,lStack_88);
  _swift_bridgeObjectRelease(lVar6);
  FUN_10452ec48(uVar1,pbVar8,0x112d36580,&UNK_10d9016d0);
  (**(code **)(lVar9 + 0x38))(pbVar8,0,1,lVar4);
  _swift_beginAccess(unaff_x20 + lVar3,&pbStack_90,0x21,0);
  func_0x00010130f508(pbVar8,unaff_x20 + lVar3);
  _swift_endAccess(&pbStack_90);
  return;
}



/* Entry: 10452d770; end: 10452d863;  */

undefined1  [16] FUN_10452d770(void)

{
  code *pcVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auVar5 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  iVar2 = (int)&uStack_70;
  puVar3 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  _objc_opt_self();
  func_0x00010c0b6660();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR__kCFBundleVersionKey_11034abb0 != 0) {
    puVar4 = puVar3;
    func_0x00010c0dfec0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    if (puVar4 == (undefined *)0x0) {
      uStack_58 = 0;
      uStack_60 = 0;
      lStack_48 = 0;
      uStack_50 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_60,puVar4);
      _swift_unknownObjectRelease(puVar4);
    }
    uStack_38 = uStack_58;
    uStack_40 = uStack_60;
    lStack_28 = lStack_48;
    uStack_30 = uStack_50;
    if (lStack_48 == 0) {
      func_0x00010452ec90(&uStack_40,0x112d387f8,&UNK_10d902650);
      uStack_70 = 0;
      uStack_68 = 0;
    }
    else {
      _swift_dynamicCast(&uStack_70,&uStack_40,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
      if (iVar2 == 0) {
        uStack_70 = 0;
        uStack_68 = 0;
      }
    }
    auVar5._8_8_ = uStack_68;
    auVar5._0_8_ = uStack_70;
    return auVar5;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10452d864);
  (*pcVar1)();
}



/* Entry: 10452d864; end: 10452d9ef;  */

void FUN_10452d864(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long extraout_x8;
  long lVar6;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = (long)&uStack_60 - extraout_x8;
  uStack_60 = 0;
  uStack_58 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x2d);
  _swift_bridgeObjectRelease(uStack_58);
  uStack_60 = 0xd00000000000004a;
  uStack_58 = 0x800000010f207290;
  FUN_10452d428(lVar6);
  __sSS10describingSSx_tclufC(lVar6,lVar2);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(lVar2);
  uVar1 = uStack_58;
  uVar3 = uStack_60;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_60,uStack_58);
  _swift_bridgeObjectRelease(uVar1);
  func_0x00010b88c2b4(uVar3);
  _objc_release(uVar3);
  puVar4 = PTR__OBJC_CLASS___NSURLSessionConfiguration_1126c7fd8;
  _objc_opt_self(PTR__OBJC_CLASS___NSURLSessionConfiguration_1126c7fd8);
  func_0x00010bf6a380();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21b040();
  puVar5 = PTR__OBJC_CLASS___NSURLSession_1126c7fe8;
  _objc_opt_self(PTR__OBJC_CLASS___NSURLSession_1126c7fe8);
  func_0x00010c1606a0();
  _objc_retainAutoreleasedReturnValue();
  FUN_10452d428(lVar6);
  FUN_10452d9f0(lVar6,puVar5);
  _objc_release(puVar4);
  _objc_release(puVar5);
  func_0x00010452ec90(lVar6,0x112d36580,&UNK_10d9016d0);
  return;
}



/* Entry: 10452d9f0; end: 10452e85b;  */

void FUN_10452d9f0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined1 *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  long lVar9;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar10;
  ulong uVar11;
  long extraout_x12;
  undefined8 uVar12;
  undefined8 unaff_x20;
  long lVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  code *pcStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined1 auStack_b8 [88];
  
  lVar1 = 0;
  uStack_130 = param_2;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lStack_108 = *(long *)(lVar1 + -8);
  lStack_100 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_108 + 0x40));
  lVar9 = (long)&pcStack_150 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  lStack_110 = lVar9;
  __s8Dispatch0A3QoSVMa();
  lStack_120 = *(long *)(lVar1 + -8);
  lStack_118 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_120 + 0x40));
  lVar9 = lVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  lStack_128 = lVar9;
  __s8Dispatch0A3QoSV0B6SClassOMa();
  lStack_140 = *(long *)(lVar1 + -8);
  lStack_138 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_140 + 0x40));
  lVar9 = lVar9 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = lVar9 - extraout_x8_02;
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar18 = *(long *)(lVar2 + -8);
  lVar15 = *(long *)(lVar18 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar17 = lVar13 - (lVar15 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar17 - extraout_x12;
  FUN_10452ec48(param_1,lVar13,0x112d36580,&UNK_10d9016d0);
  lVar1 = lVar13;
  (**(code **)(lVar18 + 0x30))(lVar13,1,lVar2);
  if ((int)lVar1 == 1) {
    func_0x00010452ec90(lVar13,0x112d36580,&UNK_10d9016d0);
    uVar12 = *(undefined8 *)PTR__NSURLErrorDomain_110345620;
    lVar1 = 0x112d4b5e8;
    func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
    puVar8 = auStack_b8;
    _swift_initStackObject();
    *(undefined8 *)(lVar1 + 0x18) = 2;
    *(undefined8 *)(lVar1 + 0x10) = 1;
    uVar3 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    *(undefined8 *)(lVar1 + 0x20) = uVar3;
    puVar6 = PTR___sSSN_11034da80;
    *(undefined **)(lVar1 + 0x48) = PTR___sSSN_11034da80;
    *(undefined1 **)(lVar1 + 0x28) = puVar8;
    *(undefined8 *)(lVar1 + 0x30) = 0xd00000000000001d;
    *(undefined8 *)(lVar1 + 0x38) = 0x800000010f2070e0;
    _objc_retain(uVar12);
    lVar2 = lVar1;
    func_0x000100214a84(lVar1);
    _swift_setDeallocating(lVar1);
    func_0x00010452ec90((undefined8 *)(lVar1 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    _objc_allocWithZone(PTR__OBJC_CLASS___NSError_1126ae858);
    lVar1 = lVar2;
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (lVar2,puVar6,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
    _swift_bridgeObjectRelease(lVar2);
    func_0x00010c00e2e0(puVar4);
    _objc_release(uVar12);
    _objc_release(lVar1);
    func_0x00010452e94c(0,0xf000000000000000,puVar4);
    _objc_release(puVar4);
  }
  else {
    pcStack_150 = *(code **)(lVar18 + 0x20);
    (*pcStack_150)(lVar10,lVar13,lVar2);
    uVar3 = 0xd000000000000037;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000037,0x800000010f207100);
    func_0x00010b88c2b4();
    _objc_release(uVar3);
    func_0x0001000295c4(0);
    lVar13 = lStack_138;
    lVar1 = lStack_140;
    (**(code **)(lStack_140 + 0x68))
              (lVar9,*(undefined4 *)
                      PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0,lStack_138)
    ;
    lVar5 = lVar9;
    __sSo17OS_dispatch_queueC8DispatchE6global3qosAbC0D3QoSV0G6SClassO_tFZ();
    lStack_148 = lVar5;
    (**(code **)(lVar1 + 8))(lVar9,lVar13);
    (**(code **)(lVar18 + 0x10))(lVar17,lVar10,lVar2);
    uVar11 = (ulong)*(byte *)(lVar18 + 0x50);
    uVar14 = uVar11 + 0x10 & (uVar11 ^ 0xffffffffffffffff);
    uVar16 = lVar15 + uVar14 + 7 & 0xfffffffffffffff8;
    puVar6 = &UNK_110784d38;
    _swift_allocObject(&UNK_110784d38,uVar16 + 0x10,uVar11 | 7);
    (*pcStack_150)(puVar6 + uVar14,lVar17,lVar2);
    uVar3 = uStack_130;
    *(undefined8 *)(puVar6 + uVar16) = uStack_130;
    *(undefined8 *)(puVar6 + uVar16 + 8) = unaff_x20;
    pcStack_c8 = FUN_10452ebd8;
    puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e0 = 0x42000000;
    puStack_d8 = &UNK_1000b0c7c;
    puStack_d0 = &UNK_110784d50;
    ppuVar7 = &puStack_e8;
    puStack_c0 = puVar6;
    __Block_copy(ppuVar7);
    _objc_retain(uVar3);
    _swift_retain(unaff_x20);
    lVar9 = lStack_128;
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lStack_128);
    puStack_f0 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001001c7eec();
    uVar3 = 0x112d4af90;
    func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
    uVar12 = uVar3;
    func_0x0001001c7f30();
    lVar15 = lStack_100;
    lVar13 = lStack_110;
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (lStack_110,&puStack_f0,uVar3,uVar12,lStack_100,unaff_x20);
    lVar1 = lStack_148;
    __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (0,lVar9,lVar13,ppuVar7);
    __Block_release(ppuVar7);
    _objc_release(lVar1);
    (**(code **)(lStack_108 + 8))(lVar13,lVar15);
    (**(code **)(lStack_120 + 8))(lVar9,lStack_118);
    (**(code **)(lVar18 + 8))(lVar10,lVar2);
    _swift_release(puStack_c0);
  }
  return;
}



/* Entry: 10452e85c; end: 10452ea07;  */

void FUN_10452e85c(code *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  
  __sSo21OS_dispatch_semaphoreC8DispatchE4waityyF();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(ulong *)(unaff_x20 + 0x18);
  func_0x000100de78a0(uVar1,uVar2);
  func_0x0001000b44c0(uVar1,uVar2);
  if (uVar2 >> 0x3c < 0xf) {
    func_0x0001000b44c0(0,0xf000000000000000);
    lVar4 = *(long *)(unaff_x20 + 0x20);
  }
  else {
    lVar4 = *(long *)(unaff_x20 + 0x20);
    if (lVar4 == 0) {
      uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
      uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
      *(code **)(unaff_x20 + 0x28) = param_1;
      *(undefined8 *)(unaff_x20 + 0x30) = param_2;
      _swift_retain(param_2);
      func_0x0001023ee3b4(uVar1,uVar3);
      goto LAB_10452e92c;
    }
  }
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000100de78a0(uVar1,uVar3);
  _swift_errorRetain(lVar4);
  (*param_1)(uVar1,uVar3,lVar4);
  _swift_errorRelease(lVar4);
  func_0x0001000b44c0(uVar1,uVar3);
LAB_10452e92c:
  __sSo21OS_dispatch_semaphoreC8DispatchE6signalSiyF();
  return;
}



/* Entry: 10452ea08; end: 10452ea67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10452ea08(void)

{
  long unaff_x20;
  
  func_0x0001000b44c0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  _swift_errorRelease(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x0001023ee3b4(*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30));
  _objc_release(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x00010452ec90(unaff_x20 + _DAT_113084098,0x112d71bc8,&UNK_10d932780);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10452ea68; end: 10452ea6f;  */

void FUN_10452ea68(void)

{
  if (lRam00000001130840c8 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e812f8c);
  return;
}



/* Entry: 10452ea70; end: 10452ebcf;  */

void FUN_10452ea70(long param_1,long param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar3 = &UNK_110784d10;
  _swift_allocObject(&UNK_110784d10,0x18,7);
  *(long *)(puVar3 + 0x10) = param_2;
  __Block_copy(param_2);
  __sSo21OS_dispatch_semaphoreC8DispatchE4waityyF();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(ulong *)(param_1 + 0x18);
  func_0x000100de78a0(uVar1,uVar2);
  func_0x0001000b44c0(uVar1,uVar2);
  if (uVar2 >> 0x3c < 0xf) {
    func_0x0001000b44c0(0,0xf000000000000000);
    lVar4 = *(long *)(param_1 + 0x20);
  }
  else {
    lVar4 = *(long *)(param_1 + 0x20);
    if (lVar4 == 0) {
      uVar1 = *(undefined8 *)(param_1 + 0x28);
      uVar5 = *(undefined8 *)(param_1 + 0x30);
      *(code **)(param_1 + 0x28) = FUN_10452ebd0;
      *(undefined **)(param_1 + 0x30) = puVar3;
      _swift_retain(puVar3);
      func_0x0001023ee3b4(uVar1,uVar5);
      goto LAB_10452ebb0;
    }
  }
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(ulong *)(param_1 + 0x18);
  _swift_errorRetain(lVar4);
  if (uVar2 >> 0x3c < 0xf) {
    func_0x000100de78a0(uVar1,uVar2);
    uVar5 = uVar1;
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar1,uVar2);
    if (lVar4 == 0) goto LAB_10452eb74;
LAB_10452eb44:
    lVar6 = lVar4;
    __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF(lVar4);
  }
  else {
    uVar5 = 0;
    if (lVar4 != 0) goto LAB_10452eb44;
LAB_10452eb74:
    lVar6 = 0;
  }
  (**(code **)(param_2 + 0x10))(param_2,uVar5,lVar6);
  _objc_release(uVar5);
  _objc_release(lVar6);
  _swift_errorRelease(lVar4);
  func_0x0001000b44c0(uVar1,uVar2);
LAB_10452ebb0:
  __sSo21OS_dispatch_semaphoreC8DispatchE6signalSiyF();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar3);
  return;
}



/* Entry: 10452ebd0; end: 10452ebd7;  */

/* WARNING: Possible PIC construction at 0x000100f153f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f153f4) */

void FUN_10452ebd0(undefined8 param_1,ulong param_2,long param_3)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_2 >> 0x3c < 0xf) {
    func_0x000107c5ee20();
  }
  else {
    param_1 = 0;
  }
  if (param_3 != 0) {
    func_0x000107c5ed2c(param_3);
  }
  (**(code **)(lVar1 + 0x10))(lVar1,param_1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10452ebd8; end: 10452ec23;  */

void FUN_10452ebd8(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long unaff_x20;
  long lVar11;
  long lVar12;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar5 = 0;
  __s10Foundation3URLVMa();
  uVar8 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
  uVar9 = uVar8 + 0x10 & (uVar8 ^ 0xffffffffffffffff);
  uVar8 = *(long *)(*(long *)(lVar5 + -8) + 0x40) + uVar9 + 7 & 0xfffffffffffffff8;
  uVar6 = *(undefined8 *)(unaff_x20 + uVar8);
  uVar7 = *(undefined8 *)(unaff_x20 + (uVar8 + 0xf & 0xffffffffffffff8));
  lVar5 = 0;
  __s10Foundation3URLVMa();
  lVar12 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar3 = (long)&puStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s10Foundation10URLRequestVMa();
  lVar11 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar10 = lVar3 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar12 + 0x10))(lVar3,unaff_x20 + uVar9,lVar5);
  __s10Foundation10URLRequestV3url11cachePolicy15timeoutIntervalAcA3URLV_So017NSURLRequestCacheE0VSdtcfC
            (lVar10,0x4010000000000000,lVar3,0);
  __s10Foundation10URLRequestV19_bridgeToObjectiveCSo12NSURLRequestCyF();
  uStack_70 = 0x10452ec40;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1012d0a0c;
  puStack_78 = &UNK_110784d78;
  ppuVar4 = &puStack_90;
  uStack_68 = uVar7;
  __Block_copy(ppuVar4);
  uVar1 = uStack_68;
  _swift_retain(uVar7);
  _swift_release(uVar1);
  func_0x00010bf647e0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  __Block_release(ppuVar4);
  _objc_release(lVar3);
  func_0x00010c13d1c0(uVar6);
  _objc_release(uVar6);
  (**(code **)(lVar11 + 8))(lVar10,lVar2);
  return;
}



/* Entry: 10452ec24; end: 10452ec47;  */

void FUN_10452ec24(long param_1,long param_2)

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



/* Entry: 10452ec48; end: 10452eccf;  */

undefined8 FUN_10452ec48(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 10452ecd0; end: 10452ecd7;  */

void FUN_10452ecd0(long param_1,long param_2)

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



/* Entry: 10452ecd8; end: 10452ee37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10452ecd8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x20;
  long lVar5;
  ulong uVar6;
  undefined1 auStack_68 [24];
  
  func_0x00010006c804();
  lVar2 = unaff_x20 + _DAT_113084278;
  lVar1 = lVar2;
  _swift_unknownObjectWeakLoadStrong();
  lVar5 = _DAT_113084280;
  if (lVar1 != 0) {
    lVar5 = *(long *)(lVar2 + 8);
    func_0x000100070bfc();
    lVar2 = lVar1;
    _swift_getObjectType(lVar1);
    (**(code **)(lVar5 + 8))(param_1,param_2,lVar2,lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
    return;
  }
  _swift_beginAccess(unaff_x20 + _DAT_113084280,auStack_68,0x21,0);
  uVar6 = *(ulong *)(unaff_x20 + lVar5);
  uVar3 = uVar6;
  _swift_isUniquelyReferenced_nonNull_native();
  *(ulong *)(unaff_x20 + lVar5) = uVar6;
  uVar4 = uVar6;
  if ((uVar3 & 1) == 0) {
    uVar4 = 0;
    FUN_1045301c0(0,*(long *)(uVar6 + 0x10) + 1,1,uVar6);
    *(ulong *)(unaff_x20 + lVar5) = uVar4;
  }
  uVar3 = *(ulong *)(uVar4 + 0x10);
  uVar6 = uVar4;
  if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar3) {
    uVar6 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
    FUN_1045301c0(uVar6,uVar3 + 1,1,uVar4);
  }
  *(ulong *)(uVar6 + 0x10) = uVar3 + 1;
  lVar2 = uVar6 + uVar3 * 0x10;
  *(undefined8 *)(lVar2 + 0x20) = param_1;
  *(char *)(lVar2 + 0x28) = (char)param_2;
  *(ulong *)(unaff_x20 + lVar5) = uVar6;
  _swift_endAccess(auStack_68);
  func_0x000100070bfc();
  return;
}



/* Entry: 10452ee38; end: 10452f02b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10452ee38(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = ((undefined8 *)(param_1 + _DAT_113084350))[1];
  if ((lVar4 != 0) && (*(char *)(param_1 + _DAT_113084348 + 8) != '\x01')) {
    uVar5 = *(undefined8 *)(param_1 + _DAT_113084350);
    lVar1 = unaff_x20 + _DAT_113084218;
    _swift_unknownObjectWeakLoadStrong();
    if (lVar1 != 0) {
      _swift_bridgeObjectRetain(lVar4);
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar5,lVar4);
      _swift_bridgeObjectRelease(lVar4);
      puVar2 = PTR___sSiN_11034deb0;
      puVar3 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
      __ss23CustomStringConvertibleP11descriptionSSvgTj
                (PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
      _swift_bridgeObjectRelease(puVar3);
      func_0x00010c0a5e20(lVar1);
      _objc_release(uVar5);
      _objc_release(puVar2);
      _swift_unknownObjectRelease(lVar1);
    }
    *(bool *)(unaff_x20 + _DAT_113084220) = lVar1 == 0;
  }
  return;
}



/* Entry: 10452f02c; end: 10452f047; -[SCConfigHeuristicRecoveryManagerImpl isApprochingRecovery] */

undefined1 FUN_10452f02c(void)

{
  if (lRam0000000113084240 == -1) {
    return uRam0000000113813c22;
  }
  func_0x000107c61568(0x113084240,0x10452ef58);
  return uRam0000000113813c22;
}



/* Entry: 10452f048; end: 10452f0b3; -[SCConfigHeuristicRecoveryManagerImpl getRecoveryPayload:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10452f048(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  __Block_copy(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_113084248);
  __Block_copy();
  _objc_retain(param_1);
  FUN_10452ea70(uVar1,param_3);
  __Block_release(param_3);
  __Block_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10452f0b4; end: 10452f113; -[SCConfigHeuristicRecoveryManagerImpl markRecoveryComplete] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10452f0b4(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  __sSo21OS_dispatch_semaphoreC8DispatchE6signalSiyF();
  uVar1 = 0xd00000000000004a;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000004a,0x800000010f207310);
  func_0x00010b88c2b4();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10452f114; end: 10452f167; -[SCConfigHeuristicRecoveryManagerImpl waitForRecoveryIfNeededWithCompletion:] */

void FUN_10452f114(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  __Block_copy(param_3);
  __Block_copy();
  _objc_retain(param_1);
  FUN_1045303d8();
  __Block_release(param_3);
  __Block_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10452f168; end: 10452f2ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10452f168(undefined8 param_1,code *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined1 *puVar5;
  code *pcVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar1 = 0;
  __s8Dispatch0A12TimeIntervalOMa();
  lVar9 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  puVar5 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s8Dispatch0A4TimeVMa();
  lVar10 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar8 = (long)puVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar7 = lVar8 - extraout_x12;
  __s8Dispatch0A4TimeV3nowACyFZ(lVar8);
  if (lRam00000001130842e8 != -1) {
    _swift_once(0x1130842e8,FUN_104530094);
  }
  lVar3 = lVar1;
  func_0x000100028790(lVar1,0x1130842f0);
  (**(code **)(lVar9 + 0x10))(puVar5,lVar3,lVar1);
  __s8Dispatch1poiyAA0A4TimeVAD_AA0aB8IntervalOtF(uVar7,lVar8,puVar5);
  (**(code **)(lVar9 + 8))(puVar5,lVar1);
  pcVar6 = *(code **)(lVar10 + 8);
  (*pcVar6)(lVar8,lVar2);
  uVar4 = uVar7;
  __sSo21OS_dispatch_semaphoreC8DispatchE4wait7timeoutAC0D13TimeoutResultOAC0D4TimeV_tF();
  (*pcVar6)(uVar7,lVar2);
  __s8Dispatch0A13TimeoutResultO2eeoiySbAC_ACtFZ(uVar4,0);
  if ((uVar4 & 1) != 0) {
    __sSo21OS_dispatch_semaphoreC8DispatchE6signalSiyF();
  }
  (*param_2)();
  return;
}



/* Entry: 10452f300; end: 10452f30b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10452f300(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long unaff_x20;
  undefined1 *puVar6;
  code *pcVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  pcVar1 = *(code **)(unaff_x20 + 0x18);
  lVar2 = 0;
  __s8Dispatch0A12TimeIntervalOMa(0,pcVar1,*(undefined8 *)(unaff_x20 + 0x20));
  lVar10 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  puVar6 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __s8Dispatch0A4TimeVMa();
  lVar11 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar9 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar8 = lVar9 - extraout_x12;
  __s8Dispatch0A4TimeV3nowACyFZ(lVar9);
  if (lRam00000001130842e8 != -1) {
    _swift_once(0x1130842e8,FUN_104530094);
  }
  lVar4 = lVar2;
  func_0x000100028790(lVar2,0x1130842f0);
  (**(code **)(lVar10 + 0x10))(puVar6,lVar4,lVar2);
  __s8Dispatch1poiyAA0A4TimeVAD_AA0aB8IntervalOtF(uVar8,lVar9,puVar6);
  (**(code **)(lVar10 + 8))(puVar6,lVar2);
  pcVar7 = *(code **)(lVar11 + 8);
  (*pcVar7)(lVar9,lVar3);
  uVar5 = uVar8;
  __sSo21OS_dispatch_semaphoreC8DispatchE4wait7timeoutAC0D13TimeoutResultOAC0D4TimeV_tF();
  (*pcVar7)(uVar8,lVar3);
  __s8Dispatch0A13TimeoutResultO2eeoiySbAC_ACtFZ(uVar5,0);
  if ((uVar5 & 1) != 0) {
    __sSo21OS_dispatch_semaphoreC8DispatchE6signalSiyF();
  }
  (*pcVar1)();
  return;
}



/* Entry: 10452f30c; end: 10452f64b;  */

/* WARNING: Removing unreachable block (ram,0x00010452f4ec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10452f30c(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long extraout_x8;
  long extraout_x12;
  undefined *unaff_x20;
  long lVar9;
  undefined1 *puVar10;
  code *pcVar11;
  long lVar12;
  long alStack_b0 [6];
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = (undefined *)0x0;
  __s10Foundation3URLVMa();
  lVar12 = *(long *)(puVar2 + -8);
  puVar3 = puVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  puVar10 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = (long)puVar10 - extraout_x12;
  if (unaff_x20[_DAT_113084288] == '\x01') {
    unaff_x20[_DAT_113084288] = 0;
    uVar1 = *(long *)(param_1 + _DAT_113084318) - 1;
    if (SBORROW8(*(long *)(param_1 + _DAT_113084318),1)) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x10452f630);
      (*pcVar11)();
    }
    *(ulong *)(param_1 + _DAT_113084318) = uVar1 & ((long)uVar1 >> 0x3f ^ 0xffffffffffffffffU);
    if (lRam00000001130842b8 != -1) {
      _swift_once(0x1130842b8,&UNK_10006c8d8);
    }
    puVar3 = puVar2;
    func_0x000100028790(puVar2,0x113813c28);
    (**(code **)(lVar12 + 0x10))(lVar9,puVar3,puVar2);
    puVar4 = PTR_PTR_1126bdbc0;
    _objc_opt_self();
    param_3 = param_1;
    func_0x00010bf64c20();
    _objc_retainAutoreleasedReturnValue();
    if (puVar4 == (undefined *)0x0) {
      pcVar11 = *(code **)(lVar12 + 8);
    }
    else {
      puVar5 = puVar4;
      __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
      _objc_release(puVar4);
      __s10Foundation3URLV25deletingLastPathComponentACyF(puVar10);
      puVar4 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
      _objc_opt_self();
      func_0x00010bf69bc0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar4;
      __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
      puStack_78 = (undefined *)0x0;
      puVar7 = puVar4;
      param_3 = puVar6;
      func_0x00010bf55da0();
      _objc_release(puVar4);
      _objc_release(puVar6);
      param_1 = puStack_78;
      if ((int)puVar7 == 0) {
        puVar4 = puStack_78;
        _objc_retain(puStack_78);
        __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
        _objc_release(puVar4);
        _swift_willThrow();
        func_0x00010006c090(puVar5,puVar3);
        pcVar11 = *(code **)(lVar12 + 8);
        (*pcVar11)(puVar10,puVar2);
        _swift_errorRelease(param_1);
      }
      else {
        _objc_retain(puStack_78);
        param_1 = (undefined *)0x0;
        param_3 = puVar5;
        __s10Foundation4DataV5write2to7optionsyAA3URLV_So20NSDataWritingOptionsVtKF
                  (lVar9,0,puVar5,puVar3);
        pcVar11 = *(code **)(lVar12 + 8);
        (*pcVar11)(puVar10,puVar2);
        func_0x00010006c090(puVar5,puVar3);
      }
    }
    (*pcVar11)(lVar9,puVar2);
    FUN_10452ecd8(2,2);
    puStack_78 = (undefined *)0x0;
    puStack_70 = (undefined *)0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x43);
    __sSS6appendyySSF(0x5b,0xe100000000000000);
    __sSS6appendyySSF(0xd000000000000022,0x800000010dd155a0);
    __sSS6appendyySSF(0xd000000000000040,0x800000010f207440);
    puVar2 = puStack_70;
    unaff_x20 = puStack_78;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(puStack_78,puStack_70);
    _swift_bridgeObjectRelease(puVar2);
    func_0x00010b88c2b4(unaff_x20);
    puVar3 = unaff_x20;
    _objc_release(unaff_x20);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    lVar12 = lRam0000000113084230;
    if (param_3 != (undefined *)0x2) {
      return;
    }
    *(long *)(lVar9 + -0x30) = lVar9;
    *(undefined **)(lVar9 + -0x28) = param_1;
    *(undefined **)(lVar9 + -0x20) = unaff_x20;
    *(undefined **)(lVar9 + -0x18) = puVar2;
    *(undefined1 **)(lVar9 + -0x10) = &stack0xfffffffffffffff0;
    *(code **)(lVar9 + -8) = FUN_10452f64c;
    _objc_retain();
    if (lVar12 != -1) {
      _swift_once(0x113084230,&UNK_10006c6e8);
    }
    if (lRam00000001130841f8 != -1) {
      _swift_once(0x1130841f8,&UNK_10006c7c8);
    }
    func_0x00010006c804();
    if (lRam0000000113084208 != -1) {
      _swift_once(0x113084208,&UNK_10006c80c);
    }
    uVar8 = uRam0000000113084210;
    _objc_retain(uRam0000000113084210);
    FUN_10452f30c();
    _objc_release(uVar8);
    func_0x000100070bfc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar3);
    return;
  }
  return;
}



/* Entry: 10452f64c; end: 10452f733; -[SCConfigHeuristicRecoveryManagerImpl decrementCrashLoopCountOnBackgroundLaunchWithApplicationState:] */

void FUN_10452f64c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = lRam0000000113084230;
  if (param_3 == 2) {
    _objc_retain();
    if (lVar1 != -1) {
      _swift_once(0x113084230,&UNK_10006c6e8);
    }
    if (lRam00000001130841f8 != -1) {
      _swift_once(0x1130841f8,&UNK_10006c7c8);
    }
    func_0x00010006c804();
    if (lRam0000000113084208 != -1) {
      _swift_once(0x113084208,&UNK_10006c80c);
    }
    uVar2 = uRam0000000113084210;
    _objc_retain(uRam0000000113084210);
    FUN_10452f30c();
    _objc_release(uVar2);
    func_0x000100070bfc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10452f734; end: 10452fb47;  */

/* WARNING: Removing unreachable block (ram,0x00010452f9d0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10452f734(undefined8 param_1,undefined *param_2,undefined *param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long extraout_x8;
  long extraout_x12;
  long lVar9;
  code *pcVar10;
  undefined8 unaff_x20;
  undefined8 uVar11;
  undefined8 unaff_x21;
  long lVar12;
  long lVar13;
  long alStack_e0 [8];
  undefined8 uStack_a0;
  undefined8 uStack_88;
  undefined8 auStack_80 [3];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar11 = 0xd000000000000045;
  _swift_getObjectType();
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar9 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar13 = (long)&uStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar13 - extraout_x12;
  if ((*(int *)(param_2 + _DAT_113084340) == -1) ||
     (((uint)param_1 < 8 && ((1 << (ulong)((uint)param_1 & 0x1f) & 0x83U) != 0)))) {
    if (lRam0000000113084258 != -1) {
      _swift_once(0x113084258,&UNK_10006e83c);
    }
    unaff_x21 = 0;
    __sSo17OS_dispatch_queueC8DispatchE4sync7executexxyKXE_tKlF
              (&uStack_88,&UNK_10006f31c,auStack_80,PTR___sSdN_11034dd90);
    *(undefined8 *)(param_2 + _DAT_113084320) = uStack_88;
    uVar11 = uStack_88;
    __sSo17OS_dispatch_queueC8DispatchE4sync7executexxyKXE_tKlF
              (&uStack_88,&SUB_10006f368,auStack_80,PTR___sSiN_11034deb0);
    *(undefined8 *)(param_2 + _DAT_113084328) = uStack_88;
    __s10Foundation4DateV026timeIntervalSinceReferenceB0SdvgZ();
    *(undefined8 *)(param_2 + _DAT_113084310) = uVar11;
    *(undefined8 *)(param_2 + _DAT_113084318) = 0;
    if (lRam00000001130842b8 != -1) {
      _swift_once(0x1130842b8,&UNK_10006c8d8);
    }
    lVar2 = lVar1;
    func_0x000100028790(lVar1,0x113813c28);
    (**(code **)(lVar9 + 0x10))(lVar12,lVar2,lVar1);
    puVar3 = PTR_PTR_1126bdbc0;
    _objc_opt_self();
    func_0x00010bf64c20();
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 == (undefined *)0x0) {
      pcVar10 = *(code **)(lVar9 + 8);
    }
    else {
      puVar4 = puVar3;
      uStack_a0 = param_1;
      __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
      _objc_release(puVar3);
      __s10Foundation3URLV25deletingLastPathComponentACyF(lVar13);
      puVar3 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
      _objc_opt_self();
      func_0x00010bf69bc0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar3;
      __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
      auStack_80[0] = 0;
      puVar6 = puVar3;
      param_2 = puVar5;
      func_0x00010bf55da0();
      _objc_release(puVar3);
      _objc_release(puVar5);
      uVar11 = auStack_80[0];
      if ((int)puVar6 == 0) {
        uVar7 = auStack_80[0];
        _objc_retain(auStack_80[0]);
        __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
        _objc_release(uVar7);
        _swift_willThrow();
        func_0x00010006c090(puVar4,lVar2);
        pcVar10 = *(code **)(lVar9 + 8);
        (*pcVar10)(lVar13,lVar1);
        _swift_errorRelease(uVar11);
        unaff_x21 = uVar11;
        param_1 = uStack_a0;
      }
      else {
        _objc_retain(auStack_80[0]);
        param_2 = puVar4;
        __s10Foundation4DataV5write2to7optionsyAA3URLV_So20NSDataWritingOptionsVtKF
                  (lVar12,0,puVar4,lVar2);
        pcVar10 = *(code **)(lVar9 + 8);
        (*pcVar10)(lVar13,lVar1);
        func_0x00010006c090(puVar4,lVar2);
        param_1 = uStack_a0;
      }
    }
    (*pcVar10)(lVar12,lVar1);
    FUN_10452ecd8(param_1,0);
    uVar7 = 0xd000000000000045;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000045,0x800000010f2073f0);
    func_0x00010b88c2b4();
    uVar8 = uVar7;
    _objc_release(uVar7);
    param_3 = param_2;
    uVar11 = unaff_x20;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return;
    }
  }
  else {
    uVar7 = 0xd000000000000051;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000051,0x800000010f207390);
    uVar8 = uVar7;
    func_0x00010b88c2b4();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) goto code_r0x00010bdbf3e4;
  }
  ___stack_chk_fail();
  lVar9 = lRam00000001130841f8;
  *(long *)(lVar12 + -0x40) = lVar12;
  *(long *)(lVar12 + -0x38) = lVar1;
  *(undefined8 *)(lVar12 + -0x30) = unaff_x20;
  *(undefined8 *)(lVar12 + -0x28) = unaff_x21;
  *(undefined8 *)(lVar12 + -0x20) = uVar11;
  *(undefined8 *)(lVar12 + -0x18) = uVar7;
  *(undefined1 **)(lVar12 + -0x10) = &stack0xfffffffffffffff0;
  *(code **)(lVar12 + -8) = FUN_10452fb48;
  _objc_retain();
  if (lVar9 != -1) {
    _swift_once(0x1130841f8,&UNK_10006c7c8);
  }
  func_0x00010006c804();
  if (lRam0000000113084208 != -1) {
    _swift_once(0x113084208,&UNK_10006c80c);
  }
  uVar11 = uRam0000000113084210;
  _objc_retain(uRam0000000113084210);
  FUN_10452f734(param_3,uVar11);
  _objc_release(uVar11);
  func_0x000100070bfc();
  uVar7 = uVar8;
code_r0x00010bdbf3e4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar7);
  return;
}



/* Entry: 10452fb48; end: 10452fc0f; -[SCConfigHeuristicRecoveryManagerImpl resetRecoveryWithReason:] */

void FUN_10452fb48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = lRam00000001130841f8;
  _objc_retain();
  if (lVar1 != -1) {
    _swift_once(0x1130841f8,&UNK_10006c7c8);
  }
  func_0x00010006c804();
  if (lRam0000000113084208 != -1) {
    _swift_once(0x113084208,&UNK_10006c80c);
  }
  uVar2 = uRam0000000113084210;
  _objc_retain(uRam0000000113084210);
  FUN_10452f734(param_3,uVar2);
  _objc_release(uVar2);
  func_0x000100070bfc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10452fc10; end: 10452fee7;  */

void FUN_10452fc10(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined1 auStack_c0 [8];
  long lStack_b8;
  long lStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  
  lVar1 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar14 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  puVar10 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s8Dispatch0A3QoSVMa();
  lStack_b0 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_b0 + 0x40));
  lVar11 = (long)puVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __s8Dispatch0A3QoSV0B6SClassOMa();
  lVar13 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar12 = lVar11 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  if (lRam0000000113084258 != -1) {
    _swift_once(0x113084258,&UNK_10006e83c);
  }
  uVar4 = 0x113084268;
  func_0x0001000285a8(0x113084268,&UNK_10dd15528);
  uVar5 = 0;
  __sSo17OS_dispatch_queueC8DispatchE4sync7executexxyKXE_tKlF
            (&puStack_a8,FUN_1045302bc,&puStack_a0,uVar4);
  func_0x00010008602c();
  if ((((uVar5 & 1) != 0) && (((ushort)puStack_a8 & 1) == 0)) && (((ushort)puStack_a8 & 0x100) == 0)
     ) {
    func_0x0001000295c4(0);
    (**(code **)(lVar13 + 0x68))
              (lVar12,*(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7utilityyA2EmFWC_11034f7f8,
               lVar3);
    lVar6 = lVar12;
    __sSo17OS_dispatch_queueC8DispatchE6global3qosAbC0D3QoSV0G6SClassO_tFZ();
    lStack_b8 = lVar6;
    (**(code **)(lVar13 + 8))(lVar12,lVar3);
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    ppuVar7 = &puStack_a0;
    __Block_copy(ppuVar7);
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar11);
    puStack_a8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    uVar4 = 0x112d4af88;
    func_0x00010006ea08(0x112d4af88,PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8,
                        PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
    uVar8 = 0x112d4af90;
    func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
    uVar9 = 0x112d4af98;
    func_0x00010006ea48(0x112d4af98,0x112d4af90,&UNK_10d914100);
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (puVar10,&puStack_a8,uVar8,uVar9,lVar1,uVar4);
    lVar3 = lStack_b8;
    __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (0,lVar11,puVar10,ppuVar7);
    __Block_release(ppuVar7);
    _objc_release(lVar3);
    (**(code **)(lVar14 + 8))(puVar10,lVar1);
    (**(code **)(lStack_b0 + 8))(lVar11,lVar2);
    _swift_release(0);
  }
  return;
}



/* Entry: 10452fee8; end: 10452ff0b; +[SCConfigHeuristicRecoveryManagerImpl decrementCrashLoopCountForHeadlessWake] */

void FUN_10452fee8(void)

{
  _swift_getObjCClassMetadata();
  FUN_10452fc10();
  return;
}



/* Entry: 10452ff0c; end: 10452ffb3; -[SCConfigHeuristicRecoveryManagerImpl updateConstantsWithUpdate:] */

void FUN_10452ff0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_1);
  FUN_1045306fc(param_3);
  _swift_unknownObjectRelease(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10452ffb4; end: 104530093;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10452ffb4(undefined8 param_1,long param_2)

{
  long unaff_x20;
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined1 *puVar4;
  undefined1 auStack_68 [24];
  
  func_0x00010006c804();
  lVar2 = unaff_x20 + _DAT_113084278;
  *(long *)(lVar2 + 8) = param_2;
  _swift_unknownObjectWeakAssign(lVar2,param_1);
  lVar2 = _DAT_113084280;
  _swift_beginAccess(unaff_x20 + _DAT_113084280,auStack_68,1,0);
  lVar1 = *(long *)(unaff_x20 + lVar2);
  *(undefined **)(unaff_x20 + lVar2) = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100070bfc();
  lVar2 = *(long *)(lVar1 + 0x10);
  if (lVar2 != 0) {
    _swift_getObjectType(param_1);
    pcVar3 = *(code **)(param_2 + 8);
    puVar4 = (undefined1 *)(lVar1 + 0x28);
    do {
      (*pcVar3)(*(undefined8 *)(puVar4 + -8),*puVar4,param_1,param_2);
      lVar2 = lVar2 + -1;
      puVar4 = puVar4 + 0x10;
    } while (lVar2 != 0);
  }
  _swift_bridgeObjectRelease(lVar1);
  return;
}



/* Entry: 104530094; end: 1045300f3;  */

void FUN_104530094(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)0x0;
  __s8Dispatch0A12TimeIntervalOMa();
  func_0x000100028750();
  puVar2 = puVar1;
  func_0x000100028790(puVar1,0x1130842f0);
  *puVar2 = 0x1e;
                    /* WARNING: Could not recover jumptable at 0x0001045300f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(puVar1[-1] + 0x68))();
  return;
}



/* Entry: 1045300f4; end: 104530127;  */

void FUN_1045300f4(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104530128; end: 1045301bf; -[SCConfigHeuristicRecoveryManagerImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104530128(long param_1)

{
  func_0x000100dba628(param_1 + _DAT_113084218);
  _swift_release(*(undefined8 *)(param_1 + _DAT_113084248));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113084250));
  func_0x000100dba628(param_1 + _DAT_113084278);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113084280));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113084270));
  return;
}



/* Entry: 1045301c0; end: 1045302bb;  */

undefined * FUN_1045301c0(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1045302bc);
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
    puVar3 = (undefined *)0x1130842e0;
    func_0x0001000285a8(0x1130842e0,&UNK_10dd155f0);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  if ((param_1 & 1) == 0) {
    _memcpy();
  }
  else {
    if (puVar3 != param_4 || param_4 + uVar6 * 0x10 + 0x20 <= puVar3 + 0x20) {
      _memmove();
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Entry: 1045302bc; end: 1045302d7;  */

void FUN_1045302bc(undefined1 *param_1)

{
  *param_1 = uRam00000001130842d8;
  param_1[1] = uRam00000001130842d9;
  return;
}



/* Entry: 1045302d8; end: 1045303d7;  */

void FUN_1045302d8(void)

{
  undefined8 uVar1;
  
  if (lRam0000000113084228 != -1) {
    _swift_once(0x113084228,&UNK_10006a064);
  }
  if (lRam0000000113084230 != -1) {
    _swift_once(0x113084230,&UNK_10006c6e8);
  }
  if (lRam00000001130841f8 != -1) {
    _swift_once(0x1130841f8,&UNK_10006c7c8);
  }
  func_0x00010006c804();
  if (lRam0000000113084208 != -1) {
    _swift_once(0x113084208,&UNK_10006c80c);
  }
  uVar1 = uRam0000000113084210;
  _objc_retain(uRam0000000113084210);
  FUN_10452f30c();
  _objc_release(uVar1);
  func_0x000100070bfc();
  return;
}



/* Entry: 1045303d8; end: 1045306fb;  */

void FUN_1045303d8(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  lVar1 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar13 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar10 = (long)&lStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s8Dispatch0A3QoSVMa();
  lStack_a8 = *(long *)(lVar2 + -8);
  lStack_a0 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a8 + 0x40));
  lVar12 = lVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s8Dispatch0A3QoSV0B6SClassOMa();
  lVar11 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar14 = lVar12 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  puVar3 = &UNK_110784e78;
  _swift_allocObject(&UNK_110784e78,0x18,7);
  *(long *)(puVar3 + 0x10) = param_2;
  __Block_copy(param_2);
  if (lRam0000000113084230 != -1) {
    _swift_once(0x113084230,&UNK_10006c6e8);
  }
  if (cRam0000000113813c20 == '\x01') {
    func_0x0001000295c4(0);
    (**(code **)(lVar11 + 0x68))
              (lVar14,*(undefined4 *)
                       PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0,lVar2);
    lVar4 = lVar14;
    __sSo17OS_dispatch_queueC8DispatchE6global3qosAbC0D3QoSV0G6SClassO_tFZ(lVar14);
    lStack_b0 = lVar13;
    (**(code **)(lVar11 + 8))(lVar14,lVar2);
    puVar5 = &UNK_110784ea0;
    _swift_allocObject(&UNK_110784ea0,0x28,7);
    *(undefined8 *)(puVar5 + 0x10) = param_1;
    *(undefined8 *)(puVar5 + 0x18) = 0x104531084;
    *(undefined **)(puVar5 + 0x20) = puVar3;
    uStack_70 = 0x104531164;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000b0c7c;
    puStack_78 = &UNK_110784eb8;
    ppuVar6 = &puStack_90;
    puStack_68 = puVar5;
    __Block_copy(ppuVar6);
    _objc_retain(param_1);
    _swift_retain(puVar3);
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar12);
    puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
    uVar7 = 0x112d4af88;
    func_0x00010006ea08(0x112d4af88,PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8,
                        PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
    uVar8 = 0x112d4af90;
    func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
    uVar9 = 0x112d4af98;
    func_0x00010006ea48(0x112d4af98,0x112d4af90,&UNK_10d914100);
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (lVar10,&puStack_98,uVar8,uVar9,lVar1,uVar7);
    __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (0,lVar12,lVar10,ppuVar6);
    __Block_release(ppuVar6);
    _objc_release(lVar4);
    (**(code **)(lStack_b0 + 8))(lVar10,lVar1);
    (**(code **)(lStack_a8 + 8))(lVar12,lStack_a0);
    puVar5 = puStack_68;
    _swift_release(puVar3);
    _swift_release(puVar5);
    return;
  }
  (**(code **)(param_2 + 0x10))(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar3);
  return;
}



/* Entry: 1045306fc; end: 104530fb3;  */

/* WARNING: Removing unreachable block (ram,0x000104530e40) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_1045306fc(undefined8 param_1,long param_2)

{
  long *plVar1;
  undefined *puVar2;
  undefined8 uVar3;
  char *pcVar4;
  char *pcVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  char *pcVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  undefined *puVar16;
  undefined *puVar17;
  int *piVar18;
  uint uVar19;
  long extraout_x8;
  long extraout_x12;
  long lVar20;
  code *pcVar21;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  int *piStack_d8;
  char *pcStack_d0;
  long lStack_c8;
  char *pcStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar5 = (char *)0x0;
  __s10Foundation3URLVMa();
  lVar20 = *(long *)(pcVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar20 + 0x40));
  lVar11 = (long)&lStack_120 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  if (lRam00000001130841f8 != -1) {
    _swift_once(0x1130841f8,&UNK_10006c7c8);
  }
  uStack_e0 = uRam0000000113084200;
  func_0x00010006c804();
  lVar6 = param_2;
  func_0x00010c265f00();
  _objc_retainAutoreleasedReturnValue();
  if (lVar6 == 0) {
    param_1 = 0;
  }
  else {
    func_0x00010bf885a0(lVar6);
    _objc_release(lVar6);
  }
  lVar7 = param_2;
  func_0x00010bf0d980();
  _objc_retainAutoreleasedReturnValue();
  if (lVar7 == 0) {
    lStack_c8 = 0;
  }
  else {
    lVar8 = lVar7;
    func_0x00010c067fc0();
    lStack_c8 = lVar8;
    _objc_release(lVar7);
  }
  if (lRam00000001130842b8 != -1) {
    _swift_once(0x1130842b8,&UNK_10006c8d8);
  }
  pcVar9 = pcVar5;
  func_0x000100028790(pcVar5,0x113813c28);
  piStack_d8 = (int *)(lVar11 - extraout_x12);
  (**(code **)(lVar20 + 0x10))((int *)(lVar11 - extraout_x12),pcVar9,pcVar5);
  lVar8 = param_2;
  func_0x00010bf0d960();
  _objc_retainAutoreleasedReturnValue();
  if (lVar8 == 0) {
    lStack_108 = 0;
  }
  else {
    lVar10 = lVar8;
    func_0x00010c067fc0();
    lStack_108 = lVar10;
    _objc_release(lVar8);
  }
  lVar10 = param_2;
  func_0x00010c149280();
  _objc_retainAutoreleasedReturnValue();
  lStack_f0 = lVar11;
  if (lVar10 == 0) {
    lStack_100 = 0;
  }
  else {
    lVar11 = lVar10;
    func_0x00010c067fc0();
    lStack_100 = lVar11;
    _objc_release(lVar10);
  }
  lVar11 = param_2;
  func_0x00010c1492c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar11 == 0) {
    lStack_110 = 0;
  }
  else {
    lVar12 = lVar11;
    func_0x00010c067fc0();
    lStack_110 = lVar12;
    _objc_release(lVar11);
  }
  lStack_e8 = lVar20;
  pcStack_d0 = pcVar5;
  func_0x00010c1492a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_2 == 0) {
    lStack_118 = 0;
    pcStack_c0 = (char *)0x0;
  }
  else {
    lVar20 = param_2;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    lStack_118 = lVar20;
    pcStack_c0 = pcVar9;
    _objc_release();
  }
  lStack_f8 = lVar10;
  if (lRam0000000113084208 != -1) {
    param_2 = 0x113084208;
    pcVar9 = &UNK_10006c80c;
    _swift_once(0x113084208,&UNK_10006c80c);
  }
  puVar2 = puRam0000000113084210;
  if (lVar6 == 0) {
    puVar17 = puRam0000000113084210;
    _objc_retain();
    lVar20 = lStack_c8;
  }
  else {
    func_0x00010006a044();
    lVar20 = lRam0000000113084258;
    puVar13 = puVar2;
    _objc_retain();
    if (lVar20 != -1) {
      _swift_once(0x113084258,&UNK_10006e83c);
    }
    uVar3 = uRam0000000113084260;
    puVar14 = &UNK_110785080;
    _swift_allocObject(&UNK_110785080,0x20,7);
    *(long *)(puVar14 + 0x10) = param_2;
    *(undefined8 *)(puVar14 + 0x18) = param_1;
    puVar17 = &UNK_1107850a8;
    _swift_allocObject(&UNK_1107850a8,0x20,7);
    *(undefined **)(puVar17 + 0x10) = &UNK_10006eba4;
    *(undefined **)(puVar17 + 0x18) = puVar14;
    pcStack_98 = (code *)0x104531160;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0x42000000;
    puStack_a8 = &UNK_10006eb60;
    puStack_a0 = &UNK_1107850c0;
    ppuVar15 = &puStack_b8;
    puStack_90 = puVar17;
    __Block_copy(ppuVar15);
    puVar16 = puStack_90;
    _swift_retain(puVar17);
    _swift_release(puVar16);
    func_0x00010006eaa4(uVar3,ppuVar15);
    __Block_release(ppuVar15);
    pcVar9 = "";
    puVar16 = puVar17;
    _swift_isEscapingClosureAtFileLocation(puVar17,"",0x73,0x2d,0x18,1);
    _swift_release(puVar14);
    _swift_release();
    if (((ulong)puVar16 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar21 = (code *)SoftwareBreakpoint(1,0x104530f78);
      (*pcVar21)();
    }
    *(undefined8 *)(puVar13 + _DAT_113084320) = param_1;
    lVar20 = lStack_c8;
  }
  lStack_c8 = lVar20;
  if (lVar7 != 0) {
    lStack_120 = lVar11;
    func_0x00010006a044();
    if (lRam0000000113084258 != -1) {
      _swift_once(0x113084258,&UNK_10006e83c);
    }
    uVar3 = uRam0000000113084260;
    puVar13 = &UNK_110785008;
    _swift_allocObject(&UNK_110785008,0x20,7);
    *(undefined **)(puVar13 + 0x10) = puVar17;
    *(long *)(puVar13 + 0x18) = lVar20;
    puVar17 = &UNK_110785030;
    _swift_allocObject(&UNK_110785030,0x20,7);
    *(undefined **)(puVar17 + 0x10) = &UNK_10006ebe4;
    *(undefined **)(puVar17 + 0x18) = puVar13;
    pcStack_98 = (code *)0x10453115c;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0x42000000;
    puStack_a8 = &UNK_10006eb60;
    puStack_a0 = &UNK_110785048;
    ppuVar15 = &puStack_b8;
    puStack_90 = puVar17;
    __Block_copy(ppuVar15);
    puVar14 = puStack_90;
    _swift_retain(puVar17);
    _swift_release(puVar14);
    func_0x00010006eaa4(uVar3,ppuVar15);
    __Block_release(ppuVar15);
    pcVar9 = "";
    puVar14 = puVar17;
    _swift_isEscapingClosureAtFileLocation(puVar17,"",0x73,0x3a,0x18,1);
    _swift_release(puVar13);
    _swift_release();
    if (((ulong)puVar14 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar21 = (code *)SoftwareBreakpoint(1,0x104530f94);
      (*pcVar21)();
    }
    *(long *)(puVar2 + _DAT_113084328) = lVar20;
    lVar11 = lStack_120;
  }
  if (lVar8 != 0) {
    func_0x00010006a044();
    if (lRam0000000113084258 != -1) {
      _swift_once(0x113084258,&UNK_10006e83c);
    }
    uVar3 = uRam0000000113084260;
    puVar13 = &UNK_110784f90;
    _swift_allocObject(&UNK_110784f90,0x20,7);
    lVar20 = lStack_108;
    *(undefined **)(puVar13 + 0x10) = puVar17;
    *(long *)(puVar13 + 0x18) = lStack_108;
    puVar17 = &UNK_110784fb8;
    _swift_allocObject(&UNK_110784fb8,0x20,7);
    *(undefined **)(puVar17 + 0x10) = &UNK_10006ec08;
    *(undefined **)(puVar17 + 0x18) = puVar13;
    pcStack_98 = FUN_104531158;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0x42000000;
    puStack_a8 = &UNK_10006eb60;
    puStack_a0 = &UNK_110784fd0;
    ppuVar15 = &puStack_b8;
    puStack_90 = puVar17;
    __Block_copy(ppuVar15);
    puVar14 = puStack_90;
    _swift_retain(puVar17);
    _swift_release(puVar14);
    func_0x00010006eaa4(uVar3,ppuVar15);
    __Block_release(ppuVar15);
    pcVar9 = "";
    puVar14 = puVar17;
    _swift_isEscapingClosureAtFileLocation(puVar17,"",0x73,0x54,0x18,1);
    _swift_release(puVar13);
    _swift_release(puVar17);
    if (((ulong)puVar14 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar21 = (code *)SoftwareBreakpoint(1,0x104530fb0);
      (*pcVar21)();
    }
    *(long *)(puVar2 + _DAT_113084330) = lVar20;
  }
  pcVar4 = pcStack_c0;
  pcVar5 = pcStack_d0;
  piVar18 = piStack_d8;
  if ((lStack_f8 != 0) && (lStack_100 + 1U < 3)) {
    *(long *)(puVar2 + _DAT_113084340) = lStack_100;
  }
  if (lVar11 != 0) {
    plVar1 = (long *)(puVar2 + _DAT_113084348);
    *plVar1 = lStack_110;
    *(undefined1 *)(plVar1 + 1) = 0;
  }
  if (pcStack_c0 != (char *)0x0) {
    plVar1 = (long *)(puVar2 + _DAT_113084350);
    lVar20 = plVar1[1];
    *plVar1 = lStack_118;
    plVar1[1] = (long)pcStack_c0;
    _swift_bridgeObjectRelease(lVar20);
  }
  puVar17 = PTR_PTR_1126bdbc0;
  _objc_opt_self();
  _swift_bridgeObjectRetain(pcVar4);
  func_0x00010bf64c20();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = lStack_f0;
  if (puVar17 == (undefined *)0x0) {
    _swift_bridgeObjectRelease(pcVar4);
    _objc_release(puVar2);
    pcVar21 = *(code **)(lStack_e8 + 8);
  }
  else {
    puVar13 = puVar17;
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
    _objc_release(puVar17);
    __s10Foundation3URLV25deletingLastPathComponentACyF(lVar20);
    puVar17 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    _objc_opt_self();
    func_0x00010bf69bc0();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar17;
    __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
    puStack_b8 = (undefined *)0x0;
    puVar16 = puVar17;
    func_0x00010bf55da0();
    _objc_release(puVar17);
    _objc_release(puVar14);
    puVar17 = puStack_b8;
    if (((ulong)puVar16 & 1) == 0) {
      puVar14 = puStack_b8;
      _objc_retain(puStack_b8);
      __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF(puVar17);
      _objc_release(puVar14);
      _swift_willThrow();
      func_0x00010006c090(puVar13,pcVar9);
      pcVar21 = *(code **)(lStack_e8 + 8);
      (*pcVar21)(lVar20,pcVar5);
      _swift_errorRelease(puVar17);
    }
    else {
      _objc_retain(puStack_b8);
      __s10Foundation4DataV5write2to7optionsyAA3URLV_So20NSDataWritingOptionsVtKF
                (piVar18,0,puVar13,pcVar9);
      pcVar21 = *(code **)(lStack_e8 + 8);
      (*pcVar21)(lVar20,pcVar5);
      func_0x00010006c090(puVar13,pcVar9);
    }
    _swift_bridgeObjectRelease(pcStack_c0);
    _objc_release(puVar2);
  }
  (*pcVar21)();
  uVar19 = (uint)pcVar5;
  func_0x000100070bfc();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    if (uVar19 == 0) {
      return (int *)0x0;
    }
    if ((0xfd < uVar19) && (*(char *)((long)piVar18 + 9) != '\0')) {
      return (int *)(ulong)(*piVar18 + 0xfe);
    }
    uVar19 = *(byte *)(piVar18 + 2) ^ 0xff;
    if (*(byte *)(piVar18 + 2) < 3) {
      uVar19 = 0xffffffff;
    }
    return (int *)(ulong)(uVar19 + 1);
  }
  return piVar18;
}



/* Entry: 104530fb4; end: 10453108f;  */

int FUN_104530fb4(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfd < param_2) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 0xfe;
  }
  uVar1 = *(byte *)(param_1 + 2) ^ 0xff;
  if (*(byte *)(param_1 + 2) < 3) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 104531090; end: 1045310bb;  */

void FUN_104531090(void)

{
  long unaff_x20;
  
  _objc_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1045310bc; end: 1045310f3;  */

void FUN_1045310bc(undefined8 *param_1)

{
  *param_1 = uRam0000000113084308;
  return;
}



/* Entry: 1045310f4; end: 104531157;  */

void FUN_1045310f4(void)

{
  func_0x00010006f368();
  return;
}



/* Entry: 104531158; end: 104531167;  */

void FUN_104531158(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 104531168; end: 1045311c3; -[_TtC25SCConfigCrashRecoveryImpl31ConfigHeuristicRecoveryMetadata init] */

void FUN_104531168(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCConfigCrashRecoveryImpl.ConfigHeuristicRecoveryMetadata",0x39,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104531194);
  (*pcVar1)();
}



/* Entry: 1045311c4; end: 1045311d7; -[_TtC25SCConfigCrashRecoveryImpl31ConfigHeuristicRecoveryMetadata .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1045311c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113084350 + 8))
  ;
  return;
}



/* Entry: 1045311d8; end: 1045317e7;  */

undefined * FUN_1045311d8(ulong param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  uVar10 = param_1 & 0xffffffffffffff8;
  if (param_1 >> 0x3e == 0) {
    uVar9 = *(ulong *)(uVar10 + 0x10);
    puVar2 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  }
  else {
    uVar9 = uVar10;
    if (0x7fffffffffffffff < param_1) {
      uVar9 = param_1;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
    puVar2 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  }
  PTR___swiftEmptyDictionarySingleton_11034f1d0 = puVar2;
  if (uVar9 != 0) {
    uVar6 = 0;
    do {
      while( true ) {
        if ((param_1 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar10 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x104531308);
            (*pcVar3)();
          }
          uVar4 = *(ulong *)(param_1 + uVar6 * 8 + 0x20);
          _objc_retain();
          uVar8 = param_2;
        }
        else {
          uVar4 = uVar6;
          uVar8 = param_1;
          func_0x0001013cf8a0(uVar6,param_1);
        }
        uVar1 = uVar6 + 1;
        if (SCARRY8(uVar6,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x104531304);
          (*pcVar3)();
        }
        uVar5 = uVar4;
        func_0x00010c0d54e0();
        if ((int)uVar5 == 5) break;
        _objc_release(uVar4);
        param_2 = uVar8;
        uVar6 = uVar6 + 1;
        if (uVar1 == uVar9) {
          return puVar2;
        }
      }
      uVar6 = uVar4;
      func_0x00010bf45ee0();
      _objc_retainAutoreleasedReturnValue();
      if (uVar6 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10453134c);
        (*pcVar3)();
      }
      param_2 = uVar6;
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
      _objc_release(uVar6);
      func_0x00010453134c();
      puVar7 = puVar2;
      _swift_isUniquelyReferenced_nonNull_native(puVar2);
      FUN_1045318a8(uVar6,param_2,uVar8,puVar7);
      _swift_bridgeObjectRelease(uVar8);
      _objc_release(uVar4);
      uVar6 = uVar1;
    } while (uVar1 != uVar9);
  }
  return puVar2;
}



/* Entry: 1045317e8; end: 1045318a7; +[ConfigResult legacyABConfigMapFromPayloadData:] */

void FUN_1045317e8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0xf000000000000000;
  }
  else {
    lVar1 = param_3;
    _objc_retain(param_3);
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  FUN_104531e04(param_3,param_2);
  func_0x0001000b44c0(param_3,param_2);
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    uVar2 = 0x112d550a0;
    func_0x0001000285a8(0x112d550a0,&UNK_10d91c290);
    lVar3 = lVar1;
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (lVar1,PTR___sSSN_11034da80,uVar2,PTR___sSSSHsWP_11034da90);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1045318a8; end: 104531b67;  */

void FUN_1045318a8(undefined8 param_1,ulong param_2,ulong param_3,uint param_4)

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
    pcVar2 = (code *)SoftwareBreakpoint(1,0x104531980);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar6) {
    FUN_104531b68(lVar6,param_4 & 1);
    uVar3 = param_2;
    uVar8 = param_3;
    func_0x000100029284();
    if (((uint)uVar4 & 1) != ((uint)uVar8 & 1)) {
      __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF
                (PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104531948);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    func_0x0001045319f8();
    lVar6 = *unaff_x20;
    goto joined_r0x000104531994;
  }
  lVar6 = *unaff_x20;
joined_r0x000104531994:
  if ((uVar4 & 1) != 0) {
    uVar7 = *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8);
    *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar7);
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
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1045319f8);
    (*pcVar2)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 104531b68; end: 104531e03;  */

void FUN_104531b68(long param_1,ulong param_2)

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
  uVar6 = 0x113084380;
  func_0x0001000285a8(0x113084380,&UNK_10dd15620);
  lVar7 = lVar17;
  __ss18_DictionaryStorageC6resize8original8capacity4moveAByxq_Gs05__RawaB0C_SiSbtFZ
            (lVar17,lVar1,param_2,uVar6);
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_104531dd0:
    _swift_release(lVar17);
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
          pcVar5 = (code *)SoftwareBreakpoint(1,0x104531e00);
          (*pcVar5)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar19) {
          if ((param_2 & 1) != 0) {
            uVar15 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
            if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
              *puVar16 = -1L << (uVar15 & 0x3f);
            }
            else {
              _bzero(puVar16,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar17 + 0x10) = 0;
          }
          goto LAB_104531dd0;
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
      _swift_bridgeObjectRetain(uVar3);
      _swift_bridgeObjectRetain(uVar18);
    }
    __ss6HasherV5_seedABSi_tcfC(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
    puVar8 = auStack_a8;
    __sSS4hash4intoys6HasherVz_tF(puVar8,uVar6,uVar3);
    __ss6HasherV9_finalizeSiyF();
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
          pcVar5 = (code *)SoftwareBreakpoint(1,0x104531e04);
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



/* Entry: 104531e04; end: 104531f23;  */

/* WARNING: Removing unreachable block (ram,0x000104531e7c) */

long FUN_104531e04(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long alStack_50 [2];
  
  if (0xe < param_2 >> 0x3c) {
    return 0;
  }
  _objc_allocWithZone(PTR_PTR_1126b7848);
  func_0x00010006c00c(param_1,param_2);
  lVar1 = param_1;
  func_0x0001013cfa54(param_1,param_2);
  func_0x0001000b44c0(param_1,param_2);
  lVar2 = lVar1;
  func_0x00010bf46260();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    _objc_release(lVar1);
  }
  else {
    alStack_50[0] = 0;
    uVar3 = 0;
    FUN_104531f24(0,0x112d7acb0,&PTR_PTR_1126b7830);
    __sSa10FoundationE34_conditionallyBridgeFromObjectiveC_6resultSbSo7NSArrayC_SayxGSgztFZ
              (lVar2,alStack_50,uVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = alStack_50[0];
    if (alStack_50[0] != 0) {
      lVar2 = alStack_50[0];
      FUN_1045311d8(alStack_50[0]);
      _swift_bridgeObjectRelease(lVar1);
      return lVar2;
    }
  }
  return 0;
}



/* Entry: 104531f24; end: 104531f8f;  */

void FUN_104531f24(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 104531f90; end: 104531fab;  */

void FUN_104531f90(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 2) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 1 < uVar2;
  return;
}



/* Entry: 104531fac; end: 10453202f;  */

void FUN_104531fac(void)

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



/* Entry: 104532030; end: 104532063;  */

void FUN_104532030(long *param_1,long *param_2)

{
  long lVar1;
  bool bVar2;
  
  bVar2 = *param_2 - 2U < 0xfffffffffffffffd;
  lVar1 = 0;
  if (!bVar2) {
    lVar1 = *param_2;
  }
  *param_1 = lVar1;
  *(bool *)(param_1 + 1) = bVar2;
  return;
}



/* Entry: 104532064; end: 1045320a3;  */

void FUN_104532064(void)

{
  undefined *puVar1;
  
  if (puRam0000000113084388 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd15630;
  _swift_getWitnessTable(&UNK_10dd15630,&UNK_110785358);
  puRam0000000113084388 = puVar1;
  return;
}



/* Entry: 1045320a4; end: 1045320a7;  */

void FUN_1045320a4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113084390 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd156d0;
  _swift_getWitnessTable(&UNK_10dd156d0,&UNK_110785378);
  puRam0000000113084390 = puVar1;
  return;
}


