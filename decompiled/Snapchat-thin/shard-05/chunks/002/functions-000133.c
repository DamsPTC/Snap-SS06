/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103ba83d4; end: 103ba8447; -[_TtC27SCSwipeInteractionPresenter28SCSwipeInteractionController gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

uint FUN_103ba83d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_4;
  FUN_103ba8fa4(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 103ba8448; end: 103ba84bb; -[_TtC27SCSwipeInteractionPresenter28SCSwipeInteractionController gestureRecognizer:shouldBeRequiredToFailByGestureRecognizer:] */

uint FUN_103ba8448(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_4;
  FUN_103ba9148(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 103ba84bc; end: 103ba84fb; -[_TtC27SCSwipeInteractionPresenter28SCSwipeInteractionController gestureRecognizer:shouldRequireFailureOfGestureRecognizer:] */

void FUN_103ba84bc(void)

{
  undefined8 uVar1;
  undefined8 in_x3;
  
  uVar1 = 0;
  FUN_103ba9604(0,0x112ff2db0,&PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8);
  func_0x000107c614e8();
                    /* WARNING: Could not recover jumptable at 0x00010c075f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(in_x3,PTR_s_isKindOfClass__1125fb1d0,uVar1);
  return;
}



/* Entry: 103ba84fc; end: 103ba8507; -[_TtC27SCSwipeInteractionPresenter28SCSwipeInteractionController transitionDuration:] */

undefined8 FUN_103ba84fc(void)

{
  return 0x3fd851eb851eb852;
}



/* Entry: 103ba8508; end: 103ba85cb;  */

/* WARNING: Possible PIC construction at 0x000103ba85b4: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ba8508(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = unaff_x20;
  func_0x000107c498e8();
  func_0x000107c61180();
  lVar3 = *(long *)(unaff_x20 + _DAT_112ff2d90);
  if ((lVar3 != 0) && (lVar2 = *(long *)(lVar3 + 0x20), lVar2 != 0)) {
    uVar4 = *(undefined8 *)(lVar3 + 0x10);
    func_0x000107c61174();
    func_0x000107c403bc(uVar4);
    func_0x000107c61180();
    FUN_103ba7c20(0,lVar2,uVar4);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(uVar4);
  }
  func_0x000107c5ba5c(lVar1);
  lVar3 = unaff_x20 + _DAT_112ff2d88;
  func_0x000107c61618();
  if (lVar3 != 0) {
    func_0x000107c5c4c0();
    lVar1 = lVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
  return;
}



/* Entry: 103ba85cc; end: 103ba85d7; -[_TtC27SCSwipeInteractionPresenter28SCSwipeInteractionController animateTransition:] */

void FUN_103ba85cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_103ba8508(param_3);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103ba85d8; end: 103ba87eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_103ba85d8(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar2 = _DAT_112ff2d98;
  lVar5 = _DAT_112ff2d90;
  ppuVar4 = &puStack_90;
  ppuVar6 = &puStack_90;
  puVar7 = *(undefined **)(unaff_x20 + _DAT_112ff2d98);
  puVar3 = puVar7;
  if (puVar7 == (undefined *)0x0) {
    uVar8 = param_1;
    if (*(long *)(unaff_x20 + _DAT_112ff2d90) == 0) {
      func_0x000103ba99b4(0);
      func_0x000107c613fc();
      func_0x000107c615f0();
      FUN_103ba964c();
      uVar8 = *(undefined8 *)(unaff_x20 + lVar5);
      *(undefined8 *)(unaff_x20 + lVar5) = param_1;
      func_0x000107c61574(uVar8);
    }
    func_0x000103ba7350();
    puVar3 = PTR__OBJC_CLASS___UIViewPropertyAnimator_1126b0db0;
    func_0x000107c610f8();
    func_0x000107c46714(0x3fd851eb851eb852);
    func_0x000107c615e8(uVar8);
    puVar7 = &UNK_1106df480;
    func_0x000107c613fc(&UNK_1106df480,0x18,7);
    *(long *)(puVar7 + 0x10) = unaff_x20;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_70 = FUN_103ba92c8;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000f6b44;
    puStack_78 = &UNK_1106df498;
    puStack_68 = puVar7;
    func_0x000107c60bc4(&puStack_90);
    puVar7 = puStack_68;
    lVar5 = unaff_x20;
    func_0x000107c61174();
    func_0x000107c61574(puVar7);
    func_0x000107c3d5ac(puVar3);
    func_0x000107c60bd0(ppuVar4);
    puVar7 = &UNK_1106df4d0;
    func_0x000107c613fc(&UNK_1106df4d0,0x18,7);
    *(long *)(puVar7 + 0x10) = lVar5;
    pcStack_70 = (code *)0x103ba92ec;
    puStack_90 = puVar1;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1023dda20;
    puStack_78 = &UNK_1106df4e8;
    puStack_68 = puVar7;
    func_0x000107c60bc4(&puStack_90);
    puVar7 = puStack_68;
    func_0x000107c61174(lVar5);
    func_0x000107c61574(puVar7);
    func_0x000107c3d62c(puVar3);
    func_0x000107c60bd0(ppuVar6);
    uVar8 = *(undefined8 *)(unaff_x20 + lVar2);
    *(undefined **)(unaff_x20 + lVar2) = puVar3;
    func_0x000107c61174(puVar3);
    func_0x000107c61170(uVar8);
    puVar7 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar7);
  return puVar3;
}



/* Entry: 103ba87ec; end: 103ba8873;  */

/* WARNING: Possible PIC construction at 0x000103ba884c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103ba8850) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ba87ec(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *(long *)(param_1 + _DAT_112ff2d90);
  if ((lVar2 != 0) && (lVar1 = *(long *)(lVar2 + 0x20), lVar1 != 0)) {
    uVar3 = *(undefined8 *)(lVar2 + 0x10);
    func_0x000107c61174();
    func_0x000107c403bc(uVar3);
    func_0x000107c61180();
    FUN_103ba7c20(0x3ff0000000000000,lVar1,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 103ba8874; end: 103ba88e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ba8874(long param_1,long param_2)

{
  long lVar1;
  
  if (param_1 == 1) {
    lVar1 = *(long *)(param_2 + _DAT_112ff2d90);
    if (lVar1 != 0) {
      func_0x000107c6157c(lVar1);
      FUN_103ba9890();
LAB_103ba88c8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_release_11034f4c0)(lVar1);
      return;
    }
  }
  else if (param_1 == 0) {
    lVar1 = *(long *)(param_2 + _DAT_112ff2d90);
    if (lVar1 != 0) {
      func_0x000107c6157c(lVar1);
      FUN_103ba97fc();
      goto LAB_103ba88c8;
    }
  }
  return;
}



/* Entry: 103ba88e4; end: 103ba893f; -[_TtC27SCSwipeInteractionPresenter28SCSwipeInteractionController interruptibleAnimatorForTransition:] */

void FUN_103ba88e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_103ba85d8(param_3);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103ba8940; end: 103ba8967; -[_TtC27SCSwipeInteractionPresenter28SCSwipeInteractionController animationEnded:] */

void FUN_103ba8940(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_103ba92f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103ba8968; end: 103ba8b53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ba8968(undefined8 param_1)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  ulong unaff_x20;
  undefined8 uVar7;
  long lVar8;
  
  lVar6 = _DAT_112ff2d90;
  if (*(long *)(unaff_x20 + _DAT_112ff2d90) != 0) {
    return;
  }
  uVar2 = unaff_x20;
  func_0x000107c5e0b8();
  if ((uVar2 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf03270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)();
    return;
  }
  func_0x000103ba99b4(0);
  func_0x000107c613fc();
  uVar7 = param_1;
  func_0x000107c615f0();
  FUN_103ba964c();
  uVar5 = *(undefined8 *)(unaff_x20 + lVar6);
  *(undefined8 *)(unaff_x20 + lVar6) = uVar7;
  func_0x000107c61574(uVar5);
  lVar3 = *(long *)(unaff_x20 + _DAT_112ff2d80);
  if (lVar3 != 0) {
    if (*(long *)(unaff_x20 + lVar6) == 0) goto LAB_103ba8acc;
    lVar8 = *(long *)(*(long *)(unaff_x20 + lVar6) + 0x10);
    func_0x000107c61174();
    func_0x000107c5de84();
    func_0x000107c61180();
    if (lVar8 != 0) {
      lVar4 = lVar8;
      func_0x000107c5de64();
      func_0x000107c61180();
      func_0x000107c61170(lVar8);
      if (lVar4 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103ba8b54);
        (*pcVar1)();
      }
      func_0x000107c3d6fc(lVar4);
      func_0x000107c61170(lVar4);
    }
    func_0x000107c61170(lVar3);
  }
  lVar6 = *(long *)(unaff_x20 + lVar6);
  if ((lVar6 != 0) && (lVar3 = *(long *)(lVar6 + 0x20), lVar3 != 0)) {
    uVar7 = *(undefined8 *)(lVar6 + 0x10);
    func_0x000107c61174();
    func_0x000107c403bc(uVar7);
    func_0x000107c61180();
    FUN_103ba7c20(0,lVar3,uVar7);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(uVar7);
  }
LAB_103ba8acc:
  lVar6 = unaff_x20 + _DAT_112ff2d88;
  func_0x000107c61618();
  if (lVar6 != 0) {
    func_0x000107c5c4c0();
    func_0x000107c615e8();
  }
  FUN_103ba8ea8();
  func_0x000107c61154(&stack0xffffffffffffffa0,PTR_s_startInteractiveTransition__112671648,param_1);
  return;
}



/* Entry: 103ba8b54; end: 103ba8b5f; -[_TtC27SCSwipeInteractionPresenter28SCSwipeInteractionController startInteractiveTransition:] */

void FUN_103ba8b54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_103ba8968(param_3);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103ba8b60; end: 103ba8bb3;  */

void FUN_103ba8b60(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  (*param_4)(param_3);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103ba8bb4; end: 103ba8e33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_103ba8bb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             ulong param_5,undefined1 param_6,long param_7)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lStack_70;
  long lStack_68;
  
  plVar3 = &lStack_70;
  *(undefined8 *)(param_7 + _DAT_112ff2db8) = 0x3fee666666666666;
  *(undefined8 *)(param_7 + _DAT_112ff2dc0) = 0x3fe0000000000000;
  *(undefined8 *)(param_7 + _DAT_112ff2dc8) = 0x3fd999999999999a;
  *(undefined8 *)(param_7 + _DAT_112ff2dd0) = 0x3fd851eb851eb852;
  lVar1 = _DAT_112ff2d78;
  func_0x000107c61614(param_7 + _DAT_112ff2d78,0);
  *(undefined8 *)(param_7 + _DAT_112ff2d70) = 0;
  *(undefined8 *)(param_7 + _DAT_112ff2d80) = 0;
  *(undefined8 *)(param_7 + _DAT_112ff2d60) = 0;
  *(undefined8 *)(param_7 + _DAT_112ff2d68) = 0;
  lVar2 = _DAT_112ff2d88;
  func_0x000107c61614(param_7 + _DAT_112ff2d88,0);
  *(undefined8 *)(param_7 + _DAT_112ff2df0) = 0;
  *(undefined1 *)(param_7 + _DAT_112ff2df8) = 0;
  *(undefined8 *)(param_7 + _DAT_112ff2d90) = 0;
  *(undefined8 *)(param_7 + _DAT_112ff2d98) = 0;
  *(undefined8 *)(param_7 + _DAT_112ff2da0) = 0;
  func_0x000107c61604(param_7 + lVar1,param_1);
  lVar2 = param_7 + lVar2;
  func_0x000107c61604(lVar2,param_3);
  *(undefined8 *)(param_7 + _DAT_112ff2da8) = param_4;
  *(ulong *)(param_7 + _DAT_112ff2dd8) = param_5;
  *(bool *)(param_7 + _DAT_112ff2de0) = (param_5 & 0xfffffffd) == 0;
  *(undefined1 *)(param_7 + _DAT_112ff2de8) = param_6;
  FUN_103ba8ea8();
  lStack_70 = param_7;
  lStack_68 = lVar2;
  func_0x000107c61154(&lStack_70,PTR_s_init_1125d9248);
  puVar4 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c48c2c();
  func_0x000107c53fcc();
  uVar6 = *(undefined8 *)((long)plVar3 + _DAT_112ff2d70);
  *(undefined **)((long)plVar3 + _DAT_112ff2d70) = puVar4;
  func_0x000107c61174(puVar4);
  func_0x000107c61170(uVar6);
  func_0x000107c3d6fc(param_2);
  puVar5 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
  func_0x000107c610f8();
  func_0x000107c48c2c();
  func_0x000107c61170(plVar3);
  lVar2 = _DAT_112ff2d80;
  uVar6 = *(undefined8 *)((long)plVar3 + _DAT_112ff2d80);
  *(undefined **)((long)plVar3 + _DAT_112ff2d80) = puVar5;
  func_0x000107c61170(uVar6);
  if (*(long *)((long)plVar3 + lVar2) != 0) {
    func_0x000107c53fcc();
  }
  func_0x000107c53630(plVar3);
  func_0x000107c61170(puVar4);
  return (undefined1 *)plVar3;
}



/* Entry: 103ba8e34; end: 103ba8ea7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_103ba8e34(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,ulong param_5,
             undefined1 param_6)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lStack_70;
  long lStack_68;
  
  lVar6 = param_1;
  FUN_103ba8ea8();
  func_0x000107c610f8();
  plVar3 = &lStack_70;
  *(undefined8 *)(lVar6 + _DAT_112ff2db8) = 0x3fee666666666666;
  *(undefined8 *)(lVar6 + _DAT_112ff2dc0) = 0x3fe0000000000000;
  *(undefined8 *)(lVar6 + _DAT_112ff2dc8) = 0x3fd999999999999a;
  *(undefined8 *)(lVar6 + _DAT_112ff2dd0) = 0x3fd851eb851eb852;
  lVar1 = _DAT_112ff2d78;
  func_0x000107c61614(lVar6 + _DAT_112ff2d78,0);
  *(undefined8 *)(lVar6 + _DAT_112ff2d70) = 0;
  *(undefined8 *)(lVar6 + _DAT_112ff2d80) = 0;
  *(undefined8 *)(lVar6 + _DAT_112ff2d60) = 0;
  *(undefined8 *)(lVar6 + _DAT_112ff2d68) = 0;
  lVar2 = _DAT_112ff2d88;
  func_0x000107c61614(lVar6 + _DAT_112ff2d88,0);
  *(undefined8 *)(lVar6 + _DAT_112ff2df0) = 0;
  *(undefined1 *)(lVar6 + _DAT_112ff2df8) = 0;
  *(undefined8 *)(lVar6 + _DAT_112ff2d90) = 0;
  *(undefined8 *)(lVar6 + _DAT_112ff2d98) = 0;
  *(undefined8 *)(lVar6 + _DAT_112ff2da0) = 0;
  func_0x000107c61604(lVar6 + lVar1,param_1);
  lVar2 = lVar6 + lVar2;
  func_0x000107c61604(lVar2,param_3);
  *(undefined8 *)(lVar6 + _DAT_112ff2da8) = param_4;
  *(ulong *)(lVar6 + _DAT_112ff2dd8) = param_5;
  *(bool *)(lVar6 + _DAT_112ff2de0) = (param_5 & 0xfffffffd) == 0;
  *(undefined1 *)(lVar6 + _DAT_112ff2de8) = param_6;
  FUN_103ba8ea8();
  lStack_70 = lVar6;
  lStack_68 = lVar2;
  func_0x000107c61154(&lStack_70,PTR_s_init_1125d9248);
  puVar4 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c48c2c();
  func_0x000107c53fcc();
  uVar7 = *(undefined8 *)((long)plVar3 + _DAT_112ff2d70);
  *(undefined **)((long)plVar3 + _DAT_112ff2d70) = puVar4;
  func_0x000107c61174(puVar4);
  func_0x000107c61170(uVar7);
  func_0x000107c3d6fc(param_2);
  puVar5 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
  func_0x000107c610f8();
  func_0x000107c48c2c();
  func_0x000107c61170(plVar3);
  lVar2 = _DAT_112ff2d80;
  uVar7 = *(undefined8 *)((long)plVar3 + _DAT_112ff2d80);
  *(undefined **)((long)plVar3 + _DAT_112ff2d80) = puVar5;
  func_0x000107c61170(uVar7);
  if (*(long *)((long)plVar3 + lVar2) != 0) {
    func_0x000107c53fcc();
  }
  func_0x000107c53630(plVar3);
  func_0x000107c61170(puVar4);
  return (undefined1 *)plVar3;
}



/* Entry: 103ba8ea8; end: 103ba8ec7;  */

void FUN_103ba8ea8(void)

{
  func_0x000107c61168(&PTR_PTR_11293b2a8);
  return;
}



/* Entry: 103ba8ec8; end: 103ba8eeb;  */

undefined8 FUN_103ba8ec8(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 103ba8eec; end: 103ba8fa3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_103ba8eec(double param_1,double param_2,ulong param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  long unaff_x20;
  
  if ((param_3 & 1) != 0) {
    return false;
  }
  bVar3 = false;
  if (((ABS(param_1) <= ABS(param_2) ^ *(byte *)(unaff_x20 + _DAT_112ff2de0)) & 1) == 0) {
    lVar4 = *(long *)(unaff_x20 + _DAT_112ff2dd8);
    if (lVar4 < 2) {
      if (lVar4 == 0) {
        return param_2 < 0.0;
      }
      if (lVar4 == 1) {
LAB_103ba8f40:
        return param_1 < 0.0;
      }
    }
    else {
      if (lVar4 == 2) {
        bVar1 = false;
        bVar2 = false;
        bVar3 = true;
        if (!NAN(param_2)) {
          bVar1 = param_2 < 0.0;
          bVar2 = param_2 == 0.0;
          bVar3 = false;
        }
      }
      else {
        if (lVar4 != 3) {
          return false;
        }
        if ((*(char *)(unaff_x20 + _DAT_112ff2de8) == '\x01') &&
           (*(int *)(unaff_x20 + _DAT_112ff2da8) == 1)) goto LAB_103ba8f40;
        bVar3 = NAN(param_1);
        bVar2 = param_1 == 0.0;
        bVar1 = param_1 < 0.0;
      }
      bVar3 = !bVar2 && bVar1 == bVar3;
    }
  }
  return bVar3;
}



/* Entry: 103ba8fa4; end: 103ba9147;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103ba8fa4(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lVar6;
  
  lVar3 = _DAT_112ff2d70;
  lVar6 = *(long *)(unaff_x20 + _DAT_112ff2d70);
  if (lVar6 != 0) {
    FUN_103ba9604(0,0x112daba28,&PTR__OBJC_CLASS___UIGestureRecognizer_1126cb6a0);
    uVar1 = param_1;
    func_0x000107c61174();
    func_0x000107c61174(lVar6);
    uVar2 = uVar1;
    func_0x000107c60118(uVar1,lVar6);
    func_0x000107c61170(uVar1);
    func_0x000107c61170(lVar6);
    if ((uVar2 & 1) != 0) {
      return 1;
    }
  }
  lVar6 = *(long *)(unaff_x20 + _DAT_112ff2d80);
  if (lVar6 != 0) {
    FUN_103ba9604(0,0x112daba28,&PTR__OBJC_CLASS___UIGestureRecognizer_1126cb6a0);
    func_0x000107c61174();
    func_0x000107c61174(lVar6);
    uVar1 = param_1;
    func_0x000107c60118(param_1,lVar6);
    func_0x000107c61170(param_1);
    func_0x000107c61170(lVar6);
    if ((uVar1 & 1) != 0) {
      return 1;
    }
  }
  lVar3 = *(long *)(unaff_x20 + lVar3);
  if (lVar3 == 0) {
    return 1;
  }
  func_0x000107c61174();
  lVar6 = lVar3;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar6 == 0) {
    lVar5 = 1;
  }
  else {
    lVar4 = unaff_x20 + _DAT_112ff2d88;
    func_0x000107c61618();
    if (lVar4 == 0) {
      lVar5 = 1;
    }
    else {
      func_0x000107c5c490(lVar3);
      lVar5 = lVar4;
      func_0x000107c5c4bc(lVar4);
      func_0x000107c615e8(lVar4);
    }
    func_0x000107c61170(lVar6);
  }
  func_0x000107c61170(lVar3);
  return lVar5;
}



/* Entry: 103ba9148; end: 103ba92c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ba9148(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x20;
  long lVar3;
  
  lVar3 = *(long *)(unaff_x20 + _DAT_112ff2d70);
  if (lVar3 != 0) {
    FUN_103ba9604(0,0x112daba28,&PTR__OBJC_CLASS___UIGestureRecognizer_1126cb6a0);
    uVar1 = param_1;
    func_0x000107c61174();
    func_0x000107c61174(lVar3);
    uVar2 = uVar1;
    func_0x000107c60118(uVar1,lVar3);
    func_0x000107c61170(uVar1);
    func_0x000107c61170(lVar3);
    if ((uVar2 & 1) != 0) {
      return;
    }
  }
  lVar3 = *(long *)(unaff_x20 + _DAT_112ff2d80);
  if (lVar3 != 0) {
    FUN_103ba9604(0,0x112daba28,&PTR__OBJC_CLASS___UIGestureRecognizer_1126cb6a0);
    func_0x000107c61174();
    func_0x000107c61174(lVar3);
    uVar1 = param_1;
    func_0x000107c60118(param_1,lVar3);
    func_0x000107c61170(param_1);
    func_0x000107c61170(lVar3);
    if ((uVar1 & 1) != 0) {
      return;
    }
  }
  if (*(long *)(unaff_x20 + _DAT_112ff2d90) == 0) {
    lVar3 = unaff_x20 + _DAT_112ff2d88;
    func_0x000107c61618();
    if (lVar3 != 0) {
      func_0x000107c5c4b4();
      func_0x000107c615e8(lVar3);
    }
  }
  else if (*(long *)(unaff_x20 + _DAT_112ff2d98) != 0) {
    func_0x000107c438c8();
  }
  return;
}



/* Entry: 103ba92c8; end: 103ba92f3;  */

/* WARNING: Possible PIC construction at 0x000103ba884c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103ba8850) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ba92c8(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  lVar2 = *(long *)(*(long *)(unaff_x20 + 0x10) + _DAT_112ff2d90);
  if ((lVar2 != 0) && (lVar1 = *(long *)(lVar2 + 0x20), lVar1 != 0)) {
    uVar3 = *(undefined8 *)(lVar2 + 0x10);
    func_0x000107c61174();
    func_0x000107c403bc(uVar3);
    func_0x000107c61180();
    FUN_103ba7c20(0x3ff0000000000000,lVar1,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 103ba92f4; end: 103ba9603;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ba92f4(void)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  long unaff_x20;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *puStack_70;
  undefined *puStack_68;
  
  if ((*(int *)(unaff_x20 + _DAT_112ff2da8) == 1) && (*(long *)(unaff_x20 + _DAT_112ff2d90) != 0)) {
    uVar3 = *(ulong *)(*(long *)(unaff_x20 + _DAT_112ff2d90) + 0x10);
    func_0x000107c5cf60();
    if ((uVar3 & 1) == 0) {
      uVar3 = unaff_x20 + _DAT_112ff2d78;
      func_0x000107c61618();
      if (uVar3 != 0) {
        puStack_68 = PTR_DAT_1126a3748;
        uVar9 = uVar3;
        func_0x000107c61494();
        if (uVar9 == 0) {
          uVar9 = uVar3;
          func_0x000107c3f9e0();
          func_0x000107c61180();
          uVar6 = 0;
          FUN_103ba9604(0,0x112d4ccd8,&PTR__OBJC_CLASS___UIViewController_1126af898);
          uVar7 = uVar9;
          func_0x000107c5fc54(uVar9,uVar6);
          func_0x000107c61170(uVar9);
          if (uVar7 >> 0x3e == 0) {
            uVar9 = *(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10);
          }
          else {
            uVar9 = uVar7 & 0xffffffffffffff8;
            if (0x7fffffffffffffff < uVar7) {
              uVar9 = uVar7;
            }
            func_0x000107c60480();
          }
          func_0x000107c6142c(uVar7);
          if (uVar9 != 0) {
            uVar9 = uVar3;
            func_0x000107c3f9e0();
            func_0x000107c61180();
            uVar7 = uVar9;
            func_0x000107c5fc54();
            func_0x000107c61170(uVar9);
            if (uVar7 >> 0x3e == 0) {
              uVar10 = *(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10);
            }
            else {
              uVar10 = uVar7 & 0xffffffffffffff8;
              if (0x7fffffffffffffff < uVar7) {
                uVar10 = uVar7;
              }
              func_0x000107c60480();
            }
            if (uVar10 != 0) {
              uVar11 = 0;
              do {
                if ((uVar7 & 0xc000000000000001) == 0) {
                  if (*(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
                    pcVar2 = (code *)SoftwareBreakpoint(1,0x103ba95c0);
                    (*pcVar2)();
                  }
                  uVar8 = *(ulong *)(uVar7 + uVar11 * 8 + 0x20);
                  func_0x000107c61174();
                }
                else {
                  uVar8 = uVar11;
                  func_0x000100f3b77c(uVar11,uVar7);
                }
                uVar1 = uVar11 + 1;
                if (SCARRY8(uVar11,1)) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x103ba95bc);
                  (*pcVar2)();
                }
                puStack_70 = PTR_DAT_1126a3748;
                uVar9 = uVar8;
                func_0x000107c61494(uVar8,1,&puStack_70);
                if (uVar9 != 0) {
                  func_0x000107c6142c(uVar7);
                  goto LAB_103ba9384;
                }
                func_0x000107c61170(uVar8);
                uVar11 = uVar11 + 1;
              } while (uVar1 != uVar10);
            }
            func_0x000107c61170(uVar3);
            func_0x000107c6142c(uVar7);
            goto LAB_103ba93bc;
          }
        }
        else {
          func_0x000107c61174(uVar3);
LAB_103ba9384:
          uVar7 = uVar9;
          func_0x000107c4168c();
          func_0x000107c61180();
          if (uVar7 != 0) {
            func_0x000107c5c4e0();
            func_0x000107c615e8(uVar7);
          }
          func_0x000107c615e8(uVar9);
        }
        func_0x000107c61170(uVar3);
      }
    }
  }
LAB_103ba93bc:
  lVar4 = unaff_x20 + _DAT_112ff2d88;
  func_0x000107c61618();
  if (lVar4 != 0) {
    if (*(long *)(unaff_x20 + _DAT_112ff2d90) != 0) {
      func_0x000107c5cf60(*(undefined8 *)(*(long *)(unaff_x20 + _DAT_112ff2d90) + 0x10));
    }
    func_0x000107c5c4c8(lVar4);
    func_0x000107c615e8(lVar4);
  }
  lVar4 = *(long *)(unaff_x20 + _DAT_112ff2d80);
  if (lVar4 != 0) {
    func_0x000107c61174();
    lVar5 = lVar4;
    func_0x000107c5de64();
    func_0x000107c61180();
    func_0x000107c4ff3c();
    func_0x000107c61170(lVar5);
    func_0x000107c61170(lVar4);
  }
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112ff2d90);
  *(undefined8 *)(unaff_x20 + _DAT_112ff2d90) = 0;
  func_0x000107c61574(uVar6);
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112ff2d98);
  *(undefined8 *)(unaff_x20 + _DAT_112ff2d98) = 0;
  func_0x000107c61170(uVar6);
  return;
}



/* Entry: 103ba9604; end: 103ba9643;  */

void FUN_103ba9604(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 103ba9644; end: 103ba964b;  */

void FUN_103ba9644(long param_1,long param_2)

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



/* Entry: 103ba964c; end: 103ba97fb;  */

void FUN_103ba964c(undefined8 param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lStack_38;
  
  *(long *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  if (param_2 == 1) {
    uVar2 = param_1;
    func_0x000107c615f0();
    func_0x000107c5de84();
    func_0x000107c61180();
    uVar4 = uVar2;
    func_0x000107c5de64();
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
    *(undefined8 *)(unaff_x20 + 0x20) = uVar4;
    func_0x000107c61170(uVar2);
    lVar3 = *(long *)(unaff_x20 + 0x10);
    func_0x000107c5de84();
    func_0x000107c61180();
  }
  else {
    if (param_2 != 0) {
      lStack_38 = param_2;
      func_0x000107c615f0(param_1);
      func_0x000107c60614(&UNK_1106df520,&lStack_38,&UNK_1106df520,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103ba97fc);
      (*pcVar1)();
    }
    uVar2 = param_1;
    func_0x000107c615f0();
    func_0x000107c5de84();
    func_0x000107c61180();
    uVar4 = uVar2;
    func_0x000107c5de64();
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
    *(undefined8 *)(unaff_x20 + 0x20) = uVar4;
    func_0x000107c61170(uVar2);
    lVar3 = *(long *)(unaff_x20 + 0x10);
    func_0x000107c5de84();
    func_0x000107c61180();
  }
  if (lVar3 != 0) {
    func_0x000107c3e748();
    func_0x000107c61170(lVar3);
  }
  lVar3 = *(long *)(unaff_x20 + 0x20);
  if (lVar3 != 0) {
    func_0x000107c61174();
    uVar2 = param_1;
    func_0x000107c403bc(param_1);
    func_0x000107c61180();
    func_0x000107c3d89c();
    func_0x000107c61170(lVar3);
    func_0x000107c61170(uVar2);
  }
  func_0x000107c615e8(param_1);
  return;
}



/* Entry: 103ba97fc; end: 103ba988f;  */

void FUN_103ba97fc(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lStack_28;
  
  func_0x000107c3fef0(*(undefined8 *)(unaff_x20 + 0x10),param_2,1);
  lStack_28 = *(long *)(unaff_x20 + 0x18);
  if ((lStack_28 != 0) && (lStack_28 != 1)) {
    func_0x000107c60614(&UNK_1106df520,&lStack_28,&UNK_1106df520,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103ba9890);
    (*pcVar1)();
  }
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c5de84(uVar2);
  func_0x000107c61180();
  func_0x000107c427e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 103ba9890; end: 103ba9983;  */

/* WARNING: Possible PIC construction at 0x000103ba9928: Changing call to branch */

void FUN_103ba9890(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long lStack_38;
  
  func_0x000107c3fef0(*(undefined8 *)(unaff_x20 + 0x10),param_2,0);
  lStack_38 = *(long *)(unaff_x20 + 0x18);
  if (lStack_38 == 1) {
    lVar2 = *(long *)(unaff_x20 + 0x10);
    func_0x000107c5de84();
    func_0x000107c61180();
  }
  else {
    if (lStack_38 != 0) {
      func_0x000107c60614(&UNK_1106df520,&lStack_38,&UNK_1106df520,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103ba9984);
      (*pcVar1)();
    }
    lVar2 = *(long *)(unaff_x20 + 0x10);
    func_0x000107c5de84();
    func_0x000107c61180();
  }
  if (lVar2 == 0) {
    lVar2 = *(long *)(unaff_x20 + 0x10);
    func_0x000107c5de84(lVar2);
    func_0x000107c61180();
    func_0x000107c427e0();
  }
  else {
    func_0x000107c3e748();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 103ba9984; end: 103ba9987; -[_TtC27SCSwipeInteractionPresenter25SCSwipeInteractionContext copyWithZone:] */

void FUN_103ba9984(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 103ba9988; end: 103ba99d3;  */

void FUN_103ba9988(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103ba99d4; end: 103ba99eb;  */

bool FUN_103ba99d4(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103ba99ec; end: 103ba9a2b;  */

void FUN_103ba99ec(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff2f40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc5ecc0;
  func_0x000107c61520(&UNK_10dc5ecc0,&UNK_1106df520);
  puRam0000000112ff2f40 = puVar1;
  return;
}



/* Entry: 103ba9a2c; end: 103ba9ad7;  */

void FUN_103ba9a2c(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 103ba9ad8; end: 103ba9b0f;  */

void FUN_103ba9ad8(ulong *param_1,ulong *param_2)

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



/* Entry: 103ba9b10; end: 103ba9b53; -[SCSwipeInteractionPresenter performThresholdHaptic] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103ba9b10(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ff2f48;
  func_0x000107c61428(param_1 + _DAT_112ff2f48,auStack_38,0,0);
  return *(undefined1 *)(param_1 + lVar1);
}



/* Entry: 103ba9b54; end: 103ba9ba3; -[SCSwipeInteractionPresenter setPerformThresholdHaptic:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ba9b54(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ff2f48;
  func_0x000107c61428(param_1 + _DAT_112ff2f48,auStack_48,1,0);
  *(undefined1 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 103ba9ba4; end: 103ba9bf7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103ba9ba4(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff2f80);
  if (*(char *)(puVar1 + 1) == '\x01') {
    if (*(char *)(unaff_x20 + _DAT_112ff2f78) == '\x01') {
      uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112ff2f88);
    }
    else {
      uVar2 = 0xffffffffffffffff;
    }
    *puVar1 = uVar2;
    *(undefined1 *)(puVar1 + 1) = 0;
    return uVar2;
  }
  return *puVar1;
}



/* Entry: 103ba9bf8; end: 103baa43f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_103ba9bf8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             ulong param_5,byte param_6,byte param_7)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  long unaff_x20;
  long lStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  lVar2 = _DAT_112ff2f50;
  func_0x000107c61614(unaff_x20 + _DAT_112ff2f50,0);
  *(undefined1 *)(unaff_x20 + _DAT_112ff2f48) = 0;
  lVar3 = _DAT_112ff2f58;
  func_0x000107c61614(unaff_x20 + _DAT_112ff2f58,0);
  *(undefined8 *)(unaff_x20 + _DAT_112ff2f60) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ff2f68) = 0;
  lVar6 = _DAT_112ff2f70;
  func_0x000107c61614(unaff_x20 + _DAT_112ff2f70,0);
  *(undefined1 *)(unaff_x20 + _DAT_112ff2f78) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff2f80);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  func_0x000107c61604(unaff_x20 + lVar2,param_1);
  func_0x000107c61604(unaff_x20 + lVar6,param_3);
  func_0x000107c61604(unaff_x20 + lVar3,param_4);
  if (param_5 < 4) {
    uVar10 = *(undefined8 *)(&UNK_10dc5eda0 + param_5 * 8);
  }
  else {
    uVar10 = 0xffffffffffffffff;
  }
  *(undefined8 *)(unaff_x20 + _DAT_112ff2f88) = uVar10;
  *(byte *)(unaff_x20 + _DAT_112ff2f90) = param_6 & 1;
  *(byte *)(unaff_x20 + _DAT_112ff2f98) = param_7 & 1;
  puVar4 = auStack_70;
  func_0x000107c61154(puVar4,PTR_s_init_1125d9248);
  uVar11 = *(ulong *)(puVar4 + _DAT_112ff2f88);
  lVar5 = 0;
  FUN_103ba8ea8();
  lVar6 = lVar5;
  func_0x000107c610f8();
  *(undefined8 *)(lVar6 + _DAT_112ff2db8) = 0x3fee666666666666;
  *(undefined8 *)(lVar6 + _DAT_112ff2dc0) = 0x3fe0000000000000;
  *(undefined8 *)(lVar6 + _DAT_112ff2dc8) = 0x3fd999999999999a;
  *(undefined8 *)(lVar6 + _DAT_112ff2dd0) = 0x3fd851eb851eb852;
  lVar2 = _DAT_112ff2d78;
  func_0x000107c61614(lVar6 + _DAT_112ff2d78,0);
  *(undefined8 *)(lVar6 + _DAT_112ff2d70) = 0;
  *(undefined8 *)(lVar6 + _DAT_112ff2d80) = 0;
  *(undefined8 *)(lVar6 + _DAT_112ff2d60) = 0;
  *(undefined8 *)(lVar6 + _DAT_112ff2d68) = 0;
  lVar3 = _DAT_112ff2d88;
  func_0x000107c61614(lVar6 + _DAT_112ff2d88,0);
  *(undefined8 *)(lVar6 + _DAT_112ff2df0) = 0;
  *(undefined1 *)(lVar6 + _DAT_112ff2df8) = 0;
  *(undefined8 *)(lVar6 + _DAT_112ff2d90) = 0;
  *(undefined8 *)(lVar6 + _DAT_112ff2d98) = 0;
  *(undefined8 *)(lVar6 + _DAT_112ff2da0) = 0;
  func_0x000107c61604(lVar6 + lVar2,param_1);
  func_0x000107c61604(lVar6 + lVar3,puVar4);
  *(undefined8 *)(lVar6 + _DAT_112ff2da8) = 0;
  *(ulong *)(lVar6 + _DAT_112ff2dd8) = uVar11;
  *(bool *)(lVar6 + _DAT_112ff2de0) = (uVar11 & 0xfffffffd) == 0;
  *(undefined1 *)(lVar6 + _DAT_112ff2de8) = 0;
  puVar8 = PTR_s_init_1125d9248;
  lStack_80 = lVar6;
  lStack_78 = lVar5;
  func_0x000107c61174();
  func_0x000107c61174();
  plVar7 = &lStack_80;
  func_0x000107c61154(plVar7,puVar8);
  puVar8 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c48c2c();
  func_0x000107c53fcc();
  uVar10 = *(undefined8 *)((long)plVar7 + _DAT_112ff2d70);
  *(undefined **)((long)plVar7 + _DAT_112ff2d70) = puVar8;
  func_0x000107c61174(puVar8);
  func_0x000107c61170(uVar10);
  func_0x000107c3d6fc(param_2);
  puVar9 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
  func_0x000107c610f8();
  func_0x000107c48c2c();
  func_0x000107c61170(plVar7);
  lVar2 = _DAT_112ff2d80;
  uVar10 = *(undefined8 *)((long)plVar7 + _DAT_112ff2d80);
  *(undefined **)((long)plVar7 + _DAT_112ff2d80) = puVar9;
  func_0x000107c61170(uVar10);
  if (*(long *)((long)plVar7 + lVar2) != 0) {
    func_0x000107c53fcc();
  }
  func_0x000107c53630(plVar7);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_4);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar8);
  uVar10 = *(undefined8 *)(puVar4 + _DAT_112ff2f60);
  *(long **)(puVar4 + _DAT_112ff2f60) = plVar7;
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uVar10);
  return puVar4;
}



/* Entry: 103baa440; end: 103baa46f; -[SCSwipeInteractionPresenter initWithPresentingViewController:viewForPresentationGesture:presentedViewControllerProvider:delegate:dismissalSwipeDirection:performHapticFeedback:invertDismissDirection:] */

void FUN_103baa440(void)

{
  FUN_103baac88();
  return;
}



/* Entry: 103baa470; end: 103baac57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_103baa470(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             ulong param_5,undefined1 param_6,undefined1 param_7)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined *puVar8;
  undefined *puVar9;
  long unaff_x20;
  undefined8 uVar10;
  long lStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  lVar2 = _DAT_112ff2f50;
  func_0x000107c61614(unaff_x20 + _DAT_112ff2f50,0);
  *(undefined1 *)(unaff_x20 + _DAT_112ff2f48) = 0;
  lVar3 = _DAT_112ff2f58;
  func_0x000107c61614(unaff_x20 + _DAT_112ff2f58,0);
  *(undefined8 *)(unaff_x20 + _DAT_112ff2f60) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ff2f68) = 0;
  lVar6 = _DAT_112ff2f70;
  func_0x000107c61614(unaff_x20 + _DAT_112ff2f70,0);
  *(undefined1 *)(unaff_x20 + _DAT_112ff2f78) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff2f80);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  func_0x000107c61604(unaff_x20 + lVar2,param_1);
  func_0x000107c61604(unaff_x20 + lVar6,param_3);
  func_0x000107c61604(unaff_x20 + lVar3,param_4);
  *(ulong *)(unaff_x20 + _DAT_112ff2f88) = param_5;
  *(undefined1 *)(unaff_x20 + _DAT_112ff2f90) = param_6;
  *(undefined1 *)(unaff_x20 + _DAT_112ff2f98) = param_7;
  puVar4 = auStack_70;
  func_0x000107c61154(puVar4,PTR_s_init_1125d9248);
  lVar5 = 0;
  FUN_103ba8ea8();
  lVar6 = lVar5;
  func_0x000107c610f8();
  *(undefined8 *)(lVar6 + _DAT_112ff2db8) = 0x3fee666666666666;
  *(undefined8 *)(lVar6 + _DAT_112ff2dc0) = 0x3fe0000000000000;
  *(undefined8 *)(lVar6 + _DAT_112ff2dc8) = 0x3fd999999999999a;
  *(undefined8 *)(lVar6 + _DAT_112ff2dd0) = 0x3fd851eb851eb852;
  lVar2 = _DAT_112ff2d78;
  func_0x000107c61614(lVar6 + _DAT_112ff2d78,0);
  *(undefined8 *)(lVar6 + _DAT_112ff2d70) = 0;
  *(undefined8 *)(lVar6 + _DAT_112ff2d80) = 0;
  *(undefined8 *)(lVar6 + _DAT_112ff2d60) = 0;
  *(undefined8 *)(lVar6 + _DAT_112ff2d68) = 0;
  lVar3 = _DAT_112ff2d88;
  func_0x000107c61614(lVar6 + _DAT_112ff2d88,0);
  *(undefined8 *)(lVar6 + _DAT_112ff2df0) = 0;
  *(undefined1 *)(lVar6 + _DAT_112ff2df8) = 0;
  *(undefined8 *)(lVar6 + _DAT_112ff2d90) = 0;
  *(undefined8 *)(lVar6 + _DAT_112ff2d98) = 0;
  *(undefined8 *)(lVar6 + _DAT_112ff2da0) = 0;
  func_0x000107c61604(lVar6 + lVar2,param_1);
  func_0x000107c61604(lVar6 + lVar3,puVar4);
  *(undefined8 *)(lVar6 + _DAT_112ff2da8) = 0;
  *(ulong *)(lVar6 + _DAT_112ff2dd8) = param_5;
  *(bool *)(lVar6 + _DAT_112ff2de0) = (param_5 & 0xfffffffd) == 0;
  *(undefined1 *)(lVar6 + _DAT_112ff2de8) = 0;
  puVar8 = PTR_s_init_1125d9248;
  lStack_80 = lVar6;
  lStack_78 = lVar5;
  func_0x000107c61174();
  func_0x000107c61174();
  plVar7 = &lStack_80;
  func_0x000107c61154(plVar7,puVar8);
  puVar8 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c48c2c();
  func_0x000107c53fcc();
  uVar10 = *(undefined8 *)((long)plVar7 + _DAT_112ff2d70);
  *(undefined **)((long)plVar7 + _DAT_112ff2d70) = puVar8;
  func_0x000107c61174();
  func_0x000107c61170(uVar10);
  func_0x000107c3d6fc(param_2);
  puVar9 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
  func_0x000107c610f8();
  func_0x000107c48c2c();
  func_0x000107c61170(plVar7);
  lVar2 = _DAT_112ff2d80;
  uVar10 = *(undefined8 *)((long)plVar7 + _DAT_112ff2d80);
  *(undefined **)((long)plVar7 + _DAT_112ff2d80) = puVar9;
  func_0x000107c61170(uVar10);
  if (*(long *)((long)plVar7 + lVar2) != 0) {
    func_0x000107c53fcc();
  }
  func_0x000107c53630(plVar7);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_4);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar8);
  uVar10 = *(undefined8 *)(puVar4 + _DAT_112ff2f60);
  *(long **)(puVar4 + _DAT_112ff2f60) = plVar7;
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uVar10);
  return puVar4;
}



/* Entry: 103baac58; end: 103baac87; -[SCSwipeInteractionPresenter initWithPresentingViewController:viewForPresentationGesture:presentedViewControllerProvider:delegate:swipeDirection:performHapticFeedback:invertDismissDirection:] */

void FUN_103baac58(void)

{
  FUN_103baac88();
  return;
}



/* Entry: 103baac88; end: 103baad2b;  */

void FUN_103baac88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined1 param_9,undefined4 param_10,code *param_11)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c615f0(param_5);
  func_0x000107c615f0(param_6);
  (*param_11)(param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  return;
}



/* Entry: 103baad2c; end: 103baad3b; -[SCSwipeInteractionPresenter getPresentationInteractionController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103baad2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff2f60));
  return;
}



/* Entry: 103baad3c; end: 103baae9f;  */

/* WARNING: Possible PIC construction at 0x000103baad8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103baad90) */
/* WARNING: Removing unreachable block (ram,0x000103baad94) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103baad3c(byte param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  lVar1 = unaff_x20 + _DAT_112ff2f50;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c4f078();
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  lVar1 = unaff_x20 + _DAT_112ff2f70;
  func_0x000107c61618();
  if (lVar1 != 0) {
    puVar2 = &UNK_1106df598;
    func_0x000107c613fc(&UNK_1106df598,0x18,7);
    func_0x000107c61614(puVar2 + 0x10);
    puVar3 = &UNK_1106df5c0;
    func_0x000107c613fc(&UNK_1106df5c0,0x30,7);
    *(undefined **)(puVar3 + 0x10) = puVar2;
    puVar3[0x18] = param_1 & 1;
    *(undefined8 *)(puVar3 + 0x20) = param_2;
    *(undefined8 *)(puVar3 + 0x28) = param_3;
    pcStack_50 = FUN_103bab3b4;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_100e1779c;
    puStack_58 = &UNK_1106df5d8;
    puStack_48 = puVar3;
    func_0x000107c60bc4(&puStack_70);
    puVar2 = puStack_48;
    func_0x000100b64c10(param_2,param_3);
    func_0x000107c61574(puVar2);
    func_0x000107c4f594(lVar1);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c615e8(lVar1);
  }
  return;
}



/* Entry: 103baaea0; end: 103bab3b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103baaea0(ulong param_1,long param_2,uint param_3,undefined8 param_4,undefined8 param_5)

{
  undefined1 uVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined *puVar11;
  long *plVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  undefined8 uVar15;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  lVar4 = param_2 + 0x10;
  func_0x000107c61618();
  if (lVar4 != 0) {
    uVar5 = param_1;
    FUN_103bac01c();
    func_0x000107c61170(lVar4);
    if (uVar5 != 0) {
      func_0x000107c61428(param_2 + 0x10,auStack_90,0,0);
      param_2 = param_2 + 0x10;
      func_0x000107c61618();
      if (param_2 != 0) {
        func_0x000107c5677c(param_1);
        func_0x000107c5a048(param_1);
        uVar6 = param_1;
        func_0x000107c5de64();
        func_0x000107c61180();
        if (uVar6 == 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x103bab3b0);
          (*pcVar3)();
        }
        func_0x000107c61174();
        uVar7 = uVar5;
        func_0x000107c420cc();
        uVar1 = *(undefined1 *)(param_2 + _DAT_112ff2f98);
        lVar8 = 0;
        FUN_103ba8ea8();
        lVar9 = lVar8;
        func_0x000107c610f8();
        *(undefined8 *)(lVar9 + _DAT_112ff2db8) = 0x3fee666666666666;
        *(undefined8 *)(lVar9 + _DAT_112ff2dc0) = 0x3fe0000000000000;
        *(undefined8 *)(lVar9 + _DAT_112ff2dc8) = 0x3fd999999999999a;
        *(undefined8 *)(lVar9 + _DAT_112ff2dd0) = 0x3fd851eb851eb852;
        lVar4 = _DAT_112ff2d78;
        func_0x000107c61614(lVar9 + _DAT_112ff2d78,0);
        *(undefined8 *)(lVar9 + _DAT_112ff2d70) = 0;
        *(undefined8 *)(lVar9 + _DAT_112ff2d80) = 0;
        *(undefined8 *)(lVar9 + _DAT_112ff2d60) = 0;
        *(undefined8 *)(lVar9 + _DAT_112ff2d68) = 0;
        lVar2 = _DAT_112ff2d88;
        func_0x000107c61614(lVar9 + _DAT_112ff2d88,0);
        *(undefined8 *)(lVar9 + _DAT_112ff2df0) = 0;
        *(undefined1 *)(lVar9 + _DAT_112ff2df8) = 0;
        *(undefined8 *)(lVar9 + _DAT_112ff2d90) = 0;
        *(undefined8 *)(lVar9 + _DAT_112ff2d98) = 0;
        *(undefined8 *)(lVar9 + _DAT_112ff2da0) = 0;
        func_0x000107c61604(lVar9 + lVar4,param_1);
        func_0x000107c61604(lVar9 + lVar2,param_2);
        *(undefined8 *)(lVar9 + _DAT_112ff2da8) = 1;
        *(ulong *)(lVar9 + _DAT_112ff2dd8) = uVar7;
        *(bool *)(lVar9 + _DAT_112ff2de0) = (uVar7 & 0xfffffffd) == 0;
        *(undefined1 *)(lVar9 + _DAT_112ff2de8) = uVar1;
        puVar11 = PTR_s_init_1125d9248;
        lStack_a0 = lVar9;
        lStack_98 = lVar8;
        func_0x000107c61174();
        plVar10 = &lStack_a0;
        func_0x000107c61154(plVar10,puVar11);
        puVar11 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
        func_0x000107c610f8();
        plVar12 = plVar10;
        func_0x000107c61174();
        func_0x000107c48c2c();
        func_0x000107c53fcc();
        uVar15 = *(undefined8 *)((long)plVar12 + _DAT_112ff2d70);
        *(undefined **)((long)plVar12 + _DAT_112ff2d70) = puVar11;
        func_0x000107c61174(puVar11);
        func_0x000107c61170(uVar15);
        func_0x000107c3d6fc(uVar6);
        puVar13 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
        func_0x000107c610f8();
        func_0x000107c48c2c();
        func_0x000107c61170(plVar12);
        lVar4 = _DAT_112ff2d80;
        uVar15 = *(undefined8 *)((long)plVar12 + _DAT_112ff2d80);
        *(undefined **)((long)plVar12 + _DAT_112ff2d80) = puVar13;
        func_0x000107c61170(uVar15);
        if (*(long *)((long)plVar12 + lVar4) != 0) {
          func_0x000107c53fcc();
        }
        func_0x000107c53630(plVar12);
        func_0x000107c61170(param_1);
        func_0x000107c61170(uVar6);
        func_0x000107c61170(param_2);
        func_0x000107c61170(puVar11);
        uVar15 = *(undefined8 *)(param_2 + _DAT_112ff2f68);
        *(long **)(param_2 + _DAT_112ff2f68) = plVar10;
        func_0x000107c61170(uVar15);
        if (*(char *)(param_2 + _DAT_112ff2f90) == '\x01') {
          puVar11 = PTR_PTR_1126affa8;
          func_0x000107c61168();
          func_0x000107c5aa04();
          func_0x000107c61180();
          if (puVar11 == (undefined *)0x0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x103bab3b4);
            (*pcVar3)();
          }
          func_0x000107c4e57c();
          func_0x000107c61170(puVar11);
        }
        if ((param_3 & 1) == 0) {
          lVar4 = param_2 + _DAT_112ff2f58;
          func_0x000107c61618();
          if (lVar4 != 0) {
            FUN_103ba9ba4();
            func_0x000107c5c4cc(lVar4);
            func_0x000107c615e8(lVar4);
          }
        }
        lVar4 = param_2 + _DAT_112ff2f50;
        func_0x000107c61618();
        if (lVar4 != 0) {
          puVar11 = &UNK_1106df638;
          func_0x000107c613fc(&UNK_1106df638,0x30,7);
          *(ulong *)(puVar11 + 0x10) = param_1;
          *(long *)(puVar11 + 0x18) = param_2;
          *(undefined8 *)(puVar11 + 0x20) = param_4;
          *(undefined8 *)(puVar11 + 0x28) = param_5;
          pcStack_b0 = FUN_103baca88;
          puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_c8 = 0x42000000;
          puStack_c0 = &UNK_1000f6b44;
          puStack_b8 = &UNK_1106df650;
          ppuVar14 = &puStack_d0;
          puStack_a8 = puVar11;
          func_0x000107c60bc4(ppuVar14);
          puVar11 = puStack_a8;
          func_0x000107c61174(param_2);
          func_0x000107c61174(param_1);
          func_0x000100b64c10(param_4,param_5);
          func_0x000107c61574(puVar11);
          func_0x000107c4f018(lVar4);
          func_0x000107c615e8(uVar5);
          func_0x000107c61170(param_2);
          func_0x000107c60bd0(ppuVar14);
          func_0x000107c61170(lVar4);
          return;
        }
        func_0x000107c61170(param_2);
      }
      func_0x000107c615e8(uVar5);
    }
  }
  return;
}



/* Entry: 103bab3b4; end: 103bab3df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bab3b4(ulong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined1 uVar4;
  long lVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  undefined *puVar14;
  long *plVar15;
  undefined *puVar16;
  undefined **ppuVar17;
  long lVar18;
  long unaff_x20;
  undefined8 uVar19;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar18 = *(long *)(unaff_x20 + 0x10);
  bVar3 = *(byte *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c61428(lVar18 + 0x10,auStack_78,0,0);
  lVar7 = lVar18 + 0x10;
  func_0x000107c61618();
  if (lVar7 != 0) {
    uVar8 = param_1;
    FUN_103bac01c();
    func_0x000107c61170(lVar7);
    if (uVar8 != 0) {
      func_0x000107c61428(lVar18 + 0x10,auStack_90,0,0);
      lVar18 = lVar18 + 0x10;
      func_0x000107c61618();
      if (lVar18 != 0) {
        func_0x000107c5677c(param_1);
        func_0x000107c5a048(param_1);
        uVar9 = param_1;
        func_0x000107c5de64();
        func_0x000107c61180();
        if (uVar9 == 0) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x103bab3b0);
          (*pcVar6)();
        }
        func_0x000107c61174();
        uVar10 = uVar8;
        func_0x000107c420cc();
        uVar4 = *(undefined1 *)(lVar18 + _DAT_112ff2f98);
        lVar11 = 0;
        FUN_103ba8ea8();
        lVar12 = lVar11;
        func_0x000107c610f8();
        *(undefined8 *)(lVar12 + _DAT_112ff2db8) = 0x3fee666666666666;
        *(undefined8 *)(lVar12 + _DAT_112ff2dc0) = 0x3fe0000000000000;
        *(undefined8 *)(lVar12 + _DAT_112ff2dc8) = 0x3fd999999999999a;
        *(undefined8 *)(lVar12 + _DAT_112ff2dd0) = 0x3fd851eb851eb852;
        lVar7 = _DAT_112ff2d78;
        func_0x000107c61614(lVar12 + _DAT_112ff2d78,0);
        *(undefined8 *)(lVar12 + _DAT_112ff2d70) = 0;
        *(undefined8 *)(lVar12 + _DAT_112ff2d80) = 0;
        *(undefined8 *)(lVar12 + _DAT_112ff2d60) = 0;
        *(undefined8 *)(lVar12 + _DAT_112ff2d68) = 0;
        lVar5 = _DAT_112ff2d88;
        func_0x000107c61614(lVar12 + _DAT_112ff2d88,0);
        *(undefined8 *)(lVar12 + _DAT_112ff2df0) = 0;
        *(undefined1 *)(lVar12 + _DAT_112ff2df8) = 0;
        *(undefined8 *)(lVar12 + _DAT_112ff2d90) = 0;
        *(undefined8 *)(lVar12 + _DAT_112ff2d98) = 0;
        *(undefined8 *)(lVar12 + _DAT_112ff2da0) = 0;
        func_0x000107c61604(lVar12 + lVar7,param_1);
        func_0x000107c61604(lVar12 + lVar5,lVar18);
        *(undefined8 *)(lVar12 + _DAT_112ff2da8) = 1;
        *(ulong *)(lVar12 + _DAT_112ff2dd8) = uVar10;
        *(bool *)(lVar12 + _DAT_112ff2de0) = (uVar10 & 0xfffffffd) == 0;
        *(undefined1 *)(lVar12 + _DAT_112ff2de8) = uVar4;
        puVar14 = PTR_s_init_1125d9248;
        lStack_a0 = lVar12;
        lStack_98 = lVar11;
        func_0x000107c61174();
        plVar13 = &lStack_a0;
        func_0x000107c61154(plVar13,puVar14);
        puVar14 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
        func_0x000107c610f8();
        plVar15 = plVar13;
        func_0x000107c61174();
        func_0x000107c48c2c();
        func_0x000107c53fcc();
        uVar19 = *(undefined8 *)((long)plVar15 + _DAT_112ff2d70);
        *(undefined **)((long)plVar15 + _DAT_112ff2d70) = puVar14;
        func_0x000107c61174(puVar14);
        func_0x000107c61170(uVar19);
        func_0x000107c3d6fc(uVar9);
        puVar16 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
        func_0x000107c610f8();
        func_0x000107c48c2c();
        func_0x000107c61170(plVar15);
        lVar7 = _DAT_112ff2d80;
        uVar19 = *(undefined8 *)((long)plVar15 + _DAT_112ff2d80);
        *(undefined **)((long)plVar15 + _DAT_112ff2d80) = puVar16;
        func_0x000107c61170(uVar19);
        if (*(long *)((long)plVar15 + lVar7) != 0) {
          func_0x000107c53fcc();
        }
        func_0x000107c53630(plVar15);
        func_0x000107c61170(param_1);
        func_0x000107c61170(uVar9);
        func_0x000107c61170(lVar18);
        func_0x000107c61170(puVar14);
        uVar19 = *(undefined8 *)(lVar18 + _DAT_112ff2f68);
        *(long **)(lVar18 + _DAT_112ff2f68) = plVar13;
        func_0x000107c61170(uVar19);
        if (*(char *)(lVar18 + _DAT_112ff2f90) == '\x01') {
          puVar14 = PTR_PTR_1126affa8;
          func_0x000107c61168();
          func_0x000107c5aa04();
          func_0x000107c61180();
          if (puVar14 == (undefined *)0x0) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x103bab3b4);
            (*pcVar6)();
          }
          func_0x000107c4e57c();
          func_0x000107c61170(puVar14);
        }
        if ((bVar3 & 1) == 0) {
          lVar7 = lVar18 + _DAT_112ff2f58;
          func_0x000107c61618();
          if (lVar7 != 0) {
            FUN_103ba9ba4();
            func_0x000107c5c4cc(lVar7);
            func_0x000107c615e8(lVar7);
          }
        }
        lVar7 = lVar18 + _DAT_112ff2f50;
        func_0x000107c61618();
        if (lVar7 != 0) {
          puVar14 = &UNK_1106df638;
          func_0x000107c613fc(&UNK_1106df638,0x30,7);
          *(ulong *)(puVar14 + 0x10) = param_1;
          *(long *)(puVar14 + 0x18) = lVar18;
          *(undefined8 *)(puVar14 + 0x20) = uVar1;
          *(undefined8 *)(puVar14 + 0x28) = uVar2;
          pcStack_b0 = FUN_103baca88;
          puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_c8 = 0x42000000;
          puStack_c0 = &UNK_1000f6b44;
          puStack_b8 = &UNK_1106df650;
          ppuVar17 = &puStack_d0;
          puStack_a8 = puVar14;
          func_0x000107c60bc4(ppuVar17);
          puVar14 = puStack_a8;
          func_0x000107c61174(lVar18);
          func_0x000107c61174(param_1);
          func_0x000100b64c10(uVar1,uVar2);
          func_0x000107c61574(puVar14);
          func_0x000107c4f018(lVar7);
          func_0x000107c615e8(uVar8);
          func_0x000107c61170(lVar18);
          func_0x000107c60bd0(ppuVar17);
          func_0x000107c61170(lVar7);
          return;
        }
        func_0x000107c61170(lVar18);
      }
      func_0x000107c615e8(uVar8);
    }
  }
  return;
}



/* Entry: 103bab3e0; end: 103bab4d3; -[SCSwipeInteractionPresenter presentWithAnimated:completion:] */

void FUN_103bab3e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x000107c60bc4();
  if (param_4 == 0) {
    puVar1 = (undefined *)0x0;
    pcVar2 = (code *)0x0;
  }
  else {
    puVar1 = &UNK_1106df610;
    func_0x000107c613fc(&UNK_1106df610,0x18,7);
    *(long *)(puVar1 + 0x10) = param_4;
    pcVar2 = FUN_103baca7c;
  }
  func_0x000107c61174(param_1);
  FUN_103baad3c(param_3,pcVar2,puVar1);
  func_0x00010058d43c(pcVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103bab4d4; end: 103bab7d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bab4d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  code *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long unaff_x20;
  
  puVar2 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
  func_0x000107c61168(PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68);
  uVar3 = param_5;
  func_0x000107c6148c(param_5,puVar2);
  if (uVar3 != 0) {
    func_0x000107c61174(param_5);
    func_0x000107c5de64();
    func_0x000107c61180();
    if (uVar3 != 0) {
      puVar2 = PTR__OBJC_CLASS___UIScrollView_1126af098;
      func_0x000107c61168(PTR__OBJC_CLASS___UIScrollView_1126af098);
      uVar4 = uVar3;
      func_0x000107c6148c(uVar3,puVar2);
      if (uVar4 == 0) {
        func_0x000107c61170(param_5);
        param_5 = uVar3;
      }
      else {
        uVar5 = uVar4;
        FUN_103bac2d4();
        if ((uVar5 & 1) == 0) {
          func_0x000107c404a0(uVar4);
          lVar6 = unaff_x20 + _DAT_112ff2f50;
          func_0x000107c61618();
          if (lVar6 == 0) {
            func_0x000107c61170(uVar3);
            func_0x000107c61170(param_5);
            return;
          }
          lVar7 = lVar6;
          func_0x000107c5de64();
          func_0x000107c61180();
          func_0x000107c61170(lVar6);
          if (lVar7 != 0) {
            func_0x000107c3ec60(lVar7);
            func_0x000107c61170(lVar7);
            func_0x000107c609b0(param_1,param_2,param_3,param_4);
            func_0x000107c61170(uVar3);
            func_0x000107c61170(param_5);
            return;
          }
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x103bab654);
          (*pcVar1)();
        }
        func_0x000107c61170(uVar3);
      }
    }
    func_0x000107c61170(param_5);
  }
  return;
}



/* Entry: 103bab7d4; end: 103bab833; -[SCSwipeInteractionPresenter init] */

void FUN_103bab7d4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSwipeInteractionPresenter.SCSwipeInteractionPresenter",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103bab800);
  (*pcVar1)();
}



/* Entry: 103bab834; end: 103bab89b; -[SCSwipeInteractionPresenter .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103bab860: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103bab864) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103bab834(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ff2f50);
  param_1 = param_1 + _DAT_112ff2f58;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 103bab89c; end: 103bab8ab; -[SCSwipeInteractionPresenter animationControllerForPresentedController:presentingController:sourceController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bab89c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff2f60));
  return;
}



/* Entry: 103bab8ac; end: 103bab8bb; -[SCSwipeInteractionPresenter interactionControllerForPresentation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bab8ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff2f60));
  return;
}



/* Entry: 103bab8bc; end: 103bab9eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_103bab8bc(ulong param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  long unaff_x20;
  long lVar4;
  undefined *puStack_48;
  
  *(undefined1 *)(unaff_x20 + _DAT_112ff2f78) = 1;
  lVar4 = unaff_x20 + _DAT_112ff2f50;
  func_0x000107c61618();
  if (lVar4 != 0) {
    lVar1 = lVar4;
    func_0x000107c4f078();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    if (lVar1 != 0) {
      puStack_48 = PTR_DAT_1126a3740;
      lVar4 = lVar1;
      func_0x000107c61494(lVar1,1,&puStack_48);
      if (lVar4 != 0) {
        func_0x000107c5ab4c();
        uVar3 = (uint)lVar4;
        func_0x000107c61170(lVar1);
        goto LAB_103bab9d0;
      }
      func_0x000107c61170(lVar1);
    }
  }
  lVar4 = *(long *)(unaff_x20 + _DAT_112ff2f60);
  if (lVar4 != 0) {
    FUN_103ba8ea8(0);
    func_0x000107c61174();
    func_0x000107c61174(lVar4);
    uVar2 = param_1;
    func_0x000107c60118(param_1,lVar4);
    func_0x000107c61170(param_1);
    func_0x000107c61170(lVar4);
    if ((uVar2 & 1) != 0) {
      func_0x000103bab470(param_2);
      uVar3 = (uint)param_2;
      goto LAB_103bab9d0;
    }
  }
  uVar3 = 1;
LAB_103bab9d0:
  return uVar3 & 1;
}



/* Entry: 103bab9ec; end: 103baba4f; -[SCSwipeInteractionPresenter swipeInteractionController:shouldStartInteractionWithDirection:] */

uint FUN_103bab9ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_103bab8bc(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 103baba50; end: 103baba9f; -[SCSwipeInteractionPresenter swipeInteractionController:didStartInteractionWithDirection:] */

/* WARNING: Possible PIC construction at 0x000103baba88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103baba8c) */

void FUN_103baba50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_103bac384(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 103babaa0; end: 103babb1f; -[SCSwipeInteractionPresenter swipeInteractionController:withDirection:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

uint FUN_103babaa0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_1);
  FUN_103bac4c8(param_4,param_5);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_1);
  return (uint)param_4 & 1;
}



/* Entry: 103babb20; end: 103babb93; -[SCSwipeInteractionPresenter swipeInteractionController:shouldBeRequiredToFailByGestureRecognizer:] */

uint FUN_103babb20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_4;
  FUN_103bac898(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 103babb94; end: 103babc67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103babb94(ulong param_1)

{
  ulong uVar1;
  long unaff_x20;
  long lVar2;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112ff2f60);
  if (lVar2 != 0) {
    FUN_103ba8ea8(0);
    func_0x000107c61174();
    func_0x000107c61174(lVar2);
    uVar1 = param_1;
    func_0x000107c60118(param_1,lVar2);
    func_0x000107c61170(param_1);
    func_0x000107c61170(lVar2);
    if ((uVar1 & 1) != 0) {
      lVar2 = unaff_x20 + _DAT_112ff2f58;
      func_0x000107c61618();
      if (lVar2 != 0) {
        FUN_103ba9ba4();
        func_0x000107c5c4cc(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar2);
        return;
      }
    }
  }
  return;
}



/* Entry: 103babc68; end: 103babcb7; -[SCSwipeInteractionPresenter swipeInteractionControllerDidBegin:] */

/* WARNING: Possible PIC construction at 0x000103babca0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103babca4) */

void FUN_103babc68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_103babb94(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 103babcb8; end: 103babe83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103babcb8(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x20;
  long lVar3;
  long lVar4;
  
  lVar4 = _DAT_112ff2f60;
  lVar3 = *(long *)(unaff_x20 + _DAT_112ff2f60);
  if (lVar3 == 0) {
LAB_103babd3c:
    lVar3 = *(long *)(unaff_x20 + _DAT_112ff2f68);
    if (lVar3 != 0) {
      FUN_103ba8ea8(0);
      uVar1 = param_1;
      func_0x000107c61174();
      func_0x000107c61174(lVar3);
      uVar2 = uVar1;
      func_0x000107c60118(uVar1,lVar3);
      func_0x000107c61170(uVar1);
      func_0x000107c61170(lVar3);
      if (((uVar2 & 1) != 0) && ((param_2 & 1) == 0)) goto LAB_103babd9c;
    }
    lVar4 = *(long *)(unaff_x20 + lVar4);
    if (lVar4 == 0) goto LAB_103babe60;
    FUN_103ba8ea8(0);
    func_0x000107c61174();
    func_0x000107c61174(lVar4);
    uVar1 = param_1;
    func_0x000107c60118(param_1,lVar4);
    func_0x000107c61170(param_1);
    func_0x000107c61170(lVar4);
    if (((uVar1 & 1) == 0) || ((param_2 & 1) != 0)) goto LAB_103babe60;
    uVar1 = unaff_x20 + _DAT_112ff2f58;
    func_0x000107c61618();
    if (uVar1 == 0) goto LAB_103babe60;
    uVar2 = uVar1;
    func_0x000107c61150();
    if ((uVar2 & 1) != 0) {
      func_0x000107c5c4d8(uVar1);
    }
  }
  else {
    FUN_103ba8ea8(0);
    uVar1 = param_1;
    func_0x000107c61174();
    func_0x000107c61174(lVar3);
    uVar2 = uVar1;
    func_0x000107c60118(uVar1,lVar3);
    func_0x000107c61170(uVar1);
    func_0x000107c61170(lVar3);
    if (((uVar2 & 1) == 0) || ((param_2 & 1) == 0)) goto LAB_103babd3c;
LAB_103babd9c:
    uVar1 = unaff_x20 + _DAT_112ff2f58;
    func_0x000107c61618();
    if (uVar1 == 0) goto LAB_103babe60;
    func_0x000107c5c4d4();
  }
  func_0x000107c615e8(uVar1);
LAB_103babe60:
  *(undefined1 *)(unaff_x20 + _DAT_112ff2f78) = 0;
  return;
}



/* Entry: 103babe84; end: 103babedb; -[SCSwipeInteractionPresenter swipeInteractionControllerDidFinish:cancelled:] */

/* WARNING: Possible PIC construction at 0x000103babec4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103babec8) */

void FUN_103babe84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_103babcb8(param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 103babedc; end: 103babfcb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103babedc(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  undefined *puVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_58 [24];
  
  lVar4 = *(long *)(unaff_x20 + _DAT_112ff2f60);
  if (lVar4 != 0) {
    FUN_103ba8ea8(0);
    func_0x000107c61174();
    func_0x000107c61174(lVar4);
    uVar2 = param_1;
    func_0x000107c60118(param_1,lVar4);
    func_0x000107c61170(param_1);
    func_0x000107c61170(lVar4);
    lVar4 = _DAT_112ff2f48;
    if (((uVar2 & 1) != 0) &&
       (func_0x000107c61428(unaff_x20 + _DAT_112ff2f48,auStack_58,0,0),
       *(char *)(unaff_x20 + lVar4) == '\x01')) {
      puVar3 = PTR_PTR_1126affa8;
      func_0x000107c61168();
      func_0x000107c5aa04();
      func_0x000107c61180();
      if (puVar3 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103babfcc);
        (*pcVar1)();
      }
      func_0x000107c4e57c();
      func_0x000107c61170(puVar3);
    }
  }
  return;
}



/* Entry: 103babfcc; end: 103bac01b; -[SCSwipeInteractionPresenter swipeInteractionControllerDidCrossCommitThreshold:] */

/* WARNING: Possible PIC construction at 0x000103bac004: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103bac008) */

void FUN_103babfcc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_103babedc(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 103bac01c; end: 103bac2d3;  */

void FUN_103bac01c(ulong param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  puVar2 = PTR__OBJC_CLASS___UINavigationController_1126af6f0;
  func_0x000107c61168(PTR__OBJC_CLASS___UINavigationController_1126af6f0);
  uVar8 = param_1;
  func_0x000107c6148c(param_1,puVar2);
  if (uVar8 == 0) {
    uVar8 = param_1;
    func_0x000107c3f9e0();
    func_0x000107c61180();
    uVar3 = 0;
    FUN_103bacacc(0,0x112d4ccd8,&PTR__OBJC_CLASS___UIViewController_1126af898);
    uVar6 = uVar8;
    func_0x000107c5fc54(uVar8,uVar3);
    func_0x000107c61170(uVar8);
    if (uVar6 >> 0x3e == 0) {
      uVar8 = *(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar8 = uVar6 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar6) {
        uVar8 = uVar6;
      }
      func_0x000107c60480();
    }
    if (uVar8 != 0) {
      uVar9 = 0;
      do {
        if ((uVar6 & 0xc000000000000001) == 0) {
          if (*(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x103bac244);
            (*pcVar1)();
          }
          uVar10 = *(ulong *)(uVar6 + uVar9 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar10 = uVar9;
          func_0x000100f3b77c(uVar9,uVar6);
        }
        uVar4 = uVar9 + 1;
        if (SCARRY8(uVar9,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x103bac240);
          (*pcVar1)();
        }
        puStack_68 = PTR_DAT_1126a3748;
        uVar7 = uVar10;
        func_0x000107c61494(uVar10,1,&puStack_68);
        if (uVar7 != 0) goto LAB_103bac224;
        func_0x000107c61170(uVar10);
        uVar9 = uVar9 + 1;
      } while (uVar4 != uVar8);
    }
  }
  else {
    uVar9 = param_1;
    func_0x000107c61174(param_1);
    func_0x000107c5de94();
    func_0x000107c61180();
    uVar3 = 0;
    FUN_103bacacc(0,0x112d4ccd8,&PTR__OBJC_CLASS___UIViewController_1126af898);
    uVar6 = uVar8;
    func_0x000107c5fc54(uVar8,uVar3);
    func_0x000107c61170(uVar8);
    if (uVar6 >> 0x3e == 0) {
      uVar8 = *(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar8 = uVar6 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar6) {
        uVar8 = uVar6;
      }
      func_0x000107c60480();
    }
    if (uVar8 != 0) {
      uVar10 = 0;
      do {
        if ((uVar6 & 0xc000000000000001) == 0) {
          if (*(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x103bac23c);
            (*pcVar1)();
          }
          uVar4 = *(ulong *)(uVar6 + uVar10 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar4 = uVar10;
          func_0x000100f3b77c(uVar10,uVar6);
        }
        uVar7 = uVar10 + 1;
        if (SCARRY8(uVar10,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x103bac238);
          (*pcVar1)();
        }
        puStack_78 = PTR_DAT_1126a3748;
        uVar5 = uVar4;
        func_0x000107c61494(uVar4,1,&puStack_78);
        if (uVar5 != 0) {
          func_0x000107c61170(uVar9);
LAB_103bac224:
          func_0x000107c6142c(uVar6);
          return;
        }
        func_0x000107c61170(uVar4);
        uVar10 = uVar10 + 1;
      } while (uVar7 != uVar8);
    }
    func_0x000107c61170(uVar9);
  }
  func_0x000107c6142c(uVar6);
  puStack_70 = PTR_DAT_1126a3748;
  uVar8 = param_1;
  func_0x000107c61494(param_1,1,&puStack_70);
  if (uVar8 != 0) {
    func_0x000107c61174(param_1);
  }
  return;
}



/* Entry: 103bac2d4; end: 103bac383;  */

void FUN_103bac2d4(ulong param_1)

{
  ulong uVar1;
  
  func_0x000107c5c42c();
  func_0x000107c61180();
  if (param_1 != 0) {
    FUN_103bacacc(0,0x112ff2fc8,&PTR__OBJC_CLASS___UIScrollView_1126af098);
    func_0x000107c614e8();
    do {
      uVar1 = param_1;
      func_0x000107c49f68();
      if (((uVar1 & 1) != 0) || (uVar1 = param_1, func_0x000107c401d0(), (uVar1 & 1) != 0)) {
        func_0x000107c61170(param_1);
        return;
      }
      uVar1 = param_1;
      func_0x000107c5c42c();
      func_0x000107c61180();
      func_0x000107c61170(param_1);
      param_1 = uVar1;
    } while (uVar1 != 0);
  }
  return;
}



/* Entry: 103bac384; end: 103bac4c7;  */

/* WARNING: Possible PIC construction at 0x000103bac3ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103baad8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103bac468: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103baad90) */
/* WARNING: Removing unreachable block (ram,0x000103baad94) */
/* WARNING: Removing unreachable block (ram,0x000103bac3f0) */
/* WARNING: Removing unreachable block (ram,0x000103bac3fc) */
/* WARNING: Removing unreachable block (ram,0x000103baad3c) */
/* WARNING: Removing unreachable block (ram,0x000103baadb0) */
/* WARNING: Removing unreachable block (ram,0x000103baadc4) */
/* WARNING: Removing unreachable block (ram,0x000103baae88) */
/* WARNING: Removing unreachable block (ram,0x000103baad74) */
/* WARNING: Removing unreachable block (ram,0x000103bac46c) */
/* WARNING: Removing unreachable block (ram,0x000103bac478) */
/* WARNING: Removing unreachable block (ram,0x000103bac48c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bac384(undefined8 param_1)

{
  long unaff_x20;
  long lVar1;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112ff2f60);
  if (lVar1 == 0) {
    lVar1 = *(long *)(unaff_x20 + _DAT_112ff2f68);
    if (lVar1 == 0) {
      return;
    }
    FUN_103ba8ea8(0);
    func_0x000107c61174(param_1);
    func_0x000107c61174(lVar1);
    func_0x000107c60118(param_1,lVar1);
  }
  else {
    FUN_103ba8ea8(0);
    func_0x000107c61174(param_1);
    func_0x000107c61174(lVar1);
    func_0x000107c60118(param_1,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103bac4c8; end: 103bac897;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bac4c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6)

{
  code *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x20;
  
  puVar2 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
  func_0x000107c61168(PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68);
  uVar3 = param_6;
  func_0x000107c6148c(param_6,puVar2);
  if (uVar3 == 0) {
    return;
  }
  lVar7 = unaff_x20 + _DAT_112ff2f58;
  func_0x000107c61618();
  func_0x000107c61174(param_6);
  if (lVar7 != 0) {
    lVar4 = lVar7;
    func_0x000107c5c4d0();
    func_0x000107c615e8(lVar7);
    if ((int)lVar4 == 0) goto LAB_103bac748;
  }
  lVar7 = *(long *)(unaff_x20 + _DAT_112ff2f88);
  if (lVar7 < 2) {
    if (lVar7 == 0) {
      func_0x000107c61174(param_6);
      func_0x000107c5de64();
      func_0x000107c61180();
      if (uVar3 != 0) {
        puVar2 = PTR__OBJC_CLASS___UIScrollView_1126af098;
        func_0x000107c61168(PTR__OBJC_CLASS___UIScrollView_1126af098);
        uVar5 = uVar3;
        func_0x000107c6148c(uVar3,puVar2);
        if (uVar5 == 0) {
LAB_103bac770:
          func_0x000107c61170(param_6);
          func_0x000107c61170(param_6);
          param_6 = uVar3;
          goto LAB_103bac748;
        }
        uVar6 = uVar5;
        FUN_103bac2d4();
        if ((uVar6 & 1) == 0) {
          func_0x000107c404a0(uVar5);
LAB_103bac7ac:
          func_0x000107c61170(uVar3);
          func_0x000107c61170(param_6);
          func_0x000107c61170(param_6);
          return;
        }
LAB_103bac738:
        func_0x000107c61170(uVar3);
      }
    }
    else {
      if (lVar7 != 1) goto LAB_103bac748;
      func_0x000107c61174(param_6);
      func_0x000107c5de64();
      func_0x000107c61180();
      if (uVar3 != 0) {
        puVar2 = PTR__OBJC_CLASS___UIScrollView_1126af098;
        func_0x000107c61168(PTR__OBJC_CLASS___UIScrollView_1126af098);
        uVar5 = uVar3;
        func_0x000107c6148c(uVar3,puVar2);
        if (uVar5 == 0) goto LAB_103bac770;
        uVar6 = uVar5;
        FUN_103bac2d4();
        if ((uVar6 & 1) == 0) {
          func_0x000107c404a0(uVar5);
          goto LAB_103bac7ac;
        }
        goto LAB_103bac738;
      }
    }
LAB_103bac73c:
    func_0x000107c61170(param_6);
  }
  else {
    if (lVar7 == 2) {
      func_0x000107c61174();
      func_0x000107c5de64();
      func_0x000107c61180();
      if (uVar3 == 0) goto LAB_103bac73c;
      puVar2 = PTR__OBJC_CLASS___UIScrollView_1126af098;
      func_0x000107c61168(PTR__OBJC_CLASS___UIScrollView_1126af098);
      uVar5 = uVar3;
      func_0x000107c6148c(uVar3,puVar2);
      if (uVar5 != 0) {
        uVar6 = uVar5;
        FUN_103bac2d4();
        if ((uVar6 & 1) == 0) {
          func_0x000107c404a0(uVar5);
          lVar7 = unaff_x20 + _DAT_112ff2f50;
          func_0x000107c61618();
          if (lVar7 == 0) {
LAB_103bac86c:
            func_0x000107c61170(uVar3);
            func_0x000107c61170(param_6);
            func_0x000107c61170(param_6);
            return;
          }
          lVar4 = lVar7;
          func_0x000107c5de64();
          func_0x000107c61180();
          func_0x000107c61170(lVar7);
          if (lVar4 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x103bac898);
            (*pcVar1)();
          }
          func_0x000107c3ec60(lVar4);
          func_0x000107c61170(lVar4);
          func_0x000107c609b0(param_1,param_2,param_3,param_4);
LAB_103bac844:
          func_0x000107c61170(uVar3);
          func_0x000107c61170(param_6);
          func_0x000107c61170(param_6);
          return;
        }
        goto LAB_103bac738;
      }
    }
    else {
      if (lVar7 != 3) goto LAB_103bac748;
      func_0x000107c61174();
      func_0x000107c5de64();
      func_0x000107c61180();
      if (uVar3 == 0) goto LAB_103bac73c;
      puVar2 = PTR__OBJC_CLASS___UIScrollView_1126af098;
      func_0x000107c61168(PTR__OBJC_CLASS___UIScrollView_1126af098);
      uVar5 = uVar3;
      func_0x000107c6148c(uVar3,puVar2);
      if (uVar5 != 0) {
        uVar6 = uVar5;
        FUN_103bac2d4();
        if ((uVar6 & 1) == 0) {
          func_0x000107c404a0(uVar5);
          lVar7 = unaff_x20 + _DAT_112ff2f50;
          func_0x000107c61618();
          if (lVar7 == 0) goto LAB_103bac86c;
          lVar4 = lVar7;
          func_0x000107c5de64();
          func_0x000107c61180();
          func_0x000107c61170(lVar7);
          if (lVar4 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x103bac894);
            (*pcVar1)();
          }
          func_0x000107c3ec60(lVar4);
          func_0x000107c61170(lVar4);
          func_0x000107c609cc(param_1,param_2,param_3,param_4);
          goto LAB_103bac844;
        }
        goto LAB_103bac738;
      }
    }
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_6);
    param_6 = uVar3;
  }
LAB_103bac748:
  func_0x000107c61170(param_6);
  return;
}



/* Entry: 103bac898; end: 103baca5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bac898(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  code *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long unaff_x20;
  
  lVar7 = *(long *)(unaff_x20 + _DAT_112ff2f88);
  if (1 < lVar7) {
    if (lVar7 != 2) {
      if (lVar7 != 3) {
        return;
      }
      puVar2 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
      func_0x000107c61168(PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68);
      uVar3 = param_5;
      func_0x000107c6148c(param_5,puVar2);
      if (uVar3 != 0) {
        func_0x000107c61174(param_5);
        func_0x000107c5de64();
        func_0x000107c61180();
        if (uVar3 != 0) {
          puVar2 = PTR__OBJC_CLASS___UIScrollView_1126af098;
          func_0x000107c61168(PTR__OBJC_CLASS___UIScrollView_1126af098);
          uVar4 = uVar3;
          func_0x000107c6148c(uVar3,puVar2);
          if (uVar4 == 0) {
            func_0x000107c61170(param_5);
            param_5 = uVar3;
          }
          else {
            uVar5 = uVar4;
            FUN_103bac2d4();
            if ((uVar5 & 1) == 0) {
              func_0x000107c404a0(uVar4);
              lVar7 = unaff_x20 + _DAT_112ff2f50;
              func_0x000107c61618();
              if (lVar7 == 0) {
                func_0x000107c61170(uVar3);
                func_0x000107c61170(param_5);
                return;
              }
              lVar6 = lVar7;
              func_0x000107c5de64();
              func_0x000107c61180();
              func_0x000107c61170(lVar7);
              if (lVar6 != 0) {
                func_0x000107c3ec60(lVar6);
                func_0x000107c61170(lVar6);
                func_0x000107c609cc(param_1,param_2,param_3,param_4);
                func_0x000107c61170(uVar3);
                func_0x000107c61170(param_5);
                return;
              }
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x103bab7d4);
              (*pcVar1)();
            }
            func_0x000107c61170(uVar3);
          }
        }
        func_0x000107c61170(param_5);
      }
      return;
    }
    puVar2 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
    func_0x000107c61168(PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68);
    uVar3 = param_5;
    func_0x000107c6148c(param_5,puVar2);
    if (uVar3 != 0) {
      func_0x000107c61174(param_5);
      func_0x000107c5de64();
      func_0x000107c61180();
      if (uVar3 != 0) {
        puVar2 = PTR__OBJC_CLASS___UIScrollView_1126af098;
        func_0x000107c61168(PTR__OBJC_CLASS___UIScrollView_1126af098);
        uVar4 = uVar3;
        func_0x000107c6148c(uVar3,puVar2);
        if (uVar4 == 0) {
          func_0x000107c61170(param_5);
          param_5 = uVar3;
        }
        else {
          uVar5 = uVar4;
          FUN_103bac2d4();
          if ((uVar5 & 1) == 0) {
            func_0x000107c404a0(uVar4);
            lVar7 = unaff_x20 + _DAT_112ff2f50;
            func_0x000107c61618();
            if (lVar7 == 0) {
              func_0x000107c61170(uVar3);
              func_0x000107c61170(param_5);
              return;
            }
            lVar6 = lVar7;
            func_0x000107c5de64();
            func_0x000107c61180();
            func_0x000107c61170(lVar7);
            if (lVar6 != 0) {
              func_0x000107c3ec60(lVar6);
              func_0x000107c61170(lVar6);
              func_0x000107c609b0(param_1,param_2,param_3,param_4);
              func_0x000107c61170(uVar3);
              func_0x000107c61170(param_5);
              return;
            }
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x103bab654);
            (*pcVar1)();
          }
          func_0x000107c61170(uVar3);
        }
      }
      func_0x000107c61170(param_5);
    }
    return;
  }
  uVar3 = param_5;
  if (lVar7 == 0) {
    puVar2 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
    func_0x000107c61168(PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68);
    func_0x000107c6148c(param_5,puVar2);
    if (uVar3 == 0) {
      return;
    }
    func_0x000107c61174(param_5);
    func_0x000107c5de64();
    func_0x000107c61180();
    if (uVar3 == 0) goto LAB_103baca18;
    puVar2 = PTR__OBJC_CLASS___UIScrollView_1126af098;
    func_0x000107c61168(PTR__OBJC_CLASS___UIScrollView_1126af098);
    uVar4 = uVar3;
    func_0x000107c6148c(uVar3,puVar2);
    uVar5 = param_5;
    if (uVar4 != 0) {
      uVar5 = uVar4;
      FUN_103bac2d4();
      if ((uVar5 & 1) == 0) {
        func_0x000107c404a0(uVar4);
        goto LAB_103baca40;
      }
      goto LAB_103bac9e4;
    }
  }
  else {
    if (lVar7 != 1) {
      return;
    }
    puVar2 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
    func_0x000107c61168(PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68);
    func_0x000107c6148c(param_5,puVar2);
    if (uVar3 == 0) {
      return;
    }
    func_0x000107c61174(param_5);
    func_0x000107c5de64();
    func_0x000107c61180();
    if (uVar3 == 0) goto LAB_103baca18;
    puVar2 = PTR__OBJC_CLASS___UIScrollView_1126af098;
    func_0x000107c61168(PTR__OBJC_CLASS___UIScrollView_1126af098);
    uVar4 = uVar3;
    func_0x000107c6148c(uVar3,puVar2);
    uVar5 = param_5;
    if (uVar4 != 0) {
      uVar5 = uVar4;
      FUN_103bac2d4();
      if ((uVar5 & 1) == 0) {
        func_0x000107c404a0(uVar4);
LAB_103baca40:
        func_0x000107c61170(uVar3);
        func_0x000107c61170(param_5);
        return;
      }
LAB_103bac9e4:
      func_0x000107c61170(uVar3);
      goto LAB_103baca18;
    }
  }
  param_5 = uVar3;
  func_0x000107c61170(uVar5);
LAB_103baca18:
  func_0x000107c61170(param_5);
  return;
}



/* Entry: 103baca5c; end: 103baca7b;  */

void FUN_103baca5c(void)

{
  func_0x000107c61168(&PTR_PTR_11293b558);
  return;
}



/* Entry: 103baca7c; end: 103baca87;  */

void FUN_103baca7c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000103baca84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 103baca88; end: 103bacacb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103baca88(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x18);
  pcVar1 = *(code **)(unaff_x20 + 0x20);
  func_0x000107c5677c(*(undefined8 *)(unaff_x20 + 0x10),param_2,4);
  *(undefined1 *)(lVar2 + _DAT_112ff2f78) = 0;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
  }
  return;
}



/* Entry: 103bacacc; end: 103bacb0b;  */

void FUN_103bacacc(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 103bacb0c; end: 103bacb0f;  */

void FUN_103bacb0c(long param_1,long param_2)

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



/* Entry: 103bacb10; end: 103bacb13; -[SCSwipeInteractionPresenter interactionControllerForDismissal:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bacb10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff2f68));
  return;
}



/* Entry: 103bacb14; end: 103bacb1b; -[SCSwipeInteractionPresenter animationControllerForDismissedController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bacb14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff2f68));
  return;
}



/* Entry: 103bacb1c; end: 103bacb27; -[SCSwipeToProfileParams businessProfileId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bacb1c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112ff2fd0);
  func_0x000107c61428(puVar1,auStack_38,0,0);
  uVar3 = *puVar1;
  uVar2 = puVar1[1];
  func_0x000107c61434(uVar2);
  func_0x000107c5fadc(uVar3,uVar2);
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 103bacb28; end: 103bacb33; -[SCSwipeToProfileParams setBusinessProfileId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bacb28(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c5faec();
  puVar1 = (undefined8 *)(param_1 + _DAT_112ff2fd0);
  func_0x000107c61428(puVar1,auStack_48,1,0);
  uVar2 = puVar1[1];
  *puVar1 = param_3;
  puVar1[1] = param_2;
  func_0x000107c6142c(uVar2);
  return;
}



/* Entry: 103bacb34; end: 103bacb77; -[SCSwipeToProfileParams isPublisherProfile] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103bacb34(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ff2fd8;
  func_0x000107c61428(param_1 + _DAT_112ff2fd8,auStack_38,0,0);
  return *(undefined1 *)(param_1 + lVar1);
}



/* Entry: 103bacb78; end: 103bacbc7; -[SCSwipeToProfileParams setIsPublisherProfile:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bacb78(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ff2fd8;
  func_0x000107c61428(param_1 + _DAT_112ff2fd8,auStack_48,1,0);
  *(undefined1 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 103bacbc8; end: 103bacbd3; -[SCSwipeToProfileParams compositeSnapId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bacbc8(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112ff2fe0);
  func_0x000107c61428(puVar1,auStack_38,0,0);
  uVar3 = *puVar1;
  uVar2 = puVar1[1];
  func_0x000107c61434(uVar2);
  func_0x000107c5fadc(uVar3,uVar2);
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 103bacbd4; end: 103bacc37;  */

void FUN_103bacbd4(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + *param_3);
  func_0x000107c61428(puVar1,auStack_38,0,0);
  uVar3 = *puVar1;
  uVar2 = puVar1[1];
  func_0x000107c61434(uVar2);
  func_0x000107c5fadc(uVar3,uVar2);
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 103bacc38; end: 103bacc43; -[SCSwipeToProfileParams setCompositeSnapId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bacc38(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c5faec();
  puVar1 = (undefined8 *)(param_1 + _DAT_112ff2fe0);
  func_0x000107c61428(puVar1,auStack_48,1,0);
  uVar2 = puVar1[1];
  *puVar1 = param_3;
  puVar1[1] = param_2;
  func_0x000107c6142c(uVar2);
  return;
}



/* Entry: 103bacc44; end: 103baccab;  */

void FUN_103bacc44(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c5faec();
  puVar1 = (undefined8 *)(param_1 + *param_4);
  func_0x000107c61428(puVar1,auStack_48,1,0);
  uVar2 = puVar1[1];
  *puVar1 = param_3;
  puVar1[1] = param_2;
  func_0x000107c6142c(uVar2);
  return;
}



/* Entry: 103baccac; end: 103bacd23; -[SCSwipeToProfileParams userId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103baccac(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112ff2fe8);
  func_0x000107c61428(puVar1,auStack_38,0,0);
  lVar2 = puVar1[1];
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
    func_0x000107c61434(lVar2);
    func_0x000107c5fadc(uVar3,lVar2);
    func_0x000107c6142c(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 103bacd24; end: 103bacd9b; -[SCSwipeToProfileParams setUserId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bacd24(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  plVar1 = (long *)(param_1 + _DAT_112ff2fe8);
  func_0x000107c61428(plVar1,auStack_48,1,0);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  func_0x000107c6142c(lVar2);
  return;
}



/* Entry: 103bacd9c; end: 103bace6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bacd9c(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long unaff_x20;
  undefined1 auStack_88 [8];
  undefined1 auStack_78 [24];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff2fe8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112ff2fd0);
  *puVar2 = param_1;
  puVar2[1] = param_2;
  *(undefined1 *)(unaff_x20 + _DAT_112ff2fd8) = param_3;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112ff2fe0);
  *puVar2 = param_4;
  puVar2[1] = param_5;
  func_0x000107c61428(puVar1,auStack_78,1,0);
  *puVar1 = param_6;
  puVar1[1] = param_7;
  func_0x000107c61154(auStack_88,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103bace6c; end: 103bad0e3; -[SCSwipeToProfileParams initWithBusinessProfileId:isPublisherProfile:compositeSnapId:userId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bace6c(long param_1,long param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,long param_6)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  lVar3 = param_1;
  func_0x000107c614f0();
  func_0x000107c5faec();
  lVar4 = param_2;
  func_0x000107c5faec();
  if (param_6 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = lVar4;
    func_0x000107c5faec();
  }
  plVar1 = (long *)(param_1 + _DAT_112ff2fe8);
  *plVar1 = 0;
  plVar1[1] = 0;
  puVar2 = (undefined8 *)(param_1 + _DAT_112ff2fd0);
  *puVar2 = param_3;
  puVar2[1] = param_2;
  *(undefined1 *)(param_1 + _DAT_112ff2fd8) = param_4;
  puVar2 = (undefined8 *)(param_1 + _DAT_112ff2fe0);
  *puVar2 = param_5;
  puVar2[1] = lVar4;
  func_0x000107c61428(plVar1,auStack_78,1,0);
  *plVar1 = param_6;
  plVar1[1] = lVar5;
  lStack_88 = param_1;
  lStack_80 = lVar3;
  func_0x000107c61154(&lStack_88,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103bad0e4; end: 103bad143; -[SCSwipeToProfileParams copyWithZone:] */

undefined1 * FUN_103bad0e4(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  puVar1 = auStack_40;
  func_0x000107c61174();
  func_0x000103bacf6c(auStack_40);
  func_0x000107c61170(param_1);
  func_0x0001006732c8(auStack_40,uStack_28);
  func_0x000107c605b0();
  func_0x000100183ab8(auStack_40);
  return puVar1;
}



/* Entry: 103bad144; end: 103bad1a3; -[SCSwipeToProfileParams init] */

void FUN_103bad144(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSwipeToProfileParamsProviderService.SwipeToProfileParams",0x3a,"init()",6,0
                     );
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103bad170);
  (*pcVar1)();
}



/* Entry: 103bad1a4; end: 103bad1f7; -[SCSwipeToProfileParams .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103bad1c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103bad1c8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bad1a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112ff2fd0 + 8))
  ;
  return;
}



/* Entry: 103bad1f8; end: 103bad217;  */

void FUN_103bad1f8(void)

{
  func_0x000107c61168(&PTR_PTR_11293b670);
  return;
}



/* Entry: 103bad218; end: 103bad227; -[SCSwipeToProfileParamsProviderService swipeToProfileParamsProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bad218(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff3020));
  return;
}



/* Entry: 103bad228; end: 103bad28b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bad228(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ff3018) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ff3020) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103bad28c; end: 103bad2eb; -[SCSwipeToProfileParamsProviderService init] */

void FUN_103bad28c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSwipeToProfileParamsProviderService.SCSwipeToProfileParamsProviderService",
                      0x4b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103bad2b8);
  (*pcVar1)();
}



/* Entry: 103bad2ec; end: 103bad323; -[SCSwipeToProfileParamsProviderService .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103bad308: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103bad30c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bad2ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ff3018));
  return;
}



/* Entry: 103bad324; end: 103bad357; +[SCContextOperaEvents openReplyView] */

void FUN_103bad324(void)

{
  func_0x000107c5fadc(0x7065725f6e65706f,0xef776569765f796c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bad358; end: 103bad363;  */

undefined * FUN_103bad358(void)

{
  return &UNK_1106df7d8;
}



/* Entry: 103bad364; end: 103bad38f; +[SCContextOperaEvents actionMenuDidOpen] */

void FUN_103bad364(void)

{
  func_0x000107c5fadc(0xd000000000000014,0x800000010f1a7780);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bad390; end: 103bad39b;  */

undefined * FUN_103bad390(void)

{
  return &UNK_1106df7e8;
}



/* Entry: 103bad39c; end: 103bad3c7; +[SCContextOperaEvents actionMenuDidClose] */

void FUN_103bad39c(void)

{
  func_0x000107c5fadc(0xd000000000000015,0x800000010f1a77a0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


