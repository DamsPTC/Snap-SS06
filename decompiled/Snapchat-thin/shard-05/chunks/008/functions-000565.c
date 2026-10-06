/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10427464c; end: 1042746cb; -[SCAdRankingViewDuration isEqual:] */

uint FUN_10427464c(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1042744ec(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1042746cc; end: 1042746cf; -[SCAdRankingViewDuration copyWithZone:] */

void FUN_1042746cc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1042746d0; end: 1042746fb; -[SCAdRankingViewDuration description] */

void FUN_1042746d0(void)

{
  undefined1 auStack_48 [56];
  
  FUN_104274778(auStack_48);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1042746fc; end: 104274777; -[SCAdRankingViewDuration init] */

void FUN_1042746fc(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataServices/AdRankingViewDurationWrapper.swift",0x31,2,0x54,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104274744);
  (*pcVar1)();
}



/* Entry: 104274778; end: 1042747df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104274778(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *(undefined8 *)(param_2 + _DAT_11306a0a0);
  uVar2 = *(undefined8 *)(param_2 + _DAT_11306a0a8);
  uVar3 = *(undefined8 *)(param_2 + _DAT_11306a0b0);
  uVar4 = *(undefined8 *)(param_2 + _DAT_11306a0b8);
  uVar5 = *(undefined8 *)(param_2 + _DAT_11306a0c0);
  uVar6 = *(undefined8 *)(param_2 + _DAT_11306a0c8);
  *param_1 = *(undefined8 *)(param_2 + _DAT_11306a098);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  param_1[6] = uVar6;
  return;
}



/* Entry: 1042747e0; end: 1042747ff;  */

void FUN_1042747e0(void)

{
  _objc_opt_self(&PTR_PTR_112991b60);
  return;
}



/* Entry: 104274800; end: 10427485b; -[SCAdResponseUpdate updatedAdRequestClientId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104274800(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11306a0f8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11306a0f8);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10427485c; end: 10427486b; -[SCAdResponseUpdate adResponse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10427485c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306a100));
  return;
}



/* Entry: 10427486c; end: 1042748d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10427486c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306a0f8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11306a100) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1042748d8; end: 104274967; -[SCAdResponseUpdate initWithUpdatedAdRequestClientId:adResponse:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042748d8(long param_1,long param_2,long param_3,undefined8 param_4)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_40;
  long lStack_38;
  
  lVar3 = param_1;
  _swift_getObjectType();
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_11306a0f8);
  *plVar1 = param_3;
  plVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_11306a100) = param_4;
  puVar2 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar3;
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_40,puVar2);
  return;
}



/* Entry: 104274968; end: 104274997;  */

void FUN_104274968(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_104274998(param_1);
  return;
}



/* Entry: 104274998; end: 104274b5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_104274998(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long unaff_x20;
  undefined1 *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  _swift_getObjectType();
  lVar2 = 0;
  func_0x000100b91d00();
  lVar8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  puVar4 = &stack0xffffffffffffff90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = (long)puVar4 - extraout_x12;
  lVar3 = 0x112dbe418;
  func_0x0001000285a8(0x112dbe418,&UNK_10d990420);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = lVar5 - extraout_x8_00;
  uVar6 = param_1[1];
  uVar9 = *param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306a0f8);
  puVar1[1] = param_1[1];
  *puVar1 = uVar9;
  lVar3 = 0;
  FUN_1041fc9fc();
  func_0x000101685588((long)param_1 + (long)*(int *)(lVar3 + 0x14),lVar7);
  lVar3 = lVar7;
  (**(code **)(lVar8 + 0x30))(lVar7,1,lVar2);
  if ((int)lVar3 == 1) {
    _swift_bridgeObjectRetain(uVar6);
    puVar4 = (undefined1 *)0x0;
  }
  else {
    func_0x0001016855d8(lVar7,lVar5);
    func_0x000101681be8(lVar5,puVar4);
    func_0x0001047c0984(0);
    _objc_allocWithZone();
    _swift_bridgeObjectRetain(uVar6);
    func_0x0001047b952c();
    FUN_104274b5c(lVar5,&SUB_100b91d00);
  }
  *(undefined1 **)(unaff_x20 + _DAT_11306a100) = puVar4;
  puVar4 = &stack0xffffffffffffff90;
  _objc_msgSendSuper2(puVar4,PTR_s_init_1125d9248);
  FUN_104274b5c(param_1,FUN_1041fc9fc);
  return puVar4;
}



/* Entry: 104274b5c; end: 104274b97;  */

undefined8 FUN_104274b5c(undefined8 param_1,code *param_2)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_2)();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 104274b98; end: 104274b9b; -[SCAdResponseUpdate copyWithZone:] */

void FUN_104274b98(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104274b9c; end: 104274cd3; -[SCAdResponseUpdate description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104274b9c(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long extraout_x8;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar2 = 0;
  FUN_1041fc9fc();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar5 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar3 = (undefined8 *)(&stack0xffffffffffffffc0 + lVar5);
  puVar1 = (undefined8 *)(param_1 + _DAT_11306a0f8);
  uVar4 = puVar1[1];
  uVar6 = *puVar1;
  *(undefined8 *)(&stack0xffffffffffffffc8 + lVar5) = puVar1[1];
  *puVar3 = uVar6;
  lVar2 = (long)*(int *)(lVar2 + 0x14);
  lVar5 = *(long *)(param_1 + _DAT_11306a100);
  if (lVar5 == 0) {
    lVar5 = 0;
    func_0x000100b91d00();
    (**(code **)(*(long *)(lVar5 + -8) + 0x38))((undefined1 *)((long)puVar3 + lVar2),1,1,lVar5);
    _swift_bridgeObjectRetain(uVar4);
    _objc_retain(param_1);
  }
  else {
    _swift_bridgeObjectRetain(uVar4);
    _objc_retain(lVar5);
    _objc_retain(param_1);
    func_0x0001047b6fb0((undefined1 *)((long)puVar3 + lVar2),lVar5);
    lVar5 = 0;
    func_0x000100b91d00();
    (**(code **)(*(long *)(lVar5 + -8) + 0x38))((undefined1 *)((long)puVar3 + lVar2),0,1,lVar5);
  }
  FUN_104274b5c(puVar3,FUN_1041fc9fc);
  _objc_release(param_1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104274cd4; end: 104274d4f; -[SCAdResponseUpdate init] */

void FUN_104274cd4(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"AdDataServices/AdResponseUpdateWrapper.swift"
             ,0x2c,2,0x29,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104274d1c);
  (*pcVar1)();
}



/* Entry: 104274d50; end: 104274d8b; -[SCAdResponseUpdate .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104274d50(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306a0f8 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11306a100));
  return;
}



/* Entry: 104274d8c; end: 104274dab;  */

void FUN_104274d8c(void)

{
  _objc_opt_self(&PTR_PTR_112991c58);
  return;
}



/* Entry: 104274dac; end: 104274dff; -[SCAdServeInventory adIdentifiers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104274dac(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_11306a130);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
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



/* Entry: 104274e00; end: 104274e0f; -[SCAdServeInventory targetingParameters] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104274e00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306a138));
  return;
}



/* Entry: 104274e10; end: 104274e1f; -[SCAdServeInventory isAdPositionSensitive] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104274e10(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306a140);
}



/* Entry: 104274e20; end: 104274e93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104274e20(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306a130) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11306a138) = param_2;
  *(undefined1 *)(unaff_x20 + _DAT_11306a140) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104274e94; end: 104274f3b; -[SCAdServeInventory initWithAdIdentifiers:targetingParameters:isAdPositionSensitive:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104274e94(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  _swift_getObjectType();
  if (param_3 == 0) {
    param_3 = 0;
  }
  else {
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
              (param_3,PTR___sSSN_11034da80);
  }
  *(long *)(param_1 + _DAT_11306a130) = param_3;
  *(undefined8 *)(param_1 + _DAT_11306a138) = param_4;
  *(undefined1 *)(param_1 + _DAT_11306a140) = param_5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_50,puVar1);
  return;
}



/* Entry: 104274f3c; end: 10427506f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104274f3c(undefined8 *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_478 [352];
  undefined1 auStack_318 [8];
  undefined8 uStack_308;
  undefined1 auStack_300 [352];
  undefined1 auStack_1a0 [352];
  
  _objc_allocWithZone();
  uStack_308 = *param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11306a130) = uStack_308;
  _memcpy(auStack_1a0,param_1 + 1,0x160);
  iVar1 = (int)auStack_1a0;
  func_0x000101542f6c();
  if (iVar1 == 1) {
    func_0x000104275258(&uStack_308,auStack_300,0x112d445a8,&UNK_10d990150);
    puVar2 = (undefined1 *)0x0;
  }
  else {
    _memcpy(auStack_300,auStack_1a0,0x160);
    func_0x000104821150(0);
    _objc_allocWithZone();
    func_0x000104275258(&uStack_308,auStack_478,0x112d445a8,&UNK_10d990150);
    func_0x000104275258(auStack_1a0,auStack_478,0x112db3a28,&UNK_10d95ddb0);
    puVar2 = auStack_300;
    func_0x00010481e13c();
  }
  *(undefined1 **)(unaff_x20 + _DAT_11306a138) = puVar2;
  func_0x000104275224(param_1);
  *(undefined1 *)(unaff_x20 + _DAT_11306a140) = *(undefined1 *)(param_1 + 0x2d);
  _objc_msgSendSuper2(auStack_318,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104275070; end: 104275073; -[SCAdServeInventory copyWithZone:] */

void FUN_104275070(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104275074; end: 1042750bf; -[SCAdServeInventory description] */

void FUN_104275074(undefined8 param_1)

{
  undefined1 auStack_190 [368];
  
  _objc_retain();
  FUN_104275174(auStack_190);
  _objc_release(param_1);
  FUN_104275224(auStack_190);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1042750c0; end: 10427513b; -[SCAdServeInventory init] */

void FUN_1042750c0(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"AdDataServices/AdServeInventoryWrapper.swift"
             ,0x2c,2,0x2d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104275108);
  (*pcVar1)();
}



/* Entry: 10427513c; end: 104275173; -[SCAdServeInventory .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10427513c(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306a130));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11306a138));
  return;
}



/* Entry: 104275174; end: 104275223;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104275174(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uStack_1b0;
  undefined1 auStack_1a8 [352];
  undefined1 uStack_48;
  
  uVar1 = *(undefined8 *)(param_2 + _DAT_11306a130);
  lVar2 = *(long *)(param_2 + _DAT_11306a138);
  uStack_1b0 = uVar1;
  if (lVar2 == 0) {
    func_0x000102d123c4(auStack_1a8);
    _swift_bridgeObjectRetain(uVar1);
  }
  else {
    _swift_bridgeObjectRetain(uVar1);
    _objc_retain(lVar2);
    func_0x00010481c368(auStack_1a8);
    func_0x000102d123f8(auStack_1a8);
  }
  uStack_48 = *(undefined1 *)(param_2 + _DAT_11306a140);
  _memcpy(param_1,&uStack_1b0,0x169);
  return;
}



/* Entry: 104275224; end: 10427529f;  */

undefined8 FUN_104275224(undefined8 param_1)

{
  (*(code *)(undefined *)0x1042047c0)();
  return param_1;
}



/* Entry: 1042752a0; end: 1042752bf;  */

void FUN_1042752a0(void)

{
  _objc_opt_self(&PTR_PTR_112991d28);
  return;
}



/* Entry: 1042752c0; end: 10427533b;  */

undefined8 FUN_1042752c0(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_allocWithZone();
  uVar1 = param_1;
  FUN_1042763f0(param_1);
  func_0x0001018ce68c(param_1);
  return uVar1;
}



/* Entry: 10427533c; end: 10427534f; -[SCAdServeRequestMetadata inventories] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10427533c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_11306a170);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    FUN_1042752a0(0);
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



/* Entry: 104275350; end: 10427535f; -[SCAdServeRequestMetadata productType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104275350(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306a178);
}



/* Entry: 104275360; end: 10427536f; -[SCAdServeRequestMetadata isAdDisabledInHoldout] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104275360(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306a180);
}



/* Entry: 104275370; end: 10427537f; -[SCAdServeRequestMetadata isAdDisabledFromServer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104275370(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306a188);
}



/* Entry: 104275380; end: 10427538f; -[SCAdServeRequestMetadata adsPreferences] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104275380(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306a190));
  return;
}



/* Entry: 104275390; end: 10427539f; -[SCAdServeRequestMetadata adEngagementSignal] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104275390(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306a198));
  return;
}



/* Entry: 1042753a0; end: 1042753ab; -[SCAdServeRequestMetadata protoServeURL] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042753a0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11306a1a0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11306a1a0);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1042753ac; end: 1042753bb; -[SCAdServeRequestMetadata loggingContext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042753ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306a1a8));
  return;
}



/* Entry: 1042753bc; end: 1042753cb; -[SCAdServeRequestMetadata shouldSendLocationData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1042753bc(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306a1b0);
}



/* Entry: 1042753cc; end: 1042753db; -[SCAdServeRequestMetadata locationLatitude] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1042753cc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306a1b8);
}



/* Entry: 1042753dc; end: 1042753eb; -[SCAdServeRequestMetadata locationLongitude] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1042753dc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306a1c0);
}



/* Entry: 1042753ec; end: 1042753fb; -[SCAdServeRequestMetadata locationAccuracyInMeters] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1042753ec(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306a1c8);
}



/* Entry: 1042753fc; end: 10427540b; -[SCAdServeRequestMetadata locationCapturedTimestampMillis] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1042753fc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306a1d0);
}



/* Entry: 10427540c; end: 10427541b; -[SCAdServeRequestMetadata enableMockAdServer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10427540c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306a1d8);
}



/* Entry: 10427541c; end: 10427542b; -[SCAdServeRequestMetadata isDebugRequest] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10427541c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306a1e0);
}



/* Entry: 10427542c; end: 10427543b; -[SCAdServeRequestMetadata filledAdTTLInMillis] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10427542c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306a1e8);
}



/* Entry: 10427543c; end: 10427544b; -[SCAdServeRequestMetadata noFillAdTTLInMillis] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10427543c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306a1f0);
}



/* Entry: 10427544c; end: 10427545b; -[SCAdServeRequestMetadata backupAdTTLInMillis] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10427544c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306a1f8);
}



/* Entry: 10427545c; end: 10427546b; -[SCAdServeRequestMetadata eligibleForNewEUD] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10427545c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306a200);
}



/* Entry: 10427546c; end: 104275477; -[SCAdServeRequestMetadata said] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10427546c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11306a208))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11306a208);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104275478; end: 10427548b; -[SCAdServeRequestMetadata viewingSessionRecords] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104275478(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_11306a210);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    FUN_10427a344(0);
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



/* Entry: 10427548c; end: 10427549b; -[SCAdServeRequestMetadata viewLocation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10427548c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306a218));
  return;
}



/* Entry: 10427549c; end: 1042754ab; -[SCAdServeRequestMetadata enablePopulatingDiskBatteryInAdRequest] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10427549c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306a220);
}



/* Entry: 1042754ac; end: 1042754bb; -[SCAdServeRequestMetadata updateServeURLWithInventoryType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1042754ac(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306a228);
}



/* Entry: 1042754bc; end: 1042754cb; -[SCAdServeRequestMetadata enableAllUpdatesDeprecation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1042754bc(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306a230);
}



/* Entry: 1042754cc; end: 1042754d7; -[SCAdServeRequestMetadata maxSKAdNetworkClickSupportedVersion] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042754cc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11306a238))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11306a238);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1042754d8; end: 1042754e3; -[SCAdServeRequestMetadata maxSKAdNetworkViewThroughSupportedVersion] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042754d8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11306a240))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11306a240);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1042754e4; end: 10427553b;  */

void FUN_1042754e4(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 10427553c; end: 10427554b; -[SCAdServeRequestMetadata operaType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10427553c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306a248);
}



/* Entry: 10427554c; end: 10427555b; -[SCAdServeRequestMetadata timeSinceForegroundMillis] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10427554c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306a250);
}



/* Entry: 10427555c; end: 10427556f; -[SCAdServeRequestMetadata adOrganicSignals] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10427555c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_11306a258);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
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



/* Entry: 104275570; end: 104275583; -[SCAdServeRequestMetadata upcomingStoriesContext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104275570(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_11306a260);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    FUN_10430c134(0);
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



/* Entry: 104275584; end: 1042755db;  */

void FUN_104275584(long param_1,undefined8 param_2,long *param_3,code *param_4)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + *param_3);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    (*param_4)(0);
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



/* Entry: 1042755dc; end: 1042755eb; -[SCAdServeRequestMetadata adRankingContext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042755dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306a268));
  return;
}



/* Entry: 1042755ec; end: 1042755fb; -[SCAdServeRequestMetadata brandSafetyInventoryType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1042755ec(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306a270);
}



/* Entry: 1042755fc; end: 10427560f; -[SCAdServeRequestMetadata purgedServeItemIds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042755fc(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_11306a278);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
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



/* Entry: 104275610; end: 10427565f;  */

void FUN_104275610(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + *param_3);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
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



/* Entry: 104275660; end: 10427566f; -[SCAdServeRequestMetadata smartCacheAllocationEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104275660(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306a280);
}



/* Entry: 104275670; end: 10427567f; -[SCAdServeRequestMetadata numChatsPresent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104275670(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306a288));
  return;
}



/* Entry: 104275680; end: 10427568f; -[SCAdServeRequestMetadata numPinnedChats] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104275680(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306a290));
  return;
}



/* Entry: 104275690; end: 10427569f; -[SCAdServeRequestMetadata numUnreadConversations] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104275690(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306a298));
  return;
}



/* Entry: 1042756a0; end: 1042756af; -[SCAdServeRequestMetadata chatFeedAdsOptInStatus] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1042756a0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306a2a0);
}



/* Entry: 1042756b0; end: 104275df7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042756b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined1 param_10,undefined1 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined1 param_17,undefined4 param_18,undefined8 param_19,undefined4 param_20,
                  undefined4 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined4 param_26,undefined4 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                  undefined8 param_37,undefined1 param_38,undefined4 param_39,undefined8 param_40,
                  undefined8 param_41,undefined8 param_42,undefined8 param_43)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_b8 [24];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306a170) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_11306a178) = param_9;
  *(undefined1 *)(unaff_x20 + _DAT_11306a180) = param_10;
  *(undefined1 *)(unaff_x20 + _DAT_11306a188) = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_11306a190) = param_12;
  *(undefined8 *)(unaff_x20 + _DAT_11306a198) = param_13;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306a1a0);
  *puVar1 = param_14;
  puVar1[1] = param_15;
  *(undefined8 *)(unaff_x20 + _DAT_11306a1a8) = param_16;
  *(undefined1 *)(unaff_x20 + _DAT_11306a1b0) = param_17;
  *(undefined8 *)(unaff_x20 + _DAT_11306a1b8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11306a1c0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11306a1c8) = param_19;
  *(undefined8 *)(unaff_x20 + _DAT_11306a1d0) = param_3;
  *(undefined1 *)(unaff_x20 + _DAT_11306a1d8) = (undefined1)param_20;
  *(undefined1 *)(unaff_x20 + _DAT_11306a1e0) = param_20._1_1_;
  *(undefined8 *)(unaff_x20 + _DAT_11306a1e8) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_11306a1f0) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_11306a1f8) = param_6;
  *(undefined1 *)(unaff_x20 + _DAT_11306a200) = param_20._2_1_;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306a208);
  *puVar1 = param_22;
  puVar1[1] = param_23;
  *(undefined8 *)(unaff_x20 + _DAT_11306a210) = param_24;
  *(undefined8 *)(unaff_x20 + _DAT_11306a218) = param_25;
  *(undefined1 *)(unaff_x20 + _DAT_11306a220) = (undefined1)param_26;
  *(undefined1 *)(unaff_x20 + _DAT_11306a228) = param_26._1_1_;
  *(undefined1 *)(unaff_x20 + _DAT_11306a230) = param_26._2_1_;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306a238);
  *puVar1 = param_28;
  puVar1[1] = param_29;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306a240);
  *puVar1 = param_30;
  puVar1[1] = param_31;
  *(undefined8 *)(unaff_x20 + _DAT_11306a248) = param_32;
  *(undefined8 *)(unaff_x20 + _DAT_11306a250) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_11306a258) = param_33;
  *(undefined8 *)(unaff_x20 + _DAT_11306a260) = param_34;
  *(undefined8 *)(unaff_x20 + _DAT_11306a268) = param_35;
  *(undefined8 *)(unaff_x20 + _DAT_11306a270) = param_36;
  *(undefined8 *)(unaff_x20 + _DAT_11306a278) = param_37;
  *(undefined1 *)(unaff_x20 + _DAT_11306a280) = param_38;
  *(undefined8 *)(unaff_x20 + _DAT_11306a288) = param_40;
  *(undefined8 *)(unaff_x20 + _DAT_11306a290) = param_41;
  *(undefined8 *)(unaff_x20 + _DAT_11306a298) = param_42;
  *(undefined8 *)(unaff_x20 + _DAT_11306a2a0) = param_43;
  _objc_msgSendSuper2(auStack_b8,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104275df8; end: 1042761c7; -[SCAdServeRequestMetadata initWithInventories:productType:isAdDisabledInHoldout:isAdDisabledFromServer:adsPreferences:adEngagementSignal:protoServeURL:loggingContext:shouldSendLocationData:locationLatitude:locationLongitude:locationAccuracyInMeters:locationCapturedTimestampMillis:enableMockAdServer:isDebugRequest:filledAdTTLInMillis:noFillAdTTLInMillis:backupAdTTLInMillis:eligibleForNewEUD:said:viewingSessionRecords:viewLocation:enablePopulatingDiskBatteryInAdRequest:updateServeURLWithInventoryType:enableAllUpdatesDeprecation:maxSKAdNetworkClickSupportedVersion:maxSKAdNetworkViewThroughSupportedVersion:operaType:timeSinceForegroundMillis:adOrganicSignals:upcomingStoriesContext:adRankingContext:brandSafetyInventoryType:purgedServeItemIds:smartCacheAllocationEnabled:numChatsPresent:numPinnedChats:numUnreadConversations:chatFeedAdsOptInStatus:] */

void FUN_104275df8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,long param_10,undefined8 param_11,undefined4 param_12,
                  undefined4 param_13,undefined8 param_14,undefined8 param_15,long param_16,
                  undefined8 param_17,undefined1 param_18)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long in_stack_00000028;
  long in_stack_00000030;
  long in_stack_00000048;
  long in_stack_00000050;
  long in_stack_00000060;
  long in_stack_00000068;
  long in_stack_00000080;
  undefined8 uStack_f8;
  long lStack_f0;
  long lStack_e8;
  
  if (param_10 == 0) {
    lStack_e8 = 0;
  }
  else {
    param_9 = 0;
    FUN_1042752a0();
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ();
    lStack_e8 = param_10;
  }
  if (param_16 == 0) {
    uStack_f8 = 0;
    lStack_f0 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uStack_f8 = param_9;
    lStack_f0 = param_16;
  }
  if (in_stack_00000028 != 0) {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  lVar1 = in_stack_00000060;
  _objc_retain();
  lVar2 = in_stack_00000068;
  _objc_retain();
  _objc_retain();
  lVar3 = in_stack_00000080;
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  if (in_stack_00000030 != 0) {
    FUN_10427a344();
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ();
    _objc_release(in_stack_00000030);
  }
  if (in_stack_00000048 != 0) {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(in_stack_00000048);
  }
  if (in_stack_00000050 != 0) {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(in_stack_00000050);
  }
  if (lVar1 != 0) {
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
              (in_stack_00000060,PTR___s10Foundation4DataVN_110350ae0);
    _objc_release(lVar1);
  }
  if (lVar2 != 0) {
    uVar4 = 0;
    FUN_10430c134(0);
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
              (in_stack_00000068,uVar4);
    _objc_release(lVar2);
  }
  if (lVar3 != 0) {
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
              (in_stack_00000080,PTR___sSSN_11034da80);
    _objc_release(lVar3);
  }
  func_0x000104275a58(param_1,param_2,param_3,param_4,param_5,param_6,param_7,lStack_e8,param_11,
                      param_12,param_13,param_14,param_15,lStack_f0,uStack_f8,param_17,param_18);
  return;
}



/* Entry: 1042761c8; end: 1042761f7;  */

undefined8 FUN_1042761c8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_1042763f0();
  func_0x0001018ce68c(param_1);
  return uVar1;
}



/* Entry: 1042761f8; end: 1042761fb; -[SCAdServeRequestMetadata copyWithZone:] */

void FUN_1042761f8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1042761fc; end: 10427623b; -[SCAdServeRequestMetadata description] */

void FUN_1042761fc(void)

{
  undefined1 auStack_1b8 [408];
  
  _objc_retain();
  FUN_104276e78(auStack_1b8);
  func_0x0001018ce68c(auStack_1b8);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10427623c; end: 1042762b7; -[SCAdServeRequestMetadata init] */

void FUN_10427623c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataServices/AdServeRequestMetadataWrapper.swift",0x32,2,0xc6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104276284);
  (*pcVar1)();
}



/* Entry: 1042762b8; end: 1042763ef; -[SCAdServeRequestMetadata .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042762b8(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306a170));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306a190));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306a198));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306a1a0 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306a1a8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306a208 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306a210));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306a218));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306a238 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306a240 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306a258));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306a260));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306a268));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306a278));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306a288));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306a290));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11306a298));
  return;
}



/* Entry: 1042763f0; end: 104276e77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042763f0(long *param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined1 *puVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  long lVar12;
  long unaff_x20;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined *puVar16;
  long lStack_5d0;
  long lStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_448;
  undefined1 auStack_440 [352];
  undefined1 uStack_2e0;
  undefined1 auStack_2d8 [16];
  undefined1 auStack_2c8 [8];
  undefined *puStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  long lStack_298;
  long lStack_288;
  long lStack_280;
  long lStack_278;
  long lStack_270;
  long lStack_268;
  undefined *puStack_260;
  long lStack_258;
  long lStack_250;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  long lStack_220;
  byte bStack_218;
  byte bStack_217;
  byte bStack_216;
  long lStack_210;
  undefined1 auStack_208 [352];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _swift_getObjectType();
  lVar12 = *param_1;
  if (lVar12 == 0) {
    puVar11 = (undefined *)0x0;
  }
  else {
    lVar13 = *(long *)(lVar12 + 0x10);
    puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (lVar13 != 0) {
      puStack_260 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000104209b44(0,lVar13,0);
      puVar11 = puStack_260;
      lVar12 = lVar12 + 0x20;
      lVar3 = 0;
      FUN_1042752a0();
      do {
        _memcpy(&uStack_448,lVar12,0x169);
        lVar14 = lVar3;
        _objc_allocWithZone();
        uVar7 = uStack_448;
        *(undefined8 *)(lVar14 + _DAT_11306a130) = uStack_448;
        iVar2 = (int)auStack_440;
        func_0x000101542f6c();
        if (iVar2 == 1) {
          func_0x000104277b24(&uStack_448,&uStack_5c0);
          _swift_bridgeObjectRetain(uVar7);
          puVar4 = (undefined1 *)0x0;
        }
        else {
          _memcpy(auStack_208,auStack_440,0x160);
          func_0x000104821150(0);
          _objc_allocWithZone();
          func_0x000104277b24(&uStack_448,&uStack_5c0);
          _swift_bridgeObjectRetain(uVar7);
          func_0x000104277b60(auStack_440,&uStack_5c0,0x112db3a28,&UNK_10d95ddb0);
          puVar4 = auStack_208;
          func_0x00010481e13c();
        }
        *(undefined1 **)(lVar14 + _DAT_11306a138) = puVar4;
        FUN_104275224(&uStack_448);
        *(undefined1 *)(lVar14 + _DAT_11306a140) = uStack_2e0;
        plVar6 = &lStack_5d0;
        lStack_5d0 = lVar14;
        lStack_5c8 = lVar3;
        _objc_msgSendSuper2(plVar6,PTR_s_init_1125d9248);
        uVar5 = *(ulong *)(puVar11 + 0x10);
        puStack_260 = puVar11;
        if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar5) {
          func_0x000104209b44(1 < *(ulong *)(puVar11 + 0x18),uVar5 + 1,1);
        }
        *(ulong *)(puStack_260 + 0x10) = uVar5 + 1;
        *(long **)(puStack_260 + uVar5 * 8 + 0x20) = plVar6;
        lVar12 = lVar12 + 0x170;
        lVar13 = lVar13 + -1;
        puVar11 = puStack_260;
      } while (lVar13 != 0);
    }
  }
  *(undefined **)(unaff_x20 + _DAT_11306a170) = puVar11;
  *(long *)(unaff_x20 + _DAT_11306a178) = param_1[1];
  *(char *)(unaff_x20 + _DAT_11306a180) = (char)param_1[2];
  *(undefined1 *)(unaff_x20 + _DAT_11306a188) = *(undefined1 *)((long)param_1 + 0x11);
  uVar1 = *(uint *)((long)param_1 + 0x12);
  if ((uVar1 & 0xff) == 2) {
    uVar5 = 0;
  }
  else {
    func_0x00010430c668(0);
    _objc_allocWithZone();
    uVar5 = (ulong)(uVar1 & 0x1010101);
    func_0x00010430c32c();
  }
  *(ulong *)(unaff_x20 + _DAT_11306a190) = uVar5;
  if (*(char *)((long)param_1 + 0x31) == '\x01') {
    lVar3 = 0;
  }
  else {
    lVar14 = param_1[5];
    lVar3 = param_1[3];
    lVar12 = param_1[4];
    lVar13 = param_1[6];
    uVar7 = 0;
    FUN_104271b0c(0);
    _objc_allocWithZone();
    FUN_1042718d8(lVar3,(char)lVar12,lVar14,(char)lVar13,uVar7);
  }
  *(long *)(unaff_x20 + _DAT_11306a198) = lVar3;
  lStack_268 = param_1[8];
  lStack_270 = param_1[7];
  plVar6 = (long *)(unaff_x20 + _DAT_11306a1a0);
  plVar6[1] = lStack_268;
  *plVar6 = lStack_270;
  lVar12 = param_1[10];
  if (lVar12 == 1) {
    func_0x000104277b60(&lStack_270,&uStack_448,0x112d35ff8,&UNK_10d900cd0);
    plVar6 = (long *)0x0;
  }
  else {
    lVar13 = param_1[0xc];
    lVar3 = param_1[0xd];
    lVar14 = param_1[0xb];
    lVar15 = param_1[9];
    bStack_218 = (byte)lVar13 & 1;
    bStack_217 = (byte)((ulong)lVar13 >> 8) & 1;
    bStack_216 = (byte)((ulong)lVar13 >> 0x10) & 1;
    lStack_230 = lVar15;
    lStack_228 = lVar12;
    lStack_220 = lVar14;
    lStack_210 = lVar3;
    func_0x00010481c348(0);
    _objc_allocWithZone();
    func_0x000104277b60(&lStack_270,&uStack_448,0x112d35ff8,&UNK_10d900cd0);
    FUN_103de4004(lVar15,lVar12,lVar14,lVar13,lVar3);
    plVar6 = &lStack_230;
    func_0x00010481bb6c();
  }
  *(long **)(unaff_x20 + _DAT_11306a1a8) = plVar6;
  *(char *)(unaff_x20 + _DAT_11306a1b0) = (char)param_1[0xe];
  lVar12 = param_1[0x10];
  *(long *)(unaff_x20 + _DAT_11306a1b8) = param_1[0xf];
  *(long *)(unaff_x20 + _DAT_11306a1c0) = lVar12;
  *(long *)(unaff_x20 + _DAT_11306a1c8) = param_1[0x11];
  *(long *)(unaff_x20 + _DAT_11306a1d0) = param_1[0x12];
  *(char *)(unaff_x20 + _DAT_11306a1d8) = (char)param_1[0x13];
  *(undefined1 *)(unaff_x20 + _DAT_11306a1e0) = *(undefined1 *)((long)param_1 + 0x99);
  lVar12 = param_1[0x15];
  *(long *)(unaff_x20 + _DAT_11306a1e8) = param_1[0x14];
  puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(long *)(unaff_x20 + _DAT_11306a1f0) = lVar12;
  *(long *)(unaff_x20 + _DAT_11306a1f8) = param_1[0x16];
  *(char *)(unaff_x20 + _DAT_11306a200) = (char)param_1[0x17];
  lStack_278 = param_1[0x19];
  lStack_280 = param_1[0x18];
  lVar12 = param_1[0x18];
  plVar6 = (long *)(unaff_x20 + _DAT_11306a208);
  plVar6[1] = param_1[0x19];
  *plVar6 = lVar12;
  lVar12 = param_1[0x1a];
  if (lVar12 == 0) {
    func_0x000104277b60(&lStack_280,&uStack_448,0x112d35ff8,&UNK_10d900cd0);
    puVar16 = (undefined *)0x0;
  }
  else {
    lVar13 = *(long *)(lVar12 + 0x10);
    if (lVar13 == 0) {
      func_0x000104277b60(&lStack_280,&uStack_448,0x112d35ff8,&UNK_10d900cd0);
      puVar16 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      func_0x000104277b60(&lStack_280,&uStack_448,0x112d35ff8,&UNK_10d900cd0);
      puStack_260 = puVar11;
      func_0x000104209b10(0,lVar13,0);
      puVar16 = puStack_260;
      lVar12 = lVar12 + 0x20;
      uVar7 = 0;
      FUN_10427a344(0);
      do {
        _memcpy(&uStack_448,lVar12,0x150);
        _objc_allocWithZone(uVar7);
        func_0x00010167c86c(&uStack_448,&uStack_5c0);
        puVar8 = &uStack_448;
        FUN_1042788ec();
        func_0x00010167c8a8(&uStack_448);
        uVar5 = *(ulong *)(puVar16 + 0x10);
        puStack_260 = puVar16;
        if (*(ulong *)(puVar16 + 0x18) >> 1 <= uVar5) {
          func_0x000104209b10(1 < *(ulong *)(puVar16 + 0x18),uVar5 + 1,1);
        }
        *(ulong *)(puStack_260 + 0x10) = uVar5 + 1;
        *(undefined8 **)(puStack_260 + uVar5 * 8 + 0x20) = puVar8;
        lVar12 = lVar12 + 0x150;
        lVar13 = lVar13 + -1;
        puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
        puVar16 = puStack_260;
      } while (lVar13 != 0);
    }
  }
  *(undefined **)(unaff_x20 + _DAT_11306a210) = puVar16;
  lStack_288 = param_1[0x1b];
  *(long *)(unaff_x20 + _DAT_11306a218) = lStack_288;
  *(char *)(unaff_x20 + _DAT_11306a220) = (char)param_1[0x1c];
  *(undefined1 *)(unaff_x20 + _DAT_11306a228) = *(undefined1 *)((long)param_1 + 0xe1);
  *(undefined1 *)(unaff_x20 + _DAT_11306a230) = *(undefined1 *)((long)param_1 + 0xe2);
  lVar12 = param_1[0x1d];
  plVar6 = (long *)(unaff_x20 + _DAT_11306a238);
  plVar6[1] = param_1[0x1e];
  *plVar6 = lVar12;
  lVar12 = param_1[0x1f];
  plVar6 = (long *)(unaff_x20 + _DAT_11306a240);
  plVar6[1] = param_1[0x20];
  *plVar6 = lVar12;
  *(long *)(unaff_x20 + _DAT_11306a248) = param_1[0x21];
  *(long *)(unaff_x20 + _DAT_11306a250) = param_1[0x22];
  lStack_2b8 = param_1[0x23];
  lVar12 = param_1[0x24];
  *(long *)(unaff_x20 + _DAT_11306a258) = lStack_2b8;
  lStack_298 = param_1[0x1e];
  lStack_2a0 = param_1[0x1d];
  lStack_2a8 = param_1[0x20];
  lStack_2b0 = param_1[0x1f];
  if (lVar12 == 0) {
    func_0x000104277b60(&lStack_288,&uStack_5c0,0x112dc3de0,&UNK_10d9813c0);
    func_0x000104277b60(&lStack_2a0,&uStack_5c0,0x112d35ff8,&UNK_10d900cd0);
    func_0x000104277b60(&lStack_2b0,&uStack_5c0,0x112d35ff8,&UNK_10d900cd0);
    func_0x000104277b60(&lStack_2b8,&uStack_5c0,0x112ee42a8,&UNK_10db0f340);
    puVar11 = (undefined *)0x0;
  }
  else {
    lVar13 = *(long *)(lVar12 + 0x10);
    if (lVar13 == 0) {
      func_0x000104277b60(&lStack_288,&uStack_5c0,0x112dc3de0,&UNK_10d9813c0);
      func_0x000104277b60(&lStack_2a0,&uStack_5c0,0x112d35ff8,&UNK_10d900cd0);
      func_0x000104277b60(&lStack_2b0,&uStack_5c0,0x112d35ff8,&UNK_10d900cd0);
      func_0x000104277b60(&lStack_2b8,&uStack_5c0,0x112ee42a8,&UNK_10db0f340);
      puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      func_0x000104277b60(&lStack_288,&uStack_5c0,0x112dc3de0,&UNK_10d9813c0);
      func_0x000104277b60(&lStack_2a0,&uStack_5c0,0x112d35ff8,&UNK_10d900cd0);
      func_0x000104277b60(&lStack_2b0,&uStack_5c0,0x112d35ff8,&UNK_10d900cd0);
      func_0x000104277b60(&lStack_2b8,&uStack_5c0,0x112ee42a8,&UNK_10db0f340);
      puStack_2c0 = puVar11;
      func_0x000104209adc(0,lVar13,0);
      puVar11 = puStack_2c0;
      uVar7 = 0;
      FUN_10430c134(0);
      puVar8 = (undefined8 *)(lVar12 + 0x40);
      do {
        uStack_5b8 = puVar8[-3];
        uStack_5c0 = puVar8[-4];
        uStack_5a8 = puVar8[-1];
        uStack_5b0 = puVar8[-2];
        uStack_598 = puVar8[1];
        uStack_5a0 = *puVar8;
        uStack_90 = puVar8[-1];
        uStack_98 = puVar8[-2];
        uStack_a0 = puVar8[-3];
        uStack_78 = puVar8[1];
        uStack_80 = *puVar8;
        uStack_a8 = uStack_5c0;
        _objc_allocWithZone(uVar7);
        func_0x000104277b60(&uStack_a8,&puStack_260,0x11306a2d0,&UNK_10dce55c0);
        func_0x000104277ae8(&uStack_a0,&puStack_260);
        func_0x000104277b60(&uStack_80,&puStack_260,0x112d35ff8,&UNK_10d900cd0);
        puVar9 = &uStack_5c0;
        FUN_10430b0a8();
        uVar5 = *(ulong *)(puVar11 + 0x10);
        puStack_2c0 = puVar11;
        if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar5) {
          func_0x000104209adc(1 < *(ulong *)(puVar11 + 0x18),uVar5 + 1,1);
        }
        *(ulong *)(puStack_2c0 + 0x10) = uVar5 + 1;
        *(undefined8 **)(puStack_2c0 + uVar5 * 8 + 0x20) = puVar9;
        puVar8 = puVar8 + 6;
        lVar13 = lVar13 + -1;
        puVar11 = puStack_2c0;
      } while (lVar13 != 0);
    }
  }
  *(undefined **)(unaff_x20 + _DAT_11306a260) = puVar11;
  if ((char)param_1[0x2b] == '\x01') {
    ppuVar10 = (undefined **)0x0;
  }
  else {
    lStack_258 = param_1[0x26];
    puStack_260 = (undefined *)param_1[0x25];
    lStack_248 = param_1[0x28];
    lStack_250 = param_1[0x27];
    lStack_238 = param_1[0x2a];
    lStack_240 = param_1[0x29];
    func_0x00010481b5b0(0);
    _objc_allocWithZone();
    ppuVar10 = &puStack_260;
    func_0x00010481b058();
  }
  *(undefined ***)(unaff_x20 + _DAT_11306a268) = ppuVar10;
  puStack_2c0 = (undefined *)param_1[0x2d];
  *(long *)(unaff_x20 + _DAT_11306a270) = param_1[0x2c];
  *(undefined **)(unaff_x20 + _DAT_11306a278) = puStack_2c0;
  *(char *)(unaff_x20 + _DAT_11306a280) = (char)param_1[0x2e];
  if ((char)param_1[0x2f] == '\x01') {
    func_0x000104277b60(&puStack_2c0,auStack_2c8,0x112d445a8,&UNK_10d990150);
    puVar11 = (undefined *)0x0;
  }
  else {
    puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x000104277b60(&puStack_2c0,auStack_2c8,0x112d445a8,&UNK_10d990150);
    func_0x00010c0594e0();
  }
  *(undefined **)(unaff_x20 + _DAT_11306a288) = puVar11;
  if ((char)param_1[0x30] == '\x01') {
    puVar11 = (undefined *)0x0;
  }
  else {
    puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c0594e0();
  }
  *(undefined **)(unaff_x20 + _DAT_11306a290) = puVar11;
  if ((char)param_1[0x31] == '\x01') {
    puVar11 = (undefined *)0x0;
  }
  else {
    puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c0594e0();
  }
  *(undefined **)(unaff_x20 + _DAT_11306a298) = puVar11;
  *(long *)(unaff_x20 + _DAT_11306a2a0) = param_1[0x32];
  _objc_msgSendSuper2(auStack_2d8,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104276e78; end: 104277ac7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104276e78(undefined8 param_1,long param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  code *pcVar24;
  undefined4 uVar25;
  ulong uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  ulong uVar34;
  undefined8 uVar35;
  undefined8 *puVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  ulong uVar39;
  ulong uVar40;
  undefined *puVar41;
  long lVar42;
  undefined8 uVar43;
  undefined *puVar44;
  undefined *puVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  undefined8 uVar51;
  undefined8 uVar52;
  undefined4 uStack_9b8;
  undefined8 uStack_9a8;
  undefined8 uStack_9a0;
  undefined8 uStack_998;
  undefined8 uStack_990;
  undefined8 uStack_988;
  undefined8 uStack_980;
  ulong uStack_8f8;
  undefined8 uStack_8f0;
  undefined8 uStack_8e8;
  undefined8 uStack_8e0;
  undefined8 uStack_8d8;
  undefined1 uStack_8c0;
  long lStack_8b8;
  ulong uStack_8b0;
  long lStack_8a8;
  undefined *apuStack_878 [51];
  undefined *puStack_6e0;
  undefined8 uStack_6d8;
  undefined1 uStack_6d0;
  undefined1 uStack_6cf;
  uint uStack_6ce;
  long lStack_6c8;
  ulong uStack_6c0;
  long lStack_6b8;
  undefined1 uStack_6b0;
  undefined1 uStack_6af;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  ulong uStack_680;
  undefined8 uStack_678;
  undefined1 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined1 uStack_648;
  undefined1 uStack_647;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined1 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined *puStack_610;
  undefined8 uStack_608;
  undefined1 uStack_600;
  undefined1 uStack_5ff;
  undefined1 uStack_5fe;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined *puStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined1 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined1 uStack_570;
  undefined4 uStack_56c;
  undefined1 uStack_568;
  undefined4 uStack_564;
  undefined1 uStack_560;
  undefined4 uStack_55c;
  undefined1 uStack_558;
  undefined8 uStack_550;
  undefined *puStack_548;
  undefined8 uStack_540;
  undefined1 uStack_538;
  undefined1 uStack_537;
  uint uStack_536;
  long lStack_530;
  ulong uStack_528;
  long lStack_520;
  undefined1 uStack_518;
  undefined1 uStack_517;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  ulong uStack_4e8;
  undefined8 uStack_4e0;
  undefined1 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined1 uStack_4b0;
  undefined1 uStack_4af;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined1 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined *puStack_478;
  undefined8 uStack_470;
  undefined1 uStack_468;
  undefined1 uStack_467;
  undefined1 uStack_466;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined *puStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined1 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined1 uStack_3d8;
  undefined4 uStack_3d4;
  undefined1 uStack_3d0;
  undefined4 uStack_3cc;
  undefined1 uStack_3c8;
  undefined4 uStack_3c4;
  undefined1 uStack_3c0;
  undefined8 uStack_3b8;
  undefined1 auStack_3b0 [352];
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  byte bStack_238;
  char cStack_237;
  char cStack_236;
  undefined8 uStack_230;
  undefined1 auStack_228 [336];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  
  uVar34 = *(ulong *)(param_2 + _DAT_11306a170);
  if (uVar34 == 0) {
    puVar44 = (undefined *)0x0;
  }
  else {
    if (uVar34 >> 0x3e == 0) {
      uVar39 = *(ulong *)((uVar34 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar39 = uVar34;
      if (-1 < (long)uVar34) {
        uVar39 = uVar34 & 0xffffffffffffff8;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    puVar44 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (uVar39 != 0) {
      apuStack_878[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000104209b78(0,uVar39 & ((long)uVar39 >> 0x3f ^ 0xffffffffffffffffU),0);
      if ((long)uVar39 < 0) {
                    /* WARNING: Does not return */
        pcVar24 = (code *)SoftwareBreakpoint(1,0x104277ac0);
        (*pcVar24)();
      }
      uVar40 = 0;
      puVar44 = apuStack_878[0];
      do {
        if ((uVar34 & 0xc000000000000001) == 0) {
          uVar26 = *(ulong *)(uVar34 + uVar40 * 8 + 0x20);
          _objc_retain();
        }
        else {
          uVar26 = uVar40;
          func_0x000104207de4(uVar40,uVar34);
        }
        puVar41 = *(undefined **)(uVar26 + _DAT_11306a130);
        lVar42 = *(long *)(uVar26 + _DAT_11306a138);
        puStack_548 = puVar41;
        if (lVar42 == 0) {
          func_0x000102d123c4(&puStack_6e0);
          _memcpy(&uStack_540,&puStack_6e0,0x160);
          _swift_bridgeObjectRetain(puVar41);
        }
        else {
          _swift_bridgeObjectRetain(puVar41);
          _objc_retain(lVar42);
          func_0x00010481c368(auStack_3b0);
          _memcpy(&uStack_540,auStack_3b0,0x160);
          func_0x000102d123f8(&uStack_540);
        }
        uVar14 = *(undefined1 *)(uVar26 + _DAT_11306a140);
        _objc_release(uVar26);
        uStack_3e0 = CONCAT71(uStack_3e0._1_7_,uVar14);
        _memcpy(&puStack_6e0,&puStack_548,0x169);
        uVar26 = *(ulong *)(puVar44 + 0x10);
        apuStack_878[0] = puVar44;
        if (*(ulong *)(puVar44 + 0x18) >> 1 <= uVar26) {
          func_0x000104209b78(1 < *(ulong *)(puVar44 + 0x18),uVar26 + 1,1);
        }
        puVar44 = apuStack_878[0];
        uVar40 = uVar40 + 1;
        *(ulong *)(apuStack_878[0] + 0x10) = uVar26 + 1;
        _memcpy(apuStack_878[0] + uVar26 * 0x170 + 0x20,&puStack_6e0,0x169);
      } while (uVar39 != uVar40);
    }
  }
  lVar42 = *(long *)(param_2 + _DAT_11306a190);
  if (lVar42 == 0) {
    uVar32 = 2;
  }
  else {
    uVar32 = 0x100;
    if (*(char *)(lVar42 + _DAT_11306cf88) == '\0') {
      uVar32 = 0;
    }
    uVar33 = 0x10000;
    if (*(char *)(lVar42 + _DAT_11306cf90) == '\0') {
      uVar33 = 0;
    }
    uVar31 = 0x1000000;
    if (*(char *)(lVar42 + _DAT_11306cf98) == '\0') {
      uVar31 = 0;
    }
    uVar32 = uVar32 | *(byte *)(lVar42 + _DAT_11306cf80) | uVar33 | uVar31;
  }
  uVar27 = *(undefined8 *)(param_2 + _DAT_11306a178);
  uVar14 = *(undefined1 *)(param_2 + _DAT_11306a180);
  uVar15 = *(undefined1 *)(param_2 + _DAT_11306a188);
  lVar42 = *(long *)(param_2 + _DAT_11306a198);
  if (lVar42 == 0) {
    bVar1 = false;
    lStack_8b8 = 0;
    uStack_8b0 = 0;
    lStack_8a8 = 0;
    uStack_8c0 = 1;
  }
  else {
    lStack_8a8 = *(long *)(lVar42 + _DAT_113069ee0);
    bVar1 = lStack_8a8 == 0;
    if (bVar1) {
      _objc_retain(lVar42);
      lStack_8a8 = 0;
    }
    else {
      _objc_retain(lVar42);
      func_0x00010c067fc0();
    }
    uStack_8b0 = (ulong)bVar1;
    lStack_8b8 = *(long *)(lVar42 + _DAT_113069ee8);
    bVar1 = lStack_8b8 == 0;
    if (bVar1) {
      lStack_8b8 = 0;
    }
    else {
      func_0x00010c067fc0();
    }
    _objc_release(lVar42);
    uStack_8c0 = 0;
  }
  uVar6 = *(undefined8 *)(param_2 + _DAT_11306a1a0);
  uVar10 = ((undefined8 *)(param_2 + _DAT_11306a1a0))[1];
  lVar42 = *(long *)(param_2 + _DAT_11306a1a8);
  if (lVar42 == 0) {
    _swift_bridgeObjectRetain();
    uStack_8e0 = 0;
    uStack_8d8 = 0;
    uStack_8e8 = 0;
    uStack_8f8 = 0;
    uStack_8f0 = 1;
  }
  else {
    _swift_bridgeObjectRetain();
    _objc_retain(lVar42);
    func_0x00010481b5d0(&uStack_250);
    uStack_8f0 = uStack_248;
    uStack_8e0 = uStack_240;
    uStack_8d8 = uStack_250;
    uStack_8e8 = uStack_230;
    uVar34 = 0x100;
    if (cStack_237 == '\0') {
      uVar34 = 0;
    }
    uStack_8f8 = 0x10000;
    if (cStack_236 == '\0') {
      uStack_8f8 = 0;
    }
    uStack_8f8 = uVar34 | bStack_238 | uStack_8f8;
  }
  puVar41 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000103de4018(0,1,0,0,0);
  uVar16 = *(undefined1 *)(param_2 + _DAT_11306a1b0);
  uVar46 = *(undefined8 *)(param_2 + _DAT_11306a1b8);
  uVar47 = *(undefined8 *)(param_2 + _DAT_11306a1c0);
  uVar28 = *(undefined8 *)(param_2 + _DAT_11306a1c8);
  uVar48 = *(undefined8 *)(param_2 + _DAT_11306a1d0);
  uVar17 = *(undefined1 *)(param_2 + _DAT_11306a1d8);
  uVar18 = *(undefined1 *)(param_2 + _DAT_11306a1e0);
  uVar49 = *(undefined8 *)(param_2 + _DAT_11306a1e8);
  uVar50 = *(undefined8 *)(param_2 + _DAT_11306a1f0);
  uVar51 = *(undefined8 *)(param_2 + _DAT_11306a1f8);
  uVar19 = *(undefined1 *)(param_2 + _DAT_11306a200);
  uVar7 = *(undefined8 *)(param_2 + _DAT_11306a208);
  uVar11 = ((undefined8 *)(param_2 + _DAT_11306a208))[1];
  uVar34 = *(ulong *)(param_2 + _DAT_11306a210);
  if (uVar34 == 0) {
    _swift_bridgeObjectRetain();
    puVar41 = (undefined *)0x0;
  }
  else {
    if (uVar34 >> 0x3e == 0) {
      uVar39 = *(ulong *)((uVar34 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar39 = uVar34;
      if (-1 < (long)uVar34) {
        uVar39 = uVar34 & 0xffffffffffffff8;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (uVar39 == 0) {
      _swift_bridgeObjectRetain(uVar11);
      puVar41 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      puStack_548 = puVar41;
      _swift_bridgeObjectRetain(uVar11);
      func_0x000102d0d87c(0,uVar39 & ((long)uVar39 >> 0x3f ^ 0xffffffffffffffffU),0);
      if ((long)uVar39 < 0) {
                    /* WARNING: Does not return */
        pcVar24 = (code *)SoftwareBreakpoint(1,0x104277ac4);
        (*pcVar24)();
      }
      uVar40 = 0;
      puVar41 = puStack_548;
      do {
        if ((uVar34 & 0xc000000000000001) == 0) {
          _objc_retain(*(undefined8 *)(uVar34 + uVar40 * 8 + 0x20));
        }
        else {
          func_0x000102d0dc78(uVar40,uVar34);
        }
        FUN_10427949c(auStack_228);
        uVar26 = *(ulong *)(puVar41 + 0x10);
        puStack_548 = puVar41;
        if (*(ulong *)(puVar41 + 0x18) >> 1 <= uVar26) {
          func_0x000102d0d87c(1 < *(ulong *)(puVar41 + 0x18),uVar26 + 1,1);
        }
        puVar41 = puStack_548;
        uVar40 = uVar40 + 1;
        *(ulong *)(puStack_548 + 0x10) = uVar26 + 1;
        _memcpy(puStack_548 + uVar26 * 0x150 + 0x20,auStack_228,0x150);
      } while (uVar39 != uVar40);
    }
  }
  uVar35 = *(undefined8 *)(param_2 + _DAT_11306a218);
  uVar20 = *(undefined1 *)(param_2 + _DAT_11306a220);
  uVar21 = *(undefined1 *)(param_2 + _DAT_11306a228);
  uVar22 = *(undefined1 *)(param_2 + _DAT_11306a230);
  uVar8 = *(undefined8 *)(param_2 + _DAT_11306a238);
  uVar12 = ((undefined8 *)(param_2 + _DAT_11306a238))[1];
  uVar9 = *(undefined8 *)(param_2 + _DAT_11306a240);
  uVar13 = ((undefined8 *)(param_2 + _DAT_11306a240))[1];
  uVar29 = *(undefined8 *)(param_2 + _DAT_11306a248);
  uVar52 = *(undefined8 *)(param_2 + _DAT_11306a250);
  uVar43 = *(undefined8 *)(param_2 + _DAT_11306a258);
  uVar34 = *(ulong *)(param_2 + _DAT_11306a260);
  if (uVar34 == 0) {
    _swift_bridgeObjectRetain(uVar43);
    _objc_retain(uVar35);
    _swift_bridgeObjectRetain(uVar12);
    _swift_bridgeObjectRetain(uVar13);
    puVar45 = (undefined *)0x0;
  }
  else {
    if (uVar34 >> 0x3e == 0) {
      uVar39 = *(ulong *)((uVar34 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar39 = uVar34;
      if (-1 < (long)uVar34) {
        uVar39 = uVar34 & 0xffffffffffffff8;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (uVar39 == 0) {
      _swift_bridgeObjectRetain(uVar43);
      _objc_retain(uVar35);
      _swift_bridgeObjectRetain(uVar12);
      _swift_bridgeObjectRetain(uVar13);
      puVar45 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      puStack_548 = PTR___swiftEmptyArrayStorage_11034f1c8;
      _objc_retain(uVar35);
      _swift_bridgeObjectRetain(uVar12);
      _swift_bridgeObjectRetain(uVar13);
      _swift_bridgeObjectRetain(uVar43);
      func_0x000102d0d860(0,uVar39 & ((long)uVar39 >> 0x3f ^ 0xffffffffffffffffU),0);
      if ((long)uVar39 < 0) {
                    /* WARNING: Does not return */
        pcVar24 = (code *)SoftwareBreakpoint(1,0x104277ac8);
        (*pcVar24)();
      }
      if ((uVar34 & 0xc000000000000001) == 0) {
        puVar36 = (undefined8 *)(uVar34 + 0x20);
        do {
          puVar45 = puStack_548;
          _objc_retain(*puVar36);
          func_0x00010430b928(&uStack_d8);
          uVar34 = *(ulong *)(puVar45 + 0x10);
          puStack_548 = puVar45;
          if (*(ulong *)(puVar45 + 0x18) >> 1 <= uVar34) {
            func_0x000102d0d860(1 < *(ulong *)(puVar45 + 0x18),uVar34 + 1,1);
          }
          *(ulong *)(puStack_548 + 0x10) = uVar34 + 1;
          *(undefined8 *)(puStack_548 + uVar34 * 0x30 + 0x38) = uStack_c0;
          *(undefined8 *)(puStack_548 + uVar34 * 0x30 + 0x30) = uStack_c8;
          *(undefined8 *)(puStack_548 + uVar34 * 0x30 + 0x48) = uStack_b0;
          *(undefined8 *)(puStack_548 + uVar34 * 0x30 + 0x40) = uStack_b8;
          *(undefined8 *)(puStack_548 + uVar34 * 0x30 + 0x28) = uStack_d0;
          *(undefined8 *)(puStack_548 + uVar34 * 0x30 + 0x20) = uStack_d8;
          uVar39 = uVar39 - 1;
          puVar36 = puVar36 + 1;
          puVar45 = puStack_548;
        } while (uVar39 != 0);
      }
      else {
        uVar40 = 0;
        do {
          puVar45 = puStack_548;
          func_0x000102d0dadc(uVar40,uVar34);
          func_0x00010430b928(&uStack_d8);
          uVar26 = *(ulong *)(puVar45 + 0x10);
          puStack_548 = puVar45;
          if (*(ulong *)(puVar45 + 0x18) >> 1 <= uVar26) {
            func_0x000102d0d860(1 < *(ulong *)(puVar45 + 0x18),uVar26 + 1,1);
          }
          uVar40 = uVar40 + 1;
          *(ulong *)(puStack_548 + 0x10) = uVar26 + 1;
          *(undefined8 *)(puStack_548 + uVar26 * 0x30 + 0x38) = uStack_c0;
          *(undefined8 *)(puStack_548 + uVar26 * 0x30 + 0x30) = uStack_c8;
          *(undefined8 *)(puStack_548 + uVar26 * 0x30 + 0x48) = uStack_b0;
          *(undefined8 *)(puStack_548 + uVar26 * 0x30 + 0x40) = uStack_b8;
          *(undefined8 *)(puStack_548 + uVar26 * 0x30 + 0x28) = uStack_d0;
          *(undefined8 *)(puStack_548 + uVar26 * 0x30 + 0x20) = uStack_d8;
          puVar45 = puStack_548;
        } while (uVar39 != uVar40);
      }
    }
  }
  lVar42 = *(long *)(param_2 + _DAT_11306a268);
  bVar2 = lVar42 == 0;
  if (bVar2) {
    uStack_988 = 0;
    uStack_980 = 0;
    uStack_998 = 0;
    uStack_990 = 0;
    uStack_9a8 = 0;
    uStack_9a0 = 0;
  }
  else {
    uStack_980 = *(undefined8 *)(lVar42 + _DAT_113090da0);
    uStack_988 = *(undefined8 *)(lVar42 + _DAT_113090da8);
    uStack_990 = *(undefined8 *)(lVar42 + _DAT_113090db0);
    uStack_998 = *(undefined8 *)(lVar42 + _DAT_113090db8);
    uStack_9a0 = *(undefined8 *)(lVar42 + _DAT_113090dc0);
    uStack_9a8 = *(undefined8 *)(lVar42 + _DAT_113090dc8);
  }
  uVar30 = *(undefined8 *)(param_2 + _DAT_11306a270);
  uVar38 = *(undefined8 *)(param_2 + _DAT_11306a278);
  uVar23 = *(undefined1 *)(param_2 + _DAT_11306a280);
  lVar42 = *(long *)(param_2 + _DAT_11306a288);
  bVar3 = lVar42 == 0;
  if (bVar3) {
    _swift_bridgeObjectRetain(uVar38);
    uStack_9b8 = 0;
  }
  else {
    _swift_bridgeObjectRetain(uVar38);
    func_0x000107c5d384();
    uStack_9b8 = (undefined4)lVar42;
  }
  lVar42 = *(long *)(param_2 + _DAT_11306a290);
  bVar4 = lVar42 == 0;
  if (bVar4) {
    uVar25 = 0;
  }
  else {
    func_0x000107c5d384();
    uVar25 = (undefined4)lVar42;
  }
  lVar42 = *(long *)(param_2 + _DAT_11306a298);
  bVar5 = lVar42 == 0;
  if (bVar5) {
    uStack_55c = 0;
  }
  else {
    func_0x000107c5d384();
    uStack_55c = (undefined4)lVar42;
  }
  uVar37 = *(undefined8 *)(param_2 + _DAT_11306a2a0);
  _objc_release(param_2);
  lStack_530 = lStack_8a8;
  lStack_6c8 = lStack_8a8;
  uStack_6c0 = uStack_8b0;
  uStack_528 = uStack_8b0;
  lStack_6b8 = lStack_8b8;
  lStack_520 = lStack_8b8;
  uStack_6af = uStack_8c0;
  uStack_500 = uStack_8d8;
  uStack_698 = uStack_8d8;
  uStack_690 = uStack_8f0;
  uStack_4f8 = uStack_8f0;
  uStack_4f0 = uStack_8e0;
  uStack_688 = uStack_8e0;
  uStack_680 = uStack_8f8;
  uStack_4e8 = uStack_8f8;
  uStack_678 = uStack_8e8;
  uStack_4e0 = uStack_8e8;
  uStack_420 = uStack_980;
  uStack_5b8 = uStack_980;
  uStack_5b0 = uStack_988;
  uStack_418 = uStack_988;
  uStack_410 = uStack_990;
  uStack_5a8 = uStack_990;
  uStack_5a0 = uStack_998;
  uStack_408 = uStack_998;
  uStack_400 = uStack_9a0;
  uStack_598 = uStack_9a0;
  uStack_590 = uStack_9a8;
  uStack_3f8 = uStack_9a8;
  uStack_56c = uStack_9b8;
  uStack_3d4 = uStack_9b8;
  puStack_6e0 = puVar44;
  uStack_6d8 = uVar27;
  uStack_6d0 = uVar14;
  uStack_6cf = uVar15;
  uStack_6ce = uVar32;
  uStack_6b0 = bVar1;
  uStack_6a8 = uVar6;
  uStack_6a0 = uVar10;
  uStack_670 = uVar16;
  uStack_668 = uVar46;
  uStack_660 = uVar47;
  uStack_658 = uVar28;
  uStack_650 = uVar48;
  uStack_648 = uVar17;
  uStack_647 = uVar18;
  uStack_640 = uVar49;
  uStack_638 = uVar50;
  uStack_630 = uVar51;
  uStack_628 = uVar19;
  uStack_620 = uVar7;
  uStack_618 = uVar11;
  puStack_610 = puVar41;
  uStack_608 = uVar35;
  uStack_600 = uVar20;
  uStack_5ff = uVar21;
  uStack_5fe = uVar22;
  uStack_5f8 = uVar8;
  uStack_5f0 = uVar12;
  uStack_5e8 = uVar9;
  uStack_5e0 = uVar13;
  uStack_5d8 = uVar29;
  uStack_5d0 = uVar52;
  uStack_5c8 = uVar43;
  puStack_5c0 = puVar45;
  uStack_588 = bVar2;
  uStack_580 = uVar30;
  uStack_578 = uVar38;
  uStack_570 = uVar23;
  uStack_568 = bVar3;
  uStack_564 = uVar25;
  uStack_560 = bVar4;
  uStack_558 = bVar5;
  uStack_550 = uVar37;
  puStack_548 = puVar44;
  uStack_540 = uVar27;
  uStack_538 = uVar14;
  uStack_537 = uVar15;
  uStack_536 = uVar32;
  uStack_518 = bVar1;
  uStack_517 = uStack_6af;
  uStack_510 = uVar6;
  uStack_508 = uVar10;
  uStack_4d8 = uVar16;
  uStack_4d0 = uVar46;
  uStack_4c8 = uVar47;
  uStack_4c0 = uVar28;
  uStack_4b8 = uVar48;
  uStack_4b0 = uVar17;
  uStack_4af = uVar18;
  uStack_4a8 = uVar49;
  uStack_4a0 = uVar50;
  uStack_498 = uVar51;
  uStack_490 = uVar19;
  uStack_488 = uVar7;
  uStack_480 = uVar11;
  puStack_478 = puVar41;
  uStack_470 = uVar35;
  uStack_468 = uVar20;
  uStack_467 = uVar21;
  uStack_466 = uVar22;
  uStack_460 = uVar8;
  uStack_458 = uVar12;
  uStack_450 = uVar9;
  uStack_448 = uVar13;
  uStack_440 = uVar29;
  uStack_438 = uVar52;
  uStack_430 = uVar43;
  puStack_428 = puVar45;
  uStack_3f0 = bVar2;
  uStack_3e8 = uVar30;
  uStack_3e0 = uVar38;
  uStack_3d8 = uVar23;
  uStack_3d0 = bVar3;
  uStack_3cc = uVar25;
  uStack_3c8 = bVar4;
  uStack_3c4 = uStack_55c;
  uStack_3c0 = bVar5;
  uStack_3b8 = uVar37;
  func_0x0001018ce650(&puStack_6e0,apuStack_878);
  func_0x0001018ce68c(&puStack_548);
  _memcpy(param_1,&puStack_6e0,0x198);
  return;
}



/* Entry: 104277ac8; end: 104277ae7;  */

void FUN_104277ac8(void)

{
  _objc_opt_self(&PTR_PTR_112991e00);
  return;
}



/* Entry: 104277ae8; end: 104277ba7;  */

undefined8 FUN_104277ae8(undefined8 param_1,undefined8 param_2)

{
  (*(code *)(undefined *)0x104309798)(param_2,param_1);
  return param_2;
}



/* Entry: 104277ba8; end: 104277c03; -[SCAdSingleViewedAdContextRecord adExitEvent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104277ba8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11306a2d8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11306a2d8);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104277c04; end: 104277c13; -[SCAdSingleViewedAdContextRecord adLoadingSpinnerTimeMillis] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104277c04(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306a2e0);
}



/* Entry: 104277c14; end: 104277c23; -[SCAdSingleViewedAdContextRecord adViewTimeMillis] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104277c14(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306a2e8);
}



/* Entry: 104277c24; end: 104277c33; -[SCAdSingleViewedAdContextRecord adSwipedUp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104277c24(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306a2f0);
}



/* Entry: 104277c34; end: 104277cc7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104277c34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306a2d8);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_11306a2e0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11306a2e8) = param_2;
  *(undefined1 *)(unaff_x20 + _DAT_11306a2f0) = param_5;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104277cc8; end: 104277d73; -[SCAdSingleViewedAdContextRecord initWithAdExitEvent:adLoadingSpinnerTimeMillis:adViewTimeMillis:adSwipedUp:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104277cc8(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  undefined1 param_6)

{
  long *plVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_3;
  _swift_getObjectType();
  if (param_5 == 0) {
    param_5 = 0;
    param_4 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_3 + _DAT_11306a2d8);
  *plVar1 = param_5;
  plVar1[1] = param_4;
  *(undefined8 *)(param_3 + _DAT_11306a2e0) = param_1;
  *(undefined8 *)(param_3 + _DAT_11306a2e8) = param_2;
  *(undefined1 *)(param_3 + _DAT_11306a2f0) = param_6;
  lStack_50 = param_3;
  lStack_48 = lVar2;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104277d74; end: 104277def;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104277d74(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  uVar2 = *param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306a2d8);
  puVar1[1] = param_1[1];
  *puVar1 = uVar2;
  uVar2 = param_1[3];
  *(undefined8 *)(unaff_x20 + _DAT_11306a2e0) = param_1[2];
  *(undefined8 *)(unaff_x20 + _DAT_11306a2e8) = uVar2;
  *(undefined1 *)(unaff_x20 + _DAT_11306a2f0) = *(undefined1 *)(param_1 + 4);
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104277df0; end: 104277df3; -[SCAdSingleViewedAdContextRecord copyWithZone:] */

void FUN_104277df0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104277df4; end: 104277e0f; -[SCAdSingleViewedAdContextRecord description] */

void FUN_104277df4(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104277e10; end: 104277e8b; -[SCAdSingleViewedAdContextRecord init] */

void FUN_104277e10(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataServices/AdSingleViewedAdContextRecordWrapper.swift",0x39,2,0x34,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104277e58);
  (*pcVar1)();
}



/* Entry: 104277e8c; end: 104277e9f; -[SCAdSingleViewedAdContextRecord .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104277e8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11306a2d8 + 8))
  ;
  return;
}



/* Entry: 104277ea0; end: 104277ebf;  */

void FUN_104277ea0(void)

{
  _objc_opt_self(&PTR_PTR_112991ff8);
  return;
}



/* Entry: 104277ec0; end: 104277f3b;  */

void FUN_104277ec0(undefined8 param_1)

{
  undefined1 auStack_170 [336];
  
  FUN_10427949c(auStack_170);
  _memcpy(param_1,auStack_170,0x150);
  return;
}



/* Entry: 104277f3c; end: 104277f4b; -[SCAdSingleViewingSessionRecord sessionStartTimestampInMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104277f3c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306a320);
}



/* Entry: 104277f4c; end: 104277f5b; -[SCAdSingleViewingSessionRecord totalViewTimeInMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104277f4c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306a328);
}


