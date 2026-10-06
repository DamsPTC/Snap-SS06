/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10001e678; end: 10001e737;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10001e678(uint param_1)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  
  FUN_10001eac8();
  _objc_msgSendSuper2(&stack0xffffffffffffffc0,PTR_s_viewDidDisappear__100050be0,param_1 & 1);
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_100052068);
  *(undefined8 *)(unaff_x20 + _DAT_100052068) = 0;
  _swift_release(uVar3);
  lVar1 = _DAT_100052060;
  lVar4 = *(long *)(unaff_x20 + _DAT_100052060);
  if (lVar4 != 0) {
    _objc_retain();
    func_0x00010003b660();
    lVar5 = lVar4;
    func_0x00010003b620();
    _objc_retainAutoreleasedReturnValue();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10001e738);
      (*pcVar2)();
    }
    func_0x00010003b340();
    _objc_release(lVar5);
    func_0x00010003b320(lVar4);
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined8 *)(unaff_x20 + lVar1) = 0;
    _objc_release(uVar3);
  }
  return;
}



/* Entry: 10001e738; end: 10001e767; -[KeyboardHomeViewController viewDidDisappear:] */

void FUN_10001e738(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain();
  FUN_10001e678(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010003ac14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_10004cc58)(param_1);
  return;
}



/* Entry: 10001e768; end: 10001e973;  */

double FUN_10001e768(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  double dVar4;
  double dVar5;
  undefined *unaff_x20;
  
  puVar2 = unaff_x20;
  func_0x00010003b620();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10001e970);
    (*pcVar1)();
  }
  puVar3 = puVar2;
  func_0x00010003b680();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  if (puVar3 != (undefined *)0x0) {
    puVar2 = puVar3;
    func_0x00010003b6a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    if (puVar2 != (undefined *)0x0) {
      puVar3 = puVar2;
      func_0x00010003b3a0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      goto LAB_10001e848;
    }
  }
  puVar2 = unaff_x20;
  func_0x00010003b620();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10001e974);
    (*pcVar1)();
  }
  puVar3 = puVar2;
  func_0x00010003b680();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  if (puVar3 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UIScreen_100051048;
    _objc_opt_self(PTR__OBJC_CLASS___UIScreen_100051048);
    func_0x00010003b2e0();
    _objc_retainAutoreleasedReturnValue();
  }
LAB_10001e848:
  func_0x00010003b000(puVar3);
  _objc_release(puVar3);
  dVar4 = param_1;
  _CGRectGetWidth(param_1,param_2,param_3,param_4);
  _CGRectGetHeight(param_1,param_2,param_3,param_4);
  func_0x00010003b5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = unaff_x20;
  func_0x00010003b600();
  _objc_release(unaff_x20);
  if (puVar2 == (undefined *)0x1) {
    if (dVar4 <= param_1) {
      dVar5 = 300.0;
      if (300.0 < dVar4 * 0.32) {
        dVar5 = dVar4 * 0.32;
      }
      dVar4 = 400.0;
    }
    else {
      dVar5 = 300.0;
      if (300.0 < dVar4 * 0.28) {
        dVar5 = dVar4 * 0.28;
      }
      dVar4 = 380.0;
    }
    if (dVar4 < dVar5) {
      dVar5 = dVar4;
    }
  }
  else {
    dVar5 = 170.0;
    if (dVar4 <= param_1) {
      dVar5 = 220.0;
    }
  }
  return dVar5;
}



/* Entry: 10001e974; end: 10001ea4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10001e974(double param_1)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  FUN_10001e768();
  lVar1 = _DAT_100052058;
  if (*(long *)(unaff_x20 + _DAT_100052058) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010003b410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_10004cc40)
              (*(long *)(unaff_x20 + _DAT_100052058),PTR_s_setConstant__100050d48);
    return;
  }
  lVar3 = unaff_x20;
  func_0x00010003b620();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 != 0) {
    lVar4 = lVar3;
    func_0x00010003b140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    lVar3 = lVar4;
    func_0x00010003b060(param_1 + 110.0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    func_0x00010003b480(0x447a0000,lVar3);
    func_0x00010003b3c0(lVar3);
    uVar5 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010003ac14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_10004cc58)(uVar5);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10001ea50);
  (*pcVar2)();
}



/* Entry: 10001ea50; end: 10001ea7f;  */

void FUN_10001ea50(void)

{
  FUN_10001eac8();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_100050c10);
  return;
}



/* Entry: 10001ea80; end: 10001eac7; -[KeyboardHomeViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10001ea80(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_100052058));
  _objc_release(*(undefined8 *)(param_1 + _DAT_100052060));
                    /* WARNING: Could not recover jumptable at 0x00010003ae48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_10004cf38)(*(undefined8 *)(param_1 + _DAT_100052068));
  return;
}



/* Entry: 10001eac8; end: 10001eb0b;  */

void FUN_10001eac8(void)

{
  _objc_opt_self(&PTR_PTR_1000511a0);
  return;
}



/* Entry: 10001eb0c; end: 10001eb37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10001eb0c(double param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long unaff_x20;
  double dStack_38;
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(lVar5 + _DAT_100052058);
  if (lVar2 != 0) {
    _objc_retain();
    FUN_10001e768();
    param_1 = param_1 + 110.0;
    func_0x00010003b400(lVar2);
    _objc_release(lVar2);
  }
  lVar2 = lVar5;
  func_0x00010003b620();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    func_0x00010003b2a0();
    _objc_release(lVar2);
    lVar2 = *(long *)(lVar5 + _DAT_100052068);
    if (lVar2 != 0) {
      _swift_retain(lVar2);
      FUN_10001e768();
      puVar3 = &UNK_10003c940;
      _swift_getKeyPath(&UNK_10003c940);
      puVar4 = &UNK_10003c968;
      _swift_getKeyPath(&UNK_10003c968);
      dStack_38 = param_1;
      __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluisZ
                (&dStack_38,lVar2,puVar3,puVar4);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10001e410);
  (*pcVar1)();
}



/* Entry: 10001eb38; end: 10001eb5b;  */

void FUN_10001eb38(void)

{
  long unaff_x20;
  
  _swift_unknownObjectWeakDestroy(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010003ad28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_10004ce78)();
  return;
}



/* Entry: 10001eb5c; end: 10001eb6b;  */

void FUN_10001eb5c(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 != 0) {
    func_0x00010003afa0();
    _objc_release(lVar1);
  }
  return;
}



/* Entry: 10001eb6c; end: 10001ec4b;  */

void FUN_10001eb6c(void)

{
  undefined *puVar1;
  
  if (puRam0000000100052098 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10003d184;
  _swift_getWitnessTable(&UNK_10003d184,&UNK_10004e550);
  puRam0000000100052098 = puVar1;
  return;
}



/* Entry: 10001ec4c; end: 10001ec9b;  */

undefined1  [16] FUN_10001ec4c(void)

{
  return ZEXT816(0x10004e090);
}



/* Entry: 10001ec9c; end: 10001ee6b;  */

undefined8 FUN_10001ec9c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uStack_38;
  
  puVar1 = &UNK_10003cc98;
  _swift_getKeyPath(&UNK_10003cc98);
  puVar2 = &UNK_10003ccc0;
  _swift_getKeyPath(&UNK_10003ccc0);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluigZ
            (&uStack_38);
  _swift_release(puVar1);
  _swift_release(puVar2);
  return uStack_38;
}



/* Entry: 10001ee6c; end: 10001ee7f;  */

undefined1 FUN_10001ee6c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 uStack_31;
  
  puVar1 = &UNK_10003cb90;
  puVar2 = &UNK_10003cbb8;
  _swift_getKeyPath(&UNK_10003cb90);
  _swift_getKeyPath(&UNK_10003cbb8);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluigZ
            (&uStack_31);
  _swift_release(puVar1);
  _swift_release(puVar2);
  return uStack_31;
}



/* Entry: 10001ee80; end: 10001eeef;  */

undefined1  [16] FUN_10001ee80(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [16];
  
  puVar1 = &UNK_10003cdc0;
  _swift_getKeyPath(&UNK_10003cdc0);
  puVar2 = &UNK_10003cde8;
  _swift_getKeyPath(&UNK_10003cde8);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluigZ
            (auStack_40);
  _swift_release(puVar1);
  _swift_release(puVar2);
  return auStack_40;
}



/* Entry: 10001eef0; end: 10001ef03;  */

undefined1 FUN_10001eef0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 uStack_31;
  
  puVar1 = &UNK_10003cce0;
  puVar2 = &UNK_10003cd08;
  _swift_getKeyPath(&UNK_10003cce0);
  _swift_getKeyPath(&UNK_10003cd08);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluigZ
            (&uStack_31);
  _swift_release(puVar1);
  _swift_release(puVar2);
  return uStack_31;
}



/* Entry: 10001ef04; end: 10001efe3;  */

undefined1 FUN_10001ef04(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 uStack_31;
  
  puVar1 = &UNK_10003cb48;
  _swift_getKeyPath(&UNK_10003cb48);
  puVar2 = &UNK_10003cb70;
  _swift_getKeyPath(&UNK_10003cb70);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluigZ
            (&uStack_31);
  _swift_release(puVar1);
  _swift_release(puVar2);
  return uStack_31;
}



/* Entry: 10001efe4; end: 10001eff7;  */

undefined1 FUN_10001efe4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 uStack_31;
  
  puVar1 = &UNK_10003cd30;
  puVar2 = &UNK_10003cd58;
  _swift_getKeyPath(&UNK_10003cd30);
  _swift_getKeyPath(&UNK_10003cd58);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluigZ
            (&uStack_31);
  _swift_release(puVar1);
  _swift_release(puVar2);
  return uStack_31;
}



/* Entry: 10001eff8; end: 10001f0c7;  */

undefined1 FUN_10001eff8(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_31;
  
  _swift_getKeyPath();
  _swift_getKeyPath(param_2);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluigZ
            (&uStack_31);
  _swift_release(param_1);
  _swift_release(param_2);
  return uStack_31;
}



/* Entry: 10001f0c8; end: 10001f13f;  */

void FUN_10001f0c8(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_48;
  
  uVar4 = *param_1;
  uVar3 = *param_2;
  puVar1 = &UNK_10003cd78;
  _swift_getKeyPath(&UNK_10003cd78);
  puVar2 = &UNK_10003cda0;
  _swift_getKeyPath(&UNK_10003cda0);
  uStack_48 = uVar4;
  _swift_retain(uVar3);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluisZ
            (&uStack_48,uVar3,puVar1,puVar2);
  return;
}



/* Entry: 10001f140; end: 100020393;  */

/* WARNING: Removing unreachable block (ram,0x00010001f784) */
/* WARNING: Removing unreachable block (ram,0x00010001f9e8) */
/* WARNING: Removing unreachable block (ram,0x00010001f7c4) */
/* WARNING: Removing unreachable block (ram,0x00010001faa4) */
/* WARNING: Removing unreachable block (ram,0x00010001f7d8) */
/* WARNING: Removing unreachable block (ram,0x00010001faf8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10001f140(undefined *param_1,uint param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  long lVar9;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long unaff_x20;
  code *pcVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  code *pcVar17;
  long lVar18;
  long alStack_1d0 [2];
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  undefined4 uStack_154;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  uint uStack_134;
  byte abStack_120 [64];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_c0;
  long lStack_b8;
  
  lVar11 = 0x100052370;
  uStack_154 = param_3;
  uStack_150 = param_4;
  uStack_148 = param_5;
  uStack_140 = param_6;
  uStack_134 = param_2;
  FUN_100010860(0x100052370,&UNK_10003cec8);
  lStack_168 = *(long *)(lVar11 + -8);
  lStack_160 = lVar11;
  (*(code *)PTR____chkstk_darwin_10004c8a8)
            (*(long *)(lStack_168 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = 0x100051518;
  lStack_170 = (long)&lStack_1c0 - extraout_x8;
  FUN_100010860(0x100051518,&UNK_10003bfc0);
  lStack_180 = *(long *)(lVar11 + -8);
  lStack_178 = lVar11;
  (*(code *)PTR____chkstk_darwin_10004c8a8)
            (*(long *)(lStack_180 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = ((long)&lStack_1c0 - extraout_x8) - extraout_x8_00;
  lVar11 = 0x100052368;
  lStack_188 = lVar9;
  FUN_100010860(0x100052368,&UNK_10003ceb8);
  lStack_198 = *(long *)(lVar11 + -8);
  lStack_190 = lVar11;
  (*(code *)PTR____chkstk_darwin_10004c8a8)
            (*(long *)(lStack_198 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = lVar9 - extraout_x8_01;
  lVar11 = 0x100052360;
  FUN_100010860(0x100052360,&UNK_10003ceb0);
  lStack_1a8 = *(long *)(lVar11 + -8);
  lStack_1a0 = lVar11;
  (*(code *)PTR____chkstk_darwin_10004c8a8)
            (*(long *)(lStack_1a8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = 0x100052358;
  lStack_1b0 = lVar9 - extraout_x8_02;
  FUN_100010860(0x100052358,&UNK_10003cea8);
  lStack_1c0 = *(long *)(lVar11 + -8);
  lStack_1b8 = lVar11;
  (*(code *)PTR____chkstk_darwin_10004c8a8)
            (*(long *)(lStack_1c0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar16 = (lVar9 - extraout_x8_02) - extraout_x8_03;
  lVar11 = 0x100052350;
  FUN_100010860(0x100052350,&UNK_10003cea0);
  lVar13 = *(long *)(lVar11 + -8);
  (*(code *)PTR____chkstk_darwin_10004c8a8)(*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar18 = lVar16 - extraout_x8_04;
  lVar5 = 0x100052348;
  FUN_100010860(0x100052348,&UNK_10003ce98);
  lVar14 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_10004c8a8)(*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = _DAT_1000520c0;
  lVar15 = lVar18 - extraout_x8_05;
  puStack_e0 = PTR___swiftEmptyArrayStorage_10004ce00;
  uVar4 = 0x100052180;
  FUN_100010860(0x100052180,&UNK_10003ca28);
  __s7Combine9PublishedV12initialValueACyxGx_tcfC(lVar15,&puStack_e0,uVar4);
  (**(code **)(lVar14 + 0x20))(unaff_x20 + lVar2,lVar15,lVar5);
  lVar5 = _DAT_1000520c8;
  __s23ExtensionsStickerPicker0B5FeedsVACycfC(&puStack_e0);
  __s7Combine9PublishedV12initialValueACyxGx_tcfC
            (lVar18,&puStack_e0,PTR___s23ExtensionsStickerPicker0B5FeedsVN_10004ca38);
  (**(code **)(lVar13 + 0x20))(unaff_x20 + lVar5,lVar18,lVar11);
  lVar11 = _DAT_1000520d0;
  puStack_e0 = (undefined *)CONCAT71(puStack_e0._1_7_,3);
  __s7Combine9PublishedV12initialValueACyxGx_tcfC
            (lVar16,&puStack_e0,PTR___s23ExtensionsStickerPicker10EntryStateON_10004ca68);
  (**(code **)(lStack_1c0 + 0x20))(unaff_x20 + lVar11,lVar16,lStack_1b8);
  lVar11 = _DAT_1000520d8;
  puStack_e0 = (undefined *)0x0;
  uStack_d8 = 0;
  uVar4 = 0x1000521a0;
  FUN_100010860(0x1000521a0,&UNK_10003ca30);
  lVar5 = lStack_1b0;
  __s7Combine9PublishedV12initialValueACyxGx_tcfC(lStack_1b0,&puStack_e0,uVar4);
  (**(code **)(lStack_1a8 + 0x20))(unaff_x20 + lVar11,lVar5,lStack_1a0);
  lVar11 = _DAT_1000520e0;
  puVar7 = PTR___sSbN_10004ccf0;
  puStack_e0 = (undefined *)((ulong)puStack_e0 & 0xffffffffffffff00);
  __s7Combine9PublishedV12initialValueACyxGx_tcfC(lVar9,&puStack_e0,PTR___sSbN_10004ccf0);
  lVar5 = lStack_190;
  pcVar10 = *(code **)(lStack_198 + 0x20);
  (*pcVar10)(unaff_x20 + lVar11,lVar9,lStack_190);
  lVar2 = lStack_188;
  lVar11 = _DAT_1000520e8;
  puStack_e0 = (undefined *)0x0;
  uStack_d8 = 0xe000000000000000;
  __s7Combine9PublishedV12initialValueACyxGx_tcfC(lStack_188,&puStack_e0,PTR___sSSN_10004ccd0);
  lVar13 = lStack_178;
  pcVar17 = *(code **)(lStack_180 + 0x20);
  (*pcVar17)(unaff_x20 + lVar11,lVar2,lStack_178);
  lVar11 = _DAT_1000520f0;
  puStack_e0 = (undefined *)((ulong)puStack_e0 & 0xffffffffffffff00);
  __s7Combine9PublishedV12initialValueACyxGx_tcfC(lVar9,&puStack_e0,puVar7);
  (*pcVar10)(unaff_x20 + lVar11,lVar9,lVar5);
  lVar11 = _DAT_1000520f8;
  puStack_e0 = (undefined *)((ulong)puStack_e0 & 0xffffffffffffff00);
  uVar4 = 0x1000521b8;
  FUN_100010860(0x1000521b8,&UNK_10003ca38);
  lVar14 = lStack_170;
  __s7Combine9PublishedV12initialValueACyxGx_tcfC(lStack_170,&puStack_e0,uVar4);
  (**(code **)(lStack_168 + 0x20))(unaff_x20 + lVar11,lVar14,lStack_160);
  lVar11 = _DAT_100052108;
  puStack_e0 = (undefined *)((ulong)puStack_e0 & 0xffffffffffffff00);
  __s7Combine9PublishedV12initialValueACyxGx_tcfC(lVar9,&puStack_e0,puVar7);
  (*pcVar10)(unaff_x20 + lVar11,lVar9,lVar5);
  *(undefined8 *)(unaff_x20 + _DAT_100052110) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_100052118) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_100052120) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_100054330) = 0;
  lVar11 = unaff_x20 + _DAT_100054338;
  *(undefined **)(lVar11 + 0x18) = &UNK_10004e090;
  *(undefined ***)(lVar11 + 0x20) = &PTR_DAT_10004e0a0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_100052128);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_100052130) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_100052138) = 0;
  puStack_e0 = param_1;
  __s7Combine9PublishedV12initialValueACyxGx_tcfC
            (unaff_x20 + _DAT_100052100,&puStack_e0,PTR___s12CoreGraphics7CGFloatVN_10004d128);
  uVar4 = uStack_148;
  *(char *)(unaff_x20 + _DAT_100054340) = (char)uStack_154;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_100054348);
  *puVar1 = uStack_150;
  puVar1[1] = uStack_148;
  lVar5 = 0;
  FUN_1000134ec();
  _swift_allocObject();
  lVar11 = _DAT_100051510;
  puStack_e0 = (undefined *)0x0;
  uStack_d8 = 0xe000000000000000;
  _swift_retain(uVar4);
  uVar3 = uStack_140;
  _swift_unknownObjectRetain(uStack_140);
  __s7Combine9PublishedV12initialValueACyxGx_tcfC(lVar2,&puStack_e0,PTR___sSSN_10004ccd0);
  (*pcVar17)(lVar5 + lVar11,lVar2,lVar13);
  *(undefined8 *)(lVar5 + 0x10) = uVar3;
  _swift_unknownObjectRetain(uVar3);
  func_0x0001000131a8();
  _swift_unknownObjectRelease(uVar3);
  *(long *)(unaff_x20 + _DAT_100054350) = lVar5;
  if ((uStack_134 & 1) == 0) {
    _swift_getKeyPath(&UNK_10003ce50);
    _swift_getKeyPath(&UNK_10003ce78);
    puStack_e0 = (undefined *)CONCAT71(puStack_e0._1_7_,2);
    _swift_retain();
    __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluisZ
              (&puStack_e0);
  }
  else {
    __s23ExtensionsStickerPicker23AppGroupSessionProviderV05fetchF4DataAA0defI0VyKF(&puStack_e0,1);
    func_0x00010001fd4c(&puStack_e0);
    lVar11 = *(long *)(unaff_x20 + _DAT_100052138);
    if (lVar11 != 0) {
      _swift_retain(lVar11);
      __s23ExtensionsStickerPicker28StickersBlizzardEventTrackerC016logExtensionOpenF0yyF();
      _swift_release(lVar11);
    }
    if (lStack_b8 == 0) {
      FUN_100026994(&puStack_e0);
      _swift_getKeyPath(&UNK_10003ce50);
      _swift_getKeyPath(&UNK_10003ce78);
      abStack_120[0] = 1;
      _swift_retain();
      __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluisZ
                (abStack_120);
      lVar11 = *(long *)(unaff_x20 + _DAT_100052130);
      if (lVar11 != 0) {
        puVar7 = &UNK_10003ce50;
        _swift_getKeyPath(&UNK_10003ce50);
        puVar8 = &UNK_10003ce78;
        _swift_getKeyPath(&UNK_10003ce78);
        _swift_retain(lVar11);
        __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluigZ
                  (abStack_120);
        _swift_release(puVar7);
        _swift_release(puVar8);
        if (abStack_120[0] < 2) {
          if (abStack_120[0] == 0) {
            uVar6 = 0x754f646567676f6c;
            uVar12 = 0xe900000000000074;
          }
          else {
            uVar6 = 0x7261746176416f6e;
            uVar12 = 0xeb00000000746553;
          }
        }
        else if (abStack_120[0] == 2) {
          uVar6 = 0x63416c6c75466f6e;
          uVar12 = 0xec00000073736563;
        }
        else {
          uVar6 = 0x69746e6573657270;
          uVar12 = 0xea0000000000676e;
        }
        __s23ExtensionsStickerPicker22StickersGrapheneLoggerC20logExtensionLaunched4withySS_tF
                  (uVar6,uVar12);
        _swift_release(lVar11);
        _swift_bridgeObjectRelease(uVar12);
      }
    }
    else {
      _swift_bridgeObjectRetain(lStack_b8);
      FUN_100026994(&puStack_e0);
      puVar1 = (undefined8 *)(unaff_x20 + _DAT_100052128);
      uVar6 = puVar1[1];
      *puVar1 = uStack_c0;
      puVar1[1] = lStack_b8;
      _swift_bridgeObjectRelease(uVar6);
      lVar11 = *(long *)(unaff_x20 + _DAT_100052130);
      if (lVar11 != 0) {
        puVar7 = &UNK_10003ce50;
        _swift_getKeyPath(&UNK_10003ce50);
        puVar8 = &UNK_10003ce78;
        _swift_getKeyPath(&UNK_10003ce78);
        _swift_retain(lVar11);
        __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluigZ
                  (abStack_120);
        _swift_release(puVar7);
        _swift_release(puVar8);
        if (abStack_120[0] < 2) {
          if (abStack_120[0] == 0) {
            uVar6 = 0x754f646567676f6c;
            uVar12 = 0xe900000000000074;
          }
          else {
            uVar6 = 0x7261746176416f6e;
            uVar12 = 0xeb00000000746553;
          }
        }
        else if (abStack_120[0] == 2) {
          uVar6 = 0x63416c6c75466f6e;
          uVar12 = 0xec00000073736563;
        }
        else {
          uVar6 = 0x69746e6573657270;
          uVar12 = 0xea0000000000676e;
        }
        __s23ExtensionsStickerPicker22StickersGrapheneLoggerC20logExtensionLaunched4withySS_tF
                  (uVar6,uVar12);
        _swift_release(lVar11);
        _swift_bridgeObjectRelease(uVar12);
      }
      puVar7 = &UNK_10004e228;
      _swift_allocObject(&UNK_10004e228,0x18,7);
      _swift_weakInit(puVar7 + 0x10);
      *(undefined **)(lVar15 + -0x10) = PTR___sytN_10004cdf0 + 8;
      uVar6 = 2;
      __s15SnapConcurrency12AttachedTask_8priority19asyncSpanNameSuffix9operationScTyxs5NeverOG0A11Attribution010AttributedD0O_AA0aD8PriorityOSgSSSgxyYaYbcts8SendableRzlF
                (2,0,0x10,4,0,0,&UNK_10003cee0,puVar7);
      _swift_release(puVar7);
      _swift_release(uVar6);
    }
  }
  _swift_release(uVar4);
  _swift_unknownObjectRelease(uVar3);
  return;
}



/* Entry: 100020394; end: 100020423;  */

void FUN_100020394(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_2;
  uVar2 = 0;
  __sScMMa();
  puVar1 = PTR___sScMMa_10004d028;
  uVar3 = uVar2;
  __sScM6sharedScMvgZ();
  *(undefined8 *)(unaff_x22 + 0x30) = uVar3;
  uVar3 = 0x100051400;
  FUN_1000265c0(0x100051400,puVar1,PTR___sScMScAsMc_10004d030);
  __sScA15unownedExecutorScevgTj();
  *(undefined8 *)(unaff_x22 + 0x38) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010003aec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_10004d078)(FUN_100020424,uVar2,uVar3);
  return;
}



/* Entry: 100020424; end: 100020533;  */

void FUN_100020424(void)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x28);
  _swift_beginAccess(lVar4 + 0x10,unaff_x22 + 0x10,0,0);
  lVar4 = lVar4 + 0x10;
  _swift_weakLoadStrong();
  *(long *)(unaff_x22 + 0x48) = lVar4;
  if (lVar4 != 0) {
    plVar2 = (long *)0xe0;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x50) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = 0x1000204b4;
    plVar2[0x16] = lVar4;
    *(undefined1 *)((long)plVar2 + 0xda) = 0;
    lVar3 = 0;
    __sScMMa();
    puVar1 = PTR___sScMMa_10004d028;
    lVar4 = lVar3;
    __sScM6sharedScMvgZ();
    plVar2[0x17] = lVar4;
    lVar4 = 0x100051400;
    FUN_1000265c0(0x100051400,puVar1,PTR___sScMScAsMc_10004d030);
    __sScA15unownedExecutorScevgTj();
    plVar2[0x18] = lVar3;
    plVar2[0x19] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010003aec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_10004d078)(FUN_1000205c8,lVar3,lVar4);
    return;
  }
  _swift_release(*(undefined8 *)(unaff_x22 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x0001000204b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100020534; end: 1000205c7;  */

void FUN_100020534(undefined1 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xb0) = unaff_x20;
  *(undefined1 *)(unaff_x22 + 0xda) = param_1;
  uVar2 = 0;
  __sScMMa();
  puVar1 = PTR___sScMMa_10004d028;
  uVar3 = uVar2;
  __sScM6sharedScMvgZ();
  *(undefined8 *)(unaff_x22 + 0xb8) = uVar3;
  uVar3 = 0x100051400;
  FUN_1000265c0(0x100051400,puVar1,PTR___sScMScAsMc_10004d030);
  __sScA15unownedExecutorScevgTj();
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar2;
  *(undefined8 *)(unaff_x22 + 200) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010003aec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_10004d078)(FUN_1000205c8,uVar2,uVar3);
  return;
}



/* Entry: 1000205c8; end: 100020977;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000205c8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  code *pcVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  byte *pbVar11;
  long unaff_x22;
  undefined8 uVar12;
  
  uVar9 = *(undefined8 *)(unaff_x22 + 0xb0);
  puVar4 = &UNK_10003cc98;
  _swift_getKeyPath(&UNK_10003cc98);
  puVar5 = &UNK_10003ccc0;
  _swift_getKeyPath(&UNK_10003ccc0);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluigZ
            (unaff_x22 + 0xa0,uVar9,puVar4,puVar5);
  _swift_release(puVar5);
  _swift_release(puVar4);
  lVar8 = *(long *)(*(long *)(unaff_x22 + 0xa0) + 0x10);
  _swift_bridgeObjectRelease();
  lVar10 = *(long *)(unaff_x22 + 0xb0);
  if (lVar8 != 0) {
    lVar8 = *(long *)(lVar10 + _DAT_100052138);
    if (lVar8 != 0) {
      _swift_retain(lVar8);
      __s23ExtensionsStickerPicker28StickersBlizzardEventTrackerC022logExtensionTabSessionF0yyF();
      _swift_release(lVar8);
      lVar10 = *(long *)(unaff_x22 + 0xb0);
    }
  }
  bVar3 = *(byte *)(unaff_x22 + 0xda);
  puVar4 = &UNK_10003cc08;
  _swift_getKeyPath(&UNK_10003cc08);
  puVar5 = &UNK_10003cc30;
  _swift_getKeyPath(&UNK_10003cc30);
  *(undefined8 *)(unaff_x22 + 0x80) = 0;
  *(undefined8 *)(unaff_x22 + 0x88) = 0;
  _swift_retain(lVar10);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluisZ
            (unaff_x22 + 0x80,lVar10,puVar4,puVar5);
  puVar4 = &UNK_10003cdc0;
  _swift_getKeyPath(&UNK_10003cdc0);
  puVar5 = &UNK_10003cde8;
  _swift_getKeyPath(&UNK_10003cde8);
  *(undefined8 *)(unaff_x22 + 0x90) = 0;
  *(undefined8 *)(unaff_x22 + 0x98) = 0xe000000000000000;
  _swift_retain(lVar10);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluisZ
            (unaff_x22 + 0x90,lVar10,puVar4,puVar5);
  if ((bVar3 & 1) == 0) {
    uVar9 = *(undefined8 *)(unaff_x22 + 0xb0);
    puVar4 = &UNK_10003cb90;
    _swift_getKeyPath(&UNK_10003cb90);
    puVar5 = &UNK_10003cbb8;
    _swift_getKeyPath(&UNK_10003cbb8);
    *(undefined1 *)(unaff_x22 + 0xd8) = 0;
    _swift_retain(uVar9);
    __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluisZ
              (unaff_x22 + 0xd8,uVar9,puVar4,puVar5);
  }
  uVar9 = *(undefined8 *)(unaff_x22 + 0xb0);
  puVar4 = &UNK_10003cc50;
  _swift_getKeyPath(&UNK_10003cc50);
  puVar5 = &UNK_10003cc78;
  _swift_getKeyPath(&UNK_10003cc78);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluigZ
            (unaff_x22 + 0x10,uVar9,puVar4,puVar5);
  _swift_release(puVar5);
  _swift_release(puVar4);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x18);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar10 = *(long *)(unaff_x22 + 0x30);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x10));
  _swift_bridgeObjectRelease(uVar1);
  _swift_bridgeObjectRelease(uVar9);
  _swift_bridgeObjectRelease(uVar2);
  lVar8 = *(long *)(lVar10 + 0x10);
  _swift_bridgeObjectRelease(lVar10);
  if (lVar8 != 0) {
    _swift_release(*(undefined8 *)(unaff_x22 + 0xb8));
    pbVar11 = *(byte **)(unaff_x22 + 0xb0);
    puVar4 = &UNK_10003cc50;
    _swift_getKeyPath(&UNK_10003cc50);
    puVar5 = &UNK_10003cc78;
    _swift_getKeyPath(&UNK_10003cc78);
    __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluigZ
              (unaff_x22 + 0x38,pbVar11,puVar4,puVar5);
    _swift_release(puVar5);
    _swift_release(puVar4);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x40);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x48);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x58);
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x38));
    _swift_bridgeObjectRelease(uVar1);
    _swift_bridgeObjectRelease(uVar9);
    _swift_bridgeObjectRelease(uVar2);
    puVar4 = &UNK_10003cc98;
    _swift_getKeyPath(&UNK_10003cc98);
    puVar5 = &UNK_10003ccc0;
    _swift_getKeyPath(&UNK_10003ccc0);
    *(undefined8 *)(unaff_x22 + 0xa8) = uVar12;
    _swift_retain(pbVar11);
    __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluisZ
              ((undefined8 *)(unaff_x22 + 0xa8),pbVar11,puVar4,puVar5);
    puVar4 = &UNK_10003cb48;
    _swift_getKeyPath(&UNK_10003cb48);
    puVar5 = &UNK_10003cb70;
    _swift_getKeyPath(&UNK_10003cb70);
    *(undefined1 *)(unaff_x22 + 0xd9) = 0;
    _swift_retain(pbVar11);
    __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluisZ
              ((undefined1 *)(unaff_x22 + 0xd9),pbVar11,puVar4,puVar5);
    puVar4 = &UNK_10003cce0;
    _swift_getKeyPath(&UNK_10003cce0);
    puVar5 = &UNK_10003cd08;
    _swift_getKeyPath(&UNK_10003cd08);
    pcVar6 = (code *)(unaff_x22 + 0x60);
    __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluiMZ
              (pcVar6,pbVar11,puVar4,puVar5);
    *pbVar11 = (*pbVar11 ^ 0xff) & 1;
    (*pcVar6)(unaff_x22 + 0x60,0);
    _swift_release(puVar5);
    _swift_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x000100020938. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  plVar7 = (long *)0x130;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xd0) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_100020978;
  plVar7[0x1e] = *(long *)(unaff_x22 + 0xb0);
  lVar10 = 0;
  __sScMMa();
  puVar4 = PTR___sScMMa_10004d028;
  lVar8 = lVar10;
  __sScM6sharedScMvgZ();
  plVar7[0x1f] = lVar8;
  lVar8 = 0x100051400;
  FUN_1000265c0(0x100051400,puVar4,PTR___sScMScAsMc_10004d030);
  __sScA15unownedExecutorScevgTj();
  plVar7[0x20] = lVar10;
  plVar7[0x21] = lVar8;
                    /* WARNING: Could not recover jumptable at 0x00010003aec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_10004d078)(FUN_100020be8,lVar10,lVar8);
  return;
}



/* Entry: 100020978; end: 1000209bb;  */

void FUN_100020978(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0xd0));
                    /* WARNING: Could not recover jumptable at 0x00010003aec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_10004d078)
            (FUN_1000209bc,*(undefined8 *)(lVar1 + 0xc0),*(undefined8 *)(lVar1 + 200));
  return;
}



/* Entry: 1000209bc; end: 100020b57;  */

void FUN_1000209bc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  code *pcVar6;
  byte *pbVar7;
  long unaff_x22;
  undefined8 uVar8;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0xb8));
  pbVar7 = *(byte **)(unaff_x22 + 0xb0);
  puVar4 = &UNK_10003cc50;
  _swift_getKeyPath(&UNK_10003cc50);
  puVar5 = &UNK_10003cc78;
  _swift_getKeyPath(&UNK_10003cc78);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluigZ
            (unaff_x22 + 0x38,pbVar7,puVar4,puVar5);
  _swift_release(puVar5);
  _swift_release(puVar4);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x58);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x38));
  _swift_bridgeObjectRelease(uVar2);
  _swift_bridgeObjectRelease(uVar1);
  _swift_bridgeObjectRelease(uVar3);
  puVar4 = &UNK_10003cc98;
  _swift_getKeyPath(&UNK_10003cc98);
  puVar5 = &UNK_10003ccc0;
  _swift_getKeyPath(&UNK_10003ccc0);
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar8;
  _swift_retain(pbVar7);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluisZ
            ((undefined8 *)(unaff_x22 + 0xa8),pbVar7,puVar4,puVar5);
  puVar4 = &UNK_10003cb48;
  _swift_getKeyPath(&UNK_10003cb48);
  puVar5 = &UNK_10003cb70;
  _swift_getKeyPath(&UNK_10003cb70);
  *(undefined1 *)(unaff_x22 + 0xd9) = 0;
  _swift_retain(pbVar7);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluisZ
            ((undefined1 *)(unaff_x22 + 0xd9),pbVar7,puVar4,puVar5);
  puVar4 = &UNK_10003cce0;
  _swift_getKeyPath(&UNK_10003cce0);
  puVar5 = &UNK_10003cd08;
  _swift_getKeyPath(&UNK_10003cd08);
  pcVar6 = (code *)(unaff_x22 + 0x60);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluiMZ
            (pcVar6,pbVar7,puVar4,puVar5);
  *pbVar7 = (*pbVar7 ^ 0xff) & 1;
  (*pcVar6)(unaff_x22 + 0x60,0);
  _swift_release(puVar5);
  _swift_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x000100020b54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100020b58; end: 100020be7;  */

void FUN_100020b58(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xf0) = unaff_x20;
  uVar2 = 0;
  __sScMMa();
  puVar1 = PTR___sScMMa_10004d028;
  uVar3 = uVar2;
  __sScM6sharedScMvgZ();
  *(undefined8 *)(unaff_x22 + 0xf8) = uVar3;
  uVar3 = 0x100051400;
  FUN_1000265c0(0x100051400,puVar1,PTR___sScMScAsMc_10004d030);
  __sScA15unownedExecutorScevgTj();
  *(undefined8 *)(unaff_x22 + 0x100) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x108) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010003aec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_10004d078)(FUN_100020be8,uVar2,uVar3);
  return;
}



/* Entry: 100020be8; end: 100020c77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100020be8(void)

{
  long *plVar1;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(*(long *)(unaff_x22 + 0xf0) + _DAT_100052118);
  *(long *)(unaff_x22 + 0x110) = lVar2;
  if (lVar2 != 0) {
    plVar1 = (long *)(ulong)*(uint *)(
                                     PTR___s23ExtensionsStickerPicker20StickersFeedsServiceC05fetchE8MetaDataAA0B5ItemsVyYaKFTu_10004caf8
                                     + 4);
    _swift_retain(lVar2);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x118) = plVar1;
    *plVar1 = unaff_x22;
    plVar1[1] = (long)FUN_100020c78;
                    /* WARNING: Could not recover jumptable at 0x00010003a1dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___s23ExtensionsStickerPicker20StickersFeedsServiceC05fetchE8MetaDataAA0B5ItemsVyYaKF_10004caf0
    )(plVar1,unaff_x22 + 0x10);
    return;
  }
  _swift_release(*(undefined8 *)(unaff_x22 + 0xf8));
                    /* WARNING: Could not recover jumptable at 0x000100020c74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100020c78; end: 100020ccf;  */

void FUN_100020c78(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x120) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x118));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100020cd0;
  }
  else {
    pcVar1 = FUN_100020e30;
  }
                    /* WARNING: Could not recover jumptable at 0x00010003aec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_10004d078)
            (pcVar1,*(undefined8 *)(lVar2 + 0x100),*(undefined8 *)(lVar2 + 0x108));
  return;
}



/* Entry: 100020cd0; end: 100020e2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100020cd0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  
  uVar8 = *(undefined8 *)(unaff_x22 + 0x110);
  lVar7 = *(long *)(unaff_x22 + 0xf0);
  _swift_release(*(undefined8 *)(unaff_x22 + 0xf8));
  uVar9 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar6 = *(undefined8 *)(lVar7 + _DAT_100052128);
  uVar1 = ((undefined8 *)(lVar7 + _DAT_100052128))[1];
  _swift_bridgeObjectRetain(uVar1);
  uVar2 = uVar9;
  __s23ExtensionsStickerPicker09ExtensionB9ConverterO03getD8Stickers4from8avatarId13extensionTypeSayAA0dB0VGSaySo14SCCTPEXTCTItemCG_SSSgAA0dL0OtFZ
            (uVar9,uVar6,uVar1,1);
  _swift_bridgeObjectRelease(uVar1);
  *(undefined8 *)(unaff_x22 + 200) = *(undefined8 *)(unaff_x22 + 0x10);
  FUN_1000268e4((undefined8 *)(unaff_x22 + 200),0x100052340,&UNK_10003ce40);
  *(undefined8 *)(unaff_x22 + 0xd0) = *(undefined8 *)(unaff_x22 + 0x18);
  FUN_1000268e4((undefined8 *)(unaff_x22 + 0xd0),0x100052340,&UNK_10003ce40);
  *(undefined8 *)(unaff_x22 + 0xd8) = *(undefined8 *)(unaff_x22 + 0x20);
  FUN_1000268e4((undefined8 *)(unaff_x22 + 0xd8),0x100052340,&UNK_10003ce40);
  *(undefined8 *)(unaff_x22 + 0xe0) = *(undefined8 *)(unaff_x22 + 0x28);
  FUN_1000268e4((undefined8 *)(unaff_x22 + 0xe0),0x100052340,&UNK_10003ce40);
  _swift_bridgeObjectRelease(uVar9);
  puVar3 = &UNK_10003cc50;
  _swift_getKeyPath(&UNK_10003cc50);
  puVar4 = &UNK_10003cc78;
  _swift_getKeyPath(&UNK_10003cc78);
  pcVar5 = (code *)(unaff_x22 + 0x88);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluiMZ
            (pcVar5,lVar7,puVar3,puVar4);
  uVar6 = *(undefined8 *)(lVar7 + 0x20);
  *(undefined8 *)(lVar7 + 0x20) = uVar2;
  _swift_bridgeObjectRelease(uVar6);
  (*pcVar5)(unaff_x22 + 0x88,0);
  _swift_release(puVar4);
  _swift_release(puVar3);
  _swift_release(uVar8);
                    /* WARNING: Could not recover jumptable at 0x000100020e2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100020e30; end: 100021023;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100020e30(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long unaff_x22;
  undefined8 uVar10;
  
  uVar7 = *(undefined8 *)(unaff_x22 + 0x120);
  _swift_release(*(undefined8 *)(unaff_x22 + 0xf8));
  *(undefined8 *)(unaff_x22 + 0xe8) = uVar7;
  _swift_errorRetain(uVar7);
  uVar7 = 0x100052330;
  FUN_100010860(0x100052330,&UNK_10003cc00);
  uVar8 = unaff_x22 + 0x128;
  _swift_dynamicCast(uVar8,(undefined8 *)(unaff_x22 + 0xe8),uVar7,
                     PTR___s23ExtensionsStickerPicker0B8ExtErrorON_10004ca40,0);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x110);
  lVar9 = *(long *)(unaff_x22 + 0xf0);
  if ((uVar8 & 1) == 0) {
    _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0xe8));
    func_0x000100026600(lVar9 + _DAT_100054338,unaff_x22 + 0x38);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x50);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
    lVar2 = unaff_x22 + 0x38;
    FUN_100026644(lVar2,uVar6);
    uVar3 = 0;
    __s23ExtensionsStickerPicker0bC16StringsProvidingPAAE11description3forSSAA0B8ExtErrorO_tF
              (0,uVar6,uVar1,lVar2);
    puVar4 = &UNK_10003cc08;
    _swift_getKeyPath(&UNK_10003cc08);
    puVar5 = &UNK_10003cc30;
    _swift_getKeyPath(&UNK_10003cc30);
    *(undefined8 *)(unaff_x22 + 0xa8) = uVar3;
    *(undefined8 *)(unaff_x22 + 0xb0) = uVar6;
    _swift_retain(lVar9);
    __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluisZ
              ((undefined8 *)(unaff_x22 + 0xa8),lVar9,puVar4,puVar5);
    _swift_release(uVar7);
    _swift_errorRelease(uVar10);
    func_0x000100026670(unaff_x22 + 0x38);
  }
  else {
    _swift_errorRelease(uVar10);
    uVar8 = (ulong)*(byte *)(unaff_x22 + 0x128);
    func_0x000100026600(lVar9 + _DAT_100054338,unaff_x22 + 0x60);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x78);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x80);
    lVar2 = unaff_x22 + 0x60;
    FUN_100026644(lVar2,uVar10);
    __s23ExtensionsStickerPicker0bC16StringsProvidingPAAE11description3forSSAA0B8ExtErrorO_tF
              (uVar8,uVar10,uVar6,lVar2);
    puVar4 = &UNK_10003cc08;
    _swift_getKeyPath(&UNK_10003cc08);
    puVar5 = &UNK_10003cc30;
    _swift_getKeyPath(&UNK_10003cc30);
    *(ulong *)(unaff_x22 + 0xb8) = uVar8;
    *(undefined8 *)(unaff_x22 + 0xc0) = uVar10;
    _swift_retain(lVar9);
    __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluisZ
              ((ulong *)(unaff_x22 + 0xb8),lVar9,puVar4,puVar5);
    _swift_release(uVar7);
    func_0x000100026670(unaff_x22 + 0x60);
    _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0xe8));
  }
                    /* WARNING: Could not recover jumptable at 0x000100021020. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100021024; end: 1000210b7;  */

void FUN_100021024(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xd8) = param_2;
  *(undefined8 *)(unaff_x22 + 0xe0) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0xd0) = param_1;
  uVar2 = 0;
  __sScMMa();
  puVar1 = PTR___sScMMa_10004d028;
  uVar3 = uVar2;
  __sScM6sharedScMvgZ();
  *(undefined8 *)(unaff_x22 + 0xe8) = uVar3;
  uVar3 = 0x100051400;
  FUN_1000265c0(0x100051400,puVar1,PTR___sScMScAsMc_10004d030);
  __sScA15unownedExecutorScevgTj();
  *(undefined8 *)(unaff_x22 + 0xf0) = uVar2;
  *(undefined8 *)(unaff_x22 + 0xf8) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010003aec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_10004d078)(FUN_1000210b8,uVar2,uVar3);
  return;
}



/* Entry: 1000210b8; end: 100021217;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000210b8(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long unaff_x22;
  
  lVar9 = *(long *)(*(long *)(unaff_x22 + 0xe0) + _DAT_100052110);
  *(long *)(unaff_x22 + 0x100) = lVar9;
  if (lVar9 == 0) {
    _swift_release(*(undefined8 *)(unaff_x22 + 0xe8));
  }
  else {
    lVar3 = *(long *)(unaff_x22 + 0xd0);
    uVar8 = *(undefined8 *)(unaff_x22 + 0xd8);
    _swift_retain(lVar9);
    __sSS5countSivg(lVar3,uVar8);
    if (lVar3 < 0x33) {
      plVar4 = (long *)(ulong)*(uint *)(
                                       PTR___s23ExtensionsStickerPicker20StickersSearchClientC21fetchMetaDataIfNeeded4withSaySo14SCCTPEXTCTItemCGSS_tYaKFTu_10004cb38
                                       + 4);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x108) = plVar4;
      *plVar4 = unaff_x22;
      plVar4[1] = (long)FUN_100021218;
                    /* WARNING: Could not recover jumptable at 0x00010003a218. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___s23ExtensionsStickerPicker20StickersSearchClientC21fetchMetaDataIfNeeded4withSaySo14SCCTPEXTCTItemCGSS_tYaKF_10004cb30
      )(*(undefined8 *)(unaff_x22 + 0xd0),*(undefined8 *)(unaff_x22 + 0xd8));
      return;
    }
    lVar1 = *(long *)(unaff_x22 + 0xe0);
    _swift_release(*(undefined8 *)(unaff_x22 + 0xe8));
    func_0x000100026600(lVar1 + _DAT_100054338,unaff_x22 + 0x10);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x28);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x30);
    lVar3 = unaff_x22 + 0x10;
    FUN_100026644(lVar3,uVar8);
    uVar5 = 1;
    __s23ExtensionsStickerPicker0bC16StringsProvidingPAAE11description3forSSAA0B8ExtErrorO_tF
              (1,uVar8,uVar2,lVar3);
    puVar6 = &UNK_10003cc08;
    _swift_getKeyPath(&UNK_10003cc08);
    puVar7 = &UNK_10003cc30;
    _swift_getKeyPath(&UNK_10003cc30);
    *(undefined8 *)(unaff_x22 + 0x88) = uVar5;
    *(undefined8 *)(unaff_x22 + 0x90) = uVar8;
    _swift_retain(lVar1);
    __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluisZ
              (unaff_x22 + 0x88,lVar1,puVar6,puVar7);
    _swift_release(lVar9);
    func_0x000100026670(unaff_x22 + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x000100021214. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100021218; end: 100021283;  */

void FUN_100021218(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  *(long *)(lVar4 + 0x110) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar4 + 0x108));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar4 + 0x118) = param_1;
    uVar2 = *(undefined8 *)(lVar4 + 0xf0);
    uVar3 = *(undefined8 *)(lVar4 + 0xf8);
    pcVar1 = FUN_100021284;
  }
  else {
    uVar2 = *(undefined8 *)(lVar4 + 0xf0);
    uVar3 = *(undefined8 *)(lVar4 + 0xf8);
    pcVar1 = FUN_10002147c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010003aec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_10004d078)(pcVar1,uVar2,uVar3);
  return;
}



/* Entry: 100021284; end: 10002147b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100021284(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long unaff_x22;
  
  uVar7 = *(undefined8 *)(unaff_x22 + 0x118);
  lVar8 = *(long *)(unaff_x22 + 0xe0);
  _swift_release(*(undefined8 *)(unaff_x22 + 0xe8));
  uVar6 = *(undefined8 *)(lVar8 + _DAT_100052128);
  uVar10 = ((undefined8 *)(lVar8 + _DAT_100052128))[1];
  _swift_bridgeObjectRetain(uVar10);
  uVar3 = uVar7;
  __s23ExtensionsStickerPicker09ExtensionB9ConverterO03getD8Stickers4from8avatarId13extensionTypeSayAA0dB0VGSaySo14SCCTPEXTCTItemCG_SSSgAA0dL0OtFZ
            (uVar7,uVar6,uVar10,1);
  _swift_bridgeObjectRelease(uVar10);
  _swift_bridgeObjectRelease(uVar7);
  puVar4 = &UNK_10003cc98;
  _swift_getKeyPath(&UNK_10003cc98);
  puVar5 = &UNK_10003ccc0;
  _swift_getKeyPath(&UNK_10003ccc0);
  *(undefined8 *)(unaff_x22 + 200) = uVar3;
  _swift_retain(lVar8);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluisZ
            ((undefined8 *)(unaff_x22 + 200),lVar8,puVar4,puVar5);
  lVar9 = *(long *)(unaff_x22 + 0xe0);
  lVar8 = *(long *)(lVar9 + _DAT_100052138);
  if (lVar8 == 0) {
    lVar8 = *(long *)(unaff_x22 + 0x100);
  }
  else {
    uVar6 = *(undefined8 *)(unaff_x22 + 0x100);
    puVar4 = &UNK_10003cb48;
    _swift_getKeyPath(&UNK_10003cb48);
    puVar5 = &UNK_10003cb70;
    _swift_getKeyPath(&UNK_10003cb70);
    _swift_retain(lVar8);
    __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluigZ
              (unaff_x22 + 0x121,lVar9,puVar4,puVar5);
    _swift_release(puVar5);
    _swift_release(puVar4);
    uVar1 = *(undefined1 *)(unaff_x22 + 0x121);
    puVar4 = &UNK_10003cb90;
    _swift_getKeyPath(&UNK_10003cb90);
    puVar5 = &UNK_10003cbb8;
    _swift_getKeyPath(&UNK_10003cbb8);
    __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluigZ
              (unaff_x22 + 0x122,lVar9,puVar4,puVar5);
    _swift_release(puVar5);
    _swift_release(puVar4);
    uVar2 = *(undefined1 *)(unaff_x22 + 0x122);
    puVar4 = &UNK_10003cc98;
    _swift_getKeyPath(&UNK_10003cc98);
    puVar5 = &UNK_10003ccc0;
    _swift_getKeyPath(&UNK_10003ccc0);
    __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluigZ
              (unaff_x22 + 0xc0,lVar9,puVar4,puVar5);
    _swift_release(puVar5);
    _swift_release(puVar4);
    uVar10 = *(undefined8 *)(*(long *)(unaff_x22 + 0xc0) + 0x10);
    _swift_bridgeObjectRelease();
    __s23ExtensionsStickerPicker28StickersBlizzardEventTrackerC018logExtensionSearchF011selectedTag11isSearching12resultsCountyAA04PillL0OSg_SbSitF
              (uVar1,uVar2,uVar10);
    _swift_release(uVar6);
  }
  _swift_release(lVar8);
                    /* WARNING: Could not recover jumptable at 0x000100021478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10002147c; end: 10002177f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10002147c(void)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long unaff_x22;
  long lVar12;
  
  uVar8 = *(undefined8 *)(unaff_x22 + 0x110);
  _swift_release(*(undefined8 *)(unaff_x22 + 0xe8));
  *(undefined8 *)(unaff_x22 + 0xb8) = uVar8;
  _swift_errorRetain(uVar8);
  uVar8 = 0x100052330;
  FUN_100010860(0x100052330,&UNK_10003cc00);
  uVar9 = unaff_x22 + 0x120;
  _swift_dynamicCast(uVar9,(undefined8 *)(unaff_x22 + 0xb8),uVar8,
                     PTR___s23ExtensionsStickerPicker0B8ExtErrorON_10004ca40,0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x110);
  lVar11 = *(long *)(unaff_x22 + 0xe0);
  if ((uVar9 & 1) == 0) {
    _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0xb8));
    func_0x000100026600(lVar11 + _DAT_100054338,unaff_x22 + 0x38);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x50);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
    lVar10 = unaff_x22 + 0x38;
    FUN_100026644(lVar10,uVar7);
    uVar4 = 0;
    __s23ExtensionsStickerPicker0bC16StringsProvidingPAAE11description3forSSAA0B8ExtErrorO_tF
              (0,uVar7,uVar1,lVar10);
    puVar5 = &UNK_10003cc08;
    _swift_getKeyPath(&UNK_10003cc08);
    puVar6 = &UNK_10003cc30;
    _swift_getKeyPath(&UNK_10003cc30);
    *(undefined8 *)(unaff_x22 + 0x98) = uVar4;
    *(undefined8 *)(unaff_x22 + 0xa0) = uVar7;
    _swift_retain(lVar11);
    __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluisZ
              ((undefined8 *)(unaff_x22 + 0x98),lVar11,puVar5,puVar6);
    _swift_errorRelease(uVar8);
    func_0x000100026670(unaff_x22 + 0x38);
  }
  else {
    _swift_errorRelease(uVar8);
    uVar9 = (ulong)*(byte *)(unaff_x22 + 0x120);
    func_0x000100026600(lVar11 + _DAT_100054338,unaff_x22 + 0x60);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x78);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x80);
    lVar10 = unaff_x22 + 0x60;
    FUN_100026644(lVar10,uVar8);
    __s23ExtensionsStickerPicker0bC16StringsProvidingPAAE11description3forSSAA0B8ExtErrorO_tF
              (uVar9,uVar8,uVar7,lVar10);
    puVar5 = &UNK_10003cc08;
    _swift_getKeyPath(&UNK_10003cc08);
    puVar6 = &UNK_10003cc30;
    _swift_getKeyPath(&UNK_10003cc30);
    *(ulong *)(unaff_x22 + 0xa8) = uVar9;
    *(undefined8 *)(unaff_x22 + 0xb0) = uVar8;
    _swift_retain(lVar11);
    __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluisZ
              ((ulong *)(unaff_x22 + 0xa8),lVar11,puVar5,puVar6);
    func_0x000100026670(unaff_x22 + 0x60);
    _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0xb8));
  }
  lVar12 = *(long *)(unaff_x22 + 0xe0);
  lVar10 = *(long *)(lVar12 + _DAT_100052138);
  lVar11 = *(long *)(unaff_x22 + 0x100);
  if (lVar10 != 0) {
    puVar5 = &UNK_10003cb48;
    _swift_getKeyPath(&UNK_10003cb48);
    puVar6 = &UNK_10003cb70;
    _swift_getKeyPath(&UNK_10003cb70);
    _swift_retain(lVar10);
    __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluigZ
              (unaff_x22 + 0x121,lVar12,puVar5,puVar6);
    _swift_release(puVar6);
    _swift_release(puVar5);
    uVar2 = *(undefined1 *)(unaff_x22 + 0x121);
    puVar5 = &UNK_10003cb90;
    _swift_getKeyPath(&UNK_10003cb90);
    puVar6 = &UNK_10003cbb8;
    _swift_getKeyPath(&UNK_10003cbb8);
    __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluigZ
              (unaff_x22 + 0x122,lVar12,puVar5,puVar6);
    _swift_release(puVar6);
    _swift_release(puVar5);
    uVar3 = *(undefined1 *)(unaff_x22 + 0x122);
    puVar5 = &UNK_10003cc98;
    _swift_getKeyPath(&UNK_10003cc98);
    puVar6 = &UNK_10003ccc0;
    _swift_getKeyPath(&UNK_10003ccc0);
    __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluigZ
              (unaff_x22 + 0xc0,lVar12,puVar5,puVar6);
    _swift_release(puVar6);
    _swift_release(puVar5);
    uVar8 = *(undefined8 *)(*(long *)(unaff_x22 + 0xc0) + 0x10);
    _swift_bridgeObjectRelease();
    __s23ExtensionsStickerPicker28StickersBlizzardEventTrackerC018logExtensionSearchF011selectedTag11isSearching12resultsCountyAA04PillL0OSg_SbSitF
              (uVar2,uVar3,uVar8);
    _swift_release(lVar11);
    lVar11 = lVar10;
  }
  _swift_release(lVar11);
                    /* WARNING: Could not recover jumptable at 0x00010002177c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100021780; end: 1000219a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100021780(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  byte *unaff_x20;
  long lVar5;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  lVar5 = *(long *)(unaff_x20 + _DAT_100052138);
  if (lVar5 != 0) {
    _swift_retain(lVar5);
    __s23ExtensionsStickerPicker28StickersBlizzardEventTrackerC022logExtensionTabSessionF0yyF();
    _swift_release(lVar5);
  }
  _swift_getKeyPath(&UNK_10003cc08);
  _swift_getKeyPath(&UNK_10003cc30);
  puStack_60 = (undefined *)0x0;
  uStack_58 = 0;
  _swift_retain();
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluisZ
            (&puStack_60);
  _swift_getKeyPath(&UNK_10003cc98);
  _swift_getKeyPath(&UNK_10003ccc0);
  puStack_60 = PTR___swiftEmptyArrayStorage_10004ce00;
  _swift_retain();
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluisZ
            (&puStack_60);
  puVar1 = &UNK_10004e228;
  _swift_allocObject(&UNK_10004e228,0x18,7);
  _swift_weakInit(puVar1 + 0x10);
  puVar2 = &UNK_10004e278;
  _swift_allocObject(&UNK_10004e278,0x28,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  _swift_bridgeObjectRetain(param_2);
  uVar3 = 2;
  __s15SnapConcurrency12AttachedTask_8priority19asyncSpanNameSuffix9operationScTyxs5NeverOG0A11Attribution010AttributedD0O_AA0aD8PriorityOSgSSSgxyYaYbcts8SendableRzlF
            (2,0,0x10,4,0,0,&UNK_10003ce10,puVar2,PTR___sytN_10004cdf0 + 8);
  _swift_release(puVar2);
  _swift_release(uVar3);
  _swift_getKeyPath(&UNK_10003cb48);
  _swift_getKeyPath(&UNK_10003cb70);
  puStack_60 = (undefined *)CONCAT71(puStack_60._1_7_,param_3);
  _swift_retain();
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluisZ
            (&puStack_60);
  puVar1 = &UNK_10003cce0;
  _swift_getKeyPath(&UNK_10003cce0);
  puVar2 = &UNK_10003cd08;
  _swift_getKeyPath(&UNK_10003cd08);
  ppuVar4 = &puStack_60;
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluiMZ
            ();
  *unaff_x20 = (*unaff_x20 ^ 0xff) & 1;
  (*(code *)ppuVar4)(&puStack_60,0);
  _swift_release(puVar1);
  _swift_release(puVar2);
  return;
}



/* Entry: 1000219a8; end: 100021a3b;  */

void FUN_1000219a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = param_3;
  *(undefined8 *)(unaff_x22 + 0x38) = param_4;
  *(undefined8 *)(unaff_x22 + 0x28) = param_2;
  uVar2 = 0;
  __sScMMa();
  puVar1 = PTR___sScMMa_10004d028;
  uVar3 = uVar2;
  __sScM6sharedScMvgZ();
  *(undefined8 *)(unaff_x22 + 0x40) = uVar3;
  uVar3 = 0x100051400;
  FUN_1000265c0(0x100051400,puVar1,PTR___sScMScAsMc_10004d030);
  __sScA15unownedExecutorScevgTj();
  *(undefined8 *)(unaff_x22 + 0x48) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x50) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010003aec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_10004d078)(FUN_100021a3c,uVar2,uVar3);
  return;
}



/* Entry: 100021a3c; end: 100021b4f;  */

void FUN_100021a3c(void)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x28);
  _swift_beginAccess(lVar4 + 0x10,unaff_x22 + 0x10,0,0);
  lVar4 = lVar4 + 0x10;
  _swift_weakLoadStrong();
  *(long *)(unaff_x22 + 0x58) = lVar4;
  if (lVar4 != 0) {
    plVar3 = (long *)0x130;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x60) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = 0x100021ad0;
    lVar2 = *(long *)(unaff_x22 + 0x30);
    plVar3[0x1b] = *(long *)(unaff_x22 + 0x38);
    plVar3[0x1c] = lVar4;
    plVar3[0x1a] = lVar2;
    lVar2 = 0;
    __sScMMa();
    puVar1 = PTR___sScMMa_10004d028;
    lVar4 = lVar2;
    __sScM6sharedScMvgZ();
    plVar3[0x1d] = lVar4;
    lVar4 = 0x100051400;
    FUN_1000265c0(0x100051400,puVar1,PTR___sScMScAsMc_10004d030);
    __sScA15unownedExecutorScevgTj();
    plVar3[0x1e] = lVar2;
    plVar3[0x1f] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010003aec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_10004d078)(FUN_1000210b8,lVar2,lVar4);
    return;
  }
  _swift_release(*(undefined8 *)(unaff_x22 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x000100021acc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100021b50; end: 100021c57;  */

void FUN_100021b50(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x150) = param_2;
  *(undefined8 *)(unaff_x22 + 0x158) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x148) = param_1;
  lVar3 = 0x100052328;
  FUN_100010860(0x100052328,&UNK_10003cbf0);
  uVar2 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x160) = uVar2;
  lVar3 = 0;
  __s23ExtensionsStickerPicker09ExtensionB0VMa();
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0x168) = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xf;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x170) = uVar4;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x178) = uVar4;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x180) = uVar4;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x188) = uVar2;
  uVar5 = 0;
  __sScMMa();
  puVar1 = PTR___sScMMa_10004d028;
  uVar6 = uVar5;
  __sScM6sharedScMvgZ();
  *(undefined8 *)(unaff_x22 + 400) = uVar6;
  uVar6 = 0x100051400;
  FUN_1000265c0(0x100051400,puVar1,PTR___sScMScAsMc_10004d030);
  __sScA15unownedExecutorScevgTj();
  *(undefined8 *)(unaff_x22 + 0x198) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x1a0) = uVar6;
                    /* WARNING: Could not recover jumptable at 0x00010003aec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_10004d078)(FUN_100021c58,uVar5,uVar6);
  return;
}



/* Entry: 100021c58; end: 100021d87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100021c58(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x22;
  undefined8 uVar7;
  long *plVar8;
  
  lVar6 = *(long *)(*(long *)(unaff_x22 + 0x158) + _DAT_100052120);
  *(long *)(unaff_x22 + 0x1a8) = lVar6;
  if (lVar6 != 0) {
    lVar5 = *(long *)(*(long *)(unaff_x22 + 0x158) + _DAT_100052118);
    *(long *)(unaff_x22 + 0x1b0) = lVar5;
    if (lVar5 != 0) {
      uVar1 = *(undefined8 *)(unaff_x22 + 0x148);
      uVar2 = *(undefined8 *)(unaff_x22 + 0x150);
      lVar4 = 0x100051928;
      FUN_100010860(0x100051928,&UNK_10003c260);
      _swift_initStackObject();
      *(long *)(unaff_x22 + 0x1b8) = lVar4;
      *(undefined8 *)(lVar4 + 0x18) = 2;
      *(undefined8 *)(lVar4 + 0x10) = 1;
      *(undefined8 *)(lVar4 + 0x20) = uVar1;
      *(undefined8 *)(lVar4 + 0x28) = uVar2;
      plVar8 = (long *)(ulong)*(uint *)(
                                       PTR___s23ExtensionsStickerPicker22StickersUserDataClientC03puteF5Items4withSaySo14SCCTPEXTCTItemCGSaySSG_tYaKFTu_10004cb98
                                       + 4);
      _swift_retain(lVar6);
      _swift_retain(lVar5);
      _swift_bridgeObjectRetain(uVar2);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x1c0) = plVar8;
      *plVar8 = unaff_x22;
      plVar8[1] = (long)FUN_100021d88;
                    /* WARNING: Could not recover jumptable at 0x00010003a284. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___s23ExtensionsStickerPicker22StickersUserDataClientC03puteF5Items4withSaySo14SCCTPEXTCTItemCGSaySSG_tYaKF_10004cb90
      )(lVar4);
      return;
    }
  }
  _swift_release(*(undefined8 *)(unaff_x22 + 400));
  uVar1 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x178);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x160);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x188));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar7);
                    /* WARNING: Could not recover jumptable at 0x000100021d84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100021d88; end: 100021e5f;  */

void FUN_100021d88(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  long lVar3;
  long lVar4;
  
  lVar4 = *unaff_x22;
  lVar3 = *unaff_x22;
  *(long *)(lVar4 + 0x1c8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar4 + 0x1c0));
  lVar2 = *(long *)(lVar4 + 0x1b8);
  if (unaff_x20 != 0) {
    _swift_setDeallocating(lVar2);
    _swift_arrayDestroy(lVar2 + 0x20,*(undefined8 *)(lVar2 + 0x10),PTR___sSSN_10004ccd0);
                    /* WARNING: Could not recover jumptable at 0x00010003aec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_10004d078)
              (FUN_1000223e0,*(undefined8 *)(lVar4 + 0x198),*(undefined8 *)(lVar4 + 0x1a0));
    return;
  }
  *(undefined8 *)(lVar4 + 0x1d0) = param_1;
  _swift_setDeallocating(lVar2);
  _swift_arrayDestroy(lVar2 + 0x20,*(undefined8 *)(lVar2 + 0x10),PTR___sSSN_10004ccd0);
  plVar1 = (long *)(ulong)*(uint *)(
                                   PTR___s23ExtensionsStickerPicker20StickersFeedsServiceC22addItemsToRecentsCacheyySaySo14SCCTPEXTCTItemCGYaFTu_10004cb10
                                   + 4);
  _swift_task_alloc();
  *(long **)(lVar4 + 0x1d8) = plVar1;
  *plVar1 = lVar3;
  plVar1[1] = (long)FUN_100021e60;
                    /* WARNING: Could not recover jumptable at 0x00010003a1f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s23ExtensionsStickerPicker20StickersFeedsServiceC22addItemsToRecentsCacheyySaySo14SCCTPEXTCTItemCGYaF_10004cb08
  )(param_1);
  return;
}



/* Entry: 100021e60; end: 100021ea3;  */

void FUN_100021e60(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x1d8));
                    /* WARNING: Could not recover jumptable at 0x00010003aec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_10004d078)
            (FUN_100021ea4,*(undefined8 *)(lVar1 + 0x198),*(undefined8 *)(lVar1 + 0x1a0));
  return;
}



/* Entry: 100021ea4; end: 1000223df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100021ea4(void)

{
  undefined8 *puVar1;
  ulong *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong *puVar10;
  ulong uVar11;
  long lVar12;
  byte *pbVar13;
  long lVar14;
  ulong uVar15;
  undefined8 uVar16;
  ulong uVar17;
  long unaff_x22;
  undefined8 uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  undefined8 uVar22;
  ulong uVar23;
  ulong uVar24;
  
  lVar12 = *(long *)(unaff_x22 + 0x1d0);
  lVar14 = *(long *)(unaff_x22 + 0x158);
  _swift_release(*(undefined8 *)(unaff_x22 + 400));
  puVar1 = (undefined8 *)(lVar14 + _DAT_100052128);
  uVar16 = *puVar1;
  uVar3 = puVar1[1];
  _swift_bridgeObjectRetain(uVar3);
  lVar14 = lVar12;
  __s23ExtensionsStickerPicker09ExtensionB9ConverterO03getD8Stickers4from8avatarId13extensionTypeSayAA0dB0VGSaySo14SCCTPEXTCTItemCG_SSSgAA0dL0OtFZ
            (lVar12,uVar16,uVar3,1);
  _swift_bridgeObjectRelease(uVar3);
  _swift_bridgeObjectRelease(lVar12);
  if (*(long *)(lVar14 + 0x10) == 0) {
    _swift_bridgeObjectRelease(lVar14);
  }
  else {
    uVar16 = *(undefined8 *)(unaff_x22 + 0x180);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x188);
    lVar12 = *(long *)(unaff_x22 + 0x158);
    uVar11 = (ulong)*(byte *)(*(long *)(unaff_x22 + 0x168) + 0x50);
    uVar20 = uVar11 + 0x20 & (uVar11 ^ 0xffffffffffffffff);
    FUN_1000263f8(lVar14 + uVar20,uVar16);
    _swift_bridgeObjectRelease(lVar14);
    FUN_1000264c4(uVar16,uVar3);
    puVar6 = &UNK_10003cc50;
    _swift_getKeyPath();
    puVar7 = &UNK_10003cc78;
    _swift_getKeyPath();
    pcVar5 = (code *)(unaff_x22 + 0xb8);
    __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluiMZ
              (pcVar5,lVar12,puVar6,puVar7);
    puVar10 = (ulong *)(lVar12 + 0x20);
    uVar11 = *puVar10;
    uVar15 = *(ulong *)(uVar11 + 0x10);
    lVar14 = *(long *)(unaff_x22 + 0x188);
    if (uVar15 == 0) {
      uVar19 = 0;
      uVar21 = 0;
    }
    else {
      uVar19 = 0;
      lVar12 = *(long *)(*(long *)(unaff_x22 + 0x168) + 0x48);
      uVar17 = uVar20;
      do {
        uVar8 = *(ulong *)(uVar11 + uVar17);
        uVar21 = ((ulong *)(uVar11 + uVar17))[1];
        uVar24 = **(ulong **)(unaff_x22 + 0x188);
        uVar23 = *(ulong *)(lVar14 + 8);
        if ((uVar8 == uVar24 && uVar21 == uVar23) ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (uVar8,uVar21,uVar24,uVar23,0), uVar21 = uVar8 & 1, uVar8 = uVar24,
           uVar21 != 0)) {
          uVar21 = uVar19 + 1;
          uVar15 = *(ulong *)(uVar11 + 0x10);
          if (uVar15 - 1 != uVar19) {
            do {
              uVar17 = lVar12 + uVar17;
              if (uVar15 <= uVar21) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x1000223c4);
                (*pcVar5)();
              }
              puVar2 = (ulong *)(uVar11 + uVar17);
              uVar24 = *puVar2;
              if ((uVar24 != uVar8 || puVar2[1] != uVar23) &&
                 (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                            (uVar24,puVar2[1],uVar8,uVar23,0), (uVar24 & 1) == 0)) {
                if (uVar21 != uVar19) {
                  if (uVar15 <= uVar19) {
                    /* WARNING: Does not return */
                    pcVar5 = (code *)SoftwareBreakpoint(1,0x1000223c8);
                    (*pcVar5)();
                  }
                  uVar16 = *(undefined8 *)(unaff_x22 + 0x170);
                  FUN_1000263f8(uVar11 + uVar20 + uVar19 * lVar12,*(undefined8 *)(unaff_x22 + 0x178)
                               );
                  FUN_1000263f8(puVar2,uVar16);
                  uVar15 = uVar11;
                  _swift_isUniquelyReferenced_nonNull_native();
                  *puVar10 = uVar11;
                  if ((uVar15 & 1) == 0) {
                    FUN_1000252a8();
                    *puVar10 = uVar11;
                  }
                  if (*(ulong *)(uVar11 + 0x10) <= uVar19) {
                    /* WARNING: Does not return */
                    pcVar5 = (code *)SoftwareBreakpoint(1,0x1000223cc);
                    (*pcVar5)();
                  }
                  func_0x000100026698(*(undefined8 *)(unaff_x22 + 0x170),
                                      uVar11 + uVar20 + uVar19 * lVar12);
                  *puVar10 = uVar11;
                  if (*(ulong *)(uVar11 + 0x10) <= uVar21) {
                    /* WARNING: Does not return */
                    pcVar5 = (code *)SoftwareBreakpoint(1,0x1000223d0);
                    (*pcVar5)();
                  }
                  func_0x000100026698(*(undefined8 *)(unaff_x22 + 0x178),uVar11 + uVar17);
                  *puVar10 = uVar11;
                }
                uVar19 = uVar19 + 1;
              }
              uVar21 = uVar21 + 1;
              uVar15 = *(ulong *)(uVar11 + 0x10);
            } while (uVar21 != uVar15);
          }
          goto LAB_1000222c0;
        }
        uVar19 = uVar19 + 1;
        uVar17 = uVar17 + lVar12;
      } while (uVar15 != uVar19);
      uVar21 = *(ulong *)(uVar11 + 0x10);
      uVar19 = uVar15;
LAB_1000222c0:
      if ((long)uVar21 < (long)uVar19) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1000222cc);
        (*pcVar5)();
      }
      lVar14 = *(long *)(unaff_x22 + 0x188);
    }
    uVar16 = *(undefined8 *)(unaff_x22 + 0x158);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x160);
    FUN_1000253c8(uVar19,uVar21);
    (*pcVar5)(unaff_x22 + 0xb8,0);
    _swift_release(puVar7);
    _swift_release(puVar6);
    puVar6 = &UNK_10003cc50;
    _swift_getKeyPath(&UNK_10003cc50);
    puVar7 = &UNK_10003cc78;
    _swift_getKeyPath(&UNK_10003cc78);
    pcVar5 = (code *)(unaff_x22 + 0xd8);
    __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluiMZ
              (pcVar5,uVar16,puVar6,puVar7);
    FUN_1000263f8(lVar14,uVar3);
    FUN_1000246ac(0,0,uVar3);
    (*pcVar5)(unaff_x22 + 0xd8,0);
    _swift_release(puVar7);
    _swift_release(puVar6);
    func_0x0001000266dc(lVar14);
  }
  uVar16 = *(undefined8 *)(unaff_x22 + 0x158);
  puVar6 = &UNK_10003cb48;
  _swift_getKeyPath(&UNK_10003cb48);
  puVar7 = &UNK_10003cb70;
  _swift_getKeyPath(&UNK_10003cb70);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluigZ
            (unaff_x22 + 0x1e1,uVar16,puVar6,puVar7);
  _swift_release(puVar7);
  _swift_release(puVar6);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1b0);
  uVar9 = uVar3;
  if (*(char *)(unaff_x22 + 0x1e1) == '\0') {
    pbVar13 = *(byte **)(unaff_x22 + 0x158);
    puVar6 = &UNK_10003cc50;
    _swift_getKeyPath(&UNK_10003cc50);
    puVar7 = &UNK_10003cc78;
    _swift_getKeyPath(&UNK_10003cc78);
    __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluigZ
              (unaff_x22 + 0x90,pbVar13,puVar6,puVar7);
    _swift_release(puVar7);
    _swift_release(puVar6);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x98);
    uVar9 = *(undefined8 *)(unaff_x22 + 0xa0);
    uVar4 = *(undefined8 *)(unaff_x22 + 0xa8);
    uVar22 = *(undefined8 *)(unaff_x22 + 0xb0);
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x90));
    _swift_bridgeObjectRelease(uVar18);
    _swift_bridgeObjectRelease(uVar9);
    _swift_bridgeObjectRelease(uVar4);
    puVar6 = &UNK_10003cc98;
    _swift_getKeyPath(&UNK_10003cc98);
    puVar7 = &UNK_10003ccc0;
    _swift_getKeyPath(&UNK_10003ccc0);
    *(undefined8 *)(unaff_x22 + 0x140) = uVar22;
    _swift_retain(pbVar13);
    __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluisZ
              (unaff_x22 + 0x140,pbVar13,puVar6,puVar7);
    puVar6 = &UNK_10003cce0;
    _swift_getKeyPath(&UNK_10003cce0);
    puVar7 = &UNK_10003cd08;
    _swift_getKeyPath(&UNK_10003cd08);
    pcVar5 = (code *)(unaff_x22 + 0xf8);
    __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluiMZ
              (pcVar5,pbVar13,puVar6,puVar7);
    *pbVar13 = (*pbVar13 ^ 0xff) & 1;
    (*pcVar5)(unaff_x22 + 0xf8,0);
    _swift_release(puVar7);
    _swift_release(puVar6);
    uVar9 = uVar16;
    uVar16 = uVar3;
  }
  _swift_release(uVar9);
  _swift_release(uVar16);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x178);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x160);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x188));
  _swift_task_dealloc(uVar16);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar18);
                    /* WARNING: Could not recover jumptable at 0x0001000222a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1000223e0; end: 100022607;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000223e0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  long unaff_x22;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar7 = *(undefined8 *)(unaff_x22 + 0x1c8);
  _swift_release(*(undefined8 *)(unaff_x22 + 400));
  *(undefined8 *)(unaff_x22 + 0x138) = uVar7;
  _swift_errorRetain(uVar7);
  uVar7 = 0x100052330;
  FUN_100010860(0x100052330,&UNK_10003cc00);
  uVar8 = unaff_x22 + 0x1e0;
  _swift_dynamicCast(uVar8,unaff_x22 + 0x138,uVar7,
                     PTR___s23ExtensionsStickerPicker0B8ExtErrorON_10004ca40,0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x1c8);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1b0);
  lVar9 = *(long *)(unaff_x22 + 0x158);
  if ((uVar8 & 1) == 0) {
    _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x138));
    func_0x000100026600(lVar9 + _DAT_100054338,unaff_x22 + 0x40);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x58);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
    lVar3 = unaff_x22 + 0x40;
    FUN_100026644(lVar3,uVar10);
    uVar4 = 0;
    __s23ExtensionsStickerPicker0bC16StringsProvidingPAAE11description3forSSAA0B8ExtErrorO_tF
              (0,uVar10,uVar2,lVar3);
    puVar5 = &UNK_10003cc08;
    _swift_getKeyPath(&UNK_10003cc08);
    puVar6 = &UNK_10003cc30;
    _swift_getKeyPath(&UNK_10003cc30);
    *(undefined8 *)(unaff_x22 + 0x118) = uVar4;
    *(undefined8 *)(unaff_x22 + 0x120) = uVar10;
    _swift_retain(lVar9);
    __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluisZ
              (unaff_x22 + 0x118,lVar9,puVar5,puVar6);
    _swift_release(uVar7);
    _swift_release(uVar1);
    _swift_errorRelease(uVar11);
    func_0x000100026670(unaff_x22 + 0x40);
  }
  else {
    _swift_errorRelease(uVar11);
    uVar8 = (ulong)*(byte *)(unaff_x22 + 0x1e0);
    func_0x000100026600(lVar9 + _DAT_100054338,unaff_x22 + 0x68);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x88);
    lVar3 = unaff_x22 + 0x68;
    FUN_100026644(lVar3,uVar11);
    __s23ExtensionsStickerPicker0bC16StringsProvidingPAAE11description3forSSAA0B8ExtErrorO_tF
              (uVar8,uVar11,uVar10,lVar3);
    puVar5 = &UNK_10003cc08;
    _swift_getKeyPath(&UNK_10003cc08);
    puVar6 = &UNK_10003cc30;
    _swift_getKeyPath(&UNK_10003cc30);
    *(ulong *)(unaff_x22 + 0x128) = uVar8;
    *(undefined8 *)(unaff_x22 + 0x130) = uVar11;
    _swift_retain(lVar9);
    __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluisZ
              (unaff_x22 + 0x128,lVar9,puVar5,puVar6);
    _swift_release(uVar7);
    _swift_release(uVar1);
    func_0x000100026670(unaff_x22 + 0x68);
    _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x138));
  }
  uVar7 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x178);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x160);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x188));
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar10);
                    /* WARNING: Could not recover jumptable at 0x000100022604. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100022608; end: 100022823;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100022608(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long unaff_x20;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long alStack_80 [2];
  undefined1 auStack_70 [14];
  undefined1 uStack_62;
  undefined1 uStack_61;
  
  lVar1 = 0;
  __s23ExtensionsStickerPicker09ExtensionB0VMa();
  lVar9 = *(long *)(lVar1 + -8);
  lVar7 = *(long *)(lVar9 + 0x40);
  (*(code *)PTR____chkstk_darwin_10004c8a8)();
  lVar1 = -(lVar7 + 0xfU & 0xfffffffffffffff0);
  lVar6 = *(long *)(unaff_x20 + _DAT_100052130);
  if (lVar6 != 0) {
    _swift_retain(lVar6);
    __s23ExtensionsStickerPicker22StickersGrapheneLoggerC03logB9WasPicked12isTapGestureySb_tF(1);
    _swift_release(lVar6);
  }
  lVar6 = *(long *)(unaff_x20 + _DAT_100052138);
  if (lVar6 != 0) {
    puVar2 = &UNK_10003cb48;
    _swift_getKeyPath(&UNK_10003cb48);
    puVar3 = &UNK_10003cb70;
    _swift_getKeyPath(&UNK_10003cb70);
    _swift_retain(lVar6);
    __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluigZ
              (&uStack_61);
    _swift_release(puVar2);
    _swift_release(puVar3);
    puVar2 = &UNK_10003cb90;
    _swift_getKeyPath(&UNK_10003cb90);
    puVar3 = &UNK_10003cbb8;
    _swift_getKeyPath(&UNK_10003cbb8);
    __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluigZ
              (&uStack_62);
    _swift_release(puVar2);
    _swift_release(puVar3);
    __s23ExtensionsStickerPicker28StickersBlizzardEventTrackerC016logExtensionSendF07sticker5index11selectedTag11isSearchingyAA0iB0V_SiAA04PillN0OSgSbtF
              (param_1,param_2,uStack_61,uStack_62);
    _swift_release(lVar6);
  }
  puVar2 = &UNK_10004e228;
  _swift_allocObject(&UNK_10004e228,0x18,7);
  _swift_weakInit(puVar2 + 0x10);
  FUN_1000263f8(param_1,auStack_70 + lVar1);
  uVar5 = (ulong)*(byte *)(lVar9 + 0x50);
  uVar8 = uVar5 + 0x18 & (uVar5 ^ 0xffffffffffffffff);
  puVar3 = &UNK_10004e250;
  _swift_allocObject(&UNK_10004e250,uVar8 + lVar7,uVar5 | 7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  FUN_1000264c4(auStack_70 + lVar1,puVar3 + uVar8);
  *(undefined **)((long)alStack_80 + lVar1) = PTR___sytN_10004cdf0 + 8;
  uVar4 = 2;
  __s15SnapConcurrency12AttachedTask_8priority19asyncSpanNameSuffix9operationScTyxs5NeverOG0A11Attribution010AttributedD0O_AA0aD8PriorityOSgSSSgxyYaYbcts8SendableRzlF
            (2,0,0x10,4,0,0,&UNK_10003cbe0,puVar3);
  _swift_release(puVar3);
  _swift_release(uVar4);
  return;
}



/* Entry: 100022824; end: 1000228b3;  */

void FUN_100022824(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_2;
  *(undefined8 *)(unaff_x22 + 0x30) = param_3;
  uVar2 = 0;
  __sScMMa();
  puVar1 = PTR___sScMMa_10004d028;
  uVar3 = uVar2;
  __sScM6sharedScMvgZ();
  *(undefined8 *)(unaff_x22 + 0x38) = uVar3;
  uVar3 = 0x100051400;
  FUN_1000265c0(0x100051400,puVar1,PTR___sScMScAsMc_10004d030);
  __sScA15unownedExecutorScevgTj();
  *(undefined8 *)(unaff_x22 + 0x40) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010003aec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_10004d078)(FUN_1000228b4,uVar2,uVar3);
  return;
}



/* Entry: 1000228b4; end: 10002295b;  */

void FUN_1000228b4(void)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long unaff_x22;
  
  lVar7 = *(long *)(unaff_x22 + 0x28);
  _swift_beginAccess(lVar7 + 0x10,unaff_x22 + 0x10,0,0);
  lVar7 = lVar7 + 0x10;
  _swift_weakLoadStrong();
  *(long *)(unaff_x22 + 0x50) = lVar7;
  if (lVar7 != 0) {
    lVar5 = **(long **)(unaff_x22 + 0x30);
    lVar1 = (*(long **)(unaff_x22 + 0x30))[1];
    plVar6 = (long *)0x1f0;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x58) = plVar6;
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_10002295c;
    plVar6[0x2a] = lVar1;
    plVar6[0x2b] = lVar7;
    plVar6[0x29] = lVar5;
    lVar7 = 0x100052328;
    FUN_100010860(0x100052328,&UNK_10003cbf0);
    uVar3 = *(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar6[0x2c] = uVar3;
    lVar7 = 0;
    __s23ExtensionsStickerPicker09ExtensionB0VMa();
    lVar7 = *(long *)(lVar7 + -8);
    plVar6[0x2d] = lVar7;
    uVar3 = *(long *)(lVar7 + 0x40) + 0xf;
    uVar4 = uVar3 & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar6[0x2e] = uVar4;
    uVar4 = uVar3 & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar6[0x2f] = uVar4;
    uVar4 = uVar3 & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar6[0x30] = uVar4;
    uVar3 = uVar3 & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar6[0x31] = uVar3;
    lVar5 = 0;
    __sScMMa();
    puVar2 = PTR___sScMMa_10004d028;
    lVar7 = lVar5;
    __sScM6sharedScMvgZ();
    plVar6[0x32] = lVar7;
    lVar7 = 0x100051400;
    FUN_1000265c0(0x100051400,puVar2,PTR___sScMScAsMc_10004d030);
    __sScA15unownedExecutorScevgTj();
    plVar6[0x33] = lVar5;
    plVar6[0x34] = lVar7;
                    /* WARNING: Could not recover jumptable at 0x00010003aec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_10004d078)(FUN_100021c58,lVar5,lVar7);
    return;
  }
  _swift_release(*(undefined8 *)(unaff_x22 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x000100022958. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10002295c; end: 1000229db;  */

void FUN_10002295c(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010003aec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_10004d078)
            (0x1000229a0,*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x48));
  return;
}



/* Entry: 1000229dc; end: 100022b3f;  */

void FUN_1000229dc(ulong param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _swift_getKeyPath(&UNK_10003cdc0);
  _swift_getKeyPath(&UNK_10003cde8);
  uStack_40 = 0;
  uStack_38 = 0xe000000000000000;
  _swift_retain();
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluisZ
            (&uStack_40);
  uVar1 = (uint)param_1 & 0xff;
  if (uVar1 < 4) {
    uVar4 = 0xeb00000000232353;
    uVar5 = 0x544e454345522323;
    uVar2 = 0x65766f6c;
    if (uVar1 != 2) {
      uVar2 = 0x61686168;
    }
    if ((param_1 & 0xff) != 0) {
      uVar5 = 0x6968;
      uVar4 = 0xe200000000000000;
    }
    uVar3 = (ulong)uVar2;
    if (uVar1 == 1 || (param_1 & 0xff) == 0) {
      uVar3 = uVar5;
    }
    uVar6 = 0xe400000000000000;
    if (uVar1 == 1 || (param_1 & 0xff) == 0) {
      uVar6 = uVar4;
    }
  }
  else {
    uVar5 = 0x776f77;
    if (uVar1 != 7) {
      uVar5 = 0x7972726f73;
    }
    uVar4 = 0xe300000000000000;
    if (uVar1 != 7) {
      uVar4 = 0xe500000000000000;
    }
    uVar3 = 0x736579;
    if (uVar1 != 6) {
      uVar3 = uVar5;
    }
    uVar6 = 0xe300000000000000;
    if (uVar1 != 6) {
      uVar6 = uVar4;
    }
    uVar2 = 0x646173;
    if (uVar1 != 4) {
      uVar2 = 0x796179;
    }
    if (uVar1 < 6) {
      uVar6 = 0xe300000000000000;
      uVar3 = (ulong)uVar2;
    }
  }
  FUN_100021780(uVar3,uVar6,param_1);
  _swift_bridgeObjectRelease(uVar6);
  return;
}



/* Entry: 100022b40; end: 100022bd3;  */

void FUN_100022b40(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x58) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_2;
  uVar2 = 0;
  __sScMMa();
  puVar1 = PTR___sScMMa_10004d028;
  uVar3 = uVar2;
  __sScM6sharedScMvgZ();
  *(undefined8 *)(unaff_x22 + 0x30) = uVar3;
  uVar3 = 0x100051400;
  FUN_1000265c0(0x100051400,puVar1,PTR___sScMScAsMc_10004d030);
  __sScA15unownedExecutorScevgTj();
  *(undefined8 *)(unaff_x22 + 0x38) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010003aec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_10004d078)(FUN_100022bd4,uVar2,uVar3);
  return;
}



/* Entry: 100022bd4; end: 100022cab;  */

void FUN_100022bd4(void)

{
  undefined1 uVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x22 + 0x28);
  _swift_beginAccess(lVar5 + 0x10,unaff_x22 + 0x10,0,0);
  lVar5 = lVar5 + 0x10;
  _swift_weakLoadStrong();
  *(long *)(unaff_x22 + 0x48) = lVar5;
  if (lVar5 != 0) {
    plVar4 = (long *)0xe0;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x50) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = 0x100022c68;
    uVar1 = *(undefined1 *)(unaff_x22 + 0x58);
    plVar4[0x16] = lVar5;
    *(undefined1 *)((long)plVar4 + 0xda) = uVar1;
    lVar3 = 0;
    __sScMMa();
    puVar2 = PTR___sScMMa_10004d028;
    lVar5 = lVar3;
    __sScM6sharedScMvgZ();
    plVar4[0x17] = lVar5;
    lVar5 = 0x100051400;
    FUN_1000265c0(0x100051400,puVar2,PTR___sScMScAsMc_10004d030);
    __sScA15unownedExecutorScevgTj();
    plVar4[0x18] = lVar3;
    plVar4[0x19] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010003aec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_10004d078)(FUN_1000205c8,lVar3,lVar5);
    return;
  }
  _swift_release(*(undefined8 *)(unaff_x22 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x000100022c64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100022cac; end: 1000230d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_100022cac(ulong param_1,undefined *param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  ulong *puVar9;
  long **pplVar10;
  undefined *puVar11;
  undefined8 uVar12;
  byte bVar13;
  long extraout_x8;
  undefined *puVar14;
  long lVar15;
  ulong uVar16;
  long unaff_x20;
  undefined *puVar17;
  ulong uVar18;
  long alStack_d0 [2];
  ulong uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long *plStack_80;
  undefined *puStack_78;
  long *plStack_70;
  undefined *puStack_68;
  
  lVar5 = 0;
  __s10Foundation12CharacterSetVMa();
  lVar15 = *(long *)(lVar5 + -8);
  lVar6 = lVar5;
  (*(code *)PTR____chkstk_darwin_10004c8a8)(*(undefined8 *)(lVar15 + 0x40));
  plVar8 = (long *)((long)alStack_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  uStack_a8 = param_1;
  puStack_a0 = param_2;
  __s10Foundation12CharacterSetV22whitespacesAndNewlinesACvgZ(plVar8);
  func_0x00010001c030();
  plVar7 = plVar8;
  puVar11 = PTR___sSSN_10004ccd0;
  __sSy10FoundationE18trimmingCharacters2inSSAA12CharacterSetV_tF(plVar8,PTR___sSSN_10004ccd0,lVar6)
  ;
  (**(code **)(lVar15 + 8))(plVar8,lVar5);
  uVar16 = (ulong)plVar7 & 0xffffffffffff;
  if (((ulong)puVar11 & 0x2000000000000000) != 0) {
    uVar16 = (ulong)puVar11 >> 0x38 & 0xf;
  }
  if (uVar16 != 0) {
    alStack_d0[1] = uVar16;
    __s23ExtensionsStickerPicker7PillTagO09suggestedD4TagsSayACGvau();
    lVar5 = _DAT_100054338;
    lVar15 = *plVar8;
    uVar18 = *(ulong *)(lVar15 + 0x10);
    plStack_80 = plVar7;
    puStack_78 = puVar11;
    plStack_70 = plVar7;
    puStack_68 = puVar11;
    _swift_bridgeObjectRetain(lVar15);
    puVar14 = PTR___sSSN_10004ccd0;
    uVar16 = 0;
    do {
      if (uVar18 == uVar16) {
        _swift_bridgeObjectRelease(puVar11);
        _swift_bridgeObjectRelease(lVar15);
        puVar11 = &UNK_10003cdc0;
        _swift_getKeyPath(&UNK_10003cdc0);
        puVar14 = &UNK_10003cde8;
        _swift_getKeyPath(&UNK_10003cde8);
        __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluigZ
                  (&uStack_a8,unaff_x20,puVar11,puVar14);
        _swift_release(puVar11);
        _swift_release(puVar14);
        bVar13 = 9;
        uVar16 = uStack_a8;
        puVar11 = puStack_a0;
        goto LAB_100023094;
      }
      if (*(ulong *)(lVar15 + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1000230d4);
        (*pcVar4)();
      }
      bVar13 = *(byte *)(lVar15 + uVar16 + 0x20);
      func_0x000100026600(unaff_x20 + lVar5,&uStack_a8);
      uVar3 = uStack_88;
      uVar12 = uStack_90;
      puVar9 = &uStack_a8;
      FUN_100026644(puVar9,uStack_90);
      __s23ExtensionsStickerPicker0bC16StringsProvidingPAAE5title3forSSAA7PillTagO_tF
                (bVar13,uVar12,uVar3,puVar9);
      pplVar10 = &plStack_70;
      __sSy10FoundationE22caseInsensitiveCompareySo18NSComparisonResultVqd__SyRd__lF
                (pplVar10,puVar14,puVar14,lVar6,lVar6);
      _swift_bridgeObjectRelease(uVar12);
      func_0x000100026670(&uStack_a8);
      if (pplVar10 == (long **)0x0) break;
      if (bVar13 < 4) {
        if (bVar13 < 2) {
          uStack_a8 = 0x544e454345522323;
          puVar17 = (undefined *)0xeb00000000232353;
          if (bVar13 != 0) {
            puVar17 = (undefined *)0xe200000000000000;
            uStack_a8 = 0x6968;
          }
        }
        else {
          puVar17 = (undefined *)0xe400000000000000;
          if (bVar13 == 2) {
            uStack_a8 = 0x65766f6c;
          }
          else {
            uStack_a8 = 0x61686168;
          }
        }
      }
      else if (bVar13 < 6) {
        puVar17 = (undefined *)0xe300000000000000;
        if (bVar13 == 4) {
          uStack_a8 = 0x646173;
        }
        else {
          uStack_a8 = 0x796179;
        }
      }
      else if (bVar13 == 6) {
        puVar17 = (undefined *)0xe300000000000000;
        uStack_a8 = 0x736579;
      }
      else if (bVar13 == 7) {
        puVar17 = (undefined *)0xe300000000000000;
        uStack_a8 = 0x776f77;
      }
      else {
        puVar17 = (undefined *)0xe500000000000000;
        uStack_a8 = 0x7972726f73;
      }
      pplVar10 = &plStack_80;
      puStack_a0 = puVar17;
      __sSy10FoundationE22caseInsensitiveCompareySo18NSComparisonResultVqd__SyRd__lF
                (pplVar10,puVar14,puVar14,lVar6,lVar6);
      _swift_bridgeObjectRelease(puVar17);
      uVar16 = uVar16 + 1;
    } while (pplVar10 != (long **)0x0);
    _swift_bridgeObjectRelease(puVar11);
    _swift_bridgeObjectRelease(lVar15);
    uVar18 = 0x776f77;
    if (bVar13 != 7) {
      uVar18 = 0x7972726f73;
    }
    puVar14 = (undefined *)0xe300000000000000;
    if (bVar13 != 7) {
      puVar14 = (undefined *)0xe500000000000000;
    }
    uVar16 = 0x736579;
    if (bVar13 != 6) {
      uVar16 = uVar18;
    }
    puVar11 = (undefined *)0xe300000000000000;
    if (bVar13 != 6) {
      puVar11 = puVar14;
    }
    uVar1 = 0x646173;
    if (bVar13 != 4) {
      uVar1 = 0x796179;
    }
    if (bVar13 < 6) {
      puVar11 = (undefined *)0xe300000000000000;
      uVar16 = (ulong)uVar1;
    }
    uVar1 = 0x65766f6c;
    if (bVar13 != 2) {
      uVar1 = 0x61686168;
    }
    uVar18 = 0x544e454345522323;
    if (bVar13 != 0) {
      uVar18 = 0x6968;
    }
    puVar14 = (undefined *)0xeb00000000232353;
    if (bVar13 != 0) {
      puVar14 = (undefined *)0xe200000000000000;
    }
    puVar17 = (undefined *)0xe400000000000000;
    uVar2 = (ulong)uVar1;
    if (bVar13 < 2) {
      puVar17 = puVar14;
      uVar2 = uVar18;
    }
    if (bVar13 < 4) {
      uVar16 = uVar2;
      puVar11 = puVar17;
    }
LAB_100023094:
    FUN_100021780(uVar16,puVar11,bVar13);
    uVar16 = alStack_d0[1];
  }
  _swift_bridgeObjectRelease(puVar11);
  return uVar16 != 0;
}



/* Entry: 1000230d4; end: 1000232df;  */

void FUN_1000230d4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = &UNK_10003cb48;
  _swift_getKeyPath(&UNK_10003cb48);
  puVar2 = &UNK_10003cb70;
  _swift_getKeyPath(&UNK_10003cb70);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluigZ
            (&uStack_40);
  _swift_release(puVar1);
  _swift_release(puVar2);
  if ((char)uStack_40 == '\t') {
    puVar1 = &UNK_10004e228;
    _swift_allocObject(&UNK_10004e228,0x18,7);
    _swift_weakInit(puVar1 + 0x10);
    puVar2 = &UNK_10004e2c8;
    _swift_allocObject(&UNK_10004e2c8,0x19,7);
    *(undefined **)(puVar2 + 0x10) = puVar1;
    puVar2[0x18] = 1;
    uVar3 = 2;
    __s15SnapConcurrency12AttachedTask_8priority19asyncSpanNameSuffix9operationScTyxs5NeverOG0A11Attribution010AttributedD0O_AA0aD8PriorityOSgSSSgxyYaYbcts8SendableRzlF
              (2,0,0x10,4,0,0,&UNK_10003ce48,puVar2,PTR___sytN_10004cdf0 + 8);
    _swift_release(puVar2);
    _swift_release(uVar3);
  }
  else {
    _swift_getKeyPath(&UNK_10003cdc0);
    _swift_getKeyPath(&UNK_10003cde8);
    uStack_40 = 0;
    uStack_38 = 0xe000000000000000;
    _swift_retain();
    __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluisZ
              (&uStack_40);
  }
  return;
}



/* Entry: 1000232e0; end: 1000232e3;  */

void FUN_1000232e0(void)

{
  return;
}



/* Entry: 1000232e4; end: 10002355b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000232e4(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  code *pcVar4;
  
  lVar3 = _DAT_1000520c0;
  lVar2 = 0x100052348;
  FUN_100010860(0x100052348,&UNK_10003ce98);
  (**(code **)(*(long *)(lVar2 + -8) + 8))(unaff_x20 + lVar3,lVar2);
  lVar3 = _DAT_1000520c8;
  lVar2 = 0x100052350;
  FUN_100010860(0x100052350,&UNK_10003cea0);
  (**(code **)(*(long *)(lVar2 + -8) + 8))(unaff_x20 + lVar3,lVar2);
  lVar3 = _DAT_1000520d0;
  lVar2 = 0x100052358;
  FUN_100010860(0x100052358,&UNK_10003cea8);
  (**(code **)(*(long *)(lVar2 + -8) + 8))(unaff_x20 + lVar3,lVar2);
  lVar3 = _DAT_1000520d8;
  lVar2 = 0x100052360;
  FUN_100010860(0x100052360,&UNK_10003ceb0);
  (**(code **)(*(long *)(lVar2 + -8) + 8))(unaff_x20 + lVar3,lVar2);
  lVar3 = _DAT_1000520e0;
  lVar2 = 0x100052368;
  FUN_100010860(0x100052368,&UNK_10003ceb8);
  pcVar4 = *(code **)(*(long *)(lVar2 + -8) + 8);
  (*pcVar4)(unaff_x20 + lVar3,lVar2);
  lVar1 = _DAT_1000520e8;
  lVar3 = 0x100051518;
  FUN_100010860(0x100051518,&UNK_10003bfc0);
  (**(code **)(*(long *)(lVar3 + -8) + 8))(unaff_x20 + lVar1,lVar3);
  (*pcVar4)(unaff_x20 + _DAT_1000520f0,lVar2);
  lVar1 = _DAT_1000520f8;
  lVar3 = 0x100052370;
  FUN_100010860(0x100052370,&UNK_10003cec8);
  (**(code **)(*(long *)(lVar3 + -8) + 8))(unaff_x20 + lVar1,lVar3);
  lVar1 = _DAT_100052100;
  lVar3 = 0x100052378;
  FUN_100010860(0x100052378,&UNK_10003ced0);
  (**(code **)(*(long *)(lVar3 + -8) + 8))(unaff_x20 + lVar1,lVar3);
  (*pcVar4)(unaff_x20 + _DAT_100052108,lVar2);
  _swift_release(*(undefined8 *)(unaff_x20 + _DAT_100052110));
  _swift_release(*(undefined8 *)(unaff_x20 + _DAT_100052118));
  _swift_release(*(undefined8 *)(unaff_x20 + _DAT_100052120));
  _swift_release(*(undefined8 *)(unaff_x20 + _DAT_100054330));
  func_0x000100026670(unaff_x20 + _DAT_100054338);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + _DAT_100052128 + 8));
  _swift_release(*(undefined8 *)(unaff_x20 + _DAT_100054348 + 8));
  _swift_release(*(undefined8 *)(unaff_x20 + _DAT_100052130));
  _swift_release(*(undefined8 *)(unaff_x20 + _DAT_100052138));
  _swift_release(*(undefined8 *)(unaff_x20 + _DAT_100054350));
  return;
}



/* Entry: 10002355c; end: 10002357f;  */

void FUN_10002355c(void)

{
  FUN_1000232e4();
                    /* WARNING: Could not recover jumptable at 0x00010003ad1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_10004ce70)();
  return;
}



/* Entry: 100023580; end: 100023587;  */

void FUN_100023580(void)

{
  if (lRam0000000100052168 != 0) {
    return;
  }
  _swift_getSingletonMetadata(0,&DAT_10003e2a8);
  return;
}



/* Entry: 100023588; end: 1000235bf;  */

void FUN_100023588(undefined8 param_1)

{
  if (lRam0000000100052168 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10003e2a8);
  return;
}



/* Entry: 1000235c0; end: 10002388f;  */

void FUN_1000235c0(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  uVar3 = 0x100052178;
  lVar1 = 0x13f;
  func_0x0001000237d4(0x13f,0x100052178,0x100052180,&UNK_10003ca28);
  if (uVar3 < 0x40) {
    lStack_c8 = *(long *)(lVar1 + -8) + 0x40;
    uVar3 = 0x100052188;
    lVar1 = 0x13f;
    func_0x000100023824(0x13f,0x100052188,PTR___s23ExtensionsStickerPicker0B5FeedsVN_10004ca38);
    if (uVar3 < 0x40) {
      lStack_c0 = *(long *)(lVar1 + -8) + 0x40;
      uVar3 = 0x100052190;
      lVar1 = 0x13f;
      func_0x000100023824(0x13f,0x100052190,PTR___s23ExtensionsStickerPicker10EntryStateON_10004ca68
                         );
      if (uVar3 < 0x40) {
        lStack_b8 = *(long *)(lVar1 + -8) + 0x40;
        uVar3 = 0x100052198;
        lVar1 = 0x13f;
        func_0x0001000237d4(0x13f,0x100052198,0x1000521a0,&UNK_10003ca30);
        if (uVar3 < 0x40) {
          lStack_b0 = *(long *)(lVar1 + -8) + 0x40;
          uVar3 = 0x1000521a8;
          lVar1 = 0x13f;
          func_0x000100023824(0x13f,0x1000521a8,PTR___sSbN_10004ccf0);
          if (uVar3 < 0x40) {
            lVar1 = *(long *)(lVar1 + -8) + 0x40;
            uVar3 = 0x100051608;
            lVar2 = 0x13f;
            lStack_a8 = lVar1;
            func_0x000100023824(0x13f,0x100051608,PTR___sSSN_10004ccd0);
            if (uVar3 < 0x40) {
              lStack_a0 = *(long *)(lVar2 + -8) + 0x40;
              uVar3 = 0x1000521b0;
              lVar2 = 0x13f;
              lStack_98 = lVar1;
              func_0x0001000237d4(0x13f,0x1000521b0,0x1000521b8,&UNK_10003ca38);
              if (uVar3 < 0x40) {
                lStack_90 = *(long *)(lVar2 + -8) + 0x40;
                uVar3 = 0x1000521c0;
                lVar2 = 0x13f;
                func_0x000100023824(0x13f,0x1000521c0,PTR___s12CoreGraphics7CGFloatVN_10004d128);
                if (uVar3 < 0x40) {
                  lStack_88 = *(long *)(lVar2 + -8) + 0x40;
                  puStack_78 = &UNK_10003ca40;
                  puStack_70 = &UNK_10003ca40;
                  puStack_68 = &UNK_10003ca40;
                  puStack_60 = &UNK_10003ca40;
                  puStack_58 = &UNK_10003ca58;
                  puStack_50 = &UNK_10003ca70;
                  puStack_40 = PTR___syycWV_10004cdf8 + 0x40;
                  puStack_48 = &UNK_10003ca88;
                  puStack_38 = &UNK_10003ca40;
                  puStack_30 = &UNK_10003ca40;
                  puStack_28 = PTR___sBoWV_10004cc80 + 0x40;
                  lStack_80 = lVar1;
                  _swift_updateClassMetadata2(param_1,0x100,0x15,&lStack_c8,param_1 + 0x50);
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}



/* Entry: 100023890; end: 10002389f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_100023890(void)

{
  long unaff_x20;
  
  return *(undefined1 *)(unaff_x20 + _DAT_100054340);
}



/* Entry: 1000238a0; end: 1000238d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1000238a0(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + _DAT_100054348);
  _swift_retain(*(undefined8 *)(*(undefined1 (*) [16])(unaff_x20 + _DAT_100054348) + 8));
  return auVar1;
}



/* Entry: 1000238d8; end: 100023947;  */

undefined8 FUN_1000238d8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uStack_38;
  
  puVar1 = &UNK_10003cd78;
  _swift_getKeyPath(&UNK_10003cd78);
  puVar2 = &UNK_10003cda0;
  _swift_getKeyPath(&UNK_10003cda0);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluigZ
            (&uStack_38);
  _swift_release(puVar1);
  _swift_release(puVar2);
  return uStack_38;
}



/* Entry: 100023948; end: 10002397f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100023948(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010003ae54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_10004cf40)(*(undefined8 *)(unaff_x20 + _DAT_100054350));
  return;
}



/* Entry: 100023980; end: 100023a0f;  */

undefined8 FUN_100023980(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar1 = 0x38;
  if (PTR__swift_coroFrameAlloc_10004ce68 == (undefined *)0x0) {
    _malloc();
  }
  else {
    _swift_coroFrameAlloc(0x38,0x8f77);
  }
  *param_1 = lVar1;
  puVar2 = &UNK_10003cd30;
  _swift_getKeyPath();
  *(undefined **)(lVar1 + 0x20) = puVar2;
  puVar2 = &UNK_10003cd58;
  _swift_getKeyPath();
  *(undefined **)(lVar1 + 0x28) = puVar2;
  lVar3 = lVar1;
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluiMZ
            ();
  *(long *)(lVar1 + 0x30) = lVar3;
  return 0x100026a6c;
}



/* Entry: 100023a10; end: 100023a33;  */

/* WARNING: Removing unreachable block (ram,0x0001000259e0) */

void FUN_100023a10(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined1 *puVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long extraout_x8;
  long lVar13;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long extraout_x12_06;
  long extraout_x12_07;
  long extraout_x12_08;
  long extraout_x12_09;
  long extraout_x12_10;
  code *pcVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined *puVar18;
  undefined *puVar19;
  long lVar20;
  undefined1 auStack_140 [8];
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  ulong uStack_108;
  undefined *puStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  ulong uStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined1 *puStack_c0;
  long lStack_b8;
  undefined *puStack_b0;
  ulong uStack_a8;
  undefined *puStack_98;
  undefined1 auStack_90 [48];
  
  FUN_100022608();
  lVar2 = 0x1000522f0;
  FUN_100010860(0x1000522f0,&UNK_10003cb10);
  (*(code *)PTR____chkstk_darwin_10004c8a8)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puStack_c0 = auStack_140 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_10004c8a8)();
  lVar13 = (long)(auStack_140 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  lVar2 = 0;
  lStack_d0 = lVar13;
  __s22UniformTypeIdentifiers6UTTypeVMa();
  lStack_c8 = *(long *)(lVar2 + -8);
  lStack_b8 = lVar2;
  (*(code *)PTR____chkstk_darwin_10004c8a8)(*(undefined8 *)(lStack_c8 + 0x40));
  lVar13 = lVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lStack_e8 = lVar13;
  (*(code *)PTR____chkstk_darwin_10004c8a8)();
  lVar13 = lVar13 - extraout_x12_00;
  lStack_f8 = lVar13;
  (*(code *)PTR____chkstk_darwin_10004c8a8)();
  lVar13 = lVar13 - extraout_x12_01;
  lStack_e0 = lVar13;
  (*(code *)PTR____chkstk_darwin_10004c8a8)();
  lVar13 = lVar13 - extraout_x12_02;
  lStack_f0 = lVar13;
  (*(code *)PTR____chkstk_darwin_10004c8a8)();
  lVar13 = lVar13 - extraout_x12_03;
  (*(code *)PTR____chkstk_darwin_10004c8a8)();
  lVar20 = lVar13 - extraout_x12_04;
  (*(code *)PTR____chkstk_darwin_10004c8a8)();
  lVar16 = lVar20 - extraout_x12_05;
  (*(code *)PTR____chkstk_darwin_10004c8a8)();
  lVar15 = lVar16 - extraout_x12_06;
  (*(code *)PTR____chkstk_darwin_10004c8a8)();
  lVar2 = lVar15 - extraout_x12_07;
  (*(code *)PTR____chkstk_darwin_10004c8a8)();
  lVar17 = lVar2 - extraout_x12_08;
  (*(code *)PTR____chkstk_darwin_10004c8a8)();
  puVar19 = (undefined *)(lVar17 - extraout_x12_09);
  (*(code *)PTR____chkstk_darwin_10004c8a8)();
  uVar11 = 0;
  __s10Foundation4DataV10contentsOf7optionsAcA3URLVh_So20NSDataReadingOptionsVtKcfC();
  lStack_138 = lVar16;
  lStack_130 = lVar20;
  lStack_128 = lVar17;
  lStack_120 = lVar15;
  lStack_118 = lVar2;
  lStack_110 = lVar13;
  uStack_108 = uVar11;
  puStack_100 = param_3;
  uStack_d8 = (long)puVar19 - extraout_x12_10;
  __s10Foundation3URLV13pathExtensionSSvg();
  uVar10 = uVar11;
  __sSS10lowercasedSSyF();
  _swift_bridgeObjectRelease(uVar11);
  __s22UniformTypeIdentifiers6UTTypeV4dataACvgZ(puVar19);
  lVar13 = lStack_b8;
  lVar2 = lStack_d0;
  __s22UniformTypeIdentifiers6UTTypeV17filenameExtension12conformingToACSgSS_ACtcfC
            (lStack_d0,param_3,uVar10,puVar19);
  puVar1 = puStack_c0;
  FUN_100026268(lVar2,puStack_c0);
  lVar2 = lStack_c8;
  pcVar14 = *(code **)(lStack_c8 + 0x30);
  puVar3 = puVar1;
  (*pcVar14)(puVar1,1,lVar13);
  uVar10 = uStack_d8;
  if ((int)puVar3 == 1) {
    __s22UniformTypeIdentifiers6UTTypeV4dataACvgZ(uStack_d8);
    puVar3 = puVar1;
    (*pcVar14)(puVar1,1,lVar13);
    lVar20 = lStack_110;
    lVar17 = lStack_118;
    lVar16 = lStack_120;
    lVar15 = lStack_128;
    if ((int)puVar3 != 1) {
      FUN_1000268e4(puVar1,0x1000522f0,&UNK_10003cb10);
    }
  }
  else {
    (**(code **)(lVar2 + 0x20))(uStack_d8,puVar1,lVar13);
    lVar17 = lStack_118;
    lVar20 = lStack_110;
    lVar16 = lStack_120;
    lVar15 = lStack_128;
  }
  puVar4 = PTR___swiftEmptyArrayStorage_10004ce00;
  FUN_100025484();
  __s22UniformTypeIdentifiers6UTTypeV3pngACvgZ(puVar19);
  uVar11 = uVar10;
  __s22UniformTypeIdentifiers6UTTypeV2eeoiySbAC_ACtFZ(uVar10,puVar19);
  pcVar14 = *(code **)(lVar2 + 8);
  puVar5 = puVar19;
  lVar2 = lVar13;
  (*pcVar14)(puVar19,lVar13);
  if ((uVar11 & 1) == 0) {
    __s22UniformTypeIdentifiers6UTTypeV3gifACvgZ(puVar19);
    uVar11 = uVar10;
    __s22UniformTypeIdentifiers6UTTypeV2eeoiySbAC_ACtFZ(uVar10,puVar19);
    puVar5 = puVar19;
    lVar2 = lVar13;
    (*pcVar14)(puVar19,lVar13);
    if ((uVar11 & 1) == 0) {
      __s22UniformTypeIdentifiers6UTTypeV4webPACvgZ(puVar19);
      puVar5 = puVar19;
      __s22UniformTypeIdentifiers6UTTypeV8conforms2toSbAC_tF();
      lVar2 = lVar13;
      (*pcVar14)(puVar19,lVar13);
      puVar18 = puStack_100;
      uVar11 = uStack_108;
      if (((ulong)puVar5 & 1) == 0) {
        puVar19 = puStack_100;
        uVar12 = uStack_108;
        FUN_1000255b0();
        lVar2 = lStack_f8;
        if (0xe < uVar12 >> 0x3c) {
          puVar19 = PTR__OBJC_CLASS___UIPasteboard_100051058;
          _objc_opt_self(PTR__OBJC_CLASS___UIPasteboard_100051058);
          func_0x00010003b100();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar18;
          uVar12 = uVar11;
          __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(puVar18,uVar11);
          puVar9 = puVar5;
          __s22UniformTypeIdentifiers6UTTypeV10identifierSSvg();
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
          _swift_bridgeObjectRelease(uVar12);
          func_0x00010003b420(puVar19);
          _objc_release(puVar19);
          _objc_release(puVar5);
          _objc_release(puVar9);
          func_0x0001000262b8(puVar18,uVar11);
          _swift_bridgeObjectRelease(puVar4);
          lVar13 = lStack_b8;
          goto LAB_1000260a0;
        }
        puVar5 = puVar19;
        uVar10 = uVar12;
        __s22UniformTypeIdentifiers6UTTypeV3pngACvgZ(lStack_f8);
        __s22UniformTypeIdentifiers6UTTypeV10identifierSSvg();
        lVar13 = lStack_b8;
        (*pcVar14)(lVar2,lStack_b8);
        puStack_98 = PTR___s10Foundation4DataVN_10004d0d0;
        puStack_b0 = puVar19;
        uStack_a8 = uVar12;
        FUN_100026338(&puStack_b0,auStack_90);
        func_0x0001000262f8(puVar19,uVar12);
        puVar9 = puVar4;
        _swift_isUniquelyReferenced_nonNull_native(puVar4);
        puStack_b0 = puVar4;
        FUN_100024b80(auStack_90,puVar5,uVar10,puVar9);
        _swift_bridgeObjectRelease(uVar10);
        puVar4 = puStack_b0;
        lVar2 = lStack_e8;
        __s22UniformTypeIdentifiers6UTTypeV5imageACvgZ(lStack_e8);
        __s22UniformTypeIdentifiers6UTTypeV10identifierSSvg();
        (*pcVar14)(lVar2,lVar13);
        puStack_98 = PTR___s10Foundation4DataVN_10004d0d0;
        puStack_b0 = puVar19;
        uStack_a8 = uVar12;
        FUN_100026338(&puStack_b0,auStack_90);
        puVar19 = puVar4;
        _swift_isUniquelyReferenced_nonNull_native(puVar4);
        puStack_b0 = puVar4;
        FUN_100024b80(auStack_90,uVar10,puVar5,puVar19);
        uVar10 = uStack_d8;
        goto LAB_100025c68;
      }
      __s22UniformTypeIdentifiers6UTTypeV4webPACvgZ(lVar20);
      __s22UniformTypeIdentifiers6UTTypeV10identifierSSvg();
      (*pcVar14)(lVar20,lVar13);
      puVar6 = puStack_100;
      puVar9 = PTR___s10Foundation4DataVN_10004d0d0;
      puStack_b0 = puStack_100;
      uStack_a8 = uVar11;
      puStack_98 = PTR___s10Foundation4DataVN_10004d0d0;
      FUN_100026338(&puStack_b0,auStack_90);
      func_0x0001000262f8(puVar6,uVar11);
      puVar5 = puVar4;
      _swift_isUniquelyReferenced_nonNull_native(puVar4);
      puStack_b0 = puVar4;
      FUN_100024b80(auStack_90,puVar19,lVar2,puVar5);
      _swift_bridgeObjectRelease(lVar2);
      puVar19 = puStack_b0;
      uVar12 = uVar11;
      FUN_1000255b0();
      lVar2 = lStack_f0;
      puVar18 = puStack_100;
      if (uVar12 >> 0x3c < 0xf) {
        puVar4 = puVar6;
        uVar10 = uVar12;
        __s22UniformTypeIdentifiers6UTTypeV3pngACvgZ(lStack_f0);
        __s22UniformTypeIdentifiers6UTTypeV10identifierSSvg();
        (*pcVar14)(lVar2,lVar13);
        puStack_98 = puVar9;
        puStack_b0 = puVar6;
        uStack_a8 = uVar12;
        FUN_100026338(&puStack_b0,auStack_90);
        func_0x0001000262f8(puVar6,uVar12);
        puVar5 = puVar19;
        _swift_isUniquelyReferenced_nonNull_native(puVar19);
        puStack_b0 = puVar19;
        FUN_100024b80(auStack_90,puVar4,uVar10,puVar5);
        _swift_bridgeObjectRelease(uVar10);
        lVar2 = lStack_e0;
        goto LAB_100025f0c;
      }
    }
    else {
      __s22UniformTypeIdentifiers6UTTypeV3gifACvgZ(lVar16);
      __s22UniformTypeIdentifiers6UTTypeV10identifierSSvg();
      (*pcVar14)(lVar16,lVar13);
      puVar6 = puStack_100;
      uVar11 = uStack_108;
      puVar9 = PTR___s10Foundation4DataVN_10004d0d0;
      puStack_b0 = puStack_100;
      uStack_a8 = uStack_108;
      puStack_98 = PTR___s10Foundation4DataVN_10004d0d0;
      FUN_100026338(&puStack_b0,auStack_90);
      func_0x0001000262f8(puVar6,uVar11);
      puVar19 = puVar4;
      _swift_isUniquelyReferenced_nonNull_native(puVar4);
      puStack_b0 = puVar4;
      FUN_100024b80(auStack_90,puVar5,lVar2,puVar19);
      _swift_bridgeObjectRelease(lVar2);
      puVar19 = puStack_b0;
      uVar12 = uVar11;
      FUN_1000255b0();
      lVar2 = lStack_138;
      puVar18 = puStack_100;
      if (uVar12 >> 0x3c < 0xf) {
        puVar4 = puVar6;
        uVar10 = uVar12;
        __s22UniformTypeIdentifiers6UTTypeV3pngACvgZ(lStack_138);
        __s22UniformTypeIdentifiers6UTTypeV10identifierSSvg();
        (*pcVar14)(lVar2,lVar13);
        puStack_98 = puVar9;
        puStack_b0 = puVar6;
        uStack_a8 = uVar12;
        FUN_100026338(&puStack_b0,auStack_90);
        func_0x0001000262f8(puVar6,uVar12);
        puVar5 = puVar19;
        _swift_isUniquelyReferenced_nonNull_native(puVar19);
        puStack_b0 = puVar19;
        FUN_100024b80(auStack_90,puVar4,uVar10,puVar5);
        _swift_bridgeObjectRelease(uVar10);
        lVar2 = lStack_130;
LAB_100025f0c:
        puVar19 = puStack_b0;
        __s22UniformTypeIdentifiers6UTTypeV5imageACvgZ(lVar2);
        __s22UniformTypeIdentifiers6UTTypeV10identifierSSvg();
        (*pcVar14)(lVar2,lVar13);
        puStack_b0 = puVar6;
        uStack_a8 = uVar12;
        puStack_98 = puVar9;
        FUN_100026338(&puStack_b0,auStack_90);
        puVar5 = puVar19;
        _swift_isUniquelyReferenced_nonNull_native(puVar19);
        puStack_b0 = puVar19;
        FUN_100024b80(auStack_90,uVar10,puVar4,puVar5);
        uVar10 = uStack_d8;
        _swift_bridgeObjectRelease(puVar4);
        puVar19 = puStack_b0;
        puVar18 = puStack_100;
      }
    }
  }
  else {
    __s22UniformTypeIdentifiers6UTTypeV3pngACvgZ(lVar15);
    __s22UniformTypeIdentifiers6UTTypeV10identifierSSvg();
    (*pcVar14)(lVar15,lVar13);
    puVar18 = puStack_100;
    uVar11 = uStack_108;
    puVar19 = PTR___s10Foundation4DataVN_10004d0d0;
    puStack_b0 = puStack_100;
    uStack_a8 = uStack_108;
    puStack_98 = PTR___s10Foundation4DataVN_10004d0d0;
    FUN_100026338(&puStack_b0,auStack_90);
    func_0x0001000262f8(puVar18,uVar11);
    puVar9 = puVar4;
    _swift_isUniquelyReferenced_nonNull_native(puVar4);
    puStack_b0 = puVar4;
    FUN_100024b80(auStack_90,puVar5,lVar2,puVar9);
    _swift_bridgeObjectRelease(lVar2);
    puVar4 = puStack_b0;
    __s22UniformTypeIdentifiers6UTTypeV5imageACvgZ(lVar17);
    __s22UniformTypeIdentifiers6UTTypeV10identifierSSvg();
    (*pcVar14)(lVar17,lVar13);
    uVar10 = uStack_d8;
    puStack_b0 = puVar18;
    uStack_a8 = uVar11;
    puStack_98 = puVar19;
    FUN_100026338(&puStack_b0,auStack_90);
    func_0x0001000262f8(puVar18,uVar11);
    puVar19 = puVar4;
    _swift_isUniquelyReferenced_nonNull_native(puVar4);
    puStack_b0 = puVar4;
    FUN_100024b80(auStack_90,lVar2,puVar5,puVar19);
LAB_100025c68:
    _swift_bridgeObjectRelease(puVar5);
    puVar19 = puStack_b0;
  }
  puVar4 = PTR__OBJC_CLASS___UIPasteboard_100051058;
  _objc_opt_self(PTR__OBJC_CLASS___UIPasteboard_100051058);
  func_0x00010003b100();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = 0x1000522f8;
  FUN_100010860(0x1000522f8,&UNK_10003cb18);
  _swift_allocObject();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  *(undefined **)(lVar2 + 0x20) = puVar19;
  _swift_bridgeObjectRetain(puVar19);
  uVar7 = 0x100052300;
  FUN_100010860(0x100052300,&UNK_10003cb20);
  lVar15 = lVar2;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar2,uVar7);
  _swift_release(lVar2);
  puVar5 = PTR___swiftEmptyArrayStorage_10004ce00;
  FUN_10002569c(PTR___swiftEmptyArrayStorage_10004ce00);
  uVar8 = 0;
  FUN_100010c44(0);
  uVar7 = 0x100051310;
  FUN_1000265c0(0x100051310,FUN_100010c44,&UNK_10003bd1c);
  puVar9 = puVar5;
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (puVar5,uVar8,PTR___sypN_10004cde8 + 8,uVar7);
  _swift_bridgeObjectRelease(puVar5);
  func_0x00010003b440(puVar4);
  _objc_release(puVar4);
  _objc_release(lVar15);
  _objc_release(puVar9);
  func_0x0001000262b8(puVar18,uVar11);
  _swift_bridgeObjectRelease(puVar19);
LAB_1000260a0:
  (*pcVar14)(uVar10,lVar13);
  return;
}



/* Entry: 100023a34; end: 100023a5b;  */

undefined1 FUN_100023a34(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 uStack_31;
  
  puVar1 = &UNK_10003cb90;
  puVar2 = &UNK_10003cbb8;
  _swift_getKeyPath(&UNK_10003cb90);
  _swift_getKeyPath(&UNK_10003cbb8);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluigZ
            (&uStack_31);
  _swift_release(puVar1);
  _swift_release(puVar2);
  return uStack_31;
}



/* Entry: 100023a5c; end: 100023bc3;  */

void FUN_100023a5c(undefined1 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 uStack_31;
  
  _swift_getKeyPath(param_4);
  _swift_getKeyPath(param_5);
  uStack_31 = param_1;
  _swift_retain();
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluisZ
            (&uStack_31);
  return;
}



/* Entry: 100023bc4; end: 100023c3b;  */

void FUN_100023bc4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _swift_getKeyPath(&UNK_10003cdc0);
  _swift_getKeyPath(&UNK_10003cde8);
  uStack_50 = param_1;
  uStack_48 = param_2;
  _swift_retain();
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluisZ
            (&uStack_50);
  return;
}



/* Entry: 100023c3c; end: 100023ccb;  */

code * FUN_100023c3c(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar1 = 0x38;
  if (PTR__swift_coroFrameAlloc_10004ce68 == (undefined *)0x0) {
    _malloc();
  }
  else {
    _swift_coroFrameAlloc(0x38,0xc99f);
  }
  *param_1 = lVar1;
  puVar2 = &UNK_10003cdc0;
  _swift_getKeyPath();
  *(undefined **)(lVar1 + 0x20) = puVar2;
  puVar2 = &UNK_10003cde8;
  _swift_getKeyPath();
  *(undefined **)(lVar1 + 0x28) = puVar2;
  lVar3 = lVar1;
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluiMZ
            ();
  *(long *)(lVar1 + 0x30) = lVar3;
  return FUN_100023ccc;
}



/* Entry: 100023ccc; end: 100023ccf;  */

void FUN_100023ccc(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *param_1;
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  uVar3 = *(undefined8 *)(lVar2 + 0x20);
  (**(code **)(lVar2 + 0x30))(lVar2,0);
  _swift_release(uVar1);
  _swift_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010003ab9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10004c908)(lVar2);
  return;
}



/* Entry: 100023cd0; end: 100023e6b;  */

void FUN_100023cd0(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *param_1;
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  uVar3 = *(undefined8 *)(lVar2 + 0x20);
  (**(code **)(lVar2 + 0x30))(lVar2,0);
  _swift_release(uVar1);
  _swift_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010003ab9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10004c908)(lVar2);
  return;
}



/* Entry: 100023e6c; end: 100023ea3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100023e6c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010003ae54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_10004cf40)(*(undefined8 *)(unaff_x20 + _DAT_100054330));
  return;
}



/* Entry: 100023ea4; end: 100023f0f;  */

undefined1
FUN_100023ea4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uStack_31;
  
  _swift_getKeyPath(param_3);
  _swift_getKeyPath(param_4);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluigZ
            (&uStack_31);
  _swift_release(param_3);
  _swift_release(param_4);
  return uStack_31;
}



/* Entry: 100023f10; end: 100023f13;  */

void FUN_100023f10(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = &UNK_10003cb48;
  _swift_getKeyPath(&UNK_10003cb48);
  puVar2 = &UNK_10003cb70;
  _swift_getKeyPath(&UNK_10003cb70);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluigZ
            (&uStack_40);
  _swift_release(puVar1);
  _swift_release(puVar2);
  if ((char)uStack_40 == '\t') {
    puVar1 = &UNK_10004e228;
    _swift_allocObject(&UNK_10004e228,0x18,7);
    _swift_weakInit(puVar1 + 0x10);
    puVar2 = &UNK_10004e2c8;
    _swift_allocObject(&UNK_10004e2c8,0x19,7);
    *(undefined **)(puVar2 + 0x10) = puVar1;
    puVar2[0x18] = 1;
    uVar3 = 2;
    __s15SnapConcurrency12AttachedTask_8priority19asyncSpanNameSuffix9operationScTyxs5NeverOG0A11Attribution010AttributedD0O_AA0aD8PriorityOSgSSSgxyYaYbcts8SendableRzlF
              (2,0,0x10,4,0,0,&UNK_10003ce48,puVar2,PTR___sytN_10004cdf0 + 8);
    _swift_release(puVar2);
    _swift_release(uVar3);
  }
  else {
    _swift_getKeyPath(&UNK_10003cdc0);
    _swift_getKeyPath(&UNK_10003cde8);
    uStack_40 = 0;
    uStack_38 = 0xe000000000000000;
    _swift_retain();
    __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluisZ
              (&uStack_40);
  }
  return;
}



/* Entry: 100023f14; end: 100023fcb;  */

void FUN_100023f14(undefined1 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = &UNK_10004e228;
  _swift_allocObject(&UNK_10004e228,0x18,7);
  _swift_weakInit(puVar1 + 0x10);
  puVar2 = &UNK_10004e2a0;
  _swift_allocObject(&UNK_10004e2a0,0x19,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  puVar2[0x18] = param_1;
  uVar3 = 2;
  __s15SnapConcurrency12AttachedTask_8priority19asyncSpanNameSuffix9operationScTyxs5NeverOG0A11Attribution010AttributedD0O_AA0aD8PriorityOSgSSSgxyYaYbcts8SendableRzlF
            (2,0,0x10,4,0,0,&UNK_10003ce28,puVar2,PTR___sytN_10004cdf0 + 8);
  _swift_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010003ae48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_10004cf38)(uVar3);
  return;
}



/* Entry: 100023fcc; end: 100023fd7;  */

void FUN_100023fcc(ulong param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _swift_getKeyPath(&UNK_10003cdc0);
  _swift_getKeyPath(&UNK_10003cde8);
  uStack_40 = 0;
  uStack_38 = 0xe000000000000000;
  _swift_retain();
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluisZ
            (&uStack_40);
  uVar1 = (uint)param_1 & 0xff;
  if (uVar1 < 4) {
    uVar4 = 0xeb00000000232353;
    uVar5 = 0x544e454345522323;
    uVar2 = 0x65766f6c;
    if (uVar1 != 2) {
      uVar2 = 0x61686168;
    }
    if ((param_1 & 0xff) != 0) {
      uVar5 = 0x6968;
      uVar4 = 0xe200000000000000;
    }
    uVar3 = (ulong)uVar2;
    if (uVar1 == 1 || (param_1 & 0xff) == 0) {
      uVar3 = uVar5;
    }
    uVar6 = 0xe400000000000000;
    if (uVar1 == 1 || (param_1 & 0xff) == 0) {
      uVar6 = uVar4;
    }
  }
  else {
    uVar5 = 0x776f77;
    if (uVar1 != 7) {
      uVar5 = 0x7972726f73;
    }
    uVar4 = 0xe300000000000000;
    if (uVar1 != 7) {
      uVar4 = 0xe500000000000000;
    }
    uVar3 = 0x736579;
    if (uVar1 != 6) {
      uVar3 = uVar5;
    }
    uVar6 = 0xe300000000000000;
    if (uVar1 != 6) {
      uVar6 = uVar4;
    }
    uVar2 = 0x646173;
    if (uVar1 != 4) {
      uVar2 = 0x796179;
    }
    if (uVar1 < 6) {
      uVar6 = 0xe300000000000000;
      uVar3 = (ulong)uVar2;
    }
  }
  FUN_100021780(uVar3,uVar6,param_1);
  _swift_bridgeObjectRelease(uVar6);
  return;
}



/* Entry: 100023fd8; end: 10002404f;  */

void FUN_100023fd8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x1000522e0;
  FUN_1000265c0(0x1000522e0,FUN_100023588,&UNK_10003cad8);
  *(undefined8 *)(param_1 + 8) = uVar1;
  return;
}



/* Entry: 100024050; end: 10002405b;  */

undefined * FUN_100024050(void)

{
  return PTR___s7Combine25ObservableObjectPublisherCAA0D0AAWP_10004c0e0;
}



/* Entry: 10002405c; end: 10002419b;  */

void FUN_10002405c(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  puVar1 = &UNK_10003ce50;
  _swift_getKeyPath(&UNK_10003ce50);
  puVar2 = &UNK_10003ce78;
  _swift_getKeyPath(&UNK_10003ce78);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluigZ
            (param_1,uVar3,puVar1,puVar2);
  _swift_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010003ae48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_10004cf38)(puVar2);
  return;
}



/* Entry: 10002419c; end: 10002421b;  */

void FUN_10002419c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar5 = *param_2;
  puVar3 = &UNK_10003cc08;
  _swift_getKeyPath(&UNK_10003cc08);
  puVar4 = &UNK_10003cc30;
  _swift_getKeyPath(&UNK_10003cc30);
  uStack_50 = uVar1;
  uStack_48 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  _swift_retain(uVar5);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluisZ
            (&uStack_50,uVar5,puVar3,puVar4);
  return;
}



/* Entry: 10002421c; end: 100024283;  */

void FUN_10002421c(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  puVar1 = &UNK_10003cc50;
  _swift_getKeyPath(&UNK_10003cc50);
  puVar2 = &UNK_10003cc78;
  _swift_getKeyPath(&UNK_10003cc78);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluigZ
            (param_1,uVar3,puVar1,puVar2);
  _swift_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010003ae48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_10004cf38)(puVar2);
  return;
}



/* Entry: 100024284; end: 10002433b;  */

void FUN_100024284(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar1 = *param_1;
  uVar3 = param_1[1];
  uVar2 = param_1[2];
  uVar4 = param_1[3];
  uVar7 = param_1[4];
  uVar8 = *param_2;
  puVar5 = &UNK_10003cc50;
  _swift_getKeyPath(&UNK_10003cc50);
  puVar6 = &UNK_10003cc78;
  _swift_getKeyPath(&UNK_10003cc78);
  uStack_78 = uVar1;
  uStack_70 = uVar3;
  uStack_68 = uVar2;
  uStack_60 = uVar4;
  uStack_58 = uVar7;
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar4);
  _swift_bridgeObjectRetain(uVar7);
  _swift_retain(uVar8);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluisZ
            (&uStack_78,uVar8,puVar5,puVar6);
  return;
}



/* Entry: 10002433c; end: 10002455b;  */

void FUN_10002433c(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  puVar1 = &UNK_10003cc98;
  _swift_getKeyPath(&UNK_10003cc98);
  puVar2 = &UNK_10003ccc0;
  _swift_getKeyPath(&UNK_10003ccc0);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluigZ
            (param_1,uVar3,puVar1,puVar2);
  _swift_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010003ae48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_10004cf38)(puVar2);
  return;
}



/* Entry: 10002455c; end: 1000245db;  */

void FUN_10002455c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar5 = *param_2;
  puVar3 = &UNK_10003cdc0;
  _swift_getKeyPath(&UNK_10003cdc0);
  puVar4 = &UNK_10003cde8;
  _swift_getKeyPath(&UNK_10003cde8);
  uStack_50 = uVar1;
  uStack_48 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  _swift_retain(uVar5);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluisZ
            (&uStack_50,uVar5,puVar3,puVar4);
  return;
}



/* Entry: 1000245dc; end: 1000246ab;  */

void FUN_1000245dc(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  _swift_getKeyPath(param_5);
  _swift_getKeyPath(param_6);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluigZ
            (param_1,uVar1,param_5,param_6);
  _swift_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010003ae48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_10004cf38)(param_6);
  return;
}



/* Entry: 1000246ac; end: 10002477b;  */

void FUN_1000246ac(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10002476c);
    (*pcVar2)();
  }
  lVar4 = *unaff_x20;
  lVar5 = *(long *)(lVar4 + 0x10);
  if (lVar5 < param_2) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100024770);
    (*pcVar2)();
  }
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100024774);
    (*pcVar2)();
  }
  lVar1 = 1 - (param_2 - param_1);
  if (!SBORROW8(1,param_2 - param_1)) {
    if (!SCARRY8(lVar5,lVar1)) {
      lVar3 = lVar4;
      _swift_isUniquelyReferenced_nonNull_native();
      *unaff_x20 = lVar4;
      if (((int)lVar3 == 0) || ((long)(*(ulong *)(lVar4 + 0x18) >> 1) < lVar5 + lVar1)) {
        FUN_1000248b8();
        *unaff_x20 = lVar3;
        lVar4 = lVar3;
      }
      FUN_10002477c(param_1,param_2,1,param_3);
      *unaff_x20 = lVar4;
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10002477c);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100024778);
  (*pcVar2)();
}



/* Entry: 10002477c; end: 1000248b7;  */

void FUN_10002477c(long param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *unaff_x20;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar6 = *unaff_x20;
  lVar3 = 0;
  __s23ExtensionsStickerPicker09ExtensionB0VMa();
  lVar8 = param_2 - param_1;
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1000248a8);
    (*pcVar2)();
  }
  uVar5 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  lVar1 = lVar6 + (uVar5 + 0x20 & (uVar5 ^ 0xffffffffffffffff));
  lVar9 = *(long *)(*(long *)(lVar3 + -8) + 0x48);
  lVar7 = lVar1 + lVar9 * param_1;
  _swift_arrayDestroy(lVar7,lVar8,lVar3);
  lVar3 = param_3 - lVar8;
  if (SBORROW8(param_3,lVar8)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1000248ac);
    (*pcVar2)();
  }
  lVar8 = lVar9 * param_3;
  if (lVar3 != 0) {
    if (SBORROW8(*(long *)(lVar6 + 0x10),param_2)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1000248b0);
      (*pcVar2)();
    }
    uVar5 = lVar7 + lVar8;
    uVar4 = lVar1 + lVar9 * param_2;
    if (uVar5 < uVar4 || uVar4 + (*(long *)(lVar6 + 0x10) - param_2) * lVar9 <= uVar5) {
      _swift_arrayInitWithTakeFrontToBack();
    }
    else if (uVar5 != uVar4) {
      _swift_arrayInitWithTakeBackToFront();
    }
    if (SCARRY8(*(long *)(lVar6 + 0x10),lVar3)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1000248b4);
      (*pcVar2)();
    }
    *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + lVar3;
  }
  if (((0 < param_3) && (0 < lVar8)) && (FUN_1000263f8(param_4,lVar7), lVar9 < lVar8)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1000248b8);
    (*pcVar2)();
  }
  FUN_1000268e4(param_4,0x100052328,&UNK_10003cbf0);
  return;
}



/* Entry: 1000248b8; end: 100024a33;  */

undefined * FUN_1000248b8(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  
  uVar7 = param_2;
  if ((param_3 & 1) != 0) {
    uVar7 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar7 < (long)param_2) {
      if ((long)(uVar7 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100024a34);
        (*pcVar3)();
      }
      uVar7 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar7 <= (long)param_2) {
        uVar7 = param_2;
      }
    }
  }
  uVar9 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar7 <= (long)uVar9) {
    uVar7 = uVar9;
  }
  puVar4 = PTR___swiftEmptyArrayStorage_10004ce00;
  if (uVar7 != 0) {
    puVar4 = (undefined *)0x100052338;
    FUN_100010860(0x100052338,&UNK_10003cd28);
    lVar5 = 0;
    __s23ExtensionsStickerPicker09ExtensionB0VMa();
    lVar10 = *(long *)(*(long *)(lVar5 + -8) + 0x48);
    uVar8 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
    uVar11 = uVar8 + 0x20 & (uVar8 ^ 0xffffffffffffffff);
    _swift_allocObject(puVar4,uVar11 + lVar10 * uVar7,uVar8 | 7);
    puVar6 = puVar4;
    _malloc_size();
    if (lVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100024a2c);
      (*pcVar3)();
    }
    lVar5 = (long)puVar6 - uVar11;
    if (lVar5 == -0x8000000000000000 && lVar10 == -1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100024a30);
      (*pcVar3)();
    }
    lVar2 = 0;
    if (lVar10 != 0) {
      lVar2 = lVar5 / lVar10;
    }
    *(ulong *)(puVar4 + 0x10) = uVar9;
    *(long *)(puVar4 + 0x18) = lVar2 << 1;
  }
  lVar5 = 0;
  __s23ExtensionsStickerPicker09ExtensionB0VMa();
  uVar7 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
  uVar7 = uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff);
  puVar6 = puVar4 + uVar7;
  puVar1 = param_4 + uVar7;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar6,puVar1,uVar9,lVar5);
  }
  else {
    if ((puVar4 < param_4) || (puVar1 + *(long *)(*(long *)(lVar5 + -8) + 0x48) * uVar9 <= puVar6))
    {
      _swift_arrayInitWithTakeFrontToBack(puVar6,puVar1,uVar9);
    }
    else if (puVar4 != param_4) {
      _swift_arrayInitWithTakeBackToFront(puVar6,puVar1,uVar9);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar4;
}



/* Entry: 100024a34; end: 100024ab3;  */

undefined1  [16] FUN_100024a34(ulong param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  ulong uVar7;
  long unaff_x20;
  undefined8 uVar8;
  uint uVar9;
  undefined1 auVar10 [16];
  undefined1 auStack_88 [56];
  
  uVar8 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar6 = param_1;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  __ss6HasherV5_seedABSi_tcfC(auStack_88,uVar8);
  puVar1 = auStack_88;
  __sSS4hash4intoys6HasherVz_tF(puVar1,uVar6,param_2);
  __ss6HasherV9_finalizeSiyF();
  _swift_bridgeObjectRelease(param_2);
  uVar6 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  uVar7 = (ulong)puVar1 & (uVar6 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (uVar7 >> 6) * 8) >> (uVar7 & 0x3f) & 1) == 0) {
    uVar9 = 0;
  }
  else {
    while( true ) {
      uVar2 = *(ulong *)(*(long *)(unaff_x20 + 0x30) + uVar7 * 8);
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
      uVar3 = param_1;
      puVar4 = puVar1;
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
      if (uVar2 == uVar3 && puVar1 == puVar4) break;
      puVar5 = puVar1;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (uVar2,puVar1,uVar3,puVar4,0);
      uVar9 = (uint)uVar2;
      _swift_bridgeObjectRelease(puVar1);
      _swift_bridgeObjectRelease(puVar4);
      if (((uVar2 & 1) != 0) ||
         (uVar7 = uVar7 + 1 & ~uVar6, puVar1 = puVar5,
         (*(ulong *)(unaff_x20 + 0x40 + (uVar7 >> 6) * 8) >> (uVar7 & 0x3f) & 1) == 0))
      goto LAB_100024d7c;
    }
    _swift_bridgeObjectRelease(puVar1);
    _swift_bridgeObjectRelease(puVar4);
    uVar9 = 1;
  }
LAB_100024d7c:
  auVar10._8_4_ = uVar9 & 1;
  auVar10._0_8_ = uVar7;
  auVar10._12_4_ = 0;
  return auVar10;
}



/* Entry: 100024ab4; end: 100024b17;  */

undefined1  [16] FUN_100024ab4(ulong param_1,ulong param_2)

{
  ulong *puVar1;
  ulong uVar2;
  undefined1 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long unaff_x20;
  undefined1 auVar8 [16];
  undefined1 auStack_78 [56];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_78,*(undefined8 *)(unaff_x20 + 0x28));
  puVar3 = auStack_78;
  __sSS4hash4intoys6HasherVz_tF(puVar3,param_1,param_2);
  __ss6HasherV9_finalizeSiyF();
  uVar6 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  uVar7 = (ulong)puVar3 & (uVar6 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (uVar7 >> 6) * 8) >> (uVar7 & 0x3f) & 1) != 0) {
    do {
      puVar1 = (ulong *)(*(long *)(unaff_x20 + 0x30) + uVar7 * 0x10);
      uVar4 = *puVar1;
      uVar2 = puVar1[1];
      if ((uVar4 == param_1 && uVar2 == param_2) ||
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (uVar4,uVar2,param_1,param_2,0), (uVar4 & 1) != 0)) {
        uVar5 = 1;
        goto LAB_100024e30;
      }
      uVar7 = uVar7 + 1 & ~uVar6;
    } while ((*(ulong *)(unaff_x20 + 0x40 + (uVar7 >> 6) * 8) >> (uVar7 & 0x3f) & 1) != 0);
  }
  uVar5 = 0;
LAB_100024e30:
  auVar8._8_8_ = uVar5;
  auVar8._0_8_ = uVar7;
  return auVar8;
}



/* Entry: 100024b18; end: 100024b7f;  */

void FUN_100024b18(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  
  lVar1 = param_5 + (param_1 >> 6) * 8;
  *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << (param_1 & 0x3f);
  puVar2 = (undefined8 *)(*(long *)(param_5 + 0x30) + param_1 * 0x10);
  *puVar2 = param_2;
  puVar2[1] = param_3;
  FUN_100026338(param_4,*(long *)(param_5 + 0x38) + param_1 * 0x20);
  if (!SCARRY8(*(long *)(param_5 + 0x10),1)) {
    *(long *)(param_5 + 0x10) = *(long *)(param_5 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100024b80);
  (*pcVar3)();
}



/* Entry: 100024b80; end: 100024d9b;  */

undefined8 * FUN_100024b80(undefined8 *param_1,long param_2,undefined8 *param_3,uint param_4)

{
  code *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  lVar8 = *unaff_x20;
  lVar2 = param_2;
  puVar3 = param_3;
  FUN_100024ab4();
  lVar6 = *(long *)(lVar8 + 0x10);
  uVar7 = (ulong)~(uint)puVar3 & 1;
  lVar5 = lVar6 + uVar7;
  if (SCARRY8(lVar6,uVar7)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100024c60);
    (*pcVar1)();
  }
  if (*(long *)(lVar8 + 0x18) < lVar5) {
    func_0x000100024fec(lVar5,param_4 & 1);
    puVar4 = param_3;
    FUN_100024ab4();
    lVar2 = param_2;
    if (((uint)puVar3 & 1) != ((uint)puVar4 & 1)) {
      __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF
                (PTR___sSSN_10004ccd0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100024c20);
      (*pcVar1)();
    }
  }
  else if ((param_4 & 1) == 0) {
    func_0x000100024e48();
    lVar5 = *unaff_x20;
    goto joined_r0x000100024c74;
  }
  lVar5 = *unaff_x20;
joined_r0x000100024c74:
  if (((ulong)puVar3 & 1) != 0) {
    puVar3 = (undefined8 *)(*(long *)(lVar5 + 0x38) + lVar2 * 0x20);
    func_0x000100026670(puVar3);
    uVar9 = *param_1;
    uVar11 = param_1[3];
    uVar10 = param_1[2];
    puVar3[1] = param_1[1];
    *puVar3 = uVar9;
    puVar3[3] = uVar11;
    puVar3[2] = uVar10;
    return puVar3;
  }
  FUN_100024b18();
                    /* WARNING: Could not recover jumptable at 0x00010003acf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_10004ce58)(param_3);
  return param_3;
}



/* Entry: 100024d9c; end: 100024e47;  */

undefined1  [16] FUN_100024d9c(ulong param_1,ulong param_2,ulong param_3)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long unaff_x20;
  undefined1 auVar6 [16];
  
  uVar5 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_3 = param_3 & (uVar5 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_3 >> 6) * 8) >> (param_3 & 0x3f) & 1) != 0) {
    do {
      puVar1 = (ulong *)(*(long *)(unaff_x20 + 0x30) + param_3 * 0x10);
      uVar3 = *puVar1;
      uVar2 = puVar1[1];
      if ((uVar3 == param_1 && uVar2 == param_2) ||
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (uVar3,uVar2,param_1,param_2,0), (uVar3 & 1) != 0)) {
        uVar4 = 1;
        goto LAB_100024e30;
      }
      param_3 = param_3 + 1 & ~uVar5;
    } while ((*(ulong *)(unaff_x20 + 0x40 + (param_3 >> 6) * 8) >> (param_3 & 0x3f) & 1) != 0);
  }
  uVar4 = 0;
LAB_100024e30:
  auVar6._8_8_ = uVar4;
  auVar6._0_8_ = param_3;
  return auVar6;
}



/* Entry: 100024e48; end: 1000252a7;  */

void FUN_100024e48(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long *unaff_x20;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_80 [32];
  
  FUN_100010860(0x100052308,&UNK_10003cb28);
  lVar11 = *unaff_x20;
  lVar6 = lVar11;
  __ss18_DictionaryStorageC4copy8originalAByxq_Gs05__RawaB0C_tFZ();
  if (*(long *)(lVar11 + 0x10) == 0) {
    _swift_release(lVar11);
LAB_100024fc4:
    *unaff_x20 = lVar6;
    return;
  }
  lVar1 = lVar11 + 0x40;
  uVar7 = (1L << ((ulong)*(byte *)(lVar6 + 0x20) & 0x3f)) + 0x3fU >> 6;
  if (lVar6 != lVar11 || lVar1 + uVar7 * 8 <= lVar6 + 0x40U) {
    _memmove(lVar6 + 0x40U,lVar1,uVar7 << 3);
  }
  lVar12 = 0;
  *(undefined8 *)(lVar6 + 0x10) = *(undefined8 *)(lVar11 + 0x10);
  uVar8 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
  uVar7 = 0xffffffffffffffff;
  if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
    uVar7 = ~(-1L << (uVar8 & 0x3f));
  }
  uVar7 = uVar7 & *(ulong *)(lVar11 + 0x40);
  if (uVar7 == 0) goto LAB_100024f30;
  do {
    uVar9 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
    uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
    uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
    uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
    uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
    uVar7 = uVar7 - 1 & uVar7;
    while( true ) {
      uVar9 = LZCOUNT(uVar9) | lVar12 << 6;
      lVar13 = uVar9 * 0x10;
      puVar2 = (undefined8 *)(*(long *)(lVar11 + 0x30) + lVar13);
      uVar3 = *puVar2;
      uVar4 = puVar2[1];
      lVar10 = uVar9 * 0x20;
      FUN_100026348(*(long *)(lVar11 + 0x38) + lVar10,auStack_80);
      puVar2 = (undefined8 *)(*(long *)(lVar6 + 0x30) + lVar13);
      *puVar2 = uVar3;
      puVar2[1] = uVar4;
      FUN_100026338(auStack_80,*(long *)(lVar6 + 0x38) + lVar10);
      _swift_bridgeObjectRetain(uVar4);
      if (uVar7 != 0) break;
LAB_100024f30:
      do {
        lVar10 = lVar12 + 1;
        if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100024fec);
          (*pcVar5)();
        }
        if ((long)(uVar8 + 0x3f >> 6) <= lVar10) {
          _swift_release(lVar11);
          goto LAB_100024fc4;
        }
        uVar7 = *(ulong *)(lVar1 + lVar10 * 8);
        lVar12 = lVar12 + 1;
      } while (uVar7 == 0);
      uVar9 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar7 = uVar7 - 1 & uVar7;
      lVar12 = lVar10;
    }
  } while( true );
}



/* Entry: 1000252a8; end: 1000252bb;  */

/* WARNING: Removing unreachable block (ram,0x0001000248dc) */
/* WARNING: Removing unreachable block (ram,0x0001000248ec) */
/* WARNING: Removing unreachable block (ram,0x000100024a30) */
/* WARNING: Removing unreachable block (ram,0x0001000248f8) */
/* WARNING: Removing unreachable block (ram,0x000100024900) */
/* WARNING: Removing unreachable block (ram,0x0001000249c0) */
/* WARNING: Removing unreachable block (ram,0x0001000249c8) */
/* WARNING: Removing unreachable block (ram,0x0001000249f8) */
/* WARNING: Removing unreachable block (ram,0x0001000249d8) */
/* WARNING: Removing unreachable block (ram,0x0001000249e0) */
/* WARNING: Removing unreachable block (ram,0x000100024a00) */

undefined * FUN_1000252a8(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  
  lVar7 = *(long *)(param_1 + 0x10);
  lVar6 = *(long *)(param_1 + 0x10);
  if (*(long *)(param_1 + 0x10) <= lVar7) {
    lVar6 = lVar7;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_10004ce00;
  if (lVar6 != 0) {
    puVar2 = (undefined *)0x100052338;
    FUN_100010860(0x100052338,&UNK_10003cd28);
    lVar3 = 0;
    __s23ExtensionsStickerPicker09ExtensionB0VMa();
    lVar8 = *(long *)(*(long *)(lVar3 + -8) + 0x48);
    uVar5 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
    uVar9 = uVar5 + 0x20 & (uVar5 ^ 0xffffffffffffffff);
    _swift_allocObject(puVar2,uVar9 + lVar8 * lVar6,uVar5 | 7);
    puVar4 = puVar2;
    _malloc_size();
    if (lVar8 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100024a2c);
      (*pcVar1)();
    }
    lVar6 = (long)puVar4 - uVar9;
    if (lVar6 == -0x8000000000000000 && lVar8 == -1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100024a30);
      (*pcVar1)();
    }
    lVar3 = 0;
    if (lVar8 != 0) {
      lVar3 = lVar6 / lVar8;
    }
    *(long *)(puVar2 + 0x10) = lVar7;
    *(long *)(puVar2 + 0x18) = lVar3 << 1;
  }
  lVar6 = 0;
  __s23ExtensionsStickerPicker09ExtensionB0VMa();
  uVar5 = (ulong)*(byte *)(*(long *)(lVar6 + -8) + 0x50);
  uVar5 = uVar5 + 0x20 & (uVar5 ^ 0xffffffffffffffff);
  _swift_arrayInitWithCopy(puVar2 + uVar5,param_1 + uVar5,lVar7,lVar6);
  _swift_bridgeObjectRelease(param_1);
  return puVar2;
}



/* Entry: 1000252bc; end: 1000253c7;  */

void FUN_1000252bc(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *unaff_x20;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar8 = *unaff_x20;
  lVar4 = 0;
  __s23ExtensionsStickerPicker09ExtensionB0VMa();
  lVar2 = param_2 - param_1;
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1000253b8);
    (*pcVar3)();
  }
  uVar6 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  lVar1 = lVar8 + (uVar6 + 0x20 & (uVar6 ^ 0xffffffffffffffff));
  lVar9 = *(long *)(*(long *)(lVar4 + -8) + 0x48);
  lVar7 = lVar1 + lVar9 * param_1;
  _swift_arrayDestroy(lVar7,lVar2,lVar4);
  lVar4 = param_3 - lVar2;
  if (SBORROW8(param_3,lVar2)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1000253bc);
    (*pcVar3)();
  }
  if (lVar4 != 0) {
    if (SBORROW8(*(long *)(lVar8 + 0x10),param_2)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1000253c0);
      (*pcVar3)();
    }
    uVar6 = lVar7 + lVar9 * param_3;
    uVar5 = lVar1 + lVar9 * param_2;
    if (uVar6 < uVar5 || uVar5 + (*(long *)(lVar8 + 0x10) - param_2) * lVar9 <= uVar6) {
      _swift_arrayInitWithTakeFrontToBack();
    }
    else if (uVar6 != uVar5) {
      _swift_arrayInitWithTakeBackToFront();
    }
    if (SCARRY8(*(long *)(lVar8 + 0x10),lVar4)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1000253c4);
      (*pcVar3)();
    }
    *(long *)(lVar8 + 0x10) = *(long *)(lVar8 + 0x10) + lVar4;
  }
  if ((0 < param_3) && (0 < lVar9 * param_3)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1000253c8);
    (*pcVar3)();
  }
  return;
}



/* Entry: 1000253c8; end: 100025483;  */

void FUN_1000253c8(long param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100025474);
    (*pcVar2)();
  }
  lVar4 = *unaff_x20;
  lVar5 = *(long *)(lVar4 + 0x10);
  if (lVar5 < param_2) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100025478);
    (*pcVar2)();
  }
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10002547c);
    (*pcVar2)();
  }
  lVar1 = -(param_2 - param_1);
  if (!SBORROW8(0,param_2 - param_1)) {
    if (!SCARRY8(lVar5,lVar1)) {
      lVar3 = lVar4;
      _swift_isUniquelyReferenced_nonNull_native();
      *unaff_x20 = lVar4;
      if (((int)lVar3 == 0) || ((long)(*(ulong *)(lVar4 + 0x18) >> 1) < lVar5 + lVar1)) {
        FUN_1000248b8();
        *unaff_x20 = lVar3;
        lVar4 = lVar3;
      }
      FUN_1000252bc(param_1,param_2,0);
      *unaff_x20 = lVar4;
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100025484);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100025480);
  (*pcVar2)();
}



/* Entry: 100025484; end: 1000255af;  */

undefined * FUN_100025484(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uStack_90;
  ulong uStack_88;
  undefined1 auStack_80 [32];
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_10004ce08;
  if (puVar8 != (undefined *)0x0) {
    FUN_100010860(0x100052308,&UNK_10003cb28);
    puVar5 = puVar8;
    __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ();
    param_1 = param_1 + 0x20;
    _swift_retain();
    do {
      FUN_100026a1c(param_1,&uStack_90,0x100052320,&UNK_10003cb40);
      uVar3 = uStack_88;
      uVar2 = uStack_90;
      uVar6 = uStack_90;
      uVar7 = uStack_88;
      FUN_100024ab4();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1000255ac);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      FUN_100026338(auStack_80,*(long *)(puVar5 + 0x38) + uVar6 * 0x20);
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1000255b0);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      param_1 = param_1 + 0x30;
      puVar8 = puVar8 + -1;
    } while (puVar8 != (undefined *)0x0);
    _swift_release(puVar5);
  }
  return puVar5;
}


