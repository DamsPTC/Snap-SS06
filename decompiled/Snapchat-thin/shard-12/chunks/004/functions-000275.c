/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1090a6794; end: 1090a6807; -[SCNeoMediaTrackSampleInfoIndexer sampleAfterSample:] */

void FUN_1090a6794(void)

{
  undefined8 unaff_x20;
  
  func_0x0001090a6b6c();
  func_0x00010be987e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1494a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001090a6b24();
  func_0x0001090a6b1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x20);
  return;
}



/* Entry: 1090a6808; end: 1090a6847; -[SCNeoMediaTrackSampleInfoIndexer sampleInfos] */

void FUN_1090a6808(void)

{
  func_0x00010be987e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c149800();
  _objc_retainAutoreleasedReturnValue();
  FUN_1090a6b10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1090a6848; end: 1090a69db; -[SCNeoMediaTrackSampleInfoIndexer _computeBitrate] */

undefined8 * FUN_1090a6848(ulong param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  double dVar8;
  double dVar9;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [24];
  double dStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  double dStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_68;
  
  puVar2 = &uStack_1a0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_f8 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  dStack_100 = *(double *)PTR__kCMTimeZero_110348670;
  uStack_f0 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  dVar8 = 0.0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = param_1;
  func_0x0001090a6ba8();
  func_0x0001090a6b40();
  if (uVar1 == 0) {
    dVar9 = 0.0;
  }
  else {
    uVar5 = 0;
    lVar6 = *plStack_130;
    do {
      uVar7 = 0;
      do {
        if (*plStack_130 != lVar6) {
          _objc_enumerationMutation(uVar3);
        }
        uVar4 = *(ulong *)(lStack_138 + uVar7 * 8);
        if (uVar4 == 0) {
          uStack_188 = 0;
          uStack_190 = 0;
          uStack_178 = 0;
          uStack_180 = 0;
          uStack_198 = 0;
          uStack_1a0 = 0;
        }
        else {
          func_0x00010c10f780(&uStack_1a0,uVar4);
        }
        func_0x0001090a6b8c(auStack_170);
        func_0x0001090a6b2c();
        _CMTimeMaximum(&dStack_158,auStack_170,&uStack_1a0);
        uStack_f8 = uStack_150;
        dStack_100 = dStack_158;
        uStack_f0 = uStack_148;
        dVar8 = dStack_158;
        func_0x00010c23d4c0();
        uVar5 = uVar4 + uVar5;
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar1);
      func_0x0001090a6b40();
      uVar1 = uVar4;
    } while (uVar4 != 0);
    dVar9 = (double)uVar5;
  }
  func_0x0001090a6b24();
  func_0x0001090a6b2c();
  _CMTimeGetSeconds();
  *(long *)(param_1 + 0x40) = (long)(dVar9 / dVar8) << 3;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x0001090a6b24();
  func_0x0001090a6bb0();
  if ((*(byte *)((long)puVar2 + 0x48) & 1) == 0) {
    *(undefined1 *)((long)puVar2 + 0x48) = 1;
    func_0x00010bde42e0(puVar2);
  }
  return (undefined8 *)*(undefined1 **)((long)puVar2 + 0x40);
}



/* Entry: 1090a69dc; end: 1090a6a13; -[SCNeoMediaTrackSampleInfoIndexer bitrate] */

undefined8 FUN_1090a69dc(long param_1)

{
  if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x48) = 1;
    func_0x00010bde42e0(param_1);
  }
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1090a6a14; end: 1090a6abf; -[SCNeoMediaTrackSampleInfoIndexer mutableCopy] */

undefined * FUN_1090a6a14(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126dd458;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(puVar1 + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(puVar1 + 8) = uVar3;
  *(undefined8 *)(puVar1 + 0x18) = uVar2;
  func_0x00010befa160(*(undefined8 *)(puVar1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x20));
  func_0x00010befa160(*(undefined8 *)(puVar1 + 0x28),param_2,*(undefined8 *)(param_1 + 0x28));
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar3);
  uVar2 = *(undefined8 *)(puVar1 + 0x30);
  *(undefined8 *)(puVar1 + 0x30) = uVar3;
  _objc_release(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar3);
  uVar2 = *(undefined8 *)(puVar1 + 0x38);
  *(undefined8 *)(puVar1 + 0x38) = uVar3;
  _objc_release(uVar2);
  *(undefined8 *)(puVar1 + 0x40) = *(undefined8 *)(param_1 + 0x40);
  puVar1[0x48] = *(undefined1 *)(param_1 + 0x48);
  return puVar1;
}



/* Entry: 1090a6ac0; end: 1090a6ad3; -[SCNeoMediaTrackSampleInfoIndexer duration] */

void FUN_1090a6ac0(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  param_1[1] = *(undefined8 *)(param_2 + 0x10);
  *param_1 = uVar1;
  param_1[2] = *(undefined8 *)(param_2 + 0x18);
  return;
}



/* Entry: 1090a6ad4; end: 1090a6b0f; -[SCNeoMediaTrackSampleInfoIndexer .cxx_destruct] */

void FUN_1090a6ad4(long param_1)

{
  func_0x0001090a6bb8(param_1 + 0x38);
  func_0x0001090a6bb8(param_1 + 0x30);
  func_0x0001090a6bb8(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 1090a6b10; end: 1090a6bfb;  */

void FUN_1090a6b10(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1090a6bfc; end: 1090a6c7f; -[SCNeoMediaTrackSegmentInfoIndexer init] */

undefined1 * FUN_1090a6bfc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112700538;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__kCMTimeZero_110348670;
    uVar3 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    *(undefined8 *)((long)puVar1 + 0x20) = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x28) = *(undefined8 *)(puVar2 + 0x10);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1090a6c80; end: 1090a6d3b; -[SCNeoMediaTrackSegmentInfoIndexer appendSegmentInfo:] */

void FUN_1090a6c80(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_50 [24];
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  func_0x00010befa120(*(undefined8 *)(param_1 + 8));
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  _objc_release(uVar1);
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_28 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
  }
  else {
    func_0x00010c10f700(&uStack_38,param_3);
    func_0x00010bf8b160(&uStack_70,param_3);
  }
  _CMTimeAdd(auStack_50,&uStack_38,&uStack_70);
  uStack_68 = *(undefined8 *)(param_1 + 0x20);
  uStack_70 = *(undefined8 *)(param_1 + 0x18);
  uStack_60 = *(undefined8 *)(param_1 + 0x28);
  _CMTimeMaximum(&uStack_38,&uStack_70,auStack_50);
  *(undefined8 *)(param_1 + 0x20) = uStack_30;
  *(undefined8 *)(param_1 + 0x18) = uStack_38;
  *(undefined8 *)(param_1 + 0x28) = uStack_28;
  FUN_1090a7028();
  return;
}



/* Entry: 1090a6d3c; end: 1090a6e83; -[SCNeoMediaTrackSegmentInfoIndexer segmentAtTime:] */

void FUN_1090a6d3c(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  func_0x00010be6e420();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  FUN_1090950b0();
  uVar2 = param_1;
  func_0x00010bf529e0();
  if (uVar1 < uVar2) {
    func_0x00010c0dfd40(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    param_1 = 0;
  }
  FUN_1090a7028();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1090a6e84; end: 1090a6edf; -[SCNeoMediaTrackSegmentInfoIndexer _orderedSegmentInfos] */

void FUN_1090a6e84(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c246ca0(uVar1,param_2,&PTR___NSConcreteGlobalBlock_110ad7b90);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = uVar1;
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + 0x10);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1090a6ee0; end: 1090a6f77;  */

undefined8 * FUN_1090a6ee0(undefined8 param_1,long param_2,long param_3)

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
    func_0x00010c10f700(&uStack_48,param_2);
  }
  if (param_3 == 0) {
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
  }
  else {
    func_0x00010c10f700(&uStack_60,param_3);
  }
  puVar1 = &uStack_48;
  FUN_109096270(puVar1,&uStack_60);
  _objc_release(param_3);
  FUN_1090a7028();
  return puVar1;
}



/* Entry: 1090a6f78; end: 1090a6fe3; -[SCNeoMediaTrackSegmentInfoIndexer mutableCopy] */

undefined * FUN_1090a6f78(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126dd460;
  _objc_opt_new();
  func_0x00010befa160(*(undefined8 *)(puVar1 + 8),param_2,*(undefined8 *)(param_1 + 8));
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar3);
  uVar2 = *(undefined8 *)(puVar1 + 0x10);
  *(undefined8 *)(puVar1 + 0x10) = uVar3;
  _objc_release(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(puVar1 + 0x28) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(puVar1 + 0x20) = uVar3;
  *(undefined8 *)(puVar1 + 0x18) = uVar2;
  return puVar1;
}



/* Entry: 1090a6fe4; end: 1090a6ff7; -[SCNeoMediaTrackSegmentInfoIndexer duration] */

void FUN_1090a6fe4(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  param_1[1] = *(undefined8 *)(param_2 + 0x20);
  *param_1 = uVar1;
  param_1[2] = *(undefined8 *)(param_2 + 0x28);
  return;
}



/* Entry: 1090a6ff8; end: 1090a7027; -[SCNeoMediaTrackSegmentInfoIndexer .cxx_destruct] */

void FUN_1090a6ff8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1090a7028; end: 1090a702f;  */

void FUN_1090a7028(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1090a7030; end: 1090a7167; -[SCNeoMediaTrackStream initWithSampleInfoIndexer:segmentInfoIndexer:trackInfo:blockAllocatorPool:instruments:] */

undefined1 *
FUN_1090a7030(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar2 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x0001090a75c8();
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_112700540;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    func_0x0001090a75c8();
    uVar3 = *(undefined8 *)((long)puVar2 + 0x20);
    *(undefined8 *)((long)puVar2 + 0x20) = param_5;
    _objc_release(uVar3);
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar2 + 8);
    *(undefined8 *)((long)puVar2 + 8) = param_3;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar2 + 0x10);
    *(undefined8 *)((long)puVar2 + 0x10) = param_4;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar3 = *(undefined8 *)((long)puVar2 + 0x28);
    *(undefined8 *)((long)puVar2 + 0x28) = param_6;
    _objc_release(uVar3);
    _objc_retain(param_7);
    uVar3 = *(undefined8 *)((long)puVar2 + 0x18);
    *(undefined8 *)((long)puVar2 + 0x18) = param_7;
    _objc_release(uVar3);
    puVar1 = PTR__kCMTimeZero_110348670;
    uVar3 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    *(undefined8 *)((long)puVar2 + 0x48) = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    *(undefined8 *)((long)puVar2 + 0x40) = uVar3;
    *(undefined8 *)((long)puVar2 + 0x50) = *(undefined8 *)(puVar1 + 0x10);
    *(undefined1 *)((long)puVar2 + 0x60) = 1;
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  func_0x0001090a75d8();
  return (undefined1 *)puVar2;
}



/* Entry: 1090a7168; end: 1090a71b3; -[SCNeoMediaTrackStream dealloc] */

void FUN_1090a7168(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  if (*(long *)(param_1 + 0x58) != 0) {
    _CFRelease();
  }
  puStack_28 = PTR_PTR_112700540;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1090a71b4; end: 1090a7227; -[SCNeoMediaTrackStream hasNextSampleBufferInBuffer:] */

undefined8 FUN_1090a71b4(void)

{
  long lVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  func_0x0001090a75a0();
  lVar1 = *(long *)(unaff_x20 + 0x20);
  func_0x00010bfb5ae0();
  if (lVar1 != 0) {
    func_0x00010be94bc0();
    if (*(long *)(unaff_x20 + 0x30) != 0) {
      func_0x00010bf21d60();
      func_0x00010c23d4c0(*(undefined8 *)(unaff_x20 + 0x30));
      func_0x00010bf4baa0();
      goto LAB_1090a7210;
    }
  }
  unaff_x19 = 0;
LAB_1090a7210:
  func_0x0001090a75d8();
  return unaff_x19;
}



/* Entry: 1090a7228; end: 1090a722f; -[SCNeoMediaTrackStream didReachEndOfStream] */

undefined1 FUN_1090a7228(long param_1)

{
  return *(undefined1 *)(param_1 + 0x61);
}



/* Entry: 1090a7230; end: 1090a7397; -[SCNeoMediaTrackStream dequeueNextSampleBufferInBuffer:withError:] */

void FUN_1090a7230(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  func_0x0001090a75a0();
  lVar2 = unaff_x20;
  func_0x00010bfd9740();
  if ((int)lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    if (*(long *)(unaff_x20 + 0x58) == 0) {
      uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
      func_0x00010bfb5ae0(*(undefined8 *)(unaff_x20 + 0x20));
      func_0x00010bf1d240();
      *(undefined8 *)(unaff_x20 + 0x58) = uVar1;
      _CFRetain();
    }
    uVar4 = *(undefined8 *)(unaff_x20 + 0x30);
    func_0x0001090a75c8();
    uVar1 = *(undefined8 *)(unaff_x20 + 8);
    func_0x00010c1494a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
    *(undefined8 *)(unaff_x20 + 0x30) = uVar1;
    func_0x0001090a75d0(uVar3);
    if (*(long *)(unaff_x20 + 0x30) == 0) {
      *(undefined1 *)(unaff_x20 + 0x61) = 1;
    }
    func_0x00010c27dd80();
    func_0x00010c1003c0(*(undefined8 *)(unaff_x20 + 0x18));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf18c40();
    func_0x0001090a75e0();
    lVar2 = *(long *)(unaff_x20 + 0x20);
    FUN_1090c1e0c(lVar2,uVar4,*(undefined8 *)(unaff_x20 + 0x58));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1003c0(*(undefined8 *)(unaff_x20 + 0x18));
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      func_0x00010bf2f260();
    }
    else {
      func_0x00010bfec6c0();
      func_0x0001090a75e0();
      func_0x00010c1003c0(*(undefined8 *)(unaff_x20 + 0x18));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf95880();
    }
    func_0x0001090a75e0();
    _objc_release(uVar4);
  }
  func_0x0001090a75d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1090a7398; end: 1090a7413; -[SCNeoMediaTrackStream _resolveNextSampleInfoIfNeeded] */

void FUN_1090a7398(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 0x60) == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x0001090a75b0();
    func_0x00010bfb1e00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = uVar1;
    func_0x0001090a75d0(uVar2);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x0001090a75b0();
    func_0x00010c158180();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x38) = uVar1;
    func_0x0001090a75d0(uVar2);
    if (*(long *)(param_1 + 0x30) != 0) {
      *(undefined1 *)(param_1 + 0x60) = 0;
    }
  }
  return;
}



/* Entry: 1090a7414; end: 1090a74e7; -[SCNeoMediaTrackStream seekToTime:toleranceBefore:toleranceAfter:] */

void FUN_1090a7414(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  lVar1 = *(long *)(param_2 + 8);
  uStack_48 = param_4[1];
  uStack_50 = *param_4;
  uStack_40 = param_4[2];
  uStack_68 = param_5[1];
  uStack_70 = *param_5;
  uStack_60 = param_5[2];
  uStack_88 = param_6[1];
  uStack_90 = *param_6;
  uStack_80 = param_6[2];
  func_0x00010c266560(lVar1,param_3,&uStack_50,&uStack_70,&uStack_90);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010c10f700(&uStack_50,lVar1);
    param_4[1] = uStack_48;
    *param_4 = uStack_50;
    param_4[2] = uStack_40;
  }
  uVar3 = param_4[1];
  uVar2 = *param_4;
  *(undefined8 *)(param_2 + 0x50) = param_4[2];
  *(undefined8 *)(param_2 + 0x48) = uVar3;
  *(undefined8 *)(param_2 + 0x40) = uVar2;
  *(undefined2 *)(param_2 + 0x60) = 1;
  uVar2 = *param_4;
  param_1[1] = param_4[1];
  *param_1 = uVar2;
  param_1[2] = param_4[2];
  _objc_release(lVar1);
  return;
}



/* Entry: 1090a74e8; end: 1090a7543; -[SCNeoMediaTrackStream bufferLocation] */

undefined1  [16] FUN_1090a74e8(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined1 auVar4 [16];
  
  func_0x00010be94bc0();
  plVar3 = (long *)(param_1 + 0x30);
  lVar1 = *plVar3;
  if (lVar1 == 0) {
    plVar3 = (long *)(param_1 + 0x38);
    lVar1 = *plVar3;
    if (lVar1 == 0) {
      lVar1 = 0;
      lVar2 = 0;
      goto LAB_1090a7528;
    }
  }
  func_0x00010bf21d60();
  lVar2 = *plVar3;
  func_0x00010c23d4c0(lVar2);
LAB_1090a7528:
  auVar4._8_8_ = lVar2;
  auVar4._0_8_ = lVar1;
  return auVar4;
}



/* Entry: 1090a7544; end: 1090a7597; -[SCNeoMediaTrackStream .cxx_destruct] */

void FUN_1090a7544(long param_1)

{
  FUN_1090a7598(param_1 + 0x38);
  FUN_1090a7598(param_1 + 0x30);
  FUN_1090a7598(param_1 + 0x28);
  FUN_1090a7598(param_1 + 0x20);
  FUN_1090a7598(param_1 + 0x18);
  FUN_1090a7598(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1090a7598; end: 1090a75e7;  */

void FUN_1090a7598(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1,0);
  return;
}



/* Entry: 1090a75e8; end: 1090a7673; -[SCNeoMediaVideoToolboxCodec makeDecoderWithFormatDescription:delegateQueue:instruments:maxDecodingFramesInFlight:discardStaleFramesOnFlush:] */

void FUN_1090a75e8(void)

{
  undefined *puVar1;
  undefined8 in_x3;
  undefined8 in_x4;
  
  puVar1 = PTR_PTR_1126dd488;
  _objc_retain(in_x4);
  _objc_retain(in_x3);
  _objc_alloc(puVar1);
  func_0x00010c00b480();
  _objc_release(in_x4);
  _objc_release(in_x3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1090a7674; end: 1090a76db; -[SCNeoMediaVideoToolboxCodec supportsCodec:instruments:] */

undefined8 FUN_1090a7674(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 in_x3;
  
  func_0x00010c2778c0(in_x3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = in_x3;
  FUN_109094c84();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf4b680();
  _objc_release(uVar1);
  _objc_release(in_x3);
  return uVar2;
}



/* Entry: 1090a76dc; end: 1090a782f; -[SCNeoMediaVideoToolboxSampleBufferDecoder initWithDelegateQueue:formatDescription:instruments:maxDecodingFramesInFlight:discardStaleFramesOnFlush:] */

undefined1 *
FUN_1090a76dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar2 = &uStack_60;
  _objc_retain(param_3);
  func_0x0001090a8fb0();
  puStack_58 = PTR_PTR_112700548;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar2 + 8) = param_4;
    *(undefined4 *)((long)puVar2 + 0x10) = 0x34323066;
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar2 + 0x20);
    *(undefined8 *)((long)puVar2 + 0x20) = param_3;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar2 + 0x60) = param_6;
    *(undefined1 *)((long)puVar2 + 0x68) = param_7;
    func_0x0001090a8fb0();
    uVar3 = *(undefined8 *)((long)puVar2 + 0x58);
    *(undefined8 *)((long)puVar2 + 0x58) = param_5;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar2 + 0x28) = 0;
    *(undefined8 *)((long)puVar2 + 0x30) = 0;
    puVar1 = PTR__kCMTimeZero_110348670;
    uVar3 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    *(undefined8 *)((long)puVar2 + 0x40) = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    *(undefined8 *)((long)puVar2 + 0x38) = uVar3;
    *(undefined8 *)((long)puVar2 + 0x48) = *(undefined8 *)(puVar1 + 0x10);
    *(undefined8 *)((long)puVar2 + 0x50) = 0;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    func_0x0001090a8f64();
  }
  func_0x0001090a8ef0();
  func_0x0001090a8ee8();
  return (undefined1 *)puVar2;
}



/* Entry: 1090a7830; end: 1090a78af; -[SCNeoMediaVideoToolboxSampleBufferDecoder appDidEnterBackground] */

void FUN_1090a7830(long param_1)

{
  long unaff_x20;
  undefined1 auStack_28 [8];
  
  func_0x00010bfe5ec0(*(undefined8 *)(param_1 + 0x58));
  _objc_retainAutoreleasedReturnValue();
  func_0x0001090a8f48();
  func_0x00010bdc3520();
  func_0x0001090a8ef0();
  func_0x0001090a9048(auStack_28);
  func_0x0001090a8f94();
  func_0x0001090a8f10(FUN_1090a78b0,0xc2000000);
  func_0x0001090a9024();
  _objc_destroyWeak(unaff_x20 + 0x20);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1090a78b0; end: 1090a78df;  */

void FUN_1090a78b0(undefined8 param_1)

{
  func_0x0001090a8fec();
  func_0x00010c137fe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1090a78e0; end: 1090a7963; -[SCNeoMediaVideoToolboxSampleBufferDecoder canAcceptFormatDescription:] */

undefined8 FUN_1090a78e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _CMFormatDescriptionGetMediaSubType(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c2778c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  FUN_109094c84();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b680();
  func_0x0001090a8ef0();
  func_0x0001090a8ee8();
  return uVar1;
}



/* Entry: 1090a7964; end: 1090a798f; -[SCNeoMediaVideoToolboxSampleBufferDecoder isReadyForMoreSampleBuffer] */

bool FUN_1090a7964(long param_1)

{
  if (*(long *)(param_1 + 0x50) == 1) {
    return false;
  }
  return (long)*(int *)(param_1 + 0x28) < *(long *)(param_1 + 0x60);
}



/* Entry: 1090a7990; end: 1090a7e9f; -[SCNeoMediaVideoToolboxSampleBufferDecoder enqueueSampleBuffer:] */

void FUN_1090a7990(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_160 [8];
  undefined8 uStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined1 auStack_138 [8];
  undefined8 uStack_130;
  long lStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined1 auStack_fc [24];
  undefined8 uStack_e4;
  undefined8 uStack_dc;
  undefined8 uStack_d4;
  undefined8 uStack_cc;
  undefined8 uStack_c4;
  undefined8 uStack_bc;
  undefined1 auStack_b4 [4];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  uVar2 = (undefined4)*(undefined8 *)(param_1 + 0x58);
  func_0x00010c1003c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18c40();
  FUN_1090a8ee8();
  if (*(long *)(param_1 + 0x18) == 0) {
    lVar10 = param_1;
    func_0x00010bdecc40();
    *(long *)(param_1 + 0x18) = lVar10;
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  func_0x00010be69500(param_1);
  _CMSampleBufferGetPresentationTimeStamp(&uStack_cc,param_3);
  _CMSampleBufferGetDecodeTimeStamp(&uStack_e4);
  func_0x0001090a9080();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uStack_a8 = uStack_dc;
  uStack_b0 = uStack_e4;
  uStack_a0 = uStack_d4;
  func_0x0001090a9070();
  FUN_1090c1c24();
  func_0x00010c25d9e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe5ec0(*(undefined8 *)(param_1 + 0x58));
  _objc_retainAutoreleasedReturnValue();
  func_0x0001090a8f74();
  func_0x00010bdc3520();
  FUN_1090a8ee8();
  uStack_a8 = uStack_c4;
  uStack_b0 = uStack_cc;
  uStack_a0 = uStack_bc;
  _CMSampleBufferGetDuration(auStack_fc,param_3);
  _CMTimeAdd(&uStack_90,&uStack_b0,auStack_fc);
  uStack_a8 = *(undefined8 *)(param_1 + 0x40);
  uStack_b0 = *(undefined8 *)(param_1 + 0x38);
  uStack_a0 = *(undefined8 *)(param_1 + 0x48);
  puVar4 = &uStack_90;
  _CMTimeCompare(puVar4,&uStack_b0);
  uVar8 = 3;
  if (-1 < (int)puVar4) {
    uVar8 = 1;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c2778c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf17b80();
  func_0x0001090a8ef0();
  uVar9 = *(undefined8 *)(param_1 + 0x58);
  func_0x0001090a8fb0();
  _objc_initWeak(&uStack_b0,param_1);
  lVar10 = *(long *)(param_1 + 0x30);
  lVar11 = *(long *)(param_1 + 0x18);
  if (lVar11 == 0) {
    func_0x00010be694e0(param_1);
    func_0x00010c2778c0(*(undefined8 *)(param_1 + 0x58));
    _objc_retainAutoreleasedReturnValue();
    func_0x0001090a905c();
    FUN_1090a8ee8();
    func_0x00010c1003c0(*(undefined8 *)(param_1 + 0x58));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf95880();
  }
  else {
    _CFRetain(lVar11);
    func_0x0001090a8f94();
    uStack_158 = 0xc2000000;
    pcStack_150 = FUN_1090a7ea0;
    puStack_148 = &UNK_110ad7bb0;
    func_0x0001090a8fb0();
    uStack_140 = uVar9;
    uStack_130 = uVar5;
    _objc_copyWeak(auStack_138,&uStack_b0);
    uStack_110 = uStack_dc;
    uStack_118 = uStack_e4;
    uStack_108 = uStack_d4;
    lVar6 = lVar11;
    lStack_128 = lVar10;
    lStack_120 = lVar11;
    uStack_100 = uVar2;
    _VTDecompressionSessionDecodeFrameWithOutputHandler(lVar11,param_3,uVar8,auStack_b4,auStack_160)
    ;
    if ((uint)lVar6 != 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x58);
      func_0x00010c2778c0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x0001090a8ff4();
      puVar7 = puVar1;
      func_0x00010c25d9e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x0001090a9080();
      func_0x0001090a9070();
      uStack_88 = uStack_dc;
      uStack_90 = uStack_e4;
      uStack_80 = uStack_d4;
      func_0x0001090a9070();
      func_0x00010c25d9e0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf0bfe0(uVar5);
      FUN_1090a8ee8();
      _objc_release(puVar7);
      _objc_release(uVar5);
      if (lVar10 == *(long *)(param_1 + 0x30)) {
        if (((uint)lVar6 & 0xfffffff7) == 0xffffcd91) {
          func_0x00010c137fe0(param_1);
          func_0x00010bfe5ec0(uVar9);
          _objc_retainAutoreleasedReturnValue();
          func_0x0001090a8f74();
          func_0x00010bdc3520();
          FUN_1090a8ee8();
          FUN_109096640(&PTR____CFConstantStringClassReference_110f20c18,lVar6,
                        &PTR____CFConstantStringClassReference_110f20c38);
          _objc_retainAutoreleasedReturnValue();
          func_0x0001090a8fa0();
        }
        else {
          func_0x00010bfe5ec0(uVar9);
          _objc_retainAutoreleasedReturnValue();
          func_0x0001090a8f74();
          func_0x00010bdc3520();
          FUN_1090a8ee8();
          FUN_1090966fc(&PTR____CFConstantStringClassReference_110f20c58,lVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x0001090a8fa0();
        }
        func_0x0001090a9030();
      }
      _CFRelease(lVar11);
      func_0x00010be694e0(param_1);
      func_0x00010c2778c0(*(undefined8 *)(param_1 + 0x58));
      _objc_retainAutoreleasedReturnValue();
      func_0x0001090a905c();
      FUN_1090a8ee8();
      func_0x00010c1003c0(*(undefined8 *)(param_1 + 0x58));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf95880();
      FUN_1090a8ee8();
    }
    _objc_destroyWeak(auStack_138);
  }
  func_0x0001090a8f30();
  _objc_destroyWeak(&uStack_b0);
  func_0x0001090a8ef0();
  _objc_release(puVar3);
  return;
}



/* Entry: 1090a7ea0; end: 1090a7fa7;  */

void FUN_1090a7ea0(long param_1)

{
  func_0x00010c2778c0(*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf941e0();
  func_0x0001090a8f30();
  _objc_loadWeakRetained(param_1 + 0x28);
  func_0x00010be27e00();
  func_0x0001090a8f30();
  func_0x00010c1003c0(*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf95880();
  func_0x0001090a8ef0();
  _CFRelease(*(undefined8 *)(param_1 + 0x40));
  return;
}



/* Entry: 1090a7fa8; end: 1090a8577; -[SCNeoMediaVideoToolboxSampleBufferDecoder _handleDecodedImageBuffer:status:presentationDuration:presentationTimeStamp:generationId:decodeTimeStamp:] */

/* WARNING: Type propagation algorithm not settling */

void FUN_1090a7fa8(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 *param_6,long param_7,undefined8 *param_8)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long alStack_110 [3];
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [8];
  long lStack_70;
  
  if ((int)param_4 == 0) {
    if (param_7 == *(long *)(param_1 + 0x30)) {
      if (param_3 == 0) {
        func_0x0001090a9094();
        func_0x0001090a8f50();
        func_0x00010bebc640(param_1);
      }
      else {
        uStack_f8 = param_5[1];
        alStack_110[2] = *param_5;
        uStack_f0 = param_5[2];
        uStack_e0 = param_6[1];
        uStack_e8 = *param_6;
        uStack_d8 = param_6[2];
        uStack_c8 = param_8[1];
        uStack_d0 = *param_8;
        uStack_c0 = param_8[2];
        alStack_110[0] = 0;
        alStack_110[1] = 0;
        lVar7 = *(long *)(param_1 + 8);
        if (lVar7 != 0) {
          uVar8 = *(undefined8 *)PTR__kCVImageBufferColorPrimariesKey_11034a2b8;
          lVar4 = lVar7;
          _CMFormatDescriptionGetExtension(lVar7,uVar8);
          uVar6 = *(undefined8 *)PTR__kCVImageBufferTransferFunctionKey_11034a310;
          lVar5 = lVar7;
          _CMFormatDescriptionGetExtension(lVar7,uVar6);
          uVar3 = *(undefined8 *)PTR__kCVImageBufferYCbCrMatrixKey_11034a350;
          _CMFormatDescriptionGetExtension();
          if (lVar4 != 0) {
            func_0x0001090a9038(param_3,uVar8,lVar4);
          }
          if (lVar5 != 0) {
            func_0x0001090a9038(param_3,uVar6,lVar5);
          }
          if (lVar7 != 0) {
            func_0x0001090a9038(param_3,uVar3,lVar7);
          }
        }
        uVar6 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
        uVar3 = uVar6;
        _CMVideoFormatDescriptionCreateForImageBuffer(uVar6,param_3,alStack_110);
        if ((int)uVar3 == 0) {
          _CMSampleBufferCreateForImageBuffer
                    (uVar6,param_3,1,0,0,alStack_110[0],alStack_110 + 2,alStack_110 + 1);
          if (alStack_110[0] != 0) {
            _CFRelease();
          }
          if ((int)uVar6 == 0) {
            func_0x00010bfe5ec0(*(undefined8 *)(param_1 + 0x58));
            _objc_retainAutoreleasedReturnValue();
            func_0x0001090a8f48();
            func_0x00010bdc3520();
            func_0x0001090a8ef0();
            func_0x00010c1003c0(*(undefined8 *)(param_1 + 0x58));
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfec6c0();
            func_0x0001090a8ef0();
            func_0x00010be6ea20(param_1);
            return;
          }
          func_0x00010c2778c0();
          _objc_retainAutoreleasedReturnValue();
          puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x0001090a8ff4();
          func_0x00010c25d9e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x0001090a8f50();
          func_0x0001090a8fe4();
          func_0x0001090a9000();
          func_0x0001090a8fe4();
          func_0x00010c25d9e0(puVar2);
          _objc_retainAutoreleasedReturnValue();
          func_0x0001090a8fc4();
          func_0x0001090a8f30();
          func_0x0001090a8f38();
          func_0x0001090a8ef0();
          func_0x00010bfe5ec0(*(undefined8 *)(param_1 + 0x58));
          _objc_retainAutoreleasedReturnValue();
          func_0x0001090a8f48();
          func_0x00010bdc3520();
          func_0x0001090a8ef0();
          FUN_1090966fc(&PTR____CFConstantStringClassReference_110f20d18,uVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x0001090a8ef8();
        }
        else {
          func_0x00010c2778c0(*(undefined8 *)(param_1 + 0x58));
          _objc_retainAutoreleasedReturnValue();
          puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x0001090a8ff4();
          func_0x00010c25d9e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x0001090a8f50();
          func_0x0001090a8fe4();
          func_0x0001090a9000();
          func_0x0001090a8fe4();
          func_0x00010c25d9e0(puVar2);
          _objc_retainAutoreleasedReturnValue();
          func_0x0001090a8fc4();
          func_0x0001090a8f30();
          func_0x0001090a8f38();
          func_0x0001090a8ef0();
          func_0x00010bfe5ec0(*(undefined8 *)(param_1 + 0x58));
          _objc_retainAutoreleasedReturnValue();
          func_0x0001090a8f48();
          func_0x00010bdc3520();
          func_0x0001090a8ef0();
          FUN_1090966fc(&PTR____CFConstantStringClassReference_110f20cd8,uVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x0001090a8ef8();
        }
        func_0x0001090a8ef0();
      }
      func_0x0001090a9040();
      return;
    }
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010c2778c0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x0001090a8ff4();
    func_0x00010c25d9e0();
    _objc_retainAutoreleasedReturnValue();
    uStack_f8 = param_6[1];
    alStack_110[2] = *param_6;
    uStack_f0 = param_6[2];
    FUN_1090c1c24();
    func_0x0001090a9094();
    FUN_1090c1c24();
    func_0x00010c25d9e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0bfe0(uVar3);
    func_0x0001090a8f30();
    func_0x0001090a9030();
    func_0x0001090a8f6c();
    if (param_7 == *(long *)(param_1 + 0x30)) {
      uVar1 = (int)param_4 + 0x326f;
      if ((uVar1 < 9) && ((1 << (ulong)(uVar1 & 0x1f) & 0x141U) != 0)) {
        func_0x0001090a9048(alStack_110 + 2);
        func_0x0001090a8f94();
        uVar3 = *(undefined8 *)(param_1 + 0x20);
        uStack_90 = 0xc2000000;
        pcStack_88 = FUN_1090a8578;
        puStack_80 = &UNK_110ad7be0;
        _objc_copyWeak(auStack_78,alStack_110 + 2);
        lStack_70 = param_7;
        func_0x000107c27d8c(uVar3,auStack_98);
        func_0x0001090a9040();
        func_0x0001090a9068();
        _objc_destroyWeak(alStack_110 + 2);
        return;
      }
      func_0x00010bfe5ec0(*(undefined8 *)(param_1 + 0x58));
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      func_0x00010bdc3520();
      func_0x0001090a8f38();
      FUN_1090966fc(&PTR____CFConstantStringClassReference_110f20c98,param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x0001090a8ef8();
    }
    else {
      func_0x00010bf99fe0(*(undefined8 *)(param_1 + 0x58));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf774a0();
    }
    func_0x0001090a8ef0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010be694f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__onFrameDequeued_112577ed8);
  return;
}



/* Entry: 1090a8578; end: 1090a85af;  */

void FUN_1090a8578(undefined8 param_1)

{
  func_0x0001090a8fec();
  func_0x00010be93b20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1090a85b0; end: 1090a88ff; -[SCNeoMediaVideoToolboxSampleBufferDecoder _createDecompressionSessionWithFormatDescription:] */

ulong FUN_1090a85b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  int iVar7;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined **ppuStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c2778c0(*(undefined8 *)(param_1 + 0x58));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf17b80();
  FUN_1090a8ee8();
  _CMVideoFormatDescriptionGetDimensions(param_3);
  uStack_b8 = *(undefined8 *)PTR__kCVPixelBufferPixelFormatTypeKey_11034a3b0;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df820();
  _objc_retainAutoreleasedReturnValue();
  uStack_b0 = *(undefined8 *)PTR__kCVPixelBufferWidthKey_11034a3d0;
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_88 = puVar1;
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  uStack_a8 = *(undefined8 *)PTR__kCVPixelBufferHeightKey_11034a388;
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_80 = puVar2;
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  uStack_a0 = *(undefined8 *)PTR__kCVPixelBufferBytesPerRowAlignmentKey_11034a370;
  ppuStack_70 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1f80;
  uStack_98 = *(undefined8 *)PTR__kCVPixelBufferIOSurfacePropertiesKey_11034a390;
  uStack_90 = *(undefined8 *)PTR__kCVPixelFormatOpenGLESCompatibility_11034a3d8;
  puStack_68 = PTR____NSDictionary0__struct_11034ab58;
  puStack_60 = PTR____kCFBooleanTrue_11034ab68;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_78 = puVar3;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  func_0x0001090a8f6c();
  func_0x0001090a8f64();
  FUN_1090a8ee8();
  uVar4 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
  iVar7 = 0;
  _VTDecompressionSessionCreate(uVar4,param_3,0,puVar2,0,&uStack_c0);
  if ((int)uVar4 == 0) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    func_0x00010c2778c0(*(undefined8 *)(param_1 + 0x58));
    _objc_retainAutoreleasedReturnValue();
    func_0x0001090a9050();
    FUN_1090a8ee8();
    func_0x00010bfe5ec0(*(undefined8 *)(param_1 + 0x58));
    _objc_retainAutoreleasedReturnValue();
    func_0x0001090a8f74();
    func_0x00010bdc3520(puVar1);
    FUN_1090a8ee8();
    uVar6 = uStack_c0;
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010c2778c0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x0001090a8ff4();
    func_0x00010c25d9e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25d9e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0bfe0(uVar5);
    func_0x0001090a8f6c();
    func_0x0001090a8f64();
    FUN_1090a8ee8();
    func_0x00010bfe5ec0(*(undefined8 *)(param_1 + 0x58));
    _objc_retainAutoreleasedReturnValue();
    func_0x0001090a8f74();
    func_0x00010bdc3520(uVar5);
    FUN_1090a8ee8();
    iVar7 = 0x10f20d38;
    FUN_1090966fc(&PTR____CFConstantStringClassReference_110f20d38,uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be64880(param_1);
    FUN_1090a8ee8();
    func_0x00010c2778c0(*(undefined8 *)(param_1 + 0x58));
    _objc_retainAutoreleasedReturnValue();
    func_0x0001090a9050();
    FUN_1090a8ee8();
    uVar6 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return uVar6;
  }
  ___stack_chk_fail();
  FUN_1090a8ee8();
  func_0x0001090a8f7c();
  if (iVar7 == 0x34343466 || iVar7 == 0x34323066) {
    *(int *)(uVar6 + 0x10) = iVar7;
  }
  return (ulong)(iVar7 == 0x34323066 || iVar7 == 0x34343466);
}



/* Entry: 1090a8900; end: 1090a892f; -[SCNeoMediaVideoToolboxSampleBufferDecoder setPreferredPixelOutputFormat:] */

bool FUN_1090a8900(long param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0x34343466 || param_3 == 0x34323066) {
    *(int *)(param_1 + 0x10) = param_3;
  }
  return param_3 == 0x34323066 || param_3 == 0x34343466;
}



/* Entry: 1090a8930; end: 1090a897f; -[SCNeoMediaVideoToolboxSampleBufferDecoder flush] */

void FUN_1090a8930(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = PTR__kCMTimeZero_110348670;
  uVar6 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  *(undefined8 *)(param_1 + 0x38) = uVar6;
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(puVar4 + 0x10);
  *(undefined8 *)(param_1 + 0x50) = 0;
  lVar5 = *(long *)(param_1 + 0x18);
  if (lVar5 != 0) {
    if (*(char *)(param_1 + 0x68) == '\x01') {
      plVar1 = (long *)(param_1 + 0x30);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar5 = *(long *)(param_1 + 0x18);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbc998. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__VTDecompressionSessionFinishDelayedFrames_11034b040)(lVar5);
    return;
  }
  return;
}



/* Entry: 1090a8980; end: 1090a8997; -[SCNeoMediaVideoToolboxSampleBufferDecoder seekTo:] */

void FUN_1090a8980(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(undefined8 *)(param_1 + 0x50) = 0;
  uVar2 = param_3[1];
  uVar1 = *param_3;
  *(undefined8 *)(param_1 + 0x48) = param_3[2];
  *(undefined8 *)(param_1 + 0x40) = uVar2;
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  return;
}



/* Entry: 1090a8998; end: 1090a8a37; -[SCNeoMediaVideoToolboxSampleBufferDecoder dealloc] */

void FUN_1090a8998(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d560();
  func_0x0001090a8ef0();
  puStack_28 = PTR_PTR_112700548;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1090a8a38; end: 1090a8aa3; -[SCNeoMediaVideoToolboxSampleBufferDecoder _resetSessionIfCurrentGeneration:] */

void FUN_1090a8a38(long param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  
  if (*(long *)(param_1 + 0x30) == param_3) {
    func_0x00010c137fe0();
    ppuVar1 = &PTR____CFConstantStringClassReference_110f20d78;
    FUN_109096480(&PTR____CFConstantStringClassReference_110f20d78,
                  &PTR____CFConstantStringClassReference_110f20c38);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001090a8ef8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
    return;
  }
  return;
}



/* Entry: 1090a8aa4; end: 1090a8b67; -[SCNeoMediaVideoToolboxSampleBufferDecoder reset] */

void FUN_1090a8aa4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  
  _dispatch_assert_queue_V2(*(undefined8 *)(param_1 + 0x20));
  plVar1 = (long *)(param_1 + 0x30);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  func_0x00010bf99fe0(*(undefined8 *)(param_1 + 0x58));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7a100();
  func_0x0001090a8ef0();
  uVar4 = 0;
  if (*(long *)(param_1 + 0x18) != 0) {
    _VTDecompressionSessionWaitForAsynchronousFrames();
    _VTDecompressionSessionInvalidate(*(undefined8 *)(param_1 + 0x18));
    _CFRelease(*(undefined8 *)(param_1 + 0x18));
    *(undefined8 *)(param_1 + 0x18) = 0;
    uVar4 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010bfe5ec0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001090a8f48();
    func_0x00010bdc3520();
    func_0x0001090a8ef0();
  }
  *(undefined8 *)(param_1 + 0x50) = 1;
  func_0x0001090a8fd4();
  func_0x00010bf674c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 1090a8b68; end: 1090a8b6f; -[SCNeoMediaVideoToolboxSampleBufferDecoder status] */

undefined8 FUN_1090a8b68(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 1090a8b70; end: 1090a8b87; -[SCNeoMediaVideoToolboxSampleBufferDecoder _onFrameEnqueued] */

void FUN_1090a8b70(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  
  piVar1 = (int *)(param_1 + 0x28);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = *piVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  return;
}



/* Entry: 1090a8b88; end: 1090a8b9f; -[SCNeoMediaVideoToolboxSampleBufferDecoder _onFrameDequeued] */

void FUN_1090a8b88(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  
  piVar1 = (int *)(param_1 + 0x28);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = *piVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  return;
}



/* Entry: 1090a8ba0; end: 1090a8c47; -[SCNeoMediaVideoToolboxSampleBufferDecoder _notifyError:] */

void FUN_1090a8ba0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  func_0x0001090a8f94();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1090a8c48;
  puStack_50 = &UNK_110896d48;
  _objc_copyWeak(auStack_40,auStack_38);
  uStack_48 = param_3;
  _objc_retain(param_3);
  func_0x000107c27d8c(uVar1,auStack_68);
  _objc_release(uStack_48);
  func_0x0001090a8ee8();
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1090a8c48; end: 1090a8c9f;  */

void FUN_1090a8c48(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x0001090a8fd4();
    func_0x00010bf67480();
    func_0x0001090a8ef0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1090a8ca0; end: 1090a8d2b; -[SCNeoMediaVideoToolboxSampleBufferDecoder _outputSampleBuffer:generationId:] */

void FUN_1090a8ca0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  func_0x0001090a8f94();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1090a8d2c;
  puStack_58 = &UNK_110982948;
  _objc_copyWeak(auStack_50,auStack_38);
  uStack_48 = param_3;
  uStack_40 = param_4;
  func_0x000107c27d8c(uVar1,auStack_70);
  func_0x0001090a9068();
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1090a8d2c; end: 1090a8dbf;  */

void FUN_1090a8d2c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x0001090a8fec();
  if (lVar1 == 0) {
    _CFRelease(*(undefined8 *)(param_1 + 0x28));
  }
  else {
    if ((*(char *)(lVar1 + 0x68) != '\x01') ||
       (*(long *)(param_1 + 0x30) == *(long *)(lVar1 + 0x30))) {
      func_0x0001090a8fd4();
      func_0x00010bf674a0();
      func_0x0001090a8f38();
    }
    _CFRelease(*(undefined8 *)(param_1 + 0x28));
    func_0x0001090a9040();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1090a8dc0; end: 1090a8e3f; -[SCNeoMediaVideoToolboxSampleBufferDecoder _skipBufferWithDecodeTimeStamp:presentationTimeStamp:] */

void FUN_1090a8dc0(long param_1)

{
  long unaff_x20;
  undefined1 auStack_28 [8];
  
  func_0x00010bfe5ec0(*(undefined8 *)(param_1 + 0x58));
  _objc_retainAutoreleasedReturnValue();
  func_0x0001090a8f48();
  func_0x00010bdc3520();
  func_0x0001090a8ef0();
  func_0x0001090a9048(auStack_28);
  func_0x0001090a8f94();
  func_0x0001090a8f10(FUN_1090a8e40,0xc2000000);
  func_0x0001090a9024();
  _objc_destroyWeak(unaff_x20 + 0x20);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1090a8e40; end: 1090a8e8b;  */

void FUN_1090a8e40(long param_1)

{
  func_0x0001090a8fec();
  if (param_1 != 0) {
    func_0x0001090a8fd4();
    func_0x00010bf674e0();
    func_0x0001090a8ef0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1090a8e8c; end: 1090a8ea3; -[SCNeoMediaVideoToolboxSampleBufferDecoder delegate] */

void FUN_1090a8e8c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1090a8ea4; end: 1090a8eaf; -[SCNeoMediaVideoToolboxSampleBufferDecoder setDelegate:] */

void FUN_1090a8ea4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x70,param_3);
  return;
}



/* Entry: 1090a8eb0; end: 1090a8ee7; -[SCNeoMediaVideoToolboxSampleBufferDecoder .cxx_destruct] */

void FUN_1090a8eb0(long param_1)

{
  _objc_destroyWeak(param_1 + 0x70);
  _objc_storeStrong(param_1 + 0x58,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 1090a8ee8; end: 1090a90a7;  */

void FUN_1090a8ee8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1090a90a8; end: 1090a922b; -[SCNeoPlayableRangeTracker initWithTimebase:queue:] */

undefined8 * FUN_1090a90a8(undefined8 param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  int extraout_w10;
  int extraout_w10_00;
  long *plVar7;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  
  puStack_58 = PTR_PTR_112700550;
  puVar3 = &uStack_60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(puVar3,PTR_s_init_1125d9248);
  if (puVar3 != (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x20;
    __Znwm();
    FUN_1090cbf68();
    puVar5 = (undefined8 *)0x90;
    puStack_68 = puVar4;
    __Znwm();
    plVar7 = puVar5 + 1;
    *plVar7 = 0;
    puVar5[2] = 0;
    *puVar5 = &PTR_DAT_110ad7c20;
    do {
      func_0x0001090a96b8();
    } while (extraout_w10 != 0);
    puVar5[4] = 0;
    puVar5[5] = 0;
    puVar5[3] = &PTR_DAT_110adbd58;
    puStack_50 = puVar4;
    do {
      func_0x0001090a96b8();
    } while (extraout_w10_00 != 0);
    puVar5[6] = puVar4;
    *(undefined1 *)(puVar5 + 0x11) = 0;
    puVar5[8] = 0;
    puVar5[7] = 0;
    puVar5[10] = 0;
    puVar5[9] = 0;
    puVar5[0xc] = 0;
    puVar5[0xb] = 0;
    puVar5[0xe] = 0;
    puVar5[0xd] = 0;
    *(undefined1 *)(puVar5 + 0xf) = 0;
    FUN_1090a94d4(&puStack_50);
    if ((puVar5[5] == 0) || (*(long *)(puVar5[5] + 8) == -1)) {
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar2) {
          *plVar7 = *plVar7 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      puStack_50 = puVar5 + 3;
      puStack_48 = puVar5;
      func_0x000107c278e4(puVar5 + 4,&puStack_50);
      func_0x000107c278ec(&puStack_50);
    }
    uVar6 = puVar3[1];
    puVar3[1] = puVar5 + 3;
    FUN_1090a954c(uVar6);
    FUN_1090a954c(0);
    FUN_1090a9464(&puStack_68);
  }
  return puVar3;
}



/* Entry: 1090a922c; end: 1090a9237; -[SCNeoPlayableRangeTracker clear] */

void FUN_1090a922c(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x0001090ff22c();
  func_0x0001090ffef8();
  *(undefined8 *)(lVar1 + 0x48) = 0;
  puVar2 = *(undefined8 **)(lVar1 + 0x28);
  while (uVar4 = *(long *)(lVar1 + 0x30) - (long)puVar2 >> 3, 2 < uVar4) {
    __ZdlPv(*puVar2);
    puVar2 = (undefined8 *)(*(long *)(lVar1 + 0x28) + 8);
    *(undefined8 **)(lVar1 + 0x28) = puVar2;
  }
  if (uVar4 == 1) {
    uVar3 = 0x40;
  }
  else {
    if (uVar4 != 2) {
      return;
    }
    uVar3 = 0x80;
  }
  *(undefined8 *)(lVar1 + 0x40) = uVar3;
  return;
}



/* Entry: 1090a9238; end: 1090a927b; -[SCNeoPlayableRangeTracker insertTimeRange:] */

void FUN_1090a9238(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uStack_30;
  ulong uStack_28;
  undefined8 uStack_20;
  ulong uStack_18;
  
  uStack_30 = *param_3;
  uStack_28 = (ulong)*(uint *)(param_3 + 1) | 0x100000000;
  uStack_20 = param_3[3];
  uStack_18 = (ulong)*(uint *)(param_3 + 4) | 0x100000000;
  func_0x0001090fe9b0(*(undefined8 *)(param_1 + 8),&uStack_30);
  return;
}



/* Entry: 1090a927c; end: 1090a92cb; -[SCNeoPlayableRangeTracker playableRange] */

void FUN_1090a927c(undefined8 *param_1,long param_2)

{
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = 0;
  func_0x0001090ff3d8(&uStack_38,*(undefined8 *)(param_2 + 8));
  *param_1 = uStack_38;
  FUN_1090caae4(param_1 + 1,uStack_30,uStack_28);
  return;
}



/* Entry: 1090a92cc; end: 1090a93bb; -[SCNeoPlayableRangeTracker setDelegate:] */

void FUN_1090a92cc(undefined8 param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    puStack_48 = (undefined8 *)0x0;
    func_0x0001090a96c8();
    FUN_1090a9648(&puStack_48);
  }
  else {
    puVar3 = (undefined8 *)0x20;
    __Znwm();
    _objc_retain(param_1);
    _objc_retain(param_3);
    plVar4 = puVar3 + 1;
    *plVar4 = 1;
    *puVar3 = &PTR_DAT_110ad7c70;
    _objc_initWeak(puVar3 + 2,param_1);
    _objc_initWeak(puVar3 + 3,param_3);
    func_0x0001090a96a4();
    func_0x0001090a96d4();
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    puStack_50 = puVar3;
    puStack_48 = puVar3;
    func_0x0001090a96c8();
    FUN_1090a9648(&puStack_48);
    func_0x0001090a9604(&puStack_50);
    func_0x0001090a96a4();
  }
  return;
}



/* Entry: 1090a93bc; end: 1090a943b; -[SCNeoPlayableRangeTracker delegate] */

void FUN_1090a93bc(long param_1)

{
  long lVar1;
  int extraout_w10;
  long lStack_28;
  
  lVar1 = *(long *)(*(long *)(param_1 + 8) + 0x58);
  if ((lVar1 == 0) || (___dynamic_cast(lVar1,&PTR_DAT_110ad7cb0,&PTR_DAT_110ad7c98,0), lVar1 == 0))
  {
    lVar1 = 0;
    lStack_28 = 0;
  }
  else {
    do {
      func_0x0001090a96b8();
    } while (extraout_w10 != 0);
    lStack_28 = lVar1;
    FUN_1090a943c();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x0001090a9604(&lStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1090a943c; end: 1090a9453;  */

void FUN_1090a943c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1090a9454; end: 1090a945b; -[SCNeoPlayableRangeTracker .cxx_destruct] */

void FUN_1090a9454(long param_1)

{
  func_0x0001090a96ac(param_1 + 8);
  FUN_1090a954c();
  return;
}



/* Entry: 1090a945c; end: 1090a9463; -[SCNeoPlayableRangeTracker .cxx_construct] */

void FUN_1090a945c(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



/* Entry: 1090a9464; end: 1090a9487;  */

void FUN_1090a9464(void)

{
  func_0x0001090a96ac();
  FUN_1090a9488();
  return;
}



/* Entry: 1090a9488; end: 1090a94af;  */

void FUN_1090a9488(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001090a9698. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 1090a94b0; end: 1090a94c3;  */

void FUN_1090a94b0(void)

{
  func_0x0001090a951c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1090a94c4; end: 1090a94d3;  */

void FUN_1090a94c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001090a94cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1090a94d4; end: 1090a94f7;  */

void FUN_1090a94d4(void)

{
  func_0x0001090a96ac();
  FUN_1090a94f8();
  return;
}



/* Entry: 1090a94f8; end: 1090a952b;  */

void FUN_1090a94f8(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001090a9698. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 1090a952c; end: 1090a954b;  */

void FUN_1090a952c(void)

{
  func_0x0001090a96ac();
  FUN_1090a954c();
  return;
}



/* Entry: 1090a954c; end: 1090a955b;  */

void FUN_1090a954c(long param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (param_1 != 0) {
    uStack_18 = *(undefined8 *)(param_1 + 0x10);
    uStack_20 = *(undefined8 *)(param_1 + 8);
    func_0x0001003a90c4(&uStack_20);
    return;
  }
  return;
}



/* Entry: 1090a955c; end: 1090a956f;  */

void FUN_1090a955c(void)

{
  FUN_1090a95d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1090a9570; end: 1090a95d7;  */

void FUN_1090a9570(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1090a943c();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0feca0(lVar1,param_2,param_1);
  func_0x0001090a96d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1090a95d8; end: 1090a9647;  */

long FUN_1090a95d8(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
  return param_1;
}



/* Entry: 1090a9648; end: 1090a966b;  */

void FUN_1090a9648(void)

{
  func_0x0001090a96ac();
  func_0x0001090a966c();
  return;
}



/* Entry: 1090a966c; end: 1090a96db;  */

void FUN_1090a966c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001090a9698. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 1090a96dc; end: 1090a970f;  */

undefined8 * FUN_1090a96dc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ad7cd8;
  if (param_1[3] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 1090a9710; end: 1090a9713;  */

undefined8 * FUN_1090a9710(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ad7cd8;
  if (param_1[3] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 1090a9714; end: 1090a9727;  */

void FUN_1090a9714(void)

{
  FUN_1090a96dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1090a9728; end: 1090a97eb;  */

void FUN_1090a9728(long param_1)

{
  long lVar1;
  long lStack_38;
  long lStack_30;
  long *plStack_28;
  
  lStack_38 = 0;
  lStack_30 = 0;
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    lStack_30 = lVar1;
    if (lVar1 != 0) {
      lVar1 = *(long *)(param_1 + 0x10);
      lStack_38 = lVar1;
      if (lVar1 != 0) {
        plStack_28 = (long *)0x0;
        func_0x0001090ad9c0();
        FUN_1090ab32c(lVar1);
        if ((*(byte *)(lVar1 + 0x99) & 1) == 0) {
          func_0x0001090ad804();
        }
        else {
          func_0x0001090ab380(&plStack_28,lVar1 + 0x70);
          func_0x0001090ad804();
          if (plStack_28 != (long *)0x0) {
            (**(code **)(*plStack_28 + 0x30))(plStack_28,lVar1);
          }
        }
        FUN_1090ab3fc(&plStack_28);
      }
    }
  }
  FUN_1090ab440(&lStack_38);
  return;
}



/* Entry: 1090a97ec; end: 1090a97ef;  */

void FUN_1090a97ec(void)

{
  return;
}



/* Entry: 1090a97f0; end: 1090aa05f; -[SCNeoPlayerCPP initWithConfiguration:] */

undefined1 * FUN_1090a97f0(void)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 extraout_x8;
  undefined8 uVar9;
  undefined8 *extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined8 *extraout_x8_02;
  long lVar10;
  long extraout_x8_03;
  undefined8 *puVar11;
  undefined8 *extraout_x8_04;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  int extraout_w11_03;
  undefined1 *unaff_x19;
  long *plVar12;
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x0001090ad978();
  func_0x0001090ad740();
  uStack_68 = extraout_x8;
  func_0x0001090ad838();
  puVar3 = &stack0xffffffffffffff60;
  _objc_msgSendSuper2(puVar3,PTR_s_init_1125d9248);
  if (puVar3 != (undefined1 *)0x0) {
    puVar4 = unaff_x19;
    func_0x00010bf911e0();
    puVar5 = PTR_PTR_1126dd490;
    if ((int)puVar4 == 0) {
      _objc_alloc();
      func_0x00010bfee360();
    }
    else {
      _objc_alloc();
      func_0x00010c0c60e0();
      func_0x00010c037140();
    }
    _objc_retain();
    uVar6 = *(undefined8 *)(puVar3 + 0x70);
    *(undefined **)(puVar3 + 0x70) = puVar5;
    _objc_release(uVar6);
    in_ZR = (int)puVar4 == 0;
    _objc_release(puVar5);
    puVar5 = PTR_PTR_1126dd498;
    _objc_alloc();
    func_0x00010c029b80();
    uVar6 = *(undefined8 *)(puVar3 + 0x78);
    *(undefined **)(puVar3 + 0x78) = puVar5;
    func_0x0001090ad880(uVar6);
    puVar4 = unaff_x19;
    func_0x00010bf8fda0();
    if ((int)puVar4 == 0) {
      puVar5 = PTR_PTR_1126dd4a8;
      _objc_alloc();
      func_0x00010c130640();
      func_0x00010bf91860();
      func_0x00010bf9e6e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c03e260();
      puVar7 = (undefined8 *)(puVar3 + 0x10);
      uVar6 = *puVar7;
      *puVar7 = puVar5;
      func_0x0001090ad880(uVar6);
      func_0x0001090ad850();
      uVar6 = *puVar7;
      func_0x00010c29bc60();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(puVar3 + 0x18);
      *(undefined8 *)(puVar3 + 0x18) = uVar6;
      func_0x0001090ad880(uVar9);
      puVar8 = *(undefined8 **)(puVar3 + 0x70);
      func_0x00010c11de00();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(puVar3 + 0x10);
      puVar7 = puVar8;
      func_0x0001090adaa4();
      _objc_retain(uVar9);
      _objc_retain(puVar8);
      uVar6 = uVar9;
      func_0x00010c26fdc0(uVar9);
      FUN_1090cbf68(puVar7,uVar6,puVar8);
      *puVar7 = &PTR_DAT_110ad7e58;
      puVar7[4] = uVar9;
      func_0x0001090ad818();
      puStack_a8 = puVar7;
      func_0x0001090ad818();
      uVar6 = *(undefined8 *)(puVar3 + 0x70);
      func_0x00010c11de00(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(puVar3 + 0x10);
      puVar8 = (undefined8 *)0xb8;
      __Znwm();
      plVar12 = puVar8 + 1;
      *plVar12 = 0;
      puVar8[2] = 0;
      *puVar8 = &PTR_FUN_110ad7ee0;
      do {
        func_0x0001090ad9e8();
      } while (extraout_w10 != 0);
      puVar11 = puVar8 + 3;
      puStack_80 = puVar7;
      FUN_1090ab838(puVar11,uVar9,&puStack_80,uVar6);
      puVar8[3] = &PTR_FUN_110ad7f30;
      FUN_1090a94d4(&puStack_80);
      if ((puVar8[5] == 0) || (in_ZR = *(long *)(puVar8[5] + 8) == -1, (bool)in_ZR)) {
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar2) {
            *plVar12 = *plVar12 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        puStack_80 = puVar11;
        puStack_78 = puVar8;
        func_0x0001090ada4c(puVar8 + 4);
        func_0x0001090ada7c();
      }
      puStack_b0 = puVar11;
      func_0x0001090ad818();
      uVar6 = *(undefined8 *)(puVar3 + 0x70);
      func_0x00010c11de00(uVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puStack_a8;
      uVar9 = *(undefined8 *)(puVar3 + 0x10);
      puVar8 = (undefined8 *)0xb8;
      __Znwm();
      plVar12 = puVar8 + 1;
      *plVar12 = 0;
      puVar8[2] = 0;
      *puVar8 = &PTR_FUN_110ad8090;
      if (puVar7 != (undefined8 *)0x0) {
        do {
          func_0x0001090ad9e8();
        } while (extraout_w10_00 != 0);
      }
      puVar11 = puVar8 + 3;
      puStack_80 = puVar7;
      FUN_1090ab838(puVar11,uVar9,&puStack_80,uVar6);
      puVar8[3] = &PTR_DAT_110ad80e0;
      FUN_1090a94d4(&puStack_80);
      if ((puVar8[5] == 0) || (in_ZR = *(long *)(puVar8[5] + 8) == -1, (bool)in_ZR)) {
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar2) {
            *plVar12 = *plVar12 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        puStack_80 = puVar11;
        puStack_78 = puVar8;
        func_0x0001090ada4c(puVar8 + 4);
        func_0x0001090ada7c();
      }
      puStack_b8 = puVar11;
      func_0x0001090ad91c();
      func_0x00010c137560();
      puVar7 = puStack_b0;
      __Znwm(0x158);
      func_0x0001090ada08();
      if ((puVar7 != (undefined8 *)0x0) && (puVar7[2] != 0)) {
        do {
          func_0x0001090ad7bc();
        } while (extraout_w10_01 != 0);
      }
      puStack_80 = puVar7;
      if (puVar8[5] != 0) {
        do {
          func_0x0001090ad7bc();
        } while (extraout_w10_02 != 0);
      }
      puStack_90 = (undefined8 *)0x0;
      puStack_88 = puVar11;
      if (puStack_a8 != (undefined8 *)0x0) {
        do {
          func_0x0001090ad828();
          puStack_90 = extraout_x8_00;
        } while (extraout_w11 != 0);
      }
      func_0x0001090ad8c0();
      func_0x0001090adab4();
      FUN_1090ab6f0(&puStack_88);
      FUN_1090ab6f0(&puStack_80);
      func_0x0001090ad968();
      puStack_c0 = puStack_80;
      FUN_1090aa060(puVar3 + 0x28,&puStack_c0);
      FUN_1090ab74c(puStack_c0);
      FUN_1090ac158(&puStack_b8);
      FUN_1090ac0ac(&puStack_b0);
      func_0x0001090ab7dc(&puStack_a8);
    }
    else {
      uVar6 = 0;
      _dispatch_queue_attr_make_with_qos_class(0,0x21,0);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = &UNK_10f54e64d;
      _dispatch_queue_create(&UNK_10f54e64d,uVar6);
      func_0x0001090ad818();
      FUN_1090ab494(&puStack_a8,puVar5);
      FUN_1090ab494(&puStack_b0,puVar5);
      puVar5 = PTR_PTR_1126dd4a0;
      _objc_opt_new();
      uVar6 = *(undefined8 *)(puVar3 + 0x50);
      *(undefined **)(puVar3 + 0x50) = puVar5;
      func_0x0001090ad880(uVar6);
      puVar7 = (undefined8 *)0x98;
      __Znwm();
      FUN_1090c0f40();
      puStack_b8 = puVar7;
      if (*(long *)(puVar3 + 0x50) == 0) {
        puStack_c0 = (undefined8 *)0x0;
      }
      else {
        func_0x00010bf0f620(&puStack_c0);
      }
      puVar7 = puStack_b8;
      puVar8 = (undefined8 *)0x88;
      __Znwm();
      plVar12 = puVar8 + 1;
      *plVar12 = 0;
      puVar8[2] = 0;
      *puVar8 = &PTR_DAT_110ad7d30;
      if (puVar7 != (undefined8 *)0x0) {
        do {
          func_0x0001090ad9e8();
        } while (extraout_w10_03 != 0);
      }
      puStack_88 = (undefined8 *)0x0;
      puStack_80 = puVar7;
      if (puStack_a8 != (undefined8 *)0x0) {
        do {
          func_0x0001090ad828();
          puStack_88 = extraout_x8_01;
        } while (extraout_w11_00 != 0);
      }
      puStack_90 = (undefined8 *)0x0;
      if (puStack_b0 != (undefined8 *)0x0) {
        do {
          func_0x0001090ad828();
          puStack_90 = extraout_x8_02;
        } while (extraout_w11_01 != 0);
      }
      puVar7 = puVar8 + 3;
      FUN_1090f119c(puVar7,&puStack_80,&puStack_c0,&puStack_88,&puStack_90);
      func_0x0001090adab4();
      FUN_1090a94d4(&puStack_88);
      FUN_1090ab584(&puStack_80);
      if ((puVar8[5] == 0) || (in_ZR = *(long *)(puVar8[5] + 8) == -1, (bool)in_ZR)) {
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar2) {
            *plVar12 = *plVar12 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        puStack_80 = puVar7;
        puStack_78 = puVar8;
        func_0x0001090ada4c(puVar8 + 4);
        func_0x0001090ada7c();
      }
      uVar6 = *(undefined8 *)(puVar3 + 8);
      *(undefined8 **)(puVar3 + 8) = puVar7;
      FUN_1090ab488(uVar6);
      FUN_1090ab488(0);
      FUN_1090ab51c(&puStack_c0);
      puVar7 = *(undefined8 **)(puVar3 + 0x70);
      func_0x00010c11de00();
      _objc_retainAutoreleasedReturnValue();
      func_0x0001090adaa4();
      FUN_1090cbf68();
      *puVar7 = &PTR_DAT_110ad7d80;
      lVar10 = *(long *)(puVar3 + 8);
      if ((lVar10 != 0) && (*(long *)(lVar10 + 0x10) != 0)) {
        do {
          func_0x0001090ad93c();
          lVar10 = extraout_x8_03;
        } while (extraout_w11_02 != 0);
      }
      puVar7[4] = lVar10;
      puStack_c0 = puVar7;
      func_0x0001090ad91c();
      puVar8 = puStack_b8;
      FUN_1090c1110();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(puVar3 + 0x18);
      *(undefined8 **)(puVar3 + 0x18) = puVar8;
      func_0x0001090ad880(uVar6);
      lVar10 = *(long *)(puVar3 + 8);
      func_0x00010c137560();
      puVar8 = *(undefined8 **)(lVar10 + 0x38);
      __Znwm(0x158);
      func_0x0001090ada08();
      if ((puVar8 != (undefined8 *)0x0) && (puVar8[2] != 0)) {
        do {
          func_0x0001090ad7bc();
        } while (extraout_w10_04 != 0);
      }
      puVar11 = *(undefined8 **)(lVar10 + 0x40);
      puStack_80 = puVar8;
      if ((puVar11 != (undefined8 *)0x0) && (puVar11[2] != 0)) {
        do {
          func_0x0001090ad93c();
          puVar11 = extraout_x8_04;
        } while (extraout_w11_03 != 0);
      }
      do {
        puStack_88 = puVar11;
        func_0x0001090ad9e8();
        puVar11 = puStack_88;
      } while (extraout_w10_05 != 0);
      puStack_90 = puVar7;
      func_0x0001090ad8c0();
      func_0x0001090adab4();
      FUN_1090ab6f0(&puStack_88);
      FUN_1090ab6f0(&puStack_80);
      func_0x0001090ad968();
      puStack_c8 = puStack_80;
      FUN_1090aa060(puVar3 + 0x28,&puStack_c8);
      FUN_1090ab74c(puStack_c8);
      func_0x0001090ab638(&puStack_c0);
      FUN_1090ab4d4(&puStack_b8);
      FUN_1090a9464(&puStack_b0);
      FUN_1090a9464(&puStack_a8);
      func_0x0001090ad850();
    }
    func_0x00010bf916a0();
    func_0x00010c1ec980(*(undefined8 *)(puVar3 + 0x18));
    if (unaff_x19 == (undefined1 *)0x0) {
      puStack_80 = (undefined8 *)0x0;
      puStack_78 = (undefined8 *)0x0;
      uStack_70 = 0;
    }
    else {
      func_0x00010bf60580(&puStack_80);
    }
    puVar7 = puStack_80;
    *(undefined8 **)(puVar3 + 0x40) = puStack_78;
    *(undefined8 **)(puVar3 + 0x38) = puVar7;
    *(undefined8 *)(puVar3 + 0x48) = uStack_70;
  }
  func_0x0001090ad778();
  func_0x0001090ad6dc(uStack_68);
  if ((bool)in_ZR) {
    return puVar3;
  }
  ___stack_chk_fail();
  FUN_1090ab4d4(&puStack_b8);
  FUN_1090a9464(&puStack_b0);
  FUN_1090a9464(&puStack_a8);
  func_0x0001090ad850();
  func_0x0001090ad778();
  func_0x0001090ad798();
  func_0x0001090ad870();
  func_0x0001090ada20();
  if (!(bool)in_ZR) {
    func_0x0001090ad8f4();
    FUN_1090ab74c();
  }
  return unaff_x19;
}



/* Entry: 1090aa060; end: 1090aa087;  */

void FUN_1090aa060(void)

{
  undefined1 in_ZR;
  
  func_0x0001090ada20();
  if (!(bool)in_ZR) {
    func_0x0001090ad8f4();
    FUN_1090ab74c();
  }
  return;
}



/* Entry: 1090aa088; end: 1090aa11b; -[SCNeoPlayerCPP dealloc] */

void FUN_1090aa088(long param_1)

{
  code *extraout_x8;
  long lStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  if (*(long *)(param_1 + 0x30) != 0) {
    func_0x0001090ad99c();
    (*extraout_x8)();
    FUN_1090aa11c((long *)(param_1 + 0x30));
  }
  uStack_28 = 0;
  FUN_1090e9ff0(*(undefined8 *)(param_1 + 0x28),&uStack_28);
  FUN_1090ac188(&uStack_28);
  puStack_30 = PTR_PTR_112700558;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_38,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1090aa11c; end: 1090aa143;  */

void FUN_1090aa11c(long param_1)

{
  undefined8 *unaff_x19;
  
  func_0x0001090ad7b0();
  if (param_1 != 0) {
    *unaff_x19 = 0;
    func_0x000107c3105c();
  }
  return;
}



/* Entry: 1090aa144; end: 1090aa14b; -[SCNeoPlayerCPP pause] */

void FUN_1090aa144(long param_1)

{
  long lVar1;
  undefined1 auStack_40 [16];
  
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x0001090ebcd0();
  if (*(float *)(lVar1 + 0x11c) != 0.0) {
    *(undefined4 *)(lVar1 + 0x11c) = 0;
    FUN_1090ea0e8(lVar1,auStack_40);
  }
  func_0x0001090ebd88();
  return;
}



/* Entry: 1090aa14c; end: 1090aa16f; -[SCNeoPlayerCPP play] */

void FUN_1090aa14c(long param_1)

{
  long lVar1;
  undefined1 auStack_40 [16];
  
  func_0x00010be93840();
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x0001090ebcd0();
  if (*(float *)(lVar1 + 0x11c) != 1.0) {
    *(undefined4 *)(lVar1 + 0x11c) = 0x3f800000;
    FUN_1090ea0e8(lVar1,auStack_40);
  }
  func_0x0001090ebd88();
  return;
}



/* Entry: 1090aa170; end: 1090aa1f3; -[SCNeoPlayerCPP _resetRenderersIfNecessary] */

void FUN_1090aa170(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
  func_0x00010c232960();
  if (iVar1 != 0) {
    func_0x0001090ead14(*(undefined8 *)(param_1 + 0x28));
    func_0x00010c26fdc0(*(undefined8 *)(param_1 + 0x10));
    _CMTimebaseGetTime(auStack_38);
    _CMTimeMakeWithSeconds(auStack_50,0x3fe0000000000000,1000);
    uStack_68 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    uStack_70 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    uStack_60 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    func_0x00010c1572c0(param_1,param_2,auStack_38,auStack_50,&uStack_70);
  }
  return;
}



/* Entry: 1090aa1f4; end: 1090aa223; -[SCNeoPlayerCPP seekToTime:toleranceBefore:toleranceAfter:] */

void FUN_1090aa1f4(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined1 uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  
  lVar4 = *(long *)(param_1 + 0x28);
  uVar8 = *param_3;
  uVar1 = *(uint *)(param_3 + 1);
  uVar10 = *param_4;
  uVar2 = *(uint *)(param_4 + 1);
  uVar9 = *param_5;
  uVar3 = *(uint *)(param_5 + 1);
  lStack_a0 = lVar4 + 0x18;
  uStack_98 = 1;
  uStack_90 = uVar9;
  uStack_88 = (ulong)uVar3 | 0x100000000;
  uStack_80 = uVar10;
  uStack_78 = (ulong)uVar2 | 0x100000000;
  uStack_70 = uVar8;
  uStack_68 = (ulong)uVar1 | 0x100000000;
  __ZNSt3__15mutex4lockEv();
  lVar5 = *(long *)(lVar4 + 200);
  if (lVar5 != 0) {
    plVar11 = (long *)(lVar4 + 0xd0);
    lVar12 = *plVar11;
    if (lVar12 != 0) {
      uStack_a8 = *(undefined8 *)(lVar12 + 0x20);
      lStack_b0 = *(long *)(lVar12 + 0x18);
      plVar6 = &lStack_b0;
      func_0x0001090fbec0(plVar6,&uStack_70);
      if ((int)plVar6 != 0) {
        uStack_b8 = *(undefined8 *)(lVar12 + 0x30);
        uStack_c0 = *(undefined8 *)(lVar12 + 0x28);
        puVar7 = &uStack_c0;
        func_0x0001090fbec0(puVar7,&uStack_80);
        if ((int)puVar7 != 0) {
          uStack_c8 = *(undefined8 *)(lVar12 + 0x40);
          uStack_d0 = *(undefined8 *)(lVar12 + 0x38);
          puVar7 = &uStack_90;
          func_0x0001090fbec0(puVar7,&uStack_d0);
          if (((ulong)puVar7 & 1) != 0) goto LAB_1090eafb0;
        }
      }
      *(undefined1 *)(lVar12 + 0x10) = 1;
      FUN_1090ea8cc(plVar11);
      lVar5 = *(long *)(lVar4 + 200);
    }
    func_0x0001090ec734(&lStack_b0,lVar5,uVar8,(ulong)uVar1 | 0x100000000,uVar10,
                        (ulong)uVar2 | 0x100000000,uVar9,(ulong)uVar3 | 0x100000000);
    lVar4 = lStack_b0;
    if (plVar11 != &lStack_b0) {
      lStack_b0 = 0;
      lVar5 = *plVar11;
      *plVar11 = lVar4;
      FUN_1090eb134(lVar5);
    }
    FUN_1090eb134(lStack_b0);
  }
LAB_1090eafb0:
  FUN_1090eb46c(&lStack_a0);
  return;
}



/* Entry: 1090aa224; end: 1090aa22b; -[SCNeoPlayerCPP rate] */

undefined4 FUN_1090aa224(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x0001090ebdac();
  uVar2 = *(undefined4 *)(lVar1 + 0x11c);
  __ZNSt3__15mutex6unlockEv(lVar1 + 0x18);
  return uVar2;
}



/* Entry: 1090aa22c; end: 1090aa233; -[SCNeoPlayerCPP setRate:] */

void FUN_1090aa22c(float param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_40 [16];
  
  lVar1 = *(long *)(param_2 + 0x28);
  func_0x0001090ebcd0();
  if (*(float *)(lVar1 + 0x11c) != param_1) {
    *(float *)(lVar1 + 0x11c) = param_1;
    FUN_1090ea0e8(lVar1,auStack_40);
  }
  func_0x0001090ebd88();
  return;
}



/* Entry: 1090aa234; end: 1090aa26f; -[SCNeoPlayerCPP currentTime] */

void FUN_1090aa234(undefined8 param_1,long param_2)

{
  code *extraout_x8;
  
  if (*(long *)(*(long *)(param_2 + 0x28) + 0xc0) != 0) {
    func_0x0001090ad99c();
    (*extraout_x8)();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbb858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CMTimeMake_110348440)(param_1);
  return;
}



/* Entry: 1090aa270; end: 1090aa2db; -[SCNeoPlayerCPP error] */

void FUN_1090aa270(long param_1)

{
  undefined1 *puVar1;
  undefined1 auStack_30 [8];
  char cStack_28;
  
  puVar1 = auStack_30;
  func_0x0001090fd4e8(auStack_30,*(long *)(param_1 + 0x28) + 0x60);
  if (cStack_28 == '\x01') {
    FUN_109095ad0(auStack_30);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = (undefined1 *)0x0;
  }
  FUN_1090ab420(auStack_30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1090aa2dc; end: 1090aa33b; -[SCNeoPlayerCPP muted] */

long FUN_1090aa2dc(long param_1)

{
  long lVar1;
  long extraout_x8;
  long extraout_x8_00;
  
  func_0x0001090adafc();
  if (param_1 != 0) {
    func_0x0001090ad954();
    func_0x0001090adb08();
    (**(code **)(extraout_x8_00 + 0x58))();
    func_0x0001090ad848();
    return param_1;
  }
  lVar1 = *(long *)(extraout_x8 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010c0d41d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s_muted_112612a88);
  return lVar1;
}



/* Entry: 1090aa33c; end: 1090aa397; -[SCNeoPlayerCPP setMuted:] */

void FUN_1090aa33c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long extraout_x8;
  long extraout_x8_00;
  
  func_0x0001090adafc();
  if (param_1 != 0) {
    func_0x0001090ad954();
    func_0x0001090adb08();
    (**(code **)(extraout_x8_00 + 0x50))();
    func_0x0001090ad848();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1ca6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(extraout_x8 + 0x10),PTR_s_setMuted__1126503d0,param_3);
  return;
}



/* Entry: 1090aa398; end: 1090aa403; -[SCNeoPlayerCPP volume] */

undefined8 FUN_1090aa398(undefined8 param_1,long param_2)

{
  long extraout_x8;
  long extraout_x8_00;
  
  func_0x0001090adafc();
  if (param_2 != 0) {
    func_0x0001090ad954();
    func_0x0001090adb08();
    (**(code **)(extraout_x8_00 + 0x48))();
    func_0x0001090ad848();
    return param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c2a0dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(extraout_x8 + 0x10),PTR_s_volume_112685d98)
  ;
  return param_1;
}


