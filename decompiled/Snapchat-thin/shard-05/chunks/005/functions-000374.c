/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103f02980; end: 103f02abb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f02980(void)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [72];
  
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = auStack_90 + -extraout_x8;
  __ss6HasherVABycfC(auStack_88);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11302d828));
  FUN_103f02e64(unaff_x20 + _DAT_113812538,puVar3,0x112d373d8,&UNK_10d9014c0);
  lVar1 = 0;
  __s10Foundation4DateVMa();
  lVar4 = *(long *)(lVar1 + -8);
  puVar2 = puVar3;
  (**(code **)(lVar4 + 0x30))(puVar3,1,lVar1);
  if ((int)puVar2 == 1) {
    func_0x000103f02eac(puVar3,0x112d373d8,&UNK_10d9014c0);
    puVar3 = (undefined1 *)0x0;
  }
  else {
    __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF();
    (**(code **)(lVar4 + 8))(puVar3,lVar1);
    puVar3 = puVar2;
    func_0x000107c44c3c(puVar2);
    _objc_release(puVar2);
  }
  __ss6HasherV8_combineyySuF(puVar3);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 103f02abc; end: 103f02e63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_103f02abc(undefined8 param_1)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined1 *puVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long lVar6;
  long unaff_x20;
  long lVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  code *pcVar11;
  long lVar12;
  undefined1 auStack_b0 [8];
  undefined1 *puStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined1 auStack_80 [24];
  long lStack_68;
  
  lVar2 = unaff_x20;
  _swift_getObjectType();
  lVar3 = 0;
  __s10Foundation4DateVMa();
  lVar7 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar12 = 0x112d373d0;
  func_0x0001000285a8(0x112d373d0,&UNK_10d90f8f0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = (long)(auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x8_00;
  lVar8 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
  lVar8 = lVar6 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar8 - extraout_x12;
  FUN_103f02e64(param_1,auStack_80,0x112d387f8,&UNK_10d902650);
  if (lStack_68 == 0) {
    func_0x000103f02eac(auStack_80,0x112d387f8,&UNK_10d902650);
    return 0;
  }
  plVar4 = &lStack_88;
  _swift_dynamicCast(plVar4,auStack_80,PTR___sypN_11034f1a8 + 8,lVar2,6);
  lVar2 = _DAT_113812538;
  if (((ulong)plVar4 & 1) == 0) {
    return 0;
  }
  lStack_90 = *(long *)(unaff_x20 + _DAT_11302d828);
  lStack_98 = *(long *)(lStack_88 + _DAT_11302d828);
  puStack_a8 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_a0 = lVar8;
  FUN_103f02e64(lStack_88 + _DAT_113812538,lVar9,0x112d373d8,&UNK_10d9014c0);
  lVar12 = (long)*(int *)(lVar12 + 0x30);
  FUN_103f02e64(unaff_x20 + lVar2,lVar6,0x112d373d8,&UNK_10d9014c0);
  FUN_103f02e64(lVar9,lVar6 + lVar12,0x112d373d8,&UNK_10d9014c0);
  pcVar11 = *(code **)(lVar7 + 0x30);
  lVar2 = lVar6;
  (*pcVar11)(lVar6,1,lVar3);
  lVar8 = lStack_a0;
  if ((int)lVar2 == 1) {
    _objc_release(lStack_88);
    func_0x000103f02eac(lVar9,0x112d373d8,&UNK_10d9014c0);
    lVar12 = lVar6 + lVar12;
    (*pcVar11)(lVar12,1,lVar3);
    if ((int)lVar12 == 1) {
      func_0x000103f02eac(lVar6,0x112d373d8,&UNK_10d9014c0);
      uVar10 = 1;
      goto LAB_103f02e34;
    }
  }
  else {
    FUN_103f02e64(lVar6,lStack_a0,0x112d373d8,&UNK_10d9014c0);
    lVar2 = lVar6 + lVar12;
    (*pcVar11)(lVar2,1,lVar3);
    puVar1 = puStack_a8;
    if ((int)lVar2 != 1) {
      puVar5 = puStack_a8;
      (**(code **)(lVar7 + 0x20))(puStack_a8,lVar6 + lVar12,lVar3);
      func_0x000100df4c40();
      lVar12 = lVar8;
      __sSQ2eeoiySbx_xtFZTj(lVar8,puVar1,lVar3,puVar5);
      uVar10 = (uint)lVar12;
      _objc_release(lStack_88);
      pcVar11 = *(code **)(lVar7 + 8);
      (*pcVar11)(puVar1,lVar3);
      func_0x000103f02eac(lVar9,0x112d373d8,&UNK_10d9014c0);
      (*pcVar11)(lVar8,lVar3);
      func_0x000103f02eac(lVar6,0x112d373d8,&UNK_10d9014c0);
      goto LAB_103f02e34;
    }
    _objc_release(lStack_88);
    func_0x000103f02eac(lVar9,0x112d373d8,&UNK_10d9014c0);
    (**(code **)(lVar7 + 8))(lVar8,lVar3);
  }
  func_0x000103f02eac(lVar6,0x112d373d0,&UNK_10d90f8f0);
  uVar10 = 0;
LAB_103f02e34:
  return lStack_90 == lStack_98 & uVar10;
}



/* Entry: 103f02e64; end: 103f02eeb;  */

undefined8 FUN_103f02e64(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 103f02eec; end: 103f02f7b; -[SCDiscoverFeedInteractionEventIntegerType isEqual:] */

uint FUN_103f02eec(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_103f02abc(&uStack_40);
  _objc_release(param_1);
  func_0x000103f02eac(&uStack_40,0x112d387f8,&UNK_10d902650);
  return uVar1 & 1;
}



/* Entry: 103f02f7c; end: 103f02f7f; -[SCDiscoverFeedInteractionEventIntegerType copyWithZone:] */

void FUN_103f02f7c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103f02f80; end: 103f030df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f02f80(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  
  lVar2 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = &stack0xffffffffffffffb0 + -extraout_x8;
  uVar1 = 0x45554c4156;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x45554c4156,0xe500000000000000);
  func_0x000107c42740(param_1);
  _objc_release(uVar1);
  FUN_103f02e64(unaff_x20 + _DAT_113812538,puVar5,0x112d373d8,&UNK_10d9014c0);
  lVar2 = 0;
  __s10Foundation4DateVMa();
  lVar6 = *(long *)(lVar2 + -8);
  puVar3 = puVar5;
  (**(code **)(lVar6 + 0x30))(puVar5,1,lVar2);
  puVar4 = (undefined1 *)0x0;
  if ((int)puVar3 != 1) {
    __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF();
    (**(code **)(lVar6 + 8))(puVar5,lVar2);
    puVar4 = puVar3;
  }
  uVar1 = 0x4d415453454d4954;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4d415453454d4954,0xe900000000000050);
  func_0x000107c42744(param_1);
  _swift_unknownObjectRelease(puVar4);
  _objc_release(uVar1);
  return;
}



/* Entry: 103f030e0; end: 103f0312f; -[SCDiscoverFeedInteractionEventIntegerType encodeWithCoder:] */

void FUN_103f030e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_103f02f80(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103f03130; end: 103f0315f;  */

void FUN_103f03130(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_103f03160(param_1);
  return;
}



/* Entry: 103f03160; end: 103f033bf;  */

undefined8 FUN_103f03160(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  long extraout_x8;
  code *pcVar5;
  long extraout_x12;
  undefined8 unaff_x20;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lVar2 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar6 = (long)&uStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = lVar6 - extraout_x12;
  uVar1 = 0x45554c4156;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x45554c4156,0xe500000000000000);
  func_0x000107c41470(param_1);
  _objc_release(uVar1);
  uVar1 = 0x4d415453454d4954;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4d415453454d4954,0xe900000000000050);
  lVar2 = param_1;
  func_0x000107c41478();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (lVar2 == 0) {
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,lVar2);
    _swift_unknownObjectRelease(lVar2);
  }
  uStack_68 = uStack_88;
  uStack_70 = uStack_90;
  lStack_58 = lStack_78;
  uStack_60 = uStack_80;
  if (lStack_78 == 0) {
    func_0x000103f02eac(&uStack_70,0x112d387f8,&UNK_10d902650);
    lVar2 = 0;
    __s10Foundation4DateVMa();
    pcVar5 = *(code **)(*(long *)(lVar2 + -8) + 0x38);
    uVar4 = 1;
  }
  else {
    lVar2 = 0;
    __s10Foundation4DateVMa();
    lVar3 = lVar7;
    _swift_dynamicCast(lVar7,&uStack_70,PTR___sypN_11034f1a8 + 8,lVar2,6);
    pcVar5 = *(code **)(*(long *)(lVar2 + -8) + 0x38);
    uVar4 = (uint)lVar3 ^ 1;
  }
  (*pcVar5)(lVar7,uVar4,1,lVar2);
  FUN_103f02e64(lVar7,lVar6,0x112d373d8,&UNK_10d9014c0);
  __s10Foundation4DateVMa(0);
  lVar9 = *(long *)(lVar2 + -8);
  lVar3 = lVar6;
  (**(code **)(lVar9 + 0x30))(lVar6,1,lVar2);
  lVar8 = 0;
  if ((int)lVar3 != 1) {
    __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF();
    (**(code **)(lVar9 + 8))(lVar6,lVar2);
    lVar8 = lVar3;
  }
  func_0x000107c49478();
  _objc_release(lVar8);
  _objc_release(param_1);
  func_0x000103f02eac(lVar7,0x112d373d8,&UNK_10d9014c0);
  return unaff_x20;
}



/* Entry: 103f033c0; end: 103f033e7; -[SCDiscoverFeedInteractionEventIntegerType initWithCoder:] */

void FUN_103f033c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_103f03160();
  return;
}



/* Entry: 103f033e8; end: 103f03487; -[SCDiscoverFeedInteractionEventIntegerType description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f033e8(long param_1)

{
  long lVar1;
  long extraout_x8;
  undefined8 *puVar2;
  
  lVar1 = 0;
  FUN_103ef1cdc();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar2 = (undefined8 *)(&stack0xffffffffffffffe0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  *puVar2 = *(undefined8 *)(param_1 + _DAT_11302d828);
  FUN_103f02e64(param_1 + _DAT_113812538,(undefined1 *)((long)puVar2 + (long)*(int *)(lVar1 + 0x14))
                ,0x112d373d8,&UNK_10d9014c0);
  FUN_103f02910(puVar2);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103f03488; end: 103f03503; -[SCDiscoverFeedInteractionEventIntegerType init] */

void FUN_103f03488(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCDiscoverFeedRankingServices/SCDiscoverFeedInteractionEventIntegerTypeWrapper.swift",
             0x54,2,0x45,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f034d0);
  (*pcVar1)();
}



/* Entry: 103f03504; end: 103f03533; -[SCDiscoverFeedInteractionEventIntegerType .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f03504(long param_1)

{
  func_0x000103f02eac(param_1 + _DAT_113812538,0x112d373d8,&UNK_10d9014c0);
  return;
}



/* Entry: 103f03534; end: 103f0353b;  */

void FUN_103f03534(void)

{
  if (lRam000000011302d858 != 0) {
    return;
  }
  _swift_getSingletonMetadata(0,&DAT_10e7d4438);
  return;
}



/* Entry: 103f0353c; end: 103f03573;  */

void FUN_103f0353c(undefined8 param_1)

{
  if (lRam000000011302d858 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e7d4438);
  return;
}



/* Entry: 103f03574; end: 103f035ef;  */

void FUN_103f03574(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_30 = PTR___sBi64_WV_11034d670 + 0x40;
  lVar1 = 0x13f;
  func_0x0001000776dc();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_updateClassMetadata2(param_1,0x100,2,&puStack_30,param_1 + 0x50);
  }
  return;
}



/* Entry: 103f035f0; end: 103f0360b; -[SCDiscoverFeedRankingResults rankedStories] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f035f0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_11302d868);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    FUN_103f038a8(0,0x112e0fd70,&PTR_PTR_1126c2098);
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



/* Entry: 103f0360c; end: 103f03627; -[SCDiscoverFeedRankingResults storySlots] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f0360c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_11302d870);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    FUN_103f038a8(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
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



/* Entry: 103f03628; end: 103f03687;  */

void FUN_103f03628(long param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + *param_3);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    FUN_103f038a8(0,param_4,param_5);
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



/* Entry: 103f03688; end: 103f0368b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f03688(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11302d868) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11302d870) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f0368c; end: 103f037b3; -[SCDiscoverFeedRankingResults initWithRankedStories:storySlots:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f0368c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  _swift_getObjectType();
  if (param_3 != 0) {
    uVar2 = 0;
    FUN_103f038a8(0,0x112e0fd70,&PTR_PTR_1126c2098);
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_3,uVar2);
  }
  if (param_4 == 0) {
    param_4 = 0;
  }
  else {
    uVar2 = 0;
    FUN_103f038a8(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_4,uVar2);
  }
  *(long *)(param_1 + _DAT_11302d868) = param_3;
  *(long *)(param_1 + _DAT_11302d870) = param_4;
  lStack_40 = param_1;
  lStack_38 = lVar1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f037b4; end: 103f037b7; -[SCDiscoverFeedRankingResults copyWithZone:] */

void FUN_103f037b4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103f037b8; end: 103f037d3; -[SCDiscoverFeedRankingResults description] */

void FUN_103f037b8(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103f037d4; end: 103f0384f; -[SCDiscoverFeedRankingResults init] */

void FUN_103f037d4(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCDiscoverFeedRankingServices/SCDiscoverFeedRankingResultsWrapper.swift",0x47,2,0x28,0
            );
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f0381c);
  (*pcVar1)();
}



/* Entry: 103f03850; end: 103f03887; -[SCDiscoverFeedRankingResults .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f03850(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11302d868));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11302d870));
  return;
}



/* Entry: 103f03888; end: 103f038a7;  */

void FUN_103f03888(void)

{
  _objc_opt_self(&PTR_PTR_112963ff0);
  return;
}



/* Entry: 103f038a8; end: 103f038e7;  */

void FUN_103f038a8(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 103f038e8; end: 103f038eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f038e8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11302d868) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11302d870) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f038ec; end: 103f038fb; -[SCDiscoverFeedStoryIHFilterConfig longImpressionCountThreshold] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103f038ec(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11302d8a0);
}



/* Entry: 103f038fc; end: 103f0390f; -[SCDiscoverFeedStoryIHFilterConfig totalImpressionTimeThresholdSeconds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103f038fc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11302d8a8);
}



/* Entry: 103f03910; end: 103f039d7; -[SCDiscoverFeedStoryIHFilterConfig initWithLongImpressionCountThreshold:totalImpressionTimeThresholdSeconds:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f03910(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11302d8a0) = param_3;
  *(undefined8 *)(param_1 + _DAT_11302d8a8) = param_4;
  lStack_40 = param_1;
  lStack_38 = lVar1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f039d8; end: 103f039db; -[SCDiscoverFeedStoryIHFilterConfig copyWithZone:] */

void FUN_103f039d8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103f039dc; end: 103f039f7; -[SCDiscoverFeedStoryIHFilterConfig description] */

void FUN_103f039dc(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103f039f8; end: 103f03a93; -[SCDiscoverFeedStoryIHFilterConfig init] */

void FUN_103f039f8(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCDiscoverFeedRankingServices/SCDiscoverFeedStoryIHFilterConfigWrapper.swift",0x4c,2,
             0x26,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f03a40);
  (*pcVar1)();
}



/* Entry: 103f03a94; end: 103f03a97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f03a94(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11302d8a0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11302d8a8) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f03a98; end: 103f03aa7; -[SCDiscoverFeedStoryIHMetadata storyDedupeFp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103f03a98(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11302d8d8);
}



/* Entry: 103f03aa8; end: 103f03abf; -[SCDiscoverFeedStoryIHMetadata allowanceType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103f03aa8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11302d8e0);
}



/* Entry: 103f03ac0; end: 103f03beb; -[SCDiscoverFeedStoryIHMetadata initWithStoryDedupeFp:allowanceType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f03ac0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11302d8d8) = param_3;
  *(undefined8 *)(param_1 + _DAT_11302d8e0) = param_4;
  lStack_40 = param_1;
  lStack_38 = lVar1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f03bec; end: 103f03bef; -[SCDiscoverFeedStoryIHMetadata copyWithZone:] */

void FUN_103f03bec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103f03bf0; end: 103f03ccf; -[SCDiscoverFeedStoryIHMetadata encodeWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f03bf0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain();
  uVar1 = 0x45445f59524f5453;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x45445f59524f5453,0xef50465f45505544);
  func_0x000107c4273c(param_3);
  _objc_release(uVar1);
  uVar1 = 0x434e41574f4c4c41;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x434e41574f4c4c41,0xee00455059545f45);
  func_0x000107c42740(param_3);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103f03cd0; end: 103f03da7;  */

undefined8 FUN_103f03cd0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 unaff_x20;
  
  _objc_allocWithZone();
  uVar1 = 0x45445f59524f5453;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x45445f59524f5453,0xef50465f45505544);
  func_0x000107c4146c(param_1);
  _objc_release(uVar1);
  uVar1 = 0x434e41574f4c4c41;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x434e41574f4c4c41,0xee00455059545f45);
  func_0x000107c41470(param_1);
  _objc_release(uVar1);
  func_0x000107c48a68(unaff_x20);
  _objc_release(param_1);
  return unaff_x20;
}



/* Entry: 103f03da8; end: 103f03e7f; -[SCDiscoverFeedStoryIHMetadata initWithCoder:] */

undefined8 FUN_103f03da8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = 0x45445f59524f5453;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x45445f59524f5453,0xef50465f45505544);
  func_0x000107c4146c(param_3);
  _objc_release(uVar1);
  uVar1 = 0x434e41574f4c4c41;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x434e41574f4c4c41,0xee00455059545f45);
  func_0x000107c41470(param_3);
  _objc_release(uVar1);
  func_0x000107c48a68(param_1);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 103f03e80; end: 103f03e9b; -[SCDiscoverFeedStoryIHMetadata description] */

void FUN_103f03e80(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103f03e9c; end: 103f03f17; -[SCDiscoverFeedStoryIHMetadata init] */

void FUN_103f03e9c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCDiscoverFeedRankingServices/SCDiscoverFeedStoryIHMetadataWrapper.swift",0x48,2,0x39,
             0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f03ee4);
  (*pcVar1)();
}



/* Entry: 103f03f18; end: 103f03f1b; -[SCDiscoverFeedStoryIHMetadata .cxx_destruct] */

void FUN_103f03f18(void)

{
  return;
}



/* Entry: 103f03f1c; end: 103f03f3b;  */

void FUN_103f03f1c(void)

{
  _objc_opt_self(&PTR_PTR_112964190);
  return;
}



/* Entry: 103f03f3c; end: 103f03f3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f03f3c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11302d8d8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11302d8e0) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f03f40; end: 103f03f4f; -[SCDiscoverFeedStoryInteractionHistory storyDedupeFp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103f03f40(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11302d910);
}



/* Entry: 103f03f50; end: 103f03f5f; -[SCDiscoverFeedStoryInteractionHistory isSubscribed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f03f50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302d918));
  return;
}



/* Entry: 103f03f60; end: 103f03f6f; -[SCDiscoverFeedStoryInteractionHistory isHidden] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f03f60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302d920));
  return;
}



/* Entry: 103f03f70; end: 103f03f7f; -[SCDiscoverFeedStoryInteractionHistory reportAction] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f03f70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302d928));
  return;
}



/* Entry: 103f03f80; end: 103f03f8f; -[SCDiscoverFeedStoryInteractionHistory shortImpressionScore] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f03f80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302d930));
  return;
}



/* Entry: 103f03f90; end: 103f03f9f; -[SCDiscoverFeedStoryInteractionHistory longImpressionScore] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f03f90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302d938));
  return;
}



/* Entry: 103f03fa0; end: 103f03faf; -[SCDiscoverFeedStoryInteractionHistory qualifiedLongImpressionScore] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f03fa0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302d940));
  return;
}



/* Entry: 103f03fb0; end: 103f03fbf; -[SCDiscoverFeedStoryInteractionHistory shortViewScore] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f03fb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302d948));
  return;
}



/* Entry: 103f03fc0; end: 103f03fcf; -[SCDiscoverFeedStoryInteractionHistory longViewScore] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f03fc0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302d950));
  return;
}



/* Entry: 103f03fd0; end: 103f03fdb; -[SCDiscoverFeedStoryInteractionHistory longImpressionThumbnailId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f03fd0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11302d958))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11302d958);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103f03fdc; end: 103f03fe7; -[SCDiscoverFeedStoryInteractionHistory longViewThumbnailId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f03fdc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11302d960))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11302d960);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103f03fe8; end: 103f03ff7; -[SCDiscoverFeedStoryInteractionHistory latestVersion] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103f03fe8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11302d968);
}



/* Entry: 103f03ff8; end: 103f04007; -[SCDiscoverFeedStoryInteractionHistory latestWatchedVersion] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103f03ff8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11302d970);
}



/* Entry: 103f04008; end: 103f04017; -[SCDiscoverFeedStoryInteractionHistory tapStoryKey] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103f04008(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11302d978);
}



/* Entry: 103f04018; end: 103f04027; -[SCDiscoverFeedStoryInteractionHistory numberOfWatches] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f04018(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302d980));
  return;
}



/* Entry: 103f04028; end: 103f04037; -[SCDiscoverFeedStoryInteractionHistory snapCompletionPercent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f04028(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302d988));
  return;
}



/* Entry: 103f04038; end: 103f04047; -[SCDiscoverFeedStoryInteractionHistory latestLongImpressionTimestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103f04038(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11302d990);
}



/* Entry: 103f04048; end: 103f04057; -[SCDiscoverFeedStoryInteractionHistory storyDurationSec] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_103f04048(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11302d998);
}



/* Entry: 103f04058; end: 103f04067; -[SCDiscoverFeedStoryInteractionHistory entranceIntent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_103f04058(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11302d9a0);
}



/* Entry: 103f04068; end: 103f04077; -[SCDiscoverFeedStoryInteractionHistory exitIntent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_103f04068(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11302d9a8);
}



/* Entry: 103f04078; end: 103f04087; -[SCDiscoverFeedStoryInteractionHistory longImpressionCountOnLatestVersion] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_103f04078(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11302d9b0);
}



/* Entry: 103f04088; end: 103f04097; -[SCDiscoverFeedStoryInteractionHistory qualifiedLongImpressionCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_103f04088(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11302d9b8);
}



/* Entry: 103f04098; end: 103f040a7; -[SCDiscoverFeedStoryInteractionHistory numSnapsViewedFromLatestVersion] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_103f04098(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11302d9c0);
}



/* Entry: 103f040a8; end: 103f040b7; -[SCDiscoverFeedStoryInteractionHistory totalWatchTimeOnLatestVersion] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_103f040a8(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11302d9c8);
}



/* Entry: 103f040b8; end: 103f040c7; -[SCDiscoverFeedStoryInteractionHistory totalImpressionTimeOnLatestVersion] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_103f040b8(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11302d9d0);
}



/* Entry: 103f040c8; end: 103f040d7; -[SCDiscoverFeedStoryInteractionHistory totalWatchTimeAllVersion] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_103f040c8(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11302d9d8);
}



/* Entry: 103f040d8; end: 103f040e7; -[SCDiscoverFeedStoryInteractionHistory totalImpressionTimeAllVersion] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_103f040d8(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11302d9e0);
}



/* Entry: 103f040e8; end: 103f040f7; -[SCDiscoverFeedStoryInteractionHistory totalQualifiedImpressionTimeOnLatestVersion] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_103f040e8(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11302d9e8);
}



/* Entry: 103f040f8; end: 103f04107; -[SCDiscoverFeedStoryInteractionHistory numSnapsInLatestVersion] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_103f040f8(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11302d9f0);
}



/* Entry: 103f04108; end: 103f04117; -[SCDiscoverFeedStoryInteractionHistory sliEntryEvent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_103f04108(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11302d9f8);
}



/* Entry: 103f04118; end: 103f04127; -[SCDiscoverFeedStoryInteractionHistory sliExitIntent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_103f04118(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11302da00);
}



/* Entry: 103f04128; end: 103f04137; -[SCDiscoverFeedStoryInteractionHistory totalWatchTimeMsecs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_103f04128(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11302da08);
}



/* Entry: 103f04138; end: 103f04147; -[SCDiscoverFeedStoryInteractionHistory commentsTrayViewTimeInMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_103f04138(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11302da10);
}



/* Entry: 103f04148; end: 103f04157; -[SCDiscoverFeedStoryInteractionHistory decayedNumSnapsViewed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f04148(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302da18));
  return;
}



/* Entry: 103f04158; end: 103f04167; -[SCDiscoverFeedStoryInteractionHistory decayedTotalWatchTime] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f04158(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302da20));
  return;
}



/* Entry: 103f04168; end: 103f04177; -[SCDiscoverFeedStoryInteractionHistory decayedTotalImpressionTime] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f04168(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302da28));
  return;
}



/* Entry: 103f04178; end: 103f04187; -[SCDiscoverFeedStoryInteractionHistory decayedTotalQualifiedImpressionTime] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f04178(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302da30));
  return;
}



/* Entry: 103f04188; end: 103f04197; -[SCDiscoverFeedStoryInteractionHistory storyType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103f04188(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11302da38);
}



/* Entry: 103f04198; end: 103f041a7; -[SCDiscoverFeedStoryInteractionHistory allowanceType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103f04198(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11302da40);
}



/* Entry: 103f041a8; end: 103f041b3; -[SCDiscoverFeedStoryInteractionHistory displayName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f041a8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11302da48))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11302da48);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103f041b4; end: 103f041c3; -[SCDiscoverFeedStoryInteractionHistory isShared] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f041b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302da50));
  return;
}



/* Entry: 103f041c4; end: 103f041d3; -[SCDiscoverFeedStoryInteractionHistory openedProfile] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f041c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302da58));
  return;
}



/* Entry: 103f041d4; end: 103f041df; -[SCDiscoverFeedStoryInteractionHistory pageSessionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f041d4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11302da60))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11302da60);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103f041e0; end: 103f041ef; -[SCDiscoverFeedStoryInteractionHistory numBoosts] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_103f041e0(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11302da68);
}



/* Entry: 103f041f0; end: 103f041ff; -[SCDiscoverFeedStoryInteractionHistory compositeStoryId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f041f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302da70));
  return;
}



/* Entry: 103f04200; end: 103f0420b; -[SCDiscoverFeedStoryInteractionHistory tileId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f04200(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11302da78))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11302da78);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103f0420c; end: 103f04263;  */

void FUN_103f0420c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 103f04264; end: 103f04273; -[SCDiscoverFeedStoryInteractionHistory feedType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_103f04264(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11302da80);
}



/* Entry: 103f04274; end: 103f04283; -[SCDiscoverFeedStoryInteractionHistory isBoosted] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f04274(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302da88));
  return;
}



/* Entry: 103f04284; end: 103f04293; -[SCDiscoverFeedStoryInteractionHistory isSendComment] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f04284(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302da90));
  return;
}



/* Entry: 103f04294; end: 103f042a3; -[SCDiscoverFeedStoryInteractionHistory isRecommended] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f04294(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302da98));
  return;
}



/* Entry: 103f042a4; end: 103f042b3; -[SCDiscoverFeedStoryInteractionHistory isInFeedSurveyResponsePositive] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f042a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302daa0));
  return;
}



/* Entry: 103f042b4; end: 103f042c3; -[SCDiscoverFeedStoryInteractionHistory isInFeedSurveyResponseNegative] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f042b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302daa8));
  return;
}


