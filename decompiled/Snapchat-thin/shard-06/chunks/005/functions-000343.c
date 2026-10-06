/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1049ab5f0; end: 1049ab5f7;  */

undefined8 FUN_1049ab5f0(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(0x113815880,auStack_48,0,0);
  uVar1 = uRam0000000113815888;
  lVar2 = lRam0000000113815880;
  lVar3 = lRam0000000113815880;
  uVar4 = uRam0000000113815888;
  if (lRam0000000113815880 == 0) {
    if (lRam000000011309fec0 != -1) {
      _swift_once(0x11309fec0,FUN_1049ab7c4);
    }
    _swift_beginAccess(0x113815890,auStack_60,0,0);
    uVar4 = uRam0000000113815898;
    lVar3 = lRam0000000113815890;
    if (lRam0000000113815890 != 0) {
      _swift_unknownObjectRetain(lRam0000000113815890);
      _swift_unknownObjectRetain(uVar4);
      goto LAB_1049abc00;
    }
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
LAB_1049abc00:
    FUN_1049abf54(lVar2,uVar1);
    _swift_unknownObjectRelease(uVar4);
    _swift_unknownObjectRetain(lVar3);
    uVar1 = 0xd000000000000023;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000023,0x800000010f2267e0);
    lVar2 = lVar3;
    _objc_msgSend(lVar3,PTR_s_fb_objectForInfoDictionaryKey__1125c5f58,uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _swift_unknownObjectRelease(lVar3);
    if (lVar2 == 0) {
      _swift_unknownObjectRelease(lVar3);
      uStack_98 = 0;
      uStack_a0 = 0;
      lStack_88 = 0;
      uStack_90 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar2);
      _swift_unknownObjectRelease(lVar2);
      _swift_unknownObjectRelease(lVar3);
    }
    uStack_78 = uStack_98;
    uStack_80 = uStack_a0;
    lStack_68 = lStack_88;
    uStack_70 = uStack_90;
    if (lStack_88 != 0) {
      uVar1 = 1;
      goto LAB_1049abcbc;
    }
  }
  uVar1 = 0;
LAB_1049abcbc:
  func_0x0001049ac188(&uStack_80,0x11309c428);
  return uVar1;
}



/* Entry: 1049ab5f8; end: 1049ab5fb;  */

void FUN_1049ab5f8(void)

{
  return;
}



/* Entry: 1049ab5fc; end: 1049ab5ff;  */

void FUN_1049ab5fc(long param_1)

{
  byte bVar1;
  long lVar2;
  long lVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  undefined8 uVar3;
  
  _swift_beginAccess(0x113815880,auStack_58,0,0);
  lVar4 = lRam0000000113815888;
  lVar2 = lRam0000000113815880;
  lVar7 = lRam0000000113815888;
  lVar8 = lRam0000000113815880;
  if (lRam0000000113815880 == 0) {
    if (lRam000000011309fec0 != -1) {
      _swift_once(0x11309fec0,FUN_1049ab7c4);
    }
    _swift_beginAccess(0x113815890,auStack_70,0,0);
    lVar7 = lRam0000000113815898;
    lVar8 = lRam0000000113815890;
    if (lRam0000000113815890 != 0) {
      _swift_unknownObjectRetain(lRam0000000113815890);
      _swift_unknownObjectRetain(lVar7);
      goto LAB_1049abda4;
    }
    lVar7 = 0;
    if (param_1 == 0) goto LAB_1049abee0;
LAB_1049abdb4:
    if (param_1 != 1) {
      if (param_1 == 2) {
        if (lVar7 == 0) {
          return;
        }
        lVar2 = 0x1130a2c40;
        func_0x0001048db364();
        _swift_initStackObject();
        *(undefined8 *)(lVar2 + 0x18) = 2;
        *(undefined8 *)(lVar2 + 0x10) = 1;
        lVar4 = lRam000000011309fec8;
        _swift_unknownObjectRetain(lVar7);
        if (lVar4 != -1) {
          _swift_once(0x11309fec8,FUN_1049abb2c);
        }
        uVar3 = uRam00000001130a2da0;
        *(undefined8 *)(lVar2 + 0x20) = uRam00000001130a2da0;
        _objc_retain();
        bVar1 = (byte)uVar3;
        FUN_1049abb60();
        *(undefined **)(lVar2 + 0x40) = PTR___sSbN_11034dd40;
        *(byte *)(lVar2 + 0x28) = bVar1 & 1;
        lVar4 = lVar2;
        FUN_10499c188(lVar2);
        _swift_setDeallocating(lVar2);
        func_0x0001049ac188(lVar2 + 0x20,0x1130a2938);
        uVar5 = 0;
        FUN_1048db924(0);
        uVar3 = uVar5;
        func_0x0001049ac144();
        lVar2 = lVar4;
        __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
                  (lVar4,uVar5,PTR___sypN_11034f1a8 + 8,uVar3);
        _swift_bridgeObjectRelease(lVar4);
        _objc_msgSend(lVar7,PTR_s_logInternalEvent_parameters_isIm_112607d68,
                      &PTR____CFConstantStringClassReference_110da0db8,lVar2,1);
        _objc_release(lVar2);
        _swift_unknownObjectRelease_n(lVar7,2);
        return;
      }
      goto LAB_1049abf04;
    }
    if (lVar7 == 0) {
      return;
    }
    ppuVar6 = &PTR_PTR_1107b9190;
  }
  else {
LAB_1049abda4:
    FUN_1049abf54(lVar2,lVar4);
    _swift_unknownObjectRelease(lVar8);
    if (param_1 != 0) goto LAB_1049abdb4;
LAB_1049abee0:
    if (lVar7 == 0) {
      return;
    }
    ppuVar6 = &PTR_PTR_1107b9198;
  }
  _objc_msgSend(lVar7,PTR_s_logInternalEvent_isImplicitlyLog_112607d60,*ppuVar6,1);
LAB_1049abf04:
  _swift_unknownObjectRelease(lVar7);
  return;
}



/* Entry: 1049ab600; end: 1049ab683;  */

void FUN_1049ab600(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRetain_11034f540)();
  return;
}



/* Entry: 1049ab684; end: 1049ab6cb;  */

undefined8 FUN_1049ab684(undefined8 param_1,undefined8 param_2)

{
  _swift_getObjectType();
  _swift_getObjectType(param_2);
  return param_1;
}



/* Entry: 1049ab6cc; end: 1049ab7c3;  */

undefined8 FUN_1049ab6cc(void)

{
  return 0x113815880;
}



/* Entry: 1049ab7c4; end: 1049ab82b;  */

void FUN_1049ab7c4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  _swift_getInitializedObjCClass();
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126add60;
  _swift_getInitializedObjCClass();
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  puRam0000000113815890 = puVar1;
  puRam0000000113815898 = puVar2;
  return;
}



/* Entry: 1049ab82c; end: 1049ab9d7;  */

undefined8 FUN_1049ab82c(void)

{
  if (lRam000000011309fec0 != -1) {
    _swift_once(0x11309fec0,FUN_1049ab7c4);
  }
  return 0x113815890;
}



/* Entry: 1049ab9d8; end: 1049aba23;  */

void FUN_1049ab9d8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(0x113815880,auStack_38,0,0);
  uVar1 = uRam0000000113815888;
  *param_1 = uRam0000000113815880;
  param_1[1] = uVar1;
  FUN_1049abf54();
  return;
}



/* Entry: 1049aba24; end: 1049aba77;  */

void FUN_1049aba24(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [24];
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  _swift_beginAccess(0x113815880,auStack_48,1,0);
  uVar4 = uRam0000000113815888;
  uVar3 = uRam0000000113815880;
  uRam0000000113815880 = uVar1;
  uRam0000000113815888 = uVar2;
  func_0x0001049abf80(uVar3,uVar4);
  return;
}



/* Entry: 1049aba78; end: 1049abb2b;  */

undefined1  [16] FUN_1049aba78(undefined8 param_1)

{
  undefined1 auVar1 [16];
  
  _swift_beginAccess(0x113815880,param_1,0x21,0);
  auVar1._8_8_ = 0x113815880;
  auVar1._0_8_ = 0x1049ac1c8;
  return auVar1;
}



/* Entry: 1049abb2c; end: 1049abb5b;  */

void FUN_1049abb2c(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x6e6f6973726576;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6e6f6973726576,0xe700000000000000);
  uRam00000001130a2da0 = uVar1;
  return;
}



/* Entry: 1049abb5c; end: 1049abb5f;  */

void FUN_1049abb5c(void)

{
  return;
}



/* Entry: 1049abb60; end: 1049abcfb;  */

undefined8 FUN_1049abb60(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(0x113815880,auStack_48,0,0);
  uVar1 = uRam0000000113815888;
  lVar2 = lRam0000000113815880;
  lVar3 = lRam0000000113815880;
  uVar4 = uRam0000000113815888;
  if (lRam0000000113815880 == 0) {
    if (lRam000000011309fec0 != -1) {
      _swift_once(0x11309fec0,FUN_1049ab7c4);
    }
    _swift_beginAccess(0x113815890,auStack_60,0,0);
    uVar4 = uRam0000000113815898;
    lVar3 = lRam0000000113815890;
    if (lRam0000000113815890 != 0) {
      _swift_unknownObjectRetain(lRam0000000113815890);
      _swift_unknownObjectRetain(uVar4);
      goto LAB_1049abc00;
    }
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
LAB_1049abc00:
    FUN_1049abf54(lVar2,uVar1);
    _swift_unknownObjectRelease(uVar4);
    _swift_unknownObjectRetain(lVar3);
    uVar1 = 0xd000000000000023;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000023,0x800000010f2267e0);
    lVar2 = lVar3;
    _objc_msgSend(lVar3,PTR_s_fb_objectForInfoDictionaryKey__1125c5f58,uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _swift_unknownObjectRelease(lVar3);
    if (lVar2 == 0) {
      _swift_unknownObjectRelease(lVar3);
      uStack_98 = 0;
      uStack_a0 = 0;
      lStack_88 = 0;
      uStack_90 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar2);
      _swift_unknownObjectRelease(lVar2);
      _swift_unknownObjectRelease(lVar3);
    }
    uStack_78 = uStack_98;
    uStack_80 = uStack_a0;
    lStack_68 = lStack_88;
    uStack_70 = uStack_90;
    if (lStack_88 != 0) {
      uVar1 = 1;
      goto LAB_1049abcbc;
    }
  }
  uVar1 = 0;
LAB_1049abcbc:
  func_0x0001049ac188(&uStack_80,0x11309c428);
  return uVar1;
}



/* Entry: 1049abcfc; end: 1049abf53;  */

void FUN_1049abcfc(long param_1)

{
  byte bVar1;
  long lVar2;
  long lVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  undefined8 uVar3;
  
  _swift_beginAccess(0x113815880,auStack_58,0,0);
  lVar4 = lRam0000000113815888;
  lVar2 = lRam0000000113815880;
  lVar7 = lRam0000000113815888;
  lVar8 = lRam0000000113815880;
  if (lRam0000000113815880 == 0) {
    if (lRam000000011309fec0 != -1) {
      _swift_once(0x11309fec0,FUN_1049ab7c4);
    }
    _swift_beginAccess(0x113815890,auStack_70,0,0);
    lVar7 = lRam0000000113815898;
    lVar8 = lRam0000000113815890;
    if (lRam0000000113815890 != 0) {
      _swift_unknownObjectRetain(lRam0000000113815890);
      _swift_unknownObjectRetain(lVar7);
      goto LAB_1049abda4;
    }
    lVar7 = 0;
    if (param_1 == 0) goto LAB_1049abee0;
LAB_1049abdb4:
    if (param_1 != 1) {
      if (param_1 == 2) {
        if (lVar7 == 0) {
          return;
        }
        lVar2 = 0x1130a2c40;
        func_0x0001048db364();
        _swift_initStackObject();
        *(undefined8 *)(lVar2 + 0x18) = 2;
        *(undefined8 *)(lVar2 + 0x10) = 1;
        lVar4 = lRam000000011309fec8;
        _swift_unknownObjectRetain(lVar7);
        if (lVar4 != -1) {
          _swift_once(0x11309fec8,FUN_1049abb2c);
        }
        uVar3 = uRam00000001130a2da0;
        *(undefined8 *)(lVar2 + 0x20) = uRam00000001130a2da0;
        _objc_retain();
        bVar1 = (byte)uVar3;
        FUN_1049abb60();
        *(undefined **)(lVar2 + 0x40) = PTR___sSbN_11034dd40;
        *(byte *)(lVar2 + 0x28) = bVar1 & 1;
        lVar4 = lVar2;
        FUN_10499c188(lVar2);
        _swift_setDeallocating(lVar2);
        func_0x0001049ac188(lVar2 + 0x20,0x1130a2938);
        uVar5 = 0;
        FUN_1048db924(0);
        uVar3 = uVar5;
        func_0x0001049ac144();
        lVar2 = lVar4;
        __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
                  (lVar4,uVar5,PTR___sypN_11034f1a8 + 8,uVar3);
        _swift_bridgeObjectRelease(lVar4);
        _objc_msgSend(lVar7,PTR_s_logInternalEvent_parameters_isIm_112607d68,
                      &PTR____CFConstantStringClassReference_110da0db8,lVar2,1);
        _objc_release(lVar2);
        _swift_unknownObjectRelease_n(lVar7,2);
        return;
      }
      goto LAB_1049abf04;
    }
    if (lVar7 == 0) {
      return;
    }
    ppuVar6 = &PTR_PTR_1107b9190;
  }
  else {
LAB_1049abda4:
    FUN_1049abf54(lVar2,lVar4);
    _swift_unknownObjectRelease(lVar8);
    if (param_1 != 0) goto LAB_1049abdb4;
LAB_1049abee0:
    if (lVar7 == 0) {
      return;
    }
    ppuVar6 = &PTR_PTR_1107b9198;
  }
  _objc_msgSend(lVar7,PTR_s_logInternalEvent_isImplicitlyLog_112607d60,*ppuVar6,1);
LAB_1049abf04:
  _swift_unknownObjectRelease(lVar7);
  return;
}



/* Entry: 1049abf54; end: 1049ac1d3;  */

void FUN_1049abf54(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    _swift_unknownObjectRetain();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRetain_11034f540)(param_2);
    return;
  }
  return;
}



/* Entry: 1049ac1d4; end: 1049ac1db;  */

void FUN_1049ac1d4(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001049ac1d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 8))();
  return;
}



/* Entry: 1049ac1dc; end: 1049ac233;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049ac1dc(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130a2de0;
  _swift_beginAccess(unaff_x20 + _DAT_1130a2de0,auStack_38,0,0);
  _swift_unknownObjectRetain(*(undefined8 *)(unaff_x20 + lVar1));
  return;
}



/* Entry: 1049ac234; end: 1049ac25b;  */

undefined1  [16] FUN_1049ac234(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = param_1;
  _swift_getObjectType();
  auVar2._8_8_ = uVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 1049ac25c; end: 1049ac347;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049ac25c(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130a2de8;
  _swift_beginAccess(unaff_x20 + _DAT_1130a2de8,auStack_38,0,0);
  _swift_unknownObjectRetain(*(undefined8 *)(unaff_x20 + lVar1));
  return;
}



/* Entry: 1049ac348; end: 1049ac57b;  */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049ac348(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x20;
  long alStack_98 [5];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  lVar7 = _DAT_1130a2de0;
  _swift_beginAccess(unaff_x20 + _DAT_1130a2de0,auStack_58,0,0);
  lVar3 = _DAT_1130a2de8;
  lVar2 = *(long *)(unaff_x20 + lVar7);
  lVar7 = lVar2;
  if (lVar2 == 0) {
    _swift_beginAccess(unaff_x20 + _DAT_1130a2de8,auStack_70,0,0);
    lVar7 = *(long *)(unaff_x20 + lVar3);
    if (lVar7 == 0) {
      return;
    }
    _swift_unknownObjectRetain(lVar7);
    lVar2 = 0;
  }
  _swift_unknownObjectRetain(lVar2);
  lVar3 = lVar7;
  _objc_msgSend(lVar7,PTR_s_cachedServerConfiguration_1125a76d0);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar3;
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  puVar1 = PTR___sypN_11034f1a8;
  if (lVar2 == 0) {
    _swift_unknownObjectRelease(lVar7);
    alStack_98[2] = 0;
    alStack_98[1] = 0;
    alStack_98[4] = 0;
    alStack_98[3] = 0;
  }
  else {
    lVar3 = lVar2;
    __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
              (lVar2,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
    _objc_release(lVar2);
    if (*(long *)(lVar3 + 0x10) == 0) {
      alStack_98[2] = 0;
      alStack_98[1] = 0;
      alStack_98[4] = 0;
      alStack_98[3] = 0;
    }
    else {
      _swift_bridgeObjectRetain(lVar3);
      uVar6 = 0;
      lVar2 = -0x2ffffffffffffff0;
      func_0x000100029284(0xd000000000000010);
      if ((uVar6 & 1) == 0) {
        _swift_bridgeObjectRelease(lVar3);
        alStack_98[2] = 0;
        alStack_98[1] = 0;
        alStack_98[4] = 0;
        alStack_98[3] = 0;
      }
      else {
        func_0x0001000bb420(*(long *)(lVar3 + 0x38) + lVar2 * 0x20,alStack_98 + 1);
        _swift_bridgeObjectRelease(lVar3);
      }
    }
    _swift_bridgeObjectRelease(lVar3);
    if (alStack_98[4] != 0) {
      uVar5 = 0x11309c618;
      func_0x0001048db364(0x11309c618);
      plVar4 = alStack_98;
      _swift_dynamicCast(plVar4,alStack_98 + 1,puVar1 + 8,uVar5,6);
      if (((ulong)plVar4 & 1) != 0) {
        if (*(long *)(alStack_98[0] + 0x10) != 0) {
          lVar3 = alStack_98[0];
          func_0x000100403a6c();
          _swift_unknownObjectRelease(lVar7);
          _swift_bridgeObjectRelease(alStack_98[0]);
          uVar5 = *(undefined8 *)(unaff_x20 + _DAT_1130a2df0);
          *(long *)(unaff_x20 + _DAT_1130a2df0) = lVar3;
          _swift_bridgeObjectRelease(uVar5);
          *(undefined1 *)(unaff_x20 + _DAT_1130a2df8) = 1;
          return;
        }
        _swift_bridgeObjectRelease(alStack_98[0]);
      }
      _swift_unknownObjectRelease(lVar7);
      return;
    }
    _swift_unknownObjectRelease(lVar7);
  }
  func_0x00010006e7f4(alStack_98 + 1);
  return;
}



/* Entry: 1049ac57c; end: 1049ac5a3; -[FBSDKBlocklistEventsManager enable] */

void FUN_1049ac57c(undefined8 param_1)

{
  _objc_retain();
  FUN_1049ac348();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1049ac5a4; end: 1049ac66f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049ac5a4(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined *puStack_38;
  
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (*(char *)(unaff_x20 + _DAT_1130a2df8) == '\x01') {
    puStack_38 = PTR___swiftEmptyArrayStorage_11034f1c8;
    _objc_retain();
    _swift_retain(puVar1);
    FUN_1049accb0(param_1,unaff_x20,&puStack_38);
    _objc_release(unaff_x20);
    _objc_msgSend(param_1,PTR_s_removeAllObjects_112628590);
    puVar1 = puStack_38;
    puVar2 = puStack_38;
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(puStack_38,PTR___sypN_11034f1a8 + 8);
    _objc_msgSend(param_1,PTR_s_addObjectsFromArray__11259c200,puVar2);
    _swift_bridgeObjectRelease(puVar1);
    _objc_release(puVar2);
  }
  return;
}



/* Entry: 1049ac670; end: 1049ac913;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049ac670(undefined8 param_1,long param_2,ulong *param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined **ppuVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  uVar2 = 0;
  uVar7 = 0;
  uVar9 = 0;
  func_0x0001000bb420(param_1,&uStack_70);
  uVar10 = 0x11309c420;
  func_0x0001048db364(0x11309c420);
  puVar1 = PTR___sypN_11034f1a8;
  _swift_dynamicCast(&puStack_80,&uStack_70,PTR___sypN_11034f1a8 + 8,uVar10,6);
  puVar6 = puStack_80;
  if ((uVar2 & 1) == 0) {
    return;
  }
  if (puStack_80[2] == 0) {
LAB_1049ac724:
    uStack_68 = 0;
    uStack_70 = 0;
    lStack_58 = 0;
    uStack_60 = 0;
  }
  else {
    _swift_bridgeObjectRetain(puStack_80);
    lVar3 = 0x746e657665;
    uVar2 = 0;
    func_0x000100029284(0x746e657665);
    if ((uVar2 & 1) == 0) {
      _swift_bridgeObjectRelease(puVar6);
      goto LAB_1049ac724;
    }
    func_0x0001000bb420(puVar6[7] + lVar3 * 0x20,&uStack_70);
    _swift_bridgeObjectRelease(puVar6);
  }
  _swift_bridgeObjectRelease(puVar6);
  if (lStack_58 == 0) goto LAB_1049ac8a4;
  uVar10 = 0x1130a2e60;
  func_0x0001048db364(0x1130a2e60);
  puVar6 = &uStack_70;
  _swift_dynamicCast(&puStack_80,puVar6,puVar1 + 8,uVar10,6);
  puVar8 = puStack_80;
  if ((uVar7 & 1) == 0) {
    return;
  }
  puVar4 = puStack_80;
  FUN_1049b270c();
  _swift_bridgeObjectRelease(puVar8);
  ppuVar5 = &PTR____CFConstantStringClassReference_110da1138;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ
            (&PTR____CFConstantStringClassReference_110da1138);
  if (puVar4[2] == 0) {
LAB_1049ac7dc:
    uStack_68 = 0;
    uStack_70 = 0;
    lStack_58 = 0;
    uStack_60 = 0;
  }
  else {
    _swift_bridgeObjectRetain(puVar4);
    puVar8 = puVar6;
    func_0x000100029284(ppuVar5);
    if (((ulong)puVar8 & 1) == 0) {
      _swift_bridgeObjectRelease(puVar4);
      goto LAB_1049ac7dc;
    }
    func_0x0001000bb420(puVar4[7] + (long)ppuVar5 * 0x20,&uStack_70);
    _swift_bridgeObjectRelease(puVar6);
    puVar6 = puVar4;
  }
  _swift_bridgeObjectRelease(puVar6);
  _swift_bridgeObjectRelease(puVar4);
  if (lStack_58 != 0) {
    _swift_dynamicCast(&puStack_80,&uStack_70,puVar1 + 8,PTR___sSSN_11034da80,6);
    if ((uVar9 & 1) == 0) {
      return;
    }
    uVar10 = *(undefined8 *)(param_2 + _DAT_1130a2df0);
    _swift_bridgeObjectRetain(uVar10);
    puVar6 = puStack_80;
    func_0x0001000f66f0(puStack_80,uStack_78,uVar10);
    _swift_bridgeObjectRelease(uStack_78);
    _swift_bridgeObjectRelease(uVar10);
    if (((ulong)puVar6 & 1) != 0) {
      return;
    }
    func_0x0001000bb420(param_1,&uStack_70);
    uVar9 = *param_3;
    uVar2 = uVar9;
    _swift_isUniquelyReferenced_nonNull_native();
    *param_3 = uVar9;
    uVar7 = uVar9;
    if ((uVar2 & 1) == 0) {
      uVar7 = 0;
      func_0x000100f6a040(0,*(long *)(uVar9 + 0x10) + 1,1,uVar9);
      *param_3 = uVar7;
    }
    uVar2 = *(ulong *)(uVar7 + 0x10);
    uVar9 = uVar7;
    if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar2) {
      uVar9 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
      func_0x000100f6a040(uVar9,uVar2 + 1,1,uVar7);
      *param_3 = uVar9;
    }
    *(ulong *)(uVar9 + 0x10) = uVar2 + 1;
    func_0x000100102924(&uStack_70,uVar9 + uVar2 * 0x20 + 0x20);
    return;
  }
LAB_1049ac8a4:
  func_0x00010006e7f4(&uStack_70);
  return;
}



/* Entry: 1049ac914; end: 1049ac963; -[FBSDKBlocklistEventsManager processEvents:] */

void FUN_1049ac914(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_1049ac5a4(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1049ac964; end: 1049ac983;  */

void FUN_1049ac964(void)

{
  _objc_allocWithZone();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d290)();
  return;
}



/* Entry: 1049ac984; end: 1049aca3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049ac984(void)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  
  _swift_getObjectType();
  *(undefined1 *)(unaff_x20 + _DAT_1130a2df8) = 0;
  puVar1 = PTR___swiftEmptySetSingleton_11034f1d8;
  *(undefined **)(unaff_x20 + _DAT_1130a2df0) = PTR___swiftEmptySetSingleton_11034f1d8;
  *(undefined8 *)(unaff_x20 + _DAT_1130a2de0) = 0;
  lVar2 = _DAT_1130a2de8;
  puVar3 = PTR_PTR_1126ade20;
  _swift_getInitializedObjCClass();
  _swift_retain(puVar1);
  _objc_msgSend(puVar3,PTR_s_shared_1126687d0);
  _objc_retainAutoreleasedReturnValue();
  *(undefined **)(unaff_x20 + lVar2) = puVar3;
  _objc_msgSendSuper2(&stack0xffffffffffffffb0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1049aca3c; end: 1049acaf3; -[FBSDKBlocklistEventsManager init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049aca3c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lStack_50;
  long lStack_48;
  
  lVar3 = param_1;
  _swift_getObjectType();
  *(undefined1 *)(param_1 + _DAT_1130a2df8) = 0;
  puVar1 = PTR___swiftEmptySetSingleton_11034f1d8;
  *(undefined **)(param_1 + _DAT_1130a2df0) = PTR___swiftEmptySetSingleton_11034f1d8;
  *(undefined8 *)(param_1 + _DAT_1130a2de0) = 0;
  lVar2 = _DAT_1130a2de8;
  puVar4 = PTR_PTR_1126ade20;
  _swift_getInitializedObjCClass();
  _swift_retain(puVar1);
  _objc_msgSend(puVar4,PTR_s_shared_1126687d0);
  _objc_retainAutoreleasedReturnValue();
  *(undefined **)(param_1 + lVar2) = puVar4;
  lStack_50 = param_1;
  lStack_48 = lVar3;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1049acaf4; end: 1049acb27;  */

void FUN_1049acaf4(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1049acb28; end: 1049acbaf; -[FBSDKBlocklistEventsManager .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049acb28(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130a2df0));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_1130a2de0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_1130a2de8));
  return;
}



/* Entry: 1049acbb0; end: 1049acbbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049acbb0(undefined8 *param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130a2de0;
  _swift_beginAccess(unaff_x20 + _DAT_1130a2de0,auStack_48,0,0);
  *param_1 = *(undefined8 *)(unaff_x20 + lVar1);
  _swift_unknownObjectRetain();
  return;
}



/* Entry: 1049acbbc; end: 1049acc0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049acbbc(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130a2de0;
  uVar3 = *param_1;
  _swift_beginAccess(unaff_x20 + _DAT_1130a2de0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = uVar3;
  _swift_unknownObjectRelease(uVar2);
  return;
}



/* Entry: 1049acc10; end: 1049acc4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1049acc10(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_1130a2de0;
  _swift_beginAccess(unaff_x20 + _DAT_1130a2de0,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x1049acdcc;
  return auVar2;
}



/* Entry: 1049acc50; end: 1049acc5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049acc50(undefined8 *param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130a2de8;
  _swift_beginAccess(unaff_x20 + _DAT_1130a2de8,auStack_48,0,0);
  *param_1 = *(undefined8 *)(unaff_x20 + lVar1);
  _swift_unknownObjectRetain();
  return;
}



/* Entry: 1049acc5c; end: 1049accab;  */

void FUN_1049acc5c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long unaff_x20;
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(unaff_x20 + lVar1,auStack_48,0,0);
  *param_1 = *(undefined8 *)(unaff_x20 + lVar1);
  _swift_unknownObjectRetain();
  return;
}



/* Entry: 1049accac; end: 1049accaf;  */

void FUN_1049accac(void)

{
  return;
}



/* Entry: 1049accb0; end: 1049acd97;  */

void FUN_1049accb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x21;
  long lVar4;
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [24];
  long lStack_58;
  
  lVar1 = 0;
  __s10Foundation25NSFastEnumerationIteratorVMa();
  lVar4 = *(long *)(lVar1 + -8);
  lVar3 = *(long *)(lVar4 + 0x40);
  lVar2 = lVar1;
  __sSo7NSArrayC10FoundationE12makeIteratorAC017NSFastEnumerationD0VyF
            (auStack_90 + -(lVar3 + 0xfU & 0xfffffffffffffff0));
  func_0x000100e15a08();
  do {
    __sSt4next7ElementQzSgyFTj(auStack_70,lVar1,lVar2);
    if (lStack_58 == 0) {
LAB_1049acd68:
      (**(code **)(lVar4 + 8))(auStack_90 + -(lVar3 + 0xfU & 0xfffffffffffffff0),lVar1);
      return;
    }
    func_0x000100102924(auStack_70,auStack_90);
    FUN_1049ac670(auStack_90,param_2,param_3);
    if (unaff_x21 != 0) {
      func_0x000100183ab8(auStack_90);
      goto LAB_1049acd68;
    }
    func_0x000100183ab8(auStack_90);
  } while( true );
}



/* Entry: 1049acd98; end: 1049acdcf;  */

void FUN_1049acd98(void)

{
  _swift_getInitializedObjCClass(&PTR_PTR_1129e8078);
  return;
}



/* Entry: 1049acdd0; end: 1049acdd7;  */

void FUN_1049acdd0(void)

{
  long in_x3;
  
                    /* WARNING: Could not recover jumptable at 0x0001049acdd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_x3 + 8))();
  return;
}



/* Entry: 1049acdd8; end: 1049acdef;  */

void FUN_1049acdd8(void)

{
  long in_x5;
  
  (**(code **)(in_x5 + 0x10))();
  return;
}



/* Entry: 1049acdf0; end: 1049acdf7;  */

void FUN_1049acdf0(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001049acdf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0x18))();
  return;
}



/* Entry: 1049acdf8; end: 1049ad0bf;  */

undefined8 FUN_1049acdf8(void)

{
  if (lRam000000011309fed0 != -1) {
    _swift_once(0x11309fed0,FUN_1049adc74);
  }
  return 0x1138158a0;
}



/* Entry: 1049ad0c0; end: 1049adc73;  */

undefined8
FUN_1049ad0c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,long param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
             undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
             undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
             undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
             undefined8 param_49,undefined8 param_50,undefined8 param_51,undefined8 param_52,
             undefined8 param_53,undefined8 param_54,undefined8 param_55,undefined8 param_56,
             undefined8 param_57,undefined8 param_58,undefined8 param_59,undefined8 param_60,
             undefined8 param_61)

{
  long lVar1;
  
  _swift_getObjectType();
  _swift_getObjectType();
  _swift_getObjectType();
  _swift_getObjectType();
  _swift_getObjectType();
  _swift_getObjectType();
  _swift_getObjectType();
  _swift_getObjectType();
  lVar1 = param_20;
  func_0x0001000c6518(param_20,*(undefined8 *)(param_20 + 0x18));
  _swift_getObjectType();
  _swift_getObjectType();
  _swift_getObjectType();
  _swift_getObjectType();
  _swift_getObjectType();
  _swift_getObjectType();
  _swift_getObjectType();
  _swift_getObjectType();
  _swift_getObjectType();
  FUN_1049af538(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                param_11,param_12,param_13,param_14,param_15,param_16,param_17,param_18,param_19,
                lVar1,param_21,param_22,param_23,param_24,param_25,param_26,param_27,param_28,
                param_29,param_30,param_31,param_32,param_33,param_34,param_35,param_36,param_37,
                param_38,param_39,param_40,param_41,param_42,param_43,param_44,param_45,param_46,
                param_47,param_48,param_49,param_50,param_51,param_52,param_53,param_54,param_55,
                param_56,param_57,param_58,param_59,param_60,param_61);
  func_0x0001000834e4(param_20);
  return param_1;
}



/* Entry: 1049adc74; end: 1049adc8f;  */

void FUN_1049adc74(undefined8 param_1)

{
  FUN_1049adcd4();
  uRam00000001138158a0 = param_1;
  return;
}



/* Entry: 1049adc90; end: 1049adcd3;  */

long FUN_1049adc90(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 1049adcd4; end: 1049aef17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049adcd4(void)

{
  undefined8 uVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined8 uVar21;
  long lVar22;
  long *plVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined **ppuVar26;
  long lVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined *puVar30;
  undefined *puVar31;
  undefined *puVar32;
  undefined *puVar33;
  undefined *puVar34;
  undefined8 uVar35;
  undefined *puVar36;
  undefined8 uVar37;
  undefined *puVar38;
  undefined8 uVar39;
  undefined *puVar40;
  undefined8 uVar41;
  undefined *puVar42;
  undefined *puVar43;
  undefined *puVar44;
  undefined *puVar45;
  undefined8 uVar46;
  undefined *puVar47;
  undefined *puVar48;
  undefined *puVar49;
  undefined *puVar50;
  undefined *puVar51;
  undefined8 uVar52;
  undefined8 uVar53;
  undefined8 uVar54;
  undefined8 uVar55;
  undefined8 uVar56;
  undefined *puVar57;
  undefined8 uVar58;
  undefined *puVar59;
  undefined8 uVar60;
  undefined *puVar61;
  undefined8 uVar62;
  undefined *puVar63;
  undefined *puVar64;
  undefined *puVar65;
  undefined8 uVar66;
  undefined8 uVar67;
  undefined8 uVar68;
  undefined8 uVar69;
  undefined8 uVar70;
  undefined8 uVar71;
  undefined *puVar72;
  undefined8 uVar73;
  undefined *puVar74;
  undefined8 uVar75;
  undefined *puVar76;
  undefined *puVar77;
  undefined8 uVar78;
  undefined8 *puVar79;
  undefined *puVar80;
  undefined *puVar81;
  undefined8 uStack_260;
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  long lStack_90;
  long lStack_88;
  undefined1 auStack_80 [32];
  
  puVar3 = PTR_PTR_1126add18;
  _objc_allocWithZone();
  _objc_msgSend();
  puVar4 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
  _swift_getInitializedObjCClass();
  puVar81 = puVar4;
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = lRam000000011309ff80;
  _objc_retain();
  if (lVar27 != -1) {
    _swift_once(0x11309ff80,FUN_1049e4894);
  }
  uVar6 = uRam00000001130a3c58;
  puVar5 = PTR_PTR_1126addd8;
  _swift_getInitializedObjCClass();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  puVar7 = puVar5;
  _objc_msgSend(puVar5,PTR_s_shared_1126687d0);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126ae020;
  _objc_allocWithZone();
  _objc_msgSend();
  _objc_release(puVar81);
  _objc_release(puVar3);
  _objc_release(uVar6);
  _objc_release(puVar7);
  if (lRam000000011309ffa8 != -1) {
    _swift_once(0x11309ffa8,FUN_1049ff048);
  }
  uVar9 = uRam00000001130a4218;
  puVar7 = PTR_PTR_1126add88;
  _swift_getInitializedObjCClass();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  puVar81 = puVar7;
  _objc_msgSend(puVar7,PTR_s_shared_1126687d0);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126ae028;
  _objc_allocWithZone();
  _objc_msgSend();
  _objc_release(uVar9);
  _objc_release(puVar3);
  _objc_release(uVar6);
  _objc_release(puVar81);
  puVar11 = PTR_PTR_1126add60;
  _swift_getInitializedObjCClass();
  _objc_retain();
  puVar81 = puVar11;
  _objc_msgSend(puVar11,PTR_s_shared_1126687d0);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  _swift_getInitializedObjCClass();
  puVar13 = puVar12;
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = 0;
  func_0x0001049afc3c(0,0x11309cb98,&PTR_PTR_1126add30);
  puVar15 = PTR_PTR_1126ae030;
  _objc_allocWithZone();
  uVar21 = uVar14;
  _swift_getObjCClassFromMetadata(uVar14);
  _objc_msgSend(puVar15,PTR_s_initWithGraphRequestFactory_even_112525358,puVar3,puVar81,puVar13,
                uVar21);
  _objc_release(puVar3);
  _objc_release(puVar81);
  _objc_release(puVar13);
  puVar13 = PTR_PTR_1126ae038;
  _objc_allocWithZone();
  _objc_msgSend();
  puVar81 = puVar11;
  _objc_msgSend(puVar11,PTR_s_shared_1126687d0);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = 0;
  func_0x0001049afc3c(0,0x1130a3160,&PTR_PTR_1126adec8);
  puVar17 = puVar4;
  _objc_msgSend(puVar4,PTR_s_standardUserDefaults_112671060);
  _objc_retainAutoreleasedReturnValue();
  puVar18 = PTR_PTR_1126ae040;
  _objc_allocWithZone();
  _objc_retain();
  _objc_msgSend(puVar18,PTR_s_init_1125d9248);
  FUN_1049a8368(0);
  _swift_getObjCClassFromMetadata();
  puVar19 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  _swift_getInitializedObjCClass();
  puVar20 = puVar19;
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  _swift_beginAccess(0x113815a60,auStack_80,1,0);
  uVar35 = puRam0000000113815a90;
  uVar29 = puRam0000000113815a88;
  uVar28 = puRam0000000113815a80;
  uVar78 = puRam0000000113815a78;
  uVar25 = uRam0000000113815a70;
  uVar24 = puRam0000000113815a68;
  uVar21 = uRam0000000113815a60;
  uRam0000000113815a60 = uVar6;
  puRam0000000113815a68 = puVar81;
  uRam0000000113815a70 = uVar16;
  puRam0000000113815a78 = puVar17;
  puRam0000000113815a80 = puVar13;
  puRam0000000113815a88 = puVar18;
  puRam0000000113815a90 = puVar20;
  _swift_unknownObjectRetain();
  _swift_unknownObjectRetain(puVar81);
  _swift_unknownObjectRetain(puVar17);
  _swift_unknownObjectRetain(puVar13);
  _swift_unknownObjectRetain(puVar18);
  _swift_unknownObjectRetain(puVar20);
  func_0x0001049afbd0(uVar21,uVar24,uVar25,uVar78,uVar28,uVar29,uVar35);
  _swift_unknownObjectRelease(puVar20);
  _swift_unknownObjectRelease(puVar18);
  _swift_unknownObjectRelease(puVar13);
  _swift_unknownObjectRelease(puVar17);
  _swift_unknownObjectRelease(puVar81);
  _swift_unknownObjectRelease(uVar6);
  uVar21 = 0;
  func_0x000104a02738();
  _objc_allocWithZone();
  _objc_msgSend();
  puVar81 = PTR__OBJC_CLASS___SKPaymentQueue_1126c00b8;
  _swift_getInitializedObjCClass();
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = 0;
  FUN_104a01ae4();
  lVar27 = lVar22;
  _objc_allocWithZone();
  *(undefined1 *)(lVar27 + _DAT_1130a42d8) = 0;
  *(undefined **)(lVar27 + _DAT_1130a42e0) = puVar81;
  *(undefined8 *)(lVar27 + _DAT_1130a42e8) = uVar21;
  puVar81 = PTR_s_init_1125d9248;
  lStack_90 = lVar27;
  lStack_88 = lVar22;
  _objc_retain();
  plVar23 = &lStack_90;
  _objc_msgSendSuper2(plVar23,puVar81);
  uVar24 = 0;
  FUN_1049c9144();
  _swift_allocObject();
  FUN_1049c8abc();
  puVar81 = puVar11;
  _objc_msgSend(puVar11,PTR_s_shared_1126687d0);
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR_PTR_1126ade20;
  _swift_getInitializedObjCClass();
  puVar18 = puVar17;
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = PTR_PTR_1126ae048;
  _objc_allocWithZone();
  _objc_msgSend();
  _objc_release(puVar81);
  _objc_release(puVar18);
  uVar25 = 0;
  func_0x0001049c972c();
  uVar78 = 0x10;
  _swift_allocObject();
  ppuVar26 = &PTR____CFConstantStringClassReference_110da2a58;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  ppuStack_a8 = ppuVar26;
  uStack_a0 = uVar78;
  __sSS6appendyySSF(0x2e,0xe100000000000000);
  puVar81 = puVar19;
  _objc_msgSend(puVar19,PTR_s_mainBundle_11260b3b0);
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar81;
  puVar80 = PTR_s_bundleIdentifier_1125a6c40;
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar81);
  if (puVar18 == (undefined *)0x0) {
    puVar80 = (undefined *)0xe300000000000000;
    puVar81 = (undefined *)0x6c696e;
  }
  else {
    puVar81 = puVar18;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(puVar18);
    _objc_release(puVar18);
  }
  __sSS6appendyySSF(puVar81,puVar80);
  _swift_bridgeObjectRelease(puVar80);
  uVar78 = uStack_a0;
  ppuVar26 = ppuStack_a8;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(ppuStack_a8,uStack_a0);
  _swift_bridgeObjectRelease(uVar78);
  uVar78 = uVar25;
  _objc_msgSend(uVar25,PTR_s_createKeychainStoreWithService_a_112525368,ppuVar26,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar26);
  lVar27 = 0;
  func_0x0001049f04ec();
  _swift_allocObject();
  *(undefined8 *)(lVar27 + 0x28) = 0;
  *(undefined8 *)(lVar27 + 0x20) = 0;
  *(undefined8 *)(lVar27 + 0x38) = 0;
  *(undefined8 *)(lVar27 + 0x30) = 0;
  puVar79 = (undefined8 *)(lVar27 + 0x10);
  *(undefined8 *)(lVar27 + 0x18) = 0;
  *puVar79 = 0;
  uVar28 = uVar6;
  _objc_retain();
  _objc_retain();
  _swift_unknownObjectRetain(uVar78);
  puVar81 = puVar4;
  _objc_msgSend(puVar4,PTR_s_standardUserDefaults_112671060);
  _objc_retainAutoreleasedReturnValue();
  _swift_beginAccess(puVar79,&ppuStack_a8,1,0);
  *puVar79 = uVar6;
  *(undefined8 *)(lVar27 + 0x18) = uVar78;
  *(undefined **)(lVar27 + 0x20) = puVar81;
  puVar81 = PTR_PTR_1126adfd0;
  _objc_allocWithZone();
  _objc_msgSend();
  if (lRam000000011309ff00 != -1) {
    _swift_once(0x11309ff00,FUN_1049c0d3c);
  }
  uVar6 = uRam00000001130a34c0;
  _objc_retain();
  puVar18 = puVar12;
  _objc_msgSend(puVar12,PTR_s_defaultCenter_1125b7d90);
  _objc_retainAutoreleasedReturnValue();
  uVar29 = 0;
  FUN_1049f0e24(0);
  _objc_allocWithZone();
  FUN_1049af424(puVar18,uVar29);
  puVar80 = PTR_PTR_1126ade48;
  _swift_getInitializedObjCClass();
  puVar30 = puVar80;
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  puVar31 = puVar11;
  _objc_msgSend(puVar11,PTR_s_shared_1126687d0);
  _objc_retainAutoreleasedReturnValue();
  puVar32 = PTR_PTR_1126ae050;
  _swift_getInitializedObjCClass();
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  uVar29 = 0;
  func_0x0001049946a0();
  _swift_allocObject();
  puVar33 = PTR_PTR_1126adde8;
  _swift_getInitializedObjCClass();
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  puVar34 = puVar80;
  _objc_msgSend(puVar80,PTR_s_shared_1126687d0);
  _objc_retainAutoreleasedReturnValue();
  uVar35 = 0;
  func_0x0001049afc3c(0,0x11309cba0,&PTR_PTR_1126a5d98);
  _objc_msgSend(puVar7,PTR_s_shared_1126687d0);
  _objc_retainAutoreleasedReturnValue();
  puVar36 = puVar4;
  _objc_msgSend(puVar4,PTR_s_standardUserDefaults_112671060);
  _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(puVar5,PTR_s_shared_1126687d0);
  _objc_retainAutoreleasedReturnValue();
  uVar37 = 0;
  FUN_1049fc71c();
  _objc_allocWithZone();
  _objc_msgSend();
  puVar38 = PTR_PTR_1126ae058;
  _objc_allocWithZone();
  _objc_msgSend();
  uVar39 = 0;
  FUN_1049fe1e8();
  _objc_allocWithZone();
  _objc_msgSend();
  puVar40 = PTR_PTR_1126adea0;
  _swift_getInitializedObjCClass();
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  uVar41 = 0;
  FUN_1049b3fa0();
  _swift_allocObject();
  FUN_1049b3de0();
  puVar42 = puVar11;
  _objc_msgSend(puVar11,PTR_s_shared_1126687d0);
  _objc_retainAutoreleasedReturnValue();
  puVar43 = PTR_PTR_1126ae060;
  _objc_allocWithZone();
  _objc_msgSend();
  _objc_msgSend(puVar19,PTR_s_mainBundle_11260b3b0);
  _objc_retainAutoreleasedReturnValue();
  puVar44 = PTR_PTR_1126add20;
  _swift_getInitializedObjCClass();
  puVar45 = puVar44;
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  uVar46 = 0;
  func_0x0001049afc3c(0,0x1130a3168,&PTR_PTR_1126add38);
  puVar47 = PTR__OBJC_CLASS___NSProcessInfo_1126aeba8;
  _swift_getInitializedObjCClass();
  puVar48 = puVar47;
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(puVar12,PTR_s_defaultCenter_1125b7d90);
  _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(puVar47,PTR_s_processInfo_112622d70);
  _objc_retainAutoreleasedReturnValue();
  puVar49 = puVar17;
  _objc_msgSend(puVar17,PTR_s_shared_1126687d0);
  _objc_retainAutoreleasedReturnValue();
  puVar50 = PTR_PTR_1126ae068;
  _objc_allocWithZone();
  _objc_msgSend();
  _swift_retain(lVar27);
  _objc_release(puVar49);
  puVar49 = puVar17;
  _objc_msgSend(puVar17,PTR_s_shared_1126687d0);
  _objc_retainAutoreleasedReturnValue();
  puVar51 = PTR_PTR_1126ae070;
  _objc_allocWithZone();
  _objc_msgSend();
  uVar52 = 0;
  FUN_1049dc7b0();
  _objc_allocWithZone();
  _objc_msgSend();
  uVar53 = 0;
  FUN_1049cd2e8();
  _objc_allocWithZone();
  _objc_msgSend();
  uVar54 = 0;
  FUN_1049acd98();
  _objc_allocWithZone();
  _objc_msgSend();
  uVar55 = 0;
  FUN_1049ddfe0();
  _objc_allocWithZone();
  _objc_msgSend();
  uVar56 = 0;
  FUN_1049e08ac();
  _objc_allocWithZone();
  _objc_msgSend();
  iVar2 = 2;
  func_0x000100029b9c(2,0xe,0,0);
  if (iVar2 == 0) {
    uStack_260 = 0;
  }
  else {
    uStack_260 = 0;
    FUN_104993dc8();
    _objc_allocWithZone();
    _objc_msgSend();
  }
  _objc_retain();
  puVar57 = puVar4;
  _objc_msgSend(puVar4,PTR_s_standardUserDefaults_112671060);
  _objc_retainAutoreleasedReturnValue();
  uVar58 = 0;
  func_0x0001049afc3c(0,0x1130a3170,&PTR__OBJC_CLASS___SKAdNetwork_1126b8e20);
  puVar59 = PTR_PTR_1126ae078;
  _objc_allocWithZone();
  _swift_getObjCClassFromMetadata(uVar58);
  _objc_msgSend(puVar59,PTR_s_initWithGraphRequestFactory_data_112525378,puVar3,puVar57,uVar58);
  _objc_release(puVar3);
  _objc_release(puVar57);
  _objc_retain();
  _objc_retain();
  _objc_msgSend(puVar4,PTR_s_standardUserDefaults_112671060);
  _objc_retainAutoreleasedReturnValue();
  puVar57 = PTR_PTR_1126ae080;
  _objc_allocWithZone();
  _objc_msgSend();
  _objc_release(puVar3);
  _objc_release(puVar4);
  uVar60 = 0;
  func_0x0001049afc3c(0,0x1130a3178,&PTR_PTR_1126adfa8);
  puVar4 = PTR_PTR_1126ae088;
  _objc_allocWithZone();
  uVar58 = uVar60;
  _swift_getObjCClassFromMetadata(uVar60);
  _objc_retain();
  _objc_msgSend(puVar4,PTR_s_initWithUserDataStore_swizzler__112525380,puVar81,uVar58);
  _objc_retain();
  _objc_msgSend(puVar17,PTR_s_shared_1126687d0);
  _objc_retainAutoreleasedReturnValue();
  puVar61 = puVar11;
  _objc_msgSend(puVar11,PTR_s_shared_1126687d0);
  _objc_retainAutoreleasedReturnValue();
  uVar62 = 0;
  func_0x0001049afc3c(0,0x1130a3180,&PTR_PTR_1126adec0);
  puVar63 = PTR_PTR_1126adf30;
  _swift_getInitializedObjCClass();
  puVar64 = puVar63;
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  puVar65 = PTR_PTR_1126ae090;
  _objc_allocWithZone();
  uVar66 = uVar62;
  _swift_getObjCClassFromMetadata(uVar62);
  _objc_msgSend(puVar65,PTR_s_initWithGraphRequestFactory_serv_112525388,puVar3,puVar17,uVar58,
                uVar28,puVar61,uVar66,puVar64);
  _objc_release(puVar3);
  _objc_release(puVar17);
  _objc_release(uVar28);
  _objc_release(puVar61);
  _objc_release(puVar64);
  uVar58 = 0;
  func_0x000104934940();
  puVar17 = puVar80;
  _objc_msgSend(puVar80,PTR_s_shared_1126687d0);
  _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(puVar80,PTR_s_shared_1126687d0);
  _objc_retainAutoreleasedReturnValue();
  uVar66 = 0;
  FUN_104a013a4();
  _objc_allocWithZone();
  _objc_retain();
  _objc_msgSend(uVar66,PTR_s_init_1125d9248);
  uVar67 = 0;
  FUN_10499566c();
  _swift_allocObject();
  puVar61 = PTR_PTR_1126adff8;
  _swift_getInitializedObjCClass();
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  uVar68 = 0;
  func_0x0001049a1770();
  _swift_allocObject();
  uVar69 = 0;
  FUN_1049a1970();
  _objc_allocWithZone();
  _objc_msgSend();
  uVar70 = 0;
  func_0x0001049afc3c(0,0x1130a3188,&PTR_PTR_1126ade40);
  uVar71 = 0;
  func_0x0001049afc3c(0,0x112d4e4a8,&PTR__OBJC_CLASS___NSData_1126ae778);
  puVar64 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  _swift_getInitializedObjCClass();
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  if (lRam000000011309fed8 != -1) {
    _swift_once(0x11309fed8,FUN_1049b0fe4);
  }
  uVar1 = uRam00000001130a3238;
  _swift_unknownObjectRetain(uRam00000001130a3238);
  puVar72 = puVar63;
  _objc_msgSend(puVar63,PTR_s_shared_1126687d0);
  _objc_retainAutoreleasedReturnValue();
  uVar73 = 0;
  FUN_1049db25c();
  _objc_msgSend(puVar63,PTR_s_shared_1126687d0);
  _objc_retainAutoreleasedReturnValue();
  puVar74 = PTR__OBJC_CLASS___NSURLSession_1126c7fe8;
  _swift_getInitializedObjCClass();
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(puVar44,PTR_s_sharedUtility_112668b58);
  _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(puVar11,PTR_s_shared_1126687d0);
  _objc_retainAutoreleasedReturnValue();
  uVar75 = 0;
  FUN_104a0a1a0();
  _objc_allocWithZone();
  _objc_msgSend();
  puVar76 = PTR_PTR_1126adda0;
  _swift_getInitializedObjCClass();
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  _swift_release(lVar27);
  _objc_release(puVar59);
  _objc_release(puVar57);
  _objc_release(uVar21);
  _swift_unknownObjectRelease(uVar78);
  _swift_release(uVar25);
  puVar77 = puVar34;
  _objc_release();
  FUN_1049af8bc();
  _swift_allocObject();
  *(undefined **)(puVar77 + 0x10) = puVar18;
  *(undefined8 *)(puVar77 + 0x18) = uVar14;
  *(undefined **)(puVar77 + 0x20) = puVar30;
  *(undefined8 *)(puVar77 + 0x28) = uStack_260;
  *(undefined8 *)(puVar77 + 0x30) = uVar58;
  *(undefined **)(puVar77 + 0x38) = puVar17;
  *(undefined **)(puVar77 + 0x40) = puVar31;
  *(undefined **)(puVar77 + 0x48) = puVar32;
  *(undefined **)(puVar77 + 0x50) = puVar80;
  *(undefined8 *)(puVar77 + 0x58) = uVar29;
  *(undefined **)(puVar77 + 0x60) = puVar33;
  *(undefined **)(puVar77 + 0x68) = puVar34;
  *(undefined8 *)(puVar77 + 0x70) = uVar66;
  *(undefined8 *)(puVar77 + 0x78) = uVar67;
  *(undefined **)(puVar77 + 0x80) = puVar61;
  *(undefined8 *)(puVar77 + 0x88) = uVar68;
  *(undefined8 *)(puVar77 + 0x90) = uVar69;
  *(undefined **)(puVar77 + 0x98) = puVar8;
  *(undefined8 *)(puVar77 + 0xa0) = uVar35;
  *(undefined8 *)(puVar77 + 0xd0) = uVar6;
  *(undefined8 *)(puVar77 + 0xd8) = uVar70;
  *(undefined **)(puVar77 + 0xe0) = puVar7;
  *(undefined **)(puVar77 + 0xe8) = puVar10;
  *(undefined8 *)(puVar77 + 0xf0) = uVar71;
  *(undefined **)(puVar77 + 0xf8) = puVar36;
  *(undefined **)(puVar77 + 0x100) = puVar5;
  *(undefined8 *)(puVar77 + 0x108) = uVar37;
  *(undefined **)(puVar77 + 0x110) = puVar38;
  *(undefined8 *)(puVar77 + 0x118) = uVar39;
  *(undefined **)(puVar77 + 0x120) = puVar40;
  *(undefined8 *)(puVar77 + 0x128) = uVar41;
  *(undefined **)(puVar77 + 0x130) = puVar42;
  *(undefined8 *)(puVar77 + 0x138) = uVar9;
  *(undefined8 *)(puVar77 + 0x140) = uVar62;
  *(undefined **)(puVar77 + 0x148) = puVar64;
  *(undefined **)(puVar77 + 0x170) = puVar3;
  *(undefined **)(puVar77 + 0x178) = puVar15;
  *(undefined **)(puVar77 + 0x180) = puVar19;
  *(undefined8 *)(puVar77 + 0x188) = uVar1;
  *(undefined **)(puVar77 + 400) = puVar45;
  *(undefined8 *)(puVar77 + 0x198) = uVar46;
  *(undefined **)(puVar77 + 0x1a0) = puVar13;
  *(undefined **)(puVar77 + 0x1a8) = puVar48;
  *(undefined **)(puVar77 + 0x1b0) = puVar4;
  *(undefined **)(puVar77 + 0x1b8) = puVar72;
  *(undefined **)(puVar77 + 0xc0) = &UNK_1107bab38;
  *(undefined ***)(puVar77 + 200) = &PTR_DAT_1107bab18;
  *(undefined8 *)(puVar77 + 0x150) = uVar16;
  *(code **)(puVar77 + 0x158) = FUN_1049aef18;
  *(undefined8 *)(puVar77 + 0x160) = 0;
  *(undefined **)(puVar77 + 0x168) = puVar43;
  *(undefined **)(puVar77 + 0x1c0) = puVar12;
  *(undefined **)(puVar77 + 0x1c8) = puVar47;
  *(long **)(puVar77 + 0x1d0) = plVar23;
  *(undefined8 *)(puVar77 + 0x1d8) = uVar24;
  *(undefined8 *)(puVar77 + 0x1e0) = uVar73;
  *(undefined **)(puVar77 + 0x1e8) = puVar50;
  *(undefined **)(puVar77 + 0x1f0) = puVar63;
  *(undefined **)(puVar77 + 0x1f8) = puVar49;
  *(undefined **)(puVar77 + 0x200) = puVar74;
  *(undefined8 *)(puVar77 + 0x208) = uVar28;
  *(undefined **)(puVar77 + 0x210) = puVar59;
  *(undefined **)(puVar77 + 0x218) = puVar57;
  *(undefined **)(puVar77 + 0x220) = puVar65;
  *(undefined8 *)(puVar77 + 0x228) = uVar60;
  *(undefined **)(puVar77 + 0x230) = puVar20;
  *(long *)(puVar77 + 0x238) = lVar27;
  *(undefined **)(puVar77 + 0x240) = puVar44;
  *(undefined **)(puVar77 + 0x248) = puVar51;
  *(undefined **)(puVar77 + 0x250) = puVar81;
  *(undefined **)(puVar77 + 600) = puVar11;
  *(undefined8 *)(puVar77 + 0x260) = uVar75;
  *(undefined **)(puVar77 + 0x268) = puVar76;
  *(undefined8 *)(puVar77 + 0x270) = uVar52;
  *(undefined8 *)(puVar77 + 0x278) = uVar53;
  *(undefined8 *)(puVar77 + 0x280) = uVar54;
  *(undefined8 *)(puVar77 + 0x288) = uVar55;
  *(undefined8 *)(puVar77 + 0x290) = uVar56;
  return;
}



/* Entry: 1049aef18; end: 1049aef77;  */

void FUN_1049aef18(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (lRam000000011309fe28 != -1) {
    _swift_once(0x11309fe28,FUN_1049a1ec8);
  }
  uVar1 = uRam00000001130a2b68;
  uVar2 = 0;
  FUN_1049a8368();
  param_1[3] = uVar2;
  *param_1 = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(uVar1);
  return;
}



/* Entry: 1049aef78; end: 1049af1fb;  */

void FUN_1049aef78(void)

{
  if (lRam000000011309fed0 != -1) {
    _swift_once(0x11309fed0,FUN_1049adc74);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uRam00000001138158a0);
  return;
}



/* Entry: 1049af1fc; end: 1049af423;  */

long FUN_1049af1fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined4 param_20,
                  undefined4 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                  undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
                  undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
                  undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
                  undefined8 param_49,undefined8 param_50,undefined8 param_51,undefined8 param_52,
                  undefined8 param_53,undefined8 param_54,undefined8 param_55,undefined8 param_56,
                  undefined8 param_57,undefined8 param_58,undefined8 param_59,undefined8 param_60,
                  undefined8 param_61,undefined8 param_62,undefined8 param_63,undefined8 param_64,
                  undefined8 param_65,undefined8 param_66,undefined8 param_67,undefined8 param_68,
                  undefined8 param_69,undefined8 param_70,undefined8 param_71)

{
  undefined8 in_stack_000001f0;
  undefined8 in_stack_000001f8;
  undefined8 in_stack_00000200;
  undefined8 in_stack_00000208;
  undefined8 in_stack_00000210;
  undefined8 in_stack_00000218;
  undefined8 in_stack_00000220;
  long in_stack_00000228;
  long in_stack_000002b8;
  undefined8 in_stack_000002c0;
  
  *(long *)(in_stack_00000228 + 0xc0) = in_stack_000002b8;
  *(undefined8 *)(in_stack_00000228 + 200) = in_stack_000002c0;
  func_0x0001000c5db4(in_stack_00000228 + 0xa8);
  (**(code **)(*(long *)(in_stack_000002b8 + -8) + 0x20))();
  *(undefined8 *)(in_stack_00000228 + 0x58) = param_10;
  *(undefined8 *)(in_stack_00000228 + 0x50) = param_9;
  *(undefined8 *)(in_stack_00000228 + 0x68) = param_12;
  *(undefined8 *)(in_stack_00000228 + 0x60) = param_11;
  *(undefined8 *)(in_stack_00000228 + 0x10) = param_1;
  *(undefined8 *)(in_stack_00000228 + 0x18) = param_2;
  *(undefined8 *)(in_stack_00000228 + 0x20) = param_3;
  *(undefined8 *)(in_stack_00000228 + 0x28) = param_4;
  *(undefined8 *)(in_stack_00000228 + 0x30) = param_5;
  *(undefined8 *)(in_stack_00000228 + 0x38) = param_6;
  *(undefined8 *)(in_stack_00000228 + 0x40) = param_7;
  *(undefined8 *)(in_stack_00000228 + 0x48) = param_8;
  *(undefined8 *)(in_stack_00000228 + 0x78) = param_14;
  *(undefined8 *)(in_stack_00000228 + 0x70) = param_13;
  *(undefined8 *)(in_stack_00000228 + 0x88) = param_16;
  *(undefined8 *)(in_stack_00000228 + 0x80) = param_15;
  *(undefined8 *)(in_stack_00000228 + 0x98) = param_18;
  *(undefined8 *)(in_stack_00000228 + 0x90) = param_17;
  *(undefined8 *)(in_stack_00000228 + 0xa0) = param_19;
  *(undefined8 *)(in_stack_00000228 + 0xd8) = param_23;
  *(undefined8 *)(in_stack_00000228 + 0xd0) = param_22;
  *(undefined8 *)(in_stack_00000228 + 0xe8) = param_25;
  *(undefined8 *)(in_stack_00000228 + 0xe0) = param_24;
  *(undefined8 *)(in_stack_00000228 + 0xf8) = param_27;
  *(undefined8 *)(in_stack_00000228 + 0xf0) = param_26;
  *(undefined8 *)(in_stack_00000228 + 0x108) = param_29;
  *(undefined8 *)(in_stack_00000228 + 0x100) = param_28;
  *(undefined8 *)(in_stack_00000228 + 0x118) = param_31;
  *(undefined8 *)(in_stack_00000228 + 0x110) = param_30;
  *(undefined8 *)(in_stack_00000228 + 0x128) = param_33;
  *(undefined8 *)(in_stack_00000228 + 0x120) = param_32;
  *(undefined8 *)(in_stack_00000228 + 0x138) = param_35;
  *(undefined8 *)(in_stack_00000228 + 0x130) = param_34;
  *(undefined8 *)(in_stack_00000228 + 0x148) = param_37;
  *(undefined8 *)(in_stack_00000228 + 0x140) = param_36;
  *(undefined8 *)(in_stack_00000228 + 0x158) = param_39;
  *(undefined8 *)(in_stack_00000228 + 0x150) = param_38;
  *(undefined8 *)(in_stack_00000228 + 0x168) = param_41;
  *(undefined8 *)(in_stack_00000228 + 0x160) = param_40;
  *(undefined8 *)(in_stack_00000228 + 0x178) = param_43;
  *(undefined8 *)(in_stack_00000228 + 0x170) = param_42;
  *(undefined8 *)(in_stack_00000228 + 0x188) = param_45;
  *(undefined8 *)(in_stack_00000228 + 0x180) = param_44;
  *(undefined8 *)(in_stack_00000228 + 0x198) = param_47;
  *(undefined8 *)(in_stack_00000228 + 400) = param_46;
  *(undefined8 *)(in_stack_00000228 + 0x1a8) = param_49;
  *(undefined8 *)(in_stack_00000228 + 0x1a0) = param_48;
  *(undefined8 *)(in_stack_00000228 + 0x1b8) = param_51;
  *(undefined8 *)(in_stack_00000228 + 0x1b0) = param_50;
  *(undefined8 *)(in_stack_00000228 + 0x1c8) = param_53;
  *(undefined8 *)(in_stack_00000228 + 0x1c0) = param_52;
  *(undefined8 *)(in_stack_00000228 + 0x1d8) = param_55;
  *(undefined8 *)(in_stack_00000228 + 0x1d0) = param_54;
  *(undefined8 *)(in_stack_00000228 + 0x1e8) = param_57;
  *(undefined8 *)(in_stack_00000228 + 0x1e0) = param_56;
  *(undefined8 *)(in_stack_00000228 + 0x1f8) = param_59;
  *(undefined8 *)(in_stack_00000228 + 0x1f0) = param_58;
  *(undefined8 *)(in_stack_00000228 + 0x208) = param_61;
  *(undefined8 *)(in_stack_00000228 + 0x200) = param_60;
  *(undefined8 *)(in_stack_00000228 + 0x218) = param_63;
  *(undefined8 *)(in_stack_00000228 + 0x210) = param_62;
  *(undefined8 *)(in_stack_00000228 + 0x228) = param_65;
  *(undefined8 *)(in_stack_00000228 + 0x220) = param_64;
  *(undefined8 *)(in_stack_00000228 + 0x238) = param_67;
  *(undefined8 *)(in_stack_00000228 + 0x230) = param_66;
  *(undefined8 *)(in_stack_00000228 + 0x248) = param_69;
  *(undefined8 *)(in_stack_00000228 + 0x240) = param_68;
  *(undefined8 *)(in_stack_00000228 + 600) = param_71;
  *(undefined8 *)(in_stack_00000228 + 0x250) = param_70;
  *(undefined8 *)(in_stack_00000228 + 0x268) = in_stack_000001f8;
  *(undefined8 *)(in_stack_00000228 + 0x260) = in_stack_000001f0;
  *(undefined8 *)(in_stack_00000228 + 0x278) = in_stack_00000208;
  *(undefined8 *)(in_stack_00000228 + 0x270) = in_stack_00000200;
  *(undefined8 *)(in_stack_00000228 + 0x288) = in_stack_00000218;
  *(undefined8 *)(in_stack_00000228 + 0x280) = in_stack_00000210;
  *(undefined8 *)(in_stack_00000228 + 0x290) = in_stack_00000220;
  return in_stack_00000228;
}



/* Entry: 1049af424; end: 1049af537;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1049af424(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lStack_50;
  long lStack_48;
  
  plVar3 = &lStack_50;
  lVar2 = param_2;
  _swift_getObjectType();
  *(undefined8 *)(param_2 + _DAT_1130a3f38) = 0;
  *(undefined8 *)(param_2 + _DAT_1130a3f30) = param_1;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = param_2;
  lStack_48 = lVar2;
  _objc_retain(param_1);
  _objc_msgSendSuper2(&lStack_50,puVar1);
  puVar1 = PTR_s_checkAccessTokenExpirationDate_112525390;
  _objc_retain();
  _objc_msgSend(param_1,PTR_s_fb_addObserver_selector_name_obj_112525328,plVar3,puVar1,
                &PTR____CFConstantStringClassReference_110da0a78,0);
  _objc_retain(plVar3);
  _objc_msgSend(param_1,PTR_s_fb_addObserver_selector_name_obj_112525328,plVar3,puVar1,
                &PTR____CFConstantStringClassReference_110da2478,0);
  _objc_release(plVar3);
  _objc_release(param_1);
  FUN_1049f078c();
  _objc_release(plVar3);
  return (undefined1 *)plVar3;
}



/* Entry: 1049af538; end: 1049af8bb;  */

long FUN_1049af538(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                  undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
                  undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
                  undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
                  undefined8 param_49,undefined8 param_50,undefined8 param_51,undefined8 param_52,
                  undefined8 param_53,undefined8 param_54,undefined8 param_55,undefined8 param_56,
                  undefined8 param_57,undefined8 param_58,undefined8 param_59,undefined8 param_60,
                  undefined8 param_61,undefined8 param_62,undefined8 param_63,undefined8 param_64,
                  undefined8 param_65,undefined8 param_66,undefined8 param_67,undefined8 param_68,
                  undefined8 param_69,undefined8 param_70)

{
  long lVar1;
  long lVar2;
  undefined8 in_stack_000001f0;
  undefined8 in_stack_000001f8;
  undefined8 in_stack_00000200;
  undefined8 in_stack_00000208;
  undefined8 in_stack_00000210;
  undefined8 in_stack_00000218;
  undefined8 in_stack_00000220;
  long in_stack_00000228;
  long in_stack_000002b8;
  undefined8 in_stack_000002c0;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
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
  
  uStack_a8 = param_70;
  uStack_b0 = param_69;
  uStack_c8 = param_66;
  uStack_d0 = param_65;
  uStack_b8 = param_68;
  uStack_c0 = param_67;
  uStack_e8 = param_62;
  uStack_f0 = param_61;
  uStack_d8 = param_64;
  uStack_e0 = param_63;
  uStack_108 = param_58;
  uStack_110 = param_57;
  uStack_f8 = param_60;
  uStack_100 = param_59;
  uStack_118 = param_56;
  uStack_120 = param_55;
  uStack_128 = param_54;
  uStack_130 = param_53;
  uStack_138 = param_52;
  uStack_140 = param_51;
  uStack_158 = param_50;
  uStack_160 = param_49;
  uStack_178 = param_48;
  uStack_180 = param_47;
  uStack_198 = param_46;
  uStack_1a0 = param_45;
  uStack_1b8 = param_44;
  uStack_1c0 = param_43;
  uStack_1d8 = param_42;
  uStack_1e0 = param_41;
  uStack_1f8 = param_40;
  uStack_200 = param_39;
  uStack_208 = param_38;
  uStack_210 = param_37;
  uStack_218 = param_36;
  uStack_220 = param_35;
  uStack_228 = param_34;
  uStack_230 = param_33;
  uStack_238 = param_32;
  uStack_240 = param_31;
  uStack_248 = param_30;
  uStack_250 = param_29;
  uStack_258 = param_28;
  uStack_260 = param_27;
  uStack_268 = param_26;
  uStack_270 = param_25;
  uStack_278 = param_24;
  uStack_280 = param_23;
  uStack_288 = param_22;
  uStack_290 = param_21;
  uStack_298 = param_18;
  uStack_2a0 = param_17;
  uStack_2a8 = param_16;
  uStack_2b0 = param_15;
  uStack_2b8 = param_14;
  uStack_2c0 = param_13;
  lVar2 = *(long *)(in_stack_000002b8 + -8);
  lVar1 = *(long *)(lVar2 + 0x40);
  uStack_2c8 = param_12;
  uStack_2d0 = param_11;
  uStack_2d8 = param_10;
  uStack_2e0 = param_9;
  uStack_1e8 = in_stack_00000220;
  uStack_1c8 = param_4;
  uStack_1a8 = param_5;
  uStack_188 = param_6;
  uStack_168 = param_7;
  uStack_148 = param_8;
  uStack_a0 = in_stack_000001f0;
  uStack_98 = in_stack_000001f8;
  uStack_90 = in_stack_00000200;
  uStack_88 = in_stack_00000208;
  uStack_80 = in_stack_00000210;
  uStack_78 = in_stack_00000218;
  _swift_allocObject(in_stack_00000228,0x298,7);
  (**(code **)(lVar2 + 0x10))
            ((long)&uStack_2e0 - (lVar1 + 0xfU & 0xfffffffffffffff0),param_20,in_stack_000002b8);
  *(long *)(in_stack_00000228 + 0xc0) = in_stack_000002b8;
  *(undefined8 *)(in_stack_00000228 + 200) = in_stack_000002c0;
  func_0x0001000c5db4(in_stack_00000228 + 0xa8);
  (**(code **)(lVar2 + 0x20))();
  *(undefined8 *)(in_stack_00000228 + 0x58) = uStack_2d8;
  *(undefined8 *)(in_stack_00000228 + 0x50) = uStack_2e0;
  *(undefined8 *)(in_stack_00000228 + 0x68) = uStack_2c8;
  *(undefined8 *)(in_stack_00000228 + 0x60) = uStack_2d0;
  *(undefined8 *)(in_stack_00000228 + 0x10) = param_1;
  *(undefined8 *)(in_stack_00000228 + 0x18) = param_2;
  *(undefined8 *)(in_stack_00000228 + 0x20) = param_3;
  *(undefined8 *)(in_stack_00000228 + 0x28) = uStack_1c8;
  *(undefined8 *)(in_stack_00000228 + 0x30) = uStack_1a8;
  *(undefined8 *)(in_stack_00000228 + 0x38) = uStack_188;
  *(undefined8 *)(in_stack_00000228 + 0x40) = uStack_168;
  *(undefined8 *)(in_stack_00000228 + 0x48) = uStack_148;
  *(undefined8 *)(in_stack_00000228 + 0x78) = uStack_2b8;
  *(undefined8 *)(in_stack_00000228 + 0x70) = uStack_2c0;
  *(undefined8 *)(in_stack_00000228 + 0x88) = uStack_2a8;
  *(undefined8 *)(in_stack_00000228 + 0x80) = uStack_2b0;
  *(undefined8 *)(in_stack_00000228 + 0x98) = uStack_298;
  *(undefined8 *)(in_stack_00000228 + 0x90) = uStack_2a0;
  *(undefined8 *)(in_stack_00000228 + 0xa0) = param_19;
  *(undefined8 *)(in_stack_00000228 + 0xd8) = uStack_288;
  *(undefined8 *)(in_stack_00000228 + 0xd0) = uStack_290;
  *(undefined8 *)(in_stack_00000228 + 0xe8) = uStack_278;
  *(undefined8 *)(in_stack_00000228 + 0xe0) = uStack_280;
  *(undefined8 *)(in_stack_00000228 + 0xf8) = uStack_268;
  *(undefined8 *)(in_stack_00000228 + 0xf0) = uStack_270;
  *(undefined8 *)(in_stack_00000228 + 0x108) = uStack_258;
  *(undefined8 *)(in_stack_00000228 + 0x100) = uStack_260;
  *(undefined8 *)(in_stack_00000228 + 0x118) = uStack_248;
  *(undefined8 *)(in_stack_00000228 + 0x110) = uStack_250;
  *(undefined8 *)(in_stack_00000228 + 0x128) = uStack_238;
  *(undefined8 *)(in_stack_00000228 + 0x120) = uStack_240;
  *(undefined8 *)(in_stack_00000228 + 0x138) = uStack_228;
  *(undefined8 *)(in_stack_00000228 + 0x130) = uStack_230;
  *(undefined8 *)(in_stack_00000228 + 0x148) = uStack_218;
  *(undefined8 *)(in_stack_00000228 + 0x140) = uStack_220;
  *(undefined8 *)(in_stack_00000228 + 0x158) = uStack_208;
  *(undefined8 *)(in_stack_00000228 + 0x150) = uStack_210;
  *(undefined8 *)(in_stack_00000228 + 0x168) = uStack_1f8;
  *(undefined8 *)(in_stack_00000228 + 0x160) = uStack_200;
  *(undefined8 *)(in_stack_00000228 + 0x178) = uStack_1d8;
  *(undefined8 *)(in_stack_00000228 + 0x170) = uStack_1e0;
  *(undefined8 *)(in_stack_00000228 + 0x188) = uStack_1b8;
  *(undefined8 *)(in_stack_00000228 + 0x180) = uStack_1c0;
  *(undefined8 *)(in_stack_00000228 + 0x198) = uStack_198;
  *(undefined8 *)(in_stack_00000228 + 400) = uStack_1a0;
  *(undefined8 *)(in_stack_00000228 + 0x1a8) = uStack_178;
  *(undefined8 *)(in_stack_00000228 + 0x1a0) = uStack_180;
  *(undefined8 *)(in_stack_00000228 + 0x1b8) = uStack_158;
  *(undefined8 *)(in_stack_00000228 + 0x1b0) = uStack_160;
  *(undefined8 *)(in_stack_00000228 + 0x1c8) = uStack_138;
  *(undefined8 *)(in_stack_00000228 + 0x1c0) = uStack_140;
  *(undefined8 *)(in_stack_00000228 + 0x1d8) = uStack_128;
  *(undefined8 *)(in_stack_00000228 + 0x1d0) = uStack_130;
  *(undefined8 *)(in_stack_00000228 + 0x1e8) = uStack_118;
  *(undefined8 *)(in_stack_00000228 + 0x1e0) = uStack_120;
  *(undefined8 *)(in_stack_00000228 + 0x1f8) = uStack_108;
  *(undefined8 *)(in_stack_00000228 + 0x1f0) = uStack_110;
  *(undefined8 *)(in_stack_00000228 + 0x208) = uStack_f8;
  *(undefined8 *)(in_stack_00000228 + 0x200) = uStack_100;
  *(undefined8 *)(in_stack_00000228 + 0x218) = uStack_e8;
  *(undefined8 *)(in_stack_00000228 + 0x210) = uStack_f0;
  *(undefined8 *)(in_stack_00000228 + 0x228) = uStack_d8;
  *(undefined8 *)(in_stack_00000228 + 0x220) = uStack_e0;
  *(undefined8 *)(in_stack_00000228 + 0x238) = uStack_c8;
  *(undefined8 *)(in_stack_00000228 + 0x230) = uStack_d0;
  *(undefined8 *)(in_stack_00000228 + 0x248) = uStack_b8;
  *(undefined8 *)(in_stack_00000228 + 0x240) = uStack_c0;
  *(undefined8 *)(in_stack_00000228 + 600) = uStack_a8;
  *(undefined8 *)(in_stack_00000228 + 0x250) = uStack_b0;
  *(undefined8 *)(in_stack_00000228 + 0x268) = uStack_98;
  *(undefined8 *)(in_stack_00000228 + 0x260) = uStack_a0;
  *(undefined8 *)(in_stack_00000228 + 0x278) = uStack_88;
  *(undefined8 *)(in_stack_00000228 + 0x270) = uStack_90;
  *(undefined8 *)(in_stack_00000228 + 0x288) = uStack_78;
  *(undefined8 *)(in_stack_00000228 + 0x280) = uStack_80;
  *(undefined8 *)(in_stack_00000228 + 0x290) = uStack_1e8;
  return in_stack_00000228;
}



/* Entry: 1049af8bc; end: 1049af8e7;  */

void FUN_1049af8bc(void)

{
  _swift_getInitializedObjCClass(&PTR_PTR_1130a2ea8);
  return;
}



/* Entry: 1049af8e8; end: 1049afbcf;  */

void FUN_1049af8e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001049afbcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x20 + 0x2b0))(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



/* Entry: 1049afbd0; end: 1049afcbf;  */

void FUN_1049afbd0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  if (param_1 != 0) {
    _swift_unknownObjectRelease();
    _swift_unknownObjectRelease(param_2);
    _swift_unknownObjectRelease(param_4);
    _swift_unknownObjectRelease(param_5);
    _swift_unknownObjectRelease(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_7);
    return;
  }
  return;
}



/* Entry: 1049afcc0; end: 1049b0093;  */

void FUN_1049afcc0(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  FUN_1049b0094();
  _swift_getInitializedObjCClass(PTR_PTR_1126add30);
  lVar6 = *(long *)(unaff_x20 + 0x10);
  _objc_msgSend();
  func_0x0001049b019c();
  puVar1 = PTR_PTR_1126ae050;
  _swift_getInitializedObjCClass(PTR_PTR_1126ae050);
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  _objc_msgSend();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126addd8;
  _swift_getInitializedObjCClass(PTR_PTR_1126addd8);
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  _objc_msgSend();
  _objc_release(puVar1);
  FUN_1049b02c4();
  FUN_1049b03a8();
  _swift_getInitializedObjCClass(PTR_PTR_1126a5d98);
  _objc_msgSend();
  FUN_1049b040c();
  _swift_getInitializedObjCClass(PTR_PTR_1126adec8);
  _objc_msgSend();
  puVar1 = PTR_PTR_1126ade80;
  _swift_getInitializedObjCClass(PTR_PTR_1126ade80);
  uVar3 = *(undefined8 *)(lVar6 + 0x208);
  uVar2 = *(undefined8 *)(lVar6 + 0x18);
  _swift_getObjCClassFromMetadata(uVar2);
  _objc_msgSend(puVar1,PTR_s_configureWithSettings_currentAcc_1125253b8,uVar3,uVar2,
                *(undefined8 *)(lVar6 + 0x168));
  FUN_1049b04b8();
  _swift_getInitializedObjCClass(PTR_PTR_1126ae098);
  _objc_msgSend();
  FUN_1049b0584();
  puVar1 = PTR_PTR_1126add20;
  _swift_getInitializedObjCClass(PTR_PTR_1126add20);
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  _objc_msgSend();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126ade20;
  _swift_getInitializedObjCClass(PTR_PTR_1126ade20);
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  _objc_msgSend();
  _objc_release(puVar1);
  if (lRam000000011309ff00 != -1) {
    _swift_once(0x11309ff00,FUN_1049c0d3c);
  }
  uVar2 = uRam00000001130a34c0;
  uVar4 = *(undefined8 *)(lVar6 + 0x170);
  uVar5 = *(undefined8 *)(lVar6 + 0x208);
  uVar3 = uVar5;
  _swift_getObjectType(uVar5);
  _swift_unknownObjectRetain(uVar4);
  _swift_unknownObjectRetain(uVar5);
  FUN_1049c2ff8(uVar4,uVar5,uVar2,uVar3);
  _swift_unknownObjectRelease(uVar4);
  _swift_unknownObjectRelease(uVar5);
  FUN_1049b05e4();
  FUN_1049b06d0();
  FUN_1049b077c();
  FUN_1049b0838();
  _swift_getInitializedObjCClass(PTR_PTR_1126adfc0);
  _objc_msgSend();
  FUN_1049b0960();
  puVar1 = PTR_PTR_1126ae008;
  _swift_getInitializedObjCClass(PTR_PTR_1126ae008);
  uVar2 = *(undefined8 *)(lVar6 + 0x1e0);
  _swift_getObjCClassFromMetadata(uVar2);
  uVar5 = *(undefined8 *)(lVar6 + 0x200);
  uVar3 = *(undefined8 *)(lVar6 + 0x18);
  _swift_getObjCClassFromMetadata(uVar3);
  uVar4 = *(undefined8 *)(lVar6 + 0xa0);
  _swift_getObjCClassFromMetadata(uVar4);
  _objc_msgSend(puVar1,PTR_s_configureWithProfileSetter_sessi_1125253e0,uVar2,uVar5,uVar3,uVar4);
  _swift_getInitializedObjCClass(PTR_PTR_1126ae0a0);
  _objc_msgSend();
  FUN_1049b09c0();
  _swift_getInitializedObjCClass(PTR_PTR_1126ade68);
  _objc_msgSend();
  _swift_getInitializedObjCClass(PTR_PTR_1126adec0);
  _objc_msgSend();
  FUN_1049b0a48();
  func_0x0001049b0bf4();
  _swift_getInitializedObjCClass(PTR_PTR_1126ae0a8);
  _objc_msgSend();
  FUN_1049b0d54();
  puVar1 = PTR_PTR_1126adee8;
  _swift_getInitializedObjCClass(PTR_PTR_1126adee8);
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  _objc_msgSend();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1049b0094; end: 1049b02c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049b0094(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auStack_78 [24];
  
  if (lRam000000011309ff80 != -1) {
    _swift_once(0x11309ff80,FUN_1049e4894);
  }
  lVar7 = *(long *)(unaff_x20 + 0x10);
  uVar8 = *(undefined8 *)(lVar7 + 0x48);
  uVar9 = *(undefined8 *)(lVar7 + 0x1f8);
  uVar10 = *(undefined8 *)(lVar7 + 0xf8);
  uVar11 = *(undefined8 *)(lVar7 + 0x130);
  uVar12 = *(undefined8 *)(lVar7 + 0x180);
  puVar1 = (undefined8 *)(lRam00000001130a3c58 + _DAT_1130a3c60);
  _swift_beginAccess(puVar1,auStack_78,1,0);
  uVar2 = *puVar1;
  uVar4 = puVar1[1];
  uVar3 = puVar1[2];
  uVar5 = puVar1[3];
  uVar6 = puVar1[4];
  *puVar1 = uVar8;
  puVar1[1] = uVar9;
  puVar1[2] = uVar10;
  puVar1[3] = uVar11;
  puVar1[4] = uVar12;
  _swift_unknownObjectRetain(uVar8);
  _swift_unknownObjectRetain(uVar9);
  _swift_unknownObjectRetain(uVar10);
  _swift_unknownObjectRetain(uVar11);
  _swift_unknownObjectRetain(uVar12);
  func_0x0001049b0f84(uVar2,uVar4,uVar3,uVar5,uVar6);
  return;
}



/* Entry: 1049b02c4; end: 1049b03a7;  */

void FUN_1049b02c4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_PTR_1126adde0;
  _swift_getInitializedObjCClass();
  puVar2 = puVar1;
  FUN_1049fe5c8();
  _swift_allocObject();
  *(undefined8 *)(puVar2 + 0x18) = 9;
  *(undefined8 *)(puVar2 + 0x10) = 4;
  lVar4 = *(long *)(unaff_x20 + 0x10);
  *(undefined8 *)(puVar2 + 0x20) = *(undefined8 *)(lVar4 + 0x128);
  uVar5 = *(undefined8 *)(lVar4 + 0x280);
  *(undefined8 *)(puVar2 + 0x28) = uVar5;
  uVar6 = *(undefined8 *)(lVar4 + 0x1e8);
  *(undefined8 *)(puVar2 + 0x30) = uVar6;
  uVar7 = *(undefined8 *)(lVar4 + 0x288);
  *(undefined8 *)(puVar2 + 0x38) = uVar7;
  _swift_unknownObjectRetain();
  _swift_unknownObjectRetain(uVar5);
  _swift_unknownObjectRetain(uVar6);
  _swift_unknownObjectRetain(uVar7);
  uVar5 = 0x1130a3230;
  func_0x0001048db364(0x1130a3230);
  puVar3 = puVar2;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(puVar2,uVar5);
  _swift_bridgeObjectRelease(puVar2);
  _objc_msgSend(puVar1,PTR_s_setEventProcessors__112525478,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 1049b03a8; end: 1049b040b;  */

void FUN_1049b03a8(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ade48;
  _swift_getInitializedObjCClass(PTR_PTR_1126ade48);
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  _objc_msgSend();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1049b040c; end: 1049b04b7;  */

void FUN_1049b040c(void)

{
  code *pcVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_50 [24];
  undefined8 uStack_38;
  
  puVar3 = auStack_50;
  puVar2 = PTR_PTR_1126ae0b0;
  _swift_getInitializedObjCClass(PTR_PTR_1126ae0b0);
  lVar6 = *(long *)(unaff_x20 + 0x10);
  pcVar1 = *(code **)(lVar6 + 0x158);
  uVar4 = *(undefined8 *)(lVar6 + 0x160);
  _swift_retain(uVar4);
  (*pcVar1)(auStack_50);
  _swift_release(uVar4);
  func_0x0001006732c8(auStack_50,uStack_38);
  __ss27_bridgeAnythingToObjectiveCyyXlxlF();
  func_0x000100183ab8(auStack_50);
  uVar5 = *(undefined8 *)(lVar6 + 0x130);
  uVar4 = *(undefined8 *)(lVar6 + 0x18);
  _swift_getObjCClassFromMetadata(uVar4);
  _objc_msgSend(puVar2,PTR_s_configureWithApplicationActivati_112525468,puVar3,uVar5,uVar4);
  _swift_unknownObjectRelease(puVar3);
  return;
}



/* Entry: 1049b04b8; end: 1049b0583;  */

void FUN_1049b04b8(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  
  puVar1 = PTR_PTR_1126adf08;
  _swift_getInitializedObjCClass(PTR_PTR_1126adf08);
  lVar12 = *(long *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(lVar12 + 0x248);
  uVar4 = *(undefined8 *)(lVar12 + 0x110);
  uVar8 = *(undefined8 *)(lVar12 + 0x1d8);
  uVar9 = *(undefined8 *)(lVar12 + 0x208);
  uVar10 = *(undefined8 *)(lVar12 + 0x168);
  uVar11 = *(undefined8 *)(lVar12 + 0x130);
  uVar13 = *(undefined8 *)(lVar12 + 0x1c8);
  uVar6 = *(undefined8 *)(lVar12 + 0x1a8);
  uVar2 = *(undefined8 *)(lVar12 + 0x18);
  _swift_getObjCClassFromMetadata();
  uVar7 = *(undefined8 *)(lVar12 + 0x118);
  uVar3 = *(undefined8 *)(lVar12 + 0xa0);
  _swift_getObjCClassFromMetadata();
  _objc_msgSend(puVar1,PTR_s_configureWithURLSessionProxyFact_112525458,uVar5,uVar4,uVar8,uVar9,
                uVar10,uVar11,uVar13,uVar6,uVar2,uVar7,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d290)(puVar1,PTR_s_setCanMakeRequests_112525460);
  return;
}



/* Entry: 1049b0584; end: 1049b05e3;  */

void FUN_1049b0584(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae018;
  _swift_getInitializedObjCClass(PTR_PTR_1126ae018);
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  _objc_msgSend();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1049b05e4; end: 1049b06cf;  */

void FUN_1049b05e4(void)

{
  int iVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0xe,0,0);
  if (iVar1 != 0) {
    lVar7 = *(long *)(unaff_x20 + 0x10);
    uVar2 = *(undefined8 *)(lVar7 + 0x28);
    lVar3 = *(long *)(lVar7 + 0x208);
    _swift_unknownObjectRetain(uVar2);
    puVar5 = PTR_s_appID_11259ee40;
    _objc_msgSend(lVar3,PTR_s_appID_11259ee40);
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      lVar4 = 0;
      puVar5 = (undefined *)0x0;
    }
    else {
      lVar4 = lVar3;
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
      _objc_release(lVar3);
    }
    uVar6 = *(undefined8 *)(lVar7 + 0x210);
    func_0x000104934940(0);
    _swift_unknownObjectRetain(uVar6);
    FUN_104929ec0(uVar2,lVar4,puVar5,uVar6);
    _swift_unknownObjectRelease(uVar2);
    _swift_unknownObjectRelease(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(puVar5);
    return;
  }
  return;
}



/* Entry: 1049b06d0; end: 1049b077b;  */

void FUN_1049b06d0(void)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0xe,0,0);
  if (iVar1 != 0) {
    puVar2 = PTR_PTR_1126adda0;
    _swift_getInitializedObjCClass(PTR_PTR_1126adda0);
    _objc_msgSend();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = *(long *)(unaff_x20 + 0x10);
    uVar3 = *(undefined8 *)(lVar5 + 0x228);
    _swift_getObjCClassFromMetadata(uVar3);
    uVar4 = *(undefined8 *)(lVar5 + 0x30);
    _swift_getObjCClassFromMetadata(uVar4);
    _objc_msgSend(puVar2,PTR_s_configureWithSwizzler_aemReporte_112525448,uVar3,uVar4,
                  *(undefined8 *)(lVar5 + 0x130),*(undefined8 *)(lVar5 + 0xe0),
                  *(undefined8 *)(lVar5 + 0x138),*(undefined8 *)(lVar5 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 1049b077c; end: 1049b0837;  */

void FUN_1049b077c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  
  puVar3 = PTR_PTR_1126add60;
  _swift_getInitializedObjCClass(PTR_PTR_1126add60);
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(lVar9 + 0x1b0);
  uVar2 = *(undefined8 *)(lVar9 + 0x1b8);
  uVar7 = *(undefined8 *)(lVar9 + 0x210);
  uVar8 = *(undefined8 *)(lVar9 + 0x218);
  uVar4 = *(undefined8 *)(lVar9 + 0xd8);
  _swift_getObjCClassFromMetadata(uVar4);
  uVar5 = *(undefined8 *)(lVar9 + 0x228);
  _swift_getObjCClassFromMetadata(uVar5);
  uVar6 = *(undefined8 *)(lVar9 + 0x30);
  _swift_getObjCClassFromMetadata();
  _objc_msgSend(puVar3,PTR_s_configureNonTVComponentsWithOnDe_112525440,uVar2,uVar1,uVar7,uVar8,
                uVar4,uVar5,uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 1049b0838; end: 1049b095f;  */

void FUN_1049b0838(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auStack_78 [24];
  
  lVar9 = *(long *)(unaff_x20 + 0x10);
  uVar10 = *(undefined8 *)(lVar9 + 0x208);
  _swift_getObjectType(uVar10);
  uVar11 = *(undefined8 *)(lVar9 + 0x188);
  uVar12 = *(undefined8 *)(lVar9 + 0x70);
  uVar13 = *(undefined8 *)(lVar9 + 0x80);
  uVar5 = uVar10;
  uVar6 = uVar11;
  uVar7 = uVar12;
  uVar8 = uVar13;
  FUN_10499bb5c();
  _swift_beginAccess(0x113815800,auStack_78,1,0);
  uVar4 = uRam0000000113815818;
  uVar3 = uRam0000000113815810;
  uVar2 = uRam0000000113815808;
  uVar1 = uRam0000000113815800;
  uRam0000000113815800 = uVar5;
  uRam0000000113815808 = uVar6;
  uRam0000000113815810 = uVar7;
  uRam0000000113815818 = uVar8;
  _swift_unknownObjectRetain(uVar10);
  _swift_unknownObjectRetain(uVar11);
  _swift_unknownObjectRetain(uVar12);
  _swift_unknownObjectRetain(uVar13);
  _swift_unknownObjectRetain(uVar5);
  _swift_unknownObjectRetain(uVar6);
  _swift_unknownObjectRetain(uVar7);
  _swift_unknownObjectRetain(uVar8);
  func_0x00010499bbac(uVar1,uVar2,uVar3,uVar4);
  _swift_unknownObjectRelease(uVar8);
  _swift_unknownObjectRelease(uVar7);
  _swift_unknownObjectRelease(uVar6);
  _swift_unknownObjectRelease(uVar5);
  return;
}



/* Entry: 1049b0960; end: 1049b09bf;  */

void FUN_1049b0960(void)

{
  _swift_getInitializedObjCClass(PTR_PTR_1126ade00);
  _objc_msgSend();
  return;
}



/* Entry: 1049b09c0; end: 1049b0a47;  */

void FUN_1049b09c0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  puVar3 = PTR_PTR_1126ade40;
  _swift_getInitializedObjCClass(PTR_PTR_1126ade40);
  lVar7 = *(long *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(lVar7 + 0x1f8);
  uVar6 = *(undefined8 *)(lVar7 + 0xf8);
  uVar1 = *(undefined8 *)(lVar7 + 0x168);
  uVar2 = *(undefined8 *)(lVar7 + 0x170);
  uVar4 = *(undefined8 *)(lVar7 + 0x228);
  _swift_getObjCClassFromMetadata(uVar4);
  _objc_msgSend(puVar3,PTR_s_configureWithGraphRequestFactory_112525430,uVar2,uVar5,uVar6,uVar1,
                uVar4,*(undefined8 *)(lVar7 + 0x208),*(undefined8 *)(lVar7 + 0x20));
  return;
}



/* Entry: 1049b0a48; end: 1049b0d53;  */

void FUN_1049b0a48(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar13 = *(long *)(unaff_x20 + 0x10);
  uVar7 = *(undefined8 *)(lVar13 + 0x208);
  puVar1 = PTR_PTR_1126adf30;
  _swift_getInitializedObjCClass();
  _swift_unknownObjectRetain(uVar7);
  _objc_msgSend(puVar1,PTR_s_shared_1126687d0);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(lVar13 + 0x138);
  uVar10 = *(undefined8 *)(lVar13 + 0x170);
  uVar9 = *(undefined8 *)(lVar13 + 0x148);
  uVar8 = *(undefined8 *)(lVar13 + 0xf8);
  puVar2 = &UNK_1107bac38;
  _swift_allocObject(&UNK_1107bac38,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar7;
  pcStack_70 = FUN_1049b0f64;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_100f288c0;
  puStack_78 = &UNK_1107bac50;
  ppuVar3 = &puStack_90;
  puStack_68 = puVar2;
  __Block_copy(ppuVar3);
  puVar2 = puStack_68;
  _swift_unknownObjectRetain(uVar7);
  _swift_unknownObjectRetain(uVar11);
  _swift_unknownObjectRetain(uVar10);
  _swift_unknownObjectRetain(uVar9);
  _swift_unknownObjectRetain(uVar8);
  _swift_release(puVar2);
  uVar4 = *(undefined8 *)(lVar13 + 0xf0);
  _swift_getObjCClassFromMetadata(uVar4);
  uVar5 = *(undefined8 *)(lVar13 + 0x150);
  _swift_getObjCClassFromMetadata();
  uVar12 = *(undefined8 *)(lVar13 + 0x220);
  uVar6 = *(undefined8 *)(lVar13 + 0x140);
  _swift_getObjCClassFromMetadata();
  _objc_msgSend(puVar1,PTR_s_configureWithFeatureChecker_grap_112525428,uVar11,uVar10,uVar9,uVar8,
                ppuVar3,uVar4,uVar5,uVar12,uVar6);
  __Block_release(ppuVar3);
  _swift_unknownObjectRelease(uVar7);
  _objc_release(puVar1);
  _swift_unknownObjectRelease(uVar11);
  _swift_unknownObjectRelease(uVar10);
  _swift_unknownObjectRelease(uVar9);
  _swift_unknownObjectRelease(uVar8);
  return;
}



/* Entry: 1049b0d54; end: 1049b0e0f;  */

void FUN_1049b0d54(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x20;
  long lVar3;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  _objc_msgSend(*(undefined8 *)(lVar3 + 400),PTR_s_validateDomainConfiguration_112525410);
  puVar1 = PTR_PTR_1126add50;
  _swift_getInitializedObjCClass(PTR_PTR_1126add50);
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ade78;
  _swift_getInitializedObjCClass(PTR_PTR_1126ade78);
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(puVar1,PTR_s_configureWithGraphRequestFactory_112525418,puVar2,
                *(undefined8 *)(lVar3 + 0x208),*(undefined8 *)(lVar3 + 0xf8),
                *(undefined8 *)(lVar3 + 0x170),*(undefined8 *)(lVar3 + 0x168));
  _objc_release(puVar1);
  _objc_release(puVar2);
  _swift_getInitializedObjCClass(PTR_PTR_1126ade70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d290)();
  return;
}



/* Entry: 1049b0e10; end: 1049b0e4f;  */

void FUN_1049b0e10(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1049b0e50; end: 1049b0e6f;  */

void FUN_1049b0e50(void)

{
  FUN_1049afcc0();
  return;
}



/* Entry: 1049b0e70; end: 1049b0ed3;  */

undefined1  [16] FUN_1049b0e70(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined1 auVar3 [16];
  
  puVar2 = PTR_s_appID_11259ee40;
  _objc_msgSend(param_1,PTR_s_appID_11259ee40);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar1 = 0;
    puVar2 = (undefined *)0xe000000000000000;
  }
  else {
    lVar1 = param_1;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(param_1);
  }
  auVar3._8_8_ = puVar2;
  auVar3._0_8_ = lVar1;
  return auVar3;
}



/* Entry: 1049b0ed4; end: 1049b0eff;  */

void FUN_1049b0ed4(void)

{
  _swift_getInitializedObjCClass(&PTR_PTR_1130a31d0);
  return;
}



/* Entry: 1049b0f00; end: 1049b0f07;  */

void FUN_1049b0f00(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001049b0f04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x20 + 0x58))();
  return;
}



/* Entry: 1049b0f08; end: 1049b0f63;  */

void FUN_1049b0f08(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  if (param_1 != 0) {
    _swift_unknownObjectRelease(param_2);
    _swift_unknownObjectRelease(param_3);
    _swift_unknownObjectRelease(param_4);
    _swift_unknownObjectRelease(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_6);
    return;
  }
  return;
}



/* Entry: 1049b0f64; end: 1049b0f6b;  */

undefined1  [16] FUN_1049b0f64(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined1 auVar4 [16];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  puVar3 = PTR_s_appID_11259ee40;
  _objc_msgSend(lVar1,PTR_s_appID_11259ee40);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar2 = 0;
    puVar3 = (undefined *)0xe000000000000000;
  }
  else {
    lVar2 = lVar1;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(lVar1);
  }
  auVar4._8_8_ = puVar3;
  auVar4._0_8_ = lVar2;
  return auVar4;
}



/* Entry: 1049b0f6c; end: 1049b0fdb;  */

void FUN_1049b0f6c(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1049b0fdc; end: 1049b0fe3;  */

void FUN_1049b0fdc(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001049b0fe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 8))();
  return;
}



/* Entry: 1049b0fe4; end: 1049b101b;  */

void FUN_1049b0fe4(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  _swift_getInitializedObjCClass();
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  puRam00000001130a3238 = puVar1;
  return;
}



/* Entry: 1049b101c; end: 1049b105b;  */

void FUN_1049b101c(void)

{
  if (lRam000000011309fed8 != -1) {
    _swift_once(0x11309fed8,FUN_1049b0fe4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRetain_11034f540)(uRam00000001130a3238);
  return;
}



/* Entry: 1049b105c; end: 1049b10f3; +[_TtC12FBSDKCoreKit17CoreUIApplication shared] */

void FUN_1049b105c(void)

{
  if (lRam000000011309fed8 != -1) {
    _swift_once(0x11309fed8,FUN_1049b0fe4);
  }
  _swift_unknownObjectRetain(uRam00000001130a3238);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1049b10f4; end: 1049b112f; -[_TtC12FBSDKCoreKit17CoreUIApplication init] */

void FUN_1049b10f4(undefined8 param_1)

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



/* Entry: 1049b1130; end: 1049b1163;  */

void FUN_1049b1130(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1049b1164; end: 1049b1187; -[_TtC12FBSDKCoreKit17CoreUIApplication .cxx_destruct] */

void FUN_1049b1164(void)

{
  return;
}



/* Entry: 1049b1188; end: 1049b1363;  */

void FUN_1049b1188(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  long lVar11;
  long lVar12;
  undefined8 uStack_70;
  
  lVar1 = 0xff;
  uStack_70 = param_1;
  _swift_getAssociatedTypeWitness(0xff,param_3,param_2,&UNK_10e8267a4,&UNK_10e8267ac);
  lVar2 = 0;
  __sSqMa(0,lVar1);
  lVar9 = *(long *)(lVar2 + -8);
  uVar7 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar12 = (long)&uStack_70 - uVar7;
  lVar11 = lVar12 - uVar7;
  (**(code **)(param_3 + 0x10))(lVar12,param_2,param_3);
  lVar8 = *(long *)(lVar1 + -8);
  pcVar10 = *(code **)(lVar8 + 0x30);
  lVar3 = lVar12;
  (*pcVar10)(lVar12,1,lVar1);
  if ((int)lVar3 == 1) {
    (**(code **)(param_3 + 0x28))(lVar11,param_2,param_3);
    lVar3 = lVar12;
    (*pcVar10)(lVar12,1,lVar1);
    if ((int)lVar3 != 1) {
      (**(code **)(lVar9 + 8))(lVar12,lVar2);
    }
  }
  else {
    (**(code **)(lVar8 + 0x20))(lVar11,lVar12,lVar1);
    (**(code **)(lVar8 + 0x38))(lVar11,0,1,lVar1);
  }
  lVar3 = lVar11;
  (*pcVar10)(lVar11,1,lVar1);
  if ((int)lVar3 == 1) {
    (**(code **)(lVar9 + 8))(lVar11,lVar2);
    uVar4 = param_2;
    FUN_1049cd5ac(param_2,param_2);
    uVar5 = 0;
    func_0x0001049cd704(0,param_2);
    puVar6 = (undefined8 *)&UNK_10dd4ae70;
    _swift_getWitnessTable(&UNK_10dd4ae70,uVar5);
    _swift_allocError(uVar5,puVar6,0,0);
    *puVar6 = uVar4;
    _swift_willThrow();
  }
  else {
    (**(code **)(lVar8 + 0x20))(uStack_70,lVar11,lVar1);
  }
  return;
}



/* Entry: 1049b1364; end: 1049b136f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049b1364(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130a2de0;
  uVar2 = *param_1;
  _swift_beginAccess(unaff_x20 + _DAT_1130a2de0,auStack_48,1,0);
  uVar3 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = uVar2;
  _swift_unknownObjectRetain(uVar2);
  _swift_unknownObjectRelease(uVar3);
  return;
}



/* Entry: 1049b1370; end: 1049b143b;  */

void FUN_1049b1370(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  
  lVar1 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,param_3,param_2,&UNK_10e8267a4,&UNK_10e8267ac);
  lVar2 = 0;
  __sSqMa(0,lVar1);
  puVar3 = &stack0xffffffffffffffb0 +
           -(*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = *(long *)(lVar1 + -8);
  (**(code **)(lVar2 + 0x10))(puVar3,param_1,lVar1);
  (**(code **)(lVar2 + 0x38))(puVar3,0,1,lVar1);
  (**(code **)(param_3 + 0x18))(puVar3,param_2,param_3);
  return;
}



/* Entry: 1049b143c; end: 1049b151f;  */

/* WARNING: Removing unreachable block (ram,0x0001049b14ac) */

void FUN_1049b143c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_70 [16];
  
  puVar1 = PTR___ss7KeyPathCMo_11034f0c8;
  lVar4 = *param_2;
  lVar2 = *(long *)(lVar4 + *(long *)PTR___ss7KeyPathCMo_11034f0c8);
  lVar5 = *(long *)(lVar2 + -8);
  puVar3 = auStack_70 + -(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_1049b1188(puVar3,param_3,param_4);
  _swift_getAtKeyPath(param_1,puVar3,param_2);
  (**(code **)(lVar5 + 8))(puVar3,lVar2);
  (**(code **)(*(long *)(*(long *)(lVar4 + *(long *)puVar1 + 8) + -8) + 0x38))(param_1,0,1);
  return;
}



/* Entry: 1049b1520; end: 1049b1547;  */

void FUN_1049b1520(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001049b1524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 0x10))();
  return;
}



/* Entry: 1049b1548; end: 1049b159f;  */

void FUN_1049b1548(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  uVar1 = *param_1;
  _swift_beginAccess(unaff_x20 + 0x28,auStack_48,1,0);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar1;
  _swift_unknownObjectRetain(uVar1);
  _swift_unknownObjectRelease(uVar2);
  return;
}



/* Entry: 1049b15a0; end: 1049b1647;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049b15a0(undefined8 *param_1)

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
  long unaff_x20;
  undefined1 auStack_78 [24];
  
  uVar2 = *param_1;
  uVar6 = param_1[1];
  uVar3 = param_1[2];
  uVar7 = param_1[3];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130a35c0);
  _swift_beginAccess(puVar1,auStack_78,1,0);
  uVar4 = *puVar1;
  uVar8 = puVar1[1];
  uVar5 = puVar1[2];
  uVar9 = puVar1[3];
  *puVar1 = uVar2;
  puVar1[1] = uVar6;
  puVar1[2] = uVar3;
  puVar1[3] = uVar7;
  _swift_unknownObjectRetain(uVar6);
  _swift_unknownObjectRetain(uVar3);
  _swift_unknownObjectRetain(uVar7);
  func_0x0001049b18f4(uVar4,uVar8,uVar5,uVar9);
  return;
}



/* Entry: 1049b1648; end: 1049b16e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049b1648(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_68 [24];
  
  uVar2 = *param_1;
  uVar4 = param_1[1];
  uVar6 = param_1[2];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130a3768);
  _swift_beginAccess(puVar1,auStack_68,1,0);
  uVar3 = *puVar1;
  uVar5 = puVar1[1];
  uVar7 = puVar1[2];
  *puVar1 = uVar2;
  puVar1[1] = uVar4;
  puVar1[2] = uVar6;
  _swift_unknownObjectRetain(uVar2);
  _swift_unknownObjectRetain(uVar4);
  _swift_unknownObjectRetain(uVar6);
  FUN_1049b18bc(uVar3,uVar5,uVar7);
  return;
}



/* Entry: 1049b16e4; end: 1049b1707;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049b16e4(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130a3a48;
  uVar2 = *param_1;
  _swift_beginAccess(unaff_x20 + _DAT_1130a3a48,auStack_48,1,0);
  uVar3 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = uVar2;
  _swift_unknownObjectRetain(uVar2);
  _swift_unknownObjectRelease(uVar3);
  return;
}



/* Entry: 1049b1708; end: 1049b1763;  */

void FUN_1049b1708(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_48 [24];
  
  uVar1 = *param_1;
  lVar3 = *param_4;
  _swift_beginAccess(unaff_x20 + lVar3,auStack_48,1,0);
  uVar2 = *(undefined8 *)(unaff_x20 + lVar3);
  *(undefined8 *)(unaff_x20 + lVar3) = uVar1;
  _swift_unknownObjectRetain(uVar1);
  _swift_unknownObjectRelease(uVar2);
  return;
}



/* Entry: 1049b1764; end: 1049b182f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049b1764(undefined8 *param_1)

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
  long unaff_x20;
  undefined8 uVar11;
  undefined1 auStack_78 [24];
  
  uVar2 = *param_1;
  uVar6 = param_1[1];
  uVar3 = param_1[2];
  uVar7 = param_1[3];
  uVar11 = param_1[4];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130a3c60);
  _swift_beginAccess(puVar1,auStack_78,1,0);
  uVar4 = *puVar1;
  uVar8 = puVar1[1];
  uVar5 = puVar1[2];
  uVar9 = puVar1[3];
  uVar10 = puVar1[4];
  *puVar1 = uVar2;
  puVar1[1] = uVar6;
  puVar1[2] = uVar3;
  puVar1[3] = uVar7;
  puVar1[4] = uVar11;
  _swift_unknownObjectRetain(uVar2);
  _swift_unknownObjectRetain(uVar6);
  _swift_unknownObjectRetain(uVar3);
  _swift_unknownObjectRetain(uVar7);
  _swift_unknownObjectRetain(uVar11);
  func_0x0001049b0f84(uVar4,uVar8,uVar5,uVar9,uVar10);
  return;
}



/* Entry: 1049b1830; end: 1049b18bb;  */

void FUN_1049b1830(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [24];
  
  uVar1 = *param_1;
  uVar3 = param_1[1];
  uVar5 = param_1[2];
  _swift_beginAccess(unaff_x20 + 0x10,auStack_68,1,0);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x18) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x20) = uVar5;
  _swift_unknownObjectRetain(uVar1);
  _swift_unknownObjectRetain(uVar3);
  _swift_unknownObjectRetain(uVar5);
  FUN_1049b18bc(uVar2,uVar4,uVar6);
  return;
}



/* Entry: 1049b18bc; end: 1049b192f;  */

void FUN_1049b18bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (param_1 != 0) {
    _swift_unknownObjectRelease();
    _swift_unknownObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_3);
    return;
  }
  return;
}



/* Entry: 1049b1930; end: 1049b1a13;  */

/* WARNING: Removing unreachable block (ram,0x0001049b19a0) */

void FUN_1049b1930(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_70 [16];
  
  puVar1 = PTR___ss7KeyPathCMo_11034f0c8;
  lVar4 = *param_2;
  lVar2 = *(long *)(lVar4 + *(long *)PTR___ss7KeyPathCMo_11034f0c8);
  lVar5 = *(long *)(lVar2 + -8);
  puVar3 = auStack_70 + -(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_1049b1a14(puVar3,param_3,param_4);
  _swift_getAtKeyPath(param_1,puVar3,param_2);
  (**(code **)(lVar5 + 8))(puVar3,lVar2);
  (**(code **)(*(long *)(*(long *)(lVar4 + *(long *)puVar1 + 8) + -8) + 0x38))(param_1,0,1);
  return;
}



/* Entry: 1049b1a14; end: 1049b1bef;  */

void FUN_1049b1a14(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  long lVar11;
  long lVar12;
  undefined8 uStack_70;
  
  lVar1 = 0xff;
  uStack_70 = param_1;
  _swift_getAssociatedTypeWitness(0xff,param_3,param_2,&UNK_10e8267ec,&UNK_10e8267f4);
  lVar2 = 0;
  __sSqMa(0,lVar1);
  lVar9 = *(long *)(lVar2 + -8);
  uVar7 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar12 = (long)&uStack_70 - uVar7;
  lVar11 = lVar12 - uVar7;
  (**(code **)(param_3 + 0x10))(lVar12,param_2,param_3);
  lVar8 = *(long *)(lVar1 + -8);
  pcVar10 = *(code **)(lVar8 + 0x30);
  lVar3 = lVar12;
  (*pcVar10)(lVar12,1,lVar1);
  if ((int)lVar3 == 1) {
    (**(code **)(param_3 + 0x28))(lVar11,param_2,param_3);
    lVar3 = lVar12;
    (*pcVar10)(lVar12,1,lVar1);
    if ((int)lVar3 != 1) {
      (**(code **)(lVar9 + 8))(lVar12,lVar2);
    }
  }
  else {
    (**(code **)(lVar8 + 0x20))(lVar11,lVar12,lVar1);
    (**(code **)(lVar8 + 0x38))(lVar11,0,1,lVar1);
  }
  lVar3 = lVar11;
  (*pcVar10)(lVar11,1,lVar1);
  if ((int)lVar3 == 1) {
    (**(code **)(lVar9 + 8))(lVar11,lVar2);
    uVar4 = param_2;
    FUN_1049cd5ac(param_2,param_2);
    uVar5 = 0;
    func_0x0001049cd704(0,param_2);
    puVar6 = (undefined8 *)&UNK_10dd4ae70;
    _swift_getWitnessTable(&UNK_10dd4ae70,uVar5);
    _swift_allocError(uVar5,puVar6,0,0);
    *puVar6 = uVar4;
    _swift_willThrow();
  }
  else {
    (**(code **)(lVar8 + 0x20))(uStack_70,lVar11,lVar1);
  }
  return;
}



/* Entry: 1049b1bf0; end: 1049b1cbb;  */

void FUN_1049b1bf0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  
  lVar1 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,param_3,param_2,&UNK_10e8267ec,&UNK_10e8267f4);
  lVar2 = 0;
  __sSqMa(0,lVar1);
  puVar3 = &stack0xffffffffffffffb0 +
           -(*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = *(long *)(lVar1 + -8);
  (**(code **)(lVar2 + 0x10))(puVar3,param_1,lVar1);
  (**(code **)(lVar2 + 0x38))(puVar3,0,1,lVar1);
  (**(code **)(param_3 + 0x18))(puVar3,param_2,param_3);
  return;
}


