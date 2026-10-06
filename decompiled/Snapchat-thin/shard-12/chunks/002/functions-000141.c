/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108e84840; end: 108e8484f; -[SCStickerPillView intrinsicContentSize] */

void FUN_108e84840(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23d5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)PTR__CGSizeZero_110347620,*(undefined8 *)(PTR__CGSizeZero_110347620 + 8)
             ,param_1,PTR_s_sizeThatFits__11266cf90);
  return;
}



/* Entry: 108e84850; end: 108e848b3; -[SCStickerPillView sizeThatFits:] */

undefined1  [16] FUN_108e84850(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  func_0x00010c087500();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  FUN_108e84ec4();
  _objc_release(uVar1);
  _objc_release(param_3);
  auVar2._8_8_ = param_2;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 108e848b4; end: 108e848c3; -[SCStickerPillView formatForText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e848b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfb5b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277cbd4),PTR_s_formatForText__1125cb078);
  return;
}



/* Entry: 108e848c4; end: 108e848d3; -[SCStickerPillView iconFrame] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e848c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfb68f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277cbec),PTR_s_frame_1125cb3e0);
  return;
}



/* Entry: 108e848d4; end: 108e848e3; -[SCStickerPillView viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e848d4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277cbd8);
}



/* Entry: 108e848e4; end: 108e848f3; -[SCStickerPillView style] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e848e4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277cbdc);
}



/* Entry: 108e848f4; end: 108e84903; -[SCStickerPillView displayFont] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e848f4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277cc00);
}



/* Entry: 108e84904; end: 108e84913; -[SCStickerPillView labelFormatter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e84904(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277cbd4);
}



/* Entry: 108e84914; end: 108e84953; -[SCStickerPillView setLabelFormatter:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e84914(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277cbd4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108e84954; end: 108e84963; -[SCStickerPillView backgroundView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e84954(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277cbe0);
}



/* Entry: 108e84964; end: 108e84973; -[SCStickerPillView solidBackgroundView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e84964(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277cbe4);
}



/* Entry: 108e84974; end: 108e84983; -[SCStickerPillView rainbowBackgroundView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e84974(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277cbe8);
}



/* Entry: 108e84984; end: 108e84993; -[SCStickerPillView iconView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e84984(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277cbec);
}



/* Entry: 108e84994; end: 108e849a3; -[SCStickerPillView label] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e84994(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277cbf0);
}



/* Entry: 108e849a4; end: 108e849b3; -[SCStickerPillView iconLeadingConstraint] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e849a4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277cbf4);
}



/* Entry: 108e849b4; end: 108e849c3; -[SCStickerPillView labelCenterYConstraint] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e849b4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277cbf8);
}



/* Entry: 108e849c4; end: 108e849d3; -[SCStickerPillView labelTrailingConstraint] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e849c4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277cbfc);
}



/* Entry: 108e849d4; end: 108e84aa3; -[SCStickerPillView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e849d4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277cbfc,0);
  _objc_storeStrong(param_1 + _DAT_11277cbf8,0);
  _objc_storeStrong(param_1 + _DAT_11277cbf4,0);
  _objc_storeStrong(param_1 + _DAT_11277cbf0,0);
  _objc_storeStrong(param_1 + _DAT_11277cbec,0);
  _objc_storeStrong(param_1 + _DAT_11277cbe8,0);
  _objc_storeStrong(param_1 + _DAT_11277cbe4,0);
  _objc_storeStrong(param_1 + _DAT_11277cbe0,0);
  _objc_storeStrong(param_1 + _DAT_11277cbd4,0);
  _objc_storeStrong(param_1 + _DAT_11277cc00,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277cbd8,0);
  return;
}



/* Entry: 108e84aa4; end: 108e84aab; -[SCStickerPillViewModel initWithText:iconURL:placeholderIcon:pillType:] */

void FUN_108e84aa4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c051410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithText_iconURL_placeholder_1125f1f08);
  return;
}



/* Entry: 108e84aac; end: 108e84b97; -[SCStickerPillViewModel initWithText:iconURL:placeholderIcon:pillType:iconRenderingMode:] */

undefined1 *
FUN_108e84aac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126fed78;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108e84b98; end: 108e84c9f; -[SCStickerPillViewModel copy] */

undefined * FUN_108e84b98(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = PTR_PTR_1126d4fa8;
  _objc_alloc(PTR_PTR_1126d4fa8);
  uVar2 = param_1;
  func_0x00010c26b700(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  uVar4 = param_1;
  func_0x00010bfe5b40(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf51e00();
  uVar6 = param_1;
  func_0x00010c0fd960(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf51e00();
  uVar8 = param_1;
  func_0x00010c0fbe80(param_1);
  func_0x00010bfe59c0(param_1);
  func_0x00010c051400(puVar1,param_2,uVar3,uVar5,uVar7,uVar8,param_1);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  return puVar1;
}



/* Entry: 108e84ca0; end: 108e84e5f; -[SCStickerPillViewModel isEqual:] */

bool FUN_108e84ca0(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  _objc_retain(param_3);
  if (param_3 == param_1) {
    bVar1 = true;
    goto LAB_108e84e38;
  }
  puVar2 = PTR_PTR_1126d4fa8;
  _objc_opt_class(PTR_PTR_1126d4fa8);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  if ((uVar3 & 1) == 0) {
    bVar1 = false;
    goto LAB_108e84e38;
  }
  _objc_retain(param_3);
  uVar3 = param_1;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c26b700(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c0720c0();
  if ((int)uVar5 == 0) {
    bVar1 = false;
  }
  else {
    uVar5 = param_1;
    func_0x00010bfe5b40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_3;
    func_0x00010bfe5b40(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010c071ae0();
    if ((int)uVar7 == 0) {
      bVar1 = false;
    }
    else {
      uVar7 = param_1;
      func_0x00010c0fd960();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = param_3;
      func_0x00010c0fd960(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar7;
      func_0x00010c071ae0();
      if ((int)uVar9 == 0) {
LAB_108e84dfc:
        bVar1 = false;
      }
      else {
        uVar9 = param_1;
        func_0x00010bfe59c0();
        uVar10 = param_3;
        func_0x00010bfe59c0();
        if (uVar9 != uVar10) goto LAB_108e84dfc;
        func_0x00010c0fbe80(param_1);
        uVar9 = param_3;
        func_0x00010c0fbe80(param_3);
        bVar1 = param_1 == uVar9;
      }
      _objc_release(uVar8);
      _objc_release(uVar7);
    }
    _objc_release(uVar6);
    _objc_release(uVar5);
  }
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(param_3);
LAB_108e84e38:
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 108e84e60; end: 108e84e67; -[SCStickerPillViewModel text] */

undefined8 FUN_108e84e60(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108e84e68; end: 108e84e6f; -[SCStickerPillViewModel iconURL] */

undefined8 FUN_108e84e68(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108e84e70; end: 108e84e77; -[SCStickerPillViewModel placeholderIcon] */

undefined8 FUN_108e84e70(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108e84e78; end: 108e84e7f; -[SCStickerPillViewModel iconRenderingMode] */

undefined8 FUN_108e84e78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108e84e80; end: 108e84e87; -[SCStickerPillViewModel pillType] */

undefined8 FUN_108e84e80(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108e84e88; end: 108e84ec3; -[SCStickerPillViewModel .cxx_destruct] */

void FUN_108e84e88(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108e84ec4; end: 108e85077;  */

undefined1  [16] FUN_108e84ec4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  double dVar11;
  undefined1 auVar12 [16];
  
  puVar3 = PTR_PTR_1126dc458;
  _objc_retain();
  _objc_alloc();
  func_0x00010c009f80();
  puVar4 = puVar3;
  func_0x00010bfb5b40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010c22dc60();
  puVar5 = puVar4;
  func_0x00010c07e280();
  puVar6 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc_init(PTR__OBJC_CLASS___UILabel_1126aec30);
  puVar7 = puVar4;
  func_0x00010bfb61e0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar6,param_2,puVar7);
  _objc_release(puVar7);
  bVar2 = (int)puVar5 == 0;
  uVar1 = 1;
  if (bVar2) {
    uVar1 = 2;
  }
  uVar10 = 0x4044800000000000;
  if (bVar2) {
    uVar10 = 0x404a800000000000;
  }
  dVar9 = 33.0;
  if (bVar2) {
    dVar9 = 38.0;
  }
  dVar11 = 15.0;
  if (bVar2) {
    dVar11 = 30.0;
  }
  func_0x00010c1cfce0(puVar6,param_2,uVar1);
  func_0x00010c213040(puVar6,param_2,4);
  dVar8 = 254.0;
  puVar5 = puVar6;
  func_0x00010c1e0180(0x406fc00000000000,puVar6);
  func_0x000107c30a88();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010bfb3e60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(puVar6,param_2,puVar7);
  _objc_release(puVar7);
  _objc_release(puVar5);
  func_0x00010c0699c0(puVar6);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(puVar3);
  auVar12._8_8_ = uVar10;
  auVar12._0_8_ = dVar11 + dVar9 + (double)(float)(int)dVar8;
  return auVar12;
}



/* Entry: 108e85078; end: 108e8516b; -[SCStickerPillViewV2 initWithImageDownloader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_108e85078(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126fed80;
  uStack_40 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),&uStack_40,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277cc18);
    *(undefined **)((long)puVar1 + (long)_DAT_11277cc18) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf415a0(0x3fe0000000000000,PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    func_0x00010bead780(puVar1);
    func_0x00010beb0700(puVar1);
    func_0x00010beb0c00(puVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108e8516c; end: 108e851eb; -[SCStickerPillViewV2 layoutSubviews] */

void FUN_108e8516c(double param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126fed80;
  uStack_40 = param_2;
  _objc_msgSendSuper2(&uStack_40,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_2);
  _CGRectGetHeight();
  func_0x00010c08c0e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(param_1 * 0.5);
  _objc_release(param_2);
  return;
}



/* Entry: 108e851ec; end: 108e853fb; -[SCStickerPillViewV2 sizeThatFits:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_108e851ec(double param_1,long param_2)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  
  lVar7 = (long)_DAT_11277cc1c;
  lVar6 = *(long *)(param_2 + lVar7);
  _objc_retain(lVar6);
  lVar3 = lVar6;
  func_0x00010c08dea0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    lVar4 = lVar6;
    func_0x00010c08df20();
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar4 != 0;
    _objc_release();
  }
  else {
    bVar1 = true;
  }
  _objc_release(lVar3);
  _objc_release(lVar6);
  lVar6 = *(long *)(param_2 + lVar7);
  _objc_retain(lVar6);
  lVar3 = lVar6;
  func_0x00010c279400();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    lVar7 = lVar6;
    func_0x00010c2794c0();
    _objc_retainAutoreleasedReturnValue();
    bVar2 = lVar7 != 0;
    _objc_release();
  }
  else {
    bVar2 = true;
  }
  _objc_release(lVar3);
  _objc_release(lVar6);
  if ((bool)(bVar1 & bVar2)) {
    uVar5 = *(undefined8 *)(param_2 + _DAT_11277cc20);
    func_0x00010bf869a0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    FUN_108e853fc();
    dVar9 = param_1;
    _objc_release(uVar5);
    func_0x00010c0699c0(*(undefined8 *)(param_2 + _DAT_11277cc24));
    dVar8 = 38.0;
LAB_108e8531c:
    param_1 = param_1 + (double)(float)(int)dVar9 + dVar8 + 8.0;
  }
  else {
    if (bVar1) {
      func_0x00010c0699c0(*(undefined8 *)(param_2 + _DAT_11277cc24));
      dVar9 = 38.0;
    }
    else {
      if (bVar2) {
        uVar5 = *(undefined8 *)(param_2 + _DAT_11277cc20);
        func_0x00010bf869a0(uVar5);
        _objc_retainAutoreleasedReturnValue();
        FUN_108e853fc();
        dVar9 = param_1;
        _objc_release(uVar5);
        func_0x00010c0699c0(*(undefined8 *)(param_2 + _DAT_11277cc24));
        dVar8 = 15.0;
        goto LAB_108e8531c;
      }
      func_0x00010c0699c0(*(undefined8 *)(param_2 + _DAT_11277cc24));
      dVar9 = 15.0;
    }
    param_1 = (double)(float)(int)param_1 + dVar9;
  }
  auVar10._0_8_ = param_1 + 15.0;
  auVar10._8_8_ = 0x4044800000000000;
  return auVar10;
}



/* Entry: 108e853fc; end: 108e85457;  */

undefined1  [16] FUN_108e853fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  _objc_retain();
  func_0x00010c23d0a0(param_3);
  uVar1 = NEON_fminnm(param_1,0x4038000000000000);
  func_0x00010c23d0a0(param_3);
  _objc_release(param_3);
  auVar2._8_8_ = NEON_fminnm(param_2,0x4038000000000000);
  auVar2._0_8_ = uVar1;
  return auVar2;
}



/* Entry: 108e85458; end: 108e85ae7; -[SCStickerPillViewV2 setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e85458(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined *param_5)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  
  _objc_retain(param_5);
  lVar12 = (long)_DAT_11277cc28;
  puVar8 = *(undefined **)(param_3 + lVar12);
  _objc_retain(puVar8);
  _objc_retain(param_5);
  puVar10 = param_5;
  if (puVar8 != param_5) {
    if (param_5 == (undefined *)0x0) {
      _objc_release(puVar8);
    }
    else {
      puVar4 = puVar8;
      func_0x00010c071ae0();
      _objc_release(param_5);
      _objc_release(puVar8);
      if (((ulong)puVar4 & 1) != 0) goto LAB_108e85ac4;
    }
    puVar8 = PTR_PTR_1126dc468;
    puVar9 = *(undefined **)(param_3 + lVar12);
    _objc_retain(puVar9);
    _objc_opt_class(puVar8);
    puVar4 = puVar9;
    _objc_opt_isKindOfClass(puVar9,puVar8);
    puVar8 = puVar9;
    if (((ulong)puVar4 & 1) == 0) {
      puVar8 = (undefined *)0x0;
    }
    _objc_retain(puVar8);
    _objc_release(puVar9);
    puVar4 = PTR_PTR_1126dc468;
    _objc_retain(param_5);
    _objc_opt_class(puVar4);
    puVar9 = param_5;
    _objc_opt_isKindOfClass(param_5,puVar4);
    if (((ulong)puVar9 & 1) == 0) {
      puVar10 = (undefined *)0x0;
    }
    _objc_retain(puVar10);
    _objc_release(param_5);
    _objc_retain(puVar10);
    puVar4 = puVar10;
    func_0x00010c08dea0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar4 == (undefined *)0x0) {
      puVar9 = puVar10;
      func_0x00010c08df20();
      _objc_retainAutoreleasedReturnValue();
      bVar2 = puVar9 == (undefined *)0x0;
      _objc_release();
    }
    else {
      bVar2 = false;
    }
    _objc_release(puVar4);
    _objc_release(puVar10);
    _objc_retain(puVar8);
    puVar4 = puVar8;
    func_0x00010c08dea0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar4 == (undefined *)0x0) {
      puVar4 = puVar8;
      func_0x00010c08df20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar8);
      bVar3 = puVar4 != (undefined *)0x0;
      bVar1 = bVar2;
      if (bVar3) {
        bVar1 = true;
      }
      if (bVar1) goto LAB_108e85614;
      puVar13 = (undefined8 *)(param_3 + _DAT_11277cc2c);
      func_0x00010c162480(*puVar13);
      lVar11 = (long)_DAT_11277cc24;
      func_0x00010c12b8a0(*(undefined8 *)(param_3 + lVar11));
      uVar5 = *(undefined8 *)(param_3 + lVar11);
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = *(long *)(param_3 + _DAT_11277cc30);
      func_0x00010c2793a0(lVar11);
      _objc_retainAutoreleasedReturnValue();
      param_1 = 0x4020000000000000;
LAB_108e856d8:
      uVar6 = uVar5;
      func_0x00010bf493c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *puVar13;
      *puVar13 = uVar6;
      _objc_release(uVar7);
      _objc_release(lVar11);
      _objc_release(uVar5);
      func_0x00010c162480(*puVar13);
    }
    else {
      _objc_release();
      _objc_release(puVar8);
      bVar3 = true;
LAB_108e85614:
      if ((bool)(bVar2 & bVar3)) {
        puVar13 = (undefined8 *)(param_3 + _DAT_11277cc2c);
        func_0x00010c162480(*puVar13);
        lVar11 = (long)_DAT_11277cc24;
        func_0x00010c12b8a0(*(undefined8 *)(param_3 + lVar11));
        uVar5 = *(undefined8 *)(param_3 + lVar11);
        func_0x00010c08de00();
        _objc_retainAutoreleasedReturnValue();
        lVar11 = param_3;
        func_0x00010c08de00(param_3);
        _objc_retainAutoreleasedReturnValue();
        param_1 = 0x402e000000000000;
        goto LAB_108e856d8;
      }
    }
    _objc_retain(puVar10);
    puVar4 = puVar10;
    func_0x00010c279400();
    _objc_retainAutoreleasedReturnValue();
    if (puVar4 == (undefined *)0x0) {
      puVar9 = puVar10;
      func_0x00010c2794c0();
      _objc_retainAutoreleasedReturnValue();
      bVar2 = puVar9 == (undefined *)0x0;
      _objc_release();
    }
    else {
      bVar2 = false;
    }
    _objc_release(puVar4);
    _objc_release(puVar10);
    _objc_retain(puVar8);
    puVar4 = puVar8;
    func_0x00010c279400();
    _objc_retainAutoreleasedReturnValue();
    if (puVar4 == (undefined *)0x0) {
      puVar4 = puVar8;
      func_0x00010c2794c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar8);
      bVar3 = puVar4 != (undefined *)0x0;
      bVar1 = bVar2;
      if (bVar3) {
        bVar1 = true;
      }
      if (bVar1) goto LAB_108e857cc;
      puVar13 = (undefined8 *)(param_3 + _DAT_11277cc34);
      func_0x00010c162480(*puVar13);
      lVar11 = (long)_DAT_11277cc24;
      func_0x00010c12b8a0(*(undefined8 *)(param_3 + lVar11));
      uVar5 = *(undefined8 *)(param_3 + lVar11);
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = *(long *)(param_3 + _DAT_11277cc20);
      func_0x00010c08de00(lVar11);
      _objc_retainAutoreleasedReturnValue();
      param_1 = 0xc020000000000000;
LAB_108e85890:
      uVar6 = uVar5;
      func_0x00010bf493c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *puVar13;
      *puVar13 = uVar6;
      _objc_release(uVar7);
      _objc_release(lVar11);
      _objc_release(uVar5);
      func_0x00010c162480(*puVar13);
    }
    else {
      _objc_release();
      _objc_release(puVar8);
      bVar3 = true;
LAB_108e857cc:
      if ((bool)(bVar2 & bVar3)) {
        puVar13 = (undefined8 *)(param_3 + _DAT_11277cc34);
        func_0x00010c162480(*puVar13);
        lVar11 = (long)_DAT_11277cc24;
        func_0x00010c12b8a0(*(undefined8 *)(param_3 + lVar11));
        uVar5 = *(undefined8 *)(param_3 + lVar11);
        func_0x00010c2793a0();
        _objc_retainAutoreleasedReturnValue();
        lVar11 = param_3;
        func_0x00010c2793a0(param_3);
        _objc_retainAutoreleasedReturnValue();
        param_1 = 0xc02e000000000000;
        goto LAB_108e85890;
      }
    }
    _objc_retain(puVar10);
    uVar5 = *(undefined8 *)(param_3 + lVar12);
    *(undefined **)(param_3 + lVar12) = puVar10;
    _objc_release(uVar5);
    lVar12 = (long)_DAT_11277cc1c;
    _objc_retain(puVar10);
    uVar5 = *(undefined8 *)(param_3 + lVar12);
    *(undefined **)(param_3 + lVar12) = puVar10;
    _objc_release(uVar5);
    puVar4 = puVar10;
    func_0x00010c08df20(puVar10);
    _objc_retainAutoreleasedReturnValue();
    lVar12 = (long)_DAT_11277cc30;
    func_0x00010c1bec20(*(undefined8 *)(param_3 + lVar12));
    _objc_release(puVar4);
    puVar4 = puVar10;
    func_0x00010c08dea0(puVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cc200(*(undefined8 *)(param_3 + lVar12));
    _objc_release(puVar4);
    puVar4 = puVar10;
    func_0x00010c2794c0(puVar10);
    _objc_retainAutoreleasedReturnValue();
    lVar12 = (long)_DAT_11277cc20;
    func_0x00010c1bec20(*(undefined8 *)(param_3 + lVar12));
    _objc_release(puVar4);
    puVar4 = puVar10;
    func_0x00010c279400(puVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cc200(*(undefined8 *)(param_3 + lVar12));
    _objc_release(puVar4);
    puVar4 = puVar10;
    func_0x00010c279400();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar4 != (undefined *)0x0) {
      uVar5 = *(undefined8 *)(param_3 + lVar12);
      func_0x00010bf869a0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      FUN_108e853fc();
      _objc_release(uVar5);
      uVar5 = NEON_fminnm(param_1,0x4038000000000000);
      func_0x00010c181140(uVar5,*(undefined8 *)(param_3 + _DAT_11277cc38));
      uVar5 = NEON_fminnm(param_2,0x4038000000000000);
      func_0x00010c181140(uVar5,*(undefined8 *)(param_3 + _DAT_11277cc3c));
    }
    puVar4 = puVar10;
    func_0x00010bfb40c0();
    if (puVar4 == (undefined *)0x1) {
      puVar9 = PTR__OBJC_CLASS___UIFont_1126aec38;
      func_0x00010bf1ecc0(0x402a000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (puVar4 != (undefined *)0x0) goto LAB_108e85ab4;
      func_0x000107c30a88();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar4;
      func_0x00010bfb3e60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
    }
    puVar4 = puVar10;
    func_0x00010c26b700(puVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bea2080(param_3);
    _objc_release(puVar4);
    _objc_release(puVar9);
  }
LAB_108e85ab4:
  _objc_release(puVar10);
  _objc_release(puVar8);
LAB_108e85ac4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 108e85ae8; end: 108e85b17; -[SCStickerPillViewV2 layoutObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e85ae8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277cc18);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108e85b18; end: 108e85bb7; -[SCStickerPillViewV2 didTriggerEventWithEventName:announcerIdentifier:extraData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e85b18(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010c071ae0(param_3,param_2,&PTR____CFConstantStringClassReference_110f17078);
  if ((int)param_3 != 0) {
    func_0x00010c1cbe20(param_1);
    func_0x00010c23d620(param_1);
    puVar1 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    uVar2 = *(undefined8 *)(param_1 + _DAT_11277cc18);
    func_0x00010bfb68e0(param_1);
    func_0x00010c2971a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 108e85bb8; end: 108e85d8f; -[SCStickerPillViewV2 _setupLeadingIconWithImageDownloader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e85bb8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126b48f0;
  _objc_retain(param_3);
  _objc_opt_new();
  lVar5 = (long)_DAT_11277cc30;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  _objc_release(uVar4);
  func_0x00010c1aa200(*(undefined8 *)(param_1 + lVar5),param_2,param_3);
  _objc_release(param_3);
  func_0x00010c182220(*(undefined8 *)(param_1 + lVar5),param_2,1);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar5),param_2,0);
  func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar5));
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c08de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c08de00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf493c0(0x4018000000000000,uVar2,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bf348e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf348e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf493a0(uVar2,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c2a5060(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf49420(0x4038000000000000);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bfe0660(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf49420(0x4038000000000000);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108e85d90; end: 108e8611b; -[SCStickerPillViewV2 _setupTextView] */

/* WARNING: Possible PIC construction at 0x000108e85fc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108e86034: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108e85fc8) */
/* WARNING: Removing unreachable block (ram,0x000108e86038) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e85d90(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  puVar1 = PTR__OBJC_CLASS___UITextView_1126afb88;
  _objc_opt_new();
  lVar6 = (long)_DAT_11277cc24;
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  *(undefined **)(param_1 + lVar6) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar6));
  _objc_release(puVar1);
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  _objc_retain(uVar4);
  uVar2 = uVar4;
  func_0x00010c08c0e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe7a0(0x3fe0000000000000,0x3fe0000000000000);
  _objc_release(uVar2);
  uVar2 = uVar4;
  func_0x00010c08c0e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe840(0x3ff0000000000000);
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41580(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  uVar2 = uVar4;
  func_0x00010c08c0e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  func_0x00010c1fe740(uVar2);
  _objc_release(uVar2);
  _objc_release(puVar1);
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar6));
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c26ba00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c3c00();
  _objc_release(uVar2);
  func_0x00010c2131e0(*(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18),
                      *(undefined8 *)(param_1 + lVar6));
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c26ba00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bdbc0(0);
  _objc_release(uVar2);
  func_0x00010c1f7b20(*(undefined8 *)(param_1 + lVar6));
  func_0x00010c21e900(*(undefined8 *)(param_1 + lVar6));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar6));
  func_0x00010befbb60(param_1);
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010c08de00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010bf493c0(0x402e000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = (long)_DAT_11277cc2c;
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  *(undefined8 *)(param_1 + lVar5) = uVar2;
  _objc_release(uVar3);
  _objc_release(lVar6);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010c162490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar5),PTR_s_setActive__112636340,1);
  return;
}



/* Entry: 108e8611c; end: 108e861d3;  */

double FUN_108e8611c(double param_1,double param_2,undefined8 param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar1 = param_1;
  _objc_retain();
  FUN_108e86738(param_3);
  dVar2 = dVar1;
  _objc_retain(param_3);
  func_0x00010c099280(param_3);
  dVar3 = dVar2;
  func_0x00010c08dd20(param_3);
  dVar3 = dVar2 + dVar3;
  dVar4 = dVar3 * (double)((long)param_2 + -1);
  FUN_108e86738(dVar3,param_3);
  dVar4 = (dVar2 + dVar4) - dVar3;
  func_0x00010bf6e320(param_3);
  _objc_release(param_3);
  _objc_release(param_3);
  return param_1 * 0.5 - (dVar1 + (dVar3 + dVar4) * 0.5);
}



/* Entry: 108e861d4; end: 108e86403; -[SCStickerPillViewV2 _setupTrailingIconWithImageDownloader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e861d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  puVar1 = PTR_PTR_1126b48f0;
  _objc_retain(param_3);
  _objc_opt_new();
  lVar6 = (long)_DAT_11277cc20;
  uVar3 = *(undefined8 *)(param_1 + lVar6);
  *(undefined **)(param_1 + lVar6) = puVar1;
  _objc_release(uVar3);
  func_0x00010c1aa200(*(undefined8 *)(param_1 + lVar6),param_2,param_3);
  _objc_release(param_3);
  puVar1 = PTR_PTR_1126dc470;
  _objc_alloc(PTR_PTR_1126dc470);
  func_0x00010c02f260();
  func_0x00010bef9980();
  func_0x00010c1aaac0(*(undefined8 *)(param_1 + lVar6),param_2,puVar1);
  func_0x00010c182220(*(undefined8 *)(param_1 + lVar6),param_2,1);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar6),param_2,0);
  func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar6));
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c2793a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010c2793a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf493c0(0xc02e000000000000,uVar2,param_2,lVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar3);
  _objc_release(lVar5);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010bf348e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010bf348e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf493a0(uVar2,param_2,lVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar3);
  _objc_release(lVar5);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf49420(0x4038000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = (long)_DAT_11277cc38;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined8 *)(param_1 + lVar5) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  func_0x00010c162480(*(undefined8 *)(param_1 + lVar5),param_2,1);
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf49420(0x4038000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = (long)_DAT_11277cc3c;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined8 *)(param_1 + lVar5) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  func_0x00010c162480(*(undefined8 *)(param_1 + lVar5),param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108e86404; end: 108e86657; -[SCStickerPillViewV2 _setAttributedTextWithText:font:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_108e86404(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined **ppuStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableParagraphStyle_1126aec00;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_alloc_init();
  func_0x00010c1bdc00(0);
  puVar2 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
  uStack_b8 = *(undefined8 *)PTR__NSParagraphStyleAttributeName_110345820;
  uStack_b0 = *(undefined8 *)PTR__NSBaselineOffsetAttributeName_1103457c0;
  ppuStack_90 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d0780;
  uStack_a8 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_98 = puVar1;
  func_0x00010c2a4b20();
  _objc_retainAutoreleasedReturnValue();
  uStack_a0 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_88 = puVar3;
  uStack_80 = param_6;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_4,&puStack_98,&uStack_b8,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04e840(puVar2,param_4,param_5,puVar4);
  _objc_release(param_5);
  lVar8 = (long)_DAT_11277cc24;
  func_0x00010c16b720(*(undefined8 *)(param_3 + lVar8),param_4,puVar2);
  _objc_release(puVar2);
  _objc_release(puVar4);
  _objc_release(puVar3);
  uVar5 = *(undefined8 *)(param_3 + lVar8);
  func_0x00010bfb3a80(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0699c0(*(undefined8 *)(param_3 + lVar8));
  uVar6 = *(ulong *)(param_3 + lVar8);
  func_0x00010c26ba00(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c0c3580();
  FUN_108e8611c(param_2,(double)uVar7,uVar5);
  func_0x00010c181140(*(undefined8 *)(param_3 + _DAT_11277cc40));
  _objc_release(uVar6);
  _objc_release(uVar5);
  func_0x00010c1cbe20(param_3);
  func_0x00010c23d620(param_3);
  puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  uVar5 = *(undefined8 *)(param_3 + _DAT_11277cc18);
  func_0x00010bfb68e0(param_3);
  func_0x00010c2971a0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar5,param_4,puVar2);
  _objc_release(param_6);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return puVar1;
  }
  ___stack_chk_fail();
  return *(undefined **)(puVar1 + _DAT_11277cc28);
}



/* Entry: 108e86658; end: 108e86667; -[SCStickerPillViewV2 viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e86658(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277cc28);
}



/* Entry: 108e86668; end: 108e86737; -[SCStickerPillViewV2 .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e86668(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277cc28,0);
  _objc_storeStrong(param_1 + _DAT_11277cc30,0);
  _objc_storeStrong(param_1 + _DAT_11277cc3c,0);
  _objc_storeStrong(param_1 + _DAT_11277cc38,0);
  _objc_storeStrong(param_1 + _DAT_11277cc20,0);
  _objc_storeStrong(param_1 + _DAT_11277cc34,0);
  _objc_storeStrong(param_1 + _DAT_11277cc40,0);
  _objc_storeStrong(param_1 + _DAT_11277cc2c,0);
  _objc_storeStrong(param_1 + _DAT_11277cc18,0);
  _objc_storeStrong(param_1 + _DAT_11277cc24,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277cc1c,0);
  return;
}



/* Entry: 108e86738; end: 108e8678f;  */

double FUN_108e86738(double param_1,undefined8 param_2)

{
  double dVar1;
  
  _objc_retain();
  func_0x00010c099280(param_2);
  dVar1 = param_1;
  func_0x00010bf2f960(param_2);
  param_1 = param_1 - dVar1;
  func_0x00010bf6e320(param_2);
  _objc_release(param_2);
  return param_1 + dVar1;
}



/* Entry: 108e86790; end: 108e86a77;  */

void FUN_108e86790(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110efcdd8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110efcdd8,
                      &PTR____CFConstantStringClassReference_110efcdf8,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 108e86a78; end: 108e86bbf; -[SCStickerPillViewModelV2 initWithText:fontStyle:leadingIcon:leadingPlaceholderIcon:trailingIcon:trailingPlaceholderIcon:] */

undefined1 *
FUN_108e86a78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126fed88;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108e86bc0; end: 108e86be3; -[SCStickerPillViewModelV2 copyWithZone:] */

undefined8 FUN_108e86bc0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108e86be4; end: 108e86c87; -[SCStickerPillViewModelV2 hash] */

undefined8 * FUN_108e86be4(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x10);
  uStack_48 = *(undefined8 *)(param_1 + 0x18);
  lStack_50 = -lVar5;
  if (-1 < lVar5) {
    lStack_50 = lVar5;
  }
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  puVar3 = &uStack_58;
  uStack_30 = uVar1;
  func_0x000107c3191c(puVar3,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_108e86d60:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_108e86d6c;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (puVar3[2] == param_3[2])) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[3];
        if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[4];
          if ((lVar5 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = puVar3[5];
            if ((lVar5 == param_3[5]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              puVar6 = (undefined8 *)puVar3[6];
              if (puVar6 != (undefined8 *)param_3[6]) {
                func_0x00010c071ae0();
                goto LAB_108e86d6c;
              }
              goto LAB_108e86d60;
            }
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_108e86d6c:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 108e86c88; end: 108e86d87; -[SCStickerPillViewModelV2 isEqual:] */

long FUN_108e86c88(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108e86d60:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108e86d6c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x30);
              if (lVar3 != *(long *)(param_3 + 0x30)) {
                func_0x00010c071ae0();
                goto LAB_108e86d6c;
              }
              goto LAB_108e86d60;
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_108e86d6c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108e86d88; end: 108e86d8f; -[SCStickerPillViewModelV2 text] */

undefined8 FUN_108e86d88(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108e86d90; end: 108e86d97; -[SCStickerPillViewModelV2 fontStyle] */

undefined8 FUN_108e86d90(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108e86d98; end: 108e86d9f; -[SCStickerPillViewModelV2 leadingIcon] */

undefined8 FUN_108e86d98(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108e86da0; end: 108e86da7; -[SCStickerPillViewModelV2 leadingPlaceholderIcon] */

undefined8 FUN_108e86da0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108e86da8; end: 108e86daf; -[SCStickerPillViewModelV2 trailingIcon] */

undefined8 FUN_108e86da8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108e86db0; end: 108e86db7; -[SCStickerPillViewModelV2 trailingPlaceholderIcon] */

undefined8 FUN_108e86db0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108e86db8; end: 108e86e0b; -[SCStickerPillViewModelV2 .cxx_destruct] */

void FUN_108e86db8(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108e86e0c; end: 108e86f03; -[SCBrushSizeAffordance initWithFrame:] */

undefined1 * FUN_108e86e0c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126fed90;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe800(0x3f000000);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    func_0x00010c1fe740(puVar2);
    _objc_release(puVar3);
    func_0x00010c1fe7a0(0,0,puVar2);
    func_0x00010c1fe840(0x4024000000000000,puVar2);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar3);
    func_0x00010c182220(puVar1);
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108e86f04; end: 108e8715b; -[SCBrushSizeAffordance drawRect:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e86f04(undefined8 param_1,undefined8 param_2,double param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined *param_7,undefined8 *param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  double dVar7;
  undefined8 uVar8;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = (long)_DAT_11277cc5c;
  if (*(long *)(param_5 + lVar6) == 0) {
    lVar6 = (long)_DAT_11277cc60;
    if (*(long *)(param_5 + lVar6) == 0) {
      if (*(long *)(param_5 + _DAT_11277cc64) == 0) goto LAB_108e8704c;
      lVar6 = param_5;
      _UIGraphicsGetCurrentContext();
      _CGContextAddEllipseInRect(param_1,param_2,param_3,param_4);
      func_0x00010bf40c40();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_5;
      _objc_retainAutorelease();
      func_0x00010bdc0fe0();
      _CGColorGetComponents();
      _CGContextSetFillColor(lVar6,lVar4);
      _objc_release(param_5);
      _CGContextFillPath(lVar6);
    }
    else {
      _UIGraphicsGetCurrentContext();
      _UIGraphicsPushContext();
      param_7 = (undefined *)0x0;
      func_0x00010bf89940(param_1,param_2,param_3,param_4,0x3ff0000000000000,
                          *(undefined8 *)(param_5 + lVar6));
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbc89c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__UIGraphicsPopContext_110345c80)();
      return;
    }
  }
  else {
    lVar4 = param_5;
    _UIGraphicsGetCurrentContext();
    _CGContextAddEllipseInRect(param_1,param_2,param_3,param_4);
    _UIGraphicsPushContext(lVar4);
    puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
    uVar5 = *(undefined8 *)(param_5 + lVar6);
    uStack_78 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
    dVar7 = param_3 / 22.0;
    func_0x00010bf278e0(dVar7,PTR_PTR_1126c3d70);
    func_0x00010c266f40(param_3 * dVar7);
    _objc_retainAutoreleasedReturnValue();
    uStack_70 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    puStack_68 = puVar1;
    func_0x00010c2a4b20();
    _objc_retainAutoreleasedReturnValue();
    param_8 = &uStack_78;
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_60 = puVar2;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    param_7 = puVar3;
    func_0x00010bf89960(param_1,param_2,param_3,param_4,uVar5);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
    _UIGraphicsPopContext();
LAB_108e8704c:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return;
    }
  }
  ___stack_chk_fail();
  _objc_retain(param_8);
  _objc_retain(param_7);
  puVar1 = param_7;
  func_0x00010c23d0a0(param_7);
  _UIGraphicsBeginImageContext();
  _UIGraphicsGetCurrentContext();
  func_0x00010c19bbe0(param_8);
  _objc_release(param_8);
  func_0x00010c23d0a0(param_7);
  _CGContextTranslateCTM(0,puVar1);
  uVar5 = 0x3ff0000000000000;
  uVar8 = 0xbff0000000000000;
  _CGContextScaleCTM(0x3ff0000000000000,0xbff0000000000000,puVar1);
  _CGContextSetBlendMode(puVar1,0);
  func_0x00010c23d0a0(param_7);
  func_0x00010c23d0a0(param_7);
  puVar2 = param_7;
  _objc_retainAutorelease(param_7);
  func_0x00010bdc1020();
  _CGContextDrawImage(0,0,uVar5,uVar8,puVar1,puVar2);
  puVar2 = param_7;
  _objc_retainAutorelease(param_7);
  func_0x00010bdc1020();
  _objc_release(param_7);
  _CGContextClipToMask(0,0,uVar5,uVar8,puVar1,puVar2);
  _CGContextAddRect(0,0,uVar5,uVar8,puVar1);
  _CGContextDrawPath(puVar1,0);
  _UIGraphicsGetImageFromCurrentImageContext();
  _objc_retainAutoreleasedReturnValue();
  _UIGraphicsEndImageContext();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108e8715c; end: 108e8729f; -[SCBrushSizeAffordance _recoloredImage:color:] */

void FUN_108e8715c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c23d0a0(param_3);
  _UIGraphicsBeginImageContext();
  _UIGraphicsGetCurrentContext();
  func_0x00010c19bbe0(param_4);
  _objc_release(param_4);
  func_0x00010c23d0a0(param_3);
  _CGContextTranslateCTM(0,uVar1);
  uVar3 = 0x3ff0000000000000;
  uVar4 = 0xbff0000000000000;
  _CGContextScaleCTM(0x3ff0000000000000,0xbff0000000000000,uVar1);
  _CGContextSetBlendMode(uVar1,0);
  func_0x00010c23d0a0(param_3);
  func_0x00010c23d0a0(param_3);
  uVar2 = param_3;
  _objc_retainAutorelease(param_3);
  func_0x00010bdc1020();
  _CGContextDrawImage(0,0,uVar3,uVar4,uVar1,uVar2);
  uVar2 = param_3;
  _objc_retainAutorelease(param_3);
  func_0x00010bdc1020();
  _objc_release(param_3);
  _CGContextClipToMask(0,0,uVar3,uVar4,uVar1,uVar2);
  _CGContextAddRect(0,0,uVar3,uVar4,uVar1);
  _CGContextDrawPath(uVar1,0);
  _UIGraphicsGetImageFromCurrentImageContext();
  _objc_retainAutoreleasedReturnValue();
  _UIGraphicsEndImageContext();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108e872a0; end: 108e87323; -[SCBrushSizeAffordance setWidth:withCenter:] */

void FUN_108e872a0(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010c19f0e0(0,0,param_1,param_1);
  func_0x00010c17a6a0(param_2,param_3,param_4);
  func_0x00010c08c0e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(param_1 * 0.5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 108e87324; end: 108e873bb; -[SCBrushSizeAffordance setPinchImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e87324(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar3 = *(long *)(param_1 + _DAT_11277cc64);
  lVar1 = param_3;
  if (lVar3 != 0) {
    lVar1 = param_1;
    func_0x00010be871e0(param_1,param_2,param_3,lVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  lVar4 = (long)_DAT_11277cc60;
  _objc_retain(lVar1);
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  *(long *)(param_1 + lVar4) = lVar1;
  _objc_release(uVar2);
  if (lVar3 != 0) {
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108e873bc; end: 108e8743f; -[SCBrushSizeAffordance setColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e873bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_11277cc64;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = param_3;
  _objc_release(uVar1);
  lVar3 = (long)_DAT_11277cc60;
  if (*(long *)(param_1 + lVar3) != 0) {
    lVar2 = param_1;
    func_0x00010be871e0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    *(long *)(param_1 + lVar3) = lVar2;
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108e87440; end: 108e8744f; -[SCBrushSizeAffordance color] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e87440(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277cc64);
}



/* Entry: 108e87450; end: 108e8745f; -[SCBrushSizeAffordance emoji] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e87450(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277cc5c);
}



/* Entry: 108e87460; end: 108e8746b; -[SCBrushSizeAffordance setEmoji:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e87460(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108e8746c; end: 108e8747b; -[SCBrushSizeAffordance pinchImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e8746c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277cc60);
}



/* Entry: 108e8747c; end: 108e874cb; -[SCBrushSizeAffordance .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e8747c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277cc60,0);
  _objc_storeStrong(param_1 + _DAT_11277cc5c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277cc64,0);
  return;
}



/* Entry: 108e874cc; end: 108e87597; -[SCDrawingCache init] */

undefined1 * FUN_108e874cc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fed98;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108e87598; end: 108e875e7; -[SCDrawingCache receivedMemoryWarning] */

/* WARNING: Possible PIC construction at 0x000108e875c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108e875c4) */

void FUN_108e87598(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  uVar1 = uVar2;
  func_0x00010bf529e0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c12d530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_removeObjectsInRange__112628f68,0,uVar1 >> 1);
  return;
}



/* Entry: 108e875e8; end: 108e876b7; -[SCDrawingCache setCachedImage:forIndex:] */

void FUN_108e875e8(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  func_0x00010c12b5a0(param_1,param_2,param_4);
  if ((param_3 != 0) && (param_4 % 10 == 0)) {
    lVar1 = param_3;
    _UIImagePNGRepresentation();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      uVar3 = *(undefined8 *)(param_1 + 8);
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(uVar3,param_2,puVar2);
      _objc_release(puVar2);
      func_0x00010befa120(*(undefined8 *)(param_1 + 0x10),param_2,lVar1);
    }
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108e876b8; end: 108e8772f; -[SCDrawingCache removeCachedImageAfterIndex:] */

void FUN_108e876b8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  while( true ) {
    func_0x00010bf529e0();
    if (lVar1 == 0) {
      return;
    }
    lVar2 = *(long *)(param_1 + 8);
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010c067fc0();
    _objc_release(lVar2);
    if (lVar1 < param_3) break;
    func_0x00010c12cd60(*(undefined8 *)(param_1 + 8));
    func_0x00010c12cd60(*(undefined8 *)(param_1 + 0x10));
    lVar1 = *(long *)(param_1 + 8);
  }
  return;
}



/* Entry: 108e87730; end: 108e8782b; -[SCDrawingCache mostRecentImageBeforeIndex:] */

void FUN_108e87730(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bf529e0();
  do {
    lVar1 = lVar1 + -1;
    if (lVar1 < 0) {
      *param_3 = 0;
      puVar5 = PTR__OBJC_CLASS___UIImage_1126aea68;
      _objc_alloc_init(PTR__OBJC_CLASS___UIImage_1126aea68);
      goto LAB_108e87814;
    }
    lVar2 = *(long *)(param_1 + 8);
    func_0x00010c0dfd40(lVar2,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c067fc0();
    lVar6 = *param_3;
    _objc_release(lVar2);
  } while (lVar6 < lVar3);
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010c0dfd40(lVar2,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c067fc0();
  *param_3 = lVar3;
  _objc_release(lVar2);
  puVar5 = PTR__OBJC_CLASS___UIImage_1126aea68;
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0dfd40(uVar4,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14d040(puVar5,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
LAB_108e87814:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 108e8782c; end: 108e8785b; -[SCDrawingCache .cxx_destruct] */

void FUN_108e8782c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108e8785c; end: 108e8789f; -[SCDrawingGestureRecognizer initWithTarget:action:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e8785c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puVar1 = &uStack_20;
  puStack_18 = PTR_PTR_1126feda0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithTarget_action__1125f1c48);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277cc70) = 0;
  }
  return;
}



/* Entry: 108e878a0; end: 108e87aa7; -[SCDrawingGestureRecognizer touchesBegan:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e878a0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lStack_160;
  undefined *puStack_158;
  long lStack_150;
  long lStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_e8;
  undefined *puStack_e0;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_e0 = PTR_PTR_1126feda0;
  lStack_e8 = param_3;
  _objc_msgSendSuper2(&lStack_e8,PTR_s_touchesBegan_withEvent__11267b780,param_5,param_6);
  lVar3 = param_3;
  func_0x00010c252440();
  if (lVar3 == 0) {
    lVar3 = param_5;
    func_0x00010bf529e0();
    lVar3 = *(long *)(param_3 + _DAT_11277cc70) + lVar3;
    *(long *)(param_3 + _DAT_11277cc70) = lVar3;
    if (1 < lVar3) {
      func_0x00010c209fc0(param_3);
      goto LAB_108e87a60;
    }
    lVar3 = param_6;
    func_0x00010bf00c80(param_6);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010bf04a20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    puVar1 = (undefined8 *)(param_3 + _DAT_11277cc74);
    lVar3 = lVar2;
    func_0x00010c29bf00(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09ef00(lVar2);
    *puVar1 = param_1;
    puVar1[1] = param_2;
    _objc_release(lVar3);
    lVar3 = (long)_DAT_11277cc78;
    uVar6 = *puVar1;
    ((undefined8 *)(param_3 + lVar3))[1] = puVar1[1];
    *(undefined8 *)(param_3 + lVar3) = uVar6;
  }
  else {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    _objc_retain(param_5);
    lVar3 = param_5;
    func_0x00010bf52a60();
    lVar2 = param_5;
    if (lVar3 != 0) {
      lVar4 = *plStack_120;
      do {
        lVar5 = 0;
        do {
          if (*plStack_120 != lVar4) {
            _objc_enumerationMutation(param_5);
          }
          func_0x00010bfe68e0(param_3);
          lVar5 = lVar5 + 1;
        } while (lVar3 != lVar5);
        lVar3 = param_5;
        func_0x00010bf52a60();
      } while (lVar3 != 0);
    }
  }
  _objc_release(lVar2);
LAB_108e87a60:
  _objc_release(param_6);
  lVar3 = param_5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    pcStack_138 = FUN_108e87aa8;
    puStack_158 = PTR_PTR_1126feda0;
    lStack_160 = lVar3;
    lStack_150 = param_6;
    lStack_148 = param_5;
    puStack_140 = &stack0xfffffffffffffff0;
    _objc_msgSendSuper2(&lStack_160,PTR_s_touchesMoved_withEvent__11252ca58);
    if ((*(long *)(lVar3 + _DAT_11277cc70) == 1) &&
       (lVar2 = lVar3, func_0x00010c252440(), lVar2 == 0)) {
      func_0x00010c209fc0(lVar3);
    }
    return;
  }
  return;
}



/* Entry: 108e87aa8; end: 108e87b13; -[SCDrawingGestureRecognizer touchesMoved:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e87aa8(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126feda0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_touchesMoved_withEvent__11252ca58);
  if ((*(long *)(param_1 + _DAT_11277cc70) == 1) &&
     (lVar1 = param_1, func_0x00010c252440(), lVar1 == 0)) {
    func_0x00010c209fc0(param_1);
  }
  return;
}



/* Entry: 108e87b14; end: 108e87bcf; -[SCDrawingGestureRecognizer touchesEnded:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e87b14(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c252440();
  if (lVar1 == 0) {
    func_0x00010c209fc0(param_1);
  }
  puStack_38 = PTR_PTR_1126feda0;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_touchesEnded_withEvent__11267b788,param_3,param_4);
  func_0x00010c209fc0(param_1);
  lVar1 = param_3;
  func_0x00010bf529e0();
  _objc_release(param_3);
  *(long *)(param_1 + _DAT_11277cc70) = *(long *)(param_1 + _DAT_11277cc70) - lVar1;
  _objc_release(param_4);
  return;
}



/* Entry: 108e87bd0; end: 108e87c67; -[SCDrawingGestureRecognizer touchesCancelled:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e87bd0(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_s_touchesEnded_withEvent__11267b788;
  puStack_38 = PTR_PTR_1126feda0;
  lStack_40 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_40,puVar1,param_3,param_4);
  func_0x00010c209fc0(param_1);
  lVar2 = param_3;
  func_0x00010bf529e0();
  _objc_release(param_3);
  *(long *)(param_1 + _DAT_11277cc70) = *(long *)(param_1 + _DAT_11277cc70) - lVar2;
  return;
}



/* Entry: 108e87c68; end: 108e87cb3; -[SCDrawingGestureRecognizer reset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e87c68(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126feda0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_reset_11262ba18);
  *(undefined8 *)(param_1 + _DAT_11277cc70) = 0;
  return;
}



/* Entry: 108e87cb4; end: 108e87cc7; -[SCDrawingGestureRecognizer initialPoint] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_108e87cb4(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_11277cc74);
}



/* Entry: 108e87cc8; end: 108e8807f; -[SCDrawingView initWithFrame:multiCache:grapheneRegistry:snapDocEditor:snapEditor:previewABServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_108e87cc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_90;
  undefined *puStack_88;
  
  puVar1 = &uStack_90;
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_88 = PTR_PTR_1126feda8;
  uStack_90 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,&uStack_90,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c160fc0(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010bf20c00(puVar1);
    func_0x00010c013de0();
    lVar4 = (long)_DAT_11277cc7c;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010c21e900(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010befbb60(puVar1);
    puVar2 = PTR_PTR_1126dc478;
    _objc_alloc();
    func_0x00010bf20c00(puVar1);
    func_0x00010c013de0();
    lVar4 = (long)_DAT_11277cc80;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010c21e900(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010c1d4c20(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010befbb60(puVar1);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277cc84);
    *(undefined **)((long)puVar1 + (long)_DAT_11277cc84) = puVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277cc88) = 0x3ff0000000000000;
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c1248c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277cc8c);
    *(undefined **)((long)puVar1 + (long)_DAT_11277cc8c) = puVar2;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_11277cc90;
    _objc_retain(param_9);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_9;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_11277cc94;
    _objc_retain(param_10);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_10;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_11277cc98;
    _objc_retain(param_11);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_11;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277cc9c) = 1;
    func_0x00010c187c40(*(undefined8 *)((long)puVar1 + lVar4));
    *(undefined1 *)((long)puVar1 + (long)_DAT_11277cca0) = 1;
    puVar2 = PTR_PTR_1126dc418;
    _objc_alloc();
    func_0x00010c050900();
    lVar4 = (long)_DAT_11277cca4;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010bef9040(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIPinchGestureRecognizer_1126b3868;
    _objc_alloc();
    func_0x00010c050900();
    lVar4 = (long)_DAT_11277cca8;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010bef9040(puVar1);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11277ccac) = 0;
    if (param_7 == 0) {
      puVar2 = PTR_PTR_1126dc480;
      _objc_alloc_init();
      uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277ccb4);
      *(undefined **)((long)puVar1 + (long)_DAT_11277ccb4) = puVar2;
    }
    else {
      lVar4 = (long)_DAT_11277ccb0;
      _objc_retain(param_7);
      uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
      *(long *)((long)puVar1 + lVar4) = param_7;
    }
    _objc_release(uVar3);
    lVar4 = (long)_DAT_11277ccb8;
    _objc_retain(param_8);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_8;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277ccbc);
    *(undefined **)((long)puVar1 + (long)_DAT_11277ccbc) = puVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 108e88080; end: 108e88097; -[SCDrawingView _hasMultiSnapDrawingCache] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_108e88080(long param_1)

{
  return *(long *)(param_1 + _DAT_11277ccb0) != 0;
}



/* Entry: 108e88098; end: 108e880b3; -[SCDrawingView setDefaultStrokeWidth:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e88098(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_11277ccc0) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010c18b210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_2 + _DAT_11277cc80),PTR_s_setDefaultStrokeWidth__1126406a0);
  return;
}



/* Entry: 108e880b4; end: 108e88113; -[SCDrawingView startNewStrokeWithColor:lineWidth:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e880b4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  func_0x00010c14a2c0(param_2);
  func_0x00010c285460(param_1,*(undefined8 *)(param_2 + _DAT_11277cc80),param_3,param_4,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 108e88114; end: 108e8819f; -[SCDrawingView startNewStrokeWithEmoji:lineWidth:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e88114(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  func_0x00010c14a2c0(param_2);
  uVar2 = *(undefined8 *)(param_2 + _DAT_11277cc80);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c285460(param_1,uVar2,param_3,puVar1,param_4,1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108e881a0; end: 108e8834f; -[SCDrawingView saveCurrentStrokeToHistoryIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e881a0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  long lStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lVar8 = (long)_DAT_11277cc80;
  iVar2 = (int)*(undefined8 *)(param_1 + lVar8);
  func_0x00010bfd6720();
  if (iVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + lVar8);
    func_0x00010c25dba0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = (long)_DAT_11277cc84;
    func_0x00010befa120(*(undefined8 *)(param_1 + lVar7),param_2,uVar3);
    uVar4 = *(undefined8 *)(param_1 + lVar8);
    *(long *)(param_1 + _DAT_11277cc9c) = *(long *)(param_1 + _DAT_11277cc9c) + 1;
    func_0x00010c187c40(uVar4);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_108e88350;
    puStack_70 = &UNK_110842e18;
    ppuVar5 = &puStack_88;
    lStack_68 = param_1;
    _objc_retainBlock();
    if (*(long *)(param_1 + _DAT_11277ccb0) == 0) {
      (*(code *)ppuVar5[2])(ppuVar5);
    }
    else {
      lVar6 = param_1;
      func_0x00010bfe7a60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_11277cc7c),param_2,lVar6);
      lVar7 = *(long *)(param_1 + lVar7);
      func_0x00010bf529e0();
      if (((ulong)(lVar7 * -0x3333333333333333) >> 1 | lVar7 * -0x3333333333333333 << 0x3f) <
          0x199999999999999a) {
        uVar4 = *(undefined8 *)(param_1 + _DAT_11277ccbc);
        puStack_b8 = puVar1;
        uStack_b0 = 0xc2000000;
        pcStack_a8 = FUN_108e8843c;
        puStack_a0 = &UNK_110841f80;
        lStack_98 = param_1;
        _objc_retain(lVar6);
        lStack_90 = lVar6;
        func_0x00010c0f7fc0(uVar4,param_2,&puStack_b8);
        _objc_release(lStack_90);
      }
      _objc_release(lVar6);
    }
    func_0x00010bf3b240(*(undefined8 *)(param_1 + lVar8));
    _objc_release(ppuVar5);
    _objc_release(uVar3);
  }
  return;
}



/* Entry: 108e88350; end: 108e8841f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e88350(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfe7a60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277cc7c),param_2,
                      uVar1);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277cc84);
  func_0x00010bf529e0();
  lStack_48 = *(long *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(lStack_48 + _DAT_11277ccbc);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_108e88420;
  puStack_50 = &UNK_110844b80;
  uStack_40 = uVar1;
  uStack_38 = uVar2;
  _objc_retain(uVar1);
  func_0x00010c0f7fc0(uVar3,param_2,&puStack_68);
  _objc_release(uStack_40);
  _objc_release(uVar1);
  return;
}



/* Entry: 108e88420; end: 108e8843b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e88420(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1753d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277ccb4),
             PTR_s_setCachedImage_forIndex__11263af10,*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 108e8843c; end: 108e884f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e8843c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277ccb0);
  lVar8 = (long)_DAT_11277cc84;
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar8);
  func_0x00010bfb1920(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c280560();
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar8);
  func_0x00010c089820(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c280560();
  uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar8);
  func_0x00010bf529e0(uVar6);
  func_0x00010bef73e0(uVar7,param_2,uVar1,uVar3,uVar5,uVar6);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108e884f4; end: 108e88647; -[SCDrawingView historyIds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e884f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar5 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar6 = *(long *)(param_5 + _DAT_11277cc84);
  _objc_retain(lVar6);
  lVar1 = lVar6;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar7 = *plStack_110;
    do {
      lVar8 = 0;
      do {
        if (*plStack_110 != lVar7) {
          _objc_enumerationMutation(lVar6);
        }
        puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        uVar2 = *(undefined8 *)(lStack_118 + lVar8 * 8);
        func_0x00010c280560(uVar2);
        func_0x00010c0df780(puVar3,param_6,uVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar4,param_6,puVar3);
        _objc_release(puVar3);
        lVar8 = lVar8 + 1;
      } while (lVar1 != lVar8);
      lVar1 = lVar6;
      puVar5 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_retain(puVar5);
    func_0x00010bf20c00(lVar6);
    puVar4 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e120();
    _UIGraphicsBeginImageContextWithOptions(param_3,param_4,uVar9,0);
    _objc_release(puVar4);
    if (puVar5 != (undefined8 *)0x0) {
      func_0x00010bf20c00(lVar6);
      func_0x00010bf89920(puVar5);
    }
    puVar4 = *(undefined **)(lVar6 + _DAT_11277cc80);
    func_0x00010c08c0e0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar4;
    _UIGraphicsGetCurrentContext();
    func_0x00010c12fc60(puVar4,param_6,puVar3);
    _objc_release(puVar4);
    _UIGraphicsGetImageFromCurrentImageContext();
    _objc_retainAutoreleasedReturnValue();
    _UIGraphicsEndImageContext();
    _objc_release(puVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108e88648; end: 108e8872f; -[SCDrawingView drawCurrentStrokeOntoImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e88648(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,long param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_7);
  func_0x00010bf20c00(param_5);
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  _UIGraphicsBeginImageContextWithOptions(param_3,param_4,param_1,0);
  _objc_release(puVar1);
  if (param_7 != 0) {
    func_0x00010bf20c00(param_5);
    func_0x00010bf89920(param_7);
  }
  uVar2 = *(undefined8 *)(param_5 + _DAT_11277cc80);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  _UIGraphicsGetCurrentContext();
  func_0x00010c12fc60(uVar2,param_6,uVar3);
  _objc_release(uVar2);
  _UIGraphicsGetImageFromCurrentImageContext();
  _objc_retainAutoreleasedReturnValue();
  _UIGraphicsEndImageContext();
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108e88730; end: 108e8873f; -[SCDrawingView finishStroke] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e88730(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277cc80),PTR_s_finishDrawingStroke_1125c97b8);
  return;
}



/* Entry: 108e88740; end: 108e889ef; -[SCDrawingView undoStroke] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e88740(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  
  lVar12 = (long)_DAT_11277cc80;
  iVar1 = (int)*(undefined8 *)(param_2 + lVar12);
  func_0x00010bfd6720();
  if (iVar1 == 0) {
    lVar3 = (long)_DAT_11277cc84;
    lVar12 = *(long *)(param_2 + lVar3);
    func_0x00010bf529e0();
    if (lVar12 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = *(long *)(param_2 + lVar3);
      func_0x00010c089820();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12cd60(*(undefined8 *)(param_2 + lVar3));
      uVar7 = *(undefined8 *)(param_2 + lVar3);
      func_0x00010bf529e0(uVar7);
      func_0x00010be95600(param_2,param_3,uVar7,0);
    }
  }
  else {
    lVar2 = *(long *)(param_2 + lVar12);
    func_0x00010c25dba0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3b240(*(undefined8 *)(param_2 + lVar12));
    lVar10 = (long)_DAT_11277cc84;
    lVar3 = *(long *)(param_2 + lVar10);
    func_0x00010bf529e0();
    if ((lVar3 != 0) && (uVar4 = param_2, func_0x00010be34200(), (uVar4 & 1) == 0)) {
      uVar5 = *(undefined8 *)(param_2 + lVar10);
      func_0x00010c089820(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar11 = *(undefined8 *)(param_2 + lVar12);
      uVar7 = uVar5;
      func_0x00010bf40c40();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bf8e2c0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c099460(uVar5);
      uVar8 = uVar5;
      func_0x00010bf89e60(uVar5);
      func_0x00010c285460(param_1,uVar11,param_3,uVar7,uVar6,uVar8);
      _objc_release(uVar6);
      _objc_release(uVar7);
      _objc_release(uVar5);
    }
    uVar7 = *(undefined8 *)(param_2 + lVar12);
    *(long *)(param_2 + (long)_DAT_11277cc9c) = *(long *)(param_2 + (long)_DAT_11277cc9c) + 1;
    func_0x00010c187c40(uVar7);
  }
  lVar12 = (long)_DAT_11277cc90;
  iVar1 = (int)*(undefined8 *)(param_2 + lVar12);
  func_0x00010bf926c0();
  if (iVar1 != 0) {
    uVar8 = *(undefined8 *)(param_2 + (long)_DAT_11277cc94);
    func_0x00010c269d40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar8;
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar7;
    func_0x00010bf5ffa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    _objc_release(uVar8);
    lVar10 = *(long *)(param_2 + lVar12);
    func_0x00010c0ff580(lVar10,param_3,uVar6,&PTR___NSConcreteGlobalBlock_110ac7ab0);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar10;
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar10);
    if (lVar3 != 0) {
      func_0x00010bf6c5a0(*(undefined8 *)(param_2 + lVar12),param_3,lVar3);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    _objc_release(lVar3);
    _objc_release(uVar6);
  }
  if (lVar2 != 0) {
    uVar4 = param_2;
    func_0x00010c0d2160(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf8a340();
    _objc_release(uVar4);
  }
  lVar3 = (long)_DAT_11277cca0;
  lVar10 = (long)_DAT_11277ccc4;
  lVar12 = *(long *)(param_2 + lVar10) + -1;
  if (*(char *)(param_2 + lVar3) == '\0') {
    lVar12 = *(long *)(param_2 + lVar10) + 1;
  }
  *(long *)(param_2 + lVar10) = lVar12;
  lVar9 = *(long *)(param_2 + (long)_DAT_11277ccc8);
  if (lVar12 < lVar9) {
    *(undefined1 *)(param_2 + lVar3) = 0;
    *(long *)(param_2 + lVar10) = lVar9 + 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 108e889f0; end: 108e88a53;  */

bool FUN_108e889f0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf5cc00(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0cc820();
  _objc_release(uVar1);
  _objc_release(param_2);
  return (int)uVar2 == 8;
}



/* Entry: 108e88a54; end: 108e88a9f; -[SCDrawingView strokeCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_108e88a54(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_11277cc84);
  func_0x00010bf529e0(lVar1);
  uVar2 = *(ulong *)(param_1 + _DAT_11277cc80);
  func_0x00010bfd6720(uVar2);
  return lVar1 + (uVar2 & 0xffffffff);
}



/* Entry: 108e88aa0; end: 108e88c1f; -[SCDrawingView pointCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_108e88aa0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = *(long *)(param_1 + _DAT_11277cc84);
  _objc_retain(lVar6);
  lVar7 = lVar6;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  if (lVar7 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = 0;
    do {
      lVar8 = 0;
      do {
        if (lRam0000000000000000 != lVar3) {
          _objc_enumerationMutation(lVar6);
        }
        lVar1 = *(long *)(lVar8 * 8);
        func_0x00010c102f00(lVar1);
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar1;
        func_0x00010bf529e0();
        lVar5 = lVar2 + lVar5;
        _objc_release(lVar1);
        lVar8 = lVar8 + 1;
      } while (lVar7 != lVar8);
      lVar7 = lVar6;
      func_0x00010bf52a60();
    } while (lVar7 != 0);
  }
  _objc_release(lVar6);
  lVar7 = (long)_DAT_11277cc80;
  lVar3 = *(long *)(param_1 + lVar7);
  func_0x00010bfd6720();
  if ((int)lVar3 != 0) {
    lVar3 = *(long *)(param_1 + lVar7);
    func_0x00010c25dba0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar3;
    func_0x00010c102f00();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar7;
    func_0x00010bf529e0();
    lVar5 = lVar6 + lVar5;
    _objc_release(lVar7);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar4) {
    ___stack_chk_fail();
    lVar3 = *(long *)(lVar3 + _DAT_11277cc80);
                    /* WARNING: Could not recover jumptable at 0x00010c099210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(lVar3,PTR_s_lineColor_112603e90);
    return lVar3;
  }
  return lVar5;
}



/* Entry: 108e88c20; end: 108e88c2f; -[SCDrawingView currentStrokeColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e88c20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c099210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277cc80),PTR_s_lineColor_112603e90);
  return;
}



/* Entry: 108e88c30; end: 108e88c3f; -[SCDrawingView currentStrokeLineWidth] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e88c30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c099470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277cc80),PTR_s_lineWidth_112603f28);
  return;
}



/* Entry: 108e88c40; end: 108e88ceb; -[SCDrawingView drawScreenshotImageInCurrentContextWithRect:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e88c40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_5 + _DAT_11277cc7c);
  func_0x00010bfe6ac0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf89920(param_1,param_2,param_3,param_4);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_5 + _DAT_11277cc80);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  _UIGraphicsGetCurrentContext();
  func_0x00010c12fc60(uVar2,param_6,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108e88cec; end: 108e88d8f; -[SCDrawingView imageFromDrawingView] */

void FUN_108e88cec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = param_5;
  func_0x00010c25dbe0();
  if (lVar1 == 0) {
    param_5 = 0;
  }
  else {
    func_0x00010bf20c00(param_5);
    puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e120();
    _UIGraphicsBeginImageContextWithOptions(param_3,param_4,param_1,0);
    _objc_release(puVar2);
    func_0x00010bf20c00(param_5);
    func_0x00010bf89b80(param_5);
    _UIGraphicsGetImageFromCurrentImageContext();
    _objc_retainAutoreleasedReturnValue();
    _UIGraphicsEndImageContext();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_5);
  return;
}


