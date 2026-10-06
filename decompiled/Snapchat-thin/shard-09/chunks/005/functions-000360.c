/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106e7eaa8; end: 106e7eb43; -[SCLastInteractionState .cxx_destruct] */

void FUN_106e7eaa8(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e7eb44; end: 106e7eb5f; +[SCLastInteractionStateBuilder lastInteractionState] */

void FUN_106e7eb44(void)

{
  _objc_alloc_init(PTR_PTR_1126d2ec8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106e7eb60; end: 106e7eeaf; +[SCLastInteractionStateBuilder lastInteractionStateFromExistingLastInteractionState:] */

void FUN_106e7eb60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined *puVar18;
  undefined8 uVar19;
  undefined *puVar20;
  undefined8 uVar21;
  undefined *puVar22;
  undefined8 uVar23;
  undefined *puVar24;
  
  puVar1 = PTR_PTR_1126d2ec8;
  _objc_retain(param_3);
  func_0x00010c089120();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c269f60();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2bad60(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c08a0a0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c2b22a0(puVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c08a160();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010c2b22e0(puVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010c088500();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar7;
  func_0x00010c2b20c0(puVar7,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010c088540();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar9;
  func_0x00010c2b2100(puVar9,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_3;
  func_0x00010c08aaa0(param_3);
  puVar13 = puVar11;
  func_0x00010c2b2400(puVar11,param_2,uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_3;
  func_0x00010c08a080();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar13;
  func_0x00010c2b2280(puVar13,param_2,uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = param_3;
  func_0x00010c08a140(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar14;
  func_0x00010c2b22c0(puVar14,param_2,uVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = param_3;
  func_0x00010c0884e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar16;
  func_0x00010c2b20a0(puVar16,param_2,uVar17);
  _objc_retainAutoreleasedReturnValue();
  uVar19 = param_3;
  func_0x00010c088520(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar18;
  func_0x00010c2b20e0(puVar18,param_2,uVar19);
  _objc_retainAutoreleasedReturnValue();
  uVar21 = param_3;
  func_0x00010c0887e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar22 = puVar20;
  func_0x00010c2b2120(puVar20,param_2,uVar21);
  _objc_retainAutoreleasedReturnValue();
  uVar23 = param_3;
  func_0x00010c08a1c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar24 = puVar22;
  func_0x00010c2b2300(puVar22,param_2,uVar23);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar23);
  _objc_release(puVar22);
  _objc_release(uVar21);
  _objc_release(puVar20);
  _objc_release(uVar19);
  _objc_release(puVar18);
  _objc_release(uVar17);
  _objc_release(puVar16);
  _objc_release(uVar15);
  _objc_release(puVar14);
  _objc_release(uVar12);
  _objc_release(puVar13);
  _objc_release(puVar11);
  _objc_release(uVar10);
  _objc_release(puVar9);
  _objc_release(uVar8);
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar24);
  return;
}



/* Entry: 106e7eeb0; end: 106e7ef03; -[SCLastInteractionStateBuilder build] */

void FUN_106e7eeb0(void)

{
  _objc_alloc(PTR_PTR_1126b2970);
  func_0x00010c050bc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106e7ef04; end: 106e7ef3b; -[SCLastInteractionStateBuilder withTargetId:] */

long FUN_106e7ef04(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 106e7ef3c; end: 106e7ef73; -[SCLastInteractionStateBuilder withLastSnapSendByUserTimestamp:] */

long FUN_106e7ef3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 106e7ef74; end: 106e7efab; -[SCLastInteractionStateBuilder withLastSnapViewByUserTimestamp:] */

long FUN_106e7ef74(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 106e7efac; end: 106e7efe3; -[SCLastInteractionStateBuilder withLastChatSendByUserTimestamp:] */

long FUN_106e7efac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 106e7efe4; end: 106e7f01b; -[SCLastInteractionStateBuilder withLastChatViewByUserTimestamp:] */

long FUN_106e7efe4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 106e7f01c; end: 106e7f023; -[SCLastInteractionStateBuilder withLastViewInteractionContentType:] */

void FUN_106e7f01c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x30) = param_3;
  return;
}



/* Entry: 106e7f024; end: 106e7f05b; -[SCLastInteractionStateBuilder withLastSnapSendByOtherParticipantTimestamp:] */

long FUN_106e7f024(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 106e7f05c; end: 106e7f093; -[SCLastInteractionStateBuilder withLastSnapViewByOtherParticipantTimestamp:] */

long FUN_106e7f05c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 106e7f094; end: 106e7f0cb; -[SCLastInteractionStateBuilder withLastChatSendByOtherParticipantTimestamp:] */

long FUN_106e7f094(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 106e7f0cc; end: 106e7f103; -[SCLastInteractionStateBuilder withLastChatViewByOtherParticipantTimestamp:] */

long FUN_106e7f0cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 106e7f104; end: 106e7f13b; -[SCLastInteractionStateBuilder withLastContentShareByUserTimestamp:] */

long FUN_106e7f104(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 106e7f13c; end: 106e7f173; -[SCLastInteractionStateBuilder withLastSpotlightShareByUserTimestamp:] */

long FUN_106e7f13c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 106e7f174; end: 106e7f20f; -[SCLastInteractionStateBuilder .cxx_destruct] */

void FUN_106e7f174(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e7f210; end: 106e7f39b; -[SCLastTurnInteractionState initWithCoder:] */

undefined1 * FUN_106e7f210(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f7988;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106e7f39c; end: 106e7f53f; -[SCLastTurnInteractionState initWithTargetId:lastTurnInteractionTimestamp:secondToLastTurnInteractionTimestamp:lastInteractionTimestamp:lastInteractionActionType:earliestViewerInteractionAfterLastTurnTimestamp:lastSnapSendByUserTimestamp:lastContentShareByUserTimestamp:] */

undefined1 *
FUN_106e7f39c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126f7988;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106e7f540; end: 106e7f563; -[SCLastTurnInteractionState copyWithZone:] */

undefined8 FUN_106e7f540(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106e7f564; end: 106e7f63b; -[SCLastTurnInteractionState encodeWithCoder:] */

void FUN_106e7f564(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e89eb8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110e8a038);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110e8a058);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110e8a078);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110e8a098);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x30),
                      &PTR____CFConstantStringClassReference_110e8a0b8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x38),
                      &PTR____CFConstantStringClassReference_110e89ed8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x40),
                      &PTR____CFConstantStringClassReference_110e89ff8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106e7f63c; end: 106e7f6f7; -[SCLastTurnInteractionState hash] */

undefined8 * FUN_106e7f63c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_68 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x28);
  uStack_40 = *(undefined8 *)(param_1 + 0x30);
  lStack_48 = -lVar5;
  if (-1 < lVar5) {
    lStack_48 = lVar5;
  }
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_68;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_106e7f800:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_106e7f80c;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (puVar3[5] == param_3[5])) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[2];
        if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[3];
          if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = puVar3[4];
            if ((lVar5 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = puVar3[6];
              if ((lVar5 == param_3[6]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                lVar5 = puVar3[7];
                if ((lVar5 == param_3[7]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                  puVar6 = (undefined8 *)puVar3[8];
                  if (puVar6 != (undefined8 *)param_3[8]) {
                    func_0x00010c071ae0();
                    goto LAB_106e7f80c;
                  }
                  goto LAB_106e7f800;
                }
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_106e7f80c:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 106e7f6f8; end: 106e7f827; -[SCLastTurnInteractionState isEqual:] */

long FUN_106e7f6f8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106e7f800:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106e7f80c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x20);
            if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x30);
              if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x38);
                if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x40);
                  if (lVar3 != *(long *)(param_3 + 0x40)) {
                    func_0x00010c071ae0();
                    goto LAB_106e7f80c;
                  }
                  goto LAB_106e7f800;
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_106e7f80c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106e7f828; end: 106e7f82f; -[SCLastTurnInteractionState targetId] */

undefined8 FUN_106e7f828(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106e7f830; end: 106e7f837; -[SCLastTurnInteractionState lastTurnInteractionTimestamp] */

undefined8 FUN_106e7f830(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106e7f838; end: 106e7f83f; -[SCLastTurnInteractionState secondToLastTurnInteractionTimestamp] */

undefined8 FUN_106e7f838(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106e7f840; end: 106e7f847; -[SCLastTurnInteractionState lastInteractionTimestamp] */

undefined8 FUN_106e7f840(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106e7f848; end: 106e7f84f; -[SCLastTurnInteractionState lastInteractionActionType] */

undefined8 FUN_106e7f848(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106e7f850; end: 106e7f857; -[SCLastTurnInteractionState earliestViewerInteractionAfterLastTurnTimestamp] */

undefined8 FUN_106e7f850(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106e7f858; end: 106e7f85f; -[SCLastTurnInteractionState lastSnapSendByUserTimestamp] */

undefined8 FUN_106e7f858(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 106e7f860; end: 106e7f867; -[SCLastTurnInteractionState lastContentShareByUserTimestamp] */

undefined8 FUN_106e7f860(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 106e7f868; end: 106e7f8d3; -[SCLastTurnInteractionState .cxx_destruct] */

void FUN_106e7f868(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e7f8d4; end: 106e7f8ef; +[SCLastTurnInteractionStateBuilder lastTurnInteractionState] */

void FUN_106e7f8d4(void)

{
  _objc_alloc_init(PTR_PTR_1126d2ed0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106e7f8f0; end: 106e7fb3b; +[SCLastTurnInteractionStateBuilder lastTurnInteractionStateFromExistingLastTurnInteractionState:] */

void FUN_106e7f8f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined *puVar16;
  
  puVar1 = PTR_PTR_1126d2ed0;
  _objc_retain(param_3);
  func_0x00010c08a5a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c269f60();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2bad60(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c08a5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c2b2360(puVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c154d00();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010c2b7c80(puVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010c0891c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar7;
  func_0x00010c2b21c0(puVar7,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010c089080(param_3);
  puVar11 = puVar9;
  func_0x00010c2b21a0(puVar9,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010bf8be60(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar11;
  func_0x00010c2acc00(puVar11,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_3;
  func_0x00010c08a0a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar12;
  func_0x00010c2b22a0(puVar12,param_2,uVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = param_3;
  func_0x00010c0887e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar16 = puVar14;
  func_0x00010c2b2120(puVar14,param_2,uVar15);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar15);
  _objc_release(puVar14);
  _objc_release(uVar13);
  _objc_release(puVar12);
  _objc_release(uVar10);
  _objc_release(puVar11);
  _objc_release(puVar9);
  _objc_release(uVar8);
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar16);
  return;
}



/* Entry: 106e7fb3c; end: 106e7fb83; -[SCLastTurnInteractionStateBuilder build] */

void FUN_106e7fb3c(void)

{
  _objc_alloc(PTR_PTR_1126c0af8);
  func_0x00010c050be0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106e7fb84; end: 106e7fbbb; -[SCLastTurnInteractionStateBuilder withTargetId:] */

long FUN_106e7fb84(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 106e7fbbc; end: 106e7fbf3; -[SCLastTurnInteractionStateBuilder withLastTurnInteractionTimestamp:] */

long FUN_106e7fbbc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 106e7fbf4; end: 106e7fc2b; -[SCLastTurnInteractionStateBuilder withSecondToLastTurnInteractionTimestamp:] */

long FUN_106e7fbf4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 106e7fc2c; end: 106e7fc63; -[SCLastTurnInteractionStateBuilder withLastInteractionTimestamp:] */

long FUN_106e7fc2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 106e7fc64; end: 106e7fc6b; -[SCLastTurnInteractionStateBuilder withLastInteractionActionType:] */

void FUN_106e7fc64(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 106e7fc6c; end: 106e7fca3; -[SCLastTurnInteractionStateBuilder withEarliestViewerInteractionAfterLastTurnTimestamp:] */

long FUN_106e7fc6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 106e7fca4; end: 106e7fcdb; -[SCLastTurnInteractionStateBuilder withLastSnapSendByUserTimestamp:] */

long FUN_106e7fca4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 106e7fcdc; end: 106e7fd13; -[SCLastTurnInteractionStateBuilder withLastContentShareByUserTimestamp:] */

long FUN_106e7fcdc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 106e7fd14; end: 106e7fd7f; -[SCLastTurnInteractionStateBuilder .cxx_destruct] */

void FUN_106e7fd14(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e7fd80; end: 106e7fdf3; -[SCSendToSuggestionsDataServices initWithSuggestionsDataService:] */

undefined1 * FUN_106e7fd80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f7990;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106e7fdf4; end: 106e7fdfb; -[SCSendToSuggestionsDataServices suggestionsDataService] */

undefined8 FUN_106e7fdf4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106e7fdfc; end: 106e7fe07; -[SCSendToSuggestionsDataServices .cxx_destruct] */

void FUN_106e7fdfc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e7fe08; end: 106e7fe7b; -[SCSharingExperimentServices initWithComposerSharingFeatureSettings:] */

undefined1 * FUN_106e7fe08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f7998;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106e7fe7c; end: 106e7fe83; -[SCSharingExperimentServices composerSharingFeatureSettings] */

undefined8 FUN_106e7fe7c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106e7fe84; end: 106e7fe8f; -[SCSharingExperimentServices .cxx_destruct] */

void FUN_106e7fe84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e7fe90; end: 106e7fe97; -[SCSpectaclesAsyncQueues mainQueue] */

undefined8 FUN_106e7fe90(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106e7fe98; end: 106e7fec7; -[SCSpectaclesAsyncQueues setMainQueue:] */

void FUN_106e7fe98(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106e7fec8; end: 106e7fecf; -[SCSpectaclesAsyncQueues workerQueue] */

undefined8 FUN_106e7fec8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106e7fed0; end: 106e7feff; -[SCSpectaclesAsyncQueues setWorkerQueue:] */

void FUN_106e7fed0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106e7ff00; end: 106e7ff07; -[SCSpectaclesAsyncQueues backgroundQueue] */

undefined8 FUN_106e7ff00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106e7ff08; end: 106e7ff37; -[SCSpectaclesAsyncQueues setBackgroundQueue:] */

void FUN_106e7ff08(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106e7ff38; end: 106e7ffa7; -[SCSpectaclesAsyncQueues .cxx_destruct] */

void FUN_106e7ff38(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e7ffa8; end: 106e7ffff; -[SCGalleryLagunaContentDataSource setupIfNeeded] */

void FUN_106e7ffa8(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106e80000;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x68),param_2,&puStack_38);
  return;
}



/* Entry: 106e80000; end: 106e80007;  */

void FUN_106e80000(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bead0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__setupIfNeeded_112588de0);
  return;
}



/* Entry: 106e80008; end: 106e800ff; -[SCGalleryLagunaContentDataSource entryShouldUseLagunaContentDataSource:] */

bool FUN_106e80008(long param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_3);
  uVar3 = param_3;
  func_0x00010c07b240();
  if ((uVar3 & 1) == 0) {
    uVar3 = param_3;
    func_0x00010bfbdda0();
    func_0x00010b5fa33c();
    if (uVar3 == 2) {
      bVar1 = true;
      goto LAB_106e800e0;
    }
    uVar3 = param_3;
    func_0x00010bfbdda0();
    iVar2 = (int)uVar3;
    func_0x00010b5fad2c();
    if (iVar2 != 0) {
      uVar3 = param_3;
      func_0x00010c0e0160();
      _objc_retainAutoreleasedReturnValue();
      if (uVar3 == 0) {
        bVar1 = true;
      }
      else {
        lVar6 = *(long *)(param_1 + 0x40);
        uVar4 = param_3;
        func_0x00010bf97200(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c281d20(lVar6,param_2,uVar4);
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar6;
        func_0x00010bf529e0();
        bVar1 = lVar5 != 0;
        _objc_release(lVar6);
        _objc_release(uVar4);
      }
      _objc_release(uVar3);
      goto LAB_106e800e0;
    }
  }
  bVar1 = false;
LAB_106e800e0:
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 106e80100; end: 106e801d7; -[SCGalleryLagunaContentDataSource recentlyAddedMediaIds] */

void FUN_106e80100(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_106e801d8;
  uStack_30 = 0x106e801e8;
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  puStack_28 = puVar1;
  func_0x00010c0f8240(*(undefined8 *)(param_1 + 0x68));
  uVar2 = puStack_48[5];
  _objc_retain(uVar2);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(puStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106e801d8; end: 106e801ef;  */

void FUN_106e801d8(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106e801f0; end: 106e8036b;  */

void FUN_106e801f0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar6 = *(long *)(*(long *)(param_1 + 0x20) + 200);
  _objc_retain(lVar6);
  lVar5 = lVar6;
  func_0x00010bf52a60(lVar6,param_2,&uStack_130,auStack_e8,0x10);
  if (lVar5 != 0) {
    lVar9 = *plStack_120;
    do {
      lVar10 = 0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(lVar6);
        }
        uVar7 = *(undefined8 *)(lStack_128 + lVar10 * 8);
        uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 200);
        func_0x00010c0e00e0(uVar2,param_2,uVar7);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar2;
        func_0x00010c083c80();
        puVar3 = puVar1;
        if ((int)uVar8 != 0) {
          puVar3 = *(undefined **)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28);
        }
        func_0x00010befa120(puVar3,param_2,uVar7);
        _objc_release(uVar2);
        lVar10 = lVar10 + 1;
      } while (lVar5 != lVar10);
      lVar5 = lVar6;
      func_0x00010bf52a60(lVar6,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar5 != 0);
  }
  _objc_release(lVar6);
  puVar3 = puVar1;
  func_0x00010c12d4a0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 200));
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar3);
  puVar4 = puVar3;
  func_0x00010c0c5180(puVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(puVar1 + 0x50);
  func_0x00010c29fd00(lVar5,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = 0;
  if ((puVar3 != (undefined *)0x0) && (lVar5 != 0)) {
    uVar8 = *(undefined8 *)(puVar1 + 0x58);
    func_0x00010bf4c9e0(uVar8,param_2,puVar3,lVar5);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar8);
  return;
}



/* Entry: 106e8036c; end: 106e80413; -[SCGalleryLagunaContentDataSource contentLoaderForSnap:] */

void FUN_106e8036c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0c5180(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x50);
  func_0x00010c29fd00(lVar2,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 0;
  if ((param_3 != 0) && (lVar2 != 0)) {
    uVar3 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010bf4c9e0(uVar3,param_2,param_3,lVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 106e80414; end: 106e80443; -[SCGalleryLagunaContentDataSource clearLocationsCache] */

void FUN_106e80414(undefined8 param_1)

{
  func_0x00010bebea00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3ab80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106e80444; end: 106e8083f; -[SCGalleryLagunaContentDataSource _fetchLagunaContentSnapsForEntry:] */

void FUN_106e80444(long param_1,undefined8 param_2,undefined *param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = param_3;
  func_0x00010c0e0160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar10 = PTR_PTR_1126af4c0;
  puVar8 = param_3;
  if (puVar2 == (undefined *)0x0) {
    puVar2 = param_3;
    func_0x00010bf97200(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa70a0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar10 != (undefined *)0x0) {
      puVar8 = puVar10;
    }
    _objc_retain(puVar8);
    _objc_release(param_3);
    _objc_release(puVar10);
    _objc_release(uVar3);
    _objc_release(puVar2);
  }
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar8;
  func_0x00010c0e0160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar2 = PTR_PTR_1126af4d0;
  puVar10 = (undefined *)0x0;
  if (puVar5 != (undefined *)0x0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa7380();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    puVar10 = puVar2;
    func_0x00010bf529e0();
    if (puVar10 == (undefined *)0x0) {
      puVar10 = (undefined *)0x0;
    }
    else {
      func_0x00010befa160(puVar4);
      puVar10 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      func_0x00010c1607a0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar2;
      func_0x00010c0b8600(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(puVar10);
      _objc_release(puVar5);
    }
    _objc_release(puVar2);
  }
  lVar11 = *(long *)(param_1 + 0x40);
  puVar2 = puVar8;
  func_0x00010bf97200(puVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c281d20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  lVar6 = lVar11;
  func_0x00010bf529e0();
  if (lVar6 != 0) {
    _objc_retain(lVar11);
    lVar6 = lVar11;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar6 != 0) {
      lVar9 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar11);
        }
        uVar3 = *(undefined8 *)(lVar9 * 8);
        func_0x00010bdc3540(uVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar10;
        func_0x00010bf4b900();
        _objc_release(uVar3);
        if (((ulong)puVar2 & 1) == 0) {
          uVar3 = *(undefined8 *)(param_1 + 0x48);
          puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2424a0(uVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar4);
          _objc_release(uVar3);
          _objc_release(puVar2);
        }
        lVar9 = lVar9 + 1;
      } while (lVar6 != lVar9);
      lVar6 = lVar11;
      func_0x00010bf52a60();
    }
    _objc_release(lVar11);
    puVar2 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
    func_0x00010c246960();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c246bc0(puVar4);
    _objc_release(puVar5);
    _objc_release(puVar2);
  }
  puVar2 = puVar4;
  func_0x00010bf51e00(puVar4);
  _objc_release(lVar11);
  _objc_release(puVar10);
  _objc_release(puVar4);
  _objc_release(puVar8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c0c5190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_mediaId_11260ee78);
  return;
}



/* Entry: 106e80840; end: 106e80847;  */

void FUN_106e80840(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0c5190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_mediaId_11260ee78);
  return;
}



/* Entry: 106e80848; end: 106e80aaf; -[SCGalleryLagunaContentDataSource _contentGroupedByIdFromContentList:] */

void FUN_106e80848(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 unaff_x21;
  undefined8 uVar6;
  undefined *unaff_x22;
  long lVar7;
  long lVar8;
  undefined8 uStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  long lStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_f8;
  undefined *puStack_f0;
  long lStack_68;
  
  puVar4 = &uStack_140;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar7 = *plStack_130;
    do {
      lVar8 = 0;
      do {
        if (*plStack_130 != lVar7) {
          _objc_enumerationMutation(param_3);
        }
        unaff_x22 = *(undefined **)(lStack_138 + lVar8 * 8);
        puVar2 = unaff_x22;
        func_0x00010c0d2900();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        func_0x00010c08fa60();
        _objc_release(puVar2);
        if (puVar3 == (undefined *)0x0) {
          puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
          puStack_f0 = unaff_x22;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar2;
          func_0x00010c0d3c80();
          func_0x00010bdc3540();
          _objc_retainAutoreleasedReturnValue();
LAB_106e80a0c:
          func_0x00010c1d0640(puVar5);
          _objc_release(unaff_x22);
        }
        else {
          puVar2 = unaff_x22;
          func_0x00010c0d2900(unaff_x22);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar5;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(puVar2);
          if (puVar3 == (undefined *)0x0) {
            puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
            puStack_f8 = unaff_x22;
            func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
            _objc_retainAutoreleasedReturnValue();
            puVar3 = puVar2;
            func_0x00010c0d3c80();
            func_0x00010c0d2900();
            _objc_retainAutoreleasedReturnValue();
            goto LAB_106e80a0c;
          }
          puVar2 = unaff_x22;
          func_0x00010c0d2900(unaff_x22);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar5;
          func_0x00010c0e00e0(puVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120();
        }
        _objc_release(puVar3);
        _objc_release(puVar2);
        lVar8 = lVar8 + 1;
      } while (lVar1 != lVar8);
      lVar1 = param_3;
      puVar4 = &uStack_140;
      func_0x00010bf52a60();
      unaff_x21 = 0;
    } while (lVar1 != 0);
  }
  _objc_release(param_3);
  lVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    pcStack_148 = FUN_106e80ab0;
    puStack_170 = unaff_x22;
    uStack_168 = unaff_x21;
    puStack_160 = puVar5;
    lStack_158 = param_3;
    puStack_150 = &stack0xfffffffffffffff0;
    _objc_retain(puVar4);
    puStack_198 = &uStack_1a0;
    uStack_1a0 = 0;
    uStack_190 = 0x3032000000;
    pcStack_188 = FUN_106e801d8;
    uStack_180 = 0x106e801e8;
    uStack_178 = 0;
    uVar6 = *(undefined8 *)(lVar1 + 0x68);
    _objc_retain(puVar4);
    func_0x00010c0f8240(uVar6);
    puVar5 = (undefined *)puStack_198[5];
    _objc_retain(puVar5);
    _objc_release(puVar4);
    __Block_object_dispose(&uStack_1a0,8);
    _objc_release(uStack_178);
    _objc_release(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106e80ab0; end: 106e80bb3; -[SCGalleryLagunaContentDataSource fetchLagunaContentSnapsForEntry:] */

void FUN_106e80ab0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_106e801d8;
  uStack_40 = 0x106e801e8;
  uStack_38 = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  _objc_retain(param_3);
  func_0x00010c0f8240(uVar1);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106e80bb4; end: 106e80bf7;  */

void FUN_106e80bb4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be12000(uVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106e80bf8; end: 106e80cb7; -[SCGalleryLagunaContentDataSource countOfLagunaContentSnapsForEntry:] */

long FUN_106e80bf8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf97200(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c281d20(uVar3,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  _objc_release(uVar3);
  _objc_release(uVar1);
  func_0x00010c0e0160(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  func_0x00010bfa7ca0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar2 = param_1;
  func_0x00010bf529e0(param_1);
  _objc_release(param_1);
  return lVar2;
}



/* Entry: 106e80cb8; end: 106e80d53; -[SCGalleryLagunaContentDataSource countOfLagunaContentSnapsForEntryHighlighted:] */

undefined * FUN_106e80cb8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0e0160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar3 = PTR_PTR_1126af4d0;
  if (lVar1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf52de0(puVar3,param_2,param_3,0,uVar2);
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 106e80d54; end: 106e80df7; -[SCGalleryLagunaContentDataSource fetchLagunaContentSnapsForEntryHighlighted:] */

void FUN_106e80d54(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0e0160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar3 = PTR_PTR_1126af4d0;
  puVar4 = PTR____NSArray0__struct_11034ab48;
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa7400(puVar3,param_2,param_3,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    puVar4 = puVar3;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106e80df8; end: 106e81003; -[SCGalleryLagunaContentDataSource _fetchLagunaEntryForSnap:] */

void FUN_106e80df8(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar7 = param_3;
  func_0x00010c0e0160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar3 = PTR_PTR_1126af4d0;
  puVar6 = param_3;
  if (puVar7 == (undefined *)0x0) {
    puVar7 = param_3;
    func_0x00010c0c5180();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_50 = puVar7;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa7520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(puVar1);
    _objc_release(puVar7);
    puVar7 = puVar3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    if (puVar7 != (undefined *)0x0) {
      puVar6 = puVar7;
    }
    _objc_retain(puVar6);
    _objc_release(param_3);
    _objc_release(puVar7);
    _objc_release(puVar3);
  }
  puVar7 = puVar6;
  func_0x00010c0e0160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar3 = PTR_PTR_1126af4c0;
  if (puVar7 == (undefined *)0x0) {
    puVar4 = *(undefined **)(param_1 + 0x50);
    puVar3 = puVar6;
    func_0x00010c0c5180();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29fd00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar7 = *(undefined **)(param_1 + 0x40);
    puVar1 = puVar4;
    func_0x00010bf97380();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar4 = *(undefined **)(param_1 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar3;
    puVar1 = puVar6;
    func_0x00010bfa7060();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar4);
  puVar5 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    pcStack_58 = FUN_106e81004;
    puStack_80 = puVar3;
    puStack_78 = puVar4;
    puStack_70 = puVar7;
    puStack_68 = puVar6;
    puStack_60 = &stack0xfffffffffffffff0;
    _objc_retain(puVar1);
    puStack_a8 = &uStack_b0;
    uStack_b0 = 0;
    uStack_a0 = 0x3032000000;
    pcStack_98 = FUN_106e801d8;
    uStack_90 = 0x106e801e8;
    uStack_88 = 0;
    uVar2 = *(undefined8 *)(puVar5 + 0x68);
    _objc_retain(puVar1);
    func_0x00010c0f8240(uVar2);
    puVar7 = (undefined *)puStack_a8[5];
    _objc_retain(puVar7);
    _objc_release(puVar1);
    __Block_object_dispose(&uStack_b0,8);
    _objc_release(uStack_88);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 106e81004; end: 106e81107; -[SCGalleryLagunaContentDataSource fetchLagunaEntryForSnap:] */

void FUN_106e81004(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_106e801d8;
  uStack_40 = 0x106e801e8;
  uStack_38 = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  _objc_retain(param_3);
  func_0x00010c0f8240(uVar1);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106e81108; end: 106e8114b;  */

void FUN_106e81108(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be12020(uVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106e8114c; end: 106e81153; -[SCGalleryLagunaContentDataSource observe:queue:changeHandler:] */

void FUN_106e8114c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e0810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x60),PTR_s_observe_queue_changeHandler__112615c18);
  return;
}



/* Entry: 106e81154; end: 106e81253; -[SCGalleryLagunaContentDataSource entryPlaceholdersForLagunaContentWithExistingEntries:] */

void FUN_106e81154(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_106e801d8;
  uStack_40 = 0x106e801e8;
  uStack_38 = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  _objc_retain(param_3);
  func_0x00010c0f8240(uVar1);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106e81254; end: 106e812cf;  */

void FUN_106e81254(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(param_1 + 0x20);
  lVar4 = *(long *)(param_1 + 0x28);
  if (lVar3 != *(long *)(lVar4 + 0x18)) {
    _objc_retain(lVar3);
    uVar1 = *(undefined8 *)(lVar4 + 0x18);
    *(long *)(lVar4 + 0x18) = lVar3;
    _objc_release(uVar1);
    func_0x00010c285ca0(*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x50),param_2,
                        *(undefined8 *)(param_1 + 0x20));
    lVar4 = *(long *)(param_1 + 0x28);
  }
  uVar1 = *(undefined8 *)(lVar4 + 0x40);
  func_0x00010bf97400();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106e812d0; end: 106e812d7; -[SCGalleryLagunaContentDataSource invalidate] */

void FUN_106e812d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfec290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_increment_1125d8a68);
  return;
}



/* Entry: 106e812d8; end: 106e812f7; -[SCGalleryLagunaContentDataSource _isInvalidated] */

bool FUN_106e812d8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c296d80(uVar1);
  return 0 < (int)uVar1;
}



/* Entry: 106e812f8; end: 106e8137f; -[SCGalleryLagunaContentDataSource _setupIfNeeded] */

void FUN_106e812f8(ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x00010be41400();
  if (((uVar1 & 1) == 0) && ((*(byte *)(param_1 + 8) & 1) == 0)) {
    *(undefined1 *)(param_1 + 8) = 1;
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c075880();
    _objc_release(uVar2);
    if ((int)uVar3 != 0) {
      func_0x00010beae880(param_1);
    }
    func_0x00010be665e0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be3bbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__initializeSpectaclesMetadataPro_11256c890)
    ;
    return;
  }
  return;
}



/* Entry: 106e81380; end: 106e8153f; -[SCGalleryLagunaContentDataSource _observeMemoriesBackupChange] */

void FUN_106e81380(ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  if ((*(long *)(param_1 + 0xd8) == 0) && (uVar1 = param_1, func_0x00010be41400(), (uVar1 & 1) == 0)
     ) {
    _objc_initWeak(auStack_58,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0xa0);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0e05a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_106e81540;
    puStack_68 = &UNK_1109819f0;
    _objc_copyWeak(auStack_60,auStack_58);
    uVar4 = uVar3;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0xe0);
    *(undefined8 *)(param_1 + 0xe0) = uVar4;
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0xa0);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0e04e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_88,auStack_58);
    uVar4 = uVar3;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0xd8);
    *(undefined8 *)(param_1 + 0xd8) = uVar4;
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  return;
}



/* Entry: 106e81540; end: 106e815e7;  */

void FUN_106e81540(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0c0fc0(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 106e815e8; end: 106e8162f;  */

void FUN_106e815e8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be263a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106e81630; end: 106e8168f;  */

void FUN_106e81630(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf3e5a0(param_2);
  _objc_release(param_2);
  func_0x00010be263c0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106e81690; end: 106e816e7; -[SCGalleryLagunaContentDataSource _handleBackupServiceStatusUpdate:] */

void FUN_106e81690(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  long lStack_20;
  undefined8 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_106e816e8;
  puStack_28 = &UNK_110848c48;
  lStack_20 = param_1;
  uStack_18 = param_3;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x68),param_2,&puStack_40);
  return;
}



/* Entry: 106e816e8; end: 106e81713;  */

void FUN_106e816e8(long param_1)

{
  if (*(ulong *)(param_1 + 0x28) < 8 && (1L << (*(ulong *)(param_1 + 0x28) & 0x3f) & 0x9cU) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010beae890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s__setupOnCloudSyncReady_1125893c8);
    return;
  }
  return;
}



/* Entry: 106e81714; end: 106e81867; -[SCGalleryLagunaContentDataSource _handleBackupServiceDidUploadMediaId:] */

void FUN_106e81714(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  if (param_3 != 0) {
    lVar1 = *(long *)(param_1 + 0x50);
    func_0x00010c29fd00();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar1;
      func_0x00010c0d28e0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bf529e0();
      _objc_release(lVar3);
      puVar5 = puVar2;
      if (lVar4 != 0) {
        lVar3 = lVar1;
        func_0x00010c0d28e0(lVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf09f80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar2);
        _objc_release(lVar3);
      }
      uVar6 = *(undefined8 *)(param_1 + 0xd0);
      func_0x00010c249020();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar6;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0bb3c0();
      _objc_release(uVar8);
      _objc_release(uVar6);
      _objc_release(puVar5);
    }
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  if ((*(byte *)(lVar1 + 9) & 1) == 0) {
    *(undefined1 *)(lVar1 + 9) = 1;
    uVar6 = *(undefined8 *)(lVar1 + 0xd0);
    func_0x00010c249020(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar8);
    _objc_release(uVar6);
    puVar2 = PTR_PTR_1126d2ef8;
    _objc_alloc();
    func_0x00010c00ae80();
    uVar8 = *(undefined8 *)(lVar1 + 0x50);
    *(undefined **)(lVar1 + 0x50) = puVar2;
    _objc_release(uVar8);
    if (*(long *)(lVar1 + 0x18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c285cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(lVar1 + 0x50),PTR_s_updateFilterWithEntries__11267f150);
      return;
    }
  }
  return;
}



/* Entry: 106e81868; end: 106e81923; -[SCGalleryLagunaContentDataSource _setupOnCloudSyncReady] */

void FUN_106e81868(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  if ((*(byte *)(param_1 + 9) & 1) == 0) {
    *(undefined1 *)(param_1 + 9) = 1;
    uVar1 = *(undefined8 *)(param_1 + 0xd0);
    func_0x00010c249020(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar3);
    _objc_release(uVar1);
    puVar2 = PTR_PTR_1126d2ef8;
    _objc_alloc();
    func_0x00010c00ae80();
    uVar3 = *(undefined8 *)(param_1 + 0x50);
    *(undefined **)(param_1 + 0x50) = puVar2;
    _objc_release(uVar3);
    if (*(long *)(param_1 + 0x18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c285cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(param_1 + 0x50),PTR_s_updateFilterWithEntries__11267f150);
      return;
    }
  }
  return;
}



/* Entry: 106e81924; end: 106e81a33; -[SCGalleryLagunaContentDataSource spectaclesDeviceDidUpdateState:] */

void FUN_106e81924(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf48d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c27d020();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    uVar1 = param_1;
    func_0x00010bebea00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2515e0();
    _objc_release(uVar1);
    uVar1 = param_1;
    func_0x00010bebea00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf26600();
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00010bf48d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf48960();
  if ((uVar2 & 1) == 0) {
    uVar2 = param_3;
    func_0x00010bf48d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c27d020();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((uVar3 & 1) != 0) goto LAB_106e81a1c;
    func_0x00010bebea00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf95a40();
    uVar1 = param_1;
  }
  _objc_release(uVar1);
LAB_106e81a1c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106e81a34; end: 106e81b1b; -[SCGalleryLagunaContentDataSource spectaclesTransferSession:onTransferUpdate:] */

void FUN_106e81a34(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf61080();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c23e340();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010bf61080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar1 != 0) {
      uVar1 = param_3;
      func_0x00010bf61080(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_3;
      func_0x00010bf44300(param_3);
      func_0x00010be277a0(param_1,param_2,uVar1,uVar2,param_4);
      _objc_release(uVar1);
    }
    if ((param_4 & 0xfffffffffffffffe) == 6) {
      func_0x00010bebea00(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf95a40();
      _objc_release(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106e81b1c; end: 106e81d13; -[SCGalleryLagunaContentDataSource filterDidUpdateVisibleContent:] */

void FUN_106e81b1c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c29fce0();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)(param_1 + 200) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 200);
    *(undefined **)(param_1 + 200) = puVar1;
    _objc_release(uVar7);
  }
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60();
  lVar4 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar4) {
        _objc_enumerationMutation(param_3);
      }
      uVar7 = *(undefined8 *)(lVar9 * 8);
      puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)(param_1 + 200);
      func_0x00010bdc3540(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar8);
      _objc_release(uVar7);
      _objc_release(puVar1);
      lVar9 = lVar9 + 1;
    } while (lVar2 != lVar9);
    lVar2 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  uVar7 = *(undefined8 *)(param_1 + 0x40);
  lVar3 = *(long *)(param_1 + 0xd0);
  func_0x00010c249020();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf4bc60();
  _objc_retainAutoreleasedReturnValue();
  iVar5 = (int)*(undefined8 *)(param_1 + 0x18);
  lVar9 = lVar4;
  func_0x00010c283e80(uVar7);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(lVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(lVar9);
  if (iVar5 != 0) {
    lVar2 = lVar9;
    func_0x00010bf52a60();
    lVar4 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar3 = 0;
      do {
        if (lRam0000000000000000 != lVar4) {
          _objc_enumerationMutation(lVar9);
        }
        func_0x00010bdcd4e0(param_3);
        lVar3 = lVar3 + 1;
      } while (lVar2 != lVar3);
      lVar2 = lVar9;
      func_0x00010bf52a60();
    }
  }
  func_0x00010c115640(*(undefined8 *)(param_3 + 0x60));
  param_3 = param_3 + 0xf8;
  _objc_loadWeakRetained(param_3);
  func_0x00010c087ac0();
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf973b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(lVar9 + 0x40),PTR_s_entryOrPlaceholderWithUnpersiste_1125c3690);
  return;
}



/* Entry: 106e81d14; end: 106e81e3b; -[SCGalleryLagunaContentDataSource bucketer:didUpdateSnapsForEntryIds:shouldAppend:] */

void FUN_106e81d14(long param_1,undefined8 param_2,undefined8 param_3,long param_4,int param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  if (param_5 != 0) {
    lVar2 = param_4;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar4 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_4);
        }
        func_0x00010bdcd4e0(param_1);
        lVar4 = lVar4 + 1;
      } while (lVar2 != lVar4);
      lVar2 = param_4;
      func_0x00010bf52a60();
    }
  }
  func_0x00010c115640(*(undefined8 *)(param_1 + 0x60));
  param_1 = param_1 + 0xf8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c087ac0();
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf973b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_4 + 0x40),PTR_s_entryOrPlaceholderWithUnpersiste_1125c3690);
  return;
}



/* Entry: 106e81e3c; end: 106e81e43; -[SCGalleryLagunaContentDataSource entryOrPlaceholderForEntryId:] */

void FUN_106e81e3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf973b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_entryOrPlaceholderWithUnpersiste_1125c3690);
  return;
}



/* Entry: 106e81e44; end: 106e81ee7; -[SCGalleryLagunaContentDataSource _handleContentUpdate:contentComponent:updateType:] */

void FUN_106e81e44(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_106e81ee8;
  puStack_68 = &UNK_110844fe0;
  uStack_60 = param_3;
  lStack_58 = param_1;
  uStack_50 = param_5;
  uStack_48 = param_4;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_80);
  _objc_release(uStack_60);
  _objc_release(param_3);
  return;
}



/* Entry: 106e81ee8; end: 106e81f87;  */

void FUN_106e81ee8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 0x30) == 5) {
    lVar3 = *(long *)(param_1 + 0x38);
    lVar1 = *(long *)(param_1 + 0x20);
    func_0x00010c137620();
    if (lVar3 == lVar1) {
      lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 0x40);
      func_0x00010bf97380(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
      _objc_retainAutoreleasedReturnValue();
      if (lVar1 != 0) {
        uVar2 = *(undefined8 *)(param_1 + 0x28);
        lVar3 = lVar1;
        func_0x00010bf97200(lVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bdcd4e0(uVar2,param_2,lVar3);
        _objc_release(lVar3);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar1);
      return;
    }
  }
  return;
}



/* Entry: 106e81f88; end: 106e82227; -[SCGalleryLagunaContentDataSource _appendSpectaclesContentForEntryIdIfAllTransferred:] */

undefined8 FUN_106e81f88(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 auStack_168 [128];
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = *(undefined **)(param_1 + 0x40);
  func_0x00010c281d20(puVar2,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf529e0();
  if (puVar3 != (undefined *)0x0) {
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    lStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    plStack_1a0 = (long *)0x0;
    _objc_retain(puVar2);
    puVar3 = puVar2;
    func_0x00010bf52a60(puVar2,param_2,&uStack_1b0,auStack_e8,0x10);
    if (puVar3 != (undefined *)0x0) {
      lVar8 = *plStack_1a0;
      do {
        puVar9 = (undefined *)0x0;
        do {
          if (*plStack_1a0 != lVar8) {
            _objc_enumerationMutation(puVar2);
          }
          iVar1 = (int)*(undefined8 *)(lStack_1a8 + (long)puVar9 * 8);
          FUN_106e82228();
          puVar4 = puVar2;
          if (iVar1 == 0) goto LAB_106e821d4;
          puVar9 = puVar9 + 1;
        } while (puVar3 != puVar9);
        puVar3 = puVar2;
        func_0x00010bf52a60(puVar2,param_2,&uStack_1b0,auStack_e8,0x10);
      } while (puVar3 != (undefined *)0x0);
    }
    _objc_release(puVar2);
    puVar3 = *(undefined **)(param_1 + 0x40);
    func_0x00010bf973a0(puVar3,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 != (undefined *)0x0) {
      puVar9 = puVar3;
      func_0x00010c0e0160();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      puVar4 = puVar3;
      if (puVar9 == (undefined *)0x0) {
        puVar9 = PTR_PTR_1126bf8c8;
        func_0x00010c2aeac0(PTR_PTR_1126bf8c8,param_2,puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c206280();
        _objc_unsafeClaimAutoreleasedReturnValue();
        puVar4 = puVar9;
        func_0x00010bf21f60(puVar9);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
        _objc_release(puVar9);
      }
      uStack_1c8 = 0;
      uStack_1d0 = 0;
      uStack_1b8 = 0;
      uStack_1c0 = 0;
      lStack_1e8 = 0;
      uStack_1f0 = 0;
      uStack_1d8 = 0;
      plStack_1e0 = (long *)0x0;
      _objc_retain(puVar2);
      puVar3 = puVar2;
      func_0x00010bf52a60(puVar2,param_2,&uStack_1f0,auStack_168,0x10);
      if (puVar3 != (undefined *)0x0) {
        lVar8 = *plStack_1e0;
        do {
          puVar9 = (undefined *)0x0;
          do {
            if (*plStack_1e0 != lVar8) {
              _objc_enumerationMutation(puVar2);
            }
            uStack_170 = *(undefined8 *)(lStack_1e8 + (long)puVar9 * 8);
            puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
            func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_170,1);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bdcd500(param_1,param_2,puVar5,puVar4);
            _objc_release(puVar5);
            puVar9 = puVar9 + 1;
          } while (puVar3 != puVar9);
          puVar3 = puVar2;
          func_0x00010bf52a60(puVar2,param_2,&uStack_1f0,auStack_168,0x10);
        } while (puVar3 != (undefined *)0x0);
      }
      _objc_release(puVar2);
LAB_106e821d4:
      _objc_release(puVar4);
    }
  }
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    _objc_retain();
    uVar7 = param_3;
    func_0x00010c137620(param_3);
    uVar6 = param_3;
    func_0x00010c070dc0(param_3,param_2,uVar7);
    if ((int)uVar6 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = param_3;
      func_0x00010c0745a0(param_3);
    }
    _objc_release(param_3);
    return uVar7;
  }
  return param_3;
}



/* Entry: 106e82228; end: 106e8227f;  */

undefined8 FUN_106e82228(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain();
  uVar2 = param_1;
  func_0x00010c137620(param_1);
  uVar1 = param_1;
  func_0x00010c070dc0(param_1,param_2,uVar2);
  if ((int)uVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_1;
    func_0x00010c0745a0(param_1);
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 106e82280; end: 106e824f3; -[SCGalleryLagunaContentDataSource _appendSpectaclesContentList:toEntry:] */

void FUN_106e82280(long param_1,undefined8 param_2,long param_3,undefined1 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined1 *puVar12;
  long lVar13;
  undefined8 uVar14;
  ulong uVar15;
  long lVar16;
  undefined *puStack_2a8;
  undefined8 uStack_2a0;
  code *pcStack_298;
  undefined *puStack_290;
  undefined *puStack_288;
  long lStack_280;
  undefined1 auStack_278 [8];
  undefined1 auStack_270 [16];
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_3);
  puVar12 = auStack_e8;
  lVar1 = param_3;
  func_0x00010bf52a60();
  lVar5 = lRam0000000000000000;
  while (lVar1 != 0) {
    lVar16 = 0;
    do {
      if (lRam0000000000000000 != lVar5) {
        _objc_enumerationMutation(param_3);
      }
      lVar13 = *(long *)(lVar16 * 8);
      uVar15 = *(ulong *)(param_1 + 0xb8);
      lVar3 = lVar13;
      func_0x00010bdc3540();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar3;
      func_0x00010bf4b900();
      _objc_release(lVar3);
      lVar3 = param_3;
      if (((uVar15 & 1) != 0) || (FUN_106e82228(), (int)lVar13 == 0)) goto LAB_106e8249c;
      lVar16 = lVar16 + 1;
    } while (lVar1 != lVar16);
    puVar12 = auStack_e8;
    lVar1 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf52a60();
  lVar5 = lRam0000000000000000;
  while (lVar1 != 0) {
    lVar16 = 0;
    do {
      if (lRam0000000000000000 != lVar5) {
        _objc_enumerationMutation(param_3);
      }
      uVar2 = *(undefined8 *)(lVar16 * 8);
      uVar14 = *(undefined8 *)(param_1 + 0xb8);
      func_0x00010bdc3540(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(uVar14);
      _objc_release(uVar2);
      lVar16 = lVar16 + 1;
    } while (lVar1 != lVar16);
    lVar1 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  lVar3 = *(long *)(param_1 + 0x48);
  func_0x00010c2424a0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar1;
  puVar12 = param_4;
  func_0x00010bdcd4c0(param_1);
  _objc_release(lVar1);
LAB_106e8249c:
  _objc_release(lVar3);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  _objc_retain(lVar11);
  _objc_retain(puVar12);
  puVar4 = PTR_PTR_1126bf910;
  func_0x00010c2aebc0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010bebea00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar1;
  func_0x00010c0ef820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar6 = PTR_PTR_1126bf6e8;
  func_0x00010c273760(PTR_PTR_1126bf6e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216ee0(puVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar6);
  lVar1 = param_3;
  func_0x00010bebea00();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar1;
  func_0x00010c09ee20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar16 != 0) {
    func_0x00010c1a6360(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puVar6 = puVar4;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126d2f00;
  _objc_alloc();
  func_0x00010c0067a0();
  _objc_initWeak(auStack_270,param_3);
  puStack_2a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_2a0 = 0xc2000000;
  pcStack_298 = FUN_106e82844;
  puStack_290 = &UNK_110981a50;
  _objc_copyWeak(auStack_278,auStack_270);
  _objc_retain(puVar6);
  puStack_288 = puVar6;
  _objc_retain(lVar11);
  ppuVar8 = &puStack_2a8;
  lStack_280 = lVar11;
  _objc_retainBlock();
  param_3 = param_3 + 0xe8;
  _objc_loadWeakRetained(param_3);
  lVar1 = param_3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126b2220;
  _objc_alloc(PTR_PTR_1126b2220);
  puVar10 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04a560(puVar9);
  _objc_retain(ppuVar8);
  func_0x00010bf071c0(lVar1);
  _objc_release(puVar9);
  _objc_release(puVar10);
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(ppuVar8);
  _objc_release(ppuVar8);
  _objc_release(lStack_280);
  _objc_release(puStack_288);
  _objc_destroyWeak(auStack_278);
  _objc_destroyWeak(auStack_270);
  _objc_release(puVar7);
  _objc_release(lVar16);
  _objc_release(lVar5);
  _objc_release(puVar4);
  _objc_release(puVar6);
  _objc_release(puVar12);
  _objc_release(lVar11);
  return;
}


