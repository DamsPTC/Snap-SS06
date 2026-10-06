/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107fff9f0; end: 107fffadf; -[SCPreviewURLVideoProvider newVideoAsset] */

undefined8 FUN_107fff9f0(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  _dispatch_semaphore_wait(*(undefined8 *)(param_1 + 0x28),0xffffffffffffffff);
  uVar1 = *(ulong *)(param_1 + 0x30);
  if (uVar1 == 0) {
    puVar3 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
    _objc_alloc();
    lVar5 = param_1;
    func_0x00010bee8b60(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c057ae0();
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    *(undefined **)(param_1 + 0x30) = puVar3;
    _objc_release(uVar4);
  }
  else {
    if (*(long *)(param_1 + 0x18) == 0) goto LAB_107fffab8;
    func_0x00010bdc2b80();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c071ae0();
    _objc_release(uVar1);
    if ((uVar2 & 1) != 0) goto LAB_107fffab8;
    puVar3 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
    _objc_alloc();
    func_0x00010c057ae0();
    lVar5 = *(long *)(param_1 + 0x30);
    *(undefined **)(param_1 + 0x30) = puVar3;
  }
  _objc_release(lVar5);
LAB_107fffab8:
  _dispatch_semaphore_signal(*(undefined8 *)(param_1 + 0x28));
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar4);
  return uVar4;
}



/* Entry: 107fffae0; end: 107fffcab; -[SCPreviewURLVideoProvider newVideoAssetForQueue:resultHandler:] */

void FUN_107fffae0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c0d9500();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf51e00();
  if (lVar1 == 0) {
    lVar3 = param_1;
    func_0x00010be0b020();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar3 = 0;
  }
  func_0x00010be572e0(param_1);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  uStack_78 = 0x107fffc24;
  puStack_70 = &UNK_110852488;
  lStack_68 = lVar1;
  uStack_60 = uVar2;
  lStack_58 = lVar3;
  lStack_50 = param_1;
  uStack_48 = param_4;
  _objc_retain(lVar3);
  _objc_retain(uVar2);
  _objc_retain(lVar1);
  _objc_retain(param_4);
  func_0x00010007380c(param_3,&puStack_88);
  _objc_release(param_3);
  _objc_release(lStack_58);
  _objc_release(uStack_60);
  _objc_release(lStack_68);
  _objc_release(uStack_48);
  _objc_release(lVar3);
  _objc_release(uVar2);
  _objc_release(lVar1);
  _objc_release(param_4);
  return;
}



/* Entry: 107fffcac; end: 107fffd43; -[SCPreviewURLVideoProvider _logPreviewExportEventWithError:success:] */

void FUN_107fffcac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_3);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_107fffd44;
  puStack_50 = &UNK_11084d5f8;
  uStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_3);
  func_0x0001000d76cc("APPSTORE",&puStack_68);
  _objc_release(uStack_40);
  _objc_release(param_3);
  return;
}



/* Entry: 107fffd44; end: 107fffdf7;  */

void FUN_107fffd44(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = *(long *)(param_1 + 0x20) + 0x58;
  _objc_loadWeakRetained(lVar1);
  lVar2 = *(long *)(param_1 + 0x20) + 0x50;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0acba0(lVar1,param_2,lVar5,*(undefined8 *)(param_1 + 0x28),
                      *(undefined1 *)(param_1 + 0x30));
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107fffdf8; end: 107fffe4b; -[SCPreviewURLVideoProvider _errorInfoForAssetCreation] */

undefined ** FUN_107fffdf8(long param_1)

{
  long lVar1;
  undefined **ppuVar2;
  
  lVar1 = param_1;
  func_0x00010bee8b60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110ecef58;
  }
  else {
    ppuVar2 = &PTR____CFConstantStringClassReference_110ecef78;
    if (*(long *)(param_1 + 0x18) != 0) {
      ppuVar2 = (undefined **)0x0;
    }
  }
  return ppuVar2;
}



/* Entry: 107fffe4c; end: 107fffecf; -[SCPreviewURLVideoProvider videoDuration] */

double FUN_107fffe4c(long param_1)

{
  long lVar1;
  double dVar2;
  double dStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  double dStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  dVar2 = *(double *)(param_1 + 0x40);
  if (dVar2 == 0.0) {
    lVar1 = param_1;
    func_0x00010c0d9500();
    if (lVar1 == 0) {
      dVar2 = 0.0;
    }
    else {
      func_0x00010bf8b160(&dStack_48,lVar1);
      uStack_58 = uStack_40;
      dStack_60 = dStack_48;
      uStack_50 = uStack_38;
      _CMTimeGetSeconds(&dStack_60);
      *(double *)(param_1 + 0x40) = dStack_48;
      dVar2 = dStack_48;
    }
    _objc_release(lVar1);
  }
  return dVar2;
}



/* Entry: 107fffed0; end: 107ffff43; -[SCPreviewURLVideoProvider codecType] */

void FUN_107fffed0(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar1 = *(long *)(param_1 + 0x48);
  if (lVar1 == 0) {
    lVar1 = param_1;
    func_0x00010c0d9500(param_1);
    func_0x00010c299760();
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    *(undefined **)(param_1 + 0x48) = puVar2;
    _objc_release(uVar3);
    _objc_release(lVar1);
    lVar1 = *(long *)(param_1 + 0x48);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c067fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s_integerValue_1125f7a00);
  return;
}



/* Entry: 107ffff44; end: 107ffff4b; -[SCPreviewURLVideoProvider shouldIncludeURLInActiveVideoPaths] */

undefined8 FUN_107ffff44(void)

{
  return 1;
}



/* Entry: 107ffff4c; end: 107ffffe3; -[SCPreviewURLVideoProvider checkIsVideoReachable] */

ulong FUN_107ffff4c(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010c0d9500();
  puVar2 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
  _objc_opt_class(PTR__OBJC_CLASS___AVURLAsset_1126b0d68);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
  if (uVar1 == 0) {
    uVar3 = 0;
  }
  else {
    func_0x00010bdc2b80(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010bf384a0();
    _objc_release(param_1);
  }
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 107ffffe4; end: 107ffffeb; -[SCPreviewURLVideoProvider writableURLRequiresSynchronousExport] */

undefined8 FUN_107ffffe4(void)

{
  return 1;
}



/* Entry: 107ffffec; end: 107ffffef; -[SCPreviewURLVideoProvider writableURL] */

void FUN_107ffffec(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c29bb50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_videoURL_1126848f8);
  return;
}



/* Entry: 107fffff0; end: 107fffff3; -[SCPreviewURLVideoProvider cachedWritableURL] */

void FUN_107fffff0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c29bb50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_videoURL_1126848f8);
  return;
}



/* Entry: 107fffff4; end: 1080001e3; -[SCPreviewURLVideoProvider removeBackingTemporaryVideo] */

void FUN_107fffff4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _dispatch_semaphore_wait(uVar1,0xffffffffffffffff);
  puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
  if (*(long *)(param_1 + 0x18) == 0) {
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c29bb40(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar2;
    func_0x00010c0f58c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14cc80();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    *(undefined **)(param_1 + 0x18) = puVar3;
    _objc_release(uVar5);
    _objc_release(lVar6);
    _objc_release(lVar2);
    _objc_release(uVar1);
    puVar3 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c29bb40(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c099760();
    _objc_retain(0);
    _objc_release(lVar2);
    _objc_release(puVar3);
    if (((ulong)puVar4 & 1) == 0) {
      uVar1 = *(undefined8 *)(param_1 + 0x18);
      *(undefined8 *)(param_1 + 0x18) = 0;
      _objc_release(uVar1);
    }
    _objc_release(0);
  }
  puVar3 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)(param_1 + 0x18) == 0) {
    lVar2 = param_1;
    func_0x00010c29bb40();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = *(long *)(param_1 + 0x18);
    *(long *)(param_1 + 0x18) = lVar2;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = 0;
    _objc_release(uVar1);
    lVar6 = *(long *)(param_1 + 8);
    if (lVar6 == 0) {
      lVar6 = param_1;
      func_0x00010c29bb40(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12cc60(puVar3);
    }
    else {
      *(undefined8 *)(param_1 + 8) = 0;
    }
  }
  _objc_release(lVar6);
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x00010c12cc60(puVar3);
  }
  _dispatch_semaphore_signal(*(undefined8 *)(param_1 + 0x28));
  _objc_release(puVar3);
  return;
}



/* Entry: 1080001e4; end: 10800030f; -[SCPreviewURLVideoProvider exportVideoForURL:] */

void FUN_1080001e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _dispatch_semaphore_wait(*(undefined8 *)(param_1 + 0x28),0xffffffffffffffff);
  lVar1 = param_1;
  func_0x00010bee8b60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c071ae0();
  _objc_release(lVar1);
  if ((int)lVar2 == 0) {
    puVar3 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010bee8b60(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf52020(puVar3);
    uVar4 = 0;
    _objc_retain(0);
    _objc_release(lVar1);
    _dispatch_semaphore_signal(*(undefined8 *)(param_1 + 0x28));
    func_0x00010bf6e340(0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(0);
    func_0x00010be572e0(param_1);
    _objc_release(uVar4);
    _objc_release(puVar3);
  }
  else {
    _dispatch_semaphore_signal(*(undefined8 *)(param_1 + 0x28));
  }
  _objc_release(param_3);
  return;
}



/* Entry: 108000310; end: 1080003ab; -[SCPreviewURLVideoProvider exportVideoData] */

void FUN_108000310(long param_1)

{
  long lVar1;
  undefined *puVar2;
  
  _dispatch_semaphore_wait(*(undefined8 *)(param_1 + 0x28),0xffffffffffffffff);
  lVar1 = param_1;
  func_0x00010bee8b60(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf64ae0(PTR__OBJC_CLASS___NSData_1126ae778);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(0);
  _dispatch_semaphore_signal(*(undefined8 *)(param_1 + 0x28));
  _objc_release(0);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1080003ac; end: 10800043b; -[SCPreviewURLVideoProvider hasAudioTrack] */

bool FUN_1080003ac(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uStack_38;
  
  func_0x00010c0d9500();
  uStack_38 = 0;
  func_0x00010c266c80(PTR_PTR_1126b0010,param_2,&PTR__OBJC_CLASS___NSConstantArray_111182d80,param_1
                      ,&uStack_38);
  lVar1 = param_1;
  func_0x00010c279200(param_1,param_2,*(undefined8 *)PTR__AVMediaTypeAudio_110348070);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar2 != 0;
}



/* Entry: 10800043c; end: 108000567; -[SCPreviewURLVideoProvider initWithVideoURL:rawVideoDataFileURL:activeVideoPaths:previewLoggingCommon:previewBlizzardLogger:] */

undefined1 *
FUN_10800043c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126fc168;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    _objc_release(uVar2);
    uVar2 = 1;
    _dispatch_semaphore_create();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_5;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x50),param_6);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x58),param_7);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108000568; end: 108000693; -[SCPreviewURLVideoProvider initWithURL:rawVideoDataFileURL:activeVideoPaths:previewLoggingCommon:previewBlizzardLogger:] */

undefined1 *
FUN_108000568(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126fc168;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    _objc_release(uVar2);
    uVar2 = 1;
    _dispatch_semaphore_create();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_5;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x50),param_6);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x58),param_7);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108000694; end: 10800073f; -[SCPreviewURLVideoProvider dealloc] */

void FUN_108000694(long param_1)

{
  undefined *puVar1;
  long lStack_40;
  undefined *puStack_38;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12cc60();
    _objc_release(puVar1);
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12cc60();
    _objc_release(puVar1);
  }
  puStack_38 = PTR_PTR_1126fc168;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 108000740; end: 1080008d7; -[SCPreviewURLVideoProvider copyWithZone:] */

undefined * FUN_108000740(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _dispatch_semaphore_wait(uVar1,0xffffffffffffffff);
  puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c29bb40(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0f58c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14cc80(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(uVar1);
  puVar6 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bee8b60(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar6;
  func_0x00010c099760();
  _objc_retain(0);
  _objc_release(lVar2);
  _objc_release(puVar6);
  _dispatch_semaphore_signal(*(undefined8 *)(param_1 + 0x28));
  puVar6 = (undefined *)0x0;
  if ((int)puVar5 != 0) {
    puVar6 = PTR_PTR_1126d8d90;
    _objc_alloc(PTR_PTR_1126d8d90);
    lVar2 = param_1 + 0x50;
    _objc_loadWeakRetained(lVar2);
    param_1 = param_1 + 0x58;
    _objc_loadWeakRetained(param_1);
    func_0x00010c057ba0(puVar6);
    _objc_release(param_1);
    _objc_release(lVar2);
  }
  _objc_release(0);
  _objc_release(puVar4);
  return puVar6;
}



/* Entry: 1080008d8; end: 108000917; -[SCPreviewURLVideoProvider _videoDataURL] */

void FUN_1080008d8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 == 0) {
    func_0x00010c29bb40();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(lVar1);
    param_1 = lVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108000918; end: 10800092f; -[SCPreviewURLVideoProvider previewLoggingCommon] */

void FUN_108000918(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108000930; end: 10800093b; -[SCPreviewURLVideoProvider setPreviewLoggingCommon:] */

void FUN_108000930(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x50,param_3);
  return;
}



/* Entry: 10800093c; end: 108000953; -[SCPreviewURLVideoProvider previewBlizzardLogger] */

void FUN_10800093c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108000954; end: 10800095f; -[SCPreviewURLVideoProvider setPreviewBlizzardLogger:] */

void FUN_108000954(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x58,param_3);
  return;
}



/* Entry: 108000960; end: 108000a5b; -[SCPreviewURLVideoProvider .cxx_destruct] */

void FUN_108000960(long param_1)

{
  _objc_destroyWeak(param_1 + 0x58);
  _objc_destroyWeak(param_1 + 0x50);
  _objc_storeStrong(param_1 + 0x48,0);
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



/* Entry: 108000a5c; end: 108000a8b; -[SCPreviewVideoProviderFactory setLoggingCommon:] */

void FUN_108000a5c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 108000a8c; end: 108000abb; -[SCPreviewVideoProviderFactory setPreviewBlizzardLogger:] */

void FUN_108000a8c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 108000abc; end: 108000b77; -[SCPreviewVideoProviderFactory videoProviderWithURL:rawVideoDataFileURL:] */

void FUN_108000abc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126d8d90;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bef1320();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c057ba0(puVar1,param_2,param_3,param_4,uVar3,*(undefined8 *)(param_1 + 0x20),
                      *(undefined8 *)(param_1 + 0x28));
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108000b78; end: 108000c33; -[SCPreviewVideoProviderFactory videoProviderWithVideoURL:rawVideoDataFileURL:] */

void FUN_108000b78(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126d8d90;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bef1320();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c061360(puVar1,param_2,param_3,param_4,uVar3,*(undefined8 *)(param_1 + 0x20),
                      *(undefined8 *)(param_1 + 0x28));
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108000c34; end: 108000c93; -[SCPreviewVideoProviderFactory videoProviderWithAsset:] */

void FUN_108000c34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d8d88;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c060c40();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108000c94; end: 108000d0b; -[SCPreviewVideoProviderFactory bounceVideoProviderWithAsset:offset:repeating:] */

void FUN_108000c94(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_2;
  func_0x00010bdd5680(param_1,0x3ff0000000000000,0x3ff4cccccccccccd);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    param_2 = 0;
  }
  else {
    func_0x00010c29aec0(param_2,param_3,lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 108000d0c; end: 108000d13; -[SCPreviewVideoProviderFactory bounceVideoWithAsset:offset:bounceDuration:outputSpeedFactor:repeatCount:] */

void FUN_108000d0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__bounceAssetWithAsset_offset_bou_112552f40,param_3,param_4,1);
  return;
}



/* Entry: 108000d14; end: 1080012a7; -[SCPreviewVideoProviderFactory generateZoomInAssetWithAsset:zoomInFactor:timeRange:completionBlock:] */

void FUN_108000d14(double param_1,long param_2,undefined8 param_3,long param_4,double *param_5,
                  long param_6)

{
  long lVar1;
  long lVar2;
  double *pdVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dStack_200;
  double dStack_1f8;
  double dStack_1f0;
  double dStack_1e8;
  double dStack_1e0;
  double dStack_1d8;
  double dStack_1d0;
  double dStack_1c8;
  double dStack_1c0;
  double dStack_1b8;
  double dStack_1b0;
  double dStack_1a8;
  double dStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  double dStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  double dStack_140;
  double dStack_138;
  double dStack_130;
  double dStack_128;
  double dStack_120;
  double dStack_118;
  double dStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  double dStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_6);
  lVar1 = param_4;
  func_0x00010c279200();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010bf0af00();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    dStack_110 = 0.0;
    uStack_108 = 0;
    uStack_100 = 0;
  }
  else {
    func_0x00010bf8b160(&dStack_110,lVar1);
  }
  uVar9 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  dVar12 = *(double *)PTR__kCMTimeZero_110348670;
  uVar11 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  dStack_140 = dVar12;
  dStack_138 = (double)uVar9;
  dStack_130 = (double)uVar11;
  _CMTimeRangeMake(&dStack_d8,&dStack_140,&dStack_110);
  _objc_release(lVar1);
  uStack_f8 = uStack_c0;
  uStack_100 = uStack_c8;
  uStack_e8 = uStack_b0;
  uStack_f0 = uStack_b8;
  dStack_138 = param_5[1];
  dStack_140 = *param_5;
  dStack_128 = param_5[3];
  dStack_130 = param_5[2];
  dStack_118 = param_5[5];
  dVar14 = param_5[4];
  uStack_108 = uStack_d0;
  dStack_110 = dStack_d8;
  pdVar3 = &dStack_110;
  dVar13 = dStack_d8;
  dStack_120 = dVar14;
  _CMTimeRangeContainsTimeRange(pdVar3,&dStack_140);
  if ((int)pdVar3 == 0) {
    (**(code **)(param_6 + 0x10))(param_6,0,0);
  }
  else {
    func_0x00010c0d5d20(lVar2);
    if (lVar2 == 0) {
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_108 = 0;
      dStack_110 = 0.0;
    }
    else {
      func_0x00010c106f40(&dStack_110,lVar2);
    }
    _CGAffineTransformMakeScale(&dStack_140,param_1,param_1);
    _CGAffineTransformMakeTranslation
              (&dStack_170,-((param_1 + -1.0) * dVar13) * 0.5,-((param_1 + -1.0) * dVar14) * 0.5);
    uStack_198 = uStack_168;
    dStack_1a0 = dStack_170;
    uStack_188 = uStack_158;
    uStack_190 = uStack_160;
    uStack_178 = uStack_148;
    uStack_180 = uStack_150;
    dStack_1f8 = (double)uStack_108;
    dStack_200 = dStack_110;
    dStack_1e8 = (double)uStack_f8;
    dStack_1f0 = (double)uStack_100;
    dStack_1d8 = (double)uStack_e8;
    dStack_1e0 = (double)uStack_f0;
    _CGAffineTransformConcat(&dStack_1d0,&dStack_1a0,&dStack_200);
    dStack_1f8 = dStack_138;
    dStack_200 = dStack_140;
    dStack_1e8 = dStack_128;
    dStack_1f0 = dStack_130;
    dStack_1d8 = dStack_118;
    dStack_1e0 = dStack_120;
    _CGAffineTransformConcat(&dStack_1a0,&dStack_200,&dStack_1d0);
    puVar4 = PTR__OBJC_CLASS___AVMutableVideoCompositionLayerInstruction_1126d7d18;
    func_0x00010c2998a0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      dStack_1b8 = 0.0;
      dStack_1c0 = 0.0;
      dStack_1a8 = 0.0;
      dStack_1b0 = 0.0;
      dStack_1c8 = 0.0;
      dStack_1d0 = 0.0;
    }
    else {
      func_0x00010c106f40(&dStack_1d0,lVar2);
    }
    dStack_200 = dVar12;
    dStack_1f8 = (double)uVar9;
    dStack_1f0 = (double)uVar11;
    func_0x00010c219980(puVar4);
    dStack_1b8 = (double)uStack_f8;
    dStack_1c0 = (double)uStack_100;
    dStack_1a8 = (double)uStack_e8;
    dStack_1b0 = (double)uStack_f0;
    dStack_1f8 = (double)uStack_198;
    dStack_200 = dStack_1a0;
    dStack_1e8 = (double)uStack_188;
    dStack_1f0 = (double)uStack_190;
    dStack_1d8 = (double)uStack_178;
    dStack_1e0 = (double)uStack_180;
    dStack_1c8 = (double)uStack_108;
    dStack_1d0 = dStack_110;
    func_0x00010c2199a0(puVar4);
    puVar5 = PTR__OBJC_CLASS___AVMutableVideoCompositionInstruction_1126d7d10;
    func_0x00010c299860();
    _objc_retainAutoreleasedReturnValue();
    dStack_1c8 = (double)uStack_d0;
    dStack_1d0 = dStack_d8;
    dStack_1b8 = (double)uStack_c0;
    dStack_1c0 = (double)uStack_c8;
    dStack_1a8 = (double)uStack_b0;
    dStack_1b0 = (double)uStack_b8;
    func_0x00010c214ec0();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_a0 = puVar4;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b9960(puVar5);
    _objc_release(puVar6);
    puVar7 = PTR__OBJC_CLASS___AVMutableVideoComposition_1126d7d20;
    func_0x00010c299820();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_a8 = puVar5;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1adc60(puVar7);
    _objc_release(puVar6);
    _CMTimeMake(&dStack_1d0,1,0x1e);
    func_0x00010c19f2e0(puVar7);
    puVar6 = puVar7;
    func_0x00010c1ea8e0(dVar14,dVar13);
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar6;
    func_0x00010c25ce20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    uVar9 = *(undefined8 *)(param_2 + 0x18);
    func_0x00010c269d40(uVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar9;
    func_0x00010bfacf80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar9);
    puVar10 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bfad300();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___AVAssetExportSession_1126b0d60;
    lVar1 = param_4;
    func_0x00010bf51e00(param_4);
    func_0x00010bf9d200();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    func_0x00010c1d7200(puVar6);
    func_0x00010c2213a0(puVar6);
    func_0x00010c1d6fc0(puVar6);
    dStack_1c8 = param_5[1];
    dStack_1d0 = *param_5;
    dStack_1b8 = param_5[3];
    dStack_1c0 = param_5[2];
    dStack_1a8 = param_5[5];
    dStack_1b0 = param_5[4];
    func_0x00010c214ec0(puVar6);
    _objc_retain(param_6);
    _objc_retain(puVar6);
    _objc_retain(puVar10);
    func_0x00010bf9cee0(puVar6);
    _objc_release(puVar6);
    _objc_release(param_6);
    _objc_release(puVar10);
    _objc_release(puVar6);
    _objc_release(puVar10);
    _objc_release(uVar11);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  _objc_release(lVar2);
  _objc_release(param_6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return;
  }
  ___stack_chk_fail();
  puVar4 = PTR__OBJC_CLASS___AVAsset_1126aff38;
  func_0x00010bf0b9e0(PTR__OBJC_CLASS___AVAsset_1126aff38);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_4 + 0x28);
  lVar1 = *(long *)(param_4 + 0x30);
  func_0x00010bf987e0(uVar11);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,puVar4,uVar11);
  _objc_release(uVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 1080012a8; end: 10800131b;  */

void FUN_1080012a8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR__OBJC_CLASS___AVAsset_1126aff38;
  func_0x00010bf0b9e0(PTR__OBJC_CLASS___AVAsset_1126aff38,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010bf987e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,puVar2,uVar3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10800131c; end: 1080013ab; -[SCPreviewVideoProviderFactory _bounceAssetWithAsset:offset:bounceDuration:outputSpeedFactor:repeatCount:normalizeOutputDuration:] */

void FUN_10800131c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c4af8;
  func_0x00010bf8eb60(param_2,param_3,PTR_PTR_1126c4af8,param_5,param_6,param_8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173820(param_1);
  if (param_7 < 2) {
    func_0x00010bfbf120(puVar1);
  }
  else {
    func_0x00010bfbf140(puVar1,param_5,param_7);
  }
  puVar2 = puVar1;
  func_0x00010bf207c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1080013ac; end: 108001467; -[SCPreviewVideoProviderFactory videoProviderWithMediaMetadata:snapDoc:snapDocKey:] */

void FUN_1080013ac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d8da0;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0299a0(puVar1,param_2,param_3,param_4,param_5,uVar2,*(undefined8 *)(param_1 + 0x20),
                      *(undefined8 *)(param_1 + 0x28));
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108001468; end: 1080014c7; -[SCPreviewVideoProviderFactory .cxx_destruct] */

void FUN_108001468(long param_1)

{
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



/* Entry: 1080014c8; end: 108001533; -[SCPreviewVideoProviderServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080014c8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127731dc,0);
  _objc_destroyWeak(param_1 + _DAT_1127731d8);
  _objc_destroyWeak(param_1 + _DAT_1127731d0);
  _objc_destroyWeak(param_1 + _DAT_1127731d4);
  _objc_destroyWeak(param_1 + _DAT_1127731cc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127731e0);
  return;
}



/* Entry: 108001534; end: 108001587; +[SCBounceVideoStateImpl bounceVideoPerformer] */

void FUN_108001534(void)

{
  undefined8 uVar1;
  
  if (lRam0000000113728ae8 != -1) {
    func_0x00010002a2fc(0x113728ae8,&PTR___NSConcreteGlobalBlock_110a16db8);
  }
  uVar1 = uRam0000000113728af0;
  _objc_retain(uRam0000000113728af0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108001588; end: 1080015cb;  */

void FUN_108001588(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126ae790;
  _objc_alloc();
  func_0x00010c021520();
  uVar1 = puRam0000000113728af0;
  puRam0000000113728af0 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1080015cc; end: 1080015df; +[SCBounceVideoStateImpl emptyBounceVideoStateForVideoAsset:] */

void FUN_1080015cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf8eb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,0x3ff4cccccccccccd,param_1,
             PTR_s_emptyBounceVideoStateForVideoAss_1125c1480,param_3,0);
  return;
}



/* Entry: 1080015e0; end: 108001693; +[SCBounceVideoStateImpl emptyBounceVideoStateForVideoAsset:bounceVideoDuration:outputSpeedFactor:normalizeOutputDuration:] */

void FUN_1080015e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c4af8;
  _objc_retain(param_5);
  _objc_alloc(puVar1);
  func_0x00010c060b60(param_1);
  _objc_release(param_5);
  func_0x00010c1d71c0(param_2,puVar1);
  func_0x00010c1a8640(puVar1,param_4,0);
  func_0x00010c21d6c0(puVar1,param_4,0);
  func_0x00010c1ea4a0(puVar1,param_4,1);
  func_0x00010c1ea480(puVar1,param_4,0);
  func_0x00010c1cdbe0(puVar1,param_4,param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108001694; end: 10800175f; -[SCBounceVideoStateImpl initWithVideoAsset:bounceVideoDuration:] */

undefined1 * FUN_108001694(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  double dVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  dVar3 = param_1;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fc178;
  uStack_40 = param_2;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = param_4;
    _objc_release(uVar2);
    func_0x00010c299e00(PTR_PTR_1126b0010);
    *(double *)((long)puVar1 + 0x30) = dVar3;
    if (param_1 <= dVar3) {
      dVar3 = param_1;
    }
    *(double *)((long)puVar1 + 0x40) = dVar3;
    *(undefined4 *)((long)puVar1 + 8) = 0x3f800000;
    *(undefined4 *)((long)puVar1 + 0x20) = 0x7f800000;
    *(undefined8 *)((long)puVar1 + 0x58) = 0x3ff0000000000000;
    *(undefined1 *)((long)puVar1 + 0x27) = 0;
    *(undefined2 *)((long)puVar1 + 0x25) = 0x100;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 108001760; end: 1080017c7; -[SCBounceVideoStateImpl removeBounceVideoIfNeeded] */

void FUN_108001760(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x00010bf208e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010bf208e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _dispatch_block_cancel();
    _objc_release(lVar1);
    func_0x00010c173860(param_1,param_2,0);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1080017c8; end: 1080017e3; -[SCBounceVideoStateImpl setHighOutputFramerate:] */

void FUN_1080017c8(long param_1,undefined8 param_2,int param_3)

{
  undefined4 uVar1;
  
  *(char *)(param_1 + 0x24) = (char)param_3;
  uVar1 = 0x40000000;
  if (param_3 == 0) {
    uVar1 = 0x3f800000;
  }
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



/* Entry: 1080017e4; end: 1080019ff; -[SCBounceVideoStateImpl generateBounceVideoWithCompletion:] */

void FUN_1080017e4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  double dVar5;
  
  _objc_retain(param_3);
  fVar4 = *(float *)(param_1 + 0x20);
  dVar5 = (double)(ulong)(uint)fVar4;
  func_0x00010bf208a0(param_1);
  if (dVar5 == (double)fVar4) {
    lVar1 = param_1;
    func_0x00010bf208e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      if (*(long *)(param_1 + 0x48) == 0) goto LAB_10800186c;
    }
    else {
      _objc_release();
    }
    if (param_3 != 0) {
      (**(code **)(param_3 + 0x10))(param_3,*(long *)(param_1 + 0x48) != 0);
    }
  }
  else {
LAB_10800186c:
    func_0x00010bf208a0(param_1);
    *(float *)(param_1 + 0x20) = (float)dVar5;
    lVar1 = param_1;
    func_0x00010bf208e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      lVar1 = param_1;
      func_0x00010bf208e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      _dispatch_block_cancel();
      _objc_release(lVar1);
    }
    uVar3 = *(undefined8 *)(param_1 + 0x50);
    _objc_retain(uVar3);
    _objc_initWeak(auStack_58,param_1);
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_108001a00;
    puStack_80 = &UNK_110857fd0;
    lStack_78 = param_1;
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(uVar3);
    uStack_70 = uVar3;
    _objc_retain(param_3);
    uVar2 = 0;
    lStack_68 = param_3;
    func_0x0001008553e8(0,&puStack_98);
    func_0x00010c173860(param_1);
    _objc_release(uVar2);
    lVar1 = param_1;
    _objc_opt_class(param_1);
    func_0x00010bf20980();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf208e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f7fc0(lVar1);
    _objc_release(param_1);
    _objc_release(lVar1);
    _objc_release(lStack_68);
    _objc_release(uStack_70);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 108001a00; end: 108001b67;  */

void FUN_108001a00(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar1 = param_1 + 0x38;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010bdd56c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf208a0(lVar1);
    lVar3 = lVar1;
    func_0x00010bdd5660();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    uStack_58 = 0x108001afc;
    puStack_50 = &UNK_11084a9e8;
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    lStack_48 = lVar3;
    lStack_40 = lVar1;
    _objc_retain(uVar4);
    uStack_38 = uVar4;
    _objc_retain(lVar3);
    func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_68);
    _objc_release(uStack_38);
    _objc_release(lStack_48);
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  return;
}



/* Entry: 108001b68; end: 108001bd7; -[SCBounceVideoStateImpl generateBounceVideoSynchronously] */

void FUN_108001b68(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  lVar1 = param_1;
  func_0x00010bdd56c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf208a0(param_1);
  lVar2 = param_1;
  func_0x00010bdd5660(param_1,param_2,uVar3,lVar1,1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  *(long *)(param_1 + 0x48) = lVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108001bd8; end: 108001c4b; -[SCBounceVideoStateImpl generateBounceVideoSynchronouslyWithRepeatCount:] */

void FUN_108001bd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  lVar1 = param_1;
  func_0x00010bdd56c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf208a0(param_1);
  lVar2 = param_1;
  func_0x00010bdd5660(param_1,param_2,uVar3,lVar1,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  *(long *)(param_1 + 0x48) = lVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108001c4c; end: 108001e57; -[SCBounceVideoStateImpl timestampOfOriginalVideoForBounceVideoTimestamp:] */

void FUN_108001c4c(undefined8 *param_1,long param_2,undefined8 param_3,double *param_4)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  double dVar4;
  undefined8 uVar5;
  float fVar6;
  double dStack_d0;
  double dStack_c8;
  double dStack_c0;
  double dStack_b0;
  double dStack_a8;
  double dStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  double dStack_60;
  double dStack_58;
  double dStack_50;
  
  lVar2 = *(long *)(param_2 + 0x10);
  if ((lVar2 == 0) || (func_0x00010bf529e0(), lVar2 == 0)) {
    puVar1 = PTR__kCMTimeInvalid_110348648;
    uVar5 = *(undefined8 *)PTR__kCMTimeInvalid_110348648;
    param_1[1] = *(undefined8 *)(PTR__kCMTimeInvalid_110348648 + 8);
    *param_1 = uVar5;
    param_1[2] = *(undefined8 *)(puVar1 + 0x10);
  }
  else {
    dStack_58 = param_4[1];
    dVar4 = *param_4;
    dStack_50 = param_4[2];
    dStack_60 = dVar4;
    _CMTimeGetSeconds(&dStack_60);
    if ((float)dVar4 <= 0.0) {
      lVar2 = *(long *)(param_2 + 0x10);
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      fVar6 = *(float *)(param_2 + 0x18) * (float)dVar4;
      iVar3 = (int)fVar6;
      lVar2 = *(long *)(param_2 + 0x10);
      func_0x00010bf529e0();
      if ((ulong)(long)iVar3 < lVar2 - 1U) {
        fVar6 = fVar6 - (float)iVar3;
        if (fVar6 != 0.0) {
          lVar2 = *(long *)(param_2 + 0x10);
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          if (lVar2 == 0) {
            dStack_60 = 0.0;
            dStack_58 = 0.0;
            dStack_50 = 0.0;
          }
          else {
            func_0x00010bdc1140(&dStack_60,lVar2);
          }
          _objc_release(lVar2);
          lVar2 = *(long *)(param_2 + 0x10);
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          if (lVar2 == 0) {
            uStack_78 = 0;
            uStack_70 = 0;
            uStack_68 = 0;
          }
          else {
            func_0x00010bdc1140(&uStack_78,lVar2);
          }
          _objc_release(lVar2);
          uStack_88 = uStack_70;
          uStack_90 = uStack_78;
          uStack_80 = uStack_68;
          dStack_c8 = dStack_58;
          dStack_d0 = dStack_60;
          dStack_c0 = dStack_50;
          _CMTimeSubtract(&dStack_b0,&uStack_90,&dStack_d0);
          _CMTimeMultiplyByFloat64(&uStack_90,(double)fVar6,&dStack_b0);
          dStack_a8 = dStack_58;
          dStack_b0 = dStack_60;
          dStack_a0 = dStack_50;
          _CMTimeAdd(param_1,&dStack_b0,&uStack_90);
          return;
        }
        lVar2 = *(long *)(param_2 + 0x10);
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        lVar2 = *(long *)(param_2 + 0x10);
        func_0x00010c089820();
        _objc_retainAutoreleasedReturnValue();
      }
    }
    if (lVar2 == 0) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    else {
      func_0x00010bdc1140(param_1,lVar2);
    }
    _objc_release(lVar2);
  }
  return;
}



/* Entry: 108001e58; end: 10800201b; -[SCBounceVideoStateImpl _bezierYValuesWithPointA:pointB:xCount:] */

void FUN_108001e58(double param_1,double param_2,double param_3,double param_4,undefined8 param_5,
                  undefined8 param_6,uint param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  if (0 < (int)param_7) {
    uVar4 = 0;
    do {
      fVar6 = 0.0;
      fVar7 = 1.0;
      fVar5 = 0.5;
      iVar3 = 0x13;
      do {
        fVar9 = fVar5 * fVar5 * 3.0;
        fVar8 = fVar5 * -6.0 * fVar5 + fVar5 * 3.0 + fVar5 * fVar9;
        fVar9 = -(fVar5 * fVar9) + fVar5 * fVar5 * 3.0;
        fVar10 = fVar5 * fVar5;
        fVar11 = fVar9 * (float)param_3 + (float)param_1 * fVar8 + fVar5 * fVar10;
        if (ABS(fVar11 - (float)uVar4 / (float)param_7) <= 0.001) goto LAB_108001fac;
        if (fVar11 <= (float)uVar4 / (float)param_7) {
          fVar8 = fVar7 + (fVar7 - fVar5) * -0.5;
          fVar6 = fVar5;
        }
        else {
          fVar7 = fVar5;
          fVar8 = (fVar5 - fVar6) * 0.5 + fVar6;
        }
        fVar5 = fVar8;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      fVar7 = fVar5 * 3.0 * fVar5;
      fVar8 = fVar5 * -6.0 * fVar5 + fVar5 * 3.0 + fVar5 * fVar7;
      fVar9 = -(fVar5 * fVar7) + fVar5 * fVar5 * 3.0;
      fVar10 = fVar5 * fVar5;
LAB_108001fac:
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df740(fVar9 * (float)param_4 + (float)param_2 * fVar8 + fVar5 * fVar10,
                          PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar1,param_6,puVar2);
      _objc_release(puVar2);
      uVar4 = uVar4 + 1;
    } while (uVar4 != param_7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10800201c; end: 108002237; -[SCBounceVideoStateImpl _bounceKeyFrames] */

void FUN_10800201c(double param_1,long param_2,undefined8 param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  uint uVar7;
  ulong uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  double dVar14;
  undefined8 uVar15;
  double dVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  double dVar20;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_2 + 0x50);
  func_0x00010c279200(uVar3,param_3,*(undefined8 *)PTR__AVMediaTypeVideo_110348090);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0da9e0();
  dVar14 = param_1;
  _objc_release(uVar15);
  _objc_release(uVar3);
  if (*(long *)(param_2 + 0x50) == 0) {
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
  }
  else {
    func_0x00010bf8b160(&uStack_88);
  }
  _CMTimeGetSeconds(&uStack_88);
  dVar20 = *(double *)(param_2 + 0x40);
  uVar7 = (uint)((dVar20 * (double)(SUB84(param_1,0) * *(float *)(param_2 + 8))) /
                *(double *)(param_2 + 0x58));
  if (*(char *)(param_2 + 0x28) == '\x01') {
    uVar15 = *(undefined8 *)(param_2 + 0x68);
    uVar3 = *(undefined8 *)(param_2 + 0x70);
    uVar18 = *(undefined8 *)(param_2 + 0x78);
    uVar19 = *(undefined8 *)(param_2 + 0x80);
  }
  else {
    uVar3 = 0;
    uVar19 = 0x3ff0000000000000;
    uVar18 = 0x3fe51eb851eb851f;
    uVar15 = 0x3fd51eb851eb851f;
  }
  lVar4 = param_2;
  func_0x00010bdd4180(uVar15,uVar3,uVar18,uVar19,param_2,param_3,(ulong)uVar7);
  _objc_retainAutoreleasedReturnValue();
  if (0 < (int)uVar7) {
    uVar8 = 0;
    iVar10 = 0;
    dVar16 = dVar20 * (double)SUB84(param_1,0);
    uVar17 = (ulong)(uint)(float)dVar16;
    iVar12 = -0x80000000;
    do {
      fVar13 = (float)uVar17;
      lVar5 = lVar4;
      func_0x00010c0dfd40(lVar4,param_3,uVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb2c80();
      fVar13 = fVar13 * (float)(int)((int)dVar16 - (uint)(dVar14 <= dVar20));
      uVar17 = (ulong)(uint)fVar13;
      iVar9 = (int)fVar13;
      _objc_release(lVar5);
      if (iVar12 == iVar9) {
        iVar11 = iVar10;
        if ((*(char *)(param_2 + 0x26) != '\x01') ||
           ((*(char *)(param_2 + 0x24) == '\x01' &&
            (iVar11 = iVar10 + 1, bVar1 = iVar10 < 1, iVar10 = iVar11, bVar1)))) goto LAB_1080021cc;
      }
      else {
        iVar11 = 0;
LAB_1080021cc:
        puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,iVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2,param_3,puVar6);
        _objc_release(puVar6);
        iVar10 = iVar11;
        iVar12 = iVar9;
      }
      uVar8 = uVar8 + 1;
    } while (uVar7 != uVar8);
  }
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108002238; end: 108002bf7; -[SCBounceVideoStateImpl _bounceAssetWithAsset:keyFrames:timeOffset:loopCount:] */

undefined *
FUN_108002238(double param_1,long param_2,undefined **param_3,long param_4,undefined *param_5,
             long param_6)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  long lVar16;
  long lVar17;
  float fVar18;
  double dVar19;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  long lStack_330;
  undefined *puStack_328;
  long lStack_320;
  undefined *puStack_318;
  undefined1 *puStack_310;
  code *pcStack_308;
  undefined *puStack_300;
  long lStack_2f8;
  undefined *puStack_2f0;
  long lStack_2e8;
  undefined **ppuStack_2e0;
  long lStack_2d8;
  undefined *puStack_2d0;
  long lStack_2c8;
  undefined *puStack_2c0;
  undefined8 uStack_2b8;
  long lStack_2a8;
  undefined *puStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined *puStack_280;
  ulong uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  double dStack_260;
  undefined8 uStack_258;
  long lStack_248;
  undefined *puStack_240;
  ulong uStack_238;
  undefined8 uStack_230;
  undefined *puStack_220;
  undefined8 uStack_218;
  long *plStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined *puStack_1e0;
  ulong uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  double dStack_1c0;
  undefined8 uStack_1b8;
  undefined *puStack_1b0;
  ulong uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  double dStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  ulong uStack_178;
  undefined8 uStack_170;
  undefined *puStack_160;
  ulong uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  double dStack_140;
  undefined8 uStack_138;
  long lStack_130;
  long lStack_a8;
  
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar19 = param_1;
  _objc_retain(param_4);
  fVar18 = SUB84(dVar19,0);
  puStack_2d0 = param_5;
  _objc_retain(param_5);
  lStack_130 = 0;
  ppuVar5 = &PTR__OBJC_CLASS___NSConstantArray_111182d98;
  func_0x00010c266c80(PTR_PTR_1126b0010);
  lVar16 = lStack_130;
  _objc_retain(lStack_130);
  if (lVar16 == 0) {
    ppuVar15 = *(undefined ***)PTR__AVMediaTypeVideo_110348090;
    lVar16 = param_4;
    ppuVar5 = ppuVar15;
    func_0x00010c279200();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar16;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar16);
    if (lVar11 != 0) {
      lVar16 = param_4;
      func_0x00010c279200(param_4);
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar16;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0da9e0();
      _objc_release(lVar11);
      _objc_release(lVar16);
      ppuVar5 = ppuVar15;
      if (15.0 <= fVar18) {
        puVar4 = PTR__OBJC_CLASS___AVMutableComposition_1126beaa8;
        func_0x00010bf45600();
        _objc_retainAutoreleasedReturnValue();
        lVar16 = param_4;
        func_0x00010c279200();
        _objc_retainAutoreleasedReturnValue();
        lVar11 = lVar16;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar16);
        func_0x00010c0d5d20(lVar11);
        puStack_2f0 = puVar4;
        func_0x00010c1cb5e0(puVar4);
        puVar4 = PTR__OBJC_CLASS___AVAssetReader_1126bf598;
        func_0x00010bf0b620();
        _objc_retainAutoreleasedReturnValue();
        ppuVar5 = (undefined **)PTR__OBJC_CLASS___AVAssetReaderTrackOutput_1126bf5a0;
        lStack_2c8 = lVar11;
        func_0x00010bf0b5e0();
        _objc_retainAutoreleasedReturnValue();
        ppuStack_2e0 = ppuVar5;
        func_0x00010c167a60();
        if (param_4 == 0) {
          uVar6 = 0;
          puStack_280 = (undefined *)0x0;
          uStack_278 = 0;
          uStack_270 = 0;
        }
        else {
          func_0x00010bf8b160(&puStack_280,param_4);
          uVar6 = uStack_278 & 0xffffffff;
        }
        _CMTimeMakeWithSeconds(&puStack_1b0,param_1,uVar6);
        uStack_178 = *(ulong *)(PTR__kCMTimePositiveInfinity_110348658 + 8);
        puStack_180 = *(undefined **)PTR__kCMTimePositiveInfinity_110348658;
        uStack_170 = *(undefined8 *)(PTR__kCMTimePositiveInfinity_110348658 + 0x10);
        param_3 = &puStack_180;
        _CMTimeRangeMake(&puStack_160,&puStack_1b0);
        uStack_1a8 = uStack_158;
        puStack_1b0 = puStack_160;
        uStack_198 = uStack_148;
        uStack_1a0 = uStack_150;
        uStack_188 = uStack_138;
        dStack_190 = dStack_140;
        func_0x00010c214ec0(puVar4);
        ppuVar5 = ppuStack_2e0;
        func_0x00010befa4c0(puVar4);
        func_0x00010c250140(puVar4);
        puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf09f00();
        _objc_retainAutoreleasedReturnValue();
        lStack_2e8 = param_6;
        if (param_4 == 0) {
          puStack_1b0 = (undefined *)0x0;
          uStack_1a8 = 0;
          uStack_1a0 = 0;
          dVar19 = dStack_140;
        }
        else {
          func_0x00010bf8b160(&puStack_1b0,param_4);
          dVar19 = dStack_140;
        }
        _CMTimeGetSeconds(&puStack_1b0);
        ppuVar15 = ppuStack_2e0;
        func_0x00010bf52120();
        if (ppuVar15 != (undefined **)0x0) {
          do {
            _CMSampleBufferGetOutputPresentationTimeStamp(&puStack_1b0,ppuVar15);
            _CMSampleBufferGetOutputDuration(&puStack_280,ppuVar15);
            uStack_178 = uStack_1a8;
            puStack_180 = puStack_1b0;
            uStack_170 = uStack_1a0;
            puVar14 = puStack_1b0;
            _CMTimeGetSeconds(&puStack_180);
            uStack_178 = uStack_278;
            puStack_180 = puStack_280;
            uStack_170 = uStack_270;
            puVar8 = puStack_280;
            _CMTimeGetSeconds(&puStack_180);
            _CFRelease(ppuVar15);
            if ((uStack_1a8 & 0x100000000) != 0) {
              bVar1 = true;
              bVar3 = false;
              if (0.001 <= (double)puVar8) {
                bVar1 = false;
                bVar3 = true;
                if (!NAN((double)puVar14) && !NAN(param_1)) {
                  bVar1 = (double)puVar14 < param_1;
                  bVar3 = false;
                }
              }
              bVar2 = false;
              if ((bVar1 == bVar3) &&
                 (bVar2 = false, !NAN((double)puVar14 + (double)puVar8) && !NAN(dVar19 + 0.001))) {
                bVar2 = (double)puVar14 + (double)puVar8 < dVar19 + 0.001;
              }
              if (bVar2) {
                uStack_178 = uStack_1a8;
                puStack_180 = puStack_1b0;
                uStack_170 = uStack_1a0;
                ppuVar15 = (undefined **)PTR__OBJC_CLASS___NSValue_1126afdf8;
                func_0x00010c297200();
                _objc_retainAutoreleasedReturnValue();
                ppuVar5 = ppuVar15;
                func_0x00010befa120(puVar7);
                _objc_release(ppuVar15);
              }
            }
            puVar14 = puVar7;
            func_0x00010bf529e0();
            puVar8 = puStack_2d0;
            func_0x00010c089820();
            _objc_retainAutoreleasedReturnValue();
            puVar9 = puVar8;
            func_0x00010c067fc0();
            _objc_release(puVar8);
            if (puVar14 == puVar9 + 10) {
              func_0x00010bf2eca0(puVar4);
              param_6 = lStack_2e8;
              goto LAB_108002690;
            }
            ppuVar15 = ppuStack_2e0;
            func_0x00010bf52120();
          } while (ppuVar15 != (undefined **)0x0);
        }
        puVar14 = puVar4;
        func_0x00010c252d60();
        param_6 = lStack_2e8;
        if (puVar14 == (undefined *)0x3) {
LAB_1080026e4:
          lVar16 = 0;
          puVar14 = (undefined *)0x0;
          param_5 = puStack_2f0;
        }
        else {
          func_0x00010bf987e0(puVar4);
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
LAB_108002690:
          puVar14 = puVar7;
          func_0x00010bf529e0();
          if (puVar14 == (undefined *)0x0) goto LAB_1080026e4;
          lStack_2f8 = param_4;
          func_0x00010c246ba0(puVar7);
          puVar8 = puStack_2f0;
          func_0x00010bef9f20(puStack_2f0);
          _objc_retainAutoreleasedReturnValue();
          lVar16 = lStack_2c8;
          if (lStack_2c8 == 0) {
            uStack_1c8 = 0;
            uStack_1d0 = 0;
            uStack_1b8 = 0;
            dStack_1c0 = 0.0;
            uStack_1d8 = 0;
            puStack_1e0 = (undefined *)0x0;
          }
          else {
            func_0x00010c106f40(&puStack_1e0,lStack_2c8);
          }
          uStack_1a8 = uStack_1d8;
          puStack_1b0 = puStack_1e0;
          uStack_198 = uStack_1c8;
          uStack_1a0 = uStack_1d0;
          uStack_188 = uStack_1b8;
          dStack_190 = dStack_1c0;
          ppuVar5 = &puStack_1b0;
          dVar19 = dStack_1c0;
          puStack_300 = puVar4;
          func_0x00010c1e0300(puVar8);
          fVar18 = SUB84(dVar19,0);
          func_0x00010c0da9e0(lVar16);
          *(float *)(param_2 + 0x18) = fVar18 * *(float *)(param_2 + 8);
          if (param_6 < 1) {
            lVar16 = 0;
          }
          else {
            lVar16 = 0;
            lVar11 = 0;
            do {
              puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
              lStack_2d8 = lVar11;
              func_0x00010bf09f00();
              _objc_retainAutoreleasedReturnValue();
              uVar12 = *(undefined8 *)(param_2 + 0x10);
              *(undefined **)(param_2 + 0x10) = puVar4;
              _objc_release(uVar12);
              puVar4 = puStack_2d0;
              uStack_1f8 = 0;
              uStack_200 = 0;
              uStack_1e8 = 0;
              uStack_1f0 = 0;
              uStack_218 = 0;
              puStack_220 = (undefined *)0x0;
              uStack_208 = 0;
              plStack_210 = (long *)0x0;
              _objc_retain(puStack_2d0);
              ppuVar5 = &puStack_220;
              func_0x00010bf52a60();
              if (puVar4 != (undefined *)0x0) {
                lVar11 = *plStack_210;
                do {
                  puVar14 = (undefined *)0x0;
                  lVar13 = lVar16;
                  do {
                    if (*plStack_210 != lVar11) {
                      _objc_enumerationMutation(puStack_2d0);
                    }
                    func_0x00010bf529e0();
                    func_0x00010c067fc0();
                    puVar9 = puVar7;
                    func_0x00010c0dfd40();
                    _objc_retainAutoreleasedReturnValue();
                    if (puVar9 == (undefined *)0x0) {
                      puStack_180 = (undefined *)0x0;
                      uStack_178 = 0;
                      uStack_170 = 0;
                    }
                    else {
                      func_0x00010bdc1140(&puStack_180,puVar9);
                    }
                    _objc_release(puVar9);
                    _CMTimeMake(&puStack_280,1,1000);
                    uStack_238 = uStack_178;
                    puStack_240 = puStack_180;
                    uStack_230 = uStack_170;
                    _CMTimeRangeMake(&puStack_1b0,&puStack_240,&puStack_280);
                    uStack_278 = uStack_1a8;
                    puStack_280 = puStack_1b0;
                    uStack_268 = uStack_198;
                    uStack_270 = uStack_1a0;
                    uStack_258 = uStack_188;
                    dStack_260 = dStack_190;
                    uStack_2b8 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
                    puStack_2c0 = *(undefined **)PTR__kCMTimeZero_110348670;
                    uVar12 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
                    lStack_248 = lVar13;
                    puStack_240 = puStack_2c0;
                    uStack_238 = uStack_2b8;
                    uStack_230 = uVar12;
                    func_0x00010c067160(puVar8);
                    lVar16 = lStack_248;
                    _objc_retain(lStack_248);
                    _objc_release(lVar13);
                    _CMTimeMake(&puStack_240,1,1000);
                    uStack_298 = uStack_2b8;
                    puStack_2a0 = puStack_2c0;
                    uStack_290 = uVar12;
                    _CMTimeRangeMake(&puStack_280,&puStack_2a0,&puStack_240);
                    param_3 = (undefined **)(ulong)(uint)(int)*(float *)(param_2 + 0x18);
                    _CMTimeMake(&puStack_240,1);
                    func_0x00010c14e420(puVar8);
                    uVar12 = *(undefined8 *)(param_2 + 0x10);
                    uStack_278 = uStack_178;
                    puStack_280 = puStack_180;
                    uStack_270 = uStack_170;
                    puVar9 = PTR__OBJC_CLASS___NSValue_1126afdf8;
                    func_0x00010c297200(PTR__OBJC_CLASS___NSValue_1126afdf8);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010befa120(uVar12);
                    _objc_release(puVar9);
                    puVar14 = puVar14 + 1;
                    lVar13 = lVar16;
                  } while (puVar4 != puVar14);
                  ppuVar5 = &puStack_220;
                  puVar4 = puStack_2d0;
                  func_0x00010bf52a60();
                } while (puVar4 != (undefined *)0x0);
              }
              _objc_release(puStack_2d0);
              lVar11 = *(long *)(param_2 + 0x10);
              func_0x00010bf529e0();
              if (0 < lVar11) {
                lVar13 = 0;
                lVar17 = lVar16;
                do {
                  lVar11 = lVar11 + -1;
                  if ((*(char *)(param_2 + 0x27) != '\x01') ||
                     ((lVar16 = lVar17, lVar11 != 0 && (lVar13 != 0)))) {
                    ppuVar15 = *(undefined ***)(param_2 + 0x10);
                    func_0x00010c0dfd40();
                    _objc_retainAutoreleasedReturnValue();
                    if (ppuVar15 == (undefined **)0x0) {
                      puStack_180 = (undefined *)0x0;
                      uStack_178 = 0;
                      uStack_170 = 0;
                    }
                    else {
                      func_0x00010bdc1140(&puStack_180,ppuVar15);
                    }
                    _CMTimeMake(&puStack_280,1,1000);
                    uStack_238 = uStack_178;
                    puStack_240 = puStack_180;
                    uStack_230 = uStack_170;
                    _CMTimeRangeMake(&puStack_1b0,&puStack_240,&puStack_280);
                    uStack_278 = uStack_1a8;
                    puStack_280 = puStack_1b0;
                    uStack_268 = uStack_198;
                    uStack_270 = uStack_1a0;
                    uStack_258 = uStack_188;
                    dStack_260 = dStack_190;
                    uStack_2b8 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
                    puStack_2c0 = *(undefined **)PTR__kCMTimeZero_110348670;
                    uVar12 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
                    lStack_2a8 = lVar17;
                    puStack_240 = puStack_2c0;
                    uStack_238 = uStack_2b8;
                    uStack_230 = uVar12;
                    func_0x00010c067160(puVar8);
                    lVar16 = lStack_2a8;
                    _objc_retain(lStack_2a8);
                    _objc_release(lVar17);
                    _CMTimeMake(&puStack_240,1,1000);
                    uStack_298 = uStack_2b8;
                    puStack_2a0 = puStack_2c0;
                    uStack_290 = uVar12;
                    _CMTimeRangeMake(&puStack_280,&puStack_2a0,&puStack_240);
                    param_3 = (undefined **)(ulong)(uint)(int)*(float *)(param_2 + 0x18);
                    _CMTimeMake(&puStack_240,1);
                    func_0x00010c14e420(puVar8);
                    ppuVar5 = ppuVar15;
                    func_0x00010befa120(*(undefined8 *)(param_2 + 0x10));
                    _objc_release(ppuVar15);
                  }
                  lVar13 = lVar13 + 1;
                  lVar17 = lVar16;
                } while (0 < lVar11);
              }
              lVar11 = lStack_2d8 + 1;
              param_6 = lStack_2e8;
            } while (lVar11 != lStack_2e8);
          }
          uVar6 = *(ulong *)(param_2 + 0x10);
          func_0x00010bf529e0();
          *(float *)(param_2 + 0x1c) = (1.0 / *(float *)(param_2 + 0x18)) * (float)uVar6;
          if ((*(byte *)(param_2 + 0x25) & 1) != 0) {
            dVar19 = (*(double *)(param_2 + 0x40) / *(double *)(param_2 + 0x58)) * (double)param_6;
            _CMTimeMakeWithSeconds(&puStack_280,dVar19 + dVar19,(int)*(float *)(param_2 + 0x18));
            lVar11 = *(long *)(param_2 + 0x10);
            func_0x00010bf529e0(lVar11);
            _CMTimeMake(&puStack_180,lVar11 * param_6,(int)*(float *)(param_2 + 0x18));
            uStack_238 = *(ulong *)(PTR__kCMTimeZero_110348670 + 8);
            puStack_240 = *(undefined **)PTR__kCMTimeZero_110348670;
            uStack_230 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
            param_3 = &puStack_180;
            _CMTimeRangeMake(&puStack_1b0,&puStack_240);
            uStack_178 = uStack_278;
            puStack_180 = puStack_280;
            uStack_170 = uStack_270;
            ppuVar5 = &puStack_1b0;
            func_0x00010c14e420(puVar8);
          }
          param_5 = puStack_2f0;
          puVar14 = puStack_2f0;
          func_0x00010bf51e00();
          _objc_release(puVar8);
          puVar4 = puStack_300;
          param_4 = lStack_2f8;
        }
        _objc_release(puVar7);
        _objc_release(ppuStack_2e0);
        _objc_release(puVar4);
        _objc_release(lStack_2c8);
        _objc_release(param_5);
        goto LAB_108002364;
      }
    }
    lVar16 = 0;
  }
  puVar14 = (undefined *)0x0;
LAB_108002364:
  _objc_release(lVar16);
  _objc_release(puStack_2d0);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_a8) {
    ___stack_chk_fail();
    pcStack_308 = FUN_108002bf8;
    lStack_330 = param_2;
    puStack_328 = puVar14;
    lStack_320 = param_6;
    puStack_318 = param_5;
    puStack_310 = &stack0xfffffffffffffff0;
    _objc_retain(param_3);
    _objc_retain(ppuVar5);
    if (param_3 == (undefined **)0x0) {
      uStack_348 = 0;
      uStack_340 = 0;
      uStack_338 = 0;
    }
    else {
      func_0x00010bdc1140(&uStack_348,param_3);
    }
    if (ppuVar5 == (undefined **)0x0) {
      uStack_360 = 0;
      uStack_358 = 0;
      uStack_350 = 0;
    }
    else {
      func_0x00010bdc1140(&uStack_360,ppuVar5);
    }
    puVar10 = &uStack_348;
    _CMTimeCompare(puVar10,&uStack_360);
    _objc_release(ppuVar5);
    _objc_release(param_3);
    return (undefined *)(long)(int)puVar10;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
  return puVar14;
}



/* Entry: 108002bf8; end: 108002c93;  */

long FUN_108002bf8(undefined8 param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_2 == 0) {
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
  }
  else {
    func_0x00010bdc1140(&uStack_48,param_2);
  }
  if (param_3 == 0) {
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
  }
  else {
    func_0x00010bdc1140(&uStack_60,param_3);
  }
  puVar1 = &uStack_48;
  _CMTimeCompare(puVar1,&uStack_60);
  _objc_release(param_3);
  _objc_release(param_2);
  return (long)(int)puVar1;
}



/* Entry: 108002c94; end: 108002c9b; -[SCBounceVideoStateImpl videoDuration] */

undefined8 FUN_108002c94(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108002c9c; end: 108002ca3; -[SCBounceVideoStateImpl bounceOffset] */

undefined8 FUN_108002c9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 108002ca4; end: 108002cab; -[SCBounceVideoStateImpl setBounceOffset:] */

void FUN_108002ca4(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x38) = param_1;
  return;
}



/* Entry: 108002cac; end: 108002cb3; -[SCBounceVideoStateImpl bounceVideoDuration] */

undefined8 FUN_108002cac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 108002cb4; end: 108002cbb; -[SCBounceVideoStateImpl bounceAsset] */

undefined8 FUN_108002cb4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 108002cbc; end: 108002cc3; -[SCBounceVideoStateImpl originalAsset] */

undefined8 FUN_108002cbc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 108002cc4; end: 108002ccb; -[SCBounceVideoStateImpl highOutputFramerate] */

undefined1 FUN_108002cc4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x24);
}



/* Entry: 108002ccc; end: 108002cd3; -[SCBounceVideoStateImpl outputSpeedFactor] */

undefined8 FUN_108002ccc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 108002cd4; end: 108002cdb; -[SCBounceVideoStateImpl setOutputSpeedFactor:] */

void FUN_108002cd4(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x58) = param_1;
  return;
}



/* Entry: 108002cdc; end: 108002ce3; -[SCBounceVideoStateImpl normalizeOutputDuration] */

undefined1 FUN_108002cdc(long param_1)

{
  return *(undefined1 *)(param_1 + 0x25);
}



/* Entry: 108002ce4; end: 108002ceb; -[SCBounceVideoStateImpl setNormalizeOutputDuration:] */

void FUN_108002ce4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x25) = param_3;
  return;
}



/* Entry: 108002cec; end: 108002cf3; -[SCBounceVideoStateImpl removeDuplicateKeyFrames] */

undefined1 FUN_108002cec(long param_1)

{
  return *(undefined1 *)(param_1 + 0x26);
}



/* Entry: 108002cf4; end: 108002cfb; -[SCBounceVideoStateImpl setRemoveDuplicateKeyFrames:] */

void FUN_108002cf4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x26) = param_3;
  return;
}



/* Entry: 108002cfc; end: 108002d03; -[SCBounceVideoStateImpl removeDuplicateEndFrames] */

undefined1 FUN_108002cfc(long param_1)

{
  return *(undefined1 *)(param_1 + 0x27);
}



/* Entry: 108002d04; end: 108002d0b; -[SCBounceVideoStateImpl setRemoveDuplicateEndFrames:] */

void FUN_108002d04(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x27) = param_3;
  return;
}



/* Entry: 108002d0c; end: 108002d13; -[SCBounceVideoStateImpl useCustomBezierCurve] */

undefined1 FUN_108002d0c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x28);
}



/* Entry: 108002d14; end: 108002d1b; -[SCBounceVideoStateImpl setUseCustomBezierCurve:] */

void FUN_108002d14(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 108002d1c; end: 108002d23; -[SCBounceVideoStateImpl customBezierControlPoint1] */

undefined1  [16] FUN_108002d1c(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x68);
}



/* Entry: 108002d24; end: 108002d2b; -[SCBounceVideoStateImpl setCustomBezierControlPoint1:] */

void FUN_108002d24(undefined8 param_1,undefined8 param_2,long param_3)

{
  *(undefined8 *)(param_3 + 0x68) = param_1;
  *(undefined8 *)(param_3 + 0x70) = param_2;
  return;
}



/* Entry: 108002d2c; end: 108002d33; -[SCBounceVideoStateImpl customBezierControlPoint2] */

undefined1  [16] FUN_108002d2c(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x78);
}



/* Entry: 108002d34; end: 108002d3b; -[SCBounceVideoStateImpl setCustomBezierControlPoint2:] */

void FUN_108002d34(undefined8 param_1,undefined8 param_2,long param_3)

{
  *(undefined8 *)(param_3 + 0x78) = param_1;
  *(undefined8 *)(param_3 + 0x80) = param_2;
  return;
}



/* Entry: 108002d3c; end: 108002d43; -[SCBounceVideoStateImpl bounceProcessingBlock] */

undefined8 FUN_108002d3c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 108002d44; end: 108002d4b; -[SCBounceVideoStateImpl setBounceProcessingBlock:] */

void FUN_108002d44(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108002d4c; end: 108002d93; -[SCBounceVideoStateImpl .cxx_destruct] */

void FUN_108002d4c(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108002d94; end: 108003197; -[SCBatchCaptureStateHandler initWithBatchCaptureEditingIndexProvider:batchCaptureConfiguration:overlaySize:userSession:previewCameraSourceOverlayService:userInfoServices:overlayFormatServices:userTaggingFeature:targetTrajectoryFactory:stickerInjector:ctpItemViewService:circumstanceEngine:snapEditorTweaks:] */

undefined8 *
FUN_108002d94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
             long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined1 in_b0;
  undefined1 in_register_00005001;
  undefined1 in_register_00005002;
  undefined1 in_register_00005003;
  undefined1 in_register_00005004;
  undefined1 in_register_00005005;
  undefined1 in_register_00005006;
  undefined1 in_register_00005007;
  undefined8 uStack_110;
  undefined *puStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  puStack_108 = PTR_PTR_1126fc180;
  puVar2 = &uStack_110;
  uStack_110 = param_2;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    _objc_storeWeak(puVar2 + 0x11,param_4);
    puVar2[2] = CONCAT17(in_register_00005007,
                         CONCAT16(in_register_00005006,
                                  CONCAT15(in_register_00005005,
                                           CONCAT14(in_register_00005004,
                                                    CONCAT13(in_register_00005003,
                                                             CONCAT12(in_register_00005002,
                                                                      CONCAT11(in_register_00005001,
                                                                               in_b0)))))));
    puVar2[3] = param_1;
    _objc_retain(param_6);
    uVar3 = puVar2[4];
    puVar2[4] = param_6;
    _objc_release(uVar3);
    _objc_storeWeak(puVar2 + 5,param_5);
    _objc_retain(param_7);
    uVar3 = puVar2[6];
    puVar2[6] = param_7;
    _objc_release(uVar3);
    _objc_retain(param_8);
    uVar3 = puVar2[7];
    puVar2[7] = param_8;
    _objc_release(uVar3);
    _objc_retain(param_9);
    uVar3 = puVar2[8];
    puVar2[8] = param_9;
    _objc_release(uVar3);
    _objc_storeWeak(puVar2 + 0xb,param_10);
    _objc_retain(param_11);
    uVar3 = puVar2[0xc];
    puVar2[0xc] = param_11;
    _objc_release(uVar3);
    _objc_retain(param_12);
    uVar3 = puVar2[0xd];
    puVar2[0xd] = param_12;
    _objc_release(uVar3);
    _objc_retain(param_13);
    uVar3 = puVar2[0xe];
    puVar2[0xe] = param_13;
    _objc_release(uVar3);
    _objc_retain(param_14);
    uVar3 = puVar2[0xf];
    puVar2[0xf] = param_14;
    _objc_release(uVar3);
    _objc_retain(param_15);
    uVar3 = puVar2[0x10];
    puVar2[0x10] = param_15;
    _objc_release(uVar3);
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar3 = puVar2[1];
    puVar2[1] = puVar4;
    _objc_release(uVar3);
    lVar5 = param_5;
    func_0x00010c1585e0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar6 != 0) {
      lVar9 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar5);
        }
        puVar7 = puVar2;
        func_0x00010bdf03c0(puVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2[1]);
        _objc_release(puVar7);
        lVar9 = lVar9 + 1;
      } while (lVar6 != lVar9);
      lVar6 = lVar5;
      func_0x00010bf52a60();
    }
    _objc_release(lVar5);
    puVar4 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar8 = (undefined8 *)PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar8;
    func_0x00010c021520();
    uVar3 = puVar2[9];
    puVar2[9] = puVar4;
    _objc_release(uVar3);
    _objc_release(puVar8);
  }
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(puVar7);
  func_0x00010bf5f520(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf736e0();
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return param_4;
}



/* Entry: 108003198; end: 1080031e7; -[SCBatchCaptureStateHandler didChangeStaticStickerView:] */

void FUN_108003198(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bf5f520(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf736e0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1080031e8; end: 108003247; -[SCBatchCaptureStateHandler didUpdateMetadataOfStickerView:atIndex:] */

void FUN_1080031e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bf5f520(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7e500();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108003248; end: 1080032a7; -[SCBatchCaptureStateHandler didChangeAudioFilter:audioEnabled:] */

void FUN_108003248(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bf5f520(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf73000();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1080032a8; end: 1080032f7; -[SCBatchCaptureStateHandler didChangeAttachmentURL:] */

void FUN_1080032a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bf5f520(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf72fc0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1080032f8; end: 108003347; -[SCBatchCaptureStateHandler updateAvailableFiltersWithState:] */

void FUN_1080032f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bf5f520(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2839e0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108003348; end: 108003397; -[SCBatchCaptureStateHandler didChangeFiltersState:] */

void FUN_108003348(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bf5f520(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf731a0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108003398; end: 1080033e7; -[SCBatchCaptureStateHandler didChangeVenueFilterView:] */

void FUN_108003398(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bf5f520(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf73820();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1080033e8; end: 108003447; -[SCBatchCaptureStateHandler didChangeCroppingState:isInitialState:] */

void FUN_1080033e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bf5f520(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf73120();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108003448; end: 10800350f; -[SCBatchCaptureStateHandler didFinishTouchWithTarget:] */

void FUN_108003448(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ba960;
  _objc_opt_class(PTR_PTR_1126ba960);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  puVar1 = PTR_DAT_1126a51c0;
  if ((uVar2 & 1) == 0) {
    _objc_retain(param_3);
    uVar2 = param_3;
    func_0x00010010fab4(param_3,puVar1);
    _objc_release(param_3);
    if ((param_3 == 0) || ((int)uVar2 == 0)) {
      puVar1 = PTR_PTR_1126c3c80;
      _objc_opt_class(PTR_PTR_1126c3c80);
      uVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar1);
      if ((uVar2 & 1) != 0) {
        func_0x00010bf73820(param_1);
      }
    }
    else {
      func_0x00010bf736c0(param_1);
    }
  }
  else {
    func_0x00010bf736e0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108003510; end: 108003593; -[SCBatchCaptureStateHandler didChangeLiveCameraLensConfiguration:] */

void FUN_108003510(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_108003594;
  puStack_30 = &UNK_110860380;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010bf97e80(uVar1,param_2,&puStack_48);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108003594; end: 10800359f;  */

void FUN_108003594(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf73370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_didChangeLiveCameraLensConfigura_1125ba680,
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1080035a0; end: 1080035db; -[SCBatchCaptureStateHandler statesContainAudioVisualEdits] */

undefined8 FUN_1080035a0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf5f520();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c2529c0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1080035dc; end: 10800362f; -[SCBatchCaptureStateHandler multiSnapStateAtSegmentIndex:] */

void FUN_1080035dc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  if (param_3 != 0x7fffffffffffffff) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bf529e0();
    if (lVar1 != 0) {
      func_0x00010c0dfd40(*(undefined8 *)(param_1 + 8),param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108003630; end: 108003753; -[SCBatchCaptureStateHandler gallerySnapOverlaysForAllSnaps] */

void FUN_108003630(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    uVar8 = 0;
    do {
      uVar3 = *(undefined8 *)(param_1 + 8);
      func_0x00010c0dfd40(uVar3,param_2,uVar8);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1 + 0x28;
      _objc_loadWeakRetained(lVar2);
      lVar4 = lVar2;
      func_0x00010c1585e0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      _objc_release(lVar2);
      lVar2 = lVar5;
      func_0x00010bfb4f40(lVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar3;
      func_0x00010bfbd860(uVar3,param_2,lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(puVar1,param_2,uVar6);
      _objc_release(uVar6);
      _objc_release(lVar2);
      _objc_release(lVar5);
      _objc_release(uVar3);
      uVar8 = uVar8 + 1;
      uVar7 = *(ulong *)(param_1 + 8);
      func_0x00010bf529e0();
    } while (uVar8 < uVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108003754; end: 108003a87; -[SCBatchCaptureStateHandler overlaysForGalleryWithMultiSnapDrawingCache:completion:] */

void FUN_108003754(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 0x50) != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bf529e0();
    if (lVar1 != 0) {
      uVar2 = *(ulong *)(param_1 + 0x50);
      func_0x00010c07d220();
      puVar13 = *(undefined **)(param_1 + 8);
      if ((uVar2 & 1) == 0) {
        func_0x00010c1583c0(*(undefined8 *)(param_1 + 0x50));
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar13);
      }
      else {
        func_0x00010bf51e00();
        puVar3 = puVar13;
      }
      uVar2 = *(ulong *)(param_1 + 0x50);
      func_0x00010c07d220();
      puVar13 = (undefined *)(param_1 + 0x28);
      _objc_loadWeakRetained();
      puVar4 = puVar13;
      func_0x00010c1585e0();
      _objc_retainAutoreleasedReturnValue();
      if ((uVar2 & 1) == 0) {
        func_0x00010c1583c0(*(undefined8 *)(param_1 + 0x50));
        puVar14 = puVar4;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar14);
      }
      else {
        puVar5 = puVar4;
        func_0x00010bf51e00();
      }
      _objc_release(puVar4);
      _objc_release(puVar13);
      puVar13 = puVar3;
      func_0x00010bf529e0();
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf0a0e0();
      _objc_retainAutoreleasedReturnValue();
      if (0 < (long)puVar13) {
        puVar14 = (undefined *)0x0;
        do {
          puVar6 = puVar3;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bdc6b20(param_1);
          puVar7 = puVar5;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          lVar1 = param_1;
          func_0x00010be1a520(param_1);
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar6;
          func_0x00010bfbd9e0(puVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar4);
          _objc_release(puVar8);
          _objc_release(lVar1);
          _objc_release(puVar7);
          _objc_release(puVar6);
          puVar14 = puVar14 + 1;
        } while (puVar13 != puVar14);
      }
      uVar12 = *(undefined8 *)(param_1 + 0x48);
      _objc_retain(param_3);
      _objc_retain(param_4);
      _objc_retain(puVar4);
      _objc_retain(puVar3);
      func_0x00010c0f7fc0(uVar12);
      _objc_release(param_4);
      _objc_release(param_3);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar5);
    }
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  ___stack_chk_fail();
  uVar12 = 0;
  _dispatch_semaphore_create();
  lVar11 = *(long *)(param_3 + 0x20);
  func_0x00010bf529e0();
  puVar13 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  if (0 < lVar11) {
    lVar1 = 0;
    do {
      uVar9 = *(undefined8 *)(param_3 + 0x20);
      func_0x00010c0dfd40(uVar9);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = *(undefined8 *)(param_3 + 0x28);
      func_0x00010c0dfd40(uVar10);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(puVar13);
      _objc_retain(puVar3);
      _objc_retain(uVar12);
      func_0x00010c0efec0(uVar9);
      _objc_release(uVar10);
      _objc_release(uVar9);
      _dispatch_semaphore_wait(uVar12,0xffffffffffffffff);
      _objc_release(uVar12);
      _objc_release(puVar3);
      _objc_release(puVar13);
      lVar1 = lVar1 + 1;
    } while (lVar11 != lVar1);
  }
  (**(code **)(*(long *)(param_3 + 0x38) + 0x10))(*(long *)(param_3 + 0x38),puVar13,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar13);
  _objc_release(uVar12);
  return;
}



/* Entry: 108003a88; end: 108003c33;  */

void FUN_108003a88(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  uVar1 = 0;
  _dispatch_semaphore_create();
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010bf529e0();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  if (0 < lVar2) {
    lVar7 = 0;
    do {
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c0dfd40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c0dfd40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(puVar3);
      _objc_retain(puVar4);
      _objc_retain(uVar1);
      func_0x00010c0efec0(uVar5);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _dispatch_semaphore_wait(uVar1,0xffffffffffffffff);
      _objc_release(uVar1);
      _objc_release(puVar4);
      _objc_release(puVar3);
      lVar7 = lVar7 + 1;
    } while (lVar2 != lVar7);
  }
  (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),puVar3,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar1);
  return;
}



/* Entry: 108003c34; end: 108003ca3;  */

void FUN_108003c34(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x00010c1d04c0(uVar1);
  func_0x00010c1d04c0(*(undefined8 *)(param_1 + 0x28));
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbdff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_semaphore_signal_11034c130)(*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 108003ca4; end: 108003e1f; -[SCBatchCaptureStateHandler _galleryTimeRangesForSegment:] */

void FUN_108003ca4(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010c083320();
  puVar3 = PTR_PTR_1126c4280;
  puVar2 = PTR_PTR_1126c4270;
  puVar6 = param_3;
  if ((int)puVar1 == 0) {
    _objc_retain(param_3);
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    if (((ulong)puVar3 & 1) == 0) {
      puVar6 = (undefined *)0x0;
    }
    _objc_retain(puVar6);
    _objc_release(param_3);
    puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    if (puVar6 == (undefined *)0x0) {
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
    }
    else {
      func_0x00010bf4d840(&uStack_70,param_3);
    }
    func_0x00010c297240();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_40 = puVar2;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  else {
    _objc_retain(param_3);
    _objc_opt_class(puVar3);
    puVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar3);
    if (((ulong)puVar2 & 1) == 0) {
      puVar6 = (undefined *)0x0;
    }
    _objc_retain(puVar6);
    _objc_release(param_3);
    puVar3 = puVar6;
    func_0x00010bfb4f40();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = param_3 + 0x28;
    _objc_loadWeakRetained();
    puVar3 = puVar6;
    func_0x00010c1585e0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar3;
    func_0x00010bf529e0();
    _objc_release(puVar3);
    _objc_release(puVar6);
    if (puVar1 != (undefined *)0x0) {
      puVar6 = (undefined *)0x0;
      do {
        puVar3 = param_3 + 0x28;
        _objc_loadWeakRetained(puVar3);
        puVar1 = puVar3;
        func_0x00010c1585e0();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar1;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar1);
        _objc_release(puVar3);
        puVar3 = param_3;
        func_0x00010c0d2420(param_3);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = puVar4;
        func_0x00010bfb4f40(puVar4);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar3;
        func_0x00010c15e0c0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa160(puVar2);
        _objc_release(puVar5);
        _objc_release(puVar1);
        _objc_release(puVar3);
        _objc_release(puVar4);
        puVar6 = puVar6 + 1;
        puVar3 = param_3 + 0x28;
        _objc_loadWeakRetained();
        puVar1 = puVar3;
        func_0x00010c1585e0();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar1;
        func_0x00010bf529e0();
        _objc_release(puVar1);
        _objc_release(puVar3);
      } while (puVar6 < puVar4);
    }
    puVar3 = puVar2;
    func_0x00010bf51e00(puVar2);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108003e20; end: 108003faf; -[SCBatchCaptureStateHandler sendingStates] */

void FUN_108003e20(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  ulong uVar10;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf529e0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  if (lVar4 != 0) {
    uVar10 = 0;
    do {
      lVar2 = param_1 + 0x28;
      _objc_loadWeakRetained(lVar2);
      lVar3 = lVar2;
      func_0x00010c1585e0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      _objc_release(lVar2);
      lVar2 = param_1;
      func_0x00010c0d2420(param_1,param_2,uVar10);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar4;
      func_0x00010bfb4f40(lVar4);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar2;
      func_0x00010c15e0c0(lVar2,param_2,lVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(puVar1,param_2,lVar5);
      _objc_release(lVar5);
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar4);
      uVar10 = uVar10 + 1;
      uVar6 = param_1 + 0x28;
      _objc_loadWeakRetained();
      uVar7 = uVar6;
      func_0x00010c1585e0();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010bf529e0();
      _objc_release(uVar7);
      _objc_release(uVar6);
    } while (uVar10 < uVar8);
  }
  puVar9 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 108003fb0; end: 108003fdf; -[SCBatchCaptureStateHandler setBatchCaptureSavingConfiguration:] */

void FUN_108003fb0(long param_1,undefined8 param_2,undefined8 param_3)

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


