/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10445c8f8; end: 10445c90f; +[SCFriendsFeedInteractionEvent pullToRefresh] */

void FUN_10445c8f8(void)

{
  FUN_10445d23c(6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10445c910; end: 10445c927; +[SCFriendsFeedInteractionEvent openOverlayView] */

void FUN_10445c910(void)

{
  FUN_10445d23c(7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10445c928; end: 10445cacb; +[SCFriendsFeedInteractionEvent notificationLaunchWithNotification:] */

void FUN_10445c928(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010445d304();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10445cacc; end: 10445cbab; -[SCFriendsFeedInteractionEvent matchPullDown:shortcutTapped:pullDownDidFinish:pageLoaded:dismiss:backgrounded:pullToRefresh:openOverlayView:notificationLaunch:] */

void FUN_10445cacc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined1 auStack_140 [16];
  undefined8 uStack_130;
  undefined1 auStack_120 [16];
  undefined8 uStack_110;
  undefined1 auStack_100 [16];
  undefined8 uStack_f0;
  undefined1 auStack_e0 [16];
  undefined8 uStack_d0;
  undefined1 auStack_c0 [16];
  undefined8 uStack_b0;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_f0 = param_9;
  uStack_110 = param_10;
  uStack_130 = param_11;
  uStack_d0 = param_8;
  uStack_b0 = param_7;
  uStack_90 = param_6;
  uStack_70 = param_5;
  uStack_50 = param_4;
  uStack_30 = param_3;
  _objc_retain();
  func_0x00010445c960(FUN_10445d5a4,auStack_40,0x10445d5ac,auStack_60,0x10445d5bc,auStack_80,
                      0x10445d5c8,auStack_a0,0x10445d5d0,auStack_c0,0x10445d5d8,auStack_e0,
                      0x10445d5dc,auStack_100,0x10445d5e0,auStack_120,0x10445d5d4,auStack_140);
  _objc_release(param_1);
  return;
}



/* Entry: 10445cbac; end: 10445cc07;  */

void FUN_10445cbac(undefined8 param_1,long param_2,undefined8 param_3,uint param_4,long param_5)

{
  if (param_2 == 0) {
    param_1 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  }
  (**(code **)(param_5 + 0x10))(param_5,param_1,param_3,param_4 & 1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10445cc08; end: 10445cc3b;  */

void FUN_10445cc08(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10445cc3c; end: 10445cc9f; -[SCFriendsFeedInteractionEvent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10445cc3c(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307b598 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307b5b8 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307b5c0 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11307b5c8));
  return;
}



/* Entry: 10445cca0; end: 10445ccaf;  */

ulong FUN_10445cca0(ulong param_1)

{
  if (8 < param_1) {
    param_1 = 9;
  }
  return param_1;
}



/* Entry: 10445ccb0; end: 10445cfab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10445ccb0(long param_1)

{
  byte bVar1;
  code *pcVar2;
  long lVar3;
  
  bVar1 = *(byte *)(param_1 + _DAT_11307b590);
  if (bVar1 < 4) {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        if (*(char *)(param_1 + _DAT_11307b5a0 + 8) == '\x01') {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10445ceb4);
          (*pcVar2)();
        }
        if (*(char *)(param_1 + _DAT_11307b5a8) == '\x02') {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10445cec0);
          (*pcVar2)();
        }
        lVar3 = *(long *)(param_1 + _DAT_11307b598);
        _swift_bridgeObjectRetain(((long *)(param_1 + _DAT_11307b598))[1]);
        _objc_release(param_1);
      }
      else {
        if ((char)((long *)(param_1 + _DAT_11307b5b0))[1] == '\x01') {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10445ceb8);
          (*pcVar2)();
        }
        lVar3 = *(long *)(param_1 + _DAT_11307b5b0);
        _objc_release();
      }
    }
    else if (bVar1 == 2) {
      _objc_release();
      lVar3 = 0;
    }
    else {
      lVar3 = *(long *)(param_1 + _DAT_11307b5b8);
      _swift_bridgeObjectRetain(((long *)(param_1 + _DAT_11307b5b8))[1]);
      _objc_release(param_1);
    }
  }
  else if (bVar1 < 6) {
    if (bVar1 == 4) {
      lVar3 = *(long *)(param_1 + _DAT_11307b5c0);
      _swift_bridgeObjectRetain(((long *)(param_1 + _DAT_11307b5c0))[1]);
      _objc_release(param_1);
    }
    else {
      _objc_release();
      lVar3 = 1;
    }
  }
  else if (bVar1 == 6) {
    _objc_release();
    lVar3 = 2;
  }
  else if (bVar1 == 7) {
    _objc_release();
    lVar3 = 3;
  }
  else {
    lVar3 = *(long *)(param_1 + _DAT_11307b5c8);
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10445cebc);
      (*pcVar2)();
    }
    _objc_retain(lVar3);
    _objc_release(param_1);
  }
  return lVar3;
}



/* Entry: 10445cfac; end: 10445d073;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10445cfac(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lStack_30;
  long lStack_28;
  
  lVar3 = param_1;
  FUN_10445d3dc();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined1 *)(lVar4 + _DAT_11307b590) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11307b598);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11307b5a0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined1 *)(lVar4 + _DAT_11307b5a8) = 2;
  plVar2 = (long *)(lVar4 + _DAT_11307b5b0);
  *plVar2 = param_1;
  *(undefined1 *)(plVar2 + 1) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11307b5b8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11307b5c0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + _DAT_11307b5c8) = 0;
  lStack_30 = lVar4;
  lStack_28 = lVar3;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10445d074; end: 10445d23b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10445d074(long param_1,long param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lStack_40;
  long lStack_38;
  
  lVar4 = param_1;
  FUN_10445d3dc();
  lVar5 = lVar4;
  _objc_allocWithZone();
  *(undefined1 *)(lVar5 + _DAT_11307b590) = 3;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11307b598);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11307b5a0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined1 *)(lVar5 + _DAT_11307b5a8) = 2;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11307b5b0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  plVar2 = (long *)(lVar5 + _DAT_11307b5b8);
  *plVar2 = param_1;
  plVar2[1] = param_2;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11307b5c0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar5 + _DAT_11307b5c8) = 0;
  puVar3 = PTR_s_init_1125d9248;
  lStack_40 = lVar5;
  lStack_38 = lVar4;
  _swift_bridgeObjectRetain(param_2);
  _objc_msgSendSuper2(&lStack_40,puVar3);
  return;
}



/* Entry: 10445d23c; end: 10445d3db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10445d23c(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  FUN_10445d3dc();
  lVar3 = lVar2;
  _objc_allocWithZone();
  *(char *)(lVar3 + _DAT_11307b590) = (char)param_1;
  puVar1 = (undefined8 *)(lVar3 + _DAT_11307b598);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_11307b5a0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined1 *)(lVar3 + _DAT_11307b5a8) = 2;
  puVar1 = (undefined8 *)(lVar3 + _DAT_11307b5b0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar3 + _DAT_11307b5b8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_11307b5c0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar3 + _DAT_11307b5c8) = 0;
  lStack_30 = lVar3;
  lStack_28 = lVar2;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10445d3dc; end: 10445d3fb;  */

void FUN_10445d3dc(void)

{
  _objc_opt_self(&PTR_PTR_1129b8a60);
  return;
}



/* Entry: 10445d3fc; end: 10445d563;  */

int FUN_10445d3fc(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf7 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 8) {
      iVar2 = 4;
    }
    if (param_2 + 8 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10445d478;
        goto LAB_10445d45c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10445d45c:
      return ((uint)*param_1 | uVar1 << 8) - 8;
    }
  }
LAB_10445d478:
  iVar2 = *param_1 - 9;
  if (*param_1 < 9) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10445d564; end: 10445d5a3;  */

void FUN_10445d564(void)

{
  undefined *puVar1;
  
  if (puRam000000011307b5f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd02754;
  _swift_getWitnessTable(&UNK_10dd02754,&UNK_110772340);
  puRam000000011307b5f8 = puVar1;
  return;
}



/* Entry: 10445d5a4; end: 10445d5f7;  */

void FUN_10445d5a4(undefined8 param_1,long param_2,undefined8 param_3,uint param_4)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_2 == 0) {
    param_1 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  }
  (**(code **)(lVar1 + 0x10))(lVar1,param_1,param_3,param_4 & 1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10445d5f8; end: 10445d6a3;  */

void FUN_10445d5f8(void)

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



/* Entry: 10445d6a4; end: 10445d6cb;  */

void FUN_10445d6a4(ulong *param_1,ulong *param_2)

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



/* Entry: 10445d6cc; end: 10445d6eb; -[_TtC16ModularCallScope16ModularCallScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10445d6cc(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_11307b600));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10445d6ec; end: 10445d70b; -[_TtC16ModularCallScope16ModularCallScope talkContext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10445d6ec(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_11307b608));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10445d70c; end: 10445d71b; -[_TtC16ModularCallScope16ModularCallScope callLaunchAction] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10445d70c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11307b610));
  return;
}



/* Entry: 10445d71c; end: 10445d777; -[_TtC16ModularCallScope16ModularCallScope notificationId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10445d71c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11307b618))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11307b618);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10445d778; end: 10445d797; -[_TtC16ModularCallScope16ModularCallScope lensRectListener] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10445d778(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_11307b620));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10445d798; end: 10445d7df; -[_TtC16ModularCallScope16ModularCallScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10445d798(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11307b628;
  _swift_beginAccess(param_1 + _DAT_11307b628,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10445d7e0; end: 10445d837; -[_TtC16ModularCallScope16ModularCallScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10445d7e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11307b628;
  _swift_beginAccess(param_1 + _DAT_11307b628,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10445d838; end: 10445d923; -[_TtC16ModularCallScope16ModularCallScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10445d838(long param_1)

{
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11307b600));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11307b608));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11307b610));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307b618 + 8));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11307b620));
  param_1 = param_1 + _DAT_11307b628;
  _swift_unknownObjectWeakDestroy();
  return param_1;
}



/* Entry: 10445d924; end: 10445d98b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10445d924(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_10445dc10();
  lVar1 = param_2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar1 + _DAT_11307b638) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  _objc_msgSendSuper2(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10445d98c; end: 10445d9d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10445d98c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11307b638) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10445d9d8; end: 10445db3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10445d9d8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *aplStack_a0 [2];
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  lVar4 = param_1;
  FUN_10445db40();
  lVar5 = lVar4;
  _objc_allocWithZone();
  lVar3 = _DAT_11307b628;
  _swift_unknownObjectWeakInit(lVar5 + _DAT_11307b628,0);
  *(long *)(lVar5 + _DAT_11307b600) = param_1;
  *(undefined8 *)(lVar5 + _DAT_11307b608) = param_2;
  *(undefined8 *)(lVar5 + _DAT_11307b610) = param_3;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11307b618);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  *(undefined8 *)(lVar5 + _DAT_11307b620) = param_6;
  _swift_beginAccess(lVar5 + lVar3,auStack_78,1,0);
  _swift_unknownObjectWeakAssign(lVar5 + lVar3,param_7);
  puVar2 = PTR_s_init_1125d9248;
  lStack_88 = lVar5;
  lStack_80 = lVar4;
  _swift_unknownObjectRetain(param_1);
  _swift_unknownObjectRetain(param_2);
  _objc_retain(param_3);
  _swift_bridgeObjectRetain(param_5);
  _swift_unknownObjectRetain(param_6);
  plVar6 = &lStack_88;
  _objc_msgSendSuper2(plVar6,puVar2);
  aplStack_a0[0] = plVar6;
  func_0x00010008a7c8(&uStack_90,aplStack_a0);
  func_0x000100083b20(aplStack_a0);
  _swift_release(uStack_90);
  _swift_unknownObjectRelease(aplStack_a0[0]);
  return plVar6;
}



/* Entry: 10445db40; end: 10445db5f;  */

void FUN_10445db40(void)

{
  _objc_opt_self(&PTR_PTR_1129b8b58);
  return;
}



/* Entry: 10445db60; end: 10445db63;  */

void FUN_10445db60(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10445db64; end: 10445db97;  */

void FUN_10445db64(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10445db98; end: 10445dbab; -[_TtC16ModularCallScope24ModularCallScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10445db98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11307b638));
  return;
}



/* Entry: 10445dbac; end: 10445dbeb;  */

void FUN_10445dbac(void)

{
  undefined *puVar1;
  
  if (puRam000000011307b640 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd02808;
  _swift_getWitnessTable(&UNK_10dd02808,&UNK_110772470);
  puRam000000011307b640 = puVar1;
  return;
}



/* Entry: 10445dbec; end: 10445dc0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10445dbec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *aplStack_a0 [2];
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  lVar4 = param_1;
  FUN_10445db40();
  lVar5 = lVar4;
  _objc_allocWithZone();
  lVar3 = _DAT_11307b628;
  _swift_unknownObjectWeakInit(lVar5 + _DAT_11307b628,0);
  *(long *)(lVar5 + _DAT_11307b600) = param_1;
  *(undefined8 *)(lVar5 + _DAT_11307b608) = param_2;
  *(undefined8 *)(lVar5 + _DAT_11307b610) = param_3;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11307b618);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  *(undefined8 *)(lVar5 + _DAT_11307b620) = param_6;
  _swift_beginAccess(lVar5 + lVar3,auStack_78,1,0);
  _swift_unknownObjectWeakAssign(lVar5 + lVar3,param_7);
  puVar2 = PTR_s_init_1125d9248;
  lStack_88 = lVar5;
  lStack_80 = lVar4;
  _swift_unknownObjectRetain(param_1);
  _swift_unknownObjectRetain(param_2);
  _objc_retain(param_3);
  _swift_bridgeObjectRetain(param_5);
  _swift_unknownObjectRetain(param_6);
  plVar6 = &lStack_88;
  _objc_msgSendSuper2(plVar6,puVar2);
  aplStack_a0[0] = plVar6;
  func_0x00010008a7c8(&uStack_90,aplStack_a0);
  func_0x000100083b20(aplStack_a0);
  _swift_release(uStack_90);
  _swift_unknownObjectRelease(aplStack_a0[0]);
  return plVar6;
}



/* Entry: 10445dc10; end: 10445dc2f;  */

void FUN_10445dc10(void)

{
  _objc_opt_self(&PTR_PTR_1129b8c40);
  return;
}



/* Entry: 10445dc30; end: 10445dc33;  */

void FUN_10445dc30(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10445dc34; end: 10445dcdb; -[_TtC17InAppPipCallScope17InAppPipCallScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10445dc34(long param_1)

{
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11307b698));
  param_1 = param_1 + _DAT_11307b6a8;
  _swift_unknownObjectWeakDestroy();
  return param_1;
}



/* Entry: 10445dcdc; end: 10445dd43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10445dcdc(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_10445df30();
  lVar1 = param_2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar1 + _DAT_11307b6b8) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  _objc_msgSendSuper2(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10445dd44; end: 10445dd8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10445dd44(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11307b6b8) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10445dd90; end: 10445deb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10445dd90(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                    undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *aplStack_a0 [2];
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  
  lVar4 = param_1;
  FUN_10445deb4();
  lVar5 = lVar4;
  _objc_allocWithZone();
  lVar1 = lVar5 + _DAT_11307b6a8;
  *(undefined8 *)(lVar1 + 8) = 0;
  _swift_unknownObjectWeakInit(lVar1,0);
  *(long *)(lVar5 + _DAT_11307b698) = param_1;
  puVar2 = (undefined8 *)(lVar5 + _DAT_11307b6a0);
  *puVar2 = param_2;
  puVar2[1] = param_3;
  *(undefined1 *)(puVar2 + 2) = param_4;
  _swift_beginAccess();
  *(undefined8 *)(lVar1 + 8) = param_6;
  _swift_unknownObjectWeakAssign(lVar1,param_5);
  puVar3 = PTR_s_init_1125d9248;
  lStack_88 = lVar5;
  lStack_80 = lVar4;
  _swift_unknownObjectRetain(param_1);
  plVar6 = &lStack_88;
  _objc_msgSendSuper2(plVar6,puVar3);
  aplStack_a0[0] = plVar6;
  func_0x00010008a7c8(&uStack_90,aplStack_a0);
  func_0x000100083b20(aplStack_a0);
  _swift_release(uStack_90);
  _swift_unknownObjectRelease(aplStack_a0[0]);
  return plVar6;
}



/* Entry: 10445deb4; end: 10445ded3;  */

void FUN_10445deb4(void)

{
  _objc_opt_self(&PTR_PTR_1129b8d00);
  return;
}



/* Entry: 10445ded4; end: 10445ded7;  */

void FUN_10445ded4(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10445ded8; end: 10445df0b;  */

void FUN_10445ded8(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10445df0c; end: 10445df2f; -[_TtC17InAppPipCallScope25InAppPipCallScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10445df0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11307b6b8));
  return;
}



/* Entry: 10445df30; end: 10445df4f;  */

void FUN_10445df30(void)

{
  _objc_opt_self(&PTR_PTR_1129b8dd0);
  return;
}



/* Entry: 10445df50; end: 10445df53;  */

void FUN_10445df50(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10445df54; end: 10445dfd7; -[_TtC20OutOfAppPipCallScope20OutOfAppPipCallScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10445df54(long param_1)

{
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11307b710));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_11307b718));
  return;
}



/* Entry: 10445dfd8; end: 10445e03f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10445dfd8(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_10445e1c4();
  lVar1 = param_2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar1 + _DAT_11307b728) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  _objc_msgSendSuper2(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10445e040; end: 10445e08b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10445e040(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11307b728) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10445e08c; end: 10445e147;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10445e08c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *aplStack_58 [2];
  undefined8 uStack_48;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  FUN_10445e148();
  lVar3 = lVar2;
  _objc_allocWithZone();
  *(long *)(lVar3 + _DAT_11307b710) = param_1;
  *(undefined8 *)(lVar3 + _DAT_11307b718) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  _swift_unknownObjectRetain(param_1);
  _swift_unknownObjectRetain(param_2);
  plVar4 = &lStack_40;
  _objc_msgSendSuper2(plVar4,puVar1);
  aplStack_58[0] = plVar4;
  func_0x00010008a7c8(&uStack_48,aplStack_58);
  func_0x000100083b20(aplStack_58);
  _swift_release(uStack_48);
  _swift_unknownObjectRelease(aplStack_58[0]);
  return plVar4;
}



/* Entry: 10445e148; end: 10445e167;  */

void FUN_10445e148(void)

{
  _objc_opt_self(&PTR_PTR_1129b8e90);
  return;
}



/* Entry: 10445e168; end: 10445e16b;  */

void FUN_10445e168(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10445e16c; end: 10445e19f;  */

void FUN_10445e16c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10445e1a0; end: 10445e1c3; -[_TtC20OutOfAppPipCallScope28OutOfAppPipCallScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10445e1a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11307b728));
  return;
}



/* Entry: 10445e1c4; end: 10445e1e3;  */

void FUN_10445e1c4(void)

{
  _objc_opt_self(&PTR_PTR_1129b8f58);
  return;
}



/* Entry: 10445e1e4; end: 10445e1e7;  */

void FUN_10445e1e4(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10445e1e8; end: 10445e1f7; -[_TtC11CallUIScope17CallUICameraScope lensSafeRenderRectObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10445e1e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11307b780));
  return;
}



/* Entry: 10445e1f8; end: 10445e207; -[_TtC11CallUIScope17CallUICameraScope lensCaptureButtonRectObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10445e1f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11307b788));
  return;
}



/* Entry: 10445e208; end: 10445e233; -[_TtC11CallUIScope17CallUICameraScope init] */

void FUN_10445e208(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("CallUIScope.CallUICameraScope",0x1d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10445e234);
  (*pcVar1)();
}



/* Entry: 10445e234; end: 10445e237;  */

void FUN_10445e234(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10445e238; end: 10445e2cb; -[_TtC11CallUIScope17CallUICameraScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10445e238(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11307b780));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11307b788));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11307b790));
  return;
}



/* Entry: 10445e2cc; end: 10445e337;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10445e2cc(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_10445e508();
  lVar1 = param_2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar1 + _DAT_11307b7a0) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  _objc_msgSendSuper2(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10445e338; end: 10445e33f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10445e338(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_10445e508();
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11307b7a0) = uStack_38;
  puVar1 = auStack_48;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 10445e340; end: 10445e38b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10445e340(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11307b7a0) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10445e38c; end: 10445e467;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10445e38c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *aplStack_68 [2];
  undefined8 uStack_58;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  FUN_10445e468();
  lVar3 = lVar2;
  _objc_allocWithZone();
  *(long *)(lVar3 + _DAT_11307b780) = param_1;
  *(undefined8 *)(lVar3 + _DAT_11307b788) = param_2;
  *(undefined8 *)(lVar3 + _DAT_11307b790) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = lVar3;
  lStack_48 = lVar2;
  _objc_retain(param_1);
  _objc_retain(param_2);
  _objc_retain(param_3);
  plVar4 = &lStack_50;
  _objc_msgSendSuper2(plVar4,puVar1);
  aplStack_68[0] = plVar4;
  func_0x00010008a7c8(&uStack_58,aplStack_68);
  func_0x000100083b20(aplStack_68);
  _swift_release(uStack_58);
  _swift_unknownObjectRelease(aplStack_68[0]);
  return plVar4;
}



/* Entry: 10445e468; end: 10445e487;  */

void FUN_10445e468(void)

{
  _objc_opt_self(&PTR_PTR_1129b9018);
  return;
}



/* Entry: 10445e488; end: 10445e4e7; -[_TtC11CallUIScope25CallUICameraScopeServices init] */

void FUN_10445e488(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("CallUIScope.CallUICameraScopeServices",0x25,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10445e4b4);
  (*pcVar1)();
}



/* Entry: 10445e4e8; end: 10445e507; -[_TtC11CallUIScope25CallUICameraScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10445e4e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11307b7a0));
  return;
}



/* Entry: 10445e508; end: 10445e527;  */

void FUN_10445e508(void)

{
  _objc_opt_self(&PTR_PTR_1129b90e8);
  return;
}



/* Entry: 10445e528; end: 10445e52b;  */

void FUN_10445e528(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10445e52c; end: 10445e85b;  */

long FUN_10445e52c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10445e85c; end: 10445e87b; -[_TtC11CallUIScope11CallUIScope talkContext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10445e85c(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_11307b7f8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10445e87c; end: 10445e97f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10445e87c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_78 [8];
  
  _objc_allocWithZone();
  lVar1 = unaff_x20 + _DAT_11307b808;
  *(undefined8 *)(lVar1 + 8) = 0;
  _swift_unknownObjectWeakInit(lVar1,0);
  *(undefined8 *)(unaff_x20 + _DAT_11307b7f8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11307b800) = param_2;
  _swift_beginAccess();
  *(undefined8 *)(lVar1 + 8) = param_4;
  _swift_unknownObjectWeakAssign(lVar1,param_3);
  *(undefined8 *)(unaff_x20 + _DAT_11307b810) = param_5;
  puVar2 = PTR_s_init_1125d9248;
  _swift_unknownObjectRetain(param_1);
  _swift_retain(param_2);
  puVar3 = auStack_78;
  _objc_msgSendSuper2(puVar3,puVar2);
  _swift_unknownObjectRelease(param_1);
  _swift_release(param_2);
  _swift_unknownObjectRelease(param_3);
  return puVar3;
}



/* Entry: 10445e980; end: 10445e9ab; -[_TtC11CallUIScope11CallUIScope init] */

void FUN_10445e980(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("CallUIScope.CallUIScope",0x17,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10445e9ac);
  (*pcVar1)();
}



/* Entry: 10445e9ac; end: 10445ea73; -[_TtC11CallUIScope11CallUIScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10445e9ac(long param_1)

{
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11307b7f8));
  _swift_release(*(undefined8 *)(param_1 + _DAT_11307b800));
  func_0x00010445ea04(param_1 + _DAT_11307b808);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_11307b810));
  return;
}



/* Entry: 10445ea74; end: 10445eba7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10445ea74(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *aplStack_a0 [2];
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  
  lVar3 = param_1;
  func_0x00010036caf8();
  lVar4 = lVar3;
  _objc_allocWithZone();
  lVar1 = lVar4 + _DAT_11307b808;
  *(undefined8 *)(lVar1 + 8) = 0;
  _swift_unknownObjectWeakInit(lVar1,0);
  *(long *)(lVar4 + _DAT_11307b7f8) = param_1;
  *(undefined8 *)(lVar4 + _DAT_11307b800) = param_2;
  _swift_beginAccess();
  *(undefined8 *)(lVar1 + 8) = param_4;
  _swift_unknownObjectWeakAssign(lVar1,param_3);
  *(undefined8 *)(lVar4 + _DAT_11307b810) = param_5;
  puVar2 = PTR_s_init_1125d9248;
  lStack_88 = lVar4;
  lStack_80 = lVar3;
  _swift_unknownObjectRetain(param_1);
  _swift_retain(param_2);
  _swift_unknownObjectRetain(param_5);
  plVar5 = &lStack_88;
  _objc_msgSendSuper2(plVar5,puVar2);
  aplStack_a0[0] = plVar5;
  func_0x00010008a7c8(&uStack_90,aplStack_a0);
  func_0x000100083b20(aplStack_a0);
  _swift_release(uStack_90);
  _swift_unknownObjectRelease(aplStack_a0[0]);
  return plVar5;
}



/* Entry: 10445eba8; end: 10445ebd3; -[_TtC11CallUIScope19CallUIScopeServices init] */

void FUN_10445eba8(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("CallUIScope.CallUIScopeServices",0x1f,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10445ebd4);
  (*pcVar1)();
}



/* Entry: 10445ebd4; end: 10445ebd7;  */

void FUN_10445ebd4(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10445ebd8; end: 10445ec0b;  */

void FUN_10445ebd8(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10445ec0c; end: 10445ec43; -[_TtC11CallUIScope19CallUIScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10445ec0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11307b820));
  return;
}



/* Entry: 10445ec44; end: 10445ecef;  */

void FUN_10445ec44(void)

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



/* Entry: 10445ecf0; end: 10445ecf3;  */

void FUN_10445ecf0(void)

{
  undefined *puVar1;
  
  if (puRam000000011307b878 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd02c64;
  _swift_getWitnessTable(&UNK_10dd02c64,&UNK_1107728d0);
  puRam000000011307b878 = puVar1;
  return;
}



/* Entry: 10445ecf4; end: 10445ed33;  */

void FUN_10445ecf4(void)

{
  undefined *puVar1;
  
  if (puRam000000011307b878 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd02c64;
  _swift_getWitnessTable(&UNK_10dd02c64,&UNK_1107728d0);
  puRam000000011307b878 = puVar1;
  return;
}



/* Entry: 10445ed34; end: 10445eeaf;  */

int FUN_10445ed34(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10445edb0;
        goto LAB_10445ed94;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10445ed94:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_10445edb0:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10445eeb0; end: 10445eeef;  */

void FUN_10445eeb0(void)

{
  undefined *puVar1;
  
  if (puRam000000011307b880 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd02d10;
  _swift_getWitnessTable(&UNK_10dd02d10,&UNK_1107729c8);
  puRam000000011307b880 = puVar1;
  return;
}



/* Entry: 10445eef0; end: 10445ef9b;  */

void FUN_10445eef0(void)

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



/* Entry: 10445ef9c; end: 10445efd3;  */

void FUN_10445ef9c(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 3) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 2 < uVar2;
  return;
}



/* Entry: 10445efd4; end: 10445eff3; -[_TtC14CallUIServices14CallUIServices cameraUIProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10445efd4(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_11307b888));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10445eff4; end: 10445f013; -[_TtC14CallUIServices14CallUIServices lensUIProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10445eff4(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_11307b890));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10445f014; end: 10445f033; -[_TtC14CallUIServices14CallUIServices cameraControllerObjc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10445f014(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_11307b8a0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10445f034; end: 10445f053; -[_TtC14CallUIServices14CallUIServices sharedLensController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10445f034(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_11307b8a8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10445f054; end: 10445f073; -[_TtC14CallUIServices14CallUIServices sharedLensUIController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10445f054(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_11307b8b0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10445f074; end: 10445f083; -[_TtC14CallUIServices14CallUIServices outOfAppPipCallLifecycleObservableObjc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10445f074(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11307b8c0));
  return;
}



/* Entry: 10445f084; end: 10445f093; -[_TtC14CallUIServices14CallUIServices sharedLensTouchAlwaysEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10445f084(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11307b8c8);
}



/* Entry: 10445f094; end: 10445f0a3; -[_TtC14CallUIServices14CallUIServices connectedLensLetterboxingEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10445f094(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11307b8d0);
}



/* Entry: 10445f0a4; end: 10445f0c3; -[_TtC14CallUIServices14CallUIServices callingLinkSharer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10445f0a4(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_11307b8e0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10445f0c4; end: 10445f363;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10445f0c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11307b888) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11307b890) = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307b898);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_11307b8a0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_11307b8a8) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_11307b8b0) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_11307b8e8) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_11307b8b8) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_11307b8c0) = param_8;
  *(undefined1 *)(unaff_x20 + _DAT_11307b8c8) = (undefined1)param_9;
  *(undefined1 *)(unaff_x20 + _DAT_11307b8d0) = param_9._1_1_;
  *(undefined8 *)(unaff_x20 + _DAT_11307b8d8) = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_11307b8e0) = param_12;
  puVar2 = PTR_s_init_1125d9248;
  _swift_unknownObjectRetain(param_3);
  _swift_retain(param_7);
  _objc_msgSendSuper2(auStack_70,puVar2);
  return;
}



/* Entry: 10445f364; end: 10445f39b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10445f364(undefined1 param_1)

{
  undefined1 uStack_21;
  
  uStack_21 = param_1;
  func_0x000100087c34(&uStack_21);
  return;
}



/* Entry: 10445f39c; end: 10445f3fb; -[_TtC14CallUIServices14CallUIServices init] */

void FUN_10445f39c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("CallUIServices.CallUIServices",0x1d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10445f3c8);
  (*pcVar1)();
}


