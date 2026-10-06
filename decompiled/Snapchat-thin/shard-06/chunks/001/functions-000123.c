/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104529ba0; end: 104529bab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104529ba0(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113083c98;
  _swift_beginAccess(unaff_x20 + _DAT_113083c98,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(unaff_x20 + lVar1);
  return;
}



/* Entry: 104529bac; end: 104529beb;  */

void FUN_104529bac(long *param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_1;
  _swift_beginAccess(unaff_x20 + lVar1,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(unaff_x20 + lVar1);
  return;
}



/* Entry: 104529bec; end: 104529bf7; -[_TtC20SCShakeToReportScope20SCShakeToReportScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104529bec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113083c98;
  _swift_beginAccess(param_1 + _DAT_113083c98,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 104529bf8; end: 104529d97;  */

void FUN_104529bf8(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 104529d98; end: 104529da7; -[_TtC20SCShakeToReportScope20SCShakeToReportScope shakeToReportModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104529d98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113083ca0));
  return;
}



/* Entry: 104529da8; end: 104529e03; -[_TtC20SCShakeToReportScope20SCShakeToReportScope jiraMetaInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104529da8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113083ca8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113083ca8);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104529e04; end: 104529f27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_104529e04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_78 [8];
  undefined1 auStack_68 [24];
  
  _objc_allocWithZone();
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_113083c88,0);
  lVar3 = _DAT_113083c98;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_113083c98,0);
  *(undefined8 *)(unaff_x20 + _DAT_113083c80) = param_1;
  *(undefined1 *)(unaff_x20 + _DAT_113083c90) = 0;
  _swift_beginAccess(unaff_x20 + lVar3,auStack_68,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar3,param_3);
  *(undefined8 *)(unaff_x20 + _DAT_113083ca0) = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113083ca8);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  puVar2 = PTR_s_init_1125d9248;
  _swift_unknownObjectRetain(param_1);
  _objc_retain(param_2);
  puVar4 = auStack_78;
  _objc_msgSendSuper2(puVar4,puVar2);
  _swift_unknownObjectRelease(param_1);
  _objc_release(param_2);
  _swift_unknownObjectRelease(param_3);
  return puVar4;
}



/* Entry: 104529f28; end: 104529fd3; -[_TtC20SCShakeToReportScope20SCShakeToReportScope initWithUIContainer:shakeToReportModel:delegate:jiraMetaInfo:] */

undefined8
FUN_104529f28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  
  if (param_6 == 0) {
    param_6 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_6);
  }
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_4);
  _swift_unknownObjectRetain(param_5);
  uVar1 = param_3;
  FUN_10452a5d4(param_3,param_4,param_5,param_6,param_2);
  _swift_unknownObjectRelease(param_3);
  _objc_release(param_4);
  _swift_unknownObjectRelease(param_5);
  return uVar1;
}



/* Entry: 104529fd4; end: 10452a03b;  */

undefined8 FUN_104529fd4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_allocWithZone();
  uVar1 = param_1;
  func_0x00010452a6c8(param_1,param_2,param_3);
  _objc_release(param_1);
  _swift_unknownObjectRelease(param_3);
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 10452a03c; end: 10452a0c3; -[_TtC20SCShakeToReportScope20SCShakeToReportScope initWithUIWindow:shakeToReportModel:delegate:] */

undefined8
FUN_10452a03c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_4;
  _objc_retain(param_4);
  _swift_unknownObjectRetain(param_5);
  uVar2 = param_3;
  func_0x00010452a6c8(param_3,param_4,param_5);
  _objc_release(param_3);
  _objc_release(uVar1);
  _swift_unknownObjectRelease(param_5);
  return uVar2;
}



/* Entry: 10452a0c4; end: 10452a11f; -[_TtC20SCShakeToReportScope20SCShakeToReportScope init] */

void FUN_10452a0c4(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCShakeToReportScope.SCShakeToReportScope",0x29,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10452a0f0);
  (*pcVar1)();
}



/* Entry: 10452a120; end: 10452a1d7; -[_TtC20SCShakeToReportScope20SCShakeToReportScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10452a120(long param_1)

{
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_113083c80));
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113083c88);
  func_0x0001045294e0(param_1 + _DAT_113083c98);
  _objc_release(*(undefined8 *)(param_1 + _DAT_113083ca0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113083ca8 + 8))
  ;
  return;
}



/* Entry: 10452a1d8; end: 10452a327;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10452a1d8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *aplStack_a0 [2];
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  lVar4 = param_1;
  func_0x0001000994fc();
  lVar5 = lVar4;
  _objc_allocWithZone();
  _swift_unknownObjectWeakInit(lVar5 + _DAT_113083c88,0);
  lVar3 = _DAT_113083c98;
  _swift_unknownObjectWeakInit(lVar5 + _DAT_113083c98,0);
  *(long *)(lVar5 + _DAT_113083c80) = param_1;
  *(undefined1 *)(lVar5 + _DAT_113083c90) = 0;
  _swift_beginAccess(lVar5 + lVar3,auStack_78,1,0);
  _swift_unknownObjectWeakAssign(lVar5 + lVar3,param_3);
  *(undefined8 *)(lVar5 + _DAT_113083ca0) = param_2;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113083ca8);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  puVar2 = PTR_s_init_1125d9248;
  lStack_88 = lVar5;
  lStack_80 = lVar4;
  _swift_unknownObjectRetain(param_1);
  _objc_retain(param_2);
  _swift_bridgeObjectRetain(param_5);
  plVar6 = &lStack_88;
  _objc_msgSendSuper2(plVar6,puVar2);
  aplStack_a0[0] = plVar6;
  func_0x00010008a7c8(&uStack_90,aplStack_a0);
  func_0x000100083b20(aplStack_a0);
  _swift_release(uStack_90);
  _swift_unknownObjectRelease(aplStack_a0[0]);
  return plVar6;
}



/* Entry: 10452a328; end: 10452a4c7; -[_TtC20SCShakeToReportScope28SCShakeToReportScopeServices buildWithUIContainer:shakeToReportModel:delegate:jiraMetaInfo:] */

void FUN_10452a328(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  
  if (param_6 == 0) {
    param_6 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_6);
  }
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_4);
  _swift_unknownObjectRetain(param_5);
  _objc_retain(param_1);
  uVar1 = param_3;
  FUN_10452a1d8(param_3,param_4,param_5,param_6,param_2);
  _swift_unknownObjectRelease(param_3);
  _objc_release(param_4);
  _swift_unknownObjectRelease(param_5);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10452a4c8; end: 10452a563; -[_TtC20SCShakeToReportScope28SCShakeToReportScopeServices buildWithUIWindow:shakeToReportModel:delegate:] */

void FUN_10452a4c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_4;
  _objc_retain(param_4);
  _swift_unknownObjectRetain(param_5);
  _objc_retain(param_1);
  uVar2 = param_3;
  func_0x00010452a3f0(param_3,param_4,param_5);
  _objc_release(param_3);
  _objc_release(uVar1);
  _swift_unknownObjectRelease(param_5);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10452a564; end: 10452a5c3; -[_TtC20SCShakeToReportScope28SCShakeToReportScopeServices init] */

void FUN_10452a564(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCShakeToReportScope.SCShakeToReportScopeServices",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10452a590);
  (*pcVar1)();
}



/* Entry: 10452a5c4; end: 10452a5d3; -[_TtC20SCShakeToReportScope28SCShakeToReportScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10452a5c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113083cb8));
  return;
}



/* Entry: 10452a5d4; end: 10452a7cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10452a5d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_68 [24];
  
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_113083c88,0);
  lVar3 = _DAT_113083c98;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_113083c98,0);
  *(undefined8 *)(unaff_x20 + _DAT_113083c80) = param_1;
  *(undefined1 *)(unaff_x20 + _DAT_113083c90) = 0;
  _swift_beginAccess(unaff_x20 + lVar3,auStack_68,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar3,param_3);
  *(undefined8 *)(unaff_x20 + _DAT_113083ca0) = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113083ca8);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  func_0x0001000994fc();
  puVar2 = PTR_s_init_1125d9248;
  _swift_unknownObjectRetain(param_1);
  _objc_retain(param_2);
  _objc_msgSendSuper2(&stack0xffffffffffffff88,puVar2);
  return;
}



/* Entry: 10452a7d0; end: 10452a7df;  */

undefined1  [16] FUN_10452a7d0(void)

{
  return ZEXT816(0x110784868);
}



/* Entry: 10452a7e0; end: 10452a7eb; -[SCShakeCaptureData viewStack] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10452a7e0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113083d10))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113083d10);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10452a7ec; end: 10452a7f7; -[SCShakeCaptureData viewControllerStack] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10452a7ec(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113083d18))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113083d18);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10452a7f8; end: 10452a84f;  */

void FUN_10452a7f8(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 10452a850; end: 10452a85f; -[SCShakeCaptureData screenshot] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10452a850(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113083d20));
  return;
}



/* Entry: 10452a860; end: 10452a8eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10452a860(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113083d10);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113083d18);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_113083d20) = param_5;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10452a8ec; end: 10452a9b3; -[SCShakeCaptureData initWithViewStack:viewControllerStack:screenshot:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10452a8ec(long param_1,long param_2,long param_3,long param_4,undefined8 param_5)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lStack_50;
  long lStack_48;
  
  lVar4 = param_1;
  _swift_getObjectType();
  if (param_3 == 0) {
    lVar2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    lVar2 = param_2;
  }
  if (param_4 == 0) {
    param_4 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_113083d10);
  *plVar1 = param_3;
  plVar1[1] = lVar2;
  plVar1 = (long *)(param_1 + _DAT_113083d18);
  *plVar1 = param_4;
  plVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_113083d20) = param_5;
  puVar3 = PTR_s_init_1125d9248;
  lStack_50 = param_1;
  lStack_48 = lVar4;
  _objc_retain(param_5);
  _objc_msgSendSuper2(&lStack_50,puVar3);
  return;
}



/* Entry: 10452a9b4; end: 10452aa1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10452a9b4(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  uVar2 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113083d10);
  puVar1[1] = param_1[1];
  *puVar1 = uVar2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113083d18);
  puVar1[1] = uVar4;
  *puVar1 = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_113083d20) = param_1[4];
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10452aa20; end: 10452aa23; -[SCShakeCaptureData copyWithZone:] */

void FUN_10452aa20(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10452aa24; end: 10452aa3f; -[SCShakeCaptureData description] */

void FUN_10452aa24(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10452aa40; end: 10452aabb; -[SCShakeCaptureData init] */

void FUN_10452aa40(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCShakeToReportScope/SCShakeCaptureDataWrapper.swift",0x34,2,0x2b,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10452aa88);
  (*pcVar1)();
}



/* Entry: 10452aabc; end: 10452ab0b; -[SCShakeCaptureData .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10452aabc(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113083d10 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113083d18 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113083d20));
  return;
}



/* Entry: 10452ab0c; end: 10452ab2b;  */

void FUN_10452ab0c(void)

{
  _objc_opt_self(&PTR_PTR_1129cc770);
  return;
}



/* Entry: 10452ab2c; end: 10452ab3b; -[SCShakeToReportModel shakeCaptureData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10452ab2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113083d50));
  return;
}



/* Entry: 10452ab3c; end: 10452ab4b; -[SCShakeToReportModel shakeConfiguration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10452ab3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113083d58));
  return;
}



/* Entry: 10452ab4c; end: 10452ab5b; -[SCShakeToReportModel isInternal] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10452ab4c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113083d60);
}



/* Entry: 10452ab5c; end: 10452ab6b; -[SCShakeToReportModel mode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10452ab5c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113083d68);
}



/* Entry: 10452ab6c; end: 10452ab7b; -[SCShakeToReportModel source] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10452ab6c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113083d70);
}



/* Entry: 10452ab7c; end: 10452abd7; -[SCShakeToReportModel screenSelected] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10452ab7c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113083d78))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113083d78);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10452abd8; end: 10452ac33; -[SCShakeToReportModel featureNames] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10452abd8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_113083d80);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    FUN_10452bfa4(0);
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



/* Entry: 10452ac34; end: 10452ac43; -[SCShakeToReportModel preselectedFeatureIndex] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10452ac34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113083d88));
  return;
}



/* Entry: 10452ac44; end: 10452ad27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10452ac44(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113083d50) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113083d58) = param_2;
  *(undefined1 *)(unaff_x20 + _DAT_113083d60) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113083d68) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_113083d70) = param_5;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113083d78);
  *puVar1 = param_6;
  puVar1[1] = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_113083d80) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_113083d88) = param_9;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10452ad28; end: 10452ae63; -[SCShakeToReportModel initWithShakeCaptureData:shakeConfiguration:isInternal:mode:source:screenSelected:featureNames:preselectedFeatureIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10452ad28(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7,long param_8,long param_9
                  ,undefined8 param_10)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_70;
  long lStack_68;
  
  lVar3 = param_1;
  _swift_getObjectType();
  if (param_8 == 0) {
    param_8 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  lVar4 = 0;
  if (param_9 != 0) {
    FUN_10452bfa4();
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_9,lVar4);
    lVar4 = param_9;
  }
  *(undefined8 *)(param_1 + _DAT_113083d50) = param_3;
  *(undefined8 *)(param_1 + _DAT_113083d58) = param_4;
  *(undefined1 *)(param_1 + _DAT_113083d60) = param_5;
  *(undefined8 *)(param_1 + _DAT_113083d68) = param_6;
  *(undefined8 *)(param_1 + _DAT_113083d70) = param_7;
  plVar1 = (long *)(param_1 + _DAT_113083d78);
  *plVar1 = param_8;
  plVar1[1] = param_2;
  *(long *)(param_1 + _DAT_113083d80) = lVar4;
  *(undefined8 *)(param_1 + _DAT_113083d88) = param_10;
  puVar2 = PTR_s_init_1125d9248;
  lStack_70 = param_1;
  lStack_68 = lVar3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_10);
  _objc_msgSendSuper2(&lStack_70,puVar2);
  return;
}



/* Entry: 10452ae64; end: 10452aed3;  */

undefined8 FUN_10452ae64(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_allocWithZone();
  uVar1 = param_1;
  FUN_10452b47c(param_1);
  func_0x000102556fec(param_1);
  return uVar1;
}



/* Entry: 10452aed4; end: 10452aed7; -[SCShakeToReportModel copyWithZone:] */

void FUN_10452aed4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10452aed8; end: 10452af23; -[SCShakeToReportModel description] */

void FUN_10452aed8(undefined8 param_1)

{
  undefined1 auStack_90 [112];
  
  _objc_retain();
  func_0x00010452b810(auStack_90);
  _objc_release(param_1);
  func_0x000102556fec(auStack_90);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10452af24; end: 10452af9f; -[SCShakeToReportModel init] */

void FUN_10452af24(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCShakeToReportScope/SCShakeToReportModelWrapper.swift",0x36,2,0x48,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10452af6c);
  (*pcVar1)();
}



/* Entry: 10452afa0; end: 10452b00b; -[SCShakeToReportModel .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10452afa0(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113083d50));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113083d58));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113083d78 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113083d80));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113083d88));
  return;
}



/* Entry: 10452b00c; end: 10452b043;  */

void FUN_10452b00c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_10452b044();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 10452b044; end: 10452b167;  */

undefined * FUN_10452b044(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10452b168);
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
    FUN_10452b284();
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
    FUN_10452bfa4(0);
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



/* Entry: 10452b168; end: 10452b283;  */

undefined * FUN_10452b168(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10452b284);
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
    puVar3 = (undefined *)0x112ea51c8;
    func_0x0001000285a8(0x112ea51c8,&UNK_10dab84a0);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x30) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar4,puVar1,uVar6,&UNK_1107846d0);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x30 <= puVar4) {
      _memmove(puVar4,puVar1,uVar6 * 0x30);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Entry: 10452b284; end: 10452b2df;  */

void FUN_10452b284(void)

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
    FUN_10452bfa4();
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x113083dc0;
  plVar5 = (long *)&UNK_10dd150a0;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 10452b2e0; end: 10452b47b;  */

ulong FUN_10452b2e0(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10452b3b0);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10452b3b4);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    FUN_10452bfa4(0);
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
    FUN_10452bfa4(0);
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
  __sSS6appendyySSF(0xd00000000000001d,0x800000010f206de0);
  __sSS6appendyySSF(0x756f662074756220,0xeb0000000020646e);
  _swift_getObjectType(param_1);
  uVar4 = 0;
  __ss9_typeName_9qualifiedSSypXp_SbtF();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar4);
  __ss17_assertionFailure__5flagss5NeverOs12StaticStringV_SSs6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10452b47c);
  (*pcVar2)();
}



/* Entry: 10452b47c; end: 10452bbe3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10452b47c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long *plVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long unaff_x20;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined1 auStack_a0 [16];
  undefined *apuStack_90 [2];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_68;
  
  _swift_getObjectType();
  lVar11 = param_1[1];
  if (lVar11 == 1) {
    plVar7 = (long *)0x0;
  }
  else {
    uVar15 = param_1[3];
    uVar2 = param_1[4];
    uVar10 = param_1[2];
    uVar12 = *param_1;
    lVar8 = 0;
    FUN_10452ab0c();
    lVar13 = lVar8;
    _objc_allocWithZone();
    puVar14 = (undefined8 *)(lVar13 + _DAT_113083d10);
    *puVar14 = uVar12;
    puVar14[1] = lVar11;
    puVar14 = (undefined8 *)(lVar13 + _DAT_113083d18);
    *puVar14 = uVar10;
    puVar14[1] = uVar15;
    *(undefined8 *)(lVar13 + _DAT_113083d20) = uVar2;
    puVar9 = PTR_s_init_1125d9248;
    lStack_c0 = lVar13;
    lStack_b8 = lVar8;
    _swift_bridgeObjectRetain(lVar11);
    _swift_bridgeObjectRetain(uVar15);
    _objc_retain(uVar2);
    plVar7 = &lStack_c0;
    _objc_msgSendSuper2(plVar7,puVar9);
  }
  *(long **)(unaff_x20 + _DAT_113083d50) = plVar7;
  uStack_68 = param_1[5];
  *(undefined8 *)(unaff_x20 + _DAT_113083d58) = uStack_68;
  *(undefined1 *)(unaff_x20 + _DAT_113083d60) = *(undefined1 *)(param_1 + 6);
  uVar15 = param_1[8];
  *(undefined8 *)(unaff_x20 + _DAT_113083d68) = param_1[7];
  *(undefined8 *)(unaff_x20 + _DAT_113083d70) = uVar15;
  uStack_78 = param_1[10];
  uStack_80 = param_1[9];
  uVar15 = param_1[9];
  puVar14 = (undefined8 *)(unaff_x20 + _DAT_113083d78);
  puVar14[1] = param_1[10];
  *puVar14 = uVar15;
  lVar11 = param_1[0xb];
  if (lVar11 == 0) {
    FUN_10452bc04(&uStack_68,apuStack_90,0x113083db8,&UNK_10dd15090);
    FUN_10452bc04(&uStack_80,apuStack_90,0x112d35ff8,&UNK_10d900cd0);
    puVar9 = (undefined *)0x0;
  }
  else {
    lVar13 = *(long *)(lVar11 + 0x10);
    if (lVar13 == 0) {
      FUN_10452bc04(&uStack_68,apuStack_90,0x113083db8,&UNK_10dd15090);
      FUN_10452bc04(&uStack_80,apuStack_90,0x112d35ff8,&UNK_10d900cd0);
      puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      FUN_10452bc04(&uStack_68,apuStack_90,0x113083db8,&UNK_10dd15090);
      FUN_10452bc04(&uStack_80,apuStack_90,0x112d35ff8,&UNK_10d900cd0);
      apuStack_90[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
      FUN_10452b00c(0,lVar13,0);
      puVar9 = apuStack_90[0];
      lVar8 = 0;
      FUN_10452bfa4();
      puVar14 = (undefined8 *)(lVar11 + 0x28);
      do {
        uVar15 = puVar14[-1];
        uVar12 = *puVar14;
        uVar2 = puVar14[1];
        uVar4 = puVar14[2];
        uVar10 = puVar14[3];
        uVar5 = puVar14[4];
        lVar11 = lVar8;
        _objc_allocWithZone();
        puVar1 = (undefined8 *)(lVar11 + _DAT_113083dc8);
        *puVar1 = uVar15;
        puVar1[1] = uVar12;
        puVar1 = (undefined8 *)(lVar11 + _DAT_113083dd0);
        *puVar1 = uVar2;
        puVar1[1] = uVar4;
        puVar1 = (undefined8 *)(lVar11 + _DAT_113083dd8);
        *puVar1 = uVar10;
        puVar1[1] = uVar5;
        puVar6 = PTR_s_init_1125d9248;
        lStack_b0 = lVar11;
        lStack_a8 = lVar8;
        _swift_bridgeObjectRetain(uVar12);
        _swift_bridgeObjectRetain(uVar4);
        _swift_bridgeObjectRetain(uVar5);
        plVar7 = &lStack_b0;
        _objc_msgSendSuper2(plVar7,puVar6);
        uVar3 = *(ulong *)(puVar9 + 0x10);
        apuStack_90[0] = puVar9;
        if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar3) {
          FUN_10452b00c(1 < *(ulong *)(puVar9 + 0x18),uVar3 + 1,1);
        }
        puVar14 = puVar14 + 6;
        *(ulong *)(apuStack_90[0] + 0x10) = uVar3 + 1;
        *(long **)(apuStack_90[0] + uVar3 * 8 + 0x20) = plVar7;
        lVar13 = lVar13 + -1;
        puVar9 = apuStack_90[0];
      } while (lVar13 != 0);
    }
  }
  *(undefined **)(unaff_x20 + _DAT_113083d80) = puVar9;
  if (*(char *)(param_1 + 0xd) == '\x01') {
    puVar9 = (undefined *)0x0;
  }
  else {
    puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c01e540();
  }
  *(undefined **)(unaff_x20 + _DAT_113083d88) = puVar9;
  _objc_msgSendSuper2(auStack_a0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10452bbe4; end: 10452bc03;  */

void FUN_10452bbe4(void)

{
  _objc_opt_self(&PTR_PTR_1129cc848);
  return;
}



/* Entry: 10452bc04; end: 10452bcb7;  */

undefined8 FUN_10452bc04(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 10452bcb8; end: 10452bcc3; -[SCShakeLocalizedFeatureName canonical] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10452bcb8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113083dc8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113083dc8);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10452bcc4; end: 10452bccf; -[SCShakeLocalizedFeatureName localized] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10452bcc4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113083dd0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113083dd0);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10452bcd0; end: 10452bcdb; -[SCShakeLocalizedFeatureName otherInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10452bcd0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113083dd8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113083dd8);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10452bcdc; end: 10452bd33;  */

void FUN_10452bcdc(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 10452bd34; end: 10452bdcf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10452bd34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113083dc8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113083dd0);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113083dd8);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  _objc_msgSendSuper2(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10452bdd0; end: 10452beb3; -[SCShakeLocalizedFeatureName initWithCanonical:localized:otherInfo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10452bdd0(long param_1,long param_2,long param_3,long param_4,long param_5)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lStack_60;
  long lStack_58;
  
  lVar4 = param_1;
  _swift_getObjectType();
  if (param_3 == 0) {
    lVar3 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    lVar3 = param_2;
  }
  if (param_4 == 0) {
    lVar2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    lVar2 = param_2;
  }
  if (param_5 == 0) {
    param_5 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_113083dc8);
  *plVar1 = param_3;
  plVar1[1] = lVar3;
  plVar1 = (long *)(param_1 + _DAT_113083dd0);
  *plVar1 = param_4;
  plVar1[1] = lVar2;
  plVar1 = (long *)(param_1 + _DAT_113083dd8);
  *plVar1 = param_5;
  plVar1[1] = param_2;
  lStack_60 = param_1;
  lStack_58 = lVar4;
  _objc_msgSendSuper2(&lStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10452beb4; end: 10452beb7; -[SCShakeLocalizedFeatureName copyWithZone:] */

void FUN_10452beb4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10452beb8; end: 10452bed3; -[SCShakeLocalizedFeatureName description] */

void FUN_10452beb8(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10452bed4; end: 10452bf4f; -[SCShakeLocalizedFeatureName init] */

void FUN_10452bed4(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCShakeToReportScope/SCShakeLocalizedFeatureNameWrapper.swift",0x3d,2,0x2c,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10452bf1c);
  (*pcVar1)();
}



/* Entry: 10452bf50; end: 10452bfa3; -[SCShakeLocalizedFeatureName .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10452bf50(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113083dc8 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113083dd0 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113083dd8 + 8))
  ;
  return;
}



/* Entry: 10452bfa4; end: 10452bfc3;  */

void FUN_10452bfa4(void)

{
  _objc_opt_self(&PTR_PTR_1129cc948);
  return;
}



/* Entry: 10452bfc4; end: 10452c06f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10452bfc4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_68 [8];
  undefined1 auStack_58 [24];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113083e08) = param_1;
  uVar2 = param_1;
  _swift_retain();
  func_0x0001000bf56c();
  _swift_beginAccess(0x113813c10,auStack_58,1,0);
  uVar1 = uRam0000000113813c10;
  uRam0000000113813c10 = uVar2;
  _objc_release(uVar1);
  puVar3 = auStack_68;
  _objc_msgSendSuper2(puVar3,PTR_s_init_1125d9248);
  _swift_release(param_1);
  return puVar3;
}



/* Entry: 10452c070; end: 10452c097; -[_TtC29SCAppInsightsMetadataServices29SCAppInsightsMetadataServices initWithAppInsightsMetadataStorage:] */

void FUN_10452c070(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x0001000bcde0();
  return;
}



/* Entry: 10452c098; end: 10452c0f3; -[_TtC29SCAppInsightsMetadataServices29SCAppInsightsMetadataServices init] */

void FUN_10452c098(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCAppInsightsMetadataServices.SCAppInsightsMetadataServices",0x3b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10452c0c4);
  (*pcVar1)();
}



/* Entry: 10452c0f4; end: 10452c103; -[_TtC29SCAppInsightsMetadataServices29SCAppInsightsMetadataServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10452c0f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113083e08));
  return;
}



/* Entry: 10452c104; end: 10452c12f; +[_TtC29SCAppInsightsMetadataServices29SCAppInsightsMetdataConstants lastConversationIdKey] */

void FUN_10452c104(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000018,0x800000010f206e80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10452c130; end: 10452c15b; +[_TtC29SCAppInsightsMetadataServices29SCAppInsightsMetdataConstants lastNotificationIdKey] */

void FUN_10452c130(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000018,0x800000010f206ea0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10452c15c; end: 10452c187; +[_TtC29SCAppInsightsMetadataServices29SCAppInsightsMetdataConstants safeModeEnabledKey] */

void FUN_10452c15c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x800000010f206ec0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10452c188; end: 10452c1c3; -[_TtC29SCAppInsightsMetadataServices29SCAppInsightsMetdataConstants init] */

void FUN_10452c188(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10452c1c4; end: 10452c1f7;  */

void FUN_10452c1c4(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10452c1f8; end: 10452c1fb; -[_TtC29SCAppInsightsMetadataServices29SCAppInsightsMetdataConstants .cxx_destruct] */

void FUN_10452c1f8(void)

{
  return;
}



/* Entry: 10452c1fc; end: 10452c21b;  */

void FUN_10452c1fc(void)

{
  _objc_opt_self(&PTR_PTR_1129ccae8);
  return;
}



/* Entry: 10452c21c; end: 10452c267;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10452c21c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113083e60) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10452c268; end: 10452c2bf; -[_TtC37SCCustomStatusBarStyleContextServices37SCCustomStatusBarStyleContextServices initWithStyleContextController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10452c268(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_113083e60) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}



/* Entry: 10452c2c0; end: 10452c31f; -[_TtC37SCCustomStatusBarStyleContextServices37SCCustomStatusBarStyleContextServices init] */

void FUN_10452c2c0(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCCustomStatusBarStyleContextServices.SCCustomStatusBarStyleContextServices",0x4b,
             "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10452c2ec);
  (*pcVar1)();
}



/* Entry: 10452c320; end: 10452c32f; -[_TtC37SCCustomStatusBarStyleContextServices37SCCustomStatusBarStyleContextServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10452c320(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113083e60));
  return;
}



/* Entry: 10452c330; end: 10452c34f; -[_TtC22SCCustomStatusBarScope22SCCustomStatusBarScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10452c330(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_113083e90));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10452c350; end: 10452c35f; -[_TtC22SCCustomStatusBarScope22SCCustomStatusBarScope styleContextObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10452c350(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113083e98));
  return;
}



/* Entry: 10452c360; end: 10452c3a7; -[_TtC22SCCustomStatusBarScope22SCCustomStatusBarScope heightChangeDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10452c360(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113083ea0;
  _swift_beginAccess(param_1 + _DAT_113083ea0,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10452c3a8; end: 10452c3ff; -[_TtC22SCCustomStatusBarScope22SCCustomStatusBarScope setHeightChangeDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10452c3a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113083ea0;
  _swift_beginAccess(param_1 + _DAT_113083ea0,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10452c400; end: 10452c4bb; -[_TtC22SCCustomStatusBarScope22SCCustomStatusBarScope initWithUiContainer:styleContextObservable:heightChangeDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10452c400(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  lVar3 = param_1;
  _swift_getObjectType();
  lVar2 = _DAT_113083ea0;
  _swift_unknownObjectWeakInit(param_1 + _DAT_113083ea0,0);
  *(undefined8 *)(param_1 + _DAT_113083e90) = param_3;
  *(undefined8 *)(param_1 + _DAT_113083e98) = param_4;
  _swift_beginAccess(param_1 + lVar2,auStack_58,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar2,param_5);
  puVar1 = PTR_s_init_1125d9248;
  lStack_68 = param_1;
  lStack_60 = lVar3;
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_68,puVar1);
  return;
}



/* Entry: 10452c4bc; end: 10452c4e7; -[_TtC22SCCustomStatusBarScope22SCCustomStatusBarScope init] */

void FUN_10452c4bc(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCCustomStatusBarScope.SCCustomStatusBarScope",0x2d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10452c4e8);
  (*pcVar1)();
}



/* Entry: 10452c4e8; end: 10452c59f; -[_TtC22SCCustomStatusBarScope22SCCustomStatusBarScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10452c4e8(long param_1)

{
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_113083e90));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113083e98));
  param_1 = param_1 + _DAT_113083ea0;
  _swift_unknownObjectWeakDestroy();
  return param_1;
}



/* Entry: 10452c5a0; end: 10452c637; -[_TtC22SCCustomStatusBarScope30SCCustomStatusBarScopeServices buildWithUiContainer:styleContextObservable:heightChangeDelegate:] */

void FUN_10452c5a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_4);
  _swift_unknownObjectRetain(param_5);
  _objc_retain(param_1);
  uVar1 = param_3;
  func_0x00010058ef04(param_3,param_4,param_5);
  _swift_unknownObjectRelease(param_3);
  _objc_release(param_4);
  _swift_unknownObjectRelease(param_5);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10452c638; end: 10452c663; -[_TtC22SCCustomStatusBarScope30SCCustomStatusBarScopeServices init] */

void FUN_10452c638(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCCustomStatusBarScope.SCCustomStatusBarScopeServices",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10452c664);
  (*pcVar1)();
}



/* Entry: 10452c664; end: 10452c667;  */

void FUN_10452c664(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10452c668; end: 10452c69b;  */

void FUN_10452c668(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10452c69c; end: 10452c6d3; -[_TtC22SCCustomStatusBarScope30SCCustomStatusBarScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10452c69c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113083eb0));
  return;
}



/* Entry: 10452c6d4; end: 10452c7ab;  */

void FUN_10452c6d4(void)

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



/* Entry: 10452c7ac; end: 10452c7cb;  */

void FUN_10452c7ac(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 10452c7cc; end: 10452c80b;  */

void FUN_10452c7cc(void)

{
  undefined *puVar1;
  
  if (puRam0000000113083f08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd151d0;
  _swift_getWitnessTable(&UNK_10dd151d0,&UNK_110784a40);
  puRam0000000113083f08 = puVar1;
  return;
}



/* Entry: 10452c80c; end: 10452c81b;  */

undefined1  [16] FUN_10452c80c(void)

{
  return ZEXT816(0x110784a40);
}



/* Entry: 10452c81c; end: 10452c83b; -[_TtC21SCUserNavigationScope21SCUserNavigationScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10452c81c(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_113083f10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10452c83c; end: 10452c847;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10452c83c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113083f10) = param_1;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10452c848; end: 10452c89f; -[_TtC21SCUserNavigationScope21SCUserNavigationScope initWithUIContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10452c848(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_113083f10) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _swift_unknownObjectRetain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}



/* Entry: 10452c8a0; end: 10452c8af; -[_TtC21SCUserNavigationScope21SCUserNavigationScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10452c8a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_113083f10));
  return;
}


