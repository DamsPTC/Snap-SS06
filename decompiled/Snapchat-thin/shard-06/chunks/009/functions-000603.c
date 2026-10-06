/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104f8e738; end: 104f8e7eb; -[SCMusicEditorEntryPoint editorViewControllerWillUpdateStartOffset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f8e738(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11271839c;
  uVar1 = param_1 + lVar4;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  _objc_opt_respondsToSelector();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) != 0) {
    param_1 = param_1 + lVar4;
    _objc_loadWeakRetained(param_1);
    lVar4 = param_1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d2c60();
    _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 104f8e7ec; end: 104f8e847; -[SCMusicEditorEntryPoint editorViewController:didUpdateStartOffset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f8e7ec(undefined8 param_1,long param_2)

{
  long lVar1;
  
  param_2 = param_2 + _DAT_11271839c;
  _objc_loadWeakRetained(param_2);
  lVar1 = param_2;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d2c00(param_1);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104f8e848; end: 104f8e893; -[SCMusicEditorEntryPoint editorViewControllerDidTapChangeMusicButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f8e848(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_11271839c;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d2be0();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f8e894; end: 104f8e8fb; -[SCMusicEditorEntryPoint currentTimeObservableForEditorViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f8e894(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + _DAT_11271839c;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0d2b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 104f8e8fc; end: 104f8e97f; -[SCMusicEditorEntryPoint editorViewControllerDidChangeMuteSnapAudioToggle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f8e8fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  
  param_1 = param_1 + _DAT_11271839c;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0d4060();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(lVar1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f8e980; end: 104f8ea37; -[SCMusicEditorEntryPoint editorViewController:didSendPlaybackEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f8e980(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  _objc_retain(param_4);
  lVar4 = (long)_DAT_11271839c;
  uVar1 = param_1 + lVar4;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  _objc_opt_respondsToSelector();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) != 0) {
    param_1 = param_1 + lVar4;
    _objc_loadWeakRetained(param_1);
    lVar4 = param_1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d2bc0();
    _objc_release(lVar4);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104f8ea38; end: 104f8eacf; -[SCMusicEditorEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f8ea38(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127183b0);
  _objc_destroyWeak(param_1 + _DAT_112718390);
  _objc_destroyWeak(param_1 + _DAT_112718394);
  _objc_destroyWeak(param_1 + _DAT_1127183a8);
  _objc_destroyWeak(param_1 + _DAT_1127183a4);
  _objc_destroyWeak(param_1 + _DAT_1127183ac);
  _objc_destroyWeak(param_1 + _DAT_1127183a0);
  _objc_destroyWeak(param_1 + _DAT_11271838c);
  _objc_destroyWeak(param_1 + _DAT_11271839c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112718398);
  return;
}



/* Entry: 104f8ead0; end: 104f8edc7; -[SCMusicEditorViewController initWithAudioServices:selection:runtime:experiments:temporaryFileWriterServices:valdiBlizzardLoggingServices:loggingInfo:musicGrpcService:isModularCamera:muteSnapToggleInitialValue:previewBottomBorderYOffset:trackAssetLoader:itemViewService:shouldAutoPlay:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_104f8ead0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined1 param_11,undefined4 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined1 param_17)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  puStack_68 = PTR_PTR_1126e5558;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_1127183b4;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127183b8;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127183bc;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127183c0;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_6;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127183c4;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_7;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127183c8;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_8;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127183cc;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_9;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127183d0;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_10;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_1127183d4) = param_11;
    lVar3 = (long)_DAT_1127183d8;
    _objc_retain(param_13);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_13;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127183dc;
    _objc_retain(param_14);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_14;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127183e0;
    _objc_retain(param_15);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_15;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127183e4;
    _objc_retain(param_16);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_16;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_1127183e8) = param_17;
  }
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 104f8edc8; end: 104f8edf7; -[SCMusicEditorViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f8edc8(long param_1)

{
  func_0x00010be4cee0();
                    /* WARNING: Could not recover jumptable at 0x00010c222390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setView__112666308,*(undefined8 *)(param_1 + _DAT_1127183ec));
  return;
}



/* Entry: 104f8edf8; end: 104f8eec3; -[SCMusicEditorViewController viewWillAppear:] */

void FUN_104f8edf8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126e5558;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_viewWillAppear__1126853f0);
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4bc0(0);
  _objc_release(uVar1);
  _objc_release(param_1);
  func_0x00010bf03400(0x3fb999999999999a,PTR__OBJC_CLASS___UIView_1126aec20);
  return;
}



/* Entry: 104f8eec4; end: 104f8ef13;  */

void FUN_104f8eec4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4bc0(0x3f800000);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104f8ef14; end: 104f8efab; -[SCMusicEditorViewController prepareWithCompletion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f8ef14(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  func_0x00010be4cee0(param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127183ec);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_104f8efac;
  puStack_30 = &UNK_110849530;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010c2a1520(uVar1,param_2,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 104f8efac; end: 104f8efbf;  */

void FUN_104f8efac(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000104f8efb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 104f8efc0; end: 104f8f5cf; -[SCMusicEditorViewController _loadContentViewIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f8efc0(double param_1,long param_2,undefined8 param_3)

{
  undefined1 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  long lVar16;
  long lVar17;
  int iVar18;
  long lVar19;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lVar19 = (long)_DAT_1127183ec;
  if (*(long *)(param_2 + lVar19) != 0) {
    return;
  }
  lVar17 = (long)_DAT_1127183cc;
  lVar2 = *(long *)(param_2 + lVar17);
  func_0x00010c247a20();
  if (lVar2 == 0x78) {
    iVar18 = 1;
  }
  else {
    iVar18 = (uint)*(byte *)(param_2 + _DAT_1127183d4) << 1;
  }
  puVar3 = PTR_PTR_1126b2ee0;
  _objc_alloc();
  uVar4 = *(undefined8 *)(param_2 + lVar17);
  func_0x00010c247a20(uVar4);
  func_0x00010bc9107c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04ab60(puVar3,param_3,uVar4,iVar18);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_2 + lVar17);
  func_0x00010bf31200(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c179280(puVar3,param_3,uVar4);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_2 + lVar17);
  func_0x00010bf4f080(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1833c0(puVar3,param_3,uVar4);
  _objc_release(uVar4);
  lVar16 = (long)_DAT_1127183b8;
  uVar5 = *(undefined8 *)(param_2 + lVar16);
  func_0x00010c0fbb20();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar5;
  func_0x00010841fae8();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  puVar6 = PTR_PTR_1126b2ee8;
  _objc_alloc();
  uVar7 = *(undefined8 *)(param_2 + lVar16);
  func_0x00010c0fbb20(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar7;
  func_0x00010c15a4a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar5;
  func_0x00010bf0ef80();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = *(long *)(param_2 + lVar16);
  func_0x00010c0fbb20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar17;
  func_0x00010c15a4a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
  }
  else {
    func_0x00010bf0ffa0(&uStack_88,lVar2);
  }
  _CMTimeGetSeconds(&uStack_88);
  param_1 = param_1 * 1000.0;
  func_0x00010c054ae0(param_1,puVar6,param_3,uVar4,uVar9);
  _objc_release(lVar2);
  _objc_release(lVar17);
  _objc_release(uVar9);
  _objc_release(uVar5);
  _objc_release(uVar7);
  puVar8 = PTR_PTR_1126b2ef0;
  _objc_alloc(PTR_PTR_1126b2ef0);
  lVar2 = *(long *)(param_2 + lVar16);
  func_0x00010bf4e080();
  uVar1 = 2;
  if (lVar2 != 2) {
    uVar1 = lVar2 == 1;
  }
  func_0x00010c1582a0(*(undefined8 *)(param_2 + lVar16));
  func_0x00010c056300(param_1 * 1000.0,puVar8,param_3,uVar1,puVar6);
  func_0x00010c196900();
  lVar2 = (long)_DAT_1127183c0;
  uVar9 = *(undefined8 *)(param_2 + lVar2);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar9;
  func_0x00010c2383e0();
  _objc_release(uVar9);
  if ((int)uVar5 != 0) {
    func_0x00010c201cc0(puVar8,param_3,PTR____kCFBooleanTrue_11034ab68);
  }
  uVar9 = *(undefined8 *)(param_2 + lVar2);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar9;
  func_0x00010c2383c0();
  _objc_release(uVar9);
  if ((int)uVar5 != 0) {
    func_0x00010c201ca0(puVar8,param_3,PTR____kCFBooleanTrue_11034ab68);
  }
  func_0x00010c1ca640(puVar8,param_3,*(undefined8 *)(param_2 + _DAT_1127183d8));
  func_0x00010c1e1a00(puVar8,param_3,*(undefined8 *)(param_2 + _DAT_1127183dc));
  if (*(char *)(param_2 + _DAT_1127183f0) == '\x01') {
    func_0x00010c201860(puVar8,param_3,PTR____kCFBooleanTrue_11034ab68);
  }
  if (iVar18 == 1) {
    func_0x00010c201ce0(puVar8,param_3,PTR____kCFBooleanTrue_11034ab68);
  }
  lVar17 = param_2;
  func_0x00010be45e60(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b6040(puVar8,param_3,lVar17);
  _objc_release(lVar17);
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,
                      *(undefined1 *)(param_2 + _DAT_1127183e8));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2000a0(puVar8,param_3,puVar10);
  _objc_release(puVar10);
  iVar18 = (int)*(undefined8 *)(param_2 + lVar16);
  func_0x00010c2551e0();
  if (iVar18 != 0) {
    uVar5 = *(undefined8 *)(param_2 + lVar16);
    func_0x00010c2551e0(uVar5);
    func_0x00010808d4dc();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fb5a0(puVar8,param_3,uVar5);
    _objc_release(uVar5);
  }
  puVar10 = PTR_PTR_1126b2ef8;
  _objc_alloc();
  func_0x00010bff5660();
  puVar11 = PTR_PTR_1126b2f00;
  _objc_alloc(PTR_PTR_1126b2f00);
  func_0x00010c0510a0();
  puVar12 = PTR_PTR_1126b2f08;
  _objc_alloc(PTR_PTR_1126b2f08);
  func_0x00010bff0580();
  uVar9 = *(undefined8 *)(param_2 + _DAT_1127183c8);
  func_0x00010bf1cf00(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar9;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  func_0x00010c171b20(puVar12,param_3,uVar5);
  func_0x00010c1c9e60(puVar12,param_3,*(undefined8 *)(param_2 + _DAT_1127183d0));
  lVar17 = *(long *)(param_2 + _DAT_1127183f4);
  if (lVar17 != 0) {
    func_0x00010c272120();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d9940(puVar12,param_3,lVar17);
    _objc_release(lVar17);
  }
  puVar13 = PTR_PTR_1126b2f10;
  _objc_alloc();
  func_0x00010c061d40();
  uVar9 = *(undefined8 *)(param_2 + lVar19);
  *(undefined **)(param_2 + lVar19) = puVar13;
  _objc_release(uVar9);
  puVar13 = PTR_PTR_1126b2f18;
  _objc_alloc(PTR_PTR_1126b2f18);
  func_0x00010c02cca0();
  func_0x00010c182180(puVar12,param_3,puVar13);
  uVar9 = *(undefined8 *)(param_2 + lVar19);
  func_0x00010c295200(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c194900();
  _objc_release(uVar9);
  puVar14 = *(undefined **)(param_2 + lVar2);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar14;
  func_0x00010c2383e0();
  if ((int)puVar15 != 0) {
    lVar2 = *(long *)(param_2 + lVar16);
    func_0x00010bf4e080();
    _objc_release(puVar14);
    if (lVar2 != 0) goto LAB_104f8f564;
    puVar14 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_3,0x25);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_2 + lVar19),param_3,puVar14);
  }
  _objc_release(puVar14);
LAB_104f8f564:
  _objc_release(puVar13);
  _objc_release(uVar5);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar8);
  _objc_release(puVar6);
  _objc_release(uVar4);
  _objc_release(puVar3);
  return;
}



/* Entry: 104f8f5d0; end: 104f8f683; -[SCMusicEditorViewController onMusicButtonClickedWithTrack:] */

void FUN_104f8f5d0(undefined8 param_1)

{
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f7fc0();
  _objc_release(param_1);
  return;
}



/* Entry: 104f8f684; end: 104f8f987; -[SCMusicEditorViewController onConfirmWithStartOffsetMs:selectedMusicStickerData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f8f684(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  undefined1 auStack_88 [24];
  
  _objc_retain(param_4);
  lVar15 = (long)_DAT_1127183b8;
  uVar1 = *(undefined8 *)(param_2 + lVar15);
  func_0x00010c0fbb20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c15a4a0();
  _objc_retainAutoreleasedReturnValue();
  _CMTimeMakeWithSeconds(auStack_88,param_1 / 1000.0,600);
  uVar3 = uVar2;
  func_0x0001084532b0(uVar2,auStack_88);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126b2f20;
  _objc_alloc();
  uVar5 = *(undefined8 *)(param_2 + lVar15);
  func_0x00010c0fbb20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010c277f60();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_2 + lVar15);
  func_0x00010c0fbb20();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar6;
  func_0x00010beff2a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_2 + lVar15);
  func_0x00010c0fbb20(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c260ce0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_2 + lVar15);
  func_0x00010c0fbb20(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010c0c1aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_2 + lVar15);
  func_0x00010c0fbb20();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010bf0a480();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c043d40();
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar1);
  _objc_release(uVar6);
  _objc_release(uVar2);
  _objc_release(uVar5);
  uVar2 = param_4;
  func_0x00010c2551e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010808d884();
  _objc_release(uVar2);
  puVar13 = PTR_PTR_1126b2f28;
  _objc_alloc();
  func_0x00010bf4e080(*(undefined8 *)(param_2 + lVar15));
  func_0x00010c1582a0(*(undefined8 *)(param_2 + lVar15));
  func_0x00010c035f20();
  puVar14 = puVar13;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  _objc_retain(puVar13);
  func_0x00010c0f7fc0(puVar14);
  _objc_release(puVar14);
  _objc_release(param_4);
  _objc_release(puVar13);
  _objc_release(param_4);
  _objc_release(puVar13);
  _objc_release(puVar4);
  _objc_release(uVar3);
  return;
}



/* Entry: 104f8f988; end: 104f8f9cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f8f988(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20) + (long)_DAT_1127183f8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf8ca60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104f8f9cc; end: 104f8fa87; -[SCMusicEditorViewController onCancel] */

void FUN_104f8f9cc(undefined8 param_1)

{
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f7fc0();
  _objc_release(param_1);
  return;
}



/* Entry: 104f8fa88; end: 104f8fb3b; -[SCMusicEditorViewController onStartOffsetWillChange] */

void FUN_104f8fa88(undefined8 param_1)

{
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f7fc0();
  _objc_release(param_1);
  return;
}



/* Entry: 104f8fb3c; end: 104f8fbcf; -[SCMusicEditorViewController onStartOffsetChangedWithStartOffsetMs:] */

void FUN_104f8fb3c(undefined8 param_1)

{
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f7fc0();
  _objc_release(param_1);
  return;
}



/* Entry: 104f8fbd0; end: 104f8fc13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f8fbd0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20) + (long)_DAT_1127183f8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf8caa0(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104f8fc14; end: 104f8feaf; -[SCMusicEditorViewController observeExternalCurrentTimeMsWithCallback:] */

void FUN_104f8fc14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b2798;
  _objc_opt_new();
  puVar3 = puVar2;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  uStack_78 = 0x104f8fd4c;
  puStack_70 = &UNK_11084a9e8;
  uStack_68 = param_1;
  uStack_58 = param_3;
  _objc_retain(puVar2);
  puStack_60 = puVar2;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(puVar3,param_2,&puStack_88);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126b2f30;
  _objc_alloc(PTR_PTR_1126b2f30);
  puStack_b0 = puVar1;
  uStack_a8 = 0xc2000000;
  uStack_a0 = 0x104f8ff18;
  puStack_98 = &UNK_110842e18;
  puStack_90 = puVar2;
  _objc_retain(puVar2);
  func_0x00010bffae00(puVar3,param_2,&puStack_b0);
  _objc_release(puStack_90);
  _objc_release(puStack_60);
  _objc_release(uStack_58);
  _objc_release(puVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104f8feb0; end: 104f8ff0f;  */

void FUN_104f8feb0(double param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  lVar1 = *(long *)(param_2 + 0x20);
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_28 = 0;
  }
  else {
    func_0x00010bdc1140(&uStack_38,param_3);
  }
  _CMTimeGetSeconds(&uStack_38);
  (**(code **)(lVar1 + 0x10))(param_1 * 1000.0,lVar1);
  return;
}



/* Entry: 104f8ff10; end: 104f8ff1f;  */

void FUN_104f8ff10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf86d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_dispose_1125bf4f8);
  return;
}



/* Entry: 104f8ff20; end: 104f8ff5b; -[SCMusicEditorViewController onMuteSnapAudioToggleChangedWithMuteSnapAudio:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f8ff20(long param_1)

{
  param_1 = param_1 + _DAT_1127183f8;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf8cac0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f8ff5c; end: 104f9000f; -[SCMusicEditorViewController onMusicPlaybackEventTriggeredWithTrackId:playbackEvent:offsetMs:wallClockTime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f8ff5c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,int param_6)

{
  undefined *puVar1;
  
  func_0x00010af28d38(param_5);
  if ((param_6 == 0) || (param_6 == 1)) {
    puVar1 = PTR_PTR_1126b2f38;
    _objc_alloc(PTR_PTR_1126b2f38);
    func_0x00010c010f40(param_1,param_2);
  }
  else {
    puVar1 = (undefined *)0x0;
  }
  param_3 = param_3 + _DAT_1127183f8;
  _objc_loadWeakRetained(param_3);
  func_0x00010bf8ca80();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104f90010; end: 104f90017; -[SCMusicEditorViewController shouldRetainInstanceWhenMarshalling] */

undefined8 FUN_104f90010(void)

{
  return 0;
}



/* Entry: 104f90018; end: 104f90023; -[SCMusicEditorViewController pushToValdiMarshaller:] */

void FUN_104f90018(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010af99cf8(param_3,param_1);
  func_0x00010af99cf0();
  func_0x00010af99ce8();
  func_0x00010af99c50();
  func_0x00010af99c60();
  return;
}



/* Entry: 104f90024; end: 104f900f7; -[SCMusicEditorViewController _itemInstanceViewFactory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f90024(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127183bc);
  _objc_copyWeak(auStack_30,auStack_28);
  _objc_opt_class(PTR_PTR_1126b2f40);
  func_0x00010c0b7ac0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104f900f8; end: 104f90153;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f900f8(long param_1)

{
  undefined *puVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126b2f40;
    _objc_alloc(PTR_PTR_1126b2f40);
    func_0x00010bffa540();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104f90154; end: 104f90173; -[SCMusicEditorViewController delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f90154(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127183f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104f90174; end: 104f90187; -[SCMusicEditorViewController setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f90174(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_1127183f8,param_3);
  return;
}



/* Entry: 104f90188; end: 104f90197; -[SCMusicEditorViewController pausePlaybackObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104f90188(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127183f4);
}



/* Entry: 104f90198; end: 104f901d7; -[SCMusicEditorViewController setPausePlaybackObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f90198(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127183f4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104f901d8; end: 104f901e7; -[SCMusicEditorViewController showBottomGradient] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104f901d8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127183f0);
}



/* Entry: 104f901e8; end: 104f901f7; -[SCMusicEditorViewController setShowBottomGradient:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f901e8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_1127183f0) = param_3;
  return;
}



/* Entry: 104f901f8; end: 104f90303; -[SCMusicEditorViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f901f8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127183f4,0);
  _objc_destroyWeak(param_1 + _DAT_1127183f8);
  _objc_storeStrong(param_1 + _DAT_1127183e4,0);
  _objc_storeStrong(param_1 + _DAT_1127183e0,0);
  _objc_storeStrong(param_1 + _DAT_1127183dc,0);
  _objc_storeStrong(param_1 + _DAT_1127183d8,0);
  _objc_storeStrong(param_1 + _DAT_1127183d0,0);
  _objc_storeStrong(param_1 + _DAT_1127183cc,0);
  _objc_storeStrong(param_1 + _DAT_1127183c8,0);
  _objc_storeStrong(param_1 + _DAT_1127183c4,0);
  _objc_storeStrong(param_1 + _DAT_1127183c0,0);
  _objc_storeStrong(param_1 + _DAT_1127183bc,0);
  _objc_storeStrong(param_1 + _DAT_1127183ec,0);
  _objc_storeStrong(param_1 + _DAT_1127183b8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127183b4,0);
  return;
}



/* Entry: 104f90304; end: 104f903c7; -[SCMusicEditorViewControllerContentManager initWithMusicAssetLoader:] */

undefined1 * FUN_104f90304(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e5560;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104f903c8; end: 104f903eb; -[SCMusicEditorViewControllerContentManager loadLyricsStickerBoltForMediaWithMusicStickerMediaInfos:] */

void FUN_104f903c8(long param_1)

{
  func_0x00010be1b4e0();
                    /* WARNING: Could not recover jumptable at 0x00010c272130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_toSCBridgeObservable_11267a270);
  return;
}



/* Entry: 104f903ec; end: 104f90567; -[SCMusicEditorViewControllerContentManager _generateLyricsStickerDataWithInfoArray:] */

void FUN_104f903ec(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_58,param_1);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_104f90568;
  puStack_68 = &UNK_11085f538;
  _objc_copyWeak(auStack_60,auStack_58);
  lVar1 = param_3;
  func_0x00010bf43280();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x10));
  }
  else {
    puVar3 = PTR_PTR_1126ae558;
    func_0x00010beffb40(PTR_PTR_1126ae558);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_88,auStack_58);
    func_0x00010c297260(puVar3);
    _objc_release(puVar3);
    _objc_destroyWeak(auStack_88);
  }
  _objc_release(lVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 104f90568; end: 104f90753;  */

void FUN_104f90568(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_2;
    func_0x00010c0c5340();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
      lVar1 = param_2;
      func_0x00010c0c5340();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar1;
      func_0x00010c28f340();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc3460(puVar4);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_2;
      func_0x00010c2551e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = param_2;
      func_0x00010c0c5340();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010bf93e00();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010c086560();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = param_2;
      func_0x00010c0c5340(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar9;
      func_0x00010bf93e00();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar10;
      func_0x00010c085300();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar2;
      func_0x00010c09b8c0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar11);
      _objc_release(lVar10);
      _objc_release(lVar9);
      _objc_release(lVar8);
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(puVar4);
      _objc_release(lVar3);
      _objc_release(lVar1);
      _objc_release(uVar2);
      goto LAB_104f90720;
    }
  }
  uVar12 = 0;
LAB_104f90720:
  _objc_release(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar12);
  return;
}



/* Entry: 104f90754; end: 104f907b7;  */

void FUN_104f90754(long param_1,long param_2,long param_3)

{
  _objc_retain(param_2);
  if (param_3 == 0) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained();
    if ((param_2 != 0) && (param_1 != 0)) {
      func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x10));
    }
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104f907b8; end: 104f907f3; -[SCMusicEditorViewControllerContentManager .cxx_destruct] */

void FUN_104f907b8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104f907f4; end: 104f908f3; -[SCMusicFeatureProviderServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f907f4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2f50;
  _objc_alloc(PTR_PTR_1126b2f50);
  func_0x00010c02cd40();
  func_0x00010bf9d660(*(undefined8 *)(param_1 + _DAT_112718424));
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 104f908f4; end: 104f90a3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f908f4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained();
    puVar7 = PTR_PTR_1126b2f48;
    _objc_alloc(PTR_PTR_1126b2f48);
    lVar1 = param_1 + _DAT_112718408;
    _objc_loadWeakRetained(lVar1);
    lVar2 = param_1 + _DAT_11271840c;
    _objc_loadWeakRetained(lVar2);
    lVar3 = param_1 + _DAT_112718410;
    _objc_loadWeakRetained(lVar3);
    lVar4 = param_1 + _DAT_112718414;
    _objc_loadWeakRetained(lVar4);
    lVar5 = param_1 + _DAT_112718418;
    _objc_loadWeakRetained(lVar5);
    uVar8 = *(undefined8 *)(param_1 + _DAT_11271841c);
    lVar6 = param_1 + _DAT_112718420;
    _objc_loadWeakRetained();
    func_0x00010c02cfa0(puVar7,param_2,lVar1,lVar2,lVar3,lVar4,lVar5,uVar8,lVar6);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 104f90a40; end: 104f90ac7; -[SCMusicFeatureProviderServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f90a40(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271841c,0);
  _objc_storeStrong(param_1 + _DAT_112718424,0);
  _objc_destroyWeak(param_1 + _DAT_112718420);
  _objc_destroyWeak(param_1 + _DAT_112718418);
  _objc_destroyWeak(param_1 + _DAT_112718414);
  _objc_destroyWeak(param_1 + _DAT_112718410);
  _objc_destroyWeak(param_1 + _DAT_11271840c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112718408);
  return;
}



/* Entry: 104f90ac8; end: 104f90b8b; -[SCMusicFeatureProvider initWithPresentingViewController:musicCameraScopeExposer:musicCameraScopeBuilderServices:] */

undefined1 *
FUN_104f90ac8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126e5568;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104f90b8c; end: 104f90c5b; -[SCMusicFeatureProvider openModularCameraWithTrack:] */

void FUN_104f90b8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_28,param_1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_104f90c5c;
  puStack_40 = &UNK_110841fb0;
  _objc_copyWeak(auStack_30,auStack_28);
  _objc_retain(param_3);
  uStack_38 = param_3;
  func_0x0001000d76cc("APPSTORE",&puStack_58);
  _objc_release(uStack_38);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 104f90c5c; end: 104f90c97;  */

void FUN_104f90c5c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be6d380(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104f90c98; end: 104f90e0f; -[SCMusicFeatureProvider _openModularCameraOnMainThreadWithTrack:] */

void FUN_104f90c98(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  _objc_retain(param_4);
  iVar1 = (int)*(undefined8 *)(param_2 + 0x10);
  func_0x00010c071800();
  if (iVar1 != 0) {
    lVar2 = param_2 + 8;
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar2 != 0) {
      uVar7 = param_4;
      func_0x00010c277e80(param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar7;
      func_0x00010af28d38();
      _objc_release(uVar7);
      puVar4 = PTR_PTR_1126ae6c0;
      func_0x00010c294300(PTR_PTR_1126ae6c0,param_3,&PTR____CFConstantStringClassReference_110daafd8
                         );
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126ae6d0;
      _objc_alloc(PTR_PTR_1126ae6d0);
      func_0x00010c03e5a0();
      puVar6 = PTR_PTR_1126b1bb0;
      func_0x00010bf165e0(PTR_PTR_1126b1bb0,param_3,puVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_2 + 0x18);
      lVar2 = param_2 + 8;
      _objc_loadWeakRetained(lVar2);
      func_0x00010bf6a4e0(param_4);
      func_0x00010bf236a0(uVar7,param_3,lVar2,puVar6,param_2,uVar3,0x10,0,(int)param_1,0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      func_0x00010bf9d620(*(undefined8 *)(param_2 + 0x10),param_3,uVar7);
      _objc_release(uVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104f90e10; end: 104f90e57; -[SCMusicFeatureProvider dismissCameraScope:] */

void FUN_104f90e10(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x10));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 104f90e58; end: 104f90e63; -[SCMusicFeatureProvider pushToValdiMarshaller:] */

void FUN_104f90e58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010afa2320(param_3,param_1);
  func_0x00010afa2300();
  func_0x00010afa22f8();
  func_0x00010afa22ac();
  func_0x00010afa22c8();
  return;
}



/* Entry: 104f90e64; end: 104f90e6b; -[SCMusicFeatureProvider audioDataLoader] */

undefined8 FUN_104f90e64(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 104f90e6c; end: 104f90e9b; -[SCMusicFeatureProvider setAudioDataLoader:] */

void FUN_104f90e6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104f90e9c; end: 104f90ea3; -[SCMusicFeatureProvider playerFactory] */

undefined8 FUN_104f90e9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 104f90ea4; end: 104f90ed3; -[SCMusicFeatureProvider setPlayerFactory:] */

void FUN_104f90ea4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104f90ed4; end: 104f90edb; -[SCMusicFeatureProvider audioFactory] */

undefined8 FUN_104f90ed4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 104f90edc; end: 104f90f0b; -[SCMusicFeatureProvider setAudioFactory:] */

void FUN_104f90edc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104f90f0c; end: 104f90f13; -[SCMusicFeatureProvider favoritesService] */

undefined8 FUN_104f90f0c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 104f90f14; end: 104f90f43; -[SCMusicFeatureProvider setFavoritesService:] */

void FUN_104f90f14(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104f90f44; end: 104f90f4b; -[SCMusicFeatureProvider notificationPresenter] */

undefined8 FUN_104f90f44(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 104f90f4c; end: 104f90f7b; -[SCMusicFeatureProvider setNotificationPresenter:] */

void FUN_104f90f4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104f90f7c; end: 104f90f83; -[SCMusicFeatureProvider actionSheetPresenter] */

undefined8 FUN_104f90f7c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 104f90f84; end: 104f90fb3; -[SCMusicFeatureProvider setActionSheetPresenter:] */

void FUN_104f90f84(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104f90fb4; end: 104f90fbb; -[SCMusicFeatureProvider featureSettings] */

undefined8 FUN_104f90fb4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 104f90fbc; end: 104f90feb; -[SCMusicFeatureProvider setFeatureSettings:] */

void FUN_104f90fbc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104f90fec; end: 104f91077; -[SCMusicFeatureProvider .cxx_destruct] */

void FUN_104f90fec(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 104f91078; end: 104f911f3; -[SCMusicFeatureProviderFactory initWithMusicServices:audioServices:temporaryFileWriterServices:musicFavoritesComposerServices:composerCoreUIServices:musicCameraScopeExposer:musicCameraScopeBuilderServices:] */

undefined1 *
FUN_104f91078(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126e5570;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar2);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104f911f4; end: 104f9141f; -[SCMusicFeatureProviderFactory musicFeatureProviderWithPresentingViewController:] */

void FUN_104f911f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126b2f58;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c039200();
  puVar2 = PTR_PTR_1126b2f60;
  _objc_alloc(PTR_PTR_1126b2f60);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0c57a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c029900(puVar2,param_2,uVar3);
  func_0x00010c16bb60(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126b2ef8;
  _objc_alloc(PTR_PTR_1126b2ef8);
  func_0x00010bff5660();
  func_0x00010c1dda80(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126b2f00;
  _objc_alloc(PTR_PTR_1126b2f00);
  func_0x00010c0510a0();
  func_0x00010c16bc80(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0d2cc0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19a7e0(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0dc660(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ce4c0(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010beef000(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0b7620();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c161e00(puVar1,param_2,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar5);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0d2f00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19aba0(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104f91420; end: 104f9148b; -[SCMusicFeatureProviderFactory .cxx_destruct] */

void FUN_104f91420(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104f9148c; end: 104f9161f; -[SCMusicPickerEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f9148c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  lVar1 = param_1 + _DAT_11271846c;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c25dfa0();
  _objc_release(lVar1);
  if (lVar2 == 3) {
    func_0x00010bdf0440();
    _objc_retainAutoreleasedReturnValue();
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_104f91620;
    puStack_50 = &UNK_110841fb0;
    puVar3 = auStack_40;
    _objc_copyWeak(puVar3,auStack_38);
    _objc_retain(param_1);
    lStack_48 = param_1;
    func_0x00010c10a440(param_1);
    lVar1 = lStack_48;
  }
  else {
    func_0x00010bdf0460();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = auStack_70;
    _objc_copyWeak(puVar3,auStack_38);
    _objc_retain(param_1);
    func_0x00010c10a440(param_1);
    lVar1 = param_1;
  }
  _objc_release(lVar1);
  _objc_destroyWeak(puVar3);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 104f91620; end: 104f91687;  */

void FUN_104f91620(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdd0540();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f91688; end: 104f916df; -[SCMusicPickerEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f91688(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf83b00(*(undefined8 *)(param_1 + _DAT_112718470));
  puStack_28 = PTR_PTR_1126e5578;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104f916e0; end: 104f91ee3; -[SCMusicPickerEntryPoint _createMusicPickerViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f916e0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  undefined *puVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_128;
  undefined8 uStack_120;
  
  lVar1 = param_1 + _DAT_112718474;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = lVar3;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puVar44 = (undefined *)0x0;
  }
  else {
    lVar1 = param_1 + _DAT_112718478;
    _objc_loadWeakRetained();
    lVar4 = lVar1;
    func_0x00010c293740();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = param_1 + _DAT_11271847c;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010bf1ef20();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    func_0x0001068316a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar46 = (long)_DAT_112718480;
    lVar1 = param_1 + lVar46;
    _objc_loadWeakRetained();
    lVar47 = (long)_DAT_112718484;
    lVar2 = param_1 + lVar47;
    _objc_loadWeakRetained(lVar2);
    lVar6 = lVar1;
    func_0x0001006f7bf0(lVar1,lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar46 = param_1 + lVar46;
    _objc_loadWeakRetained();
    lVar47 = param_1 + lVar47;
    _objc_loadWeakRetained(lVar47);
    lVar7 = lVar46;
    func_0x0001058e908c(lVar46,lVar47);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar47);
    _objc_release(lVar46);
    puVar8 = PTR_PTR_1126b2f68;
    _objc_alloc();
    lVar47 = (long)_DAT_112718488;
    lVar1 = param_1 + lVar47;
    _objc_loadWeakRetained(lVar1);
    lVar2 = param_1 + _DAT_11271848c;
    _objc_loadWeakRetained(lVar2);
    lVar9 = lVar2;
    func_0x00010c0d2a40();
    _objc_retainAutoreleasedReturnValue();
    lVar46 = param_1 + _DAT_11271846c;
    lVar10 = lVar46;
    _objc_loadWeakRetained(lVar46);
    lVar11 = lVar10;
    func_0x00010bf4e080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c02cfc0();
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar2);
    _objc_release(lVar1);
    puVar12 = PTR_PTR_1126b2f70;
    _objc_alloc();
    func_0x00010c04a500();
    puVar44 = PTR_PTR_1126b2f78;
    _objc_alloc();
    lVar1 = param_1 + _DAT_112718494;
    lVar13 = lVar1;
    _objc_loadWeakRetained();
    lVar14 = lVar13;
    func_0x00010c0c57a0();
    _objc_retainAutoreleasedReturnValue();
    lVar47 = param_1 + lVar47;
    _objc_loadWeakRetained();
    lVar15 = lVar47;
    func_0x00010bf9c6a0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1 + _DAT_112718498;
    _objc_loadWeakRetained();
    lVar9 = param_1 + _DAT_11271849c;
    _objc_loadWeakRetained();
    lVar16 = lVar46;
    _objc_loadWeakRetained();
    lVar17 = lVar16;
    func_0x00010c15a4a0();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = lVar46;
    _objc_loadWeakRetained();
    lVar19 = lVar18;
    func_0x00010c0b3ae0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = param_1 + _DAT_1127184a0;
    _objc_loadWeakRetained();
    lVar11 = param_1 + _DAT_1127184a8;
    _objc_loadWeakRetained();
    lVar20 = param_1 + _DAT_1127184ac;
    _objc_loadWeakRetained();
    lVar21 = lVar20;
    func_0x00010bf075a0();
    _objc_retainAutoreleasedReturnValue();
    lVar22 = param_1 + _DAT_1127184b0;
    _objc_loadWeakRetained();
    lVar23 = param_1 + _DAT_1127184b4;
    _objc_loadWeakRetained();
    lVar42 = (long)_DAT_1127184b8;
    lVar24 = param_1 + lVar42;
    _objc_loadWeakRetained();
    lVar25 = lVar24;
    func_0x00010c2928c0();
    _objc_retainAutoreleasedReturnValue();
    lVar42 = param_1 + lVar42;
    _objc_loadWeakRetained();
    lVar26 = lVar42;
    func_0x00010bf60a20();
    _objc_retainAutoreleasedReturnValue();
    lVar27 = param_1 + _DAT_1127184bc;
    _objc_loadWeakRetained();
    lVar28 = param_1 + _DAT_1127184c0;
    _objc_loadWeakRetained();
    lVar29 = lVar46;
    _objc_loadWeakRetained();
    func_0x00010c25dfa0();
    lVar43 = (long)_DAT_1127184c4;
    lVar30 = param_1 + lVar43;
    _objc_loadWeakRetained();
    if (lVar30 == 0) {
      uStack_120 = 0;
    }
    else {
      uStack_1c8 = param_1 + lVar43;
      _objc_loadWeakRetained();
      uStack_1d0 = uStack_1c8;
      func_0x00010c275480();
      _objc_retainAutoreleasedReturnValue();
      uStack_120 = uStack_1d0;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
    }
    lVar45 = (long)_DAT_1127184c8;
    lVar43 = param_1 + lVar45;
    _objc_loadWeakRetained();
    if (lVar43 == 0) {
      uStack_128 = 0;
    }
    else {
      uStack_1d8 = param_1 + lVar45;
      _objc_loadWeakRetained();
      uStack_1e0 = uStack_1d8;
      func_0x00010c275380();
      _objc_retainAutoreleasedReturnValue();
      uStack_1e8 = uStack_1e0;
      (**(code **)(uStack_1e0 + 0x10))();
      _objc_retainAutoreleasedReturnValue();
      uStack_128 = uStack_1e8;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
    }
    lVar45 = param_1 + _DAT_1127184cc;
    _objc_loadWeakRetained();
    lVar31 = lVar45;
    func_0x00010c0d2a40();
    _objc_retainAutoreleasedReturnValue();
    lVar32 = lVar31;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar33 = param_1 + _DAT_1127184d0;
    _objc_loadWeakRetained();
    lVar34 = lVar33;
    func_0x00010bf1ad00();
    _objc_retainAutoreleasedReturnValue();
    _objc_loadWeakRetained();
    lVar35 = lVar1;
    func_0x00010c15a860();
    _objc_retainAutoreleasedReturnValue();
    lVar36 = param_1 + _DAT_1127184d4;
    _objc_loadWeakRetained();
    lVar37 = lVar36;
    func_0x00010bf4c240();
    _objc_retainAutoreleasedReturnValue();
    lVar38 = lVar46;
    _objc_loadWeakRetained();
    lVar39 = lVar38;
    func_0x00010bf4e080();
    _objc_retainAutoreleasedReturnValue();
    _objc_loadWeakRetained();
    lVar40 = lVar46;
    func_0x00010bf68080();
    _objc_retainAutoreleasedReturnValue();
    param_1 = param_1 + _DAT_1127184d8;
    _objc_loadWeakRetained();
    lVar41 = param_1;
    func_0x00010bf0f9c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05dd40();
    _objc_release(lVar41);
    _objc_release(param_1);
    _objc_release(lVar40);
    _objc_release(lVar46);
    _objc_release(lVar39);
    _objc_release(lVar38);
    _objc_release(lVar37);
    _objc_release(lVar36);
    _objc_release(lVar35);
    _objc_release(lVar1);
    _objc_release(lVar34);
    _objc_release(lVar33);
    _objc_release(lVar32);
    _objc_release(lVar31);
    _objc_release(lVar45);
    if (lVar43 != 0) {
      _objc_release(uStack_128);
      _objc_release(uStack_1e8);
      _objc_release(uStack_1e0);
      _objc_release(uStack_1d8);
    }
    _objc_release(lVar43);
    if (lVar30 != 0) {
      _objc_release(uStack_120);
      _objc_release(uStack_1d0);
      _objc_release(uStack_1c8);
    }
    _objc_release(lVar30);
    _objc_release(lVar29);
    _objc_release(lVar28);
    _objc_release(lVar27);
    _objc_release(lVar26);
    _objc_release(lVar42);
    _objc_release(lVar25);
    _objc_release(lVar24);
    _objc_release(lVar23);
    _objc_release(lVar22);
    _objc_release(lVar21);
    _objc_release(lVar20);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(lVar19);
    _objc_release(lVar18);
    _objc_release(lVar17);
    _objc_release(lVar16);
    _objc_release(lVar9);
    _objc_release(lVar2);
    _objc_release(lVar15);
    _objc_release(lVar47);
    _objc_release(lVar14);
    _objc_release(lVar13);
    _objc_release(puVar12);
    _objc_release(puVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
  }
  _objc_release();
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar44);
  return;
}



/* Entry: 104f91ee4; end: 104f9265b; -[SCMusicPickerEntryPoint _createMusicPickerV2ViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f91ee4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  undefined *puVar37;
  long lVar38;
  long lVar39;
  
  lVar1 = param_1 + _DAT_112718474;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = lVar3;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puVar37 = (undefined *)0x0;
  }
  else {
    lVar38 = (long)_DAT_112718480;
    lVar1 = param_1 + lVar38;
    _objc_loadWeakRetained();
    lVar39 = (long)_DAT_112718484;
    lVar2 = param_1 + lVar39;
    _objc_loadWeakRetained(lVar2);
    lVar4 = lVar1;
    func_0x0001006f7bf0(lVar1,lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar38 = param_1 + lVar38;
    _objc_loadWeakRetained();
    lVar39 = param_1 + lVar39;
    _objc_loadWeakRetained(lVar39);
    lVar5 = lVar38;
    func_0x0001058e908c(lVar38,lVar39);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar39);
    _objc_release(lVar38);
    puVar6 = PTR_PTR_1126b2f68;
    _objc_alloc();
    lVar1 = param_1 + _DAT_112718488;
    _objc_loadWeakRetained(lVar1);
    lVar2 = param_1 + _DAT_11271848c;
    _objc_loadWeakRetained(lVar2);
    lVar39 = lVar2;
    func_0x00010c0d2a40();
    _objc_retainAutoreleasedReturnValue();
    lVar38 = param_1 + _DAT_11271846c;
    lVar7 = lVar38;
    _objc_loadWeakRetained(lVar38);
    lVar8 = lVar7;
    func_0x00010bf4e080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c02cfc0();
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar39);
    _objc_release(lVar2);
    _objc_release(lVar1);
    puVar9 = PTR_PTR_1126b2f70;
    _objc_alloc();
    func_0x00010c04a500();
    puVar10 = PTR_PTR_1126b2f60;
    _objc_alloc();
    lVar1 = param_1 + _DAT_112718494;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c0c57a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c029900();
    _objc_release(lVar2);
    _objc_release(lVar1);
    puVar11 = PTR_PTR_1126b2ef8;
    _objc_alloc();
    lVar1 = param_1 + _DAT_112718498;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bff5660();
    _objc_release(lVar1);
    puVar12 = PTR_PTR_1126b2f00;
    _objc_alloc();
    lVar1 = param_1 + _DAT_11271849c;
    lVar2 = lVar1;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c0510a0();
    _objc_release(lVar2);
    lVar2 = param_1 + _DAT_11271847c;
    _objc_loadWeakRetained();
    lVar39 = lVar2;
    func_0x00010bf1ef20();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar39;
    func_0x0001068316a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar39);
    _objc_release(lVar2);
    lVar2 = param_1 + _DAT_1127184bc;
    _objc_loadWeakRetained();
    lVar39 = lVar2;
    func_0x00010bf1cf00();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar39;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar39);
    _objc_release(lVar2);
    if (lVar8 == 0) {
      puVar37 = (undefined *)0x0;
    }
    else {
      lVar2 = param_1 + _DAT_1127184d0;
      _objc_loadWeakRetained();
      lVar39 = lVar2;
      func_0x00010bf1ad00();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lVar39;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar14 = lVar13;
      func_0x00010bf60aa0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar13);
      _objc_release(lVar39);
      _objc_release(lVar2);
      puVar37 = PTR_PTR_1126b2f80;
      _objc_alloc();
      lVar15 = lVar7;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_loadWeakRetained();
      lVar16 = lVar38;
      _objc_loadWeakRetained();
      lVar17 = lVar16;
      func_0x00010c15a4a0();
      _objc_retainAutoreleasedReturnValue();
      lVar18 = lVar38;
      _objc_loadWeakRetained();
      lVar19 = lVar18;
      func_0x00010c0b3ae0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1 + _DAT_1127184a0;
      _objc_loadWeakRetained();
      lVar39 = param_1 + _DAT_1127184a8;
      _objc_loadWeakRetained();
      lVar13 = param_1 + _DAT_1127184ac;
      _objc_loadWeakRetained();
      lVar20 = lVar13;
      func_0x00010bf075a0();
      _objc_retainAutoreleasedReturnValue();
      lVar21 = lVar20;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar22 = param_1 + _DAT_1127184b0;
      _objc_loadWeakRetained();
      lVar23 = param_1 + _DAT_1127184b4;
      _objc_loadWeakRetained();
      lVar24 = param_1 + _DAT_1127184b8;
      _objc_loadWeakRetained();
      lVar25 = lVar24;
      func_0x00010c2928c0();
      _objc_retainAutoreleasedReturnValue();
      lVar26 = lVar25;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar27 = param_1 + _DAT_1127184c0;
      _objc_loadWeakRetained();
      lVar28 = lVar38;
      _objc_loadWeakRetained();
      lVar29 = lVar28;
      func_0x00010bf4e080();
      _objc_retainAutoreleasedReturnValue();
      lVar30 = lVar38;
      _objc_loadWeakRetained();
      lVar31 = lVar30;
      func_0x00010bf68080();
      _objc_retainAutoreleasedReturnValue();
      param_1 = param_1 + _DAT_1127184d8;
      _objc_loadWeakRetained();
      lVar32 = param_1;
      func_0x00010bf0f9c0();
      _objc_retainAutoreleasedReturnValue();
      lVar33 = lVar38;
      _objc_loadWeakRetained();
      lVar34 = lVar33;
      func_0x00010bf4e080();
      _objc_retainAutoreleasedReturnValue();
      lVar35 = lVar34;
      func_0x00010c294ec0();
      _objc_retainAutoreleasedReturnValue();
      _objc_loadWeakRetained();
      lVar36 = lVar38;
      func_0x00010c294ea0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bff52c0(puVar37);
      _objc_release(lVar36);
      _objc_release(lVar38);
      _objc_release(lVar35);
      _objc_release(lVar34);
      _objc_release(lVar33);
      _objc_release(lVar32);
      _objc_release(param_1);
      _objc_release(lVar31);
      _objc_release(lVar30);
      _objc_release(lVar29);
      _objc_release(lVar28);
      _objc_release(lVar27);
      _objc_release(lVar26);
      _objc_release(lVar25);
      _objc_release(lVar24);
      _objc_release(lVar23);
      _objc_release(lVar22);
      _objc_release(lVar21);
      _objc_release(lVar20);
      _objc_release(lVar13);
      _objc_release(lVar39);
      _objc_release(lVar2);
      _objc_release(lVar19);
      _objc_release(lVar18);
      _objc_release(lVar17);
      _objc_release(lVar16);
      _objc_release(lVar1);
      _objc_release(lVar15);
      _objc_release(lVar14);
    }
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
  }
  _objc_release();
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar37);
  return;
}



/* Entry: 104f9265c; end: 104f9294f; -[SCMusicPickerEntryPoint _attachPickerViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f9265c(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  
  _objc_retain(param_4);
  lVar10 = (long)_DAT_11271846c;
  uVar1 = param_2 + lVar10;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010c25dfa0();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126b2fa0;
  puVar4 = PTR_PTR_1126b2f88;
  puVar5 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  if (uVar2 < 2) {
    _objc_retain(param_4);
    _objc_alloc();
    puVar5 = (undefined *)(param_2 + lVar10);
    _objc_loadWeakRetained(puVar5);
    puVar6 = puVar5;
    func_0x00010c27ece0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = param_2 + lVar10;
    _objc_loadWeakRetained(lVar10);
    lVar7 = lVar10;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c02cf20(puVar4,param_3,param_4,puVar6,lVar7);
    _objc_release(param_4);
    lVar11 = (long)_DAT_112718470;
    uVar9 = *(undefined8 *)(param_2 + lVar11);
    *(undefined **)(param_2 + lVar11) = puVar4;
    _objc_release(uVar9);
    _objc_release(lVar7);
LAB_104f927bc:
    _objc_release(lVar10);
    _objc_release(puVar6);
  }
  else {
    if (uVar2 != 2) {
      if (uVar2 != 3) {
        lVar11 = (long)_DAT_112718470;
        goto LAB_104f9291c;
      }
      _objc_retain(param_4);
      _objc_alloc();
      puVar5 = (undefined *)(param_2 + lVar10);
      _objc_loadWeakRetained(puVar5);
      puVar6 = puVar5;
      func_0x00010c27ece0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c02cf00(puVar3,param_3,param_4,puVar6);
      _objc_release(param_4);
      lVar11 = (long)_DAT_112718470;
      lVar10 = *(long *)(param_2 + lVar11);
      *(undefined **)(param_2 + lVar11) = puVar3;
      goto LAB_104f927bc;
    }
    _objc_retain(param_4);
    func_0x00010c14d9e0(puVar5);
    puVar5 = PTR_PTR_1126b2f90;
    _objc_alloc(PTR_PTR_1126b2f90);
    func_0x00010c00a000(0x3fe6666666666666,param_1 + 5.0 + 56.0 + 5.0);
    puVar4 = PTR_PTR_1126b2f98;
    _objc_alloc();
    lVar7 = param_2 + lVar10;
    _objc_loadWeakRetained(lVar7);
    lVar11 = lVar7;
    func_0x00010c27ece0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = param_2 + lVar10;
    _objc_loadWeakRetained(lVar10);
    lVar8 = lVar10;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c02cf40(puVar4,param_3,param_4,lVar11,lVar8,puVar5);
    _objc_release(param_4);
    _objc_release(lVar8);
    _objc_release(lVar10);
    _objc_release(lVar11);
    _objc_release(lVar7);
    lVar10 = param_2 + _DAT_1127184dc;
    _objc_loadWeakRetained(lVar10);
    lVar7 = lVar10;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar7;
    func_0x00010bf1f440();
    func_0x00010c201960(puVar4,param_3,lVar11);
    _objc_release(lVar7);
    _objc_release(lVar10);
    lVar11 = (long)_DAT_112718470;
    uVar9 = *(undefined8 *)(param_2 + lVar11);
    *(undefined **)(param_2 + lVar11) = puVar4;
    _objc_release(uVar9);
  }
  _objc_release(puVar5);
LAB_104f9291c:
  func_0x00010c10ae00(*(undefined8 *)(param_2 + lVar11));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104f92950; end: 104f92ad7; -[SCMusicPickerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f92950(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112718490,0);
  _objc_destroyWeak(param_1 + _DAT_1127184a8);
  _objc_storeStrong(param_1 + _DAT_1127184a4,0);
  _objc_destroyWeak(param_1 + _DAT_1127184dc);
  _objc_destroyWeak(param_1 + _DAT_1127184d8);
  _objc_destroyWeak(param_1 + _DAT_112718488);
  _objc_destroyWeak(param_1 + _DAT_1127184d4);
  _objc_destroyWeak(param_1 + _DAT_11271848c);
  _objc_destroyWeak(param_1 + _DAT_1127184d0);
  _objc_destroyWeak(param_1 + _DAT_1127184a0);
  _objc_destroyWeak(param_1 + _DAT_1127184cc);
  _objc_destroyWeak(param_1 + _DAT_1127184c8);
  _objc_destroyWeak(param_1 + _DAT_1127184c4);
  _objc_destroyWeak(param_1 + _DAT_112718480);
  _objc_destroyWeak(param_1 + _DAT_1127184bc);
  _objc_destroyWeak(param_1 + _DAT_1127184c0);
  _objc_destroyWeak(param_1 + _DAT_1127184b4);
  _objc_destroyWeak(param_1 + _DAT_1127184b0);
  _objc_destroyWeak(param_1 + _DAT_1127184b8);
  _objc_destroyWeak(param_1 + _DAT_1127184ac);
  _objc_destroyWeak(param_1 + _DAT_112718474);
  _objc_destroyWeak(param_1 + _DAT_11271846c);
  _objc_destroyWeak(param_1 + _DAT_112718494);
  _objc_destroyWeak(param_1 + _DAT_11271847c);
  _objc_destroyWeak(param_1 + _DAT_112718484);
  _objc_destroyWeak(param_1 + _DAT_11271849c);
  _objc_destroyWeak(param_1 + _DAT_112718498);
  _objc_destroyWeak(param_1 + _DAT_112718478);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112718470,0);
  return;
}



/* Entry: 104f92ad8; end: 104f92ba7; -[SCMusicPickerListEntryPoint begin] */

void FUN_104f92ad8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  uVar1 = param_1;
  func_0x00010bdf0420();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_28,param_1);
  _objc_copyWeak(auStack_30,auStack_28);
  _objc_retain(uVar1);
  func_0x00010c10a440(uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  _objc_release(uVar1);
  return;
}



/* Entry: 104f92ba8; end: 104f92bdb;  */

void FUN_104f92ba8(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdd0540();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f92bdc; end: 104f92c33; -[SCMusicPickerListEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f92bdc(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf83b00(*(undefined8 *)(param_1 + _DAT_1127184e0));
  puStack_28 = PTR_PTR_1126e5580;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104f92c34; end: 104f92db7; -[SCMusicPickerListEntryPoint _createMusicPickerListViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f92c34(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  
  lVar1 = param_1 + _DAT_1127184e4;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = lVar3;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126b2fa8;
    _objc_alloc(PTR_PTR_1126b2fa8);
    lVar2 = param_1 + _DAT_1127184e8;
    _objc_loadWeakRetained(lVar2);
    lVar5 = lVar2;
    func_0x00010c2781c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c02d060(puVar4,param_2,lVar5,0);
    _objc_release(lVar5);
    _objc_release(lVar2);
    puVar6 = PTR_PTR_1126b2fb0;
    _objc_alloc(PTR_PTR_1126b2fb0);
    lVar2 = param_1 + _DAT_1127184ec;
    _objc_loadWeakRetained(lVar2);
    lVar5 = lVar2;
    func_0x00010c15a2c0();
    _objc_retainAutoreleasedReturnValue();
    param_1 = param_1 + _DAT_1127184f0;
    _objc_loadWeakRetained(param_1);
    func_0x00010c043d00(puVar6,param_2,lVar5,lVar1,param_1,puVar4);
    _objc_release(param_1);
    _objc_release(lVar5);
    _objc_release(lVar2);
    _objc_release(puVar4);
  }
  _objc_release(lVar1);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 104f92db8; end: 104f92ed3; -[SCMusicPickerListEntryPoint _attachPickerViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f92db8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  puVar1 = PTR_PTR_1126b2f90;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c00a000(0xbff0000000000000,0);
  puVar2 = PTR_PTR_1126b2f98;
  _objc_alloc();
  lVar8 = (long)_DAT_1127184ec;
  lVar3 = param_1 + lVar8;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + lVar8;
  _objc_loadWeakRetained(lVar8);
  lVar5 = lVar8;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02cec0(puVar2,param_2,param_3,lVar4,lVar5,puVar1);
  _objc_release(param_3);
  lVar7 = (long)_DAT_1127184e0;
  uVar6 = *(undefined8 *)(param_1 + lVar7);
  *(undefined **)(param_1 + lVar7) = puVar2;
  _objc_release(uVar6);
  _objc_release(lVar5);
  _objc_release(lVar8);
  _objc_release(lVar4);
  _objc_release(lVar3);
  func_0x00010c10ae00(*(undefined8 *)(param_1 + lVar7));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104f92ed4; end: 104f92f4b; -[SCMusicPickerListEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f92ed4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127184e4);
  _objc_destroyWeak(param_1 + _DAT_1127184e8);
  _objc_destroyWeak(param_1 + _DAT_1127184f0);
  _objc_destroyWeak(param_1 + _DAT_1127184f8);
  _objc_destroyWeak(param_1 + _DAT_1127184f4);
  _objc_destroyWeak(param_1 + _DAT_1127184ec);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127184e0,0);
  return;
}



/* Entry: 104f92f4c; end: 104f92fcb; -[SCMusicIGetPickerListResponseImpl initWithSection:] */

undefined1 * FUN_104f92f4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e5588;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104f92fcc; end: 104f92fd7; -[SCMusicIGetPickerListResponseImpl pushToValdiMarshaller:] */

void FUN_104f92fcc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010af99cf8(param_3,param_1);
  func_0x00010af99cf0();
  func_0x00010af99ce8();
  func_0x00010af99c50();
  func_0x00010af99c60();
  return;
}



/* Entry: 104f92fd8; end: 104f92fdf; -[SCMusicIGetPickerListResponseImpl section] */

undefined8 FUN_104f92fd8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104f92fe0; end: 104f92fe7; -[SCMusicIGetPickerListResponseImpl setSection:] */

void FUN_104f92fe0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 104f92fe8; end: 104f92ff3; -[SCMusicIGetPickerListResponseImpl .cxx_destruct] */

void FUN_104f92fe8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104f92ff4; end: 104f93107; -[SCMusicPickerContainerFullScreen initWithMusicPickerViewController:uiContainer:delegate:] */

undefined1 *
FUN_104f92ff4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126e5590;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_5);
    func_0x00010c18b5e0(param_3);
    puVar2 = PTR__OBJC_CLASS___UINavigationController_1126af6f0;
    _objc_alloc();
    func_0x00010c0402e0();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    func_0x00010c1cb760(*(undefined8 *)((long)puVar1 + 8));
    uVar3 = param_3;
    func_0x00010c27acc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219b20(*(undefined8 *)((long)puVar1 + 8));
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104f93108; end: 104f9313f; -[SCMusicPickerContainerFullScreen present] */

void FUN_104f93108(long param_1)

{
  *(undefined1 *)(param_1 + 0x20) = 0;
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf0c980();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f93140; end: 104f9318f; -[SCMusicPickerContainerFullScreen dismissIfNeeded] */

void FUN_104f93140(long param_1,undefined8 param_2)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
    return;
  }
  func_0x00010be03c00(param_1,param_2,0);
  lVar1 = param_1 + 0x18;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c0d3140();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,0);
  return;
}



/* Entry: 104f93190; end: 104f93257; -[SCMusicPickerContainerFullScreen musicPickerViewController:didUpdateSelection:] */

void FUN_104f93190(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_4);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x104f93214;
  puStack_38 = &UNK_110841f80;
  uStack_30 = param_1;
  uStack_28 = param_4;
  _objc_retain(param_4);
  func_0x00010be03c00(param_1,param_2,&puStack_50);
  _objc_release(uStack_28);
  _objc_release(param_4);
  return;
}



/* Entry: 104f93258; end: 104f93297; -[SCMusicPickerContainerFullScreen musicPickerViewControllerDidDismiss:] */

void FUN_104f93258(long param_1,undefined8 param_2)

{
  *(undefined1 *)(param_1 + 0x20) = 1;
  func_0x00010be03c00(param_1,param_2,0);
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0d3140();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f93298; end: 104f93373; -[SCMusicPickerContainerFullScreen _dismissWithCompletion:] */

void FUN_104f93298(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010bf84b00(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 104f93374; end: 104f933c7;  */

void FUN_104f93374(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf6f440();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f933c8; end: 104f933fb; -[SCMusicPickerContainerFullScreen .cxx_destruct] */

void FUN_104f933c8(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104f933fc; end: 104f93653; -[SCMusicPickerContainerTray initWithMusicPickerViewController:uiContainer:delegate:heightConfig:] */

undefined8 *
FUN_104f933fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126e5598;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak(puVar1 + 2,param_5);
    _objc_retain(param_4);
    uVar2 = puVar1[1];
    puVar1[1] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[6];
    puVar1[6] = param_6;
    _objc_release(uVar2);
    func_0x00010c18b5e0(param_3);
    _objc_initWeak(auStack_68,puVar1);
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_104f93654;
    puStack_80 = &UNK_110841fb0;
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(param_3);
    ppuVar3 = &puStack_98;
    uStack_78 = param_3;
    _objc_retainBlock();
    uVar2 = puVar1[10];
    puVar1[10] = ppuVar3;
    _objc_release(uVar2);
    puVar4 = PTR__OBJC_CLASS___UINavigationController_1126af6f0;
    _objc_alloc(PTR__OBJC_CLASS___UINavigationController_1126af6f0);
    func_0x00010c0402e0();
    func_0x00010c1cb760();
    uVar2 = param_3;
    func_0x00010c27acc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219b20(puVar4);
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 7,puVar4);
    _objc_storeWeak(puVar1 + 8,puVar4);
    puVar5 = PTR_PTR_1126b0a08;
    _objc_alloc();
    func_0x00010c055640();
    uVar2 = puVar1[4];
    puVar1[4] = puVar5;
    _objc_release(uVar2);
    func_0x00010c219e20(puVar1[4]);
    func_0x00010c167420(puVar1[4]);
    func_0x00010c219c20(puVar1[4]);
    func_0x00010c1842e0(0x4038000000000000,puVar1[4]);
    *(undefined2 *)(puVar1 + 5) = 0;
    _objc_release(puVar4);
    _objc_release(uStack_78);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 104f93654; end: 104f9368f;  */

void FUN_104f93654(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c0d34a0(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104f93690; end: 104f937fb; -[SCMusicPickerContainerTray initWithMusicPickerListViewController:uiContainer:delegate:heightConfig:] */

undefined1 *
FUN_104f93690(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126e5598;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_5);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_6;
    _objc_release(uVar2);
    func_0x00010c18b5e0(param_3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x40),param_3);
    puVar3 = PTR_PTR_1126b0a08;
    _objc_alloc();
    func_0x00010c055640();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    func_0x00010c219e20(*(undefined8 *)((long)puVar1 + 0x20));
    func_0x00010c167420(*(undefined8 *)((long)puVar1 + 0x20));
    func_0x00010c219d60(*(undefined8 *)((long)puVar1 + 0x20));
    func_0x00010c219d40(*(undefined8 *)((long)puVar1 + 0x20));
    func_0x00010c219c20(*(undefined8 *)((long)puVar1 + 0x20));
    func_0x00010c1842e0(0x4038000000000000,*(undefined8 *)((long)puVar1 + 0x20));
    *(undefined1 *)((long)puVar1 + 0x29) = 0;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104f937fc; end: 104f9380f; -[SCMusicPickerContainerTray _doneButtonTapped] */

void FUN_104f937fc(long param_1)

{
  if (*(long *)(param_1 + 0x50) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000104f93808. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x50) + 0x10))();
    return;
  }
  return;
}


