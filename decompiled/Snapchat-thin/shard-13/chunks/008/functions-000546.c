/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10ad80cd8; end: 10ad80d4b;  */

void FUN_10ad80cd8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf0ba20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf987e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = uVar2;
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbdff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_semaphore_signal_11034c130)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10ad80d4c; end: 10ad80e17; -[LSAVideoWriter _createCMSampleBufferFrom:time:] */

void FUN_10ad80d4c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  _CVPixelBufferLockBaseAddress(*param_4,1);
  uStack_78 = *(undefined8 *)(PTR__kCMTimeInvalid_110348648 + 8);
  uStack_80 = *(undefined8 *)PTR__kCMTimeInvalid_110348648;
  uStack_70 = *(undefined8 *)(PTR__kCMTimeInvalid_110348648 + 0x10);
  uStack_60 = param_5[1];
  uStack_68 = *param_5;
  uStack_58 = param_5[2];
  uVar1 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
  uStack_50 = uStack_80;
  uStack_48 = uStack_78;
  uStack_40 = uStack_70;
  _CMVideoFormatDescriptionCreateForImageBuffer(uVar1,*param_4,&uStack_88);
  _CMSampleBufferCreateForImageBuffer(uVar1,*param_4,1,0,0,uStack_88,&uStack_80,&uStack_90);
  _CFRelease(uStack_88);
  _CVPixelBufferUnlockBaseAddress(*param_4,1);
  *param_1 = uStack_90;
  return;
}



/* Entry: 10ad80e18; end: 10ad80f2f; -[LSAVideoWriter _flushEnqueuedPixelData] */

bool FUN_10ad80e18(long param_1,undefined8 param_2)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  lVar4 = *(long *)(*(long *)(param_1 + 0x18) + 0x28);
  while( true ) {
    if (lVar4 == 0) {
      return true;
    }
    uVar2 = *(ulong *)(param_1 + 0x10);
    func_0x00010c07bca0();
    lVar4 = *(long *)(param_1 + 0x18);
    if ((uVar2 & 1) == 0) break;
    if (*(long *)(lVar4 + 0x28) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10ad80f0c);
      (*pcVar1)();
    }
    lStack_38 = *(long *)(*(long *)(*(long *)(lVar4 + 8) + (*(ulong *)(lVar4 + 0x20) >> 9) * 8) +
                         (*(ulong *)(lVar4 + 0x20) & 0x1ff) * 8);
    if (lStack_38 != 0) {
      _CFRetain(lStack_38);
      lVar4 = *(long *)(param_1 + 0x18);
    }
    func_0x00010ad81a38(lVar4);
    lVar4 = lStack_38;
    _CMSampleBufferGetImageBuffer(lStack_38);
    lVar3 = param_1;
    func_0x00010c0fc920(param_1);
    _objc_retainAutoreleasedReturnValue();
    _CMSampleBufferGetPresentationTimeStamp(auStack_50,lStack_38);
    func_0x00010bf06f60(lVar3,param_2,lVar4,auStack_50);
    _objc_release(lVar3);
    FUN_10ad8159c(&lStack_38);
    lVar4 = *(long *)(*(long *)(param_1 + 0x18) + 0x28);
  }
  return *(long *)(lVar4 + 0x28) == 0;
}



/* Entry: 10ad80f30; end: 10ad80fb7; -[LSAVideoWriter _flushEnqueuedAudioData] */

bool FUN_10ad80f30(long param_1,undefined8 param_2)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 0x28);
  while( true ) {
    if (lVar3 == 0) {
      return true;
    }
    iVar2 = (int)*(undefined8 *)(param_1 + 8);
    func_0x00010c07bca0();
    lVar3 = *(long *)(param_1 + 0x20);
    if (iVar2 == 0) break;
    if (*(long *)(lVar3 + 0x28) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10ad80fb8);
      (*pcVar1)();
    }
    func_0x00010bf06fe0(*(undefined8 *)(param_1 + 8),param_2,
                        *(undefined8 *)
                         (*(long *)(*(long *)(lVar3 + 8) + (*(ulong *)(lVar3 + 0x20) >> 9) * 8) +
                         (*(ulong *)(lVar3 + 0x20) & 0x1ff) * 8));
    func_0x00010ad81a38(*(undefined8 *)(param_1 + 0x20));
    lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 0x28);
  }
  return *(long *)(lVar3 + 0x28) == 0;
}



/* Entry: 10ad80fb8; end: 10ad8117b; -[LSAVideoWriter _finalizeEnqueuedSamples] */

void FUN_10ad80fb8(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 in_x6;
  undefined8 in_x7;
  
  if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
    func_0x00010ae06f08(1,4,&UNK_10f6ab428,&UNK_10f6ab55a,0x11a,&UNK_10f6ab585,in_x6,in_x7,
                        *(undefined8 *)(*(long *)(param_2 + 0x18) + 0x28),
                        *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x28));
  }
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  do {
    uVar2 = param_2;
    func_0x00010be181a0();
    if (((int)uVar2 != 0) && (uVar2 = param_2, func_0x00010be18180(), (uVar2 & 1) != 0)) {
      if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
        puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
        func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c26f380();
        func_0x00010ae06f08(1,4,&UNK_10f6ab428,&UNK_10f6ab55a,0x123,&UNK_10f6ab5ce,in_x6,in_x7,
                            param_1);
        _objc_release(puVar4);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar1);
      return;
    }
    while( true ) {
      uVar2 = *(ulong *)(param_2 + 0x10);
      func_0x00010c07bca0();
      if ((uVar2 & 1) != 0) break;
      uVar2 = *(ulong *)(param_2 + 8);
      func_0x00010c07bca0();
      if ((uVar2 & 1) != 0) break;
      puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
      param_1 = 0x3fb999999999999a;
      func_0x00010bf65600(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSRunLoop_1126b94b0;
      func_0x00010bf5fe80(PTR__OBJC_CLASS___NSRunLoop_1126b94b0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c142a80();
      _objc_release(puVar3);
      _objc_release(puVar4);
    }
  } while( true );
}



/* Entry: 10ad8117c; end: 10ad8120f; -[LSAVideoWriter _popNextEnqueuedSampleBuffer:] */

undefined8 FUN_10ad8117c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0dfd40(param_3,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d3c0(param_3,param_2,0);
  uVar2 = uVar1;
  func_0x00010c102ea0(uVar1);
  _objc_release(uVar1);
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 10ad81210; end: 10ad8130f; -[LSAVideoWriter dealloc] */

void FUN_10ad81210(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  func_0x00010bf0ba20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c0fc9c0();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10ad81310;
  puStack_58 = &UNK_110ad88a8;
  uStack_40 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = *(undefined8 *)(param_1 + 0x18);
  lStack_50 = lVar1;
  lStack_38 = lVar2;
  _objc_retain(lVar1);
  func_0x000107c27d8c(uVar3,&puStack_70);
  _objc_release(lStack_50);
  _objc_release(lVar1);
  puStack_78 = PTR_PTR_1127012b0;
  lStack_80 = param_1;
  _objc_msgSendSuper2(&lStack_80,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10ad81310; end: 10ad81377;  */

void FUN_10ad81310(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c252d60();
  if (lVar1 != 2) {
    func_0x00010bf2f520(*(undefined8 *)(param_1 + 0x20));
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_10ad8144c();
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_10ad8144c();
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x38) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdba64c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__CFRelease_11034a768)();
    return;
  }
  return;
}



/* Entry: 10ad81378; end: 10ad81383; -[LSAVideoWriter writerCreationFailed] */

byte FUN_10ad81378(long param_1)

{
  return *(byte *)(param_1 + 0x50) & 1;
}



/* Entry: 10ad81384; end: 10ad8138b; -[LSAVideoWriter setWriterCreationFailed:] */

void FUN_10ad81384(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x50) = param_3;
  return;
}



/* Entry: 10ad8138c; end: 10ad81397; -[LSAVideoWriter assetWriter] */

void FUN_10ad8138c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x58,1);
  return;
}



/* Entry: 10ad81398; end: 10ad8139f; -[LSAVideoWriter setAssetWriter:] */

void FUN_10ad81398(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 10ad813a0; end: 10ad813ab; -[LSAVideoWriter pixelAdapter] */

void FUN_10ad813a0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x60,1);
  return;
}



/* Entry: 10ad813ac; end: 10ad813b3; -[LSAVideoWriter setPixelAdapter:] */

void FUN_10ad813ac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 10ad813b4; end: 10ad813bb; -[LSAVideoWriter pixelBufferPool] */

undefined8 FUN_10ad813b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 10ad813bc; end: 10ad813c3; -[LSAVideoWriter setPixelBufferPool:] */

void FUN_10ad813bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x68) = param_3;
  return;
}



/* Entry: 10ad813c4; end: 10ad813d3; -[LSAVideoWriter audioInfo] */

undefined1  [16] FUN_10ad813c4(long param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._12_4_ = 0;
  auVar1._0_12_ = *(undefined1 (*) [12])(param_1 + 0x70);
  return auVar1;
}



/* Entry: 10ad813d4; end: 10ad81433; -[LSAVideoWriter .cxx_destruct] */

void FUN_10ad813d4(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10ad81434; end: 10ad8144b; -[LSAVideoWriter .cxx_construct] */

void FUN_10ad81434(long param_1)

{
  *(undefined8 *)(param_1 + 0x70) = 0x100000000001;
  *(undefined4 *)(param_1 + 0x78) = 0xac44;
  return;
}



/* Entry: 10ad8144c; end: 10ad8159b;  */

long * FUN_10ad8144c(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  
  puVar5 = (undefined8 *)param_1[1];
  puVar3 = (undefined8 *)param_1[2];
  puVar7 = puVar5;
  if (puVar3 != puVar5) {
    uVar4 = param_1[4];
    plVar6 = puVar5 + (uVar4 >> 9);
    lVar2 = *plVar6 + (uVar4 & 0x1ff) * 8;
    lVar1 = puVar5[param_1[5] + uVar4 >> 9] + (param_1[5] + uVar4 & 0x1ff) * 8;
    puVar7 = puVar3;
    if (lVar2 != lVar1) {
      do {
        FUN_10ad8159c();
        lVar2 = lVar2 + 8;
        if (lVar2 - *plVar6 == 0x1000) {
          plVar6 = plVar6 + 1;
          lVar2 = *plVar6;
        }
      } while (lVar2 != lVar1);
      puVar5 = (undefined8 *)param_1[1];
      puVar3 = (undefined8 *)param_1[2];
      puVar7 = puVar3;
    }
  }
  param_1[5] = 0;
  lVar2 = (long)puVar7 - (long)puVar5;
  while (uVar4 = lVar2 >> 3, 2 < uVar4) {
    __ZdlPv(*puVar5);
    puVar3 = (undefined8 *)param_1[2];
    puVar5 = (undefined8 *)(param_1[1] + 8);
    param_1[1] = (long)puVar5;
    puVar7 = puVar3;
    lVar2 = (long)puVar3 - (long)puVar5;
  }
  if (uVar4 == 1) {
    lVar2 = 0x100;
  }
  else {
    if (uVar4 != 2) goto LAB_10ad81540;
    lVar2 = 0x200;
  }
  param_1[4] = lVar2;
LAB_10ad81540:
  if (puVar5 != puVar7) {
    do {
      puVar3 = puVar5 + 1;
      __ZdlPv(*puVar5);
      puVar5 = puVar3;
    } while (puVar3 != puVar7);
    puVar7 = (undefined8 *)param_1[1];
    puVar3 = (undefined8 *)param_1[2];
  }
  if (puVar3 != puVar7) {
    param_1[2] = (long)puVar3 + ((long)puVar7 + (7 - (long)puVar3) & 0xfffffffffffffff8U);
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10ad8159c; end: 10ad815cb;  */

long * FUN_10ad8159c(long *param_1)

{
  if (*param_1 != 0) {
    _CFRelease();
  }
  return param_1;
}



/* Entry: 10ad815cc; end: 10ad81907;  */

void FUN_10ad815cc(ulong *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  ulong uVar15;
  undefined8 *puVar16;
  long *plVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  long *plVar20;
  undefined8 *puVar21;
  
  puVar21 = (undefined8 *)param_1[1];
  puVar16 = (undefined8 *)param_1[2];
  uVar11 = (long)puVar16 - (long)puVar21;
  uVar10 = 0;
  if (uVar11 != 0) {
    uVar10 = ((long)puVar16 - (long)puVar21) * 0x40 - 1;
  }
  uVar2 = param_1[4];
  uVar13 = param_1[5];
  uVar15 = uVar13 + uVar2;
  if (uVar10 != uVar15) goto LAB_10ad81898;
  if (uVar2 < 0x200) {
    puVar18 = (undefined8 *)param_1[3];
    puVar19 = (undefined8 *)*param_1;
    if (uVar11 < (ulong)((long)puVar18 - (long)puVar19)) {
      uVar6 = 0x1000;
      plVar9 = param_2;
      __Znwm();
      if (puVar18 == puVar16) {
        if (puVar21 == puVar19) {
          uVar10 = (long)puVar18 - (long)puVar21 >> 2;
          if (puVar16 == puVar21) {
            uVar10 = 1;
          }
          lVar5 = uVar10 * 2;
          FUN_10ad81a04();
          puVar21 = (undefined8 *)(uVar10 + (lVar5 + 6U & 0xfffffffffffffff8));
          lVar5 = param_1[2] - (long)param_1[1];
          puVar16 = puVar21;
          if (lVar5 != 0) {
            puVar16 = (undefined8 *)((long)puVar21 + lVar5);
            puVar18 = (undefined8 *)param_1[1];
            puVar19 = puVar21;
            do {
              *puVar19 = *puVar18;
              lVar5 = lVar5 + -8;
              puVar18 = puVar18 + 1;
              puVar19 = puVar19 + 1;
            } while (lVar5 != 0);
          }
          uVar11 = *param_1;
          *param_1 = uVar10;
          param_1[1] = (ulong)puVar21;
          param_1[2] = (ulong)puVar16;
          param_1[3] = uVar10 + (long)plVar9 * 8;
          if (uVar11 != 0) {
            __ZdlPv(uVar11);
            puVar21 = (undefined8 *)param_1[1];
          }
        }
        puVar21[-1] = uVar6;
        uVar10 = param_1[1];
        param_1[1] = uVar10 - 8;
        uVar6 = *(undefined8 *)(uVar10 - 8);
        param_1[1] = uVar10;
        goto LAB_10ad8162c;
      }
      *puVar16 = uVar6;
      param_1[2] = param_1[2] + 8;
    }
    else {
      plVar9 = (long *)((long)puVar18 - (long)puVar19 >> 2);
      if (puVar18 == puVar19) {
        plVar9 = (long *)0x1;
      }
      plVar7 = param_2;
      FUN_10ad81a04();
      lVar5 = 0x1000;
      plVar8 = plVar7;
      __Znwm();
      plVar12 = (long *)((long)plVar9 + uVar11);
      plVar14 = plVar9 + (long)plVar7;
      plVar4 = plVar9;
      if (uVar11 == (long)plVar7 * 8) {
        if ((long)uVar11 < 1) {
          plVar12 = (long *)((long)plVar12 - (long)plVar9 >> 2);
          if (puVar16 == puVar21) {
            plVar12 = (long *)0x1;
          }
          plVar4 = plVar12;
          FUN_10ad81a04();
          plVar12 = plVar4 + ((ulong)plVar12 >> 2);
          plVar14 = plVar4 + (long)plVar8;
          if (plVar9 != (long *)0x0) {
            __ZdlPv(plVar9);
          }
        }
        else {
          lVar1 = ((long)plVar12 - (long)plVar9 >> 3) + 1;
          plVar12 = plVar12 + -((ulong)(lVar1 - (lVar1 >> 0x3f)) >> 1);
        }
      }
      plVar9 = plVar12 + 1;
      *plVar12 = lVar5;
      plVar7 = (long *)param_1[2];
      plVar17 = plVar4;
      if (plVar7 != (long *)param_1[1]) {
        do {
          plVar4 = plVar17;
          plVar20 = plVar12;
          if (plVar12 == plVar17) {
            if (plVar9 < plVar14) {
              lVar5 = ((long)plVar14 - (long)plVar9 >> 3) + 1;
              lVar1 = (long)plVar9 - (long)plVar17;
              lVar3 = (long)plVar9 - (long)plVar17;
              plVar9 = plVar9 + ((ulong)(lVar5 - (lVar5 >> 0x3f)) >> 1);
              plVar20 = (long *)((long)plVar9 - lVar1);
              if (lVar3 != 0) {
                _memmove(plVar20,plVar12,lVar3);
                plVar8 = plVar12;
              }
            }
            else {
              plVar20 = (long *)((long)plVar14 - (long)plVar17 >> 2);
              if ((long)plVar14 - (long)plVar17 == 0) {
                plVar20 = (long *)0x1;
              }
              plVar4 = plVar20;
              FUN_10ad81a04();
              plVar20 = (long *)((long)plVar4 + ((long)plVar20 * 2 + 6U & 0xfffffffffffffff8));
              lVar5 = (long)plVar9 - (long)plVar17;
              plVar9 = plVar20;
              if (lVar5 != 0) {
                plVar9 = (long *)((long)plVar20 + lVar5);
                plVar14 = plVar20;
                do {
                  *plVar14 = *plVar12;
                  lVar5 = lVar5 + -8;
                  plVar14 = plVar14 + 1;
                  plVar12 = plVar12 + 1;
                } while (lVar5 != 0);
              }
              plVar14 = plVar4 + (long)plVar8;
              if (plVar17 != (long *)0x0) {
                __ZdlPv(plVar17);
              }
            }
          }
          plVar7 = plVar7 + -1;
          plVar12 = plVar20 + -1;
          *plVar12 = *plVar7;
          plVar17 = plVar4;
        } while (plVar7 != (long *)param_1[1]);
      }
      uVar10 = *param_1;
      *param_1 = (ulong)plVar4;
      param_1[1] = (ulong)plVar12;
      param_1[2] = (ulong)plVar9;
      param_1[3] = (ulong)plVar14;
      if (uVar10 != 0) {
        __ZdlPv();
      }
    }
  }
  else {
    param_1[4] = uVar2 - 0x200;
    uVar6 = *puVar21;
    param_1[1] = (ulong)(puVar21 + 1);
LAB_10ad8162c:
    FUN_10ad81908(param_1,uVar6);
  }
  puVar21 = (undefined8 *)param_1[1];
  uVar13 = param_1[5];
  uVar15 = uVar13 + param_1[4];
LAB_10ad81898:
  lVar5 = *param_2;
  *(long *)(puVar21[uVar15 >> 9] + (uVar15 & 0x1ff) * 8) = lVar5;
  if (lVar5 != 0) {
    _CFRetain();
    uVar13 = param_1[5];
  }
  param_1[5] = uVar13 + 1;
  return;
}



/* Entry: 10ad81908; end: 10ad81a03;  */

void FUN_10ad81908(ulong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  
  puVar7 = (undefined8 *)param_1[2];
  if (puVar7 == (undefined8 *)param_1[3]) {
    uVar3 = *param_1;
    uVar4 = param_1[1];
    if (uVar4 < uVar3 || uVar4 - uVar3 == 0) {
      uVar5 = (long)((long)puVar7 - uVar3) >> 2;
      if ((long)puVar7 - uVar3 == 0) {
        uVar5 = 1;
      }
      uVar3 = uVar5;
      FUN_10ad81a04();
      puVar1 = (undefined8 *)(uVar3 + (uVar5 >> 2) * 8);
      lVar8 = param_1[2] - (long)param_1[1];
      puVar7 = puVar1;
      if (lVar8 != 0) {
        puVar7 = (undefined8 *)((long)puVar1 + lVar8);
        puVar6 = (undefined8 *)param_1[1];
        puVar9 = puVar1;
        do {
          *puVar9 = *puVar6;
          lVar8 = lVar8 + -8;
          puVar6 = puVar6 + 1;
          puVar9 = puVar9 + 1;
        } while (lVar8 != 0);
      }
      uVar5 = *param_1;
      *param_1 = uVar3;
      param_1[1] = (ulong)puVar1;
      param_1[2] = (ulong)puVar7;
      param_1[3] = uVar3 + uVar4 * 8;
      if (uVar5 != 0) {
        __ZdlPv(uVar5);
        puVar7 = (undefined8 *)param_1[2];
      }
    }
    else {
      lVar8 = (((long)(uVar4 - uVar3) >> 3) + 1) / 2;
      lVar10 = uVar4 + lVar8 * -8;
      lVar2 = (long)puVar7 - uVar4;
      if (lVar2 != 0) {
        _memmove(lVar10,uVar4,lVar2);
        uVar4 = param_1[1];
      }
      puVar7 = (undefined8 *)(lVar10 + lVar2);
      param_1[1] = uVar4 + lVar8 * -8;
      param_1[2] = (ulong)puVar7;
    }
  }
  *puVar7 = param_2;
  param_1[2] = param_1[2] + 8;
  return;
}



/* Entry: 10ad81a04; end: 10ad81abf;  */

void FUN_10ad81a04(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  
  if (param_1 >> 0x3d == 0) {
    __Znwm(param_1 << 3);
    return;
  }
  func_0x000109ffded8();
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_10ad8159c(*(long *)(*(long *)(param_1 + 8) + (*(ulong *)(param_1 + 0x20) >> 9) * 8) +
                  (*(ulong *)(param_1 + 0x20) & 0x1ff) * 8);
    uVar2 = *(long *)(param_1 + 0x20) + 1;
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -1;
    *(ulong *)(param_1 + 0x20) = uVar2;
    if (0x3ff < uVar2) {
      __ZdlPv(**(undefined8 **)(param_1 + 8));
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
      *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -0x200;
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10ad81ac0);
  (*pcVar1)();
}



/* Entry: 10ad81ac0; end: 10ad81f6f;  */

ulong * FUN_10ad81ac0(ulong *param_1,undefined8 *param_2,ulong *param_3,int *param_4)

{
  long *plVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  ulong *puVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  long *plVar15;
  undefined8 auStack_c0 [2];
  char cStack_a9;
  ulong uStack_a8;
  ulong uStack_a0;
  undefined7 uStack_98;
  undefined1 uStack_91;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  
  *param_1 = (ulong)&PTR_DAT_110c72608;
  param_1[1] = 0;
  param_1[2] = 0;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    puVar8 = &uStack_70;
    func_0x000107c3192c(puVar8,*param_3,param_3[1]);
  }
  else {
    uStack_68 = param_3[1];
    uStack_70 = *param_3;
    uStack_60 = param_3[2];
    puVar8 = param_1;
  }
  uVar2 = uStack_68;
  if (-1 < (long)uStack_60) {
    uVar2 = uStack_60 >> 0x38;
  }
  if (uVar2 == 0) {
    func_0x00010ad0321c();
    if (*(char *)((long)puVar8 + 0x17) < '\0') {
      func_0x000107c3192c(&uStack_90,*puVar8,puVar8[1]);
    }
    else {
      uStack_88 = puVar8[1];
      uStack_90 = *puVar8;
      uStack_80 = puVar8[2];
    }
    uVar2 = uStack_88;
    if (-1 < (long)uStack_80) {
      uVar2 = uStack_80 >> 0x38;
    }
    if (uVar2 == 0) {
      FUN_10a00946c(&UNK_10f6ab606);
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x10ad81e9c);
      (*pcVar7)();
    }
    func_0x000107c2b054(auStack_c0,"mp4");
    FUN_10ad016b8(&uStack_a8,&uStack_90,auStack_c0);
    if ((long)uStack_60 < 0) {
      __ZdlPv(uStack_70);
    }
    uStack_68 = uStack_a0;
    uStack_70 = uStack_a8;
    uStack_60 = CONCAT17(uStack_91,uStack_98);
    uStack_91 = 0;
    uStack_a8 = uStack_a8 & 0xffffffffffffff00;
    if (cStack_a9 < '\0') {
      __ZdlPv(auStack_c0[0]);
    }
    if ((long)uStack_80 < 0) {
      __ZdlPv(uStack_90);
    }
  }
  puVar9 = (undefined8 *)0x58;
  __Znwm();
  puVar8 = puVar9 + 10;
  *puVar8 = 0;
  puVar9[1] = 0;
  *puVar9 = 0;
  puVar9[3] = 0;
  puVar9[2] = 0;
  puVar9[4] = 0;
  puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = puVar9[3];
  puVar9[3] = puVar10;
  _objc_release(uVar13);
  puVar10 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cc40();
  _objc_release(puVar10);
  puVar9[5] = (double)param_4[2];
  puVar9[4] = *param_2;
  iVar3 = *param_4;
  iVar4 = iVar3 << 1;
  puVar9[6] = 0x46c70636d;
  *(int *)(puVar9 + 7) = iVar4;
  *(undefined4 *)((long)puVar9 + 0x3c) = 1;
  *(int *)(puVar9 + 8) = iVar4;
  *(int *)((long)puVar9 + 0x44) = iVar3;
  puVar9[9] = 0x10;
  _CMAudioFormatDescriptionCreate
            (*(undefined8 *)PTR__kCFAllocatorDefault_11034ab78,puVar9 + 5,0,0,0,0,0,&uStack_90);
  uVar2 = uStack_90;
  uStack_a8 = uStack_90;
  if (*puVar8 != 0) {
    _CFRelease();
  }
  *puVar8 = uVar2;
  uStack_a8 = 0;
  FUN_10ad837d0(&uStack_a8);
  puVar10 = PTR_PTR_1126de0c8;
  _objc_alloc();
  puVar11 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bfad300(PTR__OBJC_CLASS___NSURL_1126ae598);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c057b40((double)*(int *)(puVar9 + 4),(double)*(int *)((long)puVar9 + 0x24));
  uVar13 = puVar9[2];
  puVar9[2] = puVar10;
  _objc_release(uVar13);
  _objc_release(puVar11);
  plVar12 = (long *)0x20;
  __Znwm();
  plVar15 = plVar12 + 1;
  *plVar15 = 0;
  *plVar12 = (long)&PTR_FUN_110c726f0;
  plVar12[2] = 0;
  plVar12[3] = (long)puVar9;
  if (puVar9[1] == 0) {
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar6) {
        *plVar15 = *plVar15 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    plVar1 = plVar12 + 2;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = *plVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    *puVar9 = puVar9;
    puVar9[1] = plVar12;
  }
  else {
    if (*(long *)(puVar9[1] + 8) != -1) goto LAB_10ad81e20;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar6) {
        *plVar15 = *plVar15 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    plVar1 = plVar12 + 2;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = *plVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    *puVar9 = puVar9;
    puVar9[1] = plVar12;
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  do {
    lVar14 = *plVar15;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar6) {
      *plVar15 = lVar14 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (lVar14 == 0) {
    (**(code **)(*plVar12 + 0x10))(plVar12);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
  }
LAB_10ad81e20:
  plVar15 = (long *)param_1[2];
  param_1[1] = (ulong)puVar9;
  param_1[2] = (ulong)plVar12;
  if (plVar15 != (long *)0x0) {
    plVar12 = plVar15 + 1;
    do {
      lVar14 = *plVar12;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar6) {
        *plVar12 = lVar14 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
    }
  }
  if ((long)uStack_60 < 0) {
    __ZdlPv(uStack_70);
  }
  return param_1;
}



/* Entry: 10ad81f70; end: 10ad81fc7;  */

void FUN_10ad81f70(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _CACurrentMediaTime();
  _CMTimeMakeWithSeconds(auStack_48,1000);
  FUN_10ad81fc8(uVar1,param_2,param_3,auStack_48);
  return;
}



/* Entry: 10ad81fc8; end: 10ad826b3;  */

long * FUN_10ad81fc8(long **param_1,long *param_2,long **param_3,undefined8 *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long **pplVar4;
  undefined **ppuVar5;
  long *plVar6;
  long *plVar7;
  long **pplVar8;
  long *plVar9;
  long **pplVar10;
  undefined8 *puVar11;
  float *pfVar12;
  long lVar13;
  long *unaff_x21;
  long *unaff_x22;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auStack_358 [24];
  long *plStack_340;
  long *plStack_338;
  long **pplStack_330;
  long *plStack_328;
  undefined1 *puStack_320;
  code *pcStack_318;
  float fStack_310;
  float fStack_30c;
  float fStack_308;
  float fStack_304;
  float fStack_300;
  float fStack_2fc;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  long *plStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  long *plStack_2a0;
  long *plStack_298;
  long *plStack_288;
  long *plStack_280;
  long *plStack_278;
  long *plStack_270;
  long *plStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined4 uStack_208;
  undefined8 uStack_c8;
  long *plStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  long lStack_68;
  
  pfVar12 = &fStack_310;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar9 = param_2;
  if (param_1[2] == (long *)0x0) {
    pplVar4 = (long **)0x0;
    pplVar10 = param_3;
    pfVar12 = (float *)param_4;
    if ((bRam000000011330a9e8 & 1) != 0) {
      pplVar10 = (long **)&UNK_10f6ab623;
      pfVar12 = (float *)&UNK_10f6ab65d;
      pplVar4 = (long **)0x0;
      plVar9 = (long *)0x1;
      func_0x00010ae06f08(0,1,&UNK_10f6ab623,&UNK_10f6ab65d,0x50,&UNK_10f6ab6e0);
    }
    plVar6 = (long *)0x0;
    goto LAB_10ad825c4;
  }
  plStack_268 = (long *)param_4[1];
  plStack_270 = (long *)*param_4;
  plStack_260 = (long *)param_4[2];
  pplVar10 = &plStack_270;
  puVar11 = param_4;
  func_0x00010c2508c0(param_1[2],param_2,pplVar10);
  if (param_1[2] == (long *)0x0) {
    plStack_278 = (long *)0x0;
LAB_10ad820b8:
    pfVar12 = (float *)puVar11;
    if ((bRam000000011330a9e8 & 1) != 0) {
      pplVar10 = (long **)&UNK_10f6ab623;
      pfVar12 = (float *)&UNK_10f6ab65d;
      plVar9 = (long *)0x1;
      func_0x00010ae06f08(0,1,&UNK_10f6ab623,&UNK_10f6ab65d,0x5a,&UNK_10f6ab710);
    }
    plVar6 = (long *)0x0;
  }
  else {
    func_0x00010bf57880(&plStack_278);
    if (plStack_278 == (long *)0x0) goto LAB_10ad820b8;
    FUN_10ad55ab4(&plStack_288,plStack_278,0);
    if (plStack_288 == (long *)0x0) {
      unaff_x22 = (long *)0x0;
    }
    else {
      unaff_x22 = plStack_288;
      ___dynamic_cast(plStack_288,&PTR_DAT_110bc45d8,&PTR_DAT_110c70c38,0xfffffffffffffffe);
    }
    plStack_2a0 = (long *)0x0;
    plStack_298 = (long *)0x0;
    ppuVar5 = &PTR___tlv_bootstrap_11340de10;
    (*(code *)PTR___tlv_bootstrap_11340de10)();
    plVar9 = plStack_280;
    lVar13 = 0;
    if ((char)*(long *)((long)*ppuVar5 + 0x160) == '\0') {
      lVar13 = 8;
    }
    plVar6 = *(long **)(*(long *)*ppuVar5 + lVar13);
    if ((*plVar6 == 0) || (*(int *)(*plVar6 + 0x734) == 1)) {
      plVar6 = (long *)0x1a0;
      __Znwm();
      plVar6[1] = 0;
      plVar6[2] = 0;
      *plVar6 = (long)&PTR_FUN_110c72198;
      plVar7 = plVar6 + 3;
      plStack_270 = plStack_288;
      plStack_268 = plVar9;
      if (plVar9 != (long *)0x0) {
        plVar9 = plVar9 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = *plVar9 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      FUN_10ad6fb78(plVar7,&plStack_270);
      plVar9 = plStack_268;
      if (plStack_268 != (long *)0x0) {
        plVar1 = plStack_268 + 1;
        do {
          lVar13 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar13 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*plStack_268 + 0x10))(plStack_268);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
      plVar9 = plStack_298;
      plStack_2a0 = plVar7;
      if (plStack_298 != (long *)0x0) {
        plVar7 = plStack_298 + 1;
        do {
          lVar13 = *plVar7;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *plVar7 = lVar13 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar13 == 0) {
          lVar13 = *plStack_298;
          plStack_298 = plVar6;
          (**(code **)(lVar13 + 0x10))(plVar9);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
          plVar6 = plStack_298;
        }
      }
    }
    else {
      FUN_10a15c630(plVar6,&plStack_288);
      FUN_10a099d88(&plStack_2a0,plVar6);
      plVar6 = plStack_298;
    }
    plStack_298 = plVar6;
    plVar7 = (long *)0x0;
    FUN_10a2421c8();
    plVar6 = plVar7;
    FUN_10a244d68();
    plStack_270 = (long *)0x0;
    uStack_c8 = 0;
    uStack_b8 = 0;
    plStack_c0 = (long *)0x0;
    uStack_b0 = 0xffffffffffffffff;
    uStack_a8 = 0xffffffffffffffff;
    uStack_90 = 0;
    plStack_98 = (long *)0x0;
    uStack_a0 = 0;
    uStack_88 = 0xffffffffffffffff;
    uStack_80 = 0xffffffffffffffff;
    uStack_78 = 0x3f800000;
    uStack_74 = 0;
    uStack_70 = 0;
    uStack_6c = 0;
    uStack_2b8 = 0;
    fStack_308 = 0.0;
    fStack_304 = 0.0;
    fStack_310 = 0.0;
    fStack_30c = 0.0;
    fStack_300 = 0.0;
    fStack_2fc = 0.0;
    uStack_2f8 = 0xffffffffffffffff;
    uStack_2f0 = 0xffffffffffffffff;
    uStack_2e8 = 0;
    plStack_2e0 = (long *)0x0;
    uStack_2d8 = 0;
    uStack_2d0 = 0xffffffffffffffff;
    uStack_2c8 = 0xffffffffffffffff;
    uStack_2c0 = 0;
    uStack_2b0 = 0;
    FUN_10a061728(&plStack_270,&fStack_310);
    plVar9 = plStack_2e0;
    if (plStack_2e0 != (long *)0x0) {
      plVar1 = plStack_2e0 + 1;
      do {
        lVar13 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar13 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plStack_2e0 + 0x10))(plStack_2e0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
    }
    plVar9 = (long *)CONCAT44(fStack_304,fStack_308);
    if (plVar9 != (long *)0x0) {
      plVar1 = plVar9 + 1;
      do {
        lVar13 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar13 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
    }
    plVar9 = plStack_260;
    if (plStack_298 != (long *)0x0) {
      plVar1 = plStack_298 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plStack_260 = plStack_298;
    plStack_268 = plStack_2a0;
    if (plVar9 != (long *)0x0) {
      plVar1 = plVar9 + 1;
      do {
        lVar13 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar13 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
    }
    uStack_258 = 0;
    uStack_250 = 0xffffffffffffffff;
    uStack_248 = 0xffffffffffffffff;
    uStack_208 = 2;
    uStack_70 = 2;
    uStack_6c = 2;
    (**(code **)(*plVar6 + 0x88))(plVar6,&plStack_270);
    fStack_310 = 0.0;
    fStack_30c = 0.0;
    fStack_308 = SUB84(param_1[4],0);
    fStack_304 = (float)((ulong)param_1[4] >> 0x20);
    (**(code **)(*plVar6 + 0xc0))(plVar6,&fStack_310);
    FUN_10a244c44(plVar7);
    fVar21 = SUB84(param_3[3],0);
    fVar22 = *(float *)(param_3 + 4);
    fVar18 = (float)*(undefined8 *)((long)param_3 + 0xc);
    fVar15 = SUB84(*param_3,0);
    fStack_310 = fVar15 + fVar18 * 0.0 + fVar21 * 0.0;
    fVar19 = SUB84(param_3[2],0);
    fVar20 = (float)((ulong)param_3[2] >> 0x20);
    fVar16 = (float)*(undefined8 *)((long)param_3 + 4);
    fVar17 = (float)((ulong)*(undefined8 *)((long)param_3 + 4) >> 0x20);
    fVar14 = (float)((ulong)param_3[3] >> 0x20);
    fStack_30c = fVar16 + fVar19 * 0.0 + fVar14 * 0.0;
    fStack_308 = fVar17 + fVar20 * 0.0 + fVar22 * 0.0;
    fStack_304 = -fVar18 + fVar15 * 0.0 + fVar21 * 0.0;
    fStack_300 = -(float)((ulong)*(undefined8 *)((long)param_3 + 0xc) >> 0x20) +
                 (float)((ulong)*param_3 >> 0x20) * 0.0 + fVar14 * 0.0;
    fStack_2fc = -fVar20 + fVar17 * 0.0 + fVar22 * 0.0;
    uStack_2f8 = CONCAT44(fVar19 + fVar16 * 0.0 + *(float *)((long)param_3 + 0x1c),
                          fVar18 + fVar15 * 0.0 + fVar21);
    uStack_2f0 = CONCAT44(uStack_2f0._4_4_,fVar20 + fVar17 * 0.0 + fVar22);
    FUN_10ab11d88();
    (**(code **)(*plVar6 + 0x90))(plVar6,0,3,3);
    (**(code **)(*unaff_x22 + 0x38))(unaff_x22);
    fStack_308 = (float)param_4[1];
    fStack_304 = (float)((ulong)param_4[1] >> 0x20);
    fStack_310 = (float)*param_4;
    fStack_30c = (float)((ulong)*param_4 >> 0x20);
    fStack_300 = (float)param_4[2];
    fStack_2fc = (float)((ulong)param_4[2] >> 0x20);
    pplVar10 = &plStack_278;
    func_0x00010c2be160(param_1[2]);
    (**(code **)(*unaff_x22 + 0x40))(unaff_x22);
    plVar9 = plStack_98;
    if (plStack_98 != (long *)0x0) {
      plVar6 = plStack_98 + 1;
      do {
        lVar13 = *plVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = lVar13 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plStack_98 + 0x10))(plStack_98);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
    }
    plVar9 = plStack_c0;
    param_1 = &plStack_270;
    if (plStack_c0 != (long *)0x0) {
      plVar6 = plStack_c0 + 1;
      do {
        lVar13 = *plVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = lVar13 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plStack_c0 + 0x10))(plStack_c0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
    }
    plVar9 = plStack_270;
    func_0x00010a048e34(&plStack_268,plStack_270);
    plVar6 = plStack_298;
    if (plStack_298 != (long *)0x0) {
      plVar7 = plStack_298 + 1;
      do {
        lVar13 = *plVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = lVar13 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plStack_298 + 0x10))(plStack_298);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    if (plStack_280 != (long *)0x0) {
      plVar6 = plStack_280 + 1;
      do {
        lVar13 = *plVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = lVar13 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plStack_280 + 0x10))(plStack_280);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_280);
      }
    }
    plVar6 = (long *)0x1;
  }
  pplVar4 = &plStack_278;
  FUN_10ad579f0();
  unaff_x21 = param_2;
LAB_10ad825c4:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return plVar6;
  }
  ___stack_chk_fail();
  func_0x00010a0523dc(&plStack_2a0);
  func_0x00010a09db0c(&plStack_288);
  FUN_10ad579f0(&plStack_278);
  pplVar8 = pplVar4;
  __Unwind_Resume();
  pcStack_318 = FUN_10ad826b4;
  plStack_340 = unaff_x22;
  plStack_338 = unaff_x21;
  pplStack_330 = param_1;
  plStack_328 = (long *)pplVar4;
  puStack_320 = &stack0xfffffffffffffff0;
  _CMTimeMakeWithSeconds(auStack_358,*(undefined8 *)pfVar12,1000);
  plVar6 = pplVar8[1];
  FUN_10ad81fc8(plVar6,plVar9,pplVar10,auStack_358);
  return plVar6;
}



/* Entry: 10ad826b4; end: 10ad8270b;  */

void FUN_10ad826b4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined1 auStack_48 [24];
  
  _CMTimeMakeWithSeconds(auStack_48,*param_4,1000);
  FUN_10ad81fc8(*(undefined8 *)(param_1 + 8),param_2,param_3,auStack_48);
  return;
}



/* Entry: 10ad8270c; end: 10ad82bb3;  */

/* WARNING: Type propagation algorithm not settling */

bool FUN_10ad8270c(long param_1,long *param_2,long *param_3,long *param_4)

{
  long *plVar1;
  bool bVar2;
  char cVar3;
  ulong uVar4;
  bool bVar5;
  undefined4 uVar6;
  long *plVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined1 *puVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined4 uStack_484;
  undefined8 uStack_480;
  code *pcStack_478;
  long *plStack_470;
  undefined8 uStack_468;
  long lStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  long lStack_3f8;
  long lStack_3f0;
  undefined1 auStack_3e8 [96];
  long lStack_388;
  int iStack_378;
  long lStack_370;
  undefined1 auStack_368 [72];
  long lStack_320;
  undefined4 auStack_318 [24];
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined4 uStack_2a8;
  long lStack_2a0;
  undefined1 auStack_298 [72];
  long alStack_250 [3];
  undefined1 auStack_238 [80];
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined4 uStack_1d8;
  long lStack_1d0;
  undefined1 auStack_1c8 [72];
  long alStack_180 [2];
  int iStack_170;
  undefined8 uStack_168;
  undefined4 uStack_150;
  long lStack_118;
  undefined1 auStack_110 [96];
  long lStack_b0;
  undefined4 uStack_a8;
  int iStack_a4;
  int iStack_a0;
  long lStack_98;
  undefined1 auStack_90 [72];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar7 = (long *)0x3e8;
  plVar9 = param_2;
  _CMTimeMakeWithSeconds(&lStack_410,*param_3);
  lVar11 = *(long *)(param_1 + 8);
  if (*(long *)(lVar11 + 0x10) == 0) {
    if ((bRam000000011330a9e8 & 1) != 0) {
      param_3 = (long *)&UNK_10f6ab623;
      param_4 = (long *)&UNK_10f6ab737;
      plVar7 = (long *)0x0;
      plVar9 = (long *)0x1;
      func_0x00010ae06f08(0,1,&UNK_10f6ab623,&UNK_10f6ab737,0xb4,&UNK_10f6ab6e0);
    }
  }
  else {
    plVar7 = (long *)*param_2;
    if (plVar7 == (long *)0x0) {
      if ((bRam000000011330a9e8 & 1) != 0) {
        param_3 = (long *)&UNK_10f6ab623;
        param_4 = (long *)&UNK_10f6ab737;
        plVar7 = (long *)0x0;
        plVar9 = (long *)0x1;
        func_0x00010ae06f08(0,1,&UNK_10f6ab623,&UNK_10f6ab737,0xb8,&UNK_10f6ab7a3);
      }
    }
    else {
      FUN_10a314fa4(&lStack_118);
      alStack_250[1] = 0x100040000000000;
      alStack_250[0] = 0x1000300;
      alStack_250[2] = 0;
      if (iStack_a4 == *(int *)(lVar11 + 0x20) && iStack_a0 == *(int *)(lVar11 + 0x24)) {
        if (lStack_118 == 1) {
          lVar13 = 0;
          puVar10 = auStack_238;
          lStack_320 = lStack_b0;
          auStack_318[0] = uStack_a8;
          do {
            plVar7 = (long *)((long)alStack_250 + lVar13);
            plVar9 = &lStack_320;
            func_0x0001096f1fac();
            if (((ulong)plVar7 & 1) != 0) {
              puVar10 = (undefined1 *)((long)alStack_250 + lVar13);
              break;
            }
            lVar13 = lVar13 + 0xc;
          } while (lVar13 != 0x18);
          if ((long)puVar10 - (long)alStack_250 != 0x18) {
            lStack_320 = lStack_b0;
            auStack_318[0] = uStack_a8;
            uVar6 = SUB84(&lStack_320,0);
            func_0x0001096f1ebc();
            alStack_250[1] = uStack_408;
            alStack_250[0] = lStack_410;
            alStack_250[2] = uStack_400;
            param_3 = alStack_250;
            func_0x00010c2508c0(*(long *)(lVar11 + 0x10));
            if (*(long *)(lVar11 + 0x10) == 0) {
              lStack_3f8 = 0;
LAB_10ad82b04:
              if ((bRam000000011330a9e8 & 1) != 0) {
                param_3 = (long *)&UNK_10f6ab623;
                param_4 = (long *)&UNK_10f6ab737;
                plVar9 = (long *)0x1;
                func_0x00010ae06f08(0,1,&UNK_10f6ab623,&UNK_10f6ab737,0xce,&UNK_10f6ab710);
              }
LAB_10ad82b7c:
              bVar5 = false;
            }
            else {
              func_0x00010bf57880(&lStack_3f8);
              if (lStack_3f8 == 0) goto LAB_10ad82b04;
              _CVPixelBufferLockBaseAddress(lStack_3f8,0);
              lVar13 = lStack_3f8;
              _CVPixelBufferGetBaseAddress();
              if (lVar13 == 0) {
                if ((bRam000000011330a9e8 & 1) != 0) {
                  param_3 = (long *)&UNK_10f6ab623;
                  param_4 = (long *)&UNK_10f6ab737;
                  func_0x00010ae06f08(0,1,&UNK_10f6ab623,&UNK_10f6ab737,0xd6,&UNK_10f6ab7e1);
                }
                plVar9 = (long *)0x0;
                _CVPixelBufferUnlockBaseAddress(lStack_3f8);
                goto LAB_10ad82b7c;
              }
              _CVPixelBufferGetBytesPerRow();
              alStack_180[0] = lStack_b0;
              iStack_170 = iStack_a0;
              uStack_168 = 1;
              uStack_150 = uVar6;
              FUN_10abdf81c(alStack_250,lVar13,alStack_180);
              lStack_320 = alStack_250[0];
              if (alStack_250[0] != 0) {
                _memcpy(auStack_318,alStack_250 + 1,alStack_250[0] << 5);
              }
              uStack_2b0 = uStack_1e0;
              uStack_2b8 = uStack_1e8;
              uStack_2a8 = uStack_1d8;
              lStack_2a0 = lStack_1d0;
              if (lStack_1d0 != 0) {
                _memcpy(auStack_298,auStack_1c8,lStack_1d0 * 0x18);
              }
              lStack_3f0 = lStack_118;
              if (lStack_118 != 0) {
                _memcpy(auStack_3e8,auStack_110,lStack_118 << 5);
              }
              lStack_388 = lStack_b0;
              iStack_378 = iStack_a0;
              lStack_370 = lStack_98;
              if (lStack_98 != 0) {
                _memcpy(auStack_368,auStack_90,lStack_98 * 0x18);
              }
              func_0x0001096f1c24(&lStack_320,&lStack_3f0);
              plVar9 = (long *)0x0;
              _CVPixelBufferUnlockBaseAddress(lStack_3f8);
              alStack_250[1] = uStack_408;
              alStack_250[0] = lStack_410;
              alStack_250[2] = uStack_400;
              param_3 = &lStack_3f8;
              param_4 = alStack_250;
              func_0x00010c2be160(*(undefined8 *)(lVar11 + 0x10));
              bVar5 = true;
            }
            plVar7 = &lStack_3f8;
            FUN_10ad579f0();
            goto LAB_10ad8291c;
          }
          if ((bRam000000011330a9e8 & 1) != 0) {
            param_3 = (long *)&UNK_10f6ab817;
            param_4 = (long *)&UNK_10f6ab84e;
            plVar7 = (long *)0x0;
            plVar9 = (long *)0x1;
            func_0x00010ae06f08(0,1,&UNK_10f6ab817,&UNK_10f6ab84e,0x29,&UNK_10f6ab9aa);
          }
        }
        else if ((bRam000000011330a9e8 & 1) != 0) {
          param_3 = (long *)&UNK_10f6ab817;
          param_4 = (long *)&UNK_10f6ab84e;
          plVar7 = (long *)0x0;
          plVar9 = (long *)0x1;
          func_0x00010ae06f08(0,1,&UNK_10f6ab817,&UNK_10f6ab84e,0x23,&UNK_10f6ab966);
        }
      }
      else if ((bRam000000011330a9e8 & 1) != 0) {
        param_3 = (long *)&UNK_10f6ab817;
        param_4 = (long *)&UNK_10f6ab84e;
        plVar7 = (long *)0x0;
        plVar9 = (long *)0x1;
        func_0x00010ae06f08(0,1,&UNK_10f6ab817,&UNK_10f6ab84e,0x1f,&UNK_10f6ab91e);
      }
    }
  }
  bVar5 = false;
LAB_10ad8291c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    FUN_10ad579f0(&lStack_3f8);
    __Unwind_Resume();
    lVar13 = plVar7[1];
    lVar11 = *plVar9;
    plVar9 = (long *)plVar9[1];
    if (plVar9 != (long *)0x0) {
      plVar7 = plVar9 + 1;
      do {
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar5) {
          *plVar7 = *plVar7 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    uStack_484 = 0;
    plVar7 = (long *)0x10;
    __Znwm();
    *plVar7 = lVar11;
    plVar7[1] = (long)plVar9;
    if (plVar9 != (long *)0x0) {
      plVar1 = plVar9 + 1;
      do {
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    uStack_480 = 0;
    pcStack_478 = FUN_10ad83264;
    uVar12 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
    uVar8 = uVar12;
    plStack_470 = plVar7;
    _CMBlockBufferCreateWithMemoryBlock
              (uVar12,lVar11,param_3,uVar12,&uStack_484,0,param_3,0,&uStack_468);
    if ((int)uVar8 == 0) {
      uStack_490 = uStack_468;
      _CMTimeMakeWithSeconds(&uStack_4b0,*param_4,(int)*(double *)(lVar13 + 0x28));
      uStack_4c8 = uStack_4a8;
      uStack_4d0 = uStack_4b0;
      uStack_4c0 = uStack_4a0;
      uVar4 = 0;
      if ((ulong)*(uint *)(lVar13 + 0x40) != 0) {
        uVar4 = (ulong)param_3 / (ulong)*(uint *)(lVar13 + 0x40);
      }
      _CMAudioSampleBufferCreateReadyWithPacketDescriptions
                (uVar12,uStack_468,*(undefined8 *)(lVar13 + 0x50),uVar4,&uStack_4d0,0,&uStack_498);
      bVar5 = (int)uVar12 == 0;
      if ((int)uVar12 == 0) {
        uStack_4d0 = uStack_498;
        func_0x00010c2bd8c0(*(undefined8 *)(lVar13 + 0x10));
        FUN_10ad8159c(&uStack_4d0);
      }
      else if ((bRam000000011330a9e8 & 1) != 0) {
        func_0x00010ae06f08(0,1,&UNK_10f6ab623,&UNK_10f6ab9e6,0xa8,&UNK_10f6aba70);
      }
      FUN_10ad83280(&uStack_490);
    }
    else {
      if ((bRam000000011330a9e8 & 1) != 0) {
        func_0x00010ae06f08(0,1,&UNK_10f6ab623,&UNK_10f6ab9e6,0x98,&UNK_10f6aba46);
      }
      (*pcStack_478)(plStack_470,lVar11,param_3);
      bVar5 = false;
    }
    if (plVar9 != (long *)0x0) {
      plVar7 = plVar9 + 1;
      do {
        lVar11 = *plVar7;
        cVar3 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar2) {
          *plVar7 = lVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
    }
    return bVar5;
  }
  return bVar5;
}



/* Entry: 10ad82bb4; end: 10ad82df7;  */

bool FUN_10ad82bb4(long param_1,undefined8 *param_2,ulong param_3,undefined8 *param_4)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  bool bVar4;
  char cVar5;
  ulong uVar6;
  bool bVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_64;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  lVar11 = *(long *)(param_1 + 8);
  uVar2 = *param_2;
  plVar3 = (long *)param_2[1];
  if (plVar3 != (long *)0x0) {
    plVar1 = plVar3 + 1;
    do {
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = *plVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  uStack_64 = 0;
  puVar8 = (undefined8 *)0x10;
  __Znwm();
  *puVar8 = uVar2;
  puVar8[1] = plVar3;
  if (plVar3 != (long *)0x0) {
    plVar1 = plVar3 + 1;
    do {
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = *plVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  uStack_60 = 0;
  pcStack_58 = FUN_10ad83264;
  uVar10 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
  uVar9 = uVar10;
  puStack_50 = puVar8;
  _CMBlockBufferCreateWithMemoryBlock(uVar10,uVar2,param_3,uVar10,&uStack_64,0,param_3,0,&uStack_48)
  ;
  if ((int)uVar9 == 0) {
    uStack_70 = uStack_48;
    _CMTimeMakeWithSeconds(&uStack_90,*param_4,(int)*(double *)(lVar11 + 0x28));
    uStack_a8 = uStack_88;
    uStack_b0 = uStack_90;
    uStack_a0 = uStack_80;
    uVar6 = 0;
    if ((ulong)*(uint *)(lVar11 + 0x40) != 0) {
      uVar6 = param_3 / *(uint *)(lVar11 + 0x40);
    }
    _CMAudioSampleBufferCreateReadyWithPacketDescriptions
              (uVar10,uStack_48,*(undefined8 *)(lVar11 + 0x50),uVar6,&uStack_b0,0,&uStack_78);
    bVar7 = (int)uVar10 == 0;
    if ((int)uVar10 == 0) {
      uStack_b0 = uStack_78;
      func_0x00010c2bd8c0(*(undefined8 *)(lVar11 + 0x10));
      FUN_10ad8159c(&uStack_b0);
    }
    else if ((bRam000000011330a9e8 & 1) != 0) {
      func_0x00010ae06f08(0,1,&UNK_10f6ab623,&UNK_10f6ab9e6,0xa8,&UNK_10f6aba70);
    }
    FUN_10ad83280(&uStack_70);
  }
  else {
    if ((bRam000000011330a9e8 & 1) != 0) {
      func_0x00010ae06f08(0,1,&UNK_10f6ab623,&UNK_10f6ab9e6,0x98,&UNK_10f6aba46);
    }
    (*pcStack_58)(puStack_50,uVar2,param_3);
    bVar7 = false;
  }
  if (plVar3 != (long *)0x0) {
    plVar1 = plVar3 + 1;
    do {
      lVar11 = *plVar1;
      cVar5 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar11 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  return bVar7;
}



/* Entry: 10ad82df8; end: 10ad82e3f;  */

void FUN_10ad82df8(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_38 [24];
  
  puVar1 = *(undefined8 **)(param_2 + 8);
  _CACurrentMediaTime();
  _CMTimeMakeWithSeconds(auStack_38,1000);
  FUN_10ad82e40(param_1,*puVar1,puVar1[1],auStack_38);
  return;
}



/* Entry: 10ad82e40; end: 10ad831a7;  */

/* WARNING: Removing unreachable block (ram,0x00010ad82f98) */
/* WARNING: Removing unreachable block (ram,0x00010ad82f9c) */
/* WARNING: Removing unreachable block (ram,0x00010ad82fa4) */
/* WARNING: Removing unreachable block (ram,0x00010ad82fac) */
/* WARNING: Removing unreachable block (ram,0x00010ad82fb8) */
/* WARNING: Removing unreachable block (ram,0x00010ad82fc0) */
/* WARNING: Removing unreachable block (ram,0x00010ad82fc8) */
/* WARNING: Removing unreachable block (ram,0x00010ad82fcc) */
/* WARNING: Removing unreachable block (ram,0x00010ad830f8) */
/* WARNING: Removing unreachable block (ram,0x00010ad830fc) */
/* WARNING: Removing unreachable block (ram,0x00010ad83104) */
/* WARNING: Removing unreachable block (ram,0x00010ad8310c) */
/* WARNING: Removing unreachable block (ram,0x00010ad83118) */
/* WARNING: Removing unreachable block (ram,0x00010ad83120) */
/* WARNING: Removing unreachable block (ram,0x00010ad83128) */
/* WARNING: Removing unreachable block (ram,0x00010ad8312c) */

void FUN_10ad82e40(undefined8 *param_1,undefined8 param_2,long *param_3,undefined8 *param_4)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  code *pcStack_70;
  code *pcStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  
  if ((param_3 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), param_3 != (long *)0x0)
     ) {
    plVar8 = param_3 + 2;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = *plVar8 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar4 = param_3 + 1;
    do {
      lVar6 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar4 = param_3;
    if (lVar6 == 0) {
      (**(code **)(*param_3 + 0x10))(param_3);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    FUN_109d1a80c();
    puVar7 = (undefined8 *)*plVar4;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = *plVar8 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    uVar11 = param_4[1];
    uVar10 = *param_4;
    uVar5 = param_4[2];
    plVar8 = (long *)puVar7[2];
    puStack_78 = (undefined8 *)0x0;
    if (plVar8 == (long *)0x0) {
      puStack_80 = (undefined8 *)0x100;
      __Znwm();
      puStack_80[2] = 0;
      puStack_80[1] = 0x200000006;
      *(undefined2 *)(puStack_80 + 3) = 4;
      puStack_80[5] = 0;
      puStack_80[4] = 0;
      puStack_80[7] = 0;
      puStack_80[6] = 0;
      puStack_80[9] = 0;
      puStack_80[8] = 0;
      puStack_80[0xb] = 0;
      puStack_80[10] = 0;
      puStack_80[0xd] = 0;
      puStack_80[0xc] = 0;
      puStack_80[0xf] = 0;
      puStack_80[0xe] = 0;
      puStack_80[0x10] = 0;
      puStack_80[0x11] = puStack_80 + 3;
      puStack_80[0x12] = 0;
      *(undefined1 *)(puStack_80 + 0x13) = 0;
      *(undefined1 *)(puStack_80 + 0x17) = 0;
      *puStack_80 = &PTR_DAT_110c726b8;
      puVar9 = puStack_80 + 0x18;
      *puVar9 = param_2;
      puStack_80[0x19] = param_3;
      uVar10 = param_4[1];
      uVar5 = *param_4;
      puStack_80[0x1c] = param_4[2];
      puStack_80[0x1b] = uVar10;
      puStack_80[0x1a] = uVar5;
      *(undefined1 *)(puStack_80 + 0x1e) = 1;
      puStack_80[0x1f] = 0;
      pcStack_70 = FUN_10ad832e0;
      puStack_78 = puStack_80;
    }
    else {
      pcStack_68 = (code *)0x0;
      (**(code **)(*plVar8 + 0x28))(plVar8,0,&pcStack_68);
      if (pcStack_68 != (code *)0x0) goto LAB_10ad83160;
      puStack_80 = (undefined8 *)0x108;
      __Znwm();
      puStack_80[2] = 0;
      puStack_80[1] = 0x200000006;
      *(undefined2 *)(puStack_80 + 3) = 4;
      puStack_80[5] = 0;
      puStack_80[4] = 0;
      puStack_80[7] = 0;
      puStack_80[6] = 0;
      puStack_80[9] = 0;
      puStack_80[8] = 0;
      puStack_80[0xb] = 0;
      puStack_80[10] = 0;
      puStack_80[0xd] = 0;
      puStack_80[0xc] = 0;
      puStack_80[0xf] = 0;
      puStack_80[0xe] = 0;
      puStack_80[0x10] = 0;
      puStack_80[0x11] = puStack_80 + 3;
      puStack_80[0x12] = 0;
      *(undefined1 *)(puStack_80 + 0x13) = 0;
      *(undefined1 *)(puStack_80 + 0x17) = 0;
      *puStack_80 = &PTR_FUN_110c72680;
      puVar9 = puStack_80 + 0x18;
      *puVar9 = param_2;
      puStack_80[0x19] = param_3;
      puStack_80[0x1c] = uVar5;
      puStack_80[0x1b] = uVar11;
      puStack_80[0x1a] = uVar10;
      *(undefined1 *)(puStack_80 + 0x1e) = 1;
      puStack_80[0x1f] = 0;
      puStack_80[0x20] = plVar8;
      if (puStack_78 != (undefined8 *)0x0) {
        func_0x0001092b4274(&puStack_78);
      }
      pcStack_70 = FUN_10ad832b0;
      puStack_78 = puStack_80;
      __ZNSt13exception_ptrD1Ev(&pcStack_68);
    }
    if (puVar9[7] != 0) {
      func_0x0001092b4274();
    }
    puVar9[7] = puStack_78;
    puStack_78 = (undefined8 *)0x0;
    pcStack_68 = pcStack_70;
    puStack_60 = puVar9;
    puStack_58 = puVar7;
    (**(code **)*puVar7)(puVar7,&pcStack_68);
    *param_1 = puStack_80;
    if (puStack_78 != (undefined8 *)0x0) {
      func_0x0001092b4274(&puStack_78);
    }
    __ZNSt3__119__shared_weak_count14__release_weakEv(param_3);
    return;
  }
  FUN_10a043ecc();
LAB_10ad83160:
  func_0x0001092af97c(&pcStack_68);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10ad8316c);
  (*pcVar3)();
}



/* Entry: 10ad831a8; end: 10ad83263;  */

void FUN_10ad831a8(undefined8 param_1,long param_2,undefined8 *param_3)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _CMTimeMakeWithSeconds(&uStack_38,*param_3,1000);
  uStack_48 = uStack_30;
  uStack_50 = uStack_38;
  uStack_40 = uStack_28;
  FUN_10ad82e40(param_1,**(undefined8 **)(param_2 + 8),(*(undefined8 **)(param_2 + 8))[1],&uStack_50
               );
  return;
}



/* Entry: 10ad83264; end: 10ad8327f;  */

void FUN_10ad83264(long param_1)

{
  if (param_1 != 0) {
    FUN_10a232e34();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10ad83280; end: 10ad832af;  */

long * FUN_10ad83280(long *param_1)

{
  if (*param_1 != 0) {
    _CFRelease();
  }
  return param_1;
}



/* Entry: 10ad832b0; end: 10ad832df;  */

void FUN_10ad832b0(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x40);
  FUN_10ad832e0();
                    /* WARNING: Could not recover jumptable at 0x00010ad832dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,0);
  return;
}



/* Entry: 10ad832e0; end: 10ad8352f;  */

void FUN_10ad832e0(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_a0 [8];
  undefined8 auStack_98 [2];
  char cStack_81;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_50;
  long *plStack_48;
  
  if ((*(byte *)(param_1 + 6) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10ad834d0);
    (*pcVar4)();
  }
  lVar9 = param_1[7];
  param_1[7] = 0;
  lStack_50 = 0;
  plStack_48 = (long *)0x0;
  plVar5 = (long *)param_1[1];
  lStack_80 = lVar9;
  if (((plVar5 == (long *)0x0) ||
      (__ZNSt3__119__shared_weak_count4lockEv(), plStack_48 = plVar5, plVar5 == (long *)0x0)) ||
     (lVar11 = *param_1, lStack_50 = lVar11, lVar11 == 0)) {
    lVar10 = 0;
    plVar5 = plStack_48;
LAB_10ad833a0:
    auStack_a0[0] = 0;
    func_0x000107c2b054(auStack_98,"");
    if (plVar5 == (long *)0x0) goto LAB_10ad833ec;
  }
  else {
    uVar6 = *(ulong *)(lVar11 + 0x10);
    lStack_68 = param_1[3];
    lStack_70 = param_1[2];
    lStack_60 = param_1[4];
    lStack_78 = 0;
    func_0x00010bfaff60();
    lVar10 = lStack_78;
    _objc_retain(lStack_78);
    if ((uVar6 & 1) == 0) {
      if ((lVar10 != 0) && ((bRam000000011330a9e8 & 1) != 0)) {
        lVar11 = lVar10;
        func_0x00010c09e4e0();
        _objc_retainAutoreleasedReturnValue();
        lVar8 = lVar11;
        _objc_retainAutorelease();
        func_0x00010bdc3520();
        func_0x00010ae06f08(0,1,&UNK_10f6ab623,&UNK_10f6aba91,0xf5,&UNK_10f6abaea,in_x6,in_x7,lVar8)
        ;
        _objc_release(lVar11);
      }
      goto LAB_10ad833a0;
    }
    uVar7 = *(undefined8 *)(lVar11 + 0x18);
    func_0x00010bdc3520(uVar7);
    auStack_a0[0] = 1;
    func_0x000107c2b054(auStack_98,uVar7);
  }
  plVar1 = plVar5 + 1;
  do {
    lVar11 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar11 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar11 == 0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
  }
LAB_10ad833ec:
  _objc_release(lVar10);
  FUN_10a94f704(lVar9,auStack_a0);
  if (cStack_81 < '\0') {
    __ZdlPv(auStack_98[0]);
  }
  if ((char)param_1[6] == '\x01') {
    if (param_1[1] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    *(undefined1 *)(param_1 + 6) = 0;
  }
  lStack_80 = 0;
  if ((lVar9 != 0) && (func_0x0001092b4274(&lStack_80,lVar9), lStack_80 != 0)) {
    func_0x0001092b4274(&lStack_80);
  }
  return;
}



/* Entry: 10ad83530; end: 10ad837cf;  */

undefined8 * FUN_10ad83530(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c72680;
  if (param_1[0x1f] != 0) {
    func_0x0001092b4274();
  }
  if ((*(char *)(param_1 + 0x1e) == '\x01') && (param_1[0x19] != 0)) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110c31800;
  if ((*(char *)(param_1 + 0x17) == '\x01') && (*(char *)((long)param_1 + 0xb7) < '\0')) {
    __ZdlPv(param_1[0x14]);
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10ad837d0; end: 10ad837ff;  */

long * FUN_10ad837d0(long *param_1)

{
  if (*param_1 != 0) {
    _CFRelease();
  }
  return param_1;
}



/* Entry: 10ad83800; end: 10ad8385b;  */

long FUN_10ad83800(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  _objc_release(uVar1);
  FUN_10ad837d0(param_1 + 0x50);
  _objc_release(*(undefined8 *)(param_1 + 0x18));
  _objc_release(*(undefined8 *)(param_1 + 0x10));
  if (*(long *)(param_1 + 8) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10ad8385c; end: 10ad8385f;  */

void FUN_10ad8385c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10ad83860; end: 10ad83893;  */

void FUN_10ad83860(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ad83894; end: 10ad838cb;  */

undefined8 FUN_10ad83894(undefined8 param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110c72730);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10ad838cc; end: 10ad838cf;  */

void FUN_10ad838cc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ad838d0; end: 10ad83ad3;  */

void FUN_10ad838d0(long *param_1,long *******param_2,long *param_3,undefined8 *param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long *****ppppplVar5;
  bool bVar6;
  code *pcVar7;
  long *******ppppppplVar8;
  undefined8 *puVar9;
  uint uVar10;
  int iVar11;
  long *******ppppppplVar12;
  long lVar13;
  long ******pppppplVar14;
  int iVar15;
  uint uVar16;
  undefined1 uVar17;
  ulong uVar18;
  ulong uVar19;
  int iVar20;
  int *piVar21;
  long *plVar22;
  int iVar23;
  long *******unaff_x23;
  long ******pppppplVar24;
  undefined8 auStack_1b8 [3];
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  long ****pppplStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long *****ppppplStack_138;
  long ******pppppplStack_c8;
  long *****ppppplStack_c0;
  byte bStack_b1;
  long ******pppppplStack_b0;
  long *****ppppplStack_a8;
  byte bStack_99;
  long *****ppppplStack_98;
  long *****appppplStack_90 [7];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c2b054(&pppppplStack_b0,&DAT_10f2c3d0c);
  ppppppplVar8 = (long *******)*param_2;
  uVar10 = (uint)param_2[1];
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    ppppppplVar8 = param_2;
    uVar10 = (uint)*(byte *)((long)param_2 + 0x17);
  }
  FUN_10a1a5e64(&pppppplStack_c8);
  uVar4 = (uint)(char)bStack_b1;
  pppppplVar14 = (long ******)ppppplStack_c0;
  if (-1 < (int)uVar4) {
    pppppplVar14 = (long ******)(ulong)bStack_b1;
  }
  if (-1 < (char)bStack_99) {
    ppppplStack_a8 = (long *****)(ulong)bStack_99;
  }
  if (pppppplVar14 == (long ******)ppppplStack_a8) {
    ppppppplVar8 = (long *******)pppppplStack_c8;
    if (-1 < (int)uVar4) {
      ppppppplVar8 = &pppppplStack_c8;
    }
    ppppppplVar12 = (long *******)pppppplStack_b0;
    if (-1 < (char)bStack_99) {
      ppppppplVar12 = &pppppplStack_b0;
    }
    uVar10 = (uint)ppppppplVar12;
    _memcmp();
    if ((int)ppppppplVar8 != 0) goto LAB_10ad83994;
    unaff_x23 = (long *******)0x30;
    __Znwm();
    ppppppplVar8 = unaff_x23;
    ppppppplVar12 = param_2;
    FUN_10ad84ef4();
    uVar10 = (uint)ppppppplVar12;
    bVar6 = false;
    *param_1 = (long)unaff_x23;
    if (-1 < (char)bStack_b1) goto LAB_10ad839a4;
  }
  else {
LAB_10ad83994:
    bVar6 = true;
    if ((uVar4 >> 7 & 1) == 0) goto LAB_10ad839a4;
  }
  ppppppplVar8 = (long *******)pppppplStack_c8;
  __ZdlPv();
LAB_10ad839a4:
  if ((char)bStack_99 < '\0') {
    ppppppplVar8 = (long *******)pppppplStack_b0;
    __ZdlPv();
  }
  if (bVar6) {
    ppppplStack_98 = (long *****)*param_4;
    unaff_x23 = (long *******)&ppppplStack_98;
    (**(code **)(param_4[1] + 0x18))(appppplStack_90,param_4 + 1);
    pppppplVar14 = &ppppplStack_98;
    (**(code **)(*param_3 + 0x30))(param_1,param_3);
    uVar10 = (uint)param_2;
    ppppppplVar8 = (long *******)appppplStack_90;
    (*(code *)*appppplStack_90[0])();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  __ZdlPv(unaff_x23);
  if ((char)bStack_b1 < '\0') {
    __ZdlPv(pppppplStack_c8);
  }
  if ((char)bStack_99 < '\0') {
    __ZdlPv(pppppplStack_b0);
  }
  __Unwind_Resume();
  iVar15 = *(int *)(ppppppplVar8 + 0x3b);
  if (iVar15 < (int)uVar10) {
    do {
      uVar4 = iVar15 + 1;
      *(uint *)(ppppppplVar8 + 0x3b) = uVar4;
      if ((pppppplVar14 == (long ******)0x0) ||
         (pppppplVar24 = pppppplVar14, uVar16 = uVar10, uVar4 != uVar10)) {
        ppppplStack_138 = (long *****)*ppppppplVar8;
        uStack_178 = 0;
        pppplStack_180 = (long ****)0x0;
        uStack_168 = 0;
        uStack_170 = 0;
        uStack_158 = 0;
        uStack_160 = 0;
        uStack_148 = 0;
        uStack_150 = 0;
        uStack_140 = 0;
        pppppplVar24 = (long ******)&pppplStack_180;
        iVar15 = uVar10 + 1;
        func_0x000108221148(iVar15,&pppplStack_180);
        uVar16 = uVar4;
        if (iVar15 == 0) {
          __ZNSt3__19to_stringEi(auStack_1b8,*(undefined4 *)(ppppppplVar8 + 0x2f));
          puVar9 = auStack_1b8;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                    (puVar9,0,&UNK_10f6abb26,0x10);
          uStack_198 = puVar9[1];
          uStack_1a0 = *puVar9;
          uStack_190 = puVar9[2];
          puVar9[1] = 0;
          puVar9[2] = 0;
          *puVar9 = 0;
          FUN_10ad83d84(ppppppplVar8[0x3c],&uStack_1a0);
          goto LAB_10ad83d4c;
        }
      }
      uVar18 = *(ulong *)((long)ppppppplVar8 + 0x10c);
      if (uVar16 == 0) {
        piVar21 = (int *)0x0;
      }
      else {
        iVar15 = uVar16 - 1;
        uVar19 = ((long)ppppppplVar8[0x39] - (long)ppppppplVar8[0x38] >> 2) * -0x71c71c71c71c71c7;
        if (uVar19 < (ulong)(long)iVar15 || uVar19 - (long)iVar15 == 0) goto LAB_10ad83d4c;
        piVar21 = (int *)((long)ppppppplVar8[0x38] + (long)iVar15 * 0x24);
      }
      uVar1 = *(uint *)(pppppplVar24 + 1);
      iVar11 = *(int *)((long)pppppplVar24 + 0xc);
      ppppplVar5 = pppppplVar24[1];
      iVar15 = *(int *)(pppppplVar24 + 2);
      uVar19 = (long)ppppplVar5 + ((ulong)*(uint *)((long)pppppplVar24 + 0x14) << 0x20);
      lVar13 = (uVar18 >> 0x20) - (uVar19 >> 0x20);
      iVar23 = (int)(uVar18 >> 0x20);
      uVar3 = iVar23 - iVar11;
      uVar16 = (uint)(uVar19 >> 0x20);
      uVar19 = uVar19 & 0xffffffff00000000;
      if (*(char *)((long)ppppppplVar8 + 0x184) == '\x01') {
        iVar11 = (int)lVar13;
        uVar16 = uVar3;
        ppppplVar5 = (long *****)((ulong)uVar1 | lVar13 << 0x20);
        uVar19 = (ulong)uVar3 << 0x20;
      }
      iVar2 = *(int *)(pppppplVar24 + 7);
      iVar20 = *(int *)pppppplVar24 + -1;
      if (((iVar20 == 0) ||
          (((iVar2 == 0 && (iVar15 == (int)uVar18)) && (uVar16 - iVar11 == iVar23)))) ||
         (((piVar21 != (int *)0x0 && (piVar21[4] == 1)) &&
          (((*(byte *)((long)piVar21 + 0x1d) & 1) != 0 ||
           ((piVar21[2] - *piVar21 == (int)uVar18 && (piVar21[3] - piVar21[1] == iVar23)))))))) {
        uVar17 = 1;
      }
      else {
        uVar17 = 0;
        iVar20 = piVar21[8];
      }
      uVar18 = ((long)ppppppplVar8[0x39] - (long)ppppppplVar8[0x38] >> 2) * -0x71c71c71c71c71c7;
      if (uVar18 < (ulong)(long)(int)uVar4 || uVar18 - (long)(int)uVar4 == 0) {
LAB_10ad83d4c:
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10ad83d50);
        (*pcVar7)();
      }
      iVar11 = *(int *)(pppppplVar24 + 3);
      iVar23 = *(int *)((long)pppppplVar24 + 0x1c);
      plVar22 = (long *)((long)ppppppplVar8[0x38] + (long)(int)uVar4 * 0x24);
      *plVar22 = (long)ppppplVar5;
      plVar22[1] = uVar19 | iVar15 + uVar1;
      *(int *)(plVar22 + 2) = iVar23;
      *(undefined4 *)((long)plVar22 + 0x14) = 0;
      *(int *)(plVar22 + 3) = iVar11;
      *(bool *)((long)plVar22 + 0x1c) = iVar2 != 0;
      *(undefined1 *)((long)plVar22 + 0x1d) = uVar17;
      *(int *)(plVar22 + 4) = iVar20;
      uVar18 = ((long)ppppppplVar8[0x39] - (long)ppppppplVar8[0x38] >> 2) * -0x71c71c71c71c71c7;
      if (uVar18 < (ulong)(long)(int)uVar10 || uVar18 - (long)(int)uVar10 == 0) goto LAB_10ad83d4c;
      *(int *)((long)ppppppplVar8 + 0x1dc) =
           *(int *)((long)ppppppplVar8 + 0x1dc) +
           *(int *)((long)ppppppplVar8[0x38] + (long)(int)uVar10 * 0x24 + 0x18);
      iVar15 = *(int *)(ppppppplVar8 + 0x3b);
    } while (iVar15 < (int)uVar10);
  }
  return;
}



/* Entry: 10ad83ad4; end: 10ad83d83;  */

void FUN_10ad83ad4(undefined8 *param_1,int param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  code *pcVar6;
  undefined8 *puVar7;
  int iVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  undefined1 uVar12;
  ulong uVar13;
  ulong uVar14;
  int iVar15;
  int *piVar16;
  ulong *puVar17;
  int iVar18;
  int *piVar19;
  undefined8 auStack_e8 [3];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  int aiStack_b0 [18];
  undefined8 uStack_68;
  
  iVar10 = *(int *)(param_1 + 0x3b);
  if (iVar10 < param_2) {
    do {
      iVar10 = iVar10 + 1;
      *(int *)(param_1 + 0x3b) = iVar10;
      if ((param_3 == (int *)0x0) || (piVar19 = param_3, iVar11 = param_2, iVar10 != param_2)) {
        uStack_68 = *param_1;
        aiStack_b0[2] = 0;
        aiStack_b0[3] = 0;
        aiStack_b0[0] = 0;
        aiStack_b0[1] = 0;
        aiStack_b0[6] = 0;
        aiStack_b0[7] = 0;
        aiStack_b0[4] = 0;
        aiStack_b0[5] = 0;
        aiStack_b0[10] = 0;
        aiStack_b0[0xb] = 0;
        aiStack_b0[8] = 0;
        aiStack_b0[9] = 0;
        aiStack_b0[0xe] = 0;
        aiStack_b0[0xf] = 0;
        aiStack_b0[0xc] = 0;
        aiStack_b0[0xd] = 0;
        aiStack_b0[0x10] = 0;
        aiStack_b0[0x11] = 0;
        piVar19 = aiStack_b0;
        iVar8 = param_2 + 1;
        func_0x000108221148(iVar8,aiStack_b0);
        iVar11 = iVar10;
        if (iVar8 == 0) {
          __ZNSt3__19to_stringEi(auStack_e8,*(undefined4 *)(param_1 + 0x2f));
          puVar7 = auStack_e8;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                    (puVar7,0,&UNK_10f6abb26,0x10);
          uStack_c8 = puVar7[1];
          uStack_d0 = *puVar7;
          uStack_c0 = puVar7[2];
          puVar7[1] = 0;
          puVar7[2] = 0;
          *puVar7 = 0;
          FUN_10ad83d84(param_1[0x3c],&uStack_d0);
          goto LAB_10ad83d4c;
        }
      }
      uVar13 = *(ulong *)((long)param_1 + 0x10c);
      if (iVar11 == 0) {
        piVar16 = (int *)0x0;
      }
      else {
        iVar11 = iVar11 + -1;
        uVar14 = ((long)(param_1[0x39] - param_1[0x38]) >> 2) * -0x71c71c71c71c71c7;
        if (uVar14 < (ulong)(long)iVar11 || uVar14 - (long)iVar11 == 0) goto LAB_10ad83d4c;
        piVar16 = (int *)(param_1[0x38] + (long)iVar11 * 0x24);
      }
      uVar2 = (uint)*(ulong *)(piVar19 + 2);
      iVar8 = piVar19[3];
      uVar5 = *(ulong *)(piVar19 + 2);
      iVar11 = piVar19[4];
      uVar14 = uVar5 + ((ulong)(uint)piVar19[5] << 0x20);
      lVar9 = (uVar13 >> 0x20) - (uVar14 >> 0x20);
      iVar18 = (int)(uVar13 >> 0x20);
      uVar4 = iVar18 - iVar8;
      uVar1 = (uint)(uVar14 >> 0x20);
      uVar14 = uVar14 & 0xffffffff00000000;
      if (*(char *)((long)param_1 + 0x184) == '\x01') {
        iVar8 = (int)lVar9;
        uVar1 = uVar4;
        uVar5 = (ulong)uVar2 | lVar9 << 0x20;
        uVar14 = (ulong)uVar4 << 0x20;
      }
      iVar3 = piVar19[0xe];
      iVar15 = *piVar19 + -1;
      if (((iVar15 == 0) || (((iVar3 == 0 && (iVar11 == (int)uVar13)) && (uVar1 - iVar8 == iVar18)))
          ) || (((piVar16 != (int *)0x0 && (piVar16[4] == 1)) &&
                (((*(byte *)((long)piVar16 + 0x1d) & 1) != 0 ||
                 ((piVar16[2] - *piVar16 == (int)uVar13 && (piVar16[3] - piVar16[1] == iVar18)))))))
         ) {
        uVar12 = 1;
      }
      else {
        uVar12 = 0;
        iVar15 = piVar16[8];
      }
      uVar13 = ((long)(param_1[0x39] - param_1[0x38]) >> 2) * -0x71c71c71c71c71c7;
      if (uVar13 < (ulong)(long)iVar10 || uVar13 - (long)iVar10 == 0) {
LAB_10ad83d4c:
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10ad83d50);
        (*pcVar6)();
      }
      iVar8 = piVar19[6];
      iVar18 = piVar19[7];
      puVar17 = (ulong *)(param_1[0x38] + (long)iVar10 * 0x24);
      *puVar17 = uVar5;
      puVar17[1] = uVar14 | iVar11 + uVar2;
      *(int *)(puVar17 + 2) = iVar18;
      *(undefined4 *)((long)puVar17 + 0x14) = 0;
      *(int *)(puVar17 + 3) = iVar8;
      *(bool *)((long)puVar17 + 0x1c) = iVar3 != 0;
      *(undefined1 *)((long)puVar17 + 0x1d) = uVar12;
      *(int *)(puVar17 + 4) = iVar15;
      uVar13 = ((long)(param_1[0x39] - param_1[0x38]) >> 2) * -0x71c71c71c71c71c7;
      if (uVar13 < (ulong)(long)param_2 || uVar13 - (long)param_2 == 0) goto LAB_10ad83d4c;
      *(int *)((long)param_1 + 0x1dc) =
           *(int *)((long)param_1 + 0x1dc) + *(int *)(param_1[0x38] + (long)param_2 * 0x24 + 0x18);
      iVar10 = *(int *)(param_1 + 0x3b);
    } while (iVar10 < param_2);
  }
  return;
}



/* Entry: 10ad83d84; end: 10ad83ec7;  */

/* WARNING: Removing unreachable block (ram,0x00010ad83de4) */

void FUN_10ad83d84(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  puVar4 = &uStack_80;
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (&uStack_40,&UNK_10f6abc1d,param_1 + 0x10);
  puVar3 = &uStack_40;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar3,";",1);
  uStack_78 = puVar3[1];
  uStack_80 = *puVar3;
  lStack_70 = puVar3[2];
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(&uStack_80," ",1);
  uStack_58 = puVar4[1];
  uStack_60 = *puVar4;
  lStack_50 = puVar4[2];
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  uVar1 = param_2[1];
  puVar4 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar4 = param_2;
  }
  puVar3 = &uStack_60;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar3,puVar4,uVar1);
  uStack_38 = puVar3[1];
  uStack_40 = *puVar3;
  uStack_30 = puVar3[2];
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  if (lStack_50 < 0) {
    __ZdlPv(uStack_60);
  }
  if (lStack_70 < 0) {
    __ZdlPv(uStack_80);
  }
  FUN_10a1084cc(&uStack_40);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10ad83e7c);
  (*pcVar2)();
}



/* Entry: 10ad83ec8; end: 10ad83f4b;  */

void FUN_10ad83ec8(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  
  iVar4 = *(int *)(param_2 + 0x178);
  if (iVar4 < *(int *)(param_2 + 0x108) + -1) {
    iVar4 = iVar4 + 1;
  }
  else if (*(char *)(param_2 + 0x114) == '\x01') {
    iVar4 = 0;
    *(int *)(param_2 + 0x180) = *(int *)(param_2 + 0x180) + 1;
  }
  FUN_10ad83f4c(param_2,iVar4);
  lVar5 = *(long *)(param_2 + 0x1a8);
  uVar6 = *(undefined8 *)(param_2 + 0x1a0);
  param_1[1] = *(undefined8 *)(param_2 + 0x1a8);
  *param_1 = uVar6;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* Entry: 10ad83f4c; end: 10ad84d8f;  */

void FUN_10ad83f4c(undefined8 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  code *pcVar6;
  undefined8 *puVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  ulong *puVar11;
  int *piVar12;
  int iVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  uint uVar18;
  int iVar19;
  long lVar20;
  long lVar21;
  int iVar22;
  int iVar23;
  ulong uVar24;
  long lVar25;
  long lVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  long lVar30;
  uint uVar31;
  ulong uVar32;
  long lVar33;
  int iVar34;
  ulong uVar35;
  ulong uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined1 auStack_178 [24];
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 *****pppppuStack_f0;
  ulong uStack_e8;
  byte bStack_d9;
  undefined8 auStack_d8 [3];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  iVar13 = *(int *)(param_1 + 0x2f);
  iVar8 = (int)param_2;
  if (iVar13 == iVar8) {
    return;
  }
  if (*(int *)(param_1 + 0x21) < iVar8) {
    __ZNSt3__19to_stringEi(auStack_d8,param_2);
    puVar7 = auStack_d8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
              (puVar7,0,&UNK_10f6abbae,0x1d);
    uStack_b8 = puVar7[1];
    uStack_c0 = *puVar7;
    uStack_b0 = puVar7[2];
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
    puVar7 = &uStack_c0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar7,&UNK_10f6abbcc,0x15);
    uStack_98 = puVar7[1];
    uStack_a0 = *puVar7;
    uStack_90 = puVar7[2];
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
    __ZNSt3__19to_stringEi(&pppppuStack_f0,*(undefined4 *)(param_1 + 0x21));
    if (-1 < (char)bStack_d9) {
      uStack_e8 = (ulong)bStack_d9;
      pppppuStack_f0 = &pppppuStack_f0;
    }
    puVar7 = &uStack_a0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar7,pppppuStack_f0,uStack_e8);
    uStack_138 = puVar7[1];
    uStack_140 = *puVar7;
    uStack_130 = puVar7[2];
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
    puVar7 = &uStack_140;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar7,&UNK_10f6abbe2,7);
    uStack_78 = puVar7[1];
    uStack_80 = *puVar7;
    uStack_70 = puVar7[2];
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
    FUN_10ad83d84(param_1[0x3c],&uStack_80);
  }
  else {
    uStack_f8 = *param_1;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_100 = 0;
    iVar19 = iVar8 + 1;
    func_0x000108221148(iVar19,&uStack_140);
    if (iVar19 == 0) {
      __ZNSt3__19to_stringEi(&uStack_a0,iVar13);
      puVar7 = &uStack_a0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                (puVar7,0,&UNK_10f6abb26,0x10);
      uStack_158 = puVar7[1];
      uStack_160 = *puVar7;
      uStack_150 = puVar7[2];
      puVar7[1] = 0;
      puVar7[2] = 0;
      *puVar7 = 0;
      FUN_10ad83d84(param_1[0x3c],&uStack_160);
    }
    else {
      FUN_10ad83ad4(param_1,param_2,&uStack_140);
      if (iVar8 < *(int *)(param_1 + 0x21)) {
        uVar14 = ((long)(param_1[0x39] - param_1[0x38]) >> 2) * -0x71c71c71c71c71c7;
        if ((ulong)(long)iVar8 <= uVar14 && uVar14 - (long)iVar8 != 0) {
          uVar16 = (ulong)iVar8;
          puVar11 = (ulong *)(param_1[0x38] + (long)iVar8 * 0x24);
          uVar35 = *puVar11;
          uVar36 = puVar11[1];
          uVar32 = uVar35 >> 0x20;
          lVar26 = param_1[0x36];
          lVar15 = *(long *)(lVar26 + 0x18);
          iVar19 = (int)uVar35;
          param_1[9] = *(long *)(lVar26 + 0x28) + lVar15 * ((long)uVar35 >> 0x20) +
                       (ulong)(uint)(*(int *)(lVar26 + 0x20) * iVar19 <<
                                    ((*(uint *)(lVar26 + 0x24) & 0xfffffffb) == 0xb));
          iVar13 = (int)lVar15;
          *(int *)(param_1 + 10) = iVar13;
          param_1[0xb] = (long)uStack_130._4_4_ * (long)iVar13;
          uVar14 = uVar36 >> 0x20;
          pcVar6 = (code *)PTR__memset_11034c668;
          if (*(char *)((long)param_1 + 0x104) == '\0') {
            pcVar6 = FUN_10ad85948;
          }
          uVar1 = *(undefined4 *)(param_1 + 0x20);
          uVar31 = (uint)(uVar35 >> 0x20);
          if (0 < (int)uVar31) {
            uVar24 = 0;
            do {
              (*pcVar6)(*(long *)(lVar26 + 0x28) + *(long *)(lVar26 + 0x18) * uVar24,uVar1);
              uVar24 = uVar24 + 1;
            } while (uVar32 != uVar24);
          }
          uVar9 = *(uint *)(param_1 + 0x22);
          uVar28 = (uint)(uVar36 >> 0x20);
          uVar24 = uVar14;
          if ((int)uVar28 < (int)uVar9) {
            do {
              (*pcVar6)(*(long *)(lVar26 + 0x28) + *(long *)(lVar26 + 0x18) * (long)(int)uVar24,
                        uVar1);
              uVar18 = (int)uVar24 + 1;
              uVar24 = (ulong)uVar18;
            } while (uVar9 != uVar18);
          }
          iVar13 = (int)uVar36;
          if ((int)uVar31 < (int)uVar28) {
            iVar23 = *(int *)((long)param_1 + 0x10c);
            uVar24 = uVar32;
            do {
              iVar22 = (int)uVar24;
              (*pcVar6)(*(long *)(lVar26 + 0x28) + *(long *)(lVar26 + 0x18) * (long)iVar22,uVar1,
                        (long)(iVar19 << 2));
              (*pcVar6)(*(long *)(lVar26 + 0x28) + *(long *)(lVar26 + 0x18) * (long)iVar22 +
                        (ulong)(uint)(*(int *)(lVar26 + 0x20) * iVar13 <<
                                     ((*(uint *)(lVar26 + 0x24) & 0xfffffffb) == 0xb)),uVar1,
                        (long)((iVar23 - iVar13) * 4));
              uVar24 = (ulong)(iVar22 + 1U);
            } while (uVar28 != iVar22 + 1U);
          }
          uVar37 = uStack_118;
          func_0x00010822dbe4(uStack_118,uStack_110,param_1 + 2);
          if ((int)uVar37 == 0) {
            FUN_10ad83ad4(param_1,param_2,0);
            lVar15 = param_1[0x38];
            uVar24 = (param_1[0x39] - lVar15 >> 2) * -0x71c71c71c71c71c7;
            if (uVar16 <= uVar24 && uVar24 - uVar16 != 0) {
              if ((*(byte *)(lVar15 + (long)iVar8 * 0x24 + 0x1d) & 1) == 0) {
                if (*(int *)((long)param_1 + 0x144) == 1) {
                  uVar17 = uVar16 - 1;
                  if (uVar24 < uVar17 || uVar24 - uVar17 == 0) goto LAB_10ad84c94;
                  puVar11 = (ulong *)(lVar15 + uVar17 * 0x24);
                  uVar24 = *puVar11;
                  uVar17 = puVar11[1];
                  lVar15 = param_1[0x36];
                  lVar26 = (long)*(int *)((long)param_1 + 0x10c) << 2;
                  uVar18 = (uint)(uVar24 >> 0x20);
                  uVar9 = uVar28;
                  iVar23 = (int)uVar24;
                  if ((int)uVar18 < (int)uVar31) {
                    uVar9 = (uint)(uVar17 >> 0x20);
                    uVar14 = uVar17 >> 0x20;
                    iVar23 = iVar19;
                  }
                  lVar30 = param_1[0x34];
                  uVar27 = uVar31;
                  uVar2 = uVar35;
                  uVar3 = uVar36;
                  uVar5 = uVar24;
                  iVar22 = iVar19;
                  if ((int)uVar18 < (int)uVar31) {
                    uVar27 = uVar18;
                    uVar2 = uVar24;
                    uVar3 = uVar17;
                    uVar18 = uVar31;
                    uVar5 = uVar35;
                    uVar17 = uVar36;
                    iVar22 = (int)uVar24;
                  }
                  uVar35 = (ulong)uVar27;
                  if ((int)uVar18 < (int)uVar9) {
                    uVar36 = uVar3;
                    uVar24 = uVar2;
                    uVar4 = uVar17 >> 0x20;
                    if ((int)uVar9 <= (int)(uVar17 >> 0x20)) {
                      uVar36 = uVar17;
                      uVar24 = uVar5;
                      uVar4 = uVar14;
                    }
                    if (0 < (int)uVar27) {
                      uVar14 = 0;
                      do {
                        _memcpy(*(long *)(lVar15 + 0x28) + *(long *)(lVar15 + 0x18) * uVar14,
                                *(long *)(lVar30 + 0x28) + *(long *)(lVar30 + 0x18) * uVar14,lVar26)
                        ;
                        uVar14 = uVar14 + 1;
                      } while (uVar35 != uVar14);
                    }
                    uVar14 = uVar24 & 0xffffffff | uVar4 << 0x20;
                    FUN_10ad84d90(lVar15,lVar30,uVar2 & 0xffffffff | uVar35 << 0x20,
                                  uVar3 & 0xffffffff | (ulong)uVar18 << 0x20);
                    uVar29 = (uint)uVar3;
                    uVar9 = (uint)uVar17;
                    iVar10 = iVar22;
                    uVar27 = uVar29;
                    if (iVar23 < iVar22) {
                      uVar17 = uVar3;
                      iVar10 = iVar23;
                      iVar23 = iVar22;
                      uVar27 = uVar9;
                    }
                    if (iVar23 - uVar27 == 0 || iVar23 < (int)uVar27) {
                      if ((int)uVar9 <= (int)uVar29) {
                        uVar9 = uVar29;
                      }
                      FUN_10ad84d90(lVar15,lVar30,CONCAT44(uVar18,iVar10),
                                    uVar4 << 0x20 | (ulong)uVar9);
                    }
                    else if ((int)uVar18 < (int)(uint)uVar4) {
                      iVar22 = *(int *)((long)param_1 + 0x10c);
                      iVar34 = (int)uVar17;
                      do {
                        lVar25 = (long)(int)uVar18;
                        _memcpy(*(long *)(lVar15 + 0x28) + *(long *)(lVar15 + 0x18) * lVar25,
                                *(long *)(lVar30 + 0x28) + *(long *)(lVar30 + 0x18) * lVar25,
                                (long)(iVar10 << 2));
                        _memcpy(*(long *)(lVar15 + 0x28) + *(long *)(lVar15 + 0x18) * lVar25 +
                                (ulong)(*(int *)(lVar15 + 0x20) * uVar27 <<
                                       ((*(uint *)(lVar15 + 0x24) & 0xfffffffb) == 0xb)),
                                *(long *)(lVar30 + 0x28) + *(long *)(lVar30 + 0x18) * lVar25 +
                                (ulong)(*(int *)(lVar30 + 0x20) * uVar27 <<
                                       ((*(uint *)(lVar30 + 0x24) & 0xfffffffb) == 0xb)),
                                (long)(int)((iVar23 - uVar27) * 4));
                        _memcpy(*(long *)(lVar15 + 0x28) + *(long *)(lVar15 + 0x18) * lVar25 +
                                (ulong)(uint)(*(int *)(lVar15 + 0x20) * iVar34 <<
                                             ((*(uint *)(lVar15 + 0x24) & 0xfffffffb) == 0xb)),
                                *(long *)(lVar30 + 0x28) + *(long *)(lVar30 + 0x18) * lVar25 +
                                (ulong)(uint)(*(int *)(lVar30 + 0x20) * iVar34 <<
                                             ((*(uint *)(lVar30 + 0x24) & 0xfffffffb) == 0xb)),
                                (long)((iVar22 - iVar34) * 4));
                        uVar18 = uVar18 + 1;
                      } while ((uint)uVar4 != uVar18);
                    }
                  }
                  else {
                    if (0 < (int)uVar27) {
                      uVar14 = 0;
                      do {
                        _memcpy(*(long *)(lVar15 + 0x28) + *(long *)(lVar15 + 0x18) * uVar14,
                                *(long *)(lVar30 + 0x28) + *(long *)(lVar30 + 0x18) * uVar14,lVar26)
                        ;
                        uVar14 = uVar14 + 1;
                      } while (uVar35 != uVar14);
                    }
                    FUN_10ad84d90(lVar15,lVar30,uVar2 & 0xffffffff | uVar35 << 0x20,uVar3);
                    if ((int)uVar9 < (int)uVar18) {
                      do {
                        _memcpy(*(long *)(lVar15 + 0x28) +
                                *(long *)(lVar15 + 0x18) * (long)(int)uVar9,
                                *(long *)(lVar30 + 0x28) +
                                *(long *)(lVar30 + 0x18) * (long)(int)uVar9,lVar26);
                        uVar9 = uVar9 + 1;
                      } while (uVar18 != uVar9);
                    }
                    uVar14 = uVar5 & 0xffffffff | (ulong)uVar18 << 0x20;
                    uVar36 = uVar17;
                  }
                  FUN_10ad84d90(lVar15,lVar30,uVar14,uVar36);
                  uVar14 = uVar36 >> 0x20;
                  uVar9 = *(uint *)(param_1 + 0x22);
                  if ((int)(uVar36 >> 0x20) < (int)uVar9) {
                    do {
                      iVar23 = (int)uVar14;
                      _memcpy(*(long *)(lVar15 + 0x28) + *(long *)(lVar15 + 0x18) * (long)iVar23,
                              *(long *)(lVar30 + 0x28) + *(long *)(lVar30 + 0x18) * (long)iVar23,
                              lVar26);
                      uVar14 = (ulong)(iVar23 + 1U);
                    } while (uVar9 != iVar23 + 1U);
                  }
                }
                else {
                  lVar15 = param_1[0x36];
                  lVar26 = param_1[0x34];
                  lVar30 = (long)*(int *)((long)param_1 + 0x10c) << 2;
                  if (0 < (int)uVar31) {
                    uVar9 = 0;
                    do {
                      _memcpy(*(long *)(lVar15 + 0x28) + *(long *)(lVar15 + 0x18) * (long)(int)uVar9
                              ,*(long *)(lVar26 + 0x28) +
                               *(long *)(lVar26 + 0x18) * (long)(int)uVar9,lVar30);
                      uVar9 = uVar9 + 1;
                    } while (uVar31 != uVar9);
                  }
                  FUN_10ad84d90(lVar15,lVar26,uVar35,uVar36);
                  uVar9 = *(uint *)(param_1 + 0x22);
                  if ((int)uVar28 < (int)uVar9) {
                    do {
                      iVar23 = (int)uVar14;
                      _memcpy(*(long *)(lVar15 + 0x28) + *(long *)(lVar15 + 0x18) * (long)iVar23,
                              *(long *)(lVar26 + 0x28) + *(long *)(lVar26 + 0x18) * (long)iVar23,
                              lVar30);
                      uVar14 = (ulong)(iVar23 + 1U);
                    } while (uVar9 != iVar23 + 1U);
                  }
                }
                if (uStack_108._4_4_ == 0) {
                  if (*(int *)((long)param_1 + 0x144) == 0) {
                    if ((int)uVar31 < (int)uVar28) {
                      lVar15 = param_1[0x34];
                      lVar26 = param_1[0x36];
                      do {
                        iVar23 = (int)uVar32;
                        if (0 < iVar13 - iVar19) {
                          lVar25 = *(long *)(lVar15 + 0x28) +
                                   *(long *)(lVar15 + 0x18) * (long)iVar23 +
                                   (ulong)(uint)(*(int *)(lVar15 + 0x20) * iVar19 <<
                                                ((*(uint *)(lVar15 + 0x24) & 0xfffffffb) == 0xb));
                          lVar30 = *(long *)(lVar26 + 0x28) +
                                   *(long *)(lVar26 + 0x18) * (long)iVar23 +
                                   (ulong)(uint)(*(int *)(lVar26 + 0x20) * iVar19 <<
                                                ((*(uint *)(lVar26 + 0x24) & 0xfffffffb) == 0xb));
                          iVar22 = iVar13 - iVar19;
                          do {
                            FUN_10ad84e7c(lVar30,lVar25);
                            lVar30 = lVar30 + 4;
                            lVar25 = lVar25 + 4;
                            iVar22 = iVar22 + -1;
                          } while (iVar22 != 0);
                        }
                        uVar32 = (ulong)(iVar23 + 1U);
                      } while (iVar23 + 1U != uVar28);
                    }
                  }
                  else {
                    uVar16 = uVar16 - 1;
                    uVar14 = ((long)(param_1[0x39] - param_1[0x38]) >> 2) * -0x71c71c71c71c71c7;
                    if (uVar14 < uVar16 || uVar14 - uVar16 == 0) goto LAB_10ad84c94;
                    piVar12 = (int *)(param_1[0x38] + uVar16 * 0x24);
                    iVar23 = *piVar12;
                    if (*piVar12 <= iVar19) {
                      iVar23 = iVar19;
                    }
                    uVar9 = piVar12[1];
                    if (piVar12[1] <= (int)uVar31) {
                      uVar9 = uVar31;
                    }
                    iVar22 = iVar13;
                    if (piVar12[2] <= iVar13) {
                      iVar22 = piVar12[2];
                    }
                    uVar18 = uVar28;
                    if (piVar12[3] <= (int)uVar28) {
                      uVar18 = piVar12[3];
                    }
                    if ((int)uVar28 <= (int)uVar9) {
                      uVar9 = uVar28;
                    }
                    uVar27 = uVar9;
                    if ((int)uVar9 <= (int)uVar31) {
                      uVar27 = uVar31;
                    }
                    uVar29 = uVar18;
                    if ((int)uVar18 <= (int)uVar27) {
                      uVar29 = uVar27;
                    }
                    lVar26 = param_1[0x34];
                    lVar15 = param_1[0x36];
                    if ((int)uVar31 < (int)uVar9) {
                      do {
                        iVar10 = (int)uVar32;
                        if (0 < iVar13 - iVar19) {
                          lVar25 = *(long *)(lVar26 + 0x28) +
                                   *(long *)(lVar26 + 0x18) * (long)iVar10 +
                                   (ulong)(uint)(*(int *)(lVar26 + 0x20) * iVar19 <<
                                                ((*(uint *)(lVar26 + 0x24) & 0xfffffffb) == 0xb));
                          lVar30 = *(long *)(lVar15 + 0x28) +
                                   *(long *)(lVar15 + 0x18) * (long)iVar10 +
                                   (ulong)(uint)(*(int *)(lVar15 + 0x20) * iVar19 <<
                                                ((*(uint *)(lVar15 + 0x24) & 0xfffffffb) == 0xb));
                          iVar34 = iVar13 - iVar19;
                          do {
                            FUN_10ad84e7c(lVar30,lVar25);
                            lVar30 = lVar30 + 4;
                            lVar25 = lVar25 + 4;
                            iVar34 = iVar34 + -1;
                          } while (iVar34 != 0);
                        }
                        uVar32 = (ulong)(iVar10 + 1U);
                      } while (iVar10 + 1U != uVar27);
                    }
                    if (iVar13 <= iVar23) {
                      iVar23 = iVar13;
                    }
                    if (iVar22 <= iVar19) {
                      iVar22 = iVar19;
                    }
                    if ((int)uVar27 < (int)uVar18) {
                      do {
                        lVar30 = *(long *)(lVar15 + 0x28);
                        lVar33 = (long)(int)uVar27;
                        lVar25 = *(long *)(lVar15 + 0x18) * lVar33;
                        iVar10 = *(int *)(lVar15 + 0x20);
                        uVar31 = *(uint *)(lVar15 + 0x24) & 0xfffffffb;
                        lVar20 = *(long *)(lVar26 + 0x28);
                        lVar21 = *(long *)(lVar26 + 0x18) * lVar33;
                        iVar34 = *(int *)(lVar26 + 0x20);
                        uVar9 = *(uint *)(lVar26 + 0x24) & 0xfffffffb;
                        if (0 < iVar23 - iVar19) {
                          lVar20 = lVar20 + lVar21 +
                                   (ulong)(uint)(iVar34 * iVar19 << (uVar9 == 0xb));
                          lVar30 = lVar30 + lVar25 +
                                   (ulong)(uint)(iVar10 * iVar19 << (uVar31 == 0xb));
                          iVar10 = iVar23 - iVar19;
                          do {
                            FUN_10ad84e7c(lVar30,lVar20);
                            lVar30 = lVar30 + 4;
                            lVar20 = lVar20 + 4;
                            iVar10 = iVar10 + -1;
                          } while (iVar10 != 0);
                          lVar30 = *(long *)(lVar15 + 0x28);
                          iVar10 = *(int *)(lVar15 + 0x20);
                          lVar20 = *(long *)(lVar26 + 0x28);
                          iVar34 = *(int *)(lVar26 + 0x20);
                          lVar25 = *(long *)(lVar15 + 0x18) * lVar33;
                          uVar31 = *(uint *)(lVar15 + 0x24) & 0xfffffffb;
                          lVar21 = *(long *)(lVar26 + 0x18) * lVar33;
                          uVar9 = *(uint *)(lVar26 + 0x24) & 0xfffffffb;
                        }
                        if (0 < iVar13 - iVar22) {
                          lVar20 = lVar20 + lVar21 +
                                   (ulong)(uint)(iVar34 * iVar13 << (uVar9 == 0xb));
                          lVar30 = lVar30 + lVar25 +
                                   (ulong)(uint)(iVar10 * iVar22 << (uVar31 == 0xb));
                          iVar10 = iVar13 - iVar22;
                          do {
                            FUN_10ad84e7c(lVar30,lVar20);
                            lVar30 = lVar30 + 4;
                            lVar20 = lVar20 + 4;
                            iVar10 = iVar10 + -1;
                          } while (iVar10 != 0);
                        }
                        uVar27 = uVar27 + 1;
                      } while (uVar27 != uVar29);
                    }
                    if ((int)uVar29 < (int)uVar28) {
                      do {
                        if (0 < iVar13 - iVar19) {
                          lVar25 = *(long *)(lVar26 + 0x28) +
                                   *(long *)(lVar26 + 0x18) * (long)(int)uVar29 +
                                   (ulong)(uint)(*(int *)(lVar26 + 0x20) * iVar19 <<
                                                ((*(uint *)(lVar26 + 0x24) & 0xfffffffb) == 0xb));
                          lVar30 = *(long *)(lVar15 + 0x28) +
                                   *(long *)(lVar15 + 0x18) * (long)(int)uVar29 +
                                   (ulong)(uint)(*(int *)(lVar15 + 0x20) * iVar19 <<
                                                ((*(uint *)(lVar15 + 0x24) & 0xfffffffb) == 0xb));
                          iVar23 = iVar13 - iVar19;
                          do {
                            FUN_10ad84e7c(lVar30,lVar25);
                            lVar30 = lVar30 + 4;
                            lVar25 = lVar25 + 4;
                            iVar23 = iVar23 + -1;
                          } while (iVar23 != 0);
                        }
                        uVar29 = uVar29 + 1;
                      } while (uVar29 != uVar28);
                    }
                  }
                }
              }
              param_1[0x2a] = uStack_118;
              param_1[0x29] = uStack_120;
              param_1[0x2c] = uStack_108;
              param_1[0x2b] = uStack_110;
              param_1[0x2e] = uStack_f8;
              param_1[0x2d] = uStack_100;
              param_1[0x26] = uStack_138;
              param_1[0x25] = uStack_140;
              param_1[0x28] = uStack_128;
              param_1[0x27] = uStack_130;
              *(int *)(param_1 + 0x2f) = iVar8;
              uVar38 = param_1[0x35];
              uVar37 = param_1[0x34];
              param_1[0x35] = param_1[0x37];
              param_1[0x34] = param_1[0x36];
              param_1[0x37] = uVar38;
              param_1[0x36] = uVar37;
              return;
            }
          }
          else {
            __ZNSt3__19to_stringEi(auStack_d8,param_2);
            puVar7 = auStack_d8;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                      (puVar7,0,&UNK_10f6abbea,0x23);
            uStack_b8 = puVar7[1];
            uStack_c0 = *puVar7;
            uStack_b0 = puVar7[2];
            puVar7[1] = 0;
            puVar7[2] = 0;
            *puVar7 = 0;
            puVar7 = &uStack_c0;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                      (puVar7,&UNK_10f6abc0e,0xe);
            uStack_98 = puVar7[1];
            uStack_a0 = *puVar7;
            uStack_90 = puVar7[2];
            puVar7[1] = 0;
            puVar7[2] = 0;
            *puVar7 = 0;
            __ZNSt3__19to_stringEj(&pppppuStack_f0,uVar37);
            if (-1 < (char)bStack_d9) {
              uStack_e8 = (ulong)bStack_d9;
              pppppuStack_f0 = &pppppuStack_f0;
            }
            puVar7 = &uStack_a0;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                      (puVar7,pppppuStack_f0,uStack_e8);
            uStack_188 = puVar7[1];
            uStack_190 = *puVar7;
            uStack_180 = puVar7[2];
            puVar7[1] = 0;
            puVar7[2] = 0;
            *puVar7 = 0;
            FUN_10ad83d84(param_1[0x3c],&uStack_190);
          }
        }
      }
      else {
        func_0x000107c2b054(auStack_178,&UNK_10f6abb6f);
        FUN_10ad83d84(param_1[0x3c],auStack_178);
      }
    }
  }
LAB_10ad84c94:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10ad84c98);
  (*pcVar6)();
}



/* Entry: 10ad84d90; end: 10ad84e7b;  */

void FUN_10ad84d90(long param_1,long param_2,ulong param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  
  uVar4 = param_3 >> 0x20;
  uVar5 = (uint)((ulong)param_4 >> 0x20);
  if ((int)(param_3 >> 0x20) < (int)uVar5) {
    iVar2 = *(int *)(param_1 + 0x10);
    iVar3 = (int)param_4;
    do {
      lVar6 = (long)(int)uVar4;
      _memcpy(*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x18) * lVar6,
              *(long *)(param_2 + 0x28) + *(long *)(param_2 + 0x18) * lVar6,
              (long)((int)param_3 << 2));
      _memcpy(*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x18) * lVar6 +
              (ulong)(uint)(*(int *)(param_1 + 0x20) * iVar3 <<
                           ((*(uint *)(param_1 + 0x24) & 0xfffffffb) == 0xb)),
              *(long *)(param_2 + 0x28) + *(long *)(param_2 + 0x18) * lVar6 +
              (ulong)(uint)(*(int *)(param_2 + 0x20) * iVar3 <<
                           ((*(uint *)(param_2 + 0x24) & 0xfffffffb) == 0xb)),
              (long)((iVar2 - iVar3) * 4));
      uVar1 = (int)uVar4 + 1;
      uVar4 = (ulong)uVar1;
    } while (uVar5 != uVar1);
  }
  return;
}



/* Entry: 10ad84e7c; end: 10ad84ef3;  */

void FUN_10ad84e7c(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  
  bVar3 = *(byte *)((long)param_1 + 3);
  if (bVar3 != 0xff) {
    if (bVar3 == 0) {
      *param_1 = *param_2;
      return;
    }
    lVar6 = 0;
    uVar7 = (uint)bVar3;
    uVar4 = (0x100 - uVar7) * (uint)*(byte *)((long)param_2 + 3);
    uVar1 = uVar7 + (uVar4 >> 8);
    uVar2 = uVar1 & 0xff;
    uVar5 = 0;
    if (uVar2 != 0) {
      uVar5 = 0x1000000 / uVar2;
    }
    do {
      *(char *)((long)param_1 + lVar6) =
           (char)(uVar5 * uVar7 * (uint)*(byte *)((long)param_1 + lVar6) +
                  (uVar4 >> 8) * uVar5 * (uint)*(byte *)((long)param_2 + lVar6) >> 0x18);
      lVar6 = lVar6 + 1;
    } while (lVar6 != 3);
    *(char *)((long)param_1 + 3) = (char)uVar1;
  }
  return;
}



/* Entry: 10ad84ef4; end: 10ad84ff7;  */

undefined8 * FUN_10ad84ef4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = &PTR_DAT_110c72468;
  param_1[1] = &PTR_FUN_110c724f8;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1 + 2,*param_2,param_2[1]);
  }
  else {
    uVar3 = param_2[1];
    uVar2 = *param_2;
    param_1[4] = param_2[2];
    param_1[3] = uVar3;
    param_1[2] = uVar2;
  }
  *param_1 = &PTR_FUN_110c72760;
  param_1[1] = &PTR_DAT_110c727f0;
  param_1[5] = 0;
  puVar1 = (undefined8 *)0x1e8;
  __Znwm();
  *puVar1 = 0;
  puVar1[1] = FUN_10ad859e8;
  *(undefined4 *)(puVar1 + 0x20) = 0;
  *(undefined1 *)((long)puVar1 + 0x104) = 0;
  puVar1[0x23] = 0;
  puVar1[0x21] = 0;
  *(undefined8 *)((long)puVar1 + 0x10e) = 0;
  *(undefined4 *)(puVar1 + 0x24) = 0x3f800000;
  puVar1[0x2f] = 0xffffffff;
  *(undefined4 *)(puVar1 + 0x30) = 0;
  *(undefined1 *)((long)puVar1 + 0x184) = 1;
  puVar1[0x32] = 0;
  puVar1[0x31] = 0;
  puVar1[0x34] = 0;
  puVar1[0x33] = 0;
  puVar1[0x36] = 0;
  puVar1[0x35] = 0;
  puVar1[0x38] = 0;
  puVar1[0x37] = 0;
  puVar1[0x3a] = 0;
  puVar1[0x39] = 0;
  puVar1[0x3b] = 0xffffffff;
  puVar1[0x3c] = param_1;
  param_1[5] = puVar1;
  return param_1;
}



/* Entry: 10ad84ff8; end: 10ad850a3;  */

undefined8 * FUN_10ad84ff8(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_110c72760;
  param_1[1] = &PTR_DAT_110c727f0;
  plVar2 = (long *)param_1[5];
  param_1[5] = 0;
  if (plVar2 != (long *)0x0) {
    if (plVar2[0x38] != 0) {
      plVar2[0x39] = plVar2[0x38];
      __ZdlPv();
    }
    FUN_10a0d92c8(plVar2 + 0x36);
    FUN_10a0d92c8(plVar2 + 0x34);
    if (plVar2[0x31] != 0) {
      plVar2[0x32] = plVar2[0x31];
      __ZdlPv();
    }
    lVar1 = *plVar2;
    *plVar2 = 0;
    if (lVar1 != 0) {
      (*(code *)plVar2[1])();
    }
    __ZdlPv(plVar2);
  }
  *param_1 = &PTR_DAT_110c72468;
  param_1[1] = &PTR_FUN_110c724f8;
  if (*(char *)((long)param_1 + 0x27) < '\0') {
    __ZdlPv(param_1[2]);
  }
  return param_1;
}



/* Entry: 10ad850a4; end: 10ad850af;  */

undefined8 * FUN_10ad850a4(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_110c72760;
  param_1[1] = &PTR_DAT_110c727f0;
  plVar2 = (long *)param_1[5];
  param_1[5] = 0;
  if (plVar2 != (long *)0x0) {
    if (plVar2[0x38] != 0) {
      plVar2[0x39] = plVar2[0x38];
      __ZdlPv();
    }
    FUN_10a0d92c8(plVar2 + 0x36);
    FUN_10a0d92c8(plVar2 + 0x34);
    if (plVar2[0x31] != 0) {
      plVar2[0x32] = plVar2[0x31];
      __ZdlPv();
    }
    lVar1 = *plVar2;
    *plVar2 = 0;
    if (lVar1 != 0) {
      (*(code *)plVar2[1])();
    }
    __ZdlPv(plVar2);
  }
  *param_1 = &PTR_DAT_110c72468;
  param_1[1] = &PTR_FUN_110c724f8;
  if (*(char *)((long)param_1 + 0x27) < '\0') {
    __ZdlPv(param_1[2]);
  }
  return param_1;
}



/* Entry: 10ad850b0; end: 10ad850db;  */

void FUN_10ad850b0(void)

{
  FUN_10ad84ff8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ad850dc; end: 10ad8554f;  */

void FUN_10ad850dc(undefined4 param_1,undefined8 param_2,float param_3,long param_4,
                  undefined1 param_5)

{
  int iVar1;
  char cVar2;
  ulong uVar3;
  code *pcVar4;
  bool bVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar9;
  ulong uVar10;
  byte bVar11;
  long lVar12;
  ulong uVar13;
  char *pcVar14;
  long *plVar15;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long *plStack_70;
  undefined7 uStack_68;
  char cStack_61;
  
  if ((param_3 != 0.0) && ((bRam000000011330a9e8 >> 1 & 1) != 0)) {
    func_0x00010ae06f08(1,2,&UNK_10f6abc3c,&UNK_10f6abc6f,0x275,&UNK_10f6abcb4,in_x6,in_x7,
                        (double)param_3);
  }
  plVar15 = *(long **)(param_4 + 0x28);
  *(undefined1 *)((long)plVar15 + 0x114) = param_5;
  *(undefined4 *)(plVar15 + 0x24) = param_1;
  FUN_10ad00a7c(&lStack_78,plVar15[0x3c] + 0x10);
  if (plVar15[0x31] != 0) {
    plVar15[0x32] = plVar15[0x31];
    __ZdlPv();
    plVar15[0x31] = 0;
    plVar15[0x32] = 0;
    plVar15[0x33] = 0;
  }
  plVar15[0x31] = lStack_78;
  plVar15[0x33] = CONCAT17(cStack_61,uStack_68);
  plVar15[0x32] = (long)plStack_70;
  lStack_80 = (long)plStack_70 - lStack_78;
  lStack_88 = lStack_78;
  plVar6 = &lStack_88;
  func_0x000108220df4(plVar6,0,0,0x107);
  lVar9 = *plVar15;
  *plVar15 = (long)plVar6;
  if (lVar9 != 0) {
    (*(code *)plVar15[1])(lVar9);
    plVar6 = (long *)*plVar15;
  }
  plVar15[1] = (long)FUN_10ad85930;
  if (plVar6 == (long *)0x0) {
    *(undefined4 *)(plVar15 + 0x21) = 0;
  }
  else {
    iVar1 = *(int *)((long)plVar6 + 0x44);
    *(int *)(plVar15 + 0x21) = iVar1;
    if (iVar1 != 0) {
      iVar1 = *(int *)((long)plVar6 + 0x34);
      *(int *)((long)plVar15 + 0x10c) = iVar1;
      lVar12 = plVar6[7];
      *(int *)(plVar15 + 0x22) = (int)lVar12;
      *(undefined4 *)(plVar15 + 0x20) = 0;
      bVar11 = 1;
      *(undefined1 *)((long)plVar15 + 0x104) = 1;
      lVar9 = 3;
      pcVar14 = (char *)((long)plVar15 + 0x101);
      do {
        bVar11 = bVar11 & pcVar14[-1] == *pcVar14;
        *(byte *)((long)plVar15 + 0x104) = bVar11;
        lVar9 = lVar9 + -1;
        pcVar14 = pcVar14 + 1;
      } while (lVar9 != 0);
      if ((0 < iVar1) && (0 < (int)lVar12)) {
        FUN_10ad85968(&lStack_78,*(undefined8 *)((long)plVar15 + 0x10c),1,0);
        FUN_10a16b1ec(plVar15 + 0x34,&lStack_78);
        plVar6 = plStack_70;
        if (plStack_70 != (long *)0x0) {
          plVar8 = plStack_70 + 1;
          do {
            lVar9 = *plVar8;
            cVar2 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar5) {
              *plVar8 = lVar9 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar9 == 0) {
            (**(code **)(*plStack_70 + 0x10))(plStack_70);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
          }
        }
        FUN_10ad85968(&lStack_78,*(undefined8 *)((long)plVar15 + 0x10c),1,0);
        plVar6 = plVar15 + 0x36;
        FUN_10a16b1ec(plVar6,&lStack_78);
        if (plStack_70 != (long *)0x0) {
          plVar8 = plStack_70 + 1;
          do {
            lVar9 = *plVar8;
            cVar2 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar5) {
              *plVar8 = lVar9 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar9 == 0) {
            (**(code **)(*plStack_70 + 0x10))(plStack_70);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            plVar6 = plStack_70;
          }
        }
        plVar15[7] = 0;
        plVar15[6] = 0;
        plVar15[9] = 0;
        plVar15[8] = 0;
        plVar15[0xb] = 0;
        plVar15[10] = 0;
        plVar15[0xd] = 0;
        plVar15[0xc] = 0;
        plVar15[0xf] = 0;
        plVar15[0xe] = 0;
        plVar15[0x11] = 0;
        plVar15[0x10] = 0;
        plVar15[0x13] = 0;
        plVar15[0x12] = 0;
        plVar15[0x15] = 0;
        plVar15[0x14] = 0;
        plVar15[0x1d] = 0;
        plVar15[0x1c] = 0;
        plVar15[0x1f] = 0;
        plVar15[0x1e] = 0;
        plVar15[0x19] = 0;
        plVar15[0x18] = 0;
        plVar15[0x1b] = 0;
        plVar15[0x1a] = 0;
        plVar15[0x17] = 0;
        plVar15[0x16] = 0;
        plVar15[3] = 0;
        plVar15[2] = 0;
        plVar15[5] = 0;
        plVar15[4] = 0;
        plVar15[6] = 0;
        plVar15[8] = 0;
        plVar15[7] = 0;
        plVar15[10] = 0;
        plVar15[9] = 0;
        plVar15[0xc] = 0;
        plVar15[0xb] = 0;
        plVar15[0xe] = 0;
        plVar15[0xd] = 0;
        plVar15[0x10] = 0;
        plVar15[0xf] = 0;
        plVar15[0x12] = 0;
        plVar15[0x11] = 0;
        plVar15[0x14] = 0;
        plVar15[0x13] = 0;
        plVar15[0x15] = 0;
        *(undefined4 *)(plVar15 + 7) = 1;
        *(undefined4 *)((long)plVar15 + 0x44) = 1;
        plVar8 = (long *)plVar15[0x38];
        plVar7 = (long *)plVar15[0x39];
        lVar9 = (long)plVar7 - (long)plVar8;
        *(uint *)(plVar15 + 0x1c) = (uint)*(byte *)((long)plVar15 + 0x184);
        iVar1 = (int)plVar15[0x21];
        uVar10 = (ulong)iVar1;
        bVar5 = (ulong)((lVar9 >> 2) * -0x71c71c71c71c71c7) <= uVar10;
        uVar3 = uVar10 + (lVar9 >> 2) * 0x71c71c71c71c71c7;
        if (bVar5 && uVar3 != 0) {
          if ((ulong)((plVar15[0x3a] - (long)plVar7 >> 2) * -0x71c71c71c71c71c7) < uVar3) {
            if (iVar1 < 0) {
              FUN_10ad85934();
            }
            else {
              lVar12 = plVar15[0x3a] - (long)plVar8 >> 2;
              uVar13 = lVar12 * 0x1c71c71c71c71c72;
              if (uVar13 < uVar10 || uVar13 - uVar10 == 0) {
                uVar13 = uVar10;
              }
              if (0x38e38e38e38e38d < (ulong)(lVar12 * -0x71c71c71c71c71c7)) {
                uVar13 = 0x71c71c71c71c71c;
              }
              if (uVar13 < 0x71c71c71c71c71d) {
                plVar7 = (long *)(uVar13 * 0x24);
                __Znwm();
                lVar12 = ((uVar3 * 0x24 - 0x24) / 0x24) * 0x24 + 0x24;
                _bzero((long)plVar7 + lVar9,lVar12);
                plVar6 = plVar7;
                _memcpy(plVar7,plVar8,lVar9);
                plVar15[0x38] = (long)plVar7;
                plVar15[0x39] = (long)plVar7 + lVar9 + lVar12;
                plVar15[0x3a] = (long)plVar7 + uVar13 * 0x24;
                if (plVar8 != (long *)0x0) {
                  __ZdlPv();
                  plVar6 = plVar8;
                }
                goto LAB_10ad854a8;
              }
            }
            func_0x000109ffded8();
            func_0x000104bd46a0();
            if (cStack_61 < '\0') {
              __ZdlPv(lStack_78);
            }
            __Unwind_Resume();
            *(undefined1 *)(plVar6[5] + 0x115) = 0;
            return;
          }
          lVar9 = ((uVar3 * 0x24 - 0x24) / 0x24) * 0x24 + 0x24;
          plVar6 = plVar7;
          _bzero(plVar7,lVar9);
          lVar9 = (long)plVar7 + lVar9;
        }
        else {
          if (bVar5) goto LAB_10ad854a8;
          lVar9 = (long)plVar8 + (long)iVar1 * 0x24;
        }
        plVar15[0x39] = lVar9;
LAB_10ad854a8:
        __ZNSt3__16chrono12steady_clock3nowEv();
        plVar15[0x23] = (long)plVar6;
        *(undefined1 *)((long)plVar15 + 0x115) = 1;
        *(undefined4 *)(plVar15 + 0x30) = 0;
        return;
      }
      func_0x000107c2b054(&lStack_78,&UNK_10f6abb50);
      FUN_10ad83d84(plVar15[0x3c],&lStack_78);
      goto LAB_10ad8551c;
    }
  }
  func_0x000107c2b054(&lStack_78,&UNK_10f6abb37);
  FUN_10ad83d84(plVar15[0x3c],&lStack_78);
LAB_10ad8551c:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10ad85520);
  (*pcVar4)();
}



/* Entry: 10ad85550; end: 10ad85567;  */

void FUN_10ad85550(long param_1)

{
  *(undefined1 *)(*(long *)(param_1 + 0x28) + 0x115) = 0;
  return;
}



/* Entry: 10ad85568; end: 10ad8559b;  */

void FUN_10ad85568(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if ((*(byte *)(lVar1 + 0x115) & 1) == 0) {
    __ZNSt3__16chrono12steady_clock3nowEv();
    *(long *)(lVar1 + 0x118) = param_1;
    *(undefined1 *)(lVar1 + 0x115) = 1;
  }
  return;
}



/* Entry: 10ad8559c; end: 10ad855c3;  */

void FUN_10ad8559c(void)

{
  return;
}



/* Entry: 10ad855c4; end: 10ad8592f;  */

void FUN_10ad855c4(undefined8 param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  code *pcVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  int iVar14;
  ulong uVar15;
  bool bVar16;
  undefined8 uStack_90;
  long *plStack_88;
  long *plStack_78;
  long *plStack_70;
  
  lVar13 = *(long *)(param_2 + 0x28);
  if (*(int *)(lVar13 + 0x178) < *(int *)(lVar13 + 0x108)) {
    if (*(int *)(lVar13 + 0x17c) != 0) {
LAB_10ad85604:
      FUN_10ad83ec8(&uStack_90,lVar13);
LAB_10ad85610:
      FUN_10a30f97c();
      uVar6 = uStack_90;
      FUN_10a30fb38(&plStack_78);
      (**(code **)(*plStack_78 + 0x40))(plStack_78,uVar6);
      lVar13 = 0;
      FUN_10a2421c8();
      plVar8 = *(long **)(lVar13 + 0x228);
      (**(code **)(*plVar8 + 0x18))(plVar8,&plStack_78);
      FUN_10a0a25e4(param_1,plVar8);
      if (plStack_70 != (long *)0x0) {
        plVar8 = plStack_70 + 1;
        do {
          lVar13 = *plVar8;
          cVar4 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar16) {
            *plVar8 = lVar13 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*plStack_70 + 0x10))(plStack_70);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_70);
        }
      }
      plVar8 = plStack_88;
      if (plStack_88 != (long *)0x0) {
        plVar1 = plStack_88 + 1;
        do {
          lVar13 = *plVar1;
          cVar4 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar16) {
            *plVar1 = lVar13 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*plStack_88 + 0x10))(plStack_88);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      return;
    }
    __ZNSt3__16chrono12steady_clock3nowEv();
    uVar15 = (ulong)(*(uint *)(lVar13 + 0x178) &
                    ((int)*(uint *)(lVar13 + 0x178) >> 0x1f ^ 0xffffffffU));
    FUN_10ad83ad4(lVar13,uVar15,0);
    lVar11 = *(long *)(lVar13 + 0x1c0);
    uVar9 = (*(long *)(lVar13 + 0x1c8) - lVar11 >> 2) * -0x71c71c71c71c71c7;
    if (uVar15 <= uVar9 && uVar9 - uVar15 != 0) {
      bVar16 = false;
      do {
        uVar9 = (ulong)*(uint *)(lVar11 + uVar15 * 0x24 + 0x18);
        lVar10 = *(long *)(lVar13 + 0x118);
        lVar11 = (param_2 - lVar10) / 1000000;
        iVar5 = *(int *)(lVar13 + 0x108) + -1;
        if ((*(int *)(lVar13 + 0x1d8) == iVar5) && (!bVar16)) {
          uVar12 = (ulong)*(uint *)(lVar13 + 0x1dc);
          if (*(uint *)(lVar13 + 0x1dc) == 0) goto LAB_10ad85604;
          lVar3 = 0;
          if (uVar12 != 0) {
            lVar3 = lVar11 / (long)uVar12;
          }
          lVar11 = lVar11 - lVar3 * uVar12;
          lVar10 = lVar10 + lVar3 * uVar12 * 1000000;
          *(long *)(lVar13 + 0x118) = lVar10;
          bVar16 = true;
        }
        iVar14 = (int)uVar15;
        if (lVar11 <= (long)uVar9) {
LAB_10ad85834:
          FUN_10ad83ad4(lVar13,uVar15,0);
          uVar9 = (*(long *)(lVar13 + 0x1c8) - *(long *)(lVar13 + 0x1c0) >> 2) * -0x71c71c71c71c71c7
          ;
          if (uVar15 <= uVar9 && uVar9 - uVar15 != 0) {
            iVar2 = *(int *)(*(long *)(lVar13 + 0x1c0) + uVar15 * 0x24 + 0x20);
            iVar5 = 0;
            if (*(int *)(lVar13 + 0x178) <= iVar14) {
              iVar5 = *(int *)(lVar13 + 0x178) + 1;
            }
            if (iVar5 <= iVar2) {
              iVar5 = iVar2;
            }
            if (iVar5 <= iVar14) {
              do {
                FUN_10ad83f4c(lVar13,iVar5);
                iVar5 = iVar5 + 1;
              } while (iVar14 + 1 != iVar5);
            }
            plStack_88 = *(long **)(lVar13 + 0x1a8);
            uStack_90 = *(undefined8 *)(lVar13 + 0x1a0);
            if (*(long *)(lVar13 + 0x1a8) != 0) {
              plVar8 = (long *)(*(long *)(lVar13 + 0x1a8) + 8);
              do {
                cVar4 = '\x01';
                bVar16 = (bool)ExclusiveMonitorPass(plVar8,0x10);
                if (bVar16) {
                  *plVar8 = *plVar8 + 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
            }
            goto LAB_10ad85610;
          }
          break;
        }
        if (iVar14 == iVar5) {
          *(int *)(lVar13 + 0x180) = *(int *)(lVar13 + 0x180) + 1;
          if ((*(byte *)(lVar13 + 0x114) & 1) == 0) goto LAB_10ad85834;
          uVar15 = 0;
        }
        else {
          uVar15 = (ulong)(iVar14 + 1);
        }
        *(ulong *)(lVar13 + 0x118) = lVar10 + uVar9 * 1000000;
        FUN_10ad83ad4(lVar13,uVar15,0);
        lVar11 = *(long *)(lVar13 + 0x1c0);
        uVar9 = (*(long *)(lVar13 + 0x1c8) - lVar11 >> 2) * -0x71c71c71c71c71c7;
      } while (uVar15 <= uVar9 && uVar9 - uVar15 != 0);
    }
  }
  else {
    func_0x000107c2b054(&plStack_78,&UNK_10f6abb6f);
    FUN_10ad83d84(*(undefined8 *)(lVar13 + 0x1e0),&plStack_78);
  }
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10ad85834);
  (*pcVar7)();
}



/* Entry: 10ad85930; end: 10ad85933;  */

void FUN_10ad85930(long param_1)

{
  long lVar1;
  
  if (param_1 == 0) {
    return;
  }
  lVar1 = *(long *)(param_1 + 0x48);
  while (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + 0x48);
    _free();
  }
  lVar1 = *(long *)(param_1 + 0x58);
  while (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + 0x10);
    _free();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(param_1);
  return;
}



/* Entry: 10ad85934; end: 10ad85947;  */

void FUN_10ad85934(undefined8 param_1,undefined4 param_2,ulong param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if (3 < param_3) {
    param_3 = param_3 >> 2;
    do {
      *puVar1 = param_2;
      param_3 = param_3 - 1;
      puVar1 = puVar1 + 1;
    } while (param_3 != 0);
  }
  return;
}



/* Entry: 10ad85948; end: 10ad85967;  */

void FUN_10ad85948(undefined4 *param_1,undefined4 param_2,ulong param_3)

{
  if (3 < param_3) {
    param_3 = param_3 >> 2;
    do {
      *param_1 = param_2;
      param_3 = param_3 - 1;
      param_1 = param_1 + 1;
    } while (param_3 != 0);
  }
  return;
}



/* Entry: 10ad85968; end: 10ad859e7;  */

void FUN_10ad85968(undefined8 *param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)0xa8;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar2 = puVar1 + 3;
  *puVar1 = &PTR_FUN_110baa4d8;
  FUN_10a1b2a84(puVar2,param_2,param_3,param_4 & 1);
  *param_1 = puVar2;
  param_1[1] = puVar1;
  return;
}



/* Entry: 10ad859e8; end: 10ad859eb;  */

void FUN_10ad859e8(void)

{
  return;
}



/* Entry: 10ad859ec; end: 10ad859f3; -[LSATextInputController initWithParentView:] */

void FUN_10ad859ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c033e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithParentView_keyboardAcces_1125ea9a0,param_3,0);
  return;
}



/* Entry: 10ad859f4; end: 10ad85e77; -[LSATextInputController initWithParentView:keyboardAccessoryView:] */

undefined8 *
FUN_10ad859f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_80 = PTR_PTR_1127012b8;
  puVar8 = &uStack_88;
  uStack_88 = param_2;
  _objc_msgSendSuper2(puVar8,PTR_s_init_1125d9248);
  if (puVar8 != (undefined8 *)0x0) {
    if (param_5 == 0) {
      puVar7 = PTR__OBJC_CLASS___UITextView_1126afb88;
      _objc_alloc();
      func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
      uVar9 = puVar8[9];
      puVar8[9] = puVar7;
      _objc_release(uVar9);
      func_0x00010befbb60(param_4);
    }
    else {
      puVar7 = PTR__OBJC_CLASS___UIView_1126aec20;
      _objc_alloc();
      func_0x00010c0c34a0(param_5);
      func_0x00010c013de0(0,0,0x4059000000000000,param_1);
      uVar9 = puVar8[7];
      puVar8[7] = puVar7;
      _objc_release(uVar9);
      func_0x00010c16d4a0(puVar8[7]);
      puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440(puVar8[7]);
      _objc_release(puVar7);
      func_0x00010c21e900(puVar8[7]);
      lVar1 = param_5;
      func_0x00010c26ca80();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = puVar8[9];
      puVar8[9] = lVar1;
      _objc_release(uVar9);
      func_0x00010c1ad180(puVar8[9]);
      _objc_retain(param_5);
      uVar9 = puVar8[6];
      puVar8[6] = param_5;
      _objc_release(uVar9);
      uVar9 = puVar8[6];
      func_0x00010beed360(uVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60(param_4);
      _objc_release(uVar9);
      uVar2 = puVar8[6];
      func_0x00010beed360();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar2;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_4;
      func_0x00010c08de00(param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar9;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = puVar8[6];
      uStack_78 = uVar6;
      func_0x00010beed360();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar3;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_4;
      func_0x00010c2793a0(param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar10;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_70 = uVar5;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef79e0(param_4);
      _objc_release(puVar7);
      _objc_release(uVar5);
      _objc_release(lVar4);
      _objc_release(uVar10);
      _objc_release(uVar3);
      _objc_release(uVar6);
      _objc_release(lVar1);
      _objc_release(uVar9);
      _objc_release(uVar2);
      puVar7 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
      func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa240();
      _objc_release(puVar7);
      lVar1 = param_4;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = puVar8[6];
      func_0x00010beed360(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar6;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar1;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = puVar8[5];
      puVar8[5] = lVar4;
      _objc_release(uVar10);
      _objc_release(uVar9);
      _objc_release(uVar6);
      _objc_release(lVar1);
      func_0x00010bef7980(param_4);
      uVar9 = puVar8[6];
      func_0x00010beed360(uVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(uVar9);
      puVar7 = PTR__OBJC_CLASS___UIView_1126aec20;
      _objc_retain(param_4);
      func_0x00010c0f9680(puVar7);
      _objc_release(param_4);
    }
    func_0x00010c18b5e0(puVar8[9]);
    puVar7 = PTR_PTR_1126de0d0;
    _objc_alloc();
    func_0x00010c021440();
    uVar9 = puVar8[1];
    puVar8[1] = puVar7;
    _objc_release(uVar9);
  }
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar8;
  }
  ___stack_chk_fail();
  puVar8 = *(undefined8 **)(param_4 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar8,PTR_s_layoutIfNeeded_112600d80);
  return puVar8;
}



/* Entry: 10ad85e78; end: 10ad85e7f;  */

void FUN_10ad85e78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_layoutIfNeeded_112600d80);
  return;
}



/* Entry: 10ad85e80; end: 10ad861c7; -[LSATextInputController keyboardWillChangeFrame:] */

void FUN_10ad85e80(float param_1,undefined8 param_2,undefined8 param_3,double param_4,long param_5,
                  undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  
  _objc_retain(param_7);
  uVar1 = param_7;
  func_0x00010c292820(param_7);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2c80();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_7;
  func_0x00010c292820(param_7);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067fc0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_5 + 0x30);
  func_0x00010beed360(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_98,uVar1);
  _objc_release(uVar1);
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___UIViewPropertyAnimator_1126b0db0;
  _objc_alloc(PTR__OBJC_CLASS___UIViewPropertyAnimator_1126b0db0);
  dVar13 = (double)param_1;
  _objc_copyWeak(auStack_a0,auStack_98);
  func_0x00010c00ea00(puVar3);
  func_0x00010c0c34a0(*(undefined8 *)(param_5 + 0x30));
  puVar4 = auStack_98;
  dVar8 = dVar13;
  _objc_loadWeakRetained(puVar4);
  puVar5 = puVar4;
  func_0x00010c2a71e0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = auStack_98;
  _objc_loadWeakRetained(puVar6);
  func_0x00010bf20c00();
  puVar7 = auStack_98;
  _objc_loadWeakRetained(puVar7);
  func_0x00010bf513e0(dVar8,param_2,param_3,param_4,puVar5);
  dVar9 = dVar8;
  uVar10 = param_2;
  uVar11 = param_3;
  dVar12 = param_4;
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  uVar1 = param_7;
  func_0x00010c292820(param_7);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc1080();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _CGRectIntersection(dVar8,param_2,param_3,param_4,dVar9,uVar10,uVar11,dVar12);
  func_0x00010c181140(param_4 - dVar13,*(undefined8 *)(param_5 + 0x28));
  func_0x00010c24dc40(puVar3);
  uVar1 = *(undefined8 *)(param_5 + 0x30);
  func_0x00010c26ca80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ad180();
  _objc_release(uVar1);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_98);
  _objc_release(param_7);
  return;
}



/* Entry: 10ad861c8; end: 10ad861f3;  */

void FUN_10ad861c8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c08cdc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ad861f4; end: 10ad862bf; -[LSATextInputController detachTextView] */

void FUN_10ad861f4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar2);
  puVar1 = PTR_PTR_1126de0d0;
  func_0x00010c0b6bc0(PTR_PTR_1126de0d0);
  _objc_retainAutoreleasedReturnValue();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x10ad86294;
  puStack_30 = &UNK_110842e18;
  uStack_28 = uVar2;
  _objc_retain(uVar2);
  func_0x00010c0f7fc0(puVar1,param_2,&puStack_48);
  _objc_release(puVar1);
  _objc_release(uStack_28);
  _objc_release(uVar2);
  return;
}



/* Entry: 10ad862c0; end: 10ad862c3; -[LSATextInputController reset] */

void FUN_10ad862c0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be02bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissKeyboard_11255e498);
  return;
}



/* Entry: 10ad862c4; end: 10ad863a7; -[LSATextInputController _notifyRequest:description:code:data:completion:] */

void FUN_10ad862c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126db698;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010c28f280(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c059da0(puVar1);
  _objc_release(param_6);
  _objc_release(param_4);
  (**(code **)(param_7 + 0x10))(param_7,puVar1);
  _objc_release(param_7);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10ad863a8; end: 10ad863b7; -[LSATextInputController _notifyBadRequest:description:completion:] */

void FUN_10ad863a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010be64fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__notifyRequest_description_code__112576d88,param_3,param_4,400,0,param_5)
  ;
  return;
}



/* Entry: 10ad863b8; end: 10ad86503; -[LSATextInputController _setSelectedTextRangeFrom:to:] */

void FUN_10ad863b8(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar3 = param_3;
  if (param_3 <= param_4) {
    lVar3 = param_4;
  }
  lVar5 = *(long *)(param_1 + 0x48);
  lVar1 = lVar5;
  func_0x00010bf193c0(lVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1042e0(lVar5,param_2,lVar1,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar5 == 0) {
    lVar2 = *(long *)(param_1 + 0x48);
    func_0x00010bf94e60(lVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(lVar5);
    lVar2 = lVar5;
  }
  _objc_release(lVar5);
  _objc_release(lVar1);
  lVar5 = *(long *)(param_1 + 0x48);
  lVar1 = lVar5;
  func_0x00010bf193c0(lVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1042e0(lVar5,param_2,lVar1,lVar3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar5 == 0) {
    lVar3 = *(long *)(param_1 + 0x48);
    func_0x00010bf94e60(lVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(lVar5);
    lVar3 = lVar5;
  }
  _objc_release(lVar5);
  _objc_release(lVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c26c600(uVar4,param_2,lVar2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fb600(*(undefined8 *)(param_1 + 0x48),param_2,uVar4);
  _objc_release(uVar4);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10ad86504; end: 10ad865db; -[LSATextInputController _notifyKeyboardIsOpen:] */

void FUN_10ad86504(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if ((*(long *)(param_1 + 0x10) != 0) && (*(long *)(param_1 + 0x18) != 0)) {
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_2,puVar2,uRam0000000113836958);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,puVar1,0,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be64fa0(param_1,param_2,*(undefined8 *)(param_1 + 0x10),0,200,puVar2,
                        *(undefined8 *)(param_1 + 0x18));
    _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 10ad865dc; end: 10ad8673b; -[LSATextInputController _requestKeyboard:completion:] */

void FUN_10ad865dc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
  uVar2 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf64b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_initWeak(auStack_48,param_1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(puVar1);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10ad8673c; end: 10ad86a6b;  */

void FUN_10ad8673c(long param_1)

{
  long lVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if ((lVar1 == 0) || (*(long *)(lVar1 + 0x10) != 0)) goto LAB_10ad86a44;
  ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x00010bdc1900();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar2 == (undefined **)0x0) {
LAB_10ad867f0:
    ppuVar11 = (undefined **)0x0;
    ppuVar4 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    ppuVar4 = ppuVar2;
    _objc_opt_isKindOfClass(ppuVar2,puVar3);
    if (((ulong)ppuVar4 & 1) == 0) goto LAB_10ad867f0;
    _objc_retain(ppuVar2);
    ppuVar5 = ppuVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar5 == (undefined **)0x0) {
      ppuVar4 = &PTR____CFConstantStringClassReference_110daafd8;
    }
    else {
      _objc_retain();
      ppuVar4 = ppuVar5;
    }
    ppuVar11 = ppuVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar11;
    func_0x00010bf1f3c0();
    *(char *)(lVar1 + 0x20) = (char)ppuVar6;
    _objc_release(ppuVar11);
    ppuVar11 = ppuVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08fa60();
    ppuVar6 = ppuVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if ((ppuVar6 != (undefined **)0x0) && (ppuVar7 != (undefined **)0x0)) {
      func_0x00010c067fc0();
      func_0x00010c067fc0();
    }
    ppuVar8 = ppuVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar8 != (undefined **)0x0) {
      func_0x00010be46840();
    }
    ppuVar9 = ppuVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar9 != (undefined **)0x0) {
      func_0x00010be971a0();
    }
    _objc_release(ppuVar9);
    _objc_release(ppuVar8);
    _objc_release(ppuVar7);
    _objc_release(ppuVar6);
    _objc_release(ppuVar5);
    _objc_release(ppuVar2);
  }
  uVar12 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar12);
  uVar10 = *(undefined8 *)(lVar1 + 0x10);
  *(undefined8 *)(lVar1 + 0x10) = uVar12;
  _objc_release(uVar10);
  uVar10 = *(undefined8 *)(param_1 + 0x30);
  _objc_retainBlock();
  uVar12 = *(undefined8 *)(lVar1 + 0x18);
  *(undefined8 *)(lVar1 + 0x18) = uVar10;
  _objc_release(uVar12);
  puVar3 = PTR_PTR_1126de0d0;
  func_0x00010c0b6bc0(PTR_PTR_1126de0d0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(ppuVar11);
  _objc_retain(ppuVar4);
  func_0x00010c0f7fc0(puVar3);
  _objc_release(puVar3);
  _objc_release(ppuVar11);
  _objc_release(ppuVar4);
  _objc_release(ppuVar11);
  _objc_release(ppuVar4);
  _objc_release(ppuVar2);
LAB_10ad86a44:
  _objc_release(lVar1);
  return;
}



/* Entry: 10ad86a6c; end: 10ad86bab;  */

void FUN_10ad86a6c(long param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  func_0x00010c212f20(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48),param_2,
                      *(undefined8 *)(param_1 + 0x28));
  func_0x00010c1dcb60(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30));
  func_0x00010bea73e0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c1b6da0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48));
  func_0x00010c1b6ec0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48));
  func_0x00010c1edbe0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48));
  func_0x00010bf179a0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48));
  if (*(long *)(param_1 + 0x50) == 0) {
    bVar1 = *(long *)(param_1 + 0x48) == 0 || *(long *)(param_1 + 0x48) == 3;
  }
  else {
    bVar1 = false;
  }
  *(bool *)(*(long *)(param_1 + 0x20) + 0x40) = bVar1;
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x41) = 0;
  _objc_initWeak(auStack_28,*(undefined8 *)(param_1 + 0x20));
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar2);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10ad86bac; end: 10ad86be3;  */

void FUN_10ad86bac(long param_1,undefined8 param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be64b00(param_1,param_2,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ad86be4; end: 10ad86c8b; -[LSATextInputController _dismissKeyboard] */

void FUN_10ad86be4(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10ad86c8c; end: 10ad86dab;  */

void FUN_10ad86c8c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be64b00(param_1,param_2,0);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
    _objc_release(uVar1);
    puVar2 = PTR_PTR_1126de0d0;
    func_0x00010c0b6bc0(PTR_PTR_1126de0d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f7fc0();
    _objc_release(puVar2);
  }
  _objc_release(param_1);
  return;
}



/* Entry: 10ad86dac; end: 10ad86f0b; -[LSATextInputController _setSelectedTextRange:completion:] */

void FUN_10ad86dac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
  uVar2 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf64b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_initWeak(auStack_48,param_1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(puVar1);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_48);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10ad86f0c; end: 10ad870e7;  */

void FUN_10ad86f0c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [8];
  
  puVar1 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x00010bdc1900(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,
                      *(undefined8 *)(param_1 + 0x20),0,0);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    puVar3 = puVar1;
    _objc_opt_isKindOfClass(puVar1,puVar2);
    if (((ulong)puVar3 & 1) != 0) {
      _objc_retain(puVar1);
      puVar3 = puVar1;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar1;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar3;
      if (puVar4 != (undefined *)0x0) {
        puVar2 = puVar4;
      }
      _objc_retain(puVar2);
      _objc_release(puVar4);
      if ((puVar3 != (undefined *)0x0) && (puVar2 != (undefined *)0x0)) {
        puVar4 = PTR_PTR_1126de0d0;
        func_0x00010c0b6bc0(PTR_PTR_1126de0d0);
        _objc_retainAutoreleasedReturnValue();
        _objc_copyWeak(auStack_58,param_1 + 0x38);
        _objc_retain(puVar3);
        _objc_retain(puVar2);
        uVar6 = *(undefined8 *)(param_1 + 0x28);
        _objc_retain(uVar6);
        uVar5 = *(undefined8 *)(param_1 + 0x30);
        _objc_retain(uVar5);
        func_0x00010c0f7fc0(puVar4);
        _objc_release(puVar4);
        _objc_release(uVar5);
        _objc_release(uVar6);
        _objc_release(puVar2);
        _objc_release(puVar3);
        _objc_destroyWeak(auStack_58);
      }
      _objc_release(puVar2);
      _objc_release(puVar3);
      _objc_release(puVar1);
    }
  }
  _objc_release(puVar1);
  return;
}



/* Entry: 10ad870e8; end: 10ad8720b;  */

void FUN_10ad870e8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c067fc0(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c067fc0(*(undefined8 *)(param_1 + 0x28));
    func_0x00010bea73e0(lVar1);
    _objc_initWeak(auStack_48,lVar1);
    uVar3 = *(undefined8 *)(lVar1 + 8);
    _objc_copyWeak(auStack_50,auStack_48);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar4);
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar2);
    func_0x00010c0f7fc0(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 10ad8720c; end: 10ad87253;  */

void FUN_10ad8720c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be64fa0(lVar1,param_2,*(undefined8 *)(param_1 + 0x20),0,200,0,
                        *(undefined8 *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10ad87254; end: 10ad8730f; -[LSATextInputController _returnKeyTypeStringToEnum:] */

undefined8 FUN_10ad87254(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0720c0(param_3,param_2,uRam0000000113836978);
  if ((uVar1 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0720c0(param_3,param_2,uRam0000000113836980);
    if ((uVar1 & 1) == 0) {
      uVar1 = param_3;
      func_0x00010c0720c0(param_3,param_2,uRam0000000113836988);
      if ((uVar1 & 1) == 0) {
        uVar1 = param_3;
        func_0x00010c0720c0(param_3,param_2,uRam0000000113836990);
        if ((uVar1 & 1) == 0) {
          uVar1 = param_3;
          func_0x00010c0720c0(param_3,param_2,uRam0000000113836998);
          uVar2 = 7;
          if ((int)uVar1 == 0) {
            uVar2 = 0;
          }
        }
        else {
          uVar2 = 6;
        }
      }
      else {
        uVar2 = 4;
      }
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 9;
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 10ad87310; end: 10ad87393; -[LSATextInputController _keyboardTypeStringToEnum:] */

undefined8 FUN_10ad87310(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0720c0(param_3,param_2,uRam0000000113836960);
  if ((uVar1 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0720c0(param_3,param_2,uRam0000000113836968);
    if ((uVar1 & 1) == 0) {
      uVar1 = param_3;
      func_0x00010c0720c0(param_3,param_2,uRam0000000113836970);
      uVar2 = 3;
      if ((int)uVar1 == 0) {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 5;
    }
  }
  else {
    uVar2 = 4;
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 10ad87394; end: 10ad8759f; -[LSATextInputController handleTextInputRequest:completion:] */

void FUN_10ad87394(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c0cc940();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0720c0();
  _objc_release(lVar1);
  if ((int)lVar2 == 0) {
    ppuVar4 = &PTR____CFConstantStringClassReference_110f2e718;
  }
  else {
    lVar1 = param_3;
    func_0x00010c28f280();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0f5800();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0720c0();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if ((int)lVar3 == 0) {
      lVar1 = param_3;
      func_0x00010c28f280();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c0f5800();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c0720c0();
      _objc_release(lVar2);
      _objc_release(lVar1);
      if ((int)lVar3 != 0) {
        func_0x00010be02be0(param_1);
        func_0x00010be64fa0(param_1,param_2,param_3,0,200,0,param_4);
        goto LAB_10ad87484;
      }
      lVar1 = param_3;
      func_0x00010c28f280();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c0f5800();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c0720c0();
      _objc_release(lVar2);
      _objc_release(lVar1);
      if ((int)lVar3 == 0) {
        ppuVar4 = &PTR____CFConstantStringClassReference_110f2e6f8;
        goto LAB_10ad87474;
      }
      lVar1 = param_3;
      func_0x00010bf63640();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar1 != 0) {
        func_0x00010bea73c0(param_1,param_2,param_3,param_4);
        goto LAB_10ad87484;
      }
    }
    else {
      lVar1 = param_3;
      func_0x00010bf63640();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar1 != 0) {
        func_0x00010be91320(param_1,param_2,param_3,param_4);
        goto LAB_10ad87484;
      }
    }
    ppuVar4 = &PTR____CFConstantStringClassReference_110f2e6d8;
  }
LAB_10ad87474:
  func_0x00010be645a0(param_1,param_2,param_3,ppuVar4,param_4);
LAB_10ad87484:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10ad875a0; end: 10ad875ff; -[LSATextInputController textViewDidBeginEditing:] */

void FUN_10ad875a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x30);
  if ((lVar1 != 0) && (*(char *)(param_1 + 0x20) == '\x01')) {
    func_0x00010beed360();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10ad87600; end: 10ad8763f; -[LSATextInputController textViewDidEndEditing:] */

void FUN_10ad87600(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 != 0) {
    func_0x00010beed360();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 10ad87640; end: 10ad87643; -[LSATextInputController textViewDidChange:] */

void FUN_10ad87640(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be83a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__provideTextInputDataFromTextVie_11257e838);
  return;
}



/* Entry: 10ad87644; end: 10ad876cb; -[LSATextInputController textView:shouldChangeTextInRange:replacementText:] */

undefined8
FUN_10ad87644(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010c0720c0(param_6,param_2,&PTR____CFConstantStringClassReference_110db2db8);
  if ((int)param_6 == 0) {
    *(undefined1 *)(param_1 + 0x41) = 0;
    uVar1 = 1;
  }
  else {
    uVar1 = 1;
    *(undefined1 *)(param_1 + 0x41) = 1;
    if ((*(byte *)(param_1 + 0x40) & 1) == 0) {
      func_0x00010be83a60(param_1,param_2,param_3);
      func_0x00010be02be0(param_1);
      uVar1 = 0;
    }
  }
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 10ad876cc; end: 10ad879af; -[LSATextInputController _provideTextInputDataFromTextView:] */

void FUN_10ad876cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uVar5 = param_3;
  func_0x00010c26b700(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1);
  _objc_release(uVar5);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar5 = param_3;
  func_0x00010bf193c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c15a1e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c24d960();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e1ce0(param_3);
  func_0x00010c0df780(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar5);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar5 = param_3;
  func_0x00010bf193c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c15a1e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf940a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e1ce0(param_3);
  func_0x00010c0df780(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar5);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1);
  _objc_release(puVar4);
  _objc_initWeak(auStack_58,param_1);
  uVar5 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(puVar1);
  func_0x00010c0f7fc0(uVar5);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 10ad879b0; end: 10ad87a33;  */

void FUN_10ad879b0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (((lVar1 != 0) && (*(long *)(lVar1 + 0x10) != 0)) && (*(long *)(lVar1 + 0x18) != 0)) {
    puVar2 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,
                        *(undefined8 *)(param_1 + 0x20),0,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be64fa0(lVar1,param_2,*(undefined8 *)(lVar1 + 0x10),0,200,puVar2,
                        *(undefined8 *)(lVar1 + 0x18));
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10ad87a34; end: 10ad87a3b; -[LSATextInputController textView] */

undefined8 FUN_10ad87a34(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10ad87a3c; end: 10ad87a43; -[LSATextInputController keyboardAccessoryViewHidden] */

undefined1 FUN_10ad87a3c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x42);
}



/* Entry: 10ad87a44; end: 10ad87a4b; -[LSATextInputController setKeyboardAccessoryViewHidden:] */

void FUN_10ad87a44(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x42) = param_3;
  return;
}



/* Entry: 10ad87a4c; end: 10ad87ab7; -[LSATextInputController .cxx_destruct] */

void FUN_10ad87a4c(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
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



/* Entry: 10ad87ab8; end: 10ad87e5b; -[LSATouchProcessingController initWithView:touchProcessingComponents:touchProcessingDelegate:gestureRecognizerDelegate:disableMultipleTouch:touchProcessingDelay:printDebugLogs:] */

undefined1 *
FUN_10ad87ab8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,ulong param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puVar1 = &uStack_80;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_78 = PTR_PTR_1127012c0;
  uStack_80 = param_2;
  _objc_msgSendSuper2(&uStack_80,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x58),param_6);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_4);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126de0d8;
    _objc_alloc();
    func_0x00010c0339e0(param_1);
    func_0x00010c18b5e0();
    _objc_retain(puVar3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar3;
    _objc_release(uVar2);
    puVar4 = (undefined1 *)((long)puVar1 + 0x20);
    _objc_loadWeakRetained(puVar4);
    func_0x00010bef9040();
    _objc_release(puVar4);
    puVar5 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc();
    func_0x00010c050900();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar5;
    _objc_release(uVar2);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + 0x28));
    puVar4 = (undefined1 *)((long)puVar1 + 0x20);
    _objc_loadWeakRetained(puVar4);
    func_0x00010bef9040();
    _objc_release(puVar4);
    puVar5 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc();
    func_0x00010c050900();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar5;
    _objc_release(uVar2);
    func_0x00010c1d0120(*(undefined8 *)((long)puVar1 + 0x30));
    func_0x00010c1d01c0(*(undefined8 *)((long)puVar1 + 0x30));
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + 0x30));
    puVar4 = (undefined1 *)((long)puVar1 + 0x20);
    _objc_loadWeakRetained(puVar4);
    func_0x00010bef9040();
    _objc_release(puVar4);
    if ((param_8 & 1) == 0) {
      puVar5 = PTR__OBJC_CLASS___UIPinchGestureRecognizer_1126b3868;
      _objc_alloc();
      func_0x00010c050900();
      uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
      *(undefined **)((long)puVar1 + 0x38) = puVar5;
      _objc_release(uVar2);
      func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + 0x38));
      puVar5 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
      _objc_alloc();
      func_0x00010c050900();
      uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
      *(undefined **)((long)puVar1 + 0x40) = puVar5;
      _objc_release(uVar2);
      func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + 0x40));
      puVar5 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
      _objc_alloc();
      func_0x00010c050900();
      uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
      *(undefined **)((long)puVar1 + 0x48) = puVar5;
      _objc_release(uVar2);
      func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + 0x48));
      puVar5 = PTR__OBJC_CLASS___UIRotationGestureRecognizer_1126c4148;
      _objc_alloc();
      func_0x00010c050900();
      uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
      *(undefined **)((long)puVar1 + 0x50) = puVar5;
      _objc_release(uVar2);
      func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + 0x50));
      func_0x00010c2327e0(*(undefined8 *)((long)puVar1 + 0x28));
      func_0x00010c2327e0(*(undefined8 *)((long)puVar1 + 0x28));
      func_0x00010c2327e0(*(undefined8 *)((long)puVar1 + 0x28));
      func_0x00010c2327e0(*(undefined8 *)((long)puVar1 + 0x28));
      puVar4 = (undefined1 *)((long)puVar1 + 0x20);
      _objc_loadWeakRetained(puVar4);
      func_0x00010bef9040();
      _objc_release(puVar4);
      puVar4 = (undefined1 *)((long)puVar1 + 0x20);
      _objc_loadWeakRetained(puVar4);
      func_0x00010bef9040();
      _objc_release(puVar4);
      puVar4 = (undefined1 *)((long)puVar1 + 0x20);
      _objc_loadWeakRetained(puVar4);
      func_0x00010bef9040();
      _objc_release(puVar4);
      puVar4 = (undefined1 *)((long)puVar1 + 0x20);
      _objc_loadWeakRetained(puVar4);
      func_0x00010bef9040();
      _objc_release(puVar4);
    }
    _objc_release(puVar3);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}


