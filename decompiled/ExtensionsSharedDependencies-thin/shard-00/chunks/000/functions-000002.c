/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 0001c308; end: 0001c32f; -[_TtC19LocationPushHandler32CLLocationUpdateUnaryPushHandler forceComplete] */

void FUN_0001c308(undefined8 param_1)

{
  _objc_retain();
  FUN_0001c278();
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_1);
  return;
}



/* Entry: 0001c330; end: 0001c347;  */

void FUN_0001c330(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x50) = param_1;
  *(undefined8 *)(unaff_x22 + 0x58) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_0001c348,0,0);
  return;
}



/* Entry: 0001c348; end: 0001c473;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0001c348(void)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined4 uVar10;
  
  uVar7 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar4 = *(long *)(unaff_x22 + 0x58);
  puVar1 = (undefined4 *)(lVar4 + _DAT_00ae6338);
  uVar10 = *puVar1;
  uVar9 = *(undefined8 *)(puVar1 + 2);
  uVar2 = *(undefined1 *)(puVar1 + 4);
  puVar3 = (undefined8 *)(lVar4 + _DAT_00ae6328);
  FUN_0001393c(puVar3,puVar3[3]);
  uVar8 = *(undefined8 *)(lVar4 + _DAT_00ae6308 + 0x28);
  lVar4 = 0xae6188;
  func_0x000115a8(0xae6188,&UNK_007ccde0);
  _swift_allocObject();
  *(long *)(unaff_x22 + 0x60) = lVar4;
  *(undefined8 *)(lVar4 + 0x18) = 2;
  *(undefined8 *)(lVar4 + 0x10) = 1;
  *(undefined **)(lVar4 + 0x38) = &UNK_0099d388;
  *(undefined ***)(lVar4 + 0x40) = &PTR_DAT_0099d310;
  puVar5 = &UNK_0099d128;
  _swift_allocObject(&UNK_0099d128,0x30,7);
  *(undefined **)(lVar4 + 0x20) = puVar5;
  *(int *)(puVar5 + 0x10) = (int)uVar7;
  puVar5[0x14] = (byte)((ulong)uVar7 >> 0x20) & 1;
  *(undefined4 *)(puVar5 + 0x18) = uVar10;
  *(undefined8 *)(puVar5 + 0x20) = uVar9;
  puVar5[0x28] = uVar2;
  uVar7 = *puVar3;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_0001c474;
  lVar6 = unaff_x22 + 0x10;
  _swift_continuation_init(lVar6,1);
  FUN_0002437c(uVar8,lVar4,uVar7,lVar6);
                    /* WARNING: Could not recover jumptable at 0x0077b284. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_0099c058)(unaff_x22 + 0x10);
  return;
}



/* Entry: 0001c474; end: 0001c4d7;  */

void FUN_0001c474(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *(long *)(*unaff_x22 + 0x30);
  *(long *)(*unaff_x22 + 0x68) = lVar2;
  if (lVar2 == 0) {
    pcVar1 = FUN_0001c4d8;
  }
  else {
    _swift_willThrow();
    pcVar1 = (code *)0x1c508;
  }
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(pcVar1,0,0);
  return;
}



/* Entry: 0001c4d8; end: 0001c5e3;  */

void FUN_0001c4d8(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x0001c504. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 0001c5e4; end: 0001c8f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0001c5e4(double param_1)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long lVar7;
  double dVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x22;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  double dVar16;
  
  uVar11 = *(undefined8 *)(unaff_x22 + 0xb8);
  lVar4 = *(long *)(unaff_x22 + 0xc0);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xb0);
  lVar12 = *(long *)(unaff_x22 + 0xa0);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000002e,0x80000000008b4d40);
  _objc_release();
  lVar7 = _DAT_00ae6318;
  *(long *)(unaff_x22 + 0xd8) = _DAT_00ae6318;
  FUN_0001393c(lVar12 + lVar7,*(undefined8 *)(lVar12 + lVar7 + 0x18));
  lVar7 = _DAT_00b647a8;
  _swift_beginAccess(lVar12 + _DAT_00b647a8,unaff_x22 + 0x50,0,0);
  FUN_0001e8cc(lVar12 + lVar7,uVar10,0xae60c8,&UNK_007cccd0);
  (**(code **)(lVar4 + 0x30))(uVar10,1,uVar11);
  if ((int)uVar10 == 1) {
    FUN_0001e7f4(*(undefined8 *)(unaff_x22 + 0xb0),0xae60c8,&UNK_007cccd0);
    dVar16 = 0.0;
    dVar8 = param_1;
  }
  else {
    uVar11 = *(undefined8 *)(unaff_x22 + 200);
    uVar13 = *(undefined8 *)(unaff_x22 + 0xd0);
    uVar10 = *(undefined8 *)(unaff_x22 + 0xb8);
    lVar4 = *(long *)(unaff_x22 + 0xc0);
    (**(code **)(lVar4 + 0x20))(uVar13,*(undefined8 *)(unaff_x22 + 0xb0),uVar10);
    __s10Foundation4DateVACycfC(uVar11);
    __s10Foundation4DateV17timeIntervalSinceySdACF(uVar13);
    pcVar9 = *(code **)(lVar4 + 8);
    (*pcVar9)(uVar11,uVar10);
    (*pcVar9)(uVar13,uVar10);
    dVar8 = 1000.0;
    dVar16 = param_1 * 1000.0;
  }
  uVar11 = *(undefined8 *)(unaff_x22 + 0xb8);
  lVar12 = *(long *)(unaff_x22 + 0xc0);
  lVar7 = *(long *)(unaff_x22 + 0xa0);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x98);
  func_0x00784480(uVar13);
  puVar1 = (undefined4 *)(lVar7 + _DAT_00ae6338);
  uVar15 = *puVar1;
  *(undefined4 *)(unaff_x22 + 0x100) = uVar15;
  uVar14 = *(undefined8 *)(puVar1 + 2);
  *(undefined8 *)(unaff_x22 + 0xe0) = uVar14;
  uVar2 = *(undefined1 *)(puVar1 + 4);
  *(undefined1 *)(unaff_x22 + 0x104) = uVar2;
  func_0x0001f4c8(dVar16,dVar8,uVar15,uVar14,uVar2);
  lVar4 = 0xae6188;
  func_0x000115a8(0xae6188,&UNK_007ccde0);
  _swift_allocObject();
  *(long *)(unaff_x22 + 0xe8) = lVar4;
  *(undefined8 *)(lVar4 + 0x18) = 4;
  *(undefined8 *)(lVar4 + 0x10) = 2;
  uVar3 = (undefined1)*(undefined8 *)(lVar7 + _DAT_00ae6310);
  func_0x00787b60();
  *(undefined **)(lVar4 + 0x38) = &UNK_0099d4f8;
  *(undefined ***)(lVar4 + 0x40) = &PTR_DAT_0099d510;
  *(undefined8 *)(lVar4 + 0x20) = uVar13;
  *(undefined1 *)(lVar4 + 0x28) = uVar3;
  *(undefined **)(lVar4 + 0x60) = &UNK_0099d388;
  *(undefined ***)(lVar4 + 0x68) = &PTR_DAT_0099d310;
  puVar5 = &UNK_0099d128;
  _swift_allocObject(&UNK_0099d128,0x30,7);
  *(undefined **)(lVar4 + 0x48) = puVar5;
  *(undefined4 *)(puVar5 + 0x10) = 3;
  puVar5[0x14] = 1;
  *(undefined4 *)(puVar5 + 0x18) = uVar15;
  *(undefined8 *)(puVar5 + 0x20) = uVar14;
  puVar5[0x28] = uVar2;
  _objc_retain(uVar13);
  __s10Foundation4DateVACycfC(uVar10);
  pcVar9 = *(code **)(lVar12 + 0x38);
  *(code **)(unaff_x22 + 0xf0) = pcVar9;
  (*pcVar9)(uVar10,0,1,uVar11);
  lVar12 = _DAT_00b647b8;
  _swift_beginAccess(lVar7 + _DAT_00b647b8,unaff_x22 + 0x68,0x21,0);
  FUN_00013a14(uVar10,lVar7 + lVar12);
  _swift_endAccess(unaff_x22 + 0x68);
  puVar6 = (undefined8 *)(lVar7 + _DAT_00ae6328);
  FUN_0001393c(puVar6,puVar6[3]);
  uVar11 = *(undefined8 *)(lVar7 + _DAT_00ae6308 + 0x28);
  uVar10 = *puVar6;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_0001c8f8;
  lVar7 = unaff_x22 + 0x10;
  _swift_continuation_init(lVar7,1);
  FUN_0002437c(uVar11,lVar4,uVar10,lVar7);
                    /* WARNING: Could not recover jumptable at 0x0077b284. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_0099c058)(unaff_x22 + 0x10);
  return;
}



/* Entry: 0001c8f8; end: 0001c95b;  */

void FUN_0001c8f8(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *(long *)(*unaff_x22 + 0x30);
  *(long *)(*unaff_x22 + 0xf8) = lVar2;
  if (lVar2 == 0) {
    pcVar1 = FUN_0001c95c;
  }
  else {
    _swift_willThrow();
    pcVar1 = FUN_0001cb28;
  }
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(pcVar1,0,0);
  return;
}



/* Entry: 0001c95c; end: 0001cb27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0001c95c(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long unaff_x22;
  code *pcVar12;
  undefined4 uVar13;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0xe8));
  pcVar12 = *(code **)(unaff_x22 + 0xf0);
  uVar6 = *(undefined1 *)(unaff_x22 + 0x104);
  uVar13 = *(undefined4 *)(unaff_x22 + 0x100);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar2 = *(undefined8 *)(unaff_x22 + 200);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x98);
  lVar10 = *(long *)(unaff_x22 + 0xa0);
  lVar1 = lVar10 + *(long *)(unaff_x22 + 0xd8);
  uVar11 = *(undefined8 *)(unaff_x22 + 0xa8);
  __s10Foundation4DateVACycfC(uVar11);
  (*pcVar12)(uVar11,0,1,uVar9);
  lVar7 = _DAT_00b647c0;
  _swift_beginAccess(lVar10 + _DAT_00b647c0,unaff_x22 + 0x80,0x21,0);
  lVar10 = lVar10 + lVar7;
  FUN_00013a14(uVar11,lVar10);
  _swift_endAccess(unaff_x22 + 0x80);
  __ss11_StringGutsV4growyySiF(0x31);
  _swift_bridgeObjectRelease(0xe000000000000000);
  func_0x00781e40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  _objc_release(uVar8);
  __sSS6appendyySSF(uVar9,lVar10);
  _swift_bridgeObjectRelease(lVar10);
  uVar8 = 0xd00000000000002f;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000002f,0x80000000008b4d70);
  _swift_bridgeObjectRelease(0x80000000008b4d70);
  _objc_release(uVar8);
  FUN_0001393c(lVar1,*(undefined8 *)(lVar1 + 0x18));
  FUN_0001cf9c(&DAT_00b647b8,&DAT_00b647c0);
  func_0x0001f7c8(param_1,uVar13,uVar4,uVar6,1);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar11);
                    /* WARNING: Could not recover jumptable at 0x0001cb24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 0001cb28; end: 0001ccff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0001cb28(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long unaff_x22;
  undefined8 uVar12;
  code *pcVar13;
  undefined4 uVar14;
  
  lVar11 = *(long *)(unaff_x22 + 0xf8);
  _swift_release(*(undefined8 *)(unaff_x22 + 0xe8));
  pcVar13 = *(code **)(unaff_x22 + 0xf0);
  uVar6 = *(undefined1 *)(unaff_x22 + 0x104);
  uVar14 = *(undefined4 *)(unaff_x22 + 0x100);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar2 = *(undefined8 *)(unaff_x22 + 200);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x98);
  lVar10 = *(long *)(unaff_x22 + 0xa0);
  lVar1 = lVar10 + *(long *)(unaff_x22 + 0xd8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar12 = *(undefined8 *)(unaff_x22 + 0xa8);
  __s10Foundation4DateVACycfC(uVar12);
  (*pcVar13)(uVar12,0,1,uVar9);
  lVar7 = _DAT_00b647c0;
  _swift_beginAccess(lVar10 + _DAT_00b647c0,unaff_x22 + 0x80,0x21,0);
  lVar10 = lVar10 + lVar7;
  FUN_00013a14(uVar12,lVar10);
  _swift_endAccess(unaff_x22 + 0x80);
  __ss11_StringGutsV4growyySiF(0x31);
  _swift_bridgeObjectRelease(0xe000000000000000);
  func_0x00781e40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  _objc_release(uVar8);
  __sSS6appendyySSF(uVar9,lVar10);
  _swift_bridgeObjectRelease(lVar10);
  uVar8 = 0xd00000000000002f;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000002f,0x80000000008b4d70);
  _swift_bridgeObjectRelease(0x80000000008b4d70);
  _objc_release(uVar8);
  FUN_0001393c(lVar1,*(undefined8 *)(lVar1 + 0x18));
  FUN_0001cf9c(&DAT_00b647b8,&DAT_00b647c0);
  func_0x0001f7c8(param_1,uVar14,uVar4,uVar6,lVar11 == 0);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar12);
                    /* WARNING: Could not recover jumptable at 0x0001ccfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(lVar11);
  return;
}



/* Entry: 0001cd00; end: 0001cd5f; -[_TtC19LocationPushHandler32CLLocationUpdateUnaryPushHandler init] */

void FUN_0001cd00(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("LocationPushHandler.CLLocationUpdateUnaryPushHandler",0x34,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1cd2c);
  (*pcVar1)();
}



/* Entry: 0001cd60; end: 0001ceab; -[_TtC19LocationPushHandler32CLLocationUpdateUnaryPushHandler .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0001cd60(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = param_1 + _DAT_00ae6308;
  uVar2 = *(undefined8 *)(lVar1 + 0x38);
  uVar3 = *(undefined8 *)(lVar1 + 0x40);
  uVar4 = *(undefined8 *)(lVar1 + 0x48);
  uVar5 = *(undefined8 *)(lVar1 + 0x60);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x10));
  func_0x00013b20(uVar2,uVar3,uVar4);
  _objc_release(uVar5);
  _objc_release(*(undefined8 *)(param_1 + _DAT_00ae6310));
  FUN_00011670(param_1 + _DAT_00ae6318);
  FUN_00011670(param_1 + _DAT_00ae6320);
  FUN_00011670(param_1 + _DAT_00ae6328);
  FUN_00011670(param_1 + _DAT_00ae6330);
  _swift_release(*(undefined8 *)(param_1 + _DAT_00ae6340));
  FUN_0001e7f4(param_1 + _DAT_00b647a8,0xae60c8,&UNK_007cccd0);
  FUN_0001e7f4(param_1 + _DAT_00b647b0,0xae60c8,&UNK_007cccd0);
  FUN_0001e7f4(param_1 + _DAT_00b647b8,0xae60c8,&UNK_007cccd0);
  FUN_0001e7f4(param_1 + _DAT_00b647c0,0xae60c8,&UNK_007cccd0);
  FUN_0001e7f4(param_1 + _DAT_00b647c8,0xae60c8,&UNK_007cccd0);
  return;
}



/* Entry: 0001ceac; end: 0001ceb3;  */

void FUN_0001ceac(void)

{
  if (lRam0000000000ae6370 != 0) {
    return;
  }
  _swift_getSingletonMetadata(0,&DAT_0083d9e4);
  return;
}



/* Entry: 0001ceb4; end: 0001ceeb;  */

void FUN_0001ceb4(undefined8 param_1)

{
  if (lRam0000000000ae6370 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_0083d9e4);
  return;
}



/* Entry: 0001ceec; end: 0001cf9b;  */

void FUN_0001ceec(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  
  puStack_80 = PTR___sBOWV_0099ae70 + 0x40;
  puStack_88 = &UNK_007ccf88;
  puStack_78 = &UNK_007ccfa0;
  puStack_70 = &UNK_007ccfa0;
  puStack_68 = &UNK_007ccfa0;
  puStack_60 = &UNK_007ccfa0;
  puStack_58 = &UNK_007ccfb8;
  puStack_50 = &UNK_007ccfd0;
  lVar1 = 0x13f;
  func_0x00012d7c();
  if (param_2 < 0x40) {
    lStack_48 = *(long *)(lVar1 + -8) + 0x40;
    lStack_40 = lStack_48;
    lStack_38 = lStack_48;
    lStack_30 = lStack_48;
    lStack_28 = lStack_48;
    _swift_updateClassMetadata2(param_1,0x100,0xd,&puStack_88,param_1 + 0x50);
  }
  return;
}



/* Entry: 0001cf9c; end: 0001d1e3;  */

double FUN_0001cf9c(double param_1,long *param_2,long *param_3)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  undefined1 *puVar3;
  long unaff_x20;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  code *pcVar8;
  code *pcVar9;
  long lVar10;
  undefined1 auStack_b0 [8];
  long *plStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  
  lVar1 = 0xae60c8;
  plStack_a8 = param_3;
  func_0x000115a8(0xae60c8,&UNK_007cccd0);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar3 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  puVar7 = puVar3 + -extraout_x12;
  lVar1 = 0;
  __s10Foundation4DateVMa();
  lVar6 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar6 + 0x40));
  lVar5 = (long)puVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar4 = lVar5 - extraout_x12_00;
  lVar10 = *param_2;
  _swift_beginAccess(unaff_x20 + lVar10,auStack_88,0,0);
  FUN_0001e8cc(unaff_x20 + lVar10,puVar7,0xae60c8,&UNK_007cccd0);
  pcVar8 = *(code **)(lVar6 + 0x30);
  puVar2 = puVar7;
  (*pcVar8)(puVar7,1,lVar1);
  if ((int)puVar2 != 1) {
    pcVar9 = *(code **)(lVar6 + 0x20);
    (*pcVar9)(lVar4,puVar7,lVar1);
    lVar10 = *plStack_a8;
    _swift_beginAccess(unaff_x20 + lVar10,auStack_a0,0,0);
    FUN_0001e8cc(unaff_x20 + lVar10,puVar3,0xae60c8,&UNK_007cccd0);
    puVar2 = puVar3;
    (*pcVar8)(puVar3,1,lVar1);
    if ((int)puVar2 != 1) {
      (*pcVar9)(lVar5,puVar3,lVar1);
      __s10Foundation4DateV17timeIntervalSinceySdACF(lVar4);
      pcVar8 = *(code **)(lVar6 + 8);
      (*pcVar8)(lVar5,lVar1);
      (*pcVar8)(lVar4,lVar1);
      return param_1 * 1000.0;
    }
    (**(code **)(lVar6 + 8))(lVar4,lVar1);
    puVar7 = puVar3;
  }
  FUN_0001e7f4(puVar7,0xae60c8,&UNK_007cccd0);
  return 0.0;
}



/* Entry: 0001d1e4; end: 0001d20f;  */

void FUN_0001d1e4(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _swift_retain(uVar2);
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(uVar2);
  return;
}



/* Entry: 0001d210; end: 0001d273;  */

void FUN_0001d210(undefined8 param_1,int *param_2)

{
  int iVar1;
  long *plVar2;
  long unaff_x22;
  
  iVar1 = *param_2;
  plVar2 = (long *)(ulong)(uint)param_2[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_0001d274;
                    /* WARNING: Could not recover jumptable at 0x0001d270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_2))(plVar2,param_1);
  return;
}



/* Entry: 0001d274; end: 0001d2b3;  */

void FUN_0001d274(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001d2b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 0001d2b4; end: 0001dfdb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0001d2b4(float param_1,long param_2,long param_3,long param_4,undefined8 param_5,
                 long param_6)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 *puVar4;
  long lVar5;
  long extraout_x8;
  long extraout_x8_00;
  long lVar6;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  undefined1 *puVar7;
  undefined8 uVar8;
  long lVar9;
  code *pcVar10;
  long lVar11;
  double dVar12;
  undefined1 auStack_d0 [8];
  long lStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  
  lVar1 = 0xae60c8;
  uStack_b8 = param_5;
  lStack_b0 = param_6;
  lStack_a8 = param_4;
  func_0x000115a8(0xae60c8,&UNK_007cccd0);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar7 = auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar9 = (long)puVar7 - extraout_x12;
  lVar1 = 0;
  __s10Foundation4DateVMa();
  lVar11 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar11 + 0x40));
  lVar6 = lVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lStack_c0 = lVar6;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar6 = lVar6 - extraout_x12_00;
  lStack_c8 = lVar6;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar6 = lVar6 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  puVar2 = PTR_PTR_00ac27e8;
  _objc_allocWithZone(PTR_PTR_00ac27e8);
  func_0x007849a0();
  uVar8 = *(undefined8 *)(param_2 + 8);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar8,*(undefined8 *)(param_2 + 0x10));
  func_0x0078f380(puVar2);
  _objc_release(uVar8);
  dVar12 = *(double *)(param_2 + 0x18);
  if (0x7fefffffffffffff < (ulong)ABS(dVar12)) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x1d8dc);
    (*pcVar10)();
  }
  if (dVar12 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x1d8e0);
    (*pcVar10)();
  }
  if (9.223372036854776e+18 <= dVar12) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x1d8e4);
    (*pcVar10)();
  }
  func_0x0078f9a0(puVar2);
  dVar12 = *(double *)(param_2 + 0x50);
  if (0x7fefffffffffffff < (ulong)ABS(dVar12)) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x1d8e8);
    (*pcVar10)();
  }
  if (dVar12 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x1d8ec);
    (*pcVar10)();
  }
  if (9.223372036854776e+18 <= dVar12) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x1d8f0);
    (*pcVar10)();
  }
  func_0x0078f9c0(puVar2);
  param_1 = param_1 * 100.0;
  dVar12 = (double)(ulong)(uint)param_1;
  if (0x7f7fffff < (uint)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x1d8f4);
    (*pcVar10)();
  }
  if (param_1 <= -9.223373e+18) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x1d8f8);
    (*pcVar10)();
  }
  if (9.223372e+18 <= param_1) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x1d8fc);
    (*pcVar10)();
  }
  func_0x0078cf80(puVar2);
  lVar3 = _DAT_00b64780;
  _swift_beginAccess(param_3 + _DAT_00b64780,auStack_88,0,0);
  FUN_0001e8cc(param_3 + lVar3,lVar9,0xae60c8,&UNK_007cccd0);
  pcVar10 = *(code **)(lVar11 + 0x30);
  lVar3 = lVar9;
  (*pcVar10)(lVar9,1,lVar1);
  if ((int)lVar3 == 1) {
    FUN_0001e7f4(lVar9,0xae60c8,&UNK_007cccd0);
    dVar12 = 0.0;
  }
  else {
    (**(code **)(lVar11 + 0x20))(lVar6 - extraout_x12_02,lVar9,lVar1);
    __s10Foundation4DateV21timeIntervalSince1970Sdvg();
    (**(code **)(lVar11 + 8))(lVar6 - extraout_x12_02,lVar1);
    dVar12 = dVar12 * 1000.0 - *(double *)(param_3 + _DAT_00ae60e0 + 0x18);
    if (0x7fefffffffffffff < (ulong)ABS(dVar12)) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x1d938);
      (*pcVar10)();
    }
    if (dVar12 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x1d900);
      (*pcVar10)();
    }
    if (9.223372036854776e+18 <= dVar12) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x1d904);
      (*pcVar10)();
    }
  }
  func_0x0078e260(puVar2);
  FUN_000158e8();
  if (0x7fefffffffffffff < (ulong)ABS(dVar12)) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x1d908);
    (*pcVar10)();
  }
  if (dVar12 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x1d90c);
    (*pcVar10)();
  }
  if (9.223372036854776e+18 <= dVar12) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x1d910);
    (*pcVar10)();
  }
  func_0x007912c0(puVar2);
  FUN_00015114();
  if (0x7fefffffffffffff < (ulong)ABS(dVar12)) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x1d914);
    (*pcVar10)();
  }
  if (dVar12 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x1d918);
    (*pcVar10)();
  }
  if (dVar12 < 9.223372036854776e+18) {
    func_0x00790fa0(puVar2);
    lVar9 = _DAT_00b647a0;
    _swift_beginAccess(param_3 + _DAT_00b647a0,auStack_a0,0,0);
    FUN_0001e8cc(param_3 + lVar9,puVar7,0xae60c8,&UNK_007cccd0);
    puVar4 = puVar7;
    (*pcVar10)(puVar7,1,lVar1);
    if ((int)puVar4 == 1) {
      FUN_0001e7f4(puVar7,0xae60c8,&UNK_007cccd0);
      dVar12 = 0.0;
    }
    else {
      (**(code **)(lVar11 + 0x20))(lVar6,puVar7,lVar1);
      __s10Foundation4DateV21timeIntervalSince1970Sdvg();
      (**(code **)(lVar11 + 8))(lVar6,lVar1);
      dVar12 = dVar12 * 1000.0 - *(double *)(param_3 + _DAT_00ae60e0 + 0x18);
      if (0x7fefffffffffffff < (ulong)ABS(dVar12)) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x1d93c);
        (*pcVar10)();
      }
      if (dVar12 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x1d920);
        (*pcVar10)();
      }
      if (9.223372036854776e+18 <= dVar12) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x1d924);
        (*pcVar10)();
      }
    }
    func_0x00790b80(puVar2);
    if (lStack_a8 != 0) {
      lVar3 = lStack_a8;
      _objc_retain();
      lVar6 = lStack_c8;
      __s10Foundation4DateVACycfC(lStack_c8);
      lVar5 = lVar3;
      func_0x00792a20(lVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lStack_c0;
      __s10Foundation4DateV36_unconditionallyBridgeFromObjectiveCyACSo6NSDateCSgFZ(lStack_c0);
      _objc_release(lVar5);
      __s10Foundation4DateV17timeIntervalSinceySdACF(lVar9);
      pcVar10 = *(code **)(lVar11 + 8);
      (*pcVar10)(lVar9,lVar1);
      (*pcVar10)(lVar6,lVar1);
      if (0x7fefffffffffffff < (ulong)ABS(dVar12)) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x1d928);
        (*pcVar10)();
      }
      if (dVar12 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x1d92c);
        (*pcVar10)();
      }
      if (9.223372036854776e+18 <= dVar12) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x1d930);
        (*pcVar10)();
      }
      if (SUB168(SEXT816((long)dVar12) * SEXT816(1000),8) != (long)dVar12 * 1000 >> 0x3f) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x1d934);
        (*pcVar10)();
      }
      func_0x0078eca0(puVar2);
      _objc_release(lVar3);
    }
    func_0x0078de80(puVar2);
    func_0x0078f5e0(puVar2);
    uVar8 = *(undefined8 *)(lStack_b0 + 0x10);
    func_0x00788ac0(uVar8);
    func_0x00783860(uVar8);
    _objc_release(puVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar10 = (code *)SoftwareBreakpoint(1,0x1d91c);
  (*pcVar10)();
}



/* Entry: 0001dfdc; end: 0001e24f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0001dfdc(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 *puVar1;
  char cVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long extraout_x8;
  undefined8 uVar10;
  long lVar11;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  lVar4 = 0xae60c8;
  func_0x000115a8(0xae60c8,&UNK_007cccd0);
  (*(code *)PTR____chkstk_darwin_00999f48)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = (long)&puStack_f0 - extraout_x8;
  puVar3 = &UNK_0099cf70;
  _swift_allocObject(&UNK_0099cf70,0x18,7);
  *(long *)(puVar3 + 0x10) = param_4;
  __Block_copy(param_4);
  __s10Foundation4DateVACycfC(lVar11);
  lVar4 = 0;
  __s10Foundation4DateVMa();
  (**(code **)(*(long *)(lVar4 + -8) + 0x38))(lVar11,0,1,lVar4);
  lVar4 = _DAT_00b647c8;
  _swift_beginAccess(param_3 + _DAT_00b647c8,&uStack_c0,0x21,0);
  FUN_00013a14(lVar11,param_3 + lVar4);
  _swift_endAccess(&uStack_c0);
  puVar5 = (undefined8 *)(param_3 + _DAT_00ae6320);
  FUN_0001393c(puVar5,puVar5[3]);
  puVar1 = (undefined8 *)(param_3 + _DAT_00ae6308);
  uStack_78 = puVar1[9];
  uStack_80 = puVar1[8];
  uStack_68 = puVar1[0xb];
  uStack_70 = puVar1[10];
  uStack_60 = puVar1[0xc];
  uStack_b8 = puVar1[1];
  uStack_c0 = *puVar1;
  uStack_a8 = puVar1[3];
  uStack_b0 = puVar1[2];
  uStack_98 = puVar1[5];
  uStack_a0 = puVar1[4];
  uStack_88 = puVar1[7];
  uStack_90 = puVar1[6];
  cVar2 = (char)uStack_c0;
  func_0x0001d93c(*(undefined4 *)(param_3 + _DAT_00ae6338),&uStack_c0,param_3,param_2,param_1,
                  *puVar5);
  if (cVar2 == '\x01') {
    plVar6 = (long *)(param_3 + _DAT_00ae6318);
    FUN_0001393c(plVar6,plVar6[3]);
    puVar7 = &UNK_0099cf98;
    _swift_allocObject(&UNK_0099cf98,0x20,7);
    *(undefined8 *)(puVar7 + 0x10) = 0x1e9f0;
    *(undefined **)(puVar7 + 0x18) = puVar3;
    uVar10 = *(undefined8 *)(*plVar6 + 0x18);
    puVar8 = &UNK_0099cfc0;
    _swift_allocObject(&UNK_0099cfc0,0x20,7);
    *(code **)(puVar8 + 0x10) = FUN_0001e65c;
    *(undefined **)(puVar8 + 0x18) = puVar7;
    pcStack_d0 = FUN_0001e67c;
    puStack_f0 = PTR___NSConcreteStackBlock_00999f30;
    uStack_e8 = 0x42000000;
    pcStack_e0 = FUN_0001d1e4;
    puStack_d8 = &UNK_0099cfd8;
    ppuVar9 = &puStack_f0;
    puStack_c8 = puVar8;
    __Block_copy(ppuVar9);
    puVar8 = puStack_c8;
    _swift_retain(puVar3);
    _swift_retain(puVar7);
    _swift_release(puVar8);
    func_0x00783880(uVar10);
    __Block_release(ppuVar9);
    _swift_release(puVar3);
    puVar3 = puVar7;
  }
  else {
    (**(code **)(param_4 + 0x10))(param_4);
  }
  _swift_release(puVar3);
  return;
}



/* Entry: 0001e250; end: 0001e533;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0001e250(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  double dVar8;
  undefined4 uVar9;
  double dVar10;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  double dStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  double dStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  
  puVar4 = &UNK_0099cf20;
  _swift_allocObject(&UNK_0099cf20,0x18,7);
  *(undefined8 *)(puVar4 + 0x10) = param_2;
  uStack_f0 = 0;
  uStack_e8 = 0xe000000000000000;
  __Block_copy(param_2);
  __ss11_StringGutsV4growyySiF(0x2d);
  uStack_100 = uStack_f0;
  uStack_f8 = uStack_e8;
  __sSS6appendyySSF(0xd00000000000002b,0x80000000008b4f70);
  puVar1 = (undefined8 *)(param_1 + _DAT_00ae6308);
  uStack_e8 = puVar1[1];
  uStack_f0 = *puVar1;
  uStack_e0 = puVar1[2];
  dVar8 = (double)puVar1[3];
  uStack_c8 = puVar1[5];
  uStack_d0 = puVar1[4];
  uStack_b8 = puVar1[7];
  uStack_c0 = puVar1[6];
  uStack_a8 = puVar1[9];
  uStack_b0 = puVar1[8];
  dVar10 = (double)puVar1[10];
  uStack_98 = puVar1[0xb];
  lVar7 = puVar1[0xc];
  dStack_d8 = dVar8;
  dStack_a0 = dVar10;
  lStack_90 = lVar7;
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&uStack_f0,&uStack_100,&UNK_0099d660,PTR___ss26DefaultStringInterpolationVN_0099b698,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_0099b6a0);
  uVar6 = uStack_f8;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_100,uStack_f8);
  _objc_release();
  _swift_bridgeObjectRelease(uVar6);
  FUN_0001393c(param_1 + _DAT_00ae6318,*(undefined8 *)(param_1 + _DAT_00ae6318 + 0x18));
  dVar8 = dVar8 - dVar10;
  puVar2 = (undefined4 *)(param_1 + _DAT_00ae6338);
  uVar9 = *puVar2;
  uVar6 = *(undefined8 *)(puVar2 + 2);
  uVar3 = *(undefined1 *)(puVar2 + 4);
  func_0x00789a00();
  FUN_0001ef54(dVar8,uVar9,uVar6,uVar3,(double)lVar7 * 1000.0 < dVar8);
  FUN_0001393c(param_1 + _DAT_00ae6320,*(undefined8 *)(param_1 + _DAT_00ae6320 + 0x18));
  uStack_a8 = puVar1[9];
  uStack_b0 = puVar1[8];
  uStack_98 = puVar1[0xb];
  dVar8 = (double)puVar1[10];
  lVar7 = puVar1[0xc];
  uStack_e8 = puVar1[1];
  uStack_f0 = *puVar1;
  dVar10 = (double)puVar1[3];
  uStack_e0 = puVar1[2];
  uStack_c8 = puVar1[5];
  uStack_d0 = puVar1[4];
  uStack_b8 = puVar1[7];
  uStack_c0 = puVar1[6];
  dStack_d8 = dVar10;
  dStack_a0 = dVar8;
  lStack_90 = lVar7;
  FUN_0001ea08(uVar9,&uStack_f0,uVar6,uVar3);
  func_0x00789a00();
  if (dVar10 - dVar8 <= (double)lVar7 * 1000.0) {
    puVar5 = &UNK_0099cf48;
    _swift_allocObject(&UNK_0099cf48,0x28,7);
    *(long *)(puVar5 + 0x10) = param_1;
    *(code **)(puVar5 + 0x18) = FUN_0001e558;
    *(undefined **)(puVar5 + 0x20) = puVar4;
    _objc_retain();
    _swift_retain(puVar4);
    uVar6 = 0x22;
    __s15SnapConcurrency12AttachedTask_8priority19asyncSpanNameSuffix9operationScTyxs5NeverOG0A11Attribution010AttributedD0O_AA0aD8PriorityOSgSSSgxyYaYbcts8SendableRzlF
              (0x22,0,0x3c,4,0,0,&UNK_007cd000,puVar5,PTR___sytN_0099b8e0 + 8);
    _swift_release(puVar5);
    puVar5 = *(undefined **)(param_1 + _DAT_00ae6340);
    *(undefined8 *)(param_1 + _DAT_00ae6340) = uVar6;
    _swift_release(puVar4);
  }
  else {
    __Block_copy(param_2);
    FUN_0001dfdc(2,0,param_1,param_2);
    __Block_release(param_2);
    puVar5 = puVar4;
  }
  _swift_release(puVar5);
  return;
}



/* Entry: 0001e534; end: 0001e557;  */

void FUN_0001e534(void)

{
  long unaff_x20;
  
  __Block_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 0001e558; end: 0001e563;  */

void FUN_0001e558(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001e560. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 0001e564; end: 0001e58f;  */

void FUN_0001e564(void)

{
  long unaff_x20;
  
  _objc_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 0001e590; end: 0001e5fb;  */

void FUN_0001e590(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  qword *pqVar3;
  long unaff_x20;
  undefined8 uVar4;
  qword unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  pqVar3 = &section_00000158.size;
  _swift_task_alloc();
  *(qword **)(unaff_x22 + 0x10) = pqVar3;
  *pqVar3 = unaff_x22;
  pqVar3[1] = (qword)FUN_0001e5fc;
  pqVar3[0x2a] = uVar2;
  pqVar3[0x2b] = uVar4;
  pqVar3[0x28] = param_1;
  pqVar3[0x29] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_0001a960,0,0);
  return;
}



/* Entry: 0001e5fc; end: 0001e65b;  */

void FUN_0001e5fc(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001e634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 0001e65c; end: 0001e67b;  */

void FUN_0001e65c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 0001e67c; end: 0001e69f;  */

void FUN_0001e67c(void)

{
  code *pcVar1;
  long unaff_x20;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000035,0x80000000008b5120);
  _objc_release();
  (*pcVar1)();
  return;
}



/* Entry: 0001e6a0; end: 0001e6c3;  */

void FUN_0001e6a0(void)

{
  long unaff_x20;
  
  _swift_unknownObjectWeakDestroy(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 0001e6c4; end: 0001e73f;  */

void FUN_0001e6c4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  dword *pdVar3;
  long unaff_x20;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  pdVar3 = &section_00000068.reloff;
  _swift_task_alloc();
  *(dword **)(unaff_x22 + 0x10) = pdVar3;
  *(long *)pdVar3 = unaff_x22;
  *(undefined8 *)(pdVar3 + 2) = 0x1e9fc;
  *(undefined8 *)(pdVar3 + 0x1e) = uVar2;
  *(undefined8 *)(pdVar3 + 0x20) = uVar4;
  *(undefined8 *)(pdVar3 + 0x1a) = param_2;
  *(undefined8 *)(pdVar3 + 0x1c) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_0001abfc,0,0);
  return;
}



/* Entry: 0001e740; end: 0001e773;  */

void FUN_0001e740(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 0001e774; end: 0001e7f3;  */

void FUN_0001e774(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  qword *pqVar3;
  long unaff_x20;
  undefined8 uVar4;
  qword unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x30);
  pqVar3 = &segment_command_00000020.filesize;
  _swift_task_alloc();
  *(qword **)(unaff_x22 + 0x10) = pqVar3;
  *pqVar3 = unaff_x22;
  pqVar3[1] = 0x1ea00;
  pqVar3[6] = uVar2;
  pqVar3[7] = uVar4;
  pqVar3[5] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_0001af94,0,0);
  return;
}



/* Entry: 0001e7f4; end: 0001e833;  */

undefined8 FUN_0001e7f4(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x000115a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 0001e834; end: 0001e85f;  */

void FUN_0001e834(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 0001e860; end: 0001e8cb;  */

void FUN_0001e860(void)

{
  qword *pqVar1;
  long unaff_x20;
  undefined8 uVar2;
  qword unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  pqVar1 = &segment_command_00000020.vmsize;
  _swift_task_alloc();
  *(qword **)(unaff_x22 + 0x10) = pqVar1;
  *pqVar1 = unaff_x22;
  pqVar1[1] = 0x1ea04;
  pqVar1[5] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_0001c0a0,0,0);
  return;
}



/* Entry: 0001e8cc; end: 0001e913;  */

undefined8 FUN_0001e8cc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x000115a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 0001e914; end: 0001e983;  */

void FUN_0001e914(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  segment_command *psVar5;
  long unaff_x20;
  long unaff_x22;
  
  piVar2 = *(int **)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  psVar5 = &segment_command_00000020;
  _swift_task_alloc();
  *(segment_command **)(unaff_x22 + 0x10) = psVar5;
  psVar5->cmd = (int)unaff_x22;
  psVar5->cmdsize = (int)((ulong)unaff_x22 >> 0x20);
  *(code **)psVar5->segname = FUN_0001e984;
  iVar1 = *piVar2;
  puVar4 = (undefined8 *)(ulong)(uint)piVar2[1];
  _swift_task_alloc(puVar4,(code *)((long)iVar1 + (long)piVar2),uVar3);
  *(undefined8 **)(psVar5->segname + 8) = puVar4;
  *puVar4 = psVar5;
  puVar4[1] = FUN_0001d274;
                    /* WARNING: Could not recover jumptable at 0x0001d270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))(puVar4,param_1);
  return;
}



/* Entry: 0001e984; end: 0001e9bf;  */

void FUN_0001e984(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001e9bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 0001e9c0; end: 0001ea07;  */

void FUN_0001e9c0(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 0001ea08; end: 0001eb57;  */

void FUN_0001ea08(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  double dVar4;
  
  puVar2 = PTR_PTR_00ac27f0;
  _objc_allocWithZone(PTR_PTR_00ac27f0);
  func_0x007849a0();
  uVar3 = *(undefined8 *)(param_1 + 8);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3,*(undefined8 *)(param_1 + 0x10));
  func_0x0078f380(puVar2);
  _objc_release(uVar3);
  dVar4 = *(double *)(param_1 + 0x18);
  if (0x7fefffffffffffff < (ulong)ABS(dVar4)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1eb44);
    (*pcVar1)();
  }
  if (dVar4 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1eb48);
    (*pcVar1)();
  }
  if (9.223372036854776e+18 <= dVar4) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1eb4c);
    (*pcVar1)();
  }
  func_0x0078f9a0(puVar2);
  dVar4 = *(double *)(param_1 + 0x50);
  if ((ulong)ABS(dVar4) < 0x7ff0000000000000) {
    if (dVar4 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1eb54);
      (*pcVar1)();
    }
    if (dVar4 < 9.223372036854776e+18) {
      func_0x0078f9c0(puVar2);
      func_0x0078da60(puVar2);
      uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
      func_0x00788ac0(uVar3);
      func_0x00783860(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_0099ada0)(puVar2);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1eb58);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1eb50);
  (*pcVar1)();
}



/* Entry: 0001eb58; end: 0001eddb;  */

void FUN_0001eb58(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  long extraout_x12;
  code *pcVar4;
  long unaff_x20;
  undefined1 *puVar5;
  long lVar6;
  double dVar7;
  undefined1 auStack_80 [8];
  
  lVar1 = 0;
  __s10Foundation4DateVMa();
  lVar6 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar6 + 0x40));
  puVar5 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  puVar2 = PTR_PTR_00ac27d8;
  _objc_allocWithZone(PTR_PTR_00ac27d8);
  func_0x007849a0();
  uVar3 = *(undefined8 *)(param_2 + 8);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3,*(undefined8 *)(param_2 + 0x10));
  func_0x0078f380(puVar2);
  _objc_release(uVar3);
  func_0x007903c0(puVar2);
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1edc8);
    (*pcVar4)();
  }
  if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1edcc);
    (*pcVar4)();
  }
  dVar7 = 9.223372036854776e+18;
  if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1edd0);
    (*pcVar4)();
  }
  func_0x0078dbe0(puVar2);
  func_0x00791b00(param_4);
  func_0x00791220(puVar2);
  func_0x00784480(param_4);
  func_0x0078ec80(puVar2);
  __s10Foundation4DateVACycfC((long)puVar5 - extraout_x12);
  func_0x00792a20(param_4);
  _objc_retainAutoreleasedReturnValue();
  __s10Foundation4DateV36_unconditionallyBridgeFromObjectiveCyACSo6NSDateCSgFZ(puVar5);
  _objc_release(param_4);
  __s10Foundation4DateV17timeIntervalSinceySdACF(puVar5);
  pcVar4 = *(code **)(lVar6 + 8);
  (*pcVar4)(puVar5,lVar1);
  (*pcVar4)((long)puVar5 - extraout_x12,lVar1);
  dVar7 = dVar7 * 1000.0;
  if ((ulong)ABS(dVar7) < 0x7ff0000000000000) {
    if (dVar7 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1edd8);
      (*pcVar4)();
    }
    if (dVar7 < 9.223372036854776e+18) {
      func_0x0078ecc0(puVar2);
      if (6 < *(long *)(param_2 + 0x40) - 1U) {
        lVar1 = *(long *)(param_2 + 0x48);
        if (*(long *)(param_2 + 0x40) != 0) {
          uVar3 = *(undefined8 *)(param_2 + 0x38);
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3);
          func_0x0078e6a0(puVar2);
          _objc_release(uVar3);
        }
        if (0 < lVar1) {
          func_0x00790c60(puVar2);
        }
      }
      uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
      func_0x00788ac0(uVar3);
      func_0x00783860(uVar3);
      _objc_release(puVar2);
      return;
    }
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1eddc);
    (*pcVar4)();
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1edd4);
  (*pcVar4)();
}



/* Entry: 0001eddc; end: 0001ef0f;  */

void FUN_0001eddc(double param_1,long param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  
  puVar2 = PTR_PTR_00ac27f8;
  _objc_allocWithZone(PTR_PTR_00ac27f8);
  func_0x007849a0();
  uVar3 = *(undefined8 *)(param_2 + 8);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3,*(undefined8 *)(param_2 + 0x10));
  func_0x0078f380(puVar2);
  _objc_release(uVar3);
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1ef08);
    (*pcVar1)();
  }
  if (-9.223372036854778e+18 < param_1) {
    if (param_1 < 9.223372036854776e+18) {
      func_0x0078dbe0(puVar2);
      func_0x0078df00(puVar2);
      if (6 < *(long *)(param_2 + 0x40) - 1U) {
        lVar4 = *(long *)(param_2 + 0x48);
        if (*(long *)(param_2 + 0x40) != 0) {
          uVar3 = *(undefined8 *)(param_2 + 0x38);
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3);
          func_0x0078e6a0(puVar2);
          _objc_release(uVar3);
        }
        if (0 < lVar4) {
          func_0x00790c60(puVar2);
        }
      }
      uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
      func_0x00788ac0(uVar3);
      func_0x00783860(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_0099ada0)(puVar2);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1ef10);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1ef0c);
  (*pcVar1)();
}



/* Entry: 0001ef10; end: 0001ef53;  */

void FUN_0001ef10(void)

{
  long unaff_x20;
  
  _objc_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0077b2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_0099b9a0)();
  return;
}



/* Entry: 0001ef54; end: 0001f133;  */

void FUN_0001ef54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 ulong param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  
  FUN_0001f134(param_2);
  puVar1 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_00ac2aa0;
  _objc_allocWithZone(PTR__OBJC_CLASS___SCExtensionGrapheneMetric_00ac2aa0);
  uVar2 = 0xd00000000000001f;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001f,0x80000000008b4c40);
  uVar3 = 0x6365725f68737570;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6365725f68737570,0xed00006465766965);
  uVar6 = param_3;
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (param_3,PTR___sSSN_0099b040,PTR___sSSN_0099b040,PTR___sSSSHsWP_0099b050);
  func_0x00786420(puVar1);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0077e920(param_1,uVar6);
  func_0x00784860(uVar6);
  if ((param_5 & 1) == 0) {
    _swift_bridgeObjectRelease(param_3);
  }
  else {
    puVar4 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_00ac2aa0;
    _objc_allocWithZone(PTR__OBJC_CLASS___SCExtensionGrapheneMetric_00ac2aa0);
    uVar3 = 0xd00000000000001f;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001f,0x80000000008b4c40);
    uVar5 = 0x646579616c6564;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x646579616c6564,0xe700000000000000);
    uVar2 = param_3;
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (param_3,PTR___sSSN_0099b040,PTR___sSSN_0099b040,PTR___sSSSHsWP_0099b050);
    func_0x00786420(puVar4);
    _swift_bridgeObjectRelease(param_3);
    _objc_release(uVar3);
    _objc_release(uVar5);
    _objc_release(uVar2);
    func_0x00784860(uVar6);
    _objc_release(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 0001f134; end: 0001f363;  */

long FUN_0001f134(long param_1,ulong param_2)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined *puVar5;
  
  lVar4 = 0xae64c8;
  func_0x000115a8(0xae64c8,&UNK_007cd140);
  _swift_initStackObject();
  *(undefined8 *)(lVar4 + 0x20) = 0x6f69736e65747865;
  *(undefined8 *)(lVar4 + 0x18) = 8;
  *(undefined8 *)(lVar4 + 0x10) = 4;
  *(undefined8 *)(lVar4 + 0x28) = 0xee00657079745f6e;
  bVar2 = *(char *)(unaff_x20 + 0x10) != '\x01';
  uVar1 = 0x6573706c;
  if (bVar2) {
    uVar1 = 0x65736e;
  }
  uVar7 = 0xe400000000000000;
  if (bVar2) {
    uVar7 = 0xe300000000000000;
  }
  *(ulong *)(lVar4 + 0x30) = (ulong)uVar1;
  *(undefined8 *)(lVar4 + 0x38) = uVar7;
  *(undefined8 *)(lVar4 + 0x40) = 0x65776f705f776f6c;
  *(undefined8 *)(lVar4 + 0x48) = 0xee0065646f6d5f72;
  bVar2 = (param_2 & 1) == 0;
  uVar7 = 0x65757274;
  if (bVar2) {
    uVar7 = 0x65736c6166;
  }
  uVar8 = 0xe400000000000000;
  if (bVar2) {
    uVar8 = 0xe500000000000000;
  }
  *(undefined8 *)(lVar4 + 0x50) = uVar7;
  *(undefined8 *)(lVar4 + 0x58) = uVar8;
  *(undefined8 *)(lVar4 + 0x60) = 0x5f79726574746162;
  *(undefined8 *)(lVar4 + 0x68) = 0xed00006574617473;
  if (param_1 == 1) {
    uVar7 = 0xe900000000000064;
    uVar8 = 0x656767756c706e75;
  }
  else if (param_1 == 3) {
    uVar7 = 0xe400000000000000;
    uVar8 = 0x6c6c7566;
  }
  else if (param_1 == 2) {
    uVar7 = 0xe800000000000000;
    uVar8 = 0x676e696772616863;
  }
  else {
    uVar7 = 0xe700000000000000;
    uVar8 = 0x6e776f6e6b6e75;
  }
  *(undefined8 *)(lVar4 + 0x70) = uVar8;
  *(undefined8 *)(lVar4 + 0x78) = uVar7;
  *(undefined8 *)(lVar4 + 0x80) = 0x5f6b726f7774656e;
  *(undefined8 *)(lVar4 + 0x88) = 0xee00737574617473;
  puVar5 = PTR__OBJC_CLASS___SCExtensionNetworkingAPIClient_00ac2a30;
  _objc_opt_self();
  iVar3 = (int)puVar5;
  func_0x00780a60();
  uVar1 = 0x69666977;
  if (iVar3 == 0) {
    uVar1 = 0x6c6c6563;
  }
  *(ulong *)(lVar4 + 0x90) = (ulong)uVar1;
  *(undefined8 *)(lVar4 + 0x98) = 0xe400000000000000;
  lVar6 = lVar4;
  func_0x00020958(lVar4);
  _swift_setDeallocating(lVar4);
  uVar7 = 0xae64d0;
  func_0x000115a8(0xae64d0,&UNK_007cd4a0);
  _swift_arrayDestroy((undefined8 *)(lVar4 + 0x20),4,uVar7);
  return lVar6;
}



/* Entry: 0001f364; end: 0001f63b;  */

void FUN_0001f364(undefined8 param_1,undefined8 param_2,double param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  
  FUN_0001f134(param_2);
  puVar2 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_00ac2aa0;
  _objc_allocWithZone(PTR__OBJC_CLASS___SCExtensionGrapheneMetric_00ac2aa0);
  uVar3 = 0xd00000000000001f;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001f,0x80000000008b4c40);
  uVar4 = 0xd000000000000017;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000017,0x80000000008b5100);
  uVar5 = param_4;
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (param_4,PTR___sSSN_0099b040,PTR___sSSN_0099b040,PTR___sSSSHsWP_0099b050);
  func_0x00786420(puVar2);
  _swift_bridgeObjectRelease(param_4);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0077e920(param_1,uVar5);
  if (0x7fefffffffffffff < (ulong)ABS(param_3)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1f4c0);
    (*pcVar1)();
  }
  if (-9.223372036854778e+18 < param_3) {
    if (param_3 < 9.223372036854776e+18) {
      func_0x0077e640(uVar5);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_0099ada0)(puVar2);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1f4c8);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1f4c4);
  (*pcVar1)();
}



/* Entry: 0001f63c; end: 0001f947;  */

void FUN_0001f63c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  FUN_0001f134(param_2);
  puVar1 = PTR___sSiN_0099b2c0;
  puVar4 = PTR___sSis23CustomStringConvertiblesWP_0099b2e8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_0099b2c0,PTR___sSis23CustomStringConvertiblesWP_0099b2e8);
  uVar5 = param_3;
  _swift_isUniquelyReferenced_nonNull_native(param_3);
  FUN_000203d0(puVar1,puVar4,0x6f635f726f727265,0xea00000000006564,uVar5);
  puVar1 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_00ac2aa0;
  _objc_allocWithZone(PTR__OBJC_CLASS___SCExtensionGrapheneMetric_00ac2aa0);
  uVar2 = 0xd00000000000001f;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001f,0x80000000008b4c40);
  uVar3 = 0xd000000000000015;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x80000000008b51e0);
  uVar5 = param_3;
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (param_3,PTR___sSSN_0099b040,PTR___sSSN_0099b040,PTR___sSSSHsWP_0099b050);
  func_0x00786420(puVar1);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0077e920(param_1,uVar5);
  func_0x00784860(uVar5);
  _swift_release(param_3);
  _objc_release(puVar1);
  return;
}



/* Entry: 0001f948; end: 0001fc17;  */

void FUN_0001f948(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  ulong uVar5;
  ulong uVar6;
  
  FUN_0001f134(param_2,param_7,param_8);
  if (param_4 < 4) {
    if (param_4 == 1) {
      uVar5 = 0xe700000000000000;
      uVar6 = 0x6e776f6e6b6e75;
      goto LAB_0001fab8;
    }
    if (param_4 == 2) {
      uVar5 = 0xef6369646f697265;
      uVar6 = 0x705f726572616873;
      goto LAB_0001fab8;
    }
    if (param_4 == 3) {
      uVar5 = 0x80000000008b4ca0;
      uVar6 = 0xd000000000000011;
      goto LAB_0001fab8;
    }
LAB_0001fa4c:
    uVar5 = 0xef7375636f665f6e;
    uVar6 = 0x72616873;
  }
  else {
    if (5 < param_4) {
      if (param_4 == 6) {
        uVar5 = 0x616d5f6e;
        goto LAB_0001fa7c;
      }
      if (param_4 == 7) {
        uVar5 = 0x80000000008b4c80;
        uVar6 = 0xd000000000000012;
        goto LAB_0001fab8;
      }
      goto LAB_0001fa4c;
    }
    if (param_4 != 4) {
      if (param_4 == 5) {
        uVar5 = 0xef6e65706f5f7061;
        uVar6 = 0x6d5f726577656976;
        goto LAB_0001fab8;
      }
      goto LAB_0001fa4c;
    }
    uVar5 = 0x70615f6e;
LAB_0001fa7c:
    uVar5 = uVar5 | 0xed00007000000000;
    uVar6 = 0x77656976;
  }
  uVar6 = uVar6 | 0x695f726500000000;
LAB_0001fab8:
  uVar1 = param_7;
  _swift_isUniquelyReferenced_nonNull_native(param_7);
  FUN_000203d0(uVar6,uVar5,0x7079745f68737570,0xe900000000000065,uVar1);
  FUN_00020a68(param_1);
  uVar1 = param_7;
  _swift_isUniquelyReferenced_nonNull_native(param_7);
  FUN_000203d0(uVar6,uVar5,0xd000000000000012,0x80000000008b5220,uVar1);
  puVar2 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_00ac2aa0;
  _objc_allocWithZone(PTR__OBJC_CLASS___SCExtensionGrapheneMetric_00ac2aa0);
  uVar1 = 0xd00000000000001f;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001f,0x80000000008b4c40);
  uVar3 = 0xd000000000000012;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x80000000008b51a0);
  uVar4 = param_7;
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (param_7,PTR___sSSN_0099b040,PTR___sSSN_0099b040,PTR___sSSSHsWP_0099b050);
  func_0x00786420(puVar2);
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar4);
  func_0x0077e640(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar2);
  return;
}



/* Entry: 0001fc18; end: 0001ffa3;  */

void FUN_0001fc18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,uint param_6)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined8 uVar11;
  
  uVar10 = param_4;
  FUN_00020b30();
  FUN_0001f134(param_2,param_4,param_5);
  _swift_bridgeObjectRetain(uVar10);
  uVar9 = param_4;
  _swift_isUniquelyReferenced_nonNull_native(param_4);
  FUN_000203d0(param_3,uVar10,0x5f64657370616c65,0xec000000656d6974,uVar9);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar4 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_00ac2aa0;
  _objc_allocWithZone(PTR__OBJC_CLASS___SCExtensionGrapheneMetric_00ac2aa0);
  uVar5 = 0xd00000000000001f;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001f,0x80000000008b4c40);
  uVar6 = 0xd000000000000019;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019,0x80000000008b5180);
  uVar9 = param_4;
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (param_4,PTR___sSSN_0099b040,PTR___sSSN_0099b040,PTR___sSSSHsWP_0099b050);
  func_0x00786420(puVar4);
  _objc_release(uVar5);
  _objc_release(uVar6);
  _objc_release(uVar9);
  func_0x0077e640(uVar11);
  _objc_release(puVar4);
  lVar7 = 0xae64c8;
  func_0x000115a8(0xae64c8,&UNK_007cd140);
  _swift_initStackObject();
  *(undefined8 *)(lVar7 + 0x18) = 6;
  *(undefined8 *)(lVar7 + 0x10) = 3;
  *(undefined8 *)(lVar7 + 0x20) = 0x5f6b726f7774656e;
  *(undefined8 *)(lVar7 + 0x28) = 0xee00737574617473;
  puVar4 = PTR__OBJC_CLASS___SCExtensionNetworkingAPIClient_00ac2a30;
  _objc_opt_self();
  iVar3 = (int)puVar4;
  func_0x00780a60();
  uVar1 = 0x69666977;
  if (iVar3 == 0) {
    uVar1 = 0x6c6c6563;
  }
  *(ulong *)(lVar7 + 0x30) = (ulong)uVar1;
  *(undefined8 *)(lVar7 + 0x38) = 0xe400000000000000;
  *(undefined8 *)(lVar7 + 0x40) = 0x69746f6d5f736168;
  *(undefined8 *)(lVar7 + 0x48) = 0xef617461645f6e6f;
  bVar2 = (param_6 & 1) == 0;
  uVar9 = 0x65757274;
  if (bVar2) {
    uVar9 = 0x65736c6166;
  }
  uVar5 = 0xe400000000000000;
  if (bVar2) {
    uVar5 = 0xe500000000000000;
  }
  *(undefined8 *)(lVar7 + 0x50) = uVar9;
  *(undefined8 *)(lVar7 + 0x58) = uVar5;
  *(undefined8 *)(lVar7 + 0x60) = 0x5f64657370616c65;
  *(undefined8 *)(lVar7 + 0x68) = 0xec000000656d6974;
  *(undefined8 *)(lVar7 + 0x70) = param_3;
  *(undefined8 *)(lVar7 + 0x78) = uVar10;
  lVar8 = lVar7;
  func_0x00020958(lVar7);
  _swift_setDeallocating(lVar7);
  uVar9 = 0xae64d0;
  func_0x000115a8(0xae64d0,&UNK_007cd4a0);
  _swift_arrayDestroy((undefined8 *)(lVar7 + 0x20),3,uVar9);
  puVar4 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_00ac2aa0;
  _objc_allocWithZone(PTR__OBJC_CLASS___SCExtensionGrapheneMetric_00ac2aa0);
  uVar9 = 0xd00000000000001f;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001f,0x80000000008b4c40);
  uVar10 = 0xd000000000000017;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000017,0x80000000008b5160);
  lVar7 = lVar8;
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (lVar8,PTR___sSSN_0099b040,PTR___sSSN_0099b040,PTR___sSSSHsWP_0099b050);
  func_0x00786420(puVar4);
  _swift_bridgeObjectRelease(lVar8);
  _objc_release(uVar9);
  _objc_release(uVar10);
  _objc_release(lVar7);
  func_0x00784860(uVar11);
  _swift_release(param_4);
  _objc_release(puVar4);
  return;
}



/* Entry: 0001ffa4; end: 00020237;  */

void FUN_0001ffa4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  ulong uVar5;
  ulong uVar6;
  
  FUN_0001f134(param_2,param_6,param_7);
  if (param_4 < 4) {
    if (param_4 == 1) {
      uVar5 = 0xe700000000000000;
      uVar6 = 0x6e776f6e6b6e75;
      goto LAB_0002010c;
    }
    if (param_4 == 2) {
      uVar5 = 0xef6369646f697265;
      uVar6 = 0x705f726572616873;
      goto LAB_0002010c;
    }
    if (param_4 == 3) {
      uVar5 = 0x80000000008b4ca0;
      uVar6 = 0xd000000000000011;
      goto LAB_0002010c;
    }
LAB_000200a0:
    uVar5 = 0xef7375636f665f6e;
    uVar6 = 0x72616873;
  }
  else {
    if (5 < param_4) {
      if (param_4 == 6) {
        uVar5 = 0x616d5f6e;
        goto LAB_000200d0;
      }
      if (param_4 == 7) {
        uVar5 = 0x80000000008b4c80;
        uVar6 = 0xd000000000000012;
        goto LAB_0002010c;
      }
      goto LAB_000200a0;
    }
    if (param_4 != 4) {
      if (param_4 == 5) {
        uVar5 = 0xef6e65706f5f7061;
        uVar6 = 0x6d5f726577656976;
        goto LAB_0002010c;
      }
      goto LAB_000200a0;
    }
    uVar5 = 0x70615f6e;
LAB_000200d0:
    uVar5 = uVar5 | 0xed00007000000000;
    uVar6 = 0x77656976;
  }
  uVar6 = uVar6 | 0x695f726500000000;
LAB_0002010c:
  uVar4 = param_6;
  _swift_isUniquelyReferenced_nonNull_native(param_6);
  FUN_000203d0(uVar6,uVar5,0x7079745f68737570,0xe900000000000065,uVar4);
  puVar1 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_00ac2aa0;
  _objc_allocWithZone(PTR__OBJC_CLASS___SCExtensionGrapheneMetric_00ac2aa0);
  uVar4 = 0xd00000000000001f;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001f,0x80000000008b4c40);
  uVar2 = 0x6f635f6563726f66;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6f635f6563726f66,0xee006574656c706d);
  uVar3 = param_6;
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (param_6,PTR___sSSN_0099b040,PTR___sSSN_0099b040,PTR___sSSSHsWP_0099b050);
  func_0x00786420(puVar1);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar3);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0077e920(param_1,uVar4);
  func_0x00784860(uVar4);
  _swift_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 00020238; end: 0002027b;  */

void FUN_00020238(code *param_1)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000035,0x80000000008b5120);
  _objc_release();
  (*param_1)();
  return;
}



/* Entry: 0002027c; end: 000202bf;  */

void FUN_0002027c(void)

{
  long unaff_x20;
  
  _objc_release(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0077b2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_0099b9a0)();
  return;
}



/* Entry: 000202c0; end: 00020323;  */

undefined1  [16] FUN_000202c0(ulong param_1,ulong param_2)

{
  ulong *puVar1;
  ulong uVar2;
  undefined1 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long unaff_x20;
  undefined1 auVar8 [16];
  undefined1 auStack_78 [56];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_78,*(undefined8 *)(unaff_x20 + 0x28));
  puVar3 = auStack_78;
  __sSS4hash4intoys6HasherVz_tF(puVar3,param_1,param_2);
  __ss6HasherV9_finalizeSiyF();
  uVar6 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  uVar7 = (ulong)puVar3 & (uVar6 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (uVar7 >> 6) * 8) >> (uVar7 & 0x3f) & 1) != 0) {
    do {
      puVar1 = (ulong *)(*(long *)(unaff_x20 + 0x30) + uVar7 * 0x10);
      uVar4 = *puVar1;
      uVar2 = puVar1[1];
      if ((uVar4 == param_1 && uVar2 == param_2) ||
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (uVar4,uVar2,param_1,param_2,0), (uVar4 & 1) != 0)) {
        uVar5 = 1;
        goto LAB_000203b8;
      }
      uVar7 = uVar7 + 1 & ~uVar6;
    } while ((*(ulong *)(unaff_x20 + 0x40 + (uVar7 >> 6) * 8) >> (uVar7 & 0x3f) & 1) != 0);
  }
  uVar5 = 0;
LAB_000203b8:
  auVar8._8_8_ = uVar5;
  auVar8._0_8_ = uVar7;
  return auVar8;
}



/* Entry: 00020324; end: 000203cf;  */

undefined1  [16] FUN_00020324(ulong param_1,ulong param_2,ulong param_3)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long unaff_x20;
  undefined1 auVar6 [16];
  
  uVar5 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_3 = param_3 & (uVar5 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_3 >> 6) * 8) >> (param_3 & 0x3f) & 1) != 0) {
    do {
      puVar1 = (ulong *)(*(long *)(unaff_x20 + 0x30) + param_3 * 0x10);
      uVar3 = *puVar1;
      uVar2 = puVar1[1];
      if ((uVar3 == param_1 && uVar2 == param_2) ||
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (uVar3,uVar2,param_1,param_2,0), (uVar3 & 1) != 0)) {
        uVar4 = 1;
        goto LAB_000203b8;
      }
      param_3 = param_3 + 1 & ~uVar5;
    } while ((*(ulong *)(unaff_x20 + 0x40 + (param_3 >> 6) * 8) >> (param_3 & 0x3f) & 1) != 0);
  }
  uVar4 = 0;
LAB_000203b8:
  auVar6._8_8_ = uVar4;
  auVar6._0_8_ = param_3;
  return auVar6;
}



/* Entry: 000203d0; end: 000206a3;  */

void FUN_000203d0(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4,uint param_5)

{
  undefined8 *puVar1;
  ulong *puVar2;
  code *pcVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long *unaff_x20;
  long lVar10;
  
  lVar10 = *unaff_x20;
  uVar4 = param_3;
  uVar6 = param_4;
  FUN_000202c0();
  lVar7 = *(long *)(lVar10 + 0x10);
  uVar9 = (ulong)~(uint)uVar6 & 1;
  lVar8 = lVar7 + uVar9;
  if (SCARRY8(lVar7,uVar9)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x204ac);
    (*pcVar3)();
  }
  if (*(long *)(lVar10 + 0x18) < lVar8) {
    FUN_000206a4(lVar8,param_5 & 1);
    uVar4 = param_3;
    uVar9 = param_4;
    FUN_000202c0();
    if (((uint)uVar6 & 1) != ((uint)uVar9 & 1)) {
      __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF(PTR___sSSN_0099b040)
      ;
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x20474);
      (*pcVar3)();
    }
  }
  else if ((param_5 & 1) == 0) {
    func_0x0002052c();
    lVar8 = *unaff_x20;
    goto joined_r0x000204c0;
  }
  lVar8 = *unaff_x20;
joined_r0x000204c0:
  if ((uVar6 & 1) != 0) {
    puVar1 = (undefined8 *)(*(long *)(lVar8 + 0x38) + uVar4 * 0x10);
    uVar5 = puVar1[1];
    *puVar1 = param_1;
    puVar1[1] = param_2;
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(uVar5);
    return;
  }
  lVar7 = lVar8 + (uVar4 >> 6) * 8;
  *(ulong *)(lVar7 + 0x40) = *(ulong *)(lVar7 + 0x40) | 1L << (uVar4 & 0x3f);
  puVar2 = (ulong *)(*(long *)(lVar8 + 0x30) + uVar4 * 0x10);
  *puVar2 = param_3;
  puVar2[1] = param_4;
  puVar1 = (undefined8 *)(*(long *)(lVar8 + 0x38) + uVar4 * 0x10);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  if (SCARRY8(*(long *)(lVar8 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x2052c);
    (*pcVar3)();
  }
  *(long *)(lVar8 + 0x10) = *(long *)(lVar8 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x0077b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_0099b978)(param_4);
  return;
}



/* Entry: 000206a4; end: 00020a67;  */

void FUN_000206a4(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  code *pcVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 *puVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long *unaff_x20;
  ulong uVar17;
  ulong *puVar18;
  long lVar19;
  long lVar20;
  undefined1 auStack_a8 [72];
  
  lVar19 = *unaff_x20;
  lVar1 = *(long *)(lVar19 + 0x18);
  if (*(long *)(lVar19 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar8 = 0xae64d8;
  func_0x000115a8(0xae64d8,&UNK_007cd150);
  lVar9 = lVar19;
  __ss18_DictionaryStorageC6resize8original8capacity4moveAByxq_Gs05__RawaB0C_SiSbtFZ
            (lVar19,lVar1,param_2,uVar8);
  if (*(long *)(lVar19 + 0x10) == 0) {
LAB_00020924:
    _swift_release(lVar19);
    *unaff_x20 = lVar9;
    return;
  }
  puVar18 = (ulong *)(lVar19 + 0x40);
  uVar14 = 1L << ((ulong)*(byte *)(lVar19 + 0x20) & 0x3f);
  uVar17 = 0xffffffffffffffff;
  if ((*(byte *)(lVar19 + 0x20) & 0x3f) < 6) {
    uVar17 = ~(-1L << (uVar14 & 0x3f));
  }
  uVar17 = uVar17 & *puVar18;
  lVar1 = lVar9 + 0x40;
  lVar12 = 0;
  do {
    if (uVar17 == 0) {
      do {
        lVar20 = lVar12 + 1;
        if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x20954);
          (*pcVar7)();
        }
        if ((long)(uVar14 + 0x3f >> 6) <= lVar20) {
          if ((param_2 & 1) != 0) {
            uVar17 = 1L << ((ulong)*(byte *)(lVar19 + 0x20) & 0x3f);
            if ((*(byte *)(lVar19 + 0x20) & 0x3f) < 6) {
              *puVar18 = -1L << (uVar17 & 0x3f);
            }
            else {
              _bzero(puVar18,uVar17 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar19 + 0x10) = 0;
          }
          goto LAB_00020924;
        }
        uVar17 = puVar18[lVar20];
        lVar12 = lVar12 + 1;
      } while (uVar17 == 0);
      uVar11 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
      uVar17 = uVar17 - 1 & uVar17;
    }
    else {
      uVar11 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
      uVar17 = uVar17 - 1 & uVar17;
      lVar20 = lVar12;
    }
    lVar12 = (LZCOUNT(uVar11) | lVar20 << 6) * 0x10;
    puVar2 = (undefined8 *)(*(long *)(lVar19 + 0x30) + lVar12);
    uVar8 = *puVar2;
    uVar4 = puVar2[1];
    puVar2 = (undefined8 *)(*(long *)(lVar19 + 0x38) + lVar12);
    uVar3 = *puVar2;
    uVar5 = puVar2[1];
    if ((param_2 & 1) == 0) {
      _swift_bridgeObjectRetain(uVar4);
      _swift_bridgeObjectRetain(uVar5);
    }
    __ss6HasherV5_seedABSi_tcfC(auStack_a8,*(undefined8 *)(lVar9 + 0x28));
    puVar10 = auStack_a8;
    __sSS4hash4intoys6HasherVz_tF(puVar10,uVar8,uVar4);
    __ss6HasherV9_finalizeSiyF();
    uVar16 = -1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f);
    uVar15 = (ulong)puVar10 & (uVar16 ^ 0xffffffffffffffff);
    uVar13 = uVar15 >> 6;
    uVar11 = -1L << (uVar15 & 0x3f) & (*(ulong *)(lVar1 + uVar13 * 8) ^ 0xffffffffffffffff);
    if (uVar11 == 0) {
      bVar6 = false;
      uVar11 = 0x3f - uVar16 >> 6;
      do {
        uVar15 = uVar13 + 1;
        if ((uVar15 == uVar11) && (bVar6)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x20958);
          (*pcVar7)();
        }
        uVar13 = 0;
        if (uVar15 != uVar11) {
          uVar13 = uVar15;
        }
        bVar6 = (bool)(uVar15 == uVar11 | bVar6);
        uVar15 = *(ulong *)(lVar1 + uVar13 * 8);
      } while (uVar15 == 0xffffffffffffffff);
      uVar15 = ~uVar15;
      uVar11 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) | uVar13 << 6;
    }
    else {
      uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) | uVar15 & 0x7fffffffffffffc0;
    }
    uVar13 = uVar11 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar13) = 1L << (uVar11 & 0x3f) | *(ulong *)(lVar1 + uVar13);
    puVar2 = (undefined8 *)(*(long *)(lVar9 + 0x30) + uVar11 * 0x10);
    *puVar2 = uVar8;
    puVar2[1] = uVar4;
    puVar2 = (undefined8 *)(*(long *)(lVar9 + 0x38) + uVar11 * 0x10);
    *puVar2 = uVar3;
    puVar2[1] = uVar5;
    *(long *)(lVar9 + 0x10) = *(long *)(lVar9 + 0x10) + 1;
    lVar12 = lVar20;
  } while( true );
}



/* Entry: 00020a68; end: 00020b2f;  */

undefined1  [16] FUN_00020a68(double param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  param_1 = param_1 / 1000.0;
  bVar3 = false;
  if ((0.0 <= param_1) && (bVar3 = false, !NAN(param_1))) {
    bVar3 = param_1 < 5.0;
  }
  if (bVar3) {
    auVar5._8_8_ = 0xe300000000000000;
    auVar5._0_8_ = 0x352d30;
    return auVar5;
  }
  bVar3 = false;
  if ((5.0 <= param_1) && (bVar3 = false, !NAN(param_1))) {
    bVar3 = param_1 < 10.0;
  }
  if (!bVar3) {
    bVar3 = false;
    if ((10.0 <= param_1) && (bVar3 = false, !NAN(param_1))) {
      bVar3 = param_1 < 15.0;
    }
    if (!bVar3) {
      bVar3 = false;
      if ((15.0 <= param_1) && (bVar3 = false, !NAN(param_1))) {
        bVar3 = param_1 < 20.0;
      }
      if (!bVar3) {
        uVar1 = 0x6e776f6e6b6e75;
        if (20.0 <= param_1) {
          uVar1 = 0x2b3032;
        }
        uVar2 = 0xe700000000000000;
        if (20.0 <= param_1) {
          uVar2 = 0xe300000000000000;
        }
        auVar4._8_8_ = uVar2;
        auVar4._0_8_ = uVar1;
        return auVar4;
      }
      auVar8._8_8_ = 0xe500000000000000;
      auVar8._0_8_ = 0x30322d3531;
      return auVar8;
    }
    auVar7._8_8_ = 0xe500000000000000;
    auVar7._0_8_ = 0x35312d3031;
    return auVar7;
  }
  auVar6._8_8_ = 0xe400000000000000;
  auVar6._0_8_ = 0x30312d35;
  return auVar6;
}



/* Entry: 00020b30; end: 00020bff;  */

void FUN_00020b30(double param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  param_1 = param_1 / 1000.0;
  if ((0.0 <= param_1) && (param_1 < 25.0)) {
    lVar3 = 0xae64e0;
    func_0x000115a8(0xae64e0,&UNK_007cd158);
    _swift_allocObject();
    puVar1 = PTR___sSdN_0099b258;
    *(undefined8 *)(lVar3 + 0x18) = 2;
    *(undefined8 *)(lVar3 + 0x10) = 1;
    puVar2 = PTR___sSds7CVarArgsWP_0099b270;
    *(undefined **)(lVar3 + 0x38) = puVar1;
    *(undefined **)(lVar3 + 0x40) = puVar2;
    *(double *)(lVar3 + 0x20) = param_1;
    __sSS10FoundationE6format_S2Sh_s7CVarArg_pdtcfC(0x662e25,0xe300000000000000,lVar3);
  }
  return;
}



/* Entry: 00020c00; end: 00020d77;  */

void FUN_00020c00(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = uVar1;
  return;
}



/* Entry: 00020d78; end: 00020eb7;  */

undefined * FUN_00020d78(undefined8 param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR_PTR_00ac2800;
  _objc_allocWithZone();
  func_0x007849a0();
  func_0x0078e780();
  func_0x0078cf40(param_1,puVar2);
  func_0x0078daa0(puVar2);
  puVar3 = PTR_PTR_00ac2960;
  _objc_allocWithZone(PTR_PTR_00ac2960);
  func_0x007849a0();
  func_0x0078ece0(puVar2);
  _objc_release(puVar3);
  puVar3 = puVar2;
  func_0x00788620();
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x20eb4);
    (*pcVar1)();
  }
  func_0x00790d20();
  _objc_release(puVar3);
  puVar3 = puVar2;
  func_0x00788620();
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 != (undefined *)0x0) {
    func_0x0078f760();
    _objc_release(puVar3);
    puVar3 = PTR_PTR_00ac2970;
    _objc_allocWithZone(PTR_PTR_00ac2970);
    func_0x007849a0();
    func_0x0078da80();
    _objc_release(puVar2);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x20eb8);
  (*pcVar1)();
}



/* Entry: 00020eb8; end: 00020edf;  */

undefined * FUN_00020eb8(void)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined4 uVar4;
  
  uVar4 = *(undefined4 *)(unaff_x20 + 8);
  puVar2 = PTR_PTR_00ac2800;
  _objc_allocWithZone(PTR_PTR_00ac2800,*(undefined8 *)(unaff_x20 + 0x10),0);
  func_0x007849a0();
  func_0x0078e780();
  func_0x0078cf40(uVar4,puVar2);
  func_0x0078daa0(puVar2);
  puVar3 = PTR_PTR_00ac2960;
  _objc_allocWithZone(PTR_PTR_00ac2960);
  func_0x007849a0();
  func_0x0078ece0(puVar2);
  _objc_release(puVar3);
  puVar3 = puVar2;
  func_0x00788620();
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x20eb4);
    (*pcVar1)();
  }
  func_0x00790d20();
  _objc_release(puVar3);
  puVar3 = puVar2;
  func_0x00788620();
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 != (undefined *)0x0) {
    func_0x0078f760();
    _objc_release(puVar3);
    puVar3 = PTR_PTR_00ac2970;
    _objc_allocWithZone(PTR_PTR_00ac2970);
    func_0x007849a0();
    func_0x0078da80();
    _objc_release(puVar2);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x20eb8);
  (*pcVar1)();
}



/* Entry: 00020ee0; end: 00020f0b;  */

long FUN_00020ee0(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 00020f0c; end: 00021143;  */

void FUN_00020f0c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar3 = *(undefined8 *)((long)param_2 + 9);
  *(undefined8 *)((long)param_1 + 0x11) = *(undefined8 *)((long)param_2 + 0x11);
  *(undefined8 *)((long)param_1 + 9) = uVar3;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Entry: 00021144; end: 0002126b;  */

void FUN_00021144(void)

{
  undefined8 uVar1;
  char cVar2;
  undefined4 uVar3;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar2 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  uVar3 = 0x6573706c;
  if (cVar2 != '\x01') {
    uVar3 = 0x65736e;
  }
  uVar1 = 0xe400000000000000;
  if (cVar2 != '\x01') {
    uVar1 = 0xe300000000000000;
  }
  __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar3,uVar1);
  _swift_bridgeObjectRelease(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 0002126c; end: 000212e3;  */

void FUN_0002126c(undefined1 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 uVar4;
  
  uVar2 = *(undefined8 *)(param_2 + 8);
  lVar3 = 0xae6580;
  func_0x000115a8(0xae6580,&UNK_007cd4b0);
  _swift_initStaticObject();
  __ss21_findStringSwitchCase5cases6stringSiSays06StaticB0VG_SStF();
  _swift_bridgeObjectRelease(uVar2);
  uVar4 = 1;
  if (lVar3 != 1) {
    uVar4 = 2;
  }
  uVar1 = 0;
  if (lVar3 != 0) {
    uVar1 = uVar4;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 000212e4; end: 00021317;  */

void FUN_000212e4(ulong *param_1)

{
  ulong uVar1;
  uint uVar2;
  char *unaff_x20;
  
  uVar2 = 0x6573706c;
  if (*unaff_x20 != '\x01') {
    uVar2 = 0x65736e;
  }
  uVar1 = 0xe400000000000000;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0xe300000000000000;
  }
  *param_1 = (ulong)uVar2;
  param_1[1] = uVar1;
  return;
}



/* Entry: 00021318; end: 00021357;  */

void FUN_00021318(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae6520 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007cd25c;
  _swift_getWitnessTable(&UNK_007cd25c,&UNK_0099d428);
  puRam0000000000ae6520 = puVar1;
  return;
}



/* Entry: 00021358; end: 00021603;  */

undefined * FUN_00021358(double param_1,double param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long extraout_x8;
  long lVar6;
  double dVar7;
  
  lVar2 = 0;
  __s10Foundation4DateVMa();
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar6 + 0x40));
  puVar3 = PTR_PTR_00ac2808;
  _objc_allocWithZone();
  func_0x007849a0();
  func_0x0078e780();
  uVar4 = param_3;
  func_0x00792a20(param_3);
  _objc_retainAutoreleasedReturnValue();
  __s10Foundation4DateV36_unconditionallyBridgeFromObjectiveCyACSo6NSDateCSgFZ
            (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  _objc_release(uVar4);
  __s10Foundation4DateV21timeIntervalSince1970Sdvg();
  (**(code **)(lVar6 + 8))
            (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x215f0);
    (*pcVar1)();
  }
  if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x215f4);
    (*pcVar1)();
  }
  dVar7 = 9.223372036854776e+18;
  if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x215f8);
    (*pcVar1)();
  }
  if (SUB168(SEXT816((long)param_1) * SEXT816(1000),8) == (long)param_1 * 1000 >> 0x3f) {
    func_0x00790b40(puVar3);
    func_0x00780da0(param_3);
    func_0x0078eb20((float)dVar7,puVar3);
    func_0x00780da0(param_3);
    dVar7 = (double)(ulong)(uint)(float)param_2;
    func_0x0078ec20(puVar3);
    func_0x00784480(param_3);
    dVar7 = (double)(ulong)(uint)(float)dVar7;
    func_0x0078e540(puVar3);
    func_0x00793800(param_3);
    if ((0.0 <= dVar7) && (func_0x0077ec80(param_3), 0.0 <= dVar7)) {
      func_0x0077ec80(param_3);
      dVar7 = (double)(ulong)(uint)(float)dVar7;
      func_0x0078cb80(puVar3);
      func_0x00793800(param_3);
      dVar7 = (double)(ulong)(uint)(float)dVar7;
      func_0x00791260(puVar3);
    }
    puVar5 = PTR_PTR_00ac2958;
    _objc_allocWithZone(PTR_PTR_00ac2958);
    func_0x007849a0();
    func_0x0078f0a0(puVar3);
    _objc_release(puVar5);
    func_0x00780f40(param_3);
    if (0.0 <= dVar7) {
      puVar5 = puVar3;
      func_0x00789560();
      _objc_retainAutoreleasedReturnValue();
      if (puVar5 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x21600);
        (*pcVar1)();
      }
      func_0x00780f40(param_3);
      dVar7 = (double)(ulong)(uint)(float)dVar7;
      func_0x0078e500(puVar5);
      _objc_release(puVar5);
    }
    func_0x00791b00(param_3);
    if (0.0 <= dVar7) {
      puVar5 = puVar3;
      func_0x00789560();
      _objc_retainAutoreleasedReturnValue();
      if (puVar5 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x21604);
        (*pcVar1)();
      }
      func_0x00791b00(param_3);
      func_0x00790620((float)dVar7,puVar5);
      _objc_release(puVar5);
    }
    func_0x0078e860(puVar3);
    puVar5 = PTR_PTR_00ac2970;
    _objc_allocWithZone(PTR_PTR_00ac2970);
    func_0x007849a0();
    func_0x0078ed00();
    _objc_release(puVar3);
    return puVar5;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x215fc);
  (*pcVar1)();
}



/* Entry: 00021604; end: 0002160f;  */

undefined * FUN_00021604(double param_1,double param_2)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long extraout_x8;
  undefined8 *unaff_x20;
  long lVar7;
  double dVar8;
  
  uVar6 = *unaff_x20;
  lVar2 = 0;
  __s10Foundation4DateVMa();
  lVar7 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar7 + 0x40));
  puVar3 = PTR_PTR_00ac2808;
  _objc_allocWithZone();
  func_0x007849a0();
  func_0x0078e780();
  uVar4 = uVar6;
  func_0x00792a20(uVar6);
  _objc_retainAutoreleasedReturnValue();
  __s10Foundation4DateV36_unconditionallyBridgeFromObjectiveCyACSo6NSDateCSgFZ
            (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  _objc_release(uVar4);
  __s10Foundation4DateV21timeIntervalSince1970Sdvg();
  (**(code **)(lVar7 + 8))
            (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x215f0);
    (*pcVar1)();
  }
  if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x215f4);
    (*pcVar1)();
  }
  dVar8 = 9.223372036854776e+18;
  if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x215f8);
    (*pcVar1)();
  }
  if (SUB168(SEXT816((long)param_1) * SEXT816(1000),8) == (long)param_1 * 1000 >> 0x3f) {
    func_0x00790b40(puVar3);
    func_0x00780da0(uVar6);
    func_0x0078eb20((float)dVar8,puVar3);
    func_0x00780da0(uVar6);
    dVar8 = (double)(ulong)(uint)(float)param_2;
    func_0x0078ec20(puVar3);
    func_0x00784480(uVar6);
    dVar8 = (double)(ulong)(uint)(float)dVar8;
    func_0x0078e540(puVar3);
    func_0x00793800(uVar6);
    if ((0.0 <= dVar8) && (func_0x0077ec80(uVar6), 0.0 <= dVar8)) {
      func_0x0077ec80(uVar6);
      dVar8 = (double)(ulong)(uint)(float)dVar8;
      func_0x0078cb80(puVar3);
      func_0x00793800(uVar6);
      dVar8 = (double)(ulong)(uint)(float)dVar8;
      func_0x00791260(puVar3);
    }
    puVar5 = PTR_PTR_00ac2958;
    _objc_allocWithZone(PTR_PTR_00ac2958);
    func_0x007849a0();
    func_0x0078f0a0(puVar3);
    _objc_release(puVar5);
    func_0x00780f40(uVar6);
    if (0.0 <= dVar8) {
      puVar5 = puVar3;
      func_0x00789560();
      _objc_retainAutoreleasedReturnValue();
      if (puVar5 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x21600);
        (*pcVar1)();
      }
      func_0x00780f40(uVar6);
      dVar8 = (double)(ulong)(uint)(float)dVar8;
      func_0x0078e500(puVar5);
      _objc_release(puVar5);
    }
    func_0x00791b00(uVar6);
    if (0.0 <= dVar8) {
      puVar5 = puVar3;
      func_0x00789560();
      _objc_retainAutoreleasedReturnValue();
      if (puVar5 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x21604);
        (*pcVar1)();
      }
      func_0x00791b00(uVar6);
      func_0x00790620((float)dVar8,puVar5);
      _objc_release(puVar5);
    }
    func_0x0078e860(puVar3);
    puVar5 = PTR_PTR_00ac2970;
    _objc_allocWithZone(PTR_PTR_00ac2970);
    func_0x007849a0();
    func_0x0078ed00();
    _objc_release(puVar3);
    return puVar5;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x215fc);
  (*pcVar1)();
}



/* Entry: 00021610; end: 00021643;  */

undefined8 * FUN_00021610(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  _objc_retain();
  return param_1;
}



/* Entry: 00021644; end: 0002164b;  */

void FUN_00021644(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(*param_1);
  return;
}



/* Entry: 0002164c; end: 00021697;  */

undefined8 * FUN_0002164c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _objc_retain();
  _objc_release(uVar1);
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  return param_1;
}



/* Entry: 00021698; end: 000216ab;  */

void FUN_00021698(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = uVar1;
  return;
}



/* Entry: 000216ac; end: 000216e7;  */

undefined8 * FUN_000216ac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _objc_release(uVar1);
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  return param_1;
}



/* Entry: 000216e8; end: 00021787;  */

int FUN_000216e8(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 9) != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 00021788; end: 000217e7;  */

undefined * FUN_00021788(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_00ac27e0;
  _objc_allocWithZone(PTR_PTR_00ac27e0);
  func_0x007849a0();
  func_0x00790420();
  puVar2 = PTR_PTR_00ac2970;
  _objc_allocWithZone(PTR_PTR_00ac2970);
  func_0x007849a0();
  func_0x0078f340();
  _objc_release(puVar1);
  return puVar2;
}



/* Entry: 000217e8; end: 0002195b;  */

undefined1  [16] FUN_000217e8(void)

{
  return ZEXT816(0x99d538);
}



/* Entry: 0002195c; end: 000219c3;  */

long FUN_0002195c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 000219c4; end: 00021bbb;  */

undefined1 * FUN_000219c4(undefined1 *param_1,undefined1 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  param_1[0x30] = param_2[0x30];
  lVar1 = *(long *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  _swift_bridgeObjectRetain();
  if (lVar1 - 1U < 7) {
    uVar2 = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_1 + 0x38) = uVar2;
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  }
  else {
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
    *(long *)(param_1 + 0x40) = lVar1;
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
    _swift_bridgeObjectRetain(lVar1);
  }
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  param_1[0x58] = param_2[0x58];
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  _objc_retain();
  return param_1;
}



/* Entry: 00021bbc; end: 00021be7;  */

void FUN_00021bbc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar3 = param_2[2];
  uVar5 = param_2[5];
  uVar4 = param_2[4];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  param_1[5] = uVar5;
  param_1[4] = uVar4;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  uVar2 = param_2[7];
  uVar1 = param_2[6];
  uVar4 = param_2[9];
  uVar3 = param_2[8];
  uVar6 = param_2[0xb];
  uVar5 = param_2[10];
  param_1[0xc] = param_2[0xc];
  param_1[9] = uVar4;
  param_1[8] = uVar3;
  param_1[0xb] = uVar6;
  param_1[10] = uVar5;
  param_1[7] = uVar2;
  param_1[6] = uVar1;
  return;
}



/* Entry: 00021be8; end: 00021cbb;  */

undefined1 * FUN_00021be8(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  *param_1 = *param_2;
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  param_1[0x30] = param_2[0x30];
  if (6 < *(long *)(param_1 + 0x40) - 1U) {
    lVar3 = *(long *)(param_2 + 0x40);
    if (6 < lVar3 - 1U) {
      *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
      *(long *)(param_1 + 0x40) = lVar3;
      _swift_bridgeObjectRelease();
      *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
      goto LAB_00021c8c;
    }
    func_0x00023398(param_1 + 0x38,0xae6588,&UNK_007cd2f0);
  }
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = uVar2;
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
LAB_00021c8c:
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  param_1[0x58] = param_2[0x58];
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  _objc_release(uVar2);
  return param_1;
}



/* Entry: 00021cbc; end: 00021d7f;  */

int FUN_00021cbc(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x1a] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 00021d80; end: 00021e2b;  */

void FUN_00021d80(void)

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



/* Entry: 00021e2c; end: 00021e93;  */

uint FUN_00021e2c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  undefined8 uStack_80;
  undefined8 uStack_78;
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
  
  uVar1 = 0;
  uStack_a8 = param_1[9];
  uStack_b0 = param_1[8];
  uStack_98 = param_1[0xb];
  uStack_a0 = param_1[10];
  uStack_90 = param_1[0xc];
  uStack_e8 = param_1[1];
  uStack_f0 = *param_1;
  uStack_d8 = param_1[3];
  uStack_e0 = param_1[2];
  uStack_c8 = param_1[5];
  uStack_d0 = param_1[4];
  uStack_b8 = param_1[7];
  uStack_c0 = param_1[6];
  uStack_78 = param_2[1];
  uStack_80 = *param_2;
  uStack_68 = param_2[3];
  uStack_70 = param_2[2];
  uStack_58 = param_2[5];
  uStack_60 = param_2[4];
  uStack_48 = param_2[7];
  uStack_50 = param_2[6];
  uStack_38 = param_2[9];
  uStack_40 = param_2[8];
  uStack_28 = param_2[0xb];
  uStack_30 = param_2[10];
  uStack_20 = param_2[0xc];
  FUN_0002315c(&uStack_f0,&uStack_80);
  return uVar1 & 1;
}



/* Entry: 00021e94; end: 00021e97;  */

void FUN_00021e94(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae6590 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007cd37c;
  _swift_getWitnessTable(&UNK_007cd37c,&UNK_0099d5e8);
  puRam0000000000ae6590 = puVar1;
  return;
}



/* Entry: 00021e98; end: 00021ed7;  */

void FUN_00021e98(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae6590 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007cd37c;
  _swift_getWitnessTable(&UNK_007cd37c,&UNK_0099d5e8);
  puRam0000000000ae6590 = puVar1;
  return;
}



/* Entry: 00021ed8; end: 00021fd7;  */

/* WARNING: Removing unreachable block (ram,0x00021fcc) */

undefined1  [16] FUN_00021ed8(undefined8 ***param_1,ulong param_2,undefined8 param_3)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auVar5 [16];
  undefined8 **ppuStack_40;
  ulong uStack_38;
  
  ppuStack_40 = param_1;
  uStack_38 = param_2;
  _swift_bridgeObjectRetain(param_2);
  pppuVar1 = &ppuStack_40;
  puVar3 = PTR___sSSN_0099b040;
  __sSSySSxcs25LosslessStringConvertibleRzSTRzSJ7ElementSTRtzlufC
            (pppuVar1,PTR___sSSN_0099b040,PTR___sSSs25LosslessStringConvertiblesWP_0099b068,
             PTR___sSSSTsWP_0099b058);
  if (((ulong)puVar3 >> 0x3c & 1) != 0) {
    puVar4 = puVar3;
    FUN_00022254();
    _swift_bridgeObjectRelease(puVar3);
    puVar3 = puVar4;
  }
  if (((ulong)puVar3 >> 0x3d & 1) == 0) {
    if (((ulong)pppuVar1 >> 0x3c & 1) == 0) {
      puVar4 = puVar3;
      __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg();
      pppuVar2 = pppuVar1;
    }
    else {
      puVar4 = (undefined *)((ulong)pppuVar1 & 0xffffffffffff);
      pppuVar2 = (undefined8 ***)(((ulong)puVar3 & 0xfffffffffffffff) + 0x20);
    }
    FUN_00021fd8(pppuVar2);
  }
  else {
    puVar4 = (undefined *)((ulong)puVar3 >> 0x38 & 0xf);
    uStack_38 = (ulong)puVar3 & 0xffffffffffffff;
    pppuVar2 = &ppuStack_40;
    ppuStack_40 = pppuVar1;
    FUN_00021fd8(pppuVar2,puVar4,param_3);
  }
  _swift_bridgeObjectRelease(puVar3);
  auVar5._8_8_ = puVar4;
  auVar5._0_8_ = pppuVar2;
  return auVar5;
}



/* Entry: 00021fd8; end: 00022253;  */

undefined1  [16] FUN_00021fd8(byte *param_1,ulong param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  code *pcVar6;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  uint uVar10;
  long lVar11;
  char cVar12;
  long lVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  iVar8 = (int)param_3;
  uVar7 = param_2;
  if (*param_1 == 0x2b) {
    if ((long)param_2 < 1) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x22254);
      (*pcVar6)();
    }
    lVar11 = param_2 - 1;
    if (lVar11 == 0) goto LAB_00022244;
    uVar9 = 0;
    uVar1 = iVar8 + 0x30;
    uVar2 = 0x61;
    if (10 < param_3) {
      uVar2 = iVar8 + 0x57;
    }
    uVar5 = 0x41;
    if (10 < param_3) {
      uVar1 = 0x3a;
      uVar5 = iVar8 + 0x37;
    }
    do {
      param_1 = param_1 + 1;
      bVar3 = *param_1;
      if ((bVar3 < 0x30) || ((uVar1 & 0xff) <= (uint)bVar3)) {
        uVar10 = (uint)bVar3;
        if ((uVar10 < 0x41) || ((uVar5 & 0xff) <= uVar10)) {
          uVar7 = 1;
          if ((uVar10 < 0x61) || ((uVar2 & 0xff) <= uVar10)) goto LAB_00022244;
          cVar12 = -0x57;
        }
        else {
          cVar12 = -0x37;
        }
      }
      else {
        cVar12 = -0x30;
      }
      lVar13 = uVar9 * param_3;
      if ((SUB168(SEXT816((long)uVar9) * SEXT816(param_3),8) != lVar13 >> 0x3f) ||
         (uVar9 = lVar13 + (ulong)(byte)(bVar3 + cVar12),
         SCARRY8(lVar13,(ulong)(byte)(bVar3 + cVar12)))) goto LAB_00022228;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  else {
    if (*param_1 != 0x2d) {
      if (param_2 != 0) {
        uVar1 = iVar8 + 0x30;
        uVar2 = 0x61;
        if (10 < param_3) {
          uVar2 = iVar8 + 0x57;
        }
        uVar5 = 0x41;
        if (10 < param_3) {
          uVar1 = 0x3a;
          uVar5 = iVar8 + 0x37;
        }
        if (param_1 == (byte *)0x0) {
          return ZEXT816(0);
        }
        uVar9 = 0;
        do {
          bVar3 = *param_1;
          if ((bVar3 < 0x30) || ((uVar1 & 0xff) <= (uint)bVar3)) {
            uVar10 = (uint)bVar3;
            if ((uVar10 < 0x41) || ((uVar5 & 0xff) <= uVar10)) {
              uVar7 = 1;
              if ((uVar10 < 0x61) || ((uVar2 & 0xff) <= uVar10)) goto LAB_00022244;
              cVar12 = -0x57;
            }
            else {
              cVar12 = -0x37;
            }
          }
          else {
            cVar12 = -0x30;
          }
          lVar11 = uVar9 * param_3;
          if ((SUB168(SEXT816((long)uVar9) * SEXT816(param_3),8) != lVar11 >> 0x3f) ||
             (uVar9 = lVar11 + (ulong)(byte)(bVar3 + cVar12),
             SCARRY8(lVar11,(ulong)(byte)(bVar3 + cVar12)))) break;
          param_1 = param_1 + 1;
          param_2 = param_2 - 1;
          if (param_2 == 0) {
            auVar15._8_8_ = 0;
            auVar15._0_8_ = uVar9;
            return auVar15;
          }
        } while( true );
      }
LAB_00022228:
      return ZEXT816(1) << 0x40;
    }
    if ((long)param_2 < 1) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x22250);
      (*pcVar6)();
    }
    lVar11 = param_2 - 1;
    if (lVar11 == 0) {
LAB_00022244:
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar7;
      return auVar4 << 0x40;
    }
    uVar9 = 0;
    uVar1 = iVar8 + 0x30;
    uVar2 = 0x61;
    if (10 < param_3) {
      uVar2 = iVar8 + 0x57;
    }
    uVar5 = 0x41;
    if (10 < param_3) {
      uVar1 = 0x3a;
      uVar5 = iVar8 + 0x37;
    }
    do {
      param_1 = param_1 + 1;
      bVar3 = *param_1;
      if ((bVar3 < 0x30) || ((uVar1 & 0xff) <= (uint)bVar3)) {
        uVar10 = (uint)bVar3;
        if ((uVar10 < 0x41) || ((uVar5 & 0xff) <= uVar10)) {
          uVar7 = 1;
          if ((uVar10 < 0x61) || ((uVar2 & 0xff) <= uVar10)) goto LAB_00022244;
          cVar12 = -0x57;
        }
        else {
          cVar12 = -0x37;
        }
      }
      else {
        cVar12 = -0x30;
      }
      lVar13 = uVar9 * param_3;
      if ((SUB168(SEXT816((long)uVar9) * SEXT816(param_3),8) != lVar13 >> 0x3f) ||
         (uVar9 = lVar13 - (ulong)(byte)(bVar3 + cVar12),
         SBORROW8(lVar13,(ulong)(byte)(bVar3 + cVar12)))) goto LAB_00022228;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uVar9;
  return auVar14;
}



/* Entry: 00022254; end: 000222a3;  */

undefined1  [16]
FUN_00022254(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0xf;
  FUN_000222a4(0xf,param_1,param_2);
  FUN_000222f0();
  _swift_bridgeObjectRelease(param_4);
  auVar2._8_8_ = param_1;
  auVar2._0_8_ = uVar1;
  return auVar2;
}



/* Entry: 000222a4; end: 000222ef;  */

void FUN_000222a4(ulong param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  uint uVar4;
  
  uVar1 = param_2 & 0xffffffffffff;
  if ((param_3 & 0x2000000000000000) != 0) {
    uVar1 = param_3 >> 0x38 & 0xf;
  }
  if (param_1 >> 0xe <= uVar1 << 2) {
    uVar4 = (uint)(param_2 >> 0x3b) & 1;
    if ((param_3 & 0x1000000000000000) == 0) {
      uVar4 = 1;
    }
    uVar2 = 7;
    if (uVar4 == 0) {
      uVar2 = 0xb;
    }
                    /* WARNING: Could not recover jumptable at 0x00778578. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sSSySsSnySS5IndexVGcig_0099b0a0)(param_1,uVar2 | uVar1 << 0x10,param_2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x222f0);
  (*pcVar3)();
}



/* Entry: 000222f0; end: 00022433;  */

void FUN_000222f0(ulong *param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uStack_68;
  ulong uStack_60;
  undefined8 uStack_50;
  
  if ((param_4 >> 0x3c & 1) == 0) {
    if ((param_4 >> 0x3d & 1) == 0) {
      if ((param_3 >> 0x3c & 1) == 0) {
        __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(param_3,param_4);
      }
                    /* WARNING: Could not recover jumptable at 0x00778464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___sSS18_uncheckedFromUTF8ySSSRys5UInt8VGFZ_0099af90)();
      return;
    }
    uStack_60 = param_4 & 0xffffffffffffff;
    uStack_68 = param_3;
    __sSS18_uncheckedFromUTF8ySSSRys5UInt8VGFZ
              ((long)&uStack_68 + ((ulong)param_1 >> 0x10),
               (param_2 >> 0x10) - ((ulong)param_1 >> 0x10));
  }
  else {
    puVar2 = param_1;
    __sSs8UTF8ViewV8distance4from2toSiSS5IndexV_AGtF(param_1,param_2,param_1,param_2);
    puVar3 = (ulong *)PTR___swiftEmptyArrayStorage_0099b8f0;
    if (puVar2 != (ulong *)0x0) {
      puVar3 = puVar2;
      FUN_00022434();
      puVar4 = &uStack_68;
      FUN_000224a4(puVar4,puVar3 + 4,puVar2,param_1,param_2,param_3,param_4);
      _swift_bridgeObjectRetain(param_4);
      _swift_bridgeObjectRelease(uStack_50);
      if (puVar4 != puVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x223f0);
        (*pcVar1)();
      }
    }
    __sSS18_uncheckedFromUTF8ySSSRys5UInt8VGFZ(puVar3 + 4,puVar3[2]);
    _swift_release(puVar3);
  }
  return;
}



/* Entry: 00022434; end: 000224a3;  */

undefined * FUN_00022434(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar1 = PTR___swiftEmptyArrayStorage_0099b8f0;
  if (param_2 != 0) {
    puVar1 = (undefined *)0xae65a8;
    func_0x000115a8(0xae65a8,&UNK_007cd3b0);
    _swift_allocObject();
    puVar2 = puVar1;
    _malloc_size();
    *(long *)(puVar1 + 0x10) = param_1;
    *(long *)(puVar1 + 0x18) = (long)puVar2 * 2 + -0x40;
  }
  return puVar1;
}



/* Entry: 000224a4; end: 0002269b;  */

long FUN_000224a4(ulong *param_1,undefined1 *param_2,long param_3,ulong param_4,ulong param_5,
                 ulong param_6,ulong param_7)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined1 uVar11;
  ulong uVar12;
  ulong uStack_70;
  ulong uStack_68;
  
  uVar3 = param_4;
  if (param_2 != (undefined1 *)0x0) {
    lVar7 = param_3;
    if (param_3 == 0) goto LAB_000224f8;
    if (param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x2269c);
      (*pcVar2)();
    }
    uVar12 = param_5 >> 0xe;
    if (param_4 >> 0xe != uVar12) {
      uVar6 = (uint)(param_6 >> 0x3b) & 1;
      if ((param_7 & 0x1000000000000000) == 0) {
        uVar6 = 1;
      }
      uVar9 = 4L << uVar6;
      uVar1 = param_6 & 0xffffffffffff;
      if ((param_7 & 0x2000000000000000) != 0) {
        uVar1 = param_7 >> 0x38 & 0xf;
      }
      lVar10 = 1;
      do {
        uVar8 = uVar3 & 0xc;
        uVar4 = uVar3;
        if (uVar8 == uVar9) {
          FUN_0002269c(uVar3,param_6,param_7);
        }
        if ((uVar4 >> 0xe < param_4 >> 0xe) || (uVar12 <= uVar4 >> 0xe)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x22694);
          (*pcVar2)();
        }
        if ((param_7 >> 0x3c & 1) == 0) {
          if ((param_7 >> 0x3d & 1) != 0) {
            uStack_70 = param_6;
            uStack_68 = param_7 & 0xffffffffffffff;
            uVar11 = *(undefined1 *)((long)&uStack_70 + (uVar4 >> 0x10));
            goto joined_r0x000225d4;
          }
          uVar5 = (param_7 & 0xfffffffffffffff) + 0x20;
          if ((param_6 >> 0x3c & 1) == 0) {
            uVar5 = param_6;
            __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(param_6,param_7);
          }
          uVar11 = *(undefined1 *)(uVar5 + (uVar4 >> 0x10));
          if (uVar8 == uVar9) goto LAB_00022608;
LAB_000225d8:
          if ((param_7 >> 0x3c & 1) == 0) goto LAB_000225dc;
LAB_00022620:
          if (uVar1 <= uVar3 >> 0x10) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x22698);
            (*pcVar2)();
          }
          __sSS8UTF8ViewV13_foreignIndex5afterSS0D0VAF_tF(uVar3,param_6,param_7);
        }
        else {
          __sSS8UTF8ViewV17_foreignSubscript8positions5UInt8VSS5IndexV_tF();
          uVar11 = (undefined1)uVar4;
joined_r0x000225d4:
          if (uVar8 != uVar9) goto LAB_000225d8;
LAB_00022608:
          FUN_0002269c(uVar3,param_6,param_7);
          if ((param_7 >> 0x3c & 1) != 0) goto LAB_00022620;
LAB_000225dc:
          uVar3 = (uVar3 & 0xffffffffffff0000) + 0x10004;
        }
        *param_2 = uVar11;
        lVar7 = param_3;
        if ((param_3 == lVar10) || (lVar7 = lVar10, uVar12 == uVar3 >> 0xe)) goto LAB_000224f8;
        lVar10 = lVar10 + 1;
        param_2 = param_2 + 1;
      } while( true );
    }
  }
  lVar7 = 0;
LAB_000224f8:
  *param_1 = param_4;
  param_1[1] = param_5;
  param_1[2] = param_6;
  param_1[3] = param_7;
  param_1[4] = uVar3;
  return lVar7;
}



/* Entry: 0002269c; end: 00022713;  */

ulong FUN_0002269c(ulong param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = param_1 >> 0xe & 3;
  if (((param_3 >> 0x3c & 1) == 0) || ((param_2 >> 0x3b & 1) != 0)) {
    uVar1 = 0xf;
    __sSS9UTF16ViewV5index_8offsetBySS5IndexVAF_SitF(0xf,param_1 >> 0x10);
    uVar2 = uVar1 + uVar3 * 0x10000 & 0xffffffffffff0000;
    if (uVar3 == 0) {
      uVar2 = uVar1 & 0xfffffffffffffffc | param_1 & 3;
    }
    uVar2 = uVar2 | 4;
  }
  else {
    uVar1 = 0xf;
    __sSS8UTF8ViewV13_foreignIndex_8offsetBySS0D0VAF_SitF(0xf);
    uVar2 = uVar1 + uVar3 * 0x10000 & 0xffffffffffff0000;
    if (uVar3 == 0) {
      uVar2 = uVar1 & 0xfffffffffffffffc | param_1 & 3;
    }
    uVar2 = uVar2 | 8;
  }
  return uVar2;
}



/* Entry: 00022714; end: 000227d3;  */

/* WARNING: Removing unreachable block (ram,0x00022abc) */

byte ** FUN_00022714(double param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  code *pcVar2;
  byte **ppbVar3;
  long lVar4;
  undefined1 *puVar5;
  ulong uVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte **ppbVar10;
  byte **ppbVar11;
  undefined1 uVar12;
  undefined8 *extraout_x8;
  byte *pbVar13;
  byte **ppbVar14;
  byte **ppbVar15;
  byte **unaff_x20;
  byte *pbVar16;
  undefined8 uVar17;
  byte ***pppbVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  byte **ppbVar22;
  undefined1 uVar23;
  undefined8 uVar24;
  uint uVar25;
  byte *pbVar26;
  double dVar27;
  undefined1 auStack_200 [104];
  undefined1 uStack_198;
  uint7 uStack_197;
  byte **ppbStack_190;
  byte **ppbStack_188;
  double dStack_180;
  byte *pbStack_178;
  undefined1 uStack_168;
  undefined7 uStack_167;
  undefined8 uStack_150;
  double dStack_148;
  undefined1 uStack_140;
  undefined7 uStack_13f;
  byte **ppbStack_138;
  byte *pbStack_130;
  ulong uStack_128;
  byte **ppbStack_120;
  double dStack_118;
  byte *pbStack_110;
  undefined1 uStack_100;
  undefined8 uStack_e8;
  double dStack_e0;
  undefined1 uStack_d8;
  byte **ppbStack_d0;
  byte **ppbStack_40;
  long lStack_38;
  
  pppbVar18 = &ppbStack_40;
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF();
  ppbStack_40 = (byte **)0x0;
  uVar20 = param_2;
  func_0x00785200();
  uVar12 = (undefined1)uVar20;
  _objc_release(param_2);
  ppbVar3 = ppbStack_40;
  if (unaff_x20 == (byte **)0x0) {
    _objc_retain();
    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
    _objc_release();
    _swift_willThrow();
  }
  else {
    _objc_retain();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
    return unaff_x20;
  }
  ___stack_chk_fail();
  _objc_retain();
  __s10Foundation4DateV21timeIntervalSince1970Sdvg();
  if (ppbVar3[2] == (byte *)0x0) {
LAB_000228cc:
    _swift_bridgeObjectRelease(ppbVar3);
    _objc_release(pppbVar18);
LAB_000228f4:
    lVar4 = 0;
    __s10Foundation4DateVMa();
    (**(code **)(*(long *)(lVar4 + -8) + 8))(param_3,lVar4);
LAB_00022910:
    _objc_release(pppbVar18);
    ppbVar11 = (byte **)pppbVar18;
  }
  else {
    _swift_bridgeObjectRetain(ppbVar3);
    lVar4 = 0x79656b5f6e;
    uVar6 = 0;
    FUN_000202c0(0x79656b5f6e);
    if ((uVar6 & 1) == 0) {
      _objc_release(pppbVar18);
      _swift_bridgeObjectRelease_n(ppbVar3,2);
      goto LAB_000228f4;
    }
    FUN_000232c8(ppbVar3[7] + lVar4 * 0x20,&pbStack_130);
    _swift_bridgeObjectRelease(ppbVar3);
    puVar1 = PTR___sypN_0099b8d8;
    puVar5 = &uStack_198;
    _swift_dynamicCast(puVar5,&pbStack_130,PTR___sypN_0099b8d8 + 8,PTR___sSSN_0099b040,6);
    ppbVar11 = ppbStack_190;
    if (((ulong)puVar5 & 1) == 0) goto LAB_000228cc;
    uVar6 = CONCAT71(uStack_197,uStack_198);
    if ((uVar6 == 0x65745f73696c6176) && (ppbStack_190 == (byte **)0xea00000000007473)) {
      _objc_release(pppbVar18);
      _swift_bridgeObjectRelease(0xea00000000007473);
LAB_000229bc:
      uVar23 = 2;
      if (ppbVar3[2] == (byte *)0x0) goto LAB_00022ae4;
LAB_000229e4:
      _swift_bridgeObjectRetain(ppbVar3);
      lVar4 = 0x62;
      uVar6 = 0;
      FUN_000202c0(0x62);
      if ((uVar6 & 1) == 0) {
        _swift_bridgeObjectRelease(ppbVar3);
        goto LAB_00022ae4;
      }
      FUN_000232c8(ppbVar3[7] + lVar4 * 0x20,&pbStack_130);
      _swift_bridgeObjectRelease(ppbVar3);
      puVar5 = &uStack_198;
      _swift_dynamicCast(puVar5,&pbStack_130,puVar1 + 8,PTR___sSSN_0099b040,6);
      ppbVar11 = ppbStack_190;
      if (((ulong)puVar5 & 1) == 0) goto LAB_00022ae4;
      pbVar8 = (byte *)CONCAT71(uStack_197,uStack_198);
      pbVar7 = pbVar8;
      __sSS5countSivg(pbVar8,ppbStack_190);
      if ((long)pbVar7 < 1) {
        lVar4 = 0;
        __s10Foundation4DateVMa();
        (**(code **)(*(long *)(lVar4 + -8) + 8))(param_3,lVar4);
        _objc_release(pppbVar18);
        _swift_bridgeObjectRelease(ppbVar3);
        _swift_bridgeObjectRelease(ppbVar11);
        goto LAB_00022928;
      }
      uVar20 = 0;
      ppbVar10 = ppbVar11;
      __s10Foundation4DataV13base64Encoded7optionsACSgSSh_So27NSDataBase64DecodingOptionsVtcfC();
      _swift_bridgeObjectRelease(ppbVar11);
      if (0xe < (ulong)ppbVar10 >> 0x3c) goto LAB_00022ae4;
      _objc_allocWithZone(PTR_PTR_00ac2968);
      func_0x00023304(pbVar8,ppbVar10);
      pbVar7 = pbVar8;
      FUN_00022714(pbVar8,ppbVar10);
      ppbVar15 = ppbVar10;
      FUN_00023344(pbVar8);
      if (pbVar7 == (byte *)0x0) {
        lVar4 = 0;
        __s10Foundation4DateVMa();
        (**(code **)(*(long *)(lVar4 + -8) + 8))(param_3,lVar4);
        _swift_bridgeObjectRelease(ppbVar3);
        FUN_00023344(pbVar8,ppbVar10);
        _objc_release(pppbVar18);
        ppbVar11 = (byte **)pppbVar18;
        goto LAB_00022928;
      }
      pbVar9 = pbVar7;
      func_0x00793320();
      pbVar13 = pbVar7;
      FUN_00023454();
      if (ppbVar3[2] == (byte *)0x0) {
LAB_00022c8c:
        lVar4 = 0;
        __s10Foundation4DateVMa();
        (**(code **)(*(long *)(lVar4 + -8) + 8))(param_3,lVar4);
        _swift_bridgeObjectRelease(ppbVar3);
LAB_00022cb4:
        _objc_release(pbVar7);
        FUN_00023344(pbVar8,ppbVar10);
      }
      else {
        _swift_bridgeObjectRetain(ppbVar3);
        lVar4 = 0x64695f6e;
        uVar6 = 0;
        FUN_000202c0(0x64695f6e);
        if ((uVar6 & 1) == 0) {
          _swift_bridgeObjectRelease(ppbVar3);
          goto LAB_00022c8c;
        }
        FUN_000232c8(ppbVar3[7] + lVar4 * 0x20,&pbStack_130);
        _swift_bridgeObjectRelease(ppbVar3);
        puVar5 = &uStack_198;
        _swift_dynamicCast(puVar5,&pbStack_130,PTR___sypN_0099b8d8 + 8,PTR___sSSN_0099b040,6);
        ppbVar22 = ppbStack_190;
        if (((ulong)puVar5 & 1) == 0) goto LAB_00022c8c;
        uVar24 = CONCAT71(uStack_197,uStack_198);
        if (ppbVar3[2] == (byte *)0x0) {
LAB_00022cdc:
          uStack_128 = 0;
          pbStack_130 = (byte *)0x0;
          dStack_118 = 0.0;
          ppbStack_120 = (byte **)0x0;
        }
        else {
          _swift_bridgeObjectRetain(ppbVar3);
          lVar4 = 0x73745f746e6573;
          uVar6 = 0;
          FUN_000202c0(0x73745f746e6573);
          if ((uVar6 & 1) == 0) {
            _swift_bridgeObjectRelease(ppbVar3);
            goto LAB_00022cdc;
          }
          FUN_000232c8(ppbVar3[7] + lVar4 * 0x20,&pbStack_130);
          _swift_bridgeObjectRelease(ppbVar3);
        }
        _swift_bridgeObjectRelease(ppbVar3);
        if (dStack_118 != 0.0) {
          puVar5 = &uStack_198;
          _swift_dynamicCast(puVar5,&pbStack_130,PTR___sypN_0099b8d8 + 8,PTR___sSSN_0099b040,6);
          if (((ulong)puVar5 & 1) != 0) {
            pbVar26 = (byte *)CONCAT71(uStack_197,uStack_198);
            ppbVar11 = (byte **)((ulong)pbVar26 & 0xffffffffffff);
            ppbVar14 = (byte **)((ulong)ppbStack_190 >> 0x38 & 0xf);
            ppbVar3 = ppbVar11;
            if (((ulong)ppbStack_190 & 0x2000000000000000) != 0) {
              ppbVar3 = ppbVar14;
            }
            if (ppbVar3 == (byte **)0x0) {
              _swift_bridgeObjectRelease(ppbStack_190);
LAB_00023010:
              pbVar16 = (byte *)0x0;
            }
            else {
              if (((ulong)ppbStack_190 >> 0x3c & 1) == 0) {
                if (((ulong)ppbStack_190 >> 0x3d & 1) == 0) {
                  if ((uStack_197 & 0x10000000000000) == 0) {
                    ppbVar11 = ppbStack_190;
                    __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg();
                  }
                  else {
                    pbVar26 = (byte *)(((ulong)ppbStack_190 & 0xfffffffffffffff) + 0x20);
                  }
                  if (*pbVar26 == 0x2b) {
                    if ((long)ppbVar11 < 1) {
                    /* WARNING: Does not return */
                      pcVar2 = (code *)SoftwareBreakpoint(1,0x23158);
                      (*pcVar2)();
                    }
                    puVar5 = (undefined1 *)((long)ppbVar11 + -1);
                    if (puVar5 == (undefined1 *)0x0) goto LAB_00022ff4;
                    pbVar16 = (byte *)0x0;
                    do {
                      pbVar26 = pbVar26 + 1;
                      if (((9 < *pbVar26 - 0x30) ||
                          (lVar4 = (long)pbVar16 * 10,
                          SUB168(SEXT816((long)pbVar16) * SEXT816(10),8) != lVar4 >> 0x3f)) ||
                         (uVar6 = (ulong)(byte)(*pbVar26 - 0x30), pbVar16 = (byte *)(lVar4 + uVar6),
                         SCARRY8(lVar4,uVar6))) goto LAB_00022ff4;
                      uVar25 = 0;
                      puVar5 = puVar5 + -1;
                    } while (puVar5 != (undefined1 *)0x0);
                  }
                  else if (*pbVar26 == 0x2d) {
                    if ((long)ppbVar11 < 1) {
                    /* WARNING: Does not return */
                      pcVar2 = (code *)SoftwareBreakpoint(1,0x23150);
                      (*pcVar2)();
                    }
                    puVar5 = (undefined1 *)((long)ppbVar11 + -1);
                    if (puVar5 == (undefined1 *)0x0) {
LAB_00022ff4:
                      uVar25 = 1;
                      pbVar16 = (byte *)0x0;
                    }
                    else {
                      pbVar16 = (byte *)0x0;
                      do {
                        pbVar26 = pbVar26 + 1;
                        if (((9 < *pbVar26 - 0x30) ||
                            (lVar4 = (long)pbVar16 * 10,
                            SUB168(SEXT816((long)pbVar16) * SEXT816(10),8) != lVar4 >> 0x3f)) ||
                           (uVar6 = (ulong)(byte)(*pbVar26 - 0x30),
                           pbVar16 = (byte *)(lVar4 - uVar6), SBORROW8(lVar4,uVar6)))
                        goto LAB_00022ff4;
                        uVar25 = 0;
                        puVar5 = puVar5 + -1;
                      } while (puVar5 != (undefined1 *)0x0);
                    }
                  }
                  else {
                    if (ppbVar11 == (byte **)0x0) goto LAB_00022ff4;
                    pbVar16 = (byte *)0x0;
                    if (pbVar26 == (byte *)0x0) {
                      uVar25 = 0;
                    }
                    else {
                      do {
                        if (((9 < *pbVar26 - 0x30) ||
                            (lVar4 = (long)pbVar16 * 10,
                            SUB168(SEXT816((long)pbVar16) * SEXT816(10),8) != lVar4 >> 0x3f)) ||
                           (uVar6 = (ulong)(byte)(*pbVar26 - 0x30),
                           pbVar16 = (byte *)(lVar4 + uVar6), SCARRY8(lVar4,uVar6)))
                        goto LAB_00022ff4;
                        uVar25 = 0;
                        ppbVar11 = (byte **)((long)ppbVar11 + -1);
                        pbVar26 = pbVar26 + 1;
                      } while (ppbVar11 != (byte **)0x0);
                    }
                  }
                }
                else {
                  uStack_128 = (ulong)ppbStack_190 & 0xffffffffffffff;
                  uVar25 = (uint)pbVar26 & 0xff;
                  pbStack_130 = pbVar26;
                  if (uVar25 == 0x2b) {
                    if (ppbVar14 == (byte **)0x0) {
                    /* WARNING: Does not return */
                      pcVar2 = (code *)SoftwareBreakpoint(1,0x2315c);
                      (*pcVar2)();
                    }
                    puVar5 = (undefined1 *)((long)ppbVar14 + -1);
                    if (puVar5 == (undefined1 *)0x0) goto LAB_00022ff4;
                    pbVar16 = (byte *)0x0;
                    pbVar26 = (byte *)((ulong)&pbStack_130 | 1);
                    do {
                      if (((9 < *pbVar26 - 0x30) ||
                          (lVar4 = (long)pbVar16 * 10,
                          SUB168(SEXT816((long)pbVar16) * SEXT816(10),8) != lVar4 >> 0x3f)) ||
                         (uVar6 = (ulong)(byte)(*pbVar26 - 0x30), pbVar16 = (byte *)(lVar4 + uVar6),
                         SCARRY8(lVar4,uVar6))) goto LAB_00022ff4;
                      uVar25 = 0;
                      puVar5 = puVar5 + -1;
                      pbVar26 = pbVar26 + 1;
                    } while (puVar5 != (undefined1 *)0x0);
                  }
                  else if (uVar25 == 0x2d) {
                    if (ppbVar14 == (byte **)0x0) {
                    /* WARNING: Does not return */
                      pcVar2 = (code *)SoftwareBreakpoint(1,0x23154);
                      (*pcVar2)();
                    }
                    puVar5 = (undefined1 *)((long)ppbVar14 + -1);
                    if (puVar5 == (undefined1 *)0x0) goto LAB_00022ff4;
                    pbVar16 = (byte *)0x0;
                    pbVar26 = (byte *)((ulong)&pbStack_130 | 1);
                    do {
                      if (((9 < *pbVar26 - 0x30) ||
                          (lVar4 = (long)pbVar16 * 10,
                          SUB168(SEXT816((long)pbVar16) * SEXT816(10),8) != lVar4 >> 0x3f)) ||
                         (uVar6 = (ulong)(byte)(*pbVar26 - 0x30), pbVar16 = (byte *)(lVar4 - uVar6),
                         SBORROW8(lVar4,uVar6))) goto LAB_00022ff4;
                      uVar25 = 0;
                      puVar5 = puVar5 + -1;
                      pbVar26 = pbVar26 + 1;
                    } while (puVar5 != (undefined1 *)0x0);
                  }
                  else {
                    if (ppbVar14 == (byte **)0x0) goto LAB_00022ff4;
                    pbVar16 = (byte *)0x0;
                    ppbVar3 = &pbStack_130;
                    do {
                      if (((9 < *(byte *)ppbVar3 - 0x30) ||
                          (lVar4 = (long)pbVar16 * 10,
                          SUB168(SEXT816((long)pbVar16) * SEXT816(10),8) != lVar4 >> 0x3f)) ||
                         (uVar6 = (ulong)(byte)(*(byte *)ppbVar3 - 0x30),
                         pbVar16 = (byte *)(lVar4 + uVar6), SCARRY8(lVar4,uVar6)))
                      goto LAB_00022ff4;
                      uVar25 = 0;
                      ppbVar14 = (byte **)((long)ppbVar14 + -1);
                      ppbVar3 = (byte **)((long)ppbVar3 + 1);
                    } while (ppbVar14 != (byte **)0x0);
                  }
                }
              }
              else {
                ppbVar3 = ppbStack_190;
                FUN_00021ed8(pbVar26,ppbStack_190,10);
                uVar25 = (uint)ppbVar3;
                pbVar16 = pbVar26;
              }
              _swift_bridgeObjectRelease(ppbStack_190);
              if ((uVar25 & 0xff) == 1) goto LAB_00023010;
            }
            pbVar26 = pbVar7;
            func_0x0078c6c0();
            _objc_release(pbVar7);
            FUN_00023344(pbVar8,ppbVar10);
            lVar4 = 0;
            __s10Foundation4DateVMa();
            (**(code **)(*(long *)(lVar4 + -8) + 8))(param_3,lVar4);
            if ((0 < (long)pbVar16) || (0 < (long)pbVar26)) {
              pbVar8 = pbVar26;
              if ((long)pbVar16 <= (long)pbVar26) {
                pbVar8 = pbVar16;
              }
              dVar27 = (double)(long)pbVar8;
              param_1 = param_1 * 1000.0;
              ppbStack_188 = ppbVar22;
              uStack_168 = SUB81(pbVar9,0);
              uVar21 = CONCAT71(uStack_197,uVar12);
              uVar17 = CONCAT71(uStack_167,uStack_168);
              uVar19 = CONCAT71(uStack_13f,uVar23);
              pbStack_130 = (byte *)CONCAT71(pbStack_130._1_7_,uVar12);
              ppbStack_120 = ppbVar22;
              uStack_198 = uVar12;
              dStack_180 = param_1;
              pbStack_178 = pbVar16;
              uStack_150 = uVar20;
              dStack_148 = dVar27;
              uStack_140 = uVar23;
              ppbStack_138 = (byte **)pppbVar18;
              dStack_118 = param_1;
              pbStack_110 = pbVar16;
              uStack_100 = uStack_168;
              uStack_e8 = uVar20;
              dStack_e0 = dVar27;
              uStack_d8 = uVar23;
              ppbStack_d0 = (byte **)pppbVar18;
              func_0x000233d8(&uStack_198,auStack_200);
              ppbVar11 = &pbStack_130;
              func_0x0002340c(ppbVar11);
              goto LAB_0002294c;
            }
            _swift_bridgeObjectRelease(ppbVar22);
            goto LAB_00022cc4;
          }
          lVar4 = 0;
          __s10Foundation4DateVMa();
          (**(code **)(*(long *)(lVar4 + -8) + 8))(param_3,lVar4);
          _swift_bridgeObjectRelease(ppbVar22);
          goto LAB_00022cb4;
        }
        lVar4 = 0;
        __s10Foundation4DateVMa();
        (**(code **)(*(long *)(lVar4 + -8) + 8))(param_3,lVar4);
        _swift_bridgeObjectRelease(ppbVar22);
        _objc_release(pbVar7);
        FUN_00023344(pbVar8,ppbVar10);
        func_0x00023398(&pbStack_130,0xae65a0,&UNK_007ce270);
      }
LAB_00022cc4:
      func_0x00013b20(pbVar13,ppbVar15,uVar20);
      goto LAB_00022910;
    }
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (uVar6,ppbStack_190,0x65745f73696c6176,0xea00000000007473,0);
    _swift_bridgeObjectRelease(ppbVar11);
    if ((uVar6 & 1) != 0) {
      _objc_release();
      goto LAB_000229bc;
    }
    ppbVar11 = (byte **)pppbVar18;
    func_0x00793340();
    uVar23 = SUB81(ppbVar11,0);
    _objc_release(pppbVar18);
    if (ppbVar3[2] != (byte *)0x0) goto LAB_000229e4;
LAB_00022ae4:
    lVar4 = 0;
    __s10Foundation4DateVMa();
    (**(code **)(*(long *)(lVar4 + -8) + 8))(param_3,lVar4);
    _objc_release(pppbVar18);
    _swift_bridgeObjectRelease(ppbVar3);
    ppbVar11 = ppbVar3;
  }
LAB_00022928:
  pbVar16 = (byte *)0x0;
  uVar24 = 0;
  ppbVar22 = (byte **)0x0;
  uVar21 = 0;
  pbVar26 = (byte *)0x0;
  uVar17 = 0;
  pbVar13 = (byte *)0x0;
  ppbVar15 = (byte **)0x0;
  uVar20 = 0;
  uVar19 = 0;
  pppbVar18 = (byte ***)0x0;
  param_1 = 0.0;
  dVar27 = 0.0;
LAB_0002294c:
  *extraout_x8 = uVar21;
  extraout_x8[1] = uVar24;
  extraout_x8[2] = ppbVar22;
  extraout_x8[3] = param_1;
  extraout_x8[4] = pbVar16;
  extraout_x8[5] = pbVar26;
  extraout_x8[6] = uVar17;
  extraout_x8[7] = pbVar13;
  extraout_x8[8] = ppbVar15;
  extraout_x8[9] = uVar20;
  extraout_x8[10] = dVar27;
  extraout_x8[0xb] = uVar19;
  extraout_x8[0xc] = pppbVar18;
  return ppbVar11;
}



/* Entry: 000227d4; end: 0002315b;  */

/* WARNING: Removing unreachable block (ram,0x00022abc) */

void FUN_000227d4(undefined8 *param_1,double param_2,long param_3,undefined8 param_4,
                 undefined1 param_5,undefined8 param_6)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  ulong uVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  byte *pbVar12;
  ulong uVar13;
  ulong uVar14;
  byte **ppbVar15;
  long lVar16;
  byte *pbVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined1 uVar22;
  undefined8 uVar23;
  uint uVar24;
  byte *pbVar25;
  double dVar26;
  undefined1 auStack_1c0 [104];
  undefined1 uStack_158;
  uint7 uStack_157;
  ulong uStack_150;
  ulong uStack_148;
  double dStack_140;
  byte *pbStack_138;
  undefined1 uStack_128;
  undefined7 uStack_127;
  undefined8 uStack_110;
  double dStack_108;
  undefined1 uStack_100;
  undefined7 uStack_ff;
  undefined8 uStack_f8;
  byte *pbStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  double dStack_d8;
  byte *pbStack_d0;
  undefined1 uStack_c0;
  undefined8 uStack_a8;
  double dStack_a0;
  undefined1 uStack_98;
  undefined8 uStack_90;
  
  _objc_retain();
  __s10Foundation4DateV21timeIntervalSince1970Sdvg();
  if (*(long *)(param_3 + 0x10) == 0) {
LAB_000228cc:
    _swift_bridgeObjectRelease(param_3);
    _objc_release(param_6);
LAB_000228f4:
    lVar3 = 0;
    __s10Foundation4DateVMa();
    (**(code **)(*(long *)(lVar3 + -8) + 8))(param_4,lVar3);
LAB_00022910:
    _objc_release(param_6);
  }
  else {
    _swift_bridgeObjectRetain(param_3);
    lVar3 = 0x79656b5f6e;
    uVar14 = 0;
    FUN_000202c0(0x79656b5f6e);
    if ((uVar14 & 1) == 0) {
      _objc_release(param_6);
      _swift_bridgeObjectRelease_n(param_3,2);
      goto LAB_000228f4;
    }
    FUN_000232c8(*(long *)(param_3 + 0x38) + lVar3 * 0x20,&pbStack_f0);
    _swift_bridgeObjectRelease(param_3);
    puVar1 = PTR___sypN_0099b8d8;
    puVar4 = &uStack_158;
    _swift_dynamicCast(puVar4,&pbStack_f0,PTR___sypN_0099b8d8 + 8,PTR___sSSN_0099b040,6);
    uVar14 = uStack_150;
    if (((ulong)puVar4 & 1) == 0) goto LAB_000228cc;
    uVar5 = CONCAT71(uStack_157,uStack_158);
    if ((uVar5 == 0x65745f73696c6176) && (uStack_150 == 0xea00000000007473)) {
      _objc_release(param_6);
      _swift_bridgeObjectRelease(0xea00000000007473);
LAB_000229bc:
      uVar22 = 2;
      if (*(long *)(param_3 + 0x10) == 0) goto LAB_00022ae4;
LAB_000229e4:
      _swift_bridgeObjectRetain(param_3);
      lVar3 = 0x62;
      uVar14 = 0;
      FUN_000202c0(0x62);
      if ((uVar14 & 1) == 0) {
        _swift_bridgeObjectRelease(param_3);
        goto LAB_00022ae4;
      }
      FUN_000232c8(*(long *)(param_3 + 0x38) + lVar3 * 0x20,&pbStack_f0);
      _swift_bridgeObjectRelease(param_3);
      puVar4 = &uStack_158;
      _swift_dynamicCast(puVar4,&pbStack_f0,puVar1 + 8,PTR___sSSN_0099b040,6);
      uVar14 = uStack_150;
      if (((ulong)puVar4 & 1) == 0) goto LAB_00022ae4;
      pbVar7 = (byte *)CONCAT71(uStack_157,uStack_158);
      pbVar6 = pbVar7;
      __sSS5countSivg(pbVar7,uStack_150);
      if ((long)pbVar6 < 1) {
        lVar3 = 0;
        __s10Foundation4DateVMa();
        (**(code **)(*(long *)(lVar3 + -8) + 8))(param_4,lVar3);
        _objc_release(param_6);
        _swift_bridgeObjectRelease(param_3);
        _swift_bridgeObjectRelease(uVar14);
        goto LAB_00022928;
      }
      uVar20 = 0;
      uVar5 = uVar14;
      __s10Foundation4DataV13base64Encoded7optionsACSgSSh_So27NSDataBase64DecodingOptionsVtcfC();
      _swift_bridgeObjectRelease(uVar14);
      if (0xe < uVar5 >> 0x3c) goto LAB_00022ae4;
      _objc_allocWithZone(PTR_PTR_00ac2968);
      func_0x00023304(pbVar7,uVar5);
      pbVar6 = pbVar7;
      FUN_00022714(pbVar7,uVar5);
      uVar14 = uVar5;
      FUN_00023344(pbVar7);
      if (pbVar6 == (byte *)0x0) {
        lVar3 = 0;
        __s10Foundation4DateVMa();
        (**(code **)(*(long *)(lVar3 + -8) + 8))(param_4,lVar3);
        _swift_bridgeObjectRelease(param_3);
        FUN_00023344(pbVar7,uVar5);
        _objc_release(param_6);
        goto LAB_00022928;
      }
      pbVar8 = pbVar6;
      func_0x00793320();
      pbVar12 = pbVar6;
      FUN_00023454();
      if (*(long *)(param_3 + 0x10) == 0) {
LAB_00022c8c:
        lVar3 = 0;
        __s10Foundation4DateVMa();
        (**(code **)(*(long *)(lVar3 + -8) + 8))(param_4,lVar3);
        _swift_bridgeObjectRelease(param_3);
LAB_00022cb4:
        _objc_release(pbVar6);
        FUN_00023344(pbVar7,uVar5);
      }
      else {
        _swift_bridgeObjectRetain(param_3);
        lVar3 = 0x64695f6e;
        uVar9 = 0;
        FUN_000202c0(0x64695f6e);
        if ((uVar9 & 1) == 0) {
          _swift_bridgeObjectRelease(param_3);
          goto LAB_00022c8c;
        }
        FUN_000232c8(*(long *)(param_3 + 0x38) + lVar3 * 0x20,&pbStack_f0);
        _swift_bridgeObjectRelease(param_3);
        puVar4 = &uStack_158;
        _swift_dynamicCast(puVar4,&pbStack_f0,PTR___sypN_0099b8d8 + 8,PTR___sSSN_0099b040,6);
        uVar9 = uStack_150;
        if (((ulong)puVar4 & 1) == 0) goto LAB_00022c8c;
        uVar23 = CONCAT71(uStack_157,uStack_158);
        if (*(long *)(param_3 + 0x10) == 0) {
LAB_00022cdc:
          uStack_e8 = 0;
          pbStack_f0 = (byte *)0x0;
          dStack_d8 = 0.0;
          uStack_e0 = 0;
        }
        else {
          _swift_bridgeObjectRetain(param_3);
          lVar3 = 0x73745f746e6573;
          uVar10 = 0;
          FUN_000202c0(0x73745f746e6573);
          if ((uVar10 & 1) == 0) {
            _swift_bridgeObjectRelease(param_3);
            goto LAB_00022cdc;
          }
          FUN_000232c8(*(long *)(param_3 + 0x38) + lVar3 * 0x20,&pbStack_f0);
          _swift_bridgeObjectRelease(param_3);
        }
        _swift_bridgeObjectRelease(param_3);
        if (dStack_d8 != 0.0) {
          puVar4 = &uStack_158;
          _swift_dynamicCast(puVar4,&pbStack_f0,PTR___sypN_0099b8d8 + 8,PTR___sSSN_0099b040,6);
          if (((ulong)puVar4 & 1) != 0) {
            pbVar25 = (byte *)CONCAT71(uStack_157,uStack_158);
            uVar11 = (ulong)pbVar25 & 0xffffffffffff;
            uVar13 = uStack_150 >> 0x38 & 0xf;
            uVar10 = uVar11;
            if ((uStack_150 & 0x2000000000000000) != 0) {
              uVar10 = uVar13;
            }
            if (uVar10 == 0) {
              _swift_bridgeObjectRelease(uStack_150);
LAB_00023010:
              pbVar17 = (byte *)0x0;
            }
            else {
              if ((uStack_150 >> 0x3c & 1) == 0) {
                if ((uStack_150 >> 0x3d & 1) == 0) {
                  if ((uStack_157 & 0x10000000000000) == 0) {
                    uVar11 = uStack_150;
                    __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg();
                  }
                  else {
                    pbVar25 = (byte *)((uStack_150 & 0xfffffffffffffff) + 0x20);
                  }
                  if (*pbVar25 == 0x2b) {
                    if ((long)uVar11 < 1) {
                    /* WARNING: Does not return */
                      pcVar2 = (code *)SoftwareBreakpoint(1,0x23158);
                      (*pcVar2)();
                    }
                    lVar3 = uVar11 - 1;
                    if (lVar3 == 0) goto LAB_00022ff4;
                    pbVar17 = (byte *)0x0;
                    do {
                      pbVar25 = pbVar25 + 1;
                      if (((9 < *pbVar25 - 0x30) ||
                          (lVar16 = (long)pbVar17 * 10,
                          SUB168(SEXT816((long)pbVar17) * SEXT816(10),8) != lVar16 >> 0x3f)) ||
                         (uVar10 = (ulong)(byte)(*pbVar25 - 0x30),
                         pbVar17 = (byte *)(lVar16 + uVar10), SCARRY8(lVar16,uVar10)))
                      goto LAB_00022ff4;
                      uVar24 = 0;
                      lVar3 = lVar3 + -1;
                    } while (lVar3 != 0);
                  }
                  else if (*pbVar25 == 0x2d) {
                    if ((long)uVar11 < 1) {
                    /* WARNING: Does not return */
                      pcVar2 = (code *)SoftwareBreakpoint(1,0x23150);
                      (*pcVar2)();
                    }
                    lVar3 = uVar11 - 1;
                    if (lVar3 == 0) {
LAB_00022ff4:
                      uVar24 = 1;
                      pbVar17 = (byte *)0x0;
                    }
                    else {
                      pbVar17 = (byte *)0x0;
                      do {
                        pbVar25 = pbVar25 + 1;
                        if (((9 < *pbVar25 - 0x30) ||
                            (lVar16 = (long)pbVar17 * 10,
                            SUB168(SEXT816((long)pbVar17) * SEXT816(10),8) != lVar16 >> 0x3f)) ||
                           (uVar10 = (ulong)(byte)(*pbVar25 - 0x30),
                           pbVar17 = (byte *)(lVar16 - uVar10), SBORROW8(lVar16,uVar10)))
                        goto LAB_00022ff4;
                        uVar24 = 0;
                        lVar3 = lVar3 + -1;
                      } while (lVar3 != 0);
                    }
                  }
                  else {
                    if (uVar11 == 0) goto LAB_00022ff4;
                    pbVar17 = (byte *)0x0;
                    if (pbVar25 == (byte *)0x0) {
                      uVar24 = 0;
                    }
                    else {
                      do {
                        if (((9 < *pbVar25 - 0x30) ||
                            (lVar3 = (long)pbVar17 * 10,
                            SUB168(SEXT816((long)pbVar17) * SEXT816(10),8) != lVar3 >> 0x3f)) ||
                           (uVar10 = (ulong)(byte)(*pbVar25 - 0x30),
                           pbVar17 = (byte *)(lVar3 + uVar10), SCARRY8(lVar3,uVar10)))
                        goto LAB_00022ff4;
                        uVar24 = 0;
                        uVar11 = uVar11 - 1;
                        pbVar25 = pbVar25 + 1;
                      } while (uVar11 != 0);
                    }
                  }
                }
                else {
                  uStack_e8 = uStack_150 & 0xffffffffffffff;
                  uVar24 = (uint)pbVar25 & 0xff;
                  pbStack_f0 = pbVar25;
                  if (uVar24 == 0x2b) {
                    if (uVar13 == 0) {
                    /* WARNING: Does not return */
                      pcVar2 = (code *)SoftwareBreakpoint(1,0x2315c);
                      (*pcVar2)();
                    }
                    lVar3 = uVar13 - 1;
                    if (lVar3 == 0) goto LAB_00022ff4;
                    pbVar17 = (byte *)0x0;
                    pbVar25 = (byte *)((ulong)&pbStack_f0 | 1);
                    do {
                      if (((9 < *pbVar25 - 0x30) ||
                          (lVar16 = (long)pbVar17 * 10,
                          SUB168(SEXT816((long)pbVar17) * SEXT816(10),8) != lVar16 >> 0x3f)) ||
                         (uVar10 = (ulong)(byte)(*pbVar25 - 0x30),
                         pbVar17 = (byte *)(lVar16 + uVar10), SCARRY8(lVar16,uVar10)))
                      goto LAB_00022ff4;
                      uVar24 = 0;
                      lVar3 = lVar3 + -1;
                      pbVar25 = pbVar25 + 1;
                    } while (lVar3 != 0);
                  }
                  else if (uVar24 == 0x2d) {
                    if (uVar13 == 0) {
                    /* WARNING: Does not return */
                      pcVar2 = (code *)SoftwareBreakpoint(1,0x23154);
                      (*pcVar2)();
                    }
                    lVar3 = uVar13 - 1;
                    if (lVar3 == 0) goto LAB_00022ff4;
                    pbVar17 = (byte *)0x0;
                    pbVar25 = (byte *)((ulong)&pbStack_f0 | 1);
                    do {
                      if (((9 < *pbVar25 - 0x30) ||
                          (lVar16 = (long)pbVar17 * 10,
                          SUB168(SEXT816((long)pbVar17) * SEXT816(10),8) != lVar16 >> 0x3f)) ||
                         (uVar10 = (ulong)(byte)(*pbVar25 - 0x30),
                         pbVar17 = (byte *)(lVar16 - uVar10), SBORROW8(lVar16,uVar10)))
                      goto LAB_00022ff4;
                      uVar24 = 0;
                      lVar3 = lVar3 + -1;
                      pbVar25 = pbVar25 + 1;
                    } while (lVar3 != 0);
                  }
                  else {
                    if (uVar13 == 0) goto LAB_00022ff4;
                    pbVar17 = (byte *)0x0;
                    ppbVar15 = &pbStack_f0;
                    do {
                      if (((9 < *(byte *)ppbVar15 - 0x30) ||
                          (lVar3 = (long)pbVar17 * 10,
                          SUB168(SEXT816((long)pbVar17) * SEXT816(10),8) != lVar3 >> 0x3f)) ||
                         (uVar10 = (ulong)(byte)(*(byte *)ppbVar15 - 0x30),
                         pbVar17 = (byte *)(lVar3 + uVar10), SCARRY8(lVar3,uVar10)))
                      goto LAB_00022ff4;
                      uVar24 = 0;
                      uVar13 = uVar13 - 1;
                      ppbVar15 = (byte **)((long)ppbVar15 + 1);
                    } while (uVar13 != 0);
                  }
                }
              }
              else {
                uVar10 = uStack_150;
                FUN_00021ed8(pbVar25,uStack_150,10);
                uVar24 = (uint)uVar10;
                pbVar17 = pbVar25;
              }
              _swift_bridgeObjectRelease(uStack_150);
              if ((uVar24 & 0xff) == 1) goto LAB_00023010;
            }
            pbVar25 = pbVar6;
            func_0x0078c6c0();
            _objc_release(pbVar6);
            FUN_00023344(pbVar7,uVar5);
            lVar3 = 0;
            __s10Foundation4DateVMa();
            (**(code **)(*(long *)(lVar3 + -8) + 8))(param_4,lVar3);
            if ((0 < (long)pbVar17) || (0 < (long)pbVar25)) {
              pbVar7 = pbVar25;
              if ((long)pbVar17 <= (long)pbVar25) {
                pbVar7 = pbVar17;
              }
              dVar26 = (double)(long)pbVar7;
              param_2 = param_2 * 1000.0;
              uStack_148 = uVar9;
              uStack_128 = SUB81(pbVar8,0);
              uVar21 = CONCAT71(uStack_157,param_5);
              uVar18 = CONCAT71(uStack_127,uStack_128);
              uVar19 = CONCAT71(uStack_ff,uVar22);
              pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,param_5);
              uStack_e0 = uVar9;
              uStack_158 = param_5;
              dStack_140 = param_2;
              pbStack_138 = pbVar17;
              uStack_110 = uVar20;
              dStack_108 = dVar26;
              uStack_100 = uVar22;
              uStack_f8 = param_6;
              dStack_d8 = param_2;
              pbStack_d0 = pbVar17;
              uStack_c0 = uStack_128;
              uStack_a8 = uVar20;
              dStack_a0 = dVar26;
              uStack_98 = uVar22;
              uStack_90 = param_6;
              func_0x000233d8(&uStack_158,auStack_1c0);
              func_0x0002340c(&pbStack_f0);
              goto LAB_0002294c;
            }
            _swift_bridgeObjectRelease(uVar9);
            goto LAB_00022cc4;
          }
          lVar3 = 0;
          __s10Foundation4DateVMa();
          (**(code **)(*(long *)(lVar3 + -8) + 8))(param_4,lVar3);
          _swift_bridgeObjectRelease(uVar9);
          goto LAB_00022cb4;
        }
        lVar3 = 0;
        __s10Foundation4DateVMa();
        (**(code **)(*(long *)(lVar3 + -8) + 8))(param_4,lVar3);
        _swift_bridgeObjectRelease(uVar9);
        _objc_release(pbVar6);
        FUN_00023344(pbVar7,uVar5);
        func_0x00023398(&pbStack_f0,0xae65a0,&UNK_007ce270);
      }
LAB_00022cc4:
      func_0x00013b20(pbVar12,uVar14,uVar20);
      goto LAB_00022910;
    }
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (uVar5,uStack_150,0x65745f73696c6176,0xea00000000007473,0);
    _swift_bridgeObjectRelease(uVar14);
    if ((uVar5 & 1) != 0) {
      _objc_release();
      goto LAB_000229bc;
    }
    uVar20 = param_6;
    func_0x00793340();
    uVar22 = (undefined1)uVar20;
    _objc_release(param_6);
    if (*(long *)(param_3 + 0x10) != 0) goto LAB_000229e4;
LAB_00022ae4:
    lVar3 = 0;
    __s10Foundation4DateVMa();
    (**(code **)(*(long *)(lVar3 + -8) + 8))(param_4,lVar3);
    _objc_release(param_6);
    _swift_bridgeObjectRelease(param_3);
  }
LAB_00022928:
  pbVar17 = (byte *)0x0;
  uVar23 = 0;
  uVar9 = 0;
  uVar21 = 0;
  pbVar25 = (byte *)0x0;
  uVar18 = 0;
  pbVar12 = (byte *)0x0;
  uVar14 = 0;
  uVar20 = 0;
  uVar19 = 0;
  param_6 = 0;
  param_2 = 0.0;
  dVar26 = 0.0;
LAB_0002294c:
  *param_1 = uVar21;
  param_1[1] = uVar23;
  param_1[2] = uVar9;
  param_1[3] = param_2;
  param_1[4] = pbVar17;
  param_1[5] = pbVar25;
  param_1[6] = uVar18;
  param_1[7] = pbVar12;
  param_1[8] = uVar14;
  param_1[9] = uVar20;
  param_1[10] = dVar26;
  param_1[0xb] = uVar19;
  param_1[0xc] = param_6;
  return;
}



/* Entry: 0002315c; end: 00023283;  */

uint FUN_0002315c(char *param_1,char *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if (*param_1 == *param_2) {
    uVar1 = *(ulong *)(param_1 + 8);
    if (((((uVar1 == *(ulong *)(param_2 + 8) &&
            *(long *)(param_1 + 0x10) == *(long *)(param_2 + 0x10)) ||
          (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                     (uVar1,*(long *)(param_1 + 0x10),*(ulong *)(param_2 + 8),
                      *(long *)(param_2 + 0x10),0), (uVar1 & 1) != 0)) &&
         (*(double *)(param_1 + 0x18) == *(double *)(param_2 + 0x18))) &&
        ((*(long *)(param_1 + 0x20) == *(long *)(param_2 + 0x20) &&
         (*(long *)(param_1 + 0x28) == *(long *)(param_2 + 0x28))))) &&
       (((param_1[0x30] ^ param_2[0x30]) & 1U) == 0)) {
      uVar1 = *(ulong *)(param_1 + 0x38);
      FUN_000235a4(uVar1,*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                   *(undefined8 *)(param_2 + 0x38),*(undefined8 *)(param_2 + 0x40),
                   *(undefined8 *)(param_2 + 0x48));
      if ((((uVar1 & 1) != 0) && (*(double *)(param_1 + 0x50) == *(double *)(param_2 + 0x50))) &&
         (param_1[0x58] == param_2[0x58])) {
        FUN_00023284(0);
        uVar2 = *(undefined8 *)(param_1 + 0x60);
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar2,*(undefined8 *)(param_2 + 0x60));
        return (uint)uVar2 & 1;
      }
    }
  }
  return 0;
}



/* Entry: 00023284; end: 000232c7;  */

void FUN_00023284(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae6598 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___NSObject_00ac2b58;
  _objc_opt_self();
  _swift_getObjCClassMetadata();
  puRam0000000000ae6598 = puVar1;
  return;
}



/* Entry: 000232c8; end: 00023343;  */

long FUN_000232c8(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 00023344; end: 00023357;  */

void FUN_00023344(undefined8 param_1,ulong param_2)

{
  uint uVar1;
  
  if (0xe < param_2 >> 0x3c) {
    return;
  }
  uVar1 = (uint)(param_2 >> 0x3e);
  if (uVar1 != 1) {
    if (uVar1 != 2) {
      return;
    }
    _swift_release();
  }
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(param_2 & 0x3fffffffffffffff);
  return;
}


