/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104a08c34; end: 104a08ce7; -[FBSDKWebDialog updateViewWithScale:alpha:animationDuration:completion:] */

void FUN_104a08c34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  code *pcVar2;
  
  __Block_copy();
  if (param_6 == 0) {
    pcVar2 = (code *)0x0;
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = &UNK_1107bdec8;
    _swift_allocObject(&UNK_1107bdec8,0x18,7);
    *(long *)(puVar1 + 0x10) = param_6;
    pcVar2 = FUN_104a09f2c;
  }
  _objc_retain(param_4);
  FUN_104a07d30(param_1,param_2,param_3,pcVar2,puVar1);
  func_0x000101237350(pcVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104a08ce8; end: 104a08d33;  */

void FUN_104a08ce8(void)

{
  _objc_allocWithZone();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d290)();
  return;
}



/* Entry: 104a08d34; end: 104a08d93; -[FBSDKWebDialog init] */

void FUN_104a08d34(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("FBSDKCoreKit._WebDialog",0x17,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104a08d60);
  (*pcVar1)();
}



/* Entry: 104a08d94; end: 104a08e13; -[FBSDKWebDialog .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a08d94(long param_1)

{
  FUN_104a09f40(param_1 + _DAT_1130a4488);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130a4490 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130a44a0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130a44a8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130a44b0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_1130a44b8 + 8))
  ;
  return;
}



/* Entry: 104a08e14; end: 104a08ec3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a08e14(undefined8 param_1,undefined8 param_2)

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
              (param_2,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
    _objc_msgSend(lVar1,PTR_s_webDialog_didCompleteWithResults_1125255d0);
    _objc_release(param_2);
    _swift_unknownObjectRelease(lVar1);
  }
  FUN_104a08254(1);
  return;
}



/* Entry: 104a08ec4; end: 104a09053; -[FBSDKWebDialog webDialogView:didCompleteWithResults:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a08ec4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  puVar1 = PTR___sypN_11034f1a8;
  __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
            (param_4,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  lVar2 = _DAT_1130a4488;
  _swift_beginAccess(param_1 + _DAT_1130a4488,auStack_48,0,0);
  lVar2 = param_1 + lVar2;
  _swift_unknownObjectWeakLoadStrong();
  _objc_retain(param_1);
  if (lVar2 == 0) {
    _swift_bridgeObjectRelease(param_4);
  }
  else {
    uVar3 = param_4;
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (param_4,PTR___sSSN_11034da80,puVar1 + 8,PTR___sSSSHsWP_11034da90);
    _swift_bridgeObjectRelease(param_4);
    _objc_msgSend(lVar2,PTR_s_webDialog_didCompleteWithResults_1125255d0,param_1,uVar3);
    _objc_release(uVar3);
    _swift_unknownObjectRelease(lVar2);
  }
  FUN_104a08254(1);
  _objc_release(param_1);
  return;
}



/* Entry: 104a09054; end: 104a09113; -[FBSDKWebDialog webDialogView:didFailWithError:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a09054(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130a4488;
  _swift_beginAccess(param_1 + _DAT_1130a4488,auStack_48,0,0);
  lVar1 = param_1 + lVar1;
  _swift_unknownObjectWeakLoadStrong();
  _objc_retain(param_4);
  _objc_retain(param_1);
  if (lVar1 != 0) {
    uVar2 = param_4;
    __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF(param_4);
    _objc_msgSend(lVar1,PTR_s_webDialog_didFailWithError__1125255b8,param_1,uVar2);
    _objc_release(uVar2);
    _swift_unknownObjectRelease(lVar1);
  }
  FUN_104a08254(1);
  _objc_release(param_4);
  _objc_release(param_1);
  return;
}



/* Entry: 104a09114; end: 104a0917f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a09114(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130a4488;
  _swift_beginAccess(unaff_x20 + _DAT_1130a4488,auStack_38,0,0);
  lVar1 = unaff_x20 + lVar1;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 != 0) {
    _objc_msgSend();
    _swift_unknownObjectRelease(lVar1);
  }
  FUN_104a08254(1);
  return;
}



/* Entry: 104a09180; end: 104a09207; -[FBSDKWebDialog webDialogViewDidCancel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a09180(long param_1)

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



/* Entry: 104a09208; end: 104a0920b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a09208(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long unaff_x20;
  long lVar10;
  long lVar11;
  code *pcVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 uStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  lVar1 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lStack_b0 = *(long *)(lVar1 + -8);
  lVar10 = (long)&uStack_c0 - (*(long *)(lStack_b0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar15 = *(long *)(lVar2 + -8);
  lVar13 = lVar10 - (*(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  lStack_b8 = lVar2;
  __s8Dispatch0A4TimeVMa();
  lVar2 = _DAT_1130a4480;
  lVar11 = *(long *)(lVar3 + -8);
  uVar9 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar16 = lVar13 - uVar9;
  lVar14 = lVar16 - uVar9;
  _swift_beginAccess(unaff_x20 + _DAT_1130a4480,auStack_78,0,0);
  if (*(char *)(unaff_x20 + lVar2) == '\x01') {
    uVar4 = 0;
    func_0x0001000295c4();
    __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
    uStack_c0 = uVar4;
    __s8Dispatch0A4TimeV3nowACyFZ(lVar16);
    __s8Dispatch1poiyAA0A4TimeVAD_SdtF(lVar14,0x3fa999999999999a,lVar16);
    pcVar12 = *(code **)(lVar11 + 8);
    (*pcVar12)(lVar16,lVar3);
    puVar5 = &UNK_1107bdef0;
    _swift_allocObject(&UNK_1107bdef0,0x18,7);
    *(long *)(puVar5 + 0x10) = unaff_x20;
    pcStack_88 = FUN_104a09f64;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0x42000000;
    puStack_98 = &UNK_1000f6b44;
    puStack_90 = &UNK_1107bdf08;
    ppuVar6 = &puStack_a8;
    puStack_80 = puVar5;
    __Block_copy(ppuVar6);
    puVar5 = puStack_80;
    _objc_retain();
    _swift_release(puVar5);
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar13);
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puStack_a8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    uVar4 = 0x112d4af88;
    FUN_104a09f6c(0x112d4af88,PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8,
                  PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
    _swift_retain(puVar5);
    uVar7 = 0x11309c6f0;
    func_0x0001048db364(0x11309c6f0);
    uVar8 = 0x112d4af98;
    FUN_104a09f6c(0x112d4af98,0x1048e76ec,PTR___sSayxGSTsMc_11034dd08);
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (lVar10,&puStack_a8,uVar7,uVar8,lVar1,uVar4);
    uVar4 = uStack_c0;
    __sSo17OS_dispatch_queueC8DispatchE10asyncAfter8deadline3qos5flags7executeyAC0D4TimeV_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (lVar14,lVar13,lVar10,ppuVar6);
    __Block_release(ppuVar6);
    _objc_release(uVar4);
    (**(code **)(lStack_b0 + 8))(lVar10,lVar1);
    (**(code **)(lVar15 + 8))(lVar13,lStack_b8);
    (*pcVar12)(lVar14,lVar3);
  }
  return;
}



/* Entry: 104a0920c; end: 104a09257;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a0920c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130a44b0;
  _swift_beginAccess(param_1 + _DAT_1130a44b0,auStack_38,0,0);
  if (*(long *)(param_1 + lVar1) != 0) {
    FUN_104a07484();
  }
  return;
}



/* Entry: 104a09258; end: 104a092a3; -[FBSDKWebDialog webDialogViewDidFinishLoad:] */

void FUN_104a09258(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_104a09a94();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104a092a4; end: 104a09327;  */

void FUN_104a092a4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRetain_11034f540)();
  return;
}



/* Entry: 104a09328; end: 104a0936f;  */

undefined8 FUN_104a09328(undefined8 param_1,undefined8 param_2)

{
  _swift_getObjectType();
  _swift_getObjectType(param_2);
  return param_1;
}



/* Entry: 104a09370; end: 104a09467;  */

undefined8 FUN_104a09370(void)

{
  return 0x113815b40;
}



/* Entry: 104a09468; end: 104a094c7;  */

void FUN_104a09468(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = 0;
  FUN_1049fe1e8();
  _objc_allocWithZone();
  _objc_msgSend();
  puVar2 = PTR_PTR_1126add20;
  _swift_getInitializedObjCClass();
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  uRam0000000113815b50 = uVar1;
  puRam0000000113815b58 = puVar2;
  return;
}



/* Entry: 104a094c8; end: 104a0966f;  */

undefined8 FUN_104a094c8(void)

{
  if (lRam000000011309ffd8 != -1) {
    _swift_once(0x11309ffd8,FUN_104a09468);
  }
  return 0x113815b50;
}



/* Entry: 104a09670; end: 104a096bb;  */

void FUN_104a09670(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(0x113815b40,auStack_38,0,0);
  uVar1 = uRam0000000113815b48;
  *param_1 = uRam0000000113815b40;
  param_1[1] = uVar1;
  FUN_104a09d18();
  return;
}



/* Entry: 104a096bc; end: 104a0970f;  */

void FUN_104a096bc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [24];
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  _swift_beginAccess(0x113815b40,auStack_48,1,0);
  uVar4 = uRam0000000113815b48;
  uVar3 = uRam0000000113815b40;
  uRam0000000113815b40 = uVar1;
  uRam0000000113815b48 = uVar2;
  func_0x000104a09d44(uVar3,uVar4);
  return;
}



/* Entry: 104a09710; end: 104a097c3;  */

undefined1  [16] FUN_104a09710(undefined8 param_1)

{
  undefined1 auVar1 [16];
  
  _swift_beginAccess(0x113815b40,param_1,0x21,0);
  auVar1._8_8_ = 0x113815b40;
  auVar1._0_8_ = 0x104a0a014;
  return auVar1;
}



/* Entry: 104a097c4; end: 104a097c7;  */

void FUN_104a097c4(void)

{
  return;
}



/* Entry: 104a097c8; end: 104a09a43;  */

void FUN_104a097c8(long param_1,code *param_2,undefined8 param_3,uint param_4,long *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  code *pcVar7;
  bool bVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar15 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar19 = 0xffffffffffffffff;
  if ((long)uVar15 < 0x40) {
    uVar19 = ~(-1L << (uVar15 & 0x3f));
  }
  uVar19 = uVar19 & *(ulong *)(param_1 + 0x40);
  _swift_bridgeObjectRetain();
  _swift_retain(param_3);
  lVar12 = 0;
  while( true ) {
    while (uVar19 != 0) {
      uVar13 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
      uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
      uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      uVar13 = lVar12 << 10 | LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) << 4;
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x30) + uVar13);
      puVar2 = (undefined8 *)(*(long *)(param_1 + 0x38) + uVar13);
      uStack_a0 = *puVar1;
      uVar4 = puVar1[1];
      uStack_90 = *puVar2;
      uVar5 = puVar2[1];
      uStack_98 = uVar4;
      uStack_88 = uVar5;
      _swift_bridgeObjectRetain(uVar4);
      _swift_bridgeObjectRetain(uVar5);
      (*param_2)(&uStack_80,&uStack_a0);
      _swift_bridgeObjectRelease(uVar5);
      _swift_bridgeObjectRelease(uVar4);
      uVar5 = uStack_68;
      uVar4 = uStack_70;
      uVar6 = uStack_78;
      uVar13 = uStack_80;
      lVar17 = *param_5;
      uVar10 = uStack_80;
      uVar11 = uStack_78;
      func_0x000100029284();
      lVar14 = *(long *)(lVar17 + 0x10);
      uVar16 = (ulong)~(uint)uVar11 & 1;
      lVar18 = lVar14 + uVar16;
      if (SCARRY8(lVar14,uVar16)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x104a09a30);
        (*pcVar7)();
      }
      if (*(long *)(lVar17 + 0x18) < lVar18) {
        func_0x0001001833c8(lVar18,param_4 & 1);
        uVar10 = uVar13;
        uVar16 = uVar6;
        func_0x000100029284();
        if (((uint)uVar11 & 1) != ((uint)uVar16 & 1)) {
          __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF
                    (PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x104a09a44);
          (*pcVar7)();
        }
      }
      else if ((param_4 & 1) == 0) {
        func_0x000100184498();
      }
      uVar19 = uVar19 - 1 & uVar19;
      lVar18 = *param_5;
      if ((uVar11 & 1) == 0) {
        lVar14 = lVar18 + (uVar10 >> 6) * 8;
        *(ulong *)(lVar14 + 0x40) = *(ulong *)(lVar14 + 0x40) | 1L << (uVar10 & 0x3f);
        puVar3 = (ulong *)(*(long *)(lVar18 + 0x30) + uVar10 * 0x10);
        *puVar3 = uVar13;
        puVar3[1] = uVar6;
        puVar1 = (undefined8 *)(*(long *)(lVar18 + 0x38) + uVar10 * 0x10);
        *puVar1 = uVar4;
        puVar1[1] = uVar5;
        if (SCARRY8(*(long *)(lVar18 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x104a09a34);
          (*pcVar7)();
        }
        *(long *)(lVar18 + 0x10) = *(long *)(lVar18 + 0x10) + 1;
      }
      else {
        _swift_bridgeObjectRelease(uVar6);
        puVar1 = (undefined8 *)(*(long *)(lVar18 + 0x38) + uVar10 * 0x10);
        uVar9 = puVar1[1];
        *puVar1 = uVar4;
        puVar1[1] = uVar5;
        _swift_bridgeObjectRelease(uVar9);
      }
      param_4 = 1;
    }
    bVar8 = SCARRY8(lVar12,1);
    lVar12 = lVar12 + 1;
    if (bVar8) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x104a09a2c);
      (*pcVar7)();
    }
    if ((long)(uVar15 + 0x3f >> 6) <= lVar12) break;
    uVar19 = ((ulong *)(param_1 + 0x40))[lVar12];
  }
  _swift_release(param_3);
  _swift_release(param_1);
  return;
}



/* Entry: 104a09a44; end: 104a09a6b;  */

void FUN_104a09a44(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar1 = &UNK_1107bdf40;
  _swift_allocObject(&UNK_1107bdf40,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  _objc_retain(uVar2);
  FUN_104a07d30(0x3feccccccccccccd,0x3ff0000000000000,0x3fc999999999999a,FUN_104a09fac,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 104a09a6c; end: 104a09a83;  */

void FUN_104a09a6c(long param_1,long param_2)

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



/* Entry: 104a09a84; end: 104a09a93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a09a84(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130a44a8;
  lVar2 = *(long *)(unaff_x20 + 0x10);
  _swift_beginAccess(lVar2 + _DAT_1130a44a8,auStack_48,0,0);
  if (*(long *)(lVar2 + lVar1) != 0) {
    _objc_msgSend(*(long *)(lVar2 + lVar1),PTR_s_removeFromSuperview_112628c78);
  }
  lVar1 = _DAT_1130a44b0;
  _swift_beginAccess(lVar2 + _DAT_1130a44b0,auStack_60,0,0);
  if (*(long *)(lVar2 + lVar1) != 0) {
    _objc_msgSend(*(long *)(lVar2 + lVar1),PTR_s_removeFromSuperview_112628c78);
  }
  return;
}



/* Entry: 104a09a94; end: 104a09d17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a09a94(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long unaff_x20;
  long lVar10;
  long lVar11;
  code *pcVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 uStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  lVar1 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lStack_b0 = *(long *)(lVar1 + -8);
  lVar10 = (long)&uStack_c0 - (*(long *)(lStack_b0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar15 = *(long *)(lVar2 + -8);
  lVar13 = lVar10 - (*(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  lStack_b8 = lVar2;
  __s8Dispatch0A4TimeVMa();
  lVar2 = _DAT_1130a4480;
  lVar11 = *(long *)(lVar3 + -8);
  uVar9 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar16 = lVar13 - uVar9;
  lVar14 = lVar16 - uVar9;
  _swift_beginAccess(unaff_x20 + _DAT_1130a4480,auStack_78,0,0);
  if (*(char *)(unaff_x20 + lVar2) == '\x01') {
    uVar4 = 0;
    func_0x0001000295c4();
    __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
    uStack_c0 = uVar4;
    __s8Dispatch0A4TimeV3nowACyFZ(lVar16);
    __s8Dispatch1poiyAA0A4TimeVAD_SdtF(lVar14,0x3fa999999999999a,lVar16);
    pcVar12 = *(code **)(lVar11 + 8);
    (*pcVar12)(lVar16,lVar3);
    puVar5 = &UNK_1107bdef0;
    _swift_allocObject(&UNK_1107bdef0,0x18,7);
    *(long *)(puVar5 + 0x10) = unaff_x20;
    pcStack_88 = FUN_104a09f64;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0x42000000;
    puStack_98 = &UNK_1000f6b44;
    puStack_90 = &UNK_1107bdf08;
    ppuVar6 = &puStack_a8;
    puStack_80 = puVar5;
    __Block_copy(ppuVar6);
    puVar5 = puStack_80;
    _objc_retain();
    _swift_release(puVar5);
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar13);
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puStack_a8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    uVar4 = 0x112d4af88;
    FUN_104a09f6c(0x112d4af88,PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8,
                  PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
    _swift_retain(puVar5);
    uVar7 = 0x11309c6f0;
    func_0x0001048db364(0x11309c6f0);
    uVar8 = 0x112d4af98;
    FUN_104a09f6c(0x112d4af98,0x1048e76ec,PTR___sSayxGSTsMc_11034dd08);
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (lVar10,&puStack_a8,uVar7,uVar8,lVar1,uVar4);
    uVar4 = uStack_c0;
    __sSo17OS_dispatch_queueC8DispatchE10asyncAfter8deadline3qos5flags7executeyAC0D4TimeV_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (lVar14,lVar13,lVar10,ppuVar6);
    __Block_release(ppuVar6);
    _objc_release(uVar4);
    (**(code **)(lStack_b0 + 8))(lVar10,lVar1);
    (**(code **)(lVar15 + 8))(lVar13,lStack_b8);
    (*pcVar12)(lVar14,lVar3);
  }
  return;
}



/* Entry: 104a09d18; end: 104a09d9b;  */

void FUN_104a09d18(long param_1,undefined8 param_2)

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



/* Entry: 104a09d9c; end: 104a09da3;  */

void FUN_104a09d9c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000104a09da0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x20 + 0x90))();
  return;
}



/* Entry: 104a09da4; end: 104a09f2b;  */

void FUN_104a09da4(undefined8 *param_1)

{
  _swift_unknownObjectRelease(*param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1[1]);
  return;
}



/* Entry: 104a09f2c; end: 104a09f3f;  */

void FUN_104a09f2c(uint param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000104a09f3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1 & 1);
  return;
}



/* Entry: 104a09f40; end: 104a09f63;  */

undefined8 FUN_104a09f40(undefined8 param_1)

{
  _swift_unknownObjectWeakDestroy();
  return param_1;
}



/* Entry: 104a09f64; end: 104a09f6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a09f64(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130a44b0;
  lVar2 = *(long *)(unaff_x20 + 0x10);
  _swift_beginAccess(lVar2 + _DAT_1130a44b0,auStack_38,0,0);
  if (*(long *)(lVar2 + lVar1) != 0) {
    FUN_104a07484();
  }
  return;
}



/* Entry: 104a09f6c; end: 104a09fab;  */

void FUN_104a09f6c(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    (*param_2)(0xff);
    _swift_getWitnessTable(param_3,uVar1);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 104a09fac; end: 104a09fe3;  */

void FUN_104a09fac(void)

{
  FUN_104a07d30(0x3ff0000000000000,0x3ff0000000000000,0x3fc999999999999a,0,0);
  return;
}



/* Entry: 104a09fe4; end: 104a0a02f;  */

void FUN_104a09fe4(long param_1,long param_2)

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



/* Entry: 104a0a030; end: 104a0a04f;  */

void FUN_104a0a030(void)

{
  _objc_allocWithZone();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d290)();
  return;
}



/* Entry: 104a0a050; end: 104a0a0a3;  */

void FUN_104a0a050(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_allocWithZone(PTR__OBJC_CLASS___WKWebView_1126b4f60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d290)(param_1,param_2,param_3,param_4);
  return;
}



/* Entry: 104a0a0a4; end: 104a0a0fb; -[FBSDKWebViewFactory createWebViewWithFrame:] */

void FUN_104a0a0a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_allocWithZone(PTR__OBJC_CLASS___WKWebView_1126b4f60);
  _objc_msgSend(param_1,param_2,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104a0a0fc; end: 104a0a12f;  */

void FUN_104a0a0fc(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104a0a130; end: 104a0a16b; -[FBSDKWebViewFactory init] */

void FUN_104a0a130(undefined8 param_1)

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



/* Entry: 104a0a16c; end: 104a0a19f;  */

void FUN_104a0a16c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104a0a1a0; end: 104a0a1bf;  */

void FUN_104a0a1a0(void)

{
  _swift_getInitializedObjCClass(&PTR_PTR_1129e9bb0);
  return;
}



/* Entry: 104a0a1c0; end: 104a0a1d7; +[GTLRBatchQuery batchQuery] */

void FUN_104a0a1c0(void)

{
  _objc_alloc();
  func_0x00010bfee200();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104a0a1d8; end: 104a0a227; +[GTLRBatchQuery batchQueryWithQueries:] */

void FUN_104a0a1d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bf170a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e6320();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104a0a228; end: 104a0a2e7; -[GTLRBatchQuery copyWithZone:] */

long FUN_104a0a228(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = param_1;
  func_0x00010bf39c40();
  func_0x00010bf00e40();
  func_0x00010bfee200();
  if (*(long *)(param_1 + 8) != 0) {
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    _objc_alloc(PTR__OBJC_CLASS___NSArray_1126ae530);
    func_0x00010bff4020();
    func_0x00010c1e6320(lVar1,param_2,puVar2);
    _objc_release(puVar2);
  }
  func_0x00010c198120(lVar1,param_2,*(undefined8 *)(param_1 + 0x18));
  func_0x00010c2013c0(lVar1,param_2,*(undefined1 *)(param_1 + 0x20));
  func_0x00010c1659e0(lVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  func_0x00010c165b80(lVar1,param_2,*(undefined8 *)(param_1 + 0x30));
  func_0x00010c173940(lVar1,param_2,*(undefined8 *)(param_1 + 0x38));
  func_0x00010c1c0780(lVar1,param_2,*(undefined8 *)(param_1 + 0x40));
  return lVar1;
}



/* Entry: 104a0a2e8; end: 104a0a42b; -[GTLRBatchQuery description] */

void FUN_104a0a2e8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  func_0x00010c11d020();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c296f60();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c225c20(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
  func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d360(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  puVar3 = puVar2;
  func_0x00010bf00560();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf446e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bf39c40();
  func_0x00010bf529e0();
  func_0x00010c25d9e0(puVar3,param_2,&PTR____CFConstantStringClassReference_110da6838);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104a0a42c; end: 104a0a433; -[GTLRBatchQuery isBatchQuery] */

undefined8 FUN_104a0a42c(void)

{
  return 1;
}



/* Entry: 104a0a434; end: 104a0a43b; -[GTLRBatchQuery uploadParameters] */

undefined8 FUN_104a0a434(void)

{
  return 0;
}



/* Entry: 104a0a43c; end: 104a0a483; -[GTLRBatchQuery invalidateQuery] */

void FUN_104a0a43c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x00010c11d020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b7520();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104a0a484; end: 104a0a61f; -[GTLRBatchQuery queryForRequestID:] */

void FUN_104a0a484(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
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
  _objc_retain();
  lVar1 = *(long *)(param_1 + 0x10);
  lVar3 = param_3;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc();
    func_0x00010bfee200();
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    *(undefined **)(param_1 + 0x10) = puVar2;
    _objc_release(uVar4);
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    lVar1 = *(long *)(param_1 + 8);
    _objc_retain();
    lVar3 = lVar1;
    func_0x00010bf52a60();
    if (lVar3 != 0) {
      lVar7 = *plStack_120;
      do {
        lVar8 = 0;
        do {
          if (*plStack_120 != lVar7) {
            _objc_enumerationMutation(lVar1);
          }
          uVar5 = *(undefined8 *)(lStack_128 + lVar8 * 8);
          uVar6 = *(undefined8 *)(param_1 + 0x10);
          uVar4 = uVar5;
          func_0x00010c1356e0(uVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0560(uVar6,param_2,uVar5,uVar4);
          _objc_release(uVar4);
          lVar8 = lVar8 + 1;
        } while (lVar3 != lVar8);
        lVar3 = lVar1;
        func_0x00010bf52a60(lVar1,param_2,&uStack_130,auStack_e8,0x10);
      } while (lVar3 != 0);
    }
    _objc_release(lVar1);
    lVar1 = *(long *)(param_1 + 0x10);
    lVar3 = param_3;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_retain();
  _objc_release();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
    return;
  }
  ___stack_chk_fail();
  func_0x00010c0d3c80();
  uVar4 = *(undefined8 *)(param_3 + 8);
  *(long *)(param_3 + 8) = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 104a0a620; end: 104a0a64f; -[GTLRBatchQuery setQueries:] */

void FUN_104a0a620(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c0d3c80();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104a0a650; end: 104a0a657; -[GTLRBatchQuery queries] */

void FUN_104a0a650(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 104a0a658; end: 104a0a6b7; -[GTLRBatchQuery addQuery:] */

void FUN_104a0a658(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc();
    func_0x00010bfee200();
    uVar3 = *(undefined8 *)(param_1 + 8);
    *(undefined **)(param_1 + 8) = puVar2;
    _objc_release(uVar3);
    lVar1 = *(long *)(param_1 + 8);
  }
  func_0x00010befa120(lVar1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104a0a6b8; end: 104a0a72b; -[GTLRBatchQuery executionParameters] */

void FUN_104a0a6b8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain();
  _objc_sync_enter();
  if (*(long *)(param_1 + 0x18) == 0) {
    puVar1 = PTR_PTR_1126ae0e0;
    _objc_alloc();
    func_0x00010bfee200();
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    *(undefined **)(param_1 + 0x18) = puVar1;
    _objc_release(uVar2);
  }
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 104a0a72c; end: 104a0a77b; -[GTLRBatchQuery setExecutionParameters:] */

void FUN_104a0a72c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_retain();
  _objc_sync_enter();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_release(uVar1);
  _objc_sync_exit(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104a0a77c; end: 104a0a783; -[GTLRBatchQuery hasExecutionParameters] */

void FUN_104a0a77c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd9ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_hasParameters_1125d41b8);
  return;
}



/* Entry: 104a0a784; end: 104a0a78f; -[GTLRBatchQuery shouldSkipAuthorization] */

byte FUN_104a0a784(long param_1)

{
  return *(byte *)(param_1 + 0x20) & 1;
}



/* Entry: 104a0a790; end: 104a0a797; -[GTLRBatchQuery setShouldSkipAuthorization:] */

void FUN_104a0a790(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 104a0a798; end: 104a0a7a3; -[GTLRBatchQuery additionalHTTPHeaders] */

void FUN_104a0a798(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x28,1);
  return;
}



/* Entry: 104a0a7a4; end: 104a0a7ab; -[GTLRBatchQuery setAdditionalHTTPHeaders:] */

void FUN_104a0a7a4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_copy_11034d318)();
  return;
}



/* Entry: 104a0a7ac; end: 104a0a7b7; -[GTLRBatchQuery additionalURLQueryParameters] */

void FUN_104a0a7ac(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x30,1);
  return;
}



/* Entry: 104a0a7b8; end: 104a0a7bf; -[GTLRBatchQuery setAdditionalURLQueryParameters:] */

void FUN_104a0a7b8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_copy_11034d318)();
  return;
}



/* Entry: 104a0a7c0; end: 104a0a7cb; -[GTLRBatchQuery boundary] */

void FUN_104a0a7c0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x38,1);
  return;
}



/* Entry: 104a0a7cc; end: 104a0a7d3; -[GTLRBatchQuery setBoundary:] */

void FUN_104a0a7cc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_copy_11034d318)();
  return;
}



/* Entry: 104a0a7d4; end: 104a0a7df; -[GTLRBatchQuery loggingName] */

void FUN_104a0a7d4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x40,1);
  return;
}



/* Entry: 104a0a7e0; end: 104a0a7e7; -[GTLRBatchQuery setLoggingName:] */

void FUN_104a0a7e0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_copy_11034d318)();
  return;
}



/* Entry: 104a0a7e8; end: 104a0a853; -[GTLRBatchQuery .cxx_destruct] */

void FUN_104a0a7e8(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104a0a854; end: 104a0a963; -[GTLRBatchResult copyWithZone:] */

undefined1 * FUN_104a0a854(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1126e34a0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_copyWithZone__1125b2238);
  uVar2 = param_1;
  func_0x00010c261c00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf52240();
  func_0x00010c20f8e0(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bfa02e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf52240();
  func_0x00010c19a0c0(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c13b8c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf52240();
  func_0x00010c1ecfe0(puVar1);
  _objc_release(uVar2);
  _objc_release(param_1);
  return (undefined1 *)puVar1;
}



/* Entry: 104a0a964; end: 104a0aa2b; -[GTLRBatchResult hash] */

long FUN_104a0a964(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lStack_50;
  undefined *puStack_48;
  
  plVar1 = &lStack_50;
  puStack_48 = PTR_PTR_1126e34a0;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_hash_1125d5420);
  lVar2 = param_1;
  func_0x00010c261c00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfde980();
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bfa02e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bfde980();
  _objc_release(lVar2);
  func_0x00010c13b8c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bfde980();
  _objc_release(param_1);
  return lVar2 + (lVar4 + (lVar3 + (long)plVar1 * 0xe) * 0xe) * 0xe;
}



/* Entry: 104a0aa2c; end: 104a0abcb; -[GTLRBatchResult isEqual:] */

long FUN_104a0aa2c(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lStack_50;
  undefined *puStack_48;
  
  iVar1 = (int)&lStack_50;
  _objc_retain();
  if (param_1 == param_3) {
    lVar5 = 1;
    goto LAB_104a0aba8;
  }
  puStack_48 = PTR_PTR_1126e34a0;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_isEqual__1125fa0c8,param_3);
  if (iVar1 != 0) {
    func_0x00010bf39c40(PTR_PTR_1126ae0e8);
    lVar5 = param_3;
    func_0x00010c075f00();
    if ((int)lVar5 != 0) {
      lVar2 = param_3;
      _objc_retain(param_3);
      lVar5 = param_1;
      func_0x00010c261c00();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c261c00(lVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar5;
      FUN_104a1ca1c(lVar5,lVar3);
      _objc_release(lVar3);
      _objc_release(lVar5);
      if ((int)lVar4 == 0) {
LAB_104a0ab9c:
        lVar5 = 0;
      }
      else {
        lVar5 = param_1;
        func_0x00010bfa02e0();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x00010bfa02e0(lVar2);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar5;
        FUN_104a1ca1c(lVar5,lVar3);
        _objc_release(lVar3);
        _objc_release(lVar5);
        if ((int)lVar4 == 0) goto LAB_104a0ab9c;
        func_0x00010c13b8c0(param_1);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x00010c13b8c0(lVar2);
        _objc_retainAutoreleasedReturnValue();
        lVar5 = param_1;
        FUN_104a1ca1c(param_1,lVar3);
        _objc_release(lVar3);
        _objc_release(param_1);
      }
      _objc_release(lVar2);
      goto LAB_104a0aba8;
    }
  }
  lVar5 = 0;
LAB_104a0aba8:
  _objc_release(param_3);
  return lVar5;
}



/* Entry: 104a0abcc; end: 104a0acab; -[GTLRBatchResult description] */

void FUN_104a0abcc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bf39c40();
  uVar1 = param_1;
  func_0x00010c261c00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  uVar2 = param_1;
  func_0x00010bfa02e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x00010c13b8c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x00010c25d9e0(puVar3,param_2,&PTR____CFConstantStringClassReference_110da68f8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104a0acac; end: 104a0acb3; +[GTLRBatchResult supportsSecureCoding] */

undefined8 FUN_104a0acac(void)

{
  return 1;
}



/* Entry: 104a0acb4; end: 104a0b0a3; -[GTLRBatchResult initWithCoder:] */

undefined8 * FUN_104a0acb4(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined **ppuVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puStack_280;
  undefined *puStack_278;
  undefined8 uStack_180;
  undefined *puStack_178;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puStack_178 = PTR_PTR_1126e34a0;
  puVar2 = &uStack_180;
  puVar3 = param_3;
  uStack_180 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_initWithCoder__1125dd730);
  if (puVar2 != (undefined8 *)0x0) {
    func_0x00010bf39c40(PTR__OBJC_CLASS___NSArray_1126ae530);
    puVar3 = param_3;
    func_0x00010bf67020();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf529e0();
    puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    if (puVar4 != (undefined8 *)0x0) {
      func_0x00010bf529e0(puVar3);
      func_0x00010bf71fe0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      _objc_retain();
      puVar6 = puVar4;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      if (puVar6 != (undefined8 *)0x0) {
        do {
          puVar9 = (undefined8 *)0x0;
          do {
            if (lRam0000000000000000 != lVar1) {
              _objc_enumerationMutation(puVar4);
            }
            ppuVar7 = &PTR____CFConstantStringClassReference_110da6878;
            func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110da6878);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf39c40(PTR_PTR_1126ae0f0);
            puVar8 = param_3;
            func_0x00010bf67020();
            _objc_retainAutoreleasedReturnValue();
            if (puVar8 != (undefined8 *)0x0) {
              func_0x00010c1d0560(puVar5);
            }
            _objc_release(puVar8);
            _objc_release(ppuVar7);
            puVar9 = (undefined8 *)((long)puVar9 + 1);
          } while (puVar6 != puVar9);
          puVar6 = puVar4;
          func_0x00010bf52a60();
        } while (puVar6 != (undefined8 *)0x0);
      }
      _objc_release(puVar4);
      func_0x00010c20f8e0(puVar2);
      _objc_release(puVar5);
    }
    func_0x00010bf39c40(PTR__OBJC_CLASS___NSArray_1126ae530);
    puVar4 = param_3;
    func_0x00010bf67020();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = puVar4;
    func_0x00010bf529e0();
    puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    if (puVar3 != (undefined8 *)0x0) {
      func_0x00010bf529e0(puVar4);
      func_0x00010bf71fe0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar4;
      _objc_retain();
      puVar6 = puVar3;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      if (puVar6 != (undefined8 *)0x0) {
        do {
          puVar9 = (undefined8 *)0x0;
          do {
            if (lRam0000000000000000 != lVar1) {
              _objc_enumerationMutation(puVar3);
            }
            ppuVar7 = &PTR____CFConstantStringClassReference_110da68b8;
            func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110da68b8);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf39c40(PTR_PTR_1126ae0f0);
            puVar8 = param_3;
            func_0x00010bf67020();
            _objc_retainAutoreleasedReturnValue();
            if (puVar8 != (undefined8 *)0x0) {
              func_0x00010c1d0560(puVar5);
            }
            _objc_release(puVar8);
            _objc_release(ppuVar7);
            puVar9 = (undefined8 *)((long)puVar9 + 1);
          } while (puVar6 != puVar9);
          puVar6 = puVar3;
          func_0x00010bf52a60();
        } while (puVar6 != (undefined8 *)0x0);
      }
      _objc_release(puVar3);
      func_0x00010c19a0c0(puVar2);
      _objc_release(puVar5);
    }
    func_0x00010bf39c40(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    puVar6 = param_3;
    func_0x00010bf67020();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar6;
    func_0x00010c1ecfe0(puVar2);
    _objc_release(puVar6);
    _objc_release(puVar4);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_278 = PTR_PTR_1126e34a0;
  puStack_280 = param_3;
  _objc_msgSendSuper2(&puStack_280,PTR_s_encodeWithCoder__1125c2658,puVar3);
  puVar2 = param_3;
  func_0x00010c261c00(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(puVar3);
  _objc_release(puVar4);
  _objc_release(puVar2);
  puVar2 = param_3;
  func_0x00010c261c00(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  func_0x00010bf97ce0(puVar2);
  _objc_release(puVar2);
  puVar2 = param_3;
  func_0x00010bfa02e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(puVar3);
  _objc_release(puVar4);
  _objc_release(puVar2);
  puVar2 = param_3;
  func_0x00010bfa02e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  _objc_retain(puVar3);
  func_0x00010bf97ce0(puVar2);
  _objc_release(puVar2);
  func_0x00010c13b8c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(puVar4);
  _objc_release(param_3);
  _objc_release(puVar3);
  _objc_release(puVar3);
  _objc_release(puVar4);
  return puVar4;
}



/* Entry: 104a0b0a4; end: 104a0b293; -[GTLRBatchResult encodeWithCoder:] */

void FUN_104a0b0a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain();
  puStack_58 = PTR_PTR_1126e34a0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_encodeWithCoder__1125c2658,param_3);
  uVar1 = param_1;
  func_0x00010c261c00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c261c00(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  func_0x00010bf97ce0(uVar1);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bfa02e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bfa02e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  _objc_retain(param_3);
  func_0x00010bf97ce0(uVar1);
  _objc_release(uVar1);
  func_0x00010c13b8c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(uVar2);
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_release(param_3);
  _objc_release(uVar2);
  return;
}



/* Entry: 104a0b294; end: 104a0b2ff;  */

void FUN_104a0b294(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  
  _objc_retain(param_3);
  ppuVar1 = &PTR____CFConstantStringClassReference_110da6878;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110da6878);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(*(undefined8 *)(param_1 + 0x20));
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
  return;
}



/* Entry: 104a0b300; end: 104a0b30f;  */

void FUN_104a0b300(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(param_2 + 0x20));
  return;
}



/* Entry: 104a0b310; end: 104a0b37b;  */

void FUN_104a0b310(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  
  _objc_retain(param_3);
  ppuVar1 = &PTR____CFConstantStringClassReference_110da68b8;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110da68b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(*(undefined8 *)(param_1 + 0x20));
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
  return;
}



/* Entry: 104a0b37c; end: 104a0b38b; -[GTLRBatchResult successes] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a0b37c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,(long)_DAT_11270f188,1);
  return;
}



/* Entry: 104a0b38c; end: 104a0b397; -[GTLRBatchResult setSuccesses:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a0b38c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 104a0b398; end: 104a0b3a7; -[GTLRBatchResult failures] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a0b398(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,(long)_DAT_11270f18c,1);
  return;
}



/* Entry: 104a0b3a8; end: 104a0b3b3; -[GTLRBatchResult setFailures:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a0b3a8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 104a0b3b4; end: 104a0b3c3; -[GTLRBatchResult responseHeaders] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a0b3b4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,(long)_DAT_11270f190,1);
  return;
}



/* Entry: 104a0b3c4; end: 104a0b3cf; -[GTLRBatchResult setResponseHeaders:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a0b3c4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 104a0b3d0; end: 104a0b423; -[GTLRBatchResult .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a0b3d0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11270f190,0);
  _objc_storeStrong(param_1 + _DAT_11270f18c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11270f188,0);
  return;
}



/* Entry: 104a0b424; end: 104a0b47b; +[GTLRDateTime dateTimeWithRFC3339String:] */

void FUN_104a0b424(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 0) {
    param_1 = 0;
  }
  else {
    _objc_retain(param_3);
    _objc_alloc(param_1);
    func_0x00010bfee200();
    func_0x00010c1a0fa0();
    _objc_release(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104a0b47c; end: 104a0b4d3; +[GTLRDateTime dateTimeWithDate:] */

void FUN_104a0b47c(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 0) {
    param_1 = 0;
  }
  else {
    _objc_retain(param_3);
    _objc_alloc(param_1);
    func_0x00010bfee200();
    func_0x00010c1a0e80();
    _objc_release(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104a0b4d4; end: 104a0b533; +[GTLRDateTime dateTimeWithDate:offsetMinutes:] */

void FUN_104a0b4d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x00010bf65500();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0c00(param_1,param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104a0b534; end: 104a0b597; +[GTLRDateTime dateTimeForAllDayWithDate:] */

void FUN_104a0b534(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 0) {
    param_1 = 0;
  }
  else {
    _objc_retain(param_3);
    _objc_alloc(param_1);
    func_0x00010bfee200();
    func_0x00010c1a0e80();
    _objc_release(param_3);
    func_0x00010c1a70e0(param_1,param_2,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104a0b598; end: 104a0b64f; +[GTLRDateTime dateTimeWithDateComponents:] */

void FUN_104a0b598(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain();
  lVar1 = param_3;
  func_0x00010bf27b20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar2 = param_1;
    func_0x00010bf27b20(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar2 = lVar1;
    _objc_retain(lVar1);
  }
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010bf650e0(lVar2,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bf65500(param_1,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104a0b650; end: 104a0b653; -[GTLRDateTime copyWithZone:] */

void FUN_104a0b650(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104a0b654; end: 104a0b7a7; -[GTLRDateTime isEqual:] */

bool FUN_104a0b654(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain();
  if (param_1 == param_3) {
    bVar1 = true;
    goto LAB_104a0b788;
  }
  puVar2 = PTR_PTR_1126ae0f8;
  func_0x00010bf39c40(PTR_PTR_1126ae0f8);
  lVar3 = param_3;
  func_0x00010c075f00(param_3,param_2,puVar2);
  if ((int)lVar3 != 0) {
    lVar3 = param_1;
    func_0x00010bf64f00();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_3;
    func_0x00010bf64f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010c071ae0(lVar3,param_2,lVar4);
    _objc_release(lVar4);
    _objc_release(lVar3);
    if ((int)lVar5 != 0) {
      lVar3 = param_1;
      func_0x00010c0e1d20();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_3;
      func_0x00010c0e1d20();
      _objc_retainAutoreleasedReturnValue();
      if ((lVar3 == 0) == (lVar4 != 0)) {
LAB_104a0b774:
        bVar1 = false;
      }
      else {
        lVar5 = lVar3;
        func_0x00010c067fc0();
        lVar6 = lVar4;
        func_0x00010c067fc0();
        if (lVar5 != lVar6) goto LAB_104a0b774;
        func_0x00010c0cd4a0(param_1);
        lVar5 = param_3;
        func_0x00010c0cd4a0(param_3);
        bVar1 = param_1 == lVar5;
      }
      _objc_release(lVar4);
      _objc_release(lVar3);
      goto LAB_104a0b788;
    }
  }
  bVar1 = false;
LAB_104a0b788:
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 104a0b7a8; end: 104a0b7e3; -[GTLRDateTime hash] */

undefined8 FUN_104a0b7a8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfde980();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104a0b7e4; end: 104a0b863; -[GTLRDateTime description] */

void FUN_104a0b7e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bf39c40();
  func_0x00010bdc1ec0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110da6918);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104a0b864; end: 104a0b9e7; -[GTLRDateTime date] */

void FUN_104a0b864(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  double dVar6;
  
  _objc_retain();
  _objc_sync_enter();
  puVar5 = (ulong *)(param_1 + 8);
  uVar1 = *puVar5;
  if (uVar1 == 0) {
    _objc_sync_exit(param_1);
    _objc_release(param_1);
    uVar1 = param_1;
    func_0x00010bf64f00(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010bf39c40(param_1);
    func_0x00010bf27b20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010bfdd540();
    uVar4 = uVar1;
    if ((uVar3 & 1) == 0) {
      func_0x00010bf51e00(uVar1);
      func_0x00010c1a9320();
      func_0x00010c1c8500(uVar4);
      func_0x00010c1f8e00(uVar4);
      _objc_release(uVar1);
      dVar6 = 0.0;
    }
    else {
      uVar1 = param_1;
      func_0x00010c0cd4a0();
      dVar6 = (double)(long)uVar1 / 1000.0;
    }
    uVar3 = uVar2;
    func_0x00010bf650e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar3;
    if (0.0 < dVar6) {
      func_0x00010bf64e40(dVar6,uVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
    }
    _objc_retain(param_1);
    _objc_sync_enter();
    _objc_storeStrong(puVar5,uVar1);
    _objc_sync_exit(param_1);
    _objc_release(param_1);
    _objc_release(uVar2);
  }
  else {
    _objc_retain();
    _objc_sync_exit(param_1);
    uVar4 = param_1;
  }
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104a0b9e8; end: 104a0b9eb; -[GTLRDateTime stringValue] */

void FUN_104a0b9e8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc1ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_RFC3339String_11254e150);
  return;
}



/* Entry: 104a0b9ec; end: 104a0bcf7; -[GTLRDateTime RFC3339String] */

void FUN_104a0b9ec(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined **ppuVar8;
  undefined8 *puVar9;
  undefined **ppuVar10;
  
  _objc_retain();
  _objc_sync_enter();
  puVar9 = (undefined8 *)(param_1 + 0x10);
  puVar1 = (undefined *)*puVar9;
  lVar2 = param_1;
  if (puVar1 == (undefined *)0x0) {
    _objc_sync_exit(param_1);
    _objc_release(param_1);
    func_0x00010bf64f00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010bfdd540();
    if ((int)lVar3 == 0) {
      ppuVar8 = &PTR____CFConstantStringClassReference_110daafd8;
    }
    else {
      lVar3 = param_1;
      func_0x00010c0cd4a0();
      ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
      if (lVar3 < 1) {
        ppuVar4 = &PTR____CFConstantStringClassReference_110daafd8;
      }
      else {
        func_0x00010c0cd4a0();
        func_0x00010c25d9e0();
        _objc_retainAutoreleasedReturnValue();
      }
      lVar3 = param_1;
      func_0x00010c0e1d20();
      _objc_retainAutoreleasedReturnValue();
      if (lVar3 == 0) {
        ppuVar10 = &PTR____CFConstantStringClassReference_110dc12b8;
      }
      else {
        lVar5 = lVar3;
        func_0x00010c067fc0();
        ppuVar10 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c25d9e0();
        _objc_retainAutoreleasedReturnValue();
        if (lVar5 != 0) {
          lVar5 = param_1;
          func_0x00010bf64de0(param_1);
          _objc_retainAutoreleasedReturnValue();
          lVar6 = lVar3;
          func_0x00010c067fc0(lVar3);
          lVar7 = lVar5;
          func_0x00010bf64e40((double)(lVar6 * 0x3c),lVar5);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar5);
          lVar5 = param_1;
          func_0x00010bf39c40();
          func_0x00010bf27b20();
          _objc_retainAutoreleasedReturnValue();
          lVar6 = lVar5;
          func_0x00010bf44640();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar2);
          _objc_release(lVar5);
          _objc_release(lVar7);
          lVar2 = lVar6;
        }
      }
      ppuVar8 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010bfe4740();
      func_0x00010c0ce880();
      func_0x00010c154b60();
      func_0x00010c25d9e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      _objc_release(ppuVar10);
      _objc_release(ppuVar4);
    }
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c2bedc0();
    func_0x00010c0d0e40();
    func_0x00010bf65700();
    func_0x00010c25d9e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_1);
    _objc_sync_enter();
    _objc_storeStrong(puVar9,puVar1);
    _objc_sync_exit(param_1);
    _objc_release(param_1);
    _objc_release(ppuVar8);
  }
  else {
    _objc_retain();
    _objc_sync_exit(param_1);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104a0bcf8; end: 104a0bdab; -[GTLRDateTime setFromDate:] */

void FUN_104a0bcf8(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  uVar1 = param_2;
  func_0x00010bf39c40(param_2);
  func_0x00010bf27b20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf44640();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c189a60(param_2,param_3,uVar2);
  func_0x00010c26f320(param_4);
  _objc_release(param_4);
  func_0x00010c1c7a40(param_2,param_3,(long)((param_1 - (double)(long)param_1) * 1000.0));
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104a0bdac; end: 104a0c15b; -[GTLRDateTime setFromRFC3339String:] */

void FUN_104a0bdac(undefined *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uStack_b8;
  long lStack_b0;
  long lStack_a8;
  double dStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain();
  if (lRam00000001136a0538 != -1) {
    FUN_104a1cdc4();
  }
  lVar9 = 0x7fffffffffffffff;
  uStack_80 = 0x7fffffffffffffff;
  uStack_78 = 0x7fffffffffffffff;
  uStack_90 = 0x7fffffffffffffff;
  uStack_88 = 0x7fffffffffffffff;
  dStack_a0 = -1.0;
  uStack_98 = 0x7fffffffffffffff;
  lStack_b0 = 0;
  lStack_a8 = 0;
  lVar7 = param_3;
  func_0x00010c08fa60();
  if (lVar7 == 0) {
    uVar8 = 0;
    lVar7 = 0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSScanner_1126b3380;
    func_0x00010c14f820(PTR__OBJC_CLASS___NSScanner_1126b3380,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17ace0();
    puVar2 = puVar1;
    func_0x00010c14ed40(puVar1,param_2,&uStack_78);
    if (((((((int)puVar2 == 0) ||
           (puVar2 = puVar1, func_0x00010c14ea40(puVar1,param_2,uRam00000001136a0518,0),
           (int)puVar2 == 0)) ||
          (puVar2 = puVar1, func_0x00010c14ed40(puVar1,param_2,&uStack_80), (int)puVar2 == 0)) ||
         (((puVar2 = puVar1, func_0x00010c14ea40(puVar1,param_2,uRam00000001136a0518,0),
           (int)puVar2 == 0 ||
           (puVar2 = puVar1, func_0x00010c14ed40(puVar1,param_2,&uStack_88), (int)puVar2 == 0)) ||
          ((puVar2 = puVar1, func_0x00010c14ea40(puVar1,param_2,uRam00000001136a0520,0),
           (int)puVar2 == 0 ||
           ((puVar2 = puVar1, func_0x00010c14ed40(puVar1,param_2,&uStack_90), (int)puVar2 == 0 ||
            (puVar2 = puVar1, func_0x00010c14ea40(puVar1,param_2,uRam00000001136a0528,0),
            (int)puVar2 == 0)))))))) ||
        (puVar2 = puVar1, func_0x00010c14ed40(puVar1,param_2,&uStack_98), (int)puVar2 == 0)) ||
       ((puVar2 = puVar1, func_0x00010c14ea40(puVar1,param_2,uRam00000001136a0528,0),
        (int)puVar2 == 0 ||
        (puVar2 = puVar1, func_0x00010c14eba0(puVar1,param_2,&dStack_a0), (int)puVar2 == 0)))) {
      uVar8 = 0;
      lVar7 = 0;
    }
    else {
      lVar9 = (long)dStack_a0;
      lVar7 = (long)((dStack_a0 - (double)(long)dStack_a0) * 1000.0);
      uStack_b8 = 0;
      puVar2 = puVar1;
      func_0x00010c14ea40(puVar1,param_2,uRam00000001136a0530,&uStack_b8);
      uVar8 = uStack_b8;
      _objc_retain();
      if ((((int)puVar2 != 0) &&
          (puVar2 = puVar1, func_0x00010c14ed40(puVar1,param_2,&lStack_a8), (int)puVar2 != 0)) &&
         (puVar2 = puVar1, func_0x00010c14ea40(puVar1,param_2,uRam00000001136a0528,0),
         (int)puVar2 != 0)) {
        func_0x00010c14ed40(puVar1,param_2,&lStack_b0);
      }
    }
    _objc_release(puVar1);
  }
  puVar1 = PTR__OBJC_CLASS___NSDateComponents_1126aef68;
  _objc_alloc(PTR__OBJC_CLASS___NSDateComponents_1126aef68);
  func_0x00010bfee200();
  func_0x00010c2278a0();
  func_0x00010c1c8fc0(puVar1,param_2,uStack_80);
  func_0x00010c189d40(puVar1,param_2,uStack_88);
  func_0x00010c1a9320(puVar1,param_2,uStack_90);
  func_0x00010c1c8500(puVar1,param_2,uStack_98);
  func_0x00010c1f8e00(puVar1,param_2,lVar9);
  uVar3 = uVar8;
  func_0x00010c071ae0(uVar8,param_2,&PTR____CFConstantStringClassReference_110db3638);
  if ((uVar3 & 1) == 0) {
    uVar3 = uVar8;
    func_0x00010c071ae0(uVar8,param_2,&PTR____CFConstantStringClassReference_110dae918);
    if ((int)uVar3 == 0) goto LAB_104a0c100;
    lVar9 = 1;
  }
  else {
    lVar9 = -1;
  }
  lVar9 = (lStack_b0 + lStack_a8 * 0x3c) * lVar9;
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0c00(param_1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = param_1;
  func_0x00010bf39c40(param_1);
  func_0x00010bf27b20();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010bf650e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf64e40((double)(lVar9 * -0x3c));
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar2;
  func_0x00010bf44640(puVar2,param_2,0xfc,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
  puVar1 = puVar6;
LAB_104a0c100:
  func_0x00010c189a60(param_1,param_2,puVar1);
  func_0x00010c1c7a40(param_1,param_2,lVar7);
  _objc_release(puVar1);
  _objc_release(uVar8);
  _objc_release(param_3);
  return;
}



/* Entry: 104a0c15c; end: 104a0c223;  */

void FUN_104a0c15c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  func_0x00010bf35a20(PTR__OBJC_CLASS___NSCharacterSet_1126af030,param_2,
                      &PTR____CFConstantStringClassReference_110db3638);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001136a0518;
  puRam00000001136a0518 = puVar2;
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  func_0x00010bf35a20(PTR__OBJC_CLASS___NSCharacterSet_1126af030,param_2,
                      &PTR____CFConstantStringClassReference_110da69b8);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001136a0520;
  puRam00000001136a0520 = puVar2;
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  func_0x00010bf35a20(PTR__OBJC_CLASS___NSCharacterSet_1126af030,param_2,
                      &PTR____CFConstantStringClassReference_110db3eb8);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001136a0528;
  puRam00000001136a0528 = puVar2;
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  func_0x00010bf35a20(PTR__OBJC_CLASS___NSCharacterSet_1126af030,param_2,
                      &PTR____CFConstantStringClassReference_110da69d8);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001136a0530;
  puRam00000001136a0530 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104a0c224; end: 104a0c27f; -[GTLRDateTime hasTime] */

bool FUN_104a0c224(long param_1)

{
  bool bVar1;
  long lVar2;
  
  func_0x00010bf64f00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bfe4740();
  if (lVar2 == 0x7fffffffffffffff) {
    bVar1 = false;
  }
  else {
    lVar2 = param_1;
    func_0x00010c0ce880(param_1);
    bVar1 = lVar2 != 0x7fffffffffffffff;
  }
  _objc_release(param_1);
  return bVar1;
}


