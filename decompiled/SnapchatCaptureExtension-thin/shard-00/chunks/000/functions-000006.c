/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10002d47c; end: 10002d593; -[_TtC28SnapchatCaptureExtension_lib27CaptureExtensionPreviewView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10002d47c(long param_1)

{
  FUN_10002d878(param_1 + _DAT_1000606a0);
  _objc_release_x8(*(undefined8 *)(param_1 + _DAT_1000606b0));
  _objc_release_x8(*(undefined8 *)(param_1 + _DAT_1000606b8));
  func_0x00010002d670(*(undefined8 *)(param_1 + _DAT_1000606c0));
  _objc_release_x8(*(undefined8 *)(param_1 + _DAT_1000606c8));
  _objc_release_x8(*(undefined8 *)(param_1 + _DAT_1000606d0));
  _objc_release_x8(*(undefined8 *)(param_1 + _DAT_1000606d8));
  _objc_release_x8(*(undefined8 *)(param_1 + _DAT_1000606e0));
  _objc_release_x8(*(undefined8 *)(param_1 + _DAT_1000606e8));
  _objc_release_x8(*(undefined8 *)(param_1 + _DAT_1000606f0));
  _objc_release_x8(*(undefined8 *)(param_1 + _DAT_1000606f8));
  _objc_release_x8(*(undefined8 *)(param_1 + _DAT_100060700));
  _objc_release_x8(*(undefined8 *)(param_1 + _DAT_100060708));
  _objc_release_x8(*(undefined8 *)(param_1 + _DAT_100060710));
  _objc_release_x8(*(undefined8 *)(param_1 + _DAT_100060728));
                    /* WARNING: Could not recover jumptable at 0x00010003b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000508c0)(*(undefined8 *)(param_1 + _DAT_100060730));
  return;
}



/* Entry: 10002d594; end: 10002d5d7;  */

void FUN_10002d594(void)

{
  _objc_opt_self(&PTR_PTR_10005e540);
  return;
}



/* Entry: 10002d5d8; end: 10002d60b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10002d5d8(void)

{
  undefined1 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined1 *)(*(long *)(unaff_x20 + 0x10) + _DAT_100060720);
  *(undefined1 *)(*(long *)(unaff_x20 + 0x10) + _DAT_100060720) = 0;
  FUN_10002b5b4(uVar1);
  FUN_10002ccec();
  return;
}



/* Entry: 10002d60c; end: 10002d627;  */

void FUN_10002d60c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010003b590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_100050d50)(uVar1);
  return;
}



/* Entry: 10002d628; end: 10002d65f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10002d628(void)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  puVar1 = (undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_100060718);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  FUN_10002b50c();
  return;
}



/* Entry: 10002d660; end: 10002d67f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10002d660(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x00010003cbe0(0,*(undefined8 *)(lVar1 + _DAT_1000606b0));
  uVar2 = *(undefined8 *)(lVar1 + _DAT_1000606b8);
  func_0x00010003bb60(lVar1);
  _CGRectGetHeight();
  func_0x00010003c000(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010003cf10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_1000508a0)(uVar2,PTR_s_setFrame__10005b890);
  return;
}



/* Entry: 10002d680; end: 10002d6bf;  */

void FUN_10002d680(void)

{
  undefined *puVar1;
  
  if (puRam00000001000607a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = 
  PTR___s10Foundation15AttributeScopesO5UIKitE0D10AttributesV04FontB0OAA19AttributedStringKeyADMc_1000503b8
  ;
  _swift_getWitnessTable
            (PTR___s10Foundation15AttributeScopesO5UIKitE0D10AttributesV04FontB0OAA19AttributedStringKeyADMc_1000503b8
             ,PTR___s10Foundation15AttributeScopesO5UIKitE0D10AttributesV04FontB0ON_1000503c0);
  puRam00000001000607a8 = puVar1;
  return;
}



/* Entry: 10002d6c0; end: 10002d6cf;  */

void FUN_10002d6c0(long param_1)

{
  if (param_1 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010003b380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_100050930)();
  return;
}



/* Entry: 10002d6d0; end: 10002d877;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10002d6d0(void)

{
  long lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined *puVar4;
  long unaff_x20;
  
  lVar1 = unaff_x20 + _DAT_1000606a0;
  *(undefined8 *)(lVar1 + 8) = 0;
  _swift_unknownObjectWeakInit(lVar1,0);
  *(undefined1 *)(unaff_x20 + _DAT_1000606a8) = 0;
  lVar1 = _DAT_1000606b0;
  puVar4 = PTR__OBJC_CLASS___UIView_1000504b8;
  _objc_allocWithZone();
  func_0x00010003c1e0();
  _objc_opt_self(PTR__OBJC_CLASS___UIColor_100050430);
  func_0x00010003d580();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003cc60(puVar4);
  _objc_release_x21();
  *(undefined **)(unaff_x20 + lVar1) = puVar4;
  lVar1 = _DAT_1000606b8;
  puVar4 = PTR__OBJC_CLASS___UIView_1000504b8;
  _objc_allocWithZone();
  func_0x00010003c1e0();
  *(undefined **)(unaff_x20 + lVar1) = puVar4;
  *(undefined8 *)(unaff_x20 + _DAT_1000606c0) = 1;
  lVar1 = _DAT_1000606d0;
  FUN_10002a748();
  *(undefined **)(unaff_x20 + lVar1) = puVar4;
  *(undefined8 *)(unaff_x20 + _DAT_1000606d8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_1000606e0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_1000606e8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_1000606f0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_1000606f8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_100060700) = 0;
  lVar1 = _DAT_100060708;
  puVar4 = PTR__OBJC_CLASS___UIView_1000504b8;
  _objc_allocWithZone();
  func_0x00010003c1e0();
  *(undefined **)(unaff_x20 + lVar1) = puVar4;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_100060718);
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 1) = 1;
  *(undefined1 *)(unaff_x20 + _DAT_100060720) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_100060728) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_100060730) = 0;
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0xd000000000000025,0x800000010004bd50,
             "SnapchatCaptureExtension_lib/CaptureExtensionPreviewView.swift",0x3e,2,0x157,0);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10002d878);
  (*pcVar3)();
}



/* Entry: 10002d878; end: 10002d8db;  */

undefined8 FUN_10002d878(undefined8 param_1)

{
  _swift_unknownObjectWeakDestroy();
  return param_1;
}



/* Entry: 10002d8dc; end: 10002d8ff;  */

void FUN_10002d8dc(void)

{
  long unaff_x20;
  
  _objc_release_x8(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010003b488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_100050c98)();
  return;
}



/* Entry: 10002d900; end: 10002d9c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10002d900(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  
  lVar1 = _DAT_100060800;
  puVar4 = *(undefined **)(unaff_x20 + _DAT_100060800);
  puVar3 = puVar4;
  if (puVar4 == (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___UIStackView_1000504a0;
    _objc_allocWithZone();
    func_0x00010003c340(0,0,0,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010003d440();
    func_0x00010003cc40(puVar4,param_2,1);
    puVar2 = PTR__OBJC_CLASS___UIColor_100050430;
    _objc_opt_self(PTR__OBJC_CLASS___UIColor_100050430);
    func_0x00010003bc40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar4;
    func_0x00010003cc60(puVar4,param_2,puVar2);
    _objc_release_x19();
    _objc_release_x21();
    *(undefined **)(unaff_x20 + lVar1) = puVar4;
    _objc_retain_x19();
    _objc_release_x21();
    puVar4 = (undefined *)0x0;
  }
  _objc_retain_x8(puVar4);
  return puVar3;
}



/* Entry: 10002d9c8; end: 10002de03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10002d9c8(long *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  byte bVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  long unaff_x20;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  
  *(undefined8 *)(unaff_x20 + _DAT_100060800) = 0;
  if (((ulong)param_1 & 1) == 0) {
    func_0x00010002dfe4();
  }
  else {
    func_0x00010002dff0();
  }
  puVar9 = PTR___swiftEmptyArrayStorage_100050c50;
  lVar12 = *param_1;
  lVar14 = *(long *)(lVar12 + 0x10);
  if (lVar14 != 0) {
    _swift_bridgeObjectRetain(lVar12);
    lVar15 = 0x20;
    do {
      bVar4 = *(byte *)(lVar12 + lVar15);
      uVar13 = (ulong)bVar4;
      func_0x00010002dffc();
      uVar6 = 0;
      FUN_10002901c(0);
      _objc_allocWithZone();
      FUN_1000289b0(uVar13,uVar6);
      puVar7 = &UNK_100052c50;
      _swift_allocObject(&UNK_100052c50,0x11,7);
      puVar7[0x10] = bVar4;
      puVar2 = (undefined8 *)(uVar13 + _DAT_100060528);
      uVar6 = *puVar2;
      uVar3 = puVar2[1];
      *puVar2 = 0x10002dfdc;
      puVar2[1] = puVar7;
      func_0x0001000130a4(uVar6,uVar3);
      __sSa034_makeUniqueAndReserveCapacityIfNotB0yyFyXl_Ts5();
      uVar10 = (ulong)puVar9 & 0xffffffffffffff8;
      uVar11 = *(ulong *)(uVar10 + 0x10);
      uVar10 = *(ulong *)(uVar10 + 0x18);
      if (uVar10 >> 1 <= uVar11) {
        __sSa16_createNewBuffer14bufferIsUnique15minimumCapacity13growForAppendySb_SiSbtFyXl_Ts5
                  (1 < uVar10,uVar11 + 1,1);
      }
      __sSa37_appendElementAssumeUniqueAndCapacity_03newB0ySi_xntFyXl_Ts5(uVar11,uVar13);
      lVar15 = lVar15 + 1;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
    _swift_bridgeObjectRelease();
  }
  *(undefined **)(unaff_x20 + _DAT_1000607f8) = puVar9;
  FUN_10002dfac();
  puVar8 = &stack0xffffffffffffff88;
  _objc_msgSendSuper2(0,0,0,0,puVar8,PTR_s_initWithFrame__10005b5a0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  FUN_10002d900();
  func_0x00010003b8e0(puVar8);
  _objc_release_x19();
  uVar11 = *(ulong *)(puVar8 + _DAT_1000607f8);
  if (uVar11 >> 0x3e == 0) {
    uVar10 = *(ulong *)((uVar11 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar10 = uVar11 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar11) {
      uVar10 = uVar11;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  lVar14 = _DAT_100060800;
  _swift_bridgeObjectRetain(uVar11);
  if (uVar10 != 0) {
    uVar13 = 0;
    do {
      if ((uVar11 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar11 & 0xffffffffffffff8) + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10002ddec);
          (*pcVar5)();
        }
        _objc_retain_x8(*(undefined8 *)(uVar11 + uVar13 * 8 + 0x20));
      }
      else {
        __ss12_ArrayBufferV19_getElementSlowPathyyXlSiFyXl_Ts5(uVar13,uVar11);
      }
      uVar1 = uVar13 + 1;
      if (SCARRY8(uVar13,1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10002dde8);
        (*pcVar5)();
      }
      func_0x00010003b7c0(*(undefined8 *)(puVar8 + lVar14));
      _objc_release_x23();
      uVar13 = uVar13 + 1;
    } while (uVar1 != uVar10);
  }
  _swift_bridgeObjectRelease(uVar11);
  puVar9 = PTR__OBJC_CLASS___NSLayoutConstraint_1000502f0;
  _objc_opt_self(PTR__OBJC_CLASS___NSLayoutConstraint_1000502f0);
  lVar12 = 0x10005fba0;
  FUN_100011744(0x10005fba0,&UNK_100040c80);
  _swift_allocObject();
  *(undefined8 *)(lVar12 + 0x18) = 9;
  *(undefined8 *)(lVar12 + 0x10) = 4;
  uVar6 = *(undefined8 *)(puVar8 + lVar14);
  func_0x00010003d720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003d720(puVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x20();
  func_0x00010003bd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x22();
  _objc_release_x23();
  *(undefined8 *)(lVar12 + 0x20) = uVar6;
  uVar6 = *(undefined8 *)(puVar8 + lVar14);
  func_0x00010003c660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003c660(puVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x20();
  func_0x00010003bd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x22();
  _objc_release_x23();
  *(undefined8 *)(lVar12 + 0x28) = uVar6;
  uVar6 = *(undefined8 *)(puVar8 + lVar14);
  func_0x00010003cae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003cae0(puVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x20();
  func_0x00010003bd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x22();
  _objc_release_x23();
  *(undefined8 *)(lVar12 + 0x30) = uVar6;
  uVar6 = *(undefined8 *)(puVar8 + lVar14);
  func_0x00010003bb40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bb40(puVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x20();
  func_0x00010003bd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x22();
  _objc_release_x23();
  *(undefined8 *)(lVar12 + 0x38) = uVar6;
  uVar6 = 0;
  FUN_100011794(0);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar12,uVar6);
  _swift_release(lVar12);
  func_0x00010003b700(puVar9);
  _objc_release_x20();
  _objc_release_x22();
  return puVar8;
}



/* Entry: 10002de04; end: 10002deb3;  */

void FUN_10002de04(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong *puVar4;
  code *pcVar5;
  
  puVar2 = param_1;
  FUN_10002e6c4();
  puVar4 = (ulong *)*puVar2;
  puVar2 = param_1;
  func_0x00010002e010(param_1);
  puVar1 = PTR__swift_isaMask_100050d38;
  pcVar5 = *(code **)((*(ulong *)PTR__swift_isaMask_100050d38 & *puVar4) + 0xf8);
  _objc_retain_x21();
  puVar3 = (undefined8 *)0x3;
  (*pcVar5)(3,puVar2);
  _objc_release_x21();
  FUN_100032230();
  pcVar5 = *(code **)((*(ulong *)puVar1 & *(ulong *)*puVar3) + 200);
  _objc_retain_x8();
  (*pcVar5)(param_1,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010003b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000508c0)(puVar3);
  return;
}



/* Entry: 10002deb4; end: 10002df17; -[_TtC28SnapchatCaptureExtension_lib34CaptureExtensionPreviewViewToolbar initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10002deb4(long param_1)

{
  code *pcVar1;
  
  *(undefined8 *)(param_1 + _DAT_100060800) = 0;
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0xd000000000000025,0x800000010004bd50,
             "SnapchatCaptureExtension_lib/CaptureExtensionPreviewViewToolbar.swift",0x45,2,0x31,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10002df18);
  (*pcVar1)();
}



/* Entry: 10002df18; end: 10002df73; -[_TtC28SnapchatCaptureExtension_lib34CaptureExtensionPreviewViewToolbar initWithFrame:] */

void FUN_10002df18(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SnapchatCaptureExtension_lib.CaptureExtensionPreviewViewToolbar",0x3f,"init(frame:)",
             0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10002df44);
  (*pcVar1)();
}



/* Entry: 10002df74; end: 10002dfab; -[_TtC28SnapchatCaptureExtension_lib34CaptureExtensionPreviewViewToolbar .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10002df74(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1000607f8));
                    /* WARNING: Could not recover jumptable at 0x00010003b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000508c0)(*(undefined8 *)(param_1 + _DAT_100060800));
  return;
}



/* Entry: 10002dfac; end: 10002dfcb;  */

void FUN_10002dfac(void)

{
  _objc_opt_self(&PTR_PTR_10005e810);
  return;
}



/* Entry: 10002dfcc; end: 10002e193;  */

void FUN_10002dfcc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010003b488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_100050c98)();
  return;
}



/* Entry: 10002e194; end: 10002e2e3;  */

void FUN_10002e194(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = (ulong)*unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  func_0x00010002e018(uVar1);
  __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar1,param_2);
  _swift_bridgeObjectRelease(param_2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10002e2e4; end: 10002e2f3;  */

void FUN_10002e2e4(undefined8 *param_1)

{
  *param_1 = &PTR___ss20__StaticArrayStorageCN_100052d50;
  return;
}



/* Entry: 10002e2f4; end: 10002e33b;  */

undefined ** FUN_10002e2f4(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR___ss20__StaticArrayStorageCN_100052e10;
  __ss21_findStringSwitchCase5cases6stringSiSays06StaticB0VG_SStF
            (&PTR___ss20__StaticArrayStorageCN_100052e10,param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  if ((undefined **)0xd < ppuVar1) {
    ppuVar1 = (undefined **)0xe;
  }
  return ppuVar1;
}



/* Entry: 10002e33c; end: 10002e33f;  */

void FUN_10002e33c(void)

{
  undefined *puVar1;
  
  if (puRam0000000100060830 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_100041a90;
  _swift_getWitnessTable(&UNK_100041a90,&UNK_100052e00);
  puRam0000000100060830 = puVar1;
  return;
}



/* Entry: 10002e340; end: 10002e37f;  */

void FUN_10002e340(void)

{
  undefined *puVar1;
  
  if (puRam0000000100060830 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_100041a90;
  _swift_getWitnessTable(&UNK_100041a90,&UNK_100052e00);
  puRam0000000100060830 = puVar1;
  return;
}



/* Entry: 10002e380; end: 10002e383;  */

void FUN_10002e380(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000100060838 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x100060840;
  func_0x000100027be4(0x100060840,&UNK_100041b30);
  puVar2 = PTR___sSayxGSlsMc_100050a90;
  _swift_getWitnessTable(PTR___sSayxGSlsMc_100050a90,uVar1);
  puRam0000000100060838 = puVar2;
  return;
}



/* Entry: 10002e384; end: 10002e3d3;  */

void FUN_10002e384(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000100060838 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x100060840;
  func_0x000100027be4(0x100060840,&UNK_100041b30);
  puVar2 = PTR___sSayxGSlsMc_100050a90;
  _swift_getWitnessTable(PTR___sSayxGSlsMc_100050a90,uVar1);
  puRam0000000100060838 = puVar2;
  return;
}



/* Entry: 10002e3d4; end: 10002e537;  */

int FUN_10002e3d4(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf2 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 0xd) {
      iVar2 = 4;
    }
    if (param_2 + 0xd >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10002e450;
        goto LAB_10002e434;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10002e434:
      return ((uint)*param_1 | uVar1 << 8) - 0xd;
    }
  }
LAB_10002e450:
  iVar2 = *param_1 - 0xe;
  if (*param_1 < 0xe) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10002e538; end: 10002e6c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10002e538(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long extraout_x8;
  undefined1 *puVar7;
  code *pcVar8;
  undefined1 auStack_90 [8];
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  lVar1 = 0x10005fb98;
  FUN_100011744(0x10005fb98,&UNK_100040f90);
  (*(code *)PTR____chkstk_darwin_100050770)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = auStack_90 + -extraout_x8;
  lVar2 = 0;
  __s10Foundation3URLVMa();
  pcVar8 = *(code **)(*(long *)(lVar2 + -8) + 0x38);
  (*pcVar8)(puVar7,1,1,lVar2);
  lVar3 = 0;
  func_0x000100031848();
  lVar4 = lVar3;
  _objc_allocWithZone();
  lVar1 = _DAT_100060850;
  (*pcVar8)(lVar4 + _DAT_100060850,1,1,lVar2);
  lVar2 = _DAT_100060858;
  lVar5 = 0;
  __s10Foundation4DateVMa();
  pcVar8 = *(code **)(*(long *)(lVar5 + -8) + 0x38);
  (*pcVar8)(lVar4 + lVar2,1,1,lVar5);
  (*pcVar8)(lVar4 + _DAT_100060860,1,1,lVar5);
  *(undefined8 *)(lVar4 + _DAT_100060868) = 0;
  _swift_beginAccess(lVar4 + lVar1,auStack_78,0x21,0);
  func_0x000100031d68(puVar7,lVar4 + lVar1);
  _swift_endAccess(auStack_78);
  plVar6 = &lStack_88;
  lStack_88 = lVar4;
  lStack_80 = lVar3;
  _objc_msgSendSuper2(plVar6,PTR_s_init_10005b548);
  func_0x000100031ca0(puVar7,0x10005fb98,&UNK_100040f90);
  plRam0000000100062de0 = plVar6;
  return;
}



/* Entry: 10002e6c4; end: 10002e703;  */

undefined8 FUN_10002e6c4(void)

{
  if (lRam0000000100060848 != -1) {
    _swift_once(0x100060848,FUN_10002e538);
  }
  return 0x100062de0;
}



/* Entry: 10002e704; end: 10002e82b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10002e704(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  long extraout_x8;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long unaff_x20;
  long lVar7;
  
  lVar2 = 0;
  __s8Dispatch0A3QoSV0B6SClassOMa();
  lVar7 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100050770)(*(undefined8 *)(lVar7 + 0x40));
  lVar1 = _DAT_100060868;
  puVar4 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar5 = *(undefined1 **)(unaff_x20 + _DAT_100060868);
  puVar6 = puVar5;
  if (puVar5 == (undefined1 *)0x0) {
    (**(code **)(lVar7 + 0x68))
              (puVar4,*(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7defaultyA2EmFWC_100050dd8,
               lVar2);
    puVar3 = PTR__OBJC_CLASS___SCQueuePerformer_100050840;
    _objc_allocWithZone();
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000002c,0x800000010004cb00);
    __s8Dispatch0A3QoSV0B6SClassO8rawValueSo11qos_class_tavg();
    func_0x00010003c380();
    _objc_release_x23();
    (**(code **)(lVar7 + 8))(puVar4,lVar2);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    _objc_retain_x22();
    _objc_release_x20();
    puVar5 = (undefined1 *)0x0;
    puVar6 = puVar4;
  }
  _objc_retain_x8(puVar5);
  return puVar6;
}



/* Entry: 10002e82c; end: 10002e913; -[_TtC33SnapchatCaptureExtensionUtilities18LockedCameraLogger init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10002e82c(long param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  
  lVar1 = _DAT_100060850;
  lVar2 = 0;
  __s10Foundation3URLVMa();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(param_1 + lVar1,1,1,lVar2);
  lVar1 = _DAT_100060858;
  lVar2 = 0;
  __s10Foundation4DateVMa();
  pcVar3 = *(code **)(*(long *)(lVar2 + -8) + 0x38);
  (*pcVar3)(param_1 + lVar1,1,1,lVar2);
  (*pcVar3)(param_1 + _DAT_100060860,1,1,lVar2);
  *(undefined8 *)(param_1 + _DAT_100060868) = 0;
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0xd00000000000001f,0x800000010004c0f0,
             "SnapchatCaptureExtensionUtilities/LockedCameraLogger.swift",0x3a,2,0x2e,0);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10002e914);
  (*pcVar3)();
}



/* Entry: 10002e914; end: 10002e937;  */

void FUN_10002e914(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long extraout_x8;
  ulong uVar5;
  undefined8 unaff_x20;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar3 = &UNK_100053008;
  lVar1 = 0;
  (*(code *)PTR___s10Foundation3URLVMa_1000501c0)();
  lVar8 = *(long *)(lVar1 + -8);
  lVar7 = *(long *)(lVar8 + 0x40);
  lVar2 = lVar1;
  (*(code *)PTR____chkstk_darwin_100050770)(lVar7 + 0xfU & 0xfffffffffffffff0);
  FUN_10002e704();
  (**(code **)(lVar8 + 0x10))((long)&puStack_90 - extraout_x8,param_1,lVar1);
  uVar5 = (ulong)*(byte *)(lVar8 + 0x50);
  uVar6 = uVar5 + 0x18 & (uVar5 ^ 0xffffffffffffffff);
  _swift_allocObject(&UNK_100053008,uVar6 + lVar7,uVar5 | 7);
  *(undefined8 *)(puVar3 + 0x10) = unaff_x20;
  (**(code **)(lVar8 + 0x20))(puVar3 + uVar6,(long)&puStack_90 - extraout_x8,lVar1);
  uStack_70 = 0x10002ecd8;
  puStack_90 = PTR___NSConcreteStackBlock_100050768;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_1000272d0;
  puStack_78 = &UNK_100053020;
  ppuVar4 = &puStack_90;
  puStack_68 = puVar3;
  __Block_copy(ppuVar4);
  puVar3 = puStack_68;
  _objc_retain_x20();
  _swift_release(puVar3);
  func_0x00010003c820(lVar2);
  __Block_release(ppuVar4);
  _objc_release_x21();
  return;
}



/* Entry: 10002e938; end: 10002eccb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10002e938(long param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar6;
  long extraout_x12;
  long extraout_x12_00;
  long lVar7;
  code *pcVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_c0 [8];
  undefined1 *puStack_b8;
  code *pcStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar2 = 0;
  uStack_a0 = param_2;
  __s10Foundation3URLVMa();
  lVar7 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100050770)(*(undefined8 *)(lVar7 + 0x40));
  lVar12 = 0x1000608e0;
  puStack_b8 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_100011744(0x1000608e0,&UNK_100041c78);
  (*(code *)PTR____chkstk_darwin_100050770)
            (*(long *)(*(long *)(lVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = (long)(auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x8_00;
  lVar6 = 0x10005fb98;
  FUN_100011744(0x10005fb98,&UNK_100040f90);
  (*(code *)PTR____chkstk_darwin_100050770)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  lVar6 = lVar9 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lStack_a8 = lVar6;
  (*(code *)PTR____chkstk_darwin_100050770)();
  uVar10 = lVar6 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100050770)();
  lVar6 = _DAT_100060850;
  lVar11 = uVar10 - extraout_x12_00;
  _swift_beginAccess(param_1 + _DAT_100060850,auStack_78,0,0);
  pcStack_b0 = *(code **)(lVar7 + 0x38);
  (*pcStack_b0)(lVar11,1,1,lVar2);
  lVar12 = (long)*(int *)(lVar12 + 0x30);
  lStack_98 = param_1;
  FUN_100031c1c(param_1 + lVar6,lVar9,0x10005fb98,&UNK_100040f90);
  FUN_100031c1c(lVar11,lVar9 + lVar12,0x10005fb98,&UNK_100040f90);
  pcVar8 = *(code **)(lVar7 + 0x30);
  lVar3 = lVar9;
  (*pcVar8)(lVar9,1,lVar2);
  if ((int)lVar3 == 1) {
    func_0x000100031ca0(lVar11,0x10005fb98,&UNK_100040f90);
    lVar12 = lVar9 + lVar12;
    (*pcVar8)(lVar12,1,lVar2);
    if ((int)lVar12 != 1) {
LAB_10002eb8c:
      func_0x000100031ca0(lVar9,0x1000608e0,&UNK_100041c78);
      return;
    }
    func_0x000100031ca0(lVar9,0x10005fb98,&UNK_100040f90);
  }
  else {
    FUN_100031c1c(lVar9,uVar10,0x10005fb98,&UNK_100040f90);
    lVar3 = lVar9 + lVar12;
    (*pcVar8)(lVar3,1,lVar2);
    puVar1 = puStack_b8;
    if ((int)lVar3 == 1) {
      func_0x000100031ca0(lVar11,0x10005fb98,&UNK_100040f90);
      (**(code **)(lVar7 + 8))(uVar10,lVar2);
      goto LAB_10002eb8c;
    }
    (**(code **)(lVar7 + 0x20))(puStack_b8,lVar9 + lVar12,lVar2);
    uVar4 = 0x1000608e8;
    func_0x000100031d28(0x1000608e8,PTR___s10Foundation3URLVMa_1000501c0,
                        PTR___s10Foundation3URLVSQAAMc_1000501d0);
    uVar5 = uVar10;
    __sSQ2eeoiySbx_xtFZTj(uVar10,puVar1,lVar2,uVar4);
    pcVar8 = *(code **)(lVar7 + 8);
    (*pcVar8)(puVar1,lVar2);
    func_0x000100031ca0(lVar11,0x10005fb98,&UNK_100040f90);
    (*pcVar8)(uVar10,lVar2);
    func_0x000100031ca0(lVar9,0x10005fb98,&UNK_100040f90);
    if ((uVar5 & 1) == 0) {
      return;
    }
  }
  lVar12 = lStack_a8;
  (**(code **)(lVar7 + 0x10))(lStack_a8,uStack_a0,lVar2);
  (*pcStack_b0)(lVar12,0,1,lVar2);
  lVar3 = lStack_98;
  _swift_beginAccess(lStack_98 + lVar6,auStack_90,0x21,0);
  func_0x000100031ce0(lVar12,lVar3 + lVar6,0x10005fb98,&UNK_100040f90);
  _swift_endAccess(auStack_90);
  return;
}



/* Entry: 10002eccc; end: 10002ed07;  */

void FUN_10002eccc(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  (*(code *)PTR___s10Foundation3URLVMa_1000501c0)();
  lVar2 = *(long *)(lVar1 + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
  _objc_release_x8(*(undefined8 *)(unaff_x20 + 0x10));
  (**(code **)(lVar2 + 8))(unaff_x20 + (uVar3 + 0x18 & (uVar3 ^ 0xffffffffffffffff)),lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010003b488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_100050c98)();
  return;
}



/* Entry: 10002ed08; end: 10002edcb;  */

void FUN_10002ed08(undefined8 param_1,undefined1 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  uVar1 = param_1;
  FUN_10002e704();
  puVar2 = &UNK_100053058;
  _swift_allocObject(&UNK_100053058,0x1a,7);
  *(undefined8 *)(puVar2 + 0x10) = unaff_x20;
  puVar2[0x18] = (char)param_1;
  puVar2[0x19] = param_2;
  pcStack_40 = FUN_10002efe4;
  puStack_60 = PTR___NSConcreteStackBlock_100050768;
  uStack_58 = 0x42000000;
  pcStack_50 = FUN_1000272d0;
  puStack_48 = &UNK_100053070;
  puStack_38 = puVar2;
  __Block_copy(&puStack_60);
  puVar2 = puStack_38;
  _objc_retain_x20();
  _swift_release(puVar2);
  func_0x00010003c820(uVar1);
  __Block_release(ppuVar3);
  _objc_release_x19();
  return;
}



/* Entry: 10002edcc; end: 10002efbf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10002edcc(long param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar8;
  long lVar9;
  undefined1 *puVar10;
  long lVar11;
  undefined8 uStack_80;
  long alStack_78 [3];
  
  lVar4 = 0;
  uStack_80._0_4_ = param_2;
  uStack_80._4_4_ = param_3;
  FUN_100036348();
  (*(code *)PTR____chkstk_darwin_100050770)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar2 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar10 = (undefined1 *)((long)&uStack_80 + lVar2);
  lVar6 = 0x10005fb98;
  FUN_100011744(0x10005fb98,&UNK_100040f90);
  (*(code *)PTR____chkstk_darwin_100050770)
            (*(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = (long)puVar10 - extraout_x8_00;
  lVar5 = 0;
  __s10Foundation3URLVMa();
  lVar9 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100050770)(*(undefined8 *)(lVar9 + 0x40));
  lVar6 = _DAT_100060850;
  lVar11 = lVar8 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  _swift_beginAccess(param_1 + _DAT_100060850,alStack_78,0,0);
  FUN_100031c1c(param_1 + lVar6,lVar8,0x10005fb98,&UNK_100040f90);
  lVar6 = lVar8;
  (**(code **)(lVar9 + 0x30))(lVar8,1,lVar5);
  if ((int)lVar6 == 1) {
    func_0x000100031ca0(lVar8,0x10005fb98,&UNK_100040f90);
  }
  else {
    (**(code **)(lVar9 + 0x20))(lVar11,lVar8,lVar5);
    FUN_100030104();
    iVar1 = *(int *)(lVar4 + 0x18);
    __s10Foundation4DateVACycfC(puVar10 + iVar1);
    lVar6 = 0;
    __s10Foundation4DateVMa();
    puVar7 = puVar10 + iVar1;
    lVar8 = 0;
    (**(code **)(*(long *)(lVar6 + -8) + 0x38))(puVar7,0,1,lVar6);
    __s10Foundation3URLV17lastPathComponentSSvg();
    uVar3 = uStack_80._4_4_;
    *puVar10 = (char)(undefined4)uStack_80;
    *(char *)((long)&uStack_80 + lVar2 + 1) = (char)uVar3;
    iVar1 = *(int *)(lVar4 + 0x1c);
    *(undefined1 **)(puVar10 + iVar1) = puVar7;
    *(long *)((long)(puVar10 + iVar1) + 8) = lVar8;
    func_0x00010003068c(puVar10);
    func_0x000100031c64(puVar10);
    (**(code **)(lVar9 + 8))(lVar11,lVar5);
  }
  return;
}



/* Entry: 10002efc0; end: 10002efe3;  */

void FUN_10002efc0(void)

{
  long unaff_x20;
  
  _objc_release_x8(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010003b488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_100050c98)();
  return;
}



/* Entry: 10002efe4; end: 10002f017;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10002efe4(void)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar9;
  long unaff_x20;
  long lVar10;
  undefined1 *puVar11;
  long lVar12;
  undefined4 uStack_80;
  uint uStack_7c;
  long alStack_78 [3];
  
  lVar8 = *(long *)(unaff_x20 + 0x10);
  uStack_80 = (uint)*(byte *)(unaff_x20 + 0x18);
  uStack_7c = (uint)*(byte *)(unaff_x20 + 0x19);
  lVar4 = 0;
  FUN_100036348();
  (*(code *)PTR____chkstk_darwin_100050770)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar2 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar11 = (undefined1 *)((long)&uStack_80 + lVar2);
  lVar6 = 0x10005fb98;
  FUN_100011744(0x10005fb98,&UNK_100040f90);
  (*(code *)PTR____chkstk_darwin_100050770)
            (*(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = (long)puVar11 - extraout_x8_00;
  lVar5 = 0;
  __s10Foundation3URLVMa();
  lVar10 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100050770)(*(undefined8 *)(lVar10 + 0x40));
  lVar6 = _DAT_100060850;
  lVar12 = lVar9 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  _swift_beginAccess(lVar8 + _DAT_100060850,alStack_78,0,0);
  FUN_100031c1c(lVar8 + lVar6,lVar9,0x10005fb98,&UNK_100040f90);
  lVar6 = lVar9;
  (**(code **)(lVar10 + 0x30))(lVar9,1,lVar5);
  if ((int)lVar6 == 1) {
    func_0x000100031ca0(lVar9,0x10005fb98,&UNK_100040f90);
  }
  else {
    (**(code **)(lVar10 + 0x20))(lVar12,lVar9,lVar5);
    FUN_100030104();
    iVar1 = *(int *)(lVar4 + 0x18);
    __s10Foundation4DateVACycfC(puVar11 + iVar1);
    lVar6 = 0;
    __s10Foundation4DateVMa();
    puVar7 = puVar11 + iVar1;
    lVar8 = 0;
    (**(code **)(*(long *)(lVar6 + -8) + 0x38))(puVar7,0,1,lVar6);
    __s10Foundation3URLV17lastPathComponentSSvg();
    uVar3 = uStack_7c;
    *puVar11 = (char)uStack_80;
    *(char *)((long)&uStack_80 + lVar2 + 1) = (char)uVar3;
    iVar1 = *(int *)(lVar4 + 0x1c);
    *(undefined1 **)(puVar11 + iVar1) = puVar7;
    *(long *)((long)(puVar11 + iVar1) + 8) = lVar8;
    func_0x00010003068c(puVar11);
    func_0x000100031c64(puVar11);
    (**(code **)(lVar10 + 8))(lVar12,lVar5);
  }
  return;
}



/* Entry: 10002f018; end: 10002f3bf;  */

void FUN_10002f018(undefined8 param_1,code *param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  long extraout_x8;
  ulong uVar4;
  undefined8 unaff_x20;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lVar1 = 0;
  (*param_2)();
  lVar7 = *(long *)(lVar1 + -8);
  lVar6 = *(long *)(lVar7 + 0x40);
  lVar2 = lVar1;
  (*(code *)PTR____chkstk_darwin_100050770)(lVar6 + 0xfU & 0xfffffffffffffff0);
  FUN_10002e704();
  (**(code **)(lVar7 + 0x10))((long)&puStack_90 - extraout_x8,param_1,lVar1);
  uVar4 = (ulong)*(byte *)(lVar7 + 0x50);
  uVar5 = uVar4 + 0x18 & (uVar4 ^ 0xffffffffffffffff);
  _swift_allocObject(param_3,uVar5 + lVar6,uVar4 | 7);
  *(undefined8 *)(param_3 + 0x10) = unaff_x20;
  (**(code **)(lVar7 + 0x20))(param_3 + uVar5,(long)&puStack_90 - extraout_x8,lVar1);
  puStack_90 = PTR___NSConcreteStackBlock_100050768;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_1000272d0;
  ppuVar3 = &puStack_90;
  uStack_78 = param_5;
  uStack_70 = param_4;
  lStack_68 = param_3;
  __Block_copy(ppuVar3);
  lVar1 = lStack_68;
  _objc_retain_x20();
  _swift_release(lVar1);
  func_0x00010003c820(lVar2);
  __Block_release(ppuVar3);
  _objc_release_x21();
  return;
}



/* Entry: 10002f3c0; end: 10002f403;  */

void FUN_10002f3c0(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  (*(code *)PTR___s19LockedCameraCapture0abC7SessionC22ApplicationLaunchErrorOMa_100050520)();
  lVar2 = *(long *)(lVar1 + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
  _objc_release_x8(*(undefined8 *)(unaff_x20 + 0x10));
  (**(code **)(lVar2 + 8))(unaff_x20 + (uVar3 + 0x18 & (uVar3 ^ 0xffffffffffffffff)),lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010003b488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_100050c98)();
  return;
}



/* Entry: 10002f404; end: 10002f4fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10002f404(long param_1,undefined8 param_2)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  long lVar3;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [24];
  
  lVar1 = 0x100060490;
  FUN_100011744(0x100060490,&UNK_100041d70);
  (*(code *)PTR____chkstk_darwin_100050770)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = auStack_70 + -extraout_x8;
  lVar1 = 0;
  __s10Foundation4DateVMa();
  lVar3 = *(long *)(lVar1 + -8);
  (**(code **)(lVar3 + 0x10))(puVar2,param_2,lVar1);
  (**(code **)(lVar3 + 0x38))(puVar2,0,1,lVar1);
  lVar1 = _DAT_100060858;
  _swift_beginAccess(param_1 + _DAT_100060858,auStack_68,0x21,0);
  func_0x000100031ce0(puVar2,param_1 + lVar1,0x100060490,&UNK_100041d70);
  _swift_endAccess(auStack_68);
  return;
}



/* Entry: 10002f4fc; end: 10002f51b;  */

void FUN_10002f4fc(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  (*(code *)PTR___s10Foundation4DateVMa_100050210)();
  lVar2 = *(long *)(lVar1 + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
  _objc_release_x8(*(undefined8 *)(unaff_x20 + 0x10));
  (**(code **)(lVar2 + 8))(unaff_x20 + (uVar3 + 0x18 & (uVar3 ^ 0xffffffffffffffff)),lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010003b488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_100050c98)();
  return;
}



/* Entry: 10002f51c; end: 10002f5cf;  */

void FUN_10002f51c(undefined8 param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar2 = &puStack_60;
  FUN_10002e704();
  puVar1 = &UNK_100053148;
  _swift_allocObject(&UNK_100053148,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = unaff_x20;
  pcStack_40 = FUN_10002f754;
  puStack_60 = PTR___NSConcreteStackBlock_100050768;
  uStack_58 = 0x42000000;
  pcStack_50 = FUN_1000272d0;
  puStack_48 = &UNK_100053160;
  puStack_38 = puVar1;
  __Block_copy(&puStack_60);
  puVar1 = puStack_38;
  _objc_retain_x20();
  _swift_release(puVar1);
  func_0x00010003c820(param_1);
  __Block_release(ppuVar2);
  _objc_release_x19();
  return;
}



/* Entry: 10002f5d0; end: 10002f72f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10002f5d0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  long lVar5;
  long lVar6;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [24];
  
  lVar1 = 0x10005fb98;
  FUN_100011744(0x10005fb98,&UNK_100040f90);
  (*(code *)PTR____chkstk_darwin_100050770)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = auStack_70 + -extraout_x8;
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100050770)(*(undefined8 *)(lVar6 + 0x40));
  lVar1 = _DAT_100060850;
  lVar5 = (long)puVar4 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  _swift_beginAccess(param_1 + _DAT_100060850,auStack_68,0,0);
  FUN_100031c1c(param_1 + lVar1,puVar4,0x10005fb98,&UNK_100040f90);
  puVar3 = puVar4;
  (**(code **)(lVar6 + 0x30))(puVar4,1,lVar2);
  if ((int)puVar3 == 1) {
    func_0x000100031ca0(puVar4,0x10005fb98,&UNK_100040f90);
  }
  else {
    (**(code **)(lVar6 + 0x20))(lVar5,puVar4,lVar2);
    __s10Foundation3URLV17lastPathComponentSSvg();
    func_0x000100030f64();
    _swift_bridgeObjectRelease(puVar4);
    (**(code **)(lVar6 + 8))(lVar5,lVar2);
  }
  return;
}



/* Entry: 10002f730; end: 10002f753;  */

void FUN_10002f730(void)

{
  long unaff_x20;
  
  _objc_release_x8(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010003b488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_100050c98)();
  return;
}



/* Entry: 10002f754; end: 10002f75b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10002f754(void)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 *puVar5;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar6;
  long lVar7;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar1 = 0x10005fb98;
  FUN_100011744(0x10005fb98,&UNK_100040f90);
  (*(code *)PTR____chkstk_darwin_100050770)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = auStack_70 + -extraout_x8;
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar7 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100050770)(*(undefined8 *)(lVar7 + 0x40));
  lVar1 = _DAT_100060850;
  lVar6 = (long)puVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  _swift_beginAccess(lVar4 + _DAT_100060850,auStack_68,0,0);
  FUN_100031c1c(lVar4 + lVar1,puVar5,0x10005fb98,&UNK_100040f90);
  puVar3 = puVar5;
  (**(code **)(lVar7 + 0x30))(puVar5,1,lVar2);
  if ((int)puVar3 == 1) {
    func_0x000100031ca0(puVar5,0x10005fb98,&UNK_100040f90);
  }
  else {
    (**(code **)(lVar7 + 0x20))(lVar6,puVar5,lVar2);
    __s10Foundation3URLV17lastPathComponentSSvg();
    func_0x000100030f64();
    _swift_bridgeObjectRelease(puVar5);
    (**(code **)(lVar7 + 8))(lVar6,lVar2);
  }
  return;
}



/* Entry: 10002f75c; end: 10002f8c3;  */

void FUN_10002f75c(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  ulong uVar5;
  long extraout_x12;
  undefined8 unaff_x20;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  lVar1 = 0;
  __s10Foundation4DateVMa();
  lVar9 = *(long *)(lVar1 + -8);
  lVar7 = *(long *)(lVar9 + 0x40);
  lVar2 = lVar1;
  (*(code *)PTR____chkstk_darwin_100050770)();
  lVar8 = (long)&puStack_80 - (lVar7 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100050770)();
  lVar6 = lVar8 - extraout_x12;
  __s10Foundation4DateVACycfC(lVar6);
  FUN_10002e704();
  (**(code **)(lVar9 + 0x10))(lVar8,lVar6,lVar1);
  uVar5 = (ulong)*(byte *)(lVar9 + 0x50);
  uVar10 = uVar5 + 0x18 & (uVar5 ^ 0xffffffffffffffff);
  puVar3 = &UNK_100053198;
  _swift_allocObject(&UNK_100053198,uVar10 + lVar7,uVar5 | 7);
  *(undefined8 *)(puVar3 + 0x10) = unaff_x20;
  (**(code **)(lVar9 + 0x20))(puVar3 + uVar10,lVar8,lVar1);
  pcStack_60 = FUN_1000300ac;
  puStack_80 = PTR___NSConcreteStackBlock_100050768;
  uStack_78 = 0x42000000;
  pcStack_70 = FUN_1000272d0;
  puStack_68 = &UNK_1000531b0;
  ppuVar4 = &puStack_80;
  puStack_58 = puVar3;
  __Block_copy(ppuVar4);
  puVar3 = puStack_58;
  _objc_retain_x20();
  _swift_release(puVar3);
  func_0x00010003c820(lVar2);
  __Block_release(ppuVar4);
  _objc_release_x22();
  (**(code **)(lVar9 + 8))(lVar6,lVar1);
  return;
}



/* Entry: 10002f8c4; end: 10003003b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10002f8c4(double param_1,long param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar6;
  ulong uVar7;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long lVar8;
  code *pcVar9;
  code *pcVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_170 [8];
  code *pcStack_168;
  code *pcStack_160;
  long lStack_158;
  long lStack_150;
  undefined1 *puStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  undefined8 uStack_118;
  ulong uStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined1 uStack_90;
  long lStack_88;
  undefined1 uStack_80;
  
  lVar3 = 0;
  uStack_118 = param_3;
  __s10Foundation4DateVMa();
  lStack_100 = *(long *)(lVar3 + -8);
  lStack_f8 = lVar3;
  (*(code *)PTR____chkstk_darwin_100050770)(*(undefined8 *)(lStack_100 + 0x40));
  puStack_148 = auStack_170 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100050770)();
  lVar6 = (long)(auStack_170 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  lStack_138 = lVar6;
  (*(code *)PTR____chkstk_darwin_100050770)();
  lVar6 = lVar6 - extraout_x12_00;
  lVar3 = 0x1000608d0;
  lStack_130 = lVar6;
  FUN_100011744(0x1000608d0,&UNK_100041c70);
  lStack_108 = lVar3;
  (*(code *)PTR____chkstk_darwin_100050770)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = lVar6 - extraout_x8_00;
  lVar3 = 0x100060490;
  FUN_100011744(0x100060490,&UNK_100041d70);
  (*(code *)PTR____chkstk_darwin_100050770)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar3 = lVar6 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lStack_140 = lVar3;
  (*(code *)PTR____chkstk_darwin_100050770)();
  lVar3 = lVar3 - extraout_x12_01;
  lStack_120 = lVar3;
  (*(code *)PTR____chkstk_darwin_100050770)();
  lVar3 = lVar3 - extraout_x12_02;
  lStack_128 = lVar3;
  (*(code *)PTR____chkstk_darwin_100050770)();
  uVar7 = lVar3 - extraout_x12_03;
  uStack_110 = uVar7;
  (*(code *)PTR____chkstk_darwin_100050770)();
  lVar11 = uVar7 - extraout_x12_04;
  lVar3 = 0x10005fb98;
  FUN_100011744(0x10005fb98,&UNK_100040f90);
  (*(code *)PTR____chkstk_darwin_100050770)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = lVar11 - extraout_x8_02;
  lVar4 = 0;
  __s10Foundation3URLVMa();
  lVar8 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100050770)(*(undefined8 *)(lVar8 + 0x40));
  lVar3 = _DAT_100060850;
  lVar12 = lVar13 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  _swift_beginAccess(param_2 + _DAT_100060850,auStack_c0,0,0);
  FUN_100031c1c(param_2 + lVar3,lVar13,0x10005fb98,&UNK_100040f90);
  lVar3 = lVar13;
  (**(code **)(lVar8 + 0x30))(lVar13,1,lVar4);
  if ((int)lVar3 == 1) {
    func_0x000100031ca0(lVar13,0x10005fb98,&UNK_100040f90);
    return;
  }
  lStack_158 = lVar8;
  lStack_150 = lVar4;
  (**(code **)(lVar8 + 0x20))(lVar12,lVar13,lVar4);
  lVar8 = _DAT_100060860;
  _swift_beginAccess(param_2 + _DAT_100060860,auStack_d8,0,0);
  lVar3 = lStack_f8;
  lVar13 = lStack_100;
  pcStack_160 = *(code **)(lStack_100 + 0x38);
  (*pcStack_160)(lVar11,1,1,lStack_f8);
  lVar4 = (long)*(int *)(lStack_108 + 0x30);
  lStack_108 = lVar8;
  FUN_100031c1c(param_2 + lVar8,lVar6,0x100060490,&UNK_100041d70);
  FUN_100031c1c(lVar11,lVar6 + lVar4,0x100060490,&UNK_100041d70);
  pcVar10 = *(code **)(lVar13 + 0x30);
  lVar8 = lVar6;
  (*pcVar10)(lVar6,1,lVar3);
  uVar7 = uStack_110;
  if ((int)lVar8 == 1) {
    func_0x000100031ca0(lVar11,0x100060490,&UNK_100041d70);
    lVar4 = lVar6 + lVar4;
    (*pcVar10)(lVar4,1,lVar3);
    if ((int)lVar4 != 1) {
LAB_10002fcec:
      func_0x000100031ca0(lVar6,0x1000608d0,&UNK_100041c70);
      goto LAB_10002fff0;
    }
    pcStack_168 = pcVar10;
    func_0x000100031ca0(lVar6,0x100060490,&UNK_100041d70);
  }
  else {
    FUN_100031c1c(lVar6,uStack_110,0x100060490,&UNK_100041d70);
    lVar8 = lVar6 + lVar4;
    (*pcVar10)(lVar8,1,lVar3);
    lVar2 = lStack_130;
    if ((int)lVar8 == 1) {
      func_0x000100031ca0(lVar11,0x100060490,&UNK_100041d70);
      (**(code **)(lVar13 + 8))(uVar7,lVar3);
      goto LAB_10002fcec;
    }
    pcStack_168 = pcVar10;
    (**(code **)(lVar13 + 0x20))(lStack_130,lVar6 + lVar4,lVar3);
    uVar5 = 0x1000608d8;
    func_0x000100031d28(0x1000608d8,PTR___s10Foundation4DateVMa_100050210,
                        PTR___s10Foundation4DateVSQAAMc_100050228);
    __sSQ2eeoiySbx_xtFZTj(uVar7,lVar2,lVar3,uVar5);
    pcVar10 = *(code **)(lVar13 + 8);
    (*pcVar10)(lVar2,lVar3);
    func_0x000100031ca0(lVar11,0x100060490,&UNK_100041d70);
    (*pcVar10)(uStack_110,lVar3);
    func_0x000100031ca0(lVar6,0x100060490,&UNK_100041d70);
    if ((uVar7 & 1) == 0) goto LAB_10002fff0;
  }
  lVar4 = lStack_128;
  (**(code **)(lVar13 + 0x10))(lStack_128,uStack_118,lVar3);
  (*pcStack_160)(lVar4,0,1,lVar3);
  lVar8 = lStack_108;
  _swift_beginAccess(param_2 + lStack_108,&lStack_a8,0x21,0);
  func_0x000100031ce0(lVar4,param_2 + lVar8,0x100060490,&UNK_100041d70);
  _swift_endAccess(&lStack_a8);
  lVar4 = _DAT_100060858;
  _swift_beginAccess(param_2 + _DAT_100060858,auStack_f0,0,0);
  lVar6 = lStack_120;
  FUN_100031c1c(param_2 + lVar4,lStack_120,0x100060490,&UNK_100041d70);
  pcVar10 = pcStack_168;
  lVar11 = lVar6;
  (*pcStack_168)(lVar6,1,lVar3);
  lVar4 = lStack_138;
  if ((int)lVar11 == 1) {
LAB_10002ff0c:
    lVar4 = lVar6;
    lVar3 = 0x100060490;
    func_0x000100031ca0(lVar4,0x100060490,&UNK_100041d70);
    lVar6 = 0;
  }
  else {
    pcVar9 = *(code **)(lVar13 + 0x20);
    (*pcVar9)(lStack_138,lVar6,lVar3);
    lVar6 = lStack_140;
    FUN_100031c1c(param_2 + lVar8,lStack_140,0x100060490,&UNK_100041d70);
    lVar8 = lVar6;
    (*pcVar10)(lVar6,1,lVar3);
    puVar1 = puStack_148;
    if ((int)lVar8 == 1) {
      (**(code **)(lVar13 + 8))(lVar4,lVar3);
      goto LAB_10002ff0c;
    }
    (*pcVar9)(puStack_148,lVar6,lVar3);
    __s10Foundation4DateV17timeIntervalSinceySdACF(lVar4);
    pcVar10 = *(code **)(lVar13 + 8);
    (*pcVar10)(puVar1,lVar3);
    (*pcVar10)();
    param_1 = param_1 * 1000.0;
    if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x100030034);
      (*pcVar10)();
    }
    if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x100030038);
      (*pcVar10)();
    }
    if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x10003003c);
      (*pcVar10)();
    }
    lVar6 = (long)param_1;
  }
  __s10Foundation3URLV17lastPathComponentSSvg();
  uStack_90 = 0;
  uStack_80 = 0;
  lStack_a8 = lVar4;
  lStack_a0 = lVar3;
  lStack_98 = lVar6;
  lStack_88 = lVar6;
  func_0x0001000313ac(&lStack_a8);
  _swift_bridgeObjectRelease(lVar3);
LAB_10002fff0:
  (**(code **)(lStack_158 + 8))(lVar12,lStack_150);
  return;
}



/* Entry: 10003003c; end: 1000300ab;  */

void FUN_10003003c(code *param_1)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  (*param_1)();
  lVar2 = *(long *)(lVar1 + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
  _objc_release_x8(*(undefined8 *)(unaff_x20 + 0x10));
  (**(code **)(lVar2 + 8))(unaff_x20 + (uVar3 + 0x18 & (uVar3 ^ 0xffffffffffffffff)),lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010003b488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_100050c98)();
  return;
}



/* Entry: 1000300ac; end: 1000300bf;  */

void FUN_1000300ac(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  (*(code *)PTR___s10Foundation4DateVMa_100050210)();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
                    /* WARNING: Could not recover jumptable at 0x000100030100. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_10002f8c4(*(undefined8 *)(unaff_x20 + 0x10),
                unaff_x20 + (uVar2 + 0x18 & (uVar2 ^ 0xffffffffffffffff)));
  return;
}



/* Entry: 1000300c0; end: 100030103;  */

void FUN_1000300c0(code *param_1,code *UNRECOVERED_JUMPTABLE)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  (*param_1)();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
                    /* WARNING: Could not recover jumptable at 0x000100030100. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (*(undefined8 *)(unaff_x20 + 0x10),
             unaff_x20 + (uVar2 + 0x18 & (uVar2 ^ 0xffffffffffffffff)));
  return;
}



/* Entry: 100030104; end: 100031813;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100030104(void)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long extraout_x8;
  ulong uVar6;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long unaff_x20;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined1 *puVar13;
  code *pcVar14;
  long lVar15;
  code *pcVar16;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  lVar1 = 0x10005fb98;
  FUN_100011744(0x10005fb98,&UNK_100040f90);
  (*(code *)PTR____chkstk_darwin_100050770)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar13 = auStack_b0 + -extraout_x8;
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar15 = *(long *)(lVar2 + -8);
  lVar9 = *(long *)(lVar15 + 0x40);
  (*(code *)PTR____chkstk_darwin_100050770)();
  lVar8 = (long)puVar13 - (lVar9 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100050770)();
  lVar10 = lVar8 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100050770)();
  lVar12 = lVar10 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100050770)();
  lVar1 = _DAT_100060850;
  lVar7 = lVar12 - extraout_x12_01;
  _swift_beginAccess(unaff_x20 + _DAT_100060850,auStack_78,0,0);
  FUN_100031c1c(unaff_x20 + lVar1,puVar13,0x10005fb98,&UNK_100040f90);
  puVar3 = puVar13;
  (**(code **)(lVar15 + 0x30))(puVar13,1,lVar2);
  if ((int)puVar3 == 1) {
    func_0x000100031ca0(puVar13,0x10005fb98,&UNK_100040f90);
  }
  else {
    pcVar16 = *(code **)(lVar15 + 0x20);
    (*pcVar16)(lVar10,puVar13,lVar2);
    __s10Foundation3URLV22appendingPathComponentyACSSF(lVar12,0xd000000000000021,0x800000010004ca90)
    ;
    pcVar14 = *(code **)(lVar15 + 8);
    (*pcVar14)(lVar10,lVar2);
    lVar1 = lVar7;
    (*pcVar16)(lVar7,lVar12,lVar2);
    if (lRam0000000100060950 != -1) {
      lVar1 = 0x100060950;
      _swift_once(0x100060950,FUN_100033bbc);
    }
    FUN_100033a94();
    (**(code **)(lVar15 + 0x10))(lVar8,lVar7,lVar2);
    uVar6 = (ulong)*(byte *)(lVar15 + 0x50);
    uVar11 = uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff);
    puVar4 = &UNK_100053378;
    _swift_allocObject(&UNK_100053378,uVar11 + lVar9,uVar6 | 7);
    (*pcVar16)(puVar4 + uVar11,lVar8,lVar2);
    uStack_88 = 0x100031e30;
    puStack_a8 = PTR___NSConcreteStackBlock_100050768;
    uStack_a0 = 0x42000000;
    pcStack_98 = FUN_1000272d0;
    puStack_90 = &UNK_100053390;
    ppuVar5 = &puStack_a8;
    puStack_80 = puVar4;
    __Block_copy(ppuVar5);
    _swift_release(puStack_80);
    func_0x00010003c820(lVar1);
    __Block_release(ppuVar5);
    _objc_release_x20();
    (*pcVar14)(lVar7,lVar2);
  }
  return;
}



/* Entry: 100031814; end: 10003187f;  */

void FUN_100031814(void)

{
  func_0x000100031848();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_10005b018);
  return;
}



/* Entry: 100031880; end: 10003190f; -[_TtC33SnapchatCaptureExtensionUtilities18LockedCameraLogger .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100031880(long param_1)

{
  func_0x000100031ca0(param_1 + _DAT_100060850,0x10005fb98,&UNK_100040f90);
  func_0x000100031ca0(param_1 + _DAT_100060858,0x100060490,&UNK_100041d70);
  func_0x000100031ca0(param_1 + _DAT_100060860,0x100060490,&UNK_100041d70);
                    /* WARNING: Could not recover jumptable at 0x00010003b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000508c0)(*(undefined8 *)(param_1 + _DAT_100060868));
  return;
}



/* Entry: 100031910; end: 100031917;  */

void FUN_100031910(void)

{
  if (lRam0000000100060898 != 0) {
    return;
  }
  _swift_getSingletonMetadata(0,&DAT_100044830);
  return;
}



/* Entry: 100031918; end: 100031a17;  */

void FUN_100031918(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lStack_40;
  long lStack_38;
  long lStack_30;
  undefined *puStack_28;
  
  uVar2 = 0x1000608a8;
  lVar1 = 0x13f;
  func_0x0001000319cc(0x13f,0x1000608a8,PTR___s10Foundation3URLVMa_1000501c0);
  if (uVar2 < 0x40) {
    lStack_40 = *(long *)(lVar1 + -8) + 0x40;
    uVar2 = 0x100060478;
    lVar1 = 0x13f;
    func_0x0001000319cc(0x13f,0x100060478,PTR___s10Foundation4DateVMa_100050210);
    if (uVar2 < 0x40) {
      lStack_38 = *(long *)(lVar1 + -8) + 0x40;
      puStack_28 = &UNK_100041c58;
      lStack_30 = lStack_38;
      _swift_updateClassMetadata2(param_1,0x100,4,&lStack_40,param_1 + 0x50);
    }
  }
  return;
}



/* Entry: 100031a18; end: 100031a57;  */

void FUN_100031a18(void)

{
  undefined *puVar1;
  
  if (puRam00000001000608b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_100042500;
  _swift_getWitnessTable(&UNK_100042500,&UNK_100053ec0);
  puRam00000001000608b0 = puVar1;
  return;
}



/* Entry: 100031a58; end: 100031a73;  */

void FUN_100031a58(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar2 = *(long *)(lVar1 + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
  FUN_1000149a0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  (**(code **)(lVar2 + 8))(unaff_x20 + (uVar3 + 0x20 & (uVar3 ^ 0xffffffffffffffff)),lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010003b488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_100050c98)();
  return;
}



/* Entry: 100031a74; end: 100031af3;  */

void FUN_100031a74(void)

{
  undefined *puVar1;
  
  if (puRam00000001000608b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_1000426e8;
  _swift_getWitnessTable(&UNK_1000426e8,&UNK_100054110);
  puRam00000001000608b8 = puVar1;
  return;
}



/* Entry: 100031af4; end: 100031b5f;  */

void FUN_100031af4(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar2 = *(long *)(lVar1 + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
  FUN_1000149a0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  (**(code **)(lVar2 + 8))(unaff_x20 + (uVar3 + 0x20 & (uVar3 ^ 0xffffffffffffffff)),lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010003b488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_100050c98)();
  return;
}



/* Entry: 100031b60; end: 100031b8f;  */

/* WARNING: Removing unreachable block (ram,0x000100034968) */

void FUN_100031b60(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  __s10Foundation4DataV5write2to7optionsyAA3URLV_So20NSDataWritingOptionsVtKF
            (unaff_x20 + (uVar2 + 0x20 & (uVar2 ^ 0xffffffffffffffff)),1,
             *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 100031b90; end: 100031b97;  */

void FUN_100031b90(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  (**(code **)(*(long *)(lVar1 + -8) + 8))
            (unaff_x20 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)),lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010003b488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_100050c98)();
  return;
}



/* Entry: 100031b98; end: 100031bef;  */

void FUN_100031b98(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  (**(code **)(*(long *)(lVar1 + -8) + 8))
            (unaff_x20 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)),lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010003b488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_100050c98)();
  return;
}



/* Entry: 100031bf0; end: 100031c1b;  */

void FUN_100031bf0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  
  __s10Foundation3URLVMa();
  lVar8 = *(long *)PTR____stack_chk_guard_100050780;
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1000502e8;
  _objc_opt_self();
  puVar2 = puVar1;
  func_0x00010003be60();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  __s10Foundation3URLV4pathSSvg();
  uVar7 = param_2;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  _swift_bridgeObjectRelease(param_2);
  func_0x00010003bfa0();
  puVar4 = puVar2;
  _objc_release_x21();
  _objc_release_x23();
  if ((int)puVar2 != 0) {
    func_0x00010003be60();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
    func_0x00010003ca40();
    _objc_release_x19();
    _objc_release_x20();
    puVar4 = (undefined *)0x0;
    if ((int)puVar1 != 0) {
      if (*(long *)PTR____stack_chk_guard_100050780 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010003b380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_retain_100050930)();
        return;
      }
      goto LAB_1000347e4;
    }
    _objc_retain();
    puVar4 = (undefined *)0x0;
    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
    _objc_release_x19();
    _swift_willThrow();
    _swift_errorRelease();
  }
  if (*(long *)PTR____stack_chk_guard_100050780 == lVar8) {
    return;
  }
LAB_1000347e4:
  ___stack_chk_fail();
  lVar5 = 0;
  __s10Foundation3URLVMa();
  lVar12 = *(long *)(lVar5 + -8);
  lVar10 = *(long *)(lVar12 + 0x40);
  lVar8 = lVar5;
  (*(code *)PTR____chkstk_darwin_100050770)();
  lVar11 = (long)&puStack_f0 - (lVar10 + 0xfU & 0xfffffffffffffff0);
  FUN_100033a94();
  (**(code **)(lVar12 + 0x10))(lVar11,puVar3,lVar5);
  uVar9 = (ulong)*(byte *)(lVar12 + 0x50);
  uVar13 = uVar9 + 0x20 & (uVar9 ^ 0xffffffffffffffff);
  puVar1 = &UNK_1000537c8;
  _swift_allocObject(&UNK_1000537c8,uVar13 + lVar10,uVar9 | 7);
  *(undefined **)(puVar1 + 0x10) = puVar4;
  *(undefined8 *)(puVar1 + 0x18) = uVar7;
  (**(code **)(lVar12 + 0x20))(puVar1 + uVar13,lVar11,lVar5);
  pcStack_d0 = FUN_1000350ac;
  puStack_f0 = PTR___NSConcreteStackBlock_100050768;
  uStack_e8 = 0x42000000;
  pcStack_e0 = FUN_1000272d0;
  puStack_d8 = &UNK_1000537e0;
  ppuVar6 = &puStack_f0;
  puStack_c8 = puVar1;
  __Block_copy(ppuVar6);
  puVar1 = puStack_c8;
  func_0x0001000149e0(puVar4,uVar7);
  _swift_release(puVar1);
  func_0x00010003c820(lVar8);
  __Block_release(ppuVar6);
  _objc_release_x20();
  return;
}



/* Entry: 100031c1c; end: 100031db7;  */

undefined8 FUN_100031c1c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  FUN_100011744(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 100031db8; end: 100031fbf;  */

void FUN_100031db8(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010003b590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_100050d50)(uVar1);
  return;
}



/* Entry: 100031fc0; end: 10003222f;  */

undefined1  [16] FUN_100031fc0(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  char *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  switch((uint)param_1 & 0xff) {
  case 0xe:
  case 0x16:
  case 0x17:
    pcVar2 = "https://link.snapchat.com/locked-camera-capture-extension?page=camera&";
    break;
  case 0xf:
    pcVar2 = "https://link.snapchat.com/feed?";
    goto code_r0x0001000320d8;
  case 0x10:
    auVar4._8_8_ = 0x800000010004ce30;
    auVar4._0_8_ = 0xd00000000000001e;
    return auVar4;
  case 0x11:
    pcVar2 = "https://link.snapchat.com/discover?";
    goto code_r0x0001000320f8;
  case 0x12:
    pcVar2 = "https://snapchat.com/spotlight?";
code_r0x0001000320d8:
    auVar9._8_8_ = (ulong)(pcVar2 + -0x20) | 0x8000000000000000;
    auVar9._0_8_ = 0xd00000000000001f;
    return auVar9;
  case 0x13:
    auVar7._8_8_ = 0x800000010004cdb0;
    auVar7._0_8_ = 0xd000000000000025;
    return auVar7;
  case 0x14:
    auVar11._8_8_ = 0x800000010004cd60;
    auVar11._0_8_ = 0xd000000000000045;
    return auVar11;
  case 0x15:
    auVar6._8_8_ = 0x800000010004cd00;
    auVar6._0_8_ = 0xd00000000000005e;
    return auVar6;
  case 0x18:
    pcVar2 = "https://link.snapchat.com/memories?";
code_r0x0001000320f8:
    auVar10._8_8_ = (ulong)(pcVar2 + -0x20) | 0x8000000000000000;
    auVar10._0_8_ = 0xd000000000000023;
    return auVar10;
  case 0x19:
    pcVar2 = "https://link.snapchat.com/locked-camera-capture-extension?page=sendTo&";
    break;
  case 0x1a:
    auVar5._8_8_ = 0x800000010004cb30;
    auVar5._0_8_ = 0xd00000000000004d;
    return auVar5;
  case 0x1b:
    auVar8._8_8_ = 0x800000010004cbd0;
    auVar8._0_8_ = 0xd000000000000048;
    return auVar8;
  default:
    __ss11_StringGutsV4growyySiF(0x1f);
    _swift_bridgeObjectRelease(0xe000000000000000);
    func_0x00010002e018(param_1);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(param_2);
    __sSS6appendyySSF(0x26,0xe100000000000000);
    auVar1._8_8_ = 0x800000010004cc20;
    auVar1._0_8_ = 0xd000000000000053;
    return auVar1;
  }
  auVar3._8_8_ = (ulong)(pcVar2 + -0x20) | 0x8000000000000000;
  auVar3._0_8_ = 0xd000000000000046;
  return auVar3;
}



/* Entry: 100032230; end: 10003226f;  */

undefined8 FUN_100032230(void)

{
  if (lRam00000001000608f0 != -1) {
    _swift_once(0x1000608f0,0x1000321c0);
  }
  return 0x100062de8;
}



/* Entry: 100032270; end: 1000323bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_100032270(undefined8 param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  ulong uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auVar10 [16];
  
  lVar1 = 0;
  __s10Foundation4UUIDVMa();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100050770)(*(undefined8 *)(lVar8 + 0x40));
  puVar6 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar2 = 0;
  __s10Foundation3URLVMa();
  lVar9 = *(long *)(uVar2 - 8);
  uVar3 = uVar2;
  (*(code *)PTR____chkstk_darwin_100050770)(*(undefined8 *)(lVar9 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uVar4 = *(ulong *)(unaff_x20 + _DAT_1000608f8);
  if (uVar4 != 0) {
    _swift_retain(uVar4);
    __s19LockedCameraCapture0abC7SessionC17sessionContentURL10Foundation0G0Vvg(lVar7);
    _swift_release();
    uVar3 = param_2;
    __s10Foundation3URLV17lastPathComponentSSvg();
    (**(code **)(lVar9 + 8))(lVar7,uVar2);
    uVar5 = uVar4 & 0xffffffffffff;
    if ((uVar3 & 0x2000000000000000) != 0) {
      uVar5 = uVar3 >> 0x38 & 0xf;
    }
    param_2 = uVar2;
    if ((uVar5 != 0) &&
       (uVar2 = uVar4, param_2 = uVar3, __sSS5countSivg(uVar4,uVar3), uVar5 = uVar3, 1 < (long)uVar2
       )) goto LAB_100032398;
    _swift_bridgeObjectRelease(uVar3);
  }
  __s10Foundation4UUIDVACycfC(puVar6);
  __s10Foundation4UUIDV10uuidStringSSvg();
  (**(code **)(lVar8 + 8))(puVar6,lVar1);
  uVar5 = param_2;
  uVar4 = uVar3;
LAB_100032398:
  auVar10._8_8_ = uVar5;
  auVar10._0_8_ = uVar4;
  return auVar10;
}



/* Entry: 1000323bc; end: 1000324b3;  */

void FUN_1000323bc(undefined8 param_1)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar4 = &puStack_60;
  pcVar1 = "configure(with:)";
  func_0x00010003a450("configure(with:)");
  _objc_retainAutoreleasedReturnValue();
  puVar2 = &UNK_100053458;
  _swift_allocObject(&UNK_100053458,0x18,7);
  _swift_unknownObjectWeakInit(puVar2 + 0x10);
  puVar3 = &UNK_100053480;
  _swift_allocObject(&UNK_100053480,0x20,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  pcStack_40 = FUN_100032574;
  puStack_60 = PTR___NSConcreteStackBlock_100050768;
  uStack_58 = 0x42000000;
  pcStack_50 = FUN_1000272d0;
  puStack_48 = &UNK_100053498;
  puStack_38 = puVar3;
  __Block_copy(&puStack_60);
  puVar2 = puStack_38;
  _swift_retain(param_1);
  _swift_release(puVar2);
  func_0x00010003c820(pcVar1);
  __Block_release(ppuVar4);
  _swift_unknownObjectRelease(pcVar1);
  return;
}



/* Entry: 1000324b4; end: 1000324d7;  */

void FUN_1000324b4(void)

{
  long unaff_x20;
  
  _swift_unknownObjectWeakDestroy(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010003b488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_100050c98)();
  return;
}



/* Entry: 1000324d8; end: 100032547;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000324d8(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    if (*(long *)(param_1 + _DAT_1000608f8) == 0) {
      *(undefined8 *)(param_1 + _DAT_1000608f8) = param_2;
      _swift_retain(param_2);
    }
    _objc_release();
  }
  return;
}



/* Entry: 100032548; end: 100032573;  */

void FUN_100032548(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010003b488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_100050c98)();
  return;
}



/* Entry: 100032574; end: 100032597;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100032574(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  _swift_beginAccess(lVar2 + 0x10,auStack_38,0,0);
  lVar2 = lVar2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar2 != 0) {
    if (*(long *)(lVar2 + _DAT_1000608f8) == 0) {
      *(undefined8 *)(lVar2 + _DAT_1000608f8) = uVar1;
      _swift_retain(uVar1);
    }
    _objc_release();
  }
  return;
}



/* Entry: 100032598; end: 100032683;  */

void FUN_100032598(undefined1 param_1)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar4 = &puStack_60;
  pcVar1 = "route(to:)";
  func_0x00010003a450("route(to:)");
  _objc_retainAutoreleasedReturnValue();
  puVar2 = &UNK_100053458;
  _swift_allocObject(&UNK_100053458,0x18,7);
  _swift_unknownObjectWeakInit(puVar2 + 0x10);
  puVar3 = &UNK_1000534d0;
  _swift_allocObject(&UNK_1000534d0,0x19,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  puVar3[0x18] = param_1;
  pcStack_40 = FUN_100032c3c;
  puStack_60 = PTR___NSConcreteStackBlock_100050768;
  uStack_58 = 0x42000000;
  pcStack_50 = FUN_1000272d0;
  puStack_48 = &UNK_1000534e8;
  puStack_38 = puVar3;
  __Block_copy(&puStack_60);
  _swift_release(puStack_38);
  func_0x00010003c820(pcVar1);
  __Block_release(ppuVar4);
  _swift_unknownObjectRelease(pcVar1);
  return;
}



/* Entry: 100032684; end: 100032c3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100032684(long param_1,undefined8 ***param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 ***pppuVar6;
  undefined8 uVar7;
  bool bVar8;
  long lVar9;
  undefined8 ****ppppuVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar17;
  long extraout_x12;
  long lVar18;
  code *pcVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  undefined1 auStack_d0 [8];
  long lStack_c8;
  long lStack_c0;
  undefined1 *puStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 ***pppuStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  lVar9 = 0x100060938;
  FUN_100011744(0x100060938,&UNK_100041cb0);
  (*(code *)PTR____chkstk_darwin_100050770)
            (*(long *)(*(long *)(lVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = 0x10005fb98;
  FUN_100011744(0x10005fb98,&UNK_100040f90);
  (*(code *)PTR____chkstk_darwin_100050770)
            (*(long *)(*(long *)(lVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar24 = (long)(auStack_d0 + -extraout_x8) - extraout_x8_00;
  lVar9 = 0;
  __s10Foundation3URLVMa();
  lVar18 = *(long *)(lVar9 + -8);
  lVar23 = *(long *)(lVar18 + 0x40);
  (*(code *)PTR____chkstk_darwin_100050770)();
  lVar21 = lVar24 - (lVar23 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100050770)();
  _swift_beginAccess(param_1 + 0x10,auStack_78,0,0);
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    uStack_88 = 0x6567616d695f7369;
    uStack_80 = 0xe90000000000003d;
    bVar8 = *(char *)(param_1 + _DAT_100060908) == '\0';
    uVar12 = 0x65757274;
    if (bVar8) {
      uVar12 = 0x65736c6166;
    }
    uVar1 = 0xe400000000000000;
    if (bVar8) {
      uVar1 = 0xe500000000000000;
    }
    lStack_c8 = lVar23;
    lStack_c0 = lVar21;
    puStack_b8 = auStack_d0 + -extraout_x8;
    lStack_b0 = lVar21 - extraout_x12;
    lStack_a8 = lVar24;
    lStack_a0 = lVar18;
    __sSS6appendyySSF(uVar12,uVar1);
    _swift_bridgeObjectRelease(uVar1);
    uVar7 = uStack_80;
    uVar1 = uStack_88;
    uStack_88 = 0;
    uStack_80 = 0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x10);
    _swift_bridgeObjectRelease(uStack_80);
    uStack_88 = 0x43746e6f72467369;
    uStack_80 = 0xee003d6172656d61;
    bVar8 = *(char *)(param_1 + _DAT_100060900) == '\0';
    uVar12 = 0x65757274;
    if (bVar8) {
      uVar12 = 0x65736c6166;
    }
    uVar2 = 0xe400000000000000;
    if (bVar8) {
      uVar2 = 0xe500000000000000;
    }
    uVar13 = uVar2;
    __sSS6appendyySSF(uVar12);
    _swift_bridgeObjectRelease(uVar2);
    uVar2 = uStack_80;
    uVar12 = uStack_88;
    FUN_100031fc0();
    pppuStack_98 = param_2;
    puStack_90 = (undefined *)uVar13;
    uStack_88 = uVar1;
    uStack_80 = uVar7;
    _swift_bridgeObjectRetain(uVar13);
    puVar4 = PTR___sSSs25LosslessStringConvertiblesWP_100050a58;
    puVar11 = PTR___sSSSTsWP_100050a48;
    puVar3 = PTR___sSSN_100050a38;
    ppppuVar10 = &pppuStack_98;
    puVar14 = PTR___sSSN_100050a38;
    __sSSySSxcs25LosslessStringConvertibleRzSTRzSJ7ElementSTRtzlufC
              (ppppuVar10,PTR___sSSN_100050a38,PTR___sSSs25LosslessStringConvertiblesWP_100050a58,
               PTR___sSSSTsWP_100050a48);
    pppuStack_98 = ppppuVar10;
    puStack_90 = puVar14;
    __sSS6append10contentsOfyx_tSTRzSJ7ElementRtzlF(&uStack_88,puVar3,puVar11);
    _swift_bridgeObjectRelease(uVar7);
    _swift_bridgeObjectRelease(uVar13);
    puVar14 = puStack_90;
    pppuVar6 = pppuStack_98;
    uStack_88 = 0x26;
    uStack_80 = 0xe100000000000000;
    __sSS6appendyySSF(uVar12,uVar2);
    _swift_bridgeObjectRelease(uVar2);
    uVar12 = uStack_80;
    pppuStack_98 = pppuVar6;
    puStack_90 = puVar14;
    _swift_bridgeObjectRetain(puVar14);
    ppppuVar10 = &pppuStack_98;
    puVar15 = puVar3;
    __sSSySSxcs25LosslessStringConvertibleRzSTRzSJ7ElementSTRtzlufC
              (ppppuVar10,puVar3,puVar4,puVar11);
    pppuStack_98 = ppppuVar10;
    puStack_90 = puVar15;
    __sSS6append10contentsOfyx_tSTRzSJ7ElementRtzlF(&uStack_88,puVar3,puVar11);
    _swift_bridgeObjectRelease(uVar12);
    _swift_bridgeObjectRelease(puVar14);
    puVar14 = puStack_90;
    uStack_88 = 0xd000000000000022;
    uStack_80 = 0x800000010004cf10;
    _swift_bridgeObjectRetain(puStack_90);
    ppppuVar10 = &pppuStack_98;
    puVar15 = puVar3;
    __sSSySSxcs25LosslessStringConvertibleRzSTRzSJ7ElementSTRtzlufC
              (ppppuVar10,puVar3,puVar4,puVar11);
    puVar16 = puVar3;
    pppuStack_98 = ppppuVar10;
    puStack_90 = puVar15;
    __sSS6append10contentsOfyx_tSTRzSJ7ElementRtzlF(&uStack_88,puVar3,puVar11);
    _swift_bridgeObjectRelease(puVar14);
    puVar14 = puStack_90;
    pppuVar6 = pppuStack_98;
    uStack_88 = 0x26;
    uStack_80 = 0xe100000000000000;
    pppuStack_98 = (undefined8 ***)0x0;
    puStack_90 = (undefined *)0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x17);
    _swift_bridgeObjectRelease(puStack_90);
    pppuStack_98 = (undefined8 ***)0xd000000000000015;
    puStack_90 = (undefined *)0x800000010004cf40;
    FUN_100032270();
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar16);
    puVar15 = puStack_90;
    __sSS6appendyySSF(pppuStack_98,puStack_90);
    _swift_bridgeObjectRelease(puVar15);
    uVar12 = uStack_80;
    pppuStack_98 = pppuVar6;
    puStack_90 = puVar14;
    _swift_bridgeObjectRetain(puVar14);
    ppppuVar10 = &pppuStack_98;
    puVar15 = puVar3;
    __sSSySSxcs25LosslessStringConvertibleRzSTRzSJ7ElementSTRtzlufC
              (ppppuVar10,puVar3,puVar4,puVar11);
    lVar23 = lStack_a0;
    lVar21 = lStack_a8;
    pppuStack_98 = ppppuVar10;
    puStack_90 = puVar15;
    __sSS6append10contentsOfyx_tSTRzSJ7ElementRtzlF(&uStack_88,puVar3,puVar11);
    _swift_bridgeObjectRelease(uVar12);
    _swift_bridgeObjectRelease(puVar14);
    puVar3 = puStack_90;
    __s10Foundation3URLV6stringACSgSSh_tcfC(lVar21,pppuStack_98,puStack_90);
    lVar24 = lVar21;
    (**(code **)(lVar23 + 0x30))(lVar21,1,lVar9);
    lVar18 = lStack_b0;
    if ((int)lVar24 == 1) {
      _objc_release_x23();
      _swift_bridgeObjectRelease(puVar3);
      FUN_100033948(lVar21,0x10005fb98,&UNK_100040f90);
    }
    else {
      pcVar19 = *(code **)(lVar23 + 0x20);
      (*pcVar19)(lStack_b0,lVar21,lVar9);
      lVar21 = *(long *)(param_1 + _DAT_1000608f8);
      if (lVar21 == 0) {
        _objc_release_x23();
        _swift_bridgeObjectRelease(puVar3);
        pcVar19 = *(code **)(lVar23 + 8);
      }
      else {
        lVar24 = 0;
        __sScPMa();
        puVar5 = puStack_b8;
        (**(code **)(*(long *)(lVar24 + -8) + 0x38))(puStack_b8,1,1,lVar24);
        lVar24 = lStack_c0;
        (**(code **)(lVar23 + 0x10))(lStack_c0,lVar18,lVar9);
        uVar17 = (ulong)*(byte *)(lVar23 + 0x50);
        uVar20 = uVar17 + 0x20 & (uVar17 ^ 0xffffffffffffffff);
        uVar22 = lStack_c8 + uVar20 + 7 & 0xfffffffffffffff8;
        puVar11 = &UNK_1000535c0;
        lStack_a8 = param_1;
        _swift_allocObject(&UNK_1000535c0,uVar22 + 8,uVar17 | 7);
        *(undefined8 *)(puVar11 + 0x10) = 0;
        *(undefined8 *)(puVar11 + 0x18) = 0;
        (*pcVar19)(puVar11 + uVar20,lVar24,lVar9);
        *(long *)(puVar11 + uVar22) = lVar21;
        _swift_retain_n(lVar21,2);
        uVar12 = 0;
        FUN_1000332a0(0,0,puVar5,&UNK_100041cc8,puVar11);
        _swift_release(lVar21);
        _objc_release_x8(lStack_a8);
        _swift_release(uVar12);
        _swift_bridgeObjectRelease(puVar3);
        pcVar19 = *(code **)(lVar23 + 8);
        lVar18 = lStack_b0;
      }
      (*pcVar19)(lVar18,lVar9);
    }
  }
  return;
}



/* Entry: 100032c3c; end: 100032c6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100032c3c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  bool bVar7;
  long lVar8;
  undefined8 ****ppppuVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined8 ***pppuVar17;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar18;
  long extraout_x12;
  long lVar19;
  long unaff_x20;
  code *pcVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  undefined1 auStack_d0 [8];
  long lStack_c8;
  long lStack_c0;
  undefined1 *puStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 ***pppuStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  lVar12 = *(long *)(unaff_x20 + 0x10);
  pppuVar17 = (undefined8 ***)(ulong)*(byte *)(unaff_x20 + 0x18);
  lVar8 = 0x100060938;
  FUN_100011744(0x100060938,&UNK_100041cb0);
  (*(code *)PTR____chkstk_darwin_100050770)
            (*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = 0x10005fb98;
  FUN_100011744(0x10005fb98,&UNK_100040f90);
  (*(code *)PTR____chkstk_darwin_100050770)
            (*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar25 = (long)(auStack_d0 + -extraout_x8) - extraout_x8_00;
  lVar8 = 0;
  __s10Foundation3URLVMa();
  lVar19 = *(long *)(lVar8 + -8);
  lVar24 = *(long *)(lVar19 + 0x40);
  (*(code *)PTR____chkstk_darwin_100050770)();
  lVar22 = lVar25 - (lVar24 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100050770)();
  _swift_beginAccess(lVar12 + 0x10,auStack_78,0,0);
  lVar12 = lVar12 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar12 != 0) {
    uStack_88 = 0x6567616d695f7369;
    uStack_80 = 0xe90000000000003d;
    bVar7 = *(char *)(lVar12 + _DAT_100060908) == '\0';
    uVar11 = 0x65757274;
    if (bVar7) {
      uVar11 = 0x65736c6166;
    }
    uVar1 = 0xe400000000000000;
    if (bVar7) {
      uVar1 = 0xe500000000000000;
    }
    lStack_c8 = lVar24;
    lStack_c0 = lVar22;
    puStack_b8 = auStack_d0 + -extraout_x8;
    lStack_b0 = lVar22 - extraout_x12;
    lStack_a8 = lVar25;
    lStack_a0 = lVar19;
    __sSS6appendyySSF(uVar11,uVar1);
    _swift_bridgeObjectRelease(uVar1);
    uVar6 = uStack_80;
    uVar1 = uStack_88;
    uStack_88 = 0;
    uStack_80 = 0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x10);
    _swift_bridgeObjectRelease(uStack_80);
    uStack_88 = 0x43746e6f72467369;
    uStack_80 = 0xee003d6172656d61;
    bVar7 = *(char *)(lVar12 + _DAT_100060900) == '\0';
    uVar11 = 0x65757274;
    if (bVar7) {
      uVar11 = 0x65736c6166;
    }
    uVar2 = 0xe400000000000000;
    if (bVar7) {
      uVar2 = 0xe500000000000000;
    }
    uVar13 = uVar2;
    __sSS6appendyySSF(uVar11);
    _swift_bridgeObjectRelease(uVar2);
    uVar2 = uStack_80;
    uVar11 = uStack_88;
    FUN_100031fc0();
    pppuStack_98 = pppuVar17;
    puStack_90 = (undefined *)uVar13;
    uStack_88 = uVar1;
    uStack_80 = uVar6;
    _swift_bridgeObjectRetain(uVar13);
    puVar4 = PTR___sSSs25LosslessStringConvertiblesWP_100050a58;
    puVar10 = PTR___sSSSTsWP_100050a48;
    puVar3 = PTR___sSSN_100050a38;
    ppppuVar9 = &pppuStack_98;
    puVar14 = PTR___sSSN_100050a38;
    __sSSySSxcs25LosslessStringConvertibleRzSTRzSJ7ElementSTRtzlufC
              (ppppuVar9,PTR___sSSN_100050a38,PTR___sSSs25LosslessStringConvertiblesWP_100050a58,
               PTR___sSSSTsWP_100050a48);
    pppuStack_98 = ppppuVar9;
    puStack_90 = puVar14;
    __sSS6append10contentsOfyx_tSTRzSJ7ElementRtzlF(&uStack_88,puVar3,puVar10);
    _swift_bridgeObjectRelease(uVar6);
    _swift_bridgeObjectRelease(uVar13);
    puVar14 = puStack_90;
    pppuVar17 = pppuStack_98;
    uStack_88 = 0x26;
    uStack_80 = 0xe100000000000000;
    __sSS6appendyySSF(uVar11,uVar2);
    _swift_bridgeObjectRelease(uVar2);
    uVar11 = uStack_80;
    pppuStack_98 = pppuVar17;
    puStack_90 = puVar14;
    _swift_bridgeObjectRetain(puVar14);
    ppppuVar9 = &pppuStack_98;
    puVar15 = puVar3;
    __sSSySSxcs25LosslessStringConvertibleRzSTRzSJ7ElementSTRtzlufC(ppppuVar9,puVar3,puVar4,puVar10)
    ;
    pppuStack_98 = ppppuVar9;
    puStack_90 = puVar15;
    __sSS6append10contentsOfyx_tSTRzSJ7ElementRtzlF(&uStack_88,puVar3,puVar10);
    _swift_bridgeObjectRelease(uVar11);
    _swift_bridgeObjectRelease(puVar14);
    puVar14 = puStack_90;
    uStack_88 = 0xd000000000000022;
    uStack_80 = 0x800000010004cf10;
    _swift_bridgeObjectRetain(puStack_90);
    ppppuVar9 = &pppuStack_98;
    puVar15 = puVar3;
    __sSSySSxcs25LosslessStringConvertibleRzSTRzSJ7ElementSTRtzlufC(ppppuVar9,puVar3,puVar4,puVar10)
    ;
    puVar16 = puVar3;
    pppuStack_98 = ppppuVar9;
    puStack_90 = puVar15;
    __sSS6append10contentsOfyx_tSTRzSJ7ElementRtzlF(&uStack_88,puVar3,puVar10);
    _swift_bridgeObjectRelease(puVar14);
    puVar14 = puStack_90;
    pppuVar17 = pppuStack_98;
    uStack_88 = 0x26;
    uStack_80 = 0xe100000000000000;
    pppuStack_98 = (undefined8 ***)0x0;
    puStack_90 = (undefined *)0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x17);
    _swift_bridgeObjectRelease(puStack_90);
    pppuStack_98 = (undefined8 ***)0xd000000000000015;
    puStack_90 = (undefined *)0x800000010004cf40;
    FUN_100032270();
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar16);
    puVar15 = puStack_90;
    __sSS6appendyySSF(pppuStack_98,puStack_90);
    _swift_bridgeObjectRelease(puVar15);
    uVar11 = uStack_80;
    pppuStack_98 = pppuVar17;
    puStack_90 = puVar14;
    _swift_bridgeObjectRetain(puVar14);
    ppppuVar9 = &pppuStack_98;
    puVar15 = puVar3;
    __sSSySSxcs25LosslessStringConvertibleRzSTRzSJ7ElementSTRtzlufC(ppppuVar9,puVar3,puVar4,puVar10)
    ;
    lVar24 = lStack_a0;
    lVar22 = lStack_a8;
    pppuStack_98 = ppppuVar9;
    puStack_90 = puVar15;
    __sSS6append10contentsOfyx_tSTRzSJ7ElementRtzlF(&uStack_88,puVar3,puVar10);
    _swift_bridgeObjectRelease(uVar11);
    _swift_bridgeObjectRelease(puVar14);
    puVar3 = puStack_90;
    __s10Foundation3URLV6stringACSgSSh_tcfC(lVar22,pppuStack_98,puStack_90);
    lVar25 = lVar22;
    (**(code **)(lVar24 + 0x30))(lVar22,1,lVar8);
    lVar19 = lStack_b0;
    if ((int)lVar25 == 1) {
      _objc_release_x23();
      _swift_bridgeObjectRelease(puVar3);
      FUN_100033948(lVar22,0x10005fb98,&UNK_100040f90);
    }
    else {
      pcVar20 = *(code **)(lVar24 + 0x20);
      (*pcVar20)(lStack_b0,lVar22,lVar8);
      lVar22 = *(long *)(lVar12 + _DAT_1000608f8);
      if (lVar22 == 0) {
        _objc_release_x23();
        _swift_bridgeObjectRelease(puVar3);
        pcVar20 = *(code **)(lVar24 + 8);
      }
      else {
        lVar25 = 0;
        __sScPMa();
        puVar5 = puStack_b8;
        (**(code **)(*(long *)(lVar25 + -8) + 0x38))(puStack_b8,1,1,lVar25);
        lVar25 = lStack_c0;
        (**(code **)(lVar24 + 0x10))(lStack_c0,lVar19,lVar8);
        uVar18 = (ulong)*(byte *)(lVar24 + 0x50);
        uVar21 = uVar18 + 0x20 & (uVar18 ^ 0xffffffffffffffff);
        uVar23 = lStack_c8 + uVar21 + 7 & 0xfffffffffffffff8;
        puVar10 = &UNK_1000535c0;
        lStack_a8 = lVar12;
        _swift_allocObject(&UNK_1000535c0,uVar23 + 8,uVar18 | 7);
        *(undefined8 *)(puVar10 + 0x10) = 0;
        *(undefined8 *)(puVar10 + 0x18) = 0;
        (*pcVar20)(puVar10 + uVar21,lVar25,lVar8);
        *(long *)(puVar10 + uVar23) = lVar22;
        _swift_retain_n(lVar22,2);
        uVar11 = 0;
        FUN_1000332a0(0,0,puVar5,&UNK_100041cc8,puVar10);
        _swift_release(lVar22);
        _objc_release_x8(lStack_a8);
        _swift_release(uVar11);
        _swift_bridgeObjectRelease(puVar3);
        pcVar20 = *(code **)(lVar24 + 8);
        lVar19 = lStack_b0;
      }
      (*pcVar20)(lVar19,lVar8);
    }
  }
  return;
}



/* Entry: 100032c6c; end: 100032cb3;  */

void FUN_100032c6c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010003b488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_100050c98)();
  return;
}



/* Entry: 100032cb4; end: 100032cd7;  */

void FUN_100032cb4(undefined1 param_1)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  pcVar1 = "setIsCapturedMediaImageType(_:)";
  puVar3 = &UNK_100053570;
  ppuVar4 = &puStack_80;
  func_0x00010003a450("setIsCapturedMediaImageType(_:)");
  _objc_retainAutoreleasedReturnValue();
  puVar2 = &UNK_100053458;
  _swift_allocObject(&UNK_100053458,0x18,7);
  _swift_unknownObjectWeakInit(puVar2 + 0x10);
  _swift_allocObject(&UNK_100053570,0x19,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  puVar3[0x18] = param_1;
  pcStack_60 = FUN_100032e2c;
  puStack_80 = PTR___NSConcreteStackBlock_100050768;
  uStack_78 = 0x42000000;
  pcStack_70 = FUN_1000272d0;
  puStack_68 = &UNK_100053588;
  puStack_58 = puVar3;
  __Block_copy(&puStack_80);
  _swift_release(puStack_58);
  func_0x00010003c820(pcVar1);
  __Block_release(ppuVar4);
  _swift_unknownObjectRelease(pcVar1);
  return;
}



/* Entry: 100032cd8; end: 100032dc7;  */

void FUN_100032cd8(undefined1 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  ppuVar2 = &puStack_80;
  func_0x00010003a450(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = &UNK_100053458;
  _swift_allocObject(&UNK_100053458,0x18,7);
  _swift_unknownObjectWeakInit(puVar1 + 0x10);
  _swift_allocObject(param_3,0x19,7);
  *(undefined **)(param_3 + 0x10) = puVar1;
  *(undefined1 *)(param_3 + 0x18) = param_1;
  puStack_80 = PTR___NSConcreteStackBlock_100050768;
  uStack_78 = 0x42000000;
  pcStack_70 = FUN_1000272d0;
  uStack_68 = param_5;
  uStack_60 = param_4;
  lStack_58 = param_3;
  __Block_copy(&puStack_80);
  _swift_release(lStack_58);
  func_0x00010003c820(param_2);
  __Block_release(ppuVar2);
  _swift_unknownObjectRelease(param_2);
  return;
}



/* Entry: 100032dc8; end: 100032e2b;  */

void FUN_100032dc8(long param_1,byte param_2,long *param_3)

{
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    *(byte *)(param_1 + *param_3) = param_2 & 1;
    _objc_release();
  }
  return;
}



/* Entry: 100032e2c; end: 100032eeb;  */

void FUN_100032e2c(void)

{
  long unaff_x20;
  
  FUN_100032dc8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined1 *)(unaff_x20 + 0x18),&DAT_100060908);
  return;
}



/* Entry: 100032eec; end: 100032f9f;  */

void FUN_100032eec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long unaff_x22;
  
  puVar1 = PTR__OBJC_CLASS___NSUserActivity_100050328;
  _objc_allocWithZone();
  func_0x00010003c200();
  *(undefined **)(unaff_x22 + 0x88) = puVar1;
  puVar2 = puVar1;
  __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
  puVar3 = puVar1;
  func_0x00010003d180(puVar1,param_2,puVar2);
  _objc_release_x21();
  __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
  func_0x00010003d500(puVar1,param_2,puVar3);
  _objc_release_x20();
  plVar4 = (long *)(ulong)*(uint *)(
                                   PTR___s19LockedCameraCapture0abC7SessionC15openApplication3forySo14NSUserActivityC_tYaKFTu_1000504e8
                                   + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x90) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_100032fa0;
                    /* WARNING: Could not recover jumptable at 0x00010003ab7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s19LockedCameraCapture0abC7SessionC15openApplication3forySo14NSUserActivityC_tYaKF_1000504e0
  )(puVar1);
  return;
}



/* Entry: 100032fa0; end: 100032ffb;  */

void FUN_100032fa0(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x98) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x90));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100032ffc;
  }
  else {
    pcVar1 = FUN_100033048;
  }
                    /* WARNING: Could not recover jumptable at 0x00010003b5e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_100050e40)(pcVar1,0,0);
  return;
}



/* Entry: 100032ffc; end: 100033047;  */

void FUN_100032ffc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  _objc_release_x8(*(undefined8 *)(unaff_x22 + 0x88));
  uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x58);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x80));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000100033044. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100033048; end: 10003329f;  */

void FUN_100033048(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined8 uVar10;
  long unaff_x22;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  
  uVar8 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar7 = *(ulong *)(unaff_x22 + 0x58);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x60);
  _objc_release_x8(*(undefined8 *)(unaff_x22 + 0x88));
  *(undefined8 *)(unaff_x22 + 0x40) = uVar8;
  _swift_errorRetain(uVar8);
  uVar8 = 0x100060948;
  FUN_100011744(0x100060948,&UNK_100041cf0);
  _swift_dynamicCast(uVar7,(undefined8 *)(unaff_x22 + 0x40),uVar8,uVar10,6);
  if ((uVar7 & 1) == 0) {
    uVar8 = *(undefined8 *)(unaff_x22 + 0x60);
    lVar1 = *(long *)(unaff_x22 + 0x68);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x58);
    _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x98));
    (**(code **)(lVar1 + 0x38))(uVar10,1,1,uVar8);
    FUN_100033948(uVar10,0x100060940,&UNK_100041ce8);
  }
  else {
    lVar5 = unaff_x22 + 0x10;
    uVar8 = *(undefined8 *)(unaff_x22 + 0x78);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x60);
    lVar1 = *(long *)(unaff_x22 + 0x68);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x58);
    (**(code **)(lVar1 + 0x38))(uVar11,0,1,uVar10);
    pcVar9 = *(code **)(lVar1 + 0x20);
    (*pcVar9)(uVar8,uVar11,uVar10);
    if (lRam0000000100060848 != -1) {
      uVar8 = 0x100060848;
      _swift_once(0x100060848,FUN_10002e538);
    }
    uVar3 = uRam0000000100062de0;
    uVar6 = *(undefined8 *)(unaff_x22 + 0x98);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x78);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x80);
    lVar1 = *(long *)(unaff_x22 + 0x68);
    lVar2 = *(long *)(unaff_x22 + 0x70);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x60);
    FUN_10002e704();
    (**(code **)(lVar1 + 0x10))(uVar11,uVar10,uVar12);
    uVar7 = (ulong)*(byte *)(lVar1 + 0x50);
    uVar13 = uVar7 + 0x18 & (uVar7 ^ 0xffffffffffffffff);
    puVar4 = &UNK_100053638;
    _swift_allocObject(&UNK_100053638,uVar13 + lVar2,uVar7 | 7);
    *(undefined8 *)(puVar4 + 0x10) = uVar3;
    (*pcVar9)(puVar4 + uVar13,uVar11,uVar12);
    *(code **)(unaff_x22 + 0x30) = FUN_1000339f4;
    *(undefined **)(unaff_x22 + 0x38) = puVar4;
    *(undefined **)(unaff_x22 + 0x10) = PTR___NSConcreteStackBlock_100050768;
    *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
    *(code **)(unaff_x22 + 0x20) = FUN_1000272d0;
    *(undefined **)(unaff_x22 + 0x28) = &UNK_100053650;
    __Block_copy(lVar5);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x38);
    _objc_retain_x20();
    _swift_release(uVar11);
    func_0x00010003c820(uVar8);
    __Block_release(lVar5);
    _objc_release_x25();
    _swift_errorRelease(uVar6);
    (**(code **)(lVar1 + 8))(uVar10,uVar12);
  }
  uVar8 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x58);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x80));
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar10);
                    /* WARNING: Could not recover jumptable at 0x000100033284. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1000332a0; end: 10003352b;  */

void FUN_1000332a0(long param_1,long param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

{
  long lVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long extraout_x8;
  undefined1 *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined1 auStack_c0 [8];
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar1 = 0x100060938;
  FUN_100011744(0x100060938,&UNK_100041cb0);
  (*(code *)PTR____chkstk_darwin_100050770)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = auStack_c0 + -extraout_x8;
  FUN_100033714(param_3,puVar5);
  lVar1 = 0;
  __sScPMa();
  lVar8 = *(long *)(lVar1 + -8);
  puVar2 = puVar5;
  (**(code **)(lVar8 + 0x30))(puVar5,1,lVar1);
  uVar7 = param_5;
  _swift_retain(param_5);
  if ((int)puVar2 == 1) {
    FUN_100033948(puVar5,0x100060938,&UNK_100041cb0);
    uVar7 = 0x1c00;
  }
  else {
    __sScP8rawValues5UInt8Vvg();
    (**(code **)(lVar8 + 8))(puVar5,lVar1);
    uVar7 = uVar7 & 0xff | 0x1c00;
  }
  lVar1 = *(long *)(param_5 + 0x10);
  lVar8 = *(long *)(param_5 + 0x18);
  _swift_unknownObjectRetain(lVar1);
  _swift_release(param_5);
  if (lVar1 == 0) {
    lVar6 = 0;
    lVar8 = 0;
  }
  else {
    lVar6 = lVar1;
    _swift_getObjectType();
    __sScA15unownedExecutorScevgTj();
    _swift_unknownObjectRelease(lVar1);
  }
  if (param_2 == 0) {
    FUN_100033948(param_3,0x100060938,&UNK_100041cb0);
    puVar3 = &UNK_1000535e8;
    _swift_allocObject(&UNK_1000535e8,0x20,7);
    *(undefined8 *)(puVar3 + 0x10) = param_4;
    *(ulong *)(puVar3 + 0x18) = param_5;
    if (lVar8 == 0 && lVar6 == 0) {
      puVar4 = (undefined8 *)0x0;
    }
    else {
      uStack_80 = 0;
      uStack_78 = 0;
      puVar4 = &uStack_80;
      lStack_70 = lVar6;
      lStack_68 = lVar8;
    }
    _swift_task_create(uVar7,puVar4,PTR___sytN_100050c48 + 8,&UNK_100041cd8,puVar3);
  }
  else {
    __sSS11utf8CStrings15ContiguousArrayVys4Int8VGvg(param_1,param_2);
    _swift_bridgeObjectRelease(param_2);
    puVar3 = &UNK_100053610;
    _swift_allocObject(&UNK_100053610,0x20,7);
    *(undefined8 *)(puVar3 + 0x10) = param_4;
    *(ulong *)(puVar3 + 0x18) = param_5;
    _swift_retain(param_5);
    if (lVar8 == 0 && lVar6 == 0) {
      puStack_b0 = (undefined8 *)0x0;
    }
    else {
      uStack_a0 = 0;
      uStack_98 = 0;
      puStack_b0 = &uStack_a0;
      lStack_90 = lVar6;
      lStack_88 = lVar8;
    }
    uStack_b8 = 7;
    lStack_a8 = param_1 + 0x20;
    _swift_task_create(uVar7,&uStack_b8,PTR___sytN_100050c48 + 8,&UNK_100041ce0,puVar3);
    _swift_release(param_1);
    FUN_100033948(param_3,0x100060938,&UNK_100041cb0);
    _swift_release(param_5);
  }
  return;
}



/* Entry: 10003352c; end: 1000335a7; -[_TtC33SnapchatCaptureExtensionUtilities13MainAppRouter init] */

void FUN_10003352c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SnapchatCaptureExtensionUtilities.MainAppRouter",0x2f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100033558);
  (*pcVar1)();
}



/* Entry: 1000335a8; end: 1000335b7; -[_TtC33SnapchatCaptureExtensionUtilities13MainAppRouter .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000335a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010003b584. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_100050d48)(*(undefined8 *)(param_1 + _DAT_1000608f8));
  return;
}



/* Entry: 1000335b8; end: 100033637;  */

void FUN_1000335b8(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  ulong uVar4;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar3 = *(long *)(lVar1 + -8);
  uVar4 = (ulong)*(byte *)(lVar3 + 0x50) + 0x20 &
          ((ulong)*(byte *)(lVar3 + 0x50) ^ 0xffffffffffffffff);
  lVar2 = *(long *)(lVar3 + 0x40);
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  (**(code **)(lVar3 + 8))(unaff_x20 + uVar4,lVar1);
  _swift_release(*(undefined8 *)(unaff_x20 + (lVar2 + uVar4 + 7 & 0xfffffffffffffff8)));
                    /* WARNING: Could not recover jumptable at 0x00010003b488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_100050c98)();
  return;
}



/* Entry: 100033638; end: 1000336d7;  */

void FUN_100033638(void)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long unaff_x20;
  long unaff_x22;
  
  lVar3 = 0;
  __s10Foundation3URLVMa();
  uVar5 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  uVar5 = uVar5 + 0x20 & (uVar5 ^ 0xffffffffffffffff);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar3 = *(long *)(unaff_x20 +
                   (*(long *)(*(long *)(lVar3 + -8) + 0x40) + uVar5 + 7 & 0xffffffffffffff8));
  plVar4 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1000336d8;
  plVar4[9] = unaff_x20 + uVar5;
  plVar4[10] = lVar3;
  lVar3 = 0x100060940;
  FUN_100011744(0x100060940,&UNK_100041ce8,uVar1);
  uVar5 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[0xb] = uVar5;
  lVar3 = 0;
  __s19LockedCameraCapture0abC7SessionC22ApplicationLaunchErrorOMa();
  plVar4[0xc] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar4[0xd] = lVar3;
  lVar3 = *(long *)(lVar3 + 0x40);
  plVar4[0xe] = lVar3;
  uVar5 = lVar3 + 0xf;
  uVar2 = uVar5 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[0xf] = uVar2;
  uVar5 = uVar5 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[0x10] = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010003b5e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_100050e40)(FUN_100032eec,0,0);
  return;
}



/* Entry: 1000336d8; end: 100033713;  */

void FUN_1000336d8(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000100033710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 100033714; end: 100033763;  */

undefined8 FUN_100033714(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x100060938;
  FUN_100011744(0x100060938,&UNK_100041cb0);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 100033764; end: 1000337c7;  */

void FUN_100033764(undefined8 param_1,int *param_2)

{
  int iVar1;
  long *plVar2;
  long unaff_x22;
  
  iVar1 = *param_2;
  plVar2 = (long *)(ulong)(uint)param_2[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1000337c8;
                    /* WARNING: Could not recover jumptable at 0x0001000337c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_2))(plVar2,param_1);
  return;
}



/* Entry: 1000337c8; end: 10003382b;  */

void FUN_1000337c8(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000100033804. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10003382c; end: 10003389b;  */

void FUN_10003382c(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  piVar2 = *(int **)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar5 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x100033a50;
  iVar1 = *piVar2;
  plVar4 = (long *)(ulong)(uint)piVar2[1];
  _swift_task_alloc(plVar4,(code *)((long)iVar1 + (long)piVar2),uVar3);
  plVar5[2] = (long)plVar4;
  *plVar4 = (long)plVar5;
  plVar4[1] = (long)FUN_1000337c8;
                    /* WARNING: Could not recover jumptable at 0x0001000337c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))(plVar4,param_1);
  return;
}



/* Entry: 10003389c; end: 10003390b;  */

void FUN_10003389c(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  piVar2 = *(int **)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar5 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_10003390c;
  iVar1 = *piVar2;
  plVar4 = (long *)(ulong)(uint)piVar2[1];
  _swift_task_alloc(plVar4,(code *)((long)iVar1 + (long)piVar2),uVar3);
  plVar5[2] = (long)plVar4;
  *plVar4 = (long)plVar5;
  plVar4[1] = (long)FUN_1000337c8;
                    /* WARNING: Could not recover jumptable at 0x0001000337c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))(plVar4,param_1);
  return;
}



/* Entry: 10003390c; end: 100033947;  */

void FUN_10003390c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000100033944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 100033948; end: 100033987;  */

undefined8 FUN_100033948(undefined8 param_1,long param_2,undefined8 param_3)

{
  FUN_100011744(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 100033988; end: 1000339f3;  */

void FUN_100033988(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  __s19LockedCameraCapture0abC7SessionC22ApplicationLaunchErrorOMa();
  lVar2 = *(long *)(lVar1 + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
  _objc_release_x8(*(undefined8 *)(unaff_x20 + 0x10));
  (**(code **)(lVar2 + 8))(unaff_x20 + (uVar3 + 0x18 & (uVar3 ^ 0xffffffffffffffff)),lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010003b488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_100050c98)();
  return;
}


