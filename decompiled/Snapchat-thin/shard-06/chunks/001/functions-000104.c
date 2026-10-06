/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1044ee914; end: 1044ee937; -[_TtC24ScreenRecordingDetection23ScreenRecordingDetector sceneWillConnect:] */

void FUN_1044ee914(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  long lVar3;
  
  lVar1 = 0;
  __s10Foundation12NotificationVMa();
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  puVar2 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __s10Foundation12NotificationV36_unconditionallyBridgeFromObjectiveCyACSo14NSNotificationCSgFZ
            (puVar2,param_3);
  _objc_retain(param_1);
  FUN_1044ee938(puVar2,&UNK_11077f0b0,0x1044efb90,&UNK_11077f0c8,
                "ScreenRecordingDetector Scene Connect");
  _objc_release(param_1);
  (**(code **)(lVar3 + 8))(puVar2,lVar1);
  return;
}



/* Entry: 1044ee938; end: 1044eea97;  */

void FUN_1044ee938(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  __s10Foundation12NotificationV6objectypSgvg(&puStack_88);
  if (lStack_70 == 0) {
    func_0x00010006e7f4(&puStack_88);
  }
  else {
    uVar1 = 0;
    FUN_1044f0150(0,0x112d59528,&PTR__OBJC_CLASS___UIWindowScene_1126b6b80);
    puVar2 = &uStack_58;
    _swift_dynamicCast(puVar2,&puStack_88,PTR___sypN_11034f1a8 + 8,uVar1,6);
    if (((ulong)puVar2 & 1) != 0) {
      puVar3 = &UNK_11077efc0;
      _swift_allocObject(&UNK_11077efc0,0x18,7);
      _swift_unknownObjectWeakInit(puVar3 + 0x10);
      puVar4 = &UNK_11077f038;
      _swift_allocObject(&UNK_11077f038,0x18,7);
      _swift_unknownObjectWeakInit(puVar4 + 0x10,uStack_58);
      _swift_allocObject(param_2,0x20,7);
      *(undefined **)(param_2 + 0x10) = puVar3;
      *(undefined **)(param_2 + 0x18) = puVar4;
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0x42000000;
      puStack_78 = &UNK_1000f6b44;
      ppuVar5 = &puStack_88;
      lStack_70 = param_4;
      uStack_68 = param_3;
      lStack_60 = param_2;
      __Block_copy(ppuVar5);
      _swift_release(lStack_60);
      func_0x0001000d76cc(param_5,ppuVar5);
      __Block_release(ppuVar5);
      _objc_release(uStack_58);
    }
  }
  return;
}



/* Entry: 1044eea98; end: 1044eeabb; -[_TtC24ScreenRecordingDetection23ScreenRecordingDetector sceneDidDisconnect:] */

void FUN_1044eea98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  long lVar3;
  
  lVar1 = 0;
  __s10Foundation12NotificationVMa();
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  puVar2 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __s10Foundation12NotificationV36_unconditionallyBridgeFromObjectiveCyACSo14NSNotificationCSgFZ
            (puVar2,param_3);
  _objc_retain(param_1);
  FUN_1044ee938(puVar2,&UNK_11077f060,FUN_1044efac4,&UNK_11077f078,
                "ScreenRecordingDetector Scene Disconnect");
  _objc_release(param_1);
  (**(code **)(lVar3 + 8))(puVar2,lVar1);
  return;
}



/* Entry: 1044eeabc; end: 1044eeb8f;  */

void FUN_1044eeabc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  long lVar3;
  
  lVar1 = 0;
  __s10Foundation12NotificationVMa();
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  puVar2 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __s10Foundation12NotificationV36_unconditionallyBridgeFromObjectiveCyACSo14NSNotificationCSgFZ
            (puVar2,param_3);
  _objc_retain(param_1);
  FUN_1044ee938(puVar2,param_4,param_5,param_6,param_7);
  _objc_release(param_1);
  (**(code **)(lVar3 + 8))(puVar2,lVar1);
  return;
}



/* Entry: 1044eeb90; end: 1044eec03;  */

void FUN_1044eeb90(void)

{
  undefined *puVar1;
  
  _swift_getObjectType();
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  _objc_opt_self(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  func_0x00010bf68fa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d560();
  _objc_release(puVar1);
  _objc_msgSendSuper2(&stack0xffffffffffffffc0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1044eec04; end: 1044eec8b; -[_TtC24ScreenRecordingDetection23ScreenRecordingDetector dealloc] */

void FUN_1044eec04(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_1;
  _swift_getObjectType();
  puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  _objc_opt_self(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retain();
  func_0x00010bf68fa0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d560();
  _objc_release(puVar2);
  uStack_40 = param_1;
  uStack_38 = uVar1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1044eec8c; end: 1044eecc3; -[_TtC24ScreenRecordingDetection23ScreenRecordingDetector .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044eec8c(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130815e0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_1130815e8));
  return;
}



/* Entry: 1044eecc4; end: 1044eef0b;  */

ulong FUN_1044eecc4(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1044eeda8);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1044eedac);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    _swift_unknownObjectRetain(param_1);
    puVar4 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    _objc_opt_self(PTR__OBJC_CLASS___UIScreen_1126aea10);
    uVar5 = param_1;
    _swift_dynamicCastObjCClass(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    __ss18_CocoaArrayWrapperVyyXlSicig(param_1,uVar5);
    puVar4 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    _objc_opt_self(PTR__OBJC_CLASS___UIScreen_1126aea10);
    uVar5 = param_1;
    _swift_dynamicCastObjCClass(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  __sSS6appendyySSF(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_1044f0150(0,0x113081630,&PTR__OBJC_CLASS___UIScreen_1126aea10);
  uVar3 = 0;
  __ss9_typeName_9qualifiedSSypXp_SbtF();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar3);
  __sSS6appendyySSF(0x756f662074756220,0xeb0000000020646e);
  _swift_getObjectType(param_1);
  uVar3 = 0;
  __ss9_typeName_9qualifiedSSypXp_SbtF();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar3);
  __ss17_assertionFailure__5flagss5NeverOs12StaticStringV_SSs6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1044eee88);
  (*pcVar2)();
}



/* Entry: 1044eef0c; end: 1044ef067;  */

void FUN_1044eef0c(void)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  long lVar10;
  
  func_0x0001000285a8(0x113081620,&UNK_10dd0ef90);
  lVar9 = *unaff_x20;
  lVar4 = lVar9;
  __ss18_DictionaryStorageC4copy8originalAByxq_Gs05__RawaB0C_tFZ();
  if (*(long *)(lVar9 + 0x10) != 0) {
    lVar1 = lVar9 + 0x40;
    uVar6 = (1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar4 != lVar9 || lVar1 + uVar6 * 8 <= lVar4 + 0x40U) {
      _memmove(lVar4 + 0x40U,lVar1,uVar6 << 3);
    }
    lVar10 = 0;
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar9 + 0x10);
    uVar7 = 1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f);
    uVar6 = 0xffffffffffffffff;
    if ((*(byte *)(lVar9 + 0x20) & 0x3f) < 6) {
      uVar6 = ~(-1L << (uVar7 & 0x3f));
    }
    uVar6 = uVar6 & *(ulong *)(lVar9 + 0x40);
    if (uVar6 == 0) goto LAB_1044eefe8;
    do {
      uVar8 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar6 = uVar6 - 1 & uVar6;
      while( true ) {
        uVar8 = LZCOUNT(uVar8) | lVar10 << 6;
        uVar5 = *(undefined8 *)(*(long *)(lVar9 + 0x38) + uVar8 * 8);
        *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar8 * 8) =
             *(undefined8 *)(*(long *)(lVar9 + 0x30) + uVar8 * 8);
        *(undefined8 *)(*(long *)(lVar4 + 0x38) + uVar8 * 8) = uVar5;
        _swift_unknownObjectRetain();
        if (uVar6 != 0) break;
LAB_1044eefe8:
        do {
          lVar2 = lVar10 + 1;
          if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1044ef068);
            (*pcVar3)();
          }
          if ((long)(uVar7 + 0x3f >> 6) <= lVar2) goto LAB_1044ef040;
          uVar6 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar10 = lVar10 + 1;
        } while (uVar6 == 0);
        uVar8 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
        uVar6 = uVar6 - 1 & uVar6;
        lVar10 = lVar2;
      }
    } while( true );
  }
LAB_1044ef040:
  _swift_release(lVar9);
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 1044ef068; end: 1044ef82f;  */

void FUN_1044ef068(long param_1,ulong param_2)

{
  long lVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  ulong *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  
  lVar11 = *unaff_x20;
  lVar1 = *(long *)(lVar11 + 0x18);
  if (*(long *)(lVar11 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar13 = 0x113081620;
  func_0x0001000285a8(0x113081620,&UNK_10dd0ef90);
  lVar4 = lVar11;
  __ss18_DictionaryStorageC6resize8original8capacity4moveAByxq_Gs05__RawaB0C_SiSbtFZ
            (lVar11,lVar1,param_2,uVar13);
  if (*(long *)(lVar11 + 0x10) == 0) {
LAB_1044ef298:
    _swift_release(lVar11);
    *unaff_x20 = lVar4;
    return;
  }
  puVar12 = (ulong *)(lVar11 + 0x40);
  uVar9 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
  uVar16 = 0xffffffffffffffff;
  if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
    uVar16 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar16 = uVar16 & *puVar12;
  lVar1 = lVar4 + 0x40;
  lVar7 = 0;
  do {
    if (uVar16 == 0) {
      do {
        lVar15 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1044ef2c8);
          (*pcVar3)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar15) {
          if ((param_2 & 1) != 0) {
            uVar16 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
            if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
              *puVar12 = -1L << (uVar16 & 0x3f);
            }
            else {
              _bzero(puVar12,uVar16 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar11 + 0x10) = 0;
          }
          goto LAB_1044ef298;
        }
        uVar16 = puVar12[lVar15];
        lVar7 = lVar7 + 1;
      } while (uVar16 == 0);
      uVar6 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar16 = uVar16 - 1 & uVar16;
    }
    else {
      uVar6 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar16 = uVar16 - 1 & uVar16;
      lVar15 = lVar7;
    }
    uVar6 = LZCOUNT(uVar6) | lVar15 << 6;
    uVar14 = *(undefined8 *)(*(long *)(lVar11 + 0x30) + uVar6 * 8);
    uVar13 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + uVar6 * 8);
    if ((param_2 & 1) == 0) {
      _swift_unknownObjectRetain(uVar13);
    }
    uVar5 = *(ulong *)(lVar4 + 0x28);
    __ss6HasherV5_hash4seed_S2i_s6UInt64VtFZ(uVar5,uVar14);
    uVar10 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
    uVar5 = uVar5 & (uVar10 ^ 0xffffffffffffffff);
    uVar8 = uVar5 >> 6;
    uVar6 = -1L << (uVar5 & 0x3f) & (*(ulong *)(lVar1 + uVar8 * 8) ^ 0xffffffffffffffff);
    if (uVar6 == 0) {
      bVar2 = false;
      uVar6 = 0x3f - uVar10 >> 6;
      do {
        uVar5 = uVar8 + 1;
        if ((uVar5 == uVar6) && (bVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1044ef2cc);
          (*pcVar3)();
        }
        uVar8 = 0;
        if (uVar5 != uVar6) {
          uVar8 = uVar5;
        }
        bVar2 = (bool)(uVar5 == uVar6 | bVar2);
        uVar5 = *(ulong *)(lVar1 + uVar8 * 8);
      } while (uVar5 == 0xffffffffffffffff);
      uVar5 = ~uVar5;
      uVar6 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar8 << 6;
    }
    else {
      uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar5 & 0x7fffffffffffffc0;
    }
    uVar8 = uVar6 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar8) = 1L << (uVar6 & 0x3f) | *(ulong *)(lVar1 + uVar8);
    *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar6 * 8) = uVar14;
    *(undefined8 *)(*(long *)(lVar4 + 0x38) + uVar6 * 8) = uVar13;
    *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
    lVar7 = lVar15;
  } while( true );
}



/* Entry: 1044ef830; end: 1044ef90f;  */

void FUN_1044ef830(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  _objc_opt_self();
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf07b60();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  _objc_opt_self(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  func_0x00010bf68fa0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x2) {
    if (lRam0000000113644868 != -1) {
      _swift_once(0x113644868,0x1044edef4);
    }
  }
  else if (lRam0000000113644860 != -1) {
    _swift_once(0x113644860,FUN_1044edec0);
  }
  func_0x00010c104980(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1044ef910; end: 1044ef937;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044ef910(void)

{
  byte bVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  bVar1 = *(byte *)(unaff_x20 + 0x18);
  _swift_beginAccess(lVar2 + 0x10,auStack_38,0,0);
  lVar2 = lVar2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar2 != 0) {
    *(byte *)(lVar2 + _DAT_1130815d8) = bVar1 & 1;
    _objc_release();
  }
  return;
}



/* Entry: 1044ef938; end: 1044ef997;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044ef938(void)

{
  long lVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  _swift_beginAccess(lVar1 + 0x10,auStack_48,0,0);
  lVar1 = lVar1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + _DAT_1130815f0) = uVar2;
    _objc_release();
  }
  return;
}



/* Entry: 1044ef998; end: 1044efaa3;  */

undefined * FUN_1044ef998(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong *puVar7;
  ulong uStack_50;
  ulong uStack_48;
  
  puVar6 = *(undefined **)(param_1 + 0x10);
  if (puVar6 == (undefined *)0x0) {
    return PTR___swiftEmptyDictionarySingleton_11034f1d0;
  }
  uVar4 = 0;
  func_0x0001000285a8(0x113081620);
  puVar2 = puVar6;
  __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ();
  uStack_48 = *(ulong *)(param_1 + 0x28);
  uStack_50 = *(ulong *)(param_1 + 0x20);
  uVar3 = uStack_50;
  func_0x0001000a7158();
  if ((uVar4 & 1) == 0) {
    puVar7 = (ulong *)(param_1 + 0x30);
    do {
      puVar6 = puVar6 + -1;
      uVar5 = uVar3 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar2 + uVar5 + 0x40) = *(ulong *)(puVar2 + uVar5 + 0x40) | 1L << (uVar3 & 0x3f);
      *(ulong *)(*(long *)(puVar2 + 0x30) + uVar3 * 8) = uStack_50;
      *(ulong *)(*(long *)(puVar2 + 0x38) + uVar3 * 8) = uStack_48;
      if (SCARRY8(*(long *)(puVar2 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1044efaa4);
        (*pcVar1)();
      }
      *(long *)(puVar2 + 0x10) = *(long *)(puVar2 + 0x10) + 1;
      if (puVar6 == (undefined *)0x0) {
        _swift_unknownObjectRetain(uStack_48);
        return puVar2;
      }
      uVar5 = puVar7[1];
      uStack_50 = *puVar7;
      _swift_unknownObjectRetain(uStack_48);
      uVar3 = uStack_50;
      func_0x0001000a7158();
      puVar7 = puVar7 + 2;
      uStack_48 = uVar5;
    } while ((uVar4 & 1) == 0);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044efa74);
  (*pcVar1)();
}



/* Entry: 1044efaa4; end: 1044efac3;  */

void FUN_1044efaa4(void)

{
  _objc_opt_self(&PTR_PTR_1129c57c8);
  return;
}



/* Entry: 1044efac4; end: 1044efc1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044efac4(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  _swift_beginAccess(lVar1 + 0x10,auStack_48,0,0);
  lVar1 = lVar1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 != 0) {
    _swift_beginAccess(lVar2 + 0x10,auStack_60,0,0);
    lVar2 = lVar2 + 0x10;
    _swift_unknownObjectWeakLoadStrong();
    if (lVar2 == 0) {
      _objc_release(lVar1);
    }
    else {
      _swift_beginAccess(lVar1 + _DAT_1130815e0,auStack_78,0x21,0);
      lVar3 = lVar2;
      func_0x0001044eee88(lVar2);
      _swift_endAccess(auStack_78);
      _objc_release(lVar1);
      _objc_release(lVar2);
      _swift_unknownObjectRelease(lVar3);
    }
  }
  return;
}



/* Entry: 1044efc1c; end: 1044efc47;  */

void FUN_1044efc1c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1044efc48; end: 1044efe67;  */

void FUN_1044efc48(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  _swift_beginAccess(lVar1 + 0x10,auStack_58,0,0);
  lVar1 = lVar1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 != 0) {
    _swift_beginAccess(lVar2 + 0x10,auStack_70,0,0);
    lVar2 = lVar2 + 0x10;
    _swift_unknownObjectWeakLoadStrong();
    if (lVar2 != 0) {
      lVar3 = lVar2;
      func_0x00010bef0360();
      lVar4 = lVar2;
      if (lVar3 != -1) {
        func_0x00010c279540();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = param_1;
        func_0x00010c14f980();
        _objc_release(param_1);
        func_0x00010c14f980();
        lVar4 = lVar1;
        lVar1 = lVar2;
        if ((param_2 != 1) && (lVar3 == 1)) {
          FUN_1044edf8c();
        }
      }
      _objc_release(lVar4);
    }
    _objc_release(lVar1);
  }
  return;
}



/* Entry: 1044efe68; end: 1044f00d7;  */

void FUN_1044efe68(void)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  long unaff_x20;
  long lVar12;
  ulong *puVar13;
  ulong uVar14;
  ulong uVar15;
  undefined *puVar16;
  undefined1 auStack_b0 [24];
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  ulong *puStack_80;
  ulong uStack_78;
  long lStack_70;
  ulong uStack_68;
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_b0,0,0);
  lVar5 = unaff_x20 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar5 == 0) {
    return;
  }
  puVar6 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  _objc_opt_self();
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar6;
  func_0x00010bf48a60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  uVar7 = 0;
  FUN_1044f0150(0,0x112d36e40,&PTR__OBJC_CLASS___UIScene_1126a5d50);
  uVar8 = uVar7;
  func_0x000100deaee4();
  puVar6 = puVar16;
  __sSh10FoundationE36_unconditionallyBridgeFromObjectiveCyShyxGSo5NSSetCSgFZ(puVar16,uVar7,uVar8);
  _objc_release();
  if (((ulong)puVar6 & 0xc000000000000001) == 0) {
    lStack_70 = 0;
    uVar14 = -1L << ((ulong)(byte)puVar6[0x20] & 0x3f);
    puVar13 = (ulong *)(puVar6 + 0x38);
    uVar11 = ~uVar14;
    uVar14 = -uVar14;
    uStack_68 = 0xffffffffffffffff;
    if (uVar14 < 0x40) {
      uStack_68 = ~(-1L << (uVar14 & 0x3f));
    }
    uStack_68 = uStack_68 & *puVar13;
  }
  else {
    puVar16 = (undefined *)((ulong)puVar6 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar6) {
      puVar16 = puVar6;
    }
    __ss10__CocoaSetV12makeIteratorAB0D0CyF();
    __sSh8IteratorV6_cocoaAByx_Gs10__CocoaSetVAACn_tcfC(&puStack_88);
    uVar11 = uStack_78;
    puVar6 = puStack_88;
    puVar13 = puStack_80;
  }
  lVar12 = lStack_70;
  uVar14 = uStack_68;
  do {
    lVar3 = lVar12;
    uVar15 = uVar14;
    if ((long)puVar6 < 0) {
      __ss10__CocoaSetV8IteratorC4nextyXlSgyF();
      if (puVar16 == (undefined *)0x0) {
LAB_1044f0094:
        func_0x000100deaf38(puVar6,puVar13,uVar11,lVar12,uVar14);
        _objc_release(lVar5);
        return;
      }
      puStack_98 = puVar16;
      _swift_dynamicCast(&puStack_90,&puStack_98,PTR___syXlN_11034f1a0 + 8,uVar7,7);
      puVar9 = PTR__OBJC_CLASS___UIWindowScene_1126b6b80;
      puVar16 = puStack_90;
    }
    else {
      while (uVar15 == 0) {
        lVar1 = lVar3 + 1;
        if (SCARRY8(lVar3,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1044f00d8);
          (*pcVar4)();
        }
        if ((long)(uVar11 + 0x40 >> 6) <= lVar1) {
          uVar14 = 0;
          goto LAB_1044f0094;
        }
        lVar3 = lVar1;
        uVar15 = puVar13[lVar1];
      }
      uVar2 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
      uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      uVar15 = uVar15 - 1 & uVar15;
      puVar16 = *(undefined **)
                 (*(long *)(puVar6 + 0x30) + LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) * 8 +
                 lVar3 * 0x200);
      _objc_retain(puVar16);
      puVar9 = PTR__OBJC_CLASS___UIWindowScene_1126b6b80;
    }
    PTR__OBJC_CLASS___UIWindowScene_1126b6b80 = puVar9;
    if (puVar16 == (undefined *)0x0) goto LAB_1044f0094;
    _objc_opt_self(puVar9);
    puVar10 = puVar16;
    _swift_dynamicCastObjCClass(puVar16,puVar9);
    if (puVar10 != (undefined *)0x0) {
      puVar9 = puVar16;
      _objc_retain(puVar16);
      FUN_1044ee65c(puVar10);
      _objc_release(puVar9);
    }
    _objc_release();
    lVar12 = lVar3;
    uVar14 = uVar15;
  } while( true );
}



/* Entry: 1044f00d8; end: 1044f012f;  */

void FUN_1044f00d8(void)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_38,0,0);
  uVar1 = unaff_x20 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (uVar1 != 0) {
    uVar2 = uVar1;
    func_0x0001044ef438();
    if ((uVar2 & 1) != 0) {
      FUN_1044ef830();
    }
    _objc_release(uVar1);
  }
  return;
}



/* Entry: 1044f0130; end: 1044f014f;  */

void FUN_1044f0130(uint param_1)

{
  __s8Dispatch0A8WorkItemC11isCancelledSbvgTj();
  if ((param_1 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb6f74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s8Dispatch0A8WorkItemC7performyyFTj_11034f8a8)();
  return;
}



/* Entry: 1044f0150; end: 1044f018f;  */

void FUN_1044f0150(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1044f0190; end: 1044f01cb;  */

void FUN_1044f0190(long param_1,long param_2)

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



/* Entry: 1044f01cc; end: 1044f09fb;  */

long FUN_1044f01cc(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1044f09fc; end: 1044f0a0b; -[SCLensSwipeInfo lens] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f09fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113081638));
  return;
}



/* Entry: 1044f0a0c; end: 1044f0a1b; -[SCLensSwipeInfo lensIndex] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1044f0a0c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113081640);
}



/* Entry: 1044f0a1c; end: 1044f0a2b; -[SCLensSwipeInfo timeInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f0a1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113081648));
  return;
}



/* Entry: 1044f0a2c; end: 1044f0a3b; -[SCLensSwipeInfo processingPerformanceInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f0a2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113081650));
  return;
}



/* Entry: 1044f0a3c; end: 1044f0a4b; -[SCLensSwipeInfo snapSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1044f0a3c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113081658);
}



/* Entry: 1044f0a4c; end: 1044f0ae7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f0a4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113081638) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113081640) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113081648) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113081650) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_113081658) = param_5;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044f0ae8; end: 1044f0b9f; -[SCLensSwipeInfo initWithLens:lensIndex:timeInfo:processingPerformanceInfo:snapSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f0ae8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_113081638) = param_3;
  *(undefined8 *)(param_1 + _DAT_113081640) = param_4;
  *(undefined8 *)(param_1 + _DAT_113081648) = param_5;
  *(undefined8 *)(param_1 + _DAT_113081650) = param_6;
  *(undefined8 *)(param_1 + _DAT_113081658) = param_7;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_msgSendSuper2(&lStack_50,puVar1);
  return;
}



/* Entry: 1044f0ba0; end: 1044f0bdf;  */

undefined8 FUN_1044f0ba0(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_allocWithZone();
  uVar1 = param_1;
  FUN_1044f120c(param_1);
  FUN_1044f14a8(param_1);
  return uVar1;
}



/* Entry: 1044f0be0; end: 1044f0be3; -[SCLensSwipeInfo copyWithZone:] */

void FUN_1044f0be0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1044f0be4; end: 1044f0c17; -[SCLensSwipeInfo description] */

void FUN_1044f0be4(void)

{
  undefined1 auStack_a8 [152];
  
  FUN_1044f14dc(auStack_a8);
  FUN_1044f14a8(auStack_a8);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044f0c18; end: 1044f0c5f; -[SCLensSwipeInfo init] */

void FUN_1044f0c18(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"LensSwipesAPI/LensSwipeInfoWrapper.swift",
             0x28,2,0x3e,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044f0c60);
  (*pcVar1)();
}



/* Entry: 1044f0c60; end: 1044f0c7b; +[SCLensSwipeInfoBuilder lensSwipeInfo] */

void FUN_1044f0c60(void)

{
  _swift_getObjCClassMetadata();
  _objc_allocWithZone();
  func_0x00010bfee200();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044f0c7c; end: 1044f0cbb; +[SCLensSwipeInfoBuilder lensSwipeInfoWithExistingLensSwipeInfo:] */

void FUN_1044f0c7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  FUN_1044f1610(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1044f0cbc; end: 1044f0d1b; -[SCLensSwipeInfoBuilder withLens:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1044f0cbc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_113081660);
  *(undefined8 *)(param_1 + _DAT_113081660) = param_3;
  _objc_retain(param_3);
  _objc_retain();
  _objc_retainAutoreleaseReturnValue(param_1);
  _objc_release(param_3);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 1044f0d1c; end: 1044f0d33; -[SCLensSwipeInfoBuilder withLensIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f0d1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_113081668);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1044f0d34; end: 1044f0d7b; -[SCLensSwipeInfoBuilder withTimeInfo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1044f0d34(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_113081670);
  *(undefined8 *)(param_1 + _DAT_113081670) = param_3;
  _objc_retain(param_3);
  _objc_retainAutoreleaseReturnValue(param_1);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 1044f0d7c; end: 1044f0dc3; -[SCLensSwipeInfoBuilder withProcessingPerformanceInfo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1044f0d7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_113081678);
  *(undefined8 *)(param_1 + _DAT_113081678) = param_3;
  _objc_retain(param_3);
  _objc_retainAutoreleaseReturnValue(param_1);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 1044f0dc4; end: 1044f0ddb; -[SCLensSwipeInfoBuilder withSnapSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f0dc4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_113081680);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1044f0ddc; end: 1044f0fbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f0ddc(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lStack_60;
  long lStack_58;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113081668);
  if (*(char *)(puVar1 + 1) == '\x01') {
    uVar8 = 0;
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
  }
  else {
    uVar8 = *puVar1;
  }
  lVar3 = *(long *)(unaff_x20 + _DAT_113081670);
  if (lVar3 == 0) {
    FUN_1044f1738(0x6f666e49656d6974,0xe800000000000000);
    _swift_willThrow();
  }
  else {
    lVar7 = *(long *)(unaff_x20 + _DAT_113081678);
    if (lVar7 == 0) {
      _objc_retain();
      FUN_1044f1738(0xd000000000000019,0x800000010f2050c0);
      _swift_willThrow();
    }
    else {
      if (*(char *)((undefined8 *)(unaff_x20 + _DAT_113081680) + 1) != '\x01') {
        uVar9 = *(undefined8 *)(unaff_x20 + _DAT_113081680);
        uVar6 = *(undefined8 *)(unaff_x20 + _DAT_113081660);
        lVar4 = lVar3;
        FUN_1044f18e0();
        lVar5 = lVar4;
        _objc_allocWithZone();
        *(undefined8 *)(lVar5 + _DAT_113081638) = uVar6;
        *(undefined8 *)(lVar5 + _DAT_113081640) = uVar8;
        *(long *)(lVar5 + _DAT_113081648) = lVar3;
        *(long *)(lVar5 + _DAT_113081650) = lVar7;
        *(undefined8 *)(lVar5 + _DAT_113081658) = uVar9;
        puVar2 = PTR_s_init_1125d9248;
        lStack_60 = lVar5;
        lStack_58 = lVar4;
        _objc_retain(lVar3);
        _objc_retain(lVar7);
        _objc_retain(uVar6);
        _objc_msgSendSuper2(&lStack_60,puVar2);
        return;
      }
      _objc_retain();
      _objc_retain(lVar7);
      FUN_1044f1738(0x72756f5370616e73,0xea00000000006563);
      _swift_willThrow();
      _objc_release(lVar3);
      lVar3 = lVar7;
    }
    _objc_release(lVar3);
  }
  return;
}



/* Entry: 1044f0fbc; end: 1044f1027; -[SCLensSwipeInfoBuilder build] */

/* WARNING: Removing unreachable block (ram,0x0001044f1008) */

void FUN_1044f0fbc(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1044f0ddc();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1044f1028; end: 1044f10b7; -[SCLensSwipeInfoBuilder safeBuildAndReturnError:] */

/* WARNING: Removing unreachable block (ram,0x0001044f1064) */
/* WARNING: Removing unreachable block (ram,0x0001044f1098) */
/* WARNING: Removing unreachable block (ram,0x0001044f1068) */

void FUN_1044f1028(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1044f0ddc();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1044f10b8; end: 1044f1143; -[SCLensSwipeInfoBuilder init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f10b8(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_113081660) = 0;
  puVar1 = (undefined8 *)(param_1 + _DAT_113081668);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(param_1 + _DAT_113081670) = 0;
  *(undefined8 *)(param_1 + _DAT_113081678) = 0;
  puVar1 = (undefined8 *)(param_1 + _DAT_113081680);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044f1144; end: 1044f1147;  */

void FUN_1044f1144(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1044f1148; end: 1044f118f; -[SCLensSwipeInfoBuilder .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f1148(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113081660));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113081670));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113081678));
  return;
}



/* Entry: 1044f1190; end: 1044f11c3;  */

void FUN_1044f1190(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1044f11c4; end: 1044f120b; -[SCLensSwipeInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f11c4(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113081638));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113081648));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113081650));
  return;
}



/* Entry: 1044f120c; end: 1044f14a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f120c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lStack_150;
  long lStack_148;
  undefined1 auStack_140 [80];
  long lStack_f0;
  long lStack_e8;
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
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _swift_getObjectType();
  uStack_78 = *param_1;
  uVar6 = param_1[1];
  *(undefined8 *)(unaff_x20 + _DAT_113081638) = uStack_78;
  *(undefined8 *)(unaff_x20 + _DAT_113081640) = uVar6;
  uVar7 = param_1[2];
  uVar8 = param_1[3];
  uVar9 = param_1[4];
  uVar6 = param_1[5];
  uVar1 = param_1[6];
  uVar10 = param_1[7];
  lVar3 = 0;
  uStack_88 = uVar1;
  uStack_80 = uVar6;
  FUN_1044f1cb4();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined8 *)(lVar4 + _DAT_1130816e0) = uVar7;
  *(undefined8 *)(lVar4 + _DAT_1130816e8) = uVar8;
  *(undefined8 *)(lVar4 + _DAT_1130816f0) = uVar9;
  *(undefined8 *)(lVar4 + _DAT_1130816f8) = uVar6;
  *(undefined8 *)(lVar4 + _DAT_113081700) = uVar1;
  *(undefined8 *)(lVar4 + _DAT_113081708) = uVar10;
  FUN_1044f1920(&uStack_78,&uStack_e0,0x112d3b7d8,&UNK_10d920690);
  FUN_1044f1920(&uStack_80,&uStack_e0,0x1130816d8,&UNK_10dd0f038);
  FUN_1044f1920(&uStack_88,&uStack_e0,0x1130816d8,&UNK_10dd0f038);
  plVar5 = &lStack_f0;
  lStack_f0 = lVar4;
  lStack_e8 = lVar3;
  _objc_msgSendSuper2(plVar5,PTR_s_init_1125d9248);
  *(long **)(unaff_x20 + _DAT_113081648) = plVar5;
  uStack_b8 = param_1[0xd];
  uStack_c0 = param_1[0xc];
  uStack_a8 = param_1[0xf];
  uStack_b0 = param_1[0xe];
  uStack_98 = param_1[0x11];
  uStack_a0 = param_1[0x10];
  uStack_d8 = param_1[9];
  uStack_e0 = param_1[8];
  uStack_c8 = param_1[0xb];
  uStack_d0 = param_1[10];
  lVar3 = 0;
  FUN_1044f2990();
  lVar4 = lVar3;
  _objc_allocWithZone();
  uVar6 = param_1[8];
  puVar2 = (undefined8 *)(lVar4 + _DAT_113081738);
  puVar2[1] = param_1[9];
  *puVar2 = uVar6;
  *(undefined8 *)(lVar4 + _DAT_113081740) = uStack_d0;
  *(undefined8 *)(lVar4 + _DAT_113081748) = uStack_c8;
  *(undefined8 *)(lVar4 + _DAT_113081750) = uStack_c0;
  *(undefined8 *)(lVar4 + _DAT_113081758) = uStack_b8;
  *(undefined8 *)(lVar4 + _DAT_113081760) = uStack_b0;
  *(undefined1 *)(lVar4 + _DAT_113081768) = (undefined1)uStack_a8;
  *(undefined8 *)(lVar4 + _DAT_113081770) = uStack_a0;
  *(undefined8 *)(lVar4 + _DAT_113081778) = uStack_98;
  func_0x0001044f0400(&uStack_e0,auStack_140);
  plVar5 = &lStack_150;
  lStack_150 = lVar4;
  lStack_148 = lVar3;
  _objc_msgSendSuper2(plVar5,PTR_s_init_1125d9248);
  *(long **)(unaff_x20 + _DAT_113081650) = plVar5;
  *(undefined8 *)(unaff_x20 + _DAT_113081658) = param_1[0x12];
  _objc_msgSendSuper2(&stack0xfffffffffffffea0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044f14a8; end: 1044f14db;  */

undefined8 FUN_1044f14a8(undefined8 param_1)

{
  (*(code *)(undefined *)0x1044f0468)();
  return param_1;
}



/* Entry: 1044f14dc; end: 1044f160f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f14dc(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
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
  
  uVar3 = *(undefined8 *)(param_2 + _DAT_113081638);
  uVar6 = *(undefined8 *)(param_2 + _DAT_113081640);
  lVar1 = *(long *)(param_2 + _DAT_113081648);
  uVar7 = *(undefined8 *)(lVar1 + _DAT_1130816e0);
  uVar8 = *(undefined8 *)(lVar1 + _DAT_1130816e8);
  uVar9 = *(undefined8 *)(lVar1 + _DAT_1130816f0);
  uVar4 = *(undefined8 *)(lVar1 + _DAT_1130816f8);
  uVar5 = *(undefined8 *)(lVar1 + _DAT_113081700);
  uVar10 = *(undefined8 *)(lVar1 + _DAT_113081708);
  func_0x0001044f2730(&uStack_b0,*(undefined8 *)(param_2 + _DAT_113081650));
  uVar2 = *(undefined8 *)(param_2 + _DAT_113081658);
  _objc_retain(uVar5);
  _objc_retain(uVar3);
  _objc_retain(uVar4);
  *param_1 = uVar3;
  param_1[1] = uVar6;
  param_1[2] = uVar7;
  param_1[3] = uVar8;
  param_1[4] = uVar9;
  param_1[5] = uVar4;
  param_1[6] = uVar5;
  param_1[7] = uVar10;
  param_1[0xd] = uStack_88;
  param_1[0xc] = uStack_90;
  param_1[0xf] = uStack_78;
  param_1[0xe] = uStack_80;
  param_1[0x11] = uStack_68;
  param_1[0x10] = uStack_70;
  param_1[9] = uStack_a8;
  param_1[8] = uStack_b0;
  param_1[0xb] = uStack_98;
  param_1[10] = uStack_a0;
  param_1[0x12] = uVar2;
  return;
}



/* Entry: 1044f1610; end: 1044f1737;  */

/* WARNING: Possible PIC construction at 0x0001044f1644: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001044f1648) */

void FUN_1044f1610(long param_1)

{
  if (param_1 == 0) {
    func_0x0001044f1900();
    _objc_allocWithZone();
  }
  else {
    func_0x0001044f1900();
    _objc_allocWithZone();
    _objc_retain(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfee210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1044f1738; end: 1044f18df;  */

undefined * FUN_1044f1738(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined1 auStack_90 [80];
  
  lVar2 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  puVar6 = auStack_90;
  _swift_initStackObject();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  uVar3 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  *(undefined8 *)(lVar2 + 0x20) = uVar3;
  *(undefined1 **)(lVar2 + 0x28) = puVar6;
  __ss11_StringGutsV4growyySiF(0x33);
  __sSS6appendyySSF(0xd000000000000027,0x800000010f11f8b0);
  __sSS6appendyySSF(param_1,param_2);
  __sSS6appendyySSF(0x736e752073692027,0xea00000000007465);
  puVar1 = PTR___sSSN_11034da80;
  *(undefined **)(lVar2 + 0x48) = PTR___sSSN_11034da80;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  *(undefined8 *)(lVar2 + 0x38) = 0xe000000000000000;
  lVar4 = lVar2;
  func_0x000100214a84(lVar2);
  _swift_setDeallocating(lVar2);
  func_0x000100f15a0c((undefined8 *)(lVar2 + 0x20));
  puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
  _objc_allocWithZone(PTR__OBJC_CLASS___NSError_1126ae858);
  uVar3 = 0xd000000000000023;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000023,0x800000010f11f880);
  lVar2 = lVar4;
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (lVar4,puVar1,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  _swift_bridgeObjectRelease(lVar4);
  func_0x00010c00e2e0(puVar5);
  _objc_release(uVar3);
  _objc_release(lVar2);
  return puVar5;
}



/* Entry: 1044f18e0; end: 1044f191f;  */

void FUN_1044f18e0(void)

{
  _objc_opt_self(&PTR_PTR_1129c5898);
  return;
}



/* Entry: 1044f1920; end: 1044f1967;  */

undefined8 FUN_1044f1920(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1044f1968; end: 1044f196b;  */

void FUN_1044f1968(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1044f196c; end: 1044f1a03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f196c(undefined8 *param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  uVar1 = param_1[1];
  *(undefined8 *)(unaff_x20 + _DAT_1130816e0) = *param_1;
  *(undefined8 *)(unaff_x20 + _DAT_1130816e8) = uVar1;
  *(undefined8 *)(unaff_x20 + _DAT_1130816f0) = param_1[2];
  uVar1 = param_1[4];
  *(undefined8 *)(unaff_x20 + _DAT_1130816f8) = param_1[3];
  *(undefined8 *)(unaff_x20 + _DAT_113081700) = uVar1;
  *(undefined8 *)(unaff_x20 + _DAT_113081708) = param_1[5];
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044f1a04; end: 1044f1a13; -[SCLensTimeInfo viewTimeSeconds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1044f1a04(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1130816e0);
}



/* Entry: 1044f1a14; end: 1044f1a23; -[SCLensTimeInfo recordingTimeSeconds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1044f1a14(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1130816e8);
}



/* Entry: 1044f1a24; end: 1044f1a33; -[SCLensTimeInfo gamePlayTimeSeconds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1044f1a24(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1130816f0);
}



/* Entry: 1044f1a34; end: 1044f1a43; -[SCLensTimeInfo startViewingTime] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f1a34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130816f8));
  return;
}



/* Entry: 1044f1a44; end: 1044f1a53; -[SCLensTimeInfo endViewingTime] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f1a44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113081700));
  return;
}



/* Entry: 1044f1a54; end: 1044f1a63; -[SCLensTimeInfo cpuViewTimeSeconds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1044f1a54(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113081708);
}



/* Entry: 1044f1a64; end: 1044f1b17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f1a64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130816e0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_1130816e8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_1130816f0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_1130816f8) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_113081700) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_113081708) = param_4;
  _objc_msgSendSuper2(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044f1b18; end: 1044f1bdf; -[SCLensTimeInfo initWithViewTimeSeconds:recordingTimeSeconds:gamePlayTimeSeconds:startViewingTime:endViewingTime:cpuViewTimeSeconds:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f1b18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  long lStack_60;
  long lStack_58;
  
  lVar2 = param_5;
  _swift_getObjectType();
  *(undefined8 *)(param_5 + _DAT_1130816e0) = param_1;
  *(undefined8 *)(param_5 + _DAT_1130816e8) = param_2;
  *(undefined8 *)(param_5 + _DAT_1130816f0) = param_3;
  *(undefined8 *)(param_5 + _DAT_1130816f8) = param_7;
  *(undefined8 *)(param_5 + _DAT_113081700) = param_8;
  *(undefined8 *)(param_5 + _DAT_113081708) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_60 = param_5;
  lStack_58 = lVar2;
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_msgSendSuper2(&lStack_60,puVar1);
  return;
}



/* Entry: 1044f1be0; end: 1044f1be3; -[SCLensTimeInfo copyWithZone:] */

void FUN_1044f1be0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1044f1be4; end: 1044f1bff; -[SCLensTimeInfo description] */

void FUN_1044f1be4(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044f1c00; end: 1044f1c7b; -[SCLensTimeInfo init] */

void FUN_1044f1c00(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"LensSwipesAPI/LensTimeInfoWrapper.swift",0x27
             ,2,0x3e,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044f1c48);
  (*pcVar1)();
}



/* Entry: 1044f1c7c; end: 1044f1cb3; -[SCLensTimeInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f1c7c(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130816f8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113081700));
  return;
}



/* Entry: 1044f1cb4; end: 1044f1cd3;  */

void FUN_1044f1cb4(void)

{
  _objc_opt_self(&PTR_PTR_1129c5a58);
  return;
}



/* Entry: 1044f1cd4; end: 1044f1d97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f1cd4(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  uVar2 = *param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113081738);
  puVar1[1] = param_1[1];
  *puVar1 = uVar2;
  uVar2 = param_1[3];
  *(undefined8 *)(unaff_x20 + _DAT_113081740) = param_1[2];
  *(undefined8 *)(unaff_x20 + _DAT_113081748) = uVar2;
  uVar2 = param_1[5];
  *(undefined8 *)(unaff_x20 + _DAT_113081750) = param_1[4];
  *(undefined8 *)(unaff_x20 + _DAT_113081758) = uVar2;
  *(undefined8 *)(unaff_x20 + _DAT_113081760) = param_1[6];
  *(undefined1 *)(unaff_x20 + _DAT_113081768) = *(undefined1 *)(param_1 + 7);
  uVar2 = param_1[9];
  *(undefined8 *)(unaff_x20 + _DAT_113081770) = param_1[8];
  *(undefined8 *)(unaff_x20 + _DAT_113081778) = uVar2;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044f1d98; end: 1044f1df3; -[SCLensProcessingPerformanceInfo coreSessionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f1d98(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113081738))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113081738);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1044f1df4; end: 1044f1e03; -[SCLensProcessingPerformanceInfo averageFps] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1044f1df4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113081740);
}



/* Entry: 1044f1e04; end: 1044f1e13; -[SCLensProcessingPerformanceInfo averageProcessingTime] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1044f1e04(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113081748);
}



/* Entry: 1044f1e14; end: 1044f1e23; -[SCLensProcessingPerformanceInfo processingTimeStandardDeviation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1044f1e14(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113081750);
}



/* Entry: 1044f1e24; end: 1044f1e33; -[SCLensProcessingPerformanceInfo applyDelay] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1044f1e24(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113081758);
}



/* Entry: 1044f1e34; end: 1044f1e43; -[SCLensProcessingPerformanceInfo lensReadyDelay] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1044f1e34(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113081760);
}



/* Entry: 1044f1e44; end: 1044f1e53; -[SCLensProcessingPerformanceInfo isRendered] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1044f1e44(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113081768);
}



/* Entry: 1044f1e54; end: 1044f1e63; -[SCLensProcessingPerformanceInfo firstFaceRenderTimestampSec] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1044f1e54(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113081770);
}



/* Entry: 1044f1e64; end: 1044f1e73; -[SCLensProcessingPerformanceInfo firstTriggerTimestampSec] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1044f1e64(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113081778);
}



/* Entry: 1044f1e74; end: 1044f206b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f1e74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined1 param_10)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_80 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113081738);
  *puVar1 = param_8;
  puVar1[1] = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_113081740) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113081748) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113081750) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113081758) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_113081760) = param_5;
  *(undefined1 *)(unaff_x20 + _DAT_113081768) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_113081770) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_113081778) = param_7;
  _objc_msgSendSuper2(auStack_80,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044f206c; end: 1044f2103; -[SCLensProcessingPerformanceInfo initWithCoreSessionId:averageFps:averageProcessingTime:processingTimeStandardDeviation:applyDelay:lensReadyDelay:isRendered:firstFaceRenderTimestampSec:firstTriggerTimestampSec:] */

void FUN_1044f206c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,long param_10)

{
  if (param_10 != 0) {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_10);
  }
  func_0x0001044f1f70(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}



/* Entry: 1044f2104; end: 1044f2107; -[SCLensProcessingPerformanceInfo copyWithZone:] */

void FUN_1044f2104(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1044f2108; end: 1044f213b; -[SCLensProcessingPerformanceInfo description] */

void FUN_1044f2108(void)

{
  undefined1 auStack_60 [80];
  
  func_0x0001044f2730(auStack_60);
  FUN_1044f27c0(auStack_60);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044f213c; end: 1044f2183; -[SCLensProcessingPerformanceInfo init] */

void FUN_1044f213c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "LensSwipesAPI/LensProcessingPerformanceInfoWrapper.swift",0x38,2,0x4b,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044f2184);
  (*pcVar1)();
}



/* Entry: 1044f2184; end: 1044f219f; +[SCLensProcessingPerformanceInfoBuilder lensProcessingPerformanceInfo] */

void FUN_1044f2184(void)

{
  _swift_getObjCClassMetadata();
  _objc_allocWithZone();
  func_0x00010bfee200();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044f21a0; end: 1044f21df; +[SCLensProcessingPerformanceInfoBuilder lensProcessingPerformanceInfoWithExistingLensProcessingPerformanceInfo:] */

void FUN_1044f21a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  FUN_1044f27f4(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1044f21e0; end: 1044f2243; -[SCLensProcessingPerformanceInfoBuilder withCoreSessionId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f21e0(long param_1,long param_2,long param_3)

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
  plVar1 = (long *)(param_1 + _DAT_113081780);
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



/* Entry: 1044f2244; end: 1044f225b; -[SCLensProcessingPerformanceInfoBuilder withAverageFps:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f2244(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_2 + _DAT_113081788);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1044f225c; end: 1044f2273; -[SCLensProcessingPerformanceInfoBuilder withAverageProcessingTime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f225c(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_2 + _DAT_113081790);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1044f2274; end: 1044f228b; -[SCLensProcessingPerformanceInfoBuilder withProcessingTimeStandardDeviation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f2274(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_2 + _DAT_113081798);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1044f228c; end: 1044f22a3; -[SCLensProcessingPerformanceInfoBuilder withApplyDelay:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f228c(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_2 + _DAT_1130817a0);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1044f22a4; end: 1044f22bb; -[SCLensProcessingPerformanceInfoBuilder withLensReadyDelay:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f22a4(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_2 + _DAT_1130817a8);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1044f22bc; end: 1044f22cb; -[SCLensProcessingPerformanceInfoBuilder withIsRendered:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f22bc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_1130817b0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1044f22cc; end: 1044f22e3; -[SCLensProcessingPerformanceInfoBuilder withFirstFaceRenderTimestampSec:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f22cc(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_2 + _DAT_1130817b8);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1044f22e4; end: 1044f22fb; -[SCLensProcessingPerformanceInfoBuilder withFirstTriggerTimestampSec:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f22e4(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_2 + _DAT_1130817c0);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1044f22fc; end: 1044f2543;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f22fc(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113081788);
  if (*(char *)(puVar1 + 1) == '\x01') {
    uStack_78 = 0;
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
  }
  else {
    uStack_78 = *puVar1;
  }
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113081790);
  if (*(char *)(puVar1 + 1) == '\x01') {
    uStack_80 = 0;
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
  }
  else {
    uStack_80 = *puVar1;
  }
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113081798);
  if (*(char *)(puVar1 + 1) == '\x01') {
    uVar9 = 0;
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
  }
  else {
    uVar9 = *puVar1;
  }
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130817a0);
  if (*(char *)(puVar1 + 1) == '\x01') {
    uVar10 = 0;
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
  }
  else {
    uVar10 = *puVar1;
  }
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130817a8);
  if (*(char *)(puVar1 + 1) == '\x01') {
    uVar11 = 0;
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
  }
  else {
    uVar11 = *puVar1;
  }
  bVar4 = *(byte *)(unaff_x20 + _DAT_1130817b0);
  if (bVar4 == 2) {
    *(undefined1 *)(unaff_x20 + _DAT_1130817b0) = 0;
  }
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130817b8);
  if (*(char *)(puVar1 + 1) == '\x01') {
    uVar7 = 0;
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
  }
  else {
    uVar7 = *puVar1;
  }
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130817c0);
  if (*(char *)(puVar1 + 1) == '\x01') {
    uVar8 = 0;
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
  }
  else {
    uVar8 = *puVar1;
  }
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113081780);
  uVar3 = ((undefined8 *)(unaff_x20 + _DAT_113081780))[1];
  FUN_1044f2990();
  lVar6 = param_1;
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(lVar6 + _DAT_113081738);
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  *(undefined8 *)(lVar6 + _DAT_113081740) = uStack_78;
  *(undefined8 *)(lVar6 + _DAT_113081748) = uStack_80;
  *(undefined8 *)(lVar6 + _DAT_113081750) = uVar9;
  *(undefined8 *)(lVar6 + _DAT_113081758) = uVar10;
  *(undefined8 *)(lVar6 + _DAT_113081760) = uVar11;
  *(byte *)(lVar6 + _DAT_113081768) = bVar4 & 1;
  *(undefined8 *)(lVar6 + _DAT_113081770) = uVar7;
  *(undefined8 *)(lVar6 + _DAT_113081778) = uVar8;
  puVar5 = PTR_s_init_1125d9248;
  lStack_70 = lVar6;
  lStack_68 = param_1;
  _swift_bridgeObjectRetain(uVar3);
  _objc_msgSendSuper2(&lStack_70,puVar5);
  return;
}



/* Entry: 1044f2544; end: 1044f2587; -[SCLensProcessingPerformanceInfoBuilder build] */

void FUN_1044f2544(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1044f22fc();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}


