/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106be4250; end: 106be428f; -[SCSpectaclesBoomboxMediaCell setLeftImageOverlayImageView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106be4250(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11275a638;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106be4290; end: 106be429f; -[SCSpectaclesBoomboxMediaCell rightImageOverlayImageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106be4290(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275a63c);
}



/* Entry: 106be42a0; end: 106be42df; -[SCSpectaclesBoomboxMediaCell setRightImageOverlayImageView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106be42a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11275a63c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106be42e0; end: 106be4437; -[SCSpectaclesBoomboxMediaCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106be42e0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11275a63c,0);
  _objc_storeStrong(param_1 + _DAT_11275a638,0);
  _objc_storeStrong(param_1 + _DAT_11275a654,0);
  _objc_destroyWeak(param_1 + _DAT_11275a67c);
  _objc_destroyWeak(param_1 + _DAT_11275a668);
  _objc_storeStrong(param_1 + _DAT_11275a66c,0);
  _objc_storeStrong(param_1 + _DAT_11275a664,0);
  _objc_storeStrong(param_1 + _DAT_11275a660,0);
  _objc_storeStrong(param_1 + _DAT_11275a65c,0);
  _objc_storeStrong(param_1 + _DAT_11275a658,0);
  _objc_storeStrong(param_1 + _DAT_11275a634,0);
  _objc_storeStrong(param_1 + _DAT_11275a630,0);
  _objc_storeStrong(param_1 + _DAT_11275a678,0);
  _objc_storeStrong(param_1 + _DAT_11275a674,0);
  _objc_storeStrong(param_1 + _DAT_11275a644,0);
  _objc_storeStrong(param_1 + _DAT_11275a640,0);
  _objc_storeStrong(param_1 + _DAT_11275a650,0);
  _objc_storeStrong(param_1 + _DAT_11275a64c,0);
  _objc_storeStrong(param_1 + _DAT_11275a648,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275a62c,0);
  return;
}



/* Entry: 106be4438; end: 106be463b; -[SCSpectaclesBoomboxPhotoPlaybackSession initWithImage:leftLayer:rightLayer:leftCommands:rightCommands:duration:] */

undefined1 *
FUN_106be4438(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_1126f5970;
  uStack_70 = param_2;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126bf4d0;
    func_0x00010c22bec0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    uVar2 = 2;
    _dispatch_semaphore_create();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar5);
    puVar3 = PTR_PTR_1126bf4b8;
    _objc_opt_new(PTR_PTR_1126bf4b8);
    puVar4 = PTR_PTR_1126bf4e8;
    _objc_alloc();
    func_0x00010c01cce0();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined **)((long)puVar1 + 0x58) = puVar4;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126bf4e8;
    _objc_alloc();
    func_0x00010c01cce0();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined **)((long)puVar1 + 0x60) = puVar4;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x68);
    *(undefined8 *)((long)puVar1 + 0x68) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x70);
    *(undefined8 *)((long)puVar1 + 0x70) = param_8;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126d1398;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x78);
    *(undefined **)((long)puVar1 + 0x78) = puVar4;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 0x84) = param_1;
    _objc_release(puVar3);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 106be463c; end: 106be467f; -[SCSpectaclesBoomboxPhotoPlaybackSession dealloc] */

void FUN_106be463c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010bddfa00();
  puStack_28 = PTR_PTR_1126f5970;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106be4680; end: 106be46f7; -[SCSpectaclesBoomboxPhotoPlaybackSession stopRunning] */

void FUN_106be4680(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  func_0x00010bdda440();
  func_0x00010c069d00(*(undefined8 *)(param_1 + 0x18));
  func_0x00010c1d9980(*(undefined8 *)(param_1 + 0x18));
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d560();
  _objc_release(puVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bddfa10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__cleanupResources_112555820);
  return;
}



/* Entry: 106be46f8; end: 106be47f7; -[SCSpectaclesBoomboxPhotoPlaybackSession _cleanupResources] */

void FUN_106be46f8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126d13a0;
  _objc_alloc(PTR_PTR_1126d13a0);
  func_0x00010bfffdc0();
  func_0x00010befafa0(uVar2,param_2,puVar1);
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126d13a0;
  _objc_alloc(PTR_PTR_1126d13a0);
  func_0x00010bfffdc0();
  func_0x00010befafa0(uVar2,param_2,puVar1);
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126d13a8;
  _objc_opt_new(PTR_PTR_1126d13a8);
  func_0x00010befafa0(uVar2,param_2,puVar1);
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126d13b0;
  _objc_alloc(PTR_PTR_1126d13b0);
  func_0x00010c03e200();
  func_0x00010befafa0(uVar2,param_2,puVar1);
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126d13b0;
  _objc_alloc(PTR_PTR_1126d13b0);
  func_0x00010c03e200();
  func_0x00010befafa0(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106be47f8; end: 106be4833; -[SCSpectaclesBoomboxPhotoPlaybackSession _cancelAutoAdvanceBlock] */

void FUN_106be47f8(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x88) != 0) {
    _dispatch_block_cancel();
    uVar1 = *(undefined8 *)(param_1 + 0x88);
    *(undefined8 *)(param_1 + 0x88) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 106be4834; end: 106be494b; -[SCSpectaclesBoomboxPhotoPlaybackSession startRunning] */

void FUN_106be4834(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    return;
  }
  func_0x00010be795a0();
  puVar1 = PTR__OBJC_CLASS___CADisplayLink_1126b94a8;
  func_0x00010bf85b60(PTR__OBJC_CLASS___CADisplayLink_1126b94a8,param_2,param_1,
                      PTR_s__displayLinkCallback__11252f528);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined **)(param_1 + 0x18) = puVar1;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  puVar1 = PTR__OBJC_CLASS___NSRunLoop_1126b94b0;
  func_0x00010bf5fe80(PTR__OBJC_CLASS___NSRunLoop_1126b94b0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc2c0(uVar2,param_2,puVar1,*(undefined8 *)PTR__NSRunLoopCommonModes_11034aaa8);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106be494c; end: 106be4a23; -[SCSpectaclesBoomboxPhotoPlaybackSession _prepareToRun] */

void FUN_106be494c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar1);
  _objc_initWeak(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(uVar1);
  func_0x00010c0f7fc0(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(uVar1);
  return;
}



/* Entry: 106be4a24; end: 106be4bcb;  */

void FUN_106be4a24(double param_1,double param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  double dVar6;
  
  lVar1 = param_3 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c23d0a0(*(undefined8 *)(param_3 + 0x20));
    dVar6 = param_1;
    func_0x00010c14e120(*(undefined8 *)(param_3 + 0x20));
    param_1 = param_1 * dVar6;
    func_0x00010c23d0a0(*(undefined8 *)(param_3 + 0x20));
    func_0x00010c14e120(*(undefined8 *)(param_3 + 0x20));
    puVar2 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
    func_0x00010bf64b80();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    _CGColorSpaceCreateDeviceRGB();
    puVar4 = puVar2;
    _objc_retainAutorelease(puVar2);
    func_0x00010c0d3c60();
    _CGBitmapContextCreate();
    _CGColorSpaceRelease(puVar3);
    uVar5 = *(undefined8 *)(param_3 + 0x20);
    _objc_retainAutorelease(uVar5);
    func_0x00010bdc1020();
    puVar3 = puVar4;
    _CGContextDrawImage(0,0,(double)(long)param_1,(double)(long)(param_2 * dVar6),puVar4,uVar5);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar2);
    func_0x00010c0f7fc0(puVar3);
    _objc_release(puVar3);
    _CGContextRelease(puVar4);
    _objc_release(puVar2);
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 106be4bcc; end: 106be4c73;  */

void FUN_106be4bcc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28) = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30) = *(undefined8 *)(param_1 + 0x38);
  lVar1 = *(long *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar3);
  uVar2 = *(undefined8 *)(lVar1 + 0x20);
  *(undefined8 *)(lVar1 + 0x20) = uVar3;
  _objc_release(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be1bba0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48) = uVar3;
  _objc_release(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be1bba0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50) = uVar3;
  _objc_release(uVar2);
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x80) = 1;
  return;
}



/* Entry: 106be4c74; end: 106be4e93; -[SCSpectaclesBoomboxPhotoPlaybackSession _displayLinkCallback:] */

void FUN_106be4c74(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  _objc_retain(param_3);
  if ((*(long *)(param_1 + 0x20) != 0) && (*(char *)(param_1 + 0x80) == '\x01')) {
    lVar2 = *(long *)(param_1 + 0x38);
    _dispatch_semaphore_wait(lVar2,0);
    if (lVar2 == 0) {
      *(undefined1 *)(param_1 + 0x80) = 0;
      lVar2 = param_1;
      func_0x00010bdda440();
      _dispatch_group_create();
      _dispatch_group_enter();
      puVar1 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0xc2000000;
      pcStack_88 = FUN_106be4e94;
      puStack_80 = &UNK_110966ff0;
      _objc_retain(lVar2);
      lVar3 = param_1;
      lStack_78 = lVar2;
      func_0x00010be91020(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befafa0(*(undefined8 *)(param_1 + 8));
      _dispatch_group_enter(lVar2);
      puStack_c0 = puVar1;
      uStack_b8 = 0xc2000000;
      uStack_b0 = 0x106be4e9c;
      puStack_a8 = &UNK_110966ff0;
      lStack_a0 = lVar2;
      _objc_retain(lVar2);
      lVar4 = param_1;
      func_0x00010be91020(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      func_0x00010befafa0(*(undefined8 *)(param_1 + 8));
      uVar5 = *(undefined8 *)(param_1 + 0x38);
      _objc_retain(uVar5);
      _objc_initWeak(auStack_c8,param_1);
      puStack_f8 = puVar1;
      uStack_f0 = 0xc2000000;
      pcStack_e8 = FUN_106be4ea4;
      puStack_e0 = &UNK_110841fb0;
      uStack_d8 = uVar5;
      _objc_retain(uVar5);
      _objc_copyWeak(auStack_d0,auStack_c8);
      func_0x000100bc0718(lVar2,PTR___dispatch_main_q_11034be20,&puStack_f8);
      _objc_destroyWeak(auStack_d0);
      _objc_release(uStack_d8);
      _objc_release(uVar5);
      _objc_destroyWeak(auStack_c8);
      _objc_release(lStack_a0);
      _objc_release(lVar4);
      _objc_release(lStack_78);
      _objc_release(lVar2);
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106be4e94; end: 106be4ea3;  */

void FUN_106be4e94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 106be4ea4; end: 106be4edb;  */

void FUN_106be4ea4(long param_1)

{
  _dispatch_semaphore_signal(*(undefined8 *)(param_1 + 0x20));
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2e2e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106be4edc; end: 106be4fbf; -[SCSpectaclesBoomboxPhotoPlaybackSession _handlePlaybackSectionDidLoadFirstFrame] */

void FUN_106be4edc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lVar1 = param_1 + 0x90;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c100180();
  _objc_release(lVar1);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x106be4f7c;
  puStack_30 = &UNK_110842e18;
  uVar2 = 0;
  lStack_28 = param_1;
  func_0x0001008553e8(0,&puStack_48);
  uVar3 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = uVar2;
  _objc_release(uVar3);
  func_0x000100c749e0(*(undefined4 *)(param_1 + 0x84),"APPSTORE",*(undefined8 *)(param_1 + 0x88));
  return;
}



/* Entry: 106be4fc0; end: 106be517f; -[SCSpectaclesBoomboxPhotoPlaybackSession _requestForCommands:renderer:colorFilterSessionId:completion:] */

void FUN_106be4fc0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar3 = PTR_PTR_1126bf4b8;
  _objc_opt_new(PTR_PTR_1126bf4b8);
  puVar4 = PTR_PTR_1126d13b8;
  _objc_alloc();
  func_0x00010c036de0(0x7ff0000000000000);
  puVar5 = puVar4;
  _objc_autoreleasePoolPush();
  uVar8 = *(undefined8 *)(param_1 + 0x78);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf1c920();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  uStack_98 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_a0 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_88 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_90 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_78 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_80 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  uStack_b8 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  uStack_c0 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uStack_b0 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  func_0x00010bf40e80(uVar8,param_2,puVar3,uVar1,uVar2,uVar7,0,param_3,0,puVar4,param_4,5,&uStack_a0
                      ,puVar6,param_1,0,param_6,param_5,&uStack_c0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(puVar6);
  _objc_autoreleasePoolPop(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar8);
  return;
}



/* Entry: 106be5180; end: 106be51fb; -[SCSpectaclesBoomboxPhotoPlaybackSession _generateSessionId] */

void FUN_106be5180(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSUUID_1126b0270;
  func_0x00010bdc3540(PTR__OBJC_CLASS___NSUUID_1126b0270);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bdc3580();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25cfc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106be51fc; end: 106be5207; -[SCSpectaclesBoomboxPhotoPlaybackSession _applicationWillResignActive:] */

void FUN_106be51fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_setPaused__112654088,1);
  return;
}



/* Entry: 106be5208; end: 106be5213; -[SCSpectaclesBoomboxPhotoPlaybackSession _applicationDidBecomeActive:] */

void FUN_106be5208(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_setPaused__112654088,0);
  return;
}



/* Entry: 106be5214; end: 106be522b; -[SCSpectaclesBoomboxPhotoPlaybackSession delegate] */

void FUN_106be5214(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x90);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106be522c; end: 106be5237; -[SCSpectaclesBoomboxPhotoPlaybackSession setDelegate:] */

void FUN_106be522c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x90,param_3);
  return;
}



/* Entry: 106be5238; end: 106be52ff; -[SCSpectaclesBoomboxPhotoPlaybackSession .cxx_destruct] */

void FUN_106be5238(long param_1)

{
  _objc_destroyWeak(param_1 + 0x90);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106be5300; end: 106be5347; -[SCSpectaclesBoomboxTransitionAnimator initWithPresenting:] */

void FUN_106be5300(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f5978;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 0x10) = param_3;
  }
  return;
}



/* Entry: 106be5348; end: 106be5353; -[SCSpectaclesBoomboxTransitionAnimator transitionDuration:] */

undefined8 FUN_106be5348(void)

{
  return 0x3fd3333333333333;
}



/* Entry: 106be5354; end: 106be5367; -[SCSpectaclesBoomboxTransitionAnimator animateTransition:] */

void FUN_106be5354(long param_1)

{
  if (*(char *)(param_1 + 0x10) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010be79d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__present__11257c0e0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be02290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismiss__11255e240);
  return;
}



/* Entry: 106be5368; end: 106be54df; -[SCSpectaclesBoomboxTransitionAnimator _present:] */

void FUN_106be5368(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010bf4b2a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c29ce60(param_3,param_2,*(undefined8 *)PTR__UITransitionContextFromViewKey_110345e50);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar2,param_2,uVar3);
  uVar4 = param_3;
  func_0x00010c29ce60(param_3,param_2,*(undefined8 *)PTR__UITransitionContextToViewKey_110345e60);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0(uVar2);
  func_0x00010c19f0e0(uVar4);
  func_0x00010c1677c0(0,uVar4);
  func_0x00010befbb60(uVar2,param_2,uVar4);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106be54e0;
  puStack_50 = &UNK_110842e18;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_106be54ec;
  puStack_78 = &UNK_110841f20;
  uStack_70 = param_3;
  uStack_48 = uVar4;
  _objc_retain(param_3);
  _objc_retain(uVar4);
  func_0x00010bf03440(0x3fd3333333333333,0,puVar1,param_2,0x20000,&puStack_68,&puStack_90);
  _objc_release(uStack_70);
  _objc_release(uStack_48);
  _objc_release(param_3);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  return;
}



/* Entry: 106be54e0; end: 106be54eb;  */

void FUN_106be54e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,*(undefined8 *)(param_1 + 0x20),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 106be54ec; end: 106be5517;  */

void FUN_106be54ec(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = uVar2;
  func_0x00010c27ac00(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bf43bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_completeTransition__1125ae898,(uint)uVar1 ^ 1);
  return;
}



/* Entry: 106be5518; end: 106be568f; -[SCSpectaclesBoomboxTransitionAnimator _dismiss:] */

void FUN_106be5518(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  uVar3 = param_3;
  func_0x00010bf4b2a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c29ce60(param_3,param_2,*(undefined8 *)PTR__UITransitionContextToViewKey_110345e60);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar3,param_2,uVar4);
  uVar5 = param_3;
  func_0x00010c29ce60(param_3,param_2,*(undefined8 *)PTR__UITransitionContextFromViewKey_110345e50);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar3,param_2,uVar5);
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_106be5690;
  puStack_60 = &UNK_110842e18;
  _objc_retain(uVar5);
  puStack_a8 = puVar1;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_106be569c;
  puStack_90 = &UNK_110848bd8;
  uStack_88 = uVar5;
  uStack_80 = param_3;
  uStack_58 = uVar5;
  _objc_retain(param_3);
  _objc_retain(uVar5);
  func_0x00010bf03440(0x3fd3333333333333,0,puVar2,param_2,0x20000,&puStack_78,&puStack_a8);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(uStack_58);
  _objc_release(param_3);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  return;
}



/* Entry: 106be5690; end: 106be569b;  */

void FUN_106be5690(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(param_1 + 0x20),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 106be569c; end: 106be56d3;  */

void FUN_106be569c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c12c960(*(undefined8 *)(param_1 + 0x20));
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = uVar2;
  func_0x00010c27ac00(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bf43bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_completeTransition__1125ae898,(uint)uVar1 ^ 1);
  return;
}



/* Entry: 106be56d4; end: 106be56df; -[SCSpectaclesBoomboxTransitionAnimator .cxx_destruct] */

void FUN_106be56d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106be56e0; end: 106be5bdb; -[SCSpectaclesBoomboxVideoPlaybackSession initWithAsset:player:leftLayer:rightLayer:orientation:leftMidOutputCommand:rightMidOutputCommand:leftOutputCommands:rightOutputCommands:playbackRate:isReversePlayback:shouldLoopPlayback:isAudioDisabled:] */

undefined8 *
FUN_106be56e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined4 param_16)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  puStack_a0 = PTR_PTR_1126f5980;
  puVar1 = &uStack_a8;
  uStack_a8 = param_5;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uStack_c8 = param_13;
    puVar2 = PTR_PTR_1126bf4d0;
    uStack_d8 = param_11;
    uStack_c0 = param_12;
    func_0x00010c22bec0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[1];
    puVar1[1] = puVar2;
    _objc_release(uVar5);
    uVar5 = 2;
    _dispatch_semaphore_create();
    uVar6 = puVar1[0x11];
    puVar1[0x11] = uVar5;
    _objc_release(uVar6);
    _objc_retain(param_7);
    uVar5 = puVar1[4];
    uStack_b0 = param_7;
    puVar1[4] = param_7;
    _objc_release(uVar5);
    *(undefined1 *)(puVar1 + 2) = param_16._1_1_;
    *(char *)((long)puVar1 + 0x11) = (char)param_16;
    uVar5 = 0xbff0000000000000;
    if ((char)param_16 == '\0') {
      uVar5 = param_1;
    }
    puVar1[3] = uVar5;
    puVar2 = PTR_PTR_1126b44c8;
    _objc_alloc();
    func_0x00010c030dc0();
    uVar5 = puVar1[0x1a];
    puVar1[0x1a] = puVar2;
    _objc_release(uVar5);
    _objc_retain(param_8);
    uVar5 = puVar1[5];
    uStack_b8 = param_8;
    puVar1[5] = param_8;
    _objc_release(uVar5);
    func_0x00010c1675a0(puVar1[5]);
    func_0x00010c161660(puVar1[5]);
    uVar7 = (ulong)(uint)(float)(param_16._2_1_ ^ 1);
    func_0x00010c2241a0(uVar7,puVar1[5]);
    puVar1[0x12] = 0x3fc999999999999a;
    puVar2 = PTR_PTR_1126bf4b8;
    _objc_opt_new();
    puVar3 = PTR_PTR_1126bf4e8;
    _objc_alloc();
    func_0x00010c01cce0();
    uVar5 = puVar1[9];
    puVar1[9] = puVar3;
    _objc_release(uVar5);
    puVar3 = PTR_PTR_1126bf4e8;
    _objc_alloc();
    puStack_d0 = puVar2;
    func_0x00010c01cce0();
    uVar5 = puVar1[10];
    puVar1[10] = puVar3;
    _objc_release(uVar5);
    func_0x00010bf20c00(param_9);
    func_0x00010bf4e040(param_9);
    func_0x00010b690ad8(param_3,param_4,uVar7);
    func_0x00010b690acc();
    puVar1[0xb] = uStack_d8;
    _objc_retain(param_14);
    uVar5 = puVar1[0xc];
    puVar1[0xc] = param_14;
    _objc_release(uVar5);
    _objc_retain(param_15);
    uVar5 = puVar1[0xd];
    puVar1[0xd] = param_15;
    _objc_release(uVar5);
    lVar4 = puVar1[0xc];
    func_0x00010bf529e0();
    if (lVar4 == 0) {
      puVar2 = PTR_PTR_1126bf440;
      func_0x00010c22b820();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_80 = puVar2;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = puVar1[0xc];
      puVar1[0xc] = puVar3;
      _objc_release(uVar5);
      _objc_release(puVar2);
    }
    lVar4 = puVar1[0xd];
    func_0x00010bf529e0();
    param_12 = uStack_c0;
    if (lVar4 == 0) {
      puVar2 = PTR_PTR_1126bf440;
      func_0x00010c22b820();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_88 = puVar2;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = puVar1[0xd];
      puVar1[0xd] = puVar3;
      _objc_release(uVar5);
      _objc_release(puVar2);
    }
    uVar5 = puVar1[1];
    puVar2 = PTR_PTR_1126d13c0;
    _objc_alloc(PTR_PTR_1126d13c0);
    func_0x00010bfffe20(param_3,param_4);
    func_0x00010befafa0(uVar5);
    _objc_release(puVar2);
    uVar5 = puVar1[1];
    puVar2 = PTR_PTR_1126d13c0;
    _objc_alloc(PTR_PTR_1126d13c0);
    func_0x00010bfffe20(param_3,param_4);
    func_0x00010befafa0(uVar5);
    _objc_release(puVar2);
    _objc_retain(param_12);
    uVar5 = puVar1[0xe];
    puVar1[0xe] = param_12;
    _objc_release(uVar5);
    param_13 = uStack_c8;
    _objc_retain(uStack_c8);
    uVar5 = puVar1[0xf];
    puVar1[0xf] = param_13;
    _objc_release(uVar5);
    puVar2 = PTR_PTR_1126d1398;
    _objc_opt_new();
    uVar5 = puVar1[0x10];
    puVar1[0x10] = puVar2;
    _objc_release(uVar5);
    uVar5 = puVar1[1];
    puVar2 = PTR_PTR_1126d13c0;
    _objc_alloc(PTR_PTR_1126d13c0);
    uStack_98 = puVar1[0xe];
    uStack_90 = puVar1[0xf];
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfffe20(param_3,param_4,puVar2);
    func_0x00010befafa0(uVar5);
    _objc_release(puVar2);
    _objc_release(puVar3);
    puVar2 = PTR__kCMTimeInvalid_110348648;
    uVar5 = *(undefined8 *)PTR__kCMTimeInvalid_110348648;
    puVar1[0x18] = *(undefined8 *)(PTR__kCMTimeInvalid_110348648 + 8);
    puVar1[0x17] = uVar5;
    puVar1[0x19] = *(undefined8 *)(puVar2 + 0x10);
    _objc_release(puStack_d0);
    param_7 = uStack_b0;
    param_8 = uStack_b8;
  }
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  uVar5 = param_7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return puVar1;
  }
  ___stack_chk_fail();
  puVar1 = &uStack_110;
  pcStack_e8 = FUN_106be5bdc;
  uStack_100 = param_8;
  uStack_f8 = param_7;
  puStack_f0 = &stack0xfffffffffffffff0;
  func_0x00010bddfa00();
  puStack_108 = PTR_PTR_1126f5980;
  uStack_110 = uVar5;
  _objc_msgSendSuper2(&uStack_110,PTR_s_dealloc_112525b20);
  return puVar1;
}



/* Entry: 106be5bdc; end: 106be5c1f; -[SCSpectaclesBoomboxVideoPlaybackSession dealloc] */

void FUN_106be5bdc(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010bddfa00();
  puStack_28 = PTR_PTR_1126f5980;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106be5c20; end: 106be5df7; -[SCSpectaclesBoomboxVideoPlaybackSession startRunning] */

void FUN_106be5c20(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x00010be79560();
  func_0x00010c1ca6a0(*(undefined8 *)(param_1 + 0x28));
  _objc_initWeak(auStack_58,param_1);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uVar4 = *(undefined8 *)(param_1 + 0xd0);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_106be5df8;
  puStack_68 = &UNK_11086ffc8;
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010c0e0780(uVar4);
  puStack_a8 = puVar1;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_106be5ec4;
  puStack_90 = &UNK_1108434b0;
  _objc_copyWeak(auStack_88,auStack_58);
  ppuVar2 = &puStack_a8;
  _objc_retainBlock();
  lVar3 = *(long *)(param_1 + 0x30);
  func_0x00010c252d60();
  if (lVar3 == 1) {
    (*(code *)ppuVar2[2])(ppuVar2);
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0xd0);
    _objc_copyWeak(auStack_b0,auStack_58);
    _objc_retain(ppuVar2);
    func_0x00010c0e0780(uVar4);
    _objc_release(ppuVar2);
    _objc_destroyWeak(auStack_b0);
  }
  _objc_release(ppuVar2);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 106be5df8; end: 106be5ec3;  */

void FUN_106be5df8(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  
  _objc_retain(param_4);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar2 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    _objc_opt_class(PTR__OBJC_CLASS___NSError_1126ae858);
    uVar4 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar3);
    uVar1 = uVar2;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar2);
    lVar5 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c100160();
    _objc_release(uVar1);
    _objc_release(lVar5);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106be5ec4; end: 106be5f13;  */

void FUN_106be5ec4(long param_1,undefined8 param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be75160(param_1);
    func_0x00010c0fe6a0((float)*(double *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x28));
    func_0x00010c1d9980(*(undefined8 *)(param_1 + 0x40),param_2,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106be5f14; end: 106be5fe3;  */

void FUN_106be5f14(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  _objc_retain(param_4);
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    uVar3 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar5 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar4);
    uVar1 = uVar3;
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar3);
    if ((uVar1 != 0) && (func_0x00010c067ec0(), (int)uVar3 == 1)) {
      func_0x000100162d98("APPSTORE",*(undefined8 *)(param_1 + 0x20));
    }
    _objc_release(uVar1);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106be5fe4; end: 106be6017; -[SCSpectaclesBoomboxVideoPlaybackSession reset] */

void FUN_106be5fe4(long param_1,undefined8 param_2)

{
  func_0x00010c1d9980(*(undefined8 *)(param_1 + 0x40),param_2,1);
  func_0x00010be75160(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c0f5b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x28),PTR_s_pause_11261b0e8);
  return;
}



/* Entry: 106be6018; end: 106be6097; -[SCSpectaclesBoomboxVideoPlaybackSession fastReverse] */

void FUN_106be6018(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf5f0a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf2d0c0();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    uVar3 = 0x40000000;
    if (*(char *)(param_1 + 0x11) == '\0') {
      uVar3 = 0xc0000000;
    }
    func_0x00010c1e7640(uVar3,*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010c1ca6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x28),PTR_s_setMuted__1126503d0,1);
    return;
  }
  return;
}



/* Entry: 106be6098; end: 106be6147; -[SCSpectaclesBoomboxVideoPlaybackSession stopRunning] */

void FUN_106be6098(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010bddf0c0();
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d560();
  _objc_release(puVar1);
  func_0x00010c281b20(*(undefined8 *)(param_1 + 0xd0));
  func_0x00010c12d760(*(undefined8 *)(param_1 + 0x30));
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  _objc_release(uVar2);
  func_0x00010c1e7640(0,*(undefined8 *)(param_1 + 0x28));
  func_0x00010c130d60(*(undefined8 *)(param_1 + 0x28));
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  _objc_release(uVar2);
  _CVPixelBufferRelease(*(undefined8 *)(param_1 + 0xb0));
  puVar1 = PTR__kCMTimeInvalid_110348648;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  uVar2 = *(undefined8 *)puVar1;
  *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(puVar1 + 8);
  *(undefined8 *)(param_1 + 0xb8) = uVar2;
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(puVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bddfa10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__cleanupResources_112555820);
  return;
}



/* Entry: 106be6148; end: 106be62e3; -[SCSpectaclesBoomboxVideoPlaybackSession _cleanupResources] */

void FUN_106be6148(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126d13a0;
  _objc_alloc(PTR_PTR_1126d13a0);
  func_0x00010bfffdc0();
  func_0x00010befafa0(uVar4);
  _objc_release(puVar1);
  uVar4 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126d13a0;
  _objc_alloc(PTR_PTR_1126d13a0);
  func_0x00010bfffdc0();
  func_0x00010befafa0(uVar4);
  _objc_release(puVar1);
  uVar4 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126d13a0;
  _objc_alloc(PTR_PTR_1126d13a0);
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfffdc0(puVar1);
  func_0x00010befafa0(uVar4);
  _objc_release(puVar1);
  _objc_release(puVar2);
  uVar4 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126d13a8;
  _objc_opt_new(PTR_PTR_1126d13a8);
  func_0x00010befafa0(uVar4);
  _objc_release(puVar1);
  uVar4 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126d13b0;
  _objc_alloc(PTR_PTR_1126d13b0);
  func_0x00010c03e200();
  func_0x00010befafa0(uVar4);
  _objc_release(puVar1);
  uVar4 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126d13b0;
  _objc_alloc();
  func_0x00010c03e200();
  func_0x00010befafa0(uVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c1d9980(*(undefined8 *)(puVar1 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010c0f5b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(puVar1 + 0x28),PTR_s_pause_11261b0e8);
  return;
}



/* Entry: 106be62e4; end: 106be630f; -[SCSpectaclesBoomboxVideoPlaybackSession _applicationWillResignActive:] */

void FUN_106be62e4(long param_1,undefined8 param_2)

{
  func_0x00010c1d9980(*(undefined8 *)(param_1 + 0x40),param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010c0f5b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x28),PTR_s_pause_11261b0e8);
  return;
}



/* Entry: 106be6310; end: 106be635f; -[SCSpectaclesBoomboxVideoPlaybackSession _applicationDidBecomeActive:] */

void FUN_106be6310(long param_1,undefined8 param_2)

{
  long lVar1;
  
  func_0x00010c1d9980(*(undefined8 *)(param_1 + 0x40),param_2,0);
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c252d60();
  if (lVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010c0fe6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              ((float)*(double *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x28),
               PTR_s_playImmediatelyAtRate__11261d3c8);
    return;
  }
  return;
}



/* Entry: 106be6360; end: 106be647b; -[SCSpectaclesBoomboxVideoPlaybackSession _playerItemDidPlayToEndTime:] */

void FUN_106be6360(float param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  func_0x00010c0dfc60();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = *(long *)(param_2 + 0x28);
  func_0x00010bf5f0a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(param_4);
  if (param_4 != lVar1) {
    return;
  }
  if ((*(byte *)(param_2 + 0x11) & 1) == 0) {
    func_0x00010c11fdc0(*(undefined8 *)(param_2 + 0x28));
    if (param_1 == -2.0) goto LAB_106be63f4;
    if (*(char *)(param_2 + 0x11) == '\x01') goto LAB_106be63c8;
  }
  else {
LAB_106be63c8:
    func_0x00010c11fdc0(*(undefined8 *)(param_2 + 0x28));
    if (param_1 == 2.0) {
LAB_106be63f4:
      func_0x00010c137fe0(param_2);
      param_2 = param_2 + 0xd8;
      _objc_loadWeakRetained(param_2);
      goto LAB_106be6410;
    }
  }
  func_0x00010c11fdc0(*(undefined8 *)(param_2 + 0x28));
  if (param_1 == 0.0) {
    return;
  }
  if (*(char *)(param_2 + 0x10) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010be75170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__playerSeekToBeginning_11257adf8);
    return;
  }
  param_2 = param_2 + 0xd8;
  _objc_loadWeakRetained(param_2);
LAB_106be6410:
  func_0x00010c100140();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106be647c; end: 106be647f; -[SCSpectaclesBoomboxVideoPlaybackSession _onReceiveStopNotification:] */

void FUN_106be647c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2568b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_stopRunning_112673450);
  return;
}



/* Entry: 106be6480; end: 106be6683; -[SCSpectaclesBoomboxVideoPlaybackSession _prepareToPlay] */

/* WARNING: Possible PIC construction at 0x000106be64b8: Changing call to branch */

void FUN_106be6480(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x38) != 0) {
    return;
  }
  if (*(long *)(param_1 + 0x40) == 0) {
    puVar1 = PTR__OBJC_CLASS___CADisplayLink_1126b94a8;
    func_0x00010bf85b60(PTR__OBJC_CLASS___CADisplayLink_1126b94a8,param_2,param_1,
                        PTR_s__displayLinkCallback__11252f528);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    *(undefined **)(param_1 + 0x40) = puVar1;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    puVar1 = PTR__OBJC_CLASS___NSRunLoop_1126b94b0;
    func_0x00010bf5fe80(PTR__OBJC_CLASS___NSRunLoop_1126b94b0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befc2c0(uVar2);
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___AVPlayerItem_1126c1cb0;
    func_0x00010c100be0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    *(undefined **)(param_1 + 0x30) = puVar1;
    _objc_release(uVar2);
    if (*(long *)(param_1 + 0x30) != 0) {
      func_0x00010be8afa0(param_1);
      func_0x00010befa4c0(*(undefined8 *)(param_1 + 0x30));
      func_0x00010c130d60(*(undefined8 *)(param_1 + 0x28));
      puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
      func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa240();
      _objc_release(puVar1);
      puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
      func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa240();
      _objc_release(puVar1);
      puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
      func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa240();
      _objc_release(puVar1);
      puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
      func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa240();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar1);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bddf0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__cleanUpDisplayLink_1125555d0);
  return;
}



/* Entry: 106be6684; end: 106be66bb; -[SCSpectaclesBoomboxVideoPlaybackSession _cleanUpDisplayLink] */

void FUN_106be6684(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c069d00(*(undefined8 *)(param_1 + 0x40));
  func_0x00010c1d9980(*(undefined8 *)(param_1 + 0x40),param_2,1);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106be66bc; end: 106be6797; -[SCSpectaclesBoomboxVideoPlaybackSession _remakeVideoOutput] */

void FUN_106be66bc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___AVPlayerItemVideoOutput_1126d13c8;
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0361e0();
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  *(undefined **)(param_1 + 0x38) = puVar1;
  _objc_release(uVar5);
  _objc_release(puVar2);
  lVar3 = *(long *)(param_1 + 0x38);
  func_0x00010c2102a0();
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined1 *)(param_1 + 0xa0) = 0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  *(double *)(lVar3 + 0x90) = *(double *)(lVar3 + 0x90) + 0.1;
  func_0x00010c12d760(*(undefined8 *)(lVar3 + 0x30));
  func_0x00010be8afa0(lVar3);
  lVar4 = *(long *)(lVar3 + 0x30);
  func_0x00010c252d60();
  if (lVar4 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010befa4d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(lVar3 + 0x30),PTR_s_addOutput__11259c2d8,
               *(undefined8 *)(lVar3 + 0x38));
    return;
  }
  return;
}



/* Entry: 106be6798; end: 106be67fb; -[SCSpectaclesBoomboxVideoPlaybackSession _tryRemakeOutput] */

void FUN_106be6798(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(double *)(param_1 + 0x90) = *(double *)(param_1 + 0x90) + 0.1;
  func_0x00010c12d760(*(undefined8 *)(param_1 + 0x30),param_2,*(undefined8 *)(param_1 + 0x38));
  func_0x00010be8afa0(param_1);
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010c252d60();
  if (lVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010befa4d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x30),PTR_s_addOutput__11259c2d8,
               *(undefined8 *)(param_1 + 0x38));
    return;
  }
  return;
}



/* Entry: 106be67fc; end: 106be6d7f; -[SCSpectaclesBoomboxVideoPlaybackSession _displayLinkCallback:] */

void FUN_106be67fc(double param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined1 uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puVar11;
  float fVar12;
  double dVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined *puStack_190;
  undefined8 uStack_188;
  code *pcStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined1 auStack_168 [8];
  undefined1 uStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  long lStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  lVar2 = *(long *)(param_2 + 0x30);
  func_0x00010c252d60();
  if (lVar2 != 1) goto LAB_106be6d38;
  uVar1 = *(undefined1 *)(param_2 + 0xa0);
  func_0x00010c2709c0(param_4);
  dVar13 = param_1;
  func_0x00010bf8b160(param_4);
  param_1 = param_1 + dVar13;
  if (*(double *)(param_2 + 0x98) == 0.0) {
    *(double *)(param_2 + 0x98) = param_1;
  }
  lVar2 = *(long *)(param_2 + 0x88);
  _dispatch_semaphore_wait(lVar2,0);
  if (lVar2 != 0) goto LAB_106be6d38;
  if (*(long *)(param_2 + 0x38) == 0) {
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    uVar3 = 0;
  }
  else {
    func_0x00010c084bc0(&uStack_a8,param_1);
    uVar3 = *(ulong *)(param_2 + 0x38);
  }
  uStack_128 = uStack_a0;
  uStack_130 = uStack_a8;
  uStack_120 = uStack_98;
  uVar9 = uStack_a8;
  func_0x00010bfd96e0();
  fVar12 = (float)uVar9;
  if ((uVar3 & 1) == 0) {
    if ((*(byte *)(param_2 + 0xa0) & 1) != 0) {
      func_0x00010c11fdc0(*(undefined8 *)(param_2 + 0x28));
      if ((fVar12 != 0.0) &&
         (lVar2 = *(long *)(param_2 + 0xa8), *(long *)(param_2 + 0xa8) = lVar2 + 1, 0x1d < lVar2)) {
        func_0x00010bed0420(param_2);
      }
      goto LAB_106be68d0;
    }
    if (*(double *)(param_2 + 0x90) < param_1 - *(double *)(param_2 + 0x98)) {
      func_0x00010bed0420(param_2);
    }
  }
  else {
    *(undefined8 *)(param_2 + 0xa8) = 0;
LAB_106be68d0:
    uStack_b8 = *(undefined8 *)(PTR__kCMTimeInvalid_110348648 + 8);
    uStack_c0 = *(undefined8 *)PTR__kCMTimeInvalid_110348648;
    uStack_b0 = *(undefined8 *)(PTR__kCMTimeInvalid_110348648 + 0x10);
    lVar2 = *(long *)(param_2 + 0x38);
    uStack_128 = uStack_a0;
    uStack_130 = uStack_a8;
    uStack_120 = uStack_98;
    uVar9 = uStack_a8;
    func_0x00010bf52140();
    fVar12 = (float)uVar9;
    if (lVar2 != 0) {
      _CVPixelBufferRelease(*(undefined8 *)(param_2 + 0xb0));
      lVar5 = lVar2;
      _CVPixelBufferRetain();
      *(long *)(param_2 + 0xb0) = lVar5;
      *(undefined8 *)(param_2 + 0xc0) = uStack_b8;
      *(undefined8 *)(param_2 + 0xb8) = uStack_c0;
      *(undefined8 *)(param_2 + 200) = uStack_b0;
LAB_106be6934:
      if ((*(byte *)(param_2 + 0xa0) & 1) == 0) {
        *(undefined1 *)(param_2 + 0xa0) = 1;
        *(undefined8 *)(param_2 + 0x90) = 0x3fc999999999999a;
      }
      _dispatch_group_create();
      lVar4 = lVar5;
      _objc_autoreleasePoolPush();
      _dispatch_group_enter(lVar5);
      uVar9 = *(undefined8 *)(param_2 + 0x80);
      lVar10 = *(long *)(param_2 + 0x70);
      if (lVar10 == 0) {
        puVar11 = (undefined *)0x0;
      }
      else {
        puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
        lStack_88 = lVar10;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
      }
      puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010bf1c920();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = param_2;
      _objc_opt_class();
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_e0 = 0xc2000000;
      pcStack_d8 = FUN_106be6d80;
      puStack_d0 = &UNK_110966ff0;
      _objc_retain(lVar5);
      uStack_f8 = uStack_b8;
      uStack_100 = uStack_c0;
      uStack_f0 = uStack_b0;
      uVar16 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
      uVar14 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
      uVar19 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
      uVar18 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
      uVar17 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
      uVar15 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
      uStack_130 = uVar14;
      uStack_128 = uVar16;
      uStack_120 = uVar18;
      uStack_118 = uVar19;
      uStack_110 = uVar15;
      uStack_108 = uVar17;
      lStack_c8 = lVar5;
      func_0x00010c29ab00(uVar9);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar7);
      _objc_release(puVar6);
      if (lVar10 != 0) {
        _objc_release(puVar11);
      }
      func_0x00010befafa0(*(undefined8 *)(param_2 + 8));
      _dispatch_group_enter(lVar5);
      lVar10 = *(long *)(param_2 + 0x78);
      uVar8 = *(undefined8 *)(param_2 + 0x80);
      if (lVar10 == 0) {
        puVar11 = (undefined *)0x0;
      }
      else {
        puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
        lStack_90 = lVar10;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
      }
      puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010bf1c920();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = param_2;
      _objc_opt_class();
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      puStack_158 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_150 = 0xc2000000;
      uStack_148 = 0x106be6d88;
      puStack_140 = &UNK_110966ff0;
      _objc_retain(lVar5);
      uStack_f8 = uStack_b8;
      uStack_100 = uStack_c0;
      uStack_f0 = uStack_b0;
      lStack_138 = lVar5;
      uStack_130 = uVar14;
      uStack_128 = uVar16;
      uStack_120 = uVar18;
      uStack_118 = uVar19;
      uStack_110 = uVar15;
      uStack_108 = uVar17;
      func_0x00010c29ab00(uVar8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar9);
      _objc_release(lVar7);
      _objc_release(puVar6);
      if (lVar10 != 0) {
        _objc_release(puVar11);
      }
      func_0x00010befafa0(*(undefined8 *)(param_2 + 8));
      _objc_release(lStack_138);
      _objc_release(uVar8);
      _objc_release(lStack_c8);
      _objc_autoreleasePoolPop(lVar4);
      _CVPixelBufferRelease(lVar2);
      uVar9 = *(undefined8 *)(param_2 + 0x88);
      _objc_retain(uVar9);
      _objc_initWeak(&uStack_130,param_2);
      puStack_190 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_188 = 0xc2000000;
      pcStack_180 = FUN_106be6d90;
      puStack_178 = &UNK_1108488f8;
      uStack_170 = uVar9;
      _objc_retain(uVar9);
      _objc_copyWeak(auStack_168,&uStack_130);
      uStack_160 = uVar1;
      func_0x000100bc0718(lVar5,PTR___dispatch_main_q_11034be20,&puStack_190);
      _objc_destroyWeak(auStack_168);
      _objc_release(uStack_170);
      _objc_release(uVar9);
      _objc_destroyWeak(&uStack_130);
      _objc_release(lVar5);
      goto LAB_106be6d38;
    }
    func_0x00010c11fdc0(*(undefined8 *)(param_2 + 0x28));
    if (fVar12 == 0.0) {
      lVar5 = *(long *)(param_2 + 0xb0);
      _CVPixelBufferRetain();
      uStack_b8 = *(undefined8 *)(param_2 + 0xc0);
      uStack_c0 = *(undefined8 *)(param_2 + 0xb8);
      uStack_b0 = *(undefined8 *)(param_2 + 200);
      lVar2 = lVar5;
      if (lVar5 != 0) goto LAB_106be6934;
    }
  }
  _dispatch_semaphore_signal(*(undefined8 *)(param_2 + 0x88));
LAB_106be6d38:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_4 + 0x20));
  return;
}



/* Entry: 106be6d80; end: 106be6d8f;  */

void FUN_106be6d80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 106be6d90; end: 106be6df7;  */

void FUN_106be6d90(long param_1)

{
  long lVar1;
  long lVar2;
  
  _dispatch_semaphore_signal(*(undefined8 *)(param_1 + 0x20));
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (((lVar1 != 0) && ((*(byte *)(param_1 + 0x30) & 1) == 0)) &&
     (*(char *)(lVar1 + 0xa0) == '\x01')) {
    lVar2 = lVar1 + 0xd8;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c100180();
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106be6df8; end: 106be6e93; -[SCSpectaclesBoomboxVideoPlaybackSession _playerSeekToBeginning] */

void FUN_106be6df8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0x11) == '\x01') {
    lVar1 = *(long *)(param_1 + 0x30);
    func_0x00010bf0af00();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      uStack_40 = 0;
      uStack_38 = 0;
      uStack_30 = 0;
    }
    else {
      func_0x00010bf8b160(&uStack_40,lVar1);
    }
    func_0x00010c157260(uVar2,param_2,&uStack_40);
    _objc_release(lVar1);
  }
  else {
    uStack_38 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    uStack_40 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    uStack_30 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    func_0x00010c157260(uVar2,param_2,&uStack_40);
  }
  return;
}



/* Entry: 106be6e94; end: 106be6eab; -[SCSpectaclesBoomboxVideoPlaybackSession delegate] */

void FUN_106be6e94(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xd8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106be6eac; end: 106be6eb7; -[SCSpectaclesBoomboxVideoPlaybackSession setDelegate:] */

void FUN_106be6eac(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xd8,param_3);
  return;
}



/* Entry: 106be6eb8; end: 106be6f8b; -[SCSpectaclesBoomboxVideoPlaybackSession .cxx_destruct] */

void FUN_106be6eb8(long param_1)

{
  _objc_destroyWeak(param_1 + 0xd8);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106be6f8c; end: 106be702f; -[SCSpectaclesBoomboxData initWithSnap:entry:] */

undefined1 *
FUN_106be6f8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f5988;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106be7030; end: 106be7037; -[SCSpectaclesBoomboxData snap] */

undefined8 FUN_106be7030(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106be7038; end: 106be703f; -[SCSpectaclesBoomboxData entry] */

undefined8 FUN_106be7038(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106be7040; end: 106be706f; -[SCSpectaclesBoomboxData .cxx_destruct] */

void FUN_106be7040(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106be7070; end: 106be744f; -[SCSpectaclesBoomboxViewController initWithUserSession:mergedDataSource:encryptedContentManager:cloudFS:memoriesLogger:spectaclesServices:entries:snaps:initialSnap:viewSource:auxiliaryContentServices:memoriesCachingMediaHelper:memoriesTrackingImageProcessCommandScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_106be7070(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined4 param_13,undefined4 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  puStack_68 = PTR_PTR_1126f5990;
  puVar1 = &uStack_70;
  uStack_70 = param_2;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  if (puVar1 != (undefined8 *)0x0) {
    lVar6 = (long)_DAT_11275a748;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_4;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_11275a74c;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_5;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_11275a750;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_6;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_11275a754;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_7;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_11275a758;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_10;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_11275a75c;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_11;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_11275a760;
    _objc_retain(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_12;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_11275a764;
    _objc_retain(param_15);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_15;
    _objc_release(uVar2);
    func_0x00010c219b20(puVar1);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11275a768);
    *(undefined **)((long)puVar1 + (long)_DAT_11275a768) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126d13d0;
    _objc_alloc();
    uVar2 = param_9;
    func_0x00010bf027a0(param_9);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_9;
    func_0x00010c249020(param_9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04aec0();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_11275a76c);
    *(undefined **)((long)puVar1 + (long)_DAT_11275a76c) = puVar3;
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11275a770) = 0;
    puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf21200();
    *(undefined8 *)((long)puVar1 + (long)_DAT_11275a774) = param_1;
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126c9e68;
    _objc_alloc();
    func_0x00010c037060();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11275a778);
    *(undefined **)((long)puVar1 + (long)_DAT_11275a778) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126c1838;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11275a77c);
    *(undefined **)((long)puVar1 + (long)_DAT_11275a77c) = puVar3;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_11275a780;
    _objc_retain(param_16);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_16;
    _objc_release(uVar2);
    _objc_storeWeak((long)puVar1 + (long)_DAT_11275a784,param_17);
  }
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 106be7450; end: 106be7857; -[SCSpectaclesBoomboxViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106be7450(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lStack_70;
  undefined *puStack_68;
  
  puStack_68 = PTR_PTR_1126f5990;
  lStack_70 = param_1;
  _objc_msgSendSuper2(&lStack_70,PTR_s_viewDidLoad_112684cd8);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(lVar5);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18;
  _objc_alloc_init(PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18);
  func_0x00010c1f7ac0();
  func_0x00010c1c8300(0,puVar1);
  func_0x00010c1c82c0(0,puVar1);
  puVar2 = PTR__OBJC_CLASS___UICollectionView_1126afd20;
  _objc_alloc();
  func_0x00010c014040(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar6 = (long)_DAT_11275a788;
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  *(undefined **)(param_1 + lVar6) = puVar2;
  _objc_release(uVar4);
  func_0x00010c181fc0(*(undefined8 *)(param_1 + lVar6));
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar6));
  _objc_release(puVar2);
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  _objc_opt_class(PTR_PTR_1126d13d8);
  puVar2 = PTR_PTR_1126d13d8;
  _objc_opt_class(PTR_PTR_1126d13d8);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c126000(uVar4);
  _objc_release(puVar2);
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  _objc_opt_class(PTR_PTR_1126d13e0);
  puVar2 = PTR_PTR_1126d13e0;
  _objc_opt_class(PTR_PTR_1126d13e0);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c126000(uVar4);
  _objc_release(puVar2);
  func_0x00010c189840(*(undefined8 *)(param_1 + lVar6));
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar6));
  func_0x00010c1d8be0(*(undefined8 *)(param_1 + lVar6));
  func_0x00010c2025c0(*(undefined8 *)(param_1 + lVar6));
  lVar5 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar5);
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar6));
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIButton_1126aec48;
  func_0x00010bf25cc0(PTR__OBJC_CLASS___UIButton_1126aec48);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9fc0(puVar2);
  _objc_release(puVar3);
  func_0x00010befbd60(puVar2);
  lVar5 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar5);
  func_0x00010c0bbfc0(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc();
  func_0x00010c050900();
  lVar5 = (long)_DAT_11275a78c;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar3;
  _objc_release(uVar4);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar5));
  lVar5 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9040();
  _objc_release(lVar5);
  puVar3 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
  _objc_alloc();
  func_0x00010c050900();
  lVar5 = (long)_DAT_11275a790;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar3;
  _objc_release(uVar4);
  func_0x00010c1c8340(0x3ff0000000000000,*(undefined8 *)(param_1 + lVar5));
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar5));
  lVar5 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9040();
  _objc_release(lVar5);
  func_0x00010be4e7a0(param_1);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 106be7858; end: 106be78df;  */

void FUN_106be7858(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010bf8c100();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106be78e0; end: 106be7a17;  */

void FUN_106be78e0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar3 + 0x10))(lVar3,uVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c23d0a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c2971c0(0x404e000000000000,0x404e000000000000,PTR__OBJC_CLASS___NSValue_1126afdf8);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106be7a18; end: 106be7acb; -[SCSpectaclesBoomboxViewController viewWillAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106be7a18(long param_1)

{
  undefined *puVar1;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f5990;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewWillAppear__1126853f0);
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173c60(0x3ff0000000000000);
  _objc_release(puVar1);
  func_0x00010c1a9bc0(*(undefined8 *)(param_1 + _DAT_11275a77c));
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14dc40();
  _objc_release(puVar1);
  return;
}



/* Entry: 106be7acc; end: 106be7b6f; -[SCSpectaclesBoomboxViewController viewWillDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106be7acc(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126f5990;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_viewWillDisappear__112685438);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11275a774);
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173c60(uVar2);
  _objc_release(puVar1);
  func_0x00010c1a9bc0(*(undefined8 *)(param_1 + _DAT_11275a77c));
  func_0x00010bf953c0(*(undefined8 *)(param_1 + _DAT_11275a76c));
  return;
}



/* Entry: 106be7b70; end: 106be7bb3; -[SCSpectaclesBoomboxViewController dealloc] */

void FUN_106be7b70(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010bec36e0();
  puStack_28 = PTR_PTR_1126f5990;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106be7bb4; end: 106be7bbb; -[SCSpectaclesBoomboxViewController prefersHomeIndicatorAutoHidden] */

undefined8 FUN_106be7bb4(void)

{
  return 1;
}



/* Entry: 106be7bbc; end: 106be7bc3; -[SCSpectaclesBoomboxViewController shouldDismissViewControllerWhenEnterBackground] */

undefined8 FUN_106be7bbc(void)

{
  return 1;
}



/* Entry: 106be7bc4; end: 106be7ca3; -[SCSpectaclesBoomboxViewController _fetchSnaps:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106be7bc4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11275a768);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106be7ca4; end: 106be80e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_106be7ca4(long param_1,undefined **param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined *puVar14;
  undefined *puStack_240;
  undefined8 uStack_238;
  code *pcStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  long *plStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long *plStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar10 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    _objc_opt_new();
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1b8 = 0;
    plStack_1c0 = (long *)0x0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    lVar13 = *(long *)(lVar10 + _DAT_11275a758);
    _objc_retain(lVar13);
    lVar4 = lVar13;
    func_0x00010bf52a60();
    if (lVar4 != 0) {
      lVar11 = *plStack_1c0;
      do {
        lVar9 = 0;
        puVar5 = puVar1;
        do {
          if (*plStack_1c0 != lVar11) {
            _objc_enumerationMutation(lVar13);
          }
          uVar3 = *(undefined8 *)(lVar10 + _DAT_11275a74c);
          func_0x00010c269d40(uVar3);
          _objc_retainAutoreleasedReturnValue();
          uVar12 = uVar3;
          func_0x00010bfa7340();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar3);
          puVar1 = puVar5;
          func_0x00010bf09f80();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar5);
          _objc_release(uVar12);
          lVar9 = lVar9 + 1;
          puVar5 = puVar1;
        } while (lVar4 != lVar9);
        lVar4 = lVar13;
        func_0x00010bf52a60();
      } while (lVar4 != 0);
    }
    _objc_release(lVar13);
    lVar4 = *(long *)(lVar10 + _DAT_11275a75c);
    func_0x00010bf529e0();
    puVar5 = puVar1;
    if (lVar4 != 0) {
      func_0x00010bf09f80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
    }
    puVar1 = puVar5;
    func_0x00010c14cca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    uStack_1e8 = 0;
    uStack_1f0 = 0;
    uStack_1d8 = 0;
    uStack_1e0 = 0;
    uStack_208 = 0;
    uStack_210 = 0;
    uStack_1f8 = 0;
    plStack_200 = (long *)0x0;
    _objc_retain(puVar1);
    puVar5 = puVar1;
    func_0x00010bf52a60();
    if (puVar5 != (undefined *)0x0) {
      lVar4 = *plStack_200;
      do {
        puVar14 = (undefined *)0x0;
        do {
          if (*plStack_200 != lVar4) {
            _objc_enumerationMutation(puVar1);
          }
          uVar3 = *(undefined8 *)(lVar10 + _DAT_11275a74c);
          func_0x00010c269d40(uVar3);
          _objc_retainAutoreleasedReturnValue();
          uVar12 = uVar3;
          func_0x00010bfa7040();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar3);
          puVar6 = PTR_PTR_1126d13e8;
          _objc_alloc(PTR_PTR_1126d13e8);
          func_0x00010c046f40();
          func_0x00010befa120(puVar2);
          _objc_release(puVar6);
          _objc_release(uVar12);
          puVar14 = puVar14 + 1;
        } while (puVar5 != puVar14);
        puVar5 = puVar1;
        func_0x00010bf52a60();
      } while (puVar5 != (undefined *)0x0);
    }
    _objc_release(puVar1);
    puVar5 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
    func_0x00010c246960();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
    puStack_188 = puVar5;
    func_0x00010c246960();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
    puStack_180 = puVar14;
    func_0x00010c246960();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_178 = puVar6;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c246bc0(puVar2);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar14);
    _objc_release(puVar5);
    puStack_240 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_238 = 0xc2000000;
    pcStack_230 = FUN_106be80f0;
    puStack_228 = &UNK_11084aaa8;
    uVar12 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar12);
    puStack_220 = puVar2;
    uStack_218 = uVar12;
    _objc_retain(puVar2);
    param_2 = &puStack_240;
    func_0x000100162d98("APPSTORE");
    _objc_release(puStack_220);
    _objc_release(uStack_218);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  _objc_release(lVar10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return lVar10;
  }
  ___stack_chk_fail();
  _objc_retain();
  ppuVar8 = param_2;
  func_0x00010c0e0160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar10 = 0;
  if (ppuVar8 != (undefined **)0x0) {
    ppuVar8 = param_2;
    func_0x00010c080ca0();
    if ((((((ulong)ppuVar8 & 1) == 0) &&
         (ppuVar8 = param_2, func_0x00010b5fa5d4(), (int)ppuVar8 != 0)) &&
        ((ppuVar8 = param_2, func_0x00010b5fa088(), (undefined **)0xc < ppuVar8 ||
         (((1L << ((ulong)ppuVar8 & 0x3f) & 0x187fU) == 0 &&
          ((1L << ((ulong)ppuVar8 & 0x3f) & 0x600U) == 0)))))) && (ppuVar8 != (undefined **)0x270f))
    {
      lVar10 = 1;
    }
    else {
      lVar10 = 0;
    }
  }
  _objc_release(param_2);
  return lVar10;
}



/* Entry: 106be80e8; end: 106be80ef;  */

undefined8 FUN_106be80e8(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain();
  uVar1 = param_2;
  func_0x00010c0e0160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar1 = param_2;
    func_0x00010c080ca0();
    if (((((uVar1 & 1) == 0) && (uVar1 = param_2, func_0x00010b5fa5d4(), (int)uVar1 != 0)) &&
        ((uVar1 = param_2, func_0x00010b5fa088(), 0xc < uVar1 ||
         (((1L << (uVar1 & 0x3f) & 0x187fU) == 0 && ((1L << (uVar1 & 0x3f) & 0x600U) == 0)))))) &&
       (uVar1 != 9999)) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 106be80f0; end: 106be8127;  */

void FUN_106be80f0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010bf51e00(uVar2);
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106be8128; end: 106be81cb; -[SCSpectaclesBoomboxViewController _loadSnaps] */

void FUN_106be8128(undefined8 param_1)

{
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010be144c0(param_1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106be81cc; end: 106be8243;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106be81cc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar2 = (long)_DAT_11275a794;
    _objc_retain(param_2);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = param_2;
    _objc_release(uVar1);
    func_0x00010c128b60(*(undefined8 *)(param_1 + _DAT_11275a788));
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106be8244; end: 106be8297; -[SCSpectaclesBoomboxViewController hasFullyVisibleCell] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106be8244(double param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11275a788;
  func_0x00010bf4cdc0(*(undefined8 *)(param_4 + lVar1));
  func_0x00010bfb68e0(*(undefined8 *)(param_4 + lVar1));
  _fmod(param_1,param_3);
  return param_1 == 0.0;
}



/* Entry: 106be8298; end: 106be82a7; -[SCSpectaclesBoomboxViewController collectionView:numberOfItemsInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106be8298(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11275a794),PTR_s_count_1125b2420);
  return;
}



/* Entry: 106be82a8; end: 106be844f; -[SCSpectaclesBoomboxViewController collectionView:cellForItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106be82a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  
  lVar12 = (long)_DAT_11275a794;
  lVar5 = *(long *)(param_1 + lVar12);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_4;
  func_0x00010c0840e0(param_4);
  func_0x00010c0dfd40(lVar5,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar5;
  func_0x00010c23f220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  lVar5 = lVar2;
  func_0x00010b5fa088();
  if (lVar5 - 1U < 0xc) {
    ppuVar4 = (undefined **)(&PTR_PTR_1109670a0)[lVar5 - 1U];
  }
  else {
    ppuVar4 = &PTR_PTR_1126d13e0;
  }
  puVar3 = *ppuVar4;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf6e0c0(param_3,param_2,puVar3,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  uVar7 = *(undefined8 *)(param_1 + _DAT_11275a748);
  uVar8 = *(undefined8 *)(param_1 + _DAT_11275a74c);
  uVar10 = *(undefined8 *)(param_1 + _DAT_11275a750);
  uVar11 = *(undefined8 *)(param_1 + _DAT_11275a754);
  lVar12 = *(long *)(param_1 + lVar12);
  func_0x00010bf529e0(lVar12);
  uVar6 = *(undefined8 *)(param_1 + _DAT_11275a764);
  uVar9 = *(undefined8 *)(param_1 + _DAT_11275a780);
  lVar5 = param_1 + _DAT_11275a784;
  _objc_loadWeakRetained();
  func_0x00010c228620(uVar1,param_2,lVar2,uVar7,uVar8,uVar10,uVar11,lVar12 == 1,param_1,uVar6,uVar9,
                      lVar5);
  _objc_release(lVar5);
  _objc_release(puVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106be8450; end: 106be8577; -[SCSpectaclesBoomboxViewController _scrollToInitialSnapIfNeeded:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106be8450(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_11275a760;
  if (*(long *)(param_1 + lVar3) == 0) {
    uVar1 = 0;
  }
  else {
    puStack_48 = &uStack_50;
    uStack_50 = 0;
    uStack_40 = 0x2020000000;
    uStack_38 = 0x7fffffffffffffff;
    func_0x00010bf97e80(*(undefined8 *)(param_1 + _DAT_11275a794));
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    *(undefined8 *)(param_1 + lVar3) = 0;
    _objc_release(uVar1);
    lVar3 = puStack_48[3];
    if ((lVar3 == 0x7fffffffffffffff) || (lVar2 = param_3, func_0x00010c0840e0(), lVar3 == lVar2)) {
      uVar1 = 0;
    }
    else {
      func_0x00010be614c0(param_1);
      uVar1 = 1;
    }
    __Block_object_dispose(&uStack_50,8);
  }
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 106be8578; end: 106be8637;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106be8578(long param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010c23f220();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11275a760);
  func_0x00010c241220(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_2);
  if ((int)uVar3 != 0) {
    *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = param_3;
    *param_4 = 1;
  }
  return;
}



/* Entry: 106be8638; end: 106be8897; -[SCSpectaclesBoomboxViewController collectionView:willDisplayCell:forItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106be8638(double param_1,undefined8 param_2,double param_3,ulong param_4,undefined8 param_5
                  ,undefined8 param_6,ulong param_7,undefined8 param_8)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  uVar1 = param_4;
  func_0x00010be9c0e0();
  puVar2 = PTR_PTR_1126d13f0;
  if ((uVar1 & 1) == 0) {
    _objc_retain(param_7);
    _objc_opt_class(puVar2);
    uVar3 = param_7;
    _objc_opt_isKindOfClass(param_7,puVar2);
    uVar1 = param_7;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_7);
    uVar3 = param_4;
    func_0x00010bfd7560();
    if ((int)uVar3 != 0) {
      uVar4 = param_8;
      func_0x00010c0840e0();
      *(undefined8 *)(param_4 + (long)_DAT_11275a770) = uVar4;
      func_0x00010c0fea80(uVar1);
    }
    lVar9 = (long)_DAT_11275a794;
    uVar7 = *(undefined8 *)(param_4 + lVar9);
    func_0x00010c0840e0(param_8);
    func_0x00010c0dfd40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar7;
    func_0x00010c23f220();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    uVar8 = *(undefined8 *)(param_4 + lVar9);
    func_0x00010c0840e0(param_8);
    func_0x00010c0dfd40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar8;
    func_0x00010bf97060();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar7;
    func_0x00010bf97200();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    _objc_release(uVar8);
    func_0x00010bfb68e0(param_6);
    if (param_3 == 0.0) {
      param_1 = 0.0;
    }
    else {
      func_0x00010bf4cdc0(param_6);
      func_0x00010bfb68e0(param_6);
      param_1 = param_1 / param_3;
    }
    uVar6 = *(undefined8 *)(param_4 + (long)_DAT_11275a74c);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bfa7140();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c0ef4a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    _objc_release(uVar6);
    func_0x00010c250b20(param_1,*(undefined8 *)(param_4 + (long)_DAT_11275a76c));
    _objc_release(uVar8);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar1);
  }
  _objc_release(param_8);
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 106be8898; end: 106be88f7; -[SCSpectaclesBoomboxViewController collectionView:didEndDisplayingCell:forItemAtIndexPath:] */

void FUN_106be8898(void)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong in_x3;
  
  _objc_retain(in_x3);
  puVar2 = PTR_PTR_1126d13f0;
  _objc_opt_class(PTR_PTR_1126d13f0);
  uVar3 = in_x3;
  _objc_opt_isKindOfClass(in_x3,puVar2);
  uVar1 = in_x3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  func_0x00010bf3a200(uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(in_x3);
  return;
}



/* Entry: 106be88f8; end: 106be8acf; -[SCSpectaclesBoomboxViewController scrollViewDidScroll:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_106be88f8(double param_1,undefined8 param_2,double param_3,undefined8 param_4,long param_5,
             undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [128];
  long lStack_80;
  
  puVar4 = &uStack_140;
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  func_0x00010bf4cdc0(param_7);
  func_0x00010bfb68e0(param_7);
  lVar1 = param_5;
  dVar9 = param_3;
  func_0x00010bfd7560();
  if ((int)lVar1 == 0) {
    param_1 = 0.0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    lStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    lVar6 = (long)_DAT_11275a788;
    lVar2 = *(long *)(param_5 + lVar6);
    func_0x00010bfed1a0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010bf52a60();
    if (lVar1 != 0) {
      lVar7 = *plStack_130;
      do {
        lVar8 = 0;
        do {
          if (*plStack_130 != lVar7) {
            _objc_enumerationMutation(lVar2);
          }
          lVar5 = *(long *)(lStack_138 + lVar8 * 8);
          uVar3 = *(undefined8 *)(param_5 + lVar6);
          func_0x00010bf33b60(uVar3,param_6,lVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0840e0();
          if (lVar5 == *(long *)(param_5 + _DAT_11275a770)) {
            func_0x00010c137fe0(uVar3);
          }
          else {
            func_0x00010c239660(uVar3);
          }
          _objc_release(uVar3);
          lVar8 = lVar8 + 1;
        } while (lVar1 != lVar8);
        lVar1 = lVar2;
        puVar4 = &uStack_140;
        func_0x00010bf52a60(lVar2,param_6,&uStack_140,auStack_100,0x10);
      } while (lVar1 != 0);
    }
  }
  else {
    param_1 = param_1 / param_3;
    *(long *)(param_5 + _DAT_11275a770) = (long)param_1;
    lVar2 = param_5;
    func_0x00010bdc51a0(param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = *(undefined8 **)(param_5 + _DAT_11275a778);
    func_0x00010c0fea80();
  }
  _objc_release(lVar2);
  _objc_release(param_7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    auVar10._8_8_ = param_2;
    auVar10._0_8_ = param_1;
    return auVar10;
  }
  ___stack_chk_fail();
  func_0x00010bf20c00(puVar4);
  auVar11._8_8_ = param_4;
  auVar11._0_8_ = dVar9;
  return auVar11;
}



/* Entry: 106be8ad0; end: 106be8aef; -[SCSpectaclesBoomboxViewController collectionView:layout:sizeForItemAtIndexPath:] */

undefined1  [16]
FUN_106be8ad0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 auVar1 [16];
  
  func_0x00010bf20c00(param_7);
  auVar1._8_8_ = param_4;
  auVar1._0_8_ = param_3;
  return auVar1;
}



/* Entry: 106be8af0; end: 106be8b63; -[SCSpectaclesBoomboxViewController _dismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106be8af0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11275a798;
  lVar1 = param_1 + lVar2;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    param_1 = param_1 + lVar2;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf1f620();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 106be8b64; end: 106be8b87; -[SCSpectaclesBoomboxViewController animationControllerForPresentedController:presentingController:sourceController:] */

void FUN_106be8b64(void)

{
  _objc_alloc(PTR_PTR_1126d13f8);
  func_0x00010c038ca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106be8b88; end: 106be8bab; -[SCSpectaclesBoomboxViewController animationControllerForDismissedController:] */

void FUN_106be8b88(void)

{
  _objc_alloc(PTR_PTR_1126d13f8);
  func_0x00010c038ca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106be8bac; end: 106be8bb3; -[SCSpectaclesBoomboxViewController modalPresentationStyle] */

undefined8 FUN_106be8bac(void)

{
  return 0;
}



/* Entry: 106be8bb4; end: 106be8bbf; -[SCSpectaclesBoomboxViewController supportedInterfaceOrientations] */

undefined8 FUN_106be8bb4(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  iVar1 = 0;
  uVar5 = 0x18;
  _objc_retain();
  if (lRam00000001137fbfe8 != -1) {
    iVar1 = 0x137fbfe8;
    func_0x000107c27d9c(0x1137fbfe8,&PTR___NSConcreteGlobalBlock_110d662b8);
  }
  if ((bRam00000001137fbfd2 & 1) == 0) {
    uVar5 = 2;
  }
  else {
    func_0x000107c30aa4();
    if (iVar1 != 0) {
      puVar2 = (undefined *)0x0;
      func_0x00010c29d0c0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c2a71e0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c2a72c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar2);
      if (puVar4 == (undefined *)0x0) {
        puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
        func_0x00010c22b720();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar3;
        func_0x00010c252de0();
        _objc_release(puVar3);
      }
      else {
        puVar2 = puVar4;
        func_0x00010c0690e0();
      }
      if (puVar2 + -1 < (undefined *)0x4) {
        uVar5 = *(undefined8 *)(&UNK_10e5f47e8 + (long)(puVar2 + -1) * 8);
      }
      _objc_release(puVar4);
    }
  }
  _objc_release(0);
  return uVar5;
}



/* Entry: 106be8bc0; end: 106be8bfb; -[SCSpectaclesBoomboxViewController _handlePressGesture:] */

void FUN_106be8bc0(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x00010c252440();
  if (param_3 == 3) {
                    /* WARNING: Could not recover jumptable at 0x00010be242d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__goToNext_112566a50);
    return;
  }
  return;
}



/* Entry: 106be8bfc; end: 106be8c9b; -[SCSpectaclesBoomboxViewController _activeCell] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106be8bfc(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_11275a770;
  uVar3 = *(ulong *)(param_1 + lVar5);
  uVar1 = *(ulong *)(param_1 + _DAT_11275a794);
  func_0x00010bf529e0();
  if (uVar3 < uVar1) {
    uVar4 = *(undefined8 *)(param_1 + _DAT_11275a788);
    puVar2 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
    func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_2,
                        *(undefined8 *)(param_1 + lVar5),0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf33b60(uVar4,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  else {
    uVar4 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 106be8c9c; end: 106be8d67; -[SCSpectaclesBoomboxViewController _handlePressAndHoldGesture:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106be8c9c(long param_1,undefined8 param_2,long param_3)

{
  func_0x00010c252440();
  if (param_3 - 3U < 3 || param_3 == 0) {
    *(undefined1 *)(param_1 + _DAT_11275a79c) = 0;
    func_0x00010bec36e0(param_1);
    func_0x00010bdc51a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0fea80();
  }
  else {
    if (param_3 != 1) {
      return;
    }
    func_0x00010c14c8a0(*(undefined8 *)(param_1 + _DAT_11275a78c));
    *(undefined1 *)(param_1 + _DAT_11275a79c) = 1;
    func_0x00010bdc51a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa0d20();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106be8d68; end: 106be8dbf; -[SCSpectaclesBoomboxViewController gestureRecognizer:shouldReceiveTouch:] */

uint FUN_106be8d68(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 in_x3;
  
  func_0x00010c29bf00(in_x3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___UIControl_1126c3e60;
  _objc_opt_class(PTR__OBJC_CLASS___UIControl_1126c3e60);
  uVar2 = in_x3;
  _objc_opt_isKindOfClass(in_x3,puVar1);
  _objc_release(in_x3);
  return ((uint)uVar2 ^ 0xffffffff) & 1;
}



/* Entry: 106be8dc0; end: 106be8dd7; -[SCSpectaclesBoomboxViewController gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106be8dc0(long param_1,undefined8 param_2,long param_3)

{
  return param_3 != *(long *)(param_1 + _DAT_11275a790);
}



/* Entry: 106be8dd8; end: 106be8e3f; -[SCSpectaclesBoomboxViewController gestureRecognizer:shouldBeRequiredToFailByGestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106be8dd8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_11275a788);
  _objc_retain(param_4);
  func_0x00010c0f36c0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(lVar1);
  return param_4 == lVar1;
}



/* Entry: 106be8e40; end: 106be8e47; -[SCSpectaclesBoomboxViewController boomboxMediaCell:shouldStartPressAndHoldTimer:] */

void FUN_106be8e40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec1250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__startPressAndHoldTimerWithDelay_11258de38,param_4);
  return;
}



/* Entry: 106be8e48; end: 106be8e4b; -[SCSpectaclesBoomboxViewController boomboxMediaCellShouldAutoAdvance:] */

void FUN_106be8e48(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be242d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__goToNext_112566a50);
  return;
}


