/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1049e6dd0; end: 1049e6e1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049e6dd0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130a3cc0);
  _swift_beginAccess(puVar1,auStack_48,1,0);
  uVar2 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Entry: 1049e6e20; end: 1049e6e5f; -[FBSDKSettings displayName] */

void FUN_1049e6e20(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = lRam000000011309ff58;
  _objc_retain();
  if (lVar2 != -1) {
    _swift_once(0x11309ff58,FUN_1049e2f38);
  }
  uVar1 = (ulong)bRam0000000113815960;
  lVar2 = lRam0000000113815968;
  FUN_1049e30b0(uVar1);
  _objc_release(param_1);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1,lVar2);
    _swift_bridgeObjectRelease(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1049e6e60; end: 1049e6e9f; -[FBSDKSettings setDisplayName:] */

void FUN_1049e6e60(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  lVar1 = lRam000000011309ff58;
  _objc_retain();
  if (lVar1 != -1) {
    _swift_once(0x11309ff58,FUN_1049e2f38);
  }
  uVar2 = uRam0000000113815968;
  lStack_58 = param_3;
  uStack_50 = param_2;
  uStack_48 = param_1;
  _objc_retain();
  _swift_setAtReferenceWritableKeyPath(&uStack_48,uVar2,&lStack_58);
  _objc_release(param_1);
  FUN_1049e2748();
  _objc_release(param_1);
  return;
}



/* Entry: 1049e6ea0; end: 1049e6f3f;  */

undefined1  [16] FUN_1049e6ea0(long *param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong unaff_x20;
  undefined1 auVar4 [16];
  
  puVar1 = (ulong *)0x38;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    _malloc();
  }
  else {
    _swift_coroFrameAlloc(0x38,0x9221);
  }
  *param_1 = (long)puVar1;
  puVar1[5] = unaff_x20;
  if (lRam000000011309ff58 != -1) {
    _swift_once(0x11309ff58,FUN_1049e2f38);
  }
  uVar3 = uRam0000000113815968;
  puVar1[6] = uRam0000000113815968;
  uVar2 = (ulong)bRam0000000113815960;
  FUN_1049e30b0();
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  auVar4._8_8_ = puVar1;
  auVar4._0_8_ = 0x1049eaf2c;
  return auVar4;
}



/* Entry: 1049e6f40; end: 1049e6f4b; -[FBSDKSettings _displayName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049e6f40(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_1130a3cc8);
  _swift_beginAccess(puVar1,auStack_38,0,0);
  lVar2 = puVar1[1];
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
    _swift_bridgeObjectRetain(lVar2);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3,lVar2);
    _swift_bridgeObjectRelease(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1049e6f4c; end: 1049e6f57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1049e6f4c(void)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + _DAT_1130a3cc8);
  _swift_beginAccess(pauVar1,auStack_38,0,0);
  auVar2 = *pauVar1;
  _swift_bridgeObjectRetain(*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Entry: 1049e6f58; end: 1049e6f63; -[FBSDKSettings set_displayName:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049e6f58(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_1130a3cc8);
  _swift_beginAccess(plVar1,auStack_48,1,0);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  _swift_bridgeObjectRelease(lVar2);
  return;
}



/* Entry: 1049e6f64; end: 1049e6faf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049e6f64(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130a3cc8);
  _swift_beginAccess(puVar1,auStack_48,1,0);
  uVar2 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Entry: 1049e6fb0; end: 1049e6fcf; -[FBSDKSettings facebookDomainPart] */

void FUN_1049e6fb0(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = lRam000000011309ff60;
  _objc_retain();
  if (lVar2 != -1) {
    _swift_once(0x11309ff60,FUN_1049e2fc8);
  }
  uVar1 = (ulong)bRam0000000113815970;
  lVar2 = lRam0000000113815978;
  FUN_1049e30b0(uVar1);
  _objc_release(param_1);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1,lVar2);
    _swift_bridgeObjectRelease(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1049e6fd0; end: 1049e706f;  */

void FUN_1049e6fd0(undefined8 param_1,undefined8 param_2,long *param_3,byte *param_4,long *param_5,
                  undefined8 param_6)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = *param_3;
  _objc_retain();
  if (lVar2 != -1) {
    _swift_once(param_3,param_6);
  }
  lVar2 = *param_5;
  uVar1 = (ulong)*param_4;
  FUN_1049e30b0(uVar1);
  _objc_release(param_1);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1,lVar2);
    _swift_bridgeObjectRelease(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1049e7070; end: 1049e708f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1049e7070(void)

{
  long lVar1;
  byte bVar2;
  undefined8 uVar3;
  code *pcVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long unaff_x20;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined1 auVar15 [16];
  long lStack_108;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  if (lRam000000011309ff60 != -1) {
    _swift_once(0x11309ff60,FUN_1049e2fc8);
  }
  uVar3 = uRam0000000113815978;
  bVar2 = bRam0000000113815970;
  lStack_e0 = unaff_x20;
  _objc_retain();
  pcVar4 = (code *)&lStack_90;
  plVar6 = &lStack_e0;
  _swift_readAtKeyPath(pcVar4,plVar6,uVar3);
  lVar9 = *plVar6;
  lVar10 = plVar6[1];
  _swift_bridgeObjectRetain(lVar10);
  (*pcVar4)(&lStack_90,0);
  _objc_release(unaff_x20);
  if (lVar10 == 0) {
    plVar6 = (long *)(unaff_x20 + _DAT_1130a3c60);
    _swift_beginAccess(plVar6,auStack_a8,0,0);
    lVar9 = *plVar6;
    lVar7 = plVar6[1];
    lVar10 = plVar6[2];
    lVar1 = plVar6[3];
    lVar8 = plVar6[4];
    lVar11 = lVar10;
    lVar12 = lVar1;
    lVar13 = lVar8;
    lVar14 = lVar9;
    lStack_108 = lVar7;
    if (lVar9 == 0) {
      plVar6 = (long *)(unaff_x20 + _DAT_1130a3c68);
      _swift_beginAccess(plVar6,auStack_c0,0,0);
      lVar14 = *plVar6;
      if (lVar14 == 0) {
        lVar9 = 0;
        lVar10 = 0;
        goto LAB_1049e332c;
      }
      lVar12 = plVar6[3];
      lVar13 = plVar6[4];
      lStack_108 = plVar6[1];
      lVar11 = plVar6[2];
      _swift_unknownObjectRetain(lVar14);
      _swift_unknownObjectRetain(lStack_108);
      _swift_unknownObjectRetain(lVar11);
      _swift_unknownObjectRetain(lVar12);
      _swift_unknownObjectRetain(lVar13);
    }
    _swift_unknownObjectRetain(lVar13);
    FUN_1049e1a74(lVar9,lVar7,lVar10,lVar1,lVar8);
    _swift_unknownObjectRelease(lVar13);
    _swift_unknownObjectRelease(lVar12);
    _swift_unknownObjectRelease(lVar11);
    _swift_unknownObjectRelease(lStack_108);
    _swift_unknownObjectRelease(lVar14);
    uVar5 = (ulong)bVar2;
    func_0x0001049e3e50(uVar5);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
    _swift_bridgeObjectRelease(lVar7);
    lVar9 = lVar13;
    _objc_msgSend(lVar13,PTR_s_fb_objectForInfoDictionaryKey__1125c5f58,uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    if (lVar9 == 0) {
      uStack_d8 = 0;
      lStack_e0 = 0;
      lStack_c8 = 0;
      uStack_d0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&lStack_e0,lVar9);
      _swift_unknownObjectRelease(lVar9);
    }
    lStack_88 = uStack_d8;
    lStack_90 = lStack_e0;
    lStack_78 = lStack_c8;
    uStack_80 = uStack_d0;
    if (lStack_c8 == 0) {
      func_0x00010006e7f4(&lStack_90);
      lVar9 = 0;
      lVar10 = 0;
    }
    else {
      plVar6 = &lStack_f0;
      _swift_dynamicCast(plVar6,&lStack_90,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
      lVar9 = lStack_f0;
      lVar10 = lStack_e8;
      if ((int)plVar6 == 0) {
        lVar9 = 0;
        lVar10 = 0;
      }
    }
    lStack_90 = lVar9;
    lStack_88 = lVar10;
    _swift_bridgeObjectRetain(lVar10);
    _objc_retain(unaff_x20);
    _swift_setAtReferenceWritableKeyPath(&lStack_e0,uVar3,&lStack_90);
    _objc_release(unaff_x20);
    _swift_unknownObjectRelease(lVar13);
  }
LAB_1049e332c:
  auVar15._8_8_ = lVar10;
  auVar15._0_8_ = lVar9;
  return auVar15;
}



/* Entry: 1049e7090; end: 1049e70e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1049e7090(long *param_1,byte *param_2,undefined8 *param_3,undefined8 param_4)

{
  long lVar1;
  byte bVar2;
  code *pcVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x20;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined1 auVar15 [16];
  long lStack_108;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  if (*param_1 != -1) {
    _swift_once(param_1,param_4);
  }
  uVar7 = *param_3;
  bVar2 = *param_2;
  lStack_e0 = unaff_x20;
  _objc_retain();
  pcVar3 = (code *)&lStack_90;
  plVar5 = &lStack_e0;
  _swift_readAtKeyPath(pcVar3,plVar5,uVar7);
  lVar9 = *plVar5;
  lVar10 = plVar5[1];
  _swift_bridgeObjectRetain(lVar10);
  (*pcVar3)(&lStack_90,0);
  _objc_release(unaff_x20);
  if (lVar10 == 0) {
    plVar5 = (long *)(unaff_x20 + _DAT_1130a3c60);
    _swift_beginAccess(plVar5,auStack_a8,0,0);
    lVar9 = *plVar5;
    lVar6 = plVar5[1];
    lVar10 = plVar5[2];
    lVar1 = plVar5[3];
    lVar8 = plVar5[4];
    lVar11 = lVar10;
    lVar12 = lVar1;
    lVar13 = lVar8;
    lVar14 = lVar9;
    lStack_108 = lVar6;
    if (lVar9 == 0) {
      plVar5 = (long *)(unaff_x20 + _DAT_1130a3c68);
      _swift_beginAccess(plVar5,auStack_c0,0,0);
      lVar14 = *plVar5;
      if (lVar14 == 0) {
        lVar9 = 0;
        lVar10 = 0;
        goto LAB_1049e332c;
      }
      lVar12 = plVar5[3];
      lVar13 = plVar5[4];
      lStack_108 = plVar5[1];
      lVar11 = plVar5[2];
      _swift_unknownObjectRetain(lVar14);
      _swift_unknownObjectRetain(lStack_108);
      _swift_unknownObjectRetain(lVar11);
      _swift_unknownObjectRetain(lVar12);
      _swift_unknownObjectRetain(lVar13);
    }
    _swift_unknownObjectRetain(lVar13);
    FUN_1049e1a74(lVar9,lVar6,lVar10,lVar1,lVar8);
    _swift_unknownObjectRelease(lVar13);
    _swift_unknownObjectRelease(lVar12);
    _swift_unknownObjectRelease(lVar11);
    _swift_unknownObjectRelease(lStack_108);
    _swift_unknownObjectRelease(lVar14);
    uVar4 = (ulong)bVar2;
    func_0x0001049e3e50(uVar4);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
    _swift_bridgeObjectRelease(lVar6);
    lVar9 = lVar13;
    _objc_msgSend(lVar13,PTR_s_fb_objectForInfoDictionaryKey__1125c5f58,uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    if (lVar9 == 0) {
      uStack_d8 = 0;
      lStack_e0 = 0;
      lStack_c8 = 0;
      uStack_d0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&lStack_e0,lVar9);
      _swift_unknownObjectRelease(lVar9);
    }
    lStack_88 = uStack_d8;
    lStack_90 = lStack_e0;
    lStack_78 = lStack_c8;
    uStack_80 = uStack_d0;
    if (lStack_c8 == 0) {
      func_0x00010006e7f4(&lStack_90);
      lVar9 = 0;
      lVar10 = 0;
    }
    else {
      plVar5 = &lStack_f0;
      _swift_dynamicCast(plVar5,&lStack_90,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
      lVar9 = lStack_f0;
      lVar10 = lStack_e8;
      if ((int)plVar5 == 0) {
        lVar9 = 0;
        lVar10 = 0;
      }
    }
    lStack_90 = lVar9;
    lStack_88 = lVar10;
    _swift_bridgeObjectRetain(lVar10);
    _objc_retain(unaff_x20);
    _swift_setAtReferenceWritableKeyPath(&lStack_e0,uVar7,&lStack_90);
    _objc_release(unaff_x20);
    _swift_unknownObjectRelease(lVar13);
  }
LAB_1049e332c:
  auVar15._8_8_ = lVar10;
  auVar15._0_8_ = lVar9;
  return auVar15;
}



/* Entry: 1049e70e4; end: 1049e7103; -[FBSDKSettings setFacebookDomainPart:] */

void FUN_1049e70e4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  lVar1 = lRam000000011309ff60;
  _objc_retain();
  if (lVar1 != -1) {
    _swift_once(0x11309ff60,FUN_1049e2fc8);
  }
  uVar2 = uRam0000000113815978;
  lStack_58 = param_3;
  uStack_50 = param_2;
  uStack_48 = param_1;
  _objc_retain();
  _swift_setAtReferenceWritableKeyPath(&uStack_48,uVar2,&lStack_58);
  _objc_release(param_1);
  FUN_1049e2748();
  _objc_release(param_1);
  return;
}



/* Entry: 1049e7104; end: 1049e71c7;  */

void FUN_1049e7104(undefined8 param_1,undefined8 param_2,long param_3,long *param_4,
                  undefined8 *param_5,undefined8 param_6)

{
  undefined8 uVar1;
  long lVar2;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  lVar2 = *param_4;
  _objc_retain();
  if (lVar2 != -1) {
    _swift_once(param_4,param_6);
  }
  uVar1 = *param_5;
  lStack_58 = param_3;
  uStack_50 = param_2;
  uStack_48 = param_1;
  _objc_retain();
  _swift_setAtReferenceWritableKeyPath(&uStack_48,uVar1,&lStack_58);
  _objc_release(param_1);
  FUN_1049e2748();
  _objc_release(param_1);
  return;
}



/* Entry: 1049e71c8; end: 1049e71e7;  */

void FUN_1049e71c8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 unaff_x20;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  if (lRam000000011309ff60 != -1) {
    _swift_once(0x11309ff60,FUN_1049e2fc8);
  }
  uVar1 = uRam0000000113815978;
  uStack_48 = param_1;
  uStack_40 = param_2;
  _objc_retain();
  _swift_setAtReferenceWritableKeyPath(&stack0xffffffffffffffc8,uVar1,&uStack_48);
  _objc_release(unaff_x20);
  FUN_1049e2748();
  return;
}



/* Entry: 1049e71e8; end: 1049e72db;  */

void FUN_1049e71e8(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 unaff_x20;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  if (*param_3 != -1) {
    _swift_once(param_3,param_5);
  }
  uVar1 = *param_4;
  uStack_48 = param_1;
  uStack_40 = param_2;
  _objc_retain();
  _swift_setAtReferenceWritableKeyPath(&stack0xffffffffffffffc8,uVar1,&uStack_48);
  _objc_release(unaff_x20);
  FUN_1049e2748();
  return;
}



/* Entry: 1049e72dc; end: 1049e737f;  */

void FUN_1049e72dc(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  long *param_5,undefined8 *param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar4 = *param_2;
  lVar5 = *param_5;
  _swift_bridgeObjectRetain(uVar2);
  if (lVar5 != -1) {
    _swift_once(param_5,param_7);
  }
  uVar3 = *param_6;
  uStack_68 = uVar1;
  uStack_60 = uVar2;
  uStack_58 = uVar4;
  _objc_retain(uVar4);
  _swift_setAtReferenceWritableKeyPath(&uStack_58,uVar3,&uStack_68);
  _objc_release(uVar4);
  FUN_1049e2748();
  return;
}



/* Entry: 1049e7380; end: 1049e741f;  */

undefined1  [16] FUN_1049e7380(long *param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong unaff_x20;
  undefined1 auVar4 [16];
  
  puVar1 = (ulong *)0x38;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    _malloc();
  }
  else {
    _swift_coroFrameAlloc(0x38,0x4695);
  }
  *param_1 = (long)puVar1;
  puVar1[5] = unaff_x20;
  if (lRam000000011309ff60 != -1) {
    _swift_once(0x11309ff60,FUN_1049e2fc8);
  }
  uVar3 = uRam0000000113815978;
  puVar1[6] = uRam0000000113815978;
  uVar2 = (ulong)bRam0000000113815970;
  FUN_1049e30b0();
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  auVar4._8_8_ = puVar1;
  auVar4._0_8_ = 0x1049eaf30;
  return auVar4;
}



/* Entry: 1049e7420; end: 1049e74d7;  */

void FUN_1049e7420(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  param_1 = (undefined8 *)*param_1;
  puVar3 = param_1 + 2;
  *puVar3 = *param_1;
  uVar2 = param_1[5];
  uVar1 = param_1[6];
  puVar4 = param_1 + 4;
  *puVar4 = uVar2;
  param_1[3] = param_1[1];
  if ((param_2 & 1) == 0) {
    _objc_retain(uVar2);
    _swift_setAtReferenceWritableKeyPath(puVar4,uVar1,puVar3);
    _objc_release(uVar2);
    FUN_1049e2748();
  }
  else {
    _swift_bridgeObjectRetain();
    _objc_retain(uVar2);
    _swift_setAtReferenceWritableKeyPath(puVar4,uVar1,puVar3);
    _objc_release(uVar2);
    FUN_1049e2748();
    _swift_bridgeObjectRelease(param_1[1]);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(param_1);
  return;
}



/* Entry: 1049e74d8; end: 1049e74e3; -[FBSDKSettings _facebookDomainPart] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049e74d8(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_1130a3cd0);
  _swift_beginAccess(puVar1,auStack_38,0,0);
  lVar2 = puVar1[1];
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
    _swift_bridgeObjectRetain(lVar2);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3,lVar2);
    _swift_bridgeObjectRelease(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1049e74e4; end: 1049e74ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1049e74e4(void)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + _DAT_1130a3cd0);
  _swift_beginAccess(pauVar1,auStack_38,0,0);
  auVar2 = *pauVar1;
  _swift_bridgeObjectRetain(*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Entry: 1049e74f0; end: 1049e74fb; -[FBSDKSettings set_facebookDomainPart:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049e74f0(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_1130a3cd0);
  _swift_beginAccess(plVar1,auStack_48,1,0);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  _swift_bridgeObjectRelease(lVar2);
  return;
}



/* Entry: 1049e74fc; end: 1049e7547;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049e74fc(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130a3cd0);
  _swift_beginAccess(puVar1,auStack_48,1,0);
  uVar2 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Entry: 1049e7548; end: 1049e757f; -[FBSDKSettings graphAPIVersion] */

void FUN_1049e7548(undefined8 param_1,undefined8 param_2)

{
  FUN_1049e7580();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1049e7580; end: 1049e75df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1049e7580(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auVar4 [16];
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130a3cd8);
  lVar2 = puVar1[1];
  if (lVar2 == 0) {
    puVar1[1] = 0xe500000000000000;
    *puVar1 = 0x302e373176;
    lVar2 = -0x1b00000000000000;
    uVar3 = 0x302e373176;
  }
  else {
    uVar3 = *puVar1;
  }
  _swift_bridgeObjectRetain();
  auVar4._8_8_ = lVar2;
  auVar4._0_8_ = uVar3;
  return auVar4;
}



/* Entry: 1049e75e0; end: 1049e761b; -[FBSDKSettings setGraphAPIVersion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049e75e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puVar1 = (undefined8 *)(param_1 + _DAT_1130a3cd8);
  uVar2 = puVar1[1];
  *puVar1 = param_3;
  puVar1[1] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 1049e761c; end: 1049e768b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049e761c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130a3cd8);
  uVar2 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 1049e768c; end: 1049e7697; -[FBSDKSettings userAgentSuffix] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049e768c(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_1130a3ce0);
  _swift_beginAccess(puVar1,auStack_38,0,0);
  lVar2 = puVar1[1];
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
    _swift_bridgeObjectRetain(lVar2);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3,lVar2);
    _swift_bridgeObjectRelease(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1049e7698; end: 1049e770b;  */

void FUN_1049e7698(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + *param_3);
  _swift_beginAccess(puVar1,auStack_38,0,0);
  lVar2 = puVar1[1];
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
    _swift_bridgeObjectRetain(lVar2);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3,lVar2);
    _swift_bridgeObjectRelease(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1049e770c; end: 1049e7767;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1049e770c(void)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + _DAT_1130a3ce0);
  _swift_beginAccess(pauVar1,auStack_38,0,0);
  auVar2 = *pauVar1;
  _swift_bridgeObjectRetain(*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Entry: 1049e7768; end: 1049e7773; -[FBSDKSettings setUserAgentSuffix:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049e7768(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_1130a3ce0);
  _swift_beginAccess(plVar1,auStack_48,1,0);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  _swift_bridgeObjectRelease(lVar2);
  return;
}



/* Entry: 1049e7774; end: 1049e77eb;  */

void FUN_1049e7774(long param_1,long param_2,long param_3,long *param_4)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + *param_4);
  _swift_beginAccess(plVar1,auStack_48,1,0);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  _swift_bridgeObjectRelease(lVar2);
  return;
}



/* Entry: 1049e77ec; end: 1049e788f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049e77ec(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130a3ce0);
  _swift_beginAccess(puVar1,auStack_48,1,0);
  uVar2 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Entry: 1049e7890; end: 1049e78ab;  */

bool FUN_1049e7890(long param_1)

{
  FUN_1049e7a20();
  return param_1 == 0;
}



/* Entry: 1049e78ac; end: 1049e78af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049e78ac(uint param_1)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long unaff_x20;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  puVar5 = PTR_PTR_1126add50;
  _swift_getInitializedObjCClass();
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  _objc_msgSend();
  _objc_release(puVar5);
  if ((int)puVar6 != 0) {
    lVar7 = 0x11309d598;
    func_0x0001048db364();
    _swift_allocObject();
    *(undefined8 *)(lVar7 + 0x18) = 2;
    *(undefined8 *)(lVar7 + 0x10) = 1;
    *(undefined **)(lVar7 + 0x38) = PTR___sSSN_11034da80;
    *(undefined8 *)(lVar7 + 0x20) = 0xd00000000000006d;
    *(undefined8 *)(lVar7 + 0x28) = 0x800000010f2283c0;
    __ss5print_9separator10terminatoryypd_S2StF();
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar7);
    return;
  }
  iVar2 = 2;
  func_0x000100029b9c(2,0xe,0,0);
  if (iVar2 != 0) {
    FUN_1049e7b24(~param_1 & 1);
    lVar3 = 0;
    __s10Foundation4DateVMa();
    lVar18 = *(long *)(lVar3 + -8);
    lVar17 = (long)&lStack_b0 - (*(long *)(lVar18 + 0x40) + 0xfU & 0xfffffffffffffff0);
    plVar1 = (long *)(unaff_x20 + _DAT_1130a3c60);
    _swift_beginAccess(plVar1,auStack_78,0,0);
    lVar7 = *plVar1;
    lVar8 = plVar1[1];
    lVar9 = plVar1[2];
    lVar10 = plVar1[3];
    lVar11 = plVar1[4];
    lVar12 = lVar9;
    lVar13 = lVar7;
    lVar14 = lVar10;
    lVar15 = lVar8;
    lVar16 = lVar11;
    if (lVar7 == 0) {
      plVar1 = (long *)(unaff_x20 + _DAT_1130a3c68);
      lStack_b0 = lVar8;
      lStack_a8 = lVar9;
      lStack_a0 = lVar10;
      lStack_98 = lVar11;
      _swift_beginAccess(plVar1,auStack_90,0,0);
      lVar13 = *plVar1;
      if (lVar13 == 0) {
        return;
      }
      lVar14 = plVar1[3];
      lVar16 = plVar1[4];
      lVar15 = plVar1[1];
      lVar12 = plVar1[2];
      _swift_unknownObjectRetain(lVar13);
      _swift_unknownObjectRetain(lVar15);
      _swift_unknownObjectRetain(lVar12);
      _swift_unknownObjectRetain(lVar14);
      _swift_unknownObjectRetain(lVar16);
      lVar8 = lStack_b0;
      lVar9 = lStack_a8;
      lVar10 = lStack_a0;
      lVar11 = lStack_98;
    }
    FUN_1049e1a74(lVar7,lVar8,lVar9,lVar10,lVar11);
    _swift_unknownObjectRelease(lVar16);
    _swift_unknownObjectRelease(lVar14);
    _swift_unknownObjectRelease(lVar15);
    _swift_unknownObjectRelease(lVar13);
    __s10Foundation4DateVACycfC(lVar17);
    __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF();
    (**(code **)(lVar18 + 8))(lVar17,lVar3);
    uVar4 = 0xd000000000000043;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000043,0x800000010f223a30);
    _objc_msgSend(lVar12,PTR_s_fb_setObject_forKey__1125c5f88,lVar13,uVar4);
    _objc_release(lVar13);
    _objc_release(uVar4);
    _swift_unknownObjectRelease(lVar12);
    return;
  }
  return;
}



/* Entry: 1049e78b0; end: 1049e79bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049e78b0(uint param_1)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long unaff_x20;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  puVar5 = PTR_PTR_1126add50;
  _swift_getInitializedObjCClass();
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  _objc_msgSend();
  _objc_release(puVar5);
  if ((int)puVar6 != 0) {
    lVar7 = 0x11309d598;
    func_0x0001048db364();
    _swift_allocObject();
    *(undefined8 *)(lVar7 + 0x18) = 2;
    *(undefined8 *)(lVar7 + 0x10) = 1;
    *(undefined **)(lVar7 + 0x38) = PTR___sSSN_11034da80;
    *(undefined8 *)(lVar7 + 0x20) = 0xd00000000000006d;
    *(undefined8 *)(lVar7 + 0x28) = 0x800000010f2283c0;
    __ss5print_9separator10terminatoryypd_S2StF();
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar7);
    return;
  }
  iVar2 = 2;
  func_0x000100029b9c(2,0xe,0,0);
  if (iVar2 != 0) {
    FUN_1049e7b24(~param_1 & 1);
    lVar3 = 0;
    __s10Foundation4DateVMa();
    lVar18 = *(long *)(lVar3 + -8);
    lVar17 = (long)&lStack_b0 - (*(long *)(lVar18 + 0x40) + 0xfU & 0xfffffffffffffff0);
    plVar1 = (long *)(unaff_x20 + _DAT_1130a3c60);
    _swift_beginAccess(plVar1,auStack_78,0,0);
    lVar7 = *plVar1;
    lVar8 = plVar1[1];
    lVar9 = plVar1[2];
    lVar10 = plVar1[3];
    lVar11 = plVar1[4];
    lVar12 = lVar9;
    lVar13 = lVar7;
    lVar14 = lVar10;
    lVar15 = lVar8;
    lVar16 = lVar11;
    if (lVar7 == 0) {
      plVar1 = (long *)(unaff_x20 + _DAT_1130a3c68);
      lStack_b0 = lVar8;
      lStack_a8 = lVar9;
      lStack_a0 = lVar10;
      lStack_98 = lVar11;
      _swift_beginAccess(plVar1,auStack_90,0,0);
      lVar13 = *plVar1;
      if (lVar13 == 0) {
        return;
      }
      lVar14 = plVar1[3];
      lVar16 = plVar1[4];
      lVar15 = plVar1[1];
      lVar12 = plVar1[2];
      _swift_unknownObjectRetain(lVar13);
      _swift_unknownObjectRetain(lVar15);
      _swift_unknownObjectRetain(lVar12);
      _swift_unknownObjectRetain(lVar14);
      _swift_unknownObjectRetain(lVar16);
      lVar8 = lStack_b0;
      lVar9 = lStack_a8;
      lVar10 = lStack_a0;
      lVar11 = lStack_98;
    }
    FUN_1049e1a74(lVar7,lVar8,lVar9,lVar10,lVar11);
    _swift_unknownObjectRelease(lVar16);
    _swift_unknownObjectRelease(lVar14);
    _swift_unknownObjectRelease(lVar15);
    _swift_unknownObjectRelease(lVar13);
    __s10Foundation4DateVACycfC(lVar17);
    __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF();
    (**(code **)(lVar18 + 8))(lVar17,lVar3);
    uVar4 = 0xd000000000000043;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000043,0x800000010f223a30);
    _objc_msgSend(lVar12,PTR_s_fb_setObject_forKey__1125c5f88,lVar13,uVar4);
    _objc_release(lVar13);
    _objc_release(uVar4);
    _swift_unknownObjectRelease(lVar12);
    return;
  }
  return;
}



/* Entry: 1049e79c0; end: 1049e7a1f;  */

undefined1  [16] FUN_1049e79c0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 unaff_x20;
  undefined1 auVar2 [16];
  
  *param_1 = unaff_x20;
  puVar1 = param_1;
  FUN_1049e7a20();
  *(bool *)(param_1 + 1) = puVar1 == (undefined8 *)0x0;
  auVar2._8_8_ = param_1 + 1;
  auVar2._0_8_ = 0x1049e79fc;
  return auVar2;
}



/* Entry: 1049e7a20; end: 1049e7b23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_1049e7a20(void)

{
  ulong *puVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong unaff_x20;
  
  puVar3 = PTR_PTR_1126add50;
  _swift_getInitializedObjCClass();
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  _objc_msgSend();
  _objc_release(puVar3);
  iVar2 = 2;
  func_0x000100029b9c(2,0xe,0,0);
  if ((int)puVar4 == 0) {
    if (iVar2 != 0) {
      puVar1 = (ulong *)(unaff_x20 + _DAT_1130a3ce8);
      if ((char)puVar1[1] == '\x01') {
        FUN_1049e7ecc();
        *puVar1 = unaff_x20;
        *(undefined1 *)(puVar1 + 1) = 0;
      }
      else {
        unaff_x20 = *puVar1;
      }
      return unaff_x20;
    }
    puVar3 = PTR__OBJC_CLASS___ASIdentifierManager_1126b8d90;
    _swift_getInitializedObjCClass(PTR__OBJC_CLASS___ASIdentifierManager_1126b8d90);
    _objc_msgSend();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    _objc_msgSend();
    _objc_release(puVar3);
    uVar5 = (ulong)((uint)puVar4 ^ 1);
  }
  else {
    if (iVar2 != 0) {
      puVar3 = PTR__OBJC_CLASS___ATTrackingManager_1126b8f80;
      _swift_getInitializedObjCClass();
      _objc_msgSend();
      if (puVar3 < (undefined *)0x4) {
        return *(ulong *)(&UNK_10dd4bd98 + (long)puVar3 * 8);
      }
    }
    uVar5 = 2;
  }
  return uVar5;
}



/* Entry: 1049e7b24; end: 1049e7d8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049e7b24(undefined8 param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long unaff_x20;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  puVar6 = PTR_PTR_1126add50;
  _swift_getInitializedObjCClass();
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  _objc_msgSend();
  _objc_release(puVar6);
  if ((int)puVar7 != 0) {
    lVar8 = 0x11309d598;
    func_0x0001048db364();
    _swift_allocObject();
    *(undefined8 *)(lVar8 + 0x18) = 2;
    *(undefined8 *)(lVar8 + 0x10) = 1;
    *(undefined **)(lVar8 + 0x38) = PTR___sSSN_11034da80;
    *(undefined8 *)(lVar8 + 0x20) = 0xd00000000000006b;
    *(undefined8 *)(lVar8 + 0x28) = 0x800000010f228430;
    __ss5print_9separator10terminatoryypd_S2StF();
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar8);
    return;
  }
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130a3ce8);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = 0;
  plVar2 = (long *)(unaff_x20 + _DAT_1130a3c60);
  _swift_beginAccess(plVar2,auStack_78,0,0);
  lVar8 = *plVar2;
  lVar4 = plVar2[1];
  lVar3 = plVar2[2];
  lVar5 = plVar2[3];
  lVar10 = plVar2[4];
  lVar11 = lVar3;
  lVar12 = lVar8;
  lVar13 = lVar5;
  lVar14 = lVar4;
  lVar15 = lVar10;
  if (lVar8 == 0) {
    plVar2 = (long *)(unaff_x20 + _DAT_1130a3c68);
    _swift_beginAccess(plVar2,auStack_90,0,0);
    lVar12 = *plVar2;
    if (lVar12 == 0) {
      return;
    }
    lVar13 = plVar2[3];
    lVar15 = plVar2[4];
    lVar14 = plVar2[1];
    lVar11 = plVar2[2];
    _swift_unknownObjectRetain(lVar12);
    _swift_unknownObjectRetain(lVar14);
    _swift_unknownObjectRetain(lVar11);
    _swift_unknownObjectRetain(lVar13);
    _swift_unknownObjectRetain(lVar15);
  }
  FUN_1049e1a74(lVar8,lVar4,lVar3,lVar5,lVar10);
  _swift_unknownObjectRelease(lVar15);
  _swift_unknownObjectRelease(lVar13);
  _swift_unknownObjectRelease(lVar14);
  _swift_unknownObjectRelease(lVar12);
  __sSu10FoundationE19_bridgeToObjectiveCSo8NSNumberCyF(param_1);
  uVar9 = 0xd000000000000037;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000037,0x800000010f223880);
  _objc_msgSend(lVar11,PTR_s_fb_setObject_forKey__1125c5f88,param_1,uVar9);
  _objc_release(param_1);
  _objc_release(uVar9);
  _swift_unknownObjectRelease(lVar11);
  return;
}



/* Entry: 1049e7d90; end: 1049e7dcb;  */

undefined1  [16] FUN_1049e7d90(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 unaff_x20;
  undefined1 auVar2 [16];
  
  *param_1 = unaff_x20;
  puVar1 = param_1;
  FUN_1049e7a20();
  *(bool *)(param_1 + 1) = puVar1 == (undefined8 *)0x0;
  auVar2._8_8_ = param_1 + 1;
  auVar2._0_8_ = 0x1049eae70;
  return auVar2;
}



/* Entry: 1049e7dcc; end: 1049e7dff; -[FBSDKSettings advertisingTrackingStatus] */

undefined8 FUN_1049e7dcc(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1049e7a20();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1049e7e00; end: 1049e7ecb; -[FBSDKSettings setAdvertisingTrackingStatus:] */

void FUN_1049e7e00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain();
  FUN_1049e7b24(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1049e7ecc; end: 1049e8157;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1049e7ecc(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  plVar5 = (long *)(param_1 + _DAT_1130a3c60);
  _swift_beginAccess(plVar5,auStack_78,0,0);
  lVar4 = *plVar5;
  lVar1 = plVar5[1];
  lVar6 = plVar5[2];
  lVar2 = plVar5[3];
  lVar7 = plVar5[4];
  lVar8 = lVar4;
  lVar9 = lVar1;
  lVar10 = lVar6;
  lVar11 = lVar2;
  lVar12 = lVar7;
  if (lVar4 == 0) {
    plVar5 = (long *)(param_1 + _DAT_1130a3c68);
    _swift_beginAccess(plVar5,auStack_90,0,0);
    lVar8 = *plVar5;
    if (lVar8 == 0) {
      return 2;
    }
    lVar11 = plVar5[3];
    lVar12 = plVar5[4];
    lVar9 = plVar5[1];
    lVar10 = plVar5[2];
    _swift_unknownObjectRetain(lVar8);
    _swift_unknownObjectRetain(lVar9);
    _swift_unknownObjectRetain(lVar10);
    _swift_unknownObjectRetain(lVar11);
    _swift_unknownObjectRetain(lVar12);
  }
  FUN_1049e1a74(lVar4,lVar1,lVar6,lVar2,lVar7);
  uVar3 = 0xd000000000000037;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000037,0x800000010f223880);
  lVar4 = lVar10;
  _objc_msgSend(lVar10,PTR_s_fb_objectForKey__1125c5f60,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  if (lVar4 == 0) {
    uStack_c8 = 0;
    uStack_d0 = 0;
    lStack_b8 = 0;
    uStack_c0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_d0,lVar4);
    _swift_unknownObjectRelease(lVar4);
  }
  uStack_a8 = uStack_c8;
  uStack_b0 = uStack_d0;
  lStack_98 = lStack_b8;
  uStack_a0 = uStack_c0;
  if (lStack_b8 == 0) {
    func_0x0001049eab14(&uStack_b0,0x11309c428);
  }
  else {
    uVar3 = 0;
    func_0x0001049eae2c(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    plVar5 = &lStack_d8;
    _swift_dynamicCast(plVar5,&uStack_b0,PTR___sypN_11034f1a8 + 8,uVar3,6);
    if (((ulong)plVar5 & 1) != 0) {
      lVar4 = lStack_d8;
      _objc_msgSend(lStack_d8,PTR_s_unsignedIntegerValue_11267e418);
      _swift_unknownObjectRelease(lVar12);
      _swift_unknownObjectRelease(lVar11);
      _swift_unknownObjectRelease(lVar10);
      _swift_unknownObjectRelease(lVar9);
      _swift_unknownObjectRelease(lVar8);
      _objc_release(lStack_d8);
      return lVar4;
    }
  }
  lVar4 = lVar8;
  _objc_msgSend(lVar8,PTR_s_cachedAppEventsConfiguration_1125a7578);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  _objc_msgSend();
  _swift_unknownObjectRelease(lVar12);
  _swift_unknownObjectRelease(lVar11);
  _swift_unknownObjectRelease(lVar10);
  _swift_unknownObjectRelease(lVar9);
  _swift_unknownObjectRelease(lVar8);
  _swift_unknownObjectRelease(lVar4);
  return lVar6;
}



/* Entry: 1049e8158; end: 1049e818b; -[FBSDKSettings isDataProcessingRestricted] */

uint FUN_1049e8158(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1049e818c();
  _objc_release(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 1049e818c; end: 1049e8323;  */

undefined8 FUN_1049e818c(long param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  long alStack_80 [6];
  
  plVar6 = alStack_80;
  FUN_1049e8324();
  if (param_1 == 0) {
    alStack_80[3] = 0;
    alStack_80[2] = 0;
    alStack_80[5] = 0;
    alStack_80[4] = 0;
  }
  else {
    ppuVar4 = &PTR____CFConstantStringClassReference_110da3178;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ
              (&PTR____CFConstantStringClassReference_110da3178);
    if ((*(long *)(param_1 + 0x10) == 0) ||
       (uVar10 = param_2, func_0x000100029284(), (uVar10 & 1) == 0)) {
      alStack_80[3] = 0;
      alStack_80[2] = 0;
      alStack_80[5] = 0;
      alStack_80[4] = 0;
      _swift_bridgeObjectRelease(param_1);
      _swift_bridgeObjectRelease(param_2);
    }
    else {
      func_0x0001000bb420(*(long *)(param_1 + 0x38) + (long)ppuVar4 * 0x20,alStack_80 + 2);
      _swift_bridgeObjectRelease(param_1);
      _swift_bridgeObjectRelease(param_2);
      if (alStack_80[5] != 0) {
        uVar5 = 0x11309c618;
        func_0x0001048db364(0x11309c618);
        _swift_dynamicCast(alStack_80,alStack_80 + 2,PTR___sypN_11034f1a8 + 8,uVar5,6);
        lVar2 = alStack_80[0];
        puVar1 = PTR___sSSN_11034da80;
        if (((ulong)plVar6 & 1) == 0) {
          return 0;
        }
        lVar9 = *(long *)(alStack_80[0] + 0x10);
        uVar10 = 0xffffffffffffffff;
        puVar8 = (undefined8 *)(alStack_80[0] + 0x28);
        while( true ) {
          if (uVar10 - lVar9 == -1) {
            _swift_bridgeObjectRelease(lVar2);
            return 0;
          }
          uVar10 = uVar10 + 1;
          if (*(ulong *)(lVar2 + 0x10) <= uVar10) break;
          alStack_80[2] = puVar8[-1];
          alStack_80[3] = *puVar8;
          alStack_80[0] = 0x75646c;
          alStack_80[1] = 0xe300000000000000;
          func_0x000100e8b654();
          plVar7 = alStack_80;
          __sSy10FoundationE22caseInsensitiveCompareySo18NSComparisonResultVqd__SyRd__lF
                    (alStack_80,puVar1,puVar1,plVar6,plVar6);
          plVar6 = plVar7;
          puVar8 = puVar8 + 2;
          if (plVar7 == (long *)0x0) {
            _swift_bridgeObjectRelease(lVar2);
            return 1;
          }
        }
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1049e8324);
        (*pcVar3)();
      }
    }
  }
  FUN_1049eab14(alStack_80 + 2,0x11309c428);
  return 0;
}



/* Entry: 1049e8324; end: 1049e838f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1049e8324(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_1130a3cf0;
  lVar3 = *(long *)(unaff_x20 + _DAT_1130a3cf0);
  lVar2 = lVar3;
  if (lVar3 == 1) {
    lVar2 = unaff_x20;
    FUN_1049e8474();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar2;
    _swift_bridgeObjectRetain();
    FUN_1049ea794(uVar4);
  }
  func_0x0001049ea7a4(lVar3);
  return lVar2;
}



/* Entry: 1049e8390; end: 1049e83ff; -[FBSDKSettings persistableDataProcessingOptions] */

void FUN_1049e8390(long param_1)

{
  long lVar1;
  long lVar2;
  
  _objc_retain();
  lVar1 = param_1;
  FUN_1049e8324();
  _objc_release(param_1);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (lVar1,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1049e8400; end: 1049e8473; -[FBSDKSettings setPersistableDataProcessingOptions:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049e8400(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 != 0) {
    __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
              (param_3,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  }
  uVar1 = *(undefined8 *)(param_1 + _DAT_1130a3cf0);
  *(long *)(param_1 + _DAT_1130a3cf0) = param_3;
  _objc_retain();
  FUN_1049ea794(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1049e8474; end: 1049e87cb;  */

/* WARNING: Removing unreachable block (ram,0x0001049e871c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1049e8474(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  plVar1 = (long *)(param_1 + _DAT_1130a3c60);
  _swift_beginAccess(plVar1,auStack_98,0,0);
  lVar8 = *plVar1;
  lVar3 = plVar1[1];
  lVar2 = plVar1[2];
  lVar4 = plVar1[3];
  lVar12 = plVar1[4];
  lVar11 = lVar2;
  lVar13 = lVar8;
  lVar14 = lVar3;
  lVar15 = lVar4;
  lVar16 = lVar12;
  if (lVar8 == 0) {
    plVar1 = (long *)(param_1 + _DAT_1130a3c68);
    _swift_beginAccess(plVar1,auStack_b0,0,0);
    lVar13 = *plVar1;
    if (lVar13 == 0) {
      uStack_78 = 0;
      uStack_80 = 0;
      lStack_68 = 0;
      uStack_70 = 0;
      goto LAB_1049e8798;
    }
    lVar15 = plVar1[3];
    lVar16 = plVar1[4];
    lVar14 = plVar1[1];
    lVar11 = plVar1[2];
    _swift_unknownObjectRetain(lVar13);
    _swift_unknownObjectRetain(lVar14);
    _swift_unknownObjectRetain(lVar11);
    _swift_unknownObjectRetain(lVar15);
    _swift_unknownObjectRetain(lVar16);
  }
  _swift_unknownObjectRetain(lVar11);
  FUN_1049e1a74(lVar8,lVar3,lVar2,lVar4,lVar12);
  _swift_unknownObjectRelease(lVar16);
  _swift_unknownObjectRelease(lVar15);
  _swift_unknownObjectRelease(lVar11);
  _swift_unknownObjectRelease(lVar14);
  _swift_unknownObjectRelease(lVar13);
  uVar7 = 0xd000000000000033;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000033,0x800000010f223990);
  lVar8 = lVar11;
  _objc_msgSend(lVar11,PTR_s_fb_objectForKey__1125c5f60,uVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  _swift_unknownObjectRelease(lVar11);
  if (lVar8 == 0) {
    uStack_c8 = 0;
    uStack_d0 = 0;
    lStack_b8 = 0;
    uStack_c0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_d0,lVar8);
    _swift_unknownObjectRelease(lVar8);
  }
  puVar5 = PTR___sypN_11034f1a8;
  uStack_78 = uStack_c8;
  uStack_80 = uStack_d0;
  lStack_68 = lStack_b8;
  uStack_70 = uStack_c0;
  if (lStack_b8 != 0) {
    puVar9 = &uStack_d0;
    _swift_dynamicCast(puVar9,&uStack_80,PTR___sypN_11034f1a8 + 8,
                       PTR___s10Foundation4DataVN_110350ae0,6);
    uVar6 = uStack_c8;
    uVar7 = uStack_d0;
    if (((ulong)puVar9 & 1) == 0) {
      return 0;
    }
    lVar8 = 0x11309d6d8;
    func_0x0001048db364();
    _swift_allocObject();
    *(undefined8 *)(lVar8 + 0x18) = 10;
    *(undefined8 *)(lVar8 + 0x10) = 5;
    uVar10 = 0;
    func_0x0001049eae2c(0,0x112d4c408,&PTR__OBJC_CLASS___NSString_1126ae4d0);
    *(undefined8 *)(lVar8 + 0x20) = uVar10;
    uVar10 = 0;
    func_0x0001049eae2c(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    *(undefined8 *)(lVar8 + 0x28) = uVar10;
    uVar10 = 0;
    func_0x0001049eae2c(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
    *(undefined8 *)(lVar8 + 0x30) = uVar10;
    uVar10 = 0;
    func_0x0001049eae2c(0,0x112d55e50,&PTR__OBJC_CLASS___NSDictionary_1126ae670);
    *(undefined8 *)(lVar8 + 0x38) = uVar10;
    uVar10 = 0;
    func_0x0001049eae2c(0,0x112d61f88,&PTR__OBJC_CLASS___NSSet_1126ae870);
    *(undefined8 *)(lVar8 + 0x40) = uVar10;
    func_0x0001049eae2c(0,0x112d7e120,&PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98);
    __sSo17NSKeyedUnarchiverC10FoundationE16unarchivedObject9ofClasses4fromypSgSayyXlXpG_AC4DataVtKFZ
              (&uStack_80,lVar8,uVar7,uVar6);
    func_0x00010006c090(uVar7,uVar6);
    _swift_bridgeObjectRelease(lVar8);
    if (lStack_68 != 0) {
      uVar7 = 0x11309c420;
      func_0x0001048db364(0x11309c420);
      puVar9 = &uStack_d0;
      _swift_dynamicCast(puVar9,&uStack_80,puVar5 + 8,uVar7,6);
      if ((int)puVar9 == 0) {
        return 0;
      }
      return uStack_d0;
    }
  }
LAB_1049e8798:
  func_0x0001049eab14(&uStack_80,0x11309c428);
  return 0;
}



/* Entry: 1049e87cc; end: 1049e87d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049e87cc(undefined *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  long unaff_x20;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined1 auStack_150 [24];
  undefined *apuStack_138 [3];
  undefined1 auStack_120 [176];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = (undefined *)0x11309c610;
  func_0x0001048db364();
  puVar9 = auStack_120;
  _swift_initStackObject();
  *(undefined8 *)(puVar5 + 0x18) = 6;
  *(undefined8 *)(puVar5 + 0x10) = 3;
  ppuVar6 = &PTR____CFConstantStringClassReference_110da3178;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  *(undefined ***)(puVar5 + 0x20) = ppuVar6;
  *(undefined1 **)(puVar5 + 0x28) = puVar9;
  uVar13 = 0x11309c618;
  func_0x0001048db364();
  *(undefined8 *)(puVar5 + 0x48) = uVar13;
  puVar7 = param_1;
  if (param_1 == (undefined *)0x0) {
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
    _swift_retain();
  }
  *(undefined **)(puVar5 + 0x30) = puVar7;
  ppuVar6 = &PTR____CFConstantStringClassReference_110da3198;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puVar7 = PTR___ss5Int32VN_11034ee20;
  *(undefined ***)(puVar5 + 0x50) = ppuVar6;
  *(undefined1 **)(puVar5 + 0x58) = puVar9;
  *(undefined **)(puVar5 + 0x78) = puVar7;
  *(undefined4 *)(puVar5 + 0x60) = 0;
  ppuVar6 = &PTR____CFConstantStringClassReference_110da31b8;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  *(undefined ***)(puVar5 + 0x80) = ppuVar6;
  *(undefined1 **)(puVar5 + 0x88) = puVar9;
  *(undefined **)(puVar5 + 0xa8) = puVar7;
  *(undefined4 *)(puVar5 + 0x90) = 0;
  _swift_bridgeObjectRetain(param_1);
  puVar7 = puVar5;
  func_0x000100214a84();
  _swift_setDeallocating(puVar5);
  uVar13 = 0x11309c418;
  func_0x0001048db364(0x11309c418);
  _swift_arrayDestroy(puVar5 + 0x20,3,uVar13);
  uVar13 = *(undefined8 *)(unaff_x20 + _DAT_1130a3cf0);
  *(undefined **)(unaff_x20 + _DAT_1130a3cf0) = puVar7;
  _swift_bridgeObjectRetain(puVar7);
  FUN_1049ea794(uVar13);
  puVar5 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
  _swift_getInitializedObjCClass();
  puVar8 = puVar7;
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (puVar7,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  _swift_bridgeObjectRelease(puVar7);
  apuStack_138[0] = (undefined *)0x0;
  puVar10 = PTR_s_archivedDataWithRootObject_requi_11259ff88;
  puVar12 = puVar8;
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  puVar7 = apuStack_138[0];
  _objc_retain();
  if (puVar5 == (undefined *)0x0) {
    puVar8 = puVar7;
    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
    _objc_release(puVar7);
    _swift_willThrow();
    _swift_errorRelease(puVar8);
  }
  else {
    puVar8 = puVar5;
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
    _objc_release(puVar5);
    plVar1 = (long *)(unaff_x20 + _DAT_1130a3c60);
    _swift_beginAccess(plVar1,apuStack_138,0,0);
    lVar2 = *plVar1;
    lVar3 = plVar1[1];
    puVar5 = (undefined *)plVar1[2];
    lVar4 = plVar1[3];
    lVar11 = plVar1[4];
    puVar7 = puVar5;
    lVar14 = lVar2;
    lVar15 = lVar4;
    lVar16 = lVar3;
    lVar17 = lVar11;
    if (lVar2 == 0) {
      plVar1 = (long *)(unaff_x20 + _DAT_1130a3c68);
      puVar12 = (undefined *)0x0;
      _swift_beginAccess(plVar1,auStack_150,0,0);
      lVar14 = *plVar1;
      if (lVar14 == 0) {
        func_0x00010006c090(puVar8,puVar10);
        goto LAB_1049e8b24;
      }
      lVar15 = plVar1[3];
      lVar17 = plVar1[4];
      lVar16 = plVar1[1];
      puVar7 = (undefined *)plVar1[2];
      _swift_unknownObjectRetain(lVar14);
      _swift_unknownObjectRetain(lVar16);
      _swift_unknownObjectRetain(puVar7);
      _swift_unknownObjectRetain(lVar15);
      _swift_unknownObjectRetain(lVar17);
    }
    FUN_1049e1a74(lVar2,lVar3,puVar5,lVar4,lVar11);
    _swift_unknownObjectRelease(lVar17);
    _swift_unknownObjectRelease(lVar15);
    _swift_unknownObjectRelease(lVar16);
    _swift_unknownObjectRelease(lVar14);
    puVar5 = puVar8;
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(puVar8,puVar10);
    uVar13 = 0xd000000000000033;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000033,0x800000010f223990);
    puVar12 = puVar5;
    _objc_msgSend(puVar7,PTR_s_fb_setObject_forKey__1125c5f88,puVar5,uVar13);
    func_0x00010006c090(puVar8,puVar10);
    _objc_release(puVar5);
    _objc_release(uVar13);
    _swift_unknownObjectRelease(puVar7);
    puVar8 = puVar7;
  }
LAB_1049e8b24:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    if (puVar12 == (undefined *)0x0) {
      puVar12 = (undefined *)0x0;
    }
    else {
      __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
                (puVar12,PTR___sSSN_11034da80);
    }
    _objc_retain();
    FUN_1049e87d8(puVar12,0,0);
    _objc_release(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(puVar12);
    return;
  }
  return;
}



/* Entry: 1049e87d8; end: 1049e8b6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049e87d8(undefined *param_1,undefined4 param_2,undefined4 param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  long unaff_x20;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined1 auStack_150 [24];
  undefined *apuStack_138 [3];
  undefined1 auStack_120 [176];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = (undefined *)0x11309c610;
  func_0x0001048db364();
  puVar9 = auStack_120;
  _swift_initStackObject();
  *(undefined8 *)(puVar5 + 0x18) = 6;
  *(undefined8 *)(puVar5 + 0x10) = 3;
  ppuVar6 = &PTR____CFConstantStringClassReference_110da3178;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  *(undefined ***)(puVar5 + 0x20) = ppuVar6;
  *(undefined1 **)(puVar5 + 0x28) = puVar9;
  uVar13 = 0x11309c618;
  func_0x0001048db364();
  *(undefined8 *)(puVar5 + 0x48) = uVar13;
  puVar7 = param_1;
  if (param_1 == (undefined *)0x0) {
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
    _swift_retain();
  }
  *(undefined **)(puVar5 + 0x30) = puVar7;
  ppuVar6 = &PTR____CFConstantStringClassReference_110da3198;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puVar7 = PTR___ss5Int32VN_11034ee20;
  *(undefined ***)(puVar5 + 0x50) = ppuVar6;
  *(undefined1 **)(puVar5 + 0x58) = puVar9;
  *(undefined **)(puVar5 + 0x78) = puVar7;
  *(undefined4 *)(puVar5 + 0x60) = param_2;
  ppuVar6 = &PTR____CFConstantStringClassReference_110da31b8;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  *(undefined ***)(puVar5 + 0x80) = ppuVar6;
  *(undefined1 **)(puVar5 + 0x88) = puVar9;
  *(undefined **)(puVar5 + 0xa8) = puVar7;
  *(undefined4 *)(puVar5 + 0x90) = param_3;
  _swift_bridgeObjectRetain(param_1);
  puVar7 = puVar5;
  func_0x000100214a84();
  _swift_setDeallocating(puVar5);
  uVar13 = 0x11309c418;
  func_0x0001048db364(0x11309c418);
  _swift_arrayDestroy(puVar5 + 0x20,3,uVar13);
  uVar13 = *(undefined8 *)(unaff_x20 + _DAT_1130a3cf0);
  *(undefined **)(unaff_x20 + _DAT_1130a3cf0) = puVar7;
  _swift_bridgeObjectRetain(puVar7);
  FUN_1049ea794(uVar13);
  puVar5 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
  _swift_getInitializedObjCClass();
  puVar8 = puVar7;
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (puVar7,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  _swift_bridgeObjectRelease(puVar7);
  apuStack_138[0] = (undefined *)0x0;
  puVar10 = PTR_s_archivedDataWithRootObject_requi_11259ff88;
  puVar12 = puVar8;
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  puVar7 = apuStack_138[0];
  _objc_retain();
  if (puVar5 == (undefined *)0x0) {
    puVar8 = puVar7;
    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
    _objc_release(puVar7);
    _swift_willThrow();
    _swift_errorRelease(puVar8);
  }
  else {
    puVar8 = puVar5;
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
    _objc_release(puVar5);
    plVar1 = (long *)(unaff_x20 + _DAT_1130a3c60);
    _swift_beginAccess(plVar1,apuStack_138,0,0);
    lVar2 = *plVar1;
    lVar3 = plVar1[1];
    puVar5 = (undefined *)plVar1[2];
    lVar4 = plVar1[3];
    lVar11 = plVar1[4];
    puVar7 = puVar5;
    lVar14 = lVar2;
    lVar15 = lVar4;
    lVar16 = lVar3;
    lVar17 = lVar11;
    if (lVar2 == 0) {
      plVar1 = (long *)(unaff_x20 + _DAT_1130a3c68);
      puVar12 = (undefined *)0x0;
      _swift_beginAccess(plVar1,auStack_150,0,0);
      lVar14 = *plVar1;
      if (lVar14 == 0) {
        func_0x00010006c090(puVar8,puVar10);
        goto LAB_1049e8b24;
      }
      lVar15 = plVar1[3];
      lVar17 = plVar1[4];
      lVar16 = plVar1[1];
      puVar7 = (undefined *)plVar1[2];
      _swift_unknownObjectRetain(lVar14);
      _swift_unknownObjectRetain(lVar16);
      _swift_unknownObjectRetain(puVar7);
      _swift_unknownObjectRetain(lVar15);
      _swift_unknownObjectRetain(lVar17);
    }
    FUN_1049e1a74(lVar2,lVar3,puVar5,lVar4,lVar11);
    _swift_unknownObjectRelease(lVar17);
    _swift_unknownObjectRelease(lVar15);
    _swift_unknownObjectRelease(lVar16);
    _swift_unknownObjectRelease(lVar14);
    puVar5 = puVar8;
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(puVar8,puVar10);
    uVar13 = 0xd000000000000033;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000033,0x800000010f223990);
    puVar12 = puVar5;
    _objc_msgSend(puVar7,PTR_s_fb_setObject_forKey__1125c5f88,puVar5,uVar13);
    func_0x00010006c090(puVar8,puVar10);
    _objc_release(puVar5);
    _objc_release(uVar13);
    _swift_unknownObjectRelease(puVar7);
    puVar8 = puVar7;
  }
LAB_1049e8b24:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    if (puVar12 == (undefined *)0x0) {
      puVar12 = (undefined *)0x0;
    }
    else {
      __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
                (puVar12,PTR___sSSN_11034da80);
    }
    _objc_retain();
    FUN_1049e87d8(puVar12,0,0);
    _objc_release(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(puVar12);
    return;
  }
  return;
}



/* Entry: 1049e8b70; end: 1049e8bd3; -[FBSDKSettings setDataProcessingOptions:] */

void FUN_1049e8b70(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 0) {
    param_3 = 0;
  }
  else {
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
              (param_3,PTR___sSSN_11034da80);
  }
  _objc_retain(param_1);
  FUN_1049e87d8(param_3,0,0);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 1049e8bd4; end: 1049e8c4b; -[FBSDKSettings setDataProcessingOptions:country:state:] */

void FUN_1049e8bd4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  if (param_3 == 0) {
    param_3 = 0;
  }
  else {
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
              (param_3,PTR___sSSN_11034da80);
  }
  _objc_retain(param_1);
  FUN_1049e87d8(param_3,param_4,param_5);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 1049e8c4c; end: 1049e8cab; -[FBSDKSettings loggingBehaviors] */

void FUN_1049e8c4c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1049e8d8c();
  _objc_release(param_1);
  uVar2 = 0;
  func_0x000104993dfc(0);
  uVar3 = uVar2;
  FUN_1049944f0();
  uVar4 = uVar1;
  __sSh10FoundationE19_bridgeToObjectiveCSo5NSSetCyF(uVar1,uVar2,uVar3);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1049e8cac; end: 1049e8caf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1049e8cac(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_1130a3cf8;
  lVar2 = *(long *)(unaff_x20 + _DAT_1130a3cf8);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = unaff_x20;
    FUN_1049e8f7c();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar4);
    lVar2 = 0;
  }
  _swift_bridgeObjectRetain(lVar2);
  return lVar3;
}



/* Entry: 1049e8cb0; end: 1049e8d23; -[FBSDKSettings setLoggingBehaviors:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049e8cb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0;
  func_0x000104993dfc(0);
  uVar2 = uVar1;
  FUN_1049944f0();
  __sSh10FoundationE36_unconditionallyBridgeFromObjectiveCyShyxGSo5NSSetCSgFZ(param_3,uVar1,uVar2);
  uVar2 = *(undefined8 *)(param_1 + _DAT_1130a3cf8);
  *(undefined8 *)(param_1 + _DAT_1130a3cf8) = param_3;
  _objc_retain(param_1);
  _swift_bridgeObjectRelease(uVar2);
  FUN_1049e8df0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1049e8d24; end: 1049e8d4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049e8d24(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uStack_58;
  
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_1130a3cf8);
  *(undefined8 *)(unaff_x20 + _DAT_1130a3cf8) = param_1;
  _swift_bridgeObjectRelease(uVar4);
  FUN_1049e8d8c();
  uVar2 = 0;
  FUN_1049e4470(&PTR____CFConstantStringClassReference_110da4e78,uVar4);
  _swift_bridgeObjectRelease(uVar4);
  if ((uVar2 & 1) != 0) {
    do {
      lVar1 = _DAT_1130a3cf8;
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_1130a3cf8);
      ppuVar3 = &PTR____CFConstantStringClassReference_110da4e58;
      _objc_retain(&PTR____CFConstantStringClassReference_110da4e58);
      _swift_bridgeObjectRetain(uVar5);
      FUN_1049df394(&uStack_58,ppuVar3);
      _objc_release(uStack_58);
      uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
      *(undefined8 *)(unaff_x20 + lVar1) = uVar5;
      _swift_bridgeObjectRelease(uVar4);
      FUN_1049e8d8c();
      uVar2 = 0;
      FUN_1049e4470(&PTR____CFConstantStringClassReference_110da4e78,uVar4);
      _swift_bridgeObjectRelease(uVar4);
    } while ((uVar2 & 1) != 0);
  }
  return;
}



/* Entry: 1049e8d4c; end: 1049e8d8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049e8d4c(undefined8 *param_1,long *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*param_2 + _DAT_1130a3cf8);
  *(undefined8 *)(*param_2 + _DAT_1130a3cf8) = *param_1;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  FUN_1049e8df0();
  return;
}



/* Entry: 1049e8d8c; end: 1049e8def;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1049e8d8c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_1130a3cf8;
  lVar2 = *(long *)(unaff_x20 + _DAT_1130a3cf8);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = unaff_x20;
    FUN_1049e8f7c();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar4);
    lVar2 = 0;
  }
  _swift_bridgeObjectRetain(lVar2);
  return lVar3;
}



/* Entry: 1049e8df0; end: 1049e8edb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049e8df0(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uStack_58;
  
  FUN_1049e8d8c();
  uVar2 = 0;
  FUN_1049e4470(&PTR____CFConstantStringClassReference_110da4e78,param_1);
  _swift_bridgeObjectRelease(param_1);
  if ((uVar2 & 1) != 0) {
    do {
      lVar1 = _DAT_1130a3cf8;
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_1130a3cf8);
      ppuVar3 = &PTR____CFConstantStringClassReference_110da4e58;
      _objc_retain(&PTR____CFConstantStringClassReference_110da4e58);
      _swift_bridgeObjectRetain(uVar5);
      FUN_1049df394(&uStack_58,ppuVar3);
      _objc_release(uStack_58);
      uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
      *(undefined8 *)(unaff_x20 + lVar1) = uVar5;
      _swift_bridgeObjectRelease(uVar4);
      FUN_1049e8d8c();
      uVar2 = 0;
      FUN_1049e4470(&PTR____CFConstantStringClassReference_110da4e78,uVar4);
      _swift_bridgeObjectRelease(uVar4);
    } while ((uVar2 & 1) != 0);
  }
  return;
}



/* Entry: 1049e8edc; end: 1049e8f0f;  */

undefined1  [16] FUN_1049e8edc(long *param_1)

{
  long *plVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  param_1[1] = unaff_x20;
  plVar1 = param_1;
  FUN_1049e8d8c();
  *param_1 = (long)plVar1;
  auVar2._8_8_ = param_1;
  auVar2._0_8_ = FUN_1049e8f10;
  return auVar2;
}



/* Entry: 1049e8f10; end: 1049e8f7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049e8f10(undefined8 *param_1,uint param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = *(undefined8 *)(param_1[1] + _DAT_1130a3cf8);
  *(undefined8 *)(param_1[1] + _DAT_1130a3cf8) = uVar1;
  if ((param_2 & 1) != 0) {
    _swift_bridgeObjectRetain(uVar1);
    _swift_bridgeObjectRelease(uVar2);
    FUN_1049e8df0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
    return;
  }
  _swift_bridgeObjectRelease(uVar2);
  FUN_1049e8df0();
  return;
}



/* Entry: 1049e8f7c; end: 1049e91eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1049e8f7c(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  uVar6 = 0;
  plVar1 = (long *)(param_1 + _DAT_1130a3c60);
  _swift_beginAccess(plVar1,auStack_a8,0,0);
  lVar5 = *plVar1;
  lVar2 = plVar1[1];
  lVar7 = plVar1[2];
  lVar3 = plVar1[3];
  lVar9 = plVar1[4];
  lVar8 = lVar9;
  lVar10 = lVar5;
  lVar11 = lVar2;
  lVar12 = lVar7;
  lVar13 = lVar3;
  if (lVar5 == 0) {
    plVar1 = (long *)(param_1 + _DAT_1130a3c68);
    _swift_beginAccess(plVar1,auStack_c0,0,0);
    lVar10 = *plVar1;
    if (lVar10 != 0) {
      lVar13 = plVar1[3];
      lVar8 = plVar1[4];
      lVar11 = plVar1[1];
      lVar12 = plVar1[2];
      _swift_unknownObjectRetain(lVar10);
      _swift_unknownObjectRetain(lVar11);
      _swift_unknownObjectRetain(lVar12);
      _swift_unknownObjectRetain(lVar13);
      _swift_unknownObjectRetain(lVar8);
      goto LAB_1049e9040;
    }
    uStack_88 = 0;
    lStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
LAB_1049e9040:
    _swift_unknownObjectRetain(lVar8);
    FUN_1049e1a74(lVar5,lVar2,lVar7,lVar3,lVar9);
    _swift_unknownObjectRelease(lVar8);
    _swift_unknownObjectRelease(lVar13);
    _swift_unknownObjectRelease(lVar12);
    _swift_unknownObjectRelease(lVar11);
    _swift_unknownObjectRelease(lVar10);
    uVar4 = 0xd000000000000017;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000017,0x800000010f223800);
    lVar5 = lVar8;
    _objc_msgSend(lVar8,PTR_s_fb_objectForInfoDictionaryKey__1125c5f58,uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _swift_unknownObjectRelease(lVar8);
    if (lVar5 == 0) {
      uStack_108 = 0;
      lStack_110 = 0;
      lStack_f8 = 0;
      uStack_100 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&lStack_110,lVar5);
      _swift_unknownObjectRelease(lVar5);
    }
    uStack_88 = uStack_108;
    lStack_90 = lStack_110;
    lStack_78 = lStack_f8;
    uStack_80 = uStack_100;
    if (lStack_f8 != 0) {
      uVar4 = 0x1130a3d78;
      func_0x0001048db364(0x1130a3d78);
      _swift_dynamicCast(&lStack_110,&lStack_90,PTR___sypN_11034f1a8 + 8,uVar4,6);
      lVar5 = lStack_110;
      if ((uVar6 & 1) != 0) {
        lVar7 = lStack_110;
        func_0x000104994468(lStack_110);
        _swift_bridgeObjectRelease(lVar5);
        return lVar7;
      }
      goto LAB_1049e9170;
    }
  }
  func_0x0001049eab14(&lStack_90,0x11309c428);
LAB_1049e9170:
  lVar5 = 0x1130a3d70;
  func_0x0001048db364();
  _swift_initStackObject();
  *(undefined8 *)(lVar5 + 0x18) = 2;
  *(undefined8 *)(lVar5 + 0x10) = 1;
  *(undefined8 *)(lVar5 + 0x20) = &PTR____CFConstantStringClassReference_110da4eb8;
  _objc_retain();
  lVar7 = lVar5;
  FUN_1049dc7e0(lVar5);
  _swift_setDeallocating(lVar5);
  func_0x0001049eadf0((undefined8 *)(lVar5 + 0x20));
  return lVar7;
}



/* Entry: 1049e91ec; end: 1049e925b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049e91ec(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 in_stack_ffffffffffffffc8;
  
  uVar4 = param_1;
  FUN_1049e8d8c();
  _objc_retain(param_1);
  FUN_1049df394(&stack0xffffffffffffffc8,param_1);
  _objc_release(in_stack_ffffffffffffffc8);
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_1130a3cf8);
  *(undefined8 *)(unaff_x20 + _DAT_1130a3cf8) = uVar4;
  _swift_bridgeObjectRelease(uVar5);
  FUN_1049e8d8c();
  uVar2 = 0;
  FUN_1049e4470(&PTR____CFConstantStringClassReference_110da4e78,uVar5);
  _swift_bridgeObjectRelease(uVar5);
  if ((uVar2 & 1) != 0) {
    do {
      lVar1 = _DAT_1130a3cf8;
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_1130a3cf8);
      ppuVar3 = &PTR____CFConstantStringClassReference_110da4e58;
      _objc_retain(&PTR____CFConstantStringClassReference_110da4e58);
      _swift_bridgeObjectRetain(uVar5);
      FUN_1049df394(&uStack_58,ppuVar3);
      _objc_release(uStack_58);
      uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
      *(undefined8 *)(unaff_x20 + lVar1) = uVar5;
      _swift_bridgeObjectRelease(uVar4);
      FUN_1049e8d8c();
      uVar2 = 0;
      FUN_1049e4470(&PTR____CFConstantStringClassReference_110da4e78,uVar4);
      _swift_bridgeObjectRelease(uVar4);
    } while ((uVar2 & 1) != 0);
  }
  return;
}



/* Entry: 1049e925c; end: 1049e935b; -[FBSDKSettings enableLoggingBehavior:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049e925c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain();
  lVar1 = param_1;
  FUN_1049e8d8c();
  _objc_retain(param_3);
  FUN_1049df394(&uStack_38,param_3);
  _objc_release(uStack_38);
  uVar2 = *(undefined8 *)(param_1 + _DAT_1130a3cf8);
  *(long *)(param_1 + _DAT_1130a3cf8) = lVar1;
  _swift_bridgeObjectRelease(uVar2);
  FUN_1049e8df0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1049e935c; end: 1049e93e7; -[FBSDKSettings disableLoggingBehavior:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049e935c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain();
  lVar1 = param_1;
  FUN_1049e8d8c();
  FUN_1049ea7b4(param_3);
  _objc_release();
  uVar2 = *(undefined8 *)(param_1 + _DAT_1130a3cf8);
  *(long *)(param_1 + _DAT_1130a3cf8) = lVar1;
  _swift_bridgeObjectRelease(uVar2);
  FUN_1049e8df0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1049e93e8; end: 1049e941b; -[FBSDKSettings shouldUseTokenOptimizations] */

uint FUN_1049e93e8(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x0001049e95e8();
  _objc_release(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 1049e941c; end: 1049e941f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_1049e941c(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  byte bVar9;
  long lVar10;
  long unaff_x20;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lVar5 = _DAT_1130a3d00;
  bVar9 = *(byte *)(unaff_x20 + _DAT_1130a3d00);
  if (bVar9 != 2) goto LAB_1049e97ec;
  plVar1 = (long *)(unaff_x20 + _DAT_1130a3c60);
  _swift_beginAccess(plVar1,auStack_98,0,0);
  lVar7 = *plVar1;
  lVar3 = plVar1[1];
  lVar2 = plVar1[2];
  lVar4 = plVar1[3];
  lVar13 = plVar1[4];
  lVar10 = lVar2;
  lVar11 = lVar13;
  lVar12 = lVar7;
  lVar14 = lVar4;
  lStack_e0 = lVar3;
  if (lVar7 == 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_1130a3c68);
    _swift_beginAccess(plVar1,auStack_b0,0,0);
    lVar12 = *plVar1;
    if (lVar12 != 0) {
      lVar14 = plVar1[3];
      lVar11 = plVar1[4];
      lStack_e0 = plVar1[1];
      lVar10 = plVar1[2];
      _swift_unknownObjectRetain(lVar12);
      _swift_unknownObjectRetain(lStack_e0);
      _swift_unknownObjectRetain(lVar10);
      _swift_unknownObjectRetain(lVar14);
      _swift_unknownObjectRetain(lVar11);
      goto LAB_1049e96cc;
    }
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
LAB_1049e97d4:
    FUN_1049eab14(&uStack_80,0x11309c428);
LAB_1049e97e4:
    bVar9 = 1;
  }
  else {
LAB_1049e96cc:
    _swift_unknownObjectRetain(lVar10);
    FUN_1049e1a74(lVar7,lVar3,lVar2,lVar4,lVar13);
    _swift_unknownObjectRelease(lVar11);
    _swift_unknownObjectRelease(lVar14);
    _swift_unknownObjectRelease(lVar10);
    _swift_unknownObjectRelease(lStack_e0);
    _swift_unknownObjectRelease(lVar12);
    uVar6 = 0xd000000000000033;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000033,0x800000010f223950);
    lVar7 = lVar10;
    _objc_msgSend(lVar10,PTR_s_fb_objectForKey__1125c5f60,uVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    _swift_unknownObjectRelease(lVar10);
    if (lVar7 == 0) {
      uStack_c8 = 0;
      uStack_d0 = 0;
      lStack_b8 = 0;
      uStack_c0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_d0,lVar7);
      _swift_unknownObjectRelease(lVar7);
    }
    uStack_78 = uStack_c8;
    uStack_80 = uStack_d0;
    lStack_68 = lStack_b8;
    uStack_70 = uStack_c0;
    if (lStack_b8 == 0) goto LAB_1049e97d4;
    puVar8 = &uStack_d0;
    _swift_dynamicCast(puVar8,&uStack_80,PTR___sypN_11034f1a8 + 8,PTR___sSbN_11034dd40,6);
    if ((int)puVar8 == 0) goto LAB_1049e97e4;
    bVar9 = (byte)uStack_d0;
  }
  *(byte *)(unaff_x20 + lVar5) = bVar9;
LAB_1049e97ec:
  return bVar9 & 1;
}



/* Entry: 1049e9420; end: 1049e944f; -[FBSDKSettings setShouldUseTokenOptimizations:] */

void FUN_1049e9420(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain();
  FUN_1049e9450(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1049e9450; end: 1049e980f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049e9450(uint param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x20;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  *(char *)(unaff_x20 + _DAT_1130a3d00) = (char)param_1;
  plVar1 = (long *)(unaff_x20 + _DAT_1130a3c60);
  _swift_beginAccess(plVar1,auStack_78,0,0);
  lVar2 = *plVar1;
  lVar4 = plVar1[1];
  lVar3 = plVar1[2];
  lVar5 = plVar1[3];
  lVar8 = plVar1[4];
  lVar9 = lVar3;
  lVar10 = lVar2;
  lVar11 = lVar5;
  lVar12 = lVar4;
  lVar13 = lVar8;
  if (lVar2 == 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_1130a3c68);
    _swift_beginAccess(plVar1,auStack_90,0,0);
    lVar10 = *plVar1;
    if (lVar10 == 0) {
      return;
    }
    lVar11 = plVar1[3];
    lVar13 = plVar1[4];
    lVar12 = plVar1[1];
    lVar9 = plVar1[2];
    _swift_unknownObjectRetain(lVar10);
    _swift_unknownObjectRetain(lVar12);
    _swift_unknownObjectRetain(lVar9);
    _swift_unknownObjectRetain(lVar11);
    _swift_unknownObjectRetain(lVar13);
  }
  FUN_1049e1a74(lVar2,lVar4,lVar3,lVar5,lVar8);
  _swift_unknownObjectRelease(lVar13);
  _swift_unknownObjectRelease(lVar11);
  _swift_unknownObjectRelease(lVar12);
  _swift_unknownObjectRelease(lVar10);
  uVar6 = (ulong)(param_1 & 1);
  __sSb10FoundationE19_bridgeToObjectiveCSo8NSNumberCyF(uVar6);
  uVar7 = 0xd000000000000033;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000033,0x800000010f223950);
  _objc_msgSend(lVar9,PTR_s_fb_setObject_forKey__1125c5f88,uVar6,uVar7);
  _objc_release(uVar6);
  _objc_release(uVar7);
  _swift_unknownObjectRelease(lVar9);
  return;
}



/* Entry: 1049e9810; end: 1049e986b;  */

undefined1  [16] FUN_1049e9810(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 unaff_x20;
  undefined1 auVar2 [16];
  
  *param_1 = unaff_x20;
  puVar1 = param_1;
  func_0x0001049e95e8();
  *(byte *)(param_1 + 1) = (byte)puVar1 & 1;
  auVar2._8_8_ = param_1 + 1;
  auVar2._0_8_ = 0x1049e9848;
  return auVar2;
}



/* Entry: 1049e986c; end: 1049e99f7;  */

bool FUN_1049e986c(double param_1)

{
  long lVar1;
  undefined1 *puVar2;
  ulong uVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  code *pcVar9;
  code *pcVar10;
  
  lVar1 = 0x11309c628;
  func_0x0001048db364();
  uVar3 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar4 = &stack0xffffffffffffff90 + -uVar3;
  puVar7 = puVar4 + -uVar3;
  lVar1 = 0;
  __s10Foundation4DateVMa();
  lVar8 = *(long *)(lVar1 + -8);
  uVar3 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar6 = (long)puVar7 - uVar3;
  lVar5 = lVar6 - uVar3;
  FUN_1049e99f8(puVar7);
  pcVar9 = *(code **)(lVar8 + 0x30);
  puVar2 = puVar7;
  (*pcVar9)(puVar7,1,lVar1);
  if ((int)puVar2 != 1) {
    pcVar10 = *(code **)(lVar8 + 0x20);
    (*pcVar10)(lVar5,puVar7,lVar1);
    func_0x0001049e9c38(puVar4);
    puVar2 = puVar4;
    (*pcVar9)(puVar4,1,lVar1);
    if ((int)puVar2 != 1) {
      (*pcVar10)(lVar6,puVar4,lVar1);
      __s10Foundation4DateV17timeIntervalSinceySdACF(lVar5);
      pcVar9 = *(code **)(lVar8 + 8);
      (*pcVar9)(lVar6,lVar1);
      (*pcVar9)(lVar5,lVar1);
      return 86400.0 < param_1;
    }
    (**(code **)(lVar8 + 8))(lVar5,lVar1);
    puVar7 = puVar4;
  }
  FUN_1049eab14(puVar7,0x11309c628);
  return false;
}



/* Entry: 1049e99f8; end: 1049e9e77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049e99f8(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  code *pcVar8;
  long lVar9;
  long unaff_x20;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  plVar1 = (long *)(unaff_x20 + _DAT_1130a3c60);
  _swift_beginAccess(plVar1,auStack_98,0,0);
  lVar6 = *plVar1;
  lVar3 = plVar1[1];
  lVar2 = plVar1[2];
  lVar4 = plVar1[3];
  lVar9 = plVar1[4];
  lVar10 = lVar2;
  lVar11 = lVar9;
  lVar12 = lVar6;
  lVar13 = lVar3;
  lVar14 = lVar4;
  if (lVar6 == 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_1130a3c68);
    _swift_beginAccess(plVar1,auStack_b0,0,0);
    lVar12 = *plVar1;
    if (lVar12 != 0) {
      lVar14 = plVar1[3];
      lVar11 = plVar1[4];
      lVar13 = plVar1[1];
      lVar10 = plVar1[2];
      _swift_unknownObjectRetain(lVar12);
      _swift_unknownObjectRetain(lVar13);
      _swift_unknownObjectRetain(lVar10);
      _swift_unknownObjectRetain(lVar14);
      _swift_unknownObjectRetain(lVar11);
      goto LAB_1049e9ac4;
    }
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
LAB_1049e9ac4:
    _swift_unknownObjectRetain(lVar10);
    FUN_1049e1a74(lVar6,lVar3,lVar2,lVar4,lVar9);
    _swift_unknownObjectRelease(lVar11);
    _swift_unknownObjectRelease(lVar14);
    _swift_unknownObjectRelease(lVar10);
    _swift_unknownObjectRelease(lVar13);
    _swift_unknownObjectRelease(lVar12);
    uVar5 = 0xd00000000000002e;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000002e,0x800000010f223a00);
    lVar6 = lVar10;
    _objc_msgSend(lVar10,PTR_s_fb_objectForKey__1125c5f60,uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _swift_unknownObjectRelease(lVar10);
    if (lVar6 == 0) {
      uStack_c8 = 0;
      uStack_d0 = 0;
      lStack_b8 = 0;
      uStack_c0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_d0,lVar6);
      _swift_unknownObjectRelease(lVar6);
    }
    uStack_78 = uStack_c8;
    uStack_80 = uStack_d0;
    lStack_68 = lStack_b8;
    uStack_70 = uStack_c0;
    if (lStack_b8 != 0) {
      lVar6 = 0;
      __s10Foundation4DateVMa();
      uVar5 = param_1;
      _swift_dynamicCast(param_1,&uStack_80,PTR___sypN_11034f1a8 + 8,lVar6,6);
      pcVar8 = *(code **)(*(long *)(lVar6 + -8) + 0x38);
      uVar7 = (uint)uVar5 ^ 1;
      goto LAB_1049e9c14;
    }
  }
  FUN_1049eab14(&uStack_80,0x11309c428);
  lVar6 = 0;
  __s10Foundation4DateVMa();
  pcVar8 = *(code **)(*(long *)(lVar6 + -8) + 0x38);
  uVar7 = 1;
LAB_1049e9c14:
  (*pcVar8)(param_1,uVar7,1,lVar6);
  return;
}



/* Entry: 1049e9e78; end: 1049e9e83; -[FBSDKSettings installTimestamp] */

void FUN_1049e9e78(undefined8 param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lVar5;
  
  lVar1 = 0x11309c628;
  func_0x0001048db364();
  puVar4 = &stack0xffffffffffffffd0 +
           -(*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  _objc_retain(param_1);
  FUN_1049e99f8(puVar4);
  _objc_release(param_1);
  lVar1 = 0;
  __s10Foundation4DateVMa();
  lVar5 = *(long *)(lVar1 + -8);
  puVar2 = puVar4;
  (**(code **)(lVar5 + 0x30))(puVar4,1,lVar1);
  uVar3 = 0;
  if ((int)puVar2 != 1) {
    __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF(0);
    (**(code **)(lVar5 + 8))(puVar4,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1049e9e84; end: 1049e9e8f; -[FBSDKSettings advertiserTrackingEnabledTimestamp] */

void FUN_1049e9e84(undefined8 param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lVar5;
  
  lVar1 = 0x11309c628;
  func_0x0001048db364();
  puVar4 = &stack0xffffffffffffffd0 +
           -(*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  _objc_retain(param_1);
  (*(code *)0x1049e9c38)(puVar4);
  _objc_release(param_1);
  lVar1 = 0;
  __s10Foundation4DateVMa();
  lVar5 = *(long *)(lVar1 + -8);
  puVar2 = puVar4;
  (**(code **)(lVar5 + 0x30))(puVar4,1,lVar1);
  uVar3 = 0;
  if ((int)puVar2 != 1) {
    __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF(0);
    (**(code **)(lVar5 + 8))(puVar4,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1049e9e90; end: 1049e9f53;  */

void FUN_1049e9e90(undefined8 param_1,undefined8 param_2,code *param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lVar5;
  
  lVar1 = 0x11309c628;
  func_0x0001048db364();
  puVar4 = &stack0xffffffffffffffd0 +
           -(*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  _objc_retain(param_1);
  (*param_3)(puVar4);
  _objc_release(param_1);
  lVar1 = 0;
  __s10Foundation4DateVMa();
  lVar5 = *(long *)(lVar1 + -8);
  puVar2 = puVar4;
  (**(code **)(lVar5 + 0x30))(puVar4,1,lVar1);
  uVar3 = 0;
  if ((int)puVar2 != 1) {
    __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF(0);
    (**(code **)(lVar5 + 8))(puVar4,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1049e9f54; end: 1049e9f5f; -[FBSDKSettings graphAPIDebugParamValue] */

void FUN_1049e9f54(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1049e9fcc();
  _objc_release(param_1);
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1,param_2);
    _swift_bridgeObjectRelease(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1049e9f60; end: 1049e9fcb;  */

void FUN_1049e9f60(undefined8 param_1,long param_2,code *param_3)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  (*param_3)();
  _objc_release(param_1);
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1,param_2);
    _swift_bridgeObjectRelease(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1049e9fcc; end: 1049e9fcf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1049e9fcc(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auVar5 [16];
  
  FUN_1049e8d8c();
  uVar2 = 0;
  FUN_1049e4470(&PTR____CFConstantStringClassReference_110da4e78,param_1);
  _swift_bridgeObjectRelease(param_1);
  if ((uVar2 & 1) == 0) {
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_1130a3cf8);
    uVar2 = 0;
    _swift_bridgeObjectRetain(uVar3);
    FUN_1049e4470(&PTR____CFConstantStringClassReference_110da4e58,uVar3);
    _swift_bridgeObjectRelease(uVar3);
    bVar1 = (uVar2 & 1) == 0;
    uVar3 = 0x676e696e726177;
    if (bVar1) {
      uVar3 = 0;
    }
    uVar4 = 0xe700000000000000;
    if (bVar1) {
      uVar4 = 0;
    }
  }
  else {
    uVar4 = 0xe400000000000000;
    uVar3 = 0x6f666e69;
  }
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = uVar3;
  return auVar5;
}



/* Entry: 1049e9fd0; end: 1049ea083;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1049e9fd0(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auVar5 [16];
  
  FUN_1049e8d8c();
  uVar2 = 0;
  FUN_1049e4470(&PTR____CFConstantStringClassReference_110da4e78,param_1);
  _swift_bridgeObjectRelease(param_1);
  if ((uVar2 & 1) == 0) {
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_1130a3cf8);
    uVar2 = 0;
    _swift_bridgeObjectRetain(uVar3);
    FUN_1049e4470(&PTR____CFConstantStringClassReference_110da4e58,uVar3);
    _swift_bridgeObjectRelease(uVar3);
    bVar1 = (uVar2 & 1) == 0;
    uVar3 = 0x676e696e726177;
    if (bVar1) {
      uVar3 = 0;
    }
    uVar4 = 0xe700000000000000;
    if (bVar1) {
      uVar4 = 0;
    }
  }
  else {
    uVar4 = 0xe400000000000000;
    uVar3 = 0x6f666e69;
  }
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = uVar3;
  return auVar5;
}



/* Entry: 1049ea084; end: 1049ea08f; -[FBSDKSettings graphAPIDebugParameterValue] */

void FUN_1049ea084(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  (*(code *)0x1049eaea0)();
  _objc_release(param_1);
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1,param_2);
    _swift_bridgeObjectRelease(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1049ea090; end: 1049ea0d3; -[FBSDKSettings isDomainErrorEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1049ea090(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130a3d08;
  _swift_beginAccess(param_1 + _DAT_1130a3d08,auStack_38,0,0);
  return *(undefined1 *)(param_1 + lVar1);
}



/* Entry: 1049ea0d4; end: 1049ea113;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1049ea0d4(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130a3d08;
  _swift_beginAccess(unaff_x20 + _DAT_1130a3d08,auStack_38,0,0);
  return *(undefined1 *)(unaff_x20 + lVar1);
}



/* Entry: 1049ea114; end: 1049ea163; -[FBSDKSettings setIsDomainErrorEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049ea114(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130a3d08;
  _swift_beginAccess(param_1 + _DAT_1130a3d08,auStack_48,1,0);
  *(undefined1 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 1049ea164; end: 1049ea1ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049ea164(undefined1 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130a3d08;
  _swift_beginAccess(unaff_x20 + _DAT_1130a3d08,auStack_48,1,0);
  *(undefined1 *)(unaff_x20 + lVar1) = param_1;
  return;
}



/* Entry: 1049ea1f0; end: 1049ea377;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049ea1f0(void)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  _swift_getObjectType();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130a3c60);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[4] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130a3c68);
  puVar1[4] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130a3c70);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined1 *)(unaff_x20 + _DAT_1130a3c78) = 2;
  *(undefined1 *)(unaff_x20 + _DAT_1130a3c80) = 2;
  *(undefined1 *)(unaff_x20 + _DAT_1130a3c88) = 2;
  *(undefined1 *)(unaff_x20 + _DAT_1130a3c90) = 2;
  *(undefined1 *)(unaff_x20 + _DAT_1130a3c98) = 2;
  *(undefined1 *)(unaff_x20 + _DAT_1130a3ca0) = 2;
  *(undefined1 *)(unaff_x20 + _DAT_1130a3ca8) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130a3cb0);
  puVar1[1] = 1;
  *puVar1 = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130a3cb8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130a3cc0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130a3cc8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130a3cd0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130a3cd8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130a3ce0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130a3ce8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(unaff_x20 + _DAT_1130a3cf0) = 1;
  *(undefined8 *)(unaff_x20 + _DAT_1130a3cf8) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_1130a3d00) = 2;
  *(undefined1 *)(unaff_x20 + _DAT_1130a3d08) = 1;
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1049ea378; end: 1049ea397; -[FBSDKSettings init] */

void FUN_1049ea378(void)

{
  FUN_1049ea1f0();
  return;
}



/* Entry: 1049ea398; end: 1049ea3cb;  */

void FUN_1049ea398(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1049ea3cc; end: 1049ea61b; -[FBSDKSettings .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049ea3cc(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_1130a3c60);
  func_0x0001049b0f84(*puVar1,puVar1[1],puVar1[2],puVar1[3],puVar1[4]);
  puVar1 = (undefined8 *)(param_1 + _DAT_1130a3c68);
  func_0x0001049b0f84(*puVar1,puVar1[1],puVar1[2],puVar1[3],puVar1[4]);
  func_0x0001007742d4(*(undefined8 *)(param_1 + _DAT_1130a3cb0),
                      ((undefined8 *)(param_1 + _DAT_1130a3cb0))[1]);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130a3cb8 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130a3cc0 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130a3cc8 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130a3cd0 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130a3cd8 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130a3ce0 + 8));
  FUN_1049ea794(*(undefined8 *)(param_1 + _DAT_1130a3cf0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_1130a3cf8));
  return;
}



/* Entry: 1049ea61c; end: 1049ea61f; -[FBSDKSettings validateConfiguration] */

void FUN_1049ea61c(void)

{
  return;
}



/* Entry: 1049ea620; end: 1049ea647;  */

undefined * FUN_1049ea620(void)

{
  return &UNK_1107bcc50;
}



/* Entry: 1049ea648; end: 1049ea673; +[FBSDKSettings unconfiguredDebugMessage] */

void FUN_1049ea648(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000165,0x800000010f228250);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1049ea674; end: 1049ea67f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049ea674(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130a3c60);
  _swift_beginAccess(puVar1,auStack_38,0,0);
  uVar3 = puVar1[1];
  uVar2 = puVar1[2];
  uVar4 = puVar1[3];
  uVar5 = puVar1[4];
  *param_1 = *puVar1;
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  param_1[3] = uVar4;
  param_1[4] = uVar5;
  FUN_1049e1a74();
  return;
}



/* Entry: 1049ea680; end: 1049ea6eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049ea680(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_48 [24];
  
  uVar7 = param_1[4];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130a3c60);
  _swift_beginAccess(puVar1,auStack_48,1,0);
  uVar2 = *puVar1;
  uVar4 = puVar1[1];
  uVar3 = puVar1[2];
  uVar5 = puVar1[3];
  uVar6 = puVar1[4];
  uVar10 = *param_1;
  uVar9 = param_1[3];
  uVar8 = param_1[2];
  puVar1[1] = param_1[1];
  *puVar1 = uVar10;
  puVar1[3] = uVar9;
  puVar1[2] = uVar8;
  puVar1[4] = uVar7;
  func_0x0001049b0f84(uVar2,uVar4,uVar3,uVar5,uVar6);
  return;
}



/* Entry: 1049ea6ec; end: 1049ea72b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1049ea6ec(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_1130a3c60;
  _swift_beginAccess(unaff_x20 + _DAT_1130a3c60,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x1049eaee0;
  return auVar2;
}



/* Entry: 1049ea72c; end: 1049ea737;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049ea72c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130a3c68);
  _swift_beginAccess(puVar1,auStack_38,0,0);
  uVar3 = puVar1[1];
  uVar2 = puVar1[2];
  uVar4 = puVar1[3];
  uVar5 = puVar1[4];
  *param_1 = *puVar1;
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  param_1[3] = uVar4;
  param_1[4] = uVar5;
  FUN_1049e1a74();
  return;
}



/* Entry: 1049ea738; end: 1049ea793;  */

void FUN_1049ea738(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + *param_4);
  _swift_beginAccess(puVar1,auStack_38,0,0);
  uVar3 = puVar1[1];
  uVar2 = puVar1[2];
  uVar4 = puVar1[3];
  uVar5 = puVar1[4];
  *param_1 = *puVar1;
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  param_1[3] = uVar4;
  param_1[4] = uVar5;
  FUN_1049e1a74();
  return;
}



/* Entry: 1049ea794; end: 1049ea7b3;  */

void FUN_1049ea794(long param_1)

{
  if (param_1 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)();
  return;
}



/* Entry: 1049ea7b4; end: 1049eab13;  */

undefined8 FUN_1049ea7b4(ulong param_1,undefined8 param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *unaff_x20;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong auStack_a8 [9];
  
  uVar9 = *unaff_x20;
  uVar7 = *(undefined8 *)(uVar9 + 0x28);
  uVar4 = param_1;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  __ss6HasherV5_seedABSi_tcfC(auStack_a8,uVar7);
  puVar1 = auStack_a8;
  __sSS4hash4intoys6HasherVz_tF(puVar1,uVar4,param_2);
  __ss6HasherV9_finalizeSiyF();
  _swift_bridgeObjectRelease(param_2);
  uVar6 = -1L << ((ulong)*(byte *)(uVar9 + 0x20) & 0x3f);
  uVar8 = (ulong)puVar1 & (uVar6 ^ 0xffffffffffffffff);
  if ((*(ulong *)(uVar9 + 0x38 + (uVar8 >> 3 & 0xfffffffffffff8)) >> (uVar8 & 0x3f) & 1) != 0) {
    do {
      uVar2 = *(ulong *)(*(long *)(uVar9 + 0x30) + uVar8 * 8);
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
      uVar3 = param_1;
      uVar5 = uVar4;
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
      if (uVar2 == uVar3 && uVar4 == uVar5) {
        _swift_bridgeObjectRelease(uVar4);
        _swift_bridgeObjectRelease(uVar5);
LAB_1049ea8dc:
        uVar4 = *unaff_x20;
        _swift_isUniquelyReferenced_nonNull_native();
        auStack_a8[0] = *unaff_x20;
        if ((uVar4 & 1) == 0) {
          FUN_1049dfb78();
        }
        uVar7 = *(undefined8 *)(*(long *)(auStack_a8[0] + 0x30) + uVar8 * 8);
        func_0x0001049ea940(uVar8);
        *unaff_x20 = auStack_a8[0];
        return uVar7;
      }
      uVar3 = uVar4;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
      _swift_bridgeObjectRelease(uVar4);
      _swift_bridgeObjectRelease(uVar5);
      if ((uVar2 & 1) != 0) goto LAB_1049ea8dc;
      uVar8 = uVar8 + 1 & ~uVar6;
      uVar4 = uVar3;
    } while ((*(ulong *)(uVar9 + 0x38 + (uVar8 >> 3 & 0xfffffffffffff8)) >> (uVar8 & 0x3f) & 1) != 0
            );
  }
  return 0;
}



/* Entry: 1049eab14; end: 1049eae6b;  */

undefined8 FUN_1049eab14(undefined8 param_1,long param_2)

{
  func_0x0001048db364();
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}


