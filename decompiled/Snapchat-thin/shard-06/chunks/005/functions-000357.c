/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104a03630; end: 104a03697; -[FBSDKSKAdNetworkEvent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a03630(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130a43b0 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_1130a43b8));
  return;
}



/* Entry: 104a03698; end: 104a0369f;  */

void FUN_104a03698(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000104a0369c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x20 + 0x60))();
  return;
}



/* Entry: 104a036a0; end: 104a03bf3;  */

undefined * FUN_104a036a0(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined *puVar14;
  ulong uVar15;
  undefined8 uStack_e8;
  undefined1 auStack_e0 [32];
  ulong uStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar14 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puVar13 = *(undefined **)(param_1 + 0x10);
  if (puVar13 == (undefined *)0x0) {
    _swift_retain(PTR___swiftEmptyDictionarySingleton_11034f1d0);
  }
  else {
    uVar5 = 0x11309d688;
    func_0x0001048db364(0x11309d688);
    __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ(puVar13,uVar5);
    puVar14 = puVar13;
  }
  uVar12 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((long)uVar12 < 0x40) {
    uVar15 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar15 = uVar15 & *(ulong *)(param_1 + 0x40);
  _swift_bridgeObjectRetain(param_1);
  lVar9 = 0;
  while( true ) {
    while (uVar15 != 0) {
      uVar8 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar10 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar9 << 6;
      puVar1 = (ulong *)(*(long *)(param_1 + 0x30) + uVar10 * 0x10);
      uStack_90 = *puVar1;
      uVar8 = puVar1[1];
      uStack_88 = uVar8;
      func_0x0001000bb420(*(long *)(param_1 + 0x38) + uVar10 * 0x20,&uStack_80);
      uVar2 = uStack_88;
      uVar10 = uStack_90;
      uStack_b8 = uStack_88;
      uStack_c0 = uStack_90;
      uStack_a8 = uStack_78;
      uStack_b0 = uStack_80;
      uStack_98 = uStack_68;
      uStack_a0 = uStack_70;
      func_0x0001000bb420(&uStack_b0,auStack_e0);
      _swift_bridgeObjectRetain(uVar8);
      uVar5 = 0x11309c420;
      func_0x0001048db364(0x11309c420);
      puVar7 = &uStack_e8;
      _swift_dynamicCast(puVar7,auStack_e0,PTR___sypN_11034f1a8 + 8,uVar5,6);
      uVar5 = uStack_e8;
      if ((int)puVar7 == 0) {
        func_0x000104a05688(&uStack_c0,0x11309cd28);
        _swift_release(puVar14);
        _swift_release(param_1);
        return (undefined *)0x0;
      }
      uVar15 = uVar15 - 1 & uVar15;
      _swift_bridgeObjectRetain(uVar2);
      func_0x000104a05688(&uStack_c0,0x11309cd28);
      uVar8 = uVar10;
      uVar11 = uVar2;
      func_0x000100029284();
      if ((uVar11 & 1) == 0) {
        if (*(ulong *)(puVar14 + 0x18) <= *(ulong *)(puVar14 + 0x10)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x104a03910);
          (*pcVar3)();
        }
        uVar11 = uVar8 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)(puVar14 + uVar11 + 0x40) =
             *(ulong *)(puVar14 + uVar11 + 0x40) | 1L << (uVar8 & 0x3f);
        puVar1 = (ulong *)(*(long *)(puVar14 + 0x30) + uVar8 * 0x10);
        *puVar1 = uVar10;
        puVar1[1] = uVar2;
        *(undefined8 *)(*(long *)(puVar14 + 0x38) + uVar8 * 8) = uVar5;
        if (SCARRY8(*(long *)(puVar14 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x104a03914);
          (*pcVar3)();
        }
        *(long *)(puVar14 + 0x10) = *(long *)(puVar14 + 0x10) + 1;
      }
      else {
        puVar1 = (ulong *)(*(long *)(puVar14 + 0x30) + uVar8 * 0x10);
        uVar11 = puVar1[1];
        *puVar1 = uVar10;
        puVar1[1] = uVar2;
        _swift_bridgeObjectRelease(uVar11);
        uVar6 = *(undefined8 *)(*(long *)(puVar14 + 0x38) + uVar8 * 8);
        *(undefined8 *)(*(long *)(puVar14 + 0x38) + uVar8 * 8) = uVar5;
        _swift_bridgeObjectRelease(uVar6);
      }
    }
    bVar4 = SCARRY8(lVar9,1);
    lVar9 = lVar9 + 1;
    if (bVar4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x104a0390c);
      (*pcVar3)();
    }
    if ((long)(uVar12 + 0x3f >> 6) <= lVar9) break;
    uVar15 = ((ulong *)(param_1 + 0x40))[lVar9];
  }
  _swift_release(param_1);
  return puVar14;
}



/* Entry: 104a03bf4; end: 104a03c07;  */

void FUN_104a03bf4(void)

{
  puRam0000000113815ae0 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 104a03c08; end: 104a03cb3;  */

undefined8 FUN_104a03c08(void)

{
  if (lRam000000011309ffc0 != -1) {
    _swift_once(0x11309ffc0,FUN_104a03bf4);
  }
  return 0x113815ae0;
}



/* Entry: 104a03cb4; end: 104a03d7f; +[FBSDKViewImpressionLogger impressionTrackers] */

void FUN_104a03cb4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  if (lRam000000011309ffc0 != -1) {
    _swift_once(0x11309ffc0,FUN_104a03bf4);
  }
  _swift_beginAccess(0x113815ae0,auStack_48,0,0);
  uVar1 = uRam0000000113815ae0;
  func_0x000104993de8(0);
  func_0x000104a05648(0x1130a26e0,0x104993de8,&UNK_10dd4942c);
  uVar2 = uVar1;
  _swift_bridgeObjectRetain(uVar1);
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF();
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104a03d80; end: 104a03df3;  */

void FUN_104a03d80(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  if (lRam000000011309ffc0 != -1) {
    _swift_once(0x11309ffc0,FUN_104a03bf4);
  }
  _swift_beginAccess(0x113815ae0,auStack_38,1,0);
  uVar1 = uRam0000000113815ae0;
  uRam0000000113815ae0 = param_1;
  _swift_bridgeObjectRelease(uVar1);
  return;
}



/* Entry: 104a03df4; end: 104a03eaf; +[FBSDKViewImpressionLogger setImpressionTrackers:] */

void FUN_104a03df4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [24];
  
  uVar1 = 0;
  func_0x000104993de8(0);
  uVar2 = 0x1130a26e0;
  func_0x000104a05648(0x1130a26e0,0x104993de8,&UNK_10dd4942c);
  __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
            (param_3,uVar1,PTR___sypN_11034f1a8 + 8,uVar2);
  if (lRam000000011309ffc0 != -1) {
    _swift_once(0x11309ffc0,FUN_104a03bf4);
  }
  _swift_beginAccess(0x113815ae0,auStack_38,1,0);
  uVar2 = uRam0000000113815ae0;
  uRam0000000113815ae0 = param_3;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Entry: 104a03eb0; end: 104a03f1f;  */

undefined1  [16] FUN_104a03eb0(undefined8 param_1)

{
  undefined1 auVar1 [16];
  
  if (lRam000000011309ffc0 != -1) {
    _swift_once(0x11309ffc0,FUN_104a03bf4);
  }
  _swift_beginAccess(0x113815ae0,param_1,0x21,0);
  auVar1._8_8_ = 0x113815ae0;
  auVar1._0_8_ = 0x104a03f1c;
  return auVar1;
}



/* Entry: 104a03f20; end: 104a0400f;  */

void FUN_104a03f20(undefined8 *param_1)

{
  undefined1 auStack_38 [24];
  
  if (lRam000000011309ffc0 != -1) {
    _swift_once(0x11309ffc0,FUN_104a03bf4);
  }
  _swift_beginAccess(0x113815ae0,auStack_38,0,0);
  *param_1 = uRam0000000113815ae0;
  _swift_bridgeObjectRetain();
  return;
}



/* Entry: 104a04010; end: 104a0401f; -[FBSDKViewImpressionLogger eventName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a04010(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130a43e8));
  return;
}



/* Entry: 104a04020; end: 104a0402f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a04020(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(unaff_x20 + _DAT_1130a43e8));
  return;
}



/* Entry: 104a04030; end: 104a040af; -[FBSDKViewImpressionLogger trackedImpressions] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a04030(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130a43f0;
  _swift_beginAccess(param_1 + _DAT_1130a43f0,auStack_38,0,0);
  uVar5 = *(undefined8 *)(param_1 + lVar1);
  _swift_bridgeObjectRetain(uVar5);
  uVar2 = 0x11309c408;
  func_0x0001048db364(0x11309c408);
  uVar3 = uVar2;
  func_0x000104a05590();
  uVar4 = uVar5;
  __sSh10FoundationE19_bridgeToObjectiveCSo5NSSetCyF(uVar5,uVar2,uVar3);
  _swift_bridgeObjectRelease(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 104a040b0; end: 104a040f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a040b0(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130a43f0;
  _swift_beginAccess(unaff_x20 + _DAT_1130a43f0,auStack_38,0,0);
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + lVar1));
  return;
}



/* Entry: 104a040f4; end: 104a04173; -[FBSDKViewImpressionLogger setTrackedImpressions:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a040f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  uVar3 = 0x11309c408;
  func_0x0001048db364(0x11309c408);
  uVar2 = uVar3;
  func_0x000104a05590();
  __sSh10FoundationE36_unconditionallyBridgeFromObjectiveCyShyxGSo5NSSetCSgFZ(param_3,uVar3,uVar2);
  lVar1 = _DAT_1130a43f0;
  _swift_beginAccess(param_1 + _DAT_1130a43f0,auStack_48,1,0);
  uVar3 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  _swift_bridgeObjectRelease(uVar3);
  return;
}



/* Entry: 104a04174; end: 104a04207;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a04174(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130a43f0;
  _swift_beginAccess(unaff_x20 + _DAT_1130a43f0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Entry: 104a04208; end: 104a04237;  */

void FUN_104a04208(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_104a04238(param_1);
  return;
}



/* Entry: 104a04238; end: 104a04377;  */

/* WARNING: Removing unreachable block (ram,0x000104a042cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_104a04238(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  lVar2 = unaff_x20;
  _swift_getObjectType();
  *(undefined **)(unaff_x20 + _DAT_1130a43f0) = PTR___swiftEmptySetSingleton_11034f1d8;
  *(undefined8 *)(unaff_x20 + _DAT_1130a43e8) = param_1;
  puVar1 = PTR_s_init_1125d9248;
  _swift_retain();
  _objc_retain(param_1);
  puVar3 = &stack0xffffffffffffffb0;
  _objc_msgSendSuper2(puVar3,puVar1);
  FUN_1049b1a14(&uStack_70,lVar2,&PTR_DAT_1130a43f8);
  _swift_unknownObjectRelease(uStack_68);
  _swift_unknownObjectRelease(uStack_70);
  puVar1 = PTR_s_applicationDidEnterBackground__11259f7a8;
  uVar5 = *(undefined8 *)PTR__UIApplicationDidEnterBackgroundNotification_110345a10;
  puVar4 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  _swift_getInitializedObjCClass(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uStack_60,PTR_s_fb_addObserver_selector_name_obj_112525328,puVar3,puVar1,uVar5,
                puVar4);
  _swift_unknownObjectRelease(uStack_60);
  _objc_release(puVar4);
  _objc_release(param_1);
  return puVar3;
}



/* Entry: 104a04378; end: 104a0439f; -[FBSDKViewImpressionLogger initWithEventName:] */

void FUN_104a04378(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_104a04238();
  return;
}



/* Entry: 104a043a0; end: 104a043a3;  */

long FUN_104a043a0(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long alStack_68 [3];
  long alStack_50 [3];
  long *plStack_38;
  
  if (lRam000000011309ffc0 != -1) {
    _swift_once(0x11309ffc0,FUN_104a03bf4);
  }
  plVar2 = alStack_68;
  _swift_beginAccess(0x113815ae0,plVar2,0x20,0);
  lVar4 = lRam0000000113815ae0;
  if (*(long *)(lRam0000000113815ae0 + 0x10) != 0) {
    _swift_bridgeObjectRetain(lRam0000000113815ae0);
    lVar1 = param_1;
    FUN_10499d1d4(param_1);
    if (((ulong)plVar2 & 1) != 0) {
      func_0x0001000bb420(*(long *)(lVar4 + 0x38) + lVar1 * 0x20,alStack_50);
      _swift_bridgeObjectRelease(lVar4);
      goto LAB_104a0521c;
    }
    _swift_bridgeObjectRelease(lVar4);
  }
  alStack_50[1] = 0;
  alStack_50[0] = 0;
  plStack_38 = (long *)0x0;
  alStack_50[2] = 0;
LAB_104a0521c:
  plVar2 = alStack_68;
  _swift_endAccess(plVar2);
  if (plStack_38 == (long *)0x0) {
    plVar3 = alStack_50;
    func_0x000104a05688(plVar3,0x11309c428);
  }
  else {
    func_0x000104a0534c();
    plVar3 = alStack_68;
    _swift_dynamicCast(plVar3,alStack_50,PTR___sypN_11034f1a8 + 8,plVar2,6);
    if ((int)plVar3 != 0) {
      return alStack_68[0];
    }
  }
  func_0x000104a0534c();
  _objc_allocWithZone();
  _objc_retain();
  lVar4 = param_1;
  FUN_104a04238();
  alStack_50[0] = lVar4;
  plStack_38 = plVar3;
  _swift_beginAccess(0x113815ae0,alStack_68,0x21,0);
  _objc_retain(param_1);
  _objc_retain(lVar4);
  FUN_1049b8acc(alStack_50,param_1);
  _swift_endAccess(alStack_68);
  return lVar4;
}



/* Entry: 104a043a4; end: 104a043db; +[FBSDKViewImpressionLogger retrieveLoggerWith:] */

void FUN_104a043a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  FUN_104a0518c();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104a043dc; end: 104a0443b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a043dc(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = _DAT_1130a43f0;
  _swift_beginAccess(unaff_x20 + _DAT_1130a43f0,auStack_48,1,0);
  puVar1 = PTR___swiftEmptySetSingleton_11034f1d8;
  uVar3 = *(undefined8 *)(unaff_x20 + lVar2);
  *(undefined **)(unaff_x20 + lVar2) = PTR___swiftEmptySetSingleton_11034f1d8;
  _swift_bridgeObjectRelease(uVar3);
  _swift_retain(puVar1);
  return;
}



/* Entry: 104a0443c; end: 104a04503; -[FBSDKViewImpressionLogger applicationDidEnterBackground:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a0443c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  
  lVar2 = 0;
  __s10Foundation12NotificationVMa();
  lVar5 = *(long *)(lVar2 + -8);
  lVar4 = *(long *)(lVar5 + 0x40);
  __s10Foundation12NotificationV36_unconditionallyBridgeFromObjectiveCyACSo14NSNotificationCSgFZ
            (auStack_60 + -(lVar4 + 0xfU & 0xfffffffffffffff0),param_3);
  pcVar6 = *(code **)(lVar5 + 8);
  _objc_retain();
  (*pcVar6)(auStack_60 + -(lVar4 + 0xfU & 0xfffffffffffffff0),lVar2);
  lVar2 = _DAT_1130a43f0;
  _swift_beginAccess(param_1 + _DAT_1130a43f0,auStack_58,1,0);
  puVar1 = PTR___swiftEmptySetSingleton_11034f1d8;
  uVar3 = *(undefined8 *)(param_1 + lVar2);
  *(undefined **)(param_1 + lVar2) = PTR___swiftEmptySetSingleton_11034f1d8;
  _swift_bridgeObjectRelease(uVar3);
  _swift_retain(puVar1);
  _objc_release(param_1);
  return;
}



/* Entry: 104a04504; end: 104a0497f;  */

/* WARNING: Removing unreachable block (ram,0x000104a04558) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a04504(undefined8 param_1,ulong param_2,long param_3)

{
  undefined8 *puVar1;
  ulong *puVar2;
  undefined *puVar3;
  code *pcVar4;
  bool bVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uVar18;
  long unaff_x20;
  undefined *puVar19;
  ulong uVar20;
  undefined1 auStack_a8 [24];
  undefined8 auStack_90 [2];
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _swift_getObjectType();
  FUN_1049b1a14(&puStack_80);
  puVar3 = puStack_80;
  puVar19 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puVar6 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  _swift_retain(PTR___swiftEmptyDictionarySingleton_11034f1d0);
  _swift_isUniquelyReferenced_nonNull_native();
  puStack_80 = puVar19;
  _swift_bridgeObjectRetain(param_2);
  func_0x00010018433c(param_1,param_2,0xd00000000000001e,0x800000010f229d80,puVar6);
  puVar19 = puStack_80;
  if ((param_3 != 0) && (lVar7 = param_3, func_0x000104a03914(), lVar7 != 0)) {
    uVar14 = 1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar20 = 0xffffffffffffffff;
    if ((long)uVar14 < 0x40) {
      uVar20 = ~(-1L << (uVar14 & 0x3f));
    }
    uVar20 = uVar20 & *(ulong *)(lVar7 + 0x40);
    lVar8 = lVar7;
    _swift_bridgeObjectRetain();
    lVar12 = 0;
    lVar17 = lVar7;
    while( true ) {
      while (uVar20 != 0) {
        uVar13 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
        uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
        uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
        uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
        uVar13 = LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) | lVar12 << 6;
        puVar1 = (undefined8 *)(*(long *)(lVar17 + 0x38) + uVar13 * 0x10);
        uVar9 = *(ulong *)(*(long *)(lVar17 + 0x30) + uVar13 * 8);
        uVar18 = *puVar1;
        uVar10 = puVar1[1];
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
        _swift_bridgeObjectRetain(uVar10);
        puVar6 = puVar19;
        _swift_isUniquelyReferenced_nonNull_native();
        uVar13 = uVar9;
        uVar11 = param_2;
        puStack_80 = puVar19;
        func_0x000100029284();
        uVar15 = (ulong)~(uint)uVar11 & 1;
        lVar17 = *(long *)(puVar19 + 0x10) + uVar15;
        if (SCARRY8(*(long *)(puVar19 + 0x10),uVar15)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x104a0496c);
          (*pcVar4)();
        }
        if (*(long *)(puVar19 + 0x18) < lVar17) {
          func_0x0001001833c8(lVar17,puVar6);
          uVar13 = uVar9;
          uVar15 = param_2;
          func_0x000100029284();
          if (((uint)uVar11 & 1) != ((uint)uVar15 & 1)) {
            __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF
                      (PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x104a04980);
            (*pcVar4)();
          }
        }
        else {
          uVar15 = uVar11;
          if (((ulong)puVar6 & 1) == 0) {
            func_0x000100184498();
          }
        }
        puVar19 = puStack_80;
        uVar20 = uVar20 - 1 & uVar20;
        lVar17 = lVar8;
        if ((uVar11 & 1) == 0) {
          *(ulong *)(puStack_80 + (uVar13 >> 6) * 8 + 0x40) =
               *(ulong *)(puStack_80 + (uVar13 >> 6) * 8 + 0x40) | 1L << (uVar13 & 0x3f);
          puVar2 = (ulong *)(*(long *)(puStack_80 + 0x30) + uVar13 * 0x10);
          *puVar2 = uVar9;
          puVar2[1] = param_2;
          puVar1 = (undefined8 *)(*(long *)(puStack_80 + 0x38) + uVar13 * 0x10);
          *puVar1 = uVar18;
          puVar1[1] = uVar10;
          if (SCARRY8(*(long *)(puStack_80 + 0x10),1)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x104a04970);
            (*pcVar4)();
          }
          *(long *)(puStack_80 + 0x10) = *(long *)(puStack_80 + 0x10) + 1;
          param_2 = uVar15;
        }
        else {
          puVar1 = (undefined8 *)(*(long *)(puStack_80 + 0x38) + uVar13 * 0x10);
          uVar16 = puVar1[1];
          *puVar1 = uVar18;
          puVar1[1] = uVar10;
          _swift_bridgeObjectRelease(param_2);
          _swift_bridgeObjectRelease(uVar16);
          param_2 = uVar15;
        }
      }
      bVar5 = SCARRY8(lVar12,1);
      lVar12 = lVar12 + 1;
      if (bVar5) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x104a04968);
        (*pcVar4)();
      }
      if ((long)(uVar14 + 0x3f >> 6) <= lVar12) break;
      uVar20 = ((ulong *)(lVar7 + 0x40))[lVar12];
    }
    _swift_release(lVar17);
    _swift_bridgeObjectRelease(lVar17);
  }
  lVar7 = _DAT_1130a43f0;
  _swift_beginAccess(unaff_x20 + _DAT_1130a43f0,&puStack_80,0,0);
  uVar18 = *(undefined8 *)(unaff_x20 + lVar7);
  _swift_bridgeObjectRetain(uVar18);
  puVar6 = puVar19;
  func_0x0001049e45c0(puVar19,uVar18);
  _swift_bridgeObjectRelease(uVar18);
  if (((ulong)puVar6 & 1) == 0) {
    _swift_beginAccess(unaff_x20 + lVar7,auStack_a8,0x21,0);
    _swift_bridgeObjectRetain(puVar19);
    func_0x0001049df548(auStack_90,puVar19);
    _swift_endAccess(auStack_a8);
    _swift_bridgeObjectRelease(auStack_90[0]);
    uVar18 = *(undefined8 *)(unaff_x20 + _DAT_1130a43e8);
    if (param_3 == 0) {
      _swift_unknownObjectRetain(uStack_78);
      param_3 = 0;
    }
    else {
      uVar16 = 0;
      FUN_1048db924(0);
      uVar10 = 0x11309c318;
      func_0x000104a05648(0x11309c318,FUN_1048db924,&UNK_10dd46f00);
      _swift_unknownObjectRetain(uStack_78);
      __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
                (param_3,uVar16,PTR___sypN_11034f1a8 + 8,uVar10);
    }
    _swift_getObjCClassFromMetadata(uStack_68);
    _objc_msgSend();
    uVar10 = uStack_68;
    _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uStack_78,PTR_s_logInternalEvent_parameters_isIm_112607d70,uVar18,param_3,1,uVar10
                 );
    _swift_bridgeObjectRelease(puVar19);
    _objc_release(param_3);
    _swift_unknownObjectRelease(uStack_70);
    _swift_unknownObjectRelease_n(uStack_78,2);
    _swift_unknownObjectRelease(puVar3);
    _objc_release(uVar10);
  }
  else {
    _swift_bridgeObjectRelease(puVar19);
    _swift_unknownObjectRelease(uStack_70);
    _swift_unknownObjectRelease(uStack_78);
    _swift_unknownObjectRelease(puVar3);
  }
  return;
}



/* Entry: 104a04980; end: 104a04a3f; -[FBSDKViewImpressionLogger logImpressionWithIdentifier:parameters:] */

void FUN_104a04980(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  if (param_4 != 0) {
    uVar1 = 0;
    FUN_1048db924(0);
    uVar2 = 0x11309c318;
    func_0x000104a05648(0x11309c318,FUN_1048db924,&UNK_10dd46f00);
    __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
              (param_4,uVar1,PTR___sypN_11034f1a8 + 8,uVar2);
  }
  _objc_retain(param_1);
  FUN_104a04504(param_3,param_2,param_4);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_4);
  return;
}



/* Entry: 104a04a40; end: 104a04a8b;  */

void FUN_104a04a40(void)

{
  _objc_allocWithZone();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d290)();
  return;
}



/* Entry: 104a04a8c; end: 104a04aeb; -[FBSDKViewImpressionLogger init] */

void FUN_104a04a8c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("FBSDKCoreKit._ViewImpressionLogger",0x22,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104a04ab8);
  (*pcVar1)();
}



/* Entry: 104a04aec; end: 104a04c0f; -[FBSDKViewImpressionLogger .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a04aec(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130a43e8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_1130a43f0));
  return;
}



/* Entry: 104a04c10; end: 104a04c7f;  */

undefined8 FUN_104a04c10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _swift_getObjectType();
  _swift_getObjectType(param_2);
  _swift_getObjectType(param_3);
  return param_1;
}



/* Entry: 104a04c80; end: 104a04dab;  */

undefined8 FUN_104a04c80(void)

{
  return 0x113815b00;
}



/* Entry: 104a04dac; end: 104a04e47;  */

void FUN_104a04dac(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126add18;
  _objc_allocWithZone();
  _objc_msgSend();
  puVar2 = PTR_PTR_1126add60;
  _swift_getInitializedObjCClass();
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  _swift_getInitializedObjCClass();
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = 0;
  FUN_10490b480();
  puRam0000000113815b20 = puVar1;
  puRam0000000113815b28 = puVar2;
  puRam0000000113815b30 = puVar3;
  uRam0000000113815b38 = uVar4;
  return;
}



/* Entry: 104a04e48; end: 104a05023;  */

undefined8 FUN_104a04e48(void)

{
  if (lRam000000011309ffc8 != -1) {
    _swift_once(0x11309ffc8,FUN_104a04dac);
  }
  return 0x113815b20;
}



/* Entry: 104a05024; end: 104a05187;  */

void FUN_104a05024(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(0x113815b00,auStack_38,0,0);
  uVar3 = uRam0000000113815b18;
  uVar2 = uRam0000000113815b10;
  uVar1 = uRam0000000113815b08;
  *param_1 = uRam0000000113815b00;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  FUN_104a05314();
  return;
}



/* Entry: 104a05188; end: 104a0518b;  */

void FUN_104a05188(void)

{
  return;
}



/* Entry: 104a0518c; end: 104a05313;  */

long FUN_104a0518c(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long alStack_68 [3];
  long alStack_50 [3];
  long *plStack_38;
  
  if (lRam000000011309ffc0 != -1) {
    _swift_once(0x11309ffc0,FUN_104a03bf4);
  }
  plVar2 = alStack_68;
  _swift_beginAccess(0x113815ae0,plVar2,0x20,0);
  lVar4 = lRam0000000113815ae0;
  if (*(long *)(lRam0000000113815ae0 + 0x10) != 0) {
    _swift_bridgeObjectRetain(lRam0000000113815ae0);
    lVar1 = param_1;
    FUN_10499d1d4(param_1);
    if (((ulong)plVar2 & 1) != 0) {
      func_0x0001000bb420(*(long *)(lVar4 + 0x38) + lVar1 * 0x20,alStack_50);
      _swift_bridgeObjectRelease(lVar4);
      goto LAB_104a0521c;
    }
    _swift_bridgeObjectRelease(lVar4);
  }
  alStack_50[1] = 0;
  alStack_50[0] = 0;
  plStack_38 = (long *)0x0;
  alStack_50[2] = 0;
LAB_104a0521c:
  plVar2 = alStack_68;
  _swift_endAccess(plVar2);
  if (plStack_38 == (long *)0x0) {
    plVar3 = alStack_50;
    func_0x000104a05688(plVar3,0x11309c428);
  }
  else {
    func_0x000104a0534c();
    plVar3 = alStack_68;
    _swift_dynamicCast(plVar3,alStack_50,PTR___sypN_11034f1a8 + 8,plVar2,6);
    if ((int)plVar3 != 0) {
      return alStack_68[0];
    }
  }
  func_0x000104a0534c();
  _objc_allocWithZone();
  _objc_retain();
  lVar4 = param_1;
  FUN_104a04238();
  alStack_50[0] = lVar4;
  plStack_38 = plVar3;
  _swift_beginAccess(0x113815ae0,alStack_68,0x21,0);
  _objc_retain(param_1);
  _objc_retain(lVar4);
  FUN_1049b8acc(alStack_50,param_1);
  _swift_endAccess(alStack_68);
  return lVar4;
}



/* Entry: 104a05314; end: 104a05377;  */

void FUN_104a05314(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (param_1 != 0) {
    _swift_unknownObjectRetain();
    _swift_unknownObjectRetain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRetain_11034f540)(param_3);
    return;
  }
  return;
}



/* Entry: 104a05378; end: 104a0537f;  */

void FUN_104a05378(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000104a0537c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x20 + 0x60))();
  return;
}



/* Entry: 104a05380; end: 104a056d3;  */

long FUN_104a05380(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 104a056d4; end: 104a05717; -[FBSDKWebDialog shouldDeferVisibility] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104a056d4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130a4480;
  _swift_beginAccess(param_1 + _DAT_1130a4480,auStack_38,0,0);
  return *(undefined1 *)(param_1 + lVar1);
}



/* Entry: 104a05718; end: 104a05757;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104a05718(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130a4480;
  _swift_beginAccess(unaff_x20 + _DAT_1130a4480,auStack_38,0,0);
  return *(undefined1 *)(unaff_x20 + lVar1);
}



/* Entry: 104a05758; end: 104a057a7; -[FBSDKWebDialog setShouldDeferVisibility:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a05758(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130a4480;
  _swift_beginAccess(param_1 + _DAT_1130a4480,auStack_48,1,0);
  *(undefined1 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 104a057a8; end: 104a05833;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a057a8(undefined1 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130a4480;
  _swift_beginAccess(unaff_x20 + _DAT_1130a4480,auStack_48,1,0);
  *(undefined1 *)(unaff_x20 + lVar1) = param_1;
  return;
}



/* Entry: 104a05834; end: 104a0587b; -[FBSDKWebDialog delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a05834(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130a4488;
  _swift_beginAccess(param_1 + _DAT_1130a4488,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104a0587c; end: 104a058bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a0587c(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130a4488;
  _swift_beginAccess(unaff_x20 + _DAT_1130a4488,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(unaff_x20 + lVar1);
  return;
}



/* Entry: 104a058c0; end: 104a05917; -[FBSDKWebDialog setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a058c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130a4488;
  _swift_beginAccess(param_1 + _DAT_1130a4488,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 104a05918; end: 104a05a63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a05918(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130a4488;
  _swift_beginAccess(unaff_x20 + _DAT_1130a4488,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar1,param_1);
  _swift_unknownObjectRelease(param_1);
  return;
}



/* Entry: 104a05a64; end: 104a05acb; -[FBSDKWebDialog name] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a05a64(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_1130a4490);
  _swift_beginAccess(puVar1,auStack_38,0,0);
  uVar3 = *puVar1;
  uVar2 = puVar1[1];
  _swift_bridgeObjectRetain(uVar2);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3,uVar2);
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 104a05acc; end: 104a05b1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_104a05acc(void)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + _DAT_1130a4490);
  _swift_beginAccess(pauVar1,auStack_38,0,0);
  auVar2 = *pauVar1;
  _swift_bridgeObjectRetain(*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Entry: 104a05b20; end: 104a05b87; -[FBSDKWebDialog setName:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a05b20(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puVar1 = (undefined8 *)(param_1 + _DAT_1130a4490);
  _swift_beginAccess(puVar1,auStack_48,1,0);
  uVar2 = puVar1[1];
  *puVar1 = param_3;
  puVar1[1] = param_2;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Entry: 104a05b88; end: 104a05c23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a05b88(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130a4490);
  _swift_beginAccess(puVar1,auStack_48,1,0);
  uVar2 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Entry: 104a05c24; end: 104a05c6b; -[FBSDKWebDialog webViewFrame] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104a05c24(long param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_1130a4498);
  _swift_beginAccess(puVar1,auStack_38,0,0);
  return *puVar1;
}



/* Entry: 104a05c6c; end: 104a05cb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104a05c6c(void)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130a4498);
  _swift_beginAccess(puVar1,auStack_38,0,0);
  return *puVar1;
}



/* Entry: 104a05cb4; end: 104a05d1b; -[FBSDKWebDialog setWebViewFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a05cb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [24];
  
  puVar1 = (undefined8 *)(param_5 + _DAT_1130a4498);
  _swift_beginAccess(puVar1,auStack_58,1,0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  return;
}



/* Entry: 104a05d1c; end: 104a05dc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a05d1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130a4498);
  _swift_beginAccess(puVar1,auStack_58,1,0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  return;
}



/* Entry: 104a05dc4; end: 104a05e43; -[FBSDKWebDialog parameters] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a05dc4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130a44a0;
  _swift_beginAccess(param_1 + _DAT_1130a44a0,auStack_38,0,0);
  lVar1 = *(long *)(param_1 + lVar1);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    _swift_bridgeObjectRetain(lVar1);
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF();
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 104a05e44; end: 104a05e87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a05e44(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130a44a0;
  _swift_beginAccess(unaff_x20 + _DAT_1130a44a0,auStack_38,0,0);
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + lVar1));
  return;
}



/* Entry: 104a05e88; end: 104a05f07; -[FBSDKWebDialog setParameters:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a05e88(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  if (param_3 == 0) {
    param_3 = 0;
  }
  else {
    __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
              (param_3,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  }
  lVar1 = _DAT_1130a44a0;
  _swift_beginAccess(param_1 + _DAT_1130a44a0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(long *)(param_1 + lVar1) = param_3;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Entry: 104a05f08; end: 104a05f9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a05f08(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130a44a0;
  _swift_beginAccess(unaff_x20 + _DAT_1130a44a0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Entry: 104a05f9c; end: 104a05fe3; -[FBSDKWebDialog backgroundView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a05f9c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130a44a8;
  _swift_beginAccess(param_1 + _DAT_1130a44a8,auStack_38,0,0);
  _objc_retainAutoreleaseReturnValue(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 104a05fe4; end: 104a0602f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104a05fe4(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130a44a8;
  _swift_beginAccess(unaff_x20 + _DAT_1130a44a8,auStack_38,0,0);
  uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  _objc_retain(uVar2);
  return uVar2;
}



/* Entry: 104a06030; end: 104a0603b; -[FBSDKWebDialog setBackgroundView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a06030(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130a44a8;
  _swift_beginAccess(param_1 + _DAT_1130a44a8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  return;
}



/* Entry: 104a0603c; end: 104a060cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a0603c(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130a44a8;
  _swift_beginAccess(unaff_x20 + _DAT_1130a44a8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  _objc_release(uVar2);
  return;
}



/* Entry: 104a060d0; end: 104a06117; -[FBSDKWebDialog dialogView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a060d0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130a44b0;
  _swift_beginAccess(param_1 + _DAT_1130a44b0,auStack_38,0,0);
  _objc_retainAutoreleaseReturnValue(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 104a06118; end: 104a06163;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104a06118(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130a44b0;
  _swift_beginAccess(unaff_x20 + _DAT_1130a44b0,auStack_38,0,0);
  uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  _objc_retain(uVar2);
  return uVar2;
}



/* Entry: 104a06164; end: 104a0616f; -[FBSDKWebDialog setDialogView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a06164(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130a44b0;
  _swift_beginAccess(param_1 + _DAT_1130a44b0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  return;
}



/* Entry: 104a06170; end: 104a061cf;  */

void FUN_104a06170(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar2 = *param_4;
  _swift_beginAccess(param_1 + lVar2,auStack_48,1,0);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  return;
}



/* Entry: 104a061d0; end: 104a06267;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a061d0(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130a44b0;
  _swift_beginAccess(unaff_x20 + _DAT_1130a44b0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  _objc_release(uVar2);
  return;
}



/* Entry: 104a06268; end: 104a062df; -[FBSDKWebDialog path] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a06268(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_1130a44b8);
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



/* Entry: 104a062e0; end: 104a06333;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_104a062e0(void)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + _DAT_1130a44b8);
  _swift_beginAccess(pauVar1,auStack_38,0,0);
  auVar2 = *pauVar1;
  _swift_bridgeObjectRetain(*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Entry: 104a06334; end: 104a063ab; -[FBSDKWebDialog setPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a06334(long param_1,long param_2,long param_3)

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
  plVar1 = (long *)(param_1 + _DAT_1130a44b8);
  _swift_beginAccess(plVar1,auStack_48,1,0);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  _swift_bridgeObjectRelease(lVar2);
  return;
}



/* Entry: 104a063ac; end: 104a06447;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a063ac(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130a44b8);
  _swift_beginAccess(puVar1,auStack_48,1,0);
  uVar2 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Entry: 104a06448; end: 104a064a3;  */

void FUN_104a06448(void)

{
  if (lRam000000011309ff80 != -1) {
    _swift_once(0x11309ff80,FUN_1049e4894);
  }
  uRam00000001130a4470 = 0x302e37312d736f69;
  uRam00000001130a4478 = 0xea0000000000302e;
  return;
}



/* Entry: 104a064a4; end: 104a0671b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a064a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_1130a4480) = 0;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_1130a4488,0);
  lVar3 = _DAT_1130a44a0;
  *(undefined8 *)(unaff_x20 + _DAT_1130a44a0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_1130a44a8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_1130a44b0) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130a44b8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_1130a4490);
  *puVar2 = param_5;
  puVar2[1] = param_6;
  _swift_beginAccess(unaff_x20 + lVar3,auStack_98,1,0);
  *(undefined8 *)(unaff_x20 + lVar3) = param_7;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_1130a4498);
  *puVar2 = param_1;
  puVar2[1] = param_2;
  puVar2[2] = param_3;
  puVar2[3] = param_4;
  _swift_beginAccess(puVar1,auStack_b0,1,0);
  *puVar1 = param_8;
  puVar1[1] = param_9;
  _objc_msgSendSuper2(auStack_c0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104a0671c; end: 104a067e3; -[FBSDKWebDialog initWithName:parameters:webViewFrame:path:] */

void FUN_104a0671c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined *param_6,undefined8 param_7,long param_8,long param_9
                  )

{
  undefined *puVar1;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_7);
  puVar1 = param_6;
  if (param_8 != 0) {
    puVar1 = PTR___sSSN_11034da80;
    __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
              (param_8,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  }
  if (param_9 == 0) {
    param_9 = 0;
    puVar1 = (undefined *)0x0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_9);
  }
  func_0x000104a065e0(param_1,param_2,param_3,param_4,param_7,param_6,param_8,param_9,puVar1);
  return;
}



/* Entry: 104a067e4; end: 104a068db;  */

undefined8 FUN_104a067e4(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  
  _objc_allocWithZone();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  _objc_msgSend(0,0,0,0,unaff_x20,PTR_s_initWithName_parameters_webViewF_1125255b0,param_1,0,0);
  _objc_release(param_1);
  return unaff_x20;
}



/* Entry: 104a068dc; end: 104a068ff; -[FBSDKWebDialog initWithName:] */

void FUN_104a068dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d290)
            (0,0,0,0,param_1,PTR_s_initWithName_parameters_webViewF_1125255b0,param_3,0,0);
  return;
}



/* Entry: 104a06900; end: 104a06cff;  */

/* WARNING: Removing unreachable block (ram,0x000104a0698c) */
/* WARNING: Removing unreachable block (ram,0x000104a06a10) */
/* WARNING: Removing unreachable block (ram,0x000104a06a20) */
/* WARNING: Removing unreachable block (ram,0x000104a06a48) */
/* WARNING: Removing unreachable block (ram,0x000104a06a80) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a06900(void)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long unaff_x20;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 *puVar7;
  
  lVar3 = unaff_x20;
  _swift_getObjectType();
  lVar4 = 0;
  __s10Foundation3URLVMa();
  lVar12 = *(long *)(lVar4 + -8);
  lVar11 = *(long *)(lVar12 + 0x40);
  FUN_104a06d00(auStack_d0 + -(lVar11 + 0xfU & 0xfffffffffffffff0));
  FUN_1049b1a14(&uStack_a0,lVar3,&PTR_DAT_1130a44c0);
  _swift_unknownObjectRelease(uStack_a0);
  lVar10 = lStack_98;
  lVar6 = lStack_98;
  _objc_msgSend(lStack_98,PTR_s_findWindow_1125c96f8);
  _objc_retainAutoreleasedReturnValue();
  _swift_unknownObjectRelease(lVar10);
  if (lVar6 == 0) {
    puVar9 = PTR_PTR_1126add38;
    _swift_getInitializedObjCClass(PTR_PTR_1126add38);
    uVar5 = 0xd00000000000003e;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000003e,0x800000010f229e90);
    _objc_msgSend(puVar9,PTR_s_singleShotLogEntry_logEntry__11266cd78,
                  &PTR____CFConstantStringClassReference_110da4eb8,uVar5);
    _objc_release(uVar5);
    FUN_1049b1a14(&uStack_a0,lVar3,&PTR_DAT_1130a44c0);
    _swift_unknownObjectRelease(lStack_98);
    uVar8 = 0xd00000000000003e;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000003e,0x800000010f229e90);
    uVar5 = uStack_a0;
    _objc_msgSend(uStack_a0,PTR_s_unknownErrorWithMessage_userInfo_11267dc68,uVar8,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    _swift_unknownObjectRelease(uStack_a0);
    lVar10 = _DAT_1130a4488;
    _swift_beginAccess(unaff_x20 + _DAT_1130a4488,&uStack_a0,0,0);
    lVar10 = unaff_x20 + lVar10;
    _swift_unknownObjectWeakLoadStrong();
    if (lVar10 != 0) {
      uVar8 = uVar5;
      __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF(uVar5);
      _objc_msgSend(lVar10,PTR_s_webDialog_didFailWithError__1125255b8);
      _objc_release(uVar8);
      _swift_unknownObjectRelease(lVar10);
    }
    FUN_104a08254(1);
    _objc_release(uVar5);
  }
  else {
    _objc_release(lVar6);
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130a4498);
    puVar7 = puVar1;
    _swift_beginAccess(puVar1,&uStack_a0,0,0);
    iVar2 = (int)puVar7;
    uVar5 = *puVar1;
    uVar8 = puVar1[1];
    uVar13 = puVar1[2];
    uVar14 = puVar1[3];
    _CGRectIsEmpty(uVar5,uVar8,uVar13,uVar14);
    if (iVar2 == 0) {
      uVar5 = *puVar1;
      uVar8 = puVar1[1];
      uVar13 = puVar1[2];
      uVar14 = puVar1[3];
    }
    else {
      FUN_104a072c8();
    }
    puVar9 = PTR_PTR_1126ae0a8;
    _objc_allocWithZone();
    _objc_msgSend(uVar5,uVar8,uVar13,uVar14);
    lVar10 = _DAT_1130a44b0;
    _swift_beginAccess(unaff_x20 + _DAT_1130a44b0,auStack_b8,1,0);
    uVar5 = *(undefined8 *)(unaff_x20 + lVar10);
    *(undefined **)(unaff_x20 + lVar10) = puVar9;
    _objc_release(uVar5);
    if (*(long *)(unaff_x20 + lVar10) != 0) {
      _objc_msgSend(*(long *)(unaff_x20 + lVar10),PTR_s_setDelegate__112640798);
      lVar10 = *(long *)(unaff_x20 + lVar10);
      if (lVar10 != 0) {
        _objc_retain();
        lVar3 = lVar10;
        __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
        _objc_msgSend(lVar10,PTR_s_loadURL__112604b58,lVar3);
        _objc_release(lVar10);
        _objc_release(lVar3);
      }
    }
    lVar10 = _DAT_1130a4480;
    _swift_beginAccess(unaff_x20 + _DAT_1130a4480,auStack_d0,0,0);
    if ((*(byte *)(unaff_x20 + lVar10) & 1) == 0) {
      FUN_104a07484();
    }
  }
  (**(code **)(lVar12 + 8))(auStack_d0 + -(lVar11 + 0xfU & 0xfffffffffffffff0),lVar4);
  return;
}



/* Entry: 104a06d00; end: 104a07233;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a06d00(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  code *pcVar9;
  long unaff_x20;
  long lVar10;
  long unaff_x21;
  undefined *puVar11;
  undefined *puStack_c8;
  long lStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [24];
  undefined *apuStack_98 [3];
  undefined *apuStack_80 [3];
  long lStack_68;
  
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar11 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  _swift_retain(PTR___swiftEmptyDictionarySingleton_11034f1d0);
  _swift_isUniquelyReferenced_nonNull_native();
  apuStack_80[0] = puVar5;
  func_0x00010018433c(0x6863756f74,0xe500000000000000,0x79616c70736964,0xe700000000000000,puVar11);
  puVar5 = apuStack_80[0];
  if (lRam000000011309ffd0 != -1) {
    _swift_once(0x11309ffd0,FUN_104a06448);
  }
  uVar2 = uRam00000001130a4478;
  uVar4 = uRam00000001130a4470;
  _swift_bridgeObjectRetain(uRam00000001130a4478);
  puVar11 = puVar5;
  _swift_isUniquelyReferenced_nonNull_native(puVar5);
  apuStack_80[0] = puVar5;
  func_0x00010018433c(uVar4,uVar2,0x6b6473,0xe300000000000000,puVar11);
  puVar5 = apuStack_80[0];
  _swift_isUniquelyReferenced_nonNull_native(apuStack_80[0]);
  pcVar9 = (code *)0x800000010f229ed0;
  uVar4 = 0xd000000000000013;
  puVar11 = apuStack_80[0];
  apuStack_80[0] = puVar5;
  func_0x00010018433c(0xd000000000000013,0x800000010f229ed0,0x7463657269646572,0xec0000006972755f,
                      puVar11);
  puVar5 = apuStack_80[0];
  puStack_b8 = apuStack_80[0];
  if (lRam000000011309ff80 != -1) {
    uVar4 = 0x11309ff80;
    pcVar9 = FUN_1049e4894;
    _swift_once(0x11309ff80);
  }
  FUN_1049e67cc();
  if (pcVar9 == (code *)0x0) {
    uVar4 = 0xe600000000000000;
    func_0x0001014c4e50(0x64695f707061,0xe600000000000000);
    _swift_bridgeObjectRelease(uVar4);
  }
  else {
    puVar11 = puVar5;
    _swift_isUniquelyReferenced_nonNull_native(puVar5);
    apuStack_80[0] = puVar5;
    func_0x00010018433c(uVar4,pcVar9,0x64695f707061,0xe600000000000000,puVar11);
    puStack_b8 = apuStack_80[0];
  }
  uVar4 = 0xec0000006e656b6f;
  puVar5 = PTR_PTR_1126add30;
  _swift_getInitializedObjCClass();
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  if (puVar5 == (undefined *)0x0) {
    func_0x0001014c4e50(0x745f737365636361,0xec0000006e656b6f);
    _swift_bridgeObjectRelease(uVar4);
  }
  else {
    puVar11 = puVar5;
    puVar8 = PTR_s_tokenString_11267a6c8;
    _objc_msgSend();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    puVar6 = puVar11;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(puVar11);
    _objc_release(puVar11);
    puVar5 = puStack_b8;
    puVar11 = puStack_b8;
    _swift_isUniquelyReferenced_nonNull_native(puStack_b8);
    apuStack_80[0] = puVar5;
    func_0x00010018433c(puVar6,puVar8,0x745f737365636361,0xec0000006e656b6f,puVar11);
    puStack_b8 = apuStack_80[0];
  }
  lVar7 = _DAT_1130a44a0;
  _swift_beginAccess(unaff_x20 + _DAT_1130a44a0,apuStack_80,0,0);
  puVar5 = puStack_b8;
  puVar11 = *(undefined **)(unaff_x20 + lVar7);
  if (puVar11 != (undefined *)0x0) {
    _swift_bridgeObjectRetain(puVar11);
    _swift_bridgeObjectRetain(puVar5);
    puVar6 = puVar11;
    _swift_isUniquelyReferenced_nonNull_native(puVar11);
    apuStack_98[0] = puVar11;
    FUN_104a097c8(puVar5,&UNK_101391c9c,0,puVar6,apuStack_98);
    if (unaff_x21 != 0) goto LAB_104a07220;
    _swift_bridgeObjectRelease_n(puVar5,2);
    puStack_b8 = apuStack_98[0];
  }
  puVar11 = PTR_PTR_1126add20;
  _swift_getInitializedObjCClass();
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = 0x6d;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6d,0xe100000000000000);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130a44b8);
  _swift_beginAccess(puVar1,apuStack_98,0,0);
  lVar7 = puVar1[1];
  if (lVar7 == 0) {
    puStack_c8 = (undefined *)0x2f676f6c6169642f;
    lStack_c0 = -0x1800000000000000;
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130a4490);
    _swift_beginAccess(puVar1,auStack_b0,0,0);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    _swift_bridgeObjectRetain(uVar3);
    __sSS6appendyySSF(uVar2,uVar3);
    _swift_bridgeObjectRelease(uVar3);
    lVar7 = 0;
    lVar10 = lStack_c0;
    puVar6 = puStack_c8;
  }
  else {
    lVar10 = lVar7;
    puVar6 = (undefined *)*puVar1;
  }
  _swift_bridgeObjectRetain(lVar7);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(puVar6,lVar10);
  _swift_bridgeObjectRelease(lVar10);
  puVar5 = puStack_b8;
  puVar8 = puStack_b8;
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (puStack_b8,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  _swift_bridgeObjectRelease(puVar5);
  puStack_c8 = (undefined *)0x0;
  puVar5 = puVar11;
  _objc_msgSend(puVar11,PTR_s_facebookURLWithHostPrefix_path_q_1125c5690,uVar4,puVar6,puVar8,
                &puStack_c8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar11);
  _objc_release(uVar4);
  _objc_release(puVar6);
  _objc_release(puVar8);
  puVar11 = puStack_c8;
  if (puVar5 == (undefined *)0x0) {
    puVar5 = puStack_c8;
    _objc_retain(puStack_c8);
    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF(puVar11);
    _objc_release(puVar5);
    _swift_willThrow();
  }
  else {
    __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(param_1,puVar5);
    _objc_retain(puVar11);
    _objc_release(puVar5);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
LAB_104a07220:
  _swift_bridgeObjectRelease(puVar5);
  _swift_release(apuStack_98[0]);
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x104a07234);
  (*pcVar9)();
}



/* Entry: 104a07234; end: 104a072c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a07234(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130a4488;
  _swift_beginAccess(unaff_x20 + _DAT_1130a4488,auStack_48,0,0);
  lVar1 = unaff_x20 + lVar1;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 != 0) {
    __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF(param_1);
    _objc_msgSend(lVar1,PTR_s_webDialog_didFailWithError__1125255b8);
    _objc_release(param_1);
    _swift_unknownObjectRelease(lVar1);
  }
  FUN_104a08254(1);
  return;
}



/* Entry: 104a072c8; end: 104a07483;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_104a072c8(double param_1,double param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long unaff_x20;
  double dVar5;
  double dVar6;
  undefined1 auStack_98 [24];
  
  lVar3 = _DAT_1130a44b0;
  _swift_beginAccess(unaff_x20 + _DAT_1130a44b0,auStack_98,0,0);
  lVar1 = *(long *)(unaff_x20 + lVar3);
  if (lVar1 != 0) {
    _objc_msgSend(lVar1,PTR_s_window_1126876a0);
    _objc_retainAutoreleasedReturnValue();
    dVar5 = param_1;
    dVar6 = 0.0;
    if (lVar1 != 0) {
      lVar2 = lVar1;
      _objc_msgSend(lVar1,PTR_s_screen_112631da0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      _objc_msgSend(lVar2,PTR_s_bounds_1125a5ca8);
      dVar5 = param_1;
      _objc_release(lVar2);
      dVar6 = param_1;
    }
    lVar3 = *(long *)(unaff_x20 + lVar3);
    if (lVar3 != 0) {
      _objc_msgSend(lVar3,PTR_s_window_1126876a0);
      _objc_retainAutoreleasedReturnValue();
      if (lVar3 != 0) {
        _objc_msgSend();
        _objc_release(lVar3);
        if (dVar5 == 0.0) {
          puVar4 = PTR__OBJC_CLASS___UIApplication_1126ae590;
          _swift_getInitializedObjCClass(PTR__OBJC_CLASS___UIApplication_1126ae590);
          _objc_msgSend();
          _objc_retainAutoreleasedReturnValue();
          _objc_msgSend();
          _objc_release(puVar4);
        }
        if (lVar1 == 0) {
          return 0.0;
        }
        return dVar6 + param_2;
      }
    }
  }
  return 0.0;
}



/* Entry: 104a07484; end: 104a07a2f;  */

/* WARNING: Removing unreachable block (ram,0x000104a074d0) */
/* WARNING: Removing unreachable block (ram,0x000104a07934) */
/* WARNING: Removing unreachable block (ram,0x000104a07554) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a07484(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lVar6;
  long lVar7;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_a8 [24];
  long lStack_90;
  long lStack_88;
  
  lVar1 = unaff_x20;
  _swift_getObjectType();
  FUN_1049b1a14(&lStack_90);
  _swift_unknownObjectRelease(lStack_90);
  lVar7 = lStack_88;
  lVar2 = lStack_88;
  _objc_msgSend(lStack_88,PTR_s_findWindow_1125c96f8);
  _objc_retainAutoreleasedReturnValue();
  _swift_unknownObjectRelease(lVar7);
  if (lVar2 == 0) {
    puVar3 = PTR_PTR_1126add38;
    _swift_getInitializedObjCClass(PTR_PTR_1126add38);
    uVar4 = 0xd00000000000003e;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000003e,0x800000010f229e90);
    _objc_msgSend(puVar3,PTR_s_singleShotLogEntry_logEntry__11266cd78,
                  &PTR____CFConstantStringClassReference_110da4eb8,uVar4);
    _objc_release(uVar4);
    FUN_1049b1a14(&lStack_90,lVar1,&PTR_DAT_1130a44c0);
    _swift_unknownObjectRelease(lStack_88);
    uVar4 = 0xd00000000000003e;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000003e,0x800000010f229e90);
    lVar2 = lStack_90;
    _objc_msgSend(lStack_90,PTR_s_unknownErrorWithMessage_userInfo_11267dc68,uVar4,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _swift_unknownObjectRelease(lStack_90);
    lVar7 = _DAT_1130a4488;
    _swift_beginAccess(unaff_x20 + _DAT_1130a4488,&lStack_90,0,0);
    lVar7 = unaff_x20 + lVar7;
    _swift_unknownObjectWeakLoadStrong();
    if (lVar7 != 0) {
      lVar1 = lVar2;
      __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF(lVar2);
      _objc_msgSend(lVar7,PTR_s_webDialog_didFailWithError__1125255b8);
      _objc_release(lVar1);
      _swift_unknownObjectRelease(lVar7);
    }
    FUN_104a08254(1);
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    _swift_getInitializedObjCClass(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_msgSend();
    _objc_retainAutoreleasedReturnValue();
    _objc_msgSend();
    _objc_release(puVar3);
    _objc_msgSend(lVar2,PTR_s_bounds_1125a5ca8);
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_allocWithZone();
    _objc_msgSend(param_1,param_2,param_3,param_4);
    lVar7 = _DAT_1130a44a8;
    _swift_beginAccess(unaff_x20 + _DAT_1130a44a8,&lStack_90,1,0);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar7);
    *(undefined **)(unaff_x20 + lVar7) = puVar3;
    _objc_release(uVar4);
    if (*(long *)(unaff_x20 + lVar7) != 0) {
      _objc_msgSend(0,*(long *)(unaff_x20 + lVar7),PTR_s_setAlpha__112637810);
      if (*(long *)(unaff_x20 + lVar7) != 0) {
        _objc_msgSend(*(long *)(unaff_x20 + lVar7),PTR_s_setAutoresizingMask__112638f48,0x12);
        lVar6 = *(long *)(unaff_x20 + lVar7);
        if (lVar6 != 0) {
          puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
          _objc_allocWithZone(PTR__OBJC_CLASS___UIColor_1126aea70);
          _objc_retain(lVar6);
          _objc_msgSend(0x3fd3333333333333,0x3fe999999999999a,puVar3,
                        PTR_s_initWithWhite_alpha__1125f6608);
          _objc_msgSend(lVar6,PTR_s_setBackgroundColor__112639330,puVar3);
          _objc_release(lVar6);
          _objc_release(puVar3);
        }
      }
    }
    lVar6 = _DAT_1130a44b0;
    _swift_beginAccess(unaff_x20 + _DAT_1130a44b0,auStack_a8,0,0);
    lVar6 = *(long *)(unaff_x20 + lVar6);
    if ((lVar6 != 0) && (lVar7 = *(long *)(unaff_x20 + lVar7), lVar7 != 0)) {
      _objc_retain();
      _objc_retain(lVar7);
      _objc_msgSend(lVar2,PTR_s_addSubview__11259c880,lVar7);
      _objc_msgSend(lVar2,PTR_s_addSubview__11259c880,lVar6);
      _objc_msgSend(lVar6,PTR_s_becomeFirstResponder_1125a3810);
      FUN_104a07d30(0x3f50624dd2f1a9fc,0,0,0,0);
      puVar3 = &UNK_1107bdc98;
      _swift_allocObject(&UNK_1107bdc98,0x18,7);
      *(long *)(puVar3 + 0x10) = unaff_x20;
      _objc_retain();
      FUN_104a07d30(0x3ff199999999999a,0x3ff0000000000000,0x3fc999999999999a,FUN_104a09a44,puVar3);
      _objc_release(lVar2);
      _objc_release(lVar6);
      _objc_release(lVar7);
      _swift_release(puVar3);
      return;
    }
    puVar3 = PTR_PTR_1126add38;
    _swift_getInitializedObjCClass(PTR_PTR_1126add38);
    uVar4 = 0xd000000000000035;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000035,0x800000010f229ef0);
    _objc_msgSend(puVar3,PTR_s_singleShotLogEntry_logEntry__11266cd78,
                  &PTR____CFConstantStringClassReference_110da4eb8,uVar4);
    _objc_release(uVar4);
    FUN_1049b1a14(&uStack_c0,lVar1,&PTR_DAT_1130a44c0);
    _swift_unknownObjectRelease(uStack_b8);
    uVar5 = 0xd000000000000035;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000035,0x800000010f229ef0);
    uVar4 = uStack_c0;
    _objc_msgSend(uStack_c0,PTR_s_unknownErrorWithMessage_userInfo_11267dc68,uVar5,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _swift_unknownObjectRelease(uStack_c0);
    lVar7 = _DAT_1130a4488;
    _swift_beginAccess(unaff_x20 + _DAT_1130a4488,&uStack_c0,0,0);
    lVar7 = unaff_x20 + lVar7;
    _swift_unknownObjectWeakLoadStrong();
    if (lVar7 != 0) {
      uVar5 = uVar4;
      __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF(uVar4);
      _objc_msgSend(lVar7,PTR_s_webDialog_didFailWithError__1125255b8);
      _objc_release(uVar5);
      _swift_unknownObjectRelease(lVar7);
    }
    FUN_104a08254(1);
    _objc_release(uVar4);
  }
  _objc_release(lVar2);
  return;
}



/* Entry: 104a07a30; end: 104a07abf; -[FBSDKWebDialog show] */

void FUN_104a07a30(undefined8 param_1)

{
  _objc_retain();
  FUN_104a06900();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104a07ac0; end: 104a07b47; -[FBSDKWebDialog addObservers] */

void FUN_104a07ac0(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  _swift_getInitializedObjCClass(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retain(param_1);
  _objc_msgSend(puVar1,PTR_s_defaultCenter_1125b7d90);
  _objc_retainAutoreleasedReturnValue();
  _objc_msgSend();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104a07b48; end: 104a07cd7;  */

void FUN_104a07b48(undefined8 param_1,long param_2)

{
  byte *pbVar1;
  undefined *puVar2;
  undefined8 unaff_x20;
  undefined8 uVar3;
  undefined8 uStack_98;
  undefined8 uStack_90;
  byte abStack_88 [40];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  __s10Foundation12NotificationV8userInfoSDys11AnyHashableVypGSgvg();
  if (param_2 == 0) {
    uStack_58 = 0;
    uStack_60 = 0;
    lStack_48 = 0;
    uStack_50 = 0;
    goto LAB_104a07cb8;
  }
  uStack_98 = 0xd00000000000002c;
  uStack_90 = 0x800000010f229f30;
  puVar2 = PTR___sSSN_11034da80;
  __ss11AnyHashableVyABxcSHRzlufC
            (abStack_88,&uStack_98,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  if (*(long *)(param_2 + 0x10) == 0) {
LAB_104a07bf8:
    param_1 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    lStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    _swift_bridgeObjectRetain(param_2);
    pbVar1 = abStack_88;
    func_0x000100df95d0(pbVar1);
    if (((ulong)puVar2 & 1) == 0) {
      _swift_bridgeObjectRelease(param_2);
      goto LAB_104a07bf8;
    }
    func_0x0001000bb420(*(long *)(param_2 + 0x38) + (long)pbVar1 * 0x20,&uStack_60);
    _swift_bridgeObjectRelease(param_2);
  }
  _swift_bridgeObjectRelease(param_2);
  func_0x0001007bbff0(abStack_88);
  if (lStack_48 != 0) {
    pbVar1 = abStack_88;
    _swift_dynamicCast(pbVar1,&uStack_60,PTR___sypN_11034f1a8 + 8,PTR___sSbN_11034dd40,6);
    if ((int)pbVar1 == 0) {
      return;
    }
    uVar3 = 0;
    if ((abStack_88[0] & 1) != 0) {
      _swift_getInitializedObjCClass(PTR__OBJC_CLASS___CATransaction_1126b5718);
      _objc_msgSend();
      uVar3 = param_1;
    }
    puVar2 = &UNK_1107bdcc0;
    _swift_allocObject(&UNK_1107bdcc0,0x18,7);
    *(undefined8 *)(puVar2 + 0x10) = unaff_x20;
    _objc_retain();
    FUN_104a07d30(0x3ff0000000000000,0x3ff0000000000000,uVar3,0x104a09a4c,puVar2);
    _swift_release(puVar2);
    return;
  }
LAB_104a07cb8:
  func_0x00010006e7f4(&uStack_60);
  return;
}



/* Entry: 104a07cd8; end: 104a07d2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a07cd8(ulong param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130a44b0;
  if ((param_1 & 1) != 0) {
    _swift_beginAccess(param_2 + _DAT_1130a44b0,auStack_38,0,0);
    if (*(long *)(param_2 + lVar1) != 0) {
      _objc_msgSend(*(long *)(param_2 + lVar1),PTR_s_setNeedsLayout_1126509b0);
    }
  }
  return;
}



/* Entry: 104a07d30; end: 104a08073;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a07d30(double param_1,undefined8 param_2,double param_3,long param_4,undefined *param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  int iVar5;
  undefined **ppuVar7;
  long unaff_x20;
  undefined **ppuVar8;
  long lVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  long lStack_108;
  undefined *puStack_100;
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined8 *puVar6;
  
  lVar3 = _DAT_1130a44b0;
  _swift_beginAccess(unaff_x20 + _DAT_1130a44b0,auStack_e0,0,0);
  lVar9 = *(long *)(unaff_x20 + lVar3);
  if (lVar9 == 0) {
    puVar11 = (undefined *)0x0;
    uVar13 = 0;
    uVar15 = 0;
    uVar19 = 0;
    uVar17 = 0;
    uVar18 = 0;
  }
  else {
    _objc_msgSend(&puStack_c8,lVar9,PTR_s_transform_11267c340);
    puVar11 = puStack_c8;
    uVar13 = uStack_c0;
    uVar15 = uStack_b8;
    uVar17 = uStack_a8;
    uVar18 = uStack_a0;
    uVar19 = uStack_b0;
  }
  uStack_98 = lVar9 == 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130a4498);
  puVar6 = puVar1;
  puStack_c8 = puVar11;
  uStack_c0 = uVar13;
  uStack_b8 = uVar15;
  uStack_b0 = uVar19;
  uStack_a8 = uVar17;
  uStack_a0 = uVar18;
  _swift_beginAccess(puVar1,auStack_f8,0,0);
  iVar5 = (int)puVar6;
  uVar10 = *puVar1;
  uVar12 = puVar1[1];
  uVar14 = puVar1[2];
  uVar16 = puVar1[3];
  _CGRectIsEmpty();
  if (iVar5 == 0) {
    uVar10 = *puVar1;
    uVar12 = puVar1[1];
    uVar14 = puVar1[2];
    uVar16 = puVar1[3];
  }
  else {
    FUN_104a072c8();
  }
  if ((param_1 == 1.0) && (*(long *)(unaff_x20 + lVar3) != 0)) {
    puStack_128 = (undefined *)0x3ff0000000000000;
    uStack_120 = 0;
    puStack_118 = (undefined *)0x0;
    puStack_110 = (undefined *)0x3ff0000000000000;
    lStack_108 = 0;
    puStack_100 = (undefined *)0x0;
    _objc_msgSend(*(long *)(unaff_x20 + lVar3),PTR_s_setTransform__112664080,&puStack_128);
    if (*(long *)(unaff_x20 + lVar3) != 0) {
      _objc_msgSend(uVar10,uVar12,uVar14,uVar16,*(long *)(unaff_x20 + lVar3),
                    PTR_s_setFrame__112645658);
      if (*(long *)(unaff_x20 + lVar3) != 0) {
        if (lVar9 == 0) {
          uVar13 = 0;
          puVar11 = (undefined *)0x3ff0000000000000;
          uVar15 = 0;
          uVar19 = 0x3ff0000000000000;
          uVar17 = 0;
          uVar18 = 0;
        }
        puStack_128 = puVar11;
        uStack_120 = uVar13;
        puStack_118 = (undefined *)uVar15;
        puStack_110 = (undefined *)uVar19;
        lStack_108 = uVar17;
        puStack_100 = (undefined *)uVar18;
        _objc_msgSend(*(long *)(unaff_x20 + lVar3),PTR_s_setTransform__112664080,&puStack_128);
      }
    }
  }
  puVar11 = &UNK_1107bdce8;
  _swift_allocObject(&UNK_1107bdce8,0x78,7);
  *(undefined8 *)(puVar11 + 0x20) = uStack_c0;
  *(undefined **)(puVar11 + 0x18) = puStack_c8;
  *(long *)(puVar11 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar11 + 0x30) = uStack_b0;
  *(undefined8 *)(puVar11 + 0x28) = uStack_b8;
  *(undefined8 *)(puVar11 + 0x40) = uStack_a0;
  *(undefined8 *)(puVar11 + 0x38) = uStack_a8;
  puVar11[0x48] = uStack_98;
  *(undefined8 *)(puVar11 + 0x50) = uVar10;
  *(undefined8 *)(puVar11 + 0x58) = uVar12;
  *(undefined8 *)(puVar11 + 0x60) = uVar14;
  *(undefined8 *)(puVar11 + 0x68) = uVar16;
  *(undefined8 *)(puVar11 + 0x70) = param_2;
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  if (param_3 == 0.0) {
    _objc_retain();
    FUN_104a08aa4(uVar10,uVar12,uVar14,uVar16,param_2);
    _swift_release(puVar11);
  }
  else {
    lStack_108 = 0x104a09a54;
    puStack_128 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_120 = 0x42000000;
    puStack_118 = &UNK_1000f6b44;
    puStack_110 = &UNK_1107bdd00;
    ppuVar7 = &puStack_128;
    puStack_100 = puVar11;
    __Block_copy(ppuVar7);
    puVar4 = puStack_100;
    _objc_retain();
    _swift_retain(puVar11);
    _swift_release(puVar4);
    if (param_4 == 0) {
      ppuVar8 = (undefined **)0x0;
    }
    else {
      puStack_128 = puVar2;
      uStack_120 = 0x42000000;
      puStack_118 = &UNK_100288f10;
      puStack_110 = &UNK_1107bdd28;
      ppuVar8 = &puStack_128;
      lStack_108 = param_4;
      puStack_100 = param_5;
      __Block_copy(ppuVar8);
      puVar2 = puStack_100;
      _swift_retain(param_5);
      _swift_release(puVar2);
    }
    _swift_getInitializedObjCClass(PTR__OBJC_CLASS___UIView_1126aec20);
    _objc_msgSend(param_3);
    _swift_release(puVar11);
    __Block_release(ppuVar8);
    __Block_release(ppuVar7);
  }
  return;
}



/* Entry: 104a08074; end: 104a08107; -[FBSDKWebDialog deviceOrientationDidChangeNotification:] */

void FUN_104a08074(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  
  lVar1 = 0;
  __s10Foundation12NotificationVMa();
  lVar3 = *(long *)(lVar1 + -8);
  puVar2 = &stack0xffffffffffffffc0 + -(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  __s10Foundation12NotificationV36_unconditionallyBridgeFromObjectiveCyACSo14NSNotificationCSgFZ
            (puVar2,param_3);
  _objc_retain(param_1);
  FUN_104a07b48(puVar2);
  _objc_release(param_1);
  (**(code **)(lVar3 + 8))(puVar2,lVar1);
  return;
}



/* Entry: 104a08108; end: 104a08167;  */

void FUN_104a08108(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  _swift_getInitializedObjCClass(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  _objc_msgSend();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104a08168; end: 104a08253; -[FBSDKWebDialog removeObservers] */

void FUN_104a08168(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  _swift_getInitializedObjCClass(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retain(param_1);
  _objc_msgSend(puVar1,PTR_s_defaultCenter_1125b7d90);
  _objc_retainAutoreleasedReturnValue();
  _objc_msgSend();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104a08254; end: 104a0848f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a08254(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  long unaff_x20;
  long lVar7;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  _swift_getInitializedObjCClass(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  _objc_msgSend();
  _objc_release(puVar2);
  puVar2 = &UNK_1107bdd60;
  _swift_allocObject(&UNK_1107bdd60,0x18,7);
  *(long *)(puVar2 + 0x10) = unaff_x20;
  lVar7 = _DAT_1130a44a8;
  if ((param_1 & 1) == 0) {
    _swift_beginAccess(unaff_x20 + _DAT_1130a44a8,&puStack_98,0,0);
    lVar7 = *(long *)(unaff_x20 + lVar7);
    if (lVar7 == 0) {
      _objc_retain();
    }
    else {
      _objc_retain();
      _objc_msgSend(lVar7,PTR_s_removeFromSuperview_112628c78);
    }
    lVar7 = _DAT_1130a44b0;
    _swift_beginAccess(unaff_x20 + _DAT_1130a44b0,auStack_68,0,0);
    lVar7 = *(long *)(unaff_x20 + lVar7);
    if (lVar7 != 0) {
      _objc_retain();
      _objc_msgSend();
      _objc_release(lVar7);
    }
    _swift_release(puVar2);
  }
  else {
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    _swift_getInitializedObjCClass(PTR__OBJC_CLASS___UIView_1126aec20);
    puVar4 = &UNK_1107bdd88;
    _swift_allocObject(&UNK_1107bdd88,0x18,7);
    *(long *)(puVar4 + 0x10) = unaff_x20;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_78 = (code *)0x104a09a8c;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_1000f6b44;
    puStack_80 = &UNK_1107bdda0;
    ppuVar5 = &puStack_98;
    puStack_70 = puVar4;
    __Block_copy(ppuVar5);
    puVar4 = puStack_70;
    _objc_retain();
    _objc_retain();
    _swift_release(puVar4);
    pcStack_78 = FUN_104a09a84;
    puStack_98 = puVar1;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_100288f10;
    puStack_80 = &UNK_1107bddc8;
    ppuVar6 = &puStack_98;
    puStack_70 = puVar2;
    __Block_copy(ppuVar6);
    puVar4 = puStack_70;
    _swift_retain(puVar2);
    _swift_release(puVar4);
    _objc_msgSend(0x3fd3333333333333,puVar3,PTR_s_animateWithDuration_animations_c_11259e6b0,ppuVar5
                  ,ppuVar6);
    _swift_release(puVar2);
    __Block_release(ppuVar6);
    __Block_release(ppuVar5);
  }
  return;
}



/* Entry: 104a08490; end: 104a08517; -[FBSDKWebDialog cancel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a08490(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130a4488;
  _swift_beginAccess(param_1 + _DAT_1130a4488,auStack_38,0,0);
  lVar1 = param_1 + lVar1;
  _swift_unknownObjectWeakLoadStrong();
  _objc_retain(param_1);
  if (lVar1 != 0) {
    _objc_msgSend(lVar1,PTR_s_webDialogDidCancel__1125255c8,param_1);
    _swift_unknownObjectRelease(lVar1);
  }
  FUN_104a08254(1);
  _objc_release(param_1);
  return;
}



/* Entry: 104a08518; end: 104a085c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a08518(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130a4488;
  _swift_beginAccess(unaff_x20 + _DAT_1130a4488,auStack_48,0,0);
  lVar1 = unaff_x20 + lVar1;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 != 0) {
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (param_1,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
    _objc_msgSend(lVar1,PTR_s_webDialog_didCompleteWithResults_1125255d0);
    _objc_release(param_1);
    _swift_unknownObjectRelease(lVar1);
  }
  FUN_104a08254(1);
  return;
}



/* Entry: 104a085c8; end: 104a087db; -[FBSDKWebDialog completeWith:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a085c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  puVar1 = PTR___sypN_11034f1a8;
  __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
            (param_3,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  lVar2 = _DAT_1130a4488;
  _swift_beginAccess(param_1 + _DAT_1130a4488,auStack_48,0,0);
  lVar2 = param_1 + lVar2;
  _swift_unknownObjectWeakLoadStrong();
  _objc_retain(param_1);
  if (lVar2 == 0) {
    _swift_bridgeObjectRelease(param_3);
  }
  else {
    uVar3 = param_3;
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (param_3,PTR___sSSN_11034da80,puVar1 + 8,PTR___sSSSHsWP_11034da90);
    _swift_bridgeObjectRelease(param_3);
    _objc_msgSend(lVar2,PTR_s_webDialog_didCompleteWithResults_1125255d0,param_1,uVar3);
    _objc_release(uVar3);
    _swift_unknownObjectRelease(lVar2);
  }
  FUN_104a08254(1);
  _objc_release(param_1);
  return;
}



/* Entry: 104a087dc; end: 104a0880b; -[FBSDKWebDialog dismissWithAnimated:] */

void FUN_104a087dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain();
  FUN_104a08254(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104a0880c; end: 104a088cb; -[FBSDKWebDialog failWith:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a0880c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130a4488;
  _swift_beginAccess(param_1 + _DAT_1130a4488,auStack_48,0,0);
  lVar1 = param_1 + lVar1;
  _swift_unknownObjectWeakLoadStrong();
  _objc_retain(param_3);
  _objc_retain(param_1);
  if (lVar1 != 0) {
    uVar2 = param_3;
    __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF(param_3);
    _objc_msgSend(lVar1,PTR_s_webDialog_didFailWithError__1125255b8,param_1,uVar2);
    _objc_release(uVar2);
    _swift_unknownObjectRelease(lVar1);
  }
  FUN_104a08254(1);
  _objc_release(param_3);
  _objc_release(param_1);
  return;
}



/* Entry: 104a088cc; end: 104a089ab; -[FBSDKWebDialog generateURLAndReturnError:] */

/* WARNING: Removing unreachable block (ram,0x000104a08938) */
/* WARNING: Removing unreachable block (ram,0x000104a08988) */
/* WARNING: Removing unreachable block (ram,0x000104a0893c) */

void FUN_104a088cc(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_50 [16];
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar3 = *(long *)(lVar1 + -8);
  lVar2 = *(long *)(lVar3 + 0x40);
  _objc_retain(param_1);
  FUN_104a06d00(auStack_50 + -(lVar2 + 0xfU & 0xfffffffffffffff0));
  _objc_release(param_1);
  __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
  (**(code **)(lVar3 + 8))(auStack_50 + -(lVar2 + 0xfU & 0xfffffffffffffff0),lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104a089ac; end: 104a08a1f;  */

void FUN_104a089ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1107bdf40;
  _swift_allocObject(&UNK_1107bdf40,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  _objc_retain(param_2);
  FUN_104a07d30(0x3feccccccccccccd,0x3ff0000000000000,0x3fc999999999999a,FUN_104a09fac,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 104a08a20; end: 104a08a47; -[FBSDKWebDialog showWebView] */

void FUN_104a08a20(undefined8 param_1)

{
  _objc_retain();
  FUN_104a07484();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104a08a48; end: 104a08aa3; -[FBSDKWebDialog applicationFrameForOrientation] */

undefined8 FUN_104a08a48(undefined8 param_1,undefined8 param_2)

{
  _objc_retain();
  FUN_104a072c8();
  _objc_release(param_2);
  return param_1;
}



/* Entry: 104a08aa4; end: 104a08c33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a08aa4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,ulong *param_7)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  undefined1 auStack_88 [24];
  
  lVar1 = _DAT_1130a44b0;
  uVar6 = param_7[1];
  uVar4 = *param_7;
  uVar8 = param_7[3];
  uVar7 = param_7[2];
  uVar9 = param_7[4];
  uVar10 = param_7[5];
  _swift_beginAccess(param_6 + _DAT_1130a44b0,auStack_88,0,0);
  if (*(long *)(param_6 + lVar1) != 0) {
    bVar2 = (param_7[6] & 1) != 0;
    uStack_98 = 0;
    if (!bVar2) {
      uStack_98 = uVar9;
    }
    uStack_90 = 0;
    if (!bVar2) {
      uStack_90 = uVar10;
    }
    uVar9 = -(ulong)bVar2;
    uStack_b0 = uVar6 & ~uVar9;
    uStack_b8 = (uVar4 ^ 0x3ff0000000000000) & ~uVar9 ^ 0x3ff0000000000000;
    uStack_a8 = uVar7 ^ uVar7 & uVar9;
    uStack_a0 = uVar8 ^ (uVar8 ^ 0x3ff0000000000000) & uVar9;
    _objc_msgSend(*(long *)(param_6 + lVar1),PTR_s_setTransform__112664080,&uStack_b8);
    lVar3 = *(long *)(param_6 + lVar1);
    if (lVar3 != 0) {
      _objc_retain();
      uVar5 = param_1;
      _CGRectGetMidX(param_1,param_2);
      _CGRectGetMidY(param_1,param_2);
      _objc_msgSend(uVar5,param_1,lVar3,PTR_s_setCenter__11263c3c8);
      _objc_release(lVar3);
      if (*(long *)(param_6 + lVar1) != 0) {
        _objc_msgSend(param_5,*(long *)(param_6 + lVar1),PTR_s_setAlpha__112637810);
      }
    }
  }
  lVar1 = _DAT_1130a44a8;
  _swift_beginAccess(param_6 + _DAT_1130a44a8,&uStack_b8,0,0);
  if (*(long *)(param_6 + lVar1) != 0) {
    _objc_msgSend(param_5,*(long *)(param_6 + lVar1),PTR_s_setAlpha__112637810);
  }
  return;
}


