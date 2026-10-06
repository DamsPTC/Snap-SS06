/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107b3c044; end: 107b3c053; -[SCOperaRemoteVideoLayerViewController mediaViewFrame] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b3c044(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0c7150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276aaac),PTR_s_mediaViewFrame_11260f668);
  return;
}



/* Entry: 107b3c054; end: 107b3c063; -[SCOperaRemoteVideoLayerViewController mediaHeightToWidthAspectRatio] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b3c054(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0c5150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276aaac),PTR_s_mediaHeightToWidthAspectRatio_11260ee68
            );
  return;
}



/* Entry: 107b3c064; end: 107b3c06b; -[SCOperaRemoteVideoLayerViewController isOverlay] */

undefined8 FUN_107b3c064(void)

{
  return 0;
}



/* Entry: 107b3c06c; end: 107b3c0d7; -[SCOperaRemoteVideoLayerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b3c06c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11276aab0);
  _objc_storeStrong(param_1 + _DAT_11276aaa0,0);
  _objc_storeStrong(param_1 + _DAT_11276aaa4,0);
  _objc_storeStrong(param_1 + _DAT_11276aaac,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276aab4,0);
  return;
}



/* Entry: 107b3c0d8; end: 107b3c13b;  */

bool FUN_107b3c0d8(double param_1,double param_2,undefined8 param_3)

{
  bool bVar1;
  double dVar2;
  
  dVar2 = param_1;
  _objc_retain();
  func_0x00010c0e1120(param_3);
  if (param_2 <= dVar2) {
    bVar1 = false;
  }
  else {
    func_0x00010c0e1120(param_3);
    bVar1 = param_1 <= dVar2;
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 107b3c13c; end: 107b3c38f;  */

undefined1 * FUN_107b3c13c(double param_1,double param_2,undefined1 *param_3,int param_4)

{
  bool bVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 **ppuVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined1 *puVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 *puStack_2e0;
  undefined *puStack_2d8;
  undefined1 *puStack_2d0;
  undefined1 *puStack_2c8;
  undefined1 **ppuStack_2c0;
  code *pcStack_2b8;
  undefined8 uStack_2b0;
  long lStack_2a8;
  long *plStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  long lStack_1e8;
  undefined1 *puStack_170;
  code *pcStack_168;
  undefined8 uStack_160;
  long lStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_98;
  
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar14 = param_2;
  _objc_retain();
  dVar10 = 0.0;
  lStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  plStack_150 = (long *)0x0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  _objc_retain(param_3);
  puVar2 = param_3;
  func_0x00010bf52a60();
  if (puVar2 == (undefined1 *)0x0) {
    puVar9 = (undefined1 *)0x0;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    lVar8 = *plStack_150;
    do {
      puVar9 = (undefined1 *)0x0;
      do {
        if (*plStack_150 != lVar8) {
          _objc_enumerationMutation(param_3);
        }
        puVar7 = *(undefined1 **)(lStack_158 + (long)puVar9 * 8);
        dVar11 = dVar10;
        if (param_2 < param_1) {
          func_0x00010c0e1120(puVar7);
          dVar10 = ABS(dVar10 - param_2);
          dVar11 = dVar10;
          if (dVar10 <= 0.002) {
            _objc_release(param_3);
            puVar9 = (undefined1 *)0x0;
            goto LAB_107b3c334;
          }
        }
        func_0x00010c0e1120(puVar7);
        dVar12 = dVar11;
        func_0x00010c0e1120(puVar6);
        if (param_2 < param_1) {
          dVar10 = dVar12;
          func_0x00010c0e1120();
          if (dVar10 < param_2 && (dVar12 < dVar11 || puVar6 == (undefined1 *)0x0))
          goto LAB_107b3c2bc;
        }
        else {
          puVar3 = puVar7;
          dVar10 = param_1;
          dVar14 = param_2;
          FUN_107b3c0d8();
          if ((int)puVar3 != 0 && (dVar12 < dVar11 || puVar6 == (undefined1 *)0x0)) {
LAB_107b3c2bc:
            _objc_retain(puVar7);
            _objc_release(puVar6);
            puVar6 = puVar7;
          }
          else if (param_4 != 0) {
            puVar3 = param_3;
            func_0x00010c089820();
            _objc_retainAutoreleasedReturnValue();
            if ((puVar7 != puVar3) || (func_0x00010c0e1120(puVar7), param_1 <= dVar10)) {
              _objc_release(puVar3);
            }
            else {
              _objc_release(puVar3);
              if (puVar6 == (undefined1 *)0x0) {
                _objc_retain(puVar7);
                puVar6 = puVar7;
              }
            }
          }
        }
        puVar9 = puVar9 + 1;
      } while (puVar2 != puVar9);
      puVar2 = param_3;
      func_0x00010bf52a60();
      puVar9 = puVar6;
    } while (puVar2 != (undefined1 *)0x0);
  }
  _objc_release(param_3);
  _objc_retain(puVar9);
  puVar6 = puVar9;
LAB_107b3c334:
  _objc_release(puVar6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_98) {
    ___stack_chk_fail();
    puVar5 = &uStack_2b0;
    pcStack_168 = FUN_107b3c390;
    lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_170 = &stack0xfffffffffffffff0;
    _objc_retain();
    dVar11 = dVar14;
    if (dVar10 <= dVar14) {
      dVar11 = dVar10;
    }
    dVar12 = 0.0;
    lStack_2a8 = 0;
    uStack_2b0 = 0;
    uStack_298 = 0;
    plStack_2a0 = (long *)0x0;
    dVar15 = dVar10;
    if (dVar10 <= dVar14) {
      dVar15 = dVar14;
    }
    uStack_288 = 0;
    uStack_290 = 0;
    uStack_278 = 0;
    uStack_280 = 0;
    _objc_retain(param_3);
    puVar2 = param_3;
    func_0x00010bf52a60();
    if (puVar2 == (undefined1 *)0x0) {
      puVar6 = (undefined1 *)0x0;
    }
    else {
      puVar6 = (undefined1 *)0x0;
      lVar8 = *plStack_2a0;
      do {
        puVar9 = (undefined1 *)0x0;
        do {
          if (*plStack_2a0 != lVar8) {
            _objc_enumerationMutation(param_3);
          }
          puVar7 = *(undefined1 **)(lStack_2a8 + (long)puVar9 * 8);
          func_0x00010c0e1120(puVar7);
          if (dVar10 <= dVar14) {
            dVar13 = dVar12;
            func_0x00010c0e1120(puVar6);
            bVar1 = dVar13 < dVar12;
          }
          else {
            dVar12 = ABS(dVar12 - dVar14);
            if (dVar12 <= 0.002) {
              _objc_release(param_3);
              puVar9 = (undefined1 *)0x0;
              goto LAB_107b3c528;
            }
            func_0x00010c0e1120(puVar7);
            dVar13 = dVar12;
            func_0x00010c0e1120(puVar6);
            bVar1 = dVar12 < dVar13;
          }
          puVar3 = puVar7;
          dVar12 = dVar11;
          FUN_107b3c0d8(dVar11,dVar15);
          if (((int)puVar3 != 0) && ((bool)(puVar6 == (undefined1 *)0x0 | bVar1))) {
            _objc_retain(puVar7);
            _objc_release(puVar6);
            puVar6 = puVar7;
          }
          puVar9 = puVar9 + 1;
        } while (puVar2 != puVar9);
        puVar2 = param_3;
        puVar5 = &uStack_2b0;
        func_0x00010bf52a60();
      } while (puVar2 != (undefined1 *)0x0);
    }
    _objc_release(param_3);
    _objc_retain(puVar6);
    puVar9 = puVar6;
LAB_107b3c528:
    _objc_release(puVar6);
    puVar2 = param_3;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1e8) {
      ___stack_chk_fail();
      ppuVar4 = &puStack_2e0;
      pcStack_2b8 = FUN_107b3c580;
      puStack_2d0 = puVar6;
      puStack_2c8 = param_3;
      ppuStack_2c0 = &puStack_170;
      _objc_retain(puVar5);
      puStack_2d8 = PTR_PTR_1126f9f60;
      puStack_2e0 = puVar2;
      _objc_msgSendSuper2(&puStack_2e0,PTR_s_init_1125d9248);
      if (ppuVar4 != (undefined1 **)0x0) {
        *(undefined2 *)((long)ppuVar4 + 0x30) = 0;
        *(undefined8 *)((long)ppuVar4 + 0x28) = 0;
        *(undefined8 *)((long)ppuVar4 + 0x18) = 0;
        *(undefined1 *)((long)ppuVar4 + 0x10) = 0;
        puVar2 = (undefined1 *)puVar5;
        func_0x00010c067f00();
        *(long *)((long)ppuVar4 + 0x20) = (long)(int)puVar2;
        _objc_retain(ppuVar4);
      }
      _objc_release(puVar5);
      _objc_release(ppuVar4);
      return (undefined1 *)ppuVar4;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return puVar9;
}



/* Entry: 107b3c390; end: 107b3c57f;  */

undefined1 * FUN_107b3c390(double param_1,double param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  undefined1 *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  long lStack_180;
  undefined *puStack_178;
  undefined1 *puStack_170;
  long lStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_88;
  
  puVar5 = &uStack_150;
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  dVar12 = param_2;
  if (param_1 <= param_2) {
    dVar12 = param_1;
  }
  dVar10 = 0.0;
  lStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  plStack_140 = (long *)0x0;
  dVar13 = param_1;
  if (param_1 <= param_2) {
    dVar13 = param_2;
  }
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60();
  if (lVar2 == 0) {
    puVar6 = (undefined1 *)0x0;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    lVar8 = *plStack_140;
    do {
      lVar9 = 0;
      do {
        if (*plStack_140 != lVar8) {
          _objc_enumerationMutation(param_3);
        }
        puVar7 = *(undefined1 **)(lStack_148 + lVar9 * 8);
        func_0x00010c0e1120(puVar7);
        if (param_1 <= param_2) {
          dVar11 = dVar10;
          func_0x00010c0e1120(puVar6);
          bVar1 = dVar11 < dVar10;
        }
        else {
          dVar10 = ABS(dVar10 - param_2);
          if (dVar10 <= 0.002) {
            _objc_release(param_3);
            puVar7 = (undefined1 *)0x0;
            goto LAB_107b3c528;
          }
          func_0x00010c0e1120(puVar7);
          dVar11 = dVar10;
          func_0x00010c0e1120(puVar6);
          bVar1 = dVar10 < dVar11;
        }
        puVar3 = puVar7;
        dVar10 = dVar12;
        FUN_107b3c0d8(dVar12,dVar13);
        if (((int)puVar3 != 0) && ((bool)(puVar6 == (undefined1 *)0x0 | bVar1))) {
          _objc_retain(puVar7);
          _objc_release(puVar6);
          puVar6 = puVar7;
        }
        lVar9 = lVar9 + 1;
      } while (lVar2 != lVar9);
      lVar2 = param_3;
      puVar5 = &uStack_150;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(param_3);
  _objc_retain(puVar6);
  puVar7 = puVar6;
LAB_107b3c528:
  _objc_release(puVar6);
  lVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return puVar7;
  }
  ___stack_chk_fail();
  plVar4 = &lStack_180;
  pcStack_158 = FUN_107b3c580;
  puStack_170 = puVar6;
  lStack_168 = param_3;
  puStack_160 = &stack0xfffffffffffffff0;
  _objc_retain(puVar5);
  puStack_178 = PTR_PTR_1126f9f60;
  lStack_180 = lVar2;
  _objc_msgSendSuper2(&lStack_180,PTR_s_init_1125d9248);
  if (plVar4 != (long *)0x0) {
    *(undefined2 *)((long)plVar4 + 0x30) = 0;
    *(undefined8 *)((long)plVar4 + 0x28) = 0;
    *(undefined8 *)((long)plVar4 + 0x18) = 0;
    *(undefined1 *)((long)plVar4 + 0x10) = 0;
    puVar6 = (undefined1 *)puVar5;
    func_0x00010c067f00();
    *(long *)((long)plVar4 + 0x20) = (long)(int)puVar6;
    _objc_retain(plVar4);
  }
  _objc_release(puVar5);
  _objc_release(plVar4);
  return (undefined1 *)plVar4;
}



/* Entry: 107b3c580; end: 107b3c61f; -[SCOperaVideoAutoAdvanceManager initWithConfigProvider:] */

undefined1 * FUN_107b3c580(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f9f60;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined2 *)((long)puVar1 + 0x30) = 0;
    *(undefined8 *)((long)puVar1 + 0x28) = 0;
    *(undefined8 *)((long)puVar1 + 0x18) = 0;
    *(undefined1 *)((long)puVar1 + 0x10) = 0;
    uVar2 = param_3;
    func_0x00010c067f00();
    *(long *)((long)puVar1 + 0x20) = (long)(int)uVar2;
    _objc_retain(puVar1);
  }
  _objc_release(param_3);
  _objc_release(puVar1);
  return (undefined1 *)puVar1;
}



/* Entry: 107b3c620; end: 107b3c667; -[SCOperaVideoAutoAdvanceManager canLoopWhenReachEnd] */

long FUN_107b3c620(long param_1)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010c0ffbc0();
    if (lVar1 != 1) {
                    /* WARNING: Could not recover jumptable at 0x00010be342d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_1,PTR_s__hasNotReachedMaxLoopNumberIfEna_11256aa50);
      return param_1;
    }
  }
  return 1;
}



/* Entry: 107b3c668; end: 107b3c74b; -[SCOperaVideoAutoAdvanceManager updateWithLayer:page:] */

void FUN_107b3c668(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  if (*(long *)(param_1 + 0x20) < 1) {
    uVar1 = param_4;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c067ec0();
    *(long *)(param_1 + 0x18) = (long)(int)uVar3;
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  else {
    *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x20);
  }
  uVar1 = param_4;
  func_0x00010bf11280();
  *(char *)(param_1 + 0x31) = (char)uVar1;
  if ((int)uVar1 == 0) {
    bVar4 = false;
  }
  else {
    bVar4 = 0 < *(long *)(param_1 + 0x18);
  }
  *(bool *)(param_1 + 0x10) = bVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107b3c74c; end: 107b3c80b; -[SCOperaVideoAutoAdvanceManager updateWithProperties:] */

void FUN_107b3c74c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c9410;
  func_0x00010c0c5840(PTR_PTR_1126c9410);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar1);
  if (lVar2 != 0) {
    puVar1 = PTR_PTR_1126c9410;
    func_0x00010c0c5840(PTR_PTR_1126c9410);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf1f3c0();
    *(char *)(param_1 + 0x30) = (char)lVar3;
    _objc_release(lVar2);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b3c80c; end: 107b3c843; -[SCOperaVideoAutoAdvanceManager incrementCurrentLoopNumberIfEnabled] */

void FUN_107b3c80c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (*(char *)(param_1 + 0x10) == '\x01') {
    lVar1 = *(long *)(param_1 + 0x28) + 1;
    *(long *)(param_1 + 0x28) = lVar1;
    if (*(char *)(param_1 + 0x30) == '\x01') {
      lVar3 = *(long *)(param_1 + 0x18);
      lVar2 = 0;
      if (lVar3 != 0) {
        lVar2 = lVar1 / lVar3;
      }
      *(long *)(param_1 + 0x28) = lVar1 - lVar2 * lVar3;
    }
  }
  return;
}



/* Entry: 107b3c844; end: 107b3c84b; -[SCOperaVideoAutoAdvanceManager resetCurrentLoopCount] */

void FUN_107b3c844(long param_1)

{
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}



/* Entry: 107b3c84c; end: 107b3c86f; -[SCOperaVideoAutoAdvanceManager reset] */

void FUN_107b3c84c(long param_1)

{
  func_0x00010c138720();
  *(undefined1 *)(param_1 + 0x30) = 0;
  return;
}



/* Entry: 107b3c870; end: 107b3c8b7; -[SCOperaVideoAutoAdvanceManager elapsedTimeWithPlayerCurrentTime:mediaDurationSeconds:] */

void FUN_107b3c870(long *param_1,double param_2,long param_3,undefined8 param_4,long *param_5)

{
  long lVar1;
  
  if (*(char *)(param_3 + 0x10) == '\x01') {
    *param_5 = (long)((double)*param_5 +
                     (double)(int)param_5[1] * param_2 * (double)*(long *)(param_3 + 0x28));
  }
  lVar1 = *param_5;
  param_1[1] = param_5[1];
  *param_1 = lVar1;
  param_1[2] = param_5[2];
  return;
}



/* Entry: 107b3c8b8; end: 107b3c8c7; -[SCOperaVideoAutoAdvanceManager currentProgressTimeWithMediaProgressTime:mediaDurationSeconds:] */

double FUN_107b3c8b8(double param_1,double param_2,long param_3)

{
  return param_1 + (double)*(long *)(param_3 + 0x28) * param_2;
}



/* Entry: 107b3c8c8; end: 107b3c8f7; -[SCOperaVideoAutoAdvanceManager playbackDurationWithMediaDuration:] */

void FUN_107b3c8c8(long *param_1,long param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  
  if (*(char *)(param_2 + 0x10) == '\x01') {
    *param_4 = *param_4 * *(long *)(param_2 + 0x18);
  }
  lVar1 = *param_4;
  param_1[1] = param_4[1];
  *param_1 = lVar1;
  param_1[2] = param_4[2];
  return;
}



/* Entry: 107b3c8f8; end: 107b3c913; -[SCOperaVideoAutoAdvanceManager playbackDurationSecsWithMediaDurationSecs:] */

double FUN_107b3c8f8(double param_1,long param_2)

{
  if (*(char *)(param_2 + 0x10) == '\x01') {
    param_1 = param_1 * (double)*(long *)(param_2 + 0x18);
  }
  return param_1;
}



/* Entry: 107b3c914; end: 107b3c943; -[SCOperaVideoAutoAdvanceManager _hasNotReachedMaxLoopNumberIfEnabled] */

bool FUN_107b3c914(long param_1)

{
  if ((*(char *)(param_1 + 0x10) == '\x01') && ((*(byte *)(param_1 + 0x30) & 1) == 0)) {
    return *(long *)(param_1 + 0x28) < *(long *)(param_1 + 0x18);
  }
  return false;
}



/* Entry: 107b3c944; end: 107b3cadf; -[SCOperaVideoAutoAdvanceManager logShakeToReportState:] */

void FUN_107b3c944(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bef9860(param_3,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bf2ce00();
  func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110eae538);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b3580(param_3,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110eae558);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b3580(uVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c0ffbc0();
  func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110eae578);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b3580(uVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110eae598);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b3580(param_3,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110eae5b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b3580(param_3,param_2,puVar2);
  _objc_release(param_3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107b3cae0; end: 107b3cae7; -[SCOperaVideoAutoAdvanceManager isLooping] */

undefined1 FUN_107b3cae0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x30);
}



/* Entry: 107b3cae8; end: 107b3caef; -[SCOperaVideoAutoAdvanceManager isAutoAdvanceEnabled] */

undefined1 FUN_107b3cae8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x31);
}



/* Entry: 107b3caf0; end: 107b3cafb; -[SCOperaVideoAutoAdvanceManager .cxx_destruct] */

void FUN_107b3caf0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107b3cafc; end: 107b3cbc3; -[SCOperaVideoLayerView enableLoadingIndicator:] */

/* WARNING: Possible PIC construction at 0x000107b3cb88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107b3cb8c) */
/* WARNING: Removing unreachable block (ram,0x00010c1cbe20) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b3cafc(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_11276aad4;
  lVar1 = *(long *)(param_1 + lVar5);
  if (param_3 == 0) {
    uVar4 = 1;
  }
  else {
    if (lVar1 == 0) {
      puVar2 = PTR_PTR_1126d6890;
      _objc_alloc();
      puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfffc60();
      uVar4 = *(undefined8 *)(param_1 + lVar5);
      *(undefined **)(param_1 + lVar5) = puVar2;
      _objc_release(uVar4);
      _objc_release(puVar3);
      func_0x00010befbb60(param_1);
      lVar1 = *(long *)(param_1 + lVar5);
    }
    uVar4 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s_setHidden__1126479f8,uVar4);
  return;
}



/* Entry: 107b3cbc4; end: 107b3cc43; -[SCOperaVideoLayerView enableVideoProgress:] */

/* WARNING: Possible PIC construction at 0x000107b3cc0c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107b3cc10) */
/* WARNING: Removing unreachable block (ram,0x00010c1cbe20) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b3cbc4(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11276aad8;
  lVar1 = *(long *)(param_1 + lVar4);
  if (param_3 == 0) {
    uVar3 = 1;
  }
  else {
    if (lVar1 == 0) {
      puVar2 = PTR_PTR_1126d6a88;
      _objc_alloc_init();
      uVar3 = *(undefined8 *)(param_1 + lVar4);
      *(undefined **)(param_1 + lVar4) = puVar2;
      _objc_release(uVar3);
      lVar1 = *(long *)(param_1 + lVar4);
    }
    uVar3 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s_setHidden__1126479f8,uVar3);
  return;
}



/* Entry: 107b3cc44; end: 107b3cc97; -[SCOperaVideoLayerView bringLoadingIndicatorToFront] */

/* WARNING: Possible PIC construction at 0x000107b3cc68: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b3cc44(long param_1)

{
  if ((*(long *)(param_1 + _DAT_11276aad4) == 0) && (*(long *)(param_1 + _DAT_11276aadc) == 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf21310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_bringSubviewToFront__1125a5e68);
  return;
}



/* Entry: 107b3cc98; end: 107b3cd33; -[SCOperaVideoLayerView setPlayerView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b3cc98(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_11276aae0;
  if (*(long *)(param_1 + lVar3) == param_3) {
    lVar1 = param_3;
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == param_1) goto LAB_107b3cd20;
  }
  if (param_3 == 0) {
    func_0x00010c12c960(*(undefined8 *)(param_1 + lVar3));
  }
  else {
    func_0x00010c066fa0(param_1,param_2,param_3,0);
  }
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(long *)(param_1 + lVar3) = param_3;
  _objc_release(uVar2);
LAB_107b3cd20:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b3cd34; end: 107b3cfa7; -[SCOperaVideoLayerView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b3cd34(double param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  long lStack_70;
  undefined *puStack_68;
  
  puStack_68 = PTR_PTR_1126f9f68;
  lStack_70 = param_3;
  _objc_msgSendSuper2(&lStack_70,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_3);
  func_0x00010c19f0e0(*(undefined8 *)(param_3 + _DAT_11276aae0));
  lVar3 = (long)_DAT_11276aad4;
  if (*(long *)(param_3 + lVar3) != 0) {
    func_0x00010bf20c00(param_3);
    _CGRectGetWidth();
    param_1 = param_1 + -35.0;
    dVar6 = param_1 * 0.5;
    func_0x00010bf20c00(param_3);
    _CGRectGetHeight();
    func_0x00010c19f0e0(dVar6,(param_1 + -35.0) * 0.5,0x4041800000000000,0x4041800000000000,
                        *(undefined8 *)(param_3 + lVar3));
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    uVar2 = *(undefined8 *)(param_3 + lVar3);
    func_0x00010c08c0e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe740();
    _objc_release(uVar2);
    _objc_release(puVar1);
    uVar2 = *(undefined8 *)(param_3 + lVar3);
    func_0x00010c08c0e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    param_2 = 0x4000000000000000;
    func_0x00010c1fe7a0(0,0x4000000000000000);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_3 + lVar3);
    func_0x00010c08c0e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe800(0x3f000000);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_3 + lVar3);
    func_0x00010c08c0e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    param_1 = 4.0;
    func_0x00010c1fe840(0x4010000000000000);
    _objc_release(uVar2);
  }
  lVar3 = (long)_DAT_11276aadc;
  dVar6 = param_1;
  if (*(long *)(param_3 + lVar3) != 0) {
    func_0x00010c0699c0();
    dVar4 = param_1;
    func_0x00010bf20c00(param_3);
    _CGRectGetWidth();
    dVar4 = dVar4 - param_1;
    dVar6 = dVar4 * 0.5;
    func_0x00010bf20c00(param_3);
    _CGRectGetHeight();
    func_0x00010c19f0e0(dVar6,(dVar4 - param_1) * 0.5,param_1,param_2,
                        *(undefined8 *)(param_3 + lVar3));
  }
  lVar3 = (long)_DAT_11276aad8;
  dVar4 = dVar6;
  if (*(long *)(param_3 + lVar3) != 0) {
    func_0x00010bf20c00(param_3);
    _CGRectGetMinY();
    dVar5 = dVar6;
    func_0x00010bf20c00(param_3);
    _CGRectGetMaxX();
    dVar4 = 0.0;
    func_0x00010c19f0e0(0,dVar6,dVar5,0x4034000000000000,*(undefined8 *)(param_3 + lVar3));
  }
  lVar3 = (long)_DAT_11276aae4;
  if (*(long *)(param_3 + lVar3) != 0) {
    func_0x00010bf20c00(param_3);
    _CGRectGetHeight();
    func_0x00010c19f0e0(0x4034000000000000,(dVar4 + -20.0) * 0.5,0x402e000000000000,
                        0x402e000000000000,*(undefined8 *)(param_3 + lVar3));
  }
  return;
}



/* Entry: 107b3cfa8; end: 107b3cfef; -[SCOperaVideoLayerView setProgressViewWithVideoLayer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b3cfa8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276aad8);
  func_0x00010c117ae0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e4900(uVar1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b3cff0; end: 107b3cfff; -[SCOperaVideoLayerView expandVideoProgressViewV2] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b3cff0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf9be10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276aad8),PTR_s_expandProgressViewIfNeeded_1125c4928);
  return;
}



/* Entry: 107b3d000; end: 107b3d00f; -[SCOperaVideoLayerView collapseVideoProgressViewV2] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b3d000(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf3fad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276aad8),PTR_s_collapseProgressViewIfNeeded_1125ad858)
  ;
  return;
}



/* Entry: 107b3d010; end: 107b3d097; -[SCOperaVideoLayerView setLoadingIndicatorViewV2:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b3d010(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_11276aadc;
  if (param_3 != *(long *)(param_1 + lVar2)) {
    if (*(long *)(param_1 + lVar2) != 0) {
      func_0x00010c12c960();
      uVar1 = *(undefined8 *)(param_1 + lVar2);
      *(undefined8 *)(param_1 + lVar2) = 0;
      _objc_release(uVar1);
    }
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(long *)(param_1 + lVar2) = param_3;
    _objc_release(uVar1);
    if (*(long *)(param_1 + lVar2) != 0) {
      func_0x00010befbb60(param_1);
      func_0x00010c1cbe20(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b3d098; end: 107b3d09b; -[SCOperaVideoLayerView updateBadgeVisibility:text:] */

void FUN_107b3d098(void)

{
  return;
}



/* Entry: 107b3d09c; end: 107b3d157; -[SCOperaVideoLayerView prepareForScreenshotCapture] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b3d09c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar4 = (long)_DAT_11276aae0;
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c100ae0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf0af00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(param_1 + lVar4);
  func_0x00010c100720();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
  }
  else {
    func_0x00010bf60480(&uStack_58,lVar3);
  }
  func_0x000109111384(uVar2,&uStack_58,*(undefined8 *)(param_1 + lVar4),param_1);
  _objc_release(lVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return;
}



/* Entry: 107b3d158; end: 107b3d18b; -[SCOperaVideoLayerView restoreAfterScreenshotCapture] */

void FUN_107b3d158(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c29ea20(param_1,param_2,9999);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c960();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b3d18c; end: 107b3d19b; -[SCOperaVideoLayerView videoProgressViewV2] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107b3d18c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276aad8);
}



/* Entry: 107b3d19c; end: 107b3d1ab; -[SCOperaVideoLayerView loadingIndicatorView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107b3d19c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276aad4);
}



/* Entry: 107b3d1ac; end: 107b3d1eb; -[SCOperaVideoLayerView setLoadingIndicatorView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b3d1ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276aad4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107b3d1ec; end: 107b3d1fb; -[SCOperaVideoLayerView playerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107b3d1ec(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276aae0);
}



/* Entry: 107b3d1fc; end: 107b3d20b; -[SCOperaVideoLayerView loadingIndicatorViewV2] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107b3d1fc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276aadc);
}



/* Entry: 107b3d20c; end: 107b3d27b; -[SCOperaVideoLayerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b3d20c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276aadc,0);
  _objc_storeStrong(param_1 + _DAT_11276aae0,0);
  _objc_storeStrong(param_1 + _DAT_11276aad4,0);
  _objc_storeStrong(param_1 + _DAT_11276aad8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276aae4,0);
  return;
}



/* Entry: 107b3d27c; end: 107b3d32f; -[SCOperaVideoLayerViewController showSeekableRange] */

ulong FUN_107b3d27c(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x00010bf1f3c0(uVar1);
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 107b3d330; end: 107b3d3e3; -[SCOperaVideoLayerViewController showBufferedRange] */

ulong FUN_107b3d330(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x00010bf1f3c0(uVar1);
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 107b3d3e4; end: 107b3d4a7; -[SCOperaVideoLayerViewController didTriggerEventWithEventName:announcerIdentifier:extraData:] */

void FUN_107b3d3e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c9aa8;
  _objc_retain(param_4);
  func_0x00010c22b6a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010c0720c0(param_4,param_2,puVar2);
  _objc_release(param_4);
  if ((int)uVar3 != 0) {
    puVar4 = puVar1;
    func_0x00010c22a3a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0(param_3,param_2,puVar4);
    _objc_release(puVar4);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b3d4a8; end: 107b3d5d3; +[SCOperaVideoLayerViewController layerViewControllerWithConfiguration:layerViewControllerConfiguration:operaDependencies:kvoController:mediaDisplayStopwatch:eventAnnouncer:sharedResourceManager:notificationCenter:bandwidthEstimator:] */

void FUN_107b3d4a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d68c8;
  _objc_retain(param_11);
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c001b60();
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107b3d5d4; end: 107b3d703; -[SCOperaVideoLayerViewController initWithConfiguration:layerViewControllerConfiguration:operaDependencies:eventAnnouncer:sharedResourceManager:] */

undefined8
FUN_107b3d5d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b46f0;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_5;
  func_0x00010c0d78a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c001b60(param_1,param_2,param_3,param_4,param_5,0,puVar1,param_6,param_7,puVar2,uVar3)
  ;
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 107b3d704; end: 107b3de9f; -[SCOperaVideoLayerViewController initWithConfiguration:layerViewControllerConfiguration:operaDependencies:kvoController:mediaDisplayStopwatch:eventAnnouncer:sharedResourceManager:notificationCenter:bandwidthEstimator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_107b3d704(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined *param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  float fVar11;
  undefined8 uVar12;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_8);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf18180();
  puStack_78 = PTR_PTR_1126f9f70;
  puVar1 = &uStack_80;
  uStack_80 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithConfiguration_layerViewC_1125de030,param_3,param_4,
                      param_5,param_8);
  _objc_release(param_8);
  _objc_release(param_4);
  _objc_release(param_3);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_opt_class(puVar1);
    puVar2 = puVar1;
    func_0x00010c0f0be0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar2);
    puVar3 = PTR_PTR_1126c9a90;
    _objc_opt_new();
    uVar8 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276aafc);
    *(undefined **)((long)puVar1 + (long)_DAT_11276aafc) = puVar3;
    _objc_release(uVar8);
    _objc_storeWeak((long)puVar1 + (long)_DAT_11276ab00,param_9);
    puVar3 = param_6;
    if (param_6 == (undefined *)0x0) {
      puVar3 = PTR_PTR_1126b44c8;
      _objc_alloc();
      func_0x00010c030dc0();
    }
    lVar10 = (long)_DAT_11276ab04;
    _objc_retain(puVar3);
    uVar8 = *(undefined8 *)((long)puVar1 + lVar10);
    *(undefined **)((long)puVar1 + lVar10) = puVar3;
    _objc_release(uVar8);
    if (param_6 == (undefined *)0x0) {
      _objc_release(puVar3);
    }
    lVar10 = (long)_DAT_11276ab08;
    _objc_retain(param_7);
    uVar8 = *(undefined8 *)((long)puVar1 + lVar10);
    *(undefined8 *)((long)puVar1 + lVar10) = param_7;
    _objc_release(uVar8);
    lVar10 = (long)_DAT_11276ab0c;
    _objc_retain(param_10);
    uVar8 = *(undefined8 *)((long)puVar1 + lVar10);
    *(undefined8 *)((long)puVar1 + lVar10) = param_10;
    _objc_release(uVar8);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11276ab10) = 1;
    uVar8 = param_5;
    func_0x00010bf461c0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    uVar8 = uVar4;
    FUN_107b7f490();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276ab14);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11276ab14) = uVar8;
    _objc_release(uVar9);
    uVar8 = uVar4;
    func_0x000107dd65cc();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276ab18);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11276ab18) = uVar8;
    _objc_release(uVar9);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11276ab1c) = 0;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11276ab20) = 0xbff0000000000000;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11276ab24) = 0xbff0000000000000;
    puVar2 = (undefined8 *)((long)puVar1 + (long)_DAT_11276ab28);
    uVar8 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    puVar2[2] = uVar8;
    uVar12 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    uVar9 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    puVar2[1] = uVar12;
    *puVar2 = uVar9;
    puVar2 = (undefined8 *)((long)puVar1 + (long)_DAT_11276ab2c);
    puVar2[1] = uVar12;
    *puVar2 = uVar9;
    puVar2[2] = uVar8;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11276ab30) = 0;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11276ab34) = 0;
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276ab38);
    *(undefined **)((long)puVar1 + (long)_DAT_11276ab38) = puVar3;
    _objc_release(uVar8);
    puVar3 = PTR_PTR_1126aeea8;
    _objc_opt_new();
    uVar8 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276ab3c);
    *(undefined **)((long)puVar1 + (long)_DAT_11276ab3c) = puVar3;
    _objc_release(uVar8);
    puVar2 = (undefined8 *)((long)puVar1 + (long)_DAT_11276ab40);
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = 0;
    puVar3 = PTR_PTR_1126d6a90;
    _objc_alloc_init(PTR_PTR_1126d6a90);
    func_0x00010c224260(puVar1);
    _objc_release(puVar3);
    func_0x00010be665a0(puVar1);
    puVar3 = PTR_PTR_1126ae720;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276ab44);
    *(undefined **)((long)puVar1 + (long)_DAT_11276ab44) = puVar3;
    _objc_release(uVar8);
    puVar3 = PTR_PTR_1126c9aa8;
    func_0x00010c22b6a0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276ab48);
    *(undefined **)((long)puVar1 + (long)_DAT_11276ab48) = puVar3;
    _objc_release(uVar8);
    lVar10 = (long)_DAT_11276ab4c;
    _objc_retain(param_11);
    uVar8 = *(undefined8 *)((long)puVar1 + lVar10);
    *(undefined8 *)((long)puVar1 + lVar10) = param_11;
    _objc_release(uVar8);
    uVar8 = param_5;
    func_0x00010c293fc0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276ab50);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11276ab50) = uVar8;
    _objc_release(uVar9);
    uVar8 = param_5;
    func_0x00010bf66420();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276ab54);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11276ab54) = uVar8;
    _objc_release(uVar9);
    func_0x00010beadce0(puVar1);
    puVar2 = puVar1;
    func_0x00010bf99b40(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b2338;
    func_0x00010c282960();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_70 = puVar3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef99a0(puVar2);
    _objc_release(puVar5);
    _objc_release(puVar3);
    _objc_release(puVar2);
    fVar11 = 0.0333;
    func_0x00010bfb2cc0(uVar4);
    *(double *)((long)puVar1 + (long)_DAT_11276ab58) = (double)fVar11;
    fVar11 = 0.0666;
    func_0x00010bfb2cc0(uVar4);
    *(double *)((long)puVar1 + (long)_DAT_11276ab5c) = (double)fVar11;
    uVar8 = param_5;
    func_0x00010bfcdfa0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276ab60);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11276ab60) = uVar8;
    _objc_release(uVar9);
    puVar3 = PTR_PTR_1126d6a98;
    _objc_alloc();
    func_0x00010c001220();
    uVar8 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276ab64);
    *(undefined **)((long)puVar1 + (long)_DAT_11276ab64) = puVar3;
    _objc_release(uVar8);
    uVar8 = uVar4;
    func_0x00010bf1f440();
    *(char *)((long)puVar1 + (long)_DAT_11276ab68) = (char)uVar8;
    func_0x00010bf90c40(uVar4);
    puVar3 = PTR_PTR_1126d6aa0;
    _objc_alloc();
    func_0x00010c00b280();
    uVar8 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276ab6c);
    *(undefined **)((long)puVar1 + (long)_DAT_11276ab6c) = puVar3;
    _objc_release(uVar8);
    puVar3 = PTR_PTR_1126d6aa8;
    _objc_opt_new();
    uVar8 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276ab70);
    *(undefined **)((long)puVar1 + (long)_DAT_11276ab70) = puVar3;
    _objc_release(uVar8);
    uVar8 = uVar4;
    func_0x00010bf1f440();
    *(char *)((long)puVar1 + (long)_DAT_11276ab74) = (char)uVar8;
    uVar8 = uVar4;
    func_0x00010c0ffc80();
    *(char *)((long)puVar1 + (long)_DAT_11276ab78) = (char)uVar8;
    uVar8 = uVar4;
    func_0x00010bef61c0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276ab7c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11276ab7c) = uVar8;
    _objc_release(uVar9);
    uVar8 = uVar4;
    func_0x00010c0ff400();
    *(char *)((long)puVar1 + (long)_DAT_11276ab80) = (char)uVar8;
    uVar8 = uVar4;
    func_0x00010c2900e0();
    *(char *)((long)puVar1 + (long)_DAT_11276ab84) = (char)uVar8;
    uVar8 = uVar4;
    func_0x00010bf8f2e0();
    *(char *)((long)puVar1 + (long)_DAT_11276ab88) = (char)uVar8;
    puVar6 = puVar1;
    func_0x00010c0ea360();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar6;
    func_0x00010c069200();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar2;
    func_0x00010bf8f840();
    *(char *)((long)puVar1 + (long)_DAT_11276ab8c) = (char)puVar7;
    _objc_release(puVar2);
    _objc_release(puVar6);
    uVar8 = uVar4;
    func_0x00010bf90f60();
    *(char *)((long)puVar1 + (long)_DAT_11276ab90) = (char)uVar8;
    uVar8 = uVar4;
    func_0x00010bf90f20();
    *(char *)((long)puVar1 + (long)_DAT_11276ab94) = (char)uVar8;
    uVar8 = uVar4;
    func_0x00010c299900();
    *(char *)((long)puVar1 + (long)_DAT_11276ab98) = (char)uVar8;
    uVar8 = uVar4;
    func_0x00010c0e1c60();
    *(char *)((long)puVar1 + (long)_DAT_11276ab9c) = (char)uVar8;
    puVar2 = puVar1;
    func_0x00010c0ea360();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar2;
    func_0x00010c069200();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar7;
    func_0x00010bfcc260();
    *(undefined8 **)((long)puVar1 + (long)_DAT_11276aba0) = puVar6;
    _objc_release(puVar7);
    _objc_release(puVar2);
    _objc_release(uVar4);
  }
  func_0x00010bf94960(PTR_PTR_1126c98e0);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar1;
  }
  ___stack_chk_fail();
  if (lRam0000000113727710 != -1) {
    func_0x00010002a2fc(0x113727710,&PTR___NSConcreteGlobalBlock_1109fe5c0);
  }
  puVar1 = puRam0000000113727708;
  _objc_retain(puRam0000000113727708);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return puVar1;
}



/* Entry: 107b3dea0; end: 107b3dea3;  */

void FUN_107b3dea0(void)

{
  undefined8 uVar1;
  
  if (lRam0000000113727710 != -1) {
    func_0x00010002a2fc(0x113727710,&PTR___NSConcreteGlobalBlock_1109fe5c0);
  }
  uVar1 = uRam0000000113727708;
  _objc_retain(uRam0000000113727708);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107b3dea4; end: 107b3df0f; -[SCOperaVideoLayerViewController dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b3dea4(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010be8da80();
  func_0x00010be8c880(param_1);
  func_0x00010bf86d40(*(undefined8 *)(param_1 + _DAT_11276aba4));
  func_0x00010bf2eb80(PTR__OBJC_CLASS___NSObject_1126b1300);
  puStack_28 = PTR_PTR_1126f9f70;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 107b3df10; end: 107b3e02f; -[SCOperaVideoLayerViewController viewWillBeginTransitionIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b3df10(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126c98e0;
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (*(char *)(param_1 + _DAT_11276ab78) == '\x01') {
    lVar2 = param_1;
    func_0x00010c0eaa40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf04340(puVar1);
    _objc_release(puVar3);
    _objc_release(lVar2);
    _objc_opt_class(param_1);
    lVar2 = param_1;
    func_0x00010c0eaa40(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010c0f0be0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar4);
    _objc_release(lVar2);
    if ((param_3 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be3b8f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_1,PTR_s__initializePlayerViewIfNeededWit_11256c7d8,
                 &PTR____CFConstantStringClassReference_110eae6d8);
      return;
    }
  }
  return;
}



/* Entry: 107b3e030; end: 107b3e04f; -[SCOperaVideoLayerViewController viewDidCancelTransitionIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b3e030(long param_1)

{
  if (*(char *)(param_1 + _DAT_11276aba8) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010c0694d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_internalPauseWithType__1125f7f40,2);
    return;
  }
  return;
}



/* Entry: 107b3e050; end: 107b3e12b; -[SCOperaVideoLayerViewController viewWillBeginTransitionOut] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b3e050(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126c98e0;
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (*(char *)(param_1 + _DAT_11276ab78) == '\x01') {
    lVar2 = param_1;
    func_0x00010c0eaa40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf04340(puVar1);
    _objc_release(puVar3);
    _objc_release(lVar2);
    func_0x00010bf75fa0(*(undefined8 *)(param_1 + _DAT_11276abac));
    if (*(char *)(param_1 + _DAT_11276aba8) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010c0694d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_internalPauseWithType__1125f7f40,2);
      return;
    }
  }
  return;
}



/* Entry: 107b3e12c; end: 107b3e17b; -[SCOperaVideoLayerViewController viewDidCancelTransitionOut:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b3e12c(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  
  if ((param_3 & 1) == 0) {
    lVar1 = *(long *)(param_1 + _DAT_11276ab70);
    func_0x00010bfc8960();
    if (lVar1 == 2) {
                    /* WARNING: Could not recover jumptable at 0x00010be6da70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_1,PTR_s__operaDidRequestToResume__112579038,
                 &PTR____CFConstantStringClassReference_110eae718);
      return;
    }
  }
  return;
}



/* Entry: 107b3e17c; end: 107b3e27f; -[SCOperaVideoLayerViewController viewWillFullyAppear] */

void FUN_107b3e17c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f9f70;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_viewWillFullyAppear_112685468);
  _objc_opt_class(param_1);
  uVar1 = param_1;
  func_0x00010bdf8620(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c0f0be0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010befa560(param_1);
  func_0x00010be3b8e0(param_1);
  uVar1 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2612c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf926c0();
  func_0x00010be09080(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return;
}



/* Entry: 107b3e280; end: 107b3e443; -[SCOperaVideoLayerViewController viewDidFullyAppear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b3e280(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126f9f70;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_viewDidFullyAppear_112684c88);
  puVar1 = PTR_PTR_1126c98e0;
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar2 = param_1;
  func_0x00010c0eaa40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04340(puVar1);
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_opt_class(param_1);
  lVar2 = param_1;
  func_0x00010bdf8620(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c0f0be0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar4);
  _objc_release(lVar2);
  func_0x00010befa560(param_1);
  uVar5 = *(undefined8 *)(param_1 + _DAT_11276abb0);
  func_0x00010c100fe0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c100ae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c252d60();
  _objc_release(uVar6);
  _objc_release(uVar5);
  *(undefined1 *)(param_1 + _DAT_11276abb4) = 1;
  *(undefined1 *)(param_1 + _DAT_11276abb8) = 0;
  *(undefined1 *)(param_1 + _DAT_11276abbc) = 1;
  func_0x00010be4e400(param_1);
  func_0x00010bea1120(param_1);
  func_0x00010bedade0(param_1);
  func_0x00010beabd20(param_1);
  func_0x00010be88540(param_1);
  func_0x00010bdf3e00(param_1);
  return;
}



/* Entry: 107b3e444; end: 107b3e4d7; -[SCOperaVideoLayerViewController setLayer:page:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b3e444(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_s_setLayer_page__11264c050;
  puStack_38 = PTR_PTR_1126f9f70;
  lStack_40 = param_1;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_40,puVar1,param_3,param_4);
  func_0x00010c28c920(*(undefined8 *)(param_1 + _DAT_11276ab64));
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107b3e4d8; end: 107b3e553; -[SCOperaVideoLayerViewController setupPlaybackAnalyticsTracker:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b3e4d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_opt_class(param_1);
  lVar1 = param_1;
  func_0x00010c0f0be0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  _objc_storeWeak(param_1 + _DAT_11276abc0,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b3e554; end: 107b3e627; -[SCOperaVideoLayerViewController _createPlaybackTimelineLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b3e554(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11276abc4);
  *(undefined **)(param_1 + _DAT_11276abc4) = puVar1;
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 107b3e628; end: 107b3e6cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b3e628(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 == 0) || (*(char *)(param_1 + _DAT_11276ab68) != '\x01')) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126d6ab0;
    _objc_alloc(PTR_PTR_1126d6ab0);
    uVar4 = *(undefined8 *)(param_1 + _DAT_11276ab50);
    lVar1 = param_1;
    func_0x00010bf46560(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf8f740();
    func_0x00010bff8b20(puVar3,param_2,uVar4,lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107b3e6d0; end: 107b3e82f; -[SCOperaVideoLayerViewController _createStallTrackerIfNecessary:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b3e6d0(long param_1,undefined8 param_2,int param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  lVar10 = (long)_DAT_11276abac;
  if ((*(long *)(param_1 + lVar10) == 0) || ((*(byte *)(param_1 + _DAT_11276abc8) & 1) == 0)) {
    puVar1 = (undefined8 *)(param_1 + _DAT_11276ab28);
    uStack_88 = puVar1[1];
    uVar7 = *puVar1;
    uStack_80 = puVar1[2];
    uStack_90 = uVar7;
    _CMTimeGetSeconds(&uStack_90);
    puVar2 = PTR_PTR_1126d2b60;
    _objc_alloc();
    if (param_3 == 0) {
      uVar3 = 1;
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + _DAT_11276ab6c);
      func_0x00010c07f760(uVar3);
    }
    uVar8 = *(undefined8 *)(param_1 + _DAT_11276ab3c);
    uVar9 = *(undefined8 *)(param_1 + _DAT_11276ab4c);
    lVar4 = param_1;
    func_0x00010c0eaa40(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010c0ea360(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bf461c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c036da0(uVar7,puVar2,param_2,uVar3,uVar8,uVar9,lVar4,lVar6);
    uVar7 = *(undefined8 *)(param_1 + lVar10);
    *(undefined **)(param_1 + lVar10) = puVar2;
    _objc_release(uVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
  }
  return;
}



/* Entry: 107b3e830; end: 107b3ea4b; -[SCOperaVideoLayerViewController _updatePlayerView:debugReason:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b3e830(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_opt_class(param_1);
  lVar5 = (long)_DAT_11276abb0;
  uVar1 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c100fe0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c0f0be0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar3;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(lVar2);
  _objc_release(lVar3);
  _objc_release(uVar1);
  lVar3 = *(long *)(param_1 + lVar5);
  func_0x00010c100fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 == param_3) {
    _objc_opt_class(param_1);
    func_0x00010c0f0be0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010be8da80();
    if (*(char *)(param_1 + _DAT_11276ab68) == '\x01') {
      lVar3 = param_1;
      func_0x00010c0eaa40();
      _objc_retainAutoreleasedReturnValue();
      if (lVar3 != 0) {
        uVar1 = *(undefined8 *)(param_1 + _DAT_11276abc4);
        func_0x00010c269d40(uVar1);
        _objc_retainAutoreleasedReturnValue();
        lVar2 = param_1 + _DAT_11276ab00;
        _objc_loadWeakRetained(lVar2);
        lVar4 = lVar2;
        func_0x00010c0c5ee0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1dd800(uVar1,param_2,lVar4);
        _objc_release(lVar4);
        _objc_release(lVar2);
        _objc_release(uVar1);
      }
      _objc_release(lVar3);
    }
    uVar1 = *(undefined8 *)(param_1 + _DAT_11276abc4);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e5ba0();
    _objc_release(uVar1);
    func_0x00010c1ddc80(*(undefined8 *)(param_1 + lVar5),param_2,param_3);
    lVar2 = param_3;
    func_0x00010c100720(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a0fa0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dda40();
    lVar3 = param_1;
    param_1 = lVar2;
  }
  _objc_release(lVar3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b3ea4c; end: 107b3eb73; -[SCOperaVideoLayerViewController _getSubtitlesObserver] */

void FUN_107b3ea4c(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar1 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2612c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c072720();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2612c0();
  _objc_retainAutoreleasedReturnValue();
  if ((int)uVar3 == 0) {
    uVar3 = uVar2;
    func_0x00010c23a560();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((uVar3 & 1) != 0) goto LAB_107b3eb54;
  }
  else {
    uVar3 = uVar2;
    func_0x00010bf125a0();
    if ((uVar3 & 1) == 0) {
      _objc_release(uVar2);
      _objc_release(uVar1);
    }
    else {
      uVar3 = param_1;
      func_0x00010c08c0e0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c2612c0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c23a560();
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar1);
      if ((int)uVar5 != 0) goto LAB_107b3eb54;
    }
  }
  param_1 = 0;
LAB_107b3eb54:
  _objc_retain(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 107b3eb74; end: 107b3f453; -[SCOperaVideoLayerViewController _loadPlayerViewIfNecessaryWithDebugReason:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b3eb74(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined *puVar14;
  undefined *puVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  double dVar19;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_4);
  _objc_opt_class(param_2);
  lVar2 = param_2;
  func_0x00010c0f0be0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  lVar18 = (long)_DAT_11276abb0;
  uVar3 = *(undefined8 *)(param_2 + lVar18);
  func_0x00010c100fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar3;
  func_0x00010c100ae0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar17;
  func_0x00010bf0af00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_2 + _DAT_11276abcc);
  func_0x00010c0d5720(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar11;
  func_0x00010c14d1a0(uVar11,param_3,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar11);
  _objc_release(uVar17);
  _objc_release(uVar3);
  lVar6 = *(long *)(param_2 + lVar18);
  func_0x00010c100fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_2;
  if (lVar6 == 0) {
LAB_107b3eea8:
    lVar6 = (long)_DAT_11276ab00;
    uVar12 = param_2 + lVar6;
    _objc_loadWeakRetained();
    uVar13 = uVar12;
    func_0x00010c0c6680();
    _objc_release(uVar12);
    _objc_opt_class(param_2);
    lVar18 = param_2;
    func_0x00010bf60b00(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_2;
    func_0x00010c0f0be0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar8);
    _objc_release(lVar18);
    if ((uVar13 & 1) != 0) goto LAB_107b3f428;
    puVar14 = PTR_PTR_1126c98e0;
    func_0x00010bf18180(PTR_PTR_1126c98e0,param_3,&PTR____CFConstantStringClassReference_110eae838);
    func_0x00010c2991a0();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = lVar2;
    func_0x00010bf660a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa560(param_2,param_3,&PTR____CFConstantStringClassReference_110eae858);
    _objc_release(lVar18);
    if (lVar2 == 0) {
      _objc_opt_class(param_2);
      lVar18 = param_2;
      func_0x00010c299240(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = param_2;
      func_0x00010c08c0e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar8;
      func_0x00010bf0b380();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = param_2;
      func_0x00010c0f0be0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be36bc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar10);
      _objc_release(lVar7);
      _objc_release(lVar8);
      _objc_release(lVar18);
      lVar18 = param_2;
      func_0x00010c299240();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa560(param_2,param_3,&PTR____CFConstantStringClassReference_110eae878);
      _objc_release(lVar18);
    }
    lVar6 = param_2 + lVar6;
    _objc_loadWeakRetained(lVar6);
    lVar18 = lVar2;
    func_0x00010c0d5720(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_2;
    func_0x00010be23380(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_2;
    func_0x00010c0eaa40(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar10 = param_2;
    func_0x00010be74f80(param_2,param_3,0);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar6;
    func_0x00010c101020(lVar6,param_3,lVar18,lVar8,lVar7,lVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar10);
    _objc_release(lVar7);
    _objc_release(lVar8);
    _objc_release(lVar18);
    _objc_release(lVar6);
    lVar6 = lVar9;
    func_0x00010c100720(lVar9);
    _objc_retainAutoreleasedReturnValue();
    lVar18 = param_2;
    func_0x00010c117a40(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c11fdc0(lVar6);
    func_0x00010c0ff120(lVar18);
    _objc_release(lVar18);
    lVar18 = param_2;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar18;
    func_0x00010bf91f20();
    _objc_release(lVar18);
    if ((int)lVar8 != 0) {
      func_0x00010c169b60(lVar6,param_3,0);
    }
    func_0x00010c1a7f60(lVar9,param_3,1);
    func_0x00010bedd5a0(param_2,param_3,lVar9,param_4);
    func_0x00010bedd340(param_2);
    func_0x00010bee8f60(param_2);
    if (param_1 != 0.0) {
      puVar1 = (undefined8 *)(param_2 + _DAT_11276ab28);
      func_0x00010bee8f60(param_2);
      _CMTimeMakeWithSeconds(&uStack_88,600);
      puVar1[1] = uStack_80;
      *puVar1 = uStack_88;
      puVar1[2] = uStack_78;
      _objc_opt_class(param_2);
      puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010bee8f60(param_2);
      func_0x00010c0df720(puVar15);
      _objc_retainAutoreleasedReturnValue();
      lVar18 = param_2;
      func_0x00010c0f0be0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be36bc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar18);
      _objc_release(puVar15);
      lVar18 = param_2;
      func_0x00010be34160();
      if ((int)lVar18 != 0) {
        uVar17 = *(undefined8 *)(param_2 + _DAT_11276abd4);
        func_0x00010c0ff060(uVar17);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bee8f60(param_2);
        func_0x00010befd900(uVar17);
        _objc_release(uVar17);
      }
    }
    _objc_opt_class(param_2);
    lVar18 = (long)_DAT_11276ab20;
    lVar8 = (long)_DAT_11276ab24;
    lVar7 = param_2;
    func_0x00010c08c0e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0efa0();
    lVar10 = param_2;
    func_0x00010c0f0be0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar10);
    _objc_release(lVar7);
    if (0.0 <= *(double *)(param_2 + lVar18)) {
      lVar8 = param_2;
      func_0x00010c2a0fa0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2241a0((float)*(double *)(param_2 + lVar18));
      _objc_release(lVar8);
      *(undefined8 *)(param_2 + lVar18) = 0xbff0000000000000;
    }
    else {
      dVar19 = *(double *)(param_2 + lVar8);
      lVar18 = param_2;
      func_0x00010c2a0fa0(param_2);
      _objc_retainAutoreleasedReturnValue();
      if (0.0 <= dVar19) {
        func_0x00010c2241a0((float)*(double *)(param_2 + lVar8),lVar18);
      }
      else {
        lVar8 = param_2;
        func_0x00010c08c0e0(param_2);
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar8;
        func_0x00010bf0efa0();
        func_0x00010c2241a0((float)((uint)lVar7 ^ 1),lVar18);
        _objc_release(lVar8);
      }
      _objc_release(lVar18);
    }
    func_0x00010c137fe0(*(undefined8 *)(param_2 + _DAT_11276ab08));
    func_0x00010c137fe0(*(undefined8 *)(param_2 + _DAT_11276ab70));
    lVar18 = lVar9;
    func_0x00010c100ae0(lVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be66960(param_2,param_3,lVar18);
    _objc_release(lVar18);
    lVar18 = lVar9;
    func_0x00010c100ae0(lVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bedd580(param_2,param_3,lVar18);
    _objc_release(lVar18);
    func_0x00010be72460(param_2);
    func_0x00010bedade0(param_2,param_3,7,param_4);
    func_0x00010bee3400(param_2);
    func_0x00010c0e0f20(*(undefined8 *)(param_2 + _DAT_11276abd0),param_3,lVar6);
    func_0x00010bf94960(PTR_PTR_1126c98e0,param_3,puVar14);
    _objc_release(lVar6);
  }
  else {
    lVar7 = *(long *)(param_2 + lVar18);
    func_0x00010c100fe0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar8 == 0) {
      _objc_release(lVar7);
      _objc_release(lVar6);
      goto LAB_107b3eea8;
    }
    lVar9 = *(long *)(param_2 + lVar18);
    func_0x00010c100fe0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar9;
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = *(long *)(param_2 + lVar18);
    _objc_release();
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    if (((uint)(lVar10 == lVar16) & (uint)uVar5) != 1) goto LAB_107b3eea8;
    _objc_opt_class(param_2);
    uVar11 = *(undefined8 *)(param_2 + lVar18);
    func_0x00010c100fe0(uVar11);
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar11;
    func_0x00010c100720();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,1);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_2;
    func_0x00010c0f0be0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar6);
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(uVar17);
    _objc_release(uVar11);
    puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,1);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa560(param_2,param_3,&PTR____CFConstantStringClassReference_110eae818);
    _objc_release(puVar15);
    _objc_release(puVar14);
    func_0x00010be74f60(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)(param_2 + _DAT_11276ab6c);
    lVar6 = lVar2;
    func_0x00010c26f180();
    func_0x00010c288940(uVar17,param_3,0,lVar6);
    func_0x00010c0e0f20(*(undefined8 *)(param_2 + _DAT_11276abd0),param_3,lVar2);
    lVar6 = lVar2;
    func_0x00010bf5f0a0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be66960(param_2,param_3,lVar6);
    _objc_release(lVar6);
    lVar9 = lVar2;
    func_0x00010bf5f0a0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bedd580(param_2,param_3,lVar9);
  }
  _objc_release(lVar9);
  _objc_release(lVar2);
LAB_107b3f428:
  _objc_release(param_4);
  return;
}



/* Entry: 107b3f454; end: 107b3f6af; -[SCOperaVideoLayerViewController _performPreliminarySeekToMediaStartTimeIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b3f454(double param_1,ulong param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  lVar2 = *(long *)(param_2 + (long)_DAT_11276abb0);
  func_0x00010c100fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c100ae0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  func_0x00010bee8f60(param_2);
  if (param_1 != 0.0) {
    uVar4 = param_2;
    func_0x00010be34160();
    lVar2 = lVar3;
    if ((uVar4 & 1) == 0) {
      uVar4 = param_2;
      func_0x00010c08c0e0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c231d60();
      if (((uVar5 & 1) == 0) ||
         (puVar1 = (undefined8 *)(param_2 + (long)_DAT_11276ab28),
         (*(uint *)((long)puVar1 + 0xc) & 0x1d) != 1 || lVar3 == 0)) {
        _objc_release(uVar4);
        goto LAB_107b3f68c;
      }
      func_0x00010c252d60();
      _objc_release(uVar4);
    }
    else {
      puVar1 = (undefined8 *)(param_2 + (long)_DAT_11276ab28);
      if ((*(uint *)((long)puVar1 + 0xc) & 0x1d) != 1 || lVar3 == 0) goto LAB_107b3f68c;
      func_0x00010c252d60();
    }
    if (lVar2 == 0) {
      uStack_68 = puVar1[1];
      uVar7 = *puVar1;
      uStack_60 = puVar1[2];
      uStack_70 = uVar7;
      _CMTimeGetSeconds(&uStack_70);
      _objc_opt_class(param_2);
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df720(uVar7,PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_2;
      func_0x00010c0f0be0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be36bc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(uVar4);
      _objc_release(puVar6);
      uVar4 = param_2;
      func_0x00010be74f60(param_2);
      _objc_retainAutoreleasedReturnValue();
      uStack_68 = puVar1[1];
      uStack_70 = *puVar1;
      uStack_60 = puVar1[2];
      func_0x00010c157260();
      _objc_release(uVar4);
      uVar7 = *(undefined8 *)(param_2 + (long)_DAT_11276abc4);
      func_0x00010c269d40(uVar7);
      _objc_retainAutoreleasedReturnValue();
      uStack_68 = puVar1[1];
      uStack_70 = *puVar1;
      uStack_60 = puVar1[2];
      func_0x00010c0e63c0();
      _objc_release(uVar7);
      func_0x00010befa560(param_2,param_3,&PTR____CFConstantStringClassReference_110eae898);
      *(undefined1 *)(param_2 + (long)_DAT_11276abd8) = 1;
    }
  }
LAB_107b3f68c:
  _objc_release(lVar3);
  return;
}



/* Entry: 107b3f6b0; end: 107b3fadf; -[SCOperaVideoLayerViewController neighborViewDidFullyAppearWithCurrentViewRelativePosition:neighborsInfoProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b3f6b0(ulong param_1,undefined8 param_2,long param_3,ulong param_4)

{
  undefined *puVar1;
  undefined1 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  
  _objc_retain(param_4);
  uVar3 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c231d60();
  uVar2 = 0;
  if (param_3 == 6) {
    uVar2 = (undefined1)uVar4;
  }
  *(undefined1 *)(param_1 + (long)_DAT_11276abdc) = uVar2;
  _objc_release(uVar3);
  if ((*(byte *)(param_1 + (long)_DAT_11276abc8) & 1) != 0) goto LAB_107b3fabc;
  uVar3 = param_1;
  func_0x00010c0f2520();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf5e5c0();
  _objc_release(uVar3);
  puVar5 = PTR_PTR_1126c9c78;
  func_0x00010bf80560();
  if (((ulong)puVar5 & uVar4) != 0) goto LAB_107b3fabc;
  lVar12 = (long)_DAT_11276abb0;
  lVar6 = *(long *)(param_1 + lVar12);
  func_0x00010c100fe0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar6 == 0) {
LAB_107b3f7e4:
    _objc_opt_class(param_1);
    uVar3 = param_1;
    func_0x00010c0f0be0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar3);
    func_0x00010c1a7f60(lVar6);
  }
  else {
    lVar7 = param_1 + (long)_DAT_11276ab00;
    _objc_loadWeakRetained();
    lVar8 = lVar7;
    func_0x00010c07a3e0();
    _objc_release(lVar7);
    if ((int)lVar8 == 0) goto LAB_107b3f7e4;
    _objc_opt_class(param_1);
    uVar3 = param_1;
    func_0x00010c0f0be0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar3);
  }
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + (long)_DAT_11276abe0));
  _objc_release(puVar5);
  uVar3 = param_4;
  func_0x00010bf16020(param_4);
  uVar4 = param_4;
  func_0x00010bf16020(param_4);
  uVar9 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010c29a020();
  uVar11 = param_1;
  func_0x00010c0f0be0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107dc331c(uVar10,param_3,uVar11,uVar3,uVar4);
  _objc_release(uVar11);
  _objc_release(uVar9);
  if ((int)uVar10 != 0) {
    uVar3 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c29a020();
    puVar5 = PTR_PTR_1126c9b90;
    func_0x00010c0d9b00();
    _objc_release(uVar3);
    if (((((ulong)puVar5 & uVar4) == 0) || (uVar3 = param_4, func_0x00010c06b800(), param_3 != 2))
       || ((uVar3 & 1) == 0)) {
      uVar3 = param_1;
      func_0x00010be74ea0();
      uVar4 = param_1;
      if (uVar3 == 5) {
        func_0x00010c299280(param_1);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010c2991a0(param_1);
        _objc_retainAutoreleasedReturnValue();
      }
      uVar3 = uVar4;
      func_0x00010c0d5720();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      puVar1 = PTR_PTR_1126c98e0;
      puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      uVar4 = param_1;
      func_0x00010c0eaa40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf04340(puVar1);
      _objc_release(puVar5);
      _objc_release(uVar4);
      lVar7 = param_1 + (long)_DAT_11276ab00;
      _objc_loadWeakRetained(lVar7);
      uVar4 = param_1;
      func_0x00010be23380(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = param_1;
      func_0x00010c0eaa40(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = param_1;
      func_0x00010be74f80(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010c10a520(lVar7);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar10);
      _objc_release(uVar9);
      _objc_release(uVar4);
      _objc_release(lVar7);
      lVar12 = *(long *)(param_1 + lVar12);
      func_0x00010c100fe0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar12 != 0) {
        func_0x00010bedd5a0(param_1);
      }
      _objc_release(lVar8);
      _objc_release(uVar3);
    }
  }
  _objc_release(lVar6);
LAB_107b3fabc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107b3fae0; end: 107b3fb8f; -[SCOperaVideoLayerViewController _observePlayerItem:] */

void FUN_107b3fae0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar1 = param_3;
    func_0x00010bf0af00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010bf60b00(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0d5720();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010c14d1a0(lVar1,param_2,uVar3);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(lVar1);
    if ((int)lVar4 != 0) {
      func_0x00010be750e0(param_1,param_2,param_3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b3fb90; end: 107b3fd9b; -[SCOperaVideoLayerViewController _updatePlayerStatusBasedOnPlayerItemStatus:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b3fb90(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010c252d60();
  puVar4 = PTR_PTR_1126d23d0;
  if (puVar1 == (undefined *)0x1) {
    puVar1 = param_1;
    func_0x00010c0ea360(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf461c0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c100ba0();
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    if ((int)puVar4 != 0) {
      puVar4 = PTR_PTR_1126ba158;
      func_0x00010bf87dc0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      _objc_release(puVar4);
      param_1[_DAT_11276abe4] = 1;
      goto LAB_107b3fd08;
    }
    puVar1 = param_1;
    func_0x00010be74f60();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010bf5f0a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14d1a0();
    func_0x00010be74fa0(param_1);
    _objc_release(puVar4);
  }
  else {
    puVar4 = param_3;
    func_0x00010c252d60();
    if (puVar4 != (undefined *)0x2) goto LAB_107b3fd60;
    puVar1 = param_3;
    func_0x00010bf987e0();
    _objc_retainAutoreleasedReturnValue();
LAB_107b3fd08:
    func_0x00010be75000(param_1);
  }
  _objc_release(puVar1);
LAB_107b3fd60:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010befa560();
  uVar5 = *(undefined8 *)(param_3 + _DAT_11276abc4);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e6060();
  _objc_release(uVar5);
  func_0x00010becae00(param_3);
  func_0x00010be94400(param_3);
  func_0x00010be4e400(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bea1130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s__sendVideoStartEventsIfNecessary_112585df0,4)
  ;
  return;
}



/* Entry: 107b3fd9c; end: 107b3fe33; -[SCOperaVideoLayerViewController _restartPlayer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b3fd9c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010befa560(param_1,param_2,&PTR____CFConstantStringClassReference_110eae8f8);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276abc4);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e6060();
  _objc_release(uVar1);
  func_0x00010becae00(param_1);
  func_0x00010be94400(param_1);
  func_0x00010be4e400(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bea1130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__sendVideoStartEventsIfNecessary_112585df0,4)
  ;
  return;
}



/* Entry: 107b3fe34; end: 107b40013; -[SCOperaVideoLayerViewController _startPlayingFromMediaStartTimeForItem:] */

void FUN_107b3fe34(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  func_0x00010bee8f60(param_2);
  if (param_1 == 0.0) {
    func_0x00010bec1160(param_2);
  }
  else {
    _objc_opt_class(param_2);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bee8f60(param_2);
    func_0x00010c0df720(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    lVar2 = param_2;
    func_0x00010be74f60();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf5f0a0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      uStack_68 = 0;
      uStack_60 = 0;
      uStack_58 = 0;
    }
    else {
      func_0x00010c09c8c0(&uStack_68,lVar3);
    }
    _CMTimeGetSeconds(&uStack_68);
    func_0x00010c0df720(puVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_2;
    func_0x00010c0f0be0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar5);
    _objc_release(puVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(puVar1);
    _objc_initWeak(&uStack_68,param_2);
    _objc_copyWeak(auStack_70,&uStack_68);
    _objc_retain(param_4);
    func_0x00010c1571c0(param_2);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(&uStack_68);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 107b40014; end: 107b400b3;  */

void FUN_107b40014(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_opt_class(*(undefined8 *)(param_1 + 0x20));
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0f0be0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar2);
  _objc_release(puVar1);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bec1160(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b400b4; end: 107b40177; -[SCOperaVideoLayerViewController _operaDidRequestToResume:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b400b4(long param_1,undefined8 param_2,ulong param_3)

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = param_3;
  _objc_retain();
  func_0x000107b50dc4();
  if ((uVar2 & 1) == 0) {
    _objc_opt_class(param_1);
    func_0x00010c0f0be0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(param_1);
  }
  else {
    bVar1 = *(byte *)(param_1 + _DAT_11276abe8);
    _objc_opt_class(param_1);
    lVar3 = param_1;
    func_0x00010c0f0be0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar3);
    if ((bVar1 & 1) == 0) {
      func_0x00010be95d00(param_1,param_2,param_3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b40178; end: 107b403c7; -[SCOperaVideoLayerViewController _startPlayingItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b40178(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar10 = param_4;
  _objc_retain();
  iVar1 = (int)lVar10;
  func_0x000107b50dc4();
  if (iVar1 != 0) {
    _objc_opt_class(param_2);
    lVar10 = param_2;
    func_0x00010c0f0be0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar10);
    if (param_4 == 0) {
      uStack_78 = 0;
      uStack_70 = 0;
      uStack_68 = 0;
    }
    else {
      func_0x00010bf60480(&uStack_78,param_4);
    }
    _CMTimeGetSeconds(&uStack_78);
    func_0x00010bddc900(param_2);
    func_0x00010be6da60(param_2,param_3,&PTR____CFConstantStringClassReference_110eae978);
    func_0x00010beabd20(param_2);
    func_0x00010beb10c0(param_2);
    _objc_opt_class(param_2);
    lVar10 = param_2;
    func_0x00010bf60b00(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar10;
    func_0x00010c0d5720();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c279200();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_2;
    func_0x00010bee8fc0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_2;
    func_0x00010c08c0e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0efa0();
    lVar7 = param_2;
    func_0x00010c08c0e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25c720();
    lVar8 = param_2;
    func_0x00010c0f0be0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar10);
    lVar10 = (long)_DAT_11276abb0;
    uVar9 = *(undefined8 *)(param_2 + lVar10);
    func_0x00010c100fe0(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26faa0();
    *(undefined8 *)(param_2 + _DAT_11276abec) = param_1;
    _objc_release(uVar9);
    uVar9 = *(undefined8 *)(param_2 + lVar10);
    func_0x00010c100fe0(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c250000();
    *(undefined8 *)(param_2 + _DAT_11276abf0) = param_1;
    _objc_release(uVar9);
    func_0x00010bea1120(param_2,param_3,1);
    func_0x00010be8f580(param_2);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 107b403c8; end: 107b40453; -[SCOperaVideoLayerViewController _videoStartTime] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107b403c8(undefined8 param_1,long param_2)

{
  long lVar1;
  
  if (*(char *)(param_2 + _DAT_11276abdc) == '\x01') {
    func_0x00010be9d280();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_2;
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    _objc_release(lVar1);
  }
  else {
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c6880();
  }
  _objc_release(param_2);
  return param_1;
}



/* Entry: 107b40454; end: 107b405df; -[SCOperaVideoLayerViewController _sendVideoStartsPlayingIfNecessary:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b40454(long param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  if ((*(char *)(param_1 + _DAT_11276ab90) == '\x01') &&
     ((4 < param_3 || ((1L << (param_3 & 0x3f) & 0x16U) == 0)))) {
    uVar1 = (uint)*(undefined8 *)(param_1 + _DAT_11276ab6c);
    func_0x00010c07a400();
    _objc_opt_class(param_1);
    lVar5 = (long)_DAT_11276abb4;
    lVar4 = (long)_DAT_11276abf4;
    lVar2 = param_1;
    func_0x00010c0f0be0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
    if ((*(char *)(param_1 + lVar5) == '\x01') &&
       ((uVar1 & (*(byte *)(param_1 + lVar4) ^ 0xffffffff) & 1) != 0)) {
      _objc_opt_class(param_1);
      puVar3 = PTR_PTR_1126c9a18;
      func_0x00010c29b500(PTR_PTR_1126c9a18);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1;
      func_0x00010c0f0be0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be36bc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar2);
      _objc_release(puVar3);
      *(undefined1 *)(param_1 + lVar4) = 1;
      puVar3 = PTR_PTR_1126c9a18;
      func_0x00010c29b500(PTR_PTR_1126c9a18);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1;
      func_0x00010bee8f80(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf04440(param_1);
      _objc_release(lVar2);
      _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010befa570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_1,PTR_s_addPageTraceEventForAction__11259c300,
                 &PTR____CFConstantStringClassReference_110eae998);
      return;
    }
  }
  return;
}



/* Entry: 107b405e0; end: 107b4066b; -[SCOperaVideoLayerViewController _sendVideoStartEventsIfNecessary:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b405e0(long param_1,undefined8 param_2,ulong param_3)

{
  undefined **ppuVar1;
  
  func_0x00010bea1140();
  if (param_3 < 5) {
    ppuVar1 = (undefined **)(&PTR_PTR_1109fdf08)[param_3];
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110db8b78;
  }
  if ((((*(char *)(param_1 + _DAT_11276ab90) == '\x01') &&
       ((*(byte *)(param_1 + _DAT_11276ab94) & 1) == 0)) && (param_3 != 3)) && (param_3 != 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be9f730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__sendMediaStartsToDisplayIfNeces_112585770,param_3 == 2,ppuVar1);
  return;
}



/* Entry: 107b4066c; end: 107b408cb; -[SCOperaVideoLayerViewController _sendMediaStartsToDisplayIfNecessary:debugReason:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b4066c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010beb54c0(param_1,param_2,param_3);
  if ((int)lVar1 != 0) {
    _objc_opt_class(param_1);
    puVar2 = PTR_PTR_1126b2338;
    func_0x00010c0c6900(PTR_PTR_1126b2338);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b2638;
    func_0x00010c29a1a0(PTR_PTR_1126b2638);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c0f0be0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126b2338;
    func_0x00010c0c6900(PTR_PTR_1126b2338);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010bee8f80(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf04440(param_1,param_2,puVar2,lVar1);
    _objc_release(lVar1);
    _objc_release(puVar2);
    lVar1 = param_1;
    func_0x00010bf9a180();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar2 = PTR_PTR_1126d6878;
    if (lVar1 != 0) {
      lVar1 = param_1;
      func_0x00010bee8fa0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0c6940(puVar2,param_2,lVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      lVar1 = param_1;
      func_0x00010bf9a180(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar1;
      func_0x00010c0ea760();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_1;
      func_0x00010c0f0be0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c11ad60(lVar4,param_2,puVar2,lVar5);
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar1);
      _objc_release(puVar2);
    }
    *(undefined1 *)(param_1 + _DAT_11276abf8) = 1;
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110eae9b8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be25d60(param_1,param_2,puVar2);
    _objc_release(puVar2);
    func_0x00010befa560(param_1,param_2,&PTR____CFConstantStringClassReference_110eae9d8);
    puVar2 = PTR_PTR_1126b2638;
    func_0x00010c29a1a0(PTR_PTR_1126b2638);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf04420(param_1,param_2,puVar2);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107b408cc; end: 107b40e6b; -[SCOperaVideoLayerViewController _videoStartsPlayingParams] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_107b408cc(undefined8 param_1,double param_2,double param_3,double param_4,long param_5,
             undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined8 uVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  
  lStack_b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar26 = (long)_DAT_11276abb0;
  uVar1 = *(undefined8 *)(param_5 + lVar26);
  func_0x00010c100fe0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c100c60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29afc0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010bde8060(param_5);
  dVar27 = param_3;
  dVar29 = param_4;
  FUN_107b40e6c();
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  dVar28 = dVar27;
  dVar30 = dVar29;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f3c0();
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  puVar4 = PTR_PTR_1126b2348;
  func_0x00010c29ad40();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_140 = puVar4;
  func_0x00010c0df720(*(double *)(param_5 + _DAT_11276abec) * 1000.0);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126b2348;
  puStack_f8 = puVar5;
  func_0x00010c29b4e0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_138 = puVar6;
  func_0x00010c0df720(*(double *)(param_5 + _DAT_11276abf0) * 1000.0);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126b2348;
  puStack_f0 = puVar7;
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_130 = puVar8;
  func_0x00010c0df720(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126b2348;
  puStack_e8 = puVar9;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_128 = puVar10;
  func_0x00010c0df720(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR_PTR_1126b2348;
  puStack_e0 = puVar11;
  func_0x00010c29aa80();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_120 = puVar12;
  func_0x00010c0df720(dVar28 * 1000.0);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR_PTR_1126b2348;
  puStack_d8 = puVar13;
  func_0x00010c29f780();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_118 = puVar14;
  func_0x00010c0df720(dVar27);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR_PTR_1126b2348;
  puStack_d0 = puVar15;
  func_0x00010c29f5c0();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_110 = puVar16;
  func_0x00010c0df720(dVar29);
  _objc_retainAutoreleasedReturnValue();
  puVar18 = PTR_PTR_1126b2348;
  puStack_c8 = puVar17;
  func_0x00010c13a500();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_108 = puVar18;
  func_0x00010c0df720(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar20 = PTR_PTR_1126b2348;
  puStack_c0 = puVar19;
  func_0x00010c13a460();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_100 = puVar20;
  func_0x00010c0df720(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar22 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_b8 = puVar21;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_6,&puStack_f8,&puStack_140,9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf72020(puVar3,param_6,puVar22);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar22);
  _objc_release(puVar21);
  _objc_release(puVar20);
  _objc_release(puVar19);
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  uVar23 = *(undefined8 *)(param_5 + lVar26);
  func_0x00010c100fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar23;
  func_0x00010c100ae0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bf0af00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar23);
  puVar4 = PTR_PTR_1126b2348;
  func_0x00010c29a980(PTR_PTR_1126b2348);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar3,param_6,uVar1,puVar4);
  _objc_release(puVar4);
  lVar26 = param_5;
  func_0x00010c2991a0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b2348;
  func_0x00010c29ab20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar3,param_6,lVar26,puVar4);
  _objc_release(puVar4);
  _objc_release(lVar26);
  lVar24 = param_5;
  func_0x00010c2991a0();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = lVar24;
  func_0x00010c0d5720();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = lVar25;
  func_0x00010bf4d3e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b2348;
  func_0x00010c0c4c80(PTR_PTR_1126b2348);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar3,param_6,lVar26,puVar4);
  _objc_release(puVar4);
  _objc_release(lVar26);
  _objc_release(lVar25);
  _objc_release(lVar24);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_6,
                      *(undefined1 *)(param_5 + _DAT_11276ab94));
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b2348;
  func_0x00010c0d8d60(PTR_PTR_1126b2348);
  func_0x00010c1d0640(puVar3,param_6,puVar4,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(uVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    auVar32._8_8_ = dVar30;
    auVar32._0_8_ = param_2;
    return auVar32;
  }
  ___stack_chk_fail();
  puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  dVar27 = param_2;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  _objc_release(puVar3);
  auVar31._0_8_ = param_2 * dVar27;
  auVar31._8_8_ = dVar30 * dVar27;
  return auVar31;
}



/* Entry: 107b40e6c; end: 107b40ecb;  */

undefined1  [16] FUN_107b40e6c(double param_1,double param_2)

{
  undefined *puVar1;
  double dVar2;
  undefined1 auVar3 [16];
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  dVar2 = param_1;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  _objc_release(puVar1);
  auVar3._0_8_ = param_1 * dVar2;
  auVar3._8_8_ = param_2 * dVar2;
  return auVar3;
}



/* Entry: 107b40ecc; end: 107b410cb; -[SCOperaVideoLayerViewController _videoStartsPlayingParamsV2] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b40ecc(undefined8 param_1,undefined8 param_2,double param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  
  lVar8 = (long)_DAT_11276abb0;
  uVar1 = *(undefined8 *)(param_5 + lVar8);
  func_0x00010c100fe0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c100c60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29afc0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010bde8060(param_5);
  dVar9 = param_3;
  uVar13 = param_4;
  FUN_107b40e6c(param_3,param_4);
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  dVar10 = dVar9;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f3c0();
  _objc_release(puVar3);
  uVar4 = *(undefined8 *)(param_5 + lVar8);
  func_0x00010c100fe0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010c100ae0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bf0af00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar4);
  puVar3 = PTR_PTR_1126d6ab8;
  _objc_alloc(PTR_PTR_1126d6ab8);
  dVar11 = *(double *)(param_5 + _DAT_11276abec);
  dVar12 = *(double *)(param_5 + _DAT_11276abf0);
  lVar8 = param_5;
  func_0x00010c2991a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar8;
  func_0x00010c0d5720();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf4d3e0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bf1f3c0();
  func_0x00010c061060(dVar11 * 1000.0,dVar12 * 1000.0,param_3,param_4,dVar10 * 1000.0,dVar9,uVar13,
                      param_1,puVar3,param_6,uVar1,lVar7,*(undefined1 *)(param_5 + _DAT_11276ab94));
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar8);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107b410cc; end: 107b410ff; -[SCOperaVideoLayerViewController _shouldReportMediaStartsToDisplayEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_107b410cc(ulong param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  
  if ((*(byte *)(param_1 + (long)_DAT_11276abf8) & 1) == 0) {
    uVar1 = (uint)*(byte *)(param_1 + (long)_DAT_11276abb4);
    if (((param_3 & 1) == 0) && ((*(byte *)(param_1 + (long)_DAT_11276abb4) & 1) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010c29a530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_videoIsPlaying_112684370);
      return param_1;
    }
  }
  else {
    uVar1 = 0;
  }
  return (ulong)(uVar1 & 1);
}



/* Entry: 107b41100; end: 107b411e3; -[SCOperaVideoLayerViewController _setupVideoProgressTapGestureIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b41100(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar1 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010c117ac0();
  _objc_release(lVar1);
  if ((int)lVar4 != 0) {
    lVar4 = (long)_DAT_11276abfc;
    lVar1 = *(long *)(param_1 + lVar4);
    if (lVar1 == 0) {
      puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
      _objc_alloc();
      func_0x00010c050900();
      uVar3 = *(undefined8 *)(param_1 + lVar4);
      *(undefined **)(param_1 + lVar4) = puVar2;
      _objc_release(uVar3);
      func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar4),param_2,param_1);
      lVar1 = *(long *)(param_1 + lVar4);
    }
    func_0x00010c29bf00(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12c9c0();
    _objc_release(lVar1);
    param_1 = param_1 + _DAT_11276ac00;
    _objc_loadWeakRetained(param_1);
    func_0x00010bef9040();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 107b411e4; end: 107b41357; -[SCOperaVideoLayerViewController _setupControlsIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b411e4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = param_1;
  func_0x00010beb6840();
  if ((int)lVar5 != 0) {
    lVar6 = (long)_DAT_11276abd4;
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    lVar5 = param_1;
    func_0x00010c08c0e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar5;
    func_0x00010bf50060();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c228800(uVar4);
    _objc_release(lVar1);
    _objc_release(lVar5);
    if (*(long *)(param_1 + _DAT_11276ac04) == 0) {
      lVar5 = param_1;
      func_0x00010c0f0be0();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar5;
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar1);
      _objc_release(lVar5);
      if (lVar2 != 0) {
        uVar4 = *(undefined8 *)(param_1 + lVar6);
        func_0x00010c0ff060(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c289800(0x4042000000000000);
        _objc_release(uVar4);
      }
    }
    puVar3 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc();
    func_0x00010c050900();
    lVar5 = (long)_DAT_11276ac08;
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar3;
    _objc_release(uVar4);
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar5));
                    /* WARNING: Could not recover jumptable at 0x00010bef9050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_11276abb0),PTR_s_addGestureRecognizer__11259bdb8,
               *(undefined8 *)(param_1 + lVar5));
    return;
  }
  return;
}



/* Entry: 107b41358; end: 107b41483; -[SCOperaVideoLayerViewController _updatePlaybackDurationSec] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b41358(long param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  double dStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  double dStack_48;
  undefined4 uStack_40;
  uint uStack_3c;
  undefined8 uStack_38;
  
  func_0x00010be5e680(&dStack_48);
  if ((uStack_3c & 0x1d) == 1) {
    uStack_58 = CONCAT44(uStack_3c,uStack_40);
    dStack_60 = dStack_48;
    uStack_50 = uStack_38;
    dVar3 = dStack_48;
    _CMTimeGetSeconds(&dStack_60);
    *(double *)(param_1 + _DAT_11276ab34) = dVar3;
    if (*(long *)(param_1 + _DAT_11276ab64) == 0) {
      dStack_60 = 0.0;
      uStack_58 = 0;
      uStack_50 = 0;
    }
    else {
      dStack_80 = dStack_48;
      uStack_70 = uStack_38;
      func_0x00010c0ff220(&dStack_60,*(long *)(param_1 + _DAT_11276ab64),param_2,&dStack_80);
    }
    uStack_78 = uStack_58;
    dStack_80 = dStack_60;
    uStack_70 = uStack_50;
    dVar3 = dStack_60;
    _CMTimeGetSeconds(&dStack_80);
    lVar2 = param_1;
    func_0x00010c117a40(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c218320(dVar3);
    _objc_release(lVar2);
    dVar4 = *(double *)(param_1 + _DAT_11276ab30);
    dVar5 = ABS(dVar3 - dVar4);
    dVar4 = ABS(dVar3 + dVar4) * 2.220446049250313e-16;
    bVar1 = true;
    if ((2.2250738585072014e-308 <= dVar5) && (bVar1 = false, !NAN(dVar5) && !NAN(dVar4))) {
      bVar1 = dVar5 < dVar4;
    }
    if (!bVar1) {
      *(double *)(param_1 + _DAT_11276ab30) = dVar3;
      func_0x00010be392a0(dVar3,param_1);
    }
  }
  return;
}



/* Entry: 107b41484; end: 107b41503; -[SCOperaVideoLayerViewController _informVideoControlsWithUpdatedDurationSecs:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b41484(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_2;
  func_0x00010beb6840();
  if (((int)lVar1 != 0) &&
     (*(long *)(param_2 + _DAT_11276ac04) == 4 || *(long *)(param_2 + _DAT_11276ac04) == 1)) {
    uVar2 = *(undefined8 *)(param_2 + _DAT_11276abd4);
    func_0x00010c0ff060(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c192d40(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 107b41504; end: 107b415a7; -[SCOperaVideoLayerViewController _shouldShowVideoControls] */

bool FUN_107b41504(double param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  double dVar4;
  
  uVar1 = param_2;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf4ffc0();
  if ((int)uVar2 == 0) {
    bVar3 = false;
  }
  else {
    func_0x00010be74ca0(param_2);
    dVar4 = param_1;
    func_0x00010c08c0e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_2;
    func_0x00010bf50060();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ce3a0();
    bVar3 = dVar4 < param_1;
    _objc_release(uVar2);
    _objc_release(param_2);
  }
  _objc_release(uVar1);
  return bVar3;
}



/* Entry: 107b415a8; end: 107b415df; -[SCOperaVideoLayerViewController _hasLongformVideoControls] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b415a8(void)

{
  func_0x00010beb6840();
  return;
}



/* Entry: 107b415e0; end: 107b4172b; -[SCOperaVideoLayerViewController _updateVideoControlsViewPaddingIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b415e0(float param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = param_2;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar4;
  func_0x00010bf4ffc0();
  if ((int)lVar1 != 0) {
    lVar1 = param_2;
    func_0x00010c0f0be0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(lVar4);
    if (lVar3 == 0) {
      return;
    }
    lVar4 = param_2;
    func_0x00010c0f0be0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar4;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2c80();
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(lVar4);
    lVar4 = *(long *)(param_2 + _DAT_11276abd4);
    func_0x00010c0ff060(lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c285640((double)param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 107b4172c; end: 107b41913; -[SCOperaVideoLayerViewController viewWillFullyDisappear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b4172c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126f9f70;
  lStack_60 = param_1;
  _objc_msgSendSuper2(&lStack_60,PTR_s_viewWillFullyDisappear_112685470);
  func_0x00010bf75fa0(*(undefined8 *)(param_1 + _DAT_11276abac));
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11276abb0);
  func_0x00010c100fe0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c100ae0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c9ac8;
  func_0x00010c100ae0(PTR_PTR_1126c9ac8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1);
  _objc_release(puVar3);
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar4 = *(undefined8 *)(param_1 + _DAT_11276ab14);
  func_0x00010c0c7000(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c9ac8;
  func_0x00010c0c7000(PTR_PTR_1126c9ac8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1);
  _objc_release(puVar3);
  _objc_release(uVar4);
  lVar5 = *(long *)(param_1 + _DAT_11276ab44);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  if (lVar5 == 0) {
    func_0x0001004f22a8();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar3 = PTR_PTR_1126c9ac8;
  func_0x00010c100b20(PTR_PTR_1126c9ac8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1);
  _objc_release(puVar3);
  if (lVar5 == 0) {
    _objc_release(lVar6);
  }
  _objc_release(lVar5);
  puVar3 = PTR_PTR_1126b2330;
  func_0x00010c29e820(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04440(param_1);
  _objc_release(puVar3);
  func_0x00010befa560(param_1);
  _objc_release(puVar1);
  return;
}



/* Entry: 107b41914; end: 107b419e3; -[SCOperaVideoLayerViewController viewDidFullyDisappear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b41914(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_11276ab70);
  func_0x00010bfc8960();
  if ((lVar1 == 0) || ((*(byte *)(param_1 + _DAT_11276ab8c) & 1) == 0)) {
    func_0x00010bec3640(param_1);
  }
  _objc_opt_class(param_1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11276abb0);
  func_0x00010c100fe0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c074c20();
  lVar1 = param_1;
  func_0x00010c0f0be0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  _objc_release(uVar2);
  func_0x00010c138720(*(undefined8 *)(param_1 + _DAT_11276ab64));
  func_0x00010becaf60(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010befa570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_addPageTraceEventForAction__11259c300,
             &PTR____CFConstantStringClassReference_110eaea18);
  return;
}



/* Entry: 107b419e4; end: 107b41aab; -[SCOperaVideoLayerViewController _stopPlayback] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b419e4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010be8da80();
  *(undefined1 *)(param_1 + _DAT_11276abbc) = 0;
  *(undefined1 *)(param_1 + _DAT_11276ac0c) = 0;
  if ((*(byte *)(param_1 + _DAT_11276abc8) & 1) == 0) {
    func_0x00010becae00(param_1,param_2,&PTR____CFConstantStringClassReference_110eaea38);
  }
  *(undefined1 *)(param_1 + _DAT_11276abe8) = 0;
  *(undefined1 *)(param_1 + _DAT_11276abf8) = 0;
  *(undefined1 *)(param_1 + _DAT_11276abb4) = 0;
  *(undefined1 *)(param_1 + _DAT_11276abf4) = 0;
  func_0x00010c2567e0(*(undefined8 *)(param_1 + _DAT_11276ab70));
  func_0x00010be08da0(param_1,param_2,0,9);
  func_0x00010bf73680(*(undefined8 *)(param_1 + _DAT_11276ac10),param_2,1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276abc4);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e6aa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107b41aac; end: 107b41d5b; -[SCOperaVideoLayerViewController _tearDownPlayerView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b41aac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  _objc_retain(param_3);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11276abd4);
  func_0x00010c0ff060(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c138680();
  _objc_release(uVar3);
  lVar7 = (long)_DAT_11276abb0;
  lVar4 = *(long *)(param_1 + lVar7);
  func_0x00010c100fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar4 != 0) {
    lVar5 = param_1;
    func_0x00010be74f60(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c281b60(*(undefined8 *)(param_1 + _DAT_11276abd0),param_2,lVar5);
    _objc_opt_class(param_1);
    lVar4 = param_1;
    func_0x00010c0eaa40(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1;
    func_0x00010c0f0be0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar6);
    _objc_release(lVar4);
    lVar4 = param_1 + _DAT_11276ab00;
    _objc_loadWeakRetained(lVar4);
    uVar3 = *(undefined8 *)(param_1 + lVar7);
    func_0x00010c100fe0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1;
    func_0x00010c0eaa40(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfaf800(lVar4,param_2,uVar3,lVar6);
    _objc_release(lVar6);
    _objc_release(uVar3);
    _objc_release(lVar4);
    func_0x00010be42b60(param_1,param_2,0,0);
    func_0x00010c1ddc80(*(undefined8 *)(param_1 + lVar7),param_2,0);
    *(undefined1 *)(param_1 + _DAT_11276aba8) = 0;
    *(undefined1 *)(param_1 + _DAT_11276ac14) = 0;
    func_0x00010be8da80(param_1);
    puVar2 = PTR__kCMTimeZero_110348670;
    puVar1 = (undefined8 *)(param_1 + _DAT_11276ab2c);
    uVar9 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    uVar8 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    puVar1[1] = uVar9;
    *puVar1 = uVar8;
    uVar3 = *(undefined8 *)(puVar2 + 0x10);
    puVar1[2] = uVar3;
    *(undefined1 *)(param_1 + _DAT_11276abd8) = 0;
    puVar1 = (undefined8 *)(param_1 + _DAT_11276ab40);
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = 0;
    puVar1 = (undefined8 *)(param_1 + _DAT_11276ab28);
    puVar1[1] = uVar9;
    *puVar1 = uVar8;
    puVar1[2] = uVar3;
    lVar4 = param_1;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar4;
    func_0x00010c25c720();
    _objc_release(lVar4);
    if ((int)lVar7 != 0) {
      func_0x00010be94400(param_1,param_2,0,&PTR____CFConstantStringClassReference_110eaea58);
    }
    func_0x00010c137fe0(*(undefined8 *)(param_1 + _DAT_11276ab6c));
    _objc_release(lVar5);
  }
  *(undefined1 *)(param_1 + _DAT_11276ab1c) = 0;
  lVar4 = (long)_DAT_11276ac18;
  if (*(long *)(param_1 + lVar4) != 0) {
    func_0x00010c12c960();
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    *(undefined8 *)(param_1 + lVar4) = 0;
    _objc_release(uVar3);
  }
  lVar4 = (long)_DAT_11276ac1c;
  if (*(long *)(param_1 + lVar4) != 0) {
    func_0x00010c281a80(*(undefined8 *)(param_1 + _DAT_11276ab04));
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    *(undefined8 *)(param_1 + lVar4) = 0;
    _objc_release(uVar3);
  }
  func_0x00010befa560(param_1,param_2,&PTR____CFConstantStringClassReference_110eaea78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b41d5c; end: 107b41e93; -[SCOperaVideoLayerViewController _mediaIsBeingPreparedForDisplayImpl] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_107b41d5c(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  byte bVar7;
  long lVar8;
  long lVar9;
  
  lVar8 = (long)_DAT_11276abf8;
  if ((*(byte *)(param_1 + lVar8) & 1) == 0) {
    uVar1 = param_1;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c25c720();
    if ((uVar2 & 1) == 0) {
      _objc_release(uVar1);
    }
    else {
      uVar2 = param_1;
      func_0x00010c08c0e0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c10a3c0();
      _objc_release(uVar2);
      _objc_release(uVar1);
      if ((int)uVar3 == 0) goto LAB_107b41e24;
    }
    lVar9 = (long)_DAT_11276abb0;
    lVar4 = *(long *)(param_1 + lVar9);
    func_0x00010c100fe0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c100ae0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c252d60();
    _objc_release(lVar5);
    _objc_release(lVar4);
    if (lVar6 != 2) {
      lVar4 = *(long *)(param_1 + lVar9);
      func_0x00010c100fe0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c100ae0();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c252d60();
      _objc_release(lVar5);
      _objc_release(lVar4);
      if (lVar6 == 0) {
        bVar7 = 1;
      }
      else {
        bVar7 = *(byte *)(param_1 + lVar8) ^ 1;
      }
      goto LAB_107b41e28;
    }
  }
LAB_107b41e24:
  bVar7 = 0;
LAB_107b41e28:
  return bVar7 & 1;
}



/* Entry: 107b41e94; end: 107b41f1f; -[SCOperaVideoLayerViewController _playerItemReachedEnd:] */

uint FUN_107b41e94(double param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  _objc_retain(param_4);
  if (param_4 != 0) {
    func_0x00010c09c8c0(auStack_38,param_4);
    _CMTimeGetSeconds(auStack_38);
    if (0.0 < param_1) {
      func_0x00010c09c8a0(auStack_38,param_4);
      func_0x00010c09c8c0(auStack_50,param_4);
      puVar1 = auStack_38;
      _CMTimeCompare(puVar1,auStack_50);
      uVar2 = ~(uint)puVar1 >> 0x1f;
      goto LAB_107b41f04;
    }
  }
  uVar2 = 0;
LAB_107b41f04:
  _objc_release(param_4);
  return uVar2;
}



/* Entry: 107b41f20; end: 107b41f57; -[SCOperaVideoLayerViewController setupProgressStateMachine:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b41f20(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276ac10);
  *(undefined8 *)(param_1 + _DAT_11276ac10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107b41f58; end: 107b41f5f; -[SCOperaVideoLayerViewController pause] */

void FUN_107b41f58(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0694d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_internalPauseWithType__1125f7f40,1);
  return;
}



/* Entry: 107b41f60; end: 107b420eb; -[SCOperaVideoLayerViewController internalPauseWithType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b41f60(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_opt_class();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bdf8620(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c0f0be0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(puVar1);
  uVar4 = *(undefined8 *)(param_1 + _DAT_11276abd4);
  func_0x00010c0ff060(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c272ae0();
  _objc_release(uVar4);
  *(undefined1 *)(param_1 + _DAT_11276ac24) = 0;
  *(undefined1 *)(param_1 + _DAT_11276abbc) = 0;
  func_0x00010c0f5fc0(*(undefined8 *)(param_1 + _DAT_11276ab70),param_2,param_3);
  lVar2 = param_1;
  func_0x00010be74f60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f5b20();
  _objc_release(lVar2);
  func_0x00010be42b60(param_1,param_2,0,0);
  func_0x00010bf73680(*(undefined8 *)(param_1 + _DAT_11276ac10),param_2,1);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa560(param_1,param_2,&PTR____CFConstantStringClassReference_110eaea98);
  _objc_release(puVar1);
  uVar4 = *(undefined8 *)(param_1 + _DAT_11276abc4);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e5740();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 107b420ec; end: 107b42173; -[SCOperaVideoLayerViewController setPausedForAttachment:] */

void FUN_107b420ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_opt_class();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c0f0be0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bea6330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setPausedForAttachment_showBlur_112587270,param_3,1);
  return;
}



/* Entry: 107b42174; end: 107b4250f; -[SCOperaVideoLayerViewController _setPausedForAttachment:showBlurView:] */

/* WARNING: Possible PIC construction at 0x000107b422dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107b422e0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b42174(long param_1,undefined8 param_2,int param_3,int param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_opt_class();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010c0f0be0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar7);
  _objc_release(puVar2);
  _objc_release(puVar1);
  *(char *)(param_1 + _DAT_11276abc8) = (char)param_3;
  lVar7 = (long)_DAT_11276ac28;
  if (((param_4 != 0) && (param_3 != 0)) && (*(long *)(param_1 + lVar7) == 0)) {
    puVar1 = PTR__OBJC_CLASS___UIVisualEffectView_1126b00e0;
    _objc_opt_new();
    uVar5 = *(undefined8 *)(param_1 + lVar7);
    *(undefined **)(param_1 + lVar7) = puVar1;
    _objc_release(uVar5);
    lVar8 = (long)_DAT_11276abb0;
    func_0x00010bfb68e0(*(undefined8 *)(param_1 + lVar8));
    func_0x00010c19f0e0(*(undefined8 *)(param_1 + lVar7));
    func_0x00010befbb60(*(undefined8 *)(param_1 + lVar8));
  }
  if (param_3 == 0) {
    lVar9 = (long)_DAT_11276ab38;
    lVar6 = *(long *)(param_1 + lVar9);
    _objc_retain(lVar6);
    lVar8 = lVar6;
    func_0x00010bf52a60();
    lVar3 = lRam0000000000000000;
    while (lVar8 != 0) {
      lVar10 = 0;
      do {
        if (lRam0000000000000000 != lVar3) {
          _objc_enumerationMutation(lVar6);
        }
        func_0x00010be17a40(param_1);
        lVar10 = lVar10 + 1;
      } while (lVar8 != lVar10);
      lVar8 = lVar6;
      func_0x00010bf52a60();
    }
    _objc_release(lVar6);
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + lVar9);
    *(undefined **)(param_1 + lVar9) = puVar1;
    _objc_release(uVar5);
    func_0x00010c21e900(*(undefined8 *)(param_1 + lVar7));
    lVar7 = param_1;
    func_0x00010c0ea360(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c069200();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar8;
    func_0x00010bfe1a80();
    _objc_release(lVar8);
    _objc_release(lVar7);
    func_0x00010bf03440((double)lVar3 / 1000.0,0,PTR__OBJC_CLASS___UIView_1126aec20);
  }
  else {
    if (param_4 != 0) {
      puVar1 = PTR__OBJC_CLASS___UIBlurEffect_1126b00d8;
      func_0x00010bf8cf60(PTR__OBJC_CLASS___UIBlurEffect_1126b00d8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c193d20(*(undefined8 *)(param_1 + lVar7));
      _objc_release(puVar1);
      func_0x00010c21e900(*(undefined8 *)(param_1 + lVar7));
      uVar5 = *(undefined8 *)(param_1 + lVar7);
      uVar11 = 0x3fd3333333333333;
      goto code_r0x00010c1677c0;
    }
    func_0x00010c193d20(*(undefined8 *)(param_1 + lVar7));
    func_0x00010c21e900(*(undefined8 *)(param_1 + lVar7));
    func_0x00010bf73680(*(undefined8 *)(param_1 + _DAT_11276ac10));
  }
  func_0x00010bedd320();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11276ac28);
  uVar11 = 0x3ff0000000000000;
code_r0x00010c1677c0:
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar11,uVar5,PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 107b42510; end: 107b4253f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b42510(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11276ac28),
             PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 107b42540; end: 107b42553; -[SCOperaVideoLayerViewController overridePauseStateToPause] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b42540(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_11276abe8) = 1;
  return;
}


