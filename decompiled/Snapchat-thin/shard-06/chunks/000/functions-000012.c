/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1043a4174; end: 1043a418f; -[SCSpotlightShareStory timedAdPlacements] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043a4174(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_113813500);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    FUN_1043a4fb4(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
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



/* Entry: 1043a4190; end: 1043a419b; -[SCSpotlightShareStory posterGuid] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043a4190(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113813508))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113813508);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1043a419c; end: 1043a41f3;  */

void FUN_1043a419c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1043a41f4; end: 1043a4203; -[SCSpotlightShareStory isSharingDisabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1043a41f4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113813510);
}



/* Entry: 1043a4204; end: 1043a4577;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1043a4204(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined1 param_19)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_78 [24];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130742a0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130742a8);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130742b0);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_1130742b8) = param_7;
  func_0x0001009f0578(param_8,unaff_x20 + _DAT_1138134d0);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1138134d8);
  *puVar1 = param_9;
  puVar1[1] = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_1138134e0) = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_1138134e8) = param_12;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1138134f0);
  *puVar1 = param_13;
  puVar1[1] = param_14;
  *(undefined8 *)(unaff_x20 + _DAT_1138134f8) = param_15;
  *(undefined8 *)(unaff_x20 + _DAT_113813500) = param_16;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113813508);
  *puVar1 = param_17;
  puVar1[1] = param_18;
  *(undefined1 *)(unaff_x20 + _DAT_113813510) = param_19;
  puVar2 = auStack_78;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  func_0x0001000d1dcc(param_8);
  return puVar2;
}



/* Entry: 1043a4578; end: 1043a48a3; -[SCSpotlightShareStory initWithCompositeStoryId:displayName:operaDisplayName:thumbnailMedia:creationDate:sharedSubmissionId:snaps:discoverMetadata:businessProfileId:discoverFeedStorySnaps:timedAdPlacements:posterGuid:isSharingDisabled:] */

void FUN_1043a4578(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  undefined8 param_6,long param_7,long param_8,long param_9,undefined8 param_10,
                  long param_11,long param_12,long param_13,long param_14,undefined1 param_15)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  long extraout_x8;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long alStack_150 [10];
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [8];
  long lStack_e8;
  ulong uStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  
  lVar3 = 0x112d373d8;
  puVar9 = &UNK_10d9014c0;
  uStack_88 = param_1;
  func_0x0001000285a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = -extraout_x8;
  puVar10 = auStack_f0 + lVar3;
  if (param_3 == 0) {
    puStack_98 = (undefined *)0x0;
    lStack_90 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    puStack_98 = puVar9;
    lStack_90 = param_3;
  }
  lStack_78 = param_12;
  lStack_70 = param_14;
  lStack_80 = param_11;
  if (param_4 == 0) {
    puStack_a8 = (undefined *)0x0;
    lStack_a0 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    puStack_a8 = puVar9;
    lStack_a0 = param_4;
  }
  if (param_5 == 0) {
    puStack_b8 = (undefined *)0x0;
    lStack_b0 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    puStack_b8 = puVar9;
    lStack_b0 = param_5;
  }
  _objc_retain();
  lVar4 = param_7;
  uStack_c0 = param_6;
  _objc_retain();
  lVar11 = param_8;
  _objc_retain();
  lVar12 = param_9;
  _objc_retain();
  _objc_retain();
  lVar5 = lStack_80;
  uStack_c8 = param_10;
  _objc_retain();
  lVar13 = lStack_78;
  _objc_retain();
  lStack_e8 = param_13;
  _objc_retain();
  lVar6 = lStack_70;
  _objc_retain();
  lStack_d0 = lVar6;
  if (lVar4 == 0) {
    lVar6 = 0;
    __s10Foundation4DateVMa();
  }
  else {
    __s10Foundation4DateV36_unconditionallyBridgeFromObjectiveCyACSo6NSDateCSgFZ(puVar10,param_7);
    _objc_release(lVar4);
    lVar6 = 0;
    __s10Foundation4DateVMa();
  }
  uVar7 = (ulong)(lVar4 == 0);
  (**(code **)(*(long *)(lVar6 + -8) + 0x38))(puVar10,uVar7,1);
  if (lVar11 == 0) {
    uStack_e0 = 0;
    lStack_d8 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uStack_e0 = uVar7;
    lStack_d8 = param_8;
    _objc_release(lVar11);
  }
  if (lVar12 == 0) {
    param_9 = 0;
    lVar4 = lStack_80;
  }
  else {
    uVar7 = 0;
    FUN_1043a4fb4(0,0x112d56e50,&PTR_PTR_1126cc4e0);
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ();
    _objc_release(lVar12);
    lVar4 = lStack_80;
  }
  lStack_80 = lVar4;
  if (lVar5 == 0) {
    lVar4 = 0;
    uVar1 = 0;
    uVar8 = uVar7;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uVar8 = uVar7;
    _objc_release(lVar5);
    uVar1 = uVar7;
  }
  if (lVar13 == 0) {
    lVar11 = 0;
  }
  else {
    uVar8 = 0;
    FUN_1043a4fb4(0,0x112e0fd78,&PTR_PTR_1126cbc90);
    lVar11 = lStack_78;
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ();
    _objc_release(lVar13);
  }
  if (param_13 == 0) {
    lVar12 = 0;
  }
  else {
    uVar8 = 0;
    FUN_1043a4fb4(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    lVar12 = lStack_e8;
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ();
    _objc_release(param_13);
  }
  lVar5 = lStack_d0;
  if (lStack_d0 == 0) {
    lVar13 = 0;
    uVar8 = 0;
  }
  else {
    lVar13 = lStack_70;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(lVar5);
  }
  auStack_100[lVar3] = param_15;
  *(long *)((long)alStack_150 + lVar3 + 0x40) = lVar13;
  *(ulong *)((long)alStack_150 + lVar3 + 0x48) = uVar8;
  *(long *)((long)alStack_150 + lVar3 + 0x30) = lVar11;
  *(long *)((long)alStack_150 + lVar3 + 0x38) = lVar12;
  *(long *)((long)alStack_150 + lVar3 + 0x20) = lVar4;
  *(ulong *)((long)alStack_150 + lVar3 + 0x28) = uVar1;
  uVar2 = uStack_c8;
  *(long *)((long)alStack_150 + lVar3 + 0x10) = param_9;
  *(undefined8 *)((long)alStack_150 + lVar3 + 0x18) = uVar2;
  *(ulong *)((long)alStack_150 + lVar3 + 8) = uStack_e0;
  *(long *)((long)alStack_150 + lVar3) = lStack_d8;
  func_0x0001043a43c0(lStack_90,puStack_98,lStack_a0,puStack_a8,lStack_b0,puStack_b8,uStack_c0,
                      puVar10);
  return;
}



/* Entry: 1043a48a4; end: 1043a48d3;  */

void FUN_1043a48a4(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1043a48d4(param_1);
  return;
}



/* Entry: 1043a48d4; end: 1043a4acb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1043a48d4(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  _swift_getObjectType();
  uVar6 = *param_1;
  uVar16 = param_1[3];
  uVar15 = param_1[2];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130742a0);
  puVar1[1] = param_1[1];
  *puVar1 = uVar6;
  uVar6 = param_1[1];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130742a8);
  puVar1[1] = uVar16;
  *puVar1 = uVar15;
  uVar8 = param_1[3];
  uVar15 = param_1[4];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130742b0);
  puVar1[1] = param_1[5];
  *puVar1 = uVar15;
  uVar15 = param_1[5];
  uVar16 = param_1[6];
  *(undefined8 *)(unaff_x20 + _DAT_1130742b8) = uVar16;
  lVar4 = 0;
  FUN_10439dec4();
  func_0x0001009f0578((long)param_1 + (long)*(int *)(lVar4 + 0x20),unaff_x20 + _DAT_1138134d0);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar4 + 0x24));
  uVar7 = *puVar1;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_1138134d8);
  puVar2[1] = puVar1[1];
  *puVar2 = uVar7;
  uVar12 = *(undefined8 *)((long)param_1 + (long)*(int *)(lVar4 + 0x28));
  *(undefined8 *)(unaff_x20 + _DAT_1138134e0) = uVar12;
  uVar13 = *(undefined8 *)((long)param_1 + (long)*(int *)(lVar4 + 0x2c));
  *(undefined8 *)(unaff_x20 + _DAT_1138134e8) = uVar13;
  uVar7 = puVar1[1];
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar4 + 0x30));
  uVar9 = *puVar1;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_1138134f0);
  puVar2[1] = puVar1[1];
  *puVar2 = uVar9;
  uVar14 = *(undefined8 *)((long)param_1 + (long)*(int *)(lVar4 + 0x34));
  *(undefined8 *)(unaff_x20 + _DAT_1138134f8) = uVar14;
  uVar9 = *(undefined8 *)((long)param_1 + (long)*(int *)(lVar4 + 0x38));
  uVar11 = puVar1[1];
  *(undefined8 *)(unaff_x20 + _DAT_113813500) = uVar9;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar4 + 0x3c));
  uVar10 = *puVar1;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_113813508);
  puVar2[1] = puVar1[1];
  *puVar2 = uVar10;
  uVar10 = puVar1[1];
  *(undefined1 *)(unaff_x20 + _DAT_113813510) =
       *(undefined1 *)((long)param_1 + (long)*(int *)(lVar4 + 0x40));
  puVar3 = PTR_s_init_1125d9248;
  _swift_bridgeObjectRetain(uVar6);
  _swift_bridgeObjectRetain(uVar8);
  _swift_bridgeObjectRetain(uVar15);
  _objc_retain(uVar16);
  _swift_bridgeObjectRetain(uVar7);
  _swift_bridgeObjectRetain(uVar12);
  _objc_retain(uVar13);
  _swift_bridgeObjectRetain(uVar11);
  _swift_bridgeObjectRetain(uVar14);
  _swift_bridgeObjectRetain(uVar9);
  _swift_bridgeObjectRetain(uVar10);
  puVar5 = &stack0xffffffffffffff90;
  _objc_msgSendSuper2(puVar5,puVar3);
  FUN_1043a4acc(param_1);
  return puVar5;
}



/* Entry: 1043a4acc; end: 1043a4b07;  */

undefined8 FUN_1043a4acc(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_10439dec4();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 1043a4b08; end: 1043a4b0b; -[SCSpotlightShareStory copyWithZone:] */

void FUN_1043a4b08(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1043a4b0c; end: 1043a4b83; -[SCSpotlightShareStory description] */

void FUN_1043a4b0c(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  
  lVar1 = 0;
  FUN_10439dec4();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  _objc_retain(param_1);
  FUN_1043a4b84(&stack0xffffffffffffffe0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  FUN_1043a4acc(&stack0xffffffffffffffe0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043a4b84; end: 1043a4d63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043a4b84(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  puVar1 = (undefined8 *)(param_2 + _DAT_1130742a0);
  uVar9 = puVar1[1];
  uVar6 = *puVar1;
  puVar2 = (undefined8 *)(param_2 + _DAT_1130742a8);
  uVar7 = puVar2[1];
  uVar10 = puVar2[1];
  uVar8 = *puVar2;
  param_1[1] = puVar1[1];
  *param_1 = uVar6;
  param_1[3] = uVar10;
  param_1[2] = uVar8;
  puVar1 = (undefined8 *)(param_2 + _DAT_1130742b0);
  uVar8 = puVar1[1];
  uVar6 = *puVar1;
  param_1[5] = puVar1[1];
  param_1[4] = uVar6;
  uVar13 = *(undefined8 *)(param_2 + _DAT_1130742b8);
  param_1[6] = uVar13;
  lVar4 = _DAT_1138134d0;
  lVar5 = 0;
  FUN_10439dec4();
  func_0x0001009f0578(param_2 + lVar4,(long)param_1 + (long)*(int *)(lVar5 + 0x20));
  puVar1 = (undefined8 *)(param_2 + _DAT_1138134d8);
  uVar6 = *puVar1;
  puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x24));
  puVar2[1] = puVar1[1];
  *puVar2 = uVar6;
  uVar14 = *(undefined8 *)(param_2 + _DAT_1138134e0);
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x28)) = uVar14;
  uVar16 = puVar1[1];
  uVar15 = *(undefined8 *)(param_2 + _DAT_1138134e8);
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x2c)) = uVar15;
  puVar1 = (undefined8 *)(param_2 + _DAT_1138134f0);
  uVar10 = puVar1[1];
  uVar6 = *puVar1;
  puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x30));
  puVar2[1] = puVar1[1];
  *puVar2 = uVar6;
  uVar11 = *(undefined8 *)(param_2 + _DAT_1138134f8);
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x34)) = uVar11;
  uVar12 = *(undefined8 *)(param_2 + _DAT_113813500);
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x38)) = uVar12;
  puVar1 = (undefined8 *)(param_2 + _DAT_113813508);
  uVar6 = puVar1[1];
  uVar17 = *puVar1;
  puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x3c));
  puVar2[1] = puVar1[1];
  *puVar2 = uVar17;
  uVar3 = *(undefined1 *)(param_2 + _DAT_113813510);
  _swift_bridgeObjectRetain(uVar6);
  _swift_bridgeObjectRetain(uVar9);
  _swift_bridgeObjectRetain(uVar7);
  _swift_bridgeObjectRetain(uVar8);
  _objc_retain(uVar13);
  _swift_bridgeObjectRetain(uVar16);
  _swift_bridgeObjectRetain(uVar14);
  _objc_retain(uVar15);
  _swift_bridgeObjectRetain(uVar10);
  _swift_bridgeObjectRetain(uVar11);
  _swift_bridgeObjectRetain(uVar12);
  _objc_release(param_2);
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar5 + 0x40)) = uVar3;
  return;
}



/* Entry: 1043a4d64; end: 1043a4ddf; -[SCSpotlightShareStory init] */

void FUN_1043a4d64(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCSpotlightNetworkServices/SCSpotlightShareStoryWrapper.swift",0x3d,2,0x57,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1043a4dac);
  (*pcVar1)();
}



/* Entry: 1043a4de0; end: 1043a4ecf; -[SCSpotlightShareStory .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043a4de0(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130742a0 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130742a8 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130742b0 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130742b8));
  func_0x0001000d1dcc(param_1 + _DAT_1138134d0);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1138134d8 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1138134e0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_1138134e8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1138134f0 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1138134f8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113813500));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113813508 + 8))
  ;
  return;
}



/* Entry: 1043a4ed0; end: 1043a4ed7;  */

void FUN_1043a4ed0(void)

{
  if (lRam00000001130742e8 != 0) {
    return;
  }
  _swift_getSingletonMetadata(0,&DAT_10e801888);
  return;
}



/* Entry: 1043a4ed8; end: 1043a4f0f;  */

void FUN_1043a4ed8(undefined8 param_1)

{
  if (lRam00000001130742e8 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e801888);
  return;
}



/* Entry: 1043a4f10; end: 1043a4fb3;  */

void FUN_1043a4f10(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puStack_98 = &UNK_10dcf4508;
  puStack_90 = &UNK_10dcf4508;
  puStack_88 = &UNK_10dcf4508;
  puStack_80 = &UNK_10dcf4520;
  lVar1 = 0x13f;
  func_0x0001000776dc();
  if (param_2 < 0x40) {
    lStack_78 = *(long *)(lVar1 + -8) + 0x40;
    puStack_70 = &UNK_10dcf4508;
    puStack_68 = &UNK_10dcf4520;
    puStack_60 = &UNK_10dcf4520;
    puStack_58 = &UNK_10dcf4508;
    puStack_50 = &UNK_10dcf4520;
    puStack_48 = &UNK_10dcf4520;
    puStack_40 = &UNK_10dcf4508;
    puStack_38 = &UNK_10dcf4538;
    _swift_updateClassMetadata2(param_1,0x100,0xd,&puStack_98,param_1 + 0x50);
  }
  return;
}



/* Entry: 1043a4fb4; end: 1043a4ff3;  */

void FUN_1043a4fb4(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1043a4ff4; end: 1043a4fff; -[SCTopicStory topicStoryId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043a4ff4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_1130742f8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_1130742f8);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1043a5000; end: 1043a505b; -[SCTopicStory snaps] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043a5000(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_113074300);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x00010105686c(0);
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



/* Entry: 1043a505c; end: 1043a5067; -[SCTopicStory originalRequestId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043a505c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113074308))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113074308);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1043a5068; end: 1043a50bf;  */

void FUN_1043a5068(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1043a50c0; end: 1043a50cf; -[SCTopicStory discoverMetadata] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043a50c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113074310));
  return;
}



/* Entry: 1043a50d0; end: 1043a50df; -[SCTopicStory engagementMetadata] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043a50d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113074318));
  return;
}



/* Entry: 1043a50e0; end: 1043a50ef; -[SCTopicStory badgeType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1043a50e0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113074320);
}



/* Entry: 1043a50f0; end: 1043a50ff; -[SCTopicStory loggingInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043a50f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113074328));
  return;
}



/* Entry: 1043a5100; end: 1043a51db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043a5100(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130742f8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113074300) = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113074308);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_113074310) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_113074318) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_113074320) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_113074328) = param_9;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1043a51dc; end: 1043a5337; -[SCTopicStory initWithTopicStoryId:snaps:originalRequestId:discoverMetadata:engagementMetadata:badgeType:loggingInfo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043a51dc(long param_1,long param_2,long param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lStack_70;
  long lStack_68;
  
  lVar3 = param_1;
  _swift_getObjectType();
  if (param_3 == 0) {
    param_3 = 0;
    lVar2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    lVar2 = param_2;
  }
  if (param_4 != 0) {
    param_2 = 0;
    func_0x00010105686c();
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ();
  }
  if (param_5 == 0) {
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  _objc_retain();
  _objc_retain();
  _objc_retain();
  plVar1 = (long *)(param_1 + _DAT_1130742f8);
  *plVar1 = param_3;
  plVar1[1] = lVar2;
  *(long *)(param_1 + _DAT_113074300) = param_4;
  plVar1 = (long *)(param_1 + _DAT_113074308);
  *plVar1 = param_5;
  plVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_113074310) = param_6;
  *(undefined8 *)(param_1 + _DAT_113074318) = param_7;
  *(undefined8 *)(param_1 + _DAT_113074320) = param_8;
  *(undefined8 *)(param_1 + _DAT_113074328) = param_9;
  lStack_70 = param_1;
  lStack_68 = lVar3;
  _objc_msgSendSuper2(&lStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1043a5338; end: 1043a53a7;  */

undefined8 FUN_1043a5338(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_allocWithZone();
  uVar1 = param_1;
  FUN_1043a54dc(param_1);
  func_0x0001016f5294(param_1);
  return uVar1;
}



/* Entry: 1043a53a8; end: 1043a53ab; -[SCTopicStory copyWithZone:] */

void FUN_1043a53a8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1043a53ac; end: 1043a53df; -[SCTopicStory description] */

void FUN_1043a53ac(void)

{
  undefined1 auStack_58 [72];
  
  FUN_1043a564c(auStack_58);
  func_0x0001016f5294(auStack_58);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043a53e0; end: 1043a545b; -[SCTopicStory init] */

void FUN_1043a53e0(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCSpotlightNetworkServices/SCTopicStoryWrapper.swift",0x34,2,0x43,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1043a5428);
  (*pcVar1)();
}



/* Entry: 1043a545c; end: 1043a54db; -[SCTopicStory .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043a545c(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130742f8 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113074300));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113074308 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113074310));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113074318));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113074328));
  return;
}



/* Entry: 1043a54dc; end: 1043a564b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043a54dc(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_88 [16];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _swift_getObjectType();
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130742f8);
  puVar1[1] = uStack_38;
  *puVar1 = uStack_40;
  uStack_48 = param_1[2];
  *(undefined8 *)(unaff_x20 + _DAT_113074300) = uStack_48;
  uStack_58 = param_1[4];
  uStack_60 = param_1[3];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113074308);
  puVar1[1] = uStack_58;
  *puVar1 = uStack_60;
  uStack_68 = param_1[5];
  uStack_70 = param_1[6];
  *(undefined8 *)(unaff_x20 + _DAT_113074310) = uStack_68;
  *(undefined8 *)(unaff_x20 + _DAT_113074318) = uStack_70;
  uStack_78 = param_1[8];
  *(undefined8 *)(unaff_x20 + _DAT_113074320) = param_1[7];
  *(undefined8 *)(unaff_x20 + _DAT_113074328) = uStack_78;
  FUN_1043a5734(&uStack_40,auStack_88,0x112d35ff8,&UNK_10d900cd0);
  FUN_1043a5734(&uStack_48,auStack_88,0x113074358,&UNK_10dcf4578);
  FUN_1043a5734(&uStack_60,auStack_88,0x112d35ff8,&UNK_10d900cd0);
  FUN_1043a5734(&uStack_68,auStack_88,0x113074360,&UNK_10dcf4580);
  FUN_1043a5734(&uStack_70,auStack_88,0x113074368,&UNK_10dcf4588);
  FUN_1043a5734(&uStack_78,auStack_88,0x113074370,&UNK_10dcf4590);
  _objc_msgSendSuper2(&stack0xffffffffffffff68,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1043a564c; end: 1043a5713;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043a564c(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  puVar1 = (undefined8 *)(param_2 + _DAT_1130742f8);
  uVar5 = *(undefined8 *)(param_2 + _DAT_113074300);
  uVar6 = *(undefined8 *)(param_2 + _DAT_113074310);
  uVar7 = *(undefined8 *)(param_2 + _DAT_113074318);
  uVar4 = *(undefined8 *)(param_2 + _DAT_113074320);
  uVar8 = *(undefined8 *)(param_2 + _DAT_113074328);
  puVar2 = (undefined8 *)(param_2 + _DAT_113074308);
  uVar3 = puVar1[1];
  uVar9 = *puVar1;
  param_1[1] = puVar1[1];
  *param_1 = uVar9;
  param_1[2] = uVar5;
  uVar9 = puVar2[1];
  uVar10 = *puVar2;
  param_1[4] = puVar2[1];
  param_1[3] = uVar10;
  param_1[5] = uVar6;
  param_1[6] = uVar7;
  param_1[7] = uVar4;
  param_1[8] = uVar8;
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar5);
  _swift_bridgeObjectRetain(uVar9);
  _objc_retain(uVar6);
  _objc_retain(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(uVar8);
  return;
}



/* Entry: 1043a5714; end: 1043a5733;  */

void FUN_1043a5714(void)

{
  _objc_opt_self(&PTR_PTR_1129a8f08);
  return;
}



/* Entry: 1043a5734; end: 1043a577b;  */

undefined8 FUN_1043a5734(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1043a577c; end: 1043a5787; -[SCStoriesTrendingTopicDataModel topicId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043a577c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113074378))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113074378);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1043a5788; end: 1043a5793; -[SCStoriesTrendingTopicDataModel topicName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043a5788(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113074380))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113074380);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1043a5794; end: 1043a57eb;  */

void FUN_1043a5794(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1043a57ec; end: 1043a5847; -[SCStoriesTrendingTopicDataModel topicStories] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043a57ec(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_113074388);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    FUN_1043a5714(0);
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



/* Entry: 1043a5848; end: 1043a5857; -[SCStoriesTrendingTopicDataModel topicMetadata] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043a5848(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113074390));
  return;
}



/* Entry: 1043a5858; end: 1043a5867; -[SCStoriesTrendingTopicDataModel topicStoryType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1043a5858(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113074398);
}



/* Entry: 1043a5868; end: 1043a591b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043a5868(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113074378);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113074380);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_113074388) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_113074390) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_113074398) = param_7;
  _objc_msgSendSuper2(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1043a591c; end: 1043a5a33; -[SCStoriesTrendingTopicDataModel initWithTopicId:topicName:topicStories:topicMetadata:topicStoryType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043a591c(long param_1,long param_2,long param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
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
  if (param_4 == 0) {
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  if (param_5 != 0) {
    uVar4 = 0;
    FUN_1043a5714(0);
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_5,uVar4);
  }
  _objc_retain();
  plVar1 = (long *)(param_1 + _DAT_113074378);
  *plVar1 = param_3;
  plVar1[1] = lVar2;
  plVar1 = (long *)(param_1 + _DAT_113074380);
  *plVar1 = param_4;
  plVar1[1] = param_2;
  *(long *)(param_1 + _DAT_113074388) = param_5;
  *(undefined8 *)(param_1 + _DAT_113074390) = param_6;
  *(undefined8 *)(param_1 + _DAT_113074398) = param_7;
  lStack_70 = param_1;
  lStack_68 = lVar3;
  _objc_msgSendSuper2(&lStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1043a5a34; end: 1043a5a63;  */

void FUN_1043a5a34(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1043a5a64(param_1);
  return;
}



/* Entry: 1043a5a64; end: 1043a5e2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1043a5a64(undefined8 *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined1 *puVar12;
  long extraout_x8;
  long extraout_x8_00;
  long lVar13;
  long lVar14;
  long extraout_x12;
  undefined8 uVar15;
  long unaff_x20;
  undefined8 uVar16;
  undefined *puVar17;
  undefined1 *puVar18;
  long lVar19;
  long lVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined1 auStack_f0 [8];
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined1 *puStack_d0;
  long lStack_88;
  long lStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [16];
  
  _swift_getObjectType();
  lVar8 = 0;
  func_0x00010439fe28();
  lVar20 = *(long *)(lVar8 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar20 + 0x40));
  puVar12 = auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar19 = (long)puVar12 - extraout_x12;
  lVar9 = 0x1130741a0;
  func_0x0001000285a8(0x1130741a0,&UNK_10dcf41a0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = lVar19 - extraout_x8_00;
  uVar16 = param_1[1];
  uVar24 = *param_1;
  uVar23 = param_1[3];
  uVar22 = param_1[2];
  puVar21 = (undefined8 *)(unaff_x20 + _DAT_113074378);
  puVar21[1] = param_1[1];
  *puVar21 = uVar24;
  puVar21 = (undefined8 *)(unaff_x20 + _DAT_113074380);
  puVar21[1] = uVar23;
  *puVar21 = uVar22;
  uVar22 = param_1[3];
  lVar9 = param_1[4];
  if (lVar9 == 0) {
    _swift_bridgeObjectRetain(uVar22);
    _swift_bridgeObjectRetain(uVar16);
    puVar17 = (undefined *)0x0;
  }
  else {
    lVar14 = *(long *)(lVar9 + 0x10);
    if (lVar14 == 0) {
      _swift_bridgeObjectRetain(uVar22);
      _swift_bridgeObjectRetain(uVar16);
      puVar17 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      puStack_78 = PTR___swiftEmptyArrayStorage_11034f1c8;
      lStack_e8 = lVar20;
      lStack_e0 = lVar8;
      lStack_d8 = lVar19;
      puStack_d0 = puVar12;
      _swift_bridgeObjectRetain(uVar16);
      _swift_bridgeObjectRetain(uVar22);
      FUN_1043a644c(0,lVar14,0);
      puVar17 = puStack_78;
      lVar10 = 0;
      FUN_1043a5714();
      puVar21 = (undefined8 *)(lVar9 + 0x30);
      do {
        uVar22 = puVar21[-2];
        uVar3 = puVar21[-1];
        uVar16 = *puVar21;
        uVar4 = puVar21[1];
        uVar23 = puVar21[2];
        uVar5 = puVar21[3];
        uVar24 = puVar21[4];
        uVar6 = puVar21[5];
        uVar15 = puVar21[6];
        lVar9 = lVar10;
        _objc_allocWithZone();
        puVar1 = (undefined8 *)(lVar9 + _DAT_1130742f8);
        *puVar1 = uVar22;
        puVar1[1] = uVar3;
        *(undefined8 *)(lVar9 + _DAT_113074300) = uVar16;
        puVar1 = (undefined8 *)(lVar9 + _DAT_113074308);
        *puVar1 = uVar4;
        puVar1[1] = uVar23;
        *(undefined8 *)(lVar9 + _DAT_113074310) = uVar5;
        *(undefined8 *)(lVar9 + _DAT_113074318) = uVar24;
        *(undefined8 *)(lVar9 + _DAT_113074320) = uVar6;
        *(undefined8 *)(lVar9 + _DAT_113074328) = uVar15;
        puVar7 = PTR_s_init_1125d9248;
        lStack_88 = lVar9;
        lStack_80 = lVar10;
        _swift_bridgeObjectRetain(uVar3);
        _swift_bridgeObjectRetain(uVar16);
        _swift_bridgeObjectRetain(uVar23);
        _objc_retain(uVar5);
        _objc_retain(uVar24);
        _objc_retain(uVar15);
        plVar11 = &lStack_88;
        _objc_msgSendSuper2(plVar11,puVar7);
        uVar2 = *(ulong *)(puVar17 + 0x10);
        puStack_78 = puVar17;
        if (*(ulong *)(puVar17 + 0x18) >> 1 <= uVar2) {
          FUN_1043a644c(1 < *(ulong *)(puVar17 + 0x18),uVar2 + 1,1);
        }
        puVar21 = puVar21 + 9;
        *(ulong *)(puStack_78 + 0x10) = uVar2 + 1;
        *(long **)(puStack_78 + uVar2 * 8 + 0x20) = plVar11;
        lVar14 = lVar14 + -1;
        puVar17 = puStack_78;
        puVar12 = puStack_d0;
        lVar19 = lStack_d8;
        lVar8 = lStack_e0;
        lVar20 = lStack_e8;
      } while (lVar14 != 0);
    }
  }
  *(undefined **)(unaff_x20 + _DAT_113074388) = puVar17;
  lVar14 = 0;
  FUN_1043a0938();
  FUN_1043a0970((long)param_1 + (long)*(int *)(lVar14 + 0x1c),lVar13);
  lVar9 = lVar13;
  (**(code **)(lVar20 + 0x30))(lVar13,1,lVar8);
  puVar18 = (undefined1 *)0x0;
  if ((int)lVar9 != 1) {
    FUN_1043a5e2c(lVar13,lVar19);
    func_0x0001043a5e70(lVar19,puVar12);
    FUN_1043a71fc();
    func_0x0001043a68d0(lVar19,0x10439fe28);
    puVar18 = puVar12;
  }
  *(undefined1 **)(unaff_x20 + _DAT_113074390) = puVar18;
  *(undefined8 *)(unaff_x20 + _DAT_113074398) =
       *(undefined8 *)((long)param_1 + (long)*(int *)(lVar14 + 0x20));
  puVar12 = auStack_70;
  _objc_msgSendSuper2(puVar12,PTR_s_init_1125d9248);
  func_0x0001043a68d0(param_1,FUN_1043a0938);
  return puVar12;
}



/* Entry: 1043a5e2c; end: 1043a5eb3;  */

undefined8 FUN_1043a5e2c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x00010439fe28();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1043a5eb4; end: 1043a5eb7; -[SCStoriesTrendingTopicDataModel copyWithZone:] */

void FUN_1043a5eb4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1043a5eb8; end: 1043a5f43; -[SCStoriesTrendingTopicDataModel description] */

void FUN_1043a5eb8(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  
  lVar1 = 0;
  FUN_1043a0938();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  _objc_retain(param_1);
  FUN_1043a5f44(&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x0001043a68d0(&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
                      FUN_1043a0938);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043a5f44; end: 1043a636f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043a5f44(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  bool bVar3;
  int iVar4;
  code *pcVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  puVar1 = (undefined8 *)(param_2 + _DAT_113074378);
  uVar11 = puVar1[1];
  uVar21 = *puVar1;
  puVar2 = (undefined8 *)(param_2 + _DAT_113074380);
  uVar13 = puVar2[1];
  uVar9 = puVar2[1];
  uVar22 = *puVar2;
  param_1[1] = puVar1[1];
  *param_1 = uVar21;
  param_1[3] = uVar9;
  param_1[2] = uVar22;
  uVar18 = *(ulong *)(param_2 + _DAT_113074388);
  if (uVar18 == 0) {
    _swift_bridgeObjectRetain(uVar13);
    _swift_bridgeObjectRetain(uVar11);
    puVar15 = (undefined *)0x0;
  }
  else {
    if (uVar18 >> 0x3e == 0) {
      uVar17 = *(ulong *)((uVar18 & 0xffffffffffffff8) + 0x10);
      puVar15 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      uVar17 = uVar18;
      if (-1 < (long)uVar18) {
        uVar17 = uVar18 & 0xffffffffffffff8;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      puVar15 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    PTR___swiftEmptyArrayStorage_11034f1c8 = puVar15;
    if (uVar17 == 0) {
      _swift_bridgeObjectRetain(uVar13);
      _swift_bridgeObjectRetain(uVar11);
      puVar15 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      _swift_bridgeObjectRetain(uVar11);
      _swift_bridgeObjectRetain(uVar13);
      func_0x0001043a6468(0,uVar17 & ((long)uVar17 >> 0x3f ^ 0xffffffffffffffffU),0);
      if ((long)uVar17 < 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1043a6370);
        (*pcVar5)();
      }
      if ((uVar18 & 0xc000000000000001) == 0) {
        plVar10 = (long *)(uVar18 + 0x20);
        do {
          lVar8 = *plVar10;
          uVar11 = *(undefined8 *)(lVar8 + _DAT_1130742f8);
          uVar21 = ((undefined8 *)(lVar8 + _DAT_1130742f8))[1];
          uVar12 = *(undefined8 *)(lVar8 + _DAT_113074300);
          uVar13 = *(undefined8 *)(lVar8 + _DAT_113074308);
          uVar22 = ((undefined8 *)(lVar8 + _DAT_113074308))[1];
          uVar14 = *(undefined8 *)(lVar8 + _DAT_113074310);
          uVar19 = *(undefined8 *)(lVar8 + _DAT_113074318);
          uVar9 = *(undefined8 *)(lVar8 + _DAT_113074320);
          uVar20 = *(undefined8 *)(lVar8 + _DAT_113074328);
          uVar18 = *(ulong *)(puVar15 + 0x10);
          uVar16 = *(ulong *)(puVar15 + 0x18);
          _swift_bridgeObjectRetain(uVar21);
          _swift_bridgeObjectRetain(uVar12);
          _swift_bridgeObjectRetain(uVar22);
          _objc_retain(uVar14);
          _objc_retain(uVar19);
          _objc_retain(uVar20);
          if (uVar16 >> 1 <= uVar18) {
            func_0x0001043a6468(1 < uVar16,uVar18 + 1,1);
          }
          *(ulong *)(puVar15 + 0x10) = uVar18 + 1;
          *(undefined8 *)(puVar15 + uVar18 * 0x48 + 0x20) = uVar11;
          *(undefined8 *)(puVar15 + uVar18 * 0x48 + 0x28) = uVar21;
          *(undefined8 *)(puVar15 + uVar18 * 0x48 + 0x30) = uVar12;
          *(undefined8 *)(puVar15 + uVar18 * 0x48 + 0x38) = uVar13;
          *(undefined8 *)(puVar15 + uVar18 * 0x48 + 0x40) = uVar22;
          *(undefined8 *)(puVar15 + uVar18 * 0x48 + 0x48) = uVar14;
          *(undefined8 *)(puVar15 + uVar18 * 0x48 + 0x50) = uVar19;
          *(undefined8 *)(puVar15 + uVar18 * 0x48 + 0x58) = uVar9;
          *(undefined8 *)(puVar15 + uVar18 * 0x48 + 0x60) = uVar20;
          uVar17 = uVar17 - 1;
          plVar10 = plVar10 + 1;
        } while (uVar17 != 0);
      }
      else {
        uVar16 = 0;
        do {
          uVar6 = uVar16;
          FUN_1043a6728(uVar16,uVar18);
          uVar11 = *(undefined8 *)(uVar6 + _DAT_1130742f8);
          uVar21 = ((undefined8 *)(uVar6 + _DAT_1130742f8))[1];
          uVar19 = *(undefined8 *)(uVar6 + _DAT_113074300);
          uVar13 = *(undefined8 *)(uVar6 + _DAT_113074308);
          uVar22 = ((undefined8 *)(uVar6 + _DAT_113074308))[1];
          uVar20 = *(undefined8 *)(uVar6 + _DAT_113074310);
          uVar12 = *(undefined8 *)(uVar6 + _DAT_113074318);
          uVar9 = *(undefined8 *)(uVar6 + _DAT_113074320);
          uVar14 = *(undefined8 *)(uVar6 + _DAT_113074328);
          _objc_retain(uVar14);
          _swift_bridgeObjectRetain(uVar21);
          _swift_bridgeObjectRetain(uVar19);
          _swift_bridgeObjectRetain(uVar22);
          _objc_retain(uVar20);
          _objc_retain(uVar12);
          _swift_unknownObjectRelease(uVar6);
          uVar6 = *(ulong *)(puVar15 + 0x10);
          if (*(ulong *)(puVar15 + 0x18) >> 1 <= uVar6) {
            func_0x0001043a6468(1 < *(ulong *)(puVar15 + 0x18),uVar6 + 1,1);
          }
          uVar16 = uVar16 + 1;
          *(ulong *)(puVar15 + 0x10) = uVar6 + 1;
          *(undefined8 *)(puVar15 + uVar6 * 0x48 + 0x20) = uVar11;
          *(undefined8 *)(puVar15 + uVar6 * 0x48 + 0x28) = uVar21;
          *(undefined8 *)(puVar15 + uVar6 * 0x48 + 0x30) = uVar19;
          *(undefined8 *)(puVar15 + uVar6 * 0x48 + 0x38) = uVar13;
          *(undefined8 *)(puVar15 + uVar6 * 0x48 + 0x40) = uVar22;
          *(undefined8 *)(puVar15 + uVar6 * 0x48 + 0x48) = uVar20;
          *(undefined8 *)(puVar15 + uVar6 * 0x48 + 0x50) = uVar12;
          *(undefined8 *)(puVar15 + uVar6 * 0x48 + 0x58) = uVar9;
          *(undefined8 *)(puVar15 + uVar6 * 0x48 + 0x60) = uVar14;
        } while (uVar17 != uVar16);
      }
    }
  }
  param_1[4] = puVar15;
  lVar8 = _DAT_113074390;
  lVar7 = 0;
  FUN_1043a0938();
  iVar4 = *(int *)(lVar7 + 0x1c);
  bVar3 = *(long *)(param_2 + lVar8) == 0;
  if (!bVar3) {
    _objc_retain();
    FUN_1043a692c((long)param_1 + (long)iVar4);
  }
  lVar8 = 0;
  func_0x00010439fe28();
  (**(code **)(*(long *)(lVar8 + -8) + 0x38))((long)param_1 + (long)iVar4,bVar3,1,lVar8);
  uVar11 = *(undefined8 *)(param_2 + _DAT_113074398);
  _objc_release(param_2);
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar7 + 0x20)) = uVar11;
  return;
}



/* Entry: 1043a6370; end: 1043a63eb; -[SCStoriesTrendingTopicDataModel init] */

void FUN_1043a6370(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCSpotlightNetworkServices/SCStoriesTrendingTopicDataModelWrapper.swift",0x47,2,0x39,0
            );
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1043a63b8);
  (*pcVar1)();
}



/* Entry: 1043a63ec; end: 1043a644b; -[SCStoriesTrendingTopicDataModel .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043a63ec(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113074378 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113074380 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113074388));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113074390));
  return;
}



/* Entry: 1043a644c; end: 1043a6483;  */

void FUN_1043a644c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1043a6484();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 1043a6484; end: 1043a65a7;  */

undefined * FUN_1043a6484(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1043a65a8);
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
    FUN_1043a66cc();
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
    FUN_1043a5714(0);
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



/* Entry: 1043a65a8; end: 1043a66cb;  */

undefined * FUN_1043a65a8(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1043a66cc);
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
    puVar3 = (undefined *)0x112dc2b78;
    func_0x0001000285a8(0x112dc2b78,&UNK_10d97fa08);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x48) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar4,puVar1,uVar6,&UNK_110763ca8);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x48 <= puVar4) {
      _memmove(puVar4,puVar1,uVar6 * 0x48);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Entry: 1043a66cc; end: 1043a6727;  */

void FUN_1043a66cc(void)

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
    FUN_1043a5714();
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x1130743c8;
  plVar5 = (long *)&UNK_10dcf45d0;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 1043a6728; end: 1043a690b;  */

ulong FUN_1043a6728(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1043a67fc);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1043a6800);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    FUN_1043a5714(0);
    uVar4 = param_1;
    _swift_unknownObjectRetain();
    _swift_dynamicCastClass();
    if (uVar4 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    __ss18_CocoaArrayWrapperVyyXlSicig(param_1,uVar4);
    uVar3 = 0;
    FUN_1043a5714(0);
    uVar4 = param_1;
    _swift_dynamicCastClass(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  __sSS6appendyySSF(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  __sSS6appendyySSF(0x6f74536369706f54,0xee00636a624f7972);
  __sSS6appendyySSF(0x756f662074756220,0xeb0000000020646e);
  _swift_getObjectType(param_1);
  uVar3 = 0;
  __ss9_typeName_9qualifiedSSypXp_SbtF();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar3);
  __ss17_assertionFailure__5flagss5NeverOs12StaticStringV_SSs6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1043a68d0);
  (*pcVar2)();
}



/* Entry: 1043a690c; end: 1043a692b;  */

void FUN_1043a690c(void)

{
  _objc_opt_self(&PTR_PTR_1129a9000);
  return;
}



/* Entry: 1043a692c; end: 1043a6d47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043a692c(long param_1,long param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  code *pcVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long alStack_70 [2];
  
  lVar11 = 0x1130741a0;
  func_0x0001000285a8(0x1130741a0,&UNK_10dcf41a0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar11 + -8) + 0x40));
  lVar7 = (long)alStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar9 = (undefined1 *)(lVar7 - extraout_x12);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = (long)puVar9 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar8 = (undefined8 *)(lVar10 - extraout_x12_01);
  lVar4 = 0;
  func_0x00010439fe28();
  lVar11 = *(long *)(lVar4 + -8);
  pcVar6 = *(code **)(lVar11 + 0x38);
  (*pcVar6)(puVar8,1,1,lVar4);
  if (*(char *)(param_2 + _DAT_1130743d0) == '\0') {
    bVar2 = *(long *)(param_2 + _DAT_1130743e8) == 0;
    alStack_70[1] = lVar11;
    if (!bVar2) {
      _objc_retain();
      FUN_1043af020(lVar10);
    }
    func_0x0001043a7948(puVar8,0x1130741a0,&UNK_10dcf41a0);
    lVar11 = 0;
    FUN_1043a7bd4();
    (**(code **)(*(long *)(lVar11 + -8) + 0x38))(lVar10,bVar2,1,lVar11);
    _swift_storeEnumTagMultiPayload(lVar10,lVar4,0);
    (*pcVar6)(lVar10,0,1,lVar4);
    func_0x0001043a78b8(lVar10,puVar8,0x1130741a0,&UNK_10dcf41a0);
    lVar11 = alStack_70[1];
  }
  else if (*(char *)(param_2 + _DAT_1130743d0) == '\x01') {
    lVar10 = *(long *)(param_2 + _DAT_1130743e0);
    if (lVar10 == 0) {
      func_0x0001043a7948(puVar8,0x1130741a0,&UNK_10dcf41a0);
      lVar10 = 0;
      FUN_1043a86b0();
      (**(code **)(*(long *)(lVar10 + -8) + 0x38))(puVar9,1,1,lVar10);
    }
    else {
      alStack_70[0] = param_1;
      alStack_70[1] = lVar11;
      *puVar9 = *(undefined1 *)(lVar10 + _DAT_1130748a8);
      uVar12 = *(undefined8 *)(lVar10 + _DAT_1130748b0);
      lVar11 = 0;
      FUN_1043a86b0();
      iVar3 = *(int *)(lVar11 + 0x14);
      _objc_retain(uVar12);
      _objc_retain();
      func_0x0001043b0d5c(puVar9 + iVar3,uVar12);
      iVar3 = *(int *)(lVar11 + 0x18);
      bVar2 = *(long *)(lVar10 + _DAT_1130748b8) == 0;
      if (!bVar2) {
        _objc_retain();
        func_0x0001043b0d5c(puVar9 + iVar3);
      }
      func_0x0001043a7948(puVar8,0x1130741a0,&UNK_10dcf41a0);
      lVar5 = 0;
      FUN_1043aa0ac();
      (**(code **)(*(long *)(lVar5 + -8) + 0x38))(puVar9 + iVar3,bVar2,1,lVar5);
      _objc_release(lVar10);
      (**(code **)(*(long *)(lVar11 + -8) + 0x38))(puVar9,0,1,lVar11);
      lVar11 = alStack_70[1];
      param_1 = alStack_70[0];
    }
    _swift_storeEnumTagMultiPayload(puVar9,lVar4,1);
    (*pcVar6)(puVar9,0,1,lVar4);
    func_0x0001043a78b8(puVar9,puVar8,0x1130741a0,&UNK_10dcf41a0);
  }
  else {
    func_0x0001043a7948(puVar8,0x1130741a0,&UNK_10dcf41a0);
    puVar1 = (undefined8 *)(param_2 + _DAT_1130743d8);
    uVar12 = puVar1[1];
    uVar13 = *puVar1;
    puVar8[1] = puVar1[1];
    *puVar8 = uVar13;
    _swift_storeEnumTagMultiPayload(puVar8,lVar4,2);
    (*pcVar6)(puVar8,0,1,lVar4);
    _swift_bridgeObjectRetain(uVar12);
  }
  func_0x0001043a7900(puVar8,lVar7,0x1130741a0,&UNK_10dcf41a0);
  lVar10 = lVar7;
  (**(code **)(lVar11 + 0x30))(lVar7,1,lVar4);
  if ((int)lVar10 == 1) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1043a6d48);
    (*pcVar6)();
  }
  func_0x0001043a7948(puVar8,0x1130741a0,&UNK_10dcf41a0);
  _objc_release(param_2);
  func_0x0001043a7988(lVar7,param_1,0x10439fe28);
  return;
}



/* Entry: 1043a6d48; end: 1043a6df3;  */

void FUN_1043a6d48(void)

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



/* Entry: 1043a6df4; end: 1043a6e2b;  */

void FUN_1043a6df4(undefined1 *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (2 < uVar1) {
    uVar1 = 3;
  }
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 1043a6e2c; end: 1043a6eb7; -[SCSpotlightTrendingTopicMetadata description] */

void FUN_1043a6e2c(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  
  lVar1 = 0;
  func_0x00010439fe28();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  _objc_retain(param_1);
  FUN_1043a692c(&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x0001043a7a10(&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
                      0x10439fe28);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043a6eb8; end: 1043a6eff; -[SCSpotlightTrendingTopicMetadata init] */

void FUN_1043a6eb8(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCSpotlightNetworkServices/SCSpotlightTrendingTopicMetadataWrapper.swift",0x48,2,0x36,
             0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1043a6f00);
  (*pcVar1)();
}



/* Entry: 1043a6f00; end: 1043a6f03; -[SCSpotlightTrendingTopicMetadata copyWithZone:] */

void FUN_1043a6f00(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1043a6f04; end: 1043a6f87; +[SCSpotlightTrendingTopicMetadata lensTopicWithLensTopicInfo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043a6f04(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar3 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar3 + _DAT_1130743d0) = 0;
  *(undefined8 *)(lVar3 + _DAT_1130743e8) = param_3;
  *(undefined8 *)(lVar3 + _DAT_1130743e0) = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_1130743d8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar2 = PTR_s_init_1125d9248;
  lStack_30 = lVar3;
  lStack_28 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043a6f88; end: 1043a700f; +[SCSpotlightTrendingTopicMetadata musicTopicWithMusicTopicInfo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043a6f88(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar3 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar3 + _DAT_1130743d0) = 1;
  *(undefined8 *)(lVar3 + _DAT_1130743e8) = 0;
  *(undefined8 *)(lVar3 + _DAT_1130743e0) = param_3;
  puVar1 = (undefined8 *)(lVar3 + _DAT_1130743d8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar2 = PTR_s_init_1125d9248;
  lStack_30 = lVar3;
  lStack_28 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043a7010; end: 1043a70b7; +[SCSpotlightTrendingTopicMetadata hastagTopicWithTopicId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043a7010(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_1130743d0) = 2;
  *(undefined8 *)(lVar2 + _DAT_1130743e8) = 0;
  *(undefined8 *)(lVar2 + _DAT_1130743e0) = 0;
  plVar1 = (long *)(lVar2 + _DAT_1130743d8);
  *plVar1 = param_3;
  plVar1[1] = param_2;
  lStack_40 = lVar2;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043a70b8; end: 1043a717b; -[SCSpotlightTrendingTopicMetadata matchLensTopic:musicTopic:hastagTopic:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043a70b8(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + _DAT_1130743d0) == '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001043a70fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_3 + 0x10))(param_3,*(undefined8 *)(param_1 + _DAT_1130743e8));
    return;
  }
  if (*(char *)(param_1 + _DAT_1130743d0) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x0001043a70e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_4 + 0x10))(param_4,*(undefined8 *)(param_1 + _DAT_1130743e0));
    return;
  }
  lVar1 = ((undefined8 *)(param_1 + _DAT_1130743d8))[1];
  if (lVar1 == 0) {
    _objc_retain();
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_1130743d8);
    _objc_retain();
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
  }
  (**(code **)(param_5 + 0x10))(param_5,uVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1043a717c; end: 1043a71af;  */

void FUN_1043a717c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1043a71b0; end: 1043a71fb; -[SCSpotlightTrendingTopicMetadata .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043a71b0(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130743e8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130743e0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_1130743d8 + 8))
  ;
  return;
}



/* Entry: 1043a71fc; end: 1043a76ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 ** FUN_1043a71fc(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 **ppuVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long extraout_x8;
  undefined8 *puVar8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *puStack_c0;
  long alStack_b8 [4];
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  
  lVar2 = 0;
  FUN_1043a86b0();
  alStack_b8[1] = *(long *)(lVar2 + -8);
  alStack_b8[2] = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(alStack_b8[1] + 0x40));
  lVar2 = (long)&puStack_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  alStack_b8[0] = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar8 = (undefined8 *)(lVar2 - extraout_x12);
  lVar2 = 0x1130740e0;
  puStack_c0 = puVar8;
  func_0x0001000285a8(0x1130740e0,&UNK_10dcf4128);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar8 = (undefined8 *)((long)puVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar3 = 0;
  alStack_b8[3] = (long)puVar8 - extraout_x12_00;
  FUN_1043a7bd4();
  lVar12 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar13 = ((long)puVar8 - extraout_x12_00) - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar14 = (undefined8 *)(lVar13 - extraout_x12_01);
  lVar2 = 0x1130740d8;
  func_0x0001000285a8(0x1130740d8,&UNK_10dcf4120);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar9 = (undefined8 *)((long)puVar14 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = (long)puVar9 - extraout_x12_02;
  lVar2 = 0;
  func_0x00010439fe28();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar10 = (undefined8 *)(lVar11 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0));
  uStack_98 = param_1;
  func_0x0001043a79cc(param_1,puVar10);
  puVar4 = puVar10;
  _swift_getEnumCaseMultiPayload(puVar10,lVar2);
  lVar2 = alStack_b8[3];
  if ((int)puVar4 == 0) {
    func_0x0001043a78b8(puVar10,lVar11,0x1130740d8,&UNK_10dcf4120);
    func_0x0001043a7900(lVar11,puVar9,0x1130740d8,&UNK_10dcf4120);
    puVar4 = puVar9;
    (**(code **)(lVar12 + 0x30))(puVar9,1,lVar3);
    if ((int)puVar4 == 1) {
      lVar13 = 0;
      puVar14 = puVar4;
    }
    else {
      func_0x0001043a7988(puVar9,puVar14,FUN_1043a7bd4);
      func_0x0001043a79cc(puVar14,lVar13,FUN_1043a7bd4);
      FUN_1043af384(0);
      _objc_allocWithZone();
      FUN_1043ae5ec();
      func_0x0001043a7a10(puVar14,FUN_1043a7bd4);
    }
    FUN_1043a76f0();
    puVar4 = puVar14;
    _objc_allocWithZone();
    *(undefined1 *)((long)puVar4 + _DAT_1130743d0) = 0;
    *(long *)((long)puVar4 + _DAT_1130743e8) = lVar13;
    *(undefined8 *)((long)puVar4 + _DAT_1130743e0) = 0;
    *(undefined8 *)((long)puVar4 + _DAT_1130743d8) = 0;
    ((undefined8 *)((long)puVar4 + _DAT_1130743d8))[1] = 0;
    ppuVar5 = &puStack_90;
    puStack_90 = puVar4;
    puStack_88 = puVar14;
    _objc_msgSendSuper2(ppuVar5,PTR_s_init_1125d9248);
    func_0x0001043a7a10(uStack_98,0x10439fe28);
    uVar6 = 0x1130740d8;
    puVar7 = &UNK_10dcf4120;
  }
  else {
    if ((int)puVar4 != 1) {
      uVar6 = *puVar10;
      uVar1 = puVar10[1];
      FUN_1043a76f0();
      puVar14 = puVar4;
      _objc_allocWithZone();
      *(undefined1 *)((long)puVar14 + _DAT_1130743d0) = 2;
      *(undefined8 *)((long)puVar14 + _DAT_1130743e8) = 0;
      *(undefined8 *)((long)puVar14 + _DAT_1130743e0) = 0;
      *(undefined8 *)((long)puVar14 + _DAT_1130743d8) = uVar6;
      ((undefined8 *)((long)puVar14 + _DAT_1130743d8))[1] = uVar1;
      ppuVar5 = &puStack_70;
      puStack_70 = puVar14;
      puStack_68 = puVar4;
      _objc_msgSendSuper2(ppuVar5,PTR_s_init_1125d9248);
      func_0x0001043a7a10(uStack_98,0x10439fe28);
      return ppuVar5;
    }
    func_0x0001043a78b8(puVar10,alStack_b8[3],0x1130740e0,&UNK_10dcf4128);
    func_0x0001043a7900(lVar2,puVar8,0x1130740e0,&UNK_10dcf4128);
    puVar14 = puVar8;
    (**(code **)(alStack_b8[1] + 0x30))(puVar8,1,alStack_b8[2]);
    puVar4 = puStack_c0;
    if ((int)puVar14 == 1) {
      lVar11 = 0;
      puVar4 = puVar14;
    }
    else {
      func_0x0001043a7988(puVar8,puStack_c0,FUN_1043a86b0);
      lVar11 = alStack_b8[0];
      func_0x0001043a79cc(puVar4,alStack_b8[0],FUN_1043a86b0);
      FUN_1043ade18(0);
      _objc_allocWithZone();
      FUN_1043ad3a0();
      func_0x0001043a7a10(puVar4,FUN_1043a86b0);
    }
    FUN_1043a76f0();
    puVar14 = puVar4;
    _objc_allocWithZone();
    *(undefined1 *)((long)puVar14 + _DAT_1130743d0) = 1;
    *(undefined8 *)((long)puVar14 + _DAT_1130743e8) = 0;
    *(long *)((long)puVar14 + _DAT_1130743e0) = lVar11;
    *(undefined8 *)((long)puVar14 + _DAT_1130743d8) = 0;
    ((undefined8 *)((long)puVar14 + _DAT_1130743d8))[1] = 0;
    ppuVar5 = &puStack_80;
    puStack_80 = puVar14;
    puStack_78 = puVar4;
    _objc_msgSendSuper2(ppuVar5,PTR_s_init_1125d9248);
    func_0x0001043a7a10(uStack_98,0x10439fe28);
    uVar6 = 0x1130740e0;
    puVar7 = &UNK_10dcf4128;
    lVar11 = lVar2;
  }
  func_0x0001043a7948(lVar11,uVar6,puVar7);
  return ppuVar5;
}



/* Entry: 1043a76f0; end: 1043a770f;  */

void FUN_1043a76f0(void)

{
  _objc_opt_self(&PTR_PTR_1129a90e8);
  return;
}



/* Entry: 1043a7710; end: 1043a7877;  */

int FUN_1043a7710(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1043a778c;
        goto LAB_1043a7770;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1043a7770:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_1043a778c:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1043a7878; end: 1043a78b7;  */

void FUN_1043a7878(void)

{
  undefined *puVar1;
  
  if (puRam0000000113074418 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcf4638;
  _swift_getWitnessTable(&UNK_10dcf4638,&UNK_110763ec0);
  puRam0000000113074418 = puVar1;
  return;
}



/* Entry: 1043a78b8; end: 1043a7a4b;  */

undefined8 FUN_1043a78b8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x20))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1043a7a4c; end: 1043a7a5f; -[SCSpotlightTrendingTopicSectionMetadata metadata] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043a7a4c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113074420));
  return;
}



/* Entry: 1043a7a60; end: 1043a7b03; -[SCSpotlightTrendingTopicSectionMetadata initWithMetadata:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043a7a60(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_113074420) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}



/* Entry: 1043a7b04; end: 1043a7b07; -[SCSpotlightTrendingTopicSectionMetadata copyWithZone:] */

void FUN_1043a7b04(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1043a7b08; end: 1043a7b23; -[SCSpotlightTrendingTopicSectionMetadata description] */

void FUN_1043a7b08(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043a7b24; end: 1043a7b9f; -[SCSpotlightTrendingTopicSectionMetadata init] */

void FUN_1043a7b24(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCSpotlightNetworkServices/SCSpotlightTrendingTopicSectionMetadataWrapper.swift",0x4f,
             2,0x23,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1043a7b6c);
  (*pcVar1)();
}



/* Entry: 1043a7ba0; end: 1043a7baf; -[SCSpotlightTrendingTopicSectionMetadata .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043a7ba0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113074420));
  return;
}



/* Entry: 1043a7bb0; end: 1043a7bcf;  */

void FUN_1043a7bb0(void)

{
  _objc_opt_self(&PTR_PTR_1129a91c0);
  return;
}



/* Entry: 1043a7bd0; end: 1043a7bd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043a7bd0(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113074420) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1043a7bd4; end: 1043a7c0b;  */

void FUN_1043a7bd4(undefined8 param_1)

{
  if (lRam00000001130744a8 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e801a10);
  return;
}



/* Entry: 1043a7c0c; end: 1043a7c0f;  */

undefined8 FUN_1043a7c0c(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar3 = *param_1;
  if (((uVar3 == *param_2 && param_1[1] == param_2[1]) ||
      (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF()
      , (uVar3 & 1) != 0)) &&
     ((uVar3 = param_1[2], uVar3 == param_2[2] && param_1[3] == param_2[3] ||
      (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF()
      , (uVar3 & 1) != 0)))) {
    lVar4 = 0;
    FUN_1043a7bd4();
    uVar3 = (long)param_1 + (long)*(int *)(lVar4 + 0x18);
    __s10Foundation3URLV2eeoiySbAC_ACtFZ(uVar3,(long)param_2 + (long)*(int *)(lVar4 + 0x18));
    if ((((uVar3 & 1) != 0) &&
        ((puVar1 = (ulong *)((long)param_1 + (long)*(int *)(lVar4 + 0x1c)), uVar3 = *puVar1,
         puVar2 = (ulong *)((long)param_2 + (long)*(int *)(lVar4 + 0x1c)),
         uVar3 == *puVar2 && puVar1[1] == puVar2[1] ||
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (), (uVar3 & 1) != 0)))) &&
       ((puVar1 = (ulong *)((long)param_1 + (long)*(int *)(lVar4 + 0x20)), uVar3 = *puVar1,
        puVar2 = (ulong *)((long)param_2 + (long)*(int *)(lVar4 + 0x20)),
        uVar3 == *puVar2 && puVar1[1] == puVar2[1] ||
        (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                   (), (uVar3 & 1) != 0)))) {
      puVar1 = (ulong *)((long)param_1 + (long)*(int *)(lVar4 + 0x24));
      uVar3 = puVar1[1];
      puVar2 = (ulong *)((long)param_2 + (long)*(int *)(lVar4 + 0x24));
      uVar6 = puVar2[1];
      if (uVar3 == 0) {
        if (uVar6 != 0) {
          return 0;
        }
      }
      else {
        if (uVar6 == 0) {
          return 0;
        }
        uVar5 = *puVar1;
        if (((uVar5 != *puVar2) || (uVar3 != uVar6)) &&
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (), (uVar5 & 1) == 0)) {
          return 0;
        }
      }
      if ((*(char *)((long)param_1 + (long)*(int *)(lVar4 + 0x28)) ==
           *(char *)((long)param_2 + (long)*(int *)(lVar4 + 0x28))) &&
         (*(char *)((long)param_1 + (long)*(int *)(lVar4 + 0x2c)) ==
          *(char *)((long)param_2 + (long)*(int *)(lVar4 + 0x2c)))) {
        puVar1 = (ulong *)((long)param_1 + (long)*(int *)(lVar4 + 0x30));
        uVar3 = puVar1[1];
        puVar2 = (ulong *)((long)param_2 + (long)*(int *)(lVar4 + 0x30));
        uVar6 = puVar2[1];
        if (uVar3 == 0) {
          if (uVar6 != 0) {
            return 0;
          }
        }
        else {
          if (uVar6 == 0) {
            return 0;
          }
          uVar5 = *puVar1;
          if (((uVar5 != *puVar2) || (uVar3 != uVar6)) &&
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (), (uVar5 & 1) == 0)) {
            return 0;
          }
        }
        puVar1 = (ulong *)((long)param_1 + (long)*(int *)(lVar4 + 0x34));
        uVar3 = puVar1[1];
        puVar2 = (ulong *)((long)param_2 + (long)*(int *)(lVar4 + 0x34));
        uVar6 = puVar2[1];
        if (uVar3 == 0) {
          if (uVar6 != 0) {
            return 0;
          }
        }
        else {
          if (uVar6 == 0) {
            return 0;
          }
          uVar5 = *puVar1;
          if (((uVar5 != *puVar2) || (uVar3 != uVar6)) &&
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (), (uVar5 & 1) == 0)) {
            return 0;
          }
        }
        puVar1 = (ulong *)((long)param_1 + (long)*(int *)(lVar4 + 0x38));
        uVar3 = puVar1[1];
        puVar2 = (ulong *)((long)param_2 + (long)*(int *)(lVar4 + 0x38));
        uVar6 = puVar2[1];
        if (uVar3 == 0) {
          if (uVar6 != 0) {
            return 0;
          }
        }
        else {
          if (uVar6 == 0) {
            return 0;
          }
          uVar5 = *puVar1;
          if (((uVar5 != *puVar2) || (uVar3 != uVar6)) &&
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (), (uVar5 & 1) == 0)) {
            return 0;
          }
        }
        param_1 = (ulong *)((long)param_1 + (long)*(int *)(lVar4 + 0x3c));
        uVar3 = param_1[1];
        param_2 = (ulong *)((long)param_2 + (long)*(int *)(lVar4 + 0x3c));
        uVar6 = param_2[1];
        if (uVar3 == 0) {
          if (uVar6 == 0) {
            return 1;
          }
        }
        else if ((uVar6 != 0) &&
                (((uVar5 = *param_1, uVar5 == *param_2 && (uVar3 == uVar6)) ||
                 (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                            (), (uVar5 & 1) != 0)))) {
          return 1;
        }
      }
    }
  }
  return 0;
}



/* Entry: 1043a7c10; end: 1043a7e8f;  */

undefined8 FUN_1043a7c10(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar3 = *param_1;
  if (((uVar3 == *param_2 && param_1[1] == param_2[1]) ||
      (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF()
      , (uVar3 & 1) != 0)) &&
     ((uVar3 = param_1[2], uVar3 == param_2[2] && param_1[3] == param_2[3] ||
      (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF()
      , (uVar3 & 1) != 0)))) {
    lVar4 = 0;
    FUN_1043a7bd4();
    uVar3 = (long)param_1 + (long)*(int *)(lVar4 + 0x18);
    __s10Foundation3URLV2eeoiySbAC_ACtFZ(uVar3,(long)param_2 + (long)*(int *)(lVar4 + 0x18));
    if ((((uVar3 & 1) != 0) &&
        ((puVar1 = (ulong *)((long)param_1 + (long)*(int *)(lVar4 + 0x1c)), uVar3 = *puVar1,
         puVar2 = (ulong *)((long)param_2 + (long)*(int *)(lVar4 + 0x1c)),
         uVar3 == *puVar2 && puVar1[1] == puVar2[1] ||
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (), (uVar3 & 1) != 0)))) &&
       ((puVar1 = (ulong *)((long)param_1 + (long)*(int *)(lVar4 + 0x20)), uVar3 = *puVar1,
        puVar2 = (ulong *)((long)param_2 + (long)*(int *)(lVar4 + 0x20)),
        uVar3 == *puVar2 && puVar1[1] == puVar2[1] ||
        (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                   (), (uVar3 & 1) != 0)))) {
      puVar1 = (ulong *)((long)param_1 + (long)*(int *)(lVar4 + 0x24));
      uVar3 = puVar1[1];
      puVar2 = (ulong *)((long)param_2 + (long)*(int *)(lVar4 + 0x24));
      uVar6 = puVar2[1];
      if (uVar3 == 0) {
        if (uVar6 != 0) {
          return 0;
        }
      }
      else {
        if (uVar6 == 0) {
          return 0;
        }
        uVar5 = *puVar1;
        if (((uVar5 != *puVar2) || (uVar3 != uVar6)) &&
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (), (uVar5 & 1) == 0)) {
          return 0;
        }
      }
      if ((*(char *)((long)param_1 + (long)*(int *)(lVar4 + 0x28)) ==
           *(char *)((long)param_2 + (long)*(int *)(lVar4 + 0x28))) &&
         (*(char *)((long)param_1 + (long)*(int *)(lVar4 + 0x2c)) ==
          *(char *)((long)param_2 + (long)*(int *)(lVar4 + 0x2c)))) {
        puVar1 = (ulong *)((long)param_1 + (long)*(int *)(lVar4 + 0x30));
        uVar3 = puVar1[1];
        puVar2 = (ulong *)((long)param_2 + (long)*(int *)(lVar4 + 0x30));
        uVar6 = puVar2[1];
        if (uVar3 == 0) {
          if (uVar6 != 0) {
            return 0;
          }
        }
        else {
          if (uVar6 == 0) {
            return 0;
          }
          uVar5 = *puVar1;
          if (((uVar5 != *puVar2) || (uVar3 != uVar6)) &&
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (), (uVar5 & 1) == 0)) {
            return 0;
          }
        }
        puVar1 = (ulong *)((long)param_1 + (long)*(int *)(lVar4 + 0x34));
        uVar3 = puVar1[1];
        puVar2 = (ulong *)((long)param_2 + (long)*(int *)(lVar4 + 0x34));
        uVar6 = puVar2[1];
        if (uVar3 == 0) {
          if (uVar6 != 0) {
            return 0;
          }
        }
        else {
          if (uVar6 == 0) {
            return 0;
          }
          uVar5 = *puVar1;
          if (((uVar5 != *puVar2) || (uVar3 != uVar6)) &&
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (), (uVar5 & 1) == 0)) {
            return 0;
          }
        }
        puVar1 = (ulong *)((long)param_1 + (long)*(int *)(lVar4 + 0x38));
        uVar3 = puVar1[1];
        puVar2 = (ulong *)((long)param_2 + (long)*(int *)(lVar4 + 0x38));
        uVar6 = puVar2[1];
        if (uVar3 == 0) {
          if (uVar6 != 0) {
            return 0;
          }
        }
        else {
          if (uVar6 == 0) {
            return 0;
          }
          uVar5 = *puVar1;
          if (((uVar5 != *puVar2) || (uVar3 != uVar6)) &&
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (), (uVar5 & 1) == 0)) {
            return 0;
          }
        }
        param_1 = (ulong *)((long)param_1 + (long)*(int *)(lVar4 + 0x3c));
        uVar3 = param_1[1];
        param_2 = (ulong *)((long)param_2 + (long)*(int *)(lVar4 + 0x3c));
        uVar6 = param_2[1];
        if (uVar3 == 0) {
          if (uVar6 == 0) {
            return 1;
          }
        }
        else if ((uVar6 != 0) &&
                (((uVar5 = *param_1, uVar5 == *param_2 && (uVar3 == uVar6)) ||
                 (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                            (), (uVar5 & 1) != 0)))) {
          return 1;
        }
      }
    }
  }
  return 0;
}



/* Entry: 1043a7e90; end: 1043a800b;  */

long * FUN_1043a7e90(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  code *pcVar15;
  
  uVar10 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar10 >> 0x11 & 1) == 0) {
    lVar13 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar13;
    lVar3 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = lVar3;
    iVar11 = *(int *)(param_3 + 0x18);
    lVar12 = 0;
    __s10Foundation3URLVMa();
    pcVar15 = *(code **)(*(long *)(lVar12 + -8) + 0x10);
    _swift_bridgeObjectRetain(lVar13);
    _swift_bridgeObjectRetain(lVar3);
    (*pcVar15)((long)param_1 + (long)iVar11,(long)param_2 + (long)iVar11,lVar12);
    iVar11 = *(int *)(param_3 + 0x20);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
    uVar4 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar4;
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar11);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar11);
    uVar4 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar4;
    iVar11 = *(int *)(param_3 + 0x28);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
    uVar5 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar5;
    *(undefined1 *)((long)param_1 + (long)iVar11) = *(undefined1 *)((long)param_2 + (long)iVar11);
    iVar11 = *(int *)(param_3 + 0x30);
    *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar11);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar11);
    uVar6 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar6;
    iVar11 = *(int *)(param_3 + 0x38);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x34));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x34));
    uVar7 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar7;
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar11);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar11);
    uVar8 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar8;
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x3c));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x3c));
    uVar9 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar9;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar4);
    _swift_bridgeObjectRetain(uVar5);
    _swift_bridgeObjectRetain(uVar6);
    _swift_bridgeObjectRetain(uVar7);
    _swift_bridgeObjectRetain(uVar8);
    _swift_bridgeObjectRetain(uVar9);
  }
  else {
    lVar13 = *param_2;
    *param_1 = lVar13;
    uVar14 = (ulong)uVar10 & 0xff;
    param_1 = (long *)(lVar13 + (uVar14 + 0x10 & (uVar14 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 1043a800c; end: 1043a80cf;  */

void FUN_1043a800c(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
  iVar1 = *(int *)(param_2 + 0x18);
  lVar2 = 0;
  __s10Foundation3URLVMa();
  (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1 + iVar1,lVar2);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x1c) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x20) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x24) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x30) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x34) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x38) + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)
            (*(undefined8 *)(param_1 + *(int *)(param_2 + 0x3c) + 8));
  return;
}



/* Entry: 1043a80d0; end: 1043a821f;  */

undefined8 * FUN_1043a80d0(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  long lVar10;
  code *pcVar11;
  
  uVar3 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  uVar4 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar4;
  iVar9 = *(int *)(param_3 + 0x18);
  lVar10 = 0;
  __s10Foundation3URLVMa();
  pcVar11 = *(code **)(*(long *)(lVar10 + -8) + 0x10);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
  (*pcVar11)((long)param_1 + (long)iVar9,(long)param_2 + (long)iVar9,lVar10);
  iVar9 = *(int *)(param_3 + 0x20);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  uVar3 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar3;
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar9);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar9);
  uVar3 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar3;
  iVar9 = *(int *)(param_3 + 0x28);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  uVar4 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar4;
  *(undefined1 *)((long)param_1 + (long)iVar9) = *(undefined1 *)((long)param_2 + (long)iVar9);
  iVar9 = *(int *)(param_3 + 0x30);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar9);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar9);
  uVar5 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar5;
  iVar9 = *(int *)(param_3 + 0x38);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x34));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x34));
  uVar6 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar6;
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar9);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar9);
  uVar7 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar7;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x3c));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x3c));
  uVar8 = param_2[1];
  *puVar1 = *param_2;
  puVar1[1] = uVar8;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
  _swift_bridgeObjectRetain(uVar5);
  _swift_bridgeObjectRetain(uVar6);
  _swift_bridgeObjectRetain(uVar7);
  _swift_bridgeObjectRetain(uVar8);
  return param_1;
}



/* Entry: 1043a8220; end: 1043a8603;  */

undefined8 * FUN_1043a8220(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = *param_2;
  uVar5 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar5);
  param_1[2] = param_2[2];
  uVar5 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar5);
  iVar3 = *(int *)(param_3 + 0x18);
  lVar4 = 0;
  __s10Foundation3URLVMa();
  (**(code **)(*(long *)(lVar4 + -8) + 0x18))
            ((long)param_1 + (long)iVar3,(long)param_2 + (long)iVar3,lVar4);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  *puVar1 = *puVar2;
  uVar5 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar5);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  *puVar1 = *puVar2;
  uVar5 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar5);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  *puVar1 = *puVar2;
  uVar5 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar5);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x28)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x30));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
  *puVar1 = *puVar2;
  uVar5 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar5);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x34));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x34));
  *puVar1 = *puVar2;
  uVar5 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar5);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x38));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x38));
  *puVar1 = *puVar2;
  uVar5 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar5);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x3c));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x3c));
  *puVar1 = *param_2;
  uVar5 = puVar1[1];
  puVar1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar5);
  return param_1;
}



/* Entry: 1043a8604; end: 1043a861b;  */

void FUN_1043a8604(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 1043a861c; end: 1043a86af;  */

void FUN_1043a861c(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puStack_80 = &UNK_10dcf4778;
  puStack_78 = &UNK_10dcf4778;
  lVar1 = 0x13f;
  __s10Foundation3URLVMa();
  if (param_2 < 0x40) {
    lStack_70 = *(long *)(lVar1 + -8) + 0x40;
    puStack_68 = &UNK_10dcf4778;
    puStack_60 = &UNK_10dcf4778;
    puStack_58 = &UNK_10dcf4790;
    puStack_50 = &UNK_10dcf47a8;
    puStack_48 = &UNK_10dcf47a8;
    puStack_40 = &UNK_10dcf4790;
    puStack_38 = &UNK_10dcf4790;
    puStack_30 = &UNK_10dcf4790;
    puStack_28 = &UNK_10dcf4790;
    _swift_initStructMetadata(param_1,0x100,0xc,&puStack_80,param_1 + 0x10);
  }
  return;
}



/* Entry: 1043a86b0; end: 1043a86e7;  */

void FUN_1043a86b0(undefined8 param_1)

{
  if (lRam0000000113074560 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e801a38);
  return;
}



/* Entry: 1043a86e8; end: 1043a8737;  */

undefined8 FUN_1043a86e8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112f8ae50;
  func_0x0001000285a8(0x112f8ae50,&UNK_10dc00160);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1043a8738; end: 1043a873f;  */

undefined8 FUN_1043a8738(char *param_1,char *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  ulong uVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined1 *puVar6;
  long lVar7;
  ulong uVar8;
  code *pcVar9;
  long lVar10;
  long lVar11;
  
  lVar2 = 0;
  FUN_1043aa0ac();
  lVar11 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  puVar6 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar10 = 0x112f8ae50;
  func_0x0001000285a8(0x112f8ae50,&UNK_10dc00160);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar8 = (long)puVar6 - extraout_x8_00;
  lVar10 = 0x1130745a8;
  func_0x0001000285a8(0x1130745a8,&UNK_10dcf4820);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = uVar8 - extraout_x8_01;
  if (*param_1 == *param_2) {
    lVar3 = 0;
    FUN_1043a86b0();
    pcVar4 = param_1 + *(int *)(lVar3 + 0x14);
    FUN_1043aa0ec(pcVar4,param_2 + *(int *)(lVar3 + 0x14));
    if (((ulong)pcVar4 & 1) != 0) {
      iVar1 = *(int *)(lVar3 + 0x18);
      lVar10 = (long)*(int *)(lVar10 + 0x30);
      FUN_1043a86e8(param_1 + iVar1,lVar7);
      FUN_1043a86e8(param_2 + iVar1,lVar7 + lVar10);
      pcVar9 = *(code **)(lVar11 + 0x30);
      lVar11 = lVar7;
      (*pcVar9)(lVar7,1,lVar2);
      if ((int)lVar11 == 1) {
        lVar10 = lVar7 + lVar10;
        (*pcVar9)(lVar10,1,lVar2);
        if ((int)lVar10 == 1) {
          func_0x0001043aa06c(lVar7,0x112f8ae50,&UNK_10dc00160);
          return 1;
        }
      }
      else {
        FUN_1043a86e8(lVar7,uVar8);
        lVar11 = lVar7 + lVar10;
        (*pcVar9)(lVar11,1,lVar2);
        if ((int)lVar11 != 1) {
          func_0x000103714ae4(lVar7 + lVar10,puVar6);
          uVar5 = uVar8;
          FUN_1043aa0ec(uVar8,puVar6);
          FUN_1043a9808(puVar6);
          FUN_1043a9808(uVar8);
          func_0x0001043aa06c(lVar7,0x112f8ae50,&UNK_10dc00160);
          if ((uVar5 & 1) == 0) {
            return 0;
          }
          return 1;
        }
        FUN_1043a9808(uVar8);
      }
      func_0x0001043aa06c(lVar7,0x1130745a8,&UNK_10dcf4820);
    }
  }
  return 0;
}



/* Entry: 1043a8740; end: 1043a8cdf;  */

undefined8 FUN_1043a8740(char *param_1,char *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  ulong uVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined1 *puVar6;
  long lVar7;
  ulong uVar8;
  code *pcVar9;
  long lVar10;
  long lVar11;
  
  lVar2 = 0;
  FUN_1043aa0ac();
  lVar11 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  puVar6 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar10 = 0x112f8ae50;
  func_0x0001000285a8(0x112f8ae50,&UNK_10dc00160);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar8 = (long)puVar6 - extraout_x8_00;
  lVar10 = 0x1130745a8;
  func_0x0001000285a8(0x1130745a8,&UNK_10dcf4820);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = uVar8 - extraout_x8_01;
  if (*param_1 == *param_2) {
    lVar3 = 0;
    FUN_1043a86b0();
    pcVar4 = param_1 + *(int *)(lVar3 + 0x14);
    FUN_1043aa0ec(pcVar4,param_2 + *(int *)(lVar3 + 0x14));
    if (((ulong)pcVar4 & 1) != 0) {
      iVar1 = *(int *)(lVar3 + 0x18);
      lVar10 = (long)*(int *)(lVar10 + 0x30);
      FUN_1043a86e8(param_1 + iVar1,lVar7);
      FUN_1043a86e8(param_2 + iVar1,lVar7 + lVar10);
      pcVar9 = *(code **)(lVar11 + 0x30);
      lVar11 = lVar7;
      (*pcVar9)(lVar7,1,lVar2);
      if ((int)lVar11 == 1) {
        lVar10 = lVar7 + lVar10;
        (*pcVar9)(lVar10,1,lVar2);
        if ((int)lVar10 == 1) {
          func_0x0001043aa06c(lVar7,0x112f8ae50,&UNK_10dc00160);
          return 1;
        }
      }
      else {
        FUN_1043a86e8(lVar7,uVar8);
        lVar11 = lVar7 + lVar10;
        (*pcVar9)(lVar11,1,lVar2);
        if ((int)lVar11 != 1) {
          func_0x000103714ae4(lVar7 + lVar10,puVar6);
          uVar5 = uVar8;
          FUN_1043aa0ec(uVar8,puVar6);
          FUN_1043a9808(puVar6);
          FUN_1043a9808(uVar8);
          func_0x0001043aa06c(lVar7,0x112f8ae50,&UNK_10dc00160);
          if ((uVar5 & 1) == 0) {
            return 0;
          }
          return 1;
        }
        FUN_1043a9808(uVar8);
      }
      func_0x0001043aa06c(lVar7,0x1130745a8,&UNK_10dcf4820);
    }
  }
  return 0;
}



/* Entry: 1043a8ce0; end: 1043a8e67;  */

/* WARNING: Possible PIC construction at 0x0001043a8d7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001043a8e18: Changing call to branch */

void FUN_1043a8ce0(long param_1,long param_2)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  long unaff_x19;
  long unaff_x20;
  long lVar11;
  code *pcVar12;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  lVar8 = param_1 + *(int *)(param_2 + 0x14);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar8 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar8 + 0x20));
  lVar4 = 0;
  FUN_1043aa0ac();
  iVar3 = *(int *)(lVar4 + 0x1c);
  lVar5 = 0;
  __s10Foundation3URLVMa();
  lVar11 = *(long *)(lVar5 + -8);
  pcVar12 = *(code **)(lVar11 + 0x30);
  lVar6 = lVar8 + iVar3;
  (*pcVar12)(lVar6,1,lVar5);
  if ((int)lVar6 == 0) {
    (**(code **)(lVar11 + 8))(lVar8 + iVar3,lVar5);
  }
  puVar2 = (undefined8 *)(lVar8 + *(int *)(lVar4 + 0x20));
  uVar9 = puVar2[1];
  if (uVar9 >> 0x3c < 0xf) {
    uVar7 = *puVar2;
    unaff_x30 = 0x1043a8d80;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffb0;
    unaff_x19 = lVar4;
    unaff_x20 = lVar5;
    unaff_x29 = puVar1;
  }
  else {
    puVar2 = (undefined8 *)(lVar8 + *(int *)(lVar4 + 0x24));
    if ((ulong)puVar2[1] >> 0x3c < 0xf) {
      func_0x00010006c090(*puVar2);
    }
    param_1 = param_1 + *(int *)(param_2 + 0x18);
    lVar8 = param_1;
    (**(code **)(*(long *)(lVar4 + -8) + 0x30))(param_1,1,lVar4);
    if ((int)lVar8 != 0) {
      return;
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x10));
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x20));
    iVar3 = *(int *)(lVar4 + 0x1c);
    lVar8 = param_1 + iVar3;
    (*pcVar12)(lVar8,1,lVar5);
    if ((int)lVar8 == 0) {
      (**(code **)(lVar11 + 8))(param_1 + iVar3,lVar5);
    }
    puVar2 = (undefined8 *)(param_1 + *(int *)(lVar4 + 0x20));
    uVar9 = puVar2[1];
    if (uVar9 >> 0x3c < 0xf) {
      uVar7 = *puVar2;
      unaff_x30 = 0x1043a8e1c;
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffb0;
      unaff_x19 = lVar4;
      unaff_x20 = lVar5;
      unaff_x29 = puVar1;
    }
    else {
      puVar2 = (undefined8 *)(param_1 + *(int *)(lVar4 + 0x24));
      uVar9 = puVar2[1];
      if (0xe < uVar9 >> 0x3c) {
        return;
      }
      uVar7 = *puVar2;
    }
  }
  uVar10 = (uint)(uVar9 >> 0x3e);
  if (uVar10 != 1) {
    if (uVar10 != 2) {
      return;
    }
    *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    func_0x000107c61574(uVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar9 & 0x3fffffffffffffff);
  return;
}



/* Entry: 1043a8e68; end: 1043a9807;  */

undefined1 * FUN_1043a8e68(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  code *pcVar14;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x14));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  uVar12 = *puVar2;
  puVar1[1] = puVar2[1];
  *puVar1 = uVar12;
  uVar12 = puVar2[2];
  uVar13 = puVar2[3];
  puVar1[2] = uVar12;
  puVar1[3] = uVar13;
  uVar13 = puVar2[4];
  puVar1[4] = uVar13;
  lVar4 = 0;
  FUN_1043aa0ac();
  lVar8 = (long)*(int *)(lVar4 + 0x1c);
  lVar5 = 0;
  __s10Foundation3URLVMa();
  lVar10 = *(long *)(lVar5 + -8);
  pcVar14 = *(code **)(lVar10 + 0x30);
  _swift_bridgeObjectRetain(uVar12);
  _swift_bridgeObjectRetain(uVar13);
  puVar6 = (undefined1 *)((long)puVar2 + lVar8);
  (*pcVar14)(puVar6,1,lVar5);
  if ((int)puVar6 == 0) {
    (**(code **)(lVar10 + 0x10))
              ((undefined1 *)((long)puVar1 + lVar8),(undefined1 *)((long)puVar2 + lVar8),lVar5);
    (**(code **)(lVar10 + 0x38))((undefined1 *)((long)puVar1 + lVar8),0,1,lVar5);
  }
  else {
    lVar9 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    _memcpy((undefined1 *)((long)puVar1 + lVar8),(undefined1 *)((long)puVar2 + lVar8),
            *(undefined8 *)(*(long *)(lVar9 + -8) + 0x40));
  }
  puVar7 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar4 + 0x20));
  puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar4 + 0x20));
  uVar11 = puVar3[1];
  if (uVar11 >> 0x3c < 0xf) {
    uVar12 = *puVar3;
    func_0x00010006c00c(uVar12,uVar11);
    *puVar7 = uVar12;
    puVar7[1] = uVar11;
  }
  else {
    uVar12 = *puVar3;
    puVar7[1] = puVar3[1];
    *puVar7 = uVar12;
  }
  puVar7 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar4 + 0x24));
  puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar4 + 0x24));
  uVar11 = puVar3[1];
  if (uVar11 >> 0x3c < 0xf) {
    uVar12 = *puVar3;
    func_0x00010006c00c(uVar12,uVar11);
    *puVar7 = uVar12;
    puVar7[1] = uVar11;
  }
  else {
    uVar12 = *puVar3;
    puVar7[1] = puVar3[1];
    *puVar7 = uVar12;
  }
  *(undefined4 *)((long)puVar1 + (long)*(int *)(lVar4 + 0x28)) =
       *(undefined4 *)((long)puVar2 + (long)*(int *)(lVar4 + 0x28));
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x18));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x18));
  lVar8 = *(long *)(lVar4 + -8);
  puVar7 = puVar2;
  (**(code **)(lVar8 + 0x30))(puVar2,1,lVar4);
  if ((int)puVar7 == 0) {
    uVar12 = *puVar2;
    puVar1[1] = puVar2[1];
    *puVar1 = uVar12;
    uVar12 = puVar2[3];
    puVar1[2] = puVar2[2];
    puVar1[3] = uVar12;
    uVar12 = puVar2[4];
    puVar1[4] = uVar12;
    lVar9 = (long)*(int *)(lVar4 + 0x1c);
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar12);
    puVar6 = (undefined1 *)((long)puVar2 + lVar9);
    (*pcVar14)(puVar6,1,lVar5);
    if ((int)puVar6 == 0) {
      (**(code **)(lVar10 + 0x10))
                ((undefined1 *)((long)puVar1 + lVar9),(undefined1 *)((long)puVar2 + lVar9),lVar5);
      (**(code **)(lVar10 + 0x38))((undefined1 *)((long)puVar1 + lVar9),0,1,lVar5);
    }
    else {
      lVar5 = 0x112d36580;
      func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
      _memcpy((undefined1 *)((long)puVar1 + lVar9),(undefined1 *)((long)puVar2 + lVar9),
              *(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
    }
    puVar7 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar4 + 0x20));
    puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar4 + 0x20));
    uVar11 = puVar3[1];
    if (uVar11 >> 0x3c < 0xf) {
      uVar12 = *puVar3;
      func_0x00010006c00c(uVar12,uVar11);
      *puVar7 = uVar12;
      puVar7[1] = uVar11;
    }
    else {
      uVar12 = *puVar3;
      puVar7[1] = puVar3[1];
      *puVar7 = uVar12;
    }
    puVar7 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar4 + 0x24));
    puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar4 + 0x24));
    uVar11 = puVar3[1];
    if (uVar11 >> 0x3c < 0xf) {
      uVar12 = *puVar3;
      func_0x00010006c00c(uVar12,uVar11);
      *puVar7 = uVar12;
      puVar7[1] = uVar11;
    }
    else {
      uVar12 = *puVar3;
      puVar7[1] = puVar3[1];
      *puVar7 = uVar12;
    }
    *(undefined4 *)((long)puVar1 + (long)*(int *)(lVar4 + 0x28)) =
         *(undefined4 *)((long)puVar2 + (long)*(int *)(lVar4 + 0x28));
    (**(code **)(lVar8 + 0x38))(puVar1,0,1,lVar4);
  }
  else {
    lVar4 = 0x112f8ae50;
    func_0x0001000285a8(0x112f8ae50,&UNK_10dc00160);
    _memcpy(puVar1,puVar2,*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  }
  return param_1;
}



/* Entry: 1043a9808; end: 1043a9843;  */

undefined8 FUN_1043a9808(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1043aa0ac();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}


