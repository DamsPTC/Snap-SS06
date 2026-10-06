/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107ddfb38; end: 107ddfbf7;  */

void FUN_107ddfb38(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be9e9e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 107ddfbf8; end: 107ddfc9f; -[SCOperaLongformVideoControlsView _sendButton] */

void FUN_107ddfbf8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b6138;
  _objc_opt_new(PTR_PTR_1126b6138);
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      &PTR____CFConstantStringClassReference_110ebee98);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010befbd40(puVar1,param_2,param_1,PTR_s__didTapSendButton_11252e448);
  func_0x00010c1d4b80(puVar1,param_2,1);
  func_0x00010c1c3c80(0x3ff3333333333333,puVar1);
  func_0x00010c1677c0(0,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107ddfca0; end: 107ddfd03; -[SCOperaLongformVideoControlsView _sendButtonBackground] */

void FUN_107ddfca0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new(PTR__OBJC_CLASS___UIView_1126aec20);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41680(0,0x3fc999999999999a,PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107ddfd04; end: 107ddfe1b; -[SCOperaLongformVideoControlsView _sendLabel] */

void FUN_107ddfd04(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_opt_new(PTR__OBJC_CLASS___UILabel_1126aec30);
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf1ecc0(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(puVar1);
  _objc_release(puVar2);
  ppuVar3 = &PTR____CFConstantStringClassReference_110dc2298;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc2298,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar1);
  _objc_release(ppuVar3);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar1);
  _objc_release(puVar2);
  func_0x00010c213040(puVar1);
  func_0x00010c23d620(puVar1);
  func_0x00010c21e900(puVar1);
  puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x00010c050900();
  func_0x00010bef9040(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107ddfe1c; end: 107ddfea3; -[SCOperaLongformVideoControlsView _didChangeSliderValue] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ddfe1c(float param_1,long param_2)

{
  double dVar1;
  undefined1 auStack_48 [24];
  
  func_0x00010c296d80(*(undefined8 *)(param_2 + _DAT_11276f998));
  dVar1 = (double)param_1;
  _CMTimeMakeWithSeconds(auStack_48,dVar1,0x3c);
  _CMTimeGetSeconds(auStack_48);
  func_0x00010c299980(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c299a40(dVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 107ddfea4; end: 107ddff0f; -[SCOperaLongformVideoControlsView _didStartDraggingSlider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ddfea4(long param_1)

{
  long lVar1;
  
  func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(param_1 + _DAT_11276f9b4));
  lVar1 = (long)_DAT_11276f9bc;
  *(undefined1 *)(param_1 + _DAT_11276f9c0) = *(undefined1 *)(param_1 + lVar1);
  *(undefined1 *)(param_1 + lVar1) = 1;
  func_0x00010c299980(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c299b00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107ddff10; end: 107ddff83; -[SCOperaLongformVideoControlsView _didFinishDraggingSlider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ddff10(long param_1)

{
  func_0x00010c1677c0(0,*(undefined8 *)(param_1 + _DAT_11276f9b4));
  *(undefined1 *)(param_1 + _DAT_11276f9bc) = *(undefined1 *)(param_1 + _DAT_11276f9c0);
  func_0x00010c299980(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c299a20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107ddff84; end: 107ddff93; -[SCOperaLongformVideoControlsView isPauseButtonON] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107ddff84(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276f9bc);
}



/* Entry: 107ddff94; end: 107ddfffb; -[SCOperaLongformVideoControlsView _didTapPauseButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ddff94(long param_1)

{
  *(byte *)(param_1 + _DAT_11276f9bc) = (*(byte *)(param_1 + _DAT_11276f9bc) ^ 0xff) & 1;
  func_0x00010bedcca0();
  func_0x00010c299980(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c299aa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107ddfffc; end: 107de004b; -[SCOperaLongformVideoControlsView _didTapSendButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ddfffc(long param_1,undefined8 param_2)

{
  *(undefined1 *)(param_1 + _DAT_11276f9bc) = 0;
  func_0x00010bedcca0(param_1,param_2,0);
  func_0x00010c299980(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c299b40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107de004c; end: 107de00bf; -[SCOperaLongformVideoControlsView _updatePauseButtonToIsPaused:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107de004c(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + _DAT_11276f99c);
  ppuVar1 = &PTR____CFConstantStringClassReference_110ebeeb8;
  if (*(char *)(param_1 + _DAT_11276f9bc) == '\0') {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ebeed8;
  }
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(uVar3,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 107de00c0; end: 107de015f; -[SCOperaLongformVideoControlsView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107de00c0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276f998,0);
  _objc_storeStrong(param_1 + _DAT_11276f9b0,0);
  _objc_storeStrong(param_1 + _DAT_11276f9a0,0);
  _objc_storeStrong(param_1 + _DAT_11276f9ac,0);
  _objc_storeStrong(param_1 + _DAT_11276f9a8,0);
  _objc_storeStrong(param_1 + _DAT_11276f99c,0);
  _objc_storeStrong(param_1 + _DAT_11276f9b8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276f9b4,0);
  return;
}



/* Entry: 107de0160; end: 107de0167; -[SCOperaStandardVideoControlsView initWithPrimaryColor:showActionMenuButtonEnabled:] */

void FUN_107de0160(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c039f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithPrimaryColor_showActionM_1125ec1d8,param_3,param_4,1);
  return;
}



/* Entry: 107de0168; end: 107de022f; -[SCOperaStandardVideoControlsView initWithPrimaryColor:showActionMenuButtonEnabled:enableRotateButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_107de0168(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_1126fb2d8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),&uStack_50,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11276f9c4;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11276f9c8) = param_4;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11276f9cc) = param_5;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11276f9d0) = 0;
    func_0x00010bea9ca0(puVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107de0230; end: 107de02df; -[SCOperaStandardVideoControlsView updateWithPrimaryColor:showActionMenuButtonEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107de0230(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11276f9c4);
  *(undefined8 *)(param_1 + _DAT_11276f9c4) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  if (*(byte *)(param_1 + _DAT_11276f9c8) != param_4) {
    *(char *)(param_1 + _DAT_11276f9c8) = (char)param_4;
    func_0x00010beafbe0(param_1);
  }
  lVar1 = param_1;
  func_0x00010be801c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + _DAT_11276f9d4),param_2,lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107de02e0; end: 107de0327; -[SCOperaStandardVideoControlsView _setUpView] */

void FUN_107de02e0(undefined8 param_1)

{
  func_0x00010beacdc0();
  func_0x00010beac820(param_1);
  func_0x00010beafbe0(param_1);
  func_0x00010beac4c0(param_1);
  func_0x00010beab180(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010befd910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(0,param_1,PTR_s_adjustForTime__11259cfe8);
  return;
}



/* Entry: 107de0328; end: 107de035b; -[SCOperaStandardVideoControlsView _setupElapsedTimeView] */

void FUN_107de0328(undefined8 param_1)

{
  func_0x00010beac480();
  func_0x00010beac440(param_1);
  func_0x00010beac4a0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010beac470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setupElapsedTimeDot_112588ac0);
  return;
}



/* Entry: 107de035c; end: 107de05bb; -[SCOperaStandardVideoControlsView _setupGradientViews] */

/* WARNING: Possible PIC construction at 0x000107de03c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107de03e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107de03c4) */
/* WARNING: Removing unreachable block (ram,0x000107de03ec) */
/* WARNING: Removing unreachable block (ram,0x000107de05b8) */
/* WARNING: Removing unreachable block (ram,0x000107de0684) */
/* WARNING: Removing unreachable block (ram,0x000107de06dc) */
/* WARNING: Removing unreachable block (ram,0x000107de0598) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107de035c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init();
  lVar3 = (long)_DAT_11276f9d8;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_addSubview__11259c880,*(undefined8 *)(param_1 + lVar3));
  return;
}



/* Entry: 107de05bc; end: 107de0703; -[SCOperaStandardVideoControlsView _setupElapsedTimeLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107de05bc(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc_init();
  lVar5 = (long)_DAT_11276f9e8;
  uVar4 = *(undefined8 *)(param_2 + lVar5);
  *(undefined **)(param_2 + lVar5) = puVar1;
  _objc_release(uVar4);
  ppuVar2 = &PTR____CFConstantStringClassReference_110ebef18;
  func_0x00010c160fc0(*(undefined8 *)(param_2 + lVar5));
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ebef18,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020(*(undefined8 *)(param_2 + lVar5));
  _objc_release(ppuVar2);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_2 + lVar5));
  _objc_release(puVar1);
  func_0x00010c213040(*(undefined8 *)(param_2 + lVar5));
  puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
  _objc_opt_respondsToSelector
            (PTR__OBJC_CLASS___UIFont_1126aec38,PTR_s_monospacedDigitSystemFontOfSize__112611d98);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  if (((ulong)puVar3 & 1) != 0) {
    uVar4 = *(undefined8 *)(param_2 + lVar5);
    func_0x00010bfb3a80(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c102de0();
    func_0x00010c0d0e00(param_1,*(undefined8 *)PTR__UIFontWeightRegular_110345c40,puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)(param_2 + lVar5));
    _objc_release(puVar1);
    _objc_release(uVar4);
  }
  *(undefined8 *)(param_2 + _DAT_11276f9ec) = 0x4030000000000000;
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_addSubview__11259c880,*(undefined8 *)(param_2 + lVar5));
  return;
}



/* Entry: 107de0704; end: 107de0853; -[SCOperaStandardVideoControlsView _setupElapsedTimeBackground] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107de0704(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init();
  lVar5 = (long)_DAT_11276f9f0;
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  _objc_release(uVar3);
  func_0x00010befbb60(param_1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf414e0(0x3fe0000000000000);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar5));
  _objc_release(puVar2);
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c08c0e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x3ff8000000000000);
  _objc_release(uVar3);
  func_0x00010c17d4c0(*(undefined8 *)(param_1 + lVar5));
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init();
  lVar5 = (long)_DAT_11276f9f4;
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  _objc_release(uVar3);
  func_0x00010befbb60(param_1);
  puVar1 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
  _objc_alloc();
  func_0x00010c050900();
  lVar4 = (long)_DAT_11276f9f8;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c1c8340(0,*(undefined8 *)(param_1 + lVar4));
                    /* WARNING: Could not recover jumptable at 0x00010bef9050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar5),PTR_s_addGestureRecognizer__11259bdb8,
             *(undefined8 *)(param_1 + lVar4));
  return;
}



/* Entry: 107de0854; end: 107de08d7; -[SCOperaStandardVideoControlsView _primaryDisplayColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107de0854(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  double dStack_28;
  
  lVar2 = (long)_DAT_11276f9c4;
  func_0x00010bfc63e0(*(undefined8 *)(param_1 + lVar2),param_2,0,0,&dStack_28,0);
  if (0.3 <= dStack_28) {
    puVar1 = *(undefined **)(param_1 + lVar2);
    _objc_retain(puVar1);
  }
  else {
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107de08d8; end: 107de0987; -[SCOperaStandardVideoControlsView _setupElapsedTimeTracker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107de08d8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init();
  lVar4 = (long)_DAT_11276f9d4;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
  lVar2 = param_1;
  func_0x00010be801c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar4));
  _objc_release(lVar2);
  func_0x00010befbb60(*(undefined8 *)(param_1 + _DAT_11276f9f0));
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c08c0e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x3ff8000000000000);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010c17d4d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar4),PTR_s_setClipsToBounds__11263cf50,1);
  return;
}



/* Entry: 107de0988; end: 107de0a23; -[SCOperaStandardVideoControlsView _setupElapsedTimeDot] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107de0988(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init();
  lVar4 = (long)_DAT_11276f9fc;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
  func_0x00010c17d4c0(*(undefined8 *)(param_1 + lVar4));
  lVar2 = param_1;
  func_0x00010be801c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar4));
  _objc_release(lVar2);
  func_0x00010c21e900(*(undefined8 *)(param_1 + lVar4));
  func_0x00010befbb60(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bed7530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateElapsedTimeDotSizeForStat_1125936f0,3)
  ;
  return;
}



/* Entry: 107de0a24; end: 107de0aa3; -[SCOperaStandardVideoControlsView _updateElapsedTimeDotSizeForState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107de0a24(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  double dVar3;
  
  dVar3 = 18.0;
  if (param_3 != 1) {
    dVar3 = 12.0;
  }
  lVar2 = (long)_DAT_11276f9fc;
  func_0x00010bfb68e0(*(undefined8 *)(param_1 + lVar2));
  func_0x00010bc85160();
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(dVar3 * 0.5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107de0aa4; end: 107de0b5b; -[SCOperaStandardVideoControlsView _setupExitButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107de0aa4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126b6138;
  _objc_alloc_init();
  lVar3 = (long)_DAT_11276fa00;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar3));
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar3));
  _objc_release(puVar1);
  func_0x00010befbd40(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c1aa420(0x4034000000000000,0x4035000000000000,*(undefined8 *)(param_1 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_addSubview__11259c880,*(undefined8 *)(param_1 + lVar3));
  return;
}



/* Entry: 107de0b5c; end: 107de0c3b; -[SCOperaStandardVideoControlsView _setupShowActionMenuButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107de0b5c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (*(char *)(param_1 + _DAT_11276f9c8) == '\x01') {
    puVar1 = PTR__OBJC_CLASS___UIButton_1126aec48;
    _objc_alloc_init();
    lVar3 = (long)_DAT_11276fa04;
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(undefined **)(param_1 + lVar3) = puVar1;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9fc0(uVar2);
    _objc_release(puVar1);
    func_0x00010befbd60(*(undefined8 *)(param_1 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s_addSubview__11259c880,*(undefined8 *)(param_1 + lVar3));
    return;
  }
  lVar3 = (long)_DAT_11276fa04;
  func_0x00010c12c960(*(undefined8 *)(param_1 + lVar3));
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107de0c3c; end: 107de0c87; -[SCOperaStandardVideoControlsView _setupBottomBar] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107de0c3c(long param_1)

{
  func_0x00010beaaa80();
  func_0x00010beaee40(param_1);
  if (*(char *)(param_1 + _DAT_11276f9cc) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010beaf7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setupRotateButton_1125897a0);
    return;
  }
  return;
}



/* Entry: 107de0c88; end: 107de0e07; -[SCOperaStandardVideoControlsView _setupAudioButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107de0c88(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___UIButton_1126aec48;
  func_0x00010bf25cc0(PTR__OBJC_CLASS___UIButton_1126aec48,param_3,0);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = (long)_DAT_11276fa08;
  uVar3 = *(undefined8 *)(param_2 + lVar4);
  *(undefined **)(param_2 + lVar4) = puVar1;
  _objc_release(uVar3);
  ppuVar2 = &PTR____CFConstantStringClassReference_110e0ad18;
  func_0x00010c160fc0(*(undefined8 *)(param_2 + lVar4));
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e0ad18,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020(*(undefined8 *)(param_2 + lVar4));
  _objc_release(ppuVar2);
  uVar3 = *(undefined8 *)(param_2 + lVar4);
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9fc0(uVar3);
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_2 + lVar4);
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9fc0(uVar3);
  _objc_release(puVar1);
  func_0x00010befbd60(*(undefined8 *)(param_2 + lVar4));
  func_0x00010befbb60(param_2);
  uVar3 = *(undefined8 *)(param_2 + lVar4);
  func_0x00010bfe7940(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  _objc_release(uVar3);
  func_0x00010bf345e0(*(undefined8 *)(param_2 + lVar4));
                    /* WARNING: Could not recover jumptable at 0x00010c17a6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1 * 0.5 + 16.0,*(undefined8 *)(param_2 + lVar4),PTR_s_setCenter__11263c3c8);
  return;
}



/* Entry: 107de0e08; end: 107de0f37; -[SCOperaStandardVideoControlsView _setupPlayPauseButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107de0e08(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___UIButton_1126aec48;
  func_0x00010bf25cc0(PTR__OBJC_CLASS___UIButton_1126aec48,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = (long)_DAT_11276fa0c;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
  ppuVar2 = &PTR____CFConstantStringClassReference_110e592b8;
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar4));
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e592b8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020(*(undefined8 *)(param_1 + lVar4));
  _objc_release(ppuVar2);
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9fc0(uVar3);
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9fc0(uVar3);
  _objc_release(puVar1);
  func_0x00010befbd60(*(undefined8 *)(param_1 + lVar4));
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_addSubview__11259c880,*(undefined8 *)(param_1 + lVar4));
  return;
}



/* Entry: 107de0f38; end: 107de1067; -[SCOperaStandardVideoControlsView _setupRotateButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107de0f38(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = PTR__OBJC_CLASS___UIButton_1126aec48;
  func_0x00010bf25cc0(PTR__OBJC_CLASS___UIButton_1126aec48,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = (long)_DAT_11276fa10;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  _objc_release(uVar4);
  ppuVar2 = &PTR____CFConstantStringClassReference_110ebefd8;
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar5));
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ebefd8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020(*(undefined8 *)(param_1 + lVar5));
  _objc_release(ppuVar2);
  puVar1 = PTR_PTR_1126b0c40;
  func_0x00010bfe7b00(0x4038000000000000,0x4038000000000000,PTR_PTR_1126b0c40);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b0c40;
  func_0x00010bfe7b00(0x4038000000000000,0x4038000000000000,PTR_PTR_1126b0c40);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9fc0(*(undefined8 *)(param_1 + lVar5));
  func_0x00010c1a9fc0(*(undefined8 *)(param_1 + lVar5));
  func_0x00010befbd60(*(undefined8 *)(param_1 + lVar5));
  func_0x00010befbb60(param_1);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107de1068; end: 107de1197; -[SCOperaStandardVideoControlsView _setupCaptionButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107de1068(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___UIButton_1126aec48;
  func_0x00010bf25cc0(PTR__OBJC_CLASS___UIButton_1126aec48,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = (long)_DAT_11276fa14;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
  ppuVar2 = &PTR____CFConstantStringClassReference_110e2a618;
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar4));
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e2a618,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020(*(undefined8 *)(param_1 + lVar4));
  _objc_release(ppuVar2);
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9fc0(uVar3);
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9fc0(uVar3);
  _objc_release(puVar1);
  func_0x00010befbd60(*(undefined8 *)(param_1 + lVar4));
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_addSubview__11259c880,*(undefined8 *)(param_1 + lVar4));
  return;
}



/* Entry: 107de1198; end: 107de11bb; -[SCOperaStandardVideoControlsView isPauseButtonON] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_107de1198(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276fa0c);
  func_0x00010c07d660(uVar1);
  return (uint)uVar1 ^ 1;
}



/* Entry: 107de11bc; end: 107de11d7; -[SCOperaStandardVideoControlsView fadeControls] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107de11bc(long param_1)

{
  if ((*(byte *)(param_1 + _DAT_11276f9d0) & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(0,param_1,PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 107de11d8; end: 107de11f3; -[SCOperaStandardVideoControlsView showControls] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107de11d8(long param_1)

{
  if ((*(byte *)(param_1 + _DAT_11276f9d0) & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(0x3ff0000000000000,param_1,PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 107de11f4; end: 107de1273; -[SCOperaStandardVideoControlsView layoutSubviews] */

void FUN_107de11f4(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126fb2d8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_layoutSubviews_112600e60);
  func_0x00010be496e0(param_1);
  func_0x00010be499a0(param_1);
  func_0x00010be48e20(param_1);
  func_0x00010be49140(param_1);
  func_0x00010be49100(param_1);
  func_0x00010be494c0(param_1);
  func_0x00010be48d40(param_1);
  func_0x00010be495a0(param_1);
  return;
}



/* Entry: 107de1274; end: 107de12eb; -[SCOperaStandardVideoControlsView _layoutShowActionMenuButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107de1274(double param_1,long param_2)

{
  long lVar1;
  
  func_0x00010be983e0();
  lVar1 = (long)_DAT_11276fa04;
  func_0x00010c19f0e0(0,0,0x4040800000000000,0x4040800000000000,*(undefined8 *)(param_2 + lVar1));
  param_1 = param_1 + 8.0;
  func_0x00010c2172c0(param_1,*(undefined8 *)(param_2 + lVar1));
  func_0x00010bf20c00(param_2);
  _CGRectGetMaxX();
                    /* WARNING: Could not recover jumptable at 0x00010c1ee030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1 + -3.0,*(undefined8 *)(param_2 + lVar1),PTR_s_setRight__112659230);
  return;
}



/* Entry: 107de12ec; end: 107de134f; -[SCOperaStandardVideoControlsView _layoutTopGradientView] */

/* WARNING: Possible PIC construction at 0x000107de132c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107de1330) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107de12ec(undefined8 param_1,long param_2)

{
  func_0x00010bf20c00();
  _CGRectGetWidth();
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,0,param_1,0x4055400000000000,*(undefined8 *)(param_2 + _DAT_11276f9d8),
             PTR_s_setFrame__112645658);
  return;
}



/* Entry: 107de1350; end: 107de13cb; -[SCOperaStandardVideoControlsView _layoutBottomGradientView] */

/* WARNING: Possible PIC construction at 0x000107de13a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107de13a8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107de1350(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  func_0x00010bf20c00();
  _CGRectGetHeight();
  uVar1 = param_1;
  func_0x00010bf20c00(param_2);
  _CGRectGetWidth();
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,param_1,uVar1,0x4055400000000000,*(undefined8 *)(param_2 + _DAT_11276f9dc),
             PTR_s_setFrame__112645658);
  return;
}



/* Entry: 107de13cc; end: 107de141f; -[SCOperaStandardVideoControlsView _layoutExitButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107de13cc(double param_1,long param_2)

{
  func_0x00010be983e0();
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0xc010000000000000,param_1 + -5.0 + *(double *)(param_2 + _DAT_11276fa18),
             0x404e000000000000,0x404e000000000000,*(undefined8 *)(param_2 + _DAT_11276fa00),
             PTR_s_setFrame__112645658);
  return;
}



/* Entry: 107de1420; end: 107de16a7; -[SCOperaStandardVideoControlsView _layoutElapsedTimeViews] */

/* WARNING: Possible PIC construction at 0x000107de1598: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107de159c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107de1420(long param_1)

{
  long lVar1;
  
  func_0x00010be983e0();
  func_0x00010c07d660();
  lVar1 = (long)_DAT_11276f9e8;
  func_0x00010c23d620(*(undefined8 *)(param_1 + lVar1));
  if (*(char *)(param_1 + _DAT_11276f9c8) == '\x01') {
    func_0x00010bf20c00(param_1);
    _CGRectGetWidth();
    func_0x00010c08e360(*(undefined8 *)(param_1 + _DAT_11276fa04));
  }
  else {
    func_0x00010c07d660();
  }
  func_0x00010bf20c00(param_1);
  _CGRectGetWidth();
  func_0x00010bf20c00(*(undefined8 *)(param_1 + lVar1));
  _CGRectGetWidth();
  func_0x00010bfb68e0(*(undefined8 *)(param_1 + lVar1));
  func_0x00010bc852e4();
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + lVar1));
  func_0x00010bfb68e0(*(undefined8 *)(param_1 + lVar1));
  _CGRectGetMinX();
  lVar1 = (long)_DAT_11276f9f0;
  func_0x00010bfb68e0(*(undefined8 *)(param_1 + lVar1));
  _CGRectGetMinX();
  func_0x00010bfb68e0(*(undefined8 *)(param_1 + _DAT_11276fa00));
  _CGRectGetMaxX();
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + lVar1));
  func_0x00010bf345e0(*(undefined8 *)(param_1 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010c17a6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar1),PTR_s_setCenter__11263c3c8);
  return;
}



/* Entry: 107de16a8; end: 107de1797; -[SCOperaStandardVideoControlsView _layoutAudioButton] */

/* WARNING: Possible PIC construction at 0x000107de1744: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107de1748) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107de16a8(double param_1,double param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010be983e0();
  lVar2 = (long)_DAT_11276fa08;
  uVar1 = *(undefined8 *)(param_3 + lVar2);
  func_0x00010bfe7940(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  _objc_release(uVar1);
  func_0x00010c19f0e0(0,0,0x4049000000000000,0x4049000000000000,*(undefined8 *)(param_3 + lVar2));
  func_0x00010bf345e0(*(undefined8 *)(param_3 + lVar2));
                    /* WARNING: Could not recover jumptable at 0x00010c17a6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2 + 16.0 + param_1 * 0.5,*(undefined8 *)(param_3 + lVar2),
             PTR_s_setCenter__11263c3c8);
  return;
}



/* Entry: 107de1798; end: 107de185b; -[SCOperaStandardVideoControlsView _layoutPlayButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107de1798(undefined8 param_1,double param_2,double param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  
  func_0x00010be983e0();
  lVar2 = (long)_DAT_11276fa0c;
  uVar1 = *(undefined8 *)(param_4 + lVar2);
  func_0x00010bfe7940(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  _objc_release(uVar1);
  dVar3 = 0.0;
  func_0x00010c19f0e0(0,0,0x4049000000000000,0x4049000000000000,*(undefined8 *)(param_4 + lVar2));
  func_0x00010bf20c00(param_4);
  _CGRectGetMidX();
  dVar4 = dVar3;
  func_0x00010bf20c00(param_4);
  _CGRectGetHeight();
                    /* WARNING: Could not recover jumptable at 0x00010c17a6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (dVar3,(dVar4 + -16.0 + param_2 * -0.5) - param_3,*(undefined8 *)(param_4 + lVar2),
             PTR_s_setCenter__11263c3c8);
  return;
}



/* Entry: 107de185c; end: 107de193b; -[SCOperaStandardVideoControlsView _layoutRotateButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107de185c(double param_1,double param_2,double param_3,double param_4,long param_5)

{
  undefined8 uVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  
  func_0x00010be983e0();
  lVar2 = (long)_DAT_11276fa10;
  uVar1 = *(undefined8 *)(param_5 + lVar2);
  func_0x00010bfe7940(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  _objc_release(uVar1);
  dVar3 = 0.0;
  func_0x00010c19f0e0(0,0,0x4049000000000000,0x4049000000000000,*(undefined8 *)(param_5 + lVar2));
  func_0x00010bf20c00(param_5);
  _CGRectGetWidth();
  dVar3 = (dVar3 - param_4) + -16.0;
  dVar4 = dVar3 - param_1 * 0.5;
  func_0x00010bf20c00(param_5);
  _CGRectGetHeight();
                    /* WARNING: Could not recover jumptable at 0x00010c17a6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (dVar4,((dVar3 + -16.0) - param_2 * 0.5) - param_3,*(undefined8 *)(param_5 + lVar2),
             PTR_s_setCenter__11263c3c8);
  return;
}



/* Entry: 107de193c; end: 107de1a23; -[SCOperaStandardVideoControlsView _safeAreaInsets] */

double FUN_107de193c(double param_1,undefined8 param_2,undefined8 param_3,double param_4,
                    undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  dVar4 = param_4;
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  uVar2 = param_5;
  func_0x00010b816b5c(param_5);
  func_0x00010c14da00(puVar1,param_6,uVar2);
  dVar3 = param_1;
  func_0x00010c148fc0(param_5);
  func_0x00010bf20c00(param_5);
  param_1 = param_1 - (param_4 - dVar4) * 0.5;
  if (param_1 <= dVar3) {
    param_1 = dVar3;
  }
  func_0x00010c148fc0(param_5);
  func_0x00010bf20c00(param_5);
  return param_1;
}



/* Entry: 107de1a24; end: 107de1b33; -[SCOperaStandardVideoControlsView adjustForTime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107de1a24(double param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  double dVar4;
  double dVar5;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126fb2d8;
  dVar4 = param_1;
  lStack_50 = param_2;
  _objc_msgSendSuper2(&lStack_50,PTR_s_adjustForTime__11259cfe8);
  lVar2 = param_2;
  func_0x00010bf643e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
  }
  else {
    func_0x00010c299b80(&uStack_68,lVar2);
  }
  _CMTimeGetSeconds(&uStack_68);
  _objc_release(lVar2);
  bVar1 = true;
  if ((dVar4 != 0.0) && (bVar1 = false, !NAN(param_1))) {
    bVar1 = param_1 == 0.0;
  }
  dVar5 = 0.0;
  if (!bVar1) {
    dVar5 = param_1 / dVar4;
  }
  if ((ulong)ABS(dVar5) < 0x7ff0000000000000) {
    *(double *)(param_2 + _DAT_11276fa1c) = dVar5;
    puVar3 = PTR_PTR_1126d6cb0;
    func_0x00010bfb5ea0(param_1,PTR_PTR_1126d6cb0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)(param_2 + _DAT_11276f9e8));
    _objc_release(puVar3);
    func_0x00010c1cbe20(param_2);
  }
  return;
}



/* Entry: 107de1b34; end: 107de1b83; -[SCOperaStandardVideoControlsView playPauseButtonPressed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107de1b34(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x00010c299980();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11276fa0c);
  func_0x00010c07d660(uVar2);
  func_0x00010c299aa0(lVar1,param_2,param_1,(uint)uVar2 ^ 1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107de1b84; end: 107de1bd3; -[SCOperaStandardVideoControlsView audioButtonPressed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107de1b84(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x00010c299980();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11276fa08);
  func_0x00010c07d660(uVar2);
  func_0x00010c299ae0(lVar1,param_2,param_1,(uint)uVar2 ^ 1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107de1bd4; end: 107de1c23; -[SCOperaStandardVideoControlsView rotateButtonPressed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107de1bd4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x00010c299980();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11276fa10);
  func_0x00010c07d660(uVar2);
  func_0x00010c299ac0(lVar1,param_2,param_1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107de1c24; end: 107de1c73; -[SCOperaStandardVideoControlsView captionButtonPressed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107de1c24(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x00010c299980();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11276fa14);
  func_0x00010c07d660(uVar2);
  func_0x00010c299a60(lVar1,param_2,param_1,(uint)uVar2 ^ 1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107de1c74; end: 107de1dbf; -[SCOperaStandardVideoControlsView didSeek:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107de1c74(double param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  
  _objc_retain(param_4);
  lVar2 = (long)_DAT_11276f9f0;
  func_0x00010c09ef00(param_4,param_3,*(undefined8 *)(param_2 + lVar2));
  dVar4 = param_1;
  func_0x00010bf20c00(*(undefined8 *)(param_2 + lVar2));
  _CGRectGetWidth();
  if (dVar4 <= param_1) {
    param_1 = dVar4;
  }
  lVar2 = param_4;
  func_0x00010c252440();
  if (lVar2 - 3U < 2) {
    lVar3 = (long)_DAT_11276fa0c;
    func_0x00010c21e900(*(undefined8 *)(param_2 + lVar3),param_3,1);
    lVar2 = param_2;
    func_0x00010c299980(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_2 + lVar3);
    func_0x00010c07d660(uVar1);
    func_0x00010c299a20(lVar2,param_3,param_2,uVar1);
    _objc_release(lVar2);
  }
  else {
    if (param_1 <= 0.0) {
      param_1 = 0.0;
    }
    if (lVar2 == 2) {
      func_0x00010c156f40(param_1,param_2);
      goto LAB_107de1da8;
    }
    if (lVar2 != 1) goto LAB_107de1da8;
    func_0x00010c21e900(*(undefined8 *)(param_2 + _DAT_11276fa0c),param_3,0);
    lVar2 = param_2;
    func_0x00010c299980(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c299b00();
    _objc_release(lVar2);
    func_0x00010c156f40(param_1,param_2);
  }
  lVar2 = param_4;
  func_0x00010c252440(param_4);
  func_0x00010bed7520(param_2,param_3,lVar2);
LAB_107de1da8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107de1dc0; end: 107de1ee7; -[SCOperaStandardVideoControlsView seekElapsedTimeWithXOffset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107de1dc0(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  double dVar2;
  double dVar3;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar1 = param_2;
  dVar2 = param_1;
  func_0x00010bf643e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
  }
  else {
    func_0x00010c299b80(&uStack_48,lVar1,param_3,param_2);
  }
  _CMTimeGetSeconds(&uStack_48);
  dVar3 = dVar2;
  _objc_release(lVar1);
  if (!NAN(dVar2)) {
    func_0x00010bf20c00(*(undefined8 *)(param_2 + _DAT_11276f9f0));
    _CGRectGetWidth();
    param_1 = param_1 / dVar3;
    dVar2 = 0.99;
    if (param_1 <= 0.99) {
      dVar2 = param_1;
    }
    lVar1 = param_2;
    func_0x00010bf643e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      uStack_48 = 0;
      uStack_40 = 0;
      uStack_38 = 0;
    }
    else {
      func_0x00010c299b80(&uStack_48,lVar1,param_3,param_2);
    }
    _CMTimeGetSeconds(&uStack_48);
    _objc_release(lVar1);
    func_0x00010befd900(dVar2 * param_1,param_2);
    func_0x00010c299980(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c299a40(dVar2 * param_1);
    _objc_release(param_2);
  }
  return;
}



/* Entry: 107de1ee8; end: 107de1f1f; -[SCOperaStandardVideoControlsView exitButtonPressed] */

void FUN_107de1ee8(undefined8 param_1)

{
  func_0x00010c299980();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c299b20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107de1f20; end: 107de1f57; -[SCOperaStandardVideoControlsView showActionMenuButtonPressed] */

void FUN_107de1f20(undefined8 param_1)

{
  func_0x00010c299980();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c299b60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107de1f58; end: 107de1fab; -[SCOperaStandardVideoControlsView togglePlayButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107de1f58(long param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276fa0c;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar2);
  func_0x00010c082800();
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1fadd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + lVar2),PTR_s_setSelected__11265c598,param_3 ^ 1);
    return;
  }
  return;
}



/* Entry: 107de1fac; end: 107de1fbb; -[SCOperaStandardVideoControlsView toggleRotateLeftButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107de1fac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1fadd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276fa10),PTR_s_setSelected__11265c598);
  return;
}



/* Entry: 107de1fbc; end: 107de2007; -[SCOperaStandardVideoControlsView toggleCaptionButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107de1fbc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11276fa14;
  if (((int)param_3 != 0) && (*(long *)(param_1 + lVar1) == 0)) {
    func_0x00010beab620(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1fadd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar1),PTR_s_setSelected__11265c598,param_3);
  return;
}



/* Entry: 107de2008; end: 107de2017; -[SCOperaStandardVideoControlsView toggleAudioButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107de2008(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1fadd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276fa08),PTR_s_setSelected__11265c598);
  return;
}



/* Entry: 107de2018; end: 107de202b; -[SCOperaStandardVideoControlsView setRotateButtonVisible:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107de2018(long param_1,undefined8 param_2,uint param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276fa10),PTR_s_setHidden__1126479f8,param_3 ^ 1);
  return;
}



/* Entry: 107de202c; end: 107de206f; -[SCOperaStandardVideoControlsView controlsVisible] */

bool FUN_107de202c(double param_1,ulong param_2)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = param_2;
  func_0x00010c074c20();
  if ((uVar2 & 1) == 0) {
    func_0x00010bf01b40(param_2);
    bVar1 = 1.1920928955078125e-07 < param_1;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 107de2070; end: 107de209b; -[SCOperaStandardVideoControlsView updateControlsWithViewModel:] */

void FUN_107de2070(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c22e260(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bfe1d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_hideControls__1125d6118,param_3);
  return;
}



/* Entry: 107de209c; end: 107de21ab; -[SCOperaStandardVideoControlsView hideControls:] */

/* WARNING: Possible PIC construction at 0x000107de20cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107de20ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107de210c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107de212c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107de214c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107de216c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107de218c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107de2170) */
/* WARNING: Removing unreachable block (ram,0x000107de2150) */
/* WARNING: Removing unreachable block (ram,0x000107de2130) */
/* WARNING: Removing unreachable block (ram,0x000107de2110) */
/* WARNING: Removing unreachable block (ram,0x000107de20f0) */
/* WARNING: Removing unreachable block (ram,0x000107de20d0) */
/* WARNING: Removing unreachable block (ram,0x000107de2190) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107de209c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11276f9d0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276fa08),PTR_s_setHidden__1126479f8);
  return;
}



/* Entry: 107de21ac; end: 107de21bb; -[SCOperaStandardVideoControlsView updateScrubberTopOffset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107de21ac(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_11276fa18) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 107de21bc; end: 107de22af; -[SCOperaStandardVideoControlsView updateElapsedTimeRightPadding:animated:] */

void FUN_107de21bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined **ppuVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  ppuVar1 = &puStack_80;
  _objc_initWeak(auStack_48,param_2);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_107de22b0;
  puStack_68 = &UNK_11085da78;
  _objc_copyWeak(auStack_60,auStack_48);
  uStack_50 = (undefined1)param_4;
  uStack_58 = param_1;
  _objc_retainBlock();
  if (param_4 == 0) {
    (**(code **)((long)ppuVar1 + 0x10))(ppuVar1);
  }
  else {
    func_0x00010bf03400(0x3fd3333333333333,PTR__OBJC_CLASS___UIView_1126aec20);
  }
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 107de22b0; end: 107de230b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107de22b0(long param_1)

{
  char cVar1;
  long lVar2;
  
  lVar2 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + _DAT_11276f9ec) = *(undefined8 *)(param_1 + 0x28);
    cVar1 = *(char *)(param_1 + 0x30);
    func_0x00010c1cbe20(lVar2);
    if (cVar1 == '\x01') {
      func_0x00010c08cdc0(lVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 107de230c; end: 107de235b; -[SCOperaStandardVideoControlsView supportedInterfaceOrientations] */

undefined8 FUN_107de230c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
  func_0x00010bf5e640();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c292ac0();
  _objc_release(puVar2);
  uVar1 = 0x1a;
  if (puVar3 != (undefined *)0x1) {
    uVar1 = 2;
  }
  return uVar1;
}



/* Entry: 107de235c; end: 107de2413; +[SCOperaStandardVideoControlsView formatTime:] */

void FUN_107de235c(double param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  
  if (param_1 != 0.0) {
    if ((long)((param_1 / 60.0) / 60.0) < 1) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110ebf018;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110ebeff8;
    }
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,ppuVar1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107de2414; end: 107de242f; -[SCOperaStandardVideoControlsView cleanUp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107de2414(long param_1)

{
  if (*(long *)(param_1 + _DAT_11276fa14) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + _DAT_11276fa14),PTR_s_setHidden__1126479f8,1);
    return;
  }
  return;
}



/* Entry: 107de2430; end: 107de24d3; -[SCOperaStandardVideoControlsView setViewModel:] */

void FUN_107de2430(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_4 != 0) {
    _objc_retain(param_4);
    func_0x00010c239280(param_4);
    func_0x00010c272ae0(param_2);
    func_0x00010c235f40(param_4);
    func_0x00010c272600(param_2);
    func_0x00010c236780(param_4);
    func_0x00010c272740(param_2);
    func_0x00010c239ae0(param_4);
    func_0x00010c1ee720(param_2);
    func_0x00010c117720(param_4);
    _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010befd910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,param_2,PTR_s_adjustForTime__11259cfe8);
    return;
  }
  return;
}



/* Entry: 107de24d4; end: 107de24e3; -[SCOperaStandardVideoControlsView bottomGradientView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107de24d4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276f9dc);
}



/* Entry: 107de24e4; end: 107de2613; -[SCOperaStandardVideoControlsView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107de24e4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276f9dc,0);
  _objc_storeStrong(param_1 + _DAT_11276f9d8,0);
  _objc_storeStrong(param_1 + _DAT_11276f9e4,0);
  _objc_storeStrong(param_1 + _DAT_11276f9e0,0);
  _objc_storeStrong(param_1 + _DAT_11276f9fc,0);
  _objc_storeStrong(param_1 + _DAT_11276fa04,0);
  _objc_storeStrong(param_1 + _DAT_11276fa00,0);
  _objc_storeStrong(param_1 + _DAT_11276f9f4,0);
  _objc_storeStrong(param_1 + _DAT_11276f9f8,0);
  _objc_storeStrong(param_1 + _DAT_11276f9c4,0);
  _objc_storeStrong(param_1 + _DAT_11276fa14,0);
  _objc_storeStrong(param_1 + _DAT_11276fa0c,0);
  _objc_storeStrong(param_1 + _DAT_11276fa10,0);
  _objc_storeStrong(param_1 + _DAT_11276f9f0,0);
  _objc_storeStrong(param_1 + _DAT_11276f9d4,0);
  _objc_storeStrong(param_1 + _DAT_11276f9e8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276fa08,0);
  return;
}



/* Entry: 107de2614; end: 107de261b; -[SCOperaVideoControlsView seekPointBuffer] */

undefined8 FUN_107de2614(void)

{
  return 0;
}



/* Entry: 107de261c; end: 107de26bb; -[SCOperaVideoControlsView setupGesture] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107de261c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = param_1;
  func_0x00010bf643e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar4;
  func_0x00010c299bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  lVar4 = lVar1;
  func_0x00010bf529e0();
  if (lVar4 != 0) {
    puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc();
    func_0x00010c050900();
    lVar4 = (long)_DAT_11276fa28;
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010bef9040(param_1,param_2,*(undefined8 *)(param_1 + lVar4));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107de26bc; end: 107de275f; -[SCOperaVideoControlsView _didTapView:] */

void FUN_107de26bc(double param_1,undefined8 param_2,double param_3,ulong param_4,undefined8 param_5
                  ,undefined8 param_6)

{
  ulong uVar1;
  
  _objc_retain(param_6);
  uVar1 = param_4;
  func_0x00010c079b80();
  if ((((uVar1 & 1) == 0) && (func_0x00010bf20c00(param_4), param_3 != 0.0)) &&
     (uVar1 = param_4, func_0x00010bf01ae0(), (int)uVar1 != 0)) {
    func_0x00010bf04340(PTR_PTR_1126c98e0,param_5,&PTR____CFConstantStringClassReference_110ebf038);
    func_0x00010c09ef00(param_6,param_5,param_4);
    func_0x00010bf20c00(param_4);
    func_0x00010c156f20(param_4,param_5,0.2 < param_1 / param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 107de2760; end: 107de296f; -[SCOperaVideoControlsView _SCOperaFindNextChapterStartTimeSeconds:chapterIntervals:isForwardTap:] */

void FUN_107de2760(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,int param_6)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  double dVar6;
  float fVar7;
  double dVar8;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar4 = param_5;
  func_0x00010bf529e0();
  if (uVar4 != 0xffffffffffffffff) {
    uVar4 = 0;
    do {
      if (uVar4 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = param_5;
        func_0x00010c0dfd40(param_5,param_3,uVar4 - 1);
        _objc_retainAutoreleasedReturnValue();
      }
      uVar5 = param_5;
      func_0x00010bf529e0();
      if (uVar4 < uVar5) {
        uVar5 = param_5;
        func_0x00010c0dfd40(param_5,param_3,uVar4);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        uVar5 = 0;
      }
      func_0x00010bfb2c80(param_4);
      dVar6 = param_1;
      func_0x00010bfb2c80(uVar3);
      fVar7 = SUB84(param_1,0);
      param_1 = dVar6;
      if (SUB84(dVar6,0) <= fVar7) {
        func_0x00010bfb2c80(param_4);
        param_1 = dVar6;
        func_0x00010bfb2c80(uVar5);
        if ((SUB84(dVar6,0) < SUB84(param_1,0)) || (uVar5 == 0)) {
          if (param_6 == 0) {
            uVar2 = uVar4 - 2;
            if (uVar4 < 2) goto LAB_107de284c;
LAB_107de28d0:
            uVar4 = param_5;
            func_0x00010c0dfd40(param_5,param_3,uVar2);
            _objc_retainAutoreleasedReturnValue();
          }
          else {
            func_0x00010c156f80(param_2);
            dVar6 = param_1;
            func_0x00010bfb2c80(param_4);
            dVar6 = (double)SUB84(dVar6,0);
            dVar8 = param_1 + dVar6;
            func_0x00010bfb2c80(uVar5);
            dVar6 = (double)SUB84(dVar6,0);
            if (dVar6 < dVar8) {
              uVar2 = uVar4 + 1;
              uVar1 = param_5;
              func_0x00010bf529e0();
              if (uVar2 < uVar1) goto LAB_107de28d0;
            }
            fVar7 = SUB84(dVar6,0);
            func_0x00010bfb2c80(param_4);
            dVar6 = (double)fVar7;
            param_1 = param_1 + dVar6;
            func_0x00010bfb2c80(uVar5);
            if ((param_1 <= (double)SUB84(dVar6,0)) ||
               (uVar2 = param_5, func_0x00010bf529e0(), uVar2 - 1 != uVar4)) {
              _objc_retain(uVar5);
              uVar4 = uVar5;
            }
            else {
              uVar4 = 0;
            }
          }
          _objc_release(uVar5);
          _objc_release(uVar3);
          goto LAB_107de2940;
        }
      }
LAB_107de284c:
      _objc_release(uVar5);
      _objc_release(uVar3);
      uVar4 = uVar4 + 1;
      uVar3 = param_5;
      func_0x00010bf529e0();
    } while (uVar4 < uVar3 + 1);
  }
  uVar4 = 0;
LAB_107de2940:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 107de2970; end: 107de2973; -[SCOperaVideoControlsView updateControlsWithViewModel:] */

void FUN_107de2970(void)

{
  return;
}



/* Entry: 107de2974; end: 107de2977; -[SCOperaVideoControlsView updateElapsedTimeRightPadding:animated:] */

void FUN_107de2974(void)

{
  return;
}



/* Entry: 107de2978; end: 107de297b; -[SCOperaVideoControlsView updateScrubberTopOffset:] */

void FUN_107de2978(void)

{
  return;
}



/* Entry: 107de297c; end: 107de297f; -[SCOperaVideoControlsView toggleRotateLeftButton:] */

void FUN_107de297c(void)

{
  return;
}



/* Entry: 107de2980; end: 107de2983; -[SCOperaVideoControlsView togglePlayButton:] */

void FUN_107de2980(void)

{
  return;
}



/* Entry: 107de2984; end: 107de2987; -[SCOperaVideoControlsView toggleCaptionButton:] */

void FUN_107de2984(void)

{
  return;
}



/* Entry: 107de2988; end: 107de298b; -[SCOperaVideoControlsView toggleAudioButton:] */

void FUN_107de2988(void)

{
  return;
}



/* Entry: 107de298c; end: 107de298f; -[SCOperaVideoControlsView setRotateButtonVisible:] */

void FUN_107de298c(void)

{
  return;
}



/* Entry: 107de2990; end: 107de2b33; -[SCOperaVideoControlsView seekByTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107de2990(ulong param_1,undefined8 param_2,int param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  float fVar4;
  undefined8 uVar5;
  double dVar6;
  
  uVar3 = param_1;
  func_0x00010bf643e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  _objc_opt_respondsToSelector();
  _objc_release(uVar3);
  if ((uVar1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar1 = param_1;
    func_0x00010bf643e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c299bc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
  uVar1 = uVar3;
  func_0x00010bf529e0();
  if (uVar1 == 0) {
    func_0x00010c299980(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = 0x43e0000000000000;
    if (param_3 == 0) {
      uVar5 = 0xbff0000000000000;
    }
    func_0x00010c299a40(uVar5);
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + (long)_DAT_11276fa20);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(uVar5,PTR__OBJC_CLASS___NSNumber_1126ae570);
    fVar4 = (float)uVar5;
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010bdc3aa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    func_0x00010c299980(param_1);
    _objc_retainAutoreleasedReturnValue();
    if (uVar1 == 0) {
      dVar6 = 9.223372036854776e+18;
      if (param_3 == 0) {
        dVar6 = -1.0;
      }
    }
    else {
      func_0x00010bfb2c80(uVar1);
      dVar6 = (double)fVar4 + 0.001;
    }
    func_0x00010c299a40(dVar6,param_1);
    _objc_release(param_1);
    param_1 = uVar1;
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 107de2b34; end: 107de2b43; -[SCOperaVideoControlsView adjustForTime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107de2b34(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_11276fa20) = param_1;
  return;
}



/* Entry: 107de2b44; end: 107de2b47; -[SCOperaVideoControlsView setDuration:] */

void FUN_107de2b44(void)

{
  return;
}



/* Entry: 107de2b48; end: 107de2b4b; -[SCOperaVideoControlsView setHalfFillDuration:] */

void FUN_107de2b48(void)

{
  return;
}



/* Entry: 107de2b4c; end: 107de2b4f; -[SCOperaVideoControlsView fadeControls] */

void FUN_107de2b4c(void)

{
  return;
}



/* Entry: 107de2b50; end: 107de2b53; -[SCOperaVideoControlsView showControls] */

void FUN_107de2b50(void)

{
  return;
}



/* Entry: 107de2b54; end: 107de2b57; -[SCOperaVideoControlsView hideControls:] */

void FUN_107de2b54(void)

{
  return;
}



/* Entry: 107de2b58; end: 107de2b5b; -[SCOperaVideoControlsView resetControls] */

void FUN_107de2b58(void)

{
  return;
}



/* Entry: 107de2b5c; end: 107de2b6b; -[SCOperaVideoControlsView setAllowTapsWhenHidden:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107de2b5c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11276fa2c) = param_3;
  return;
}



/* Entry: 107de2b6c; end: 107de2b73; -[SCOperaVideoControlsView controlsVisible] */

undefined8 FUN_107de2b6c(void)

{
  return 0;
}



/* Entry: 107de2b74; end: 107de2b7b; -[SCOperaVideoControlsView isPauseButtonON] */

undefined8 FUN_107de2b74(void)

{
  return 0;
}



/* Entry: 107de2b7c; end: 107de2b83; -[SCOperaVideoControlsView gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

undefined8 FUN_107de2b7c(void)

{
  return 0;
}



/* Entry: 107de2b84; end: 107de2bf3; -[SCOperaVideoControlsView gestureRecognizer:shouldBeRequiredToFailByGestureRecognizer:] */

uint FUN_107de2b84(void)

{
  undefined *puVar1;
  ulong uVar2;
  ulong in_x3;
  uint uVar3;
  
  _objc_retain(in_x3);
  puVar1 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
  _objc_opt_class(PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68);
  uVar2 = in_x3;
  _objc_opt_isKindOfClass(in_x3,puVar1);
  if ((uVar2 & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
    _objc_opt_class(PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8);
    uVar2 = in_x3;
    _objc_opt_isKindOfClass(in_x3,puVar1);
    uVar3 = (uint)uVar2;
  }
  else {
    uVar3 = 1;
  }
  _objc_release(in_x3);
  return uVar3 & 1;
}



/* Entry: 107de2bf4; end: 107de2c5f; -[SCOperaVideoControlsView gestureRecognizerShouldBegin:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_107de2bf4(ulong param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  byte bVar2;
  
  if (param_3 == *(long *)(param_1 + (long)_DAT_11276fa28)) {
    uVar1 = param_1;
    func_0x00010c074c20();
    if ((uVar1 & 1) == 0) {
      uVar1 = param_1;
      func_0x00010bf500a0();
      if ((uVar1 & 1) == 0) {
        bVar2 = *(byte *)(param_1 + (long)_DAT_11276fa2c);
      }
      else {
        bVar2 = 1;
      }
    }
    else {
      bVar2 = 0;
    }
  }
  else {
    bVar2 = 1;
  }
  return bVar2 & 1;
}



/* Entry: 107de2c60; end: 107de2c7f; -[SCOperaVideoControlsView videoControllingDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107de2c60(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11276fa30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107de2c80; end: 107de2c93; -[SCOperaVideoControlsView setVideoControllingDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107de2c80(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11276fa30,param_3);
  return;
}



/* Entry: 107de2c94; end: 107de2cb3; -[SCOperaVideoControlsView dataSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107de2c94(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11276fa34);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107de2cb4; end: 107de2cc7; -[SCOperaVideoControlsView setDataSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107de2cb4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11276fa34,param_3);
  return;
}


