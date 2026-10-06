/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1043f3be4; end: 1043f3e5b; -[SCStoriesPostingOurStoryMetadata initWithStoryGroupId:businessId:displayName:spotlightDisplayName:spotlightDescription:topics:ourStoryDestinations:shouldCreateHighlight:shareAnonymously:placeTagsMetadata:originalPostCompositeStoryId:spotlightDescriptionMentions:spotlightTile:] */

void FUN_1043f3be4(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7,long param_8,long param_9,undefined1 param_10)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long in_stack_00000020;
  long in_stack_00000028;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  
  if (param_3 == 0) {
    uStack_98 = 0;
    lStack_90 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uStack_98 = param_2;
    lStack_90 = param_3;
  }
  if (param_4 == 0) {
    uStack_a8 = 0;
    lStack_a0 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uStack_a8 = param_2;
    lStack_a0 = param_4;
  }
  if (param_5 == 0) {
    uStack_b8 = 0;
    lStack_b0 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uStack_b8 = param_2;
    lStack_b0 = param_5;
  }
  lVar1 = param_6;
  _objc_retain();
  lVar2 = param_7;
  _objc_retain();
  lVar3 = param_8;
  _objc_retain();
  lVar4 = param_9;
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  lVar5 = in_stack_00000028;
  _objc_retain();
  _objc_retain();
  if (lVar1 == 0) {
    uStack_d8 = 0;
    lStack_d0 = 0;
    uVar7 = param_2;
    param_2 = uStack_d8;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uVar7 = param_2;
    _objc_release(lVar1);
    lStack_d0 = param_6;
  }
  if (lVar2 == 0) {
    param_7 = 0;
    uVar7 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(lVar2);
  }
  if (lVar3 == 0) {
    param_8 = 0;
  }
  else {
    FUN_104409d84();
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ();
    _objc_release(lVar3);
  }
  if (lVar4 == 0) {
    param_9 = 0;
  }
  else {
    FUN_1043f6038(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ();
    _objc_release(lVar4);
  }
  if (in_stack_00000020 != 0) {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(in_stack_00000020);
  }
  if (lVar5 != 0) {
    uVar6 = 0;
    FUN_1043f6038(0,0x112d70b48,&PTR_PTR_1126d95f0);
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
              (in_stack_00000028,uVar6);
    _objc_release(lVar5);
  }
  func_0x0001043f3a50(lStack_90,uStack_98,lStack_a0,uStack_a8,lStack_b0,uStack_b8,lStack_d0,param_2,
                      param_7,uVar7,param_8,param_9,param_10);
  return;
}



/* Entry: 1043f3e5c; end: 1043f3e5f; -[SCStoriesPostingOurStoryMetadata copyWithZone:] */

void FUN_1043f3e5c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1043f3e60; end: 1043f435f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043f3e60(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  
  if (((undefined8 *)(unaff_x20 + _DAT_113076980))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113076980);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0x52475f59524f5453;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x52475f59524f5453,0xee0044495f50554f);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_113076988))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113076988);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0x5353454e49535542;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5353454e49535542,0xeb0000000044495f);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_113076990))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113076990);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0x5f59414c50534944;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f59414c50534944,0xec000000454d414e);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_113076998))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113076998);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0xd000000000000016;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000016,0x800000010f1fb750);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_1130769a0))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_1130769a0);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0xd000000000000015;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f1fb770);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  lVar3 = *(long *)(unaff_x20 + _DAT_1130769a8);
  if (lVar3 != 0) {
    uVar1 = 0;
    FUN_104409d84(0);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar3,uVar1);
  }
  uVar1 = 0x534349504f54;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x534349504f54,0xe600000000000000);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(lVar3);
  _objc_release(uVar1);
  lVar3 = *(long *)(unaff_x20 + _DAT_1130769b0);
  if (lVar3 != 0) {
    uVar1 = 0;
    FUN_1043f6038(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar3,uVar1);
  }
  uVar1 = 0xd000000000000016;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000016,0x800000010f1fb790);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(lVar3);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000017;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000017,0x800000010f1fb7b0);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000011;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x800000010f1fb7d0);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000013;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f1fb7f0);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_1130769d0))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_1130769d0);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0xd000000000000020;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000020,0x800000010f1fb810);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  lVar3 = *(long *)(unaff_x20 + _DAT_1130769d8);
  if (lVar3 != 0) {
    uVar1 = 0;
    FUN_1043f6038(0,0x112d70b48,&PTR_PTR_1126d95f0);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar3,uVar1);
  }
  uVar1 = 0xd00000000000001e;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001e,0x800000010f1fb840);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(lVar3);
  _objc_release(uVar1);
  uVar1 = 0x4847494c544f5053;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4847494c544f5053,0xee00454c49545f54);
  func_0x00010bf93020(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1043f4360; end: 1043f43af; -[SCStoriesPostingOurStoryMetadata encodeWithCoder:] */

void FUN_1043f4360(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_1043f3e60(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1043f43b0; end: 1043f43df;  */

void FUN_1043f43b0(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1043f43e0(param_1);
  return;
}



/* Entry: 1043f43e0; end: 1043f4f9f;  */

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_1043f43e0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 unaff_x20;
  long lVar9;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  uVar2 = 0x52475f59524f5453;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x52475f59524f5453,0xee0044495f50554f);
  lVar9 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar9 == 0) {
    uStack_a8 = 0;
    uStack_b0 = 0;
    lStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar9);
    _swift_unknownObjectRelease(lVar9);
  }
  puVar1 = PTR___sypN_11034f1a8;
  uStack_88 = uStack_a8;
  uStack_90 = uStack_b0;
  lStack_78 = lStack_98;
  uStack_80 = uStack_a0;
  if (lStack_98 == 0) {
    func_0x00010006e7f4(&uStack_90);
    lStack_108 = 0;
    lVar9 = 0;
  }
  else {
    plVar3 = &lStack_c0;
    _swift_dynamicCast(plVar3,&uStack_90,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    lVar9 = lStack_b8;
    lStack_108 = lStack_c0;
    if ((int)plVar3 == 0) {
      lStack_108 = 0;
      lVar9 = 0;
    }
  }
  uVar2 = 0x5353454e49535542;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5353454e49535542,0xeb0000000044495f);
  lVar4 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar4 == 0) {
    uStack_a8 = 0;
    uStack_b0 = 0;
    lStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar4);
    _swift_unknownObjectRelease(lVar4);
  }
  uStack_88 = uStack_a8;
  uStack_90 = uStack_b0;
  lStack_78 = lStack_98;
  uStack_80 = uStack_a0;
  if (lStack_98 == 0) {
    func_0x00010006e7f4(&uStack_90);
    lStack_110 = 0;
    lVar4 = 0;
  }
  else {
    plVar3 = &lStack_c0;
    _swift_dynamicCast(plVar3,&uStack_90,puVar1 + 8,PTR___sSSN_11034da80,6);
    lVar4 = lStack_b8;
    lStack_110 = lStack_c0;
    if ((int)plVar3 == 0) {
      lStack_110 = 0;
      lVar4 = 0;
    }
  }
  uVar2 = 0x5f59414c50534944;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f59414c50534944,0xec000000454d414e);
  lVar5 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar5 == 0) {
    uStack_a8 = 0;
    uStack_b0 = 0;
    lStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar5);
    _swift_unknownObjectRelease(lVar5);
  }
  uStack_88 = uStack_a8;
  uStack_90 = uStack_b0;
  lStack_78 = lStack_98;
  uStack_80 = uStack_a0;
  if (lStack_98 == 0) {
    func_0x00010006e7f4(&uStack_90);
    lStack_118 = 0;
    lVar5 = 0;
  }
  else {
    plVar3 = &lStack_c0;
    _swift_dynamicCast(plVar3,&uStack_90,puVar1 + 8,PTR___sSSN_11034da80,6);
    lVar5 = lStack_b8;
    lStack_118 = lStack_c0;
    if ((int)plVar3 == 0) {
      lStack_118 = 0;
      lVar5 = 0;
    }
  }
  uVar2 = 0xd000000000000016;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000016,0x800000010f1fb750);
  lVar6 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar6 == 0) {
    uStack_a8 = 0;
    uStack_b0 = 0;
    lStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar6);
    _swift_unknownObjectRelease(lVar6);
  }
  uStack_88 = uStack_a8;
  uStack_90 = uStack_b0;
  lStack_78 = lStack_98;
  uStack_80 = uStack_a0;
  if (lStack_98 == 0) {
    func_0x00010006e7f4(&uStack_90);
    lStack_120 = 0;
    lStack_c8 = 0;
  }
  else {
    plVar3 = &lStack_c0;
    _swift_dynamicCast(plVar3,&uStack_90,puVar1 + 8,PTR___sSSN_11034da80,6);
    lStack_120 = lStack_c0;
    lStack_c8 = lStack_b8;
    if ((int)plVar3 == 0) {
      lStack_120 = 0;
      lStack_c8 = 0;
    }
  }
  uVar2 = 0xd000000000000015;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f1fb770);
  lVar6 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar6 == 0) {
    uStack_a8 = 0;
    uStack_b0 = 0;
    lStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar6);
    _swift_unknownObjectRelease(lVar6);
  }
  uStack_88 = uStack_a8;
  uStack_90 = uStack_b0;
  lStack_78 = lStack_98;
  uStack_80 = uStack_a0;
  if (lStack_98 == 0) {
    func_0x00010006e7f4(&uStack_90);
    lStack_128 = 0;
    lStack_e8 = 0;
  }
  else {
    plVar3 = &lStack_c0;
    _swift_dynamicCast(plVar3,&uStack_90,puVar1 + 8,PTR___sSSN_11034da80,6);
    lStack_128 = lStack_c0;
    lStack_e8 = lStack_b8;
    if ((int)plVar3 == 0) {
      lStack_128 = 0;
      lStack_e8 = 0;
    }
  }
  uVar2 = 0x534349504f54;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x534349504f54,0xe600000000000000);
  lVar6 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar6 == 0) {
    uStack_a8 = 0;
    uStack_b0 = 0;
    lStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar6);
    _swift_unknownObjectRelease(lVar6);
  }
  uStack_88 = uStack_a8;
  uStack_90 = uStack_b0;
  lStack_78 = lStack_98;
  uStack_80 = uStack_a0;
  if (lStack_98 == 0) {
    func_0x00010006e7f4(&uStack_90);
    lStack_f8 = 0;
  }
  else {
    uVar2 = 0x113076a00;
    func_0x0001000285a8(0x113076a00,&UNK_10dcf80a8);
    plVar3 = &lStack_c0;
    _swift_dynamicCast(plVar3,&uStack_90,puVar1 + 8,uVar2,6);
    lStack_f8 = lStack_c0;
    if ((int)plVar3 == 0) {
      lStack_f8 = 0;
    }
  }
  uVar2 = 0xd000000000000016;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000016,0x800000010f1fb790);
  lVar6 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar6 == 0) {
    uStack_a8 = 0;
    uStack_b0 = 0;
    lStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar6);
    _swift_unknownObjectRelease(lVar6);
  }
  uStack_88 = uStack_a8;
  uStack_90 = uStack_b0;
  lStack_78 = lStack_98;
  uStack_80 = uStack_a0;
  if (lStack_98 == 0) {
    func_0x00010006e7f4(&uStack_90);
    lStack_100 = 0;
  }
  else {
    uVar2 = 0x112da1fa0;
    func_0x0001000285a8(0x112da1fa0,&UNK_10d945e90);
    plVar3 = &lStack_c0;
    _swift_dynamicCast(plVar3,&uStack_90,puVar1 + 8,uVar2,6);
    lStack_100 = lStack_c0;
    if ((int)plVar3 == 0) {
      lStack_100 = 0;
    }
  }
  uVar2 = 0xd000000000000017;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000017,0x800000010f1fb7b0);
  func_0x00010bf66ce0();
  _objc_release(uVar2);
  uVar2 = 0xd000000000000011;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x800000010f1fb7d0);
  lVar6 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar6 == 0) {
    uStack_a8 = 0;
    uStack_b0 = 0;
    lStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar6);
    _swift_unknownObjectRelease(lVar6);
  }
  uStack_88 = uStack_a8;
  uStack_90 = uStack_b0;
  lStack_78 = lStack_98;
  uStack_80 = uStack_a0;
  if (lStack_98 == 0) {
    func_0x00010006e7f4(&uStack_90);
    lStack_e0 = 0;
  }
  else {
    uVar2 = 0;
    FUN_1043f6038(0,0x1130769f8,&PTR_PTR_1126c4ea8);
    plVar3 = &lStack_c0;
    _swift_dynamicCast(plVar3,&uStack_90,puVar1 + 8,uVar2,6);
    lStack_e0 = lStack_c0;
    if ((int)plVar3 == 0) {
      lStack_e0 = 0;
    }
  }
  uVar2 = 0xd000000000000013;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f1fb7f0);
  lVar6 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar6 == 0) {
    uStack_a8 = 0;
    uStack_b0 = 0;
    lStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar6);
    _swift_unknownObjectRelease(lVar6);
  }
  uStack_88 = uStack_a8;
  uStack_90 = uStack_b0;
  lStack_78 = lStack_98;
  uStack_80 = uStack_a0;
  if (lStack_98 == 0) {
    func_0x00010006e7f4(&uStack_90);
    lStack_f0 = 0;
  }
  else {
    uVar2 = 0;
    FUN_1043f6038(0,0x1130769f0,&PTR_PTR_1126c4dc0);
    plVar3 = &lStack_c0;
    _swift_dynamicCast(plVar3,&uStack_90,puVar1 + 8,uVar2,6);
    lStack_f0 = lStack_c0;
    if ((int)plVar3 == 0) {
      lStack_f0 = 0;
    }
  }
  uVar2 = 0xd000000000000020;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000020,0x800000010f1fb810);
  lVar6 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar6 == 0) {
    uStack_a8 = 0;
    uStack_b0 = 0;
    lStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar6);
    _swift_unknownObjectRelease(lVar6);
  }
  uStack_88 = uStack_a8;
  uStack_90 = uStack_b0;
  lStack_78 = lStack_98;
  uStack_80 = uStack_a0;
  if (lStack_98 == 0) {
    func_0x00010006e7f4(&uStack_90);
    lStack_130 = 0;
    lVar6 = 0;
  }
  else {
    plVar3 = &lStack_c0;
    _swift_dynamicCast(plVar3,&uStack_90,puVar1 + 8,PTR___sSSN_11034da80,6);
    lVar6 = lStack_b8;
    lStack_130 = lStack_c0;
    if ((int)plVar3 == 0) {
      lStack_130 = 0;
      lVar6 = 0;
    }
  }
  uVar2 = 0xd00000000000001e;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001e,0x800000010f1fb840);
  lVar7 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar7 == 0) {
    uStack_a8 = 0;
    uStack_b0 = 0;
    lStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar7);
    _swift_unknownObjectRelease(lVar7);
  }
  uStack_88 = uStack_a8;
  uStack_90 = uStack_b0;
  lStack_78 = lStack_98;
  uStack_80 = uStack_a0;
  if (lStack_98 == 0) {
    func_0x00010006e7f4(&uStack_90);
    lVar7 = 0;
  }
  else {
    uVar2 = 0x1130769e8;
    func_0x0001000285a8(0x1130769e8,&UNK_10dcf8098);
    plVar3 = &lStack_c0;
    _swift_dynamicCast(plVar3,&uStack_90,puVar1 + 8,uVar2,6);
    lVar7 = lStack_c0;
    if ((int)plVar3 == 0) {
      lVar7 = 0;
    }
  }
  uVar2 = 0x4847494c544f5053;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4847494c544f5053,0xee00454c49545f54);
  lVar8 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar8 == 0) {
    uStack_a8 = 0;
    uStack_b0 = 0;
    lStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar8);
    _swift_unknownObjectRelease(lVar8);
  }
  uStack_88 = uStack_a8;
  uStack_90 = uStack_b0;
  lStack_78 = lStack_98;
  uStack_80 = uStack_a0;
  if (lStack_98 == 0) {
    func_0x00010006e7f4(&uStack_90);
    lVar8 = 0;
  }
  else {
    uVar2 = 0;
    FUN_1043f8630(0);
    plVar3 = &lStack_c0;
    _swift_dynamicCast(plVar3,&uStack_90,puVar1 + 8,uVar2,6);
    lVar8 = lStack_c0;
    if ((int)plVar3 == 0) {
      lVar8 = 0;
    }
  }
  if (lVar9 == 0) {
    lStack_108 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lStack_108,lVar9);
    _swift_bridgeObjectRelease(lVar9);
  }
  if (lVar4 == 0) {
    lStack_110 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lStack_110,lVar4);
    _swift_bridgeObjectRelease(lVar4);
  }
  if (lVar5 == 0) {
    lStack_118 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lStack_118,lVar5);
    _swift_bridgeObjectRelease(lVar5);
  }
  if (lStack_c8 == 0) {
    lStack_120 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lStack_120,lStack_c8);
    _swift_bridgeObjectRelease(lStack_c8);
  }
  if (lStack_e8 == 0) {
    lStack_128 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lStack_128,lStack_e8);
    _swift_bridgeObjectRelease(lStack_e8);
  }
  if (lStack_f8 == 0) {
    lStack_e8 = 0;
  }
  else {
    uVar2 = 0;
    FUN_104409d84(0);
    lStack_e8 = lStack_f8;
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lStack_f8,uVar2);
    _swift_bridgeObjectRelease(lStack_f8);
  }
  if (lStack_100 == 0) {
    lVar9 = 0;
  }
  else {
    uVar2 = 0;
    FUN_1043f6038(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    lVar9 = lStack_100;
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lStack_100,uVar2);
    _swift_bridgeObjectRelease(lStack_100);
  }
  if (lVar6 == 0) {
    lStack_130 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lStack_130,lVar6);
    _swift_bridgeObjectRelease(lVar6);
  }
  lVar4 = lVar7;
  if (lVar7 != 0) {
    uVar2 = 0;
    FUN_1043f6038(0,0x112d70b48,&PTR_PTR_1126d95f0);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar7,uVar2);
    _swift_bridgeObjectRelease(lVar7);
  }
  func_0x00010c04d720();
  _objc_release(lStack_108);
  _objc_release(lStack_110);
  _objc_release(lStack_118);
  _objc_release(lStack_120);
  _objc_release(lStack_128);
  _objc_release(lStack_e8);
  _objc_release(lVar9);
  _objc_release(lStack_130);
  _objc_release(lVar4);
  _objc_release(param_1);
  _objc_release(lStack_e0);
  _objc_release(lStack_f0);
  _objc_release(lVar8);
  return unaff_x20;
}



/* Entry: 1043f4fa0; end: 1043f4fc7; -[SCStoriesPostingOurStoryMetadata initWithCoder:] */

void FUN_1043f4fa0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1043f43e0();
  return;
}



/* Entry: 1043f4fc8; end: 1043f4ffb; -[SCStoriesPostingOurStoryMetadata description] */

void FUN_1043f4fc8(void)

{
  undefined1 auStack_c8 [184];
  
  func_0x0001043f5ddc(auStack_c8);
  FUN_1043ef894(auStack_c8);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043f4ffc; end: 1043f5043; -[SCStoriesPostingOurStoryMetadata init] */

void FUN_1043f4ffc(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCStoriesPostingAPI/SCStoriesPostingOurStoryMetadataWrapper.swift",0x41,2,0xa2,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1043f5044);
  (*pcVar1)();
}



/* Entry: 1043f5044; end: 1043f505f; +[SCStoriesPostingOurStoryMetadataBuilder storiesPostingOurStoryMetadata] */

void FUN_1043f5044(void)

{
  _swift_getObjCClassMetadata();
  _objc_allocWithZone();
  func_0x00010bfee200();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043f5060; end: 1043f509f; +[SCStoriesPostingOurStoryMetadataBuilder storiesPostingOurStoryMetadataWithExistingStoriesPostingOurStoryMetadata:] */

void FUN_1043f5060(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  FUN_1043f6078(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1043f50a0; end: 1043f50ab; -[SCStoriesPostingOurStoryMetadataBuilder withStoryGroupId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043f50a0(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_113076a08);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  _objc_retain();
  _swift_bridgeObjectRelease(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1043f50ac; end: 1043f50b7; -[SCStoriesPostingOurStoryMetadataBuilder withBusinessId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043f50ac(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_113076a10);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  _objc_retain();
  _swift_bridgeObjectRelease(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1043f50b8; end: 1043f50c3; -[SCStoriesPostingOurStoryMetadataBuilder withDisplayName:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043f50b8(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_113076a18);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  _objc_retain();
  _swift_bridgeObjectRelease(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1043f50c4; end: 1043f50cf; -[SCStoriesPostingOurStoryMetadataBuilder withSpotlightDisplayName:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043f50c4(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_113076a20);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  _objc_retain();
  _swift_bridgeObjectRelease(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1043f50d0; end: 1043f50db; -[SCStoriesPostingOurStoryMetadataBuilder withSpotlightDescription:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043f50d0(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_113076a28);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  _objc_retain();
  _swift_bridgeObjectRelease(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1043f50dc; end: 1043f5147; -[SCStoriesPostingOurStoryMetadataBuilder withTopics:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043f50dc(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    param_3 = 0;
  }
  else {
    uVar1 = 0;
    FUN_104409d84(0);
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_3,uVar1);
  }
  uVar1 = *(undefined8 *)(param_1 + _DAT_113076a30);
  *(long *)(param_1 + _DAT_113076a30) = param_3;
  _objc_retain();
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1043f5148; end: 1043f5163; -[SCStoriesPostingOurStoryMetadataBuilder withOurStoryDestinations:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043f5148(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    param_3 = 0;
  }
  else {
    uVar1 = 0;
    FUN_1043f6038(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_3,uVar1);
  }
  uVar1 = *(undefined8 *)(param_1 + _DAT_113076a38);
  *(long *)(param_1 + _DAT_113076a38) = param_3;
  _objc_retain();
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1043f5164; end: 1043f51df;  */

void FUN_1043f5164(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long *param_6)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    param_3 = 0;
  }
  else {
    uVar1 = 0;
    FUN_1043f6038(0,param_4,param_5);
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_3,uVar1);
  }
  uVar1 = *(undefined8 *)(param_1 + *param_6);
  *(long *)(param_1 + *param_6) = param_3;
  _objc_retain();
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1043f51e0; end: 1043f51ef; -[SCStoriesPostingOurStoryMetadataBuilder withShouldCreateHighlight:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043f51e0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_113076a40) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1043f51f0; end: 1043f524f; -[SCStoriesPostingOurStoryMetadataBuilder withShareAnonymously:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1043f51f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_113076a48);
  *(undefined8 *)(param_1 + _DAT_113076a48) = param_3;
  _objc_retain(param_3);
  _objc_retain();
  _objc_retainAutoreleaseReturnValue(param_1);
  _objc_release(param_3);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 1043f5250; end: 1043f52af; -[SCStoriesPostingOurStoryMetadataBuilder withPlaceTagsMetadata:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1043f5250(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_113076a50);
  *(undefined8 *)(param_1 + _DAT_113076a50) = param_3;
  _objc_retain(param_3);
  _objc_retain();
  _objc_retainAutoreleaseReturnValue(param_1);
  _objc_release(param_3);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 1043f52b0; end: 1043f52bb; -[SCStoriesPostingOurStoryMetadataBuilder withOriginalPostCompositeStoryId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043f52b0(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_113076a58);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  _objc_retain();
  _swift_bridgeObjectRelease(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1043f52bc; end: 1043f531f;  */

void FUN_1043f52bc(long param_1,long param_2,long param_3,long *param_4)

{
  long *plVar1;
  long lVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + *param_4);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  _objc_retain();
  _swift_bridgeObjectRelease(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1043f5320; end: 1043f533b; -[SCStoriesPostingOurStoryMetadataBuilder withSpotlightDescriptionMentions:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043f5320(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    param_3 = 0;
  }
  else {
    uVar1 = 0;
    FUN_1043f6038(0,0x112d70b48,&PTR_PTR_1126d95f0);
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_3,uVar1);
  }
  uVar1 = *(undefined8 *)(param_1 + _DAT_113076a60);
  *(long *)(param_1 + _DAT_113076a60) = param_3;
  _objc_retain();
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1043f533c; end: 1043f539b; -[SCStoriesPostingOurStoryMetadataBuilder withSpotlightTile:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1043f533c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_113076a68);
  *(undefined8 *)(param_1 + _DAT_113076a68) = param_3;
  _objc_retain(param_3);
  _objc_retain();
  _objc_retainAutoreleaseReturnValue(param_1);
  _objc_release(param_3);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 1043f539c; end: 1043f562f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043f539c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  byte bVar14;
  undefined *puVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long unaff_x20;
  undefined8 uVar21;
  undefined8 uVar22;
  long lStack_70;
  long lStack_68;
  
  bVar14 = *(byte *)(unaff_x20 + _DAT_113076a40);
  if (bVar14 == 2) {
    *(undefined1 *)(unaff_x20 + _DAT_113076a40) = 0;
  }
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113076a08);
  uVar8 = ((undefined8 *)(unaff_x20 + _DAT_113076a08))[1];
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_113076a10);
  uVar9 = ((undefined8 *)(unaff_x20 + _DAT_113076a10))[1];
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_113076a18);
  uVar10 = ((undefined8 *)(unaff_x20 + _DAT_113076a18))[1];
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_113076a20);
  uVar11 = ((undefined8 *)(unaff_x20 + _DAT_113076a20))[1];
  uVar22 = *(undefined8 *)(unaff_x20 + _DAT_113076a30);
  uVar21 = *(undefined8 *)(unaff_x20 + _DAT_113076a38);
  uVar19 = *(undefined8 *)(unaff_x20 + _DAT_113076a48);
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_113076a28);
  uVar12 = ((undefined8 *)(unaff_x20 + _DAT_113076a28))[1];
  uVar20 = *(undefined8 *)(unaff_x20 + _DAT_113076a50);
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_113076a58);
  uVar13 = ((undefined8 *)(unaff_x20 + _DAT_113076a58))[1];
  uVar17 = *(undefined8 *)(unaff_x20 + _DAT_113076a60);
  uVar18 = *(undefined8 *)(unaff_x20 + _DAT_113076a68);
  FUN_1043f6328();
  lVar16 = param_1;
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(lVar16 + _DAT_113076980);
  *puVar1 = uVar2;
  puVar1[1] = uVar8;
  puVar1 = (undefined8 *)(lVar16 + _DAT_113076988);
  *puVar1 = uVar3;
  puVar1[1] = uVar9;
  puVar1 = (undefined8 *)(lVar16 + _DAT_113076990);
  *puVar1 = uVar4;
  puVar1[1] = uVar10;
  puVar1 = (undefined8 *)(lVar16 + _DAT_113076998);
  *puVar1 = uVar5;
  puVar1[1] = uVar11;
  puVar1 = (undefined8 *)(lVar16 + _DAT_1130769a0);
  *puVar1 = uVar6;
  puVar1[1] = uVar12;
  *(undefined8 *)(lVar16 + _DAT_1130769a8) = uVar22;
  *(undefined8 *)(lVar16 + _DAT_1130769b0) = uVar21;
  *(byte *)(lVar16 + _DAT_1130769b8) = bVar14 & 1;
  *(undefined8 *)(lVar16 + _DAT_1130769c0) = uVar19;
  *(undefined8 *)(lVar16 + _DAT_1130769c8) = uVar20;
  puVar1 = (undefined8 *)(lVar16 + _DAT_1130769d0);
  *puVar1 = uVar7;
  puVar1[1] = uVar13;
  *(undefined8 *)(lVar16 + _DAT_1130769d8) = uVar17;
  *(undefined8 *)(lVar16 + _DAT_1130769e0) = uVar18;
  puVar15 = PTR_s_init_1125d9248;
  lStack_70 = lVar16;
  lStack_68 = param_1;
  _swift_bridgeObjectRetain(uVar8);
  _swift_bridgeObjectRetain(uVar9);
  _swift_bridgeObjectRetain(uVar10);
  _swift_bridgeObjectRetain(uVar11);
  _swift_bridgeObjectRetain(uVar12);
  _swift_bridgeObjectRetain(uVar22);
  _swift_bridgeObjectRetain(uVar21);
  _objc_retain(uVar19);
  _objc_retain(uVar20);
  _swift_bridgeObjectRetain(uVar13);
  _swift_bridgeObjectRetain(uVar17);
  _objc_retain(uVar18);
  _objc_msgSendSuper2(&lStack_70,puVar15);
  return;
}



/* Entry: 1043f5630; end: 1043f5673; -[SCStoriesPostingOurStoryMetadataBuilder build] */

void FUN_1043f5630(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1043f539c();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1043f5674; end: 1043f56b7; -[SCStoriesPostingOurStoryMetadataBuilder safeBuildAndReturnError:] */

void FUN_1043f5674(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1043f539c();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1043f56b8; end: 1043f57a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043f56b8(void)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  _swift_getObjectType();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113076a08);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113076a10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113076a18);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113076a20);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113076a28);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_113076a30) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_113076a38) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_113076a40) = 2;
  *(undefined8 *)(unaff_x20 + _DAT_113076a48) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_113076a50) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113076a58);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_113076a60) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_113076a68) = 0;
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1043f57a4; end: 1043f57c3; -[SCStoriesPostingOurStoryMetadataBuilder init] */

void FUN_1043f57a4(void)

{
  FUN_1043f56b8();
  return;
}



/* Entry: 1043f57c4; end: 1043f57c7;  */

void FUN_1043f57c4(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1043f57c8; end: 1043f58b7; -[SCStoriesPostingOurStoryMetadataBuilder .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043f57c8(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113076a08 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113076a10 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113076a18 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113076a20 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113076a28 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113076a30));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113076a38));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113076a48));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113076a50));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113076a58 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113076a60));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113076a68));
  return;
}



/* Entry: 1043f58b8; end: 1043f58eb;  */

void FUN_1043f58b8(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1043f58ec; end: 1043f59db; -[SCStoriesPostingOurStoryMetadata .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043f58ec(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113076980 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113076988 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113076990 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113076998 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130769a0 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130769a8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130769b0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130769c0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130769c8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130769d0 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130769d8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130769e0));
  return;
}



/* Entry: 1043f59dc; end: 1043f6037;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043f59dc(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long unaff_x20;
  undefined8 uVar9;
  long lStack_128;
  long lStack_120;
  undefined1 auStack_108 [16];
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
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
  
  _swift_getObjectType();
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_88 = param_1[3];
  uStack_90 = param_1[2];
  puVar5 = (undefined8 *)(unaff_x20 + _DAT_113076980);
  puVar5[1] = uStack_78;
  *puVar5 = uStack_80;
  puVar5 = (undefined8 *)(unaff_x20 + _DAT_113076988);
  puVar5[1] = uStack_88;
  *puVar5 = uStack_90;
  uStack_98 = param_1[5];
  uStack_a0 = param_1[4];
  uStack_a8 = param_1[7];
  uStack_b0 = param_1[6];
  puVar5 = (undefined8 *)(unaff_x20 + _DAT_113076990);
  puVar5[1] = uStack_98;
  *puVar5 = uStack_a0;
  puVar5 = (undefined8 *)(unaff_x20 + _DAT_113076998);
  puVar5[1] = uStack_a8;
  *puVar5 = uStack_b0;
  uVar9 = param_1[8];
  puVar5 = (undefined8 *)(unaff_x20 + _DAT_1130769a0);
  puVar5[1] = param_1[9];
  *puVar5 = uVar9;
  uStack_c8 = param_1[10];
  uStack_d0 = param_1[0xb];
  *(undefined8 *)(unaff_x20 + _DAT_1130769a8) = uStack_c8;
  *(undefined8 *)(unaff_x20 + _DAT_1130769b0) = uStack_d0;
  *(undefined1 *)(unaff_x20 + _DAT_1130769b8) = *(undefined1 *)(param_1 + 0xc);
  uStack_d8 = param_1[0xd];
  uStack_e0 = param_1[0xe];
  *(undefined8 *)(unaff_x20 + _DAT_1130769c0) = uStack_d8;
  *(undefined8 *)(unaff_x20 + _DAT_1130769c8) = uStack_e0;
  uVar9 = param_1[0xf];
  puVar5 = (undefined8 *)(unaff_x20 + _DAT_1130769d0);
  puVar5[1] = param_1[0x10];
  *puVar5 = uVar9;
  uStack_f8 = param_1[0x11];
  lVar2 = param_1[0x12];
  *(undefined8 *)(unaff_x20 + _DAT_1130769d8) = uStack_f8;
  uStack_b8 = param_1[9];
  uStack_c0 = param_1[8];
  uStack_e8 = param_1[0x10];
  uStack_f0 = param_1[0xf];
  if (lVar2 == 0) {
    FUN_1043f6368(&uStack_80,auStack_108,0x112d35ff8,&UNK_10d900cd0);
    FUN_1043f6368(&uStack_90,auStack_108,0x112d35ff8,&UNK_10d900cd0);
    FUN_1043f6368(&uStack_a0,auStack_108,0x112d35ff8,&UNK_10d900cd0);
    FUN_1043f6368(&uStack_b0,auStack_108,0x112d35ff8,&UNK_10d900cd0);
    FUN_1043f6368(&uStack_c0,auStack_108,0x112d35ff8,&UNK_10d900cd0);
    FUN_1043f6368(&uStack_c8,auStack_108,0x113076ac0,&UNK_10dcf8110);
    FUN_1043f6368(&uStack_d0,auStack_108,0x11302e3e8,&UNK_10dcaa5f0);
    FUN_1043f6368(&uStack_d8,auStack_108,0x113076ac8,&UNK_10dcf8120);
    FUN_1043f6368(&uStack_e0,auStack_108,0x113076ad0,&UNK_10dcf8128);
    FUN_1043f6368(&uStack_f0,auStack_108,0x112d35ff8,&UNK_10d900cd0);
    FUN_1043f6368(&uStack_f8,auStack_108,0x112ff7588,&UNK_10dc64f10);
    plVar8 = (long *)0x0;
  }
  else {
    uVar9 = param_1[0x15];
    uVar3 = param_1[0x16];
    uVar1 = param_1[0x13];
    uVar4 = param_1[0x14];
    lVar6 = 0;
    FUN_1043f8630();
    lVar7 = lVar6;
    _objc_allocWithZone();
    *(long *)(lVar7 + _DAT_113076ba8) = lVar2;
    puVar5 = (undefined8 *)(lVar7 + _DAT_113076bb0);
    *puVar5 = uVar1;
    puVar5[1] = uVar4;
    puVar5 = (undefined8 *)(lVar7 + _DAT_113076bb8);
    *puVar5 = uVar9;
    puVar5[1] = uVar3;
    FUN_1043f6368(&uStack_80,auStack_108,0x112d35ff8,&UNK_10d900cd0);
    FUN_1043f6368(&uStack_90,auStack_108,0x112d35ff8,&UNK_10d900cd0);
    FUN_1043f6368(&uStack_a0,auStack_108,0x112d35ff8,&UNK_10d900cd0);
    FUN_1043f6368(&uStack_b0,auStack_108,0x112d35ff8,&UNK_10d900cd0);
    FUN_1043f6368(&uStack_c0,auStack_108,0x112d35ff8,&UNK_10d900cd0);
    FUN_1043f6368(&uStack_c8,auStack_108,0x113076ac0,&UNK_10dcf8110);
    FUN_1043f6368(&uStack_d0,auStack_108,0x11302e3e8,&UNK_10dcaa5f0);
    FUN_1043f6368(&uStack_d8,auStack_108,0x113076ac8,&UNK_10dcf8120);
    FUN_1043f6368(&uStack_e0,auStack_108,0x113076ad0,&UNK_10dcf8128);
    FUN_1043f6368(&uStack_f0,auStack_108,0x112d35ff8,&UNK_10d900cd0);
    FUN_1043f6368(&uStack_f8,auStack_108,0x112ff7588,&UNK_10dc64f10);
    _objc_retain(lVar2);
    _swift_bridgeObjectRetain(uVar4);
    func_0x000100de78a0(uVar9,uVar3);
    plVar8 = &lStack_128;
    lStack_128 = lVar7;
    lStack_120 = lVar6;
    _objc_msgSendSuper2(plVar8,PTR_s_init_1125d9248);
  }
  *(long **)(unaff_x20 + _DAT_1130769e0) = plVar8;
  _objc_msgSendSuper2(&stack0xfffffffffffffee8,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1043f6038; end: 1043f6077;  */

void FUN_1043f6038(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1043f6078; end: 1043f6327;  */

/* WARNING: Possible PIC construction at 0x0001043f60ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001043f60b0) */

void FUN_1043f6078(long param_1)

{
  if (param_1 == 0) {
    func_0x0001043f6348();
    _objc_allocWithZone();
  }
  else {
    func_0x0001043f6348();
    _objc_allocWithZone();
    _objc_retain(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfee210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1043f6328; end: 1043f6367;  */

void FUN_1043f6328(void)

{
  _objc_opt_self(&PTR_PTR_1129adb48);
  return;
}



/* Entry: 1043f6368; end: 1043f63af;  */

undefined8 FUN_1043f6368(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1043f63b0; end: 1043f63b3;  */

void FUN_1043f63b0(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1043f63b4; end: 1043f6487;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043f63b4(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_allocWithZone();
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113076ad8);
  puVar1[1] = uStack_38;
  *puVar1 = uStack_40;
  *(undefined8 *)(unaff_x20 + _DAT_113076ae0) = param_1[2];
  *(undefined8 *)(unaff_x20 + _DAT_113076ae8) = param_1[3];
  *(undefined1 *)(unaff_x20 + _DAT_113076af0) = *(undefined1 *)(param_1 + 4);
  uStack_48 = param_1[6];
  uStack_50 = param_1[5];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113076af8);
  puVar1[1] = uStack_48;
  *puVar1 = uStack_50;
  func_0x000101223174(&uStack_40,auStack_60);
  func_0x000101223174(&uStack_50,auStack_60);
  FUN_1043f68e4(param_1);
  *(undefined8 *)(unaff_x20 + _DAT_113076b00) = param_1[7];
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1043f6488; end: 1043f64cf;  */

void FUN_1043f6488(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x0001043f6fdc(&uStack_60);
  _objc_release(param_2);
  param_1[1] = uStack_58;
  *param_1 = uStack_60;
  param_1[3] = uStack_48;
  param_1[2] = uStack_50;
  param_1[5] = uStack_38;
  param_1[4] = uStack_40;
  param_1[7] = uStack_28;
  param_1[6] = uStack_30;
  return;
}



/* Entry: 1043f64d0; end: 1043f64db; -[SCStoriesPostingCustomStoryMetadata publicationId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043f64d0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113076ad8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113076ad8);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1043f64dc; end: 1043f64eb; -[SCStoriesPostingCustomStoryMetadata type] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1043f64dc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113076ae0);
}



/* Entry: 1043f64ec; end: 1043f64fb; -[SCStoriesPostingCustomStoryMetadata privateStorySubtype] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1043f64ec(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113076ae8);
}



/* Entry: 1043f64fc; end: 1043f650b; -[SCStoriesPostingCustomStoryMetadata isInactive] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1043f64fc(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113076af0);
}



/* Entry: 1043f650c; end: 1043f6517; -[SCStoriesPostingCustomStoryMetadata displayName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043f650c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113076af8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113076af8);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1043f6518; end: 1043f656f;  */

void FUN_1043f6518(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1043f6570; end: 1043f657f; -[SCStoriesPostingCustomStoryMetadata customTTL] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1043f6570(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113076b00);
}



/* Entry: 1043f6580; end: 1043f6717;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043f6580(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113076ad8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113076ae0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113076ae8) = param_4;
  *(undefined1 *)(unaff_x20 + _DAT_113076af0) = param_5;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113076af8);
  *puVar1 = param_6;
  puVar1[1] = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_113076b00) = param_8;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1043f6718; end: 1043f6813; -[SCStoriesPostingCustomStoryMetadata initWithPublicationId:type:privateStorySubtype:isInactive:displayName:customTTL:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043f6718(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined1 param_6,long param_7,undefined8 param_8)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lStack_70;
  long lStack_68;
  
  lVar3 = param_1;
  _swift_getObjectType();
  if (param_3 == 0) {
    lVar2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    lVar2 = param_2;
  }
  if (param_7 == 0) {
    param_7 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_113076ad8);
  *plVar1 = param_3;
  plVar1[1] = lVar2;
  *(undefined8 *)(param_1 + _DAT_113076ae0) = param_4;
  *(undefined8 *)(param_1 + _DAT_113076ae8) = param_5;
  *(undefined1 *)(param_1 + _DAT_113076af0) = param_6;
  plVar1 = (long *)(param_1 + _DAT_113076af8);
  *plVar1 = param_7;
  plVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_113076b00) = param_8;
  lStack_70 = param_1;
  lStack_68 = lVar3;
  _objc_msgSendSuper2(&lStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1043f6814; end: 1043f68e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043f6814(undefined8 *param_1)

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
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113076ad8);
  puVar1[1] = uStack_38;
  *puVar1 = uStack_40;
  uVar2 = param_1[3];
  *(undefined8 *)(unaff_x20 + _DAT_113076ae0) = param_1[2];
  *(undefined8 *)(unaff_x20 + _DAT_113076ae8) = uVar2;
  *(undefined1 *)(unaff_x20 + _DAT_113076af0) = *(undefined1 *)(param_1 + 4);
  uStack_48 = param_1[6];
  uStack_50 = param_1[5];
  uVar2 = param_1[5];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113076af8);
  puVar1[1] = param_1[6];
  *puVar1 = uVar2;
  func_0x000101223174(&uStack_40,auStack_60);
  func_0x000101223174(&uStack_50,auStack_60);
  FUN_1043f68e4(param_1);
  *(undefined8 *)(unaff_x20 + _DAT_113076b00) = param_1[7];
  _objc_msgSendSuper2(&stack0xffffffffffffff90,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1043f68e4; end: 1043f6917;  */

undefined8 FUN_1043f68e4(undefined8 param_1)

{
  (*(code *)(undefined *)0x1043effac)();
  return param_1;
}



/* Entry: 1043f6918; end: 1043f691b; -[SCStoriesPostingCustomStoryMetadata copyWithZone:] */

void FUN_1043f6918(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1043f691c; end: 1043f6b1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043f691c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  if (((undefined8 *)(unaff_x20 + _DAT_113076ad8))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113076ad8);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0x544143494c425550;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x544143494c425550,0xee0044495f4e4f49);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  uVar1 = 0x45505954;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x45505954,0xe400000000000000);
  func_0x00010bf92fa0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000015;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f1fb8b0);
  func_0x00010bf92fa0(param_1);
  _objc_release(uVar1);
  uVar1 = 0x5443414e495f5349;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5443414e495f5349,0xeb00000000455649);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_113076af8))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113076af8);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0x5f59414c50534944;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f59414c50534944,0xec000000454d414e);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  uVar1 = 0x545f4d4f54535543;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x545f4d4f54535543,0xea00000000004c54);
  func_0x00010bf92fa0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1043f6b20; end: 1043f6b6f; -[SCStoriesPostingCustomStoryMetadata encodeWithCoder:] */

void FUN_1043f6b20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_1043f691c(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1043f6b70; end: 1043f6b9f;  */

void FUN_1043f6b70(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1043f6ba0(param_1);
  return;
}



/* Entry: 1043f6ba0; end: 1043f6ec3;  */

undefined8 FUN_1043f6ba0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 unaff_x20;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  uVar2 = 0x544143494c425550;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x544143494c425550,0xee0044495f4e4f49);
  lVar3 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar3 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar3);
    _swift_unknownObjectRelease(lVar3);
  }
  puVar1 = PTR___sypN_11034f1a8;
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    func_0x00010006e7f4(&uStack_80);
    lVar3 = 0;
    uVar2 = 0;
  }
  else {
    puVar4 = &uStack_b0;
    _swift_dynamicCast(puVar4,&uStack_80,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    lVar3 = lStack_a8;
    uVar2 = uStack_b0;
    if ((int)puVar4 == 0) {
      uVar2 = 0;
      lVar3 = 0;
    }
  }
  uVar5 = 0x45505954;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x45505954,0xe400000000000000);
  func_0x00010bf66f00(param_1);
  _objc_release(uVar5);
  uVar5 = 0xd000000000000015;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f1fb8b0);
  func_0x00010bf66f00(param_1);
  _objc_release(uVar5);
  uVar5 = 0x5443414e495f5349;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5443414e495f5349,0xeb00000000455649);
  func_0x00010bf66ce0(param_1);
  _objc_release(uVar5);
  uVar5 = 0x5f59414c50534944;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f59414c50534944,0xec000000454d414e);
  lVar6 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  if (lVar6 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar6);
    _swift_unknownObjectRelease(lVar6);
  }
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    func_0x00010006e7f4(&uStack_80);
    lVar6 = 0;
    uVar5 = 0;
  }
  else {
    puVar4 = &uStack_b0;
    _swift_dynamicCast(puVar4,&uStack_80,puVar1 + 8,PTR___sSSN_11034da80,6);
    lVar6 = lStack_a8;
    uVar5 = uStack_b0;
    if ((int)puVar4 == 0) {
      uVar5 = 0;
      lVar6 = 0;
    }
  }
  uVar7 = 0x545f4d4f54535543;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x545f4d4f54535543,0xea00000000004c54);
  func_0x00010bf66f00(param_1);
  _objc_release(uVar7);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar3);
    _swift_bridgeObjectRelease(lVar3);
  }
  if (lVar6 == 0) {
    uVar5 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar5,lVar6);
    _swift_bridgeObjectRelease(lVar6);
  }
  func_0x00010c03bfc0(unaff_x20);
  _objc_release(uVar2);
  _objc_release(uVar5);
  _objc_release(param_1);
  return unaff_x20;
}



/* Entry: 1043f6ec4; end: 1043f6eeb; -[SCStoriesPostingCustomStoryMetadata initWithCoder:] */

void FUN_1043f6ec4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1043f6ba0();
  return;
}



/* Entry: 1043f6eec; end: 1043f6f1f; -[SCStoriesPostingCustomStoryMetadata description] */

void FUN_1043f6eec(void)

{
  undefined1 auStack_50 [64];
  
  func_0x0001043f6fdc(auStack_50);
  FUN_1043f68e4(auStack_50);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043f6f20; end: 1043f6f9b; -[SCStoriesPostingCustomStoryMetadata init] */

void FUN_1043f6f20(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCStoriesPostingAPI/SCStoriesPostingCustomStoryMetadataWrapper.swift",0x44,2,0x5d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1043f6f68);
  (*pcVar1)();
}



/* Entry: 1043f6f9c; end: 1043f7067; -[SCStoriesPostingCustomStoryMetadata .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043f6f9c(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113076ad8 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113076af8 + 8))
  ;
  return;
}



/* Entry: 1043f7068; end: 1043f7087;  */

void FUN_1043f7068(void)

{
  _objc_opt_self(&PTR_PTR_1129add90);
  return;
}



/* Entry: 1043f7088; end: 1043f70f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043f7088(undefined8 *param_1)

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
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113076b30);
  puVar1[1] = param_1[1];
  *puVar1 = uVar2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113076b38);
  puVar1[1] = uVar4;
  *puVar1 = uVar3;
  *(undefined4 *)(unaff_x20 + _DAT_113076b40) = *(undefined4 *)(param_1 + 4);
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1043f70f4; end: 1043f70ff; -[SCStoriesPostingSponsor profileId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043f70f4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113076b30))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113076b30);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1043f7100; end: 1043f710b; -[SCStoriesPostingSponsor displayName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043f7100(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113076b38))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113076b38);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1043f710c; end: 1043f7163;  */

void FUN_1043f710c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1043f7164; end: 1043f7173; -[SCStoriesPostingSponsor sponsorStatus] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1043f7164(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_113076b40);
}



/* Entry: 1043f7174; end: 1043f71ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043f7174(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113076b30);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113076b38);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined4 *)(unaff_x20 + _DAT_113076b40) = param_5;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1043f7200; end: 1043f72bb; -[SCStoriesPostingSponsor initWithProfileId:displayName:sponsorStatus:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043f7200(long param_1,long param_2,long param_3,long param_4,undefined4 param_5)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lStack_50;
  long lStack_48;
  
  lVar3 = param_1;
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
  plVar1 = (long *)(param_1 + _DAT_113076b30);
  *plVar1 = param_3;
  plVar1[1] = lVar2;
  plVar1 = (long *)(param_1 + _DAT_113076b38);
  *plVar1 = param_4;
  plVar1[1] = param_2;
  *(undefined4 *)(param_1 + _DAT_113076b40) = param_5;
  lStack_50 = param_1;
  lStack_48 = lVar3;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1043f72bc; end: 1043f7327;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043f72bc(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _swift_getObjectType();
  uVar2 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113076b30);
  puVar1[1] = param_1[1];
  *puVar1 = uVar2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113076b38);
  puVar1[1] = uVar4;
  *puVar1 = uVar3;
  *(undefined4 *)(unaff_x20 + _DAT_113076b40) = *(undefined4 *)(param_1 + 4);
  _objc_msgSendSuper2(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1043f7328; end: 1043f732b; -[SCStoriesPostingSponsor copyWithZone:] */

void FUN_1043f7328(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1043f732c; end: 1043f7347; -[SCStoriesPostingSponsor description] */

void FUN_1043f732c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043f7348; end: 1043f73c3; -[SCStoriesPostingSponsor init] */

void FUN_1043f7348(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCStoriesPostingAPI/SCStoriesPostingSponsorWrapper.swift",0x38,2,0x31,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1043f7390);
  (*pcVar1)();
}



/* Entry: 1043f73c4; end: 1043f7403; -[SCStoriesPostingSponsor .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043f73c4(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113076b30 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113076b38 + 8))
  ;
  return;
}



/* Entry: 1043f7404; end: 1043f7423;  */

void FUN_1043f7404(void)

{
  _objc_opt_self(&PTR_PTR_1129ade88);
  return;
}



/* Entry: 1043f7424; end: 1043f7433; -[SCStoriesPostingGalleryConfiguration autosaveToMyStoryEntry] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1043f7424(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113076b70);
}



/* Entry: 1043f7434; end: 1043f748f; -[SCStoriesPostingGalleryConfiguration customStories] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043f7434(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_113076b78);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    FUN_1043f7068(0);
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



/* Entry: 1043f7490; end: 1043f74f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043f7490(undefined1 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_113076b70) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113076b78) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1043f74f4; end: 1043f75b3; -[SCStoriesPostingGalleryConfiguration initWithAutosaveToMyStoryEntry:customStories:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043f74f4(long param_1,undefined8 param_2,undefined1 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  _swift_getObjectType();
  lVar2 = 0;
  if (param_4 != 0) {
    FUN_1043f7068();
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_4,lVar2);
    lVar2 = param_4;
  }
  *(undefined1 *)(param_1 + _DAT_113076b70) = param_3;
  *(long *)(param_1 + _DAT_113076b78) = lVar2;
  lStack_40 = param_1;
  lStack_38 = lVar1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1043f75b4; end: 1043f77c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043f75b4(undefined1 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long unaff_x20;
  undefined *puVar14;
  undefined8 *puVar15;
  long lVar16;
  undefined8 uVar17;
  long lStack_88;
  long lStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [16];
  
  _swift_getObjectType();
  *(undefined1 *)(unaff_x20 + _DAT_113076b70) = param_1;
  if (param_2 == 0) {
    puVar14 = (undefined *)0x0;
  }
  else {
    lVar16 = *(long *)(param_2 + 0x10);
    if (lVar16 == 0) {
      _swift_bridgeObjectRelease(param_2);
      puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      puStack_78 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000102f031cc(0,lVar16,0);
      puVar14 = puStack_78;
      lVar11 = 0;
      FUN_1043f7068();
      puVar15 = (undefined8 *)(param_2 + 0x30);
      do {
        uVar2 = puVar15[-2];
        uVar6 = puVar15[-1];
        uVar3 = *puVar15;
        uVar7 = puVar15[1];
        uVar9 = *(undefined1 *)(puVar15 + 2);
        uVar4 = puVar15[3];
        uVar8 = puVar15[4];
        uVar17 = puVar15[5];
        lVar12 = lVar11;
        _objc_allocWithZone();
        puVar1 = (undefined8 *)(lVar12 + _DAT_113076ad8);
        *puVar1 = uVar2;
        puVar1[1] = uVar6;
        *(undefined8 *)(lVar12 + _DAT_113076ae0) = uVar3;
        *(undefined8 *)(lVar12 + _DAT_113076ae8) = uVar7;
        *(undefined1 *)(lVar12 + _DAT_113076af0) = uVar9;
        puVar1 = (undefined8 *)(lVar12 + _DAT_113076af8);
        *puVar1 = uVar4;
        puVar1[1] = uVar8;
        *(undefined8 *)(lVar12 + _DAT_113076b00) = uVar17;
        puVar10 = PTR_s_init_1125d9248;
        lStack_88 = lVar12;
        lStack_80 = lVar11;
        _swift_bridgeObjectRetain(uVar6);
        _swift_bridgeObjectRetain(uVar8);
        plVar13 = &lStack_88;
        _objc_msgSendSuper2(plVar13,puVar10);
        uVar5 = *(ulong *)(puVar14 + 0x10);
        puStack_78 = puVar14;
        if (*(ulong *)(puVar14 + 0x18) >> 1 <= uVar5) {
          func_0x000102f031cc(1 < *(ulong *)(puVar14 + 0x18),uVar5 + 1,1);
        }
        puVar14 = puStack_78;
        puVar15 = puVar15 + 8;
        *(ulong *)(puStack_78 + 0x10) = uVar5 + 1;
        *(long **)(puStack_78 + uVar5 * 8 + 0x20) = plVar13;
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
      _swift_bridgeObjectRelease(param_2);
    }
  }
  *(undefined **)(unaff_x20 + _DAT_113076b78) = puVar14;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1043f77c4; end: 1043f77c7; -[SCStoriesPostingGalleryConfiguration copyWithZone:] */

void FUN_1043f77c4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1043f77c8; end: 1043f77f3; -[SCStoriesPostingGalleryConfiguration description] */

void FUN_1043f77c8(undefined8 param_1,undefined8 param_2)

{
  _objc_retain();
  FUN_1043f7880();
  _swift_bridgeObjectRelease(param_2);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043f77f4; end: 1043f786f; -[SCStoriesPostingGalleryConfiguration init] */

void FUN_1043f77f4(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCStoriesPostingAPI/SCStoriesPostingGalleryConfigurationWrapper.swift",0x45,2,0x2a,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1043f783c);
  (*pcVar1)();
}



/* Entry: 1043f7870; end: 1043f787f; -[SCStoriesPostingGalleryConfiguration .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043f7870(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113076b78));
  return;
}



/* Entry: 1043f7880; end: 1043f7b8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1043f7880(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined *puVar7;
  code *pcVar8;
  ulong uVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 uVar17;
  
  uVar5 = *(undefined1 *)(param_1 + _DAT_113076b70);
  uVar13 = *(ulong *)(param_1 + _DAT_113076b78);
  if (uVar13 == 0) {
    _objc_release();
  }
  else {
    if (uVar13 >> 0x3e == 0) {
      uVar15 = *(ulong *)((uVar13 & 0xffffffffffffff8) + 0x10);
      puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      uVar15 = uVar13;
      if (-1 < (long)uVar13) {
        uVar15 = uVar13 & 0xffffffffffffff8;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    PTR___swiftEmptyArrayStorage_11034f1c8 = puVar7;
    if (uVar15 == 0) {
      _objc_release();
    }
    else {
      func_0x000103f61338(0,uVar15 & ((long)uVar15 >> 0x3f ^ 0xffffffffffffffffU),0);
      if ((long)uVar15 < 0) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x1043f7b8c);
        (*pcVar8)();
      }
      if ((uVar13 & 0xc000000000000001) == 0) {
        plVar11 = (long *)(uVar13 + 0x20);
        do {
          lVar12 = *plVar11;
          uVar10 = *(undefined8 *)(lVar12 + _DAT_113076ae0);
          uVar14 = *(undefined8 *)(lVar12 + _DAT_113076ae8);
          uVar6 = *(undefined1 *)(lVar12 + _DAT_113076af0);
          uVar1 = *(undefined8 *)(lVar12 + _DAT_113076ad8);
          uVar3 = ((undefined8 *)(lVar12 + _DAT_113076ad8))[1];
          uVar2 = *(undefined8 *)(lVar12 + _DAT_113076af8);
          uVar4 = ((undefined8 *)(lVar12 + _DAT_113076af8))[1];
          uVar17 = *(undefined8 *)(lVar12 + _DAT_113076b00);
          uVar13 = *(ulong *)(puVar7 + 0x10);
          uVar16 = *(ulong *)(puVar7 + 0x18);
          _swift_bridgeObjectRetain(uVar3);
          _swift_bridgeObjectRetain(uVar4);
          if (uVar16 >> 1 <= uVar13) {
            func_0x000103f61338(1 < uVar16,uVar13 + 1,1);
          }
          *(ulong *)(puVar7 + 0x10) = uVar13 + 1;
          *(undefined8 *)(puVar7 + uVar13 * 0x40 + 0x20) = uVar1;
          *(undefined8 *)(puVar7 + uVar13 * 0x40 + 0x28) = uVar3;
          *(undefined8 *)(puVar7 + uVar13 * 0x40 + 0x30) = uVar10;
          *(undefined8 *)(puVar7 + uVar13 * 0x40 + 0x38) = uVar14;
          puVar7[uVar13 * 0x40 + 0x40] = uVar6;
          *(undefined8 *)(puVar7 + uVar13 * 0x40 + 0x48) = uVar2;
          *(undefined8 *)(puVar7 + uVar13 * 0x40 + 0x50) = uVar4;
          *(undefined8 *)(puVar7 + uVar13 * 0x40 + 0x58) = uVar17;
          uVar15 = uVar15 - 1;
          plVar11 = plVar11 + 1;
        } while (uVar15 != 0);
      }
      else {
        uVar16 = 0;
        do {
          uVar9 = uVar16;
          func_0x000102f02c38(uVar16,uVar13);
          uVar1 = *(undefined8 *)(uVar9 + _DAT_113076ad8);
          uVar3 = ((undefined8 *)(uVar9 + _DAT_113076ad8))[1];
          uVar10 = *(undefined8 *)(uVar9 + _DAT_113076ae0);
          uVar14 = *(undefined8 *)(uVar9 + _DAT_113076ae8);
          uVar6 = *(undefined1 *)(uVar9 + _DAT_113076af0);
          uVar2 = *(undefined8 *)(uVar9 + _DAT_113076af8);
          uVar4 = ((undefined8 *)(uVar9 + _DAT_113076af8))[1];
          uVar17 = *(undefined8 *)(uVar9 + _DAT_113076b00);
          _swift_bridgeObjectRetain(uVar4);
          _swift_bridgeObjectRetain(uVar3);
          _swift_unknownObjectRelease(uVar9);
          uVar9 = *(ulong *)(puVar7 + 0x10);
          if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar9) {
            func_0x000103f61338(1 < *(ulong *)(puVar7 + 0x18),uVar9 + 1,1);
          }
          uVar16 = uVar16 + 1;
          *(ulong *)(puVar7 + 0x10) = uVar9 + 1;
          *(undefined8 *)(puVar7 + uVar9 * 0x40 + 0x20) = uVar1;
          *(undefined8 *)(puVar7 + uVar9 * 0x40 + 0x28) = uVar3;
          *(undefined8 *)(puVar7 + uVar9 * 0x40 + 0x30) = uVar10;
          *(undefined8 *)(puVar7 + uVar9 * 0x40 + 0x38) = uVar14;
          puVar7[uVar9 * 0x40 + 0x40] = uVar6;
          *(undefined8 *)(puVar7 + uVar9 * 0x40 + 0x48) = uVar2;
          *(undefined8 *)(puVar7 + uVar9 * 0x40 + 0x50) = uVar4;
          *(undefined8 *)(puVar7 + uVar9 * 0x40 + 0x58) = uVar17;
        } while (uVar15 != uVar16);
      }
      _objc_release(param_1);
    }
  }
  return uVar5;
}



/* Entry: 1043f7b8c; end: 1043f7bab;  */

void FUN_1043f7b8c(void)

{
  _objc_opt_self(&PTR_PTR_1129adf60);
  return;
}



/* Entry: 1043f7bac; end: 1043f7c5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1043f7bac(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_70 [8];
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar2 = auStack_70;
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113076ba8) = *param_1;
  uStack_38 = param_1[2];
  uStack_40 = param_1[1];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113076bb0);
  puVar1[1] = uStack_38;
  *puVar1 = uStack_40;
  uStack_48 = param_1[4];
  uStack_50 = param_1[3];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113076bb8);
  puVar1[1] = uStack_48;
  *puVar1 = uStack_50;
  _objc_retain();
  func_0x000100402194(&uStack_40,auStack_60);
  func_0x00010105aabc(&uStack_50,auStack_60);
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  func_0x000103f5c174(param_1);
  return puVar2;
}



/* Entry: 1043f7c5c; end: 1043f7c6b; -[SCStoriesPostingSpotlightTile snapDoc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043f7c5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113076ba8));
  return;
}



/* Entry: 1043f7c6c; end: 1043f7cb7; -[SCStoriesPostingSpotlightTile clientId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043f7c6c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113076bb0);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113076bb0))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1043f7cb8; end: 1043f7d2b; -[SCStoriesPostingSpotlightTile renderedBytes] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043f7cb8(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = ((undefined8 *)(param_1 + _DAT_113076bb8))[1];
  if (uVar2 >> 0x3c < 0xf) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_113076bb8);
    func_0x00010006c00c(uVar3,uVar2);
    uVar1 = uVar3;
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar3,uVar2);
    func_0x0001000b44c0(uVar3,uVar2);
  }
  else {
    uVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1043f7d2c; end: 1043f7e43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043f7d2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113076ba8) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113076bb0);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113076bb8);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1043f7e44; end: 1043f7f1f; -[SCStoriesPostingSpotlightTile initWithSnapDoc:clientId:renderedBytes:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043f7e44(long param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lStack_60;
  long lStack_58;
  
  lVar3 = param_1;
  _swift_getObjectType();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  if (param_5 == 0) {
    _objc_retain(param_3);
    lVar5 = -0x1000000000000000;
  }
  else {
    lVar5 = param_2;
    _objc_retain(param_3);
    lVar4 = param_5;
    _objc_retain(param_5);
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
    _objc_release(lVar4);
  }
  *(undefined8 *)(param_1 + _DAT_113076ba8) = param_3;
  puVar1 = (undefined8 *)(param_1 + _DAT_113076bb0);
  *puVar1 = param_4;
  puVar1[1] = param_2;
  plVar2 = (long *)(param_1 + _DAT_113076bb8);
  *plVar2 = param_5;
  plVar2[1] = lVar5;
  lStack_60 = param_1;
  lStack_58 = lVar3;
  _objc_msgSendSuper2(&lStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1043f7f20; end: 1043f7fcf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1043f7f20(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar2 = &stack0xffffffffffffff90;
  _swift_getObjectType();
  *(undefined8 *)(unaff_x20 + _DAT_113076ba8) = *param_1;
  uStack_38 = param_1[2];
  uStack_40 = param_1[1];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113076bb0);
  puVar1[1] = uStack_38;
  *puVar1 = uStack_40;
  uStack_48 = param_1[4];
  uStack_50 = param_1[3];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113076bb8);
  puVar1[1] = uStack_48;
  *puVar1 = uStack_50;
  _objc_retain();
  func_0x000100402194(&uStack_40,auStack_60);
  func_0x00010105aabc(&uStack_50,auStack_60);
  _objc_msgSendSuper2(&stack0xffffffffffffff90,PTR_s_init_1125d9248);
  func_0x000103f5c174(param_1);
  return puVar2;
}



/* Entry: 1043f7fd0; end: 1043f7fd3; -[SCStoriesPostingSpotlightTile copyWithZone:] */

void FUN_1043f7fd0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1043f7fd4; end: 1043f8103;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043f7fd4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = 0x434f445f50414e53;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x434f445f50414e53,0xe800000000000000);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113076bb0);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar1,((undefined8 *)(unaff_x20 + _DAT_113076bb0))[1]);
  uVar2 = 0x495f544e45494c43;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x495f544e45494c43,0xe900000000000044);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  _objc_release(uVar2);
  if ((ulong)((undefined8 *)(unaff_x20 + _DAT_113076bb8))[1] >> 0x3c < 0xf) {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113076bb8);
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar1);
  }
  else {
    uVar1 = 0;
  }
  uVar2 = 0x44455245444e4552;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x44455245444e4552,0xee0053455459425f);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1043f8104; end: 1043f8153; -[SCStoriesPostingSpotlightTile encodeWithCoder:] */

void FUN_1043f8104(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_1043f7fd4(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1043f8154; end: 1043f8183;  */

void FUN_1043f8154(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1043f8184(param_1);
  return;
}



/* Entry: 1043f8184; end: 1043f84a7;  */

undefined8 FUN_1043f8184(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 unaff_x20;
  long lVar9;
  long lStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  uVar4 = 0;
  uVar6 = 0;
  uVar8 = 0;
  uVar2 = 0x434f445f50414e53;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x434f445f50414e53,0xe800000000000000);
  lVar3 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar3 == 0) {
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,lVar3);
    _swift_unknownObjectRelease(lVar3);
  }
  uStack_68 = uStack_88;
  uStack_70 = uStack_90;
  lStack_58 = lStack_78;
  uStack_60 = uStack_80;
  if (lStack_78 == 0) {
LAB_1043f835c:
    _objc_release(param_1);
    func_0x00010006e7f4(&uStack_70);
  }
  else {
    uVar2 = 0;
    func_0x000100fa1670(0);
    puVar1 = PTR___sypN_11034f1a8;
    _swift_dynamicCast(&lStack_a0,&uStack_70,PTR___sypN_11034f1a8 + 8,uVar2,6);
    lVar3 = lStack_a0;
    if ((uVar4 & 1) != 0) {
      uVar2 = 0x495f544e45494c43;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x495f544e45494c43,0xe900000000000044);
      lVar5 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      if (lVar5 == 0) {
        uStack_88 = 0;
        uStack_90 = 0;
        lStack_78 = 0;
        uStack_80 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,lVar5);
        _swift_unknownObjectRelease(lVar5);
      }
      uStack_68 = uStack_88;
      uStack_70 = uStack_90;
      lStack_58 = lStack_78;
      uStack_60 = uStack_80;
      if (lStack_78 == 0) {
        _objc_release(param_1);
        param_1 = lVar3;
        goto LAB_1043f835c;
      }
      _swift_dynamicCast(&lStack_a0,&uStack_70,puVar1 + 8,PTR___sSSN_11034da80,6);
      uVar4 = uStack_98;
      lVar5 = lStack_a0;
      if ((uVar6 & 1) != 0) {
        uVar2 = 0x44455245444e4552;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x44455245444e4552,0xee0053455459425f)
        ;
        lVar7 = param_1;
        func_0x00010bf67000();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar2);
        if (lVar7 == 0) {
          uStack_88 = 0;
          uStack_90 = 0;
          lStack_78 = 0;
          uStack_80 = 0;
        }
        else {
          __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,lVar7);
          _swift_unknownObjectRelease(lVar7);
        }
        uStack_68 = uStack_88;
        uStack_70 = uStack_90;
        lStack_58 = lStack_78;
        uStack_60 = uStack_80;
        if (lStack_78 == 0) {
          func_0x00010006e7f4(&uStack_70);
        }
        else {
          _swift_dynamicCast(&lStack_a0,&uStack_70,puVar1 + 8,PTR___s10Foundation4DataVN_110350ae0,6
                            );
          lVar7 = lStack_a0;
          uVar6 = uStack_98;
          if ((uVar8 & 1) != 0) goto LAB_1043f8408;
        }
        lVar7 = 0;
        uVar6 = 0xf000000000000000;
LAB_1043f8408:
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lVar5,uVar4);
        _swift_bridgeObjectRelease(uVar4);
        if (uVar6 >> 0x3c < 0xf) {
          func_0x00010006c00c(lVar7,uVar6);
          lVar9 = lVar7;
          __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(lVar7,uVar6);
          func_0x0001000b44c0(lVar7,uVar6);
        }
        else {
          lVar9 = 0;
        }
        func_0x00010c0473e0();
        _objc_release(lVar3);
        func_0x0001000b44c0(lVar7,uVar6);
        _objc_release(lVar5);
        _objc_release(lVar9);
        _objc_release(param_1);
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


