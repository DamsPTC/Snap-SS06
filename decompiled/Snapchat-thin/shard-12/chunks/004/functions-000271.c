/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10909b768; end: 10909b7a7;  */

undefined8 * FUN_10909b768(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    uVar2 = *param_2;
    *param_2 = 0;
    uVar1 = *param_1;
    *param_1 = uVar2;
    FUN_10909b58c(uVar1);
  }
  return param_1;
}



/* Entry: 10909b7a8; end: 10909b853; -[SCNeoMediaBufferChunkManager initWithChunkSize:instruments:] */

undefined1 * FUN_10909b7a8(void)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 in_x3;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  
  _objc_retain(in_x3);
  func_0x00010909bce8();
  puVar1 = auStack_40;
  _objc_msgSendSuper2();
  if (puVar1 != (undefined1 *)0x0) {
    func_0x00010c067b40();
    func_0x0001090958b8();
    uVar2 = 0x78;
    uStack_48 = in_x3;
    __Znwm();
    func_0x0001090ddf7c();
    uStack_50 = uVar2;
    func_0x00010909bd24();
    FUN_10909b564(&uStack_50);
    func_0x00010909bcb8();
  }
  func_0x00010909bca8();
  return puVar1;
}



/* Entry: 10909b854; end: 10909b8c7; -[SCNeoMediaBufferChunkManager dealloc] */

void FUN_10909b854(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010be8cb40();
  puStack_28 = PTR_PTR_112700440;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10909b8c8; end: 10909b8cf; -[SCNeoMediaBufferChunkManager instance] */

undefined8 FUN_10909b8c8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10909b8d0; end: 10909b8db; -[SCNeoMediaBufferChunkManager defaultChunkSize] */

undefined8 FUN_10909b8d0(long param_1)

{
  return *(undefined8 *)(*(long *)(param_1 + 8) + 0x10);
}



/* Entry: 10909b8dc; end: 10909b8e3; +[SCNeoMediaBufferChunkManager defaultChunkSizeBytes] */

undefined8 FUN_10909b8dc(void)

{
  return 0x10000;
}



/* Entry: 10909b8e4; end: 10909b8ef; -[SCNeoMediaBufferChunkManager maxMemoryUsageBytes] */

undefined8 FUN_10909b8e4(long param_1)

{
  return *(undefined8 *)(*(long *)(param_1 + 8) + 0x20);
}



/* Entry: 10909b8f0; end: 10909b8fb; -[SCNeoMediaBufferChunkManager setMaxMemoryUsageBytes:] */

void FUN_10909b8f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(*(long *)(param_1 + 8) + 0x20) = param_3;
  return;
}



/* Entry: 10909b8fc; end: 10909b94f; -[SCNeoMediaBufferChunkManager _trimMemoryOnQueue:] */

void FUN_10909b8fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10909b950;
  puStack_20 = &UNK_11087bb00;
  uStack_18 = param_1;
  func_0x000107c27d8c(param_3,&puStack_38);
  return;
}



/* Entry: 10909b950; end: 10909b95b;  */

void FUN_10909b950(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_28 [8];
  
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  while (lVar2 = *(long *)(lVar4 + 0x58), *(long *)(lVar4 + 0x50) != lVar2) {
    uVar1 = *(undefined8 *)(lVar2 + -0x10);
    uVar3 = *(undefined8 *)(lVar2 + -8);
    *(undefined8 **)(lVar4 + 0x58) = (undefined8 *)(lVar2 + -0x10);
    func_0x0001090e7dc0(auStack_28,uVar3);
    func_0x0001090e7f2c(auStack_28,uVar1);
  }
  return;
}



/* Entry: 10909b95c; end: 10909ba0b; -[SCNeoMediaBufferChunkManager _removeObservers] */

void FUN_10909b95c(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d560();
    func_0x00010909bcb0();
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
    _objc_release(uVar1);
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d560();
    func_0x00010909bcb0();
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 10909ba0c; end: 10909bbef; -[SCNeoMediaBufferChunkManager automaticallyTrimMemoryOnQueue:] */

void FUN_10909ba0c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 unaff_x19;
  long unaff_x20;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  func_0x00010909bcc0();
  func_0x00010be8cb40();
  _objc_initWeak(auStack_68);
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_10909bbf0;
  puStack_80 = &UNK_110ad7780;
  _objc_copyWeak(auStack_70,auStack_68);
  uVar1 = unaff_x19;
  _objc_retain();
  func_0x00010909bd30();
  func_0x00010befa280();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  _objc_release(uVar2);
  func_0x00010909bce0();
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_a0,auStack_68);
  uVar1 = unaff_x19;
  _objc_retain();
  func_0x00010909bd30();
  func_0x00010befa280();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar1;
  _objc_release(uVar2);
  func_0x00010909bce0();
  _objc_release(unaff_x19);
  _objc_destroyWeak(auStack_a0);
  func_0x00010909bd1c();
  func_0x00010909bd0c();
  _objc_destroyWeak(auStack_68);
  func_0x00010909bca8();
  return;
}



/* Entry: 10909bbf0; end: 10909bc27;  */

void FUN_10909bbf0(undefined8 param_1)

{
  func_0x00010909bd00();
  func_0x00010bed00a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10909bc28; end: 10909bc5f;  */

void FUN_10909bc28(undefined8 param_1)

{
  func_0x00010909bd00();
  func_0x00010bed00a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10909bc60; end: 10909bc67; -[SCNeoMediaBufferChunkManager trimMemoryIfNeeded] */

void FUN_10909bc60(long param_1)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long lVar7;
  long lStack_50;
  long alStack_48 [2];
  long lStack_38;
  
  lVar5 = *(long *)(param_1 + 8);
  uVar6 = *(ulong *)(lVar5 + 0x20);
  if (uVar6 != 0) {
    lVar1 = *(long *)(lVar5 + 0x28) + 1;
    *(long *)(lVar5 + 0x28) = lVar1;
    while ((uVar6 < *(ulong *)(lVar5 + 0x30) && (*(long *)(lVar5 + 0x68) != 0))) {
      lVar7 = *(long *)(lVar5 + 0x70);
      if (lVar7 != 0) {
        do {
          func_0x0001090df3f0();
        } while (extraout_w10 != 0);
        do {
          func_0x0001090df3f0();
        } while (extraout_w10_00 != 0);
      }
      lStack_38 = lVar7;
      if (*(long *)(lVar7 + 0x50) == lVar1) {
        plVar2 = (long *)(lVar7 + 8);
        do {
          lVar5 = *plVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = lVar5 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar5 + -1 == 0) {
          func_0x0001090df390();
        }
        func_0x0001090df460();
        return;
      }
      *(long *)(lVar7 + 0x50) = lVar1;
      func_0x0001090de234(alStack_48,*(long *)(lVar5 + 0x38) + *(long *)(lVar7 + 0x48) * 0x10);
      if (((alStack_48[0] == 0) || (*(ulong *)(lVar7 + 0x38) < *(ulong *)(alStack_48[0] + 0x30))) ||
         (*(ulong *)(alStack_48[0] + 0x38) <= *(ulong *)(lVar7 + 0x38))) {
        FUN_1090dd998(lVar5,&lStack_38);
        if (alStack_48[0] != 0) {
          FUN_1090ddd04(alStack_48[0],lVar7);
        }
      }
      else {
        do {
          func_0x0001090df3f0();
        } while (extraout_w10_01 != 0);
        lStack_50 = lVar7;
        func_0x0001090ddd9c(lVar5,&lStack_50);
        FUN_1090de7d0(lStack_50);
      }
      func_0x0001090df340(alStack_48);
      plVar2 = (long *)(lVar7 + 8);
      do {
        lVar7 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar7 + -1 == 0) {
        func_0x0001090df390();
      }
      func_0x0001090df460();
      uVar6 = *(ulong *)(lVar5 + 0x20);
    }
  }
  return;
}



/* Entry: 10909bc68; end: 10909bc9f; -[SCNeoMediaBufferChunkManager .cxx_destruct] */

undefined8 * FUN_10909bc68(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
  FUN_10909b58c(*(undefined8 *)(param_1 + 8));
  return (undefined8 *)(param_1 + 8);
}



/* Entry: 10909bca0; end: 10909bd43; -[SCNeoMediaBufferChunkManager .cxx_construct] */

void FUN_10909bca0(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



/* Entry: 10909bd44; end: 10909bddf; -[SCNeoMediaCodecRegistry initWithCodecs:] */

undefined1 * FUN_10909bd44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_112700448;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  func_0x00010909c06c();
  return (undefined1 *)puVar1;
}



/* Entry: 10909bde0; end: 10909bf07; -[SCNeoMediaCodecRegistry codecForIdentifier:instruments:] */

void FUN_10909bde0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 in_ZR;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar4 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  uVar5 = *(ulong *)(param_1 + 8);
  uVar2 = uVar5;
  _objc_retain();
  func_0x00010909c074();
  lVar1 = lRam0000000000000000;
  do {
    if (uVar2 == 0) {
      uVar2 = 0;
      uVar6 = 0;
LAB_10909beac:
      func_0x00010909c088();
      func_0x00010909c06c();
      func_0x00010909c090(uVar4);
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x00010909c088();
        func_0x00010909c06c();
        __Unwind_Resume(uVar2);
        if (lRam0000000113730960 != -1) {
          func_0x000107c27d9c(0x113730960,&PTR___NSConcreteGlobalBlock_110ad77b0);
        }
        uVar6 = uRam0000000113730968;
        _objc_retain(uRam0000000113730968);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
      return;
    }
    uVar7 = 0;
    do {
      in_ZR = lRam0000000000000000 == lVar1;
      if (!(bool)in_ZR) {
        _objc_enumerationMutation(uVar5);
      }
      uVar6 = *(ulong *)(uVar7 * 8);
      uVar3 = uVar6;
      func_0x00010c263580();
      if ((uVar3 & 1) != 0) {
        uVar2 = uVar6;
        _objc_retain(uVar6);
        goto LAB_10909beac;
      }
      uVar7 = uVar7 + 1;
      in_ZR = uVar7 == uVar2;
    } while (uVar7 < uVar2);
    func_0x00010909c074();
    uVar2 = uVar3;
  } while( true );
}



/* Entry: 10909bf08; end: 10909bf5b; +[SCNeoMediaCodecRegistry sharedInstance] */

void FUN_10909bf08(void)

{
  undefined8 uVar1;
  
  if (lRam0000000113730960 != -1) {
    func_0x000107c27d9c(0x113730960,&PTR___NSConcreteGlobalBlock_110ad77b0);
  }
  uVar1 = uRam0000000113730968;
  _objc_retain(uRam0000000113730968);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10909bf5c; end: 10909c05f;  */

void FUN_10909bf5c(void)

{
  undefined8 uVar1;
  undefined1 in_ZR;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR_PTR_1126dd3c0;
  _objc_alloc();
  _objc_opt_new();
  _objc_opt_new();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfff560();
  uVar1 = puRam0000000113730968;
  puRam0000000113730968 = puVar2;
  _objc_release(uVar1);
  puVar2 = puVar3;
  _objc_release(puVar3);
  func_0x00010909c088();
  func_0x00010909c06c();
  func_0x00010909c090(uVar4);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  func_0x00010909c088();
  func_0x00010909c06c();
  __Unwind_Resume(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar2 + 8,0);
  return;
}



/* Entry: 10909c060; end: 10909c0a3; -[SCNeoMediaCodecRegistry .cxx_destruct] */

void FUN_10909c060(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10909c0a4; end: 10909c37f; -[SCNeoMediaDataManager initWithStreamId:queue:configuration:bufferChunkManager:instruments:] */

undefined8 *
FUN_10909c0a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5,undefined8 param_6,long param_7,undefined8 param_8)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 **ppuVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_78 = PTR_PTR_112700450;
  puVar6 = &uStack_80;
  uStack_80 = param_2;
  _objc_msgSendSuper2(puVar6,PTR_s_init_1125d9248);
  if (puVar6 != (undefined8 *)0x0) {
    _objc_retain(param_5);
    uVar7 = puVar6[2];
    puVar6[2] = param_5;
    _objc_release(uVar7);
    if (param_5 == 0) {
      puStack_88 = (undefined8 *)0x0;
    }
    else {
      func_0x00010b999da0(&puStack_88,param_5);
    }
    uStack_a0 = 0;
    uStack_98 = 0;
    func_0x00010c0ce340(param_6);
    uStack_d0 = param_1;
    func_0x00010c0c3360(param_6);
    uStack_c8 = param_1;
    func_0x00010bf21c60(param_6);
    uVar7 = param_6;
    uStack_c0 = param_1;
    func_0x00010bf394a0();
    uVar8 = param_6;
    uStack_b0 = uVar7;
    func_0x00010c0c1e80();
    uVar7 = param_6;
    uStack_a8 = uVar8;
    func_0x00010bfb0f40();
    uVar8 = param_6;
    uStack_b8 = uVar7;
    func_0x00010bf7fc20();
    uStack_90 = (undefined1)uVar8;
    _objc_retain(param_6);
    uVar7 = puVar6[3];
    puVar6[3] = param_6;
    _objc_release(uVar7);
    lVar9 = param_7;
    func_0x00010c067b40();
    if (lVar9 != 0) {
      plVar12 = (long *)(lVar9 + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar5) {
          *plVar12 = *plVar12 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    lStack_e0 = lVar9;
    func_0x00010c067b40();
    func_0x0001090958b8();
    puVar11 = puStack_88;
    puVar10 = (undefined8 *)0x178;
    uStack_e8 = param_8;
    __Znwm();
    plVar12 = puVar10 + 1;
    *plVar12 = 0;
    puVar10[2] = 0;
    *puVar10 = &PTR_DAT_110ad77e0;
    if ((puVar11 != (undefined8 *)0x0) && (puVar11[2] != 0)) {
      plVar1 = (long *)(puVar11[2] + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = *plVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    puVar2 = puVar10 + 3;
    puStack_70 = puVar11;
    FUN_1090df4b0(puVar2,param_4,&puStack_70,&uStack_d0,&lStack_e0,&uStack_e8);
    func_0x000104bd5214(&puStack_70);
    if ((puVar10[5] == 0) || (*(long *)(puVar10[5] + 8) == -1)) {
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar5) {
          *plVar12 = *plVar12 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      puStack_70 = puVar2;
      puStack_68 = puVar10;
      func_0x000107c278e4(puVar10 + 4,&puStack_70);
      func_0x000107c278ec(&puStack_70);
    }
    ppuVar3 = (undefined8 **)(puVar6 + 1);
    puStack_d8 = puVar2;
    if (ppuVar3 != &puStack_d8) {
      puStack_d8 = (undefined8 *)0x0;
      puVar11 = *ppuVar3;
      *ppuVar3 = puVar2;
      FUN_10909c854(puVar11);
    }
    FUN_10909c830(&puStack_d8);
    FUN_1090958e8(&uStack_e8);
    FUN_10909b564(&lStack_e0);
    func_0x000107c2ab04(&puStack_88);
  }
  func_0x00010909cc74();
  _objc_release(param_7);
  func_0x00010909cc4c();
  func_0x00010909cc44();
  return puVar6;
}



/* Entry: 10909c380; end: 10909c47b; -[SCNeoMediaDataManager dealloc] */

void FUN_10909c380(long param_1)

{
  long extraout_x8;
  int extraout_w11;
  long lStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined8 uStack_38;
  char *pcStack_30;
  long lStack_28;
  
  puStack_50 = &uStack_58;
  uStack_58 = 0;
  uStack_48 = 0x3812000000;
  pcStack_40 = FUN_10909c47c;
  uStack_38 = 0x10909c48c;
  pcStack_30 = "";
  lStack_28 = *(long *)(param_1 + 8);
  if ((lStack_28 != 0) && (*(long *)(lStack_28 + 0x10) != 0)) {
    do {
      func_0x00010909cc94();
      lStack_28 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  FUN_10909c494();
  if ((puStack_50[6] != 0) && (*(long *)(param_1 + 0x10) != 0)) {
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_10909c4bc;
    puStack_68 = &UNK_110a19230;
    puStack_60 = &uStack_58;
    func_0x000107c27d8c(*(long *)(param_1 + 0x10),&puStack_80);
  }
  __Block_object_dispose(&uStack_58,8);
  FUN_10909c830(&lStack_28);
  puStack_88 = PTR_PTR_112700450;
  lStack_90 = param_1;
  _objc_msgSendSuper2(&lStack_90,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10909c47c; end: 10909c493;  */

void FUN_10909c47c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_2 + 0x30) = 0;
  return;
}



/* Entry: 10909c494; end: 10909c4bb;  */

void FUN_10909c494(long param_1)

{
  undefined8 *unaff_x19;
  
  func_0x00010909cccc();
  if (param_1 != 0) {
    *unaff_x19 = 0;
    func_0x000107c3105c();
  }
  return;
}



/* Entry: 10909c4bc; end: 10909c4cb;  */

void FUN_10909c4bc(long param_1)

{
  long lVar1;
  undefined8 *unaff_x19;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8) + 0x30;
  func_0x00010909cccc();
  if (lVar1 != 0) {
    *unaff_x19 = 0;
    func_0x000107c3105c();
  }
  return;
}



/* Entry: 10909c4cc; end: 10909c523; -[SCNeoMediaDataManager insertSourceAtIndex:dataProvider:byteRange:] */

void FUN_10909c4cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  undefined8 uVar1;
  undefined1 auStack_40 [16];
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  FUN_10910119c(auStack_40,param_4);
  FUN_1090df868(uVar1,param_3,auStack_40,param_5,param_6 + param_5);
  FUN_10909c860(auStack_40);
  return;
}



/* Entry: 10909c524; end: 10909c59b; -[SCNeoMediaDataManager bufferForSourceIndex:] */

void FUN_10909c524(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lStack_28;
  
  func_0x0001090dfe7c(&lStack_28,*(undefined8 *)(param_1 + 8),param_3);
  if (lStack_28 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126dd3d8;
    _objc_alloc(PTR_PTR_1126dd3d8);
    func_0x00010c01e440();
  }
  FUN_10909b5e4(&lStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10909c59c; end: 10909c637; -[SCNeoMediaDataManager setDelegate:forSourceIndex:] */

void FUN_10909c59c(undefined8 param_1,undefined8 param_2,long param_3)

{
  int extraout_w11;
  long alStack_40 [2];
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    alStack_40[1] = 0;
    func_0x00010909cc7c();
    func_0x00010909cc8c();
  }
  else {
    FUN_10909c888(alStack_40,param_1,param_3);
    if ((alStack_40[0] != 0) && (*(long *)(alStack_40[0] + 0x10) != 0)) {
      do {
        func_0x00010909cc94();
      } while (extraout_w11 != 0);
    }
    func_0x00010909cc7c();
    func_0x00010909cc8c();
    FUN_10909cbe0(alStack_40);
    func_0x00010909cc44();
  }
  return;
}



/* Entry: 10909c638; end: 10909c6cf; -[SCNeoMediaDataManager setDelegate:] */

void FUN_10909c638(undefined8 param_1,undefined8 param_2,long param_3)

{
  int extraout_w11;
  long alStack_40 [2];
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    alStack_40[1] = 0;
    func_0x00010909ccb8();
    func_0x00010909cc8c();
  }
  else {
    FUN_10909c888(alStack_40,param_1,param_3);
    if ((alStack_40[0] != 0) && (*(long *)(alStack_40[0] + 0x10) != 0)) {
      do {
        func_0x00010909cc94();
      } while (extraout_w11 != 0);
    }
    func_0x00010909ccb8();
    func_0x00010909cc8c();
    FUN_10909cbe0(alStack_40);
    func_0x00010909cc44();
  }
  return;
}



/* Entry: 10909c6d0; end: 10909c6e3; -[SCNeoMediaDataManager setLoadMode:forSourceIndex:] */

void FUN_10909c6d0(long param_1,undefined8 param_2,long param_3,long ******param_4)

{
  long ******pppppplVar1;
  long lVar2;
  long ****pppplVar3;
  char cVar4;
  bool bVar5;
  long ***ppplVar6;
  long ***ppplVar7;
  long **pplVar8;
  long *****ppppplVar9;
  undefined1 uVar10;
  long ******pppppplVar11;
  long *****ppppplVar12;
  undefined8 extraout_x8;
  long ******pppppplVar13;
  long ******extraout_x8_00;
  long *****ppppplVar14;
  long *****ppppplVar15;
  long *****ppppplVar16;
  long ****pppplVar17;
  int extraout_w11;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  byte bVar21;
  long *****ppppplStack_a8;
  long ****pppplStack_a0;
  long *****ppppplStack_98;
  long *****ppppplStack_90;
  long lStack_88;
  long lStack_80;
  long ****pppplStack_78;
  byte bStack_70;
  undefined8 uStack_68;
  
  ppppplVar12 = (long *****)(ulong)(param_3 == 1);
  pppppplVar11 = *(long *******)(param_1 + 8);
  pppppplVar13 = pppppplVar11;
  func_0x0001090dfdec();
  *(uint *)(*pppppplVar13 + 0x1b) = (uint)(param_3 == 1);
  pppppplVar13 = pppppplVar11;
  func_0x0001090e0fd4();
  uVar10 = *(int *)(pppppplVar13 + 0x27) == 1;
  uStack_68 = extraout_x8;
  if (*(int *)(pppppplVar13 + 0x27) < 1) {
    uVar10 = 0;
    if (*(char *)(pppppplVar11 + 0x2b) == '\x01') {
      if (*(char *)((long)pppppplVar11 + 0x15a) == '\x01') {
        uVar18 = 0;
        uVar19 = 0;
        *(undefined1 *)((long)pppppplVar11 + 0x15a) = 0;
        for (ppppplVar12 = pppppplVar11[0x28]; ppppplVar12 < pppppplVar11[0x29];
            ppppplVar12 = (long *****)((long)ppppplVar12 + 1)) {
          pppppplVar13 = pppppplVar11;
          func_0x0001090dfdec(pppppplVar11,ppppplVar12);
          uVar19 = (long)(*pppppplVar13)[0x22] + uVar19;
          if ((*pppppplVar13)[0x22] != (long ****)0x0) {
            uVar18 = uVar18 + 1;
          }
        }
        if (uVar18 == 0) {
          ppppplVar12 = (long *****)0x0;
        }
        else {
          ppppplVar12 = (long *****)0x0;
          if (uVar18 != 0) {
            ppppplVar12 = (long *****)(uVar19 / uVar18);
          }
        }
        pppppplVar11[0x2a] = ppppplVar12;
        pppplVar17 = pppppplVar11[0xf][7];
        if (pppplVar17 != (long ****)0x0) {
          pppplVar3 = pppplVar17 + 1;
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(pppplVar3,0x10);
            if (bVar5) {
              *pppplVar3 = (long ***)((long)*pppplVar3 + 1);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          ppppplVar12 = pppppplVar11[0x2a];
        }
        param_4 = (long ******)pppppplVar11[3];
        func_0x0001090e4548(pppplVar17);
        FUN_109097138(pppplVar17);
        FUN_1090df5e4(pppppplVar11);
      }
      if (pppppplVar11[0x18] != (long *****)0x0) {
        ppppplVar15 = pppppplVar11[0x19];
        if (ppppplVar15 < (long *****)0x80) {
          if (ppppplVar15 != (long *****)0x0) {
            lVar20 = 8;
            for (ppppplVar12 = (long *****)0x0; ppppplVar12 != ppppplVar15;
                ppppplVar12 = (long *****)((long)ppppplVar12 + 1)) {
              if (-1 < *(char *)((long)pppppplVar11[0x16] + (long)ppppplVar12)) {
                FUN_1090e0834((long)pppppplVar11[0x17] + lVar20);
                ppppplVar15 = pppppplVar11[0x19];
              }
              lVar20 = lVar20 + 0x10;
            }
            pppppplVar11[0x18] = (long *****)0x0;
            ppppplVar12 = ppppplVar15 + 1;
            param_4 = (long ******)0x80;
            _memset(pppppplVar11[0x16]);
            *(undefined1 *)((long)pppppplVar11[0x16] + (long)ppppplVar15) = 0xff;
            ppppplVar15 = pppppplVar11[0x19];
            lVar20 = 6;
            if (ppppplVar15 != (long *****)0x7) {
              lVar20 = (long)ppppplVar15 - ((ulong)ppppplVar15 >> 3);
            }
            pppppplVar11[0x1b] = (long *****)(lVar20 - (long)pppppplVar11[0x18]);
          }
        }
        else {
          FUN_1090e03d8(pppppplVar11 + 0x16);
        }
      }
      ppppplVar15 = (long *****)0x0;
      pppplStack_a0 = (long ****)pppppplVar11[0x28];
      ppppplVar16 = pppppplVar11[0x29];
      pppppplVar1 = pppppplVar11 + 0x25;
      do {
        uVar10 = pppppplVar11[0x24] >= ppppplVar15 && (long *****)pppplStack_a0 == ppppplVar16;
        if (pppppplVar11[0x24] < ppppplVar15 || ppppplVar16 <= pppplStack_a0) break;
        param_4 = (long ******)&pppplStack_a0;
        FUN_1090e01e4(pppppplVar11 + 0x10);
        func_0x0001090e10b4(pppppplVar11[0x10]);
        if ((bool)uVar10) break;
        pppppplVar13 = (long ******)param_4[1];
        if ((pppppplVar13 != (long ******)0x0) && (pppppplVar13[2] != (long *****)0x0)) {
          do {
            func_0x0001090e0fc4();
            pppppplVar13 = extraout_x8_00;
          } while (extraout_w11 != 0);
        }
        ppppplStack_a8 = (long *****)pppppplVar13;
        FUN_1090df900(pppppplVar11 + 0x16,&pppplStack_a0);
        param_4 = &ppppplStack_a8;
        FUN_1090df928();
        pppplStack_a0 = (long ****)((long)pppplStack_a0 + 1);
        if (((ulong)ppppplStack_a8[0x1f] & 1) == 0) {
          func_0x0001090e178c();
          bVar21 = 1;
        }
        else {
          if (*(char *)(pppppplVar11 + 0xd) == '\x01') {
            pppppplVar13 = (long ******)ppppplStack_a8;
            if (((ulong)ppppplStack_a8[0x1f] & 1) == 0) goto LAB_1090dfd8c;
            param_4 = (long ******)ppppplStack_a8[0x1e];
            func_0x0001090dce54(ppppplStack_a8[7]);
          }
          FUN_1090e1494(&ppppplStack_98,ppppplStack_a8);
          bVar21 = bStack_70;
          lVar20 = lStack_80;
          ppppplVar9 = ppppplStack_98;
          ppppplVar15 = (long *****)(lStack_80 + (long)ppppplVar15);
          if ((bStack_70 & 1) == 0) {
            if (*(char *)(pppppplVar11 + 0xd) == '\x01') {
              pppppplVar13 = (long ******)ppppplStack_a8;
              if (((ulong)ppppplStack_a8[0x1f] & 1) == 0) goto LAB_1090dfd8c;
              pppppplVar13 = (long ******)(ppppplStack_a8 + 0x1e);
LAB_1090dfc2c:
              ppppplVar14 = *pppppplVar13;
              if (ppppplVar14 == (long *****)0x0) goto LAB_1090dfc74;
              *(undefined1 *)((long)pppppplVar11 + 0x15b) = 1;
              pppplVar17 = (long ****)ppppplStack_a8[7][3];
              uVar19 = 0;
              if (pppplVar17 != (long ****)0x0) {
                uVar19 = (ulong)(lStack_88 + (long)ppppplStack_98) / (ulong)pppplVar17;
              }
              param_4 = (long ******)(uVar19 * (long)pppplVar17);
              ppppplVar12 = (long *****)((long)pppplStack_78 - (long)param_4);
              if ((long *****)((long)param_4 + (long)ppppplVar14) <= pppplStack_78) {
                ppppplVar12 = ppppplVar14;
              }
              func_0x0001090e19d8();
            }
            else {
              pppppplVar13 = pppppplVar1;
              if (*(int *)(ppppplStack_a8 + 0x1b) == 1) goto LAB_1090dfc2c;
              if (*(int *)(ppppplStack_a8 + 0x1b) == 0) {
                lVar2 = 0x120;
                if (*(char *)((long)pppppplVar11 + 0x15b) == '\0') {
                  lVar2 = 0x118;
                }
                if (ppppplVar15 < *(long ******)((long)pppppplVar11 + lVar2)) goto LAB_1090dfc2c;
              }
LAB_1090dfc74:
              *(undefined1 *)((long)pppppplVar11 + 0x15b) = 0;
            }
            pppplVar17 = (long ****)ppppplStack_a8[7][2];
            pppplVar3 = (long ****)ppppplStack_a8[7][3];
            ppplVar6 = (long ***)0x0;
            if (pppplVar3 != (long ****)0x0) {
              ppplVar6 = (long ***)((ulong)ppppplVar9 / (ulong)pppplVar3);
            }
            ppplVar7 = (long ***)0x0;
            if (pppplVar3 != (long ****)0x0) {
              ppplVar7 = (long ***)
                         ((ulong)((long)ppppplStack_90 +
                                 (long)*pppppplVar1 + (long)pppplVar3 + lVar20 + -1) /
                         (ulong)pppplVar3);
            }
            pppplVar17[6] = ppplVar6;
            pppplVar17[7] = ppplVar7;
          }
          bVar21 = bVar21 ^ 1;
        }
        FUN_1090e0858(ppppplStack_a8);
      } while (bVar21 == 0);
      pppppplVar13 = pppppplVar11 + 0x1c;
      FUN_1090df780();
      ppppplVar15 = pppppplVar11[0x1c];
      ppppplVar16 = pppppplVar11[0x1f];
      ppppplStack_98 = (long *****)pppppplVar13;
      ppppplStack_90 = (long *****)param_4;
      while (ppppplVar9 = ppppplStack_90,
            uVar10 = (long ******)ppppplStack_98 ==
                     (long ******)((long)ppppplVar15 + (long)ppppplVar16), !(bool)uVar10) {
        FUN_1090e01e4(pppppplVar11 + 0x16,ppppplStack_90);
        func_0x0001090e10b4(pppppplVar11[0x16]);
        if ((bool)uVar10) {
          FUN_1090e1298(ppppplVar9[1]);
          pppplVar17 = (long ****)ppppplVar9[1][7];
          ppplVar6 = pppplVar17[2];
          ppplVar7 = pppplVar17[3];
          pplVar8 = (long **)0x0;
          if (ppplVar7 != (long ***)0x0) {
            pplVar8 = (long **)(((long)ppplVar7 - 1U) / (ulong)ppplVar7);
          }
          ppplVar6[6] = (long **)0x0;
          ppplVar6[7] = pplVar8;
        }
        FUN_1090df7ac(&ppppplStack_98);
      }
      FUN_1090dddec(pppppplVar11[0xe]);
      FUN_1090e0454(&ppppplStack_98,pppppplVar11 + 0x1c);
      FUN_1090e0490(pppppplVar11 + 0x1c,pppppplVar11 + 0x16);
      FUN_1090e0490(pppppplVar11 + 0x16,&ppppplStack_98);
      pppppplVar13 = &ppppplStack_98;
      FUN_1090e03d8();
    }
  }
  else {
    *(undefined1 *)((long)pppppplVar11 + 0x159) = 1;
  }
  func_0x0001090e0fb0(uStack_68);
  if ((bool)uVar10) {
    return;
  }
  ___stack_chk_fail();
LAB_1090dfd8c:
  func_0x0001080da3e4();
  func_0x0001090dfdec();
  ppppplVar15 = *pppppplVar13;
  pppplVar17 = *ppppplVar12;
  if ((pppplVar17 != (long ****)0x0) && (pppplVar17[2] != (long ***)0x0)) {
    ppplVar6 = pppplVar17[2] + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ppplVar6,0x10);
      if (bVar5) {
        *ppplVar6 = (long **)((long)*ppplVar6 + 1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  func_0x0001090e1064(ppppplVar15);
  if (pppplVar17 != (long ****)0x0) {
    func_0x0001090e1058();
  }
  return;
}



/* Entry: 10909c6e4; end: 10909c6ef; -[SCNeoMediaDataManager setCurrentMediaByteOffset:forSourceIndex:] */

void FUN_10909c6e4(long param_1,undefined8 param_2,long *****param_3,long ******param_4)

{
  long ******pppppplVar1;
  long lVar2;
  long ****pppplVar3;
  char cVar4;
  bool bVar5;
  long ***ppplVar6;
  long ***ppplVar7;
  long **pplVar8;
  long *****ppppplVar9;
  undefined1 uVar10;
  long ******pppppplVar11;
  undefined8 extraout_x8;
  long ******pppppplVar12;
  long ******extraout_x8_00;
  long *****ppppplVar13;
  long *****ppppplVar14;
  long *****ppppplVar15;
  long ****pppplVar16;
  int extraout_w11;
  long *****ppppplVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  byte bVar21;
  long *****ppppplStack_a8;
  long ****pppplStack_a0;
  long *****ppppplStack_98;
  long *****ppppplStack_90;
  long lStack_88;
  long lStack_80;
  long ****pppplStack_78;
  byte bStack_70;
  undefined8 uStack_68;
  
  pppppplVar11 = *(long *******)(param_1 + 8);
  pppppplVar12 = pppppplVar11;
  ppppplVar17 = param_3;
  func_0x0001090dfdec();
  ppppplVar14 = *pppppplVar12;
  ppppplVar14[0x1c] = (long ****)param_3;
  ppppplVar14[0x1d] = (long ****)param_3;
  pppppplVar12 = pppppplVar11;
  func_0x0001090e0fd4();
  uVar10 = *(int *)(pppppplVar12 + 0x27) == 1;
  uStack_68 = extraout_x8;
  if (*(int *)(pppppplVar12 + 0x27) < 1) {
    uVar10 = 0;
    if (*(char *)(pppppplVar11 + 0x2b) == '\x01') {
      if (*(char *)((long)pppppplVar11 + 0x15a) == '\x01') {
        uVar18 = 0;
        uVar19 = 0;
        *(undefined1 *)((long)pppppplVar11 + 0x15a) = 0;
        for (ppppplVar17 = pppppplVar11[0x28]; ppppplVar17 < pppppplVar11[0x29];
            ppppplVar17 = (long *****)((long)ppppplVar17 + 1)) {
          pppppplVar12 = pppppplVar11;
          func_0x0001090dfdec(pppppplVar11,ppppplVar17);
          uVar19 = (long)(*pppppplVar12)[0x22] + uVar19;
          if ((*pppppplVar12)[0x22] != (long ****)0x0) {
            uVar18 = uVar18 + 1;
          }
        }
        if (uVar18 == 0) {
          ppppplVar17 = (long *****)0x0;
        }
        else {
          ppppplVar17 = (long *****)0x0;
          if (uVar18 != 0) {
            ppppplVar17 = (long *****)(uVar19 / uVar18);
          }
        }
        pppppplVar11[0x2a] = ppppplVar17;
        pppplVar16 = pppppplVar11[0xf][7];
        if (pppplVar16 != (long ****)0x0) {
          pppplVar3 = pppplVar16 + 1;
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(pppplVar3,0x10);
            if (bVar5) {
              *pppplVar3 = (long ***)((long)*pppplVar3 + 1);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          ppppplVar17 = pppppplVar11[0x2a];
        }
        param_4 = (long ******)pppppplVar11[3];
        func_0x0001090e4548(pppplVar16);
        FUN_109097138(pppplVar16);
        FUN_1090df5e4(pppppplVar11);
      }
      if (pppppplVar11[0x18] != (long *****)0x0) {
        ppppplVar14 = pppppplVar11[0x19];
        if (ppppplVar14 < (long *****)0x80) {
          if (ppppplVar14 != (long *****)0x0) {
            lVar20 = 8;
            for (ppppplVar17 = (long *****)0x0; ppppplVar17 != ppppplVar14;
                ppppplVar17 = (long *****)((long)ppppplVar17 + 1)) {
              if (-1 < *(char *)((long)pppppplVar11[0x16] + (long)ppppplVar17)) {
                FUN_1090e0834((long)pppppplVar11[0x17] + lVar20);
                ppppplVar14 = pppppplVar11[0x19];
              }
              lVar20 = lVar20 + 0x10;
            }
            pppppplVar11[0x18] = (long *****)0x0;
            ppppplVar17 = ppppplVar14 + 1;
            param_4 = (long ******)0x80;
            _memset(pppppplVar11[0x16]);
            *(undefined1 *)((long)pppppplVar11[0x16] + (long)ppppplVar14) = 0xff;
            ppppplVar14 = pppppplVar11[0x19];
            lVar20 = 6;
            if (ppppplVar14 != (long *****)0x7) {
              lVar20 = (long)ppppplVar14 - ((ulong)ppppplVar14 >> 3);
            }
            pppppplVar11[0x1b] = (long *****)(lVar20 - (long)pppppplVar11[0x18]);
          }
        }
        else {
          FUN_1090e03d8(pppppplVar11 + 0x16);
        }
      }
      ppppplVar14 = (long *****)0x0;
      pppplStack_a0 = (long ****)pppppplVar11[0x28];
      ppppplVar15 = pppppplVar11[0x29];
      pppppplVar1 = pppppplVar11 + 0x25;
      do {
        uVar10 = pppppplVar11[0x24] >= ppppplVar14 && (long *****)pppplStack_a0 == ppppplVar15;
        if (pppppplVar11[0x24] < ppppplVar14 || ppppplVar15 <= pppplStack_a0) break;
        param_4 = (long ******)&pppplStack_a0;
        FUN_1090e01e4(pppppplVar11 + 0x10);
        func_0x0001090e10b4(pppppplVar11[0x10]);
        if ((bool)uVar10) break;
        pppppplVar12 = (long ******)param_4[1];
        if ((pppppplVar12 != (long ******)0x0) && (pppppplVar12[2] != (long *****)0x0)) {
          do {
            func_0x0001090e0fc4();
            pppppplVar12 = extraout_x8_00;
          } while (extraout_w11 != 0);
        }
        ppppplStack_a8 = (long *****)pppppplVar12;
        FUN_1090df900(pppppplVar11 + 0x16,&pppplStack_a0);
        param_4 = &ppppplStack_a8;
        FUN_1090df928();
        pppplStack_a0 = (long ****)((long)pppplStack_a0 + 1);
        if (((ulong)ppppplStack_a8[0x1f] & 1) == 0) {
          func_0x0001090e178c();
          bVar21 = 1;
        }
        else {
          if (*(char *)(pppppplVar11 + 0xd) == '\x01') {
            pppppplVar12 = (long ******)ppppplStack_a8;
            if (((ulong)ppppplStack_a8[0x1f] & 1) == 0) goto LAB_1090dfd8c;
            param_4 = (long ******)ppppplStack_a8[0x1e];
            func_0x0001090dce54(ppppplStack_a8[7]);
          }
          FUN_1090e1494(&ppppplStack_98,ppppplStack_a8);
          bVar21 = bStack_70;
          lVar20 = lStack_80;
          ppppplVar9 = ppppplStack_98;
          ppppplVar14 = (long *****)(lStack_80 + (long)ppppplVar14);
          if ((bStack_70 & 1) == 0) {
            if (*(char *)(pppppplVar11 + 0xd) == '\x01') {
              pppppplVar12 = (long ******)ppppplStack_a8;
              if (((ulong)ppppplStack_a8[0x1f] & 1) == 0) goto LAB_1090dfd8c;
              pppppplVar12 = (long ******)(ppppplStack_a8 + 0x1e);
LAB_1090dfc2c:
              ppppplVar13 = *pppppplVar12;
              if (ppppplVar13 == (long *****)0x0) goto LAB_1090dfc74;
              *(undefined1 *)((long)pppppplVar11 + 0x15b) = 1;
              pppplVar16 = (long ****)ppppplStack_a8[7][3];
              uVar19 = 0;
              if (pppplVar16 != (long ****)0x0) {
                uVar19 = (ulong)(lStack_88 + (long)ppppplStack_98) / (ulong)pppplVar16;
              }
              param_4 = (long ******)(uVar19 * (long)pppplVar16);
              ppppplVar17 = (long *****)((long)pppplStack_78 - (long)param_4);
              if ((long *****)((long)param_4 + (long)ppppplVar13) <= pppplStack_78) {
                ppppplVar17 = ppppplVar13;
              }
              func_0x0001090e19d8();
            }
            else {
              pppppplVar12 = pppppplVar1;
              if (*(int *)(ppppplStack_a8 + 0x1b) == 1) goto LAB_1090dfc2c;
              if (*(int *)(ppppplStack_a8 + 0x1b) == 0) {
                lVar2 = 0x120;
                if (*(char *)((long)pppppplVar11 + 0x15b) == '\0') {
                  lVar2 = 0x118;
                }
                if (ppppplVar14 < *(long ******)((long)pppppplVar11 + lVar2)) goto LAB_1090dfc2c;
              }
LAB_1090dfc74:
              *(undefined1 *)((long)pppppplVar11 + 0x15b) = 0;
            }
            pppplVar16 = (long ****)ppppplStack_a8[7][2];
            pppplVar3 = (long ****)ppppplStack_a8[7][3];
            ppplVar6 = (long ***)0x0;
            if (pppplVar3 != (long ****)0x0) {
              ppplVar6 = (long ***)((ulong)ppppplVar9 / (ulong)pppplVar3);
            }
            ppplVar7 = (long ***)0x0;
            if (pppplVar3 != (long ****)0x0) {
              ppplVar7 = (long ***)
                         ((ulong)((long)ppppplStack_90 +
                                 (long)*pppppplVar1 + (long)pppplVar3 + lVar20 + -1) /
                         (ulong)pppplVar3);
            }
            pppplVar16[6] = ppplVar6;
            pppplVar16[7] = ppplVar7;
          }
          bVar21 = bVar21 ^ 1;
        }
        FUN_1090e0858(ppppplStack_a8);
      } while (bVar21 == 0);
      pppppplVar12 = pppppplVar11 + 0x1c;
      FUN_1090df780();
      ppppplVar14 = pppppplVar11[0x1c];
      ppppplVar15 = pppppplVar11[0x1f];
      ppppplStack_98 = (long *****)pppppplVar12;
      ppppplStack_90 = (long *****)param_4;
      while (ppppplVar9 = ppppplStack_90,
            uVar10 = (long ******)ppppplStack_98 ==
                     (long ******)((long)ppppplVar14 + (long)ppppplVar15), !(bool)uVar10) {
        FUN_1090e01e4(pppppplVar11 + 0x16,ppppplStack_90);
        func_0x0001090e10b4(pppppplVar11[0x16]);
        if ((bool)uVar10) {
          FUN_1090e1298(ppppplVar9[1]);
          pppplVar16 = (long ****)ppppplVar9[1][7];
          ppplVar6 = pppplVar16[2];
          ppplVar7 = pppplVar16[3];
          pplVar8 = (long **)0x0;
          if (ppplVar7 != (long ***)0x0) {
            pplVar8 = (long **)(((long)ppplVar7 - 1U) / (ulong)ppplVar7);
          }
          ppplVar6[6] = (long **)0x0;
          ppplVar6[7] = pplVar8;
        }
        FUN_1090df7ac(&ppppplStack_98);
      }
      FUN_1090dddec(pppppplVar11[0xe]);
      FUN_1090e0454(&ppppplStack_98,pppppplVar11 + 0x1c);
      FUN_1090e0490(pppppplVar11 + 0x1c,pppppplVar11 + 0x16);
      FUN_1090e0490(pppppplVar11 + 0x16,&ppppplStack_98);
      pppppplVar12 = &ppppplStack_98;
      FUN_1090e03d8();
    }
  }
  else {
    *(undefined1 *)((long)pppppplVar11 + 0x159) = 1;
  }
  func_0x0001090e0fb0(uStack_68);
  if ((bool)uVar10) {
    return;
  }
  ___stack_chk_fail();
LAB_1090dfd8c:
  func_0x0001080da3e4();
  func_0x0001090dfdec();
  ppppplVar14 = *pppppplVar12;
  pppplVar16 = *ppppplVar17;
  if ((pppplVar16 != (long ****)0x0) && (pppplVar16[2] != (long ***)0x0)) {
    ppplVar6 = pppplVar16[2] + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ppplVar6,0x10);
      if (bVar5) {
        *ppplVar6 = (long **)((long)*ppplVar6 + 1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  func_0x0001090e1064(ppppplVar14);
  if (pppplVar16 != (long ****)0x0) {
    func_0x0001090e1058();
  }
  return;
}



/* Entry: 10909c6f0; end: 10909c6fb; -[SCNeoMediaDataManager setCurrentMediaByteRangeStart:byteRangeEnd:forSourceIndex:] */

void FUN_10909c6f0(long param_1,undefined8 param_2,long *****param_3,long ****param_4,
                  long ******param_5)

{
  long ******pppppplVar1;
  long lVar2;
  long ****pppplVar3;
  char cVar4;
  bool bVar5;
  long ***ppplVar6;
  long ***ppplVar7;
  long **pplVar8;
  long *****ppppplVar9;
  undefined1 uVar10;
  long ******pppppplVar11;
  undefined8 extraout_x8;
  long ******pppppplVar12;
  long ******extraout_x8_00;
  long *****ppppplVar13;
  long *****ppppplVar14;
  long *****ppppplVar15;
  long ****pppplVar16;
  int extraout_w11;
  long *****ppppplVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  byte bVar21;
  long *****ppppplStack_a8;
  long ****pppplStack_a0;
  long *****ppppplStack_98;
  long *****ppppplStack_90;
  long lStack_88;
  long lStack_80;
  long ****pppplStack_78;
  byte bStack_70;
  undefined8 uStack_68;
  
  pppppplVar11 = *(long *******)(param_1 + 8);
  pppppplVar12 = pppppplVar11;
  ppppplVar17 = param_3;
  func_0x0001090dfdec();
  ppppplVar14 = *pppppplVar12;
  ppppplVar14[0x1c] = (long ****)param_3;
  ppppplVar14[0x1d] = param_4;
  pppppplVar12 = pppppplVar11;
  func_0x0001090e0fd4();
  uVar10 = *(int *)(pppppplVar12 + 0x27) == 1;
  uStack_68 = extraout_x8;
  if (*(int *)(pppppplVar12 + 0x27) < 1) {
    uVar10 = 0;
    if (*(char *)(pppppplVar11 + 0x2b) == '\x01') {
      if (*(char *)((long)pppppplVar11 + 0x15a) == '\x01') {
        uVar18 = 0;
        uVar19 = 0;
        *(undefined1 *)((long)pppppplVar11 + 0x15a) = 0;
        for (ppppplVar17 = pppppplVar11[0x28]; ppppplVar17 < pppppplVar11[0x29];
            ppppplVar17 = (long *****)((long)ppppplVar17 + 1)) {
          pppppplVar12 = pppppplVar11;
          func_0x0001090dfdec(pppppplVar11,ppppplVar17);
          uVar19 = (long)(*pppppplVar12)[0x22] + uVar19;
          if ((*pppppplVar12)[0x22] != (long ****)0x0) {
            uVar18 = uVar18 + 1;
          }
        }
        if (uVar18 == 0) {
          ppppplVar17 = (long *****)0x0;
        }
        else {
          ppppplVar17 = (long *****)0x0;
          if (uVar18 != 0) {
            ppppplVar17 = (long *****)(uVar19 / uVar18);
          }
        }
        pppppplVar11[0x2a] = ppppplVar17;
        pppplVar16 = pppppplVar11[0xf][7];
        if (pppplVar16 != (long ****)0x0) {
          pppplVar3 = pppplVar16 + 1;
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(pppplVar3,0x10);
            if (bVar5) {
              *pppplVar3 = (long ***)((long)*pppplVar3 + 1);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          ppppplVar17 = pppppplVar11[0x2a];
        }
        param_5 = (long ******)pppppplVar11[3];
        func_0x0001090e4548(pppplVar16);
        FUN_109097138(pppplVar16);
        FUN_1090df5e4(pppppplVar11);
      }
      if (pppppplVar11[0x18] != (long *****)0x0) {
        ppppplVar14 = pppppplVar11[0x19];
        if (ppppplVar14 < (long *****)0x80) {
          if (ppppplVar14 != (long *****)0x0) {
            lVar20 = 8;
            for (ppppplVar17 = (long *****)0x0; ppppplVar17 != ppppplVar14;
                ppppplVar17 = (long *****)((long)ppppplVar17 + 1)) {
              if (-1 < *(char *)((long)pppppplVar11[0x16] + (long)ppppplVar17)) {
                FUN_1090e0834((long)pppppplVar11[0x17] + lVar20);
                ppppplVar14 = pppppplVar11[0x19];
              }
              lVar20 = lVar20 + 0x10;
            }
            pppppplVar11[0x18] = (long *****)0x0;
            ppppplVar17 = ppppplVar14 + 1;
            param_5 = (long ******)0x80;
            _memset(pppppplVar11[0x16]);
            *(undefined1 *)((long)pppppplVar11[0x16] + (long)ppppplVar14) = 0xff;
            ppppplVar14 = pppppplVar11[0x19];
            lVar20 = 6;
            if (ppppplVar14 != (long *****)0x7) {
              lVar20 = (long)ppppplVar14 - ((ulong)ppppplVar14 >> 3);
            }
            pppppplVar11[0x1b] = (long *****)(lVar20 - (long)pppppplVar11[0x18]);
          }
        }
        else {
          FUN_1090e03d8(pppppplVar11 + 0x16);
        }
      }
      ppppplVar14 = (long *****)0x0;
      pppplStack_a0 = (long ****)pppppplVar11[0x28];
      ppppplVar15 = pppppplVar11[0x29];
      pppppplVar1 = pppppplVar11 + 0x25;
      do {
        uVar10 = pppppplVar11[0x24] >= ppppplVar14 && (long *****)pppplStack_a0 == ppppplVar15;
        if (pppppplVar11[0x24] < ppppplVar14 || ppppplVar15 <= pppplStack_a0) break;
        param_5 = (long ******)&pppplStack_a0;
        FUN_1090e01e4(pppppplVar11 + 0x10);
        func_0x0001090e10b4(pppppplVar11[0x10]);
        if ((bool)uVar10) break;
        pppppplVar12 = (long ******)param_5[1];
        if ((pppppplVar12 != (long ******)0x0) && (pppppplVar12[2] != (long *****)0x0)) {
          do {
            func_0x0001090e0fc4();
            pppppplVar12 = extraout_x8_00;
          } while (extraout_w11 != 0);
        }
        ppppplStack_a8 = (long *****)pppppplVar12;
        FUN_1090df900(pppppplVar11 + 0x16,&pppplStack_a0);
        param_5 = &ppppplStack_a8;
        FUN_1090df928();
        pppplStack_a0 = (long ****)((long)pppplStack_a0 + 1);
        if (((ulong)ppppplStack_a8[0x1f] & 1) == 0) {
          func_0x0001090e178c();
          bVar21 = 1;
        }
        else {
          if (*(char *)(pppppplVar11 + 0xd) == '\x01') {
            pppppplVar12 = (long ******)ppppplStack_a8;
            if (((ulong)ppppplStack_a8[0x1f] & 1) == 0) goto LAB_1090dfd8c;
            param_5 = (long ******)ppppplStack_a8[0x1e];
            func_0x0001090dce54(ppppplStack_a8[7]);
          }
          FUN_1090e1494(&ppppplStack_98,ppppplStack_a8);
          bVar21 = bStack_70;
          lVar20 = lStack_80;
          ppppplVar9 = ppppplStack_98;
          ppppplVar14 = (long *****)(lStack_80 + (long)ppppplVar14);
          if ((bStack_70 & 1) == 0) {
            if (*(char *)(pppppplVar11 + 0xd) == '\x01') {
              pppppplVar12 = (long ******)ppppplStack_a8;
              if (((ulong)ppppplStack_a8[0x1f] & 1) == 0) goto LAB_1090dfd8c;
              pppppplVar12 = (long ******)(ppppplStack_a8 + 0x1e);
LAB_1090dfc2c:
              ppppplVar13 = *pppppplVar12;
              if (ppppplVar13 == (long *****)0x0) goto LAB_1090dfc74;
              *(undefined1 *)((long)pppppplVar11 + 0x15b) = 1;
              pppplVar16 = (long ****)ppppplStack_a8[7][3];
              uVar19 = 0;
              if (pppplVar16 != (long ****)0x0) {
                uVar19 = (ulong)(lStack_88 + (long)ppppplStack_98) / (ulong)pppplVar16;
              }
              param_5 = (long ******)(uVar19 * (long)pppplVar16);
              ppppplVar17 = (long *****)((long)pppplStack_78 - (long)param_5);
              if ((long *****)((long)param_5 + (long)ppppplVar13) <= pppplStack_78) {
                ppppplVar17 = ppppplVar13;
              }
              func_0x0001090e19d8();
            }
            else {
              pppppplVar12 = pppppplVar1;
              if (*(int *)(ppppplStack_a8 + 0x1b) == 1) goto LAB_1090dfc2c;
              if (*(int *)(ppppplStack_a8 + 0x1b) == 0) {
                lVar2 = 0x120;
                if (*(char *)((long)pppppplVar11 + 0x15b) == '\0') {
                  lVar2 = 0x118;
                }
                if (ppppplVar14 < *(long ******)((long)pppppplVar11 + lVar2)) goto LAB_1090dfc2c;
              }
LAB_1090dfc74:
              *(undefined1 *)((long)pppppplVar11 + 0x15b) = 0;
            }
            pppplVar16 = (long ****)ppppplStack_a8[7][2];
            pppplVar3 = (long ****)ppppplStack_a8[7][3];
            ppplVar6 = (long ***)0x0;
            if (pppplVar3 != (long ****)0x0) {
              ppplVar6 = (long ***)((ulong)ppppplVar9 / (ulong)pppplVar3);
            }
            ppplVar7 = (long ***)0x0;
            if (pppplVar3 != (long ****)0x0) {
              ppplVar7 = (long ***)
                         ((ulong)((long)ppppplStack_90 +
                                 (long)*pppppplVar1 + (long)pppplVar3 + lVar20 + -1) /
                         (ulong)pppplVar3);
            }
            pppplVar16[6] = ppplVar6;
            pppplVar16[7] = ppplVar7;
          }
          bVar21 = bVar21 ^ 1;
        }
        FUN_1090e0858(ppppplStack_a8);
      } while (bVar21 == 0);
      pppppplVar12 = pppppplVar11 + 0x1c;
      FUN_1090df780();
      ppppplVar14 = pppppplVar11[0x1c];
      ppppplVar15 = pppppplVar11[0x1f];
      ppppplStack_98 = (long *****)pppppplVar12;
      ppppplStack_90 = (long *****)param_5;
      while (ppppplVar9 = ppppplStack_90,
            uVar10 = (long ******)ppppplStack_98 ==
                     (long ******)((long)ppppplVar14 + (long)ppppplVar15), !(bool)uVar10) {
        FUN_1090e01e4(pppppplVar11 + 0x16,ppppplStack_90);
        func_0x0001090e10b4(pppppplVar11[0x16]);
        if ((bool)uVar10) {
          FUN_1090e1298(ppppplVar9[1]);
          pppplVar16 = (long ****)ppppplVar9[1][7];
          ppplVar6 = pppplVar16[2];
          ppplVar7 = pppplVar16[3];
          pplVar8 = (long **)0x0;
          if (ppplVar7 != (long ***)0x0) {
            pplVar8 = (long **)(((long)ppplVar7 - 1U) / (ulong)ppplVar7);
          }
          ppplVar6[6] = (long **)0x0;
          ppplVar6[7] = pplVar8;
        }
        FUN_1090df7ac(&ppppplStack_98);
      }
      FUN_1090dddec(pppppplVar11[0xe]);
      FUN_1090e0454(&ppppplStack_98,pppppplVar11 + 0x1c);
      FUN_1090e0490(pppppplVar11 + 0x1c,pppppplVar11 + 0x16);
      FUN_1090e0490(pppppplVar11 + 0x16,&ppppplStack_98);
      pppppplVar12 = &ppppplStack_98;
      FUN_1090e03d8();
    }
  }
  else {
    *(undefined1 *)((long)pppppplVar11 + 0x159) = 1;
  }
  func_0x0001090e0fb0(uStack_68);
  if ((bool)uVar10) {
    return;
  }
  ___stack_chk_fail();
LAB_1090dfd8c:
  func_0x0001080da3e4();
  func_0x0001090dfdec();
  ppppplVar14 = *pppppplVar12;
  pppplVar16 = *ppppplVar17;
  if ((pppplVar16 != (long ****)0x0) && (pppplVar16[2] != (long ***)0x0)) {
    ppplVar6 = pppplVar16[2] + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ppplVar6,0x10);
      if (bVar5) {
        *ppplVar6 = (long **)((long)*ppplVar6 + 1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  func_0x0001090e1064(ppppplVar14);
  if (pppplVar16 != (long ****)0x0) {
    func_0x0001090e1058();
  }
  return;
}



/* Entry: 10909c6fc; end: 10909c707; -[SCNeoMediaDataManager setTotalFileSize:forSourceIndex:] */

void FUN_10909c6fc(long param_1,undefined8 param_2,long ******param_3,undefined8 param_4)

{
  long ******pppppplVar1;
  long lVar2;
  long ****pppplVar3;
  char cVar4;
  bool bVar5;
  long ***ppplVar6;
  long ***ppplVar7;
  long **pplVar8;
  long *****ppppplVar9;
  undefined1 uVar10;
  long ******pppppplVar11;
  long ******pppppplVar12;
  undefined8 extraout_x8;
  long ******pppppplVar13;
  long ******extraout_x8_00;
  long *****ppppplVar14;
  long *****ppppplVar15;
  int extraout_w11;
  long ****pppplVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  byte bVar20;
  long *****ppppplStack_a8;
  long ****pppplStack_a0;
  long *****ppppplStack_98;
  long *****ppppplStack_90;
  long lStack_88;
  long lStack_80;
  long *****ppppplStack_78;
  byte bStack_70;
  undefined8 uStack_68;
  
  pppppplVar11 = *(long *******)(param_1 + 8);
  pppppplVar13 = pppppplVar11;
  pppppplVar12 = param_3;
  func_0x0001090dfdec(pppppplVar11,param_4);
  FUN_1090e11d8(*pppppplVar13);
  pppppplVar13 = pppppplVar11;
  func_0x0001090e0fd4();
  uVar10 = *(int *)(pppppplVar13 + 0x27) == 1;
  uStack_68 = extraout_x8;
  if (*(int *)(pppppplVar13 + 0x27) < 1) {
    uVar10 = 0;
    if (*(char *)(pppppplVar11 + 0x2b) == '\x01') {
      if (*(char *)((long)pppppplVar11 + 0x15a) == '\x01') {
        uVar17 = 0;
        uVar18 = 0;
        *(undefined1 *)((long)pppppplVar11 + 0x15a) = 0;
        for (ppppplVar14 = pppppplVar11[0x28]; ppppplVar14 < pppppplVar11[0x29];
            ppppplVar14 = (long *****)((long)ppppplVar14 + 1)) {
          pppppplVar12 = pppppplVar11;
          func_0x0001090dfdec(pppppplVar11,ppppplVar14);
          uVar18 = (long)(*pppppplVar12)[0x22] + uVar18;
          if ((*pppppplVar12)[0x22] != (long ****)0x0) {
            uVar17 = uVar17 + 1;
          }
        }
        if (uVar17 == 0) {
          pppppplVar12 = (long ******)0x0;
        }
        else {
          pppppplVar12 = (long ******)0x0;
          if (uVar17 != 0) {
            pppppplVar12 = (long ******)(uVar18 / uVar17);
          }
        }
        pppppplVar11[0x2a] = (long *****)pppppplVar12;
        pppplVar16 = pppppplVar11[0xf][7];
        if (pppplVar16 != (long ****)0x0) {
          pppplVar3 = pppplVar16 + 1;
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(pppplVar3,0x10);
            if (bVar5) {
              *pppplVar3 = (long ***)((long)*pppplVar3 + 1);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          pppppplVar12 = (long ******)pppppplVar11[0x2a];
        }
        param_3 = (long ******)pppppplVar11[3];
        func_0x0001090e4548(pppplVar16);
        FUN_109097138(pppplVar16);
        FUN_1090df5e4(pppppplVar11);
      }
      if (pppppplVar11[0x18] != (long *****)0x0) {
        ppppplVar14 = pppppplVar11[0x19];
        if (ppppplVar14 < (long *****)0x80) {
          if (ppppplVar14 != (long *****)0x0) {
            lVar19 = 8;
            for (ppppplVar15 = (long *****)0x0; ppppplVar15 != ppppplVar14;
                ppppplVar15 = (long *****)((long)ppppplVar15 + 1)) {
              if (-1 < *(char *)((long)pppppplVar11[0x16] + (long)ppppplVar15)) {
                FUN_1090e0834((long)pppppplVar11[0x17] + lVar19);
                ppppplVar14 = pppppplVar11[0x19];
              }
              lVar19 = lVar19 + 0x10;
            }
            pppppplVar11[0x18] = (long *****)0x0;
            pppppplVar12 = (long ******)(ppppplVar14 + 1);
            param_3 = (long ******)0x80;
            _memset(pppppplVar11[0x16]);
            *(undefined1 *)((long)pppppplVar11[0x16] + (long)ppppplVar14) = 0xff;
            ppppplVar14 = pppppplVar11[0x19];
            lVar19 = 6;
            if (ppppplVar14 != (long *****)0x7) {
              lVar19 = (long)ppppplVar14 - ((ulong)ppppplVar14 >> 3);
            }
            pppppplVar11[0x1b] = (long *****)(lVar19 - (long)pppppplVar11[0x18]);
          }
        }
        else {
          FUN_1090e03d8(pppppplVar11 + 0x16);
        }
      }
      ppppplVar14 = (long *****)0x0;
      pppplStack_a0 = (long ****)pppppplVar11[0x28];
      ppppplVar15 = pppppplVar11[0x29];
      pppppplVar1 = pppppplVar11 + 0x25;
      do {
        uVar10 = pppppplVar11[0x24] >= ppppplVar14 && (long *****)pppplStack_a0 == ppppplVar15;
        if (pppppplVar11[0x24] < ppppplVar14 || ppppplVar15 <= pppplStack_a0) break;
        param_3 = (long ******)&pppplStack_a0;
        FUN_1090e01e4(pppppplVar11 + 0x10);
        func_0x0001090e10b4(pppppplVar11[0x10]);
        if ((bool)uVar10) break;
        pppppplVar13 = (long ******)param_3[1];
        if ((pppppplVar13 != (long ******)0x0) && (pppppplVar13[2] != (long *****)0x0)) {
          do {
            func_0x0001090e0fc4();
            pppppplVar13 = extraout_x8_00;
          } while (extraout_w11 != 0);
        }
        ppppplStack_a8 = (long *****)pppppplVar13;
        FUN_1090df900(pppppplVar11 + 0x16,&pppplStack_a0);
        param_3 = &ppppplStack_a8;
        FUN_1090df928();
        pppplStack_a0 = (long ****)((long)pppplStack_a0 + 1);
        if (((ulong)ppppplStack_a8[0x1f] & 1) == 0) {
          func_0x0001090e178c();
          bVar20 = 1;
        }
        else {
          if (*(char *)(pppppplVar11 + 0xd) == '\x01') {
            pppppplVar13 = (long ******)ppppplStack_a8;
            if (((ulong)ppppplStack_a8[0x1f] & 1) == 0) goto LAB_1090dfd8c;
            param_3 = (long ******)ppppplStack_a8[0x1e];
            func_0x0001090dce54(ppppplStack_a8[7]);
          }
          FUN_1090e1494(&ppppplStack_98,ppppplStack_a8);
          bVar20 = bStack_70;
          lVar19 = lStack_80;
          ppppplVar9 = ppppplStack_98;
          ppppplVar14 = (long *****)(lStack_80 + (long)ppppplVar14);
          if ((bStack_70 & 1) == 0) {
            if (*(char *)(pppppplVar11 + 0xd) == '\x01') {
              pppppplVar13 = (long ******)ppppplStack_a8;
              if (((ulong)ppppplStack_a8[0x1f] & 1) == 0) goto LAB_1090dfd8c;
              pppppplVar13 = (long ******)(ppppplStack_a8 + 0x1e);
LAB_1090dfc2c:
              pppppplVar13 = (long ******)*pppppplVar13;
              if (pppppplVar13 == (long ******)0x0) goto LAB_1090dfc74;
              *(undefined1 *)((long)pppppplVar11 + 0x15b) = 1;
              pppplVar16 = (long ****)ppppplStack_a8[7][3];
              uVar18 = 0;
              if (pppplVar16 != (long ****)0x0) {
                uVar18 = (ulong)(lStack_88 + (long)ppppplStack_98) / (ulong)pppplVar16;
              }
              param_3 = (long ******)(uVar18 * (long)pppplVar16);
              pppppplVar12 = (long ******)((long)ppppplStack_78 - (long)param_3);
              if ((long ******)((long)param_3 + (long)pppppplVar13) <= ppppplStack_78) {
                pppppplVar12 = pppppplVar13;
              }
              func_0x0001090e19d8();
            }
            else {
              pppppplVar13 = pppppplVar1;
              if (*(int *)(ppppplStack_a8 + 0x1b) == 1) goto LAB_1090dfc2c;
              if (*(int *)(ppppplStack_a8 + 0x1b) == 0) {
                lVar2 = 0x120;
                if (*(char *)((long)pppppplVar11 + 0x15b) == '\0') {
                  lVar2 = 0x118;
                }
                if (ppppplVar14 < *(long ******)((long)pppppplVar11 + lVar2)) goto LAB_1090dfc2c;
              }
LAB_1090dfc74:
              *(undefined1 *)((long)pppppplVar11 + 0x15b) = 0;
            }
            pppplVar16 = (long ****)ppppplStack_a8[7][2];
            pppplVar3 = (long ****)ppppplStack_a8[7][3];
            ppplVar6 = (long ***)0x0;
            if (pppplVar3 != (long ****)0x0) {
              ppplVar6 = (long ***)((ulong)ppppplVar9 / (ulong)pppplVar3);
            }
            ppplVar7 = (long ***)0x0;
            if (pppplVar3 != (long ****)0x0) {
              ppplVar7 = (long ***)
                         ((ulong)((long)ppppplStack_90 +
                                 (long)*pppppplVar1 + (long)pppplVar3 + lVar19 + -1) /
                         (ulong)pppplVar3);
            }
            pppplVar16[6] = ppplVar6;
            pppplVar16[7] = ppplVar7;
          }
          bVar20 = bVar20 ^ 1;
        }
        FUN_1090e0858(ppppplStack_a8);
      } while (bVar20 == 0);
      pppppplVar13 = pppppplVar11 + 0x1c;
      FUN_1090df780();
      ppppplVar14 = pppppplVar11[0x1c];
      ppppplVar15 = pppppplVar11[0x1f];
      ppppplStack_98 = (long *****)pppppplVar13;
      ppppplStack_90 = (long *****)param_3;
      while (ppppplVar9 = ppppplStack_90,
            uVar10 = (long ******)ppppplStack_98 ==
                     (long ******)((long)ppppplVar14 + (long)ppppplVar15), !(bool)uVar10) {
        FUN_1090e01e4(pppppplVar11 + 0x16,ppppplStack_90);
        func_0x0001090e10b4(pppppplVar11[0x16]);
        if ((bool)uVar10) {
          FUN_1090e1298(ppppplVar9[1]);
          pppplVar16 = (long ****)ppppplVar9[1][7];
          ppplVar6 = pppplVar16[2];
          ppplVar7 = pppplVar16[3];
          pplVar8 = (long **)0x0;
          if (ppplVar7 != (long ***)0x0) {
            pplVar8 = (long **)(((long)ppplVar7 - 1U) / (ulong)ppplVar7);
          }
          ppplVar6[6] = (long **)0x0;
          ppplVar6[7] = pplVar8;
        }
        FUN_1090df7ac(&ppppplStack_98);
      }
      FUN_1090dddec(pppppplVar11[0xe]);
      FUN_1090e0454(&ppppplStack_98,pppppplVar11 + 0x1c);
      FUN_1090e0490(pppppplVar11 + 0x1c,pppppplVar11 + 0x16);
      FUN_1090e0490(pppppplVar11 + 0x16,&ppppplStack_98);
      pppppplVar13 = &ppppplStack_98;
      FUN_1090e03d8();
    }
  }
  else {
    *(undefined1 *)((long)pppppplVar11 + 0x159) = 1;
  }
  func_0x0001090e0fb0(uStack_68);
  if ((bool)uVar10) {
    return;
  }
  ___stack_chk_fail();
LAB_1090dfd8c:
  func_0x0001080da3e4();
  func_0x0001090dfdec();
  ppppplVar14 = *pppppplVar13;
  ppppplVar15 = *pppppplVar12;
  if ((ppppplVar15 != (long *****)0x0) && (ppppplVar15[2] != (long ****)0x0)) {
    pppplVar16 = ppppplVar15[2] + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pppplVar16,0x10);
      if (bVar5) {
        *pppplVar16 = (long ***)((long)*pppplVar16 + 1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  func_0x0001090e1064(ppppplVar14);
  if (ppppplVar15 != (long *****)0x0) {
    func_0x0001090e1058();
  }
  return;
}



/* Entry: 10909c708; end: 10909c713; -[SCNeoMediaDataManager setTargetBitrate:forSourceIndex:] */

void FUN_10909c708(long param_1,undefined8 param_2,long *****param_3,long ******param_4)

{
  long ******pppppplVar1;
  long lVar2;
  long ****pppplVar3;
  char cVar4;
  bool bVar5;
  long ***ppplVar6;
  long ***ppplVar7;
  long **pplVar8;
  long *****ppppplVar9;
  undefined1 uVar10;
  long ******pppppplVar11;
  undefined8 extraout_x8;
  long ******pppppplVar12;
  long ******extraout_x8_00;
  long *****ppppplVar13;
  long *****ppppplVar14;
  long *****ppppplVar15;
  long ****pppplVar16;
  int extraout_w11;
  long *****ppppplVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  byte bVar21;
  long *****ppppplStack_a8;
  long ****pppplStack_a0;
  long *****ppppplStack_98;
  long *****ppppplStack_90;
  long lStack_88;
  long lStack_80;
  long ****pppplStack_78;
  byte bStack_70;
  undefined8 uStack_68;
  
  pppppplVar11 = *(long *******)(param_1 + 8);
  pppppplVar12 = pppppplVar11;
  ppppplVar17 = param_3;
  func_0x0001090dfdec();
  if ((long *****)(*pppppplVar12)[0x22] == param_3) {
    return;
  }
  (*pppppplVar12)[0x22] = (long ****)param_3;
  *(undefined1 *)((long)pppppplVar11 + 0x15a) = 1;
  pppppplVar12 = pppppplVar11;
  func_0x0001090e0fd4();
  uVar10 = *(int *)(pppppplVar12 + 0x27) == 1;
  uStack_68 = extraout_x8;
  if (*(int *)(pppppplVar12 + 0x27) < 1) {
    uVar10 = 0;
    if (*(char *)(pppppplVar11 + 0x2b) == '\x01') {
      if (*(char *)((long)pppppplVar11 + 0x15a) == '\x01') {
        uVar18 = 0;
        uVar19 = 0;
        *(undefined1 *)((long)pppppplVar11 + 0x15a) = 0;
        for (ppppplVar17 = pppppplVar11[0x28]; ppppplVar17 < pppppplVar11[0x29];
            ppppplVar17 = (long *****)((long)ppppplVar17 + 1)) {
          pppppplVar12 = pppppplVar11;
          func_0x0001090dfdec(pppppplVar11,ppppplVar17);
          uVar19 = (long)(*pppppplVar12)[0x22] + uVar19;
          if ((*pppppplVar12)[0x22] != (long ****)0x0) {
            uVar18 = uVar18 + 1;
          }
        }
        if (uVar18 == 0) {
          ppppplVar17 = (long *****)0x0;
        }
        else {
          ppppplVar17 = (long *****)0x0;
          if (uVar18 != 0) {
            ppppplVar17 = (long *****)(uVar19 / uVar18);
          }
        }
        pppppplVar11[0x2a] = ppppplVar17;
        pppplVar16 = pppppplVar11[0xf][7];
        if (pppplVar16 != (long ****)0x0) {
          pppplVar3 = pppplVar16 + 1;
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(pppplVar3,0x10);
            if (bVar5) {
              *pppplVar3 = (long ***)((long)*pppplVar3 + 1);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          ppppplVar17 = pppppplVar11[0x2a];
        }
        param_4 = (long ******)pppppplVar11[3];
        func_0x0001090e4548(pppplVar16);
        FUN_109097138(pppplVar16);
        FUN_1090df5e4(pppppplVar11);
      }
      if (pppppplVar11[0x18] != (long *****)0x0) {
        ppppplVar14 = pppppplVar11[0x19];
        if (ppppplVar14 < (long *****)0x80) {
          if (ppppplVar14 != (long *****)0x0) {
            lVar20 = 8;
            for (ppppplVar17 = (long *****)0x0; ppppplVar17 != ppppplVar14;
                ppppplVar17 = (long *****)((long)ppppplVar17 + 1)) {
              if (-1 < *(char *)((long)pppppplVar11[0x16] + (long)ppppplVar17)) {
                FUN_1090e0834((long)pppppplVar11[0x17] + lVar20);
                ppppplVar14 = pppppplVar11[0x19];
              }
              lVar20 = lVar20 + 0x10;
            }
            pppppplVar11[0x18] = (long *****)0x0;
            ppppplVar17 = ppppplVar14 + 1;
            param_4 = (long ******)0x80;
            _memset(pppppplVar11[0x16]);
            *(undefined1 *)((long)pppppplVar11[0x16] + (long)ppppplVar14) = 0xff;
            ppppplVar14 = pppppplVar11[0x19];
            lVar20 = 6;
            if (ppppplVar14 != (long *****)0x7) {
              lVar20 = (long)ppppplVar14 - ((ulong)ppppplVar14 >> 3);
            }
            pppppplVar11[0x1b] = (long *****)(lVar20 - (long)pppppplVar11[0x18]);
          }
        }
        else {
          FUN_1090e03d8(pppppplVar11 + 0x16);
        }
      }
      ppppplVar14 = (long *****)0x0;
      pppplStack_a0 = (long ****)pppppplVar11[0x28];
      ppppplVar15 = pppppplVar11[0x29];
      pppppplVar1 = pppppplVar11 + 0x25;
      do {
        uVar10 = pppppplVar11[0x24] >= ppppplVar14 && (long *****)pppplStack_a0 == ppppplVar15;
        if (pppppplVar11[0x24] < ppppplVar14 || ppppplVar15 <= pppplStack_a0) break;
        param_4 = (long ******)&pppplStack_a0;
        FUN_1090e01e4(pppppplVar11 + 0x10);
        func_0x0001090e10b4(pppppplVar11[0x10]);
        if ((bool)uVar10) break;
        pppppplVar12 = (long ******)param_4[1];
        if ((pppppplVar12 != (long ******)0x0) && (pppppplVar12[2] != (long *****)0x0)) {
          do {
            func_0x0001090e0fc4();
            pppppplVar12 = extraout_x8_00;
          } while (extraout_w11 != 0);
        }
        ppppplStack_a8 = (long *****)pppppplVar12;
        FUN_1090df900(pppppplVar11 + 0x16,&pppplStack_a0);
        param_4 = &ppppplStack_a8;
        FUN_1090df928();
        pppplStack_a0 = (long ****)((long)pppplStack_a0 + 1);
        if (((ulong)ppppplStack_a8[0x1f] & 1) == 0) {
          func_0x0001090e178c();
          bVar21 = 1;
        }
        else {
          if (*(char *)(pppppplVar11 + 0xd) == '\x01') {
            pppppplVar12 = (long ******)ppppplStack_a8;
            if (((ulong)ppppplStack_a8[0x1f] & 1) == 0) goto LAB_1090dfd8c;
            param_4 = (long ******)ppppplStack_a8[0x1e];
            func_0x0001090dce54(ppppplStack_a8[7]);
          }
          FUN_1090e1494(&ppppplStack_98,ppppplStack_a8);
          bVar21 = bStack_70;
          lVar20 = lStack_80;
          ppppplVar9 = ppppplStack_98;
          ppppplVar14 = (long *****)(lStack_80 + (long)ppppplVar14);
          if ((bStack_70 & 1) == 0) {
            if (*(char *)(pppppplVar11 + 0xd) == '\x01') {
              pppppplVar12 = (long ******)ppppplStack_a8;
              if (((ulong)ppppplStack_a8[0x1f] & 1) == 0) goto LAB_1090dfd8c;
              pppppplVar12 = (long ******)(ppppplStack_a8 + 0x1e);
LAB_1090dfc2c:
              ppppplVar13 = *pppppplVar12;
              if (ppppplVar13 == (long *****)0x0) goto LAB_1090dfc74;
              *(undefined1 *)((long)pppppplVar11 + 0x15b) = 1;
              pppplVar16 = (long ****)ppppplStack_a8[7][3];
              uVar19 = 0;
              if (pppplVar16 != (long ****)0x0) {
                uVar19 = (ulong)(lStack_88 + (long)ppppplStack_98) / (ulong)pppplVar16;
              }
              param_4 = (long ******)(uVar19 * (long)pppplVar16);
              ppppplVar17 = (long *****)((long)pppplStack_78 - (long)param_4);
              if ((long *****)((long)param_4 + (long)ppppplVar13) <= pppplStack_78) {
                ppppplVar17 = ppppplVar13;
              }
              func_0x0001090e19d8();
            }
            else {
              pppppplVar12 = pppppplVar1;
              if (*(int *)(ppppplStack_a8 + 0x1b) == 1) goto LAB_1090dfc2c;
              if (*(int *)(ppppplStack_a8 + 0x1b) == 0) {
                lVar2 = 0x120;
                if (*(char *)((long)pppppplVar11 + 0x15b) == '\0') {
                  lVar2 = 0x118;
                }
                if (ppppplVar14 < *(long ******)((long)pppppplVar11 + lVar2)) goto LAB_1090dfc2c;
              }
LAB_1090dfc74:
              *(undefined1 *)((long)pppppplVar11 + 0x15b) = 0;
            }
            pppplVar16 = (long ****)ppppplStack_a8[7][2];
            pppplVar3 = (long ****)ppppplStack_a8[7][3];
            ppplVar6 = (long ***)0x0;
            if (pppplVar3 != (long ****)0x0) {
              ppplVar6 = (long ***)((ulong)ppppplVar9 / (ulong)pppplVar3);
            }
            ppplVar7 = (long ***)0x0;
            if (pppplVar3 != (long ****)0x0) {
              ppplVar7 = (long ***)
                         ((ulong)((long)ppppplStack_90 +
                                 (long)*pppppplVar1 + (long)pppplVar3 + lVar20 + -1) /
                         (ulong)pppplVar3);
            }
            pppplVar16[6] = ppplVar6;
            pppplVar16[7] = ppplVar7;
          }
          bVar21 = bVar21 ^ 1;
        }
        FUN_1090e0858(ppppplStack_a8);
      } while (bVar21 == 0);
      pppppplVar12 = pppppplVar11 + 0x1c;
      FUN_1090df780();
      ppppplVar14 = pppppplVar11[0x1c];
      ppppplVar15 = pppppplVar11[0x1f];
      ppppplStack_98 = (long *****)pppppplVar12;
      ppppplStack_90 = (long *****)param_4;
      while (ppppplVar9 = ppppplStack_90,
            uVar10 = (long ******)ppppplStack_98 ==
                     (long ******)((long)ppppplVar14 + (long)ppppplVar15), !(bool)uVar10) {
        FUN_1090e01e4(pppppplVar11 + 0x16,ppppplStack_90);
        func_0x0001090e10b4(pppppplVar11[0x16]);
        if ((bool)uVar10) {
          FUN_1090e1298(ppppplVar9[1]);
          pppplVar16 = (long ****)ppppplVar9[1][7];
          ppplVar6 = pppplVar16[2];
          ppplVar7 = pppplVar16[3];
          pplVar8 = (long **)0x0;
          if (ppplVar7 != (long ***)0x0) {
            pplVar8 = (long **)(((long)ppplVar7 - 1U) / (ulong)ppplVar7);
          }
          ppplVar6[6] = (long **)0x0;
          ppplVar6[7] = pplVar8;
        }
        FUN_1090df7ac(&ppppplStack_98);
      }
      FUN_1090dddec(pppppplVar11[0xe]);
      FUN_1090e0454(&ppppplStack_98,pppppplVar11 + 0x1c);
      FUN_1090e0490(pppppplVar11 + 0x1c,pppppplVar11 + 0x16);
      FUN_1090e0490(pppppplVar11 + 0x16,&ppppplStack_98);
      pppppplVar12 = &ppppplStack_98;
      FUN_1090e03d8();
    }
  }
  else {
    *(undefined1 *)((long)pppppplVar11 + 0x159) = 1;
  }
  func_0x0001090e0fb0(uStack_68);
  if ((bool)uVar10) {
    return;
  }
  ___stack_chk_fail();
LAB_1090dfd8c:
  func_0x0001080da3e4();
  func_0x0001090dfdec();
  ppppplVar14 = *pppppplVar12;
  pppplVar16 = *ppppplVar17;
  if ((pppplVar16 != (long ****)0x0) && (pppplVar16[2] != (long ***)0x0)) {
    ppplVar6 = pppplVar16[2] + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ppplVar6,0x10);
      if (bVar5) {
        *ppplVar6 = (long **)((long)*ppplVar6 + 1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  func_0x0001090e1064(ppppplVar14);
  if (pppplVar16 != (long ****)0x0) {
    func_0x0001090e1058();
  }
  return;
}



/* Entry: 10909c714; end: 10909c71f; -[SCNeoMediaDataManager setEnabled:] */

void FUN_10909c714(long param_1,undefined8 param_2,long ******param_3)

{
  long ******pppppplVar1;
  long lVar2;
  long ****pppplVar3;
  char cVar4;
  bool bVar5;
  long ***ppplVar6;
  long ***ppplVar7;
  long **pplVar8;
  long *****ppppplVar9;
  undefined1 uVar10;
  long ******pppppplVar11;
  long ******pppppplVar12;
  long ******extraout_x8;
  undefined8 extraout_x8_00;
  long ******pppppplVar13;
  long ******extraout_x8_01;
  long *****ppppplVar14;
  long *****ppppplVar15;
  int extraout_w11;
  int extraout_w11_00;
  long ****pppplVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  byte bVar20;
  long *****ppppplStack_a8;
  long ****pppplStack_a0;
  long *****ppppplStack_98;
  long *****ppppplStack_90;
  long lStack_88;
  long lStack_80;
  long *****ppppplStack_78;
  byte bStack_70;
  undefined8 uStack_68;
  
  pppppplVar11 = *(long *******)(param_1 + 8);
  if ((uint)*(byte *)(pppppplVar11 + 0x2b) == (uint)param_3) {
    return;
  }
  *(char *)(pppppplVar11 + 0x2b) = (char)param_3;
  if ((uint)param_3 == 0) {
    while (pppppplVar11[0x1e] != (long *****)0x0) {
      pppppplVar12 = pppppplVar11 + 0x1c;
      FUN_1090df780();
      ppppplVar14 = param_3[1];
      pppppplVar13 = param_3;
      if ((ppppplVar14 != (long *****)0x0) && (ppppplVar14[2] != (long ****)0x0)) {
        do {
          func_0x0001090e0fc4();
          pppppplVar13 = extraout_x8;
        } while (extraout_w11 != 0);
      }
      param_3 = pppppplVar12;
      FUN_1090e0190(pppppplVar11 + 0x1c,param_3,pppppplVar13);
      FUN_1090e1298(ppppplVar14);
      FUN_1090e0858(ppppplVar14);
    }
    return;
  }
  pppppplVar13 = pppppplVar11;
  pppppplVar12 = param_3;
  func_0x0001090e0fd4();
  uVar10 = *(int *)(pppppplVar13 + 0x27) == 1;
  uStack_68 = extraout_x8_00;
  if (*(int *)(pppppplVar13 + 0x27) < 1) {
    uVar10 = 0;
    if (*(char *)(pppppplVar11 + 0x2b) == '\x01') {
      if (*(char *)((long)pppppplVar11 + 0x15a) == '\x01') {
        uVar17 = 0;
        uVar18 = 0;
        *(undefined1 *)((long)pppppplVar11 + 0x15a) = 0;
        for (ppppplVar14 = pppppplVar11[0x28]; ppppplVar14 < pppppplVar11[0x29];
            ppppplVar14 = (long *****)((long)ppppplVar14 + 1)) {
          pppppplVar12 = pppppplVar11;
          func_0x0001090dfdec(pppppplVar11,ppppplVar14);
          uVar18 = (long)(*pppppplVar12)[0x22] + uVar18;
          if ((*pppppplVar12)[0x22] != (long ****)0x0) {
            uVar17 = uVar17 + 1;
          }
        }
        if (uVar17 == 0) {
          pppppplVar12 = (long ******)0x0;
        }
        else {
          pppppplVar12 = (long ******)0x0;
          if (uVar17 != 0) {
            pppppplVar12 = (long ******)(uVar18 / uVar17);
          }
        }
        pppppplVar11[0x2a] = (long *****)pppppplVar12;
        pppplVar16 = pppppplVar11[0xf][7];
        if (pppplVar16 != (long ****)0x0) {
          pppplVar3 = pppplVar16 + 1;
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(pppplVar3,0x10);
            if (bVar5) {
              *pppplVar3 = (long ***)((long)*pppplVar3 + 1);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          pppppplVar12 = (long ******)pppppplVar11[0x2a];
        }
        param_3 = (long ******)pppppplVar11[3];
        func_0x0001090e4548(pppplVar16);
        FUN_109097138(pppplVar16);
        FUN_1090df5e4(pppppplVar11);
      }
      if (pppppplVar11[0x18] != (long *****)0x0) {
        ppppplVar14 = pppppplVar11[0x19];
        if (ppppplVar14 < (long *****)0x80) {
          if (ppppplVar14 != (long *****)0x0) {
            lVar19 = 8;
            for (ppppplVar15 = (long *****)0x0; ppppplVar15 != ppppplVar14;
                ppppplVar15 = (long *****)((long)ppppplVar15 + 1)) {
              if (-1 < *(char *)((long)pppppplVar11[0x16] + (long)ppppplVar15)) {
                FUN_1090e0834((long)pppppplVar11[0x17] + lVar19);
                ppppplVar14 = pppppplVar11[0x19];
              }
              lVar19 = lVar19 + 0x10;
            }
            pppppplVar11[0x18] = (long *****)0x0;
            pppppplVar12 = (long ******)(ppppplVar14 + 1);
            param_3 = (long ******)0x80;
            _memset(pppppplVar11[0x16]);
            *(undefined1 *)((long)pppppplVar11[0x16] + (long)ppppplVar14) = 0xff;
            ppppplVar14 = pppppplVar11[0x19];
            lVar19 = 6;
            if (ppppplVar14 != (long *****)0x7) {
              lVar19 = (long)ppppplVar14 - ((ulong)ppppplVar14 >> 3);
            }
            pppppplVar11[0x1b] = (long *****)(lVar19 - (long)pppppplVar11[0x18]);
          }
        }
        else {
          FUN_1090e03d8(pppppplVar11 + 0x16);
        }
      }
      ppppplVar14 = (long *****)0x0;
      pppplStack_a0 = (long ****)pppppplVar11[0x28];
      ppppplVar15 = pppppplVar11[0x29];
      pppppplVar1 = pppppplVar11 + 0x25;
      do {
        uVar10 = pppppplVar11[0x24] >= ppppplVar14 && (long *****)pppplStack_a0 == ppppplVar15;
        if (pppppplVar11[0x24] < ppppplVar14 || ppppplVar15 <= pppplStack_a0) break;
        param_3 = (long ******)&pppplStack_a0;
        FUN_1090e01e4(pppppplVar11 + 0x10);
        func_0x0001090e10b4(pppppplVar11[0x10]);
        if ((bool)uVar10) break;
        pppppplVar13 = (long ******)param_3[1];
        if ((pppppplVar13 != (long ******)0x0) && (pppppplVar13[2] != (long *****)0x0)) {
          do {
            func_0x0001090e0fc4();
            pppppplVar13 = extraout_x8_01;
          } while (extraout_w11_00 != 0);
        }
        ppppplStack_a8 = (long *****)pppppplVar13;
        FUN_1090df900(pppppplVar11 + 0x16,&pppplStack_a0);
        param_3 = &ppppplStack_a8;
        FUN_1090df928();
        pppplStack_a0 = (long ****)((long)pppplStack_a0 + 1);
        if (((ulong)ppppplStack_a8[0x1f] & 1) == 0) {
          func_0x0001090e178c();
          bVar20 = 1;
        }
        else {
          if (*(char *)(pppppplVar11 + 0xd) == '\x01') {
            pppppplVar13 = (long ******)ppppplStack_a8;
            if (((ulong)ppppplStack_a8[0x1f] & 1) == 0) goto LAB_1090dfd8c;
            param_3 = (long ******)ppppplStack_a8[0x1e];
            func_0x0001090dce54(ppppplStack_a8[7]);
          }
          FUN_1090e1494(&ppppplStack_98,ppppplStack_a8);
          bVar20 = bStack_70;
          lVar19 = lStack_80;
          ppppplVar9 = ppppplStack_98;
          ppppplVar14 = (long *****)(lStack_80 + (long)ppppplVar14);
          if ((bStack_70 & 1) == 0) {
            if (*(char *)(pppppplVar11 + 0xd) == '\x01') {
              pppppplVar13 = (long ******)ppppplStack_a8;
              if (((ulong)ppppplStack_a8[0x1f] & 1) == 0) goto LAB_1090dfd8c;
              pppppplVar13 = (long ******)(ppppplStack_a8 + 0x1e);
LAB_1090dfc2c:
              pppppplVar13 = (long ******)*pppppplVar13;
              if (pppppplVar13 == (long ******)0x0) goto LAB_1090dfc74;
              *(undefined1 *)((long)pppppplVar11 + 0x15b) = 1;
              pppplVar16 = (long ****)ppppplStack_a8[7][3];
              uVar18 = 0;
              if (pppplVar16 != (long ****)0x0) {
                uVar18 = (ulong)(lStack_88 + (long)ppppplStack_98) / (ulong)pppplVar16;
              }
              param_3 = (long ******)(uVar18 * (long)pppplVar16);
              pppppplVar12 = (long ******)((long)ppppplStack_78 - (long)param_3);
              if ((long ******)((long)param_3 + (long)pppppplVar13) <= ppppplStack_78) {
                pppppplVar12 = pppppplVar13;
              }
              func_0x0001090e19d8();
            }
            else {
              pppppplVar13 = pppppplVar1;
              if (*(int *)(ppppplStack_a8 + 0x1b) == 1) goto LAB_1090dfc2c;
              if (*(int *)(ppppplStack_a8 + 0x1b) == 0) {
                lVar2 = 0x120;
                if (*(char *)((long)pppppplVar11 + 0x15b) == '\0') {
                  lVar2 = 0x118;
                }
                if (ppppplVar14 < *(long ******)((long)pppppplVar11 + lVar2)) goto LAB_1090dfc2c;
              }
LAB_1090dfc74:
              *(undefined1 *)((long)pppppplVar11 + 0x15b) = 0;
            }
            pppplVar16 = (long ****)ppppplStack_a8[7][2];
            pppplVar3 = (long ****)ppppplStack_a8[7][3];
            ppplVar6 = (long ***)0x0;
            if (pppplVar3 != (long ****)0x0) {
              ppplVar6 = (long ***)((ulong)ppppplVar9 / (ulong)pppplVar3);
            }
            ppplVar7 = (long ***)0x0;
            if (pppplVar3 != (long ****)0x0) {
              ppplVar7 = (long ***)
                         ((ulong)((long)ppppplStack_90 +
                                 (long)*pppppplVar1 + (long)pppplVar3 + lVar19 + -1) /
                         (ulong)pppplVar3);
            }
            pppplVar16[6] = ppplVar6;
            pppplVar16[7] = ppplVar7;
          }
          bVar20 = bVar20 ^ 1;
        }
        FUN_1090e0858(ppppplStack_a8);
      } while (bVar20 == 0);
      pppppplVar13 = pppppplVar11 + 0x1c;
      FUN_1090df780();
      ppppplVar14 = pppppplVar11[0x1c];
      ppppplVar15 = pppppplVar11[0x1f];
      ppppplStack_98 = (long *****)pppppplVar13;
      ppppplStack_90 = (long *****)param_3;
      while (ppppplVar9 = ppppplStack_90,
            uVar10 = (long ******)ppppplStack_98 ==
                     (long ******)((long)ppppplVar14 + (long)ppppplVar15), !(bool)uVar10) {
        FUN_1090e01e4(pppppplVar11 + 0x16,ppppplStack_90);
        func_0x0001090e10b4(pppppplVar11[0x16]);
        if ((bool)uVar10) {
          FUN_1090e1298(ppppplVar9[1]);
          pppplVar16 = (long ****)ppppplVar9[1][7];
          ppplVar6 = pppplVar16[2];
          ppplVar7 = pppplVar16[3];
          pplVar8 = (long **)0x0;
          if (ppplVar7 != (long ***)0x0) {
            pplVar8 = (long **)(((long)ppplVar7 - 1U) / (ulong)ppplVar7);
          }
          ppplVar6[6] = (long **)0x0;
          ppplVar6[7] = pplVar8;
        }
        FUN_1090df7ac(&ppppplStack_98);
      }
      FUN_1090dddec(pppppplVar11[0xe]);
      FUN_1090e0454(&ppppplStack_98,pppppplVar11 + 0x1c);
      FUN_1090e0490(pppppplVar11 + 0x1c,pppppplVar11 + 0x16);
      FUN_1090e0490(pppppplVar11 + 0x16,&ppppplStack_98);
      pppppplVar13 = &ppppplStack_98;
      FUN_1090e03d8();
    }
  }
  else {
    *(undefined1 *)((long)pppppplVar11 + 0x159) = 1;
  }
  func_0x0001090e0fb0(uStack_68);
  if ((bool)uVar10) {
    return;
  }
  ___stack_chk_fail();
LAB_1090dfd8c:
  func_0x0001080da3e4();
  func_0x0001090dfdec();
  ppppplVar14 = *pppppplVar13;
  ppppplVar15 = *pppppplVar12;
  if ((ppppplVar15 != (long *****)0x0) && (ppppplVar15[2] != (long ****)0x0)) {
    pppplVar16 = ppppplVar15[2] + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pppplVar16,0x10);
      if (bVar5) {
        *pppplVar16 = (long ***)((long)*pppplVar16 + 1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  func_0x0001090e1064(ppppplVar14);
  if (ppppplVar15 != (long *****)0x0) {
    func_0x0001090e1058();
  }
  return;
}



/* Entry: 10909c720; end: 10909c72b; -[SCNeoMediaDataManager enabled] */

undefined1 FUN_10909c720(long param_1)

{
  return *(undefined1 *)(*(long *)(param_1 + 8) + 0x158);
}



/* Entry: 10909c72c; end: 10909c73b; -[SCNeoMediaDataManager setCurrentSourceRange:] */

void FUN_10909c72c(long param_1,undefined8 param_2,long ******param_3,long param_4)

{
  long ******pppppplVar1;
  long lVar2;
  long ****pppplVar3;
  char cVar4;
  bool bVar5;
  long ***ppplVar6;
  long ***ppplVar7;
  long **pplVar8;
  long *****ppppplVar9;
  undefined1 uVar10;
  long ******pppppplVar11;
  long ******pppppplVar12;
  long ******pppppplVar13;
  long *****ppppplVar14;
  undefined8 extraout_x8;
  long ******extraout_x8_00;
  long *****ppppplVar15;
  long *****ppppplVar16;
  long *****ppppplVar17;
  long ****pppplVar18;
  int extraout_w11;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  byte bVar22;
  long *****ppppplStack_a8;
  long ****pppplStack_a0;
  long *****ppppplStack_98;
  long *****ppppplStack_90;
  long lStack_88;
  long lStack_80;
  long ****pppplStack_78;
  byte bStack_70;
  undefined8 uStack_68;
  
  pppppplVar11 = *(long *******)(param_1 + 8);
  ppppplVar16 = (long *****)(param_4 + (long)param_3);
  if (((long ******)pppppplVar11[0x28] == param_3) && (pppppplVar11[0x29] == ppppplVar16)) {
    return;
  }
  pppppplVar13 = param_3;
  ppppplVar14 = ppppplVar16;
  func_0x0001090dfdec(pppppplVar11);
  pppppplVar11[0x28] = (long *****)param_3;
  pppppplVar11[0x29] = ppppplVar16;
  pppppplVar12 = pppppplVar11;
  func_0x0001090e0fd4();
  uVar10 = *(int *)(pppppplVar12 + 0x27) == 1;
  uStack_68 = extraout_x8;
  if (*(int *)(pppppplVar12 + 0x27) < 1) {
    uVar10 = 0;
    if (*(char *)(pppppplVar11 + 0x2b) == '\x01') {
      if (*(char *)((long)pppppplVar11 + 0x15a) == '\x01') {
        uVar19 = 0;
        uVar20 = 0;
        *(undefined1 *)((long)pppppplVar11 + 0x15a) = 0;
        for (ppppplVar16 = pppppplVar11[0x28]; ppppplVar16 < pppppplVar11[0x29];
            ppppplVar16 = (long *****)((long)ppppplVar16 + 1)) {
          pppppplVar13 = pppppplVar11;
          func_0x0001090dfdec(pppppplVar11,ppppplVar16);
          uVar20 = (long)(*pppppplVar13)[0x22] + uVar20;
          if ((*pppppplVar13)[0x22] != (long ****)0x0) {
            uVar19 = uVar19 + 1;
          }
        }
        if (uVar19 == 0) {
          ppppplVar14 = (long *****)0x0;
        }
        else {
          ppppplVar14 = (long *****)0x0;
          if (uVar19 != 0) {
            ppppplVar14 = (long *****)(uVar20 / uVar19);
          }
        }
        pppppplVar11[0x2a] = ppppplVar14;
        pppplVar18 = pppppplVar11[0xf][7];
        if (pppplVar18 != (long ****)0x0) {
          pppplVar3 = pppplVar18 + 1;
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(pppplVar3,0x10);
            if (bVar5) {
              *pppplVar3 = (long ***)((long)*pppplVar3 + 1);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          ppppplVar14 = pppppplVar11[0x2a];
        }
        pppppplVar13 = (long ******)pppppplVar11[3];
        func_0x0001090e4548(pppplVar18);
        FUN_109097138(pppplVar18);
        FUN_1090df5e4(pppppplVar11);
      }
      if (pppppplVar11[0x18] != (long *****)0x0) {
        ppppplVar16 = pppppplVar11[0x19];
        if (ppppplVar16 < (long *****)0x80) {
          if (ppppplVar16 != (long *****)0x0) {
            lVar21 = 8;
            for (ppppplVar14 = (long *****)0x0; ppppplVar14 != ppppplVar16;
                ppppplVar14 = (long *****)((long)ppppplVar14 + 1)) {
              if (-1 < *(char *)((long)pppppplVar11[0x16] + (long)ppppplVar14)) {
                FUN_1090e0834((long)pppppplVar11[0x17] + lVar21);
                ppppplVar16 = pppppplVar11[0x19];
              }
              lVar21 = lVar21 + 0x10;
            }
            pppppplVar11[0x18] = (long *****)0x0;
            ppppplVar14 = ppppplVar16 + 1;
            pppppplVar13 = (long ******)0x80;
            _memset(pppppplVar11[0x16]);
            *(undefined1 *)((long)pppppplVar11[0x16] + (long)ppppplVar16) = 0xff;
            ppppplVar16 = pppppplVar11[0x19];
            lVar21 = 6;
            if (ppppplVar16 != (long *****)0x7) {
              lVar21 = (long)ppppplVar16 - ((ulong)ppppplVar16 >> 3);
            }
            pppppplVar11[0x1b] = (long *****)(lVar21 - (long)pppppplVar11[0x18]);
          }
        }
        else {
          FUN_1090e03d8(pppppplVar11 + 0x16);
        }
      }
      ppppplVar16 = (long *****)0x0;
      pppplStack_a0 = (long ****)pppppplVar11[0x28];
      ppppplVar17 = pppppplVar11[0x29];
      pppppplVar1 = pppppplVar11 + 0x25;
      do {
        uVar10 = pppppplVar11[0x24] >= ppppplVar16 && (long *****)pppplStack_a0 == ppppplVar17;
        if (pppppplVar11[0x24] < ppppplVar16 || ppppplVar17 <= pppplStack_a0) break;
        pppppplVar13 = (long ******)&pppplStack_a0;
        FUN_1090e01e4(pppppplVar11 + 0x10);
        func_0x0001090e10b4(pppppplVar11[0x10]);
        if ((bool)uVar10) break;
        pppppplVar13 = (long ******)pppppplVar13[1];
        if ((pppppplVar13 != (long ******)0x0) && (pppppplVar13[2] != (long *****)0x0)) {
          do {
            func_0x0001090e0fc4();
            pppppplVar13 = extraout_x8_00;
          } while (extraout_w11 != 0);
        }
        ppppplStack_a8 = (long *****)pppppplVar13;
        FUN_1090df900(pppppplVar11 + 0x16,&pppplStack_a0);
        pppppplVar13 = &ppppplStack_a8;
        FUN_1090df928();
        pppplStack_a0 = (long ****)((long)pppplStack_a0 + 1);
        if (((ulong)ppppplStack_a8[0x1f] & 1) == 0) {
          func_0x0001090e178c();
          bVar22 = 1;
        }
        else {
          if (*(char *)(pppppplVar11 + 0xd) == '\x01') {
            pppppplVar12 = (long ******)ppppplStack_a8;
            if (((ulong)ppppplStack_a8[0x1f] & 1) == 0) goto LAB_1090dfd8c;
            pppppplVar13 = (long ******)ppppplStack_a8[0x1e];
            func_0x0001090dce54(ppppplStack_a8[7]);
          }
          FUN_1090e1494(&ppppplStack_98,ppppplStack_a8);
          bVar22 = bStack_70;
          lVar21 = lStack_80;
          ppppplVar9 = ppppplStack_98;
          ppppplVar16 = (long *****)(lStack_80 + (long)ppppplVar16);
          if ((bStack_70 & 1) == 0) {
            if (*(char *)(pppppplVar11 + 0xd) == '\x01') {
              pppppplVar12 = (long ******)ppppplStack_a8;
              if (((ulong)ppppplStack_a8[0x1f] & 1) == 0) goto LAB_1090dfd8c;
              pppppplVar12 = (long ******)(ppppplStack_a8 + 0x1e);
LAB_1090dfc2c:
              ppppplVar15 = *pppppplVar12;
              if (ppppplVar15 == (long *****)0x0) goto LAB_1090dfc74;
              *(undefined1 *)((long)pppppplVar11 + 0x15b) = 1;
              pppplVar18 = (long ****)ppppplStack_a8[7][3];
              uVar20 = 0;
              if (pppplVar18 != (long ****)0x0) {
                uVar20 = (ulong)(lStack_88 + (long)ppppplStack_98) / (ulong)pppplVar18;
              }
              pppppplVar13 = (long ******)(uVar20 * (long)pppplVar18);
              ppppplVar14 = (long *****)((long)pppplStack_78 - (long)pppppplVar13);
              if ((long *****)((long)pppppplVar13 + (long)ppppplVar15) <= pppplStack_78) {
                ppppplVar14 = ppppplVar15;
              }
              func_0x0001090e19d8();
            }
            else {
              pppppplVar12 = pppppplVar1;
              if (*(int *)(ppppplStack_a8 + 0x1b) == 1) goto LAB_1090dfc2c;
              if (*(int *)(ppppplStack_a8 + 0x1b) == 0) {
                lVar2 = 0x120;
                if (*(char *)((long)pppppplVar11 + 0x15b) == '\0') {
                  lVar2 = 0x118;
                }
                if (ppppplVar16 < *(long ******)((long)pppppplVar11 + lVar2)) goto LAB_1090dfc2c;
              }
LAB_1090dfc74:
              *(undefined1 *)((long)pppppplVar11 + 0x15b) = 0;
            }
            pppplVar18 = (long ****)ppppplStack_a8[7][2];
            pppplVar3 = (long ****)ppppplStack_a8[7][3];
            ppplVar6 = (long ***)0x0;
            if (pppplVar3 != (long ****)0x0) {
              ppplVar6 = (long ***)((ulong)ppppplVar9 / (ulong)pppplVar3);
            }
            ppplVar7 = (long ***)0x0;
            if (pppplVar3 != (long ****)0x0) {
              ppplVar7 = (long ***)
                         ((ulong)((long)ppppplStack_90 +
                                 (long)*pppppplVar1 + (long)pppplVar3 + lVar21 + -1) /
                         (ulong)pppplVar3);
            }
            pppplVar18[6] = ppplVar6;
            pppplVar18[7] = ppplVar7;
          }
          bVar22 = bVar22 ^ 1;
        }
        FUN_1090e0858(ppppplStack_a8);
      } while (bVar22 == 0);
      pppppplVar12 = pppppplVar11 + 0x1c;
      FUN_1090df780();
      ppppplVar16 = pppppplVar11[0x1c];
      ppppplVar17 = pppppplVar11[0x1f];
      ppppplStack_98 = (long *****)pppppplVar12;
      ppppplStack_90 = (long *****)pppppplVar13;
      while (ppppplVar9 = ppppplStack_90,
            uVar10 = (long ******)ppppplStack_98 ==
                     (long ******)((long)ppppplVar16 + (long)ppppplVar17), !(bool)uVar10) {
        FUN_1090e01e4(pppppplVar11 + 0x16,ppppplStack_90);
        func_0x0001090e10b4(pppppplVar11[0x16]);
        if ((bool)uVar10) {
          FUN_1090e1298(ppppplVar9[1]);
          pppplVar18 = (long ****)ppppplVar9[1][7];
          ppplVar6 = pppplVar18[2];
          ppplVar7 = pppplVar18[3];
          pplVar8 = (long **)0x0;
          if (ppplVar7 != (long ***)0x0) {
            pplVar8 = (long **)(((long)ppplVar7 - 1U) / (ulong)ppplVar7);
          }
          ppplVar6[6] = (long **)0x0;
          ppplVar6[7] = pplVar8;
        }
        FUN_1090df7ac(&ppppplStack_98);
      }
      FUN_1090dddec(pppppplVar11[0xe]);
      FUN_1090e0454(&ppppplStack_98,pppppplVar11 + 0x1c);
      FUN_1090e0490(pppppplVar11 + 0x1c,pppppplVar11 + 0x16);
      FUN_1090e0490(pppppplVar11 + 0x16,&ppppplStack_98);
      pppppplVar12 = &ppppplStack_98;
      FUN_1090e03d8();
    }
  }
  else {
    *(undefined1 *)((long)pppppplVar11 + 0x159) = 1;
  }
  func_0x0001090e0fb0(uStack_68);
  if ((bool)uVar10) {
    return;
  }
  ___stack_chk_fail();
LAB_1090dfd8c:
  func_0x0001080da3e4();
  func_0x0001090dfdec();
  ppppplVar16 = *pppppplVar12;
  pppplVar18 = *ppppplVar14;
  if ((pppplVar18 != (long ****)0x0) && (pppplVar18[2] != (long ***)0x0)) {
    ppplVar6 = pppplVar18[2] + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ppplVar6,0x10);
      if (bVar5) {
        *ppplVar6 = (long **)((long)*ppplVar6 + 1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  func_0x0001090e1064(ppppplVar16);
  if (pppplVar18 != (long ****)0x0) {
    func_0x0001090e1058();
  }
  return;
}



/* Entry: 10909c73c; end: 10909c74f; -[SCNeoMediaDataManager beginUpdates] */

void FUN_10909c73c(long param_1)

{
  *(int *)(*(long *)(param_1 + 8) + 0x138) = *(int *)(*(long *)(param_1 + 8) + 0x138) + 1;
  return;
}



/* Entry: 10909c750; end: 10909c757; -[SCNeoMediaDataManager endUpdates] */

void FUN_10909c750(long param_1,long ******param_2,long *****param_3)

{
  long ******pppppplVar1;
  long lVar2;
  long ****pppplVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  long ***ppplVar7;
  long ***ppplVar8;
  long **pplVar9;
  long *****ppppplVar10;
  undefined1 uVar11;
  long ******pppppplVar12;
  undefined8 extraout_x8;
  long ******pppppplVar13;
  long ******extraout_x8_00;
  long *****ppppplVar14;
  long *****ppppplVar15;
  long *****ppppplVar16;
  long ****pppplVar17;
  int extraout_w11;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  byte bVar21;
  long *****ppppplStack_a8;
  long ****pppplStack_a0;
  long *****ppppplStack_98;
  long *****ppppplStack_90;
  long lStack_88;
  long lStack_80;
  long ****pppplStack_78;
  byte bStack_70;
  undefined8 uStack_68;
  
  pppppplVar12 = *(long *******)(param_1 + 8);
  iVar4 = *(int *)(pppppplVar12 + 0x27);
  *(int *)(pppppplVar12 + 0x27) = iVar4 + -1;
  if ((iVar4 + -1 != 0) || (*(char *)((long)pppppplVar12 + 0x159) != '\x01')) {
    return;
  }
  *(undefined1 *)((long)pppppplVar12 + 0x159) = 0;
  pppppplVar13 = pppppplVar12;
  func_0x0001090e0fd4();
  uVar11 = *(int *)(pppppplVar13 + 0x27) == 1;
  uStack_68 = extraout_x8;
  if (*(int *)(pppppplVar13 + 0x27) < 1) {
    uVar11 = 0;
    if (*(char *)(pppppplVar12 + 0x2b) == '\x01') {
      if (*(char *)((long)pppppplVar12 + 0x15a) == '\x01') {
        uVar18 = 0;
        uVar19 = 0;
        *(undefined1 *)((long)pppppplVar12 + 0x15a) = 0;
        for (ppppplVar15 = pppppplVar12[0x28]; ppppplVar15 < pppppplVar12[0x29];
            ppppplVar15 = (long *****)((long)ppppplVar15 + 1)) {
          pppppplVar13 = pppppplVar12;
          func_0x0001090dfdec(pppppplVar12,ppppplVar15);
          uVar19 = (long)(*pppppplVar13)[0x22] + uVar19;
          if ((*pppppplVar13)[0x22] != (long ****)0x0) {
            uVar18 = uVar18 + 1;
          }
        }
        if (uVar18 == 0) {
          param_3 = (long *****)0x0;
        }
        else {
          param_3 = (long *****)0x0;
          if (uVar18 != 0) {
            param_3 = (long *****)(uVar19 / uVar18);
          }
        }
        pppppplVar12[0x2a] = param_3;
        pppplVar17 = pppppplVar12[0xf][7];
        if (pppplVar17 != (long ****)0x0) {
          pppplVar3 = pppplVar17 + 1;
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(pppplVar3,0x10);
            if (bVar6) {
              *pppplVar3 = (long ***)((long)*pppplVar3 + 1);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          param_3 = pppppplVar12[0x2a];
        }
        param_2 = (long ******)pppppplVar12[3];
        func_0x0001090e4548(pppplVar17);
        FUN_109097138(pppplVar17);
        FUN_1090df5e4(pppppplVar12);
      }
      if (pppppplVar12[0x18] != (long *****)0x0) {
        ppppplVar15 = pppppplVar12[0x19];
        if (ppppplVar15 < (long *****)0x80) {
          if (ppppplVar15 != (long *****)0x0) {
            lVar20 = 8;
            for (ppppplVar16 = (long *****)0x0; ppppplVar16 != ppppplVar15;
                ppppplVar16 = (long *****)((long)ppppplVar16 + 1)) {
              if (-1 < *(char *)((long)pppppplVar12[0x16] + (long)ppppplVar16)) {
                FUN_1090e0834((long)pppppplVar12[0x17] + lVar20);
                ppppplVar15 = pppppplVar12[0x19];
              }
              lVar20 = lVar20 + 0x10;
            }
            pppppplVar12[0x18] = (long *****)0x0;
            param_3 = ppppplVar15 + 1;
            param_2 = (long ******)0x80;
            _memset(pppppplVar12[0x16]);
            *(undefined1 *)((long)pppppplVar12[0x16] + (long)ppppplVar15) = 0xff;
            ppppplVar15 = pppppplVar12[0x19];
            lVar20 = 6;
            if (ppppplVar15 != (long *****)0x7) {
              lVar20 = (long)ppppplVar15 - ((ulong)ppppplVar15 >> 3);
            }
            pppppplVar12[0x1b] = (long *****)(lVar20 - (long)pppppplVar12[0x18]);
          }
        }
        else {
          FUN_1090e03d8(pppppplVar12 + 0x16);
        }
      }
      ppppplVar15 = (long *****)0x0;
      pppplStack_a0 = (long ****)pppppplVar12[0x28];
      ppppplVar16 = pppppplVar12[0x29];
      pppppplVar1 = pppppplVar12 + 0x25;
      do {
        uVar11 = pppppplVar12[0x24] >= ppppplVar15 && (long *****)pppplStack_a0 == ppppplVar16;
        if (pppppplVar12[0x24] < ppppplVar15 || ppppplVar16 <= pppplStack_a0) break;
        param_2 = (long ******)&pppplStack_a0;
        FUN_1090e01e4(pppppplVar12 + 0x10);
        func_0x0001090e10b4(pppppplVar12[0x10]);
        if ((bool)uVar11) break;
        pppppplVar13 = (long ******)param_2[1];
        if ((pppppplVar13 != (long ******)0x0) && (pppppplVar13[2] != (long *****)0x0)) {
          do {
            func_0x0001090e0fc4();
            pppppplVar13 = extraout_x8_00;
          } while (extraout_w11 != 0);
        }
        ppppplStack_a8 = (long *****)pppppplVar13;
        FUN_1090df900(pppppplVar12 + 0x16,&pppplStack_a0);
        param_2 = &ppppplStack_a8;
        FUN_1090df928();
        pppplStack_a0 = (long ****)((long)pppplStack_a0 + 1);
        if (((ulong)ppppplStack_a8[0x1f] & 1) == 0) {
          func_0x0001090e178c();
          bVar21 = 1;
        }
        else {
          if (*(char *)(pppppplVar12 + 0xd) == '\x01') {
            pppppplVar13 = (long ******)ppppplStack_a8;
            if (((ulong)ppppplStack_a8[0x1f] & 1) == 0) goto LAB_1090dfd8c;
            param_2 = (long ******)ppppplStack_a8[0x1e];
            func_0x0001090dce54(ppppplStack_a8[7]);
          }
          FUN_1090e1494(&ppppplStack_98,ppppplStack_a8);
          bVar21 = bStack_70;
          lVar20 = lStack_80;
          ppppplVar10 = ppppplStack_98;
          ppppplVar15 = (long *****)(lStack_80 + (long)ppppplVar15);
          if ((bStack_70 & 1) == 0) {
            if (*(char *)(pppppplVar12 + 0xd) == '\x01') {
              pppppplVar13 = (long ******)ppppplStack_a8;
              if (((ulong)ppppplStack_a8[0x1f] & 1) == 0) goto LAB_1090dfd8c;
              pppppplVar13 = (long ******)(ppppplStack_a8 + 0x1e);
LAB_1090dfc2c:
              ppppplVar14 = *pppppplVar13;
              if (ppppplVar14 == (long *****)0x0) goto LAB_1090dfc74;
              *(undefined1 *)((long)pppppplVar12 + 0x15b) = 1;
              pppplVar17 = (long ****)ppppplStack_a8[7][3];
              uVar19 = 0;
              if (pppplVar17 != (long ****)0x0) {
                uVar19 = (ulong)(lStack_88 + (long)ppppplStack_98) / (ulong)pppplVar17;
              }
              param_2 = (long ******)(uVar19 * (long)pppplVar17);
              param_3 = (long *****)((long)pppplStack_78 - (long)param_2);
              if ((long *****)((long)param_2 + (long)ppppplVar14) <= pppplStack_78) {
                param_3 = ppppplVar14;
              }
              func_0x0001090e19d8();
            }
            else {
              pppppplVar13 = pppppplVar1;
              if (*(int *)(ppppplStack_a8 + 0x1b) == 1) goto LAB_1090dfc2c;
              if (*(int *)(ppppplStack_a8 + 0x1b) == 0) {
                lVar2 = 0x120;
                if (*(char *)((long)pppppplVar12 + 0x15b) == '\0') {
                  lVar2 = 0x118;
                }
                if (ppppplVar15 < *(long ******)((long)pppppplVar12 + lVar2)) goto LAB_1090dfc2c;
              }
LAB_1090dfc74:
              *(undefined1 *)((long)pppppplVar12 + 0x15b) = 0;
            }
            pppplVar17 = (long ****)ppppplStack_a8[7][2];
            pppplVar3 = (long ****)ppppplStack_a8[7][3];
            ppplVar7 = (long ***)0x0;
            if (pppplVar3 != (long ****)0x0) {
              ppplVar7 = (long ***)((ulong)ppppplVar10 / (ulong)pppplVar3);
            }
            ppplVar8 = (long ***)0x0;
            if (pppplVar3 != (long ****)0x0) {
              ppplVar8 = (long ***)
                         ((ulong)((long)ppppplStack_90 +
                                 (long)*pppppplVar1 + (long)pppplVar3 + lVar20 + -1) /
                         (ulong)pppplVar3);
            }
            pppplVar17[6] = ppplVar7;
            pppplVar17[7] = ppplVar8;
          }
          bVar21 = bVar21 ^ 1;
        }
        FUN_1090e0858(ppppplStack_a8);
      } while (bVar21 == 0);
      pppppplVar13 = pppppplVar12 + 0x1c;
      FUN_1090df780();
      ppppplVar15 = pppppplVar12[0x1c];
      ppppplVar16 = pppppplVar12[0x1f];
      ppppplStack_98 = (long *****)pppppplVar13;
      ppppplStack_90 = (long *****)param_2;
      while (ppppplVar10 = ppppplStack_90,
            uVar11 = (long ******)ppppplStack_98 ==
                     (long ******)((long)ppppplVar15 + (long)ppppplVar16), !(bool)uVar11) {
        FUN_1090e01e4(pppppplVar12 + 0x16,ppppplStack_90);
        func_0x0001090e10b4(pppppplVar12[0x16]);
        if ((bool)uVar11) {
          FUN_1090e1298(ppppplVar10[1]);
          pppplVar17 = (long ****)ppppplVar10[1][7];
          ppplVar7 = pppplVar17[2];
          ppplVar8 = pppplVar17[3];
          pplVar9 = (long **)0x0;
          if (ppplVar8 != (long ***)0x0) {
            pplVar9 = (long **)(((long)ppplVar8 - 1U) / (ulong)ppplVar8);
          }
          ppplVar7[6] = (long **)0x0;
          ppplVar7[7] = pplVar9;
        }
        FUN_1090df7ac(&ppppplStack_98);
      }
      FUN_1090dddec(pppppplVar12[0xe]);
      FUN_1090e0454(&ppppplStack_98,pppppplVar12 + 0x1c);
      FUN_1090e0490(pppppplVar12 + 0x1c,pppppplVar12 + 0x16);
      FUN_1090e0490(pppppplVar12 + 0x16,&ppppplStack_98);
      pppppplVar13 = &ppppplStack_98;
      FUN_1090e03d8();
    }
  }
  else {
    *(undefined1 *)((long)pppppplVar12 + 0x159) = 1;
  }
  func_0x0001090e0fb0(uStack_68);
  if ((bool)uVar11) {
    return;
  }
  ___stack_chk_fail();
LAB_1090dfd8c:
  func_0x0001080da3e4();
  func_0x0001090dfdec();
  ppppplVar15 = *pppppplVar13;
  pppplVar17 = *param_3;
  if ((pppplVar17 != (long ****)0x0) && (pppplVar17[2] != (long ***)0x0)) {
    ppplVar7 = pppplVar17[2] + 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(ppplVar7,0x10);
      if (bVar6) {
        *ppplVar7 = (long **)((long)*ppplVar7 + 1);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  func_0x0001090e1064(ppppplVar15);
  if (pppplVar17 != (long ****)0x0) {
    func_0x0001090e1058();
  }
  return;
}



/* Entry: 10909c758; end: 10909c7b3; -[SCNeoMediaDataManager computeMetrics] */

void FUN_10909c758(undefined8 *param_1,long param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  undefined1 uStack_28;
  
  FUN_1090dfebc(&uStack_40,*(undefined8 *)(param_2 + 8));
  *param_1 = uStack_40;
  param_1[1] = (double)lStack_30 / 1000000000.0;
  param_1[2] = uStack_38;
  *(undefined1 *)(param_1 + 3) = uStack_28;
  return;
}



/* Entry: 10909c7b4; end: 10909c7bb; -[SCNeoMediaDataManager configuration] */

undefined8 FUN_10909c7b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10909c7bc; end: 10909c7f3; -[SCNeoMediaDataManager .cxx_destruct] */

undefined8 FUN_10909c7bc(long param_1)

{
  undefined8 unaff_x19;
  
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
  func_0x00010909cccc(param_1 + 8);
  FUN_10909c854();
  return unaff_x19;
}



/* Entry: 10909c7f4; end: 10909c7ff; -[SCNeoMediaDataManager .cxx_construct] */

void FUN_10909c7f4(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



/* Entry: 10909c800; end: 10909c813;  */

void FUN_10909c800(void)

{
  func_0x00010909c81c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10909c814; end: 10909c82f;  */

void FUN_10909c814(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010909ccac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10909c830; end: 10909c853;  */

void FUN_10909c830(void)

{
  func_0x00010909cccc();
  FUN_10909c854();
  return;
}



/* Entry: 10909c854; end: 10909c85f;  */

void FUN_10909c854(long param_1)

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



/* Entry: 10909c860; end: 10909c887;  */

long FUN_10909c860(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10909c888; end: 10909c96f;  */

void FUN_10909c888(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  
  puVar3 = (undefined8 *)0x40;
  __Znwm();
  plVar5 = puVar3 + 1;
  *plVar5 = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_FUN_110ad7830;
  puVar4 = puVar3 + 3;
  *puVar4 = &PTR_DAT_110ad7880;
  puVar3[4] = 0;
  puVar3[5] = 0;
  _objc_retain(param_3);
  _objc_initWeak(puVar3 + 6,param_2);
  _objc_initWeak(puVar3 + 7,param_3);
  func_0x00010909cc74();
  if ((puVar3[5] == 0) || (*(long *)(puVar3[5] + 8) == -1)) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    puStack_60 = puVar4;
    puStack_58 = puVar3;
    func_0x000107c278e4(puVar3 + 4,&puStack_60);
    func_0x000107c278ec(&puStack_60);
  }
  *param_1 = puVar4;
  return;
}



/* Entry: 10909c970; end: 10909c973;  */

void FUN_10909c970(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ad7830;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10909c974; end: 10909c987;  */

void FUN_10909c974(void)

{
  FUN_10909cbd0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10909c988; end: 10909c993;  */

void FUN_10909c988(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010909ccac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10909c994; end: 10909c9a7;  */

void FUN_10909c994(void)

{
  FUN_10909cb80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10909c9a8; end: 10909ca2b;  */

void FUN_10909c9a8(void)

{
  long in_x5;
  
  func_0x00010909cc60();
  func_0x00010909cc54();
  func_0x00010c0c48c0((double)in_x5 / 1000000000.0);
  func_0x00010909cc4c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10909ca2c; end: 10909cb27;  */

void FUN_10909ca2c(void)

{
  undefined8 in_x3;
  undefined8 **ppuStack_58;
  ulong uStack_50;
  byte bStack_41;
  
  func_0x00010909cc60();
  func_0x00010909cc54();
  func_0x00010b99f8ac(&ppuStack_58,in_x3);
  if (-1 < (char)bStack_41) {
    uStack_50 = (ulong)bStack_41;
    ppuStack_58 = &ppuStack_58;
  }
  FUN_109095a94(ppuStack_58,uStack_50);
  _objc_retainAutoreleasedReturnValue();
  FUN_109096480();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c4880();
  func_0x00010909ccb0();
  func_0x00010909cc74();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_58);
  func_0x00010909cc4c();
  func_0x00010909cc44();
  return;
}



/* Entry: 10909cb28; end: 10909cb7f;  */

void FUN_10909cb28(void)

{
  func_0x00010909cc60();
  func_0x00010909cc54();
  func_0x00010c0c48a0();
  func_0x00010909cc4c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10909cb80; end: 10909cbcf;  */

undefined8 * FUN_10909cb80(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ad7880;
  _objc_storeWeak(param_1 + 4,0);
  _objc_destroyWeak(param_1 + 4);
  _objc_destroyWeak(param_1 + 3);
  func_0x000107c278e8(param_1 + 1);
  return param_1;
}



/* Entry: 10909cbd0; end: 10909cbdf;  */

void FUN_10909cbd0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ad7830;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10909cbe0; end: 10909cc03;  */

void FUN_10909cbe0(long param_1)

{
  func_0x00010909cccc();
  if (param_1 != 0) {
    func_0x000107c3105c();
  }
  return;
}



/* Entry: 10909cc04; end: 10909cc27;  */

void FUN_10909cc04(void)

{
  func_0x00010909cccc();
  func_0x00010909cc28();
  return;
}



/* Entry: 10909cc28; end: 10909ccd7;  */

void FUN_10909cc28(long param_1)

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



/* Entry: 10909ccd8; end: 10909cda7; -[SCNeoMediaDataProviderRequest initWithRequestId:byteOffset:chunkSizeHint:completionQueue:completion:isDataSizeRequest:] */

undefined1 *
FUN_10909ccd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_6);
  func_0x00010909d4c8();
  puStack_58 = PTR_PTR_112700458;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_6;
    _objc_release(uVar2);
    func_0x00010909d4c8();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_7;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x10) = param_8;
  }
  func_0x00010909d4b8();
  func_0x00010909d4c0();
  return (undefined1 *)puVar1;
}



/* Entry: 10909cda8; end: 10909cdd7; -[SCNeoMediaDataProviderRequest setCancelBlock:] */

void FUN_10909cda8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retainBlock();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10909cdd8; end: 10909cdef; -[SCNeoMediaDataProviderRequest cancelBlock] */

void FUN_10909cdd8(long param_1)

{
  _objc_retainBlock(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10909cdf0; end: 10909cdf7; -[SCNeoMediaDataProviderRequest requestId] */

undefined8 FUN_10909cdf0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10909cdf8; end: 10909cdff; -[SCNeoMediaDataProviderRequest byteOffset] */

undefined8 FUN_10909cdf8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10909ce00; end: 10909ce07; -[SCNeoMediaDataProviderRequest chunkSizeHint] */

undefined8 FUN_10909ce00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10909ce08; end: 10909ce0f; -[SCNeoMediaDataProviderRequest completionQueue] */

undefined8 FUN_10909ce08(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10909ce10; end: 10909ce17; -[SCNeoMediaDataProviderRequest completion] */

undefined8 FUN_10909ce10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10909ce18; end: 10909ce1f; -[SCNeoMediaDataProviderRequest isDataSizeRequest] */

undefined1 FUN_10909ce18(long param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}



/* Entry: 10909ce20; end: 10909ce53; -[SCNeoMediaDataProviderRequest .cxx_destruct] */

void FUN_10909ce20(long param_1)

{
  func_0x00010909d514(param_1 + 0x38);
  func_0x00010909d514(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10909ce54; end: 10909ceef; -[SCNeoMediaDataProviderRequestQueue init] */

undefined1 * FUN_10909ce54(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112700460;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126dd3e0;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    func_0x00010909d51c(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    func_0x00010909d51c(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10909cef0; end: 10909cfe7; -[SCNeoMediaDataProviderRequestQueue _doEnqueueRequestWithByteOffset:chunkSizeHint:completionQueue:completion:isDataSizeRequest:] */

void FUN_10909cef0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_5);
  func_0x00010909d4c8();
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  lVar1 = *(long *)(param_1 + 8) + 1;
  *(long *)(param_1 + 8) = lVar1;
  puVar2 = PTR_PTR_1126dd3e8;
  _objc_alloc(PTR_PTR_1126dd3e8);
  func_0x00010c03eee0();
  func_0x00010c1d0560(*(undefined8 *)(param_1 + 0x10),param_2,puVar2,lVar1);
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x18),param_2,puVar2);
  _objc_sync_exit(param_1);
  func_0x00010909d4d0();
  func_0x00010909d4b8();
  func_0x00010909d4c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10909cfe8; end: 10909d007; -[SCNeoMediaDataProviderRequestQueue enqueueRequestWithByteOffset:chunkSizeHint:completionQueue:completion:] */

void FUN_10909cfe8(void)

{
  func_0x00010be054c0();
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10909d008; end: 10909d037; -[SCNeoMediaDataProviderRequestQueue enqueueDataSizeWithCompletionQueue:completion:] */

void FUN_10909d008(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010be054c0(param_1,param_2,0,0,param_3,param_4,1);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10909d038; end: 10909d087; -[SCNeoMediaDataProviderRequestQueue topRequest] */

void FUN_10909d038(long param_1)

{
  _objc_retain();
  _objc_sync_enter(param_1);
  func_0x00010bfb1920(*(undefined8 *)(param_1 + 0x18));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010909d4e4();
  func_0x00010909d4c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10909d088; end: 10909d13b; -[SCNeoMediaDataProviderRequestQueue associateCancelBlock:forRequestId:] */

void FUN_10909d088(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  func_0x00010909d4c8();
  _objc_sync_enter(param_1);
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c0dff20(lVar1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    func_0x00010909d4f0();
    func_0x00010909d4b8();
    (**(code **)(param_3 + 0x10))(param_3);
  }
  else {
    func_0x00010c177f80(lVar1,param_2,param_3);
    func_0x00010909d4d0();
    func_0x00010909d4f0();
    func_0x00010909d4b8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10909d13c; end: 10909d1cf; -[SCNeoMediaDataProviderRequestQueue _removeRequestWithId:] */

void FUN_10909d13c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain();
  _objc_sync_enter(param_1);
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c0dff20(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x10),param_2,param_3);
  if (lVar1 != 0) {
    func_0x00010c12d360(*(undefined8 *)(param_1 + 0x18),param_2,lVar1);
  }
  _objc_sync_exit(param_1);
  func_0x00010909d4c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10909d1d0; end: 10909d24b; -[SCNeoMediaDataProviderRequestQueue cancelRequestWithId:] */

void FUN_10909d1d0(long param_1)

{
  long lVar1;
  
  func_0x00010be8d140();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf2dfa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010bf2dfa0();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar1 + 0x10))();
    FUN_10909d4b8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10909d24c; end: 10909d3c7; -[SCNeoMediaDataProviderRequestQueue completeRequestWithId:data:totalDataSize:isEOF:error:] */

void FUN_10909d24c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined **ppuVar1;
  long lVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  ppuVar1 = &puStack_80;
  _objc_retain(param_4);
  func_0x00010909d4c8();
  func_0x00010be8d140();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 != 0) {
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_10909d3c8;
    puStack_68 = &UNK_110ad78e8;
    func_0x00010909d4c8();
    uStack_60 = param_7;
    _objc_retain(param_1);
    lStack_58 = param_1;
    uStack_48 = param_5;
    _objc_retain(param_4);
    uStack_50 = param_4;
    _objc_retainBlock();
    lVar2 = param_1;
    func_0x00010bf44140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      (**(code **)((long)ppuVar1 + 0x10))(ppuVar1);
    }
    else {
      func_0x00010bf44140(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x000107c27d8c();
      _objc_release(param_1);
    }
    _objc_release(ppuVar1);
    _objc_release(uStack_50);
    _objc_release(lStack_58);
    _objc_release(uStack_60);
  }
  func_0x00010909d4d0();
  func_0x00010909d4b8();
  func_0x00010909d4c0();
  return;
}



/* Entry: 10909d3c8; end: 10909d48b;  */

void FUN_10909d3c8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if (*(long *)(param_1 + 0x20) == 0) {
    func_0x00010c070200();
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf43fe0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    if ((int)uVar2 == 0) {
      func_0x00010c0e4e80(uVar1,param_2,*(undefined8 *)(param_1 + 0x30));
    }
    else {
      func_0x00010c0e34c0(uVar1,param_2,*(undefined8 *)(param_1 + 0x38));
    }
  }
  else {
    func_0x00010bf43fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c09e4e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e4ec0(uVar2,param_2,uVar1);
    FUN_10909d4b8();
    uVar1 = uVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10909d48c; end: 10909d4b7; -[SCNeoMediaDataProviderRequestQueue .cxx_destruct] */

void FUN_10909d48c(long param_1)

{
  func_0x00010909d514(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10909d4b8; end: 10909d523;  */

void FUN_10909d4b8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10909d524; end: 10909d567; -[SCNeoMediaDefaultStreamSelectorEntry initWithEntry:] */

void FUN_10909d524(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112700468;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  return;
}



/* Entry: 10909d568; end: 10909d56f; -[SCNeoMediaDefaultStreamSelectorEntry streamId] */

undefined8 FUN_10909d568(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10909d570; end: 10909d577; -[SCNeoMediaDefaultStreamSelectorEntry bitrate] */

undefined8 FUN_10909d570(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10909d578; end: 10909d5ef; -[SCNeoMediaDefaultStreamSelector initWithBandwidthCalculator:] */

undefined1 * FUN_10909d578(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112700470;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
  }
  func_0x00010909d994();
  return (undefined1 *)puVar1;
}



/* Entry: 10909d5f0; end: 10909d62f; -[SCNeoMediaDefaultStreamSelector availableMediaBufferLengthDidChange:availableBufferDuration:forStreamId:] */

void FUN_10909d5f0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c25c580();
  if (param_4 == lVar1) {
    *(undefined8 *)(param_1 + 0x20) = param_3;
  }
  return;
}



/* Entry: 10909d630; end: 10909d637; -[SCNeoMediaDefaultStreamSelector didUpdateMediaBufferWithDownloadedBytesSize:latency:] */

void FUN_10909d630(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_addLoadLatency_forDownloadedSize_11259c028);
  return;
}



/* Entry: 10909d638; end: 10909d737; -[SCNeoMediaDefaultStreamSelector initializeWithEntries:entriesLength:startingStreamId:] */

void FUN_10909d638(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126dd3f0;
  for (; PTR_PTR_1126dd3f0 = puVar2, param_4 != 0; param_4 = param_4 + -1) {
    _objc_alloc();
    func_0x00010c010140();
    func_0x00010befa120(puVar1,param_2,puVar2);
    puVar3 = puVar2;
    func_0x00010c25c580();
    if (puVar3 == param_5) {
      _objc_retain(puVar2);
      uVar4 = *(undefined8 *)(param_1 + 0x18);
      *(undefined **)(param_1 + 0x18) = puVar2;
      _objc_release(uVar4);
    }
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126dd3f0;
  }
  puVar2 = puVar1;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(param_1 + 8);
  *(undefined **)(param_1 + 8) = puVar2;
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10909d738; end: 10909d943; -[SCNeoMediaDefaultStreamSelector update] */

long FUN_10909d738(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong unaff_x21;
  ulong uVar10;
  long lVar11;
  long lVar12;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = *(long *)(param_1 + 0x10);
  func_0x00010bf45820();
  lVar3 = lVar3 * 8;
  if (0 < lVar3) {
    unaff_x21 = *(ulong *)(param_1 + 8);
    _objc_retain(unaff_x21);
    uVar4 = unaff_x21;
    func_0x00010bf52a60();
    lVar6 = lRam0000000000000000;
    if (uVar4 != 0) {
      uVar10 = 0;
      lVar12 = 0;
      lVar9 = 0;
      do {
        uVar8 = 0;
        do {
          if (lRam0000000000000000 != lVar6) {
            _objc_enumerationMutation(unaff_x21);
          }
          lVar11 = *(long *)(uVar8 * 8);
          lVar5 = lVar11;
          func_0x00010bf1c7c0();
          uVar2 = lVar3 - lVar5;
          uVar1 = -uVar2;
          if (-1 < (long)uVar2) {
            uVar1 = uVar2;
          }
          if (lVar9 == 0) {
LAB_10909d838:
            _objc_retain(lVar11);
            FUN_10909d980();
            lVar9 = lVar11;
            uVar10 = uVar1;
            lVar12 = lVar5;
          }
          else if ((lVar3 - lVar12 != 0 && lVar12 <= lVar3) == (lVar3 - lVar5 == 0 || lVar3 < lVar5)
                  ) {
            if (lVar3 - lVar12 == 0 || lVar3 < lVar12) goto LAB_10909d838;
          }
          else if (uVar1 < uVar10) goto LAB_10909d838;
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar4);
        uVar4 = unaff_x21;
        func_0x00010bf52a60();
      } while (uVar4 != 0);
      _objc_release(unaff_x21);
      unaff_x21 = uVar10;
      if (lVar9 == 0) goto LAB_10909d8b4;
      _objc_retain(lVar9);
      unaff_x21 = *(ulong *)(param_1 + 0x18);
      *(long *)(param_1 + 0x18) = lVar9;
    }
    _objc_release(unaff_x21);
  }
LAB_10909d8b4:
  lVar6 = *(long *)(param_1 + 0x18);
  func_0x00010c25c580();
  lVar3 = lVar6;
  FUN_10909d980();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
    ___stack_chk_fail();
    _objc_release(unaff_x21);
    FUN_10909d980();
    __Unwind_Resume(lVar3);
    _objc_storeStrong(lVar3 + 0x18,0);
    _objc_storeStrong(lVar3 + 0x10,0);
    lVar3 = lVar3 + 8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_storeStrong_11034d330)(lVar3,0);
    return lVar3;
  }
  return lVar6;
}



/* Entry: 10909d944; end: 10909d97f; -[SCNeoMediaDefaultStreamSelector .cxx_destruct] */

void FUN_10909d944(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10909d980; end: 10909d99b;  */

void FUN_10909d980(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10909d99c; end: 10909daa3; -[SCNeoMediaDemuxer initWithBuffer:mediaInfoResolver:blockAllocatorPool:instruments:] */

undefined1 *
FUN_10909d99c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_112700478;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
  }
  func_0x00010909e100();
  func_0x00010909e0f0();
  func_0x00010909e110();
  func_0x00010909e0e0();
  return (undefined1 *)puVar1;
}



/* Entry: 10909daa4; end: 10909dab3; -[SCNeoMediaDemuxer parseBufferWithError:] */

void FUN_10909daa4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0f3ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_parseBuffer_withError__11261a9d0,
             *(undefined8 *)(param_1 + 8),param_3);
  return;
}



/* Entry: 10909dab4; end: 10909dbd7; -[SCNeoMediaDemuxer seekToTime:toleranceBefore:toleranceAfter:inTrackId:] */

void FUN_10909dab4(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  lVar1 = param_2;
  func_0x00010bec5340(param_2,param_3,param_7);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    uStack_88 = param_4[1];
    uStack_90 = *param_4;
    uStack_80 = param_4[2];
    uStack_a8 = param_5[1];
    uStack_b0 = *param_5;
    uStack_a0 = param_5[2];
    uStack_c8 = param_6[1];
    uStack_d0 = *param_6;
    uStack_c0 = param_6[2];
    func_0x00010c1572c0(&uStack_70,lVar1,param_3,&uStack_90,&uStack_b0,&uStack_d0);
    param_4[1] = uStack_68;
    *param_4 = uStack_70;
    param_4[2] = uStack_60;
    func_0x00010bf99fe0(*(undefined8 *)(param_2 + 0x20));
    _objc_retainAutoreleasedReturnValue();
    uStack_68 = param_4[1];
    uStack_70 = *param_4;
    uStack_60 = param_4[2];
    func_0x00010bf7a580();
    func_0x00010909e108();
  }
  uVar2 = *param_4;
  param_1[1] = param_4[1];
  *param_1 = uVar2;
  param_1[2] = param_4[2];
  func_0x00010909e0e0();
  return;
}



/* Entry: 10909dbd8; end: 10909dd23; -[SCNeoMediaDemuxer _streamForTrackId:] */

void FUN_10909dbd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar1 = *(undefined **)(param_1 + 0x28);
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126dd3f8;
    _objc_opt_new();
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    *(undefined **)(param_1 + 0x28) = puVar1;
    _objc_release(uVar5);
    puVar1 = *(undefined **)(param_1 + 0x28);
  }
  func_0x00010c296fe0(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    lVar2 = *(long *)(param_1 + 0x10);
    func_0x00010c277f80(lVar2,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(param_1 + 0x10);
    func_0x00010c1583e0(lVar3,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = *(long *)(param_1 + 0x10);
    func_0x00010c1497e0(lVar4,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = (undefined *)0x0;
    if (((lVar2 != 0) && (lVar3 != 0)) && (lVar4 != 0)) {
      puVar1 = PTR_PTR_1126dd400;
      _objc_alloc(PTR_PTR_1126dd400);
      func_0x00010c0413e0();
      func_0x00010c220260(*(undefined8 *)(param_1 + 0x28),param_2,puVar1,param_3);
    }
    func_0x00010909e108();
    func_0x00010909e0f0();
    func_0x00010909e0e0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10909dd24; end: 10909dd6b; -[SCNeoMediaDemuxer hasNextSampleBufferForTrackId:] */

undefined8 FUN_10909dd24(undefined8 param_1)

{
  func_0x00010bec5340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd9740();
  func_0x00010909e0e0();
  return param_1;
}


