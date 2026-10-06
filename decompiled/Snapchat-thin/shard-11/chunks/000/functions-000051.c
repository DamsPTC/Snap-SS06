/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1080c6d70; end: 1080c6edf;  */

long FUN_1080c6d70(long param_1)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 unaff_x19;
  long unaff_x20;
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [72];
  undefined8 uStack_58;
  
  func_0x0001080c95f8();
  uStack_58 = extraout_x8;
  _objc_retain();
  func_0x0001080c93c4();
  if (unaff_x20 == 0) {
    unaff_x20 = 1;
  }
  else {
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09ef00();
    func_0x0001080c94ec();
    func_0x0001080c946c();
    func_0x00010b988770(auStack_a0);
    func_0x0001080c9458(auStack_b0,unaff_x19);
    func_0x00010b9884d4();
    func_0x0001080c9558();
    func_0x0001080c9424();
    func_0x0001080c942c();
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b988854();
    param_1 = unaff_x20;
    func_0x0001080c9424();
    func_0x0001080c9414();
  }
  func_0x0001080c933c();
  func_0x0001080c9334();
  func_0x0001080c9314(uStack_58);
  if ((bool)in_ZR) {
    return unaff_x20;
  }
  ___stack_chk_fail();
  func_0x0001080c9424();
  func_0x0001080c9414();
  func_0x0001080c933c();
  func_0x0001080c9334();
  __Unwind_Resume(param_1);
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080c9328();
  func_0x0001080c94ec();
  func_0x0001080c933c();
  func_0x0001080c946c();
  func_0x0001080c9458(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c27bcd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return param_1;
}



/* Entry: 1080c6ee0; end: 1080c6f33; -[SCValdiTapGestureRecognizer _handleGestureRecognizer:] */

void FUN_1080c6ee0(undefined8 param_1)

{
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080c9328();
  func_0x0001080c94ec();
  func_0x0001080c933c();
  func_0x0001080c946c();
  func_0x0001080c9458(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c27bcd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1080c6f34; end: 1080c6f93; -[SCValdiTapGestureRecognizer triggerAtLocation:forState:] */

void FUN_1080c6f34(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 3) {
    func_0x0001080c9598();
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080c9588(&DAT_112774704);
    func_0x0001080c948c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1080c6f94; end: 1080c71f3;  */

long * FUN_1080c6f94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    long param_5,undefined8 param_6,long *param_7)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined *puVar2;
  undefined8 ****ppppuVar3;
  undefined8 extraout_x8;
  ulong uVar4;
  undefined8 ****ppppuVar5;
  long *plVar6;
  ulong unaff_x24;
  long unaff_x25;
  undefined1 auStack_120 [8];
  char cStack_118;
  undefined8 ***pppuStack_110;
  ulong uStack_108;
  ulong uStack_100;
  undefined8 **appuStack_f8 [6];
  long lStack_c8;
  ulong uStack_c0;
  undefined8 uStack_80;
  
  func_0x0001080c95f8();
  uStack_80 = extraout_x8;
  _objc_retain();
  func_0x0001080c93c4();
  plVar6 = param_7;
  _objc_retain();
  if (param_7 != (long *)0x0) {
    if (param_5 == 0) {
      func_0x00010b96bf1c();
      _objc_retainAutoreleasedReturnValue();
      plVar1 = plVar6;
      func_0x00010c076f00();
      if ((int)plVar1 != 0) {
        puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0eeea0(plVar6);
        _objc_release(puVar2);
      }
      _objc_release(plVar6);
    }
    func_0x00010b988570(&lStack_c8);
    uStack_100 = 2;
    uStack_108 = 0;
    unaff_x25 = uStack_c0 * 0x18;
    in_ZR = uStack_c0 == 3;
    pppuStack_110 = appuStack_f8;
    if (uStack_c0 < 3) {
      unaff_x24 = uStack_c0;
      if (uStack_c0 != 0) {
        func_0x0001080c9674(appuStack_f8);
      }
    }
    else {
      ppppuVar3 = &pppuStack_110;
      FUN_1080c9134(ppppuVar3,uStack_c0);
      if ((undefined8 ****)pppuStack_110 != (undefined8 ****)0x0) {
        uStack_108 = 0;
        in_ZR = appuStack_f8 == pppuStack_110;
        if (!(bool)in_ZR) {
          __ZdlPv();
        }
      }
      uVar4 = 0;
      uStack_108 = 0;
      uStack_100 = uStack_c0;
      ppppuVar5 = ppppuVar3;
      pppuStack_110 = ppppuVar3;
      if ((lStack_c8 != 0) && (ppppuVar3 != (undefined8 ****)0x0)) {
        func_0x0001080c9674(ppppuVar3);
        uVar4 = uStack_108;
        ppppuVar5 = ppppuVar3 + uStack_c0 * 3;
      }
      unaff_x24 = ((long)ppppuVar5 - (long)ppppuVar3) / 0x18 + uVar4;
    }
    uStack_108 = unaff_x24;
    func_0x00010b9884d4(auStack_120,param_1,param_2);
    func_0x0001080c9558();
    if (cStack_118 != '\0') {
      func_0x00010b988454();
      func_0x0001080c94dc();
      func_0x00010b9882a4();
    }
    func_0x0001080c9414();
    plVar6 = &lStack_c8;
    FUN_1080c9184(plVar6);
  }
  func_0x0001080c942c();
  func_0x0001080c933c();
  func_0x0001080c9334();
  func_0x0001080c9314(uStack_80);
  if ((bool)in_ZR) {
    return plVar6;
  }
  ___stack_chk_fail();
  _objc_release(unaff_x25);
  _objc_release(unaff_x24);
  func_0x0001080c942c();
  func_0x0001080c933c();
  func_0x0001080c9334();
  __Unwind_Resume(plVar6);
  func_0x0001080c91fc();
  puVar2 = PTR_PTR_1126d7b48;
  _objc_opt_class();
  func_0x0001080c9444();
  if (((ulong)puVar2 & 1) == 0) {
    puVar2 = PTR_PTR_1126d9200;
    _objc_opt_class();
    func_0x0001080c9444();
    if (((ulong)puVar2 & 1) == 0) {
      plVar6 = (long *)PTR_PTR_1126d9300;
      _objc_opt_class();
      func_0x0001080c9444();
      if (((ulong)plVar6 & 1) == 0) {
        func_0x0001080c9518();
        func_0x0001080c93f8();
        _objc_msgSendSuper2();
        goto LAB_1080c7254;
      }
    }
  }
  plVar6 = (long *)0x1;
LAB_1080c7254:
  func_0x0001080c9334();
  return plVar6;
}



/* Entry: 1080c71f4; end: 1080c728b; -[SCValdiTapGestureRecognizer shouldRequireFailureOfGestureRecognizer:] */

undefined * FUN_1080c71f4(void)

{
  undefined *puVar1;
  
  func_0x0001080c91fc();
  puVar1 = PTR_PTR_1126d7b48;
  _objc_opt_class();
  func_0x0001080c9444();
  if (((ulong)puVar1 & 1) == 0) {
    puVar1 = PTR_PTR_1126d9200;
    _objc_opt_class();
    func_0x0001080c9444();
    if (((ulong)puVar1 & 1) == 0) {
      puVar1 = PTR_PTR_1126d9300;
      _objc_opt_class();
      func_0x0001080c9444();
      if (((ulong)puVar1 & 1) == 0) {
        func_0x0001080c9518();
        func_0x0001080c93f8();
        _objc_msgSendSuper2();
        goto LAB_1080c7254;
      }
    }
  }
  puVar1 = (undefined *)0x1;
LAB_1080c7254:
  func_0x0001080c9334();
  return puVar1;
}



/* Entry: 1080c728c; end: 1080c72b7; -[SCValdiTapGestureRecognizer .cxx_destruct] */

void FUN_1080c728c(void)

{
  func_0x0001080c928c();
  func_0x0001080c9260();
  func_0x0001080c9404();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)();
  return;
}



/* Entry: 1080c72b8; end: 1080c72e7; -[SCValdiAttributedTextOnTapGestureRecognizer reset] */

void FUN_1080c72b8(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c1a17c0(param_1,param_2,0);
  func_0x0001080c920c(PTR_PTR_1126fc680);
  return;
}



/* Entry: 1080c72e8; end: 1080c734b; -[SCValdiAttributedTextOnTapGestureRecognizer canBePreventedByGestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1080c72e8(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x0001080c91fc();
  if ((*(byte *)(unaff_x20 + _DAT_1127746f8) & 1) == 0) {
    func_0x0001080c93f8();
    _objc_msgSendSuper2();
  }
  else {
    param_1 = 0;
  }
  func_0x0001080c9334();
  return param_1;
}



/* Entry: 1080c734c; end: 1080c7417; -[SCValdiAttributedTextOnTapGestureRecognizer gestureRecognizerShouldBegin:] */

bool FUN_1080c734c(void)

{
  long unaff_x20;
  
  func_0x0001080c91fc();
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09ef00();
  func_0x0001080c94ec();
  func_0x0001080c942c();
  func_0x00010bfbc060();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080c9458();
  func_0x00010c0e7020();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080c93e0();
  func_0x00010c1a17c0();
  func_0x0001080c942c();
  func_0x0001080c9334();
  return unaff_x20 != 0;
}



/* Entry: 1080c7418; end: 1080c7437; -[SCValdiAttributedTextOnTapGestureRecognizer functionProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080c7418(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127746fc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1080c7438; end: 1080c744b; -[SCValdiAttributedTextOnTapGestureRecognizer setFunctionProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080c7438(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_1127746fc,param_3);
  return;
}



/* Entry: 1080c744c; end: 1080c745b; -[SCValdiAttributedTextOnTapGestureRecognizer cannotBePreventedByOtherGestureRecognizers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1080c744c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127746f8);
}



/* Entry: 1080c745c; end: 1080c746b; -[SCValdiAttributedTextOnTapGestureRecognizer setCannotBePreventedByOtherGestureRecognizers:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080c745c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_1127746f8) = param_3;
  return;
}



/* Entry: 1080c746c; end: 1080c747b; -[SCValdiAttributedTextOnTapGestureRecognizer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080c746c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127746fc);
  return;
}



/* Entry: 1080c747c; end: 1080c74cf; -[SCValdiFastDoubleTapGestureRecognizer init] */

long FUN_1080c747c(long param_1,undefined8 param_2)

{
  func_0x0001080c9394();
  func_0x0001080c94f8();
  func_0x0001080c9384();
  func_0x0001080c962c();
  if (param_1 != 0) {
    func_0x00010c1d0120(param_1,param_2,2);
    func_0x0001080c9530();
  }
  return param_1;
}



/* Entry: 1080c74d0; end: 1080c754b; -[SCValdiFastDoubleTapGestureRecognizer dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080c74d0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long alStack_30 [2];
  
  lVar2 = (long)_DAT_112774710;
  func_0x00010c069d00(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  func_0x0001080c94f8();
  alStack_30[0] = param_1;
  _objc_msgSendSuper2(alStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1080c754c; end: 1080c757b; -[SCValdiFastDoubleTapGestureRecognizer reset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080c754c(void)

{
  func_0x0001080c9308((long)_DAT_112774714);
  func_0x0001080c94f8();
  func_0x0001080c920c();
  return;
}



/* Entry: 1080c757c; end: 1080c764f; -[SCValdiFastDoubleTapGestureRecognizer touchesBegan:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080c757c(void)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong unaff_x19;
  long unaff_x21;
  long lVar3;
  
  func_0x0001080c9680();
  func_0x0001080c9220();
  func_0x0001080c93c4();
  func_0x0001080c93c4();
  func_0x0001080c92ec();
  func_0x0001080c94f8();
  func_0x0001080c9364();
  func_0x0001080c91cc();
  func_0x00010bf00560();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = unaff_x19;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080c9424();
  func_0x00010c268ec0();
  func_0x0001080c9668();
  if (uVar1 <= unaff_x19) {
    lVar3 = (long)_DAT_112774710;
    func_0x00010c069d00(*(undefined8 *)(unaff_x21 + lVar3));
    uVar2 = *(undefined8 *)(unaff_x21 + lVar3);
    *(undefined8 *)(unaff_x21 + lVar3) = 0;
    _objc_release(uVar2);
  }
  func_0x0001080c93e0();
  func_0x0001080c933c();
  func_0x0001080c9334();
  return;
}



/* Entry: 1080c7650; end: 1080c76a3; -[SCValdiFastDoubleTapGestureRecognizer touchesMoved:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080c7650(void)

{
  FUN_1080c91b8();
  func_0x0001080c91ec((long)_DAT_112774714);
  func_0x0001080c93f0();
  func_0x0001080c93e0();
  func_0x0001080c94f8();
  func_0x0001080c9354();
  func_0x0001080c91cc();
  func_0x0001080c933c();
  func_0x0001080c9334();
  return;
}



/* Entry: 1080c76a4; end: 1080c77ab; -[SCValdiFastDoubleTapGestureRecognizer touchesEnded:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080c76a4(void)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong unaff_x19;
  long unaff_x21;
  long lVar4;
  
  func_0x0001080c9680();
  func_0x0001080c9220();
  func_0x0001080c93c4();
  func_0x0001080c93c4();
  func_0x0001080c92ec();
  func_0x0001080c94f8();
  func_0x0001080c9344();
  func_0x0001080c91cc();
  func_0x00010bf00560();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = unaff_x19;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080c9424();
  func_0x00010c268ec0();
  func_0x0001080c9668();
  if (unaff_x19 < uVar1) {
    lVar4 = (long)_DAT_112774710;
    func_0x00010c069d00(*(undefined8 *)(unaff_x21 + lVar4));
    puVar2 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
    func_0x00010c1503c0(0x3fc3333333333333);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(unaff_x21 + lVar4);
    *(undefined **)(unaff_x21 + lVar4) = puVar2;
    _objc_release(uVar3);
  }
  func_0x0001080c93e0();
  func_0x0001080c933c();
  func_0x0001080c9334();
  return;
}



/* Entry: 1080c77ac; end: 1080c77ff; -[SCValdiFastDoubleTapGestureRecognizer touchesCancelled:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080c77ac(void)

{
  FUN_1080c91b8();
  func_0x0001080c91ec((long)_DAT_112774714);
  func_0x0001080c93f0();
  func_0x0001080c93e0();
  func_0x0001080c94f8();
  func_0x0001080c9374();
  func_0x0001080c91cc();
  func_0x0001080c933c();
  func_0x0001080c9334();
  return;
}



/* Entry: 1080c7800; end: 1080c7823; -[SCValdiFastDoubleTapGestureRecognizer setFunction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080c7800(void)

{
  func_0x0001080c91fc();
  func_0x0001080c944c((long)_DAT_112774718);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1080c7824; end: 1080c7847; -[SCValdiFastDoubleTapGestureRecognizer setPredicate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080c7824(void)

{
  func_0x0001080c91fc();
  func_0x0001080c944c((long)_DAT_11277471c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1080c7848; end: 1080c7853; -[SCValdiFastDoubleTapGestureRecognizer gestureRecognizerShouldBegin:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1080c7848(long param_1)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 unaff_x19;
  long unaff_x20;
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [72];
  undefined8 uStack_58;
  
  func_0x0001080c95f8(param_1,*(undefined8 *)(param_1 + _DAT_11277471c));
  uStack_58 = extraout_x8;
  _objc_retain();
  func_0x0001080c93c4();
  if (unaff_x20 == 0) {
    unaff_x20 = 1;
  }
  else {
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09ef00();
    func_0x0001080c94ec();
    func_0x0001080c946c();
    func_0x00010b988770(auStack_a0);
    func_0x0001080c9458(auStack_b0,unaff_x19);
    func_0x00010b9884d4();
    func_0x0001080c9558();
    func_0x0001080c9424();
    func_0x0001080c942c();
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b988854();
    param_1 = unaff_x20;
    func_0x0001080c9424();
    func_0x0001080c9414();
  }
  func_0x0001080c933c();
  func_0x0001080c9334();
  func_0x0001080c9314(uStack_58);
  if ((bool)in_ZR) {
    return unaff_x20;
  }
  ___stack_chk_fail();
  func_0x0001080c9424();
  func_0x0001080c9414();
  func_0x0001080c933c();
  func_0x0001080c9334();
  __Unwind_Resume(param_1);
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080c9328();
  func_0x0001080c94ec();
  func_0x0001080c933c();
  func_0x0001080c946c();
  func_0x0001080c9458(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c27bcd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return param_1;
}



/* Entry: 1080c7854; end: 1080c78a7; -[SCValdiFastDoubleTapGestureRecognizer _handleGestureRecognizer:] */

void FUN_1080c7854(undefined8 param_1)

{
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080c9328();
  func_0x0001080c94ec();
  func_0x0001080c933c();
  func_0x0001080c946c();
  func_0x0001080c9458(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c27bcd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1080c78a8; end: 1080c7907; -[SCValdiFastDoubleTapGestureRecognizer triggerAtLocation:forState:] */

void FUN_1080c78a8(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 3) {
    func_0x0001080c9598();
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080c9588(&DAT_112774714);
    func_0x0001080c948c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1080c7908; end: 1080c790f; -[SCValdiFastDoubleTapGestureRecognizer _setGestureRecognizerStateCancelled] */

void FUN_1080c7908(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c209fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setState__112660218,4);
  return;
}



/* Entry: 1080c7910; end: 1080c7953; -[SCValdiFastDoubleTapGestureRecognizer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080c7910(long param_1)

{
  func_0x0001080c92c8((long)_DAT_112774710);
  func_0x0001080c9270((long)_DAT_11277471c);
  func_0x0001080c9270((long)_DAT_112774718);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112774714,0);
  return;
}



/* Entry: 1080c7954; end: 1080c79a3; -[SCValdiLongPressGestureRecognizer init] */

long FUN_1080c7954(long param_1)

{
  func_0x0001080c9394();
  func_0x0001080c9560();
  func_0x0001080c9384();
  func_0x0001080c93d4();
  if (param_1 != 0) {
    func_0x00010c1c8340(0x3fd0000000000000,param_1);
    func_0x0001080c927c();
  }
  return param_1;
}



/* Entry: 1080c79a4; end: 1080c79cf; -[SCValdiLongPressGestureRecognizer reset] */

void FUN_1080c79a4(void)

{
  func_0x0001080c95ec();
  func_0x0001080c9308();
  func_0x0001080c9560();
  func_0x0001080c920c();
  return;
}



/* Entry: 1080c79d0; end: 1080c7a1f; -[SCValdiLongPressGestureRecognizer touchesBegan:withEvent:] */

void FUN_1080c79d0(void)

{
  FUN_1080c91b8();
  func_0x0001080c95ec();
  func_0x0001080c91ec();
  func_0x0001080c93f0();
  func_0x0001080c93e0();
  func_0x0001080c9560();
  func_0x0001080c9364();
  func_0x0001080c91cc();
  func_0x0001080c933c();
  func_0x0001080c9334();
  return;
}



/* Entry: 1080c7a20; end: 1080c7a6f; -[SCValdiLongPressGestureRecognizer touchesMoved:withEvent:] */

void FUN_1080c7a20(void)

{
  FUN_1080c91b8();
  func_0x0001080c95ec();
  func_0x0001080c91ec();
  func_0x0001080c93f0();
  func_0x0001080c93e0();
  func_0x0001080c9560();
  func_0x0001080c9354();
  func_0x0001080c91cc();
  func_0x0001080c933c();
  func_0x0001080c9334();
  return;
}



/* Entry: 1080c7a70; end: 1080c7abf; -[SCValdiLongPressGestureRecognizer touchesEnded:withEvent:] */

void FUN_1080c7a70(void)

{
  FUN_1080c91b8();
  func_0x0001080c95ec();
  func_0x0001080c91ec();
  func_0x0001080c93f0();
  func_0x0001080c93e0();
  func_0x0001080c9560();
  func_0x0001080c9344();
  func_0x0001080c91cc();
  func_0x0001080c933c();
  func_0x0001080c9334();
  return;
}



/* Entry: 1080c7ac0; end: 1080c7b0f; -[SCValdiLongPressGestureRecognizer touchesCancelled:withEvent:] */

void FUN_1080c7ac0(void)

{
  FUN_1080c91b8();
  func_0x0001080c95ec();
  func_0x0001080c91ec();
  func_0x0001080c93f0();
  func_0x0001080c93e0();
  func_0x0001080c9560();
  func_0x0001080c9374();
  func_0x0001080c91cc();
  func_0x0001080c933c();
  func_0x0001080c9334();
  return;
}



/* Entry: 1080c7b10; end: 1080c7b33; -[SCValdiLongPressGestureRecognizer setFunction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080c7b10(void)

{
  func_0x0001080c91fc();
  func_0x0001080c944c((long)_DAT_112774724);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1080c7b34; end: 1080c7b57; -[SCValdiLongPressGestureRecognizer setPredicate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080c7b34(void)

{
  func_0x0001080c91fc();
  func_0x0001080c944c((long)_DAT_112774728);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1080c7b58; end: 1080c7b63; -[SCValdiLongPressGestureRecognizer gestureRecognizerShouldBegin:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1080c7b58(long param_1)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 unaff_x19;
  long unaff_x20;
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [72];
  undefined8 uStack_58;
  
  func_0x0001080c95f8(param_1,*(undefined8 *)(param_1 + _DAT_112774728));
  uStack_58 = extraout_x8;
  _objc_retain();
  func_0x0001080c93c4();
  if (unaff_x20 == 0) {
    unaff_x20 = 1;
  }
  else {
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09ef00();
    func_0x0001080c94ec();
    func_0x0001080c946c();
    func_0x00010b988770(auStack_a0);
    func_0x0001080c9458(auStack_b0,unaff_x19);
    func_0x00010b9884d4();
    func_0x0001080c9558();
    func_0x0001080c9424();
    func_0x0001080c942c();
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b988854();
    param_1 = unaff_x20;
    func_0x0001080c9424();
    func_0x0001080c9414();
  }
  func_0x0001080c933c();
  func_0x0001080c9334();
  func_0x0001080c9314(uStack_58);
  if ((bool)in_ZR) {
    return unaff_x20;
  }
  ___stack_chk_fail();
  func_0x0001080c9424();
  func_0x0001080c9414();
  func_0x0001080c933c();
  func_0x0001080c9334();
  __Unwind_Resume(param_1);
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080c9328();
  func_0x0001080c94ec();
  func_0x0001080c933c();
  func_0x0001080c946c();
  func_0x0001080c9458(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c27bcd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return param_1;
}



/* Entry: 1080c7b64; end: 1080c7bb7; -[SCValdiLongPressGestureRecognizer _handleGestureRecognizer:] */

void FUN_1080c7b64(undefined8 param_1)

{
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080c9328();
  func_0x0001080c94ec();
  func_0x0001080c933c();
  func_0x0001080c946c();
  func_0x0001080c9458(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c27bcd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1080c7bb8; end: 1080c7c17; -[SCValdiLongPressGestureRecognizer triggerAtLocation:forState:] */

void FUN_1080c7bb8(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 1) {
    func_0x0001080c9598();
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080c9588(&DAT_112774720);
    func_0x0001080c948c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1080c7c18; end: 1080c7c43; -[SCValdiLongPressGestureRecognizer .cxx_destruct] */

void FUN_1080c7c18(void)

{
  func_0x0001080c928c();
  func_0x0001080c9260();
  func_0x0001080c9404();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)();
  return;
}



/* Entry: 1080c7c44; end: 1080c7c83; -[SCValdiDragGestureRecognizer init] */

long FUN_1080c7c44(long param_1)

{
  func_0x0001080c9394();
  func_0x0001080c9504();
  func_0x0001080c9384();
  func_0x0001080c93d4();
  if (param_1 != 0) {
    func_0x0001080c927c();
  }
  return param_1;
}



/* Entry: 1080c7c84; end: 1080c7caf; -[SCValdiDragGestureRecognizer reset] */

void FUN_1080c7c84(void)

{
  func_0x0001080c95e0();
  func_0x0001080c9308();
  func_0x0001080c9504();
  func_0x0001080c920c();
  return;
}



/* Entry: 1080c7cb0; end: 1080c7cff; -[SCValdiDragGestureRecognizer touchesBegan:withEvent:] */

void FUN_1080c7cb0(void)

{
  FUN_1080c91b8();
  func_0x0001080c95e0();
  func_0x0001080c91ec();
  func_0x0001080c93f0();
  func_0x0001080c93e0();
  func_0x0001080c9504();
  func_0x0001080c9364();
  func_0x0001080c91cc();
  func_0x0001080c933c();
  func_0x0001080c9334();
  return;
}



/* Entry: 1080c7d00; end: 1080c7d4f; -[SCValdiDragGestureRecognizer touchesMoved:withEvent:] */

void FUN_1080c7d00(void)

{
  FUN_1080c91b8();
  func_0x0001080c95e0();
  func_0x0001080c91ec();
  func_0x0001080c93f0();
  func_0x0001080c93e0();
  func_0x0001080c9504();
  func_0x0001080c9354();
  func_0x0001080c91cc();
  func_0x0001080c933c();
  func_0x0001080c9334();
  return;
}



/* Entry: 1080c7d50; end: 1080c7d9f; -[SCValdiDragGestureRecognizer touchesEnded:withEvent:] */

void FUN_1080c7d50(void)

{
  FUN_1080c91b8();
  func_0x0001080c95e0();
  func_0x0001080c91ec();
  func_0x0001080c93f0();
  func_0x0001080c93e0();
  func_0x0001080c9504();
  func_0x0001080c9344();
  func_0x0001080c91cc();
  func_0x0001080c933c();
  func_0x0001080c9334();
  return;
}



/* Entry: 1080c7da0; end: 1080c7def; -[SCValdiDragGestureRecognizer touchesCancelled:withEvent:] */

void FUN_1080c7da0(void)

{
  FUN_1080c91b8();
  func_0x0001080c95e0();
  func_0x0001080c91ec();
  func_0x0001080c93f0();
  func_0x0001080c93e0();
  func_0x0001080c9504();
  func_0x0001080c9374();
  func_0x0001080c91cc();
  func_0x0001080c933c();
  func_0x0001080c9334();
  return;
}



/* Entry: 1080c7df0; end: 1080c7e13; -[SCValdiDragGestureRecognizer setFunction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080c7df0(void)

{
  func_0x0001080c91fc();
  func_0x0001080c944c((long)_DAT_112774730);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1080c7e14; end: 1080c7e37; -[SCValdiDragGestureRecognizer setPredicate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080c7e14(void)

{
  func_0x0001080c91fc();
  func_0x0001080c944c((long)_DAT_112774734);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1080c7e38; end: 1080c7faf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1080c7e38(undefined8 param_1)

{
  undefined1 in_ZR;
  long lVar1;
  long unaff_x19;
  undefined8 uVar2;
  undefined8 uStack_88;
  
  func_0x0001080c929c();
  func_0x0001080c946c();
  func_0x00010b988390();
  lVar1 = unaff_x19;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080c9328();
  func_0x0001080c9654();
  func_0x0001080c94ec();
  func_0x0001080c9474();
  func_0x00010c27adc0();
  uVar2 = param_1;
  func_0x0001080c9474();
  func_0x00010c297a00();
  func_0x00010c2954e0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080c9638(uVar2);
  func_0x0001080c9424();
  func_0x00010c2954e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080c9638(param_1);
  func_0x0001080c9424();
  func_0x0001080c94d0();
  func_0x0001080c93a4();
  func_0x00010b98d44c();
  func_0x0001080c9498();
  func_0x0001080c933c();
  func_0x0001080c9334();
  func_0x0001080c9314(uStack_88);
  if ((bool)in_ZR) {
    return lVar1;
  }
  ___stack_chk_fail();
  func_0x0001080c9498();
  func_0x0001080c933c();
  func_0x0001080c9334();
  func_0x0001080c93cc();
  if (*(long *)(lVar1 + _DAT_112774734) == 0) {
    unaff_x19 = 1;
  }
  else {
    func_0x0001080c95b8();
    FUN_1080c7e38();
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080c9434();
    func_0x0001080c9334();
    func_0x0001080c9414();
  }
  return unaff_x19;
}



/* Entry: 1080c7fb0; end: 1080c802f; -[SCValdiDragGestureRecognizer gestureRecognizerShouldBegin:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1080c7fb0(long param_1)

{
  undefined8 unaff_x19;
  
  if (*(long *)(param_1 + _DAT_112774734) == 0) {
    unaff_x19 = 1;
  }
  else {
    func_0x0001080c95b8();
    FUN_1080c7e38();
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080c9434();
    func_0x0001080c9334();
    func_0x0001080c9414();
  }
  return unaff_x19;
}



/* Entry: 1080c8030; end: 1080c80cb; -[SCValdiDragGestureRecognizer _handleGestureRecognizer:] */

void FUN_1080c8030(void)

{
  func_0x0001080c9680();
  func_0x0001080c95a8();
  FUN_1080c7e38();
  func_0x0001080c9640();
  func_0x0001080c9524();
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080c9578(&DAT_11277472c);
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080c94a0();
  func_0x0001080c94dc();
  func_0x0001080c9480();
  func_0x0001080c942c();
  func_0x0001080c9334();
  func_0x0001080c9414();
  return;
}



/* Entry: 1080c80cc; end: 1080c8133; -[SCValdiDragGestureRecognizer shouldRequireFailureOfGestureRecognizer:] */

undefined * FUN_1080c80cc(void)

{
  undefined *puVar1;
  
  func_0x0001080c91fc();
  puVar1 = PTR_PTR_1126d91f0;
  _objc_opt_class();
  func_0x0001080c9444();
  if (((ulong)puVar1 & 1) == 0) {
    func_0x0001080c9504();
    func_0x0001080c93f8();
    _objc_msgSendSuper2();
  }
  else {
    puVar1 = (undefined *)0x0;
  }
  func_0x0001080c9334();
  return puVar1;
}



/* Entry: 1080c8134; end: 1080c819b; -[SCValdiDragGestureRecognizer shouldBeRequiredToFailByGestureRecognizer:] */

undefined * FUN_1080c8134(void)

{
  undefined *puVar1;
  
  func_0x0001080c91fc();
  puVar1 = PTR_PTR_1126d91f0;
  _objc_opt_class();
  func_0x0001080c9444();
  if (((ulong)puVar1 & 1) == 0) {
    func_0x0001080c9504();
    func_0x0001080c93f8();
    _objc_msgSendSuper2();
  }
  else {
    puVar1 = (undefined *)0x0;
  }
  func_0x0001080c9334();
  return puVar1;
}



/* Entry: 1080c819c; end: 1080c81c7; -[SCValdiDragGestureRecognizer .cxx_destruct] */

void FUN_1080c819c(void)

{
  func_0x0001080c928c();
  func_0x0001080c9260();
  func_0x0001080c9404();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)();
  return;
}



/* Entry: 1080c81c8; end: 1080c8207; -[SCValdiPinchGestureRecognizer init] */

long FUN_1080c81c8(long param_1)

{
  func_0x0001080c9394();
  func_0x0001080c956c();
  func_0x0001080c9384();
  func_0x0001080c93d4();
  if (param_1 != 0) {
    func_0x0001080c927c();
  }
  return param_1;
}



/* Entry: 1080c8208; end: 1080c8233; -[SCValdiPinchGestureRecognizer reset] */

void FUN_1080c8208(void)

{
  func_0x0001080c9610();
  func_0x0001080c9308();
  func_0x0001080c956c();
  func_0x0001080c920c();
  return;
}



/* Entry: 1080c8234; end: 1080c8283; -[SCValdiPinchGestureRecognizer touchesBegan:withEvent:] */

void FUN_1080c8234(void)

{
  FUN_1080c91b8();
  func_0x0001080c9610();
  func_0x0001080c91ec();
  func_0x0001080c93f0();
  func_0x0001080c93e0();
  func_0x0001080c956c();
  func_0x0001080c9364();
  func_0x0001080c91cc();
  func_0x0001080c933c();
  func_0x0001080c9334();
  return;
}



/* Entry: 1080c8284; end: 1080c82d3; -[SCValdiPinchGestureRecognizer touchesMoved:withEvent:] */

void FUN_1080c8284(void)

{
  FUN_1080c91b8();
  func_0x0001080c9610();
  func_0x0001080c91ec();
  func_0x0001080c93f0();
  func_0x0001080c93e0();
  func_0x0001080c956c();
  func_0x0001080c9354();
  func_0x0001080c91cc();
  func_0x0001080c933c();
  func_0x0001080c9334();
  return;
}



/* Entry: 1080c82d4; end: 1080c8323; -[SCValdiPinchGestureRecognizer touchesEnded:withEvent:] */

void FUN_1080c82d4(void)

{
  FUN_1080c91b8();
  func_0x0001080c9610();
  func_0x0001080c91ec();
  func_0x0001080c93f0();
  func_0x0001080c93e0();
  func_0x0001080c956c();
  func_0x0001080c9344();
  func_0x0001080c91cc();
  func_0x0001080c933c();
  func_0x0001080c9334();
  return;
}



/* Entry: 1080c8324; end: 1080c8373; -[SCValdiPinchGestureRecognizer touchesCancelled:withEvent:] */

void FUN_1080c8324(void)

{
  FUN_1080c91b8();
  func_0x0001080c9610();
  func_0x0001080c91ec();
  func_0x0001080c93f0();
  func_0x0001080c93e0();
  func_0x0001080c956c();
  func_0x0001080c9374();
  func_0x0001080c91cc();
  func_0x0001080c933c();
  func_0x0001080c9334();
  return;
}



/* Entry: 1080c8374; end: 1080c8397; -[SCValdiPinchGestureRecognizer setFunction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080c8374(void)

{
  func_0x0001080c91fc();
  func_0x0001080c944c((long)_DAT_11277473c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1080c8398; end: 1080c83bb; -[SCValdiPinchGestureRecognizer setPredicate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080c8398(void)

{
  func_0x0001080c91fc();
  func_0x0001080c944c((long)_DAT_112774740);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1080c83bc; end: 1080c8497;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1080c83bc(void)

{
  undefined1 in_ZR;
  long lVar1;
  long unaff_x19;
  undefined8 uStack_58;
  
  func_0x0001080c929c();
  func_0x0001080c946c();
  func_0x00010b988390();
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080c9328();
  func_0x0001080c9654();
  func_0x0001080c94ec();
  func_0x0001080c94d0();
  lVar1 = unaff_x19;
  func_0x00010c14e120();
  func_0x0001080c93a4();
  func_0x00010b98d5ec();
  func_0x0001080c9498();
  func_0x0001080c933c();
  func_0x0001080c9334();
  func_0x0001080c9314(uStack_58);
  if ((bool)in_ZR) {
    return lVar1;
  }
  ___stack_chk_fail();
  func_0x0001080c933c();
  func_0x0001080c9334();
  func_0x0001080c93cc();
  if (*(long *)(lVar1 + _DAT_112774740) == 0) {
    unaff_x19 = 1;
  }
  else {
    func_0x0001080c95b8();
    FUN_1080c83bc();
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080c9434();
    func_0x0001080c9334();
    func_0x0001080c9414();
  }
  return unaff_x19;
}



/* Entry: 1080c8498; end: 1080c8517; -[SCValdiPinchGestureRecognizer gestureRecognizerShouldBegin:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1080c8498(long param_1)

{
  undefined8 unaff_x19;
  
  if (*(long *)(param_1 + _DAT_112774740) == 0) {
    unaff_x19 = 1;
  }
  else {
    func_0x0001080c95b8();
    FUN_1080c83bc();
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080c9434();
    func_0x0001080c9334();
    func_0x0001080c9414();
  }
  return unaff_x19;
}



/* Entry: 1080c8518; end: 1080c85b3; -[SCValdiPinchGestureRecognizer _handleGestureRecognizer:] */

void FUN_1080c8518(void)

{
  func_0x0001080c9680();
  func_0x0001080c95a8();
  FUN_1080c83bc();
  func_0x0001080c9640();
  func_0x0001080c9524();
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080c9578(&DAT_112774738);
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080c94a0();
  func_0x0001080c94dc();
  func_0x0001080c9480();
  func_0x0001080c942c();
  func_0x0001080c9334();
  func_0x0001080c9414();
  return;
}



/* Entry: 1080c85b4; end: 1080c8617; -[SCValdiPinchGestureRecognizer gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

uint FUN_1080c85b4(void)

{
  undefined *puVar1;
  uint uVar2;
  
  func_0x0001080c965c();
  puVar1 = PTR_PTR_1126d9208;
  _objc_opt_class();
  func_0x0001080c9444();
  if (((ulong)puVar1 & 1) == 0) {
    puVar1 = PTR_PTR_1126d9218;
    _objc_opt_class(PTR_PTR_1126d9218);
    uVar2 = (uint)puVar1;
    func_0x0001080c9444();
  }
  else {
    uVar2 = 1;
  }
  func_0x0001080c9334();
  return uVar2 & 1;
}



/* Entry: 1080c8618; end: 1080c8643; -[SCValdiPinchGestureRecognizer .cxx_destruct] */

void FUN_1080c8618(void)

{
  func_0x0001080c928c();
  func_0x0001080c9260();
  func_0x0001080c9404();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)();
  return;
}



/* Entry: 1080c8644; end: 1080c8683; -[SCValdiRotationGestureRecognizer init] */

long FUN_1080c8644(long param_1)

{
  func_0x0001080c9394();
  func_0x0001080c954c();
  func_0x0001080c9384();
  func_0x0001080c93d4();
  if (param_1 != 0) {
    func_0x0001080c927c();
  }
  return param_1;
}



/* Entry: 1080c8684; end: 1080c87a3;  */

void FUN_1080c8684(void)

{
  undefined1 in_ZR;
  undefined8 unaff_x19;
  undefined8 uStack_78;
  
  func_0x0001080c929c();
  func_0x0001080c946c();
  func_0x00010b988390();
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080c9328();
  func_0x0001080c9654();
  func_0x0001080c94ec();
  func_0x00010c2954e0(unaff_x19);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c141a80();
  func_0x0001080c9638(unaff_x19);
  func_0x0001080c9424();
  func_0x0001080c94d0();
  func_0x0001080c93a4();
  func_0x00010b98d6a8();
  func_0x0001080c9498();
  func_0x0001080c933c();
  func_0x0001080c9334();
  func_0x0001080c9314(uStack_78);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001080c9498();
  func_0x0001080c933c();
  func_0x0001080c9334();
  func_0x0001080c93cc();
  func_0x0001080c95d4();
  func_0x0001080c9308();
  func_0x0001080c954c();
  func_0x0001080c920c();
  return;
}



/* Entry: 1080c87a4; end: 1080c87cf; -[SCValdiRotationGestureRecognizer reset] */

void FUN_1080c87a4(void)

{
  func_0x0001080c95d4();
  func_0x0001080c9308();
  func_0x0001080c954c();
  func_0x0001080c920c();
  return;
}



/* Entry: 1080c87d0; end: 1080c881f; -[SCValdiRotationGestureRecognizer touchesBegan:withEvent:] */

void FUN_1080c87d0(void)

{
  FUN_1080c91b8();
  func_0x0001080c95d4();
  func_0x0001080c91ec();
  func_0x0001080c93f0();
  func_0x0001080c93e0();
  func_0x0001080c954c();
  func_0x0001080c9364();
  func_0x0001080c91cc();
  func_0x0001080c933c();
  func_0x0001080c9334();
  return;
}



/* Entry: 1080c8820; end: 1080c886f; -[SCValdiRotationGestureRecognizer touchesMoved:withEvent:] */

void FUN_1080c8820(void)

{
  FUN_1080c91b8();
  func_0x0001080c95d4();
  func_0x0001080c91ec();
  func_0x0001080c93f0();
  func_0x0001080c93e0();
  func_0x0001080c954c();
  func_0x0001080c9354();
  func_0x0001080c91cc();
  func_0x0001080c933c();
  func_0x0001080c9334();
  return;
}



/* Entry: 1080c8870; end: 1080c88bf; -[SCValdiRotationGestureRecognizer touchesEnded:withEvent:] */

void FUN_1080c8870(void)

{
  FUN_1080c91b8();
  func_0x0001080c95d4();
  func_0x0001080c91ec();
  func_0x0001080c93f0();
  func_0x0001080c93e0();
  func_0x0001080c954c();
  func_0x0001080c9344();
  func_0x0001080c91cc();
  func_0x0001080c933c();
  func_0x0001080c9334();
  return;
}



/* Entry: 1080c88c0; end: 1080c890f; -[SCValdiRotationGestureRecognizer touchesCancelled:withEvent:] */

void FUN_1080c88c0(void)

{
  FUN_1080c91b8();
  func_0x0001080c95d4();
  func_0x0001080c91ec();
  func_0x0001080c93f0();
  func_0x0001080c93e0();
  func_0x0001080c954c();
  func_0x0001080c9374();
  func_0x0001080c91cc();
  func_0x0001080c933c();
  func_0x0001080c9334();
  return;
}



/* Entry: 1080c8910; end: 1080c8933; -[SCValdiRotationGestureRecognizer setFunction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080c8910(void)

{
  func_0x0001080c91fc();
  func_0x0001080c944c((long)_DAT_112774748);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1080c8934; end: 1080c8957; -[SCValdiRotationGestureRecognizer setPredicate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080c8934(void)

{
  func_0x0001080c91fc();
  func_0x0001080c944c((long)_DAT_11277474c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1080c8958; end: 1080c89d7; -[SCValdiRotationGestureRecognizer gestureRecognizerShouldBegin:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1080c8958(long param_1)

{
  undefined8 unaff_x19;
  
  if (*(long *)(param_1 + _DAT_11277474c) == 0) {
    unaff_x19 = 1;
  }
  else {
    func_0x0001080c95b8();
    FUN_1080c8684();
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080c9434();
    func_0x0001080c9334();
    func_0x0001080c9414();
  }
  return unaff_x19;
}



/* Entry: 1080c89d8; end: 1080c8a73; -[SCValdiRotationGestureRecognizer _handleGestureRecognizer:] */

void FUN_1080c89d8(void)

{
  func_0x0001080c9680();
  func_0x0001080c95a8();
  FUN_1080c8684();
  func_0x0001080c9640();
  func_0x0001080c9524();
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080c9578(&DAT_112774744);
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080c94a0();
  func_0x0001080c94dc();
  func_0x0001080c9480();
  func_0x0001080c942c();
  func_0x0001080c9334();
  func_0x0001080c9414();
  return;
}



/* Entry: 1080c8a74; end: 1080c8ad7; -[SCValdiRotationGestureRecognizer gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

uint FUN_1080c8a74(void)

{
  undefined *puVar1;
  uint uVar2;
  
  func_0x0001080c965c();
  puVar1 = PTR_PTR_1126d9208;
  _objc_opt_class();
  func_0x0001080c9444();
  if (((ulong)puVar1 & 1) == 0) {
    puVar1 = PTR_PTR_1126d9210;
    _objc_opt_class(PTR_PTR_1126d9210);
    uVar2 = (uint)puVar1;
    func_0x0001080c9444();
  }
  else {
    uVar2 = 1;
  }
  func_0x0001080c9334();
  return uVar2 & 1;
}



/* Entry: 1080c8ad8; end: 1080c8b03; -[SCValdiRotationGestureRecognizer .cxx_destruct] */

void FUN_1080c8ad8(void)

{
  func_0x0001080c928c();
  func_0x0001080c9260();
  func_0x0001080c9404();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)();
  return;
}



/* Entry: 1080c8b04; end: 1080c8b6f; -[SCValdiTouchGestureRecognizer init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1080c8b04(long param_1)

{
  func_0x0001080c9394();
  func_0x0001080c9540();
  func_0x0001080c9384();
  func_0x0001080c962c();
  if (param_1 != 0) {
    func_0x0001080c9530();
    func_0x00010c1d4100(0,param_1);
    *(undefined1 *)(param_1 + _DAT_112774750) = 0;
    *(undefined1 *)(param_1 + _DAT_112774754) = 0;
  }
  return param_1;
}



/* Entry: 1080c8b70; end: 1080c8c5f; -[SCValdiTouchGestureRecognizer _handleGestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080c8b70(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09ef00(param_1);
  func_0x0001080c94ec();
  lVar2 = param_1;
  func_0x00010c252440();
  lVar3 = (long)_DAT_112774758;
  if (lVar2 == 1) {
    func_0x0001080c9458(lVar1,*(undefined8 *)(param_1 + lVar3),6,1,
                        *(undefined8 *)(param_1 + _DAT_11277475c));
    FUN_1080c6f94();
  }
  func_0x0001080c9458(lVar1,*(undefined8 *)(param_1 + lVar3),6,lVar2,
                      *(undefined8 *)(param_1 + _DAT_112774760));
  FUN_1080c6f94();
  if (lVar2 - 3U < 2) {
    func_0x0001080c9458(lVar1,*(undefined8 *)(param_1 + lVar3),6,lVar2,
                        *(undefined8 *)(param_1 + _DAT_112774764));
    FUN_1080c6f94();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1080c8c60; end: 1080c8cab; -[SCValdiTouchGestureRecognizer setFunction:forGestureType:] */

void FUN_1080c8c60(void)

{
  int iVar1;
  undefined8 uVar2;
  ulong in_x3;
  undefined8 unaff_x19;
  long unaff_x20;
  
  func_0x0001080c91fc();
  if (in_x3 < 3) {
    iVar1 = *(int *)(&PTR_DAT_110a1e158)[in_x3];
    func_0x0001080c93f0();
    uVar2 = *(undefined8 *)(unaff_x20 + iVar1);
    *(undefined8 *)(unaff_x20 + iVar1) = unaff_x19;
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1080c8cac; end: 1080c8ce7; -[SCValdiTouchGestureRecognizer isEmpty] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1080c8cac(long param_1)

{
  if ((*(long *)(param_1 + _DAT_112774760) == 0) && (*(long *)(param_1 + _DAT_11277475c) == 0)) {
    return *(long *)(param_1 + _DAT_112774764) == 0;
  }
  return false;
}



/* Entry: 1080c8ce8; end: 1080c8d37; -[SCValdiTouchGestureRecognizer reset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080c8ce8(long param_1)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + _DAT_112774754) = 0;
  *(undefined1 *)(param_1 + _DAT_112774750) = 0;
  func_0x00010bde1180();
  uVar1 = *(undefined8 *)(param_1 + _DAT_112774758);
  *(undefined8 *)(param_1 + _DAT_112774758) = 0;
  _objc_release(uVar1);
  func_0x0001080c9540();
  func_0x0001080c920c();
  return;
}



/* Entry: 1080c8d38; end: 1080c8d77; -[SCValdiTouchGestureRecognizer _clearTimer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080c8d38(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112774768;
  if (*(long *)(param_1 + lVar2) != 0) {
    func_0x00010c069d00();
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 1080c8d78; end: 1080c8dab; -[SCValdiTouchGestureRecognizer _onLongPress] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080c8d78(long param_1)

{
  if (*(char *)(param_1 + _DAT_112774750) == '\x01') {
    *(undefined1 *)(param_1 + _DAT_112774750) = 1;
    *(undefined1 *)(param_1 + _DAT_112774754) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010c209fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setState__112660218,1);
    return;
  }
  return;
}



/* Entry: 1080c8dac; end: 1080c8f17; -[SCValdiTouchGestureRecognizer touchesBegan:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080c8dac(double param_1)

{
  undefined *puVar1;
  long unaff_x21;
  undefined8 uVar2;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x0001080c9220();
  func_0x0001080c93c4();
  func_0x00010c0e72e0();
  if (param_1 == 0.0) {
    *(undefined1 *)(unaff_x21 + _DAT_112774754) = 1;
    func_0x00010c209fc0();
  }
  else {
    *(undefined1 *)(unaff_x21 + _DAT_112774750) = 1;
    func_0x00010bde1180();
    _objc_initWeak(auStack_58);
    puVar1 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
    uVar2 = *(undefined8 *)(unaff_x21 + _DAT_11277476c);
    _objc_copyWeak(auStack_60,auStack_58);
    func_0x00010c150360(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(unaff_x21 + _DAT_112774768);
    *(undefined **)(unaff_x21 + _DAT_112774768) = puVar1;
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  func_0x0001080c92f8();
  func_0x0001080c92ec();
  func_0x0001080c9540();
  func_0x0001080c9364();
  func_0x0001080c91cc();
  func_0x0001080c933c();
  func_0x0001080c9334();
  return;
}



/* Entry: 1080c8f18; end: 1080c8f47;  */

void FUN_1080c8f18(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be69f00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1080c8f48; end: 1080c8fb3; -[SCValdiTouchGestureRecognizer touchesMoved:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080c8f48(void)

{
  long unaff_x21;
  
  func_0x0001080c9220();
  func_0x0001080c93c4();
  if (*(char *)(unaff_x21 + _DAT_112774754) == '\x01') {
    func_0x0001080c92f8();
    func_0x0001080c92ec();
    func_0x0001080c9540();
    func_0x0001080c9354();
    func_0x0001080c91cc();
    func_0x00010c209fc0();
  }
  func_0x0001080c933c();
  func_0x0001080c9334();
  return;
}



/* Entry: 1080c8fb4; end: 1080c904f; -[SCValdiTouchGestureRecognizer touchesEnded:withEvent:] */

void FUN_1080c8fb4(void)

{
  func_0x0001080c9680();
  func_0x0001080c9220();
  func_0x0001080c93c4();
  func_0x0001080c92f8();
  func_0x0001080c92ec();
  func_0x0001080c9540();
  func_0x0001080c9344();
  func_0x0001080c91cc();
  func_0x00010bf529e0();
  func_0x00010bf00c80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x0001080c9424();
  func_0x00010c209fc0();
  func_0x0001080c933c();
  func_0x0001080c9334();
  return;
}



/* Entry: 1080c9050; end: 1080c90a7; -[SCValdiTouchGestureRecognizer touchesCancelled:withEvent:] */

void FUN_1080c9050(void)

{
  func_0x0001080c9220();
  func_0x0001080c93c4();
  func_0x0001080c92f8();
  func_0x0001080c92ec();
  func_0x0001080c9540();
  func_0x0001080c9374();
  func_0x0001080c91cc();
  func_0x00010c209fc0();
  func_0x0001080c933c();
  func_0x0001080c9334();
  return;
}



/* Entry: 1080c90a8; end: 1080c90ab; -[SCValdiTouchGestureRecognizer shouldRequireFailureOfGestureRecognizer:] */

undefined8 FUN_1080c90a8(void)

{
  return 0;
}



/* Entry: 1080c90ac; end: 1080c90af; -[SCValdiTouchGestureRecognizer shouldBeRequiredToFailByGestureRecognizer:] */

undefined8 FUN_1080c90ac(void)

{
  return 0;
}



/* Entry: 1080c90b0; end: 1080c90b7; -[SCValdiTouchGestureRecognizer gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

undefined8 FUN_1080c90b0(void)

{
  return 1;
}



/* Entry: 1080c90b8; end: 1080c90c7; -[SCValdiTouchGestureRecognizer onTouchDelayDuration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1080c90b8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277476c);
}



/* Entry: 1080c90c8; end: 1080c90d7; -[SCValdiTouchGestureRecognizer setOnTouchDelayDuration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080c90c8(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_11277476c) = param_1;
  return;
}



/* Entry: 1080c90d8; end: 1080c9117; -[SCValdiTouchGestureRecognizer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080c90d8(void)

{
  func_0x0001080c92c8((long)_DAT_112774768);
  func_0x0001080c9270((long)_DAT_112774760);
  func_0x0001080c9270((long)_DAT_112774764);
  func_0x0001080c9260();
  func_0x0001080c9404();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)();
  return;
}



/* Entry: 1080c9118; end: 1080c9133;  */

void FUN_1080c9118(long param_1,long *param_2)

{
  if (param_1 + 0x18 != *param_2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1080c9134; end: 1080c9183;  */

long FUN_1080c9134(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  if (0x555555555555555 < param_2) {
    unaff_x29 = &stack0xfffffffffffffff0;
    unaff_x30 = 0x1080c9158;
    _abort();
    register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
  }
  if (0x555555555555555 < param_2) {
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    func_0x00010772e264();
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x20) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x18) = FUN_1080c9184;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_1080c9118(param_1,param_1);
    }
    return param_1;
  }
  lVar1 = param_2 * 0x18;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(lVar1);
  return lVar1;
}


