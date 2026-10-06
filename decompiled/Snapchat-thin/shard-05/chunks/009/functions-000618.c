/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1043701ac; end: 1043701cf; -[_TtC23SCLensCreatorProfileAPI40SCLensCreatorProfilePresentationServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043701ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113071a50));
  return;
}



/* Entry: 1043701d0; end: 1043702a7;  */

void FUN_1043701d0(void)

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



/* Entry: 1043702a8; end: 1043702b3;  */

void FUN_1043702a8(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1043702b4; end: 1043702c3; -[_TtC23SCLensCreatorProfileAPI25SCLensCreatorProfileScope lensCreatorProfileModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043702b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113071a80));
  return;
}



/* Entry: 1043702c4; end: 1043702d3; -[_TtC23SCLensCreatorProfileAPI25SCLensCreatorProfileScope sourcePage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1043702c4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113071a88);
}



/* Entry: 1043702d4; end: 1043702df; -[_TtC23SCLensCreatorProfileAPI25SCLensCreatorProfileScope presentingViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043702d4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113071a90;
  _swift_beginAccess(param_1 + _DAT_113071a90,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043702e0; end: 1043702eb; -[_TtC23SCLensCreatorProfileAPI25SCLensCreatorProfileScope setPresentingViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043702e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113071a90;
  _swift_beginAccess(param_1 + _DAT_113071a90,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1043702ec; end: 1043702f7; -[_TtC23SCLensCreatorProfileAPI25SCLensCreatorProfileScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043702ec(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113071a98;
  _swift_beginAccess(param_1 + _DAT_113071a98,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043702f8; end: 10437033b;  */

void FUN_1043702f8(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 10437033c; end: 104370347; -[_TtC23SCLensCreatorProfileAPI25SCLensCreatorProfileScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10437033c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113071a98;
  _swift_beginAccess(param_1 + _DAT_113071a98,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 104370348; end: 10437039b;  */

void FUN_104370348(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10437039c; end: 1043703c7; -[_TtC23SCLensCreatorProfileAPI25SCLensCreatorProfileScope init] */

void FUN_10437039c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCLensCreatorProfileAPI.SCLensCreatorProfileScope",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1043703c8);
  (*pcVar1)();
}



/* Entry: 1043703c8; end: 10437045b; -[_TtC23SCLensCreatorProfileAPI25SCLensCreatorProfileScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1043703c8(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113071a80));
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113071a90);
  param_1 = param_1 + _DAT_113071a98;
  _swift_unknownObjectWeakDestroy();
  return param_1;
}



/* Entry: 10437045c; end: 10437059b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10437045c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *aplStack_b8 [2];
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar4 = param_1;
  func_0x0001002a799c();
  lVar5 = lVar4;
  _objc_allocWithZone();
  lVar2 = _DAT_113071a90;
  _swift_unknownObjectWeakInit(lVar5 + _DAT_113071a90,0);
  lVar3 = _DAT_113071a98;
  _swift_unknownObjectWeakInit(lVar5 + _DAT_113071a98,0);
  *(long *)(lVar5 + _DAT_113071a80) = param_1;
  *(undefined8 *)(lVar5 + _DAT_113071a88) = param_2;
  _swift_beginAccess(lVar5 + lVar2,auStack_78,1,0);
  _swift_unknownObjectWeakAssign(lVar5 + lVar2,param_3);
  _swift_beginAccess(lVar5 + lVar3,auStack_90,1,0);
  _swift_unknownObjectWeakAssign(lVar5 + lVar3,param_4);
  puVar1 = PTR_s_init_1125d9248;
  lStack_a0 = lVar5;
  lStack_98 = lVar4;
  _objc_retain(param_1);
  plVar6 = &lStack_a0;
  _objc_msgSendSuper2(plVar6,puVar1);
  aplStack_b8[0] = plVar6;
  func_0x00010008a7c8(&uStack_a8,aplStack_b8);
  func_0x000100083b20(aplStack_b8);
  _swift_release(uStack_a8);
  _swift_unknownObjectRelease(aplStack_b8[0]);
  return plVar6;
}



/* Entry: 10437059c; end: 10437063f; -[_TtC23SCLensCreatorProfileAPI33SCLensCreatorProfileScopeServices buildWithLensCreatorProfileModel:sourcePage:presentingViewController:delegate:] */

void FUN_10437059c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_5;
  _objc_retain(param_5);
  _swift_unknownObjectRetain(param_6);
  _objc_retain(param_1);
  uVar2 = param_3;
  FUN_10437045c(param_3,param_4,param_5,param_6);
  _objc_release(param_3);
  _objc_release(uVar1);
  _swift_unknownObjectRelease(param_6);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104370640; end: 10437066b; -[_TtC23SCLensCreatorProfileAPI33SCLensCreatorProfileScopeServices init] */

void FUN_104370640(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCLensCreatorProfileAPI.SCLensCreatorProfileScopeServices",0x39,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10437066c);
  (*pcVar1)();
}



/* Entry: 10437066c; end: 10437066f;  */

void FUN_10437066c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104370670; end: 1043706a3;  */

void FUN_104370670(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1043706a4; end: 1043706c3; -[_TtC23SCLensCreatorProfileAPI33SCLensCreatorProfileScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043706a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113071aa8));
  return;
}



/* Entry: 1043706c4; end: 1043706e7;  */

undefined8 FUN_1043706c4(undefined8 param_1)

{
  _swift_unknownObjectWeakDestroy();
  return param_1;
}



/* Entry: 1043706e8; end: 1043706eb;  */

void FUN_1043706e8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113071ab0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcf04a8;
  _swift_getWitnessTable(&UNK_10dcf04a8,&UNK_11075fd90);
  puRam0000000113071ab0 = puVar1;
  return;
}



/* Entry: 1043706ec; end: 10437072b;  */

void FUN_1043706ec(void)

{
  undefined *puVar1;
  
  if (puRam0000000113071ab0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcf04a8;
  _swift_getWitnessTable(&UNK_10dcf04a8,&UNK_11075fd90);
  puRam0000000113071ab0 = puVar1;
  return;
}



/* Entry: 10437072c; end: 10437074f;  */

undefined1  [16] FUN_10437072c(void)

{
  return ZEXT816(0x11075fd90);
}



/* Entry: 104370750; end: 1043707fb;  */

void FUN_104370750(void)

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



/* Entry: 1043707fc; end: 10437083b;  */

void FUN_1043707fc(undefined1 *param_1,long *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar2 = 1;
  if (*param_2 != 1) {
    uVar2 = 2;
  }
  uVar1 = 0;
  if (*param_2 != 0) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 10437083c; end: 10437086f;  */

undefined8 FUN_10437083c(undefined8 param_1)

{
  (*(code *)(undefined *)0x10436fed0)();
  return param_1;
}



/* Entry: 104370870; end: 1043708a3; -[SCLensCreatorProfileModel description] */

void FUN_104370870(void)

{
  undefined1 auStack_38 [40];
  
  FUN_104370bc0(auStack_38);
  FUN_10437083c(auStack_38);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043708a4; end: 1043708eb; -[SCLensCreatorProfileModel init] */

void FUN_1043708a4(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCLensCreatorProfileAPI/SCLensCreatorProfileModelWrapper.swift",0x3e,2,0x2f,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1043708ec);
  (*pcVar1)();
}



/* Entry: 1043708ec; end: 1043708ef; -[SCLensCreatorProfileModel copyWithZone:] */

void FUN_1043708ec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1043708f0; end: 1043709a7; +[SCLensCreatorProfileModel communityProfileWithUserId:displayName:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043708f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_50;
  long lStack_48;
  
  _swift_getObjCClassMetadata();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  uVar3 = param_2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_113071b08) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_113071b10);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(lVar2 + _DAT_113071b18);
  *puVar1 = param_4;
  puVar1[1] = uVar3;
  puVar1 = (undefined8 *)(lVar2 + _DAT_113071b20);
  *puVar1 = 0;
  puVar1[1] = 0;
  lStack_50 = lVar2;
  lStack_48 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043709a8; end: 104370a47; +[SCLensCreatorProfileModel publicProfileWithProfileId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043709a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_113071b08) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_113071b10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_113071b18);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_113071b20);
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



/* Entry: 104370a48; end: 104370ae3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104370a48(code *param_1,undefined8 param_2,code *param_3)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  
  if (*(char *)(unaff_x20 + _DAT_113071b08) == '\x01') {
    if (((undefined8 *)(unaff_x20 + _DAT_113071b20))[1] == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104370adc);
      (*pcVar1)();
    }
    (*param_3)(*(undefined8 *)(unaff_x20 + _DAT_113071b20));
  }
  else {
    lVar2 = ((undefined8 *)(unaff_x20 + _DAT_113071b10))[1];
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104370ae0);
      (*pcVar1)();
    }
    if (((undefined8 *)(unaff_x20 + _DAT_113071b18))[1] == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104370ae4);
      (*pcVar1)();
    }
    (*param_1)(*(undefined8 *)(unaff_x20 + _DAT_113071b10),lVar2,
               *(undefined8 *)(unaff_x20 + _DAT_113071b18));
  }
  return;
}



/* Entry: 104370ae4; end: 104370b37; -[SCLensCreatorProfileModel matchCommunityProfile:publicProfile:] */

void FUN_104370ae4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_50 = param_4;
  uStack_30 = param_3;
  _objc_retain();
  FUN_104370a48(FUN_104370e5c,auStack_40,FUN_104370e64,auStack_60);
  _objc_release(param_1);
  return;
}



/* Entry: 104370b38; end: 104370b6b;  */

void FUN_104370b38(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104370b6c; end: 104370bbf; -[SCLensCreatorProfileModel .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104370b6c(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113071b10 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113071b18 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113071b20 + 8))
  ;
  return;
}



/* Entry: 104370bc0; end: 104370c93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104370bc0(undefined8 *param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  long lVar7;
  
  if (*(char *)(param_2 + _DAT_113071b08) == '\x01') {
    lVar2 = ((undefined8 *)(param_2 + _DAT_113071b20))[1];
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104370c8c);
      (*pcVar1)();
    }
    uVar4 = 0;
    uVar5 = *(undefined8 *)(param_2 + _DAT_113071b20);
    uVar6 = 1;
    lVar3 = lVar2;
    lVar7 = 0;
  }
  else {
    lVar3 = ((undefined8 *)(param_2 + _DAT_113071b10))[1];
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104370c90);
      (*pcVar1)();
    }
    lVar2 = ((undefined8 *)(param_2 + _DAT_113071b18))[1];
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104370c94);
      (*pcVar1)();
    }
    uVar5 = *(undefined8 *)(param_2 + _DAT_113071b10);
    uVar4 = *(undefined8 *)(param_2 + _DAT_113071b18);
    _swift_bridgeObjectRetain(lVar3);
    uVar6 = 0;
    lVar7 = lVar2;
  }
  _swift_bridgeObjectRetain(lVar2);
  *param_1 = uVar5;
  param_1[1] = lVar3;
  param_1[2] = uVar4;
  param_1[3] = lVar7;
  *(undefined1 *)(param_1 + 4) = uVar6;
  return;
}



/* Entry: 104370c94; end: 104370cb3;  */

void FUN_104370c94(void)

{
  _objc_opt_self(&PTR_PTR_1129a30f0);
  return;
}



/* Entry: 104370cb4; end: 104370e1b;  */

int FUN_104370cb4(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_104370d30;
        goto LAB_104370d14;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_104370d14:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_104370d30:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 104370e1c; end: 104370e5b;  */

void FUN_104370e1c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113071b50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcf0650;
  _swift_getWitnessTable(&UNK_10dcf0650,&UNK_11075fea0);
  puRam0000000113071b50 = puVar1;
  return;
}



/* Entry: 104370e5c; end: 104370e63;  */

/* WARNING: Possible PIC construction at 0x000102409ac8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102409acc) */

void FUN_104370e5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5fadc();
  func_0x000107c5fadc(param_3,param_4);
  (**(code **)(lVar1 + 0x10))(lVar1,param_1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104370e64; end: 104370e9b;  */

void FUN_104370e64(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104370e9c; end: 104370ed7;  */

bool FUN_104370e9c(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 104370ed8; end: 104370f17;  */

void FUN_104370ed8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113071b58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcf0760;
  _swift_getWitnessTable(&UNK_10dcf0760,&UNK_11075ffd0);
  puRam0000000113071b58 = puVar1;
  return;
}



/* Entry: 104370f18; end: 104370fc3;  */

void FUN_104370f18(void)

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



/* Entry: 104370fc4; end: 104370ffb;  */

void FUN_104370fc4(ulong *param_1,ulong *param_2)

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



/* Entry: 104370ffc; end: 10437103f;  */

uint FUN_104370ffc(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_48 = param_1[5];
  uStack_50 = param_1[4];
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_28 = param_2[3];
  uStack_30 = param_2[2];
  uStack_18 = param_2[5];
  uStack_20 = param_2[4];
  FUN_104371040(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 104371040; end: 104371183;  */

bool FUN_104371040(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *param_1;
  if ((uVar1 == *param_2 && param_1[1] == param_2[1]) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF(),
     (uVar1 & 1) != 0)) {
    uVar1 = param_2[3];
    if (param_1[3] == 0) {
      if (uVar1 != 0) {
        return false;
      }
    }
    else {
      if (uVar1 == 0) {
        return false;
      }
      uVar2 = param_1[2];
      if ((uVar2 != param_2[2] || param_1[3] != uVar1) &&
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (), (uVar2 & 1) == 0)) {
        return false;
      }
    }
    if ((((byte)param_1[4] ^ (byte)param_2[4]) & 1) == 0) {
      return param_1[5] == param_2[5];
    }
  }
  return false;
}



/* Entry: 104371184; end: 1043711ff;  */

undefined8 * FUN_104371184(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  param_1[5] = param_2[5];
  return param_1;
}



/* Entry: 104371200; end: 104371253;  */

undefined8 * FUN_104371200(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  param_1[5] = param_2[5];
  return param_1;
}



/* Entry: 104371254; end: 1043712f7;  */

int FUN_104371254(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xc] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1043712f8; end: 10437133b;  */

uint FUN_1043712f8(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_48 = param_1[5];
  uStack_50 = param_1[4];
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_28 = param_2[3];
  uStack_30 = param_2[2];
  uStack_18 = param_2[5];
  uStack_20 = param_2[4];
  FUN_10437133c(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10437133c; end: 104371463;  */

void FUN_10437133c(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar5 = *param_1;
  if ((long)((ulong)(uint)((int)*(char *)((long)param_1 + 0x27) << 0x10) << 0x20) < 0) {
    if ((long)param_2[4] < 0) {
      func_0x00010c071ae0(uVar5,param_2,*param_2);
    }
  }
  else if (-1 < (long)((ulong)(uint)((int)*(char *)((long)param_2 + 0x27) << 0x10) << 0x20)) {
    uVar1 = param_1[2];
    uVar3 = param_1[3];
    uVar2 = param_2[2];
    uVar4 = param_2[3];
    if ((((uVar5 == *param_2) && (param_1[1] == param_2[1])) ||
        (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                   (uVar5,param_1[1],*param_2,param_2[1],0), (uVar5 & 1) != 0)) &&
       (((uVar3 != 0 && (uVar4 != 0)) && ((uVar1 != uVar2 || (uVar3 != uVar4)))))) {
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (uVar1,uVar3,uVar2,uVar4,0);
    }
  }
  return;
}



/* Entry: 104371464; end: 1043714bf;  */

long FUN_104371464(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1043714c0; end: 1043714d3;  */

void FUN_1043714c0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1[3];
  if (-1 < (long)param_1[4]) {
    _swift_bridgeObjectRelease(param_1[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)
            (*param_1,param_1[1],param_1[2],uVar1,param_1[4],param_1[5]);
  return;
}



/* Entry: 1043714d4; end: 104371503;  */

void FUN_1043714d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  if (-1 < param_5) {
    _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_4);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
  return;
}



/* Entry: 104371504; end: 1043715eb;  */

undefined8 * FUN_104371504(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *param_2;
  uVar4 = param_2[1];
  uVar2 = param_2[2];
  uVar5 = param_2[3];
  uVar3 = param_2[4];
  uVar6 = param_2[5];
  func_0x000104371490(uVar1,uVar4,uVar2,uVar5,uVar3,uVar6);
  *param_1 = uVar1;
  param_1[1] = uVar4;
  param_1[2] = uVar2;
  param_1[3] = uVar5;
  param_1[4] = uVar3;
  param_1[5] = uVar6;
  return param_1;
}



/* Entry: 1043715ec; end: 104371633;  */

undefined8 * FUN_1043715ec(undefined8 *param_1,undefined8 *param_2)

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
  
  uVar5 = *param_1;
  uVar1 = param_1[1];
  uVar3 = param_1[2];
  uVar2 = param_1[3];
  uVar4 = param_1[4];
  uVar6 = param_1[5];
  uVar7 = *param_2;
  uVar9 = param_2[3];
  uVar8 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  param_1[3] = uVar9;
  param_1[2] = uVar8;
  uVar7 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar7;
  FUN_1043714d4(uVar5,uVar1,uVar3,uVar2,uVar4,uVar6);
  return param_1;
}



/* Entry: 104371634; end: 10437171b;  */

int FUN_104371634(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xc] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = (uint)(*(ulong *)(param_1 + 8) >> 1);
  uVar2 = 0xffffffff;
  if (0x80000000 < uVar1) {
    uVar2 = ~uVar1;
  }
  return uVar2 + 1;
}



/* Entry: 10437171c; end: 10437172b; -[_TtC24SCLensExplorerStoryScope24SCLensExplorerStoryScope storyInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10437171c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113071b60));
  return;
}



/* Entry: 10437172c; end: 10437173b; -[_TtC24SCLensExplorerStoryScope24SCLensExplorerStoryScope storyConfiguration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10437172c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113071b68));
  return;
}



/* Entry: 10437173c; end: 104371747; -[_TtC24SCLensExplorerStoryScope24SCLensExplorerStoryScope baseView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10437173c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113071b70;
  _swift_beginAccess(param_1 + _DAT_113071b70,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104371748; end: 104371753; -[_TtC24SCLensExplorerStoryScope24SCLensExplorerStoryScope setBaseView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104371748(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113071b70;
  _swift_beginAccess(param_1 + _DAT_113071b70,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 104371754; end: 10437175f; -[_TtC24SCLensExplorerStoryScope24SCLensExplorerStoryScope sourceViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104371754(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113071b78;
  _swift_beginAccess(param_1 + _DAT_113071b78,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104371760; end: 10437176b; -[_TtC24SCLensExplorerStoryScope24SCLensExplorerStoryScope setSourceViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104371760(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113071b78;
  _swift_beginAccess(param_1 + _DAT_113071b78,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10437176c; end: 104371777; -[_TtC24SCLensExplorerStoryScope24SCLensExplorerStoryScope workflowDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10437176c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113071b80;
  _swift_beginAccess(param_1 + _DAT_113071b80,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104371778; end: 1043717bb;  */

void FUN_104371778(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1043717bc; end: 1043717c7; -[_TtC24SCLensExplorerStoryScope24SCLensExplorerStoryScope setWorkflowDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043717bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113071b80;
  _swift_beginAccess(param_1 + _DAT_113071b80,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1043717c8; end: 10437181b;  */

void FUN_1043717c8(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10437181c; end: 104371847; -[_TtC24SCLensExplorerStoryScope24SCLensExplorerStoryScope init] */

void FUN_10437181c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCLensExplorerStoryScope.SCLensExplorerStoryScope",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104371848);
  (*pcVar1)();
}



/* Entry: 104371848; end: 1043718af; -[_TtC24SCLensExplorerStoryScope24SCLensExplorerStoryScope .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000104371894: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104371898) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_104371848(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113071b60));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113071b68));
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113071b70);
  param_1 = param_1 + _DAT_113071b78;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1043718b0; end: 10437191b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043718b0(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x00010037b3cc();
  lVar1 = param_2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar1 + _DAT_113071b90) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  _objc_msgSendSuper2(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10437191c; end: 104371923;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10437191c(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x00010037b3cc();
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113071b90) = uStack_38;
  puVar1 = auStack_48;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 104371924; end: 10437196f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104371924(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113071b90) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104371970; end: 104371af7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_104371970(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *aplStack_d0 [2];
  undefined8 uStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar5 = param_1;
  func_0x00010037a0f0();
  lVar6 = lVar5;
  _objc_allocWithZone();
  lVar2 = _DAT_113071b70;
  _swift_unknownObjectWeakInit(lVar6 + _DAT_113071b70,0);
  lVar3 = _DAT_113071b78;
  _swift_unknownObjectWeakInit(lVar6 + _DAT_113071b78,0);
  lVar4 = _DAT_113071b80;
  _swift_unknownObjectWeakInit(lVar6 + _DAT_113071b80,0);
  *(long *)(lVar6 + _DAT_113071b60) = param_1;
  *(undefined8 *)(lVar6 + _DAT_113071b68) = param_2;
  _swift_beginAccess(lVar6 + lVar2,auStack_78,1,0);
  _swift_unknownObjectWeakAssign(lVar6 + lVar2,param_3);
  _swift_beginAccess(lVar6 + lVar3,auStack_90,1,0);
  _swift_unknownObjectWeakAssign(lVar6 + lVar3,param_4);
  _swift_beginAccess(lVar6 + lVar4,auStack_a8,1,0);
  _swift_unknownObjectWeakAssign(lVar6 + lVar4,param_5);
  puVar1 = PTR_s_init_1125d9248;
  lStack_b8 = lVar6;
  lStack_b0 = lVar5;
  _objc_retain(param_1);
  _objc_retain(param_2);
  plVar7 = &lStack_b8;
  _objc_msgSendSuper2(plVar7,puVar1);
  aplStack_d0[0] = plVar7;
  func_0x00010008a7c8(&uStack_c0,aplStack_d0);
  func_0x000100083b20(aplStack_d0);
  _swift_release(uStack_c0);
  _swift_unknownObjectRelease(aplStack_d0[0]);
  return plVar7;
}



/* Entry: 104371af8; end: 104371bcf; -[_TtC24SCLensExplorerStoryScope32SCLensExplorerStoryScopeServices buildWithStoryInfo:storyConfiguration:baseView:sourceViewController:workflowDelegate:] */

void FUN_104371af8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _swift_unknownObjectRetain(param_7);
  _objc_retain(param_1);
  uVar1 = param_3;
  FUN_104371970(param_3,param_4,param_5,param_6,param_7);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(param_6);
  _swift_unknownObjectRelease(param_7);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104371bd0; end: 104371bfb; -[_TtC24SCLensExplorerStoryScope32SCLensExplorerStoryScopeServices init] */

void FUN_104371bd0(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCLensExplorerStoryScope.SCLensExplorerStoryScopeServices",0x39,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104371bfc);
  (*pcVar1)();
}



/* Entry: 104371bfc; end: 104371bff;  */

void FUN_104371bfc(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104371c00; end: 104371c33;  */

void FUN_104371c00(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104371c34; end: 104371c57; -[_TtC24SCLensExplorerStoryScope32SCLensExplorerStoryScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104371c34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113071b90));
  return;
}



/* Entry: 104371c58; end: 104371c6b; -[SCLensExplorerStoryConfiguration context] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104371c58(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113071be8);
}



/* Entry: 104371c6c; end: 104371d03; -[SCLensExplorerStoryConfiguration initWithContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104371c6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_113071be8) = param_3;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104371d04; end: 104371d4b; -[SCLensExplorerStoryConfiguration hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104371d04(long param_1)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(param_1 + _DAT_113071be8));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 104371d4c; end: 104371deb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_104371d4c(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  long lStack_58;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  lVar3 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_50);
  if (lStack_38 == 0) {
    func_0x00010006e7f4(auStack_50);
  }
  else {
    plVar4 = &lStack_58;
    _swift_dynamicCast(plVar4,auStack_50,PTR___sypN_11034f1a8 + 8,lVar3,6);
    if (((ulong)plVar4 & 1) != 0) {
      iVar1 = *(int *)(unaff_x20 + _DAT_113071be8);
      iVar2 = *(int *)(lStack_58 + _DAT_113071be8);
      _objc_release();
      return iVar1 == iVar2;
    }
  }
  return false;
}



/* Entry: 104371dec; end: 104371e6b; -[SCLensExplorerStoryConfiguration isEqual:] */

uint FUN_104371dec(undefined8 param_1,undefined8 param_2,long param_3)

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
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_40);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_104371d4c(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 104371e6c; end: 104371e6f; -[SCLensExplorerStoryConfiguration copyWithZone:] */

void FUN_104371e6c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104371e70; end: 104371e8b; -[SCLensExplorerStoryConfiguration description] */

void FUN_104371e70(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104371e8c; end: 104371f27; -[SCLensExplorerStoryConfiguration init] */

void FUN_104371e8c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCLensExplorerStoryScope/LensExplorerStoryConfigurationWrapper.swift",0x44,2,0x31,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104371ed4);
  (*pcVar1)();
}



/* Entry: 104371f28; end: 104371f2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104371f28(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113071be8) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104371f2c; end: 104371fd7;  */

void FUN_104371f2c(void)

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



/* Entry: 104371fd8; end: 104372017;  */

void FUN_104371fd8(undefined1 *param_1,long *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar2 = 1;
  if (*param_2 != 1) {
    uVar2 = 2;
  }
  uVar1 = 0;
  if (*param_2 != 0) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 104372018; end: 10437204b; -[SCLensExplorerStoryInfo description] */

void FUN_104372018(void)

{
  undefined1 auStack_40 [48];
  
  FUN_104372580(auStack_40);
  func_0x00010437254c(auStack_40);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10437204c; end: 104372093; -[SCLensExplorerStoryInfo init] */

void FUN_10437204c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCLensExplorerStoryScope/LensExplorerStoryInfoWrapper.swift",0x3b,2,0x2d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104372094);
  (*pcVar1)();
}



/* Entry: 104372094; end: 1043720c7; -[SCLensExplorerStoryInfo hash] */

undefined8 FUN_104372094(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1043720c8();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1043720c8; end: 104372323;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043720c8(void)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  uVar1 = (ulong)*(byte *)(unaff_x20 + _DAT_113071c18);
  __ss6HasherV8_combineyySuF(uVar1);
  if (*(long *)(unaff_x20 + _DAT_113071c20) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_1043728b8();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar1);
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_113071c28);
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF();
  }
  else {
    func_0x00010bfde980();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(lVar2);
  }
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 104372324; end: 1043723a3; -[SCLensExplorerStoryInfo isEqual:] */

uint FUN_104372324(undefined8 param_1,undefined8 param_2,long param_3)

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
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_40);
    _swift_unknownObjectRelease(param_3);
  }
  func_0x000104372194(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1043723a4; end: 1043723a7; -[SCLensExplorerStoryInfo copyWithZone:] */

void FUN_1043723a4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1043723a8; end: 10437241b; +[SCLensExplorerStoryInfo creatorStoryWithCreatorInfo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043723a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_113071c18) = 0;
  *(undefined8 *)(lVar2 + _DAT_113071c20) = param_3;
  *(undefined8 *)(lVar2 + _DAT_113071c28) = 0;
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



/* Entry: 10437241c; end: 104372493; +[SCLensExplorerStoryInfo storiesGroupWithDataSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10437241c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_113071c18) = 1;
  *(undefined8 *)(lVar2 + _DAT_113071c20) = 0;
  *(undefined8 *)(lVar2 + _DAT_113071c28) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _swift_unknownObjectRetain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104372494; end: 1043724df; -[SCLensExplorerStoryInfo matchCreatorStory:storiesGroup:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104372494(long param_1,undefined8 param_2,long param_3,long param_4)

{
  code *pcVar1;
  
  if (*(char *)(param_1 + _DAT_113071c18) == '\x01') {
    param_3 = param_4;
    if (*(long *)(param_1 + _DAT_113071c28) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1043724c0);
      (*pcVar1)();
    }
  }
  else if (*(long *)(param_1 + _DAT_113071c20) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1043724e0);
    (*pcVar1)();
  }
                    /* WARNING: Could not recover jumptable at 0x0001043724d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0x10))(param_3);
  return;
}



/* Entry: 1043724e0; end: 104372513;  */

void FUN_1043724e0(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}


