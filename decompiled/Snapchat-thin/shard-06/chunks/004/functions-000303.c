/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1048d7d48; end: 1048d7d5b;  */

bool FUN_1048d7d48(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1048d7d5c; end: 1048d7e33;  */

void FUN_1048d7d5c(void)

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



/* Entry: 1048d7e34; end: 1048d7e57;  */

void FUN_1048d7e34(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1048d7e58; end: 1048d7e97;  */

void FUN_1048d7e58(void)

{
  undefined *puVar1;
  
  if (puRam000000011309bf08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd466f0;
  _swift_getWitnessTable(&UNK_10dd466f0,&UNK_1107b58a8);
  puRam000000011309bf08 = puVar1;
  return;
}



/* Entry: 1048d7e98; end: 1048d7ea7;  */

undefined1  [16] FUN_1048d7e98(void)

{
  return ZEXT816(0x1107b58a8);
}



/* Entry: 1048d7ea8; end: 1048d7ec7; -[_TtC9SCFlipper17SCFlipperServices flipper] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d7ea8(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_11309bf10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048d7ec8; end: 1048d7f13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d7ec8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11309bf10) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1048d7f14; end: 1048d7f6b; -[_TtC9SCFlipper17SCFlipperServices initWithFlipper:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d7f14(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  *(undefined8 *)(param_1 + _DAT_11309bf10) = param_3;
  lVar2 = param_1;
  func_0x000100093ac4();
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _swift_unknownObjectRetain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}



/* Entry: 1048d7f6c; end: 1048d7fc7; -[_TtC9SCFlipper17SCFlipperServices init] */

void FUN_1048d7f6c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("SCFlipper.SCFlipperServices",0x1b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1048d7f98);
  (*pcVar1)();
}



/* Entry: 1048d7fc8; end: 1048d7fd7; -[_TtC9SCFlipper17SCFlipperServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d7fc8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_11309bf10));
  return;
}



/* Entry: 1048d7fd8; end: 1048d800b;  */

void FUN_1048d7fd8(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1048d800c; end: 1048d80bf; -[SCTracer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1048d800c(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_11309bf50));
  param_1 = param_1 + _DAT_11309bf58;
  _swift_unknownObjectWeakDestroy();
  return param_1;
}



/* Entry: 1048d80c0; end: 1048d80db;  */

void FUN_1048d80c0(long param_1,long param_2)

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



/* Entry: 1048d80dc; end: 1048d812b;  */

undefined1  [16] FUN_1048d80dc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  (**(code **)(param_1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  _objc_release(param_1);
  auVar2._8_8_ = param_2;
  auVar2._0_8_ = lVar1;
  return auVar2;
}



/* Entry: 1048d812c; end: 1048d816f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d812c(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = unaff_x20 + _DAT_11309bf58;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 != 0) {
    func_0x00010bf17be0();
    _swift_unknownObjectRelease(lVar1);
  }
  return;
}



/* Entry: 1048d8170; end: 1048d8253; -[SCTracer beginAsyncTraceWithoutName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d8170(long param_1)

{
  param_1 = param_1 + _DAT_11309bf58;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    func_0x00010bf17be0();
    _swift_unknownObjectRelease(param_1);
  }
  return;
}



/* Entry: 1048d8254; end: 1048d82a3; -[SCTracer cancelAsyncTrace:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d8254(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    param_1 = param_1 + _DAT_11309bf58;
    _swift_unknownObjectWeakLoadStrong();
    if (param_1 != 0) {
      func_0x00010bf2dea0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 1048d82a4; end: 1048d8333;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d82a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long unaff_x20;
  
  if (param_1 != 0) {
    lVar1 = unaff_x20 + _DAT_11309bf58;
    _swift_unknownObjectWeakLoadStrong();
    if (lVar1 != 0) {
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_2,param_3);
      func_0x00010bf94200(lVar1);
      _swift_unknownObjectRelease(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_2);
      return;
    }
  }
  return;
}



/* Entry: 1048d8334; end: 1048d8397; -[SCTracer endAsyncTrace:withName:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d8334(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    param_1 = param_1 + _DAT_11309bf58;
    _swift_unknownObjectWeakLoadStrong();
    if (param_1 != 0) {
      func_0x00010bf94200();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 1048d8398; end: 1048d83e3; -[SCTracer logPerfEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d8398(long param_1)

{
  param_1 = param_1 + _DAT_11309bf58;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    func_0x00010c0ac1e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
    return;
  }
  return;
}



/* Entry: 1048d83e4; end: 1048d8427; -[SCTracer emitUnclosedAsyncSpans] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d83e4(long param_1)

{
  param_1 = param_1 + _DAT_11309bf58;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    func_0x00010bf8e180();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
    return;
  }
  return;
}



/* Entry: 1048d8428; end: 1048d84bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d8428(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = unaff_x20 + _DAT_11309bf58;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 != 0) {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_3,param_4);
    func_0x00010c067040(lVar1);
    _swift_unknownObjectRelease(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  return;
}



/* Entry: 1048d84bc; end: 1048d8523; -[SCTracer insertAsyncSpanWithSpanStartTimeUs:spanEndTimeUs:name:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d84bc(long param_1)

{
  param_1 = param_1 + _DAT_11309bf58;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    func_0x00010c0665e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
    return;
  }
  return;
}



/* Entry: 1048d8524; end: 1048d856f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d8524(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = unaff_x20 + _DAT_11309bf58;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 != 0) {
    func_0x00010bf2f160();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
    return;
  }
  return;
}



/* Entry: 1048d8570; end: 1048d85b3; -[SCTracer isTracing] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d8570(long param_1)

{
  param_1 = param_1 + _DAT_11309bf58;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    func_0x00010c081620();
    _swift_unknownObjectRelease(param_1);
  }
  return;
}



/* Entry: 1048d85b4; end: 1048d865f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d85b4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar3 = _DAT_11309bf58;
  lVar1 = unaff_x20 + _DAT_11309bf58;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 != 0) {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_1,param_2);
    lVar2 = lVar1;
    func_0x00010bf17b60();
    _swift_unknownObjectRelease(lVar1);
    _objc_release(param_1);
    if (lVar2 != 0) {
      lVar3 = unaff_x20 + lVar3;
      _swift_unknownObjectWeakLoadStrong();
      if (lVar3 != 0) {
        func_0x00010bf941e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar3);
        return;
      }
    }
  }
  return;
}



/* Entry: 1048d8660; end: 1048d866b; -[SCTracer putAsyncInstant:] */

void FUN_1048d8660(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_1048d85b4(param_3,param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1048d866c; end: 1048d889f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d866c(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar3 = _DAT_11309bf58;
  lVar1 = unaff_x20 + _DAT_11309bf58;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 == 0) {
    (*param_4)(param_1);
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_2,param_3);
    lVar2 = lVar1;
    func_0x00010bf18ba0();
    _swift_unknownObjectRelease(lVar1);
    _objc_release(param_2);
    (*param_4)(param_1);
    if (lVar2 != 0) {
      lVar3 = unaff_x20 + lVar3;
      _swift_unknownObjectWeakLoadStrong();
      if (lVar3 != 0) {
        func_0x00010bf95660();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar3);
        return;
      }
    }
  }
  return;
}



/* Entry: 1048d88a0; end: 1048d88f3; -[SCTracer traceWithNameBlock:operation:] */

void FUN_1048d88a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_50 = param_4;
  uStack_30 = param_3;
  _objc_retain();
  func_0x0001048d8744(0x1048d8ab0,auStack_40,&UNK_100521ab4,auStack_60);
  _objc_release(param_1);
  return;
}



/* Entry: 1048d88f4; end: 1048d89cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d88f4(long param_1,ulong param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  long lVar2;
  long lStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11309bf50);
  _swift_retain(uVar1);
  func_0x0001048d8e34(&lStack_38);
  _swift_release(uVar1);
  if (*(long *)(lStack_38 + 0x10) == 0) {
    _swift_bridgeObjectRelease(lStack_38);
  }
  else {
    _swift_bridgeObjectRetain(lStack_38);
    func_0x000100029284();
    if ((param_2 & 1) == 0) {
      _swift_bridgeObjectRelease_n(lStack_38,2);
    }
    else {
      lVar2 = *(long *)(*(long *)(lStack_38 + 0x38) + param_1 * 8);
      _swift_bridgeObjectRelease_n(lStack_38,2);
      if (lVar2 != 0) {
        lVar2 = unaff_x20 + _DAT_11309bf58;
        _swift_unknownObjectWeakLoadStrong();
        if (lVar2 != 0) {
          func_0x00010bf941e0();
          _swift_unknownObjectRelease(lVar2);
        }
      }
    }
  }
  return;
}



/* Entry: 1048d89cc; end: 1048d89d7; -[SCTracer endAsyncTraceWithStoredCookieID:] */

void FUN_1048d89cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_1048d88f4(param_3,param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1048d89d8; end: 1048d8a9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d89d8(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_40;
  undefined1 auStack_38 [24];
  
  if (lRam000000011309bf48 != -1) {
    _swift_once(0x11309bf48,&UNK_100029950);
  }
  _swift_beginAccess(0x113815538,auStack_38,0,0);
  lVar1 = lRam0000000113815538;
  _swift_unknownObjectWeakAssign(lRam0000000113815538 + _DAT_11309bf58,param_1);
  _objc_retain();
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000101438ce4();
  uVar3 = *(undefined8 *)(lVar1 + _DAT_11309bf50);
  puStack_40 = puVar2;
  _swift_retain(uVar3);
  func_0x0001048d8eac(&puStack_40);
  _swift_release(uVar3);
  _objc_release(lVar1);
  return;
}



/* Entry: 1048d8aa0; end: 1048d8ae3;  */

undefined1  [16] FUN_1048d8aa0(void)

{
  return ZEXT816(0x1107b5ac8);
}



/* Entry: 1048d8ae4; end: 1048d8b0f;  */

void FUN_1048d8ae4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = uRam000000011309bf88;
  uRam000000011309bf88 = param_1;
  _swift_unknownObjectRetain();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 1048d8b10; end: 1048d8b4b; -[SCTracingSessionServicesBinder init] */

void FUN_1048d8b10(undefined8 param_1)

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



/* Entry: 1048d8b4c; end: 1048d8b7f;  */

void FUN_1048d8b4c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1048d8b80; end: 1048d8b83; -[SCTracingSessionServicesBinder .cxx_destruct] */

void FUN_1048d8b80(void)

{
  return;
}



/* Entry: 1048d8b84; end: 1048d8ba3;  */

void FUN_1048d8b84(void)

{
  _objc_opt_self(&PTR_PTR_1129e3b48);
  return;
}



/* Entry: 1048d8ba4; end: 1048d8c9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d8ba4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11309bfb8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11309bfc0);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1048d8c9c; end: 1048d8ca7; -[SCTraceSessionInformation traceSessionID] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d8c9c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11309bfb8);
  uVar2 = ((undefined8 *)(param_1 + _DAT_11309bfb8))[1];
  func_0x00010006c00c(uVar1,uVar2);
  uVar3 = uVar1;
  __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar1,uVar2);
  func_0x00010006c090(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1048d8ca8; end: 1048d8cb3; -[SCTraceSessionInformation traceSessionData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d8ca8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11309bfc0);
  uVar2 = ((undefined8 *)(param_1 + _DAT_11309bfc0))[1];
  func_0x00010006c00c(uVar1,uVar2);
  uVar3 = uVar1;
  __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar1,uVar2);
  func_0x00010006c090(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1048d8cb4; end: 1048d8d0b;  */

void FUN_1048d8cb4(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + *param_3);
  uVar2 = ((undefined8 *)(param_1 + *param_3))[1];
  func_0x00010006c00c(uVar1,uVar2);
  uVar3 = uVar1;
  __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar1,uVar2);
  func_0x00010006c090(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1048d8d0c; end: 1048d8d6b; -[SCTraceSessionInformation init] */

void FUN_1048d8d0c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCTracingServicesAPI.TraceSessionInformation",0x2c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1048d8d38);
  (*pcVar1)();
}



/* Entry: 1048d8d6c; end: 1048d8dab; -[SCTraceSessionInformation .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001048d8d8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001048d8d90) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d8d6c(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  uVar1 = ((undefined8 *)(param_1 + _DAT_11309bfb8))[1];
  uVar2 = (uint)(uVar1 >> 0x3e);
  if (uVar2 != 1) {
    if (uVar2 != 2) {
      return;
    }
    func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_11309bfb8));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1 & 0x3fffffffffffffff);
  return;
}



/* Entry: 1048d8dac; end: 1048d8dcb;  */

void FUN_1048d8dac(void)

{
  _objc_opt_self(&PTR_PTR_1129e3bf8);
  return;
}



/* Entry: 1048d8dcc; end: 1048d8f5b;  */

long * FUN_1048d8dcc(undefined8 param_1)

{
  long lVar1;
  long *unaff_x20;
  long lVar2;
  
  _swift_allocObject();
  lVar2 = *unaff_x20;
  lVar1 = 1;
  _dispatch_semaphore_create();
  unaff_x20[2] = lVar1;
  (**(code **)(*(long *)(*(long *)(lVar2 + 0x50) + -8) + 0x20))
            ((long)unaff_x20 + *(long *)(lVar2 + 0x60),param_1);
  return unaff_x20;
}



/* Entry: 1048d8f5c; end: 1048d8fab;  */

void FUN_1048d8f5c(void)

{
  long lVar1;
  long *unaff_x20;
  
  lVar1 = *unaff_x20;
  _objc_release(unaff_x20[2]);
  (**(code **)(*(long *)(*(long *)(lVar1 + 0x50) + -8) + 8))
            ((long)unaff_x20 + *(long *)(*unaff_x20 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1048d8fac; end: 1048d902b;  */

void FUN_1048d8fac(undefined8 param_1)

{
  long *unaff_x20;
  long lVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar2 = *unaff_x20;
  __sSo21OS_dispatch_semaphoreC8DispatchE4waityyF();
  lVar1 = *(long *)(*unaff_x20 + 0x60);
  _swift_beginAccess((long)unaff_x20 + lVar1,auStack_48,0x21,0);
  (**(code **)(*(long *)(*(long *)(lVar2 + 0x50) + -8) + 0x18))((long)unaff_x20 + lVar1,param_1);
  _swift_endAccess(auStack_48);
  __sSo21OS_dispatch_semaphoreC8DispatchE6signalSiyF();
  return;
}



/* Entry: 1048d902c; end: 1048d907b;  */

long * FUN_1048d902c(undefined8 param_1)

{
  long *unaff_x20;
  
  _swift_allocObject();
  (**(code **)(*(long *)(*(long *)(*unaff_x20 + 0x50) + -8) + 0x20))
            ((long)unaff_x20 + *(long *)(*unaff_x20 + 0x58),param_1);
  return unaff_x20;
}



/* Entry: 1048d907c; end: 1048d90b3;  */

void FUN_1048d907c(void)

{
  long *unaff_x20;
  
  (**(code **)(*(long *)(*(long *)(*unaff_x20 + 0x50) + -8) + 8))
            ((long)unaff_x20 + *(long *)(*unaff_x20 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1048d90b4; end: 1048d91b3;  */

void FUN_1048d90b4(undefined8 param_1)

{
  long *plVar1;
  long extraout_x8;
  long *unaff_x20;
  long lVar2;
  long lVar3;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  lVar2 = *(long *)(*unaff_x20 + 0x50);
  lVar3 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  plVar1 = (long *)0x0;
  FUN_1048d9910(0,lVar2);
  (**(code **)(lVar3 + 0x10))(auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_1,lVar2)
  ;
  _swift_allocObject(plVar1,(int)plVar1[6],*(undefined2 *)((long)plVar1 + 0x34));
  (**(code **)(*(long *)(*(long *)(*plVar1 + 0x50) + -8) + 0x20))
            ((long)plVar1 + *(long *)(*plVar1 + 0x58),
             auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  _swift_beginAccess(unaff_x20 + 4,auStack_58,0,0);
  lVar2 = unaff_x20[4];
  _pthread_getspecific();
  if (lVar2 != 0) {
    _swift_release();
  }
  _swift_beginAccess(unaff_x20 + 4,auStack_70,0,0);
  _pthread_setspecific(unaff_x20[4],plVar1);
  return;
}



/* Entry: 1048d91b4; end: 1048d936f;  */

void FUN_1048d91b4(code *param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long extraout_x8;
  long extraout_x8_00;
  long lVar4;
  long *unaff_x20;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [16];
  long lStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  lVar4 = *(long *)(*unaff_x20 + 0x50);
  lVar8 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  puVar6 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  __sSqMa(0,lVar4);
  lVar9 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = (long)puVar6 - extraout_x8_00;
  FUN_1048d9370(lVar7);
  lVar5 = lVar7;
  (**(code **)(lVar8 + 0x30))(lVar7,1,lVar4);
  (**(code **)(lVar9 + 8))(lVar7,lVar1);
  if ((int)lVar5 != 1) {
    _swift_beginAccess(unaff_x20 + 4,auStack_78,0,0);
    plVar2 = (long *)unaff_x20[4];
    _pthread_getspecific();
    if (plVar2 != (long *)0x0) {
      plVar3 = plVar2;
      _swift_retain();
      lVar5 = *(long *)(*plVar3 + 0x58);
      lStack_90 = lVar4;
      pcStack_88 = param_1;
      uStack_80 = param_2;
      _swift_beginAccess((long)plVar3 + lVar5,auStack_b8,0x21,0);
      FUN_1048d946c((long)plVar2 + lVar5,FUN_1048d9444,auStack_a0,lVar4,PTR___ss5NeverON_11034ee88,
                    PTR___sytN_11034f1b0 + 8,PTR___ss5NeverOs5ErrorsWP_11034ee90);
      _swift_endAccess(auStack_b8);
      _swift_release(plVar2);
      return;
    }
  }
  (*(code *)unaff_x20[2])(puVar6);
  (*param_1)(puVar6);
  FUN_1048d90b4(puVar6);
  (**(code **)(lVar8 + 8))(puVar6,lVar4);
  return;
}



/* Entry: 1048d9370; end: 1048d9443;  */

void FUN_1048d9370(undefined8 param_1)

{
  long *plVar1;
  long *plVar2;
  code *pcVar3;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  lVar4 = *unaff_x20;
  _swift_beginAccess(unaff_x20 + 4,auStack_58,0,0);
  plVar1 = (long *)unaff_x20[4];
  _pthread_getspecific();
  if (plVar1 == (long *)0x0) {
    lVar4 = *(long *)(lVar4 + 0x50);
    pcVar3 = *(code **)(*(long *)(lVar4 + -8) + 0x38);
  }
  else {
    lVar5 = *(long *)(*plVar1 + 0x58);
    plVar2 = plVar1;
    _swift_retain();
    _swift_beginAccess((long)plVar2 + lVar5,auStack_70,0,0);
    lVar4 = *(long *)(lVar4 + 0x50);
    lVar6 = *(long *)(lVar4 + -8);
    (**(code **)(lVar6 + 0x10))(param_1,(long)plVar1 + lVar5,lVar4);
    _swift_release(plVar1);
    pcVar3 = *(code **)(lVar6 + 0x38);
  }
  (*pcVar3)(param_1,plVar1 == (long *)0x0,1,lVar4);
  return;
}



/* Entry: 1048d9444; end: 1048d946b;  */

void FUN_1048d9444(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x18))();
  return;
}



/* Entry: 1048d946c; end: 1048d94f7;  */

void FUN_1048d946c(void)

{
  long in_x4;
  undefined8 in_x7;
  code *extraout_x12;
  long extraout_x13;
  long unaff_x21;
  long lVar1;
  
  lVar1 = *(long *)(in_x4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  (*extraout_x12)();
  if (unaff_x21 != 0) {
    (**(code **)(lVar1 + 0x20))
              (in_x7,&stack0xffffffffffffffc0 + -(extraout_x13 + 0xfU & 0xfffffffffffffff0),in_x4);
  }
  return;
}



/* Entry: 1048d94f8; end: 1048d961b;  */

void FUN_1048d94f8(undefined8 param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  long extraout_x8_00;
  long *unaff_x20;
  code *pcVar3;
  long lVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar4 = *(long *)(*unaff_x20 + 0x50);
  lVar1 = 0;
  __sSqMa(0,lVar4);
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = &stack0xffffffffffffffa0 + -extraout_x8;
  lVar8 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar6 = (long)puVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  FUN_1048d9370(puVar5);
  puVar2 = puVar5;
  (**(code **)(lVar8 + 0x30))(puVar5,1,lVar4);
  if ((int)puVar2 == 1) {
    (**(code **)(lVar7 + 8))(puVar5,lVar1);
    (*(code *)unaff_x20[2])(param_1);
    FUN_1048d90b4(param_1);
  }
  else {
    pcVar3 = *(code **)(lVar8 + 0x20);
    (*pcVar3)(lVar6,puVar5,lVar4);
    (*pcVar3)(param_1,lVar6,lVar4);
  }
  return;
}



/* Entry: 1048d961c; end: 1048d9673;  */

undefined8 FUN_1048d961c(undefined8 param_1,undefined8 param_2)

{
  _swift_allocObject();
  FUN_1048d972c(param_1,param_2);
  _swift_release(param_2);
  return param_1;
}



/* Entry: 1048d9674; end: 1048d96a3;  */

undefined8 FUN_1048d9674(undefined8 param_1,undefined8 param_2)

{
  FUN_1048d972c();
  _swift_release(param_2);
  return param_1;
}



/* Entry: 1048d96a4; end: 1048d96a7;  */

void FUN_1048d96a4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
  return;
}



/* Entry: 1048d96a8; end: 1048d972b;  */

void FUN_1048d96a8(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_40 [24];
  undefined1 auStack_28 [24];
  
  _swift_beginAccess(unaff_x20 + 0x20,auStack_28,0,0);
  lVar1 = *(long *)(unaff_x20 + 0x20);
  _pthread_getspecific();
  if (lVar1 != 0) {
    _swift_release();
  }
  _swift_beginAccess(unaff_x20 + 0x20,auStack_40,0,0);
  _pthread_key_delete(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 1048d972c; end: 1048d989f;  */

void FUN_1048d972c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 *puVar5;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  puVar5 = (undefined8 *)(unaff_x20 + 0x20);
  *puVar5 = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  _swift_beginAccess(puVar5,&uStack_58,0x21,0);
  _swift_retain(param_2);
  _pthread_key_create(puVar5,FUN_1048d96a4);
  _swift_endAccess(&uStack_58);
  if ((int)puVar5 == 0) {
    return;
  }
  uStack_58 = 0;
  uStack_50 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x3d);
  __sSS6appendyySSF(0xd00000000000001b,0x800000010f2183d0);
  puVar4 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_11034ee30;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss5Int32VN_11034ee20,PTR___ss5Int32Vs23CustomStringConvertiblesWP_11034ee30);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar4);
  __sSS6appendyySSF(0x1000000000000020,0x800000010f2183f0);
  uVar2 = uStack_50;
  uVar1 = uStack_58;
  uStack_58 = 0;
  uStack_50 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x18);
  _swift_bridgeObjectRelease(uStack_50);
  uStack_58 = 0xd000000000000016;
  uStack_50 = 0x800000010ef3ecc0;
  __sSS6appendyySSF(uVar1,uVar2);
  uVar2 = uStack_50;
  uVar1 = uStack_58;
  _swift_bridgeObjectRetain(uStack_50);
  FUN_1048d9980(uVar1,uVar2);
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1048d98a0);
  (*pcVar3)();
}



/* Entry: 1048d98a0; end: 1048d990f;  */

void FUN_1048d98a0(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lStack_28;
  
  uVar2 = *(ulong *)(param_1 + 0x50);
  lVar1 = 0x13f;
  _swift_checkMetadataState();
  if (uVar2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_initClassMetadata2(param_1,0,1,&lStack_28,param_1 + 0x58);
  }
  return;
}



/* Entry: 1048d9910; end: 1048d991b;  */

void FUN_1048d9910(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e824e20);
  return;
}



/* Entry: 1048d991c; end: 1048d996b;  */

void FUN_1048d991c(long param_1)

{
  undefined *puStack_20;
  undefined *puStack_18;
  
  puStack_20 = PTR___syycWV_11034f1c0 + 0x40;
  puStack_18 = PTR___sBi64_WV_11034d670 + 0x40;
  _swift_initClassMetadata2(param_1,0,2,&puStack_20,param_1 + 0x58);
  return;
}



/* Entry: 1048d996c; end: 1048d997f;  */

void FUN_1048d996c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&DAT_10e824e70);
  return;
}



/* Entry: 1048d9980; end: 1048d9b33;  */

void FUN_1048d9980(undefined8 *****param_1,ulong param_2)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *****pppppuVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 ****ppppuStack_70;
  ulong uStack_68;
  
  uVar3 = param_2;
  _swift_bridgeObjectRetain();
  func_0x00010bd8609c();
  if (uVar3 != 0) {
    lVar8 = 0;
    uVar1 = (ulong)param_1 & 0xffffffffffff;
    if ((param_2 & 0x2000000000000000) != 0) {
      uVar1 = param_2 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      uVar7 = (uint)((ulong)param_1 >> 0x3b) & 1;
      if ((param_2 & 0x1000000000000000) == 0) {
        uVar7 = 1;
      }
      uVar9 = 4L << uVar7;
      uVar4 = 0xf;
      do {
        uVar10 = uVar4 & 0xc;
        uVar6 = uVar4;
        if (uVar10 == uVar9) {
          func_0x000100e36e7c();
        }
        if (uVar1 <= uVar6 >> 0x10) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1048d9b2c);
          (*pcVar2)();
        }
        if ((param_2 >> 0x3c & 1) == 0) {
          if ((param_2 >> 0x3d & 1) == 0) {
            pppppuVar5 = (undefined8 *****)((param_2 & 0xfffffffffffffff) + 0x20);
            if (((ulong)param_1 >> 0x3c & 1) == 0) {
              pppppuVar5 = param_1;
              __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(param_1,param_2);
            }
          }
          else {
            ppppuStack_70 = param_1;
            uStack_68 = param_2 & 0xffffffffffffff;
            pppppuVar5 = &ppppuStack_70;
          }
          uVar7 = (uint)*(byte *)((long)pppppuVar5 + (uVar6 >> 0x10));
          if (uVar10 != uVar9) goto LAB_1048d9a60;
LAB_1048d9ac0:
          func_0x000100e36e7c();
          if ((param_2 >> 0x3c & 1) != 0) goto LAB_1048d9ad0;
LAB_1048d9a64:
          uVar4 = (uVar4 & 0xffffffffffff0000) + 0x10004;
        }
        else {
          __sSS8UTF8ViewV17_foreignSubscript8positions5UInt8VSS5IndexV_tF(uVar6,param_1,param_2);
          uVar7 = (uint)uVar6;
          if (uVar10 == uVar9) goto LAB_1048d9ac0;
LAB_1048d9a60:
          if ((param_2 >> 0x3c & 1) == 0) goto LAB_1048d9a64;
LAB_1048d9ad0:
          if (uVar1 <= uVar4 >> 0x10) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1048d9b34);
            (*pcVar2)();
          }
          __sSS8UTF8ViewV13_foreignIndex5afterSS0D0VAF_tF();
        }
        if (lVar8 == 0x3ff) break;
        if ((uVar7 >> 7 & 1) != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1048d9b30);
          (*pcVar2)();
        }
        *(char *)(uVar3 + lVar8) = (char)uVar7;
        lVar8 = lVar8 + 1;
      } while (uVar1 * 4 - (uVar4 >> 0xe) != 0);
    }
    *(undefined1 *)(uVar3 + lVar8) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1048d9b34; end: 1048d9bbb;  */

void FUN_1048d9b34(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  _swift_bridgeObjectRetain(param_2);
  uVar2 = param_2;
  FUN_1048d9cb0(param_3);
  if (uVar2 >> 0x3c < 0xf) {
    uVar1 = param_3;
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF();
    _swift_bridgeObjectRelease(param_2);
    func_0x0001000b44c0(param_3,uVar2);
  }
  else {
    _swift_bridgeObjectRelease(param_2);
    uVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1048d9bbc; end: 1048d9cab;  */

undefined8 * FUN_1048d9bbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  undefined1 *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar9;
  long lVar10;
  undefined1 auStack_c0 [8];
  long alStack_b8 [2];
  long alStack_a8 [9];
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = 0;
  __s10Foundation4UUIDVMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar8 = auStack_60 + lVar1;
  __s10Foundation4UUIDV36_unconditionallyBridgeFromObjectiveCyACSo6NSUUIDCSgFZ(puVar8);
  __s10Foundation4UUIDV4uuids5UInt8V_A15Ftvg();
  uStack_58 = param_3;
  uStack_50 = param_2;
  __s10Foundation4UUIDV4uuids5UInt8V_A15Ftvg();
  puVar3 = &uStack_58;
  plVar6 = &lStack_48;
  func_0x000100e37074();
  puVar5 = puVar3;
  __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF();
  func_0x00010006c090(puVar3,plVar6);
  puVar4 = puVar8;
  lVar7 = lVar2;
  (**(code **)(lVar9 + 8))(puVar8,lVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return puVar5;
  }
  ___stack_chk_fail();
  *(long *)((long)alStack_a8 + lVar1 + 8) = lVar9;
  *(long **)((long)alStack_a8 + lVar1 + 0x10) = plVar6;
  *(undefined8 **)((long)alStack_a8 + lVar1 + 0x18) = puVar3;
  *(long *)((long)alStack_a8 + lVar1 + 0x20) = lVar2;
  *(undefined1 **)((long)alStack_a8 + lVar1 + 0x28) = puVar8;
  *(undefined8 **)((long)alStack_a8 + lVar1 + 0x30) = puVar5;
  *(undefined1 **)((long)alStack_a8 + lVar1 + 0x38) = &stack0xfffffffffffffff0;
  *(code **)((long)alStack_a8 + lVar1 + 0x40) = FUN_1048d9cac;
  *(undefined8 *)((long)alStack_a8 + lVar1) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = 0x112d3bc20;
  func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = auStack_c0 + (lVar1 - extraout_x8_00);
  lVar2 = 0;
  __s10Foundation4UUIDVMa();
  lVar10 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar9 = (long)puVar8 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  __s10Foundation4UUIDV10uuidStringACSgSSh_tcfC(puVar8,puVar4,lVar7);
  _swift_bridgeObjectRelease(lVar7);
  puVar4 = puVar8;
  (**(code **)(lVar10 + 0x30))(puVar8,1,lVar2);
  if ((int)puVar4 == 1) {
    func_0x0001018d3afc(puVar8);
    puVar5 = (undefined8 *)0x0;
    lVar7 = -0x1000000000000000;
  }
  else {
    lVar7 = lVar9;
    (**(code **)(lVar10 + 0x20))(lVar9,puVar8,lVar2);
    __s10Foundation4UUIDV4uuids5UInt8V_A15Ftvg();
    *(long *)((long)alStack_b8 + lVar1) = lVar7;
    *(undefined1 **)((long)alStack_b8 + lVar1 + 8) = puVar8;
    __s10Foundation4UUIDV4uuids5UInt8V_A15Ftvg();
    puVar5 = (undefined8 *)((long)alStack_b8 + lVar1);
    lVar7 = (long)alStack_a8 + lVar1;
    func_0x000100e37074(puVar5,lVar7);
    (**(code **)(lVar10 + 8))(lVar9,lVar2);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)alStack_a8 + lVar1)) {
    return puVar5;
  }
  ___stack_chk_fail(puVar5,lVar7);
  return (undefined8 *)0x1;
}



/* Entry: 1048d9cac; end: 1048d9caf;  */

long * FUN_1048d9cac(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 *puVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  undefined1 *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  long lVar7;
  long lVar8;
  undefined1 auStack_60 [8];
  long lStack_58;
  undefined1 *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = 0x112d3bc20;
  func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_60 + -extraout_x8;
  lVar1 = 0;
  __s10Foundation4UUIDVMa();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  __s10Foundation4UUIDV10uuidStringACSgSSh_tcfC(puVar6,param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  puVar2 = puVar6;
  (**(code **)(lVar8 + 0x30))(puVar6,1,lVar1);
  if ((int)puVar2 == 1) {
    func_0x0001018d3afc(puVar6);
    plVar3 = (long *)0x0;
    plVar5 = (long *)0xf000000000000000;
  }
  else {
    lVar4 = lVar7;
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,lVar1);
    __s10Foundation4UUIDV4uuids5UInt8V_A15Ftvg();
    lStack_58 = lVar4;
    puStack_50 = puVar6;
    __s10Foundation4UUIDV4uuids5UInt8V_A15Ftvg();
    plVar3 = &lStack_58;
    plVar5 = &lStack_48;
    func_0x000100e37074(plVar3,plVar5);
    (**(code **)(lVar8 + 8))(lVar7,lVar1);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return plVar3;
  }
  ___stack_chk_fail(plVar3,plVar5);
  return (long *)0x1;
}



/* Entry: 1048d9cb0; end: 1048d9e1f;  */

long * FUN_1048d9cb0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 *puVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  undefined1 *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  long lVar7;
  long lVar8;
  undefined1 auStack_60 [8];
  long lStack_58;
  undefined1 *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = 0x112d3bc20;
  func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_60 + -extraout_x8;
  lVar1 = 0;
  __s10Foundation4UUIDVMa();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  __s10Foundation4UUIDV10uuidStringACSgSSh_tcfC(puVar6,param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  puVar2 = puVar6;
  (**(code **)(lVar8 + 0x30))(puVar6,1,lVar1);
  if ((int)puVar2 == 1) {
    func_0x0001018d3afc(puVar6);
    plVar3 = (long *)0x0;
    plVar5 = (long *)0xf000000000000000;
  }
  else {
    lVar4 = lVar7;
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,lVar1);
    __s10Foundation4UUIDV4uuids5UInt8V_A15Ftvg();
    lStack_58 = lVar4;
    puStack_50 = puVar6;
    __s10Foundation4UUIDV4uuids5UInt8V_A15Ftvg();
    plVar3 = &lStack_58;
    plVar5 = &lStack_48;
    func_0x000100e37074(plVar3,plVar5);
    (**(code **)(lVar8 + 8))(lVar7,lVar1);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return plVar3;
  }
  ___stack_chk_fail(plVar3,plVar5);
  return (long *)0x1;
}



/* Entry: 1048d9e20; end: 1048d9e27;  */

undefined8 FUN_1048d9e20(void)

{
  return 1;
}



/* Entry: 1048d9e28; end: 1048d9ec7;  */

void FUN_1048d9e28(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(0);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1048d9ec8; end: 1048d9fc7;  */

void FUN_1048d9ec8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 1048d9fc8; end: 1048da007;  */

void FUN_1048d9fc8(void)

{
  undefined *puVar1;
  
  if (puRam000000011309c170 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd46968;
  _swift_getWitnessTable(&UNK_10dd46968,&UNK_1107b5f08);
  puRam000000011309c170 = puVar1;
  return;
}



/* Entry: 1048da008; end: 1048da10f;  */

void FUN_1048da008(undefined8 param_1,code *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar4 = *(long *)(param_4 + -8);
  uStack_70 = param_3;
  uStack_68 = param_5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  lVar5 = (long)&uStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar4 + 0x10))(lVar5);
  lVar3 = *(long *)(param_4 + 0x10);
  lVar2 = *(long *)(lVar3 + -8);
  lVar1 = lVar5;
  (**(code **)(lVar2 + 0x30))(lVar5,1,lVar3);
  if ((int)lVar1 == 1) {
    (**(code **)(lVar4 + 8))(lVar5,param_4);
    (*param_2)(param_7);
    func_0x0001031ade78(param_7,uStack_68,param_6);
  }
  else {
    (**(code **)(lVar2 + 0x20))(param_1,lVar5,lVar3);
  }
  return;
}



/* Entry: 1048da110; end: 1048da18f;  */

void FUN_1048da110(undefined8 param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  long unaff_x21;
  undefined8 uStack_58;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  
  uStack_40 = *(undefined8 *)(param_2 + 0x10);
  lVar1 = param_2;
  func_0x000100faaf10();
  FUN_1048da008(param_1,FUN_1048da190,auStack_50,param_2,&UNK_1107b5fe0,lVar1,&uStack_58);
  if (unaff_x21 != 0) {
    *param_3 = uStack_58;
  }
  return;
}



/* Entry: 1048da190; end: 1048da19b;  */

void FUN_1048da190(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(unaff_x20 + 0x10);
  return;
}



/* Entry: 1048da19c; end: 1048da22b;  */

undefined1  [16] FUN_1048da19c(undefined8 param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  
  __ss11_StringGutsV4growyySiF(0x27);
  _swift_bridgeObjectRelease(0xe000000000000000);
  uVar2 = 0;
  __ss9_typeName_9qualifiedSSypXp_SbtF(param_1,0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar2);
  __sSS6appendyySSF(0x3e,0xe100000000000000);
  auVar1._8_8_ = 0x800000010f218420;
  auVar1._0_8_ = 0xd000000000000024;
  return auVar1;
}



/* Entry: 1048da22c; end: 1048da2d7;  */

void FUN_1048da22c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 1048da2d8; end: 1048da313;  */

void FUN_1048da2d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack_40 = param_4;
  uStack_38 = param_5;
  uStack_30 = param_2;
  uStack_28 = param_3;
  uStack_20 = param_1;
  FUN_1048da340(FUN_1048da314,auStack_50,param_4,param_5);
  return;
}



/* Entry: 1048da314; end: 1048da33f;  */

uint FUN_1048da314(undefined8 param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x20))
            (*(undefined8 *)(unaff_x20 + 0x28),param_1,*(undefined8 *)(unaff_x20 + 0x30));
  return (uint)param_1 & 1;
}



/* Entry: 1048da340; end: 1048da96b;  */

void FUN_1048da340(undefined8 param_1,code *param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined *puVar9;
  long extraout_x8;
  long extraout_x8_00;
  long lVar10;
  long lVar11;
  long extraout_x8_01;
  ulong uVar12;
  long extraout_x8_02;
  long extraout_x8_03;
  code *pcVar13;
  ulong uVar14;
  long lVar15;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long lVar16;
  long unaff_x21;
  ulong uVar17;
  long lVar18;
  long lVar19;
  undefined8 uStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  undefined1 auStack_88 [40];
  
  puVar9 = PTR___sSlTL_11034dfe8;
  lVar18 = *(long *)(*(long *)(param_5 + 8) + 8);
  lVar3 = 0xff;
  uStack_160 = param_1;
  _swift_getAssociatedTypeWitness
            (0xff,lVar18,param_4,PTR___sSlTL_11034dfe8,PTR___s5IndexSlTl_11034d620);
  lVar4 = lVar18;
  _swift_getAssociatedConformanceWitness
            (lVar18,param_4,lVar3,puVar9,PTR___sSl5IndexSl_SLTn_11034dfa0);
  lVar5 = 0;
  __ss16PartialRangeUpToVMa(0,lVar3,lVar4);
  lStack_130 = *(long *)(lVar5 + -8);
  lStack_128 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(lStack_130 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  lStack_138 = (long)&uStack_160 - extraout_x8;
  __ss16PartialRangeFromVMa(0,lVar3,lVar4);
  lStack_148 = *(long *)(lVar5 + -8);
  lStack_140 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(lStack_148 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = ((long)&uStack_160 - extraout_x8) - extraout_x8_00;
  lVar5 = 0;
  lStack_150 = lVar10;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(lVar18 + 8),param_4,PTR___sSTTL_11034db40,
             PTR___s7ElementSTTl_11034d628);
  lVar11 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar12 = lVar10 - extraout_x8_01;
  lVar19 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar19 + 0x40));
  lVar10 = uVar12 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lStack_158 = lVar10;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar14 = lVar10 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar17 = uVar14 - extraout_x12_00;
  uVar6 = 0;
  _swift_getAssociatedTypeWitness(0,lVar18,param_4,puVar9,PTR___s11SubSequenceSlTl_11034d5d8);
  lVar10 = *(long *)(uVar6 - 8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar15 = uVar17 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar16 = lVar15 - extraout_x12_01;
  __sSlsEy11SubSequenceQzys15UnboundedRange_OXEcig(lVar16,FUN_1048da96c,0,param_4,lVar18);
  lStack_120 = lVar18;
  _swift_getAssociatedConformanceWitness
            (lVar18,param_4,uVar6,puVar9,PTR___sSl11SubSequenceSl_SlTn_11034df90);
  uVar7 = uVar6;
  __sSl7isEmptySbvgTj(uVar6,lVar18);
  do {
    if ((uVar7 & 1) != 0) {
      __sSl10startIndex0B0QzvgTj(uStack_160,uVar6,lVar18);
LAB_1048da92c:
      (**(code **)(lVar10 + 8))(lVar16,uVar6);
      return;
    }
    __sSl10startIndex0B0QzvgTj(uVar14,uVar6,lVar18);
    uVar7 = uVar6;
    __sSl5countSivgTj(uVar6,lVar18);
    lVar8 = param_5;
    _swift_getAssociatedConformanceWitness
              (param_5,param_4,uVar6,PTR___sSkTL_11034df60,PTR___sSk11SubSequenceSl_SkTn_11034df48);
    __sSk5index_8offsetBy5IndexQzAD_SitFTj(uVar17,uVar14,(long)uVar7 / 2,uVar6,lVar8);
    pcVar13 = *(code **)(lVar19 + 8);
    (*pcVar13)(uVar14,lVar3);
    pcVar2 = (code *)auStack_88;
    __sSly7ElementQz5IndexQzcirTj(pcVar2,uVar17,uVar6,lVar18);
    (**(code **)(lVar11 + 0x10))(uVar12);
    (*pcVar2)(auStack_88,0);
    uVar7 = uVar12;
    (*param_2)();
    (**(code **)(lVar11 + 8))(uVar12,lVar5);
    if (unaff_x21 != 0) {
      (*pcVar13)(uVar17,lVar3);
      goto LAB_1048da92c;
    }
    if ((uVar7 & 1) == 0) {
      uVar7 = uVar17;
      __sSQ2eeoiySbx_xtFZTj(uVar17,uVar17,lVar3,*(undefined8 *)(lVar4 + 8));
      if ((uVar7 & 1) == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1048da96c);
        (*pcVar2)();
      }
      (**(code **)(lVar19 + 0x10))(uVar14,uVar17,lVar3);
      lVar8 = lStack_138;
      __ss16PartialRangeUpToVyAByxGxcfC(lStack_138,uVar14,lVar3,lVar4);
      lVar1 = lStack_128;
      puVar9 = PTR___ss16PartialRangeUpToVyxGSXsMc_11034e790;
      _swift_getWitnessTable(PTR___ss16PartialRangeUpToVyxGSXsMc_11034e790,lStack_128);
      __sSlsEy11SubSequenceQzqd__cSXRd__5BoundQyd__5IndexRtzluig
                (lVar15,lVar8,uVar6,lVar1,lVar18,puVar9);
      (**(code **)(lStack_130 + 8))(lVar8,lVar1);
    }
    else {
      __sSl5index5after5IndexQzAD_tFTj(uVar14,uVar17,param_4,lStack_120);
      uVar7 = uVar14;
      __sSQ2eeoiySbx_xtFZTj(uVar14,uVar14,lVar3,*(undefined8 *)(lVar4 + 8));
      lVar8 = lStack_158;
      if ((uVar7 & 1) == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1048da968);
        (*pcVar2)();
      }
      (**(code **)(lVar19 + 0x10))(lStack_158,uVar14,lVar3);
      lVar1 = lStack_150;
      __ss16PartialRangeFromVyAByxGxcfC(lStack_150,lVar8,lVar3,lVar4);
      (*pcVar13)(uVar14,lVar3);
      lVar8 = lStack_140;
      puVar9 = PTR___ss16PartialRangeFromVyxGSXsMc_11034e770;
      _swift_getWitnessTable(PTR___ss16PartialRangeFromVyxGSXsMc_11034e770,lStack_140);
      __sSlsEy11SubSequenceQzqd__cSXRd__5BoundQyd__5IndexRtzluig
                (lVar15,lVar1,uVar6,lVar8,lVar18,puVar9);
      (**(code **)(lStack_148 + 8))(lVar1,lVar8);
    }
    (*pcVar13)(uVar17,lVar3);
    (**(code **)(lVar10 + 8))(lVar16,uVar6);
    (**(code **)(lVar10 + 0x20))(lVar16,lVar15,uVar6);
    uVar7 = uVar6;
    __sSl7isEmptySbvgTj(uVar6,lVar18);
  } while( true );
}



/* Entry: 1048da96c; end: 1048da96f;  */

void FUN_1048da96c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1048da970);
  (*pcVar1)();
}



/* Entry: 1048da970; end: 1048daacb;  */

void FUN_1048da970(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x21;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_90 [8];
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar4 = *(long *)(param_6 + 8);
  lVar1 = 0;
  lStack_80 = param_6;
  uStack_78 = param_2;
  uStack_70 = param_3;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(lVar4 + 8),param_4,PTR___sSTTL_11034db40,
             PTR___s7ElementSTTl_11034d628);
  lVar2 = *(long *)(lVar1 + -8);
  lStack_88 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = auStack_90 + -extraout_x8;
  lVar1 = 0;
  _swift_getAssociatedTypeWitness(0,lVar4,param_4,PTR___sSlTL_11034dfe8,PTR___s5IndexSlTl_11034d620)
  ;
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = (long)puVar3 - extraout_x8_00;
  FUN_1048da2d8(lVar5,param_1,uStack_78,uStack_70,param_4,param_5);
  if (unaff_x21 == 0) {
    (**(code **)(lVar2 + 0x10))(puVar3,param_1,lStack_88);
    __sSm6insert_2aty7ElementQzn_5IndexQztFTj(puVar3,lVar5,param_4,lStack_80);
    (**(code **)(lVar4 + 8))(lVar5,lVar1);
  }
  return;
}



/* Entry: 1048daacc; end: 1048daba7;  */

bool FUN_1048daacc(undefined8 param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  long extraout_x8;
  ulong uVar6;
  long lVar7;
  undefined8 uStack_50;
  long lStack_48;
  
  lVar2 = 0;
  __s10Foundation12CharacterSetVMa();
  lVar7 = *(long *)(lVar2 + -8);
  lVar3 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  uVar6 = (long)&uStack_50 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  if (param_2 == 0) {
    bVar1 = true;
  }
  else {
    uStack_50 = param_1;
    lStack_48 = param_2;
    __s10Foundation12CharacterSetV22whitespacesAndNewlinesACvgZ(uVar6);
    func_0x000100e8b654();
    uVar4 = uVar6;
    puVar5 = PTR___sSSN_11034da80;
    __sSy10FoundationE18trimmingCharacters2inSSAA12CharacterSetV_tF
              (uVar6,PTR___sSSN_11034da80,lVar3);
    (**(code **)(lVar7 + 8))(uVar6,lVar2);
    _swift_bridgeObjectRelease(puVar5);
    uVar6 = uVar4 & 0xffffffffffff;
    if (((ulong)puVar5 & 0x2000000000000000) != 0) {
      uVar6 = (ulong)puVar5 >> 0x38 & 0xf;
    }
    bVar1 = uVar6 == 0;
  }
  return bVar1;
}



/* Entry: 1048daba8; end: 1048dacb3;  */

/* WARNING: Removing unreachable block (ram,0x0001048dac40) */
/* WARNING: Removing unreachable block (ram,0x0001048dac8c) */
/* WARNING: Removing unreachable block (ram,0x0001048dac44) */

void FUN_1048daba8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long extraout_x8;
  long lVar3;
  undefined1 auStack_60 [16];
  
  lVar1 = 0;
  __s10Foundation4UUIDVMa();
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  uVar2 = param_3;
  _objc_retain(param_3);
  __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ(param_3);
  _objc_release(uVar2);
  FUN_1048dacb4(auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_3,param_2);
  __s10Foundation4UUIDV19_bridgeToObjectiveCSo6NSUUIDCyF();
  (**(code **)(lVar3 + 8))(auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1048dacb4; end: 1048dafff;  */

undefined1  [16] FUN_1048dacb4(undefined8 param_1,undefined8 *param_2,ulong param_3)

{
  uint uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined8 uVar14;
  undefined1 *puVar15;
  long lVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auStack_7e [14];
  ulong uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  uint uVar13;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = (uint)(param_3 >> 0x20);
  uVar12 = uVar1 >> 0x1e;
  uVar13 = uVar1 >> 0x1e;
  iVar10 = (int)param_2;
  iVar9 = (int)((ulong)param_2 >> 0x20);
  if (uVar1 >> 0x1e < 2) {
    if (uVar12 == 0) {
      if ((param_3 >> 0x30 & 0xff) != 0x10) goto LAB_1048dad74;
    }
    else {
      if (SBORROW4(iVar9,iVar10)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1048daff0);
        (*pcVar2)();
      }
      if (iVar9 - iVar10 != 0x10) goto LAB_1048dad74;
    }
LAB_1048dad24:
    if (uVar13 == 0) {
      puVar15 = auStack_7e;
LAB_1048daf34:
      uVar6 = (ulong)(byte)puVar15[3];
      uVar7 = (ulong)(byte)puVar15[2];
      __s10Foundation4UUIDV4uuidACs5UInt8V_A15Ft_tcfC
                (param_1,*puVar15,puVar15[1],uVar7,uVar6,puVar15[4],puVar15[5],puVar15[6],puVar15[7]
                 ,*(undefined8 *)(puVar15 + 8));
      func_0x00010006c090(param_2);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) goto LAB_1048daffc;
      goto LAB_1048daf88;
    }
    puVar3 = param_2;
    if (uVar13 == 2) {
      lVar16 = param_2[2];
      __s10Foundation13__DataStorageC6_bytesSvSgvg();
      if (puVar3 == (undefined8 *)0x0) goto LAB_1048dafa4;
      puVar4 = puVar3;
      __s10Foundation13__DataStorageC7_offsetSivg();
      lVar8 = lVar16 - (long)puVar4;
      if (SBORROW8(lVar16,(long)puVar4)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1048dad5c);
        (*pcVar2)();
      }
LAB_1048daf24:
      puVar15 = (undefined1 *)(lVar8 + (long)puVar3);
      __s10Foundation13__DataStorageC7_lengthSivg();
      puVar3 = puVar4;
      if (puVar15 != (undefined1 *)0x0) goto LAB_1048daf34;
    }
    else {
      lVar16 = (long)iVar10;
      if ((long)param_2 >> 0x20 < lVar16) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1048daff8);
        (*pcVar2)();
      }
      __s10Foundation13__DataStorageC6_bytesSvSgvg();
      if (puVar3 != (undefined8 *)0x0) {
        puVar4 = puVar3;
        __s10Foundation13__DataStorageC7_offsetSivg();
        lVar8 = lVar16 - (long)puVar4;
        if (SBORROW8(lVar16,(long)puVar4)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1048daffc);
          (*pcVar2)();
        }
        goto LAB_1048daf24;
      }
LAB_1048dafa4:
      __s10Foundation13__DataStorageC7_lengthSivg();
    }
    uVar11 = 0x800000010f218470;
    func_0x0001018e0ad8();
    uVar7 = 0;
    uVar6 = 0;
    _swift_allocError(&UNK_1107b6098,puVar3,0,0);
    uVar14 = 0xd000000000000020;
  }
  else {
    if (uVar12 == 2) {
      if (SBORROW8(param_2[3],param_2[2])) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1048dafec);
        (*pcVar2)();
      }
      if (param_2[3] - param_2[2] == 0x10) goto LAB_1048dad24;
    }
LAB_1048dad74:
    uStack_68 = 0;
    uStack_60 = 0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x32);
    _swift_bridgeObjectRelease(uStack_60);
    uStack_68 = 0xd00000000000001c;
    uStack_60 = 0x800000010f218450;
    uStack_70 = 0x10;
    puVar5 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar5);
    __sSS6appendyySSF(0x202c736574796220,0xec00000020746f67);
    if (uVar13 < 2) {
      if (uVar12 == 0) {
        uVar7 = param_3 >> 0x30 & 0xff;
      }
      else {
        if (SBORROW4(iVar9,iVar10)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1048daff4);
          (*pcVar2)();
        }
        uVar7 = (ulong)(iVar9 - iVar10);
      }
    }
    else {
      uVar7 = 0;
      if ((uVar12 == 2) && (uVar7 = param_2[3] - param_2[2], SBORROW8(param_2[3],param_2[2]))) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1048dae34);
        (*pcVar2)();
      }
    }
    puVar5 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    uStack_70 = uVar7;
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar5);
    puVar3 = (undefined8 *)0x736574796220;
    __sSS6appendyySSF(0x736574796220,0xe600000000000000);
    uVar11 = uStack_60;
    uVar14 = uStack_68;
    func_0x0001018e0ad8();
    uVar7 = 0;
    uVar6 = 0;
    _swift_allocError(&UNK_1107b6098,puVar3,0,0);
  }
  *puVar3 = uVar14;
  puVar3[1] = uVar11;
  _swift_willThrow();
  func_0x00010006c090(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
LAB_1048daffc:
    ___stack_chk_fail();
    if (param_3 == 0) {
      __ss11_StringGutsV4growyySiF(0x19);
      _swift_bridgeObjectRelease(0xe000000000000000);
      __sSS6appendyySSF(uVar7,uVar6);
      _swift_bridgeObjectRelease(uVar6);
      __sSS6appendyySSF(0x3a,0xe100000000000000);
      puVar5 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
      __ss23CustomStringConvertibleP11descriptionSSvgTj
                (PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
      __sSS6appendyySSF();
      _swift_bridgeObjectRelease(puVar5);
      param_2 = (undefined8 *)0xd000000000000014;
      param_3 = 0x800000010f2184a0;
    }
    else {
      _swift_bridgeObjectRelease(uVar6);
    }
    auVar18._8_8_ = param_3;
    auVar18._0_8_ = param_2;
    return auVar18;
  }
LAB_1048daf88:
  auVar17._8_8_ = param_3;
  auVar17._0_8_ = param_2;
  return auVar17;
}



/* Entry: 1048db000; end: 1048db0e7;  */

undefined1  [16]
FUN_1048db000(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  
  if (param_2 == 0) {
    __ss11_StringGutsV4growyySiF(0x19);
    _swift_bridgeObjectRelease(0xe000000000000000);
    __sSS6appendyySSF(param_3,param_4);
    _swift_bridgeObjectRelease(param_4);
    __sSS6appendyySSF(0x3a,0xe100000000000000);
    puVar1 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar1);
    param_1 = 0xd000000000000014;
    param_2 = -0x7ffffffef0de7b60;
  }
  else {
    _swift_bridgeObjectRelease(param_4);
  }
  auVar2._8_8_ = param_2;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 1048db0e8; end: 1048db113;  */

void FUN_1048db0e8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dd0698 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd46ac8;
  func_0x000107c61520(&UNK_10dd46ac8,&UNK_1107b6098);
  puRam0000000112dd0698 = puVar1;
  return;
}



/* Entry: 1048db114; end: 1048db183;  */

undefined8 * FUN_1048db114(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Entry: 1048db184; end: 1048db21f;  */

int FUN_1048db184(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[4] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1048db220; end: 1048db253;  */

void FUN_1048db220(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1048db254; end: 1048db287; -[SCAppEnvironmentBindings .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048db254(long param_1)

{
  if (*(long *)(param_1 + _DAT_11309c178) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(((long *)(param_1 + _DAT_11309c178))[1]);
    return;
  }
  return;
}



/* Entry: 1048db288; end: 1048db32b;  */

void FUN_1048db288(undefined8 param_1,long param_2,uint param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  
  uVar3 = *unaff_x20;
  if (param_2 != 0) {
    uVar1 = 0;
    FUN_1048db924(0);
    uVar2 = 0x11309c318;
    func_0x0001048db7d0(0x11309c318,FUN_1048db924,&UNK_10dd46f00);
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (param_2,uVar1,PTR___sypN_11034f1a8 + 8,uVar2);
  }
  _objc_msgSend(uVar3,PTR_s_logInternalEvent_parameters_isIm_112607d68,param_1,param_2,param_3 & 1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1048db32c; end: 1048db33b;  */

void FUN_1048db32c(void)

{
  undefined8 *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d290)(*unaff_x20,PTR_s_flush_1125ca570);
  return;
}



/* Entry: 1048db33c; end: 1048db3a7;  */

undefined8 FUN_1048db33c(void)

{
  return 0;
}



/* Entry: 1048db3a8; end: 1048db3ab;  */

long FUN_1048db3a8(void)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  lVar1 = 0x11309c2d0;
  func_0x0001048db364();
  lVar2 = 0;
  func_0x0001049ceb28();
  lVar4 = *(long *)(lVar2 + -8);
  uVar3 = (ulong)*(byte *)(lVar4 + 0x50);
  uVar5 = uVar3 + 0x20 & (uVar3 ^ 0xffffffffffffffff);
  _swift_allocObject(lVar1,uVar5 + *(long *)(lVar4 + 0x48),uVar3 | 7);
  *(undefined8 *)(lVar1 + 0x18) = 2;
  *(undefined8 *)(lVar1 + 0x10) = 1;
  (**(code **)(lVar4 + 0x68))(lVar1 + uVar5,1,lVar2);
  return lVar1;
}



/* Entry: 1048db3ac; end: 1048db43b;  */

long FUN_1048db3ac(void)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  lVar1 = 0x11309c2d0;
  func_0x0001048db364();
  lVar2 = 0;
  func_0x0001049ceb28();
  lVar4 = *(long *)(lVar2 + -8);
  uVar3 = (ulong)*(byte *)(lVar4 + 0x50);
  uVar5 = uVar3 + 0x20 & (uVar3 ^ 0xffffffffffffffff);
  _swift_allocObject(lVar1,uVar5 + *(long *)(lVar4 + 0x48),uVar3 | 7);
  *(undefined8 *)(lVar1 + 0x18) = 2;
  *(undefined8 *)(lVar1 + 0x10) = 1;
  (**(code **)(lVar4 + 0x68))(lVar1 + uVar5,1,lVar2);
  return lVar1;
}



/* Entry: 1048db43c; end: 1048db477;  */

void FUN_1048db43c(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1107b6270;
  if (lRam000000011309c2d8 != 0) {
    return;
  }
  _swift_getForeignTypeMetadata();
  if (puVar1 == (undefined *)0x0) {
    lRam000000011309c2d8 = param_1;
  }
  return;
}



/* Entry: 1048db478; end: 1048db66f;  */

void FUN_1048db478(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_release(*param_2);
  uStack_40 = 0;
  lStack_38 = 0;
  __sSS10FoundationE26_forceBridgeFromObjectiveC_6resultySo8NSStringC_SSSgztFZ(param_1,&uStack_40);
  lVar1 = lStack_38;
  if (lStack_38 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = uStack_40;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_40,lStack_38);
    _swift_bridgeObjectRelease(lVar1);
  }
  *param_2 = uVar2;
  return;
}


