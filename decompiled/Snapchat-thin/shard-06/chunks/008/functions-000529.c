/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104e19ce4; end: 104e19dab; -[SCRemixSnapEditorEventListenerEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e19ce4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_104e19dac;
  puStack_40 = &UNK_1108523c8;
  puVar1 = PTR_PTR_1126ae720;
  lStack_38 = param_1;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112713bb4);
  *(undefined **)(param_1 + _DAT_112713bb4) = puVar1;
  _objc_release(uVar3);
  param_1 = param_1 + _DAT_112713bbc;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar2);
  _objc_release(param_1);
  return;
}



/* Entry: 104e19dac; end: 104e19e9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e19dac(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126b0d48;
  _objc_alloc(PTR_PTR_1126b0d48);
  if (*(long *)(param_1 + 0x20) == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x20) + (long)_DAT_112713bc0;
    _objc_loadWeakRetained(lVar3);
    if (*(long *)(param_1 + 0x20) != 0) {
      lVar5 = *(long *)(param_1 + 0x20) + (long)_DAT_112713bc4;
      _objc_loadWeakRetained(lVar5);
      goto LAB_104e19e0c;
    }
  }
  lVar5 = 0;
LAB_104e19e0c:
  lVar2 = lVar5;
  func_0x00010c295440(lVar5);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)(param_1 + 0x20) == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(param_1 + 0x20) + (long)_DAT_112713bc8;
    _objc_loadWeakRetained(lVar4);
  }
  func_0x00010c039be0(puVar1,param_2,lVar3,lVar2,lVar4);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(lVar5);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104e19ea0; end: 104e19f9f; -[SCRemixSnapEditorEventListenerEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e19ea0(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  undefined *puStack_38;
  
  lVar1 = *(long *)(param_1 + _DAT_112713bb4);
  func_0x00010bfe6360();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puStack_38 = PTR_PTR_1126e4640;
    plVar3 = &lStack_40;
    lStack_40 = param_1;
    _objc_msgSendSuper2(plVar3,PTR_s_end_1125c29d0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = PTR_PTR_1126afc98;
    func_0x00010bf0c040();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = (long)_DAT_112713bb8;
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar2;
    _objc_release(uVar4);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_104e19fa0;
    puStack_58 = &UNK_110841f80;
    lStack_50 = lVar1;
    lStack_48 = param_1;
    func_0x0001000d76cc("APPSTORE",&puStack_70);
    plVar3 = *(long **)(param_1 + lVar5);
    func_0x00010c117720(plVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar3);
  return;
}



/* Entry: 104e19fa0; end: 104e19fd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e19fa0(long param_1)

{
  func_0x00010c26ac40(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x28) + (long)_DAT_112713bb8),
             PTR_s_finish_1125c9748);
  return;
}



/* Entry: 104e19fd4; end: 104e1a043; -[SCRemixSnapEditorEventListenerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e19fd4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112713bc8);
  _objc_destroyWeak(param_1 + _DAT_112713bc4);
  _objc_destroyWeak(param_1 + _DAT_112713bc0);
  _objc_destroyWeak(param_1 + _DAT_112713bbc);
  _objc_storeStrong(param_1 + _DAT_112713bb8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112713bb4,0);
  return;
}



/* Entry: 104e1a044; end: 104e1a2bf; -[SCVoiceoverAudioSession initWithAudio:maxDuration:audioSessionServices:temporaryFileWriter:] */

undefined8 *
FUN_104e1a044(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126e4648;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar5 = param_4[1];
    uVar2 = *param_4;
    puVar1[3] = param_4[2];
    puVar1[2] = uVar5;
    puVar1[1] = uVar2;
    _objc_retain(param_5);
    uVar2 = puVar1[6];
    puVar1[6] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[7];
    puVar1[7] = param_6;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = puVar1[4];
    puVar1[4] = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    puVar3 = PTR_PTR_1126ae568;
    _objc_alloc_init();
    uVar2 = puVar1[5];
    puVar1[5] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0xb];
    puVar1[0xb] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__kCMTimeZero_110348670;
    uVar2 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    puVar1[0xf] = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    puVar1[0xe] = uVar2;
    puVar1[0x10] = *(undefined8 *)(puVar3 + 0x10);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = puVar1[0xc];
    puVar1[0xc] = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    func_0x00010beaaaa0(puVar1);
    _objc_initWeak(auStack_68,puVar1);
    uVar2 = puVar1[4];
    _objc_copyWeak(auStack_70,auStack_68);
    func_0x00010c0f7fc0(uVar2);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 104e1a2c0; end: 104e1a2eb;  */

void FUN_104e1a2c0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde4b00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e1a2ec; end: 104e1a2f3; -[SCVoiceoverAudioSession numberOfSegments] */

void FUN_104e1a2ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x58),PTR_s_count_1125b2420);
  return;
}



/* Entry: 104e1a2f4; end: 104e1a303; -[SCVoiceoverAudioSession isRecording] */

void FUN_104e1a2f4(long param_1)

{
  if (*(long *)(param_1 + 0x48) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c07bef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(*(long *)(param_1 + 0x48),PTR_s_isRecording_1125fc9c8);
    return;
  }
  return;
}



/* Entry: 104e1a304; end: 104e1a3ab; -[SCVoiceoverAudioSession beginRecordingSegment] */

void FUN_104e1a304(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104e1a3ac; end: 104e1a3d7;  */

void FUN_104e1a3ac(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bec14a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e1a3d8; end: 104e1a47f; -[SCVoiceoverAudioSession endRecordingSegment] */

void FUN_104e1a3d8(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104e1a480; end: 104e1a4ab;  */

void FUN_104e1a480(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bec37e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e1a4ac; end: 104e1a4af; -[SCVoiceoverAudioSession undoSegment] */

void FUN_104e1a4ac(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be75990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__popSegment_11257b000);
  return;
}



/* Entry: 104e1a4b0; end: 104e1a54b; -[SCVoiceoverAudioSession lengthOfSegmentAtIndex:] */

void FUN_104e1a4b0(undefined8 *param_1,long param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar2 = *(ulong *)(param_2 + 0x58);
  func_0x00010bf529e0();
  puVar1 = PTR__kCMTimeInvalid_110348648;
  if (param_4 < uVar2) {
    lVar3 = *(long *)(param_2 + 0x58);
    func_0x00010c0dfd40(lVar3,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    else {
      func_0x00010bf8b160(param_1,lVar3);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar3);
    return;
  }
  uVar4 = *(undefined8 *)PTR__kCMTimeInvalid_110348648;
  param_1[1] = *(undefined8 *)(PTR__kCMTimeInvalid_110348648 + 8);
  *param_1 = uVar4;
  param_1[2] = *(undefined8 *)(puVar1 + 0x10);
  return;
}



/* Entry: 104e1a54c; end: 104e1a64b; -[SCVoiceoverAudioSession createVoiceoverAudioWithAudioMixingProportion:completion:] */

void FUN_104e1a54c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104e1a64c; end: 104e1a7a3;  */

void FUN_104e1a64c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    uStack_48 = 0x104e1a6f8;
    puStack_40 = &UNK_110852428;
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar3);
    ppuVar2 = &puStack_58;
    uStack_38 = uVar3;
    _objc_retainBlock(ppuVar2);
    func_0x00010bec2c40(lVar1,param_2,*(undefined8 *)(param_1 + 0x20),ppuVar2);
    _objc_release(ppuVar2);
    _objc_release(uStack_38);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 104e1a7a4; end: 104e1a7b7;  */

void FUN_104e1a7a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104e1a7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),
             *(undefined1 *)(param_1 + 0x30));
  return;
}



/* Entry: 104e1a7b8; end: 104e1a7df; -[SCVoiceoverAudioSession recordingEventPublisher] */

void FUN_104e1a7b8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104e1a7e0; end: 104e1a82f; -[SCVoiceoverAudioSession dealloc] */

void FUN_104e1a7e0(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c069d00(*(undefined8 *)(param_1 + 0x40));
  func_0x00010be8a3a0(param_1);
  puStack_28 = PTR_PTR_1126e4648;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104e1a830; end: 104e1a9fb; -[SCVoiceoverAudioSession _configureAudioSession] */

void FUN_104e1a830(long param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_104e1a9fc;
  uStack_50 = 0x104e1aa0c;
  uStack_48 = 0;
  puStack_68 = &uStack_70;
  _objc_initWeak(auStack_78,param_1);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_104e1aa14;
  puStack_90 = &UNK_110852458;
  _objc_copyWeak(auStack_80,auStack_78);
  ppuVar1 = &puStack_a8;
  puStack_88 = &uStack_70;
  _objc_retainBlock(ppuVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf46680(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c0d3da0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  uVar4 = uVar3;
  func_0x00010bf55480(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010bf47660();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = puStack_68[5];
  puStack_68[5] = uVar5;
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
  return;
}



/* Entry: 104e1a9fc; end: 104e1aa13;  */

void FUN_104e1a9fc(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 104e1aa14; end: 104e1aa6b;  */

void FUN_104e1aa14(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be8a3a0(lVar1);
    uVar3 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28);
    _objc_retain(uVar3);
    uVar2 = *(undefined8 *)(lVar1 + 0x50);
    *(undefined8 *)(lVar1 + 0x50) = uVar3;
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104e1aa6c; end: 104e1accb; -[SCVoiceoverAudioSession _prepareNextRecordingWithCompletion:] */

void FUN_104e1aa6c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined **ppuVar11;
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  undefined1 auStack_100 [8];
  undefined1 auStack_f8 [8];
  undefined *puStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined **ppuStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar2 = param_1;
  func_0x00010be63ce0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cc60();
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___AVAudioRecorder_1126b0d50;
  _objc_alloc();
  uStack_b8 = *(undefined8 *)PTR__AVFormatIDKey_11034cf30;
  ppuStack_90 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110be0f0;
  uStack_b0 = *(undefined8 *)PTR__AVSampleRateKey_11034cf60;
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df740(0x472c4400);
  _objc_retainAutoreleasedReturnValue();
  uStack_a8 = *(undefined8 *)PTR__AVNumberOfChannelsKey_11034cf58;
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_88 = puVar4;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  uStack_a0 = *(undefined8 *)PTR__AVLinearPCMBitDepthKey_11034cf38;
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_80 = puVar5;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  uStack_98 = *(undefined8 *)PTR__AVEncoderBitRateKey_11034cf28;
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_78 = puVar6;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_70 = puVar7;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  uStack_c0 = 0;
  func_0x00010c057be0();
  uVar1 = uStack_c0;
  _objc_retain(uStack_c0);
  uVar9 = *(undefined8 *)(param_1 + 0x48);
  *(undefined **)(param_1 + 0x48) = puVar3;
  _objc_release(uVar9);
  _objc_release(puVar8);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x48));
  uVar9 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c10a1c0();
  _objc_release(uVar1);
  if (param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3,uVar9);
  }
  _objc_release(lVar2);
  lVar10 = param_3;
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  ppuVar11 = &puStack_120;
  pcStack_c8 = FUN_104e1accc;
  puStack_f0 = puVar3;
  uStack_e8 = uVar9;
  lStack_e0 = lVar2;
  lStack_d8 = param_3;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_initWeak(auStack_f8,lVar10);
  puStack_120 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_118 = 0xc2000000;
  pcStack_110 = FUN_104e1ad8c;
  puStack_108 = &UNK_110849200;
  _objc_copyWeak(auStack_100,auStack_f8);
  _objc_retainBlock(&puStack_120);
  func_0x00010be78c60(lVar10);
  _objc_release(ppuVar11);
  _objc_destroyWeak(auStack_100);
  _objc_destroyWeak(auStack_f8);
  return;
}



/* Entry: 104e1accc; end: 104e1ad8b; -[SCVoiceoverAudioSession _startRecordingAsynchronously] */

void FUN_104e1accc(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  ppuVar1 = &puStack_60;
  _objc_initWeak(auStack_38,param_1);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_104e1ad8c;
  puStack_48 = &UNK_110849200;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retainBlock(&puStack_60);
  func_0x00010be78c60(param_1);
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 104e1ad8c; end: 104e1ae0b;  */

void FUN_104e1ad8c(long param_1,int param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 != 0) && (*(long *)(param_1 + 0x48) != 0)) {
    if (param_2 == 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      puVar1 = PTR_PTR_1126b0d58;
      func_0x00010bf9fd40(PTR_PTR_1126b0d58);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar2);
      _objc_release(puVar1);
    }
    else {
      func_0x00010bec1480(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e1ae0c; end: 104e1af8b; -[SCVoiceoverAudioSession _startRecording] */

void FUN_104e1ae0c(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_a0 [8];
  double dStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  double dStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  double dStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_68 = *(undefined8 *)(param_1 + 0x10);
  dStack_70 = *(double *)(param_1 + 8);
  uStack_60 = *(undefined8 *)(param_1 + 0x18);
  uStack_88 = *(undefined8 *)(param_1 + 0x78);
  uStack_90 = *(undefined8 *)(param_1 + 0x70);
  uStack_80 = *(undefined8 *)(param_1 + 0x80);
  _CMTimeSubtract(&dStack_58,&dStack_70,&uStack_90);
  uStack_68 = uStack_50;
  dStack_70 = dStack_58;
  uStack_60 = uStack_48;
  _CMTimeGetSeconds(&dStack_70);
  _objc_initWeak(&dStack_70,param_1);
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_104e1af8c;
  puStack_a8 = &UNK_110846540;
  _objc_copyWeak(auStack_a0,&dStack_70);
  dStack_98 = dStack_58 + 0.1;
  func_0x000100162d98("APPSTORE",&puStack_c0);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x48);
  func_0x00010c123460();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  if (iVar1 == 0) {
    puVar2 = PTR_PTR_1126b0d58;
    func_0x00010bf9fd40(PTR_PTR_1126b0d58);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar3);
    _objc_release(puVar2);
    func_0x00010c069d00(*(undefined8 *)(param_1 + 0x40));
  }
  else {
    puVar2 = PTR_PTR_1126b0d58;
    func_0x00010bf17a00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar3);
    _objc_release(puVar2);
  }
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(&dStack_70);
  return;
}



/* Entry: 104e1af8c; end: 104e1aff7;  */

void FUN_104e1af8c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
    func_0x00010c1503c0(*(undefined8 *)(param_1 + 0x28),PTR__OBJC_CLASS___NSTimer_1126af1b0,param_2,
                        lVar1,PTR_s__recordingTimerEnd_1125266b8,0,0);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(lVar1 + 0x40);
    *(undefined **)(lVar1 + 0x40) = puVar2;
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104e1aff8; end: 104e1b037; -[SCVoiceoverAudioSession _stopRecordingAsynchronously] */

void FUN_104e1aff8(long param_1)

{
  int iVar1;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x48);
  func_0x00010c07bee0();
  if (iVar1 != 0) {
    func_0x00010c255780(*(undefined8 *)(param_1 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010c069d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x40),PTR_s_invalidate_1125f8150);
    return;
  }
  return;
}



/* Entry: 104e1b038; end: 104e1b03b; -[SCVoiceoverAudioSession _recordingTimerEnd] */

void FUN_104e1b038(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf951d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_endRecordingSegment_1125c2e18);
  return;
}



/* Entry: 104e1b03c; end: 104e1b0cb; -[SCVoiceoverAudioSession _pushSegment:] */

void FUN_104e1b03c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x58));
  if (param_3 == 0) {
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
  }
  else {
    func_0x00010bf8b160(&uStack_50,param_3);
  }
  uStack_68 = *(undefined8 *)(param_1 + 0x78);
  uStack_70 = *(undefined8 *)(param_1 + 0x70);
  uStack_60 = *(undefined8 *)(param_1 + 0x80);
  _CMTimeAdd(&uStack_38,&uStack_70,&uStack_50);
  *(undefined8 *)(param_1 + 0x78) = uStack_30;
  *(undefined8 *)(param_1 + 0x70) = uStack_38;
  *(undefined8 *)(param_1 + 0x80) = uStack_28;
  _objc_release(param_3);
  return;
}



/* Entry: 104e1b0cc; end: 104e1b16f; -[SCVoiceoverAudioSession _popSegment] */

void FUN_104e1b0cc(long param_1)

{
  long lVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  lVar1 = *(long *)(param_1 + 0x58);
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(long *)(param_1 + 0x58);
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12cd60(*(undefined8 *)(param_1 + 0x58));
    if (lVar1 == 0) {
      uStack_50 = 0;
      uStack_48 = 0;
      uStack_40 = 0;
    }
    else {
      func_0x00010bf8b160(&uStack_50,lVar1);
    }
    uStack_68 = *(undefined8 *)(param_1 + 0x78);
    uStack_70 = *(undefined8 *)(param_1 + 0x70);
    uStack_60 = *(undefined8 *)(param_1 + 0x80);
    _CMTimeSubtract(&uStack_38,&uStack_70,&uStack_50);
    *(undefined8 *)(param_1 + 0x78) = uStack_30;
    *(undefined8 *)(param_1 + 0x70) = uStack_38;
    *(undefined8 *)(param_1 + 0x80) = uStack_28;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104e1b170; end: 104e1b33f; -[SCVoiceoverAudioSession _stitchVoiceoverSegmentsWithAudioMixingProportion:completion:] */

void FUN_104e1b170(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x58);
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    (**(code **)(param_4 + 0x10))(param_4,0,1);
  }
  else {
    func_0x00010bf2e3c0(*(undefined8 *)(param_1 + 0x68));
    uVar2 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010580011c(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010be63ce0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___AVAssetExportSession_1126b0d60;
    _objc_alloc();
    func_0x00010bff4280();
    uVar5 = *(undefined8 *)(param_1 + 0x68);
    *(undefined **)(param_1 + 0x68) = puVar3;
    _objc_release(uVar5);
    func_0x00010c1d6fc0(*(undefined8 *)(param_1 + 0x68));
    func_0x00010c1d7200(*(undefined8 *)(param_1 + 0x68));
    func_0x00010c200aa0(*(undefined8 *)(param_1 + 0x68));
    uVar5 = *(undefined8 *)(param_1 + 0x68);
    _objc_retain(uVar5);
    func_0x00010be9d660();
    _objc_retainAutoreleasedReturnValue();
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_104e1b340;
    puStack_80 = &UNK_110852488;
    uStack_78 = uVar5;
    lStack_70 = lVar1;
    lStack_68 = param_1;
    _objc_retain(param_3);
    uStack_60 = param_3;
    _objc_retain(param_4);
    ppuVar4 = &puStack_98;
    lStack_58 = param_4;
    _objc_retainBlock(ppuVar4);
    func_0x00010bf9cee0(uVar5);
    _objc_release(ppuVar4);
    _objc_release(lStack_58);
    _objc_release(uStack_60);
    _objc_release(param_1);
    _objc_release(uVar5);
    _objc_release(lVar1);
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104e1b340; end: 104e1b433;  */

void FUN_104e1b340(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c252d60();
  if (lVar1 == 3) {
    puVar2 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
    func_0x00010bf0b9e0(PTR__OBJC_CLASS___AVURLAsset_1126b0d68);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf64ac0(PTR__OBJC_CLASS___NSData_1126ae778);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b0d70;
    _objc_alloc(PTR_PTR_1126b0d70);
    func_0x00010c043aa0();
    (**(code **)(*(long *)(param_1 + 0x40) + 0x10))(*(long *)(param_1 + 0x40),puVar4,1);
    _objc_release(puVar4);
    _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c252d60();
  if (lVar1 == 4) {
                    /* WARNING: Could not recover jumptable at 0x000104e1b420. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x40) + 0x10))(*(long *)(param_1 + 0x40),0,0);
    return;
  }
  return;
}



/* Entry: 104e1b434; end: 104e1b513; -[SCVoiceoverAudioSession audioRecorderDidFinishRecording:successfully:] */

void FUN_104e1b434(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_48,auStack_38);
  _objc_retain(param_3);
  uStack_40 = param_4;
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 104e1b514; end: 104e1b55f;  */

void FUN_104e1b514(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bdd1360(lVar1,param_2,*(undefined8 *)(param_1 + 0x20),
                        *(undefined1 *)(param_1 + 0x30));
    uVar2 = *(undefined8 *)(lVar1 + 0x48);
    *(undefined8 *)(lVar1 + 0x48) = 0;
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104e1b560; end: 104e1b67b; -[SCVoiceoverAudioSession _audioRecorderDidFinishRecording:successfully:] */

void FUN_104e1b560(double param_1,long param_2,undefined8 param_3,undefined8 param_4,int param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar2 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
  if (param_5 != 0) {
    uVar1 = *(undefined8 *)(param_2 + 0x48);
    func_0x00010c28f340(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0b9e0(puVar2,param_3,uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    if (puVar2 == (undefined *)0x0) {
      uStack_58 = 0;
      uStack_50 = 0;
      uStack_48 = 0;
    }
    else {
      func_0x00010bf8b160(&uStack_58,puVar2);
    }
    _CMTimeGetSeconds(&uStack_58);
    if (param_1 < 0.1) {
      puVar3 = puVar2;
      func_0x00010bdc2b80(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x000105800398();
      _objc_release(puVar3);
    }
    else {
      func_0x00010be84dc0(param_2,param_3,puVar2);
    }
    uVar1 = *(undefined8 *)(param_2 + 0x28);
    puVar3 = PTR_PTR_1126b0d58;
    func_0x00010bf95d60(PTR_PTR_1126b0d58,param_3,0.1 <= param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar1,param_3,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  return;
}



/* Entry: 104e1b67c; end: 104e1b77b; -[SCVoiceoverAudioSession audioRecorderEncodeErrorDidOccur:error:] */

void FUN_104e1b67c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104e1b77c; end: 104e1b7af;  */

void FUN_104e1b77c(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdd1380();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e1b7b0; end: 104e1b80f; -[SCVoiceoverAudioSession _audioRecorderEncodeErrorDidOccur:error:] */

void FUN_104e1b7b0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  puVar1 = PTR_PTR_1126b0d58;
  func_0x00010bf95d60(PTR_PTR_1126b0d58,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104e1b810; end: 104e1ba07; -[SCVoiceoverAudioSession _setupAudioSegmentsWithVoiceoverAudio:] */

/* WARNING: Type propagation algorithm not settling */

void FUN_104e1b810(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long alStack_138 [3];
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    alStack_138[2] = 0;
    alStack_138[1] = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    lVar2 = param_3;
    func_0x00010c1585e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf52a60();
    if (lVar3 != 0) {
      lVar11 = *plStack_120;
      do {
        lVar9 = 0;
        do {
          if (*plStack_120 != lVar11) {
            _objc_enumerationMutation(lVar2);
          }
          uVar10 = *(undefined8 *)(alStack_138[2] + lVar9 * 8);
          uVar4 = *(undefined8 *)(param_1 + 0x38);
          func_0x00010c269d40(uVar4);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar4;
          func_0x0001058000a4();
          _objc_retainAutoreleasedReturnValue();
          alStack_138[0] = 0;
          uVar8 = uVar4;
          func_0x00010c2bda80(uVar4,param_2,uVar10,uVar5,0xb,alStack_138);
          _objc_retainAutoreleasedReturnValue();
          lVar1 = alStack_138[0];
          _objc_release(uVar5);
          _objc_release(uVar4);
          if (lVar1 == 0) {
            puVar6 = PTR__OBJC_CLASS___NSURL_1126ae598;
            _objc_alloc(PTR__OBJC_CLASS___NSURL_1126ae598);
            func_0x00010bfee820();
            puVar7 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
            _objc_alloc(PTR__OBJC_CLASS___AVURLAsset_1126b0d68);
            func_0x00010c057ae0();
            func_0x00010be84dc0(param_1,param_2,puVar7);
            _objc_release(puVar7);
            _objc_release(puVar6);
          }
          _objc_release(uVar8);
          lVar9 = lVar9 + 1;
        } while (lVar3 != lVar9);
        lVar3 = lVar2;
        func_0x00010bf52a60(lVar2,param_2,alStack_138 + 1,auStack_f0,0x10);
      } while (lVar3 != 0);
    }
    _objc_release(lVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  if (*(long *)(param_3 + 0x50) != 0) {
    uVar8 = *(undefined8 *)(param_3 + 0x30);
    func_0x00010c0d3da0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    func_0x00010c1288c0(uVar5,param_2,*(undefined8 *)(param_3 + 0x50),0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar5);
    return;
  }
  return;
}



/* Entry: 104e1ba08; end: 104e1ba7b; -[SCVoiceoverAudioSession _releaseAudioSessionTokenIfNeeded] */

void FUN_104e1ba08(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x50) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c0d3da0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    func_0x00010c1288c0(uVar2,param_2,*(undefined8 *)(param_1 + 0x50),0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 104e1ba7c; end: 104e1bad3; -[SCVoiceoverAudioSession _segmentsMappedToData] */

void FUN_104e1ba7c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x58);
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c0b8600(*(undefined8 *)(param_1 + 0x58),param_2,
                        &PTR___NSConcreteGlobalBlock_1108524d8);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e1bad4; end: 104e1bb4b;  */

void FUN_104e1bad4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010bdc2b80(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c0040a0(puVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104e1bb4c; end: 104e1bbdf; -[SCVoiceoverAudioSession _nextVoiceoverURL] */

void FUN_104e1bb4c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0001058000a4();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bfacf80(uVar1,param_2,uVar2,0xb);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
  _objc_alloc(PTR__OBJC_CLASS___NSURL_1126ae598);
  func_0x00010bfee820();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104e1bbe0; end: 104e1bbf3; -[SCVoiceoverAudioSession fullAudioLength] */

void FUN_104e1bbe0(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x70);
  param_1[1] = *(undefined8 *)(param_2 + 0x78);
  *param_1 = uVar1;
  param_1[2] = *(undefined8 *)(param_2 + 0x80);
  return;
}



/* Entry: 104e1bbf4; end: 104e1bc83; -[SCVoiceoverAudioSession .cxx_destruct] */

void FUN_104e1bbf4(long param_1)

{
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 104e1bc84; end: 104e1bd37; -[SCVoiceoverAudioMixingSwitch initWithTapHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_104e1bc84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e4650;
  uStack_30 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),&uStack_30,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112713bfc);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112713bfc) = uVar2;
    _objc_release(uVar3);
    func_0x00010c219b60(puVar1);
    func_0x00010bdf4d00(puVar1);
    func_0x00010bdeeea0(puVar1);
    func_0x00010bdc5d40(puVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104e1bd38; end: 104e1bd47; -[SCVoiceoverAudioMixingSwitch setSwitchOn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e1bd38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d1370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112713c00),PTR_s_setOn__112651f00);
  return;
}



/* Entry: 104e1bd48; end: 104e1bdfb; -[SCVoiceoverAudioMixingSwitch setEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e1bd48(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined1 uStack_38;
  
  ppuVar2 = &puStack_60;
  lVar3 = (long)_DAT_112713c00;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar3);
  func_0x00010c071800();
  if ((int)param_3 != iVar1) {
    func_0x00010c195460(*(undefined8 *)(param_1 + lVar3),param_2,param_3);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_104e1bdfc;
    puStack_48 = &UNK_110845ce0;
    uStack_38 = (undefined1)param_3;
    lStack_40 = param_1;
    _objc_retainBlock(&puStack_60);
    func_0x00010bf03400(0x3fc3333333333333,PTR__OBJC_CLASS___UIView_1126aec20,param_2,ppuVar2);
    _objc_release(ppuVar2);
  }
  return;
}



/* Entry: 104e1bdfc; end: 104e1be1b;  */

void FUN_104e1bdfc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x3ff0000000000000;
  if (*(char *)(param_1 + 0x28) == '\0') {
    uVar1 = 0x3fd999999999999a;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar1,*(undefined8 *)(param_1 + 0x20),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 104e1be1c; end: 104e1bf0b; -[SCVoiceoverAudioMixingSwitch touchesEnded:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e1be1c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar5 = (long)_DAT_112713c00;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar5);
  func_0x00010c071800();
  if (iVar1 != 0) {
    lVar3 = param_3;
    func_0x00010bf00560();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    if ((lVar2 != 0) && (lVar3 = param_4, func_0x00010c27dd80(), lVar3 == 0)) {
      func_0x00010c09ef00(lVar2,param_2,*(undefined8 *)(param_1 + lVar5));
      lVar3 = *(long *)(param_1 + lVar5);
      func_0x00010bfe3a40(lVar3,param_2,param_4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar3 == 0) {
        uVar4 = *(undefined8 *)(param_1 + lVar5);
        func_0x00010c079040(uVar4);
        func_0x00010c210a80(param_1,param_2,(uint)uVar4 ^ 1);
        func_0x00010be32240(param_1);
      }
    }
    _objc_release(lVar2);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104e1bf0c; end: 104e1bf47; -[SCVoiceoverAudioMixingSwitch _handleToggleSwitchTap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e1bf0c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + _DAT_112713bfc);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112713c00);
  func_0x00010c079040(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000104e1bf44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 0x10))(lVar2,uVar1);
  return;
}



/* Entry: 104e1bf48; end: 104e1c2bf; -[SCVoiceoverAudioMixingSwitch _addAndLayoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e1bf48(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_160 [8];
  undefined1 auStack_158 [8];
  undefined8 uStack_150;
  long lStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = (long)_DAT_112713c00;
  func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar9));
  lVar8 = (long)_DAT_112713c04;
  func_0x00010befbb60(param_1);
  puStack_f8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar1 = *(undefined8 *)(param_1 + lVar9);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  uStack_b0 = uVar1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lStack_b8 = lVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar9);
  uStack_c0 = uVar1;
  uStack_a8 = uVar1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  uStack_c8 = uVar3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lStack_d0 = lVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + lVar9);
  uStack_d8 = uVar3;
  uStack_a0 = uVar3;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  uStack_e0 = uVar1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lStack_e8 = lVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar8);
  uStack_f0 = uVar1;
  uStack_98 = uVar1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + lVar9);
  uStack_100 = uVar3;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uStack_108 = uVar1;
  func_0x00010bf493c0(0x4010000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar8);
  uStack_110 = uVar3;
  uStack_90 = uVar3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  uStack_118 = uVar4;
  func_0x00010c274200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar8);
  uStack_88 = uVar4;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010bf1ff80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar8);
  uStack_80 = uVar1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_78 = uVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_f8);
  _objc_release(puVar7);
  _objc_release(uVar3);
  _objc_release(lVar8);
  _objc_release(uVar6);
  _objc_release(uVar1);
  _objc_release(lVar9);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(lVar2);
  _objc_release(uStack_118);
  _objc_release(uStack_110);
  _objc_release(uStack_108);
  _objc_release(uStack_100);
  _objc_release(uStack_f0);
  _objc_release(lStack_e8);
  _objc_release(uStack_e0);
  _objc_release(uStack_d8);
  _objc_release(lStack_d0);
  _objc_release(uStack_c8);
  _objc_release(uStack_c0);
  _objc_release(lStack_b8);
  _objc_release(uStack_b0);
  lVar2 = param_1;
  func_0x00010c08cdc0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_128 = FUN_104e1c2c0;
  puVar7 = PTR_PTR_1126b0d78;
  uStack_150 = uVar3;
  lStack_148 = lVar8;
  uStack_140 = uVar6;
  lStack_138 = param_1;
  puStack_130 = &stack0xfffffffffffffff0;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar9 = (long)_DAT_112713c00;
  uVar1 = *(undefined8 *)(lVar2 + lVar9);
  *(undefined **)(lVar2 + lVar9) = puVar7;
  _objc_release(uVar1);
  _objc_initWeak(auStack_158,lVar2);
  _objc_copyWeak(auStack_160,auStack_158);
  func_0x00010c211ae0(*(undefined8 *)(lVar2 + lVar9));
  func_0x00010c219b60(*(undefined8 *)(lVar2 + lVar9));
  _objc_destroyWeak(auStack_160);
  _objc_destroyWeak(auStack_158);
  return;
}



/* Entry: 104e1c2c0; end: 104e1c3b3; -[SCVoiceoverAudioMixingSwitch _createToggleSwitch] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e1c2c0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  puVar1 = PTR_PTR_1126b0d78;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar3 = (long)_DAT_112713c00;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c211ae0(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar3));
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 104e1c3b4; end: 104e1c3df;  */

void FUN_104e1c3b4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be32240();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e1c3e0; end: 104e1c48f; -[SCVoiceoverAudioMixingSwitch _createLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e1c3e0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc_init();
  lVar3 = (long)_DAT_112713c04;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x000109201c70();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar3));
  _objc_release(uVar2);
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar3));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar3));
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c219b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar3),PTR_s_setTranslatesAutoresizingMaskInt_112664100,0);
  return;
}



/* Entry: 104e1c490; end: 104e1c4df; -[SCVoiceoverAudioMixingSwitch .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e1c490(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112713bfc,0);
  _objc_storeStrong(param_1 + _DAT_112713c04,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112713c00,0);
  return;
}



/* Entry: 104e1c4e0; end: 104e1c5c3; -[SCVoiceoverExitButton initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_104e1c4e0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126e4658;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c160fc0(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c01bf60();
    lVar5 = (long)_DAT_112713c08;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar3;
    _objc_release(uVar4);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c182220(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c21e900(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010be492a0(puVar1);
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104e1c5c4; end: 104e1c62b; -[SCVoiceoverExitButton setEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e1c5c4(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e4658;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_setEnabled__112642f38);
  uVar1 = 0x3ff0000000000000;
  if (param_3 == 0) {
    uVar1 = 0x3fd999999999999a;
  }
  func_0x00010c1677c0(uVar1,*(undefined8 *)(param_1 + _DAT_112713c08));
  return;
}



/* Entry: 104e1c62c; end: 104e1c9a7; -[SCVoiceoverExitButton _layoutImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e1c62c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined *puVar23;
  long lVar24;
  long lVar25;
  
  lVar24 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar25 = (long)_DAT_112713c08;
  func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar25));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = *(long *)(param_1 + lVar25);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar25);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar25);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf49580(0x4044000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar25);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010bf49580(0x4044000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + lVar25);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar12;
  func_0x00010bf49460();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + lVar25);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1;
  func_0x00010c2793a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar15;
  func_0x00010bf49500();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(param_1 + lVar25);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1;
  func_0x00010c274200(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar18;
  func_0x00010bf49460();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = *(undefined8 *)(param_1 + lVar25);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1ff80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar21;
  func_0x00010bf49500();
  _objc_retainAutoreleasedReturnValue();
  puVar23 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar23);
  _objc_release(uVar22);
  _objc_release(param_1);
  _objc_release(uVar21);
  _objc_release(uVar20);
  _objc_release(lVar19);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(lVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(lVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(lVar6);
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar24) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(lVar2 + _DAT_112713c08,0);
  return;
}



/* Entry: 104e1c9a8; end: 104e1c9bb; -[SCVoiceoverExitButton .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e1c9a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112713c08,0);
  return;
}



/* Entry: 104e1c9bc; end: 104e1cb5b; -[SCVoiceoverPlaybackButton initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_104e1c9bc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126e4660;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c219b60(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    puVar3 = puVar2;
    func_0x0001092017cc();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01bf60();
    lVar5 = (long)_DAT_112713c0c;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    _objc_release(puVar3);
    func_0x00010c21e900(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar5));
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    lVar5 = (long)_DAT_112713c10;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    func_0x00010c21e900(*(undefined8 *)((long)puVar1 + lVar5));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar5));
    _objc_release(puVar2);
    func_0x00010c1677c0(0x3fe6666666666666,*(undefined8 *)((long)puVar1 + lVar5));
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    func_0x00010c08c0e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4030000000000000);
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    func_0x00010c08c0e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    _objc_release(uVar4);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010be49800(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104e1cb5c; end: 104e1cbeb; -[SCVoiceoverPlaybackButton setButtonState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e1cb5c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 == *(long *)(param_1 + _DAT_112713c14)) {
    return;
  }
  *(long *)(param_1 + _DAT_112713c14) = param_3;
  if (param_3 == 1) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112713c0c);
    func_0x0001092017d8();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (param_3 != 0) {
      return;
    }
    uVar1 = *(undefined8 *)(param_1 + _DAT_112713c0c);
    func_0x0001092017cc();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c1a9f00(uVar1,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e1cbec; end: 104e1cf77; -[SCVoiceoverPlaybackButton _layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_104e1cbec(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar13 = (long)_DAT_112713c10;
  func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar13));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar2 = *(undefined8 *)(param_1 + lVar13);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf49420(0x4040000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar13);
  uStack_98 = uVar3;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf49420(0x4040000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar13);
  uStack_90 = uVar5;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010bf34860(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar6;
  func_0x00010bf493a0(uVar6,param_2,lVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar13);
  uStack_88 = uVar8;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  func_0x00010bf348e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar9;
  func_0x00010bf493a0(uVar9,param_2,lVar13);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_80 = uVar12;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_98,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar10);
  _objc_release(puVar10);
  _objc_release(uVar12);
  _objc_release(lVar13);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(lVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  lVar14 = (long)_DAT_112713c0c;
  func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar14));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar11 = *(long *)(param_1 + lVar14);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar11;
  func_0x00010bf49420(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + lVar14);
  lStack_b8 = lVar7;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar12;
  func_0x00010bf49420(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar14);
  uStack_b0 = uVar3;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  func_0x00010bf34860(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010bf493a0(uVar2,param_2,lVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar14);
  uStack_a8 = uVar5;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf348e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar4;
  func_0x00010bf493a0(uVar4,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_a0 = uVar8;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_b8,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar10);
  _objc_release(puVar10);
  _objc_release(uVar8);
  _objc_release(param_1);
  _objc_release(uVar4);
  _objc_release(uVar5);
  _objc_release(lVar13);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar12);
  _objc_release(lVar7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return lVar11;
  }
  ___stack_chk_fail();
  return *(long *)(lVar11 + _DAT_112713c14);
}



/* Entry: 104e1cf78; end: 104e1cf87; -[SCVoiceoverPlaybackButton currentState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104e1cf78(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112713c14);
}



/* Entry: 104e1cf88; end: 104e1cfc7; -[SCVoiceoverPlaybackButton .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e1cf88(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112713c10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112713c0c,0);
  return;
}



/* Entry: 104e1cfc8; end: 104e1d28f; -[SCVoiceoverPlaybackControls initWithContentTimeRange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_104e1cfc8(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puStack_68 = PTR_PTR_1126e4668;
  uVar11 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar12 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar13 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar14 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  puVar2 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(uVar11,uVar12,uVar13,uVar14,puVar2,PTR_s_initWithFrame__1125e2948);
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)((long)puVar2 + (long)_DAT_112713c18);
    uVar9 = param_3[3];
    uVar8 = param_3[2];
    uVar7 = param_3[5];
    uVar5 = param_3[4];
    uVar10 = *param_3;
    puVar1[1] = param_3[1];
    *puVar1 = uVar10;
    puVar1[3] = uVar9;
    puVar1[2] = uVar8;
    puVar1[5] = uVar7;
    puVar1[4] = uVar5;
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(uVar11,uVar12,uVar13,uVar14);
    lVar6 = (long)_DAT_112713c1c;
    uVar5 = *(undefined8 *)((long)puVar2 + lVar6);
    *(undefined **)((long)puVar2 + lVar6) = puVar3;
    _objc_release(uVar5);
    func_0x00010c219b60(*(undefined8 *)((long)puVar2 + lVar6));
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf414e0(0x3fe6666666666666);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar2 + lVar6));
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126b0d80;
    _objc_alloc();
    func_0x00010c013de0(uVar11,uVar12,uVar13,uVar14);
    lVar6 = (long)_DAT_112713c20;
    uVar11 = *(undefined8 *)((long)puVar2 + lVar6);
    *(undefined **)((long)puVar2 + lVar6) = puVar3;
    _objc_release(uVar11);
    func_0x00010befbd60(*(undefined8 *)((long)puVar2 + lVar6));
    puVar3 = PTR_PTR_1126b0d88;
    _objc_alloc_init();
    lVar6 = (long)_DAT_112713c24;
    uVar11 = *(undefined8 *)((long)puVar2 + lVar6);
    *(undefined **)((long)puVar2 + lVar6) = puVar3;
    _objc_release(uVar11);
    func_0x00010c16d4a0(*(undefined8 *)((long)puVar2 + lVar6));
    func_0x00010c17e480(*(undefined8 *)((long)puVar2 + lVar6));
    func_0x00010c1b5280(*(undefined8 *)((long)puVar2 + lVar6));
    func_0x00010c182980(*(undefined8 *)((long)puVar2 + lVar6));
    func_0x00010c21a5e0(*(undefined8 *)((long)puVar2 + lVar6));
    func_0x00010c1fab20(*(undefined8 *)((long)puVar2 + lVar6));
    func_0x00010c288960(*(undefined8 *)((long)puVar2 + lVar6));
    func_0x00010befbb60(puVar2);
    func_0x00010befbb60(puVar2);
    func_0x00010bde6560(puVar2);
    func_0x00010bde6540(puVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)((long)puVar2 + (long)_DAT_112713c28);
    *(undefined **)((long)puVar2 + (long)_DAT_112713c28) = puVar3;
    _objc_release(uVar11);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)((long)puVar2 + (long)_DAT_112713c2c);
    *(undefined **)((long)puVar2 + (long)_DAT_112713c2c) = puVar3;
    _objc_release(uVar11);
    puVar3 = PTR_PTR_1126ae568;
    _objc_alloc_init();
    uVar11 = *(undefined8 *)((long)puVar2 + (long)_DAT_112713c30);
    *(undefined **)((long)puVar2 + (long)_DAT_112713c30) = puVar3;
    _objc_release(uVar11);
  }
  return puVar2;
}



/* Entry: 104e1d290; end: 104e1d2bf; -[SCVoiceoverPlaybackControls playbackButtonEventObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e1d290(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112713c30);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104e1d2c0; end: 104e1d2cf; -[SCVoiceoverPlaybackControls playbackButtonState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e1d2c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf60250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112713c20),PTR_s_currentState_1125b5a38);
  return;
}



/* Entry: 104e1d2d0; end: 104e1d32b; -[SCVoiceoverPlaybackControls setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e1d2d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112713c34;
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + lVar1,param_3);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + _DAT_112713c24));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104e1d32c; end: 104e1d343; -[SCVoiceoverPlaybackControls setThumbnails:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e1d32c(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c214090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_112713c24),PTR_s_setThumbnailFutures__112662a48);
    return;
  }
  return;
}



/* Entry: 104e1d344; end: 104e1d37f; -[SCVoiceoverPlaybackControls updatePlayheadWithTime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e1d344(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack_28 = param_3[1];
  uStack_30 = *param_3;
  uStack_20 = param_3[2];
  func_0x00010c288960(*(undefined8 *)(param_1 + _DAT_112713c24),param_2,&uStack_30);
  return;
}



/* Entry: 104e1d380; end: 104e1d4ff; -[SCVoiceoverPlaybackControls updateProgressOverlayWithTime:withAnimation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e1d380(long param_1,undefined8 param_2,undefined8 *param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  lVar6 = param_1 + _DAT_112713c18;
  uStack_68 = param_3[1];
  uStack_70 = *param_3;
  uStack_60 = param_3[2];
  uStack_88 = *(undefined8 *)(lVar6 + 0x20);
  uVar5 = *(undefined8 *)(lVar6 + 0x18);
  uStack_80 = *(undefined8 *)(lVar6 + 0x28);
  uStack_90 = uVar5;
  FUN_104e1d500(&uStack_70,&uStack_90);
  lVar7 = (long)_DAT_112713c38;
  func_0x00010c162480(*(undefined8 *)(param_1 + lVar7));
  lVar6 = (long)_DAT_112713c1c;
  uVar1 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c262ca0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar2;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf493e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar7);
  *(undefined8 *)(param_1 + lVar7) = uVar3;
  _objc_release(uVar5);
  _objc_release(uVar8);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c162480(*(undefined8 *)(param_1 + lVar7));
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_104e1d578;
  puStack_a0 = &UNK_110842e18;
  ppuVar4 = &puStack_b8;
  lStack_98 = param_1;
  _objc_retainBlock(ppuVar4);
  uVar8 = 0x3fd999999999999a;
  if (param_4 == 0) {
    uVar8 = 0;
  }
  func_0x00010bf03400(uVar8,PTR__OBJC_CLASS___UIView_1126aec20);
  _objc_release(ppuVar4);
  return;
}



/* Entry: 104e1d500; end: 104e1d577;  */

double FUN_104e1d500(double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dStack_50;
  double dStack_48;
  double dStack_40;
  
  dStack_48 = param_1[1];
  dVar2 = *param_1;
  dStack_40 = param_1[2];
  dStack_50 = dVar2;
  _CMTimeGetSeconds(&dStack_50);
  dStack_48 = param_2[1];
  dVar1 = *param_2;
  dStack_40 = param_2[2];
  dStack_50 = dVar1;
  _CMTimeGetSeconds(&dStack_50);
  dVar2 = dVar2 / dVar1;
  if (dVar2 <= 0.0) {
    dVar2 = 0.0;
  }
  dVar1 = 1.0;
  if (dVar2 <= 1.0) {
    dVar1 = dVar2;
  }
  return dVar1;
}



/* Entry: 104e1d578; end: 104e1d57f;  */

void FUN_104e1d578(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_layoutIfNeeded_112600d80);
  return;
}



/* Entry: 104e1d580; end: 104e1d75b; -[SCVoiceoverPlaybackControls addSegmentSeparatorAtTime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e1d580(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  double dStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  dVar7 = *(double *)(PTR__CGRectZero_110347608 + 0x10);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),dVar7,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1);
  _objc_release(puVar2);
  func_0x00010c21e900(puVar1);
  func_0x00010c1677c0(0,puVar1);
  lVar4 = param_1 + _DAT_112713c18;
  uStack_68 = param_3[1];
  uStack_70 = *param_3;
  uStack_60 = param_3[2];
  uStack_88 = *(undefined8 *)(lVar4 + 0x20);
  dVar6 = *(double *)(lVar4 + 0x18);
  uStack_80 = *(undefined8 *)(lVar4 + 0x28);
  dStack_90 = dVar6;
  FUN_104e1d500(&uStack_70,&dStack_90);
  lVar4 = (long)_DAT_112713c24;
  func_0x00010bfb68e0(*(undefined8 *)(param_1 + lVar4));
  func_0x00010bfb68e0(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c19f0e0(dVar6 * dVar7 + -1.0,0,0x4000000000000000,puVar1);
  func_0x00010befbb60(*(undefined8 *)(param_1 + _DAT_112713c1c));
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_104e1d75c;
  puStack_a0 = &UNK_110842e18;
  ppuVar3 = &puStack_b8;
  puStack_98 = puVar1;
  _objc_retainBlock(ppuVar3);
  func_0x00010bf03400(0x3fb999999999999a,PTR__OBJC_CLASS___UIView_1126aec20);
  uVar5 = *(undefined8 *)(param_1 + _DAT_112713c2c);
  puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c297120(PTR__OBJC_CLASS___NSValue_1126afdf8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar5);
  _objc_release(puVar2);
  func_0x00010befa120(*(undefined8 *)(param_1 + _DAT_112713c28));
  _objc_release(ppuVar3);
  _objc_release(puVar1);
  return;
}



/* Entry: 104e1d75c; end: 104e1d767;  */

void FUN_104e1d75c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,*(undefined8 *)(param_1 + 0x20),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 104e1d768; end: 104e1d82f; -[SCVoiceoverPlaybackControls removeLastSegmentSeparator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e1d768(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112713c28;
  lVar2 = *(long *)(param_2 + lVar4);
  func_0x00010bf529e0();
  puVar1 = PTR__kCMTimeZero_110348670;
  if (lVar2 != 0) {
    lVar2 = (long)_DAT_112713c2c;
    uVar3 = *(undefined8 *)(param_2 + lVar2);
    func_0x00010c089820(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfcbfc0();
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_2 + lVar4);
    func_0x00010c089820(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12c960();
    func_0x00010c12cd60(*(undefined8 *)(param_2 + lVar4));
    func_0x00010c12cd60(*(undefined8 *)(param_2 + lVar2));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  uVar3 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  param_1[1] = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  *param_1 = uVar3;
  param_1[2] = *(undefined8 *)(puVar1 + 0x10);
  return;
}



/* Entry: 104e1d830; end: 104e1d9b3; -[SCVoiceoverPlaybackControls setPlaybackButtonHidden:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e1d830(long param_1,undefined8 param_2,uint param_3)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined1 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [8];
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  
  lVar6 = (long)_DAT_112713c20;
  uVar2 = (uint)*(undefined8 *)(param_1 + lVar6);
  func_0x00010c074c20();
  if (param_3 != uVar2) {
    iVar3 = (int)*(undefined8 *)(param_1 + lVar6);
    func_0x00010c074c20();
    if (((param_3 & 1) == 0) && (iVar3 != 0)) {
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar6));
    }
    _objc_initWeak(auStack_68,param_1);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_104e1d9b4;
    puStack_80 = &UNK_11084ceb8;
    _objc_copyWeak(auStack_78,auStack_68);
    ppuVar4 = &puStack_98;
    uStack_70 = (char)param_3;
    _objc_retainBlock(ppuVar4);
    puStack_c8 = puVar1;
    uStack_c0 = 0xc2000000;
    uStack_b8 = 0x104e1da08;
    puStack_b0 = &UNK_110847580;
    _objc_copyWeak(auStack_a8,auStack_68);
    ppuVar5 = &puStack_c8;
    uStack_a0 = (char)param_3;
    _objc_retainBlock(ppuVar5);
    func_0x00010bf03420(0x3fb999999999999a,PTR__OBJC_CLASS___UIView_1126aec20);
    func_0x00010c21e900(*(undefined8 *)(param_1 + lVar6));
    _objc_release(ppuVar5);
    _objc_destroyWeak(auStack_a8);
    _objc_release(ppuVar4);
    _objc_destroyWeak(auStack_78);
    _objc_destroyWeak(auStack_68);
  }
  return;
}



/* Entry: 104e1d9b4; end: 104e1da4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e1d9b4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = 0;
    if (*(char *)(param_1 + 0x28) == '\0') {
      uVar2 = 0x3ff0000000000000;
    }
    func_0x00010c1677c0(uVar2,*(undefined8 *)(lVar1 + _DAT_112713c20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104e1da4c; end: 104e1da5b; -[SCVoiceoverPlaybackControls setPlaybackButtonState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e1da4c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c174a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112713c20),PTR_s_setButtonState__11263acb0);
  return;
}



/* Entry: 104e1da5c; end: 104e1dab3; -[SCVoiceoverPlaybackControls setPlayheadInteractionsEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e1da5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112713c24;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar2);
  func_0x00010c082800();
  if ((int)param_3 != iVar1) {
                    /* WARNING: Could not recover jumptable at 0x00010c21e910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + lVar2),PTR_s_setUserInteractionEnabled__112665468,param_3);
    return;
  }
  return;
}



/* Entry: 104e1dab4; end: 104e1db67; -[SCVoiceoverPlaybackControls _handlePlaybackButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e1dab4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = (long)_DAT_112713c20;
  lVar1 = *(long *)(param_1 + lVar3);
  func_0x00010bf60240();
  if (lVar1 == 1) {
    func_0x00010c174a40(*(undefined8 *)(param_1 + lVar3),param_2,0);
    uVar4 = *(undefined8 *)(param_1 + _DAT_112713c30);
    puVar2 = PTR_PTR_1126b0d90;
    func_0x00010c0f5b20(PTR_PTR_1126b0d90);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (lVar1 != 0) {
      return;
    }
    func_0x00010c174a40(*(undefined8 *)(param_1 + lVar3),param_2,1);
    uVar4 = *(undefined8 *)(param_1 + _DAT_112713c30);
    puVar2 = PTR_PTR_1126b0d90;
    func_0x00010c0fe360(PTR_PTR_1126b0d90);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c0d9840(uVar4,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 104e1db68; end: 104e1de17; -[SCVoiceoverPlaybackControls _constrainProgressOverlay] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e1db68(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar19 = (long)_DAT_112713c1c;
  uVar2 = *(undefined8 *)(param_1 + lVar19);
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar19);
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010bf493a0(uVar2,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar19);
  uStack_80 = uVar5;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar19);
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar7;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar6;
  func_0x00010bf493a0(uVar6,param_2,uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar19);
  uStack_78 = uVar12;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar19);
  func_0x00010c262ca0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar9;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar8;
  func_0x00010bf493a0(uVar8,param_2,uVar17);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar16;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_80,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar10);
  _objc_release(puVar10);
  _objc_release(uVar16);
  _objc_release(uVar17);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar11 = *(undefined8 *)(param_1 + lVar19);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + lVar19);
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar12;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar11;
  func_0x00010bf493e0(0,uVar11,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar19 = (long)_DAT_112713c38;
  uVar17 = *(undefined8 *)(param_1 + lVar19);
  *(undefined8 *)(param_1 + lVar19) = uVar5;
  _objc_release(uVar17);
  _objc_release(uVar4);
  _objc_release(uVar12);
  _objc_release(uVar11);
  lVar19 = *(long *)(param_1 + lVar19);
  func_0x00010c162480(lVar19,param_2,1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar18 = (long)_DAT_112713c20;
  lVar13 = *(long *)(lVar19 + lVar18);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar13;
  func_0x00010bf49420(0x4040000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(lVar19 + lVar18);
  lStack_148 = lVar14;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar12;
  func_0x00010bf49420(0x4040000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(lVar19 + lVar18);
  uStack_140 = uVar4;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar19;
  func_0x00010bf34860(lVar19);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar17;
  func_0x00010bf493a0(uVar17,param_2,lVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(lVar19 + lVar18);
  uStack_138 = uVar5;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf348e0(lVar19);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar16;
  func_0x00010bf493a0(uVar16,param_2,lVar19);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_130 = uVar11;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_148,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar10);
  _objc_release(puVar10);
  _objc_release(uVar11);
  _objc_release(lVar19);
  _objc_release(uVar16);
  _objc_release(uVar5);
  _objc_release(lVar15);
  _objc_release(uVar17);
  _objc_release(uVar4);
  _objc_release(uVar12);
  _objc_release(lVar14);
  _objc_release(lVar13);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_128) {
    return;
  }
  ___stack_chk_fail();
  _objc_loadWeakRetained(lVar13 + _DAT_112713c34);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e1de18; end: 104e1e00f; -[SCVoiceoverPlaybackControls _constrainPlaybackButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e1de18(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long lVar12;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = (long)_DAT_112713c20;
  lVar2 = *(long *)(param_1 + lVar12);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf49420(0x4040000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar12);
  lStack_98 = lVar3;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf49420(0x4040000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar12);
  uStack_90 = uVar5;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010bf34860(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar6;
  func_0x00010bf493a0(uVar6,param_2,lVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar12);
  uStack_88 = uVar8;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf348e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010bf493a0(uVar9,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_80 = uVar10;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_98,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar11);
  _objc_release(puVar11);
  _objc_release(uVar10);
  _objc_release(param_1);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(lVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  _objc_loadWeakRetained(lVar2 + _DAT_112713c34);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e1e010; end: 104e1e02f; -[SCVoiceoverPlaybackControls delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e1e010(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112713c34);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e1e030; end: 104e1e0cb; -[SCVoiceoverPlaybackControls .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e1e030(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112713c34);
  _objc_storeStrong(param_1 + _DAT_112713c30,0);
  _objc_storeStrong(param_1 + _DAT_112713c2c,0);
  _objc_storeStrong(param_1 + _DAT_112713c28,0);
  _objc_storeStrong(param_1 + _DAT_112713c38,0);
  _objc_storeStrong(param_1 + _DAT_112713c1c,0);
  _objc_storeStrong(param_1 + _DAT_112713c20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112713c24,0);
  return;
}



/* Entry: 104e1e0cc; end: 104e1e163; -[SCVoiceoverRecordingButton init] */

undefined1 * FUN_104e1e0cc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e4670;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae568;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126b0d98;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
    func_0x00010bea3ac0(puVar1);
    func_0x00010bdee300(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104e1e164; end: 104e1e18b; -[SCVoiceoverRecordingButton eventObservable] */

void FUN_104e1e164(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104e1e18c; end: 104e1e1b3; -[SCVoiceoverRecordingButton buttonView] */

void FUN_104e1e18c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104e1e1b4; end: 104e1e1bf; -[SCVoiceoverRecordingButton setButtonViewState:] */

void FUN_104e1e1b4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c209ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_setState_animated__112660220,param_3,1);
  return;
}



/* Entry: 104e1e1c0; end: 104e1e1c7; -[SCVoiceoverRecordingButton setEnabled:] */

void FUN_104e1e1c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setEnabled_animated__112586858,param_3,1);
  return;
}



/* Entry: 104e1e1c8; end: 104e1e253; -[SCVoiceoverRecordingButton _setEnabled:animated:] */

void FUN_104e1e1c8(long param_1,undefined8 param_2,uint param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (*(byte *)(param_1 + 0x19) != param_3) {
    *(char *)(param_1 + 0x19) = (char)param_3;
    uVar2 = 0;
    if (param_3 == 0) {
      uVar2 = 2;
    }
    func_0x00010c209fe0(*(undefined8 *)(param_1 + 0x10),param_2,uVar2);
    if (((param_3 & 1) == 0) && (*(char *)(param_1 + 0x18) == '\x01')) {
      uVar2 = *(undefined8 *)(param_1 + 8);
      puVar1 = PTR_PTR_1126b0da0;
      func_0x00010bf95d00(PTR_PTR_1126b0da0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar1);
      return;
    }
  }
  return;
}



/* Entry: 104e1e254; end: 104e1e2f7; -[SCVoiceoverRecordingButton _createGestures] */

void FUN_104e1e254(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc_init(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x00010befbd40();
  puVar2 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
  _objc_alloc_init(PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8);
  func_0x00010befbd40();
  func_0x00010c1c8340(0x3fc3333333333333,puVar2);
  func_0x00010c1374a0(puVar1,param_2,puVar2);
  func_0x00010bef9040(*(undefined8 *)(param_1 + 0x10),param_2,puVar1);
  func_0x00010bef9040(*(undefined8 *)(param_1 + 0x10),param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104e1e2f8; end: 104e1e3ab; -[SCVoiceoverRecordingButton _handleTapGesture:] */

void FUN_104e1e2f8(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  if ((*(char *)(param_1 + 0x19) == '\x01') && (func_0x00010c252440(), param_3 == 3)) {
    uVar3 = *(undefined8 *)(param_1 + 8);
    bVar1 = *(char *)(param_1 + 0x18) != '\x01';
    puVar2 = PTR_PTR_1126b0da0;
    if (bVar1) {
      func_0x00010bf17a00(PTR_PTR_1126b0da0);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bf95d00();
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c0d9840(uVar3,param_2,puVar2);
    _objc_release(puVar2);
    func_0x00010c209fe0(*(undefined8 *)(param_1 + 0x10),param_2,bVar1,1);
    *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) ^ 1;
  }
  return;
}



/* Entry: 104e1e3ac; end: 104e1e4d3; -[SCVoiceoverRecordingButton _handleLongPressGesture:] */

void FUN_104e1e3ac(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  
  _objc_retain(param_3);
  if (*(char *)(param_1 + 0x19) != '\x01') goto LAB_104e1e4bc;
  if (*(char *)(param_1 + 0x18) == '\x01') {
    lVar1 = param_3;
    func_0x00010c252440();
    if (lVar1 != 3) {
      if ((*(byte *)(param_1 + 0x18) & 1) == 0) goto LAB_104e1e400;
      goto LAB_104e1e450;
    }
LAB_104e1e470:
    uVar3 = *(undefined8 *)(param_1 + 8);
    puVar2 = PTR_PTR_1126b0da0;
    func_0x00010bf95d00(PTR_PTR_1126b0da0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar3,param_2,puVar2);
    uVar3 = 0;
    uVar4 = 0;
  }
  else {
LAB_104e1e400:
    lVar1 = param_3;
    func_0x00010c252440();
    if (lVar1 != 1) {
      if (*(char *)(param_1 + 0x18) != '\x01') goto LAB_104e1e4bc;
LAB_104e1e450:
      lVar1 = param_3;
      func_0x00010c252440();
      if ((lVar1 != 3) && (lVar1 = param_3, func_0x00010c252440(), lVar1 != 4)) goto LAB_104e1e4bc;
      goto LAB_104e1e470;
    }
    uVar3 = *(undefined8 *)(param_1 + 8);
    puVar2 = PTR_PTR_1126b0da0;
    func_0x00010bf17a00(PTR_PTR_1126b0da0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar3,param_2,puVar2);
    uVar3 = 1;
    uVar4 = 1;
  }
  _objc_release(puVar2);
  func_0x00010c209fe0(*(undefined8 *)(param_1 + 0x10),param_2,uVar3,1);
  *(undefined1 *)(param_1 + 0x18) = uVar4;
LAB_104e1e4bc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104e1e4d4; end: 104e1e4db; -[SCVoiceoverRecordingButton enabled] */

undefined1 FUN_104e1e4d4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x19);
}



/* Entry: 104e1e4dc; end: 104e1e50b; -[SCVoiceoverRecordingButton .cxx_destruct] */

void FUN_104e1e4dc(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104e1e50c; end: 104e1e5ef; -[SCVoiceoverRecordingButtonView init] */

undefined1 * FUN_104e1e50c(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  puStack_38 = PTR_PTR_1126e4678;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    func_0x00010c219b60(puVar2);
    puVar1 = PTR_PTR_1126b08d8;
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x000100b74f58(0x4024000000000000,0x3fc3333333333333,
                        *(undefined8 *)PTR__CGSizeZero_110347620,
                        *(undefined8 *)(PTR__CGSizeZero_110347620 + 8),puVar1,puVar2,puVar3);
    _objc_release(puVar3);
    func_0x00010c160fc0(puVar2);
    func_0x00010bdf5ae0(puVar2);
    func_0x00010be49800(puVar2);
    func_0x00010c209fe0(puVar2);
  }
  return (undefined1 *)puVar2;
}


