/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10436783c; end: 10436785b;  */

void FUN_10436783c(void)

{
  _objc_opt_self(&PTR_PTR_1129a0f40);
  return;
}



/* Entry: 10436785c; end: 10436786b; -[_TtC35LensPlusPaywallPresentationServices53SCSnapEditorScopedLensPlusPaywallPresentationServices lensPlusPaywallPresentationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10436785c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113070ff8));
  return;
}



/* Entry: 10436786c; end: 104367903;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10436786c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113070ff8) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104367904; end: 10436795b; -[_TtC35LensPlusPaywallPresentationServices53SCSnapEditorScopedLensPlusPaywallPresentationServices initWithLensPlusPaywallPresentationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104367904(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_113070ff8) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}



/* Entry: 10436795c; end: 1043679bb; -[_TtC35LensPlusPaywallPresentationServices53SCSnapEditorScopedLensPlusPaywallPresentationServices init] */

void FUN_10436795c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("LensPlusPaywallPresentationServices.SCSnapEditorScopedLensPlusPaywallPresentationServices"
             ,0x59,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104367988);
  (*pcVar1)();
}



/* Entry: 1043679bc; end: 1043679cb; -[_TtC35LensPlusPaywallPresentationServices53SCSnapEditorScopedLensPlusPaywallPresentationServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043679bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113070ff8));
  return;
}



/* Entry: 1043679cc; end: 1043679eb;  */

void FUN_1043679cc(void)

{
  _objc_opt_self(&PTR_PTR_1129a1000);
  return;
}



/* Entry: 1043679ec; end: 1043679fb; -[SCLensPlusPaywallPresenterContext activationSourceType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1043679ec(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113071028);
}



/* Entry: 1043679fc; end: 104367a0b; -[SCLensPlusPaywallPresenterContext sourcePageType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1043679fc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113071030);
}



/* Entry: 104367a0c; end: 104367a17; -[SCLensPlusPaywallPresenterContext categoryId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104367a0c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113071038))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113071038);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104367a18; end: 104367a23; -[SCLensPlusPaywallPresenterContext rankingRequestId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104367a18(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113071040))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113071040);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104367a24; end: 104367a33; -[SCLensPlusPaywallPresenterContext lensPosition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104367a24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113071048));
  return;
}



/* Entry: 104367a34; end: 104367a43; -[SCLensPlusPaywallPresenterContext isFreemiumExhausted] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104367a34(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113071050);
}



/* Entry: 104367a44; end: 104367a4f; -[SCLensPlusPaywallPresenterContext freemiumGroup] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104367a44(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113071058))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113071058);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104367a50; end: 104367a5b; -[SCLensPlusPaywallPresenterContext source] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104367a50(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113071060))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113071060);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104367a5c; end: 104367a67; -[SCLensPlusPaywallPresenterContext lensSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104367a5c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113071068))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113071068);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104367a68; end: 104367abf;  */

void FUN_104367a68(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 104367ac0; end: 104367d17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104367ac0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113071028) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113071030) = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113071038);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113071040);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_113071048) = param_7;
  *(undefined1 *)(unaff_x20 + _DAT_113071050) = param_8;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113071058);
  *puVar1 = param_9;
  puVar1[1] = param_10;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113071060);
  *puVar1 = param_11;
  puVar1[1] = param_12;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113071068);
  *puVar1 = param_13;
  puVar1[1] = param_14;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104367d18; end: 104367e6b; -[SCLensPlusPaywallPresenterContext initWithActivationSourceType:sourcePageType:categoryId:rankingRequestId:lensPosition:isFreemiumExhausted:freemiumGroup:source:lensSource:] */

void FUN_104367d18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6,undefined8 param_7,undefined4 param_8,long param_9,
                  long param_10,long param_11)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  if (param_5 == 0) {
    uStack_90 = 0;
    uStack_88 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uStack_90 = param_2;
    uStack_88 = param_5;
  }
  if (param_6 == 0) {
    param_6 = 0;
    uVar2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_6);
    uVar2 = param_2;
  }
  if (param_9 == 0) {
    param_9 = 0;
    uVar5 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uVar5 = param_2;
  }
  _objc_retain(param_7);
  lVar3 = param_10;
  _objc_retain();
  lVar4 = param_11;
  _objc_retain();
  if (lVar3 == 0) {
    param_10 = 0;
    uVar1 = 0;
    uVar6 = param_2;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uVar6 = param_2;
    _objc_release(lVar3);
    uVar1 = param_2;
  }
  if (lVar4 == 0) {
    param_11 = 0;
    uVar6 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(lVar4);
  }
  func_0x000104367bec(param_3,param_4,uStack_88,uStack_90,param_6,uVar2,param_7,param_8,param_9,
                      uVar5,param_10,uVar1,param_11,uVar6);
  return;
}



/* Entry: 104367e6c; end: 104367eab;  */

undefined8 FUN_104367e6c(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_allocWithZone();
  uVar1 = param_1;
  FUN_104367fec(param_1);
  func_0x00010369e92c(param_1);
  return uVar1;
}



/* Entry: 104367eac; end: 104367eaf; -[SCLensPlusPaywallPresenterContext copyWithZone:] */

void FUN_104367eac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104367eb0; end: 104367ee3; -[SCLensPlusPaywallPresenterContext description] */

void FUN_104367eb0(void)

{
  undefined1 auStack_80 [112];
  
  FUN_104368164(auStack_80);
  func_0x00010369e92c(auStack_80);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104367ee4; end: 104367f5f; -[SCLensPlusPaywallPresenterContext init] */

void FUN_104367ee4(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "LensPlusPaywallPresentationServices/LensPlusPaywallPresenterContextWrapper.swift",0x50
             ,2,0x4e,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104367f2c);
  (*pcVar1)();
}



/* Entry: 104367f60; end: 104367feb; -[SCLensPlusPaywallPresenterContext .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104367f60(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113071038 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113071040 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113071048));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113071058 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113071060 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113071068 + 8))
  ;
  return;
}



/* Entry: 104367fec; end: 104368163;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104367fec(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _swift_getObjectType();
  uVar2 = param_1[1];
  *(undefined8 *)(unaff_x20 + _DAT_113071028) = *param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113071030) = uVar2;
  uStack_38 = param_1[3];
  uStack_40 = param_1[2];
  uStack_48 = param_1[5];
  uStack_50 = param_1[4];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113071038);
  puVar1[1] = uStack_38;
  *puVar1 = uStack_40;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113071040);
  puVar1[1] = uStack_48;
  *puVar1 = uStack_50;
  uStack_58 = param_1[6];
  *(undefined8 *)(unaff_x20 + _DAT_113071048) = uStack_58;
  *(undefined1 *)(unaff_x20 + _DAT_113071050) = *(undefined1 *)(param_1 + 7);
  uStack_68 = param_1[9];
  uStack_70 = param_1[8];
  uStack_78 = param_1[0xb];
  uStack_80 = param_1[10];
  uVar4 = param_1[8];
  uVar3 = param_1[0xb];
  uVar2 = param_1[10];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113071058);
  puVar1[1] = param_1[9];
  *puVar1 = uVar4;
  uStack_88 = param_1[0xd];
  uStack_90 = param_1[0xc];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113071060);
  puVar1[1] = uVar3;
  *puVar1 = uVar2;
  uVar2 = param_1[0xc];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113071068);
  puVar1[1] = param_1[0xd];
  *puVar1 = uVar2;
  FUN_104368280(&uStack_40,auStack_a0,0x112d35ff8,&UNK_10d900cd0);
  FUN_104368280(&uStack_50,auStack_a0,0x112d35ff8,&UNK_10d900cd0);
  FUN_104368280(&uStack_58,auStack_a0,0x112dc3de0,&UNK_10d9813c0);
  FUN_104368280(&uStack_70,auStack_a0,0x112d35ff8,&UNK_10d900cd0);
  FUN_104368280(&uStack_80,auStack_a0,0x112d35ff8,&UNK_10d900cd0);
  FUN_104368280(&uStack_90,auStack_a0,0x112d35ff8,&UNK_10d900cd0);
  _objc_msgSendSuper2(&stack0xffffffffffffff50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104368164; end: 10436825f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104368164(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  uVar7 = *(undefined8 *)(param_2 + _DAT_113071030);
  puVar1 = (undefined8 *)(param_2 + _DAT_113071038);
  puVar2 = (undefined8 *)(param_2 + _DAT_113071040);
  uVar8 = *(undefined8 *)(param_2 + _DAT_113071048);
  uVar6 = *(undefined1 *)(param_2 + _DAT_113071050);
  puVar3 = (undefined8 *)(param_2 + _DAT_113071058);
  puVar4 = (undefined8 *)(param_2 + _DAT_113071060);
  puVar5 = (undefined8 *)(param_2 + _DAT_113071068);
  *param_1 = *(undefined8 *)(param_2 + _DAT_113071028);
  param_1[1] = uVar7;
  uVar7 = puVar1[1];
  uVar10 = *puVar1;
  uVar9 = puVar2[1];
  uVar12 = puVar2[1];
  uVar11 = *puVar2;
  param_1[3] = puVar1[1];
  param_1[2] = uVar10;
  param_1[5] = uVar12;
  param_1[4] = uVar11;
  param_1[6] = uVar8;
  *(undefined1 *)(param_1 + 7) = uVar6;
  uVar10 = puVar3[1];
  uVar12 = *puVar3;
  uVar11 = puVar4[1];
  uVar14 = puVar4[1];
  uVar13 = *puVar4;
  param_1[9] = puVar3[1];
  param_1[8] = uVar12;
  param_1[0xb] = uVar14;
  param_1[10] = uVar13;
  uVar12 = puVar5[1];
  uVar13 = *puVar5;
  param_1[0xd] = puVar5[1];
  param_1[0xc] = uVar13;
  _swift_bridgeObjectRetain(uVar7);
  _swift_bridgeObjectRetain(uVar9);
  _objc_retain(uVar8);
  _swift_bridgeObjectRetain(uVar10);
  _swift_bridgeObjectRetain(uVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar12);
  return;
}



/* Entry: 104368260; end: 10436827f;  */

void FUN_104368260(void)

{
  _objc_opt_self(&PTR_PTR_1129a10c0);
  return;
}



/* Entry: 104368280; end: 1043682c7;  */

undefined8 FUN_104368280(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1043682c8; end: 10436835b; -[FriendsFeedGamesPresenceButtonScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043682c8(long param_1)

{
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_113071098));
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130710a0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc05f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakDestroy_11034f580)(param_1 + _DAT_1130710a8);
  return;
}



/* Entry: 10436835c; end: 1043683c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10436835c(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_10436862c();
  lVar1 = param_2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar1 + _DAT_1130710b8) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  _objc_msgSendSuper2(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1043683c4; end: 10436840f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043683c4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130710b8) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104368410; end: 104368517;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_104368410(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *aplStack_90 [2];
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  lVar3 = param_1;
  FUN_1043685b4();
  lVar4 = lVar3;
  _objc_allocWithZone();
  lVar2 = _DAT_1130710a8;
  _swift_unknownObjectWeakInit(lVar4 + _DAT_1130710a8,0);
  *(long *)(lVar4 + _DAT_113071098) = param_1;
  *(undefined8 *)(lVar4 + _DAT_1130710a0) = param_2;
  _swift_beginAccess(lVar4 + lVar2,auStack_68,1,0);
  _swift_unknownObjectWeakAssign(lVar4 + lVar2,param_3);
  puVar1 = PTR_s_init_1125d9248;
  lStack_78 = lVar4;
  lStack_70 = lVar3;
  _swift_unknownObjectRetain(param_1);
  _objc_retain(param_2);
  plVar5 = &lStack_78;
  _objc_msgSendSuper2(plVar5,puVar1);
  aplStack_90[0] = plVar5;
  func_0x00010008a7c8(&uStack_80,aplStack_90);
  func_0x000100083b20(aplStack_90);
  _swift_release(uStack_80);
  _swift_unknownObjectRelease(aplStack_90[0]);
  return plVar5;
}



/* Entry: 104368518; end: 1043685b3; -[_TtC35FriendsFeedGamesPresenceButtonScope43FriendsFeedGamesPresenceButtonScopeServices buildWithViewContainer:paramsObservable:baseViewController:] */

void FUN_104368518(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_4);
  uVar1 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_1);
  uVar2 = param_3;
  FUN_104368410(param_3,param_4,param_5);
  _swift_unknownObjectRelease(param_3);
  _objc_release(param_4);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1043685b4; end: 1043685d3;  */

void FUN_1043685b4(void)

{
  _objc_opt_self(&PTR_PTR_1129a11c8);
  return;
}



/* Entry: 1043685d4; end: 1043685d7;  */

void FUN_1043685d4(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1043685d8; end: 10436860b;  */

void FUN_1043685d8(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10436860c; end: 10436862b; -[_TtC35FriendsFeedGamesPresenceButtonScope43FriendsFeedGamesPresenceButtonScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10436860c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_1130710b8));
  return;
}



/* Entry: 10436862c; end: 10436864b;  */

void FUN_10436862c(void)

{
  _objc_opt_self(&PTR_PTR_1129a1298);
  return;
}



/* Entry: 10436864c; end: 10436864f;  */

void FUN_10436864c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104368650; end: 10436869b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104368650(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113071110) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10436869c; end: 1043686fb; -[_TtC26NativeConversationServices26NativeConversationServices init] */

void FUN_10436869c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("NativeConversationServices.NativeConversationServices",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1043686c8);
  (*pcVar1)();
}



/* Entry: 1043686fc; end: 10436870b; -[_TtC26NativeConversationServices26NativeConversationServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043686fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113071110));
  return;
}



/* Entry: 10436870c; end: 10436871b; -[_TtC25SCLensActivityCenterScope25SCLensActivityCenterScope modalUIContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10436870c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113071140));
  return;
}



/* Entry: 10436871c; end: 104368763; -[_TtC25SCLensActivityCenterScope25SCLensActivityCenterScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10436871c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113071148;
  _swift_beginAccess(param_1 + _DAT_113071148,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104368764; end: 1043687bb; -[_TtC25SCLensActivityCenterScope25SCLensActivityCenterScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104368764(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113071148;
  _swift_beginAccess(param_1 + _DAT_113071148,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1043687bc; end: 1043687cb; -[_TtC25SCLensActivityCenterScope25SCLensActivityCenterScope wasEntrypointBadged] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1043687bc(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113071150);
}



/* Entry: 1043687cc; end: 104368827; -[_TtC25SCLensActivityCenterScope25SCLensActivityCenterScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1043687cc(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113071140));
  param_1 = param_1 + _DAT_113071148;
  _swift_unknownObjectWeakDestroy();
  return param_1;
}



/* Entry: 104368828; end: 10436888f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104368828(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x00010037b360();
  lVar1 = param_2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar1 + _DAT_113071160) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  _objc_msgSendSuper2(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 104368890; end: 1043688db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104368890(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113071160) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1043688dc; end: 1043689db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1043688dc(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *aplStack_90 [2];
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  lVar3 = param_1;
  func_0x00010037a04c();
  lVar4 = lVar3;
  _objc_allocWithZone();
  lVar2 = _DAT_113071148;
  _swift_unknownObjectWeakInit(lVar4 + _DAT_113071148,0);
  *(long *)(lVar4 + _DAT_113071140) = param_1;
  _swift_beginAccess(lVar4 + lVar2,auStack_68,1,0);
  _swift_unknownObjectWeakAssign(lVar4 + lVar2,param_2);
  *(undefined1 *)(lVar4 + _DAT_113071150) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_78 = lVar4;
  lStack_70 = lVar3;
  _objc_retain(param_1);
  plVar5 = &lStack_78;
  _objc_msgSendSuper2(plVar5,puVar1);
  aplStack_90[0] = plVar5;
  func_0x00010008a7c8(&uStack_80,aplStack_90);
  func_0x000100083b20(aplStack_90);
  _swift_release(uStack_80);
  _swift_unknownObjectRelease(aplStack_90[0]);
  return plVar5;
}



/* Entry: 1043689dc; end: 1043689df;  */

void FUN_1043689dc(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1043689e0; end: 104368a13;  */

void FUN_1043689e0(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104368a14; end: 104368a37; -[_TtC25SCLensActivityCenterScope33SCLensActivityCenterScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104368a14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113071160));
  return;
}



/* Entry: 104368a38; end: 104368a63; +[SCLensExplorerQuerySource lenses] */

void FUN_104368a38(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f1f8020);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104368a64; end: 104368a67;  */

void FUN_104368a64(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104368a68; end: 104368a77; -[SCLensExplorerQuerySource .cxx_destruct] */

void FUN_104368a68(void)

{
  return;
}



/* Entry: 104368a78; end: 104368aa3; +[SCLensExplorerLensQueryType open] */

void FUN_104368a78(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f1f8040);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104368aa4; end: 104368aaf;  */

undefined * FUN_104368aa4(void)

{
  return &UNK_11075f428;
}



/* Entry: 104368ab0; end: 104368adb; +[SCLensExplorerLensQueryType scroll] */

void FUN_104368ab0(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000017,0x800000010f1f8060);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104368adc; end: 104368b07; +[SCLensExplorerLensQueryType refresh] */

void FUN_104368adc(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000018,0x800000010f1f8080);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104368b08; end: 104368b0b; -[SCLensExplorerLensQueryType .cxx_destruct] */

void FUN_104368b08(void)

{
  return;
}



/* Entry: 104368b0c; end: 104368b37; +[SCLensExplorerLensActionType viewLens] */

void FUN_104368b0c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6e656c5f77656976,0xe900000000000073);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104368b38; end: 104368b63; +[SCLensExplorerLensActionType viewLensCollection] */

void FUN_104368b38(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f1f80a0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104368b64; end: 104368b97; +[SCLensExplorerLensActionType viewLensTopic] */

void FUN_104368b64(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6e656c5f77656976,0xef6369706f745f73);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104368b98; end: 104368bc3; +[SCLensExplorerLensActionType filterByCreator] */

void FUN_104368b98(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000018,0x800000010f1f80c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104368bc4; end: 104368bef; +[SCLensExplorerLensActionType viewDebug] */

void FUN_104368bc4(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6265645f77656976,0xea00000000006775);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104368bf0; end: 104368c1b; +[SCLensExplorerLensActionType viewStory] */

void FUN_104368bf0(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6f74735f77656976,0xea00000000007972);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104368c1c; end: 104368c47; +[SCLensExplorerLensActionType viewFavoritesPage] */

void FUN_104368c1c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f1f80e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104368c48; end: 104368c73; +[SCLensExplorerLensActionType viewFavoritesOnboarding] */

void FUN_104368c48(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019,0x800000010f1f8100);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104368c74; end: 104368c9f; +[SCLensExplorerLensActionType viewSubscriptionsPage] */

void FUN_104368c74(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000017,0x800000010f1f8120);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104368ca0; end: 104368ccb; +[SCLensExplorerLensActionType viewFeedFullPage] */

void FUN_104368ca0(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f1f8140);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104368ccc; end: 104368cf7; +[SCLensExplorerLensActionType viewDebugSection] */

void FUN_104368ccc(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f1f8160);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104368cf8; end: 104368d23; +[SCLensExplorerLensActionType longPress] */

void FUN_104368cf8(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6572705f676e6f6c,0xea00000000007373);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104368d24; end: 104368d4f; +[SCLensExplorerLensActionType sectionHeaderPress] */

void FUN_104368d24(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f1f8180);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104368d50; end: 104368d7b; +[SCLensExplorerLensActionType deepLinkHeroTilePress] */

void FUN_104368d50(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000018,0x800000010f1f81a0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104368d7c; end: 104368d8b; -[SCLensExplorerLensActionType .cxx_destruct] */

void FUN_104368d7c(void)

{
  return;
}



/* Entry: 104368d8c; end: 104368db7; +[SCLensExplorerSectionIdentifier chatDrawerGames] */

void FUN_104368d8c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x800000010f1f81c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104368db8; end: 104368dbb; -[SCLensExplorerSectionIdentifier .cxx_destruct] */

void FUN_104368db8(void)

{
  return;
}



/* Entry: 104368dbc; end: 104368def; +[SCLensExplorerPageTypeSpecific snapPro] */

void FUN_104368dbc(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f726f7461657263,0xef656c69666f7270);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104368df0; end: 104368df3; -[SCLensExplorerPageTypeSpecific .cxx_destruct] */

void FUN_104368df0(void)

{
  return;
}



/* Entry: 104368df4; end: 104368e1f; +[SCLensExplorerSectionSupplmentaryReuseIdentifier sectionHeaderReuseIdentifier] */

void FUN_104368df4(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001e,0x800000010f1f81e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104368e20; end: 104368e4b; +[SCLensExplorerSectionSupplmentaryReuseIdentifier sectionFavoritesOnboardingHeaderReuseIdentifier] */

void FUN_104368e20(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000033,0x800000010f1f8200);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104368e4c; end: 104368e4f; -[SCLensExplorerSectionSupplmentaryReuseIdentifier .cxx_destruct] */

void FUN_104368e4c(void)

{
  return;
}



/* Entry: 104368e50; end: 104368e7b; +[SCLensExplorerSectionSupplmentaryKind sectionDebugView] */

void FUN_104368e50(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f1f8240);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104368e7c; end: 104368ea7; +[SCLensExplorerSectionSupplmentaryKind favoritesOnboardingHeaderKind] */

void FUN_104368e7c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000021,0x800000010f1f8260);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104368ea8; end: 104368ed3; +[SCLensExplorerSectionSupplmentaryKind sectionHeaderKind] */

void FUN_104368ea8(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f1f8290);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104368ed4; end: 104368eff; +[SCLensExplorerSectionSupplmentaryKind actionableSectionHeaderKind] */

void FUN_104368ed4(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001e,0x800000010f1f82b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104368f00; end: 104368f3b;  */

void FUN_104368f00(undefined8 param_1)

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



/* Entry: 104368f3c; end: 104368f6f;  */

void FUN_104368f3c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104368f70; end: 104368f73; -[SCLensExplorerSectionSupplmentaryKind .cxx_destruct] */

void FUN_104368f70(void)

{
  return;
}



/* Entry: 104368f74; end: 104369053;  */

void FUN_104368f74(void)

{
  _objc_opt_self(&PTR_PTR_1129a15a8);
  return;
}



/* Entry: 104369054; end: 104369057; -[SCLensExplorerLensQueryType init] */

void FUN_104369054(undefined8 param_1)

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



/* Entry: 104369058; end: 10436905b; -[SCLensExplorerQuerySource init] */

void FUN_104369058(undefined8 param_1)

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



/* Entry: 10436905c; end: 10436905f; -[SCLensExplorerLensActionType init] */

void FUN_10436905c(undefined8 param_1)

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



/* Entry: 104369060; end: 104369063; -[SCLensExplorerSectionIdentifier init] */

void FUN_104369060(undefined8 param_1)

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



/* Entry: 104369064; end: 104369067; -[SCLensExplorerPageTypeSpecific init] */

void FUN_104369064(undefined8 param_1)

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



/* Entry: 104369068; end: 10436906b; -[SCLensExplorerSectionSupplmentaryReuseIdentifier init] */

void FUN_104369068(undefined8 param_1)

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



/* Entry: 10436906c; end: 10436909f; -[SCLensExplorerSectionSupplmentaryKind init] */

void FUN_10436906c(undefined8 param_1)

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



/* Entry: 1043690a0; end: 1043690df;  */

void FUN_1043690a0(void)

{
  undefined *puVar1;
  
  if (puRam00000001130712d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcef860;
  _swift_getWitnessTable(&UNK_10dcef860,&UNK_11075f458);
  puRam00000001130712d0 = puVar1;
  return;
}



/* Entry: 1043690e0; end: 10436918b;  */

void FUN_1043690e0(void)

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


