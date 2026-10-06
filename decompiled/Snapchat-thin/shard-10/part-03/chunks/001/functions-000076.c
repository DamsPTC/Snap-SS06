/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107e573ec; end: 107e573ef; -[SCTimelineSnapStateHandler timelineConfigurationDidUpdateThumbnails:] */

void FUN_107e573ec(void)

{
  return;
}



/* Entry: 107e573f0; end: 107e573f3; -[SCTimelineSnapStateHandler timelineConfiguration:didUpdateThumbnailsForSegment:] */

void FUN_107e573f0(void)

{
  return;
}



/* Entry: 107e573f4; end: 107e5746b; -[SCTimelineSnapStateHandler didDeleteSegmentAtIndex:] */

void FUN_107e573f4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0c0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,
                      *(undefined8 *)(param_1 + 0xd0));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d3c0();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a0c0(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0xd0);
  *(undefined **)(param_1 + 0xd0) = puVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107e5746c; end: 107e57533; -[SCTimelineSnapStateHandler didFinishTouchWithTarget:] */

void FUN_107e5746c(undefined8 param_1,undefined8 param_2,ulong param_3)

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



/* Entry: 107e57534; end: 107e57627; -[SCTimelineSnapStateHandler _handleConfiguration:didAddSegment:atIndex:] */

void FUN_107e57534(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lStack_48;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c0c3100();
  lStack_48 = lVar1 + 1;
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0c0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,
                      *(undefined8 *)(param_1 + 0xd0));
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010be4f3c0(param_1,param_2,param_4,param_3,&lStack_48,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  func_0x00010befa120(puVar2,param_2,lVar1);
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a0c0(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0xd0);
  *(undefined **)(param_1 + 0xd0) = puVar3;
  _objc_release(uVar4);
  _objc_release(lVar1);
  _objc_release(puVar2);
  return;
}



/* Entry: 107e57628; end: 107e57cef; -[SCTimelineSnapStateHandler _translateEditingState:] */

/* WARNING: Possible PIC construction at 0x000107e57880: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107e579f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107e57884) */
/* WARNING: Removing unreachable block (ram,0x000107e5793c) */
/* WARNING: Removing unreachable block (ram,0x000107e57888) */
/* WARNING: Removing unreachable block (ram,0x000107e578cc) */
/* WARNING: Removing unreachable block (ram,0x000107e57930) */
/* WARNING: Removing unreachable block (ram,0x000107e57948) */
/* WARNING: Removing unreachable block (ram,0x000107e57954) */
/* WARNING: Removing unreachable block (ram,0x000107e579fc) */
/* WARNING: Removing unreachable block (ram,0x000107e57a7c) */
/* WARNING: Removing unreachable block (ram,0x000107e57a00) */
/* WARNING: Removing unreachable block (ram,0x000107e57a44) */
/* WARNING: Removing unreachable block (ram,0x000107e57a70) */
/* WARNING: Removing unreachable block (ram,0x000107e57a88) */
/* WARNING: Removing unreachable block (ram,0x000107e57a94) */
/* WARNING: Removing unreachable block (ram,0x000107e579e4) */
/* WARNING: Removing unreachable block (ram,0x000107e5786c) */

void FUN_107e57628(long param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  long lStack_2a8;
  long *plStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c2553e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf04920();
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bf308c0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar1;
  func_0x00010bf04920();
  _objc_release(uVar1);
  if (((uVar2 & 1) == 0) && ((uVar12 & 1) == 0)) {
    uVar1 = param_3;
    func_0x00010bf11400();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar1 != 0) goto LAB_107e576e4;
  }
  else {
LAB_107e576e4:
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    lStack_2a8 = 0;
    uStack_2b0 = 0;
    uStack_298 = 0;
    plStack_2a0 = (long *)0x0;
    uStack_288 = 0;
    uStack_290 = 0;
    uStack_278 = 0;
    uStack_280 = 0;
    lVar4 = param_1 + 0xe0;
    _objc_loadWeakRetained();
    lVar5 = lVar4;
    func_0x00010c1585e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    lVar4 = lVar5;
    func_0x00010bf52a60();
    if (lVar4 != 0) {
      lVar10 = *plStack_2a0;
      do {
        lVar11 = 0;
        do {
          if (*plStack_2a0 != lVar10) {
            _objc_enumerationMutation(lVar5);
          }
          puVar6 = PTR__OBJC_CLASS___NSValue_1126afdf8;
          if (*(long *)(lStack_2a8 + lVar11 * 8) == 0) {
            uStack_2c8 = 0;
            uStack_2d0 = 0;
            uStack_2b8 = 0;
            uStack_2c0 = 0;
            uStack_2d8 = 0;
            uStack_2e0 = 0;
          }
          else {
            func_0x00010c27c900(&uStack_2e0);
          }
          func_0x00010c297240(puVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar3);
          _objc_release(puVar6);
          lVar11 = lVar11 + 1;
        } while (lVar4 != lVar11);
        lVar4 = lVar5;
        func_0x00010bf52a60();
      } while (lVar4 != 0);
    }
    _objc_release(lVar5);
    puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_3;
    func_0x00010c2553e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf52a60();
    lVar4 = lRam0000000000000000;
    if (uVar2 != 0) goto code_r0x00010c081660;
    _objc_release(uVar1);
    puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_3;
    func_0x00010bf308c0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf52a60();
    lVar4 = lRam0000000000000000;
    if (uVar2 != 0) goto code_r0x00010c081660;
    _objc_release(uVar1);
    puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_3;
    func_0x00010bf11400();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0fb820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    uVar1 = uVar2;
    func_0x00010bf52a60();
    lVar4 = lRam0000000000000000;
    while (uVar1 != 0) {
      uVar12 = 0;
      do {
        if (lRam0000000000000000 != lVar4) {
          _objc_enumerationMutation(uVar2);
        }
        uVar14 = *(undefined8 *)(uVar12 * 8);
        uVar9 = uVar14;
        func_0x00010c27a600(uVar14);
        _objc_retainAutoreleasedReturnValue();
        lVar5 = param_1;
        func_0x00010bed0120(param_1);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar9);
        puVar13 = PTR_PTR_1126bcec8;
        _objc_alloc(PTR_PTR_1126bcec8);
        func_0x00010c26b700(uVar14);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c051760(puVar13);
        _objc_release(uVar14);
        func_0x00010befa120(puVar8);
        _objc_release(puVar13);
        _objc_release(lVar5);
        uVar12 = uVar12 + 1;
      } while (uVar1 != uVar12);
      uVar1 = uVar2;
      func_0x00010bf52a60();
    }
    _objc_release(uVar2);
    uVar1 = param_3;
    func_0x00010bf11400();
    _objc_retainAutoreleasedReturnValue();
    if (uVar1 == 0) {
      puVar13 = (undefined *)0x0;
    }
    else {
      puVar13 = PTR_PTR_1126bced0;
      _objc_alloc(PTR_PTR_1126bced0);
      func_0x00010c035e80();
    }
    _objc_release(uVar1);
    func_0x00010c20bc80(param_3);
    func_0x00010c178c80(param_3);
    func_0x00010c16cc80(param_3);
    _objc_release(puVar13);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar3);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  lVar4 = param_2;
code_r0x00010c081660:
                    /* WARNING: Could not recover jumptable at 0x00010c081670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar4,PTR_s_isTracking_1125fdfa8);
  return;
}



/* Entry: 107e57cf0; end: 107e57cff;  */

void FUN_107e57cf0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c081670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_isTracking_1125fdfa8);
  return;
}



/* Entry: 107e57d00; end: 107e5814b; -[SCTimelineSnapStateHandler _trimTrajectory:withTrimmedTimeRanges:] */

void FUN_107e57d00(long param_1,undefined8 param_2,undefined8 *param_3,long param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long lStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
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
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = param_3;
  func_0x00010bf529e0();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  _objc_retain(param_4);
  puVar6 = &uStack_140;
  lStack_220 = param_4;
  func_0x00010bf52a60();
  if (lStack_220 != 0) {
    puVar9 = (undefined8 *)0x0;
    lVar8 = *plStack_130;
    do {
      lVar10 = 0;
      do {
        if (*plStack_130 != lVar8) {
          _objc_enumerationMutation(param_4);
        }
        if ((long)puVar1 <= (long)puVar9) goto LAB_107e580f0;
        if (*(long *)(lStack_138 + lVar10 * 8) == 0) {
          uStack_158 = 0;
          uStack_160 = 0;
          uStack_148 = 0;
          uStack_150 = 0;
          uStack_168 = 0;
          uStack_170 = 0;
        }
        else {
          func_0x00010bdc1120(&uStack_170);
        }
        uStack_188 = uStack_168;
        uStack_190 = uStack_170;
        uStack_180 = uStack_160;
        uStack_1d8 = uStack_168;
        uStack_1e0 = uStack_170;
        uStack_1c8 = uStack_158;
        uStack_1d0 = uStack_160;
        uStack_1b8 = uStack_148;
        uStack_1c0 = uStack_150;
        _CMTimeRangeGetEnd(&uStack_1a8,&uStack_1e0);
        puVar7 = (undefined8 *)0x0;
        do {
          puVar3 = param_3;
          puVar6 = puVar9;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          if (puVar3 == (undefined8 *)0x0) {
            uStack_1e0 = 0;
            uStack_1d8 = 0;
            uStack_1d0 = 0;
          }
          else {
            func_0x00010c26f000(&uStack_1e0,puVar3);
          }
          uStack_1f8 = uStack_188;
          uStack_200 = uStack_190;
          uStack_1f0 = uStack_180;
          puVar4 = &uStack_1e0;
          _CMTimeCompare(puVar4,&uStack_200);
          if (0 < (int)puVar4) {
            _objc_release(puVar3);
            puVar4 = puVar9;
            puVar3 = puVar7;
            if (puVar7 != (undefined8 *)0x0) goto LAB_107e57ed8;
            goto LAB_107e57ebc;
          }
          _objc_release(puVar7);
          puVar9 = (undefined8 *)((long)puVar9 + 1);
          puVar7 = puVar3;
        } while (puVar1 != puVar9);
        puVar9 = puVar1;
        puVar4 = puVar1;
        if (puVar3 == (undefined8 *)0x0) {
LAB_107e57ebc:
          puVar6 = (undefined8 *)((long)puVar9 + -1);
          puVar4 = puVar9;
          puVar3 = puVar7;
          if (0 < (long)puVar9) {
            puVar3 = param_3;
            func_0x00010c0dfd40();
            _objc_retainAutoreleasedReturnValue();
          }
        }
LAB_107e57ed8:
        if (puVar3 != (undefined8 *)0x0) {
          lVar5 = param_1 + 0xe0;
          _objc_loadWeakRetained();
          if (lVar5 == 0) {
            uStack_1e0 = 0;
            uStack_1d8 = 0;
            uStack_1d0 = 0;
          }
          else {
            uStack_1f8 = uStack_188;
            uStack_200 = uStack_190;
            uStack_1f0 = uStack_180;
            func_0x00010c1004e0(&uStack_1e0,lVar5);
          }
          _objc_release(lVar5);
          puVar9 = (undefined8 *)PTR_PTR_1126bb2a8;
          _objc_alloc();
          puVar6 = puVar3;
          func_0x00010c27a460(puVar3);
          _objc_retainAutoreleasedReturnValue();
          uStack_1f8 = uStack_1d8;
          uStack_200 = uStack_1e0;
          uStack_1f0 = uStack_1d0;
          func_0x00010c052280();
          _objc_release(puVar3);
          _objc_release(puVar6);
          puVar6 = puVar9;
          func_0x00010befa120(puVar2);
          _objc_release(puVar9);
        }
        puVar9 = puVar4;
        if ((long)puVar4 < (long)puVar1) {
          do {
            puVar9 = param_3;
            puVar6 = puVar4;
            func_0x00010c0dfd40();
            _objc_retainAutoreleasedReturnValue();
            if (puVar9 == (undefined8 *)0x0) {
              uStack_1e0 = 0;
              uStack_1d8 = 0;
              uStack_1d0 = 0;
            }
            else {
              func_0x00010c26f000(&uStack_1e0,puVar9);
            }
            uStack_1f8 = uStack_1a0;
            uStack_200 = uStack_1a8;
            uStack_1f0 = uStack_198;
            puVar7 = &uStack_1e0;
            _CMTimeCompare(puVar7,&uStack_200);
            if (0 < (int)puVar7) {
              _objc_release(puVar9);
              puVar9 = puVar4;
              break;
            }
            lVar5 = param_1 + 0xe0;
            _objc_loadWeakRetained();
            if (puVar9 == (undefined8 *)0x0) {
              uStack_218 = 0;
              uStack_210 = 0;
              uStack_208 = 0;
              if (lVar5 != 0) goto LAB_107e5800c;
LAB_107e5802c:
              uStack_1e0 = 0;
              uStack_1d8 = 0;
              uStack_1d0 = 0;
            }
            else {
              func_0x00010c26f000(&uStack_218,puVar9);
              if (lVar5 == 0) goto LAB_107e5802c;
LAB_107e5800c:
              func_0x00010c1004e0(&uStack_1e0,lVar5);
            }
            _objc_release(lVar5);
            puVar7 = (undefined8 *)PTR_PTR_1126bb2a8;
            _objc_alloc();
            puVar6 = puVar9;
            func_0x00010c27a460(puVar9);
            _objc_retainAutoreleasedReturnValue();
            uStack_1f8 = uStack_1d8;
            uStack_200 = uStack_1e0;
            uStack_1f0 = uStack_1d0;
            func_0x00010c052280();
            _objc_release(puVar6);
            puVar6 = puVar7;
            func_0x00010befa120(puVar2);
            _objc_release(puVar7);
            puVar4 = (undefined8 *)((long)puVar4 + 1);
            _objc_release(puVar9);
            puVar9 = puVar1;
          } while (puVar1 != puVar4);
        }
        lVar10 = lVar10 + 1;
      } while (lVar10 != lStack_220);
      puVar6 = &uStack_140;
      lStack_220 = param_4;
      func_0x00010bf52a60();
    } while (lStack_220 != 0);
  }
LAB_107e580f0:
  _objc_release(param_4);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
    ___stack_chk_fail();
    puVar1 = (undefined8 *)param_3[0x1a];
    if (param_3[0x1b] == 0) {
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bf529e0();
      if (puVar6 < puVar1) {
        func_0x00010c0dfd40(param_3[0x1a]);
        _objc_retainAutoreleasedReturnValue();
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107e5814c; end: 107e581ab; -[SCTimelineSnapStateHandler _localEditingStateForSegmentAtIndex:] */

void FUN_107e5814c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0xd0);
  if (*(long *)(param_1 + 0xd8) == 0) {
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf529e0();
    if (param_3 < uVar1) {
      func_0x00010c0dfd40(*(undefined8 *)(param_1 + 0xd0),param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107e581ac; end: 107e581b3; -[SCTimelineSnapStateHandler localStates] */

undefined8 FUN_107e581ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd0);
}



/* Entry: 107e581b4; end: 107e581bb; -[SCTimelineSnapStateHandler globalState] */

undefined8 FUN_107e581b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd8);
}



/* Entry: 107e581bc; end: 107e581d3; -[SCTimelineSnapStateHandler previewConfiguration] */

void FUN_107e581bc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107e581d4; end: 107e581df; -[SCTimelineSnapStateHandler setPreviewConfiguration:] */

void FUN_107e581d4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 8,param_3);
  return;
}



/* Entry: 107e581e0; end: 107e581f7; -[SCTimelineSnapStateHandler configuration] */

void FUN_107e581e0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xe0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107e581f8; end: 107e5820f; -[SCTimelineSnapStateHandler indexProvider] */

void FUN_107e581f8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xe8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107e58210; end: 107e5821b; -[SCTimelineSnapStateHandler setIndexProvider:] */

void FUN_107e58210(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xe8,param_3);
  return;
}



/* Entry: 107e5821c; end: 107e58233; -[SCTimelineSnapStateHandler snapDocEditor] */

void FUN_107e5821c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xf0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107e58234; end: 107e5823f; -[SCTimelineSnapStateHandler setSnapDocEditor:] */

void FUN_107e58234(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xf0,param_3);
  return;
}



/* Entry: 107e58240; end: 107e58387; -[SCTimelineSnapStateHandler .cxx_destruct] */

void FUN_107e58240(long param_1)

{
  _objc_destroyWeak(param_1 + 0xf0);
  _objc_destroyWeak(param_1 + 0xe8);
  _objc_destroyWeak(param_1 + 0xe0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_destroyWeak(param_1 + 0x40);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 107e58388; end: 107e583ff;  */

void FUN_107e58388(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110ec13d8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110ec13d8,
                      &PTR____CFConstantStringClassReference_110ec13f8,0);
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



/* Entry: 107e58400; end: 107e58473; -[SCPreviewFeatureDirectorModeServices initWithDirectorMode:] */

undefined1 * FUN_107e58400(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fb660;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107e58474; end: 107e5847b; -[SCPreviewFeatureDirectorModeServices directorMode] */

undefined8 FUN_107e58474(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107e5847c; end: 107e58487; -[SCPreviewFeatureDirectorModeServices .cxx_destruct] */

void FUN_107e5847c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107e58488; end: 107e58513; +[SCMemoriesSnapDocParsingUtils playbackValidationErrorForSnapDoc:] */

void FUN_107e58488(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126c7c50;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c029140();
  puVar2 = puVar1;
  func_0x00010bf220e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = param_3;
  func_0x000108021ea0(param_3,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 107e58514; end: 107e586b7; +[SCMemoriesSnapDocParsingUtils baseMediaAudioRenderEffectFromSegmentEffects:] */

void FUN_107e58514(undefined8 param_1,undefined8 param_2,undefined1 *param_3,undefined1 *param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  undefined1 *puStack_148;
  undefined1 *puStack_140;
  undefined1 *puStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  puVar4 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_3;
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  if ((puVar1 == (undefined1 *)0x0) || (puVar7 = puVar1, func_0x00010bf8cf20(), (int)puVar7 != 1)) {
LAB_107e58668:
    puVar7 = (undefined1 *)0x0;
  }
  else {
    puVar2 = puVar1;
    func_0x00010bf101a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a0dc0();
    _objc_release(puVar2);
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    lStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    _objc_retain(param_3);
    param_4 = auStack_d8;
    puVar2 = param_3;
    func_0x00010bf52a60(param_3,param_2,&uStack_120,param_4,0x10);
    if (puVar2 != (undefined1 *)0x0) {
      lVar6 = *plStack_110;
      do {
        puVar7 = (undefined1 *)0x0;
        do {
          if (*plStack_110 != lVar6) {
            _objc_enumerationMutation(param_3);
          }
          uVar5 = *(undefined8 *)(lStack_118 + (long)puVar7 * 8);
          uVar3 = uVar5;
          func_0x00010bf8cf20();
          if ((int)uVar3 != 1) {
            _objc_release(param_3);
            puVar2 = (undefined1 *)puVar4;
            goto LAB_107e58668;
          }
          func_0x00010bf101a0(uVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2a0dc0();
          _objc_release(uVar5);
          puVar7 = puVar7 + 1;
        } while (puVar2 != puVar7);
        param_4 = auStack_d8;
        puVar2 = param_3;
        puVar4 = &uStack_120;
        func_0x00010bf52a60(param_3,param_2,&uStack_120,param_4,0x10);
      } while (puVar2 != (undefined1 *)0x0);
    }
    _objc_release(param_3);
    _objc_retain(puVar1);
    puVar2 = (undefined1 *)puVar4;
    puVar7 = puVar1;
  }
  _objc_release(puVar1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return;
  }
  ___stack_chk_fail();
  pcStack_128 = FUN_107e586b8;
  puStack_140 = puVar1;
  puStack_138 = param_3;
  puStack_130 = &stack0xfffffffffffffff0;
  _objc_retain(param_4);
  if (param_4 != (undefined1 *)0x0) {
    puStack_168 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_160 = 0xc2000000;
    pcStack_158 = FUN_107e58744;
    puStack_150 = &UNK_110a0f950;
    _objc_retain(param_4);
    puStack_148 = param_4;
    func_0x00010c13ec60(puVar2,param_2,0x11,&puStack_168);
    _objc_release(puStack_148);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 107e586b8; end: 107e58743; +[SCMemoriesSnapDocParsingUtils plainAudioTrackFromSnapDocParser:completion:] */

void FUN_107e586b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  _objc_retain(param_4);
  if (param_4 != 0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_107e58744;
    puStack_30 = &UNK_110a0f950;
    _objc_retain(param_4);
    lStack_28 = param_4;
    func_0x00010c13ec60(param_3,param_2,0x11,&puStack_48);
    _objc_release(lStack_28);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 107e58744; end: 107e58bdf;  */

void FUN_107e58744(double param_1,long param_2,ulong param_3,undefined8 param_4,long param_5,
                  long param_6,long param_7)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined *puVar10;
  double dVar11;
  float fVar12;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if ((param_7 != 0) || (uVar9 = param_3, func_0x00010bf529e0(), uVar9 == 0)) {
    (**(code **)(*(long *)(param_2 + 0x20) + 0x10))(*(long *)(param_2 + 0x20),0);
    goto LAB_107e58b6c;
  }
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uVar9 = param_3;
  func_0x00010bf529e0();
  if (uVar9 == 0) {
LAB_107e58b14:
    (**(code **)(*(long *)(param_2 + 0x20) + 0x10))(*(long *)(param_2 + 0x20),0);
  }
  else {
    uVar9 = 0;
    fVar12 = -1.0;
    do {
      puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar10);
      if (lVar2 == 0) {
LAB_107e58b28:
        (**(code **)(*(long *)(param_2 + 0x20) + 0x10))(*(long *)(param_2 + 0x20),0);
        goto LAB_107e58b60;
      }
      lVar3 = lVar2;
      func_0x00010bf101a0(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2a0dc0();
      dVar11 = param_1;
      _objc_release(lVar3);
      if (param_1 < 0.0) goto LAB_107e58b28;
      if (0.0 <= fVar12) {
        lVar3 = lVar2;
        func_0x00010bf101a0(lVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2a0dc0();
        param_1 = dVar11;
        _objc_release(lVar3);
        if (dVar11 != (double)fVar12) goto LAB_107e58b28;
      }
      else {
        lVar3 = lVar2;
        func_0x00010bf101a0(lVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2a0dc0();
        fVar12 = (float)dVar11;
        _objc_release(lVar3);
        param_1 = dVar11;
      }
      uVar4 = param_3;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010b7f5374();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      if (uVar5 == 0) goto LAB_107e58b28;
      puVar10 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
      _objc_alloc();
      func_0x00010c0082a0();
      if (puVar10 == (undefined *)0x0) {
        (**(code **)(*(long *)(param_2 + 0x20) + 0x10))(*(long *)(param_2 + 0x20),0);
        _objc_release(uVar5);
        goto LAB_107e58b60;
      }
      func_0x00010befa120(puVar1);
      _objc_release(puVar10);
      _objc_release(uVar5);
      _objc_release(lVar2);
      uVar9 = uVar9 + 1;
      uVar4 = param_3;
      func_0x00010bf529e0();
    } while (uVar9 < uVar4);
    if (fVar12 <= 0.0) goto LAB_107e58b14;
    lVar2 = param_6;
    func_0x00010c0d3c80();
    puVar10 = puVar1;
    func_0x00010bf529e0();
    if (puVar10 != (undefined *)0x0) {
      puVar10 = (undefined *)0x0;
      do {
        puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(puVar6);
        puVar6 = PTR__OBJC_CLASS___NSValue_1126afdf8;
        if (lVar3 == 0) {
          puVar7 = puVar1;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          if (puVar7 == (undefined *)0x0) {
            uStack_c8 = 0;
            uStack_c0 = 0;
            uStack_b8 = 0;
          }
          else {
            func_0x00010bf8b160(&uStack_c8,puVar7);
          }
          uStack_d8 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
          uStack_e0 = *(undefined8 *)PTR__kCMTimeZero_110348670;
          uStack_d0 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
          _CMTimeRangeMake(&uStack_b0,&uStack_e0,&uStack_c8);
          func_0x00010c297240(puVar6);
          _objc_retainAutoreleasedReturnValue();
          puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(lVar2);
          _objc_release(puVar8);
          _objc_release(puVar6);
          _objc_release(puVar7);
        }
        puVar10 = puVar10 + 1;
        puVar6 = puVar1;
        func_0x00010bf529e0();
      } while (puVar10 < puVar6);
    }
    puVar10 = puVar1;
    func_0x00010911e1a8(puVar1,lVar2);
    _objc_retainAutoreleasedReturnValue();
    if (puVar10 == (undefined *)0x0) {
      (**(code **)(*(long *)(param_2 + 0x20) + 0x10))(*(long *)(param_2 + 0x20),0);
    }
    else {
      puVar6 = PTR_PTR_1126bf680;
      _objc_alloc(PTR_PTR_1126bf680);
      uStack_a8 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
      uStack_b0 = *(undefined8 *)PTR__kCMTimeZero_110348670;
      uStack_a0 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
      func_0x00010b744494(fVar12);
      (**(code **)(*(long *)(param_2 + 0x20) + 0x10))(*(long *)(param_2 + 0x20),puVar6);
      _objc_release(puVar6);
    }
    _objc_release(puVar10);
LAB_107e58b60:
    _objc_release(lVar2);
  }
  _objc_release(puVar1);
LAB_107e58b6c:
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107e58be0; end: 107e58d57; -[SCMemoriesTimelineSnapDocParser initWithSnapDocManager:snapDoc:] */

undefined1 *
FUN_107e58be0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126fb668;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  puVar2 = PTR_PTR_1126c7c50;
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    _objc_alloc(puVar2);
    func_0x00010c029140();
    puVar3 = puVar2;
    func_0x00010bf220e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    uVar4 = param_4;
    func_0x000108022988(param_4,puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    _objc_release(uVar4);
    _objc_release(puVar3);
    _objc_retain(param_3);
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar4);
    _objc_retain(param_4);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    _objc_release(puVar3);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107e58d58; end: 107e595e3; -[SCMemoriesTimelineSnapDocParser retrieveCTItemRenderEffects] */

void FUN_107e58d58(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined *puVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  ulong uVar28;
  long lVar29;
  undefined *puVar30;
  int iVar31;
  long lVar32;
  ulong uVar33;
  long lVar34;
  long lVar35;
  undefined *puStack_5c0;
  undefined8 uStack_5b8;
  code *pcStack_5b0;
  undefined *puStack_5a8;
  undefined *puStack_5a0;
  ulong uStack_598;
  long lStack_378;
  
  lVar23 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = *(ulong *)(param_1 + 0x18);
  FUN_107e595e4();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bfb0d80();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010c154b60();
  _objc_retainAutoreleasedReturnValue();
  puVar30 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uVar33 = uVar7;
  func_0x00010c2827c0();
  lVar8 = *(long *)(param_1 + 0x18);
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c0c4c40();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = lVar9;
  func_0x00010c12fae0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar24 == 0) {
    lVar29 = 0;
  }
  else {
    lVar10 = lVar24;
    func_0x00010c12fb00();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar10;
    func_0x00010bf52a60();
    lVar27 = lRam0000000000000000;
    lVar29 = 0;
    if (lVar11 != 0) {
      do {
        lVar34 = 0;
        do {
          if (lRam0000000000000000 != lVar27) {
            _objc_enumerationMutation(lVar10);
          }
          lVar25 = *(long *)(lVar34 * 8);
          lVar29 = lVar25;
          func_0x00010c14fb60();
          if ((int)lVar29 == 2) {
            func_0x00010c12f9a0();
            _objc_retainAutoreleasedReturnValue();
            lVar12 = lVar25;
            func_0x00010bf52a60();
            lVar1 = lRam0000000000000000;
            while (lVar12 != 0) {
              lVar32 = 0;
              do {
                if (lRam0000000000000000 != lVar1) {
                  _objc_enumerationMutation(lVar25);
                }
                lVar13 = *(long *)(lVar32 * 8);
                func_0x00010c12fa40();
                _objc_retainAutoreleasedReturnValue();
                lVar14 = lVar13;
                func_0x00010bf52a60();
                lVar2 = lRam0000000000000000;
                while (lVar14 != 0) {
                  lVar26 = 0;
                  do {
                    if (lRam0000000000000000 != lVar2) {
                      _objc_enumerationMutation(lVar13);
                    }
                    lVar29 = *(long *)(lVar26 * 8);
                    lVar15 = lVar29;
                    func_0x00010c0664a0();
                    if ((lVar15 == 1) && (lVar15 = lVar29, func_0x00010bf8cec0(), (int)lVar15 == 1))
                    {
                      lVar16 = lVar29;
                      func_0x00010c066480();
                      _objc_retainAutoreleasedReturnValue();
                      lVar15 = lVar16;
                      func_0x00010bf52a60();
                      lVar3 = lRam0000000000000000;
                      while (lVar15 != 0) {
                        lVar35 = 0;
                        do {
                          if (lRam0000000000000000 != lVar3) {
                            _objc_enumerationMutation(lVar16);
                          }
                          iVar31 = (int)*(undefined8 *)(lVar35 * 8);
                          iVar4 = iVar31;
                          func_0x00010c065ee0();
                          if ((iVar4 == 8) && (func_0x00010c277f00(), iVar31 == (int)uVar33)) {
                            func_0x00010bf5cc00();
                            _objc_retainAutoreleasedReturnValue();
                            _objc_release(lVar16);
                            _objc_release(lVar13);
                            _objc_release(lVar25);
                            goto LAB_107e5913c;
                          }
                          lVar35 = lVar35 + 1;
                        } while (lVar15 != lVar35);
                        lVar15 = lVar16;
                        func_0x00010bf52a60();
                      }
                      _objc_release(lVar16);
                    }
                    lVar26 = lVar26 + 1;
                  } while (lVar26 != lVar14);
                  lVar14 = lVar13;
                  func_0x00010bf52a60();
                }
                _objc_release(lVar13);
                lVar32 = lVar32 + 1;
              } while (lVar32 != lVar12);
              lVar12 = lVar25;
              func_0x00010bf52a60();
            }
            _objc_release(lVar25);
          }
          lVar34 = lVar34 + 1;
        } while (lVar34 != lVar11);
        lVar11 = lVar10;
        func_0x00010bf52a60();
      } while (lVar11 != 0);
      lVar29 = 0;
    }
LAB_107e5913c:
    _objc_release(lVar10);
  }
  _objc_release(lVar24);
  _objc_release(lVar9);
  _objc_release(lVar8);
  if (lVar29 != 0) {
    puVar17 = PTR_PTR_1126affe8;
    func_0x00010bfccec0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar30);
    _objc_release(puVar17);
  }
  uVar33 = uVar6;
  func_0x00010bf529e0();
  if (uVar33 != 0) {
    uVar33 = 0;
    do {
      lVar8 = *(long *)(param_1 + 0x18);
      func_0x00010c0fee00();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar8;
      func_0x00010c0c4c40();
      _objc_retainAutoreleasedReturnValue();
      lVar24 = lVar9;
      func_0x00010c12fae0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar24 == 0) {
        lVar27 = 0;
      }
      else {
        lVar11 = lVar24;
        func_0x00010c12fb00();
        _objc_retainAutoreleasedReturnValue();
        lStack_378 = lVar11;
        func_0x00010bf52a60();
        lVar10 = lRam0000000000000000;
        if (lStack_378 == 0) {
          lVar27 = 0;
        }
        else {
          do {
            lVar34 = 0;
            do {
              if (lRam0000000000000000 != lVar10) {
                _objc_enumerationMutation(lVar11);
              }
              lVar25 = *(long *)(lVar34 * 8);
              lVar27 = lVar25;
              func_0x00010c14fb60();
              if ((int)lVar27 == 2) {
                func_0x00010c12f9a0();
                _objc_retainAutoreleasedReturnValue();
                lVar12 = lVar25;
                func_0x00010bf52a60();
                lVar1 = lRam0000000000000000;
                while (lVar12 != 0) {
                  lVar32 = 0;
                  do {
                    if (lRam0000000000000000 != lVar1) {
                      _objc_enumerationMutation(lVar25);
                    }
                    lVar13 = *(long *)(lVar32 * 8);
                    func_0x00010c12fa40();
                    _objc_retainAutoreleasedReturnValue();
                    lVar14 = lVar13;
                    func_0x00010bf52a60();
                    lVar2 = lRam0000000000000000;
                    while (lVar14 != 0) {
                      lVar26 = 0;
                      do {
                        if (lRam0000000000000000 != lVar2) {
                          _objc_enumerationMutation(lVar13);
                        }
                        lVar27 = *(long *)(lVar26 * 8);
                        lVar15 = lVar27;
                        func_0x00010c0664a0();
                        if ((lVar15 == 1) &&
                           (lVar15 = lVar27, func_0x00010bf8cec0(), (int)lVar15 == 1)) {
                          lVar16 = lVar27;
                          func_0x00010c066480();
                          _objc_retainAutoreleasedReturnValue();
                          lVar15 = lVar16;
                          func_0x00010bf52a60();
                          lVar3 = lRam0000000000000000;
                          while (lVar15 != 0) {
                            lVar35 = 0;
                            do {
                              if (lRam0000000000000000 != lVar3) {
                                _objc_enumerationMutation(lVar16);
                              }
                              iVar31 = (int)*(undefined8 *)(lVar35 * 8);
                              iVar4 = iVar31;
                              func_0x00010c065ee0();
                              if ((iVar4 == 0xb) && (func_0x00010c278740(), iVar31 == (int)uVar33))
                              {
                                func_0x00010bf5cc00();
                                _objc_retainAutoreleasedReturnValue();
                                _objc_release(lVar16);
                                _objc_release(lVar13);
                                _objc_release(lVar25);
                                goto LAB_107e59514;
                              }
                              lVar35 = lVar35 + 1;
                            } while (lVar15 != lVar35);
                            lVar15 = lVar16;
                            func_0x00010bf52a60();
                          }
                          _objc_release(lVar16);
                        }
                        lVar26 = lVar26 + 1;
                      } while (lVar26 != lVar14);
                      lVar14 = lVar13;
                      func_0x00010bf52a60();
                    }
                    _objc_release(lVar13);
                    lVar32 = lVar32 + 1;
                  } while (lVar32 != lVar12);
                  lVar12 = lVar25;
                  func_0x00010bf52a60();
                }
                _objc_release(lVar25);
              }
              lVar34 = lVar34 + 1;
            } while (lVar34 != lStack_378);
            lStack_378 = lVar11;
            func_0x00010bf52a60();
          } while (lStack_378 != 0);
          lVar27 = 0;
        }
LAB_107e59514:
        _objc_release(lVar11);
      }
      _objc_release(lVar24);
      _objc_release(lVar9);
      _objc_release(lVar8);
      if (lVar27 != 0) {
        puVar17 = PTR_PTR_1126affe8;
        func_0x00010c09e180();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar30);
        _objc_release(puVar17);
      }
      _objc_release(lVar27);
      uVar33 = uVar33 + 1;
      uVar18 = uVar6;
      func_0x00010bf529e0();
    } while (uVar33 < uVar18);
  }
  _objc_release(lVar29);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar23) {
    ___stack_chk_fail();
    lVar24 = *(long *)PTR____stack_chk_guard_11034bdc0;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c0c4c40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c08c260();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    _objc_release(uVar5);
    uVar33 = uVar7;
    func_0x00010c2791c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    uVar6 = uVar33;
    func_0x00010bf52a60();
    lVar9 = lRam0000000000000000;
    while (uVar6 != 0) {
      uVar5 = 0;
      do {
        if (lRam0000000000000000 != lVar9) {
          _objc_enumerationMutation(uVar33);
        }
        uVar28 = *(ulong *)(uVar5 * 8);
        uVar18 = uVar28;
        func_0x00010c278a40();
        if (((int)uVar18 == 1) && (uVar18 = uVar28, func_0x00010c074780(), (uVar18 & 1) == 0)) {
          _objc_retain(uVar28);
          goto LAB_107e59710;
        }
        uVar5 = uVar5 + 1;
      } while (uVar6 != uVar5);
      uVar6 = uVar33;
      func_0x00010bf52a60();
    }
    uVar28 = 0;
LAB_107e59710:
    _objc_release(uVar33);
    uVar6 = uVar28;
    func_0x00010c2787c0();
    puVar30 = PTR_PTR_1126b60f8;
    if (uVar6 == 0) {
      puVar30 = (undefined *)0x0;
    }
    else {
      uVar6 = uVar28;
      func_0x00010c2787a0();
      _objc_retainAutoreleasedReturnValue();
      puVar17 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c277f00(uVar28);
      func_0x00010c0df820();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f2b40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar17);
      _objc_release(uVar6);
    }
    _objc_release(uVar28);
    _objc_release(uVar33);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar24) {
      ___stack_chk_fail();
      uVar33 = *(ulong *)(uVar7 + 0x18);
      FUN_107e595e4();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar33;
      func_0x00010bfb0d80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar33);
      uVar19 = *(undefined8 *)(uVar7 + 0x18);
      FUN_107e5998c(uVar19);
      _objc_retainAutoreleasedReturnValue();
      puVar30 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
      uVar33 = uVar6;
      func_0x00010bf529e0();
      if (uVar33 != 0) {
        uVar33 = 0;
        do {
          uVar5 = uVar6;
          func_0x00010c0dfd40(uVar6);
          _objc_retainAutoreleasedReturnValue();
          uVar20 = *(undefined8 *)(uVar7 + 0x18);
          func_0x00010c0fee00(uVar20);
          _objc_retainAutoreleasedReturnValue();
          uVar21 = uVar20;
          func_0x00010c0c4c40();
          _objc_retainAutoreleasedReturnValue();
          uVar22 = uVar21;
          func_0x00010c12fae0();
          _objc_retainAutoreleasedReturnValue();
          puStack_5c0 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_5b8 = 0xc2000000;
          pcStack_5b0 = FUN_107e5a208;
          puStack_5a8 = &UNK_110a0f980;
          _objc_retain(puVar30);
          puStack_5a0 = puVar30;
          uStack_598 = uVar33;
          func_0x000107e59d88(uVar5,uVar22,uVar19,&puStack_5c0);
          _objc_release(uVar22);
          _objc_release(uVar21);
          _objc_release(uVar20);
          _objc_release(uVar5);
          _objc_release(puStack_5a0);
          uVar33 = uVar33 + 1;
          uVar5 = uVar6;
          func_0x00010bf529e0();
        } while (uVar33 < uVar5);
      }
      _objc_release(uVar19);
      _objc_release(uVar6);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar30);
  return;
}



/* Entry: 107e595e4; end: 107e597ef;  */

void FUN_107e595e4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  undefined *puVar14;
  long lVar15;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  code *pcStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  ulong uStack_198;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c0c4c40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08c260();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(param_1);
  lVar4 = lVar3;
  func_0x00010c2791c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  lVar2 = lVar4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (lVar2 == 0) {
      uVar13 = 0;
LAB_107e59710:
      _objc_release(lVar4);
      uVar5 = uVar13;
      func_0x00010c2787c0();
      puVar14 = PTR_PTR_1126b60f8;
      if (uVar5 == 0) {
        puVar14 = (undefined *)0x0;
      }
      else {
        uVar5 = uVar13;
        func_0x00010c2787a0();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c277f00(uVar13);
        func_0x00010c0df820();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0f2b40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar6);
        _objc_release(uVar5);
      }
      _objc_release(uVar13);
      _objc_release(lVar4);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
        ___stack_chk_fail();
        uVar13 = *(ulong *)(lVar3 + 0x18);
        FUN_107e595e4();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar13;
        func_0x00010bfb0d80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar13);
        uVar7 = *(undefined8 *)(lVar3 + 0x18);
        FUN_107e5998c(uVar7);
        _objc_retainAutoreleasedReturnValue();
        puVar14 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        func_0x00010bf71e20();
        _objc_retainAutoreleasedReturnValue();
        uVar13 = uVar5;
        func_0x00010bf529e0();
        if (uVar13 != 0) {
          uVar13 = 0;
          do {
            uVar8 = uVar5;
            func_0x00010c0dfd40(uVar5);
            _objc_retainAutoreleasedReturnValue();
            uVar9 = *(undefined8 *)(lVar3 + 0x18);
            func_0x00010c0fee00(uVar9);
            _objc_retainAutoreleasedReturnValue();
            uVar10 = uVar9;
            func_0x00010c0c4c40();
            _objc_retainAutoreleasedReturnValue();
            uVar11 = uVar10;
            func_0x00010c12fae0();
            _objc_retainAutoreleasedReturnValue();
            puStack_1c0 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_1b8 = 0xc2000000;
            pcStack_1b0 = FUN_107e5a208;
            puStack_1a8 = &UNK_110a0f980;
            _objc_retain(puVar14);
            puStack_1a0 = puVar14;
            uStack_198 = uVar13;
            func_0x000107e59d88(uVar8,uVar11,uVar7,&puStack_1c0);
            _objc_release(uVar11);
            _objc_release(uVar10);
            _objc_release(uVar9);
            _objc_release(uVar8);
            _objc_release(puStack_1a0);
            uVar13 = uVar13 + 1;
            uVar8 = uVar5;
            func_0x00010bf529e0();
          } while (uVar13 < uVar8);
        }
        _objc_release(uVar7);
        _objc_release(uVar5);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
      return;
    }
    lVar15 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar4);
      }
      uVar13 = *(ulong *)(lVar15 * 8);
      uVar5 = uVar13;
      func_0x00010c278a40();
      if (((int)uVar5 == 1) && (uVar5 = uVar13, func_0x00010c074780(), (uVar5 & 1) == 0)) {
        _objc_retain(uVar13);
        goto LAB_107e59710;
      }
      lVar15 = lVar15 + 1;
    } while (lVar2 != lVar15);
    lVar2 = lVar4;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 107e597f0; end: 107e5998b; -[SCMemoriesTimelineSnapDocParser retrieveBaseMediaRenderEffects] */

void FUN_107e597f0(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  ulong uStack_78;
  
  uVar1 = *(ulong *)(param_1 + 0x18);
  FUN_107e595e4();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfb0d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  FUN_107e5998c(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bf529e0();
  if (uVar1 != 0) {
    uVar1 = 0;
    do {
      uVar5 = uVar2;
      func_0x00010c0dfd40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c0fee00(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010c0c4c40();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010c12fae0();
      _objc_retainAutoreleasedReturnValue();
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0xc2000000;
      pcStack_90 = FUN_107e5a208;
      puStack_88 = &UNK_110a0f980;
      _objc_retain(puVar4);
      puStack_80 = puVar4;
      uStack_78 = uVar1;
      func_0x000107e59d88(uVar5,uVar8,uVar3,&puStack_a0);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(puStack_80);
      uVar1 = uVar1 + 1;
      uVar5 = uVar2;
      func_0x00010bf529e0();
    } while (uVar1 < uVar5);
  }
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107e5998c; end: 107e5a207;  */

void FUN_107e5998c(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined1 *puVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  undefined8 *puVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  undefined8 uStack_348;
  ulong uStack_2c0;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  long *plStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  long lStack_228;
  long *plStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 auStack_1f0 [384];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  uVar24 = param_1;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar24;
  func_0x00010c0c4c40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar19;
  func_0x00010c08c260();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar19);
  _objc_release(uVar24);
  uVar24 = uVar1;
  func_0x00010c2791c0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  lStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  plStack_220 = (long *)0x0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  _objc_retain(uVar24);
  uStack_2c0 = uVar24;
  func_0x00010bf52a60();
  if (uStack_2c0 != 0) {
    lVar18 = *plStack_220;
    do {
      uVar19 = 0;
      do {
        if (*plStack_220 != lVar18) {
          _objc_enumerationMutation(uVar24);
        }
        lVar3 = *(long *)(lStack_228 + uVar19 * 8);
        lStack_268 = 0;
        uStack_270 = 0;
        uStack_258 = 0;
        plStack_260 = (long *)0x0;
        uStack_248 = 0;
        uStack_250 = 0;
        uStack_238 = 0;
        uStack_240 = 0;
        func_0x00010c2787a0();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010bf52a60();
        if (lVar4 != 0) {
          lVar21 = *plStack_260;
          do {
            lVar20 = 0;
            do {
              if (*plStack_260 != lVar21) {
                _objc_enumerationMutation(lVar3);
              }
              uVar23 = *(ulong *)(lStack_268 + lVar20 * 8);
              uVar25 = uVar23;
              func_0x00010c0ff680();
              if (uVar25 != 0) {
                uVar25 = 0;
                do {
                  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                  uVar5 = uVar23;
                  func_0x00010c0ff660(uVar23);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c296de0();
                  func_0x00010c0df820();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010befa120(puVar2);
                  _objc_release(puVar6);
                  _objc_release(uVar5);
                  uVar25 = uVar25 + 1;
                  uVar5 = uVar23;
                  func_0x00010c0ff680();
                } while (uVar25 < uVar5);
              }
              lVar20 = lVar20 + 1;
            } while (lVar20 != lVar4);
            lVar4 = lVar3;
            func_0x00010bf52a60();
          } while (lVar4 != 0);
        }
        _objc_release(lVar3);
        uVar19 = uVar19 + 1;
      } while (uVar19 != uStack_2c0);
      uStack_2c0 = uVar24;
      func_0x00010bf52a60();
    } while (uStack_2c0 != 0);
  }
  _objc_release(uVar24);
  puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uStack_2a8 = 0;
  uStack_2b0 = 0;
  uStack_298 = 0;
  plStack_2a0 = (long *)0x0;
  uStack_288 = 0;
  uStack_290 = 0;
  uStack_278 = 0;
  uStack_280 = 0;
  uVar19 = param_1;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  uVar25 = uVar19;
  func_0x00010c0ff660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar19);
  puVar16 = &uStack_2b0;
  puVar17 = auStack_1f0;
  uVar19 = uVar25;
  func_0x00010bf52a60();
  if (uVar19 != 0) {
    lVar18 = *plStack_2a0;
    do {
      uVar23 = 0;
      do {
        if (*plStack_2a0 != lVar18) {
          _objc_enumerationMutation(uVar25);
        }
        func_0x00010c0ff5c0();
        puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df820();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar2;
        func_0x00010bf4b900();
        _objc_release(puVar7);
        if ((int)puVar8 != 0) {
          puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df820();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar6);
          _objc_release(puVar7);
        }
        uVar23 = uVar23 + 1;
      } while (uVar19 != uVar23);
      puVar16 = &uStack_2b0;
      puVar17 = auStack_1f0;
      uVar19 = uVar25;
      func_0x00010bf52a60();
    } while (uVar19 != 0);
  }
  _objc_release(uVar25);
  puVar7 = puVar6;
  func_0x00010bf51e00();
  _objc_release(puVar6);
  _objc_release(puVar2);
  _objc_release(uVar24);
  _objc_release(uVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(puVar16);
  _objc_retain(puVar17);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = param_1;
  func_0x00010c0ff680();
  if (uVar24 == 0) {
    uStack_348 = 0;
    puVar22 = (undefined8 *)0x0;
  }
  else {
    uStack_348 = 0;
    uVar24 = 0;
    puVar15 = (undefined8 *)0x0;
    do {
      uVar19 = param_1;
      func_0x00010c0ff660(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c296de0();
      _objc_release(uVar19);
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar16;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      puVar10 = puVar9;
      func_0x00010c08c3a0();
      puVar22 = puVar15;
      if ((int)puVar10 == 1) {
        puVar10 = puVar9;
        func_0x00010c0c3fe0();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar10;
        func_0x00010bf0b760();
        _objc_release(puVar10);
        if ((int)puVar11 != 5) goto LAB_107e59f40;
        puVar6 = puVar2;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar6 == (undefined *)0x0) {
          puVar10 = puVar9;
          func_0x00010c0c3fe0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (puVar10 != (undefined8 *)0x0) {
            puVar10 = puVar9;
            func_0x00010c0c3fe0(puVar9);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar2);
            _objc_release(puVar10);
          }
          uVar12 = param_2;
          func_0x000107e5a9f0(param_2,puVar9);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uStack_348);
          uStack_348 = uVar12;
          goto LAB_107e59f40;
        }
      }
      else {
LAB_107e59f40:
        puVar10 = puVar9;
        func_0x00010c08c3a0();
        if ((int)puVar10 == 1) {
          puVar10 = puVar9;
          func_0x00010c0c3fe0();
          _objc_retainAutoreleasedReturnValue();
          puVar11 = puVar10;
          func_0x00010bf0b760();
          _objc_release(puVar10);
          if ((int)puVar11 == 3) {
            puVar6 = puVar2;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (puVar6 != (undefined *)0x0) goto LAB_107e5a16c;
            puVar10 = puVar9;
            func_0x00010c0c3fe0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (puVar10 != (undefined8 *)0x0) {
              puVar10 = puVar9;
              func_0x00010c0c3fe0(puVar9);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(puVar2);
              _objc_release(puVar10);
            }
          }
        }
        puVar10 = puVar9;
        func_0x00010bf5cc00();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar10;
        func_0x00010c0cc0c0();
        _objc_retainAutoreleasedReturnValue();
        puVar13 = puVar11;
        func_0x00010c08eee0();
        _objc_retainAutoreleasedReturnValue();
        puVar14 = puVar13;
        func_0x00010c08fa60();
        _objc_release(puVar13);
        _objc_release(puVar11);
        _objc_release(puVar10);
        if (puVar14 != (undefined8 *)0x0) {
          puVar10 = puVar9;
          func_0x00010bf5cc00(puVar9);
          _objc_retainAutoreleasedReturnValue();
          puVar11 = puVar10;
          func_0x00010c0cc0c0();
          _objc_retainAutoreleasedReturnValue();
          puVar22 = puVar11;
          func_0x00010c08eee0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar15);
          _objc_release(puVar11);
          _objc_release(puVar10);
        }
        puVar15 = puVar9;
        func_0x00010c08c3a0();
        if ((int)puVar15 == 1) {
          puVar15 = puVar9;
          func_0x00010c0c3fe0();
          _objc_retainAutoreleasedReturnValue();
          puVar10 = puVar15;
          func_0x00010bf0b760();
          _objc_release(puVar15);
          if ((int)puVar10 == 6) {
            puVar15 = puVar9;
            func_0x00010c0c3fe0(puVar9);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar2);
            _objc_release(puVar15);
          }
        }
        puVar15 = puVar9;
        func_0x00010c08c3a0();
        if ((int)puVar15 == 1) {
          puVar15 = puVar9;
          func_0x00010c0c3fe0();
          _objc_retainAutoreleasedReturnValue();
          puVar10 = puVar15;
          func_0x00010bf0b760();
          _objc_release(puVar15);
          if ((int)puVar10 == 1) {
            puVar15 = puVar9;
            func_0x00010c0c3fe0(puVar9);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar2);
            _objc_release(puVar15);
          }
        }
      }
LAB_107e5a16c:
      _objc_release(puVar9);
      uVar24 = uVar24 + 1;
      uVar19 = param_1;
      func_0x00010c0ff680();
      puVar15 = puVar22;
    } while (uVar24 < uVar19);
  }
  (**(code **)(puVar17 + 0x10))(puVar17,puVar2,uStack_348,puVar22);
  _objc_release(uStack_348);
  _objc_release(puVar2);
  _objc_release(puVar22);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107e5a208; end: 107e5a273;  */

void FUN_107e5a208(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_3);
  func_0x00010c0df840(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar1,param_2,param_3,puVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 107e5a274; end: 107e5ae6b; -[SCMemoriesTimelineSnapDocParser retrieveBaseMediasWithCompletionBlock:] */

/* WARNING: Possible PIC construction at 0x000107e5a4cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107e5a4d0) */
/* WARNING: Removing unreachable block (ram,0x000107e5a4f8) */
/* WARNING: Removing unreachable block (ram,0x000107e5a534) */

void FUN_107e5a274(float param_1,long param_2,undefined *param_3,long param_4)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  undefined *puVar25;
  int iVar26;
  long lVar27;
  undefined8 uVar28;
  long lVar29;
  long lVar30;
  undefined *puVar31;
  long lVar32;
  ulong uVar33;
  undefined *puVar34;
  long lStack_220;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  code *pcStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  long lStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  long lStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  code *pcStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  long lStack_168;
  long *plStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_128;
  undefined **ppuStack_120;
  undefined8 uStack_98;
  undefined **ppuStack_90;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  if (param_4 != 0) {
    lVar7 = *(long *)(param_2 + 0x18);
    FUN_107e595e4();
    _objc_retainAutoreleasedReturnValue();
    lVar22 = lVar7;
    func_0x00010bfb0d80();
    _objc_retainAutoreleasedReturnValue();
    lVar21 = lVar22;
    func_0x00010bf529e0();
    puVar8 = PTR__OBJC_CLASS___NSError_1126ae858;
    if (lVar21 == 0) {
      _objc_opt_class();
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      uStack_98 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
      ppuStack_90 = &PTR____CFConstantStringClassReference_110ec1498;
      puVar17 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar17);
      _objc_release(param_2);
      param_3 = (undefined *)0x0;
      (**(code **)(param_4 + 0x10))(param_4,0,0,0,puVar8);
    }
    else {
      puVar8 = *(undefined **)(param_2 + 0x18);
      FUN_107e5998c();
      _objc_retainAutoreleasedReturnValue();
      puVar17 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      puVar9 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_opt_new();
      puVar34 = puVar9;
      _dispatch_group_create();
      uVar28 = 0;
      lStack_168 = 0;
      uStack_170 = 0;
      uStack_158 = 0;
      plStack_160 = (long *)0x0;
      uStack_148 = 0;
      uStack_150 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      _objc_retain(lVar22);
      lStack_220 = lVar22;
      func_0x00010bf52a60();
      param_1 = (float)uVar28;
      if (lStack_220 != 0) {
        lVar21 = *plStack_160;
        do {
          lVar23 = 0;
          do {
            if (*plStack_160 != lVar21) {
              _objc_enumerationMutation(lVar22);
            }
            uVar33 = *(ulong *)(lStack_168 + lVar23 * 8);
            uVar24 = uVar33;
            func_0x00010c0ff680();
            if (uVar24 != 0) {
              bVar1 = false;
              uVar24 = 0;
              do {
                uVar11 = uVar33;
                func_0x00010c0ff660(uVar33);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c296de0();
                _objc_release(uVar11);
                puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570);
                _objc_retainAutoreleasedReturnValue();
                param_3 = puVar8;
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar10);
                puVar10 = param_3;
                func_0x00010c08c3a0();
                if ((int)puVar10 == 1) {
                  puVar10 = param_3;
                  func_0x00010c0c3fe0();
                  _objc_retainAutoreleasedReturnValue();
                  puVar25 = puVar10;
                  func_0x00010bf0b760();
                  bVar5 = (int)puVar25 == 5;
                  _objc_release(puVar10);
                  param_1 = (float)uVar28;
                  if (bVar5 && !bVar1) {
                    puVar8 = param_3;
                    func_0x00010c0c3fe0();
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010befa120(puVar17);
                    _objc_release(puVar8);
                    param_4 = *(long *)(param_2 + 0x18);
                    func_0x00010c0fee00();
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c0c4c40();
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c12fae0();
                    _objc_retainAutoreleasedReturnValue();
                    goto SUB_107e5a9f0;
                  }
                  bVar1 = (bool)(bVar5 | bVar1);
                }
                _objc_release(param_3);
                uVar24 = uVar24 + 1;
                uVar11 = uVar33;
                func_0x00010c0ff680();
              } while (uVar24 < uVar11);
            }
            lVar23 = lVar23 + 1;
          } while (lVar23 != lStack_220);
          lStack_220 = lVar22;
          func_0x00010bf52a60();
          param_1 = (float)uVar28;
        } while (lStack_220 != 0);
      }
      _objc_release(lVar22);
      puVar25 = puVar17;
      func_0x00010bf51e00();
      puVar31 = puVar25;
      func_0x00010bf529e0();
      puVar10 = PTR__OBJC_CLASS___NSError_1126ae858;
      if (puVar31 == (undefined *)0x0) {
        _objc_opt_class();
        _NSStringFromClass();
        _objc_retainAutoreleasedReturnValue();
        uStack_128 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
        ppuStack_120 = &PTR____CFConstantStringClassReference_110ec14b8;
        puVar31 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf99240();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar31);
        _objc_release(param_2);
        param_3 = (undefined *)0x0;
        (**(code **)(param_4 + 0x10))(param_4,0,0,0,puVar10);
      }
      else {
        puVar10 = PTR_PTR_1126b1060;
        _objc_alloc();
        func_0x00010c032f60();
        puVar12 = puVar25;
        func_0x00010bf529e0();
        puVar13 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf0a0e0();
        _objc_retainAutoreleasedReturnValue();
        puVar14 = PTR___NSConcreteStackBlock_11034bd00;
        puVar31 = puVar12;
        if (puVar12 != (undefined *)0x0) {
          do {
            _dispatch_group_enter(puVar34);
            puVar14 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar13);
            _objc_release(puVar14);
            puVar31 = puVar31 + -1;
          } while (puVar31 != (undefined *)0x0);
          puVar31 = (undefined *)0x0;
          puVar14 = PTR___NSConcreteStackBlock_11034bd00;
          do {
            puVar15 = puVar25;
            func_0x00010c0dfd40(puVar25);
            _objc_retainAutoreleasedReturnValue();
            uVar28 = *(undefined8 *)(param_2 + 8);
            puVar16 = puVar15;
            func_0x00010c0c5180();
            _objc_retainAutoreleasedReturnValue();
            uStack_1a0 = 0xc2000000;
            pcStack_198 = FUN_107e5ae6c;
            puStack_190 = &UNK_110a0f9b0;
            puStack_1a8 = puVar14;
            _objc_retain(puVar13);
            puStack_188 = puVar13;
            puStack_178 = puVar31;
            _objc_retain(puVar34);
            puVar14 = PTR___NSConcreteStackBlock_11034bd00;
            puStack_180 = puVar34;
            func_0x00010c13eb40(uVar28);
            _objc_unsafeClaimAutoreleasedReturnValue();
            _objc_release(puVar16);
            _objc_release(puStack_180);
            _objc_release(puStack_188);
            _objc_release(puVar15);
            puVar31 = puVar31 + 1;
          } while (puVar12 != puVar31);
        }
        puVar31 = (undefined *)0x19;
        func_0x0001000819a8(0x19,0);
        _objc_retainAutoreleasedReturnValue();
        param_1 = -32.0;
        uStack_1f0 = 0xc2000000;
        pcStack_1e8 = FUN_107e5aebc;
        puStack_1e0 = &UNK_1108b6770;
        puStack_1f8 = puVar14;
        puStack_1d8 = puVar13;
        lStack_1d0 = param_2;
        puStack_1b0 = puVar12;
        _objc_retain(param_4);
        lStack_1b8 = param_4;
        _objc_retain(puVar25);
        puStack_1c8 = puVar25;
        _objc_retain(puVar9);
        puStack_1c0 = puVar9;
        _objc_retain(puVar13);
        param_3 = puVar31;
        func_0x000100bc0718(puVar34,puVar31,&puStack_1f8);
        _objc_release(puVar31);
        _objc_release(puStack_1c0);
        _objc_release(puStack_1c8);
        _objc_release(lStack_1b8);
        _objc_release(puStack_1d8);
        _objc_release(puVar13);
      }
      _objc_release(puVar10);
      _objc_release(puVar25);
      _objc_release(puVar34);
      _objc_release(puVar9);
      _objc_release(puVar17);
    }
    _objc_release(puVar8);
    _objc_release(lVar22);
    _objc_release(lVar7);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
SUB_107e5a9f0:
  lVar22 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = param_3;
  _objc_retain();
  _objc_retain(param_3);
  puVar17 = param_3;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar17;
  func_0x00010bfd4540();
  _objc_release(puVar17);
  if ((int)puVar9 == 0) {
    puVar17 = param_3;
    func_0x00010c0ff5c0();
    if (param_4 != 0) {
      lVar23 = param_4;
      func_0x00010c12fb00();
      _objc_retainAutoreleasedReturnValue();
      lVar21 = lVar23;
      func_0x00010bf52a60();
      lVar7 = lRam0000000000000000;
      while (lVar21 != 0) {
        lVar29 = 0;
        do {
          if (lRam0000000000000000 != lVar7) {
            _objc_enumerationMutation(lVar23);
          }
          lVar27 = *(long *)(lVar29 * 8);
          lVar18 = lVar27;
          func_0x00010c14fb60();
          if ((int)lVar18 == 1) {
            func_0x00010c12f9a0();
            _objc_retainAutoreleasedReturnValue();
            lVar18 = lVar27;
            func_0x00010bf52a60();
            lVar2 = lRam0000000000000000;
            while (lVar18 != 0) {
              lVar32 = 0;
              do {
                if (lRam0000000000000000 != lVar2) {
                  _objc_enumerationMutation(lVar27);
                }
                lVar19 = *(long *)(lVar32 * 8);
                func_0x00010c12fa40();
                _objc_retainAutoreleasedReturnValue();
                lVar20 = lVar19;
                func_0x00010bf52a60();
                lVar3 = lRam0000000000000000;
                while (lVar20 != 0) {
                  lVar30 = 0;
                  do {
                    if (lRam0000000000000000 != lVar3) {
                      _objc_enumerationMutation(lVar19);
                    }
                    puVar34 = *(undefined **)(lVar30 * 8);
                    puVar9 = puVar34;
                    func_0x00010c0664a0();
                    if ((puVar9 == (undefined *)0x1) &&
                       (puVar9 = puVar34, func_0x00010bf8cec0(), (int)puVar9 == 5)) {
                      puVar10 = puVar34;
                      func_0x00010c066480();
                      _objc_retainAutoreleasedReturnValue();
                      puVar9 = puVar10;
                      func_0x00010bf52a60();
                      lVar4 = lRam0000000000000000;
                      while (puVar9 != (undefined *)0x0) {
                        puVar25 = (undefined *)0x0;
                        do {
                          if (lRam0000000000000000 != lVar4) {
                            _objc_enumerationMutation(puVar10);
                          }
                          iVar26 = (int)*(undefined8 *)((long)puVar25 * 8);
                          iVar6 = iVar26;
                          func_0x00010c065ee0();
                          if ((iVar6 == 10) && (func_0x00010c0ff5c0(), iVar26 == (int)puVar17)) {
                            func_0x00010c12f940(puVar34);
                            _objc_retainAutoreleasedReturnValue();
                            _objc_release(puVar10);
                            _objc_release(lVar19);
                            _objc_release(lVar27);
                            _objc_release(lVar23);
                            goto LAB_107e5ae18;
                          }
                          puVar25 = puVar25 + 1;
                        } while (puVar9 != puVar25);
                        puVar9 = puVar10;
                        func_0x00010bf52a60();
                      }
                      _objc_release(puVar10);
                    }
                    lVar30 = lVar30 + 1;
                  } while (lVar30 != lVar20);
                  lVar20 = lVar19;
                  func_0x00010bf52a60();
                }
                _objc_release(lVar19);
                lVar32 = lVar32 + 1;
              } while (lVar32 != lVar18);
              lVar18 = lVar27;
              func_0x00010bf52a60();
            }
            _objc_release(lVar27);
          }
          lVar29 = lVar29 + 1;
        } while (lVar29 != lVar21);
        lVar21 = lVar23;
        func_0x00010bf52a60();
      }
      _objc_release(lVar23);
    }
    puVar34 = (undefined *)0x0;
  }
  else {
    puVar34 = PTR_PTR_1126bcd70;
    _objc_opt_new(PTR_PTR_1126bcd70);
    puVar17 = PTR_PTR_1126c4038;
    _objc_opt_new(PTR_PTR_1126c4038);
    func_0x00010c16c540(puVar34);
    _objc_release(puVar17);
    puVar17 = param_3;
    func_0x00010c118b40(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar17;
    func_0x00010bf10200();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c296d80();
    puVar10 = puVar34;
    func_0x00010bf101a0(puVar34);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2241a0((double)param_1);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar17);
  }
LAB_107e5ae18:
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar22) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar34);
    return;
  }
  ___stack_chk_fail();
  func_0x00010bfc4120();
  _objc_retainAutoreleasedReturnValue();
  if (puVar8 != (undefined *)0x0) {
    func_0x00010c1d04c0(*(undefined8 *)(param_4 + 0x20));
  }
  _dispatch_group_leave(*(undefined8 *)(param_4 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar8);
  return;
}



/* Entry: 107e5ae6c; end: 107e5aebb;  */

void FUN_107e5ae6c(long param_1,long param_2)

{
  func_0x00010bfc4120();
  _objc_retainAutoreleasedReturnValue();
  if (param_2 != 0) {
    func_0x00010c1d04c0(*(undefined8 *)(param_1 + 0x20));
  }
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107e5aebc; end: 107e5b197;  */

void FUN_107e5aebc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined *puStack_2d8;
  undefined8 uStack_2d0;
  code *pcStack_2c8;
  undefined *puStack_2c0;
  undefined *puStack_2b8;
  undefined8 *puStack_2b0;
  undefined8 *puStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 *puStack_298;
  undefined8 uStack_290;
  undefined8 *puStack_288;
  undefined8 uStack_280;
  code *pcStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 *puStack_258;
  undefined8 uStack_250;
  code *pcStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 *puStack_228;
  undefined8 uStack_220;
  code *pcStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 *puStack_1f8;
  undefined8 uStack_1f0;
  code *pcStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined **ppuStack_1c8;
  undefined8 uStack_1c0;
  undefined **ppuStack_1b8;
  long lStack_1b0;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar12 = *(undefined8 *)(param_1 + 0x20);
  puVar4 = PTR__OBJC_CLASS___NSNull_1126aef28;
  func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d440(uVar12);
  _objc_release(puVar4);
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010bf51e00();
  lVar13 = lVar2;
  func_0x00010bf529e0();
  puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (lVar13 == *(long *)(param_1 + 0x48)) {
    _objc_retain(lVar2);
    lVar13 = lVar2;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar13 != 0) {
      lVar14 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar2);
        }
        lVar3 = *(long *)(lVar14 * 8);
        func_0x00010bfcaaa0();
        puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
        if (lVar3 != 0) {
          uVar12 = *(undefined8 *)(param_1 + 0x28);
          _objc_opt_class();
          _NSStringFromClass();
          _objc_retainAutoreleasedReturnValue();
          puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          func_0x00010bf72080();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf99240();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar10);
          _objc_release(uVar12);
          _objc_release(lVar2);
          if (puVar4 != (undefined *)0x0) goto LAB_107e5b0f4;
          goto LAB_107e5b114;
        }
        lVar14 = lVar14 + 1;
      } while (lVar13 != lVar14);
      lVar13 = lVar2;
      func_0x00010bf52a60();
    }
    _objc_release(lVar2);
LAB_107e5b114:
    lVar13 = *(long *)(param_1 + 0x40);
    puVar4 = *(undefined **)(param_1 + 0x30);
    func_0x00010bf51e00();
    uVar12 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010bf51e00();
    puVar10 = puVar4;
    (**(code **)(lVar13 + 0x10))(lVar13,lVar2,puVar4,uVar12,0);
    _objc_release(uVar12);
  }
  else {
    uVar12 = *(undefined8 *)(param_1 + 0x28);
    _objc_opt_class();
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
    _objc_release(uVar12);
LAB_107e5b0f4:
    puVar10 = (undefined *)0x0;
    (**(code **)(*(long *)(param_1 + 0x40) + 0x10))(*(long *)(param_1 + 0x40),0,0,0,puVar4);
  }
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  ___stack_chk_fail();
  lStack_1b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar10);
  if (puVar10 != (undefined *)0x0) {
    lVar11 = *(long *)(lVar2 + 0x18);
    FUN_107e595e4();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar11;
    func_0x00010bfb0d80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar11);
    lVar11 = lVar13;
    func_0x00010bf529e0();
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    if (lVar11 == 0) {
      _objc_opt_class(lVar2);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      uStack_1c0 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
      ppuStack_1b8 = &PTR____CFConstantStringClassReference_110ec1498;
      puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99240(puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar8);
      _objc_release(lVar2);
      (**(code **)(puVar10 + 0x10))(puVar10,0,puVar4);
    }
    else {
      puVar4 = *(undefined **)(lVar2 + 0x18);
      FUN_107e5998c(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puStack_1f8 = &uStack_200;
      uStack_200 = 0;
      uStack_1f0 = 0x3032000000;
      pcStack_1e8 = FUN_107e5b64c;
      uStack_1e0 = 0x107e5b65c;
      uStack_1d8 = 0;
      puStack_228 = &uStack_230;
      uStack_230 = 0;
      uStack_220 = 0x3032000000;
      pcStack_218 = FUN_107e5b64c;
      uStack_210 = 0x107e5b65c;
      uStack_208 = 0;
      puStack_258 = &uStack_260;
      uStack_260 = 0;
      uStack_250 = 0x3032000000;
      pcStack_248 = FUN_107e5b64c;
      uStack_240 = 0x107e5b65c;
      uStack_238 = 0;
      puStack_288 = &uStack_290;
      uStack_290 = 0;
      uStack_280 = 0x3032000000;
      pcStack_278 = FUN_107e5b64c;
      uStack_270 = 0x107e5b65c;
      uStack_268 = 0;
      puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar13;
      func_0x00010bfb1920(lVar13);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(lVar2 + 0x18);
      func_0x00010c0fee00(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar6;
      func_0x00010c0c4c40();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar12;
      func_0x00010c12fae0();
      _objc_retainAutoreleasedReturnValue();
      puStack_2d8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_2d0 = 0xc2000000;
      pcStack_2c8 = FUN_107e5b664;
      puStack_2c0 = &UNK_110a0f9e0;
      puStack_2b0 = &uStack_200;
      puStack_2a8 = &uStack_230;
      _objc_retain(puVar5);
      puStack_2a0 = &uStack_260;
      puStack_298 = &uStack_290;
      puStack_2b8 = puVar5;
      func_0x000107e59d88(lVar11,uVar7,puVar4,&puStack_2d8);
      _objc_release(uVar7);
      _objc_release(uVar12);
      _objc_release(uVar6);
      _objc_release(lVar11);
      puVar8 = PTR__OBJC_CLASS___NSError_1126ae858;
      if (puStack_1f8[5] == 0) {
        _objc_opt_class(lVar2);
        _NSStringFromClass();
        _objc_retainAutoreleasedReturnValue();
        uStack_1d0 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
        ppuStack_1c8 = &PTR____CFConstantStringClassReference_110ec14b8;
        puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf99240(puVar8);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar9);
        _objc_release(lVar2);
        (**(code **)(puVar10 + 0x10))(puVar10,0,puVar8);
      }
      else {
        _objc_retain(puVar10);
        func_0x00010be96b80(lVar2);
        puVar8 = puVar10;
      }
      _objc_release(puVar8);
      _objc_release(puStack_2b8);
      _objc_release(puVar5);
      __Block_object_dispose(&uStack_290,8);
      _objc_release(uStack_268);
      __Block_object_dispose(&uStack_260,8);
      _objc_release(uStack_238);
      __Block_object_dispose(&uStack_230,8);
      _objc_release(uStack_208);
      __Block_object_dispose(&uStack_200,8);
      _objc_release(uStack_1d8);
    }
    _objc_release(puVar4);
    _objc_release(lVar13);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b0) {
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_290,8);
  __Block_object_dispose(&uStack_260,8);
  __Block_object_dispose(&uStack_230,8);
  lVar13 = 8;
  __Block_object_dispose(&uStack_200);
  __Unwind_Resume();
  *(undefined8 *)(puVar10 + 0x28) = *(undefined8 *)(lVar13 + 0x28);
  *(undefined8 *)(lVar13 + 0x28) = 0;
  return;
}



/* Entry: 107e5b198; end: 107e5b64b; -[SCMemoriesTimelineSnapDocParser retrieveFirstSegmentMetadataWithCompletionBlock:] */

void FUN_107e5b198(long param_1,undefined8 param_2,undefined *param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  code *pcStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  undefined8 uStack_160;
  undefined8 *puStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined **ppuStack_98;
  undefined8 uStack_90;
  undefined **ppuStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if (param_3 != (undefined *)0x0) {
    lVar1 = *(long *)(param_1 + 0x18);
    FUN_107e595e4();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar1;
    func_0x00010bfb0d80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = lVar9;
    func_0x00010bf529e0();
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    if (lVar1 == 0) {
      _objc_opt_class(param_1);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      uStack_90 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
      ppuStack_88 = &PTR____CFConstantStringClassReference_110ec1498;
      puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99240(puVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      _objc_release(param_1);
      (**(code **)(param_3 + 0x10))(param_3,0,puVar2);
    }
    else {
      puVar2 = *(undefined **)(param_1 + 0x18);
      FUN_107e5998c(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puStack_c8 = &uStack_d0;
      uStack_d0 = 0;
      uStack_c0 = 0x3032000000;
      pcStack_b8 = FUN_107e5b64c;
      uStack_b0 = 0x107e5b65c;
      uStack_a8 = 0;
      puStack_f8 = &uStack_100;
      uStack_100 = 0;
      uStack_f0 = 0x3032000000;
      pcStack_e8 = FUN_107e5b64c;
      uStack_e0 = 0x107e5b65c;
      uStack_d8 = 0;
      puStack_128 = &uStack_130;
      uStack_130 = 0;
      uStack_120 = 0x3032000000;
      pcStack_118 = FUN_107e5b64c;
      uStack_110 = 0x107e5b65c;
      uStack_108 = 0;
      puStack_158 = &uStack_160;
      uStack_160 = 0;
      uStack_150 = 0x3032000000;
      pcStack_148 = FUN_107e5b64c;
      uStack_140 = 0x107e5b65c;
      uStack_138 = 0;
      puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar9;
      func_0x00010bfb1920(lVar9);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c0fee00(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c0c4c40();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c12fae0();
      _objc_retainAutoreleasedReturnValue();
      puStack_1a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_1a0 = 0xc2000000;
      pcStack_198 = FUN_107e5b664;
      puStack_190 = &UNK_110a0f9e0;
      puStack_180 = &uStack_d0;
      puStack_178 = &uStack_100;
      _objc_retain(puVar3);
      puStack_170 = &uStack_130;
      puStack_168 = &uStack_160;
      puStack_188 = puVar3;
      func_0x000107e59d88(lVar1,uVar6,puVar2,&puStack_1a8);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(lVar1);
      puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
      if (puStack_c8[5] == 0) {
        _objc_opt_class(param_1);
        _NSStringFromClass();
        _objc_retainAutoreleasedReturnValue();
        uStack_a0 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
        ppuStack_98 = &PTR____CFConstantStringClassReference_110ec14b8;
        puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf99240(puVar7);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar8);
        _objc_release(param_1);
        (**(code **)(param_3 + 0x10))(param_3,0,puVar7);
      }
      else {
        _objc_retain(param_3);
        func_0x00010be96b80(param_1);
        puVar7 = param_3;
      }
      _objc_release(puVar7);
      _objc_release(puStack_188);
      _objc_release(puVar3);
      __Block_object_dispose(&uStack_160,8);
      _objc_release(uStack_138);
      __Block_object_dispose(&uStack_130,8);
      _objc_release(uStack_108);
      __Block_object_dispose(&uStack_100,8);
      _objc_release(uStack_d8);
      __Block_object_dispose(&uStack_d0,8);
      _objc_release(uStack_a8);
    }
    _objc_release(puVar2);
    _objc_release(lVar9);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_160,8);
  __Block_object_dispose(&uStack_130,8);
  __Block_object_dispose(&uStack_100,8);
  lVar9 = 8;
  __Block_object_dispose(&uStack_d0);
  __Unwind_Resume();
  *(undefined8 *)(param_3 + 0x28) = *(undefined8 *)(lVar9 + 0x28);
  *(undefined8 *)(lVar9 + 0x28) = 0;
  return;
}



/* Entry: 107e5b64c; end: 107e5b663;  */

void FUN_107e5b64c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107e5b664; end: 107e5b78b;  */

void FUN_107e5b664(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_2);
  uVar3 = param_2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = uVar3;
  _objc_release(uVar1);
  uVar3 = param_2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = uVar3;
  _objc_release(uVar1);
  uVar3 = param_2;
  func_0x00010c0e00e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x20));
  _objc_release(uVar3);
  lVar2 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar3 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  lVar2 = *(long *)(*(long *)(param_1 + 0x40) + 8);
  uVar3 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107e5b78c; end: 107e5b8c7;  */

void FUN_107e5b78c(long param_1,long param_2,undefined **param_3)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined **ppuVar22;
  long lVar23;
  undefined **ppuVar24;
  undefined **UNRECOVERED_JUMPTABLE;
  undefined **ppuVar25;
  long lVar26;
  long lVar27;
  undefined *puVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined *puVar31;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  code *pcStack_1c8;
  undefined *puStack_1c0;
  undefined **ppuStack_1b8;
  undefined *puStack_1b0;
  undefined **ppuStack_1a8;
  undefined *puStack_1a0;
  undefined **ppuStack_198;
  undefined1 uStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  code *pcStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined **ppuStack_160;
  undefined *puStack_158;
  undefined **ppuStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  code *pcStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined **ppuStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined **ppuStack_e8;
  undefined8 uStack_e0;
  undefined **ppuStack_d8;
  long lStack_d0;
  
  ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSError_1126ae858;
  lVar26 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_2 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    _objc_opt_class();
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    UNRECOVERED_JUMPTABLE = (undefined **)0xfffffffffffffc16;
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(uVar3);
    param_2 = 0;
    param_3 = ppuVar2;
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar26) {
      return;
    }
  }
  else {
    ppuVar2 = *(undefined ***)(param_1 + 0x28);
    UNRECOVERED_JUMPTABLE = (undefined **)ppuVar2[2];
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar26) {
                    /* WARNING: Could not recover jumptable at 0x000107e5b7ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)UNRECOVERED_JUMPTABLE)(ppuVar2,param_2,0);
      return;
    }
  }
  ___stack_chk_fail();
  lStack_d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar24 = param_3;
  ppuVar25 = UNRECOVERED_JUMPTABLE;
  _objc_retain(UNRECOVERED_JUMPTABLE);
  if (UNRECOVERED_JUMPTABLE != (undefined **)0x0) {
    puVar5 = ppuVar2[3];
    FUN_107e595e4();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar5;
    func_0x00010bfb0d80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    puVar5 = puVar4;
    func_0x00010bf529e0();
    ppuVar6 = (undefined **)PTR__OBJC_CLASS___NSError_1126ae858;
    if (puVar5 == (undefined *)0x0) {
      _objc_opt_class();
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      uStack_e0 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
      ppuStack_d8 = &PTR____CFConstantStringClassReference_110ec1498;
      puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      _objc_release(ppuVar2);
      param_2 = 0;
      ppuVar24 = (undefined **)0x0;
      ppuVar25 = ppuVar6;
      (*(code *)UNRECOVERED_JUMPTABLE[2])(UNRECOVERED_JUMPTABLE,0,0,ppuVar6);
    }
    else {
      ppuVar6 = (undefined **)ppuVar2[3];
      FUN_107e5998c();
      _objc_retainAutoreleasedReturnValue();
      puVar31 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_opt_new();
      puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_opt_new();
      puVar8 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_opt_new();
      puVar9 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_opt_new();
      ppuVar10 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_opt_new();
      puVar28 = puVar4;
      func_0x00010bf529e0();
      puVar5 = PTR___NSConcreteStackBlock_11034bd00;
      if (puVar28 != (undefined *)0x0) {
        puVar28 = (undefined *)0x0;
        do {
          puVar15 = puVar4;
          func_0x00010c0dfd40(puVar4);
          _objc_retainAutoreleasedReturnValue();
          puVar11 = ppuVar2[3];
          func_0x00010c0fee00(puVar11);
          _objc_retainAutoreleasedReturnValue();
          puVar12 = puVar11;
          func_0x00010c0c4c40();
          _objc_retainAutoreleasedReturnValue();
          puVar13 = puVar12;
          func_0x00010c12fae0();
          _objc_retainAutoreleasedReturnValue();
          puStack_140 = puVar5;
          uStack_138 = 0xc2000000;
          pcStack_130 = FUN_107e5c070;
          puStack_128 = &UNK_110a0fa40;
          _objc_retain(puVar31);
          puStack_120 = puVar31;
          puStack_f8 = puVar28;
          _objc_retain(puVar8);
          puStack_118 = puVar8;
          _objc_retain(puVar9);
          puStack_110 = puVar9;
          _objc_retain(puVar7);
          puStack_108 = puVar7;
          _objc_retain(ppuVar10);
          ppuVar25 = &puStack_140;
          ppuStack_100 = ppuVar10;
          func_0x000107e59d88(puVar15,puVar13,ppuVar6,ppuVar25);
          _objc_release(puVar13);
          _objc_release(puVar12);
          _objc_release(puVar11);
          _objc_release(puVar15);
          _objc_release(ppuStack_100);
          _objc_release(puStack_108);
          _objc_release(puStack_110);
          _objc_release(puStack_118);
          _objc_release(puStack_120);
          puVar28 = puVar28 + 1;
          puVar15 = puVar4;
          func_0x00010bf529e0();
        } while (puVar28 < puVar15);
      }
      puVar5 = puVar31;
      func_0x00010bf529e0();
      ppuVar22 = (undefined **)PTR__OBJC_CLASS___NSError_1126ae858;
      if (puVar5 == (undefined *)0x0) {
        _objc_opt_class(ppuVar2);
        _NSStringFromClass();
        _objc_retainAutoreleasedReturnValue();
        uStack_f0 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
        ppuStack_e8 = &PTR____CFConstantStringClassReference_110ec14b8;
        puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf99240(ppuVar22);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar5);
        _objc_release(ppuVar2);
        param_2 = 0;
        ppuVar24 = (undefined **)0x0;
        ppuVar25 = ppuVar22;
        (*(code *)UNRECOVERED_JUMPTABLE[2])(UNRECOVERED_JUMPTABLE,0,0,ppuVar22);
      }
      else {
        puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        _objc_opt_new();
        ppuVar14 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        _objc_opt_new();
        ppuVar22 = ppuVar14;
        _dispatch_group_create();
        puVar15 = ppuVar2[2];
        _objc_retain();
        puVar28 = puVar31;
        func_0x00010bf529e0();
        if (puVar28 != (undefined *)0x0) {
          puVar28 = (undefined *)0x0;
          do {
            _dispatch_group_enter(ppuVar22);
            puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df840();
            _objc_retainAutoreleasedReturnValue();
            puVar13 = puVar31;
            func_0x00010c0e00e0(puVar31);
            _objc_retainAutoreleasedReturnValue();
            puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df840();
            _objc_retainAutoreleasedReturnValue();
            ppuVar24 = ppuVar10;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            puVar16 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            puVar17 = puVar8;
            func_0x00010c0e00e0(puVar8);
            _objc_retainAutoreleasedReturnValue();
            puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            puVar19 = puVar7;
            func_0x00010c0e00e0(puVar7);
            _objc_retainAutoreleasedReturnValue();
            puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            puVar21 = puVar9;
            func_0x00010c0e00e0(puVar9);
            _objc_retainAutoreleasedReturnValue();
            puStack_188 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_180 = 0xc2000000;
            pcStack_178 = FUN_107e5c2e4;
            puStack_170 = &UNK_110a0fa70;
            puStack_168 = puVar15;
            _objc_retain(ppuVar14);
            ppuStack_160 = ppuVar14;
            puStack_148 = puVar28;
            _objc_retain(puVar5);
            puStack_158 = puVar5;
            _objc_retain(ppuVar22);
            ppuVar25 = ppuVar24;
            ppuStack_150 = ppuVar22;
            func_0x00010be96b80(ppuVar2);
            _objc_release(puVar21);
            _objc_release(puVar20);
            _objc_release(puVar19);
            _objc_release(puVar18);
            _objc_release(puVar17);
            _objc_release(puVar16);
            _objc_release(ppuVar24);
            _objc_release(puVar11);
            _objc_release(puVar13);
            _objc_release(puVar12);
            _objc_release(ppuStack_150);
            _objc_release(puStack_158);
            _objc_release(ppuStack_160);
            puVar28 = puVar28 + 1;
            puVar12 = puVar31;
            func_0x00010bf529e0();
          } while (puVar28 < puVar12);
        }
        lVar26 = 0x19;
        func_0x0001000819a8(0x19,0);
        _objc_retainAutoreleasedReturnValue();
        puStack_1d8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_1d0 = 0xc2000000;
        pcStack_1c8 = FUN_107e5c484;
        puStack_1c0 = &UNK_11097c050;
        ppuStack_1b8 = ppuVar14;
        _objc_retain(puVar4);
        puStack_1b0 = puVar4;
        ppuStack_1a8 = ppuVar2;
        _objc_retain(UNRECOVERED_JUMPTABLE);
        uStack_190 = SUB81(param_3,0);
        puStack_1a0 = puVar5;
        ppuStack_198 = UNRECOVERED_JUMPTABLE;
        _objc_retain(puVar5);
        _objc_retain(ppuVar14);
        ppuVar24 = &puStack_1d8;
        param_2 = lVar26;
        func_0x000100bc0718(ppuVar22);
        _objc_release(lVar26);
        _objc_release(puStack_1a0);
        _objc_release(ppuStack_198);
        _objc_release(puStack_1b0);
        _objc_release(ppuStack_1b8);
        _objc_release(puVar15);
        _objc_release(puVar5);
        _objc_release(ppuVar14);
      }
      _objc_release(ppuVar22);
      _objc_release(ppuVar10);
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar31);
    }
    _objc_release(ppuVar6);
    _objc_release(puVar4);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d0) {
    return;
  }
  ___stack_chk_fail();
  lVar27 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar23 = param_2;
  _objc_retain(param_2);
  _objc_retain(ppuVar25);
  _objc_retain(ppuVar24);
  lVar26 = param_2;
  func_0x00010c0e00e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = UNRECOVERED_JUMPTABLE[4];
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar5);
  _objc_release(puVar4);
  _objc_release(lVar26);
  lVar26 = param_2;
  func_0x00010c0e00e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = UNRECOVERED_JUMPTABLE[5];
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar5);
  _objc_release(puVar4);
  _objc_release(lVar26);
  lVar26 = param_2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar26 != 0) {
    lVar26 = param_2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    puVar31 = UNRECOVERED_JUMPTABLE[6];
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar31);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(lVar26);
  }
  puVar5 = UNRECOVERED_JUMPTABLE[7];
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar5);
  _objc_release(ppuVar25);
  _objc_release(puVar4);
  puVar4 = UNRECOVERED_JUMPTABLE[8];
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar24;
  func_0x00010c1d0640(puVar4);
  _objc_release(ppuVar24);
  _objc_release(puVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar27) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar23);
  _objc_retain(ppuVar2);
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  _objc_retain(uVar1);
  uVar30 = *(undefined8 *)(param_2 + 0x30);
  _objc_retain(uVar30);
  uVar29 = *(undefined8 *)(param_2 + 0x38);
  _objc_retain(uVar29);
  _objc_retain(ppuVar2);
  _objc_retain(lVar23);
  func_0x00010c0f88c0(uVar3);
  _objc_release(uVar29);
  _objc_release(ppuVar2);
  _objc_release(uVar30);
  _objc_release(lVar23);
  _objc_release(uVar1);
  _objc_release(ppuVar2);
  _objc_release(lVar23);
  return;
}



/* Entry: 107e5b8c8; end: 107e5c06f; -[SCMemoriesTimelineSnapDocParser retrieveMultipleSegmentMetadataWithFullBaseMediaDownload:completionBlock:] */

void FUN_107e5b8c8(long param_1,long param_2,undefined **param_3,undefined **param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  long lVar21;
  undefined *puVar22;
  undefined **ppuVar23;
  long lVar24;
  undefined **ppuVar25;
  undefined **ppuVar26;
  long lVar27;
  undefined *puVar28;
  undefined8 uVar29;
  undefined *puVar30;
  undefined *puVar31;
  undefined *puStack_188;
  undefined8 uStack_180;
  code *pcStack_178;
  undefined *puStack_170;
  undefined **ppuStack_168;
  ulong uStack_160;
  long lStack_158;
  undefined *puStack_150;
  undefined **ppuStack_148;
  undefined1 uStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined **ppuStack_110;
  undefined *puStack_108;
  undefined **ppuStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined **ppuStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined **ppuStack_98;
  undefined8 uStack_90;
  undefined **ppuStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar25 = param_3;
  ppuVar26 = param_4;
  _objc_retain(param_4);
  if (param_4 != (undefined **)0x0) {
    uVar1 = *(ulong *)(param_1 + 0x18);
    FUN_107e595e4();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfb0d80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    uVar1 = uVar2;
    func_0x00010bf529e0();
    ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSError_1126ae858;
    if (uVar1 == 0) {
      _objc_opt_class();
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      uStack_90 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
      ppuStack_88 = &PTR____CFConstantStringClassReference_110ec1498;
      puVar22 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar22);
      _objc_release(param_1);
      param_2 = 0;
      ppuVar25 = (undefined **)0x0;
      ppuVar26 = ppuVar3;
      (*(code *)param_4[2])(param_4,0,0,ppuVar3);
    }
    else {
      ppuVar3 = *(undefined ***)(param_1 + 0x18);
      FUN_107e5998c();
      _objc_retainAutoreleasedReturnValue();
      puVar30 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_opt_new();
      puVar31 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_opt_new();
      puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_opt_new();
      puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_opt_new();
      ppuVar6 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_opt_new();
      uVar1 = uVar2;
      func_0x00010bf529e0();
      puVar22 = PTR___NSConcreteStackBlock_11034bd00;
      if (uVar1 != 0) {
        uVar1 = 0;
        do {
          uVar7 = uVar2;
          func_0x00010c0dfd40(uVar2);
          _objc_retainAutoreleasedReturnValue();
          uVar8 = *(undefined8 *)(param_1 + 0x18);
          func_0x00010c0fee00(uVar8);
          _objc_retainAutoreleasedReturnValue();
          uVar11 = uVar8;
          func_0x00010c0c4c40();
          _objc_retainAutoreleasedReturnValue();
          uVar9 = uVar11;
          func_0x00010c12fae0();
          _objc_retainAutoreleasedReturnValue();
          puStack_f0 = puVar22;
          uStack_e8 = 0xc2000000;
          pcStack_e0 = FUN_107e5c070;
          puStack_d8 = &UNK_110a0fa40;
          _objc_retain(puVar30);
          puStack_d0 = puVar30;
          uStack_a8 = uVar1;
          _objc_retain(puVar4);
          puStack_c8 = puVar4;
          _objc_retain(puVar5);
          puStack_c0 = puVar5;
          _objc_retain(puVar31);
          puStack_b8 = puVar31;
          _objc_retain(ppuVar6);
          ppuVar26 = &puStack_f0;
          ppuStack_b0 = ppuVar6;
          func_0x000107e59d88(uVar7,uVar9,ppuVar3,ppuVar26);
          _objc_release(uVar9);
          _objc_release(uVar11);
          _objc_release(uVar8);
          _objc_release(uVar7);
          _objc_release(ppuStack_b0);
          _objc_release(puStack_b8);
          _objc_release(puStack_c0);
          _objc_release(puStack_c8);
          _objc_release(puStack_d0);
          uVar1 = uVar1 + 1;
          uVar7 = uVar2;
          func_0x00010bf529e0();
        } while (uVar1 < uVar7);
      }
      puVar22 = puVar30;
      func_0x00010bf529e0();
      ppuVar23 = (undefined **)PTR__OBJC_CLASS___NSError_1126ae858;
      if (puVar22 == (undefined *)0x0) {
        _objc_opt_class(param_1);
        _NSStringFromClass();
        _objc_retainAutoreleasedReturnValue();
        uStack_a0 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
        ppuStack_98 = &PTR____CFConstantStringClassReference_110ec14b8;
        puVar22 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf99240(ppuVar23);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar22);
        _objc_release(param_1);
        param_2 = 0;
        ppuVar25 = (undefined **)0x0;
        ppuVar26 = ppuVar23;
        (*(code *)param_4[2])(param_4,0,0,ppuVar23);
      }
      else {
        puVar22 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        _objc_opt_new();
        ppuVar10 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        _objc_opt_new();
        ppuVar23 = ppuVar10;
        _dispatch_group_create();
        uVar11 = *(undefined8 *)(param_1 + 0x10);
        _objc_retain();
        puVar28 = puVar30;
        func_0x00010bf529e0();
        if (puVar28 != (undefined *)0x0) {
          puVar28 = (undefined *)0x0;
          do {
            _dispatch_group_enter(ppuVar23);
            puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df840();
            _objc_retainAutoreleasedReturnValue();
            puVar13 = puVar30;
            func_0x00010c0e00e0(puVar30);
            _objc_retainAutoreleasedReturnValue();
            puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df840();
            _objc_retainAutoreleasedReturnValue();
            ppuVar25 = ppuVar6;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            puVar16 = puVar4;
            func_0x00010c0e00e0(puVar4);
            _objc_retainAutoreleasedReturnValue();
            puVar17 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            puVar18 = puVar31;
            func_0x00010c0e00e0(puVar31);
            _objc_retainAutoreleasedReturnValue();
            puVar19 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            puVar20 = puVar5;
            func_0x00010c0e00e0(puVar5);
            _objc_retainAutoreleasedReturnValue();
            puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_130 = 0xc2000000;
            pcStack_128 = FUN_107e5c2e4;
            puStack_120 = &UNK_110a0fa70;
            uStack_118 = uVar11;
            _objc_retain(ppuVar10);
            ppuStack_110 = ppuVar10;
            puStack_f8 = puVar28;
            _objc_retain(puVar22);
            puStack_108 = puVar22;
            _objc_retain(ppuVar23);
            ppuVar26 = ppuVar25;
            ppuStack_100 = ppuVar23;
            func_0x00010be96b80(param_1);
            _objc_release(puVar20);
            _objc_release(puVar19);
            _objc_release(puVar18);
            _objc_release(puVar17);
            _objc_release(puVar16);
            _objc_release(puVar15);
            _objc_release(ppuVar25);
            _objc_release(puVar14);
            _objc_release(puVar13);
            _objc_release(puVar12);
            _objc_release(ppuStack_100);
            _objc_release(puStack_108);
            _objc_release(ppuStack_110);
            puVar28 = puVar28 + 1;
            puVar12 = puVar30;
            func_0x00010bf529e0();
          } while (puVar28 < puVar12);
        }
        lVar21 = 0x19;
        func_0x0001000819a8(0x19,0);
        _objc_retainAutoreleasedReturnValue();
        puStack_188 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_180 = 0xc2000000;
        pcStack_178 = FUN_107e5c484;
        puStack_170 = &UNK_11097c050;
        ppuStack_168 = ppuVar10;
        _objc_retain(uVar2);
        uStack_160 = uVar2;
        lStack_158 = param_1;
        _objc_retain(param_4);
        uStack_140 = SUB81(param_3,0);
        puStack_150 = puVar22;
        ppuStack_148 = param_4;
        _objc_retain(puVar22);
        _objc_retain(ppuVar10);
        ppuVar25 = &puStack_188;
        param_2 = lVar21;
        func_0x000100bc0718(ppuVar23);
        _objc_release(lVar21);
        _objc_release(puStack_150);
        _objc_release(ppuStack_148);
        _objc_release(uStack_160);
        _objc_release(ppuStack_168);
        _objc_release(uVar11);
        _objc_release(puVar22);
        _objc_release(ppuVar10);
      }
      _objc_release(ppuVar23);
      _objc_release(ppuVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar31);
      _objc_release(puVar30);
    }
    _objc_release(ppuVar3);
    _objc_release(uVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  lVar27 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar24 = param_2;
  _objc_retain(param_2);
  _objc_retain(ppuVar26);
  _objc_retain(ppuVar25);
  lVar21 = param_2;
  func_0x00010c0e00e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar30 = param_4[4];
  puVar22 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar30);
  _objc_release(puVar22);
  _objc_release(lVar21);
  lVar21 = param_2;
  func_0x00010c0e00e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar30 = param_4[5];
  puVar22 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar30);
  _objc_release(puVar22);
  _objc_release(lVar21);
  lVar21 = param_2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar21 != 0) {
    lVar21 = param_2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar22 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    puVar31 = param_4[6];
    puVar30 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar31);
    _objc_release(puVar30);
    _objc_release(puVar22);
    _objc_release(lVar21);
  }
  puVar30 = param_4[7];
  puVar22 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar30);
  _objc_release(ppuVar26);
  _objc_release(puVar22);
  puVar22 = param_4[8];
  puVar30 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  ppuVar26 = ppuVar25;
  func_0x00010c1d0640(puVar22);
  _objc_release(ppuVar25);
  _objc_release(puVar30);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar27) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar24);
  _objc_retain(ppuVar26);
  uVar11 = *(undefined8 *)(param_2 + 0x20);
  uVar9 = *(undefined8 *)(param_2 + 0x28);
  _objc_retain(uVar9);
  uVar29 = *(undefined8 *)(param_2 + 0x30);
  _objc_retain(uVar29);
  uVar8 = *(undefined8 *)(param_2 + 0x38);
  _objc_retain(uVar8);
  _objc_retain(ppuVar26);
  _objc_retain(lVar24);
  func_0x00010c0f88c0(uVar11);
  _objc_release(uVar8);
  _objc_release(ppuVar26);
  _objc_release(uVar29);
  _objc_release(lVar24);
  _objc_release(uVar9);
  _objc_release(ppuVar26);
  _objc_release(lVar24);
  return;
}



/* Entry: 107e5c070; end: 107e5c2e3;  */

void FUN_107e5c070(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = param_2;
  _objc_retain(param_2);
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar2 = param_2;
  func_0x00010c0e00e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + 0x20);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar10);
  _objc_release(puVar3);
  _objc_release(lVar2);
  lVar2 = param_2;
  func_0x00010c0e00e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + 0x28);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar10);
  _objc_release(puVar3);
  _objc_release(lVar2);
  lVar2 = param_2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_1 + 0x30);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar10);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(lVar2);
  }
  uVar10 = *(undefined8 *)(param_1 + 0x38);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar10);
  _objc_release(param_4);
  _objc_release(puVar3);
  uVar10 = *(undefined8 *)(param_1 + 0x40);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c1d0640(uVar10);
  _objc_release(param_3);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar5);
  _objc_retain(uVar6);
  uVar10 = *(undefined8 *)(param_2 + 0x20);
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  _objc_retain(uVar1);
  uVar9 = *(undefined8 *)(param_2 + 0x30);
  _objc_retain(uVar9);
  uVar8 = *(undefined8 *)(param_2 + 0x38);
  _objc_retain(uVar8);
  _objc_retain(uVar6);
  _objc_retain(lVar5);
  func_0x00010c0f88c0(uVar10);
  _objc_release(uVar8);
  _objc_release(uVar6);
  _objc_release(uVar9);
  _objc_release(lVar5);
  _objc_release(uVar1);
  _objc_release(uVar6);
  _objc_release(lVar5);
  return;
}



/* Entry: 107e5c2e4; end: 107e5c483;  */

void FUN_107e5c2e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar4);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar3);
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010c0f88c0(uVar1);
  _objc_release(uVar3);
  _objc_release(param_3);
  _objc_release(uVar4);
  _objc_release(param_2);
  _objc_release(uVar2);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 107e5c484; end: 107e5c843;  */

void FUN_107e5c484(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  ulong uVar14;
  long lVar15;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf529e0();
  lVar2 = *(long *)(param_1 + 0x28);
  func_0x00010bf529e0();
  puVar13 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (lVar1 == lVar2) {
    if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
      lVar1 = *(long *)(param_1 + 0x38);
      func_0x00010bf529e0();
      lVar2 = *(long *)(param_1 + 0x28);
      func_0x00010bf529e0();
      if (lVar1 != lVar2) {
        puVar13 = *(undefined **)(param_1 + 0x40);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
                    /* WARNING: Could not recover jumptable at 0x000107e5c6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(puVar13 + 0x10))(puVar13,0,0,0);
          return;
        }
        goto LAB_107e5c840;
      }
    }
    puVar13 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    lVar1 = *(long *)(param_1 + 0x20);
    func_0x00010bf529e0();
    if (lVar1 != 0) {
      uVar14 = 0;
      do {
        lVar2 = *(long *)(param_1 + 0x20);
        puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
        lVar15 = *(long *)(param_1 + 0x38);
        puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df840();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
        lVar1 = lVar2;
        func_0x00010c0c3fe0();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
        if (lVar1 == 0) {
          if (*(char *)(param_1 + 0x48) != '\0') {
            uVar6 = *(undefined8 *)(param_1 + 0x30);
            _objc_opt_class();
            _NSStringFromClass();
            _objc_retainAutoreleasedReturnValue();
            puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
            func_0x00010bf72080();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf99240();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar7);
            _objc_release(uVar6);
            _objc_release(lVar15);
            _objc_release(lVar2);
            if (puVar3 != (undefined *)0x0) {
              (**(code **)(*(long *)(param_1 + 0x40) + 0x10))(*(long *)(param_1 + 0x40),0,0,puVar3);
              goto LAB_107e5c738;
            }
            break;
          }
        }
        else {
          _objc_release();
        }
        func_0x00010befa120(puVar13);
        if (lVar15 == 0) {
          _objc_release(lVar2);
          break;
        }
        func_0x00010befa120(puVar5);
        _objc_release(lVar15);
        _objc_release(lVar2);
        uVar14 = uVar14 + 1;
        uVar4 = *(ulong *)(param_1 + 0x20);
        func_0x00010bf529e0();
      } while (uVar14 < uVar4);
    }
    lVar1 = *(long *)(param_1 + 0x40);
    puVar3 = puVar13;
    func_0x00010bf51e00();
    puVar7 = puVar5;
    func_0x00010bf51e00();
    (**(code **)(lVar1 + 0x10))(lVar1,puVar3,puVar7,0);
    _objc_release(puVar7);
LAB_107e5c738:
    _objc_release(puVar3);
    _objc_release(puVar5);
  }
  else {
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    _objc_opt_class();
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(uVar6);
    (**(code **)(*(long *)(param_1 + 0x40) + 0x10))(*(long *)(param_1 + 0x40),0,0,puVar13);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return;
  }
LAB_107e5c840:
  ___stack_chk_fail();
  uVar8 = *(ulong *)(puVar13 + 0x18);
  FUN_107e5cae0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar8;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar14;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar14);
  _objc_release(uVar8);
  uVar14 = uVar4;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  if (uVar14 == 0) {
    puVar13 = (undefined *)0x0;
  }
  else {
    lVar1 = *(long *)(puVar13 + 0x18);
    FUN_107e5998c();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar14;
    func_0x00010c0ff680();
    if (uVar8 == 0) {
      lVar2 = 0;
    }
    else {
      uVar8 = 0;
      do {
        uVar9 = uVar14;
        func_0x00010c0ff660(uVar14);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c296de0();
        _objc_release(uVar9);
        puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar1;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        lVar12 = lVar2;
        func_0x00010bf5cc00();
        _objc_retainAutoreleasedReturnValue();
        lVar15 = lVar12;
        func_0x00010c0cc0c0();
        _objc_retainAutoreleasedReturnValue();
        lVar10 = lVar15;
        func_0x00010c08eee0();
        _objc_retainAutoreleasedReturnValue();
        lVar11 = lVar10;
        func_0x00010c08fa60();
        _objc_release(lVar10);
        _objc_release(lVar15);
        _objc_release(lVar12);
        _objc_release(lVar2);
        _objc_release(puVar13);
        if (lVar11 != 0) {
          puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          lVar12 = lVar1;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          lVar15 = lVar12;
          func_0x00010bf5cc00();
          _objc_retainAutoreleasedReturnValue();
          lVar10 = lVar15;
          func_0x00010c0cc0c0();
          _objc_retainAutoreleasedReturnValue();
          lVar2 = lVar10;
          func_0x00010c08eee0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar10);
          _objc_release(lVar15);
          _objc_release(lVar12);
          _objc_release(puVar13);
          goto LAB_107e5ca64;
        }
        uVar8 = uVar8 + 1;
        uVar9 = uVar14;
        func_0x00010c0ff680();
      } while (uVar8 < uVar9);
      lVar2 = 0;
    }
LAB_107e5ca64:
    lVar12 = lVar2;
    func_0x00010c08fa60();
    if (lVar12 == 0) {
      puVar13 = (undefined *)0x0;
    }
    else {
      puVar13 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
      func_0x00010bdc1900(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(uVar14);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 107e5c844; end: 107e5cadf; -[SCMemoriesTimelineSnapDocParser retrieveGlobalSOJUEditsSynchronouslyWithError:] */

void FUN_107e5c844(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  
  uVar1 = *(ulong *)(param_1 + 0x18);
  FUN_107e5cae0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = uVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  if (uVar2 == 0) {
    puVar11 = (undefined *)0x0;
  }
  else {
    lVar4 = *(long *)(param_1 + 0x18);
    FUN_107e5998c();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010c0ff680();
    if (uVar1 == 0) {
      lVar12 = 0;
    }
    else {
      uVar1 = 0;
      do {
        uVar5 = uVar2;
        func_0x00010c0ff660(uVar2);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010c296de0();
        _objc_release(uVar5);
        puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar6);
        _objc_retainAutoreleasedReturnValue();
        lVar12 = lVar4;
        func_0x00010c0e00e0(lVar4,param_2,puVar11);
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar12;
        func_0x00010bf5cc00();
        _objc_retainAutoreleasedReturnValue();
        lVar8 = lVar7;
        func_0x00010c0cc0c0();
        _objc_retainAutoreleasedReturnValue();
        lVar9 = lVar8;
        func_0x00010c08eee0();
        _objc_retainAutoreleasedReturnValue();
        lVar10 = lVar9;
        func_0x00010c08fa60();
        _objc_release(lVar9);
        _objc_release(lVar8);
        _objc_release(lVar7);
        _objc_release(lVar12);
        _objc_release(puVar11);
        if (lVar10 != 0) {
          puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar6);
          _objc_retainAutoreleasedReturnValue();
          lVar7 = lVar4;
          func_0x00010c0e00e0(lVar4,param_2,puVar11);
          _objc_retainAutoreleasedReturnValue();
          lVar8 = lVar7;
          func_0x00010bf5cc00();
          _objc_retainAutoreleasedReturnValue();
          lVar9 = lVar8;
          func_0x00010c0cc0c0();
          _objc_retainAutoreleasedReturnValue();
          lVar12 = lVar9;
          func_0x00010c08eee0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar9);
          _objc_release(lVar8);
          _objc_release(lVar7);
          _objc_release(puVar11);
          goto LAB_107e5ca64;
        }
        uVar1 = uVar1 + 1;
        uVar5 = uVar2;
        func_0x00010c0ff680();
      } while (uVar1 < uVar5);
      lVar12 = 0;
    }
LAB_107e5ca64:
    lVar7 = lVar12;
    func_0x00010c08fa60();
    if (lVar7 == 0) {
      puVar11 = (undefined *)0x0;
    }
    else {
      puVar11 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
      func_0x00010bdc1900(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,lVar12,0,param_3);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar12);
    _objc_release(lVar4);
  }
  _objc_release(uVar2);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 107e5cae0; end: 107e5cceb;  */

void FUN_107e5cae0(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 *puVar16;
  undefined **ppuVar17;
  long lVar18;
  undefined8 uVar19;
  undefined *puVar20;
  long lVar21;
  long lVar22;
  undefined *puVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  long lVar27;
  ulong uVar28;
  undefined *puVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  long lStack_5f8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d0;
  long lStack_4c8;
  long *plStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined *puStack_478;
  long lStack_3f0;
  undefined *puStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_e8;
  undefined *apuStack_e0 [17];
  long lStack_58;
  
  ppuVar17 = &puStack_130;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = param_1;
  func_0x00010c0c4c40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c08c260();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_1);
  puVar1 = puVar2;
  func_0x00010c2791c0();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  puStack_130 = (undefined *)0x0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain();
  puVar3 = puVar1;
  func_0x00010bf52a60();
  if (puVar3 != (undefined *)0x0) {
    lVar22 = *plStack_120;
    do {
      puVar23 = (undefined *)0x0;
      do {
        if (*plStack_120 != lVar22) {
          _objc_enumerationMutation(puVar1);
        }
        puVar20 = *(undefined **)(lStack_128 + (long)puVar23 * 8);
        puVar29 = puVar20;
        func_0x00010c278a40();
        if (((int)puVar29 == 1) &&
           (puVar29 = puVar20, func_0x00010c074780(), ((ulong)puVar29 & 1) != 0)) {
          _objc_retain(puVar20);
          _objc_release(puVar1);
          puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          if (puVar20 != (undefined *)0x0) {
            func_0x00010c277f00(puVar20);
            func_0x00010c0df820();
            _objc_retainAutoreleasedReturnValue();
            puVar29 = puVar20;
            puStack_e8 = puVar3;
            func_0x00010c2787a0();
            _objc_retainAutoreleasedReturnValue();
            ppuVar17 = apuStack_e0;
            puVar23 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
            apuStack_e0[0] = puVar29;
            func_0x00010bf72080();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar29);
            _objc_release(puVar3);
            goto LAB_107e5cc90;
          }
          puVar23 = (undefined *)0x0;
          goto LAB_107e5cca0;
        }
        puVar23 = puVar23 + 1;
      } while (puVar3 != puVar23);
      puVar3 = puVar1;
      ppuVar17 = &puStack_130;
      func_0x00010bf52a60();
    } while (puVar3 != (undefined *)0x0);
  }
  puVar23 = (undefined *)0x0;
  puVar20 = puVar1;
LAB_107e5cc90:
  _objc_release(puVar20);
LAB_107e5cca0:
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar4 = *(long *)(puVar2 + 0x18);
    FUN_107e595e4();
    _objc_retainAutoreleasedReturnValue();
    lVar22 = lVar4;
    func_0x00010bfb0d80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    lVar4 = lVar22;
    func_0x00010bf529e0();
    if (lVar4 == 0) {
      puVar23 = (undefined *)0x0;
    }
    else {
      lVar5 = *(long *)(puVar2 + 0x18);
      FUN_107e5998c();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      _objc_retain(lVar22);
      lVar4 = lVar22;
      func_0x00010bf52a60();
      lVar27 = lRam0000000000000000;
      while (lVar4 != 0) {
        lVar21 = 0;
        do {
          if (lRam0000000000000000 != lVar27) {
            _objc_enumerationMutation(lVar22);
          }
          uVar25 = *(ulong *)(lVar21 * 8);
          uVar26 = uVar25;
          func_0x00010c0ff680();
          if (uVar26 != 0) {
            uVar26 = 0;
            do {
              uVar28 = uVar25;
              func_0x00010c0ff660();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c296de0();
              _objc_release(uVar28);
              puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x00010c0df820();
              _objc_retainAutoreleasedReturnValue();
              lVar6 = lVar5;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              lVar7 = lVar6;
              func_0x00010bf5cc00();
              _objc_retainAutoreleasedReturnValue();
              lVar8 = lVar7;
              func_0x00010c0cc0c0();
              _objc_retainAutoreleasedReturnValue();
              lVar9 = lVar8;
              func_0x00010c08eee0();
              _objc_retainAutoreleasedReturnValue();
              lVar10 = lVar9;
              func_0x00010c08fa60();
              _objc_release(lVar9);
              _objc_release(lVar8);
              _objc_release(lVar7);
              _objc_release(lVar6);
              _objc_release(puVar3);
              if (lVar10 != 0) {
                puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570);
                _objc_retainAutoreleasedReturnValue();
                lVar6 = lVar5;
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                lVar7 = lVar6;
                func_0x00010bf5cc00();
                _objc_retainAutoreleasedReturnValue();
                lVar8 = lVar7;
                func_0x00010c0cc0c0();
                _objc_retainAutoreleasedReturnValue();
                lVar9 = lVar8;
                func_0x00010c08eee0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(lVar8);
                _objc_release(lVar7);
                _objc_release(lVar6);
                _objc_release(puVar3);
                func_0x00010befa120(puVar1);
                _objc_release(lVar9);
                break;
              }
              uVar26 = uVar26 + 1;
              uVar28 = uVar25;
              func_0x00010c0ff680();
            } while (uVar26 < uVar28);
          }
          lVar21 = lVar21 + 1;
        } while (lVar21 != lVar4);
        lVar4 = lVar22;
        func_0x00010bf52a60();
      }
      _objc_release(lVar22);
      puVar23 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      _objc_retain(puVar1);
      puVar3 = puVar1;
      func_0x00010bf52a60();
      lVar4 = lRam0000000000000000;
      while (puVar3 != (undefined *)0x0) {
        puVar29 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar4) {
            _objc_enumerationMutation(puVar1);
          }
          lVar27 = *(long *)((long)puVar29 * 8);
          func_0x00010c08fa60();
          puVar20 = PTR__OBJC_CLASS___NSError_1126ae858;
          if (lVar27 == 0) {
            puVar11 = puVar2;
            _objc_opt_class();
            _NSStringFromClass();
            _objc_retainAutoreleasedReturnValue();
            puVar12 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
            func_0x00010bf72080();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf99240();
            _objc_retainAutoreleasedReturnValue();
            _objc_autorelease();
            *ppuVar17 = puVar20;
            _objc_release(puVar12);
          }
          else {
            puVar11 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
            func_0x00010bdc1900();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar23);
          }
          _objc_release(puVar11);
          puVar29 = puVar29 + 1;
        } while (puVar3 != puVar29);
        puVar3 = puVar1;
        func_0x00010bf52a60();
      }
      _objc_release(puVar1);
      _objc_release(puVar1);
      _objc_release(lVar5);
    }
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar18) {
      ___stack_chk_fail();
      lStack_3f0 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar18 = *(long *)(lVar22 + 0x18);
      FUN_107e595e4();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar18;
      func_0x00010bfb0d80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar18);
      lVar18 = lVar4;
      func_0x00010bf529e0();
      if (lVar18 == 0) {
        puVar23 = (undefined *)0x0;
      }
      else {
        uVar26 = *(ulong *)(lVar22 + 0x18);
        FUN_107e5998c();
        _objc_retainAutoreleasedReturnValue();
        puVar23 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf09f00();
        _objc_retainAutoreleasedReturnValue();
        uVar31 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
        uVar30 = *(undefined8 *)PTR__kCMTimeZero_110348670;
        uVar19 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
        lStack_4c8 = 0;
        uStack_4d0 = 0;
        uStack_4b8 = 0;
        plStack_4c0 = (long *)0x0;
        uStack_4a8 = 0;
        uStack_4b0 = 0;
        uStack_498 = 0;
        uStack_4a0 = 0;
        uStack_490 = uVar30;
        uStack_488 = uVar31;
        uStack_480 = uVar19;
        _objc_retain(lVar4);
        lStack_5f8 = lVar4;
        func_0x00010bf52a60();
        if (lStack_5f8 != 0) {
          lVar18 = *plStack_4c0;
          do {
            lVar27 = 0;
            do {
              if (*plStack_4c0 != lVar18) {
                _objc_enumerationMutation(lVar4);
              }
              uVar24 = *(ulong *)(lStack_4c8 + lVar27 * 8);
              uVar25 = uVar24;
              func_0x00010c27c540();
              _objc_retainAutoreleasedReturnValue();
              uVar28 = uVar24;
              func_0x00010c0ff680();
              if (uVar28 != 0) {
                uVar28 = 0;
                do {
                  uVar13 = uVar24;
                  func_0x00010c0ff660(uVar24);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c296de0();
                  _objc_release(uVar13);
                  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                  func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570);
                  _objc_retainAutoreleasedReturnValue();
                  uVar13 = uVar26;
                  func_0x00010c0e00e0();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(puVar1);
                  uVar14 = uVar13;
                  func_0x00010c08c3a0();
                  if ((int)uVar14 == 1) {
                    uVar14 = uVar13;
                    func_0x00010c0c3fe0();
                    _objc_retainAutoreleasedReturnValue();
                    uVar15 = uVar14;
                    func_0x00010bf0b760();
                    _objc_release(uVar14);
                    if ((int)uVar15 == 5) {
                      uVar14 = uVar13;
                      func_0x00010c0c3fe0(uVar13);
                      _objc_retainAutoreleasedReturnValue();
                      uVar15 = uVar14;
                      func_0x00010c0c4bc0();
                      _CMTimeMakeWithSeconds(&uStack_590,(double)(uVar15 & 0xffffffff) / 1000.0,600)
                      ;
                      _objc_release(uVar14);
                      uVar14 = uVar25;
                      func_0x00010bf8b160(uVar25);
                      _CMTimeMakeWithSeconds(&uStack_5c0,(double)uVar14 / 1000.0,600);
                      uVar14 = uVar25;
                      func_0x00010c250f20(uVar25);
                      _CMTimeMakeWithSeconds(&uStack_4f0,(double)uVar14 / 1000.0,600);
                      uStack_538 = uStack_5b8;
                      uStack_540 = uStack_5c0;
                      uStack_530 = uStack_5b0;
                      puVar16 = &uStack_540;
                      uStack_510 = uVar30;
                      uStack_508 = uVar31;
                      uStack_500 = uVar19;
                      _CMTimeCompare(puVar16,&uStack_510);
                      puVar1 = PTR__OBJC_CLASS___NSValue_1126afdf8;
                      if ((int)puVar16 == 0) {
                        uStack_508 = uStack_488;
                        uStack_510 = uStack_490;
                        uStack_500 = uStack_480;
                        uStack_558 = uStack_588;
                        uStack_560 = uStack_590;
                      }
                      else {
                        uStack_538 = uStack_488;
                        uStack_540 = uStack_490;
                        uStack_530 = uStack_480;
                        uStack_558 = uStack_4e8;
                        uStack_560 = uStack_4f0;
                        uStack_550 = uStack_4e0;
                        _CMTimeAdd(&uStack_510,&uStack_540,&uStack_560);
                        uStack_558 = uStack_5b8;
                        uStack_560 = uStack_5c0;
                      }
                      _CMTimeRangeMake(&uStack_540,&uStack_510,&uStack_560);
                      func_0x00010c297240(puVar1);
                      _objc_retainAutoreleasedReturnValue();
                      puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
                      uStack_508 = uStack_488;
                      uStack_510 = uStack_490;
                      uStack_500 = uStack_480;
                      uStack_558 = uStack_588;
                      uStack_560 = uStack_590;
                      uStack_550 = uStack_580;
                      _CMTimeRangeMake(&uStack_540,&uStack_510,&uStack_560);
                      func_0x00010c297240(puVar2);
                      _objc_retainAutoreleasedReturnValue();
                      uStack_538 = uStack_588;
                      uStack_540 = uStack_590;
                      uStack_530 = uStack_580;
                      uStack_508 = uStack_5b8;
                      uStack_510 = uStack_5c0;
                      uStack_500 = uStack_5b0;
                      puVar16 = &uStack_540;
                      _CMTimeCompare(puVar16,&uStack_510);
                      if (0 < (int)puVar16) {
                        uVar14 = uVar13;
                        func_0x00010c0c3fe0();
                        _objc_retainAutoreleasedReturnValue();
                        uVar15 = uVar14;
                        func_0x00010bfd7d40();
                        _objc_release(uVar14);
                        if ((int)uVar15 != 0) {
                          _objc_retain(puVar1);
                          _objc_release(puVar2);
                          puVar2 = puVar1;
                        }
                      }
                      puVar3 = PTR_PTR_1126bf730;
                      _objc_alloc(PTR_PTR_1126bf730);
                      func_0x00010c055780();
                      func_0x00010befa120(puVar23);
                      uStack_538 = uStack_488;
                      uStack_540 = uStack_490;
                      uStack_530 = uStack_480;
                      uStack_508 = uStack_588;
                      uStack_510 = uStack_590;
                      uStack_500 = uStack_580;
                      _CMTimeAdd(&uStack_490,&uStack_540,&uStack_510);
                      _objc_release(puVar3);
                      _objc_release(puVar2);
                      _objc_release(puVar1);
                    }
                  }
                  _objc_release(uVar13);
                  uVar28 = uVar28 + 1;
                  uVar13 = uVar24;
                  func_0x00010c0ff680();
                } while (uVar28 < uVar13);
              }
              _objc_release(uVar25);
              lVar27 = lVar27 + 1;
            } while (lVar27 != lStack_5f8);
            lStack_5f8 = lVar4;
            func_0x00010bf52a60();
          } while (lStack_5f8 != 0);
        }
        _objc_release(lVar4);
        puVar1 = puVar23;
        func_0x00010bf529e0();
        if (puVar1 == (undefined *)0x1) {
          puVar1 = puVar23;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          puVar2 = puVar1;
          func_0x00010c27c940();
          _objc_retainAutoreleasedReturnValue();
          if (puVar2 == (undefined *)0x0) {
            uStack_528 = 0;
            uStack_530 = 0;
            uStack_518 = 0;
            uStack_520 = 0;
            uStack_538 = 0;
            uStack_540 = 0;
          }
          else {
            func_0x00010bdc1120(&uStack_540,puVar2);
          }
          _objc_release(puVar2);
          _objc_release(puVar1);
          uStack_588 = uStack_538;
          uStack_590 = uStack_540;
          uStack_578 = uStack_528;
          uStack_580 = uStack_530;
          uStack_568 = uStack_518;
          uStack_570 = uStack_520;
          uStack_5b8 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 8);
          uStack_5c0 = *(undefined8 *)PTR__kCMTimeRangeZero_110348668;
          uStack_5a8 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 0x18);
          uStack_5b0 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 0x10);
          uStack_598 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 0x28);
          uStack_5a0 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 0x20);
          puVar16 = &uStack_590;
          _CMTimeRangeEqual(puVar16,&uStack_5c0);
          if ((int)puVar16 != 0) {
            lVar22 = *(long *)(lVar22 + 0x18);
            func_0x000107e623f0();
            _objc_retainAutoreleasedReturnValue();
            if (lVar22 == 0) {
              uStack_5c0 = 0;
              uStack_5b8 = 0;
              uStack_5b0 = 0;
            }
            else {
              func_0x00010bdc1140(&uStack_5c0,lVar22);
            }
            _objc_release(lVar22);
            puVar1 = PTR__OBJC_CLASS___NSValue_1126afdf8;
            uStack_508 = uStack_5b8;
            uStack_510 = uStack_5c0;
            uStack_500 = uStack_5b0;
            uStack_4f0 = uVar30;
            uStack_4e8 = uVar31;
            uStack_4e0 = uVar19;
            _CMTimeRangeMake(&uStack_590,&uStack_4f0,&uStack_510);
            func_0x00010c297240();
            _objc_retainAutoreleasedReturnValue();
            puVar2 = PTR_PTR_1126bf730;
            _objc_alloc();
            func_0x00010c055780();
            puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
            puStack_478 = puVar2;
            func_0x00010bf0a140();
            _objc_retainAutoreleasedReturnValue();
            puVar29 = puVar3;
            func_0x00010c0d3c80();
            _objc_release(puVar23);
            _objc_release(puVar3);
            _objc_release(puVar2);
            _objc_release(puVar1);
            puVar23 = puVar29;
          }
        }
        _objc_release(uVar26);
      }
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_3f0) {
        ___stack_chk_fail();
        uVar25 = *(ulong *)(lVar4 + 0x18);
        FUN_107e595e4();
        _objc_retainAutoreleasedReturnValue();
        uVar26 = uVar25;
        func_0x00010bfb0d80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar25);
        uVar25 = uVar26;
        func_0x00010bf529e0();
        if (uVar25 == 0) {
          puVar23 = (undefined *)0x0;
        }
        else {
          puVar23 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
          _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
          uVar25 = uVar26;
          func_0x00010bf529e0();
          if (uVar25 != 0) {
            uVar25 = 0;
            do {
              uVar28 = uVar26;
              func_0x00010c0dfd40();
              _objc_retainAutoreleasedReturnValue();
              uVar24 = uVar28;
              func_0x00010bf5ac00();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              if (uVar24 != 0) {
                uVar24 = uVar28;
                func_0x00010bf5ac00(uVar28);
                _objc_retainAutoreleasedReturnValue();
                puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1d0640(puVar23);
                _objc_release(puVar1);
                _objc_release(uVar24);
              }
              _objc_release(uVar28);
              uVar25 = uVar25 + 1;
              uVar28 = uVar26;
              func_0x00010bf529e0();
            } while (uVar25 < uVar28);
          }
        }
        _objc_release(uVar26);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar23);
  return;
}



/* Entry: 107e5ccec; end: 107e5d183; -[SCMemoriesTimelineSnapDocParser retrieveLocalSOJUEditsSynchronouslyWithError:] */

void FUN_107e5ccec(undefined *param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 *puVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  undefined *puVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  long lVar25;
  ulong uVar26;
  undefined *puVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  long lStack_4c8;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a0;
  long lStack_398;
  long *plStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined *puStack_348;
  long lStack_2c0;
  
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 0x18);
  FUN_107e595e4();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar1;
  func_0x00010bfb0d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar17;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    puVar20 = (undefined *)0x0;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x18);
    FUN_107e5998c();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    _objc_retain(lVar17);
    lVar1 = lVar17;
    func_0x00010bf52a60();
    lVar25 = lRam0000000000000000;
    while (lVar1 != 0) {
      lVar21 = 0;
      do {
        if (lRam0000000000000000 != lVar25) {
          _objc_enumerationMutation(lVar17);
        }
        uVar23 = *(ulong *)(lVar21 * 8);
        uVar24 = uVar23;
        func_0x00010c0ff680();
        if (uVar24 != 0) {
          uVar24 = 0;
          do {
            uVar26 = uVar23;
            func_0x00010c0ff660();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c296de0();
            _objc_release(uVar26);
            puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df820();
            _objc_retainAutoreleasedReturnValue();
            lVar4 = lVar2;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            lVar5 = lVar4;
            func_0x00010bf5cc00();
            _objc_retainAutoreleasedReturnValue();
            lVar6 = lVar5;
            func_0x00010c0cc0c0();
            _objc_retainAutoreleasedReturnValue();
            lVar7 = lVar6;
            func_0x00010c08eee0();
            _objc_retainAutoreleasedReturnValue();
            lVar8 = lVar7;
            func_0x00010c08fa60();
            _objc_release(lVar7);
            _objc_release(lVar6);
            _objc_release(lVar5);
            _objc_release(lVar4);
            _objc_release(puVar20);
            if (lVar8 != 0) {
              puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570);
              _objc_retainAutoreleasedReturnValue();
              lVar4 = lVar2;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              lVar5 = lVar4;
              func_0x00010bf5cc00();
              _objc_retainAutoreleasedReturnValue();
              lVar6 = lVar5;
              func_0x00010c0cc0c0();
              _objc_retainAutoreleasedReturnValue();
              lVar7 = lVar6;
              func_0x00010c08eee0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(lVar6);
              _objc_release(lVar5);
              _objc_release(lVar4);
              _objc_release(puVar20);
              func_0x00010befa120(puVar3);
              _objc_release(lVar7);
              break;
            }
            uVar24 = uVar24 + 1;
            uVar26 = uVar23;
            func_0x00010c0ff680();
          } while (uVar24 < uVar26);
        }
        lVar21 = lVar21 + 1;
      } while (lVar21 != lVar1);
      lVar1 = lVar17;
      func_0x00010bf52a60();
    }
    _objc_release(lVar17);
    puVar20 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    _objc_retain(puVar3);
    puVar9 = puVar3;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (puVar9 != (undefined *)0x0) {
      puVar27 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(puVar3);
        }
        lVar25 = *(long *)((long)puVar27 * 8);
        func_0x00010c08fa60();
        puVar12 = PTR__OBJC_CLASS___NSError_1126ae858;
        if (lVar25 == 0) {
          puVar10 = param_1;
          _objc_opt_class();
          _NSStringFromClass();
          _objc_retainAutoreleasedReturnValue();
          puVar11 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          func_0x00010bf72080();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf99240();
          _objc_retainAutoreleasedReturnValue();
          _objc_autorelease();
          *param_3 = puVar12;
          _objc_release(puVar11);
        }
        else {
          puVar10 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
          func_0x00010bdc1900();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar20);
        }
        _objc_release(puVar10);
        puVar27 = puVar27 + 1;
      } while (puVar9 != puVar27);
      puVar9 = puVar3;
      func_0x00010bf52a60();
    }
    _objc_release(puVar3);
    _objc_release(puVar3);
    _objc_release(lVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar18) {
    ___stack_chk_fail();
    lStack_2c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar18 = *(long *)(lVar17 + 0x18);
    FUN_107e595e4();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar18;
    func_0x00010bfb0d80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar18);
    lVar18 = lVar1;
    func_0x00010bf529e0();
    if (lVar18 == 0) {
      puVar20 = (undefined *)0x0;
    }
    else {
      uVar24 = *(ulong *)(lVar17 + 0x18);
      FUN_107e5998c();
      _objc_retainAutoreleasedReturnValue();
      puVar20 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      uVar29 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
      uVar28 = *(undefined8 *)PTR__kCMTimeZero_110348670;
      uVar19 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
      lStack_398 = 0;
      uStack_3a0 = 0;
      uStack_388 = 0;
      plStack_390 = (long *)0x0;
      uStack_378 = 0;
      uStack_380 = 0;
      uStack_368 = 0;
      uStack_370 = 0;
      uStack_360 = uVar28;
      uStack_358 = uVar29;
      uStack_350 = uVar19;
      _objc_retain(lVar1);
      lStack_4c8 = lVar1;
      func_0x00010bf52a60();
      if (lStack_4c8 != 0) {
        lVar18 = *plStack_390;
        do {
          lVar25 = 0;
          do {
            if (*plStack_390 != lVar18) {
              _objc_enumerationMutation(lVar1);
            }
            uVar22 = *(ulong *)(lStack_398 + lVar25 * 8);
            uVar23 = uVar22;
            func_0x00010c27c540();
            _objc_retainAutoreleasedReturnValue();
            uVar26 = uVar22;
            func_0x00010c0ff680();
            if (uVar26 != 0) {
              uVar26 = 0;
              do {
                uVar13 = uVar22;
                func_0x00010c0ff660(uVar22);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c296de0();
                _objc_release(uVar13);
                puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570);
                _objc_retainAutoreleasedReturnValue();
                uVar13 = uVar24;
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar3);
                uVar14 = uVar13;
                func_0x00010c08c3a0();
                if ((int)uVar14 == 1) {
                  uVar14 = uVar13;
                  func_0x00010c0c3fe0();
                  _objc_retainAutoreleasedReturnValue();
                  uVar15 = uVar14;
                  func_0x00010bf0b760();
                  _objc_release(uVar14);
                  if ((int)uVar15 == 5) {
                    uVar14 = uVar13;
                    func_0x00010c0c3fe0(uVar13);
                    _objc_retainAutoreleasedReturnValue();
                    uVar15 = uVar14;
                    func_0x00010c0c4bc0();
                    _CMTimeMakeWithSeconds(&uStack_460,(double)(uVar15 & 0xffffffff) / 1000.0,600);
                    _objc_release(uVar14);
                    uVar14 = uVar23;
                    func_0x00010bf8b160(uVar23);
                    _CMTimeMakeWithSeconds(&uStack_490,(double)uVar14 / 1000.0,600);
                    uVar14 = uVar23;
                    func_0x00010c250f20(uVar23);
                    _CMTimeMakeWithSeconds(&uStack_3c0,(double)uVar14 / 1000.0,600);
                    uStack_408 = uStack_488;
                    uStack_410 = uStack_490;
                    uStack_400 = uStack_480;
                    puVar16 = &uStack_410;
                    uStack_3e0 = uVar28;
                    uStack_3d8 = uVar29;
                    uStack_3d0 = uVar19;
                    _CMTimeCompare(puVar16,&uStack_3e0);
                    puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
                    if ((int)puVar16 == 0) {
                      uStack_3d8 = uStack_358;
                      uStack_3e0 = uStack_360;
                      uStack_3d0 = uStack_350;
                      uStack_428 = uStack_458;
                      uStack_430 = uStack_460;
                    }
                    else {
                      uStack_408 = uStack_358;
                      uStack_410 = uStack_360;
                      uStack_400 = uStack_350;
                      uStack_428 = uStack_3b8;
                      uStack_430 = uStack_3c0;
                      uStack_420 = uStack_3b0;
                      _CMTimeAdd(&uStack_3e0,&uStack_410,&uStack_430);
                      uStack_428 = uStack_488;
                      uStack_430 = uStack_490;
                    }
                    _CMTimeRangeMake(&uStack_410,&uStack_3e0,&uStack_430);
                    func_0x00010c297240(puVar3);
                    _objc_retainAutoreleasedReturnValue();
                    puVar9 = PTR__OBJC_CLASS___NSValue_1126afdf8;
                    uStack_3d8 = uStack_358;
                    uStack_3e0 = uStack_360;
                    uStack_3d0 = uStack_350;
                    uStack_428 = uStack_458;
                    uStack_430 = uStack_460;
                    uStack_420 = uStack_450;
                    _CMTimeRangeMake(&uStack_410,&uStack_3e0,&uStack_430);
                    func_0x00010c297240(puVar9);
                    _objc_retainAutoreleasedReturnValue();
                    uStack_408 = uStack_458;
                    uStack_410 = uStack_460;
                    uStack_400 = uStack_450;
                    uStack_3d8 = uStack_488;
                    uStack_3e0 = uStack_490;
                    uStack_3d0 = uStack_480;
                    puVar16 = &uStack_410;
                    _CMTimeCompare(puVar16,&uStack_3e0);
                    if (0 < (int)puVar16) {
                      uVar14 = uVar13;
                      func_0x00010c0c3fe0();
                      _objc_retainAutoreleasedReturnValue();
                      uVar15 = uVar14;
                      func_0x00010bfd7d40();
                      _objc_release(uVar14);
                      if ((int)uVar15 != 0) {
                        _objc_retain(puVar3);
                        _objc_release(puVar9);
                        puVar9 = puVar3;
                      }
                    }
                    puVar27 = PTR_PTR_1126bf730;
                    _objc_alloc(PTR_PTR_1126bf730);
                    func_0x00010c055780();
                    func_0x00010befa120(puVar20);
                    uStack_408 = uStack_358;
                    uStack_410 = uStack_360;
                    uStack_400 = uStack_350;
                    uStack_3d8 = uStack_458;
                    uStack_3e0 = uStack_460;
                    uStack_3d0 = uStack_450;
                    _CMTimeAdd(&uStack_360,&uStack_410,&uStack_3e0);
                    _objc_release(puVar27);
                    _objc_release(puVar9);
                    _objc_release(puVar3);
                  }
                }
                _objc_release(uVar13);
                uVar26 = uVar26 + 1;
                uVar13 = uVar22;
                func_0x00010c0ff680();
              } while (uVar26 < uVar13);
            }
            _objc_release(uVar23);
            lVar25 = lVar25 + 1;
          } while (lVar25 != lStack_4c8);
          lStack_4c8 = lVar1;
          func_0x00010bf52a60();
        } while (lStack_4c8 != 0);
      }
      _objc_release(lVar1);
      puVar3 = puVar20;
      func_0x00010bf529e0();
      if (puVar3 == (undefined *)0x1) {
        puVar3 = puVar20;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar3;
        func_0x00010c27c940();
        _objc_retainAutoreleasedReturnValue();
        if (puVar9 == (undefined *)0x0) {
          uStack_3f8 = 0;
          uStack_400 = 0;
          uStack_3e8 = 0;
          uStack_3f0 = 0;
          uStack_408 = 0;
          uStack_410 = 0;
        }
        else {
          func_0x00010bdc1120(&uStack_410,puVar9);
        }
        _objc_release(puVar9);
        _objc_release(puVar3);
        uStack_458 = uStack_408;
        uStack_460 = uStack_410;
        uStack_448 = uStack_3f8;
        uStack_450 = uStack_400;
        uStack_438 = uStack_3e8;
        uStack_440 = uStack_3f0;
        uStack_488 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 8);
        uStack_490 = *(undefined8 *)PTR__kCMTimeRangeZero_110348668;
        uStack_478 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 0x18);
        uStack_480 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 0x10);
        uStack_468 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 0x28);
        uStack_470 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 0x20);
        puVar16 = &uStack_460;
        _CMTimeRangeEqual(puVar16,&uStack_490);
        if ((int)puVar16 != 0) {
          lVar17 = *(long *)(lVar17 + 0x18);
          func_0x000107e623f0();
          _objc_retainAutoreleasedReturnValue();
          if (lVar17 == 0) {
            uStack_490 = 0;
            uStack_488 = 0;
            uStack_480 = 0;
          }
          else {
            func_0x00010bdc1140(&uStack_490,lVar17);
          }
          _objc_release(lVar17);
          puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
          uStack_3d8 = uStack_488;
          uStack_3e0 = uStack_490;
          uStack_3d0 = uStack_480;
          uStack_3c0 = uVar28;
          uStack_3b8 = uVar29;
          uStack_3b0 = uVar19;
          _CMTimeRangeMake(&uStack_460,&uStack_3c0,&uStack_3e0);
          func_0x00010c297240();
          _objc_retainAutoreleasedReturnValue();
          puVar9 = PTR_PTR_1126bf730;
          _objc_alloc();
          func_0x00010c055780();
          puVar27 = PTR__OBJC_CLASS___NSArray_1126ae530;
          puStack_348 = puVar9;
          func_0x00010bf0a140();
          _objc_retainAutoreleasedReturnValue();
          puVar12 = puVar27;
          func_0x00010c0d3c80();
          _objc_release(puVar20);
          _objc_release(puVar27);
          _objc_release(puVar9);
          _objc_release(puVar3);
          puVar20 = puVar12;
        }
      }
      _objc_release(uVar24);
    }
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2c0) {
      ___stack_chk_fail();
      uVar23 = *(ulong *)(lVar1 + 0x18);
      FUN_107e595e4();
      _objc_retainAutoreleasedReturnValue();
      uVar24 = uVar23;
      func_0x00010bfb0d80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar23);
      uVar23 = uVar24;
      func_0x00010bf529e0();
      if (uVar23 == 0) {
        puVar20 = (undefined *)0x0;
      }
      else {
        puVar20 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
        uVar23 = uVar24;
        func_0x00010bf529e0();
        if (uVar23 != 0) {
          uVar23 = 0;
          do {
            uVar26 = uVar24;
            func_0x00010c0dfd40();
            _objc_retainAutoreleasedReturnValue();
            uVar22 = uVar26;
            func_0x00010bf5ac00();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (uVar22 != 0) {
              uVar22 = uVar26;
              func_0x00010bf5ac00(uVar26);
              _objc_retainAutoreleasedReturnValue();
              puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(puVar20);
              _objc_release(puVar3);
              _objc_release(uVar22);
            }
            _objc_release(uVar26);
            uVar23 = uVar23 + 1;
            uVar26 = uVar24;
            func_0x00010bf529e0();
          } while (uVar23 < uVar26);
        }
      }
      _objc_release(uVar24);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar20);
  return;
}



/* Entry: 107e5d184; end: 107e5d83f; -[SCMemoriesTimelineSnapDocParser retrieveSegmentTimeRanges] */

void FUN_107e5d184(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lStack_288;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_160;
  long lStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 0x18);
  FUN_107e595e4();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfb0d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    puVar14 = (undefined *)0x0;
  }
  else {
    uVar3 = *(ulong *)(param_1 + 0x18);
    FUN_107e5998c();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    uVar18 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    uVar13 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    lStack_158 = 0;
    uStack_160 = 0;
    uStack_148 = 0;
    plStack_150 = (long *)0x0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_120 = uVar18;
    uStack_118 = uVar19;
    uStack_110 = uVar13;
    _objc_retain(lVar2);
    lStack_288 = lVar2;
    func_0x00010bf52a60();
    if (lStack_288 != 0) {
      lVar1 = *plStack_150;
      do {
        lVar15 = 0;
        do {
          if (*plStack_150 != lVar1) {
            _objc_enumerationMutation(lVar2);
          }
          uVar16 = *(ulong *)(lStack_158 + lVar15 * 8);
          uVar12 = uVar16;
          func_0x00010c27c540();
          _objc_retainAutoreleasedReturnValue();
          uVar17 = uVar16;
          func_0x00010c0ff680();
          if (uVar17 != 0) {
            uVar17 = 0;
            do {
              uVar4 = uVar16;
              func_0x00010c0ff660(uVar16);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c296de0();
              _objc_release(uVar4);
              puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570);
              _objc_retainAutoreleasedReturnValue();
              uVar4 = uVar3;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar5);
              uVar6 = uVar4;
              func_0x00010c08c3a0();
              if ((int)uVar6 == 1) {
                uVar6 = uVar4;
                func_0x00010c0c3fe0();
                _objc_retainAutoreleasedReturnValue();
                uVar7 = uVar6;
                func_0x00010bf0b760();
                _objc_release(uVar6);
                if ((int)uVar7 == 5) {
                  uVar6 = uVar4;
                  func_0x00010c0c3fe0(uVar4);
                  _objc_retainAutoreleasedReturnValue();
                  uVar7 = uVar6;
                  func_0x00010c0c4bc0();
                  _CMTimeMakeWithSeconds(&uStack_220,(double)(uVar7 & 0xffffffff) / 1000.0,600);
                  _objc_release(uVar6);
                  uVar6 = uVar12;
                  func_0x00010bf8b160(uVar12);
                  _CMTimeMakeWithSeconds(&uStack_250,(double)uVar6 / 1000.0,600);
                  uVar6 = uVar12;
                  func_0x00010c250f20(uVar12);
                  _CMTimeMakeWithSeconds(&uStack_180,(double)uVar6 / 1000.0,600);
                  uStack_1c8 = uStack_248;
                  uStack_1d0 = uStack_250;
                  uStack_1c0 = uStack_240;
                  puVar8 = &uStack_1d0;
                  uStack_1a0 = uVar18;
                  uStack_198 = uVar19;
                  uStack_190 = uVar13;
                  _CMTimeCompare(puVar8,&uStack_1a0);
                  puVar5 = PTR__OBJC_CLASS___NSValue_1126afdf8;
                  if ((int)puVar8 == 0) {
                    uStack_198 = uStack_118;
                    uStack_1a0 = uStack_120;
                    uStack_190 = uStack_110;
                    uStack_1e8 = uStack_218;
                    uStack_1f0 = uStack_220;
                  }
                  else {
                    uStack_1c8 = uStack_118;
                    uStack_1d0 = uStack_120;
                    uStack_1c0 = uStack_110;
                    uStack_1e8 = uStack_178;
                    uStack_1f0 = uStack_180;
                    uStack_1e0 = uStack_170;
                    _CMTimeAdd(&uStack_1a0,&uStack_1d0,&uStack_1f0);
                    uStack_1e8 = uStack_248;
                    uStack_1f0 = uStack_250;
                  }
                  _CMTimeRangeMake(&uStack_1d0,&uStack_1a0,&uStack_1f0);
                  func_0x00010c297240(puVar5);
                  _objc_retainAutoreleasedReturnValue();
                  puVar9 = PTR__OBJC_CLASS___NSValue_1126afdf8;
                  uStack_198 = uStack_118;
                  uStack_1a0 = uStack_120;
                  uStack_190 = uStack_110;
                  uStack_1e8 = uStack_218;
                  uStack_1f0 = uStack_220;
                  uStack_1e0 = uStack_210;
                  _CMTimeRangeMake(&uStack_1d0,&uStack_1a0,&uStack_1f0);
                  func_0x00010c297240(puVar9);
                  _objc_retainAutoreleasedReturnValue();
                  uStack_1c8 = uStack_218;
                  uStack_1d0 = uStack_220;
                  uStack_1c0 = uStack_210;
                  uStack_198 = uStack_248;
                  uStack_1a0 = uStack_250;
                  uStack_190 = uStack_240;
                  puVar8 = &uStack_1d0;
                  _CMTimeCompare(puVar8,&uStack_1a0);
                  if (0 < (int)puVar8) {
                    uVar6 = uVar4;
                    func_0x00010c0c3fe0();
                    _objc_retainAutoreleasedReturnValue();
                    uVar7 = uVar6;
                    func_0x00010bfd7d40();
                    _objc_release(uVar6);
                    if ((int)uVar7 != 0) {
                      _objc_retain(puVar5);
                      _objc_release(puVar9);
                      puVar9 = puVar5;
                    }
                  }
                  puVar10 = PTR_PTR_1126bf730;
                  _objc_alloc(PTR_PTR_1126bf730);
                  func_0x00010c055780();
                  func_0x00010befa120(puVar14);
                  uStack_1c8 = uStack_118;
                  uStack_1d0 = uStack_120;
                  uStack_1c0 = uStack_110;
                  uStack_198 = uStack_218;
                  uStack_1a0 = uStack_220;
                  uStack_190 = uStack_210;
                  _CMTimeAdd(&uStack_120,&uStack_1d0,&uStack_1a0);
                  _objc_release(puVar10);
                  _objc_release(puVar9);
                  _objc_release(puVar5);
                }
              }
              _objc_release(uVar4);
              uVar17 = uVar17 + 1;
              uVar4 = uVar16;
              func_0x00010c0ff680();
            } while (uVar17 < uVar4);
          }
          _objc_release(uVar12);
          lVar15 = lVar15 + 1;
        } while (lVar15 != lStack_288);
        lStack_288 = lVar2;
        func_0x00010bf52a60();
      } while (lStack_288 != 0);
    }
    _objc_release(lVar2);
    puVar5 = puVar14;
    func_0x00010bf529e0();
    if (puVar5 == (undefined *)0x1) {
      puVar5 = puVar14;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar5;
      func_0x00010c27c940();
      _objc_retainAutoreleasedReturnValue();
      if (puVar9 == (undefined *)0x0) {
        uStack_1b8 = 0;
        uStack_1c0 = 0;
        uStack_1a8 = 0;
        uStack_1b0 = 0;
        uStack_1c8 = 0;
        uStack_1d0 = 0;
      }
      else {
        func_0x00010bdc1120(&uStack_1d0,puVar9);
      }
      _objc_release(puVar9);
      _objc_release(puVar5);
      uStack_218 = uStack_1c8;
      uStack_220 = uStack_1d0;
      uStack_208 = uStack_1b8;
      uStack_210 = uStack_1c0;
      uStack_1f8 = uStack_1a8;
      uStack_200 = uStack_1b0;
      uStack_248 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 8);
      uStack_250 = *(undefined8 *)PTR__kCMTimeRangeZero_110348668;
      uStack_238 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 0x18);
      uStack_240 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 0x10);
      uStack_228 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 0x28);
      uStack_230 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 0x20);
      puVar8 = &uStack_220;
      _CMTimeRangeEqual(puVar8,&uStack_250);
      if ((int)puVar8 != 0) {
        lVar1 = *(long *)(param_1 + 0x18);
        func_0x000107e623f0();
        _objc_retainAutoreleasedReturnValue();
        if (lVar1 == 0) {
          uStack_250 = 0;
          uStack_248 = 0;
          uStack_240 = 0;
        }
        else {
          func_0x00010bdc1140(&uStack_250,lVar1);
        }
        _objc_release(lVar1);
        puVar5 = PTR__OBJC_CLASS___NSValue_1126afdf8;
        uStack_198 = uStack_248;
        uStack_1a0 = uStack_250;
        uStack_190 = uStack_240;
        uStack_180 = uVar18;
        uStack_178 = uVar19;
        uStack_170 = uVar13;
        _CMTimeRangeMake(&uStack_220,&uStack_180,&uStack_1a0);
        func_0x00010c297240();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = PTR_PTR_1126bf730;
        _objc_alloc();
        func_0x00010c055780();
        puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_108 = puVar9;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar10;
        func_0x00010c0d3c80();
        _objc_release(puVar14);
        _objc_release(puVar10);
        _objc_release(puVar9);
        _objc_release(puVar5);
        puVar14 = puVar11;
      }
    }
    _objc_release(uVar3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    uVar12 = *(ulong *)(lVar2 + 0x18);
    FUN_107e595e4();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar12;
    func_0x00010bfb0d80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar12);
    uVar12 = uVar3;
    func_0x00010bf529e0();
    if (uVar12 == 0) {
      puVar14 = (undefined *)0x0;
    }
    else {
      puVar14 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
      uVar12 = uVar3;
      func_0x00010bf529e0();
      if (uVar12 != 0) {
        uVar12 = 0;
        do {
          uVar17 = uVar3;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          uVar16 = uVar17;
          func_0x00010bf5ac00();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (uVar16 != 0) {
            uVar16 = uVar17;
            func_0x00010bf5ac00(uVar17);
            _objc_retainAutoreleasedReturnValue();
            puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar14);
            _objc_release(puVar5);
            _objc_release(uVar16);
          }
          _objc_release(uVar17);
          uVar12 = uVar12 + 1;
          uVar17 = uVar3;
          func_0x00010bf529e0();
        } while (uVar12 < uVar17);
      }
    }
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
  return;
}



/* Entry: 107e5d840; end: 107e5d977; -[SCMemoriesTimelineSnapDocParser retrieveSegmentCreativeEditTags] */

void FUN_107e5d840(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  uVar1 = *(ulong *)(param_1 + 0x18);
  FUN_107e595e4();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfb0d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010bf529e0();
  if (uVar1 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    uVar1 = uVar2;
    func_0x00010bf529e0();
    if (uVar1 != 0) {
      uVar1 = 0;
      do {
        uVar3 = uVar2;
        func_0x00010c0dfd40(uVar2,param_2,uVar1);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010bf5ac00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (uVar4 != 0) {
          uVar4 = uVar3;
          func_0x00010bf5ac00(uVar3);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar6,param_2,uVar4,puVar5);
          _objc_release(puVar5);
          _objc_release(uVar4);
        }
        _objc_release(uVar3);
        uVar1 = uVar1 + 1;
        uVar3 = uVar2;
        func_0x00010bf529e0();
      } while (uVar1 < uVar3);
    }
  }
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 107e5d978; end: 107e5dcf3; -[SCMemoriesTimelineSnapDocParser retrieveGlobalOverlayFormatWithCompletionBlock:] */

void FUN_107e5d978(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    uVar1 = *(ulong *)(param_1 + 0x18);
    FUN_107e5cae0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf00d20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar2 = uVar3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    if (uVar2 == 0) {
      (**(code **)(param_3 + 0x10))(param_3,0,0,0);
    }
    else {
      lVar4 = *(long *)(param_1 + 0x18);
      FUN_107e5998c();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar2;
      func_0x00010c0ff680();
      if (uVar1 != 0) {
        uVar1 = 0;
        do {
          uVar5 = uVar2;
          func_0x00010c0ff660(uVar2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c296de0();
          _objc_release(uVar5);
          puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          lVar7 = lVar4;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          lVar8 = lVar7;
          func_0x00010c08c3a0();
          if ((int)lVar8 == 1) {
            puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            lVar8 = lVar4;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            lVar10 = lVar8;
            func_0x00010c0c3fe0();
            _objc_retainAutoreleasedReturnValue();
            lVar11 = lVar10;
            func_0x00010bf0b760();
            _objc_release(lVar10);
            _objc_release(lVar8);
            _objc_release(puVar9);
            _objc_release(lVar7);
            _objc_release(puVar6);
            if ((int)lVar11 == 6) {
              puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570);
              _objc_retainAutoreleasedReturnValue();
              lVar7 = lVar4;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              lVar8 = lVar7;
              func_0x00010c0c3fe0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(lVar7);
              _objc_release(puVar6);
              if (lVar8 != 0) {
                puVar6 = PTR_PTR_1126b1060;
                _objc_alloc(PTR_PTR_1126b1060);
                func_0x00010c032f60();
                uVar12 = *(undefined8 *)(param_1 + 8);
                lVar7 = lVar8;
                func_0x00010c0c5180(lVar8);
                _objc_retainAutoreleasedReturnValue();
                _objc_retain(param_3);
                _objc_retain(lVar8);
                func_0x00010c13eb40(uVar12);
                _objc_unsafeClaimAutoreleasedReturnValue();
                _objc_release(lVar7);
                _objc_release(lVar8);
                _objc_release(param_3);
                _objc_release(puVar6);
                _objc_release(lVar8);
                goto LAB_107e5db70;
              }
              break;
            }
          }
          else {
            _objc_release(lVar7);
            _objc_release(puVar6);
          }
          uVar1 = uVar1 + 1;
          uVar5 = uVar2;
          func_0x00010c0ff680();
        } while (uVar1 < uVar5);
      }
      (**(code **)(param_3 + 0x10))(param_3,0,0,0);
LAB_107e5db70:
      _objc_release(lVar4);
    }
    _objc_release(uVar2);
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 107e5dcf4; end: 107e5de6f;  */

void FUN_107e5dcf4(long param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  int iVar13;
  undefined *puVar14;
  long lVar15;
  ulong uVar16;
  
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar1 = param_2;
  func_0x00010bfc4120();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar1;
  func_0x00010bfcaaa0();
  puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (puVar14 == (undefined *)0x0) {
    lVar7 = *(long *)(param_1 + 0x30);
    puVar3 = param_2;
    func_0x00010bfc4120();
    _objc_retainAutoreleasedReturnValue();
    iVar13 = (int)*(undefined8 *)(param_1 + 0x28);
    puVar14 = (undefined *)0x0;
    (**(code **)(lVar7 + 0x10))(lVar7,puVar3);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    _objc_opt_class();
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar14);
    _objc_release(uVar2);
    iVar13 = 0;
    puVar14 = puVar3;
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),0);
  }
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar14);
  if (puVar14 != (undefined *)0x0) {
    uVar4 = *(ulong *)(param_2 + 0x18);
    FUN_107e5cae0();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar4;
    func_0x00010bf00d20();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar16;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar16);
    if (uVar6 == 0) {
      (**(code **)(puVar14 + 0x10))(puVar14,0,0,0,0);
    }
    else {
      lVar7 = *(long *)(param_2 + 0x18);
      FUN_107e5998c();
      _objc_retainAutoreleasedReturnValue();
      uVar16 = uVar6;
      func_0x00010c0ff680();
      lVar15 = 0;
      if (uVar16 != 0) {
        uVar16 = 0;
        lVar8 = lVar15;
        do {
          uVar5 = uVar6;
          func_0x00010c0ff660(uVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c296de0();
          _objc_release(uVar5);
          puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          lVar15 = lVar7;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar8);
          _objc_release(puVar3);
          lVar8 = lVar15;
          func_0x00010c08c3a0();
          if ((int)lVar8 == 1) {
            lVar8 = lVar15;
            func_0x00010c0c3fe0();
            _objc_retainAutoreleasedReturnValue();
            lVar9 = lVar8;
            func_0x00010bf0b760();
            _objc_release(lVar8);
            if ((int)lVar9 == iVar13) {
              lVar8 = lVar15;
              func_0x00010c0c3fe0();
              _objc_retainAutoreleasedReturnValue();
              if (lVar8 != 0) {
                uVar10 = *(undefined8 *)(param_2 + 0x18);
                func_0x00010c0fee00();
                _objc_retainAutoreleasedReturnValue();
                uVar2 = uVar10;
                func_0x00010c0c4c40();
                _objc_retainAutoreleasedReturnValue();
                uVar11 = uVar2;
                func_0x00010c12fae0();
                _objc_retainAutoreleasedReturnValue();
                uVar12 = uVar11;
                func_0x000107e5a9f0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(uVar11);
                _objc_release(uVar2);
                _objc_release(uVar10);
                puVar3 = PTR_PTR_1126b1060;
                _objc_alloc(PTR_PTR_1126b1060);
                func_0x00010c032f60();
                uVar2 = *(undefined8 *)(param_2 + 8);
                lVar9 = lVar8;
                func_0x00010c0c5180(lVar8);
                _objc_retainAutoreleasedReturnValue();
                _objc_retain(puVar14);
                _objc_retain(uVar12);
                _objc_retain(lVar8);
                func_0x00010c13eb40(uVar2);
                _objc_unsafeClaimAutoreleasedReturnValue();
                _objc_release(lVar9);
                _objc_release(uVar12);
                _objc_release(lVar8);
                _objc_release(puVar14);
                _objc_release(uVar12);
                _objc_release(puVar3);
                _objc_release(lVar8);
                goto LAB_107e5e008;
              }
              break;
            }
          }
          uVar16 = uVar16 + 1;
          uVar5 = uVar6;
          func_0x00010c0ff680();
          lVar8 = lVar15;
        } while (uVar16 < uVar5);
      }
      (**(code **)(puVar14 + 0x10))(puVar14,0,0,0,0);
LAB_107e5e008:
      _objc_release(lVar15);
      _objc_release(lVar7);
    }
    _objc_release(uVar6);
    _objc_release(uVar4);
  }
  _objc_release(puVar14);
  return;
}



/* Entry: 107e5de70; end: 107e5e1db; -[SCMemoriesTimelineSnapDocParser retrieveGlobalGenericAssetWithAssetType:completionBlock:] */

void FUN_107e5de70(long param_1,undefined8 param_2,int param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  
  _objc_retain(param_4);
  if (param_4 != 0) {
    uVar1 = *(ulong *)(param_1 + 0x18);
    FUN_107e5cae0();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar1;
    func_0x00010bf00d20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar13;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar13);
    if (uVar3 == 0) {
      (**(code **)(param_4 + 0x10))(param_4,0,0,0,0);
    }
    else {
      lVar4 = *(long *)(param_1 + 0x18);
      FUN_107e5998c();
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar3;
      func_0x00010c0ff680();
      lVar12 = 0;
      if (uVar13 != 0) {
        uVar13 = 0;
        lVar6 = lVar12;
        do {
          uVar2 = uVar3;
          func_0x00010c0ff660(uVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c296de0();
          _objc_release(uVar2);
          puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          lVar12 = lVar4;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar6);
          _objc_release(puVar5);
          lVar6 = lVar12;
          func_0x00010c08c3a0();
          if ((int)lVar6 == 1) {
            lVar6 = lVar12;
            func_0x00010c0c3fe0();
            _objc_retainAutoreleasedReturnValue();
            lVar7 = lVar6;
            func_0x00010bf0b760();
            _objc_release(lVar6);
            if ((int)lVar7 == param_3) {
              lVar6 = lVar12;
              func_0x00010c0c3fe0();
              _objc_retainAutoreleasedReturnValue();
              if (lVar6 != 0) {
                uVar8 = *(undefined8 *)(param_1 + 0x18);
                func_0x00010c0fee00();
                _objc_retainAutoreleasedReturnValue();
                uVar11 = uVar8;
                func_0x00010c0c4c40();
                _objc_retainAutoreleasedReturnValue();
                uVar9 = uVar11;
                func_0x00010c12fae0();
                _objc_retainAutoreleasedReturnValue();
                uVar10 = uVar9;
                func_0x000107e5a9f0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(uVar9);
                _objc_release(uVar11);
                _objc_release(uVar8);
                puVar5 = PTR_PTR_1126b1060;
                _objc_alloc(PTR_PTR_1126b1060);
                func_0x00010c032f60();
                uVar11 = *(undefined8 *)(param_1 + 8);
                lVar7 = lVar6;
                func_0x00010c0c5180(lVar6);
                _objc_retainAutoreleasedReturnValue();
                _objc_retain(param_4);
                _objc_retain(uVar10);
                _objc_retain(lVar6);
                func_0x00010c13eb40(uVar11);
                _objc_unsafeClaimAutoreleasedReturnValue();
                _objc_release(lVar7);
                _objc_release(uVar10);
                _objc_release(lVar6);
                _objc_release(param_4);
                _objc_release(uVar10);
                _objc_release(puVar5);
                _objc_release(lVar6);
                goto LAB_107e5e008;
              }
              break;
            }
          }
          uVar13 = uVar13 + 1;
          uVar2 = uVar3;
          func_0x00010c0ff680();
          lVar6 = lVar12;
        } while (uVar13 < uVar2);
      }
      (**(code **)(param_4 + 0x10))(param_4,0,0,0,0);
LAB_107e5e008:
      _objc_release(lVar12);
      _objc_release(lVar4);
    }
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 107e5e1dc; end: 107e5e35b;  */

void FUN_107e5e1dc(long param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  long lVar18;
  int iVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  undefined *puVar23;
  long lVar24;
  long lVar25;
  undefined *puStack_2f8;
  undefined8 uStack_2f0;
  code *pcStack_2e8;
  undefined *puStack_2e0;
  undefined *puStack_2d8;
  undefined *puStack_2d0;
  undefined *puStack_2c8;
  undefined *puStack_2c0;
  long lStack_2b8;
  undefined8 *puStack_2b0;
  undefined *puStack_2a8;
  undefined8 uStack_2a0;
  code *pcStack_298;
  undefined *puStack_290;
  undefined *puStack_288;
  undefined *puStack_280;
  undefined *puStack_278;
  undefined8 *puStack_270;
  int iStack_268;
  undefined8 uStack_260;
  undefined8 *puStack_258;
  undefined8 uStack_250;
  code *pcStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_210;
  undefined8 *puStack_208;
  undefined8 uStack_200;
  code *pcStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_e8;
  
  lVar21 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar1 = param_2;
  func_0x00010bfc4120();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfcaaa0();
  puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (puVar2 == (undefined *)0x0) {
    lVar18 = *(long *)(param_1 + 0x38);
    puVar4 = param_2;
    func_0x00010bfc4120();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    lVar20 = *(long *)(param_1 + 0x30);
    (**(code **)(lVar18 + 0x10))(lVar18,puVar4,uVar3,lVar20,0);
    iVar19 = (int)uVar3;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    _objc_opt_class();
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(uVar3);
    iVar19 = 0;
    lVar20 = 0;
    (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),0,0,0,puVar4);
  }
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar21) {
    return;
  }
  ___stack_chk_fail();
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(lVar20);
  if (lVar20 != 0) {
    uVar5 = *(ulong *)(param_2 + 0x18);
    FUN_107e5cae0();
    _objc_retainAutoreleasedReturnValue();
    lVar21 = *(long *)(param_2 + 0x18);
    FUN_107e5998c();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar22 = uVar5;
    func_0x00010bf00d20();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar22;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    _objc_release(uVar22);
    if ((uVar7 != 0) && (uVar22 = uVar7, func_0x00010c0ff680(), uVar22 != 0)) {
      uVar22 = 0;
      do {
        uVar6 = uVar7;
        func_0x00010c0ff660(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c296de0();
        _objc_release(uVar6);
        puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df820();
        _objc_retainAutoreleasedReturnValue();
        lVar18 = lVar21;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar8);
        lVar9 = lVar18;
        func_0x00010c08c3a0();
        if ((int)lVar9 == 1) {
          lVar9 = lVar18;
          func_0x00010c0c3fe0();
          _objc_retainAutoreleasedReturnValue();
          lVar25 = lVar9;
          func_0x00010bf0b760();
          _objc_release(lVar9);
          if ((int)lVar25 == iVar19) {
            lVar9 = lVar18;
            func_0x00010c0c3fe0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar1);
            _objc_release(lVar9);
            func_0x00010befa120(puVar4);
          }
        }
        _objc_release(lVar18);
        uVar22 = uVar22 + 1;
        uVar6 = uVar7;
        func_0x00010c0ff680();
      } while (uVar22 < uVar6);
    }
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    lStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    plStack_1a0 = (long *)0x0;
    lVar9 = *(long *)(param_2 + 0x18);
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = lVar9;
    func_0x00010c0ff660();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar9);
    lVar9 = lVar18;
    func_0x00010bf52a60();
    if (lVar9 != 0) {
      lVar25 = *plStack_1a0;
      do {
        lVar24 = 0;
        do {
          if (*plStack_1a0 != lVar25) {
            _objc_enumerationMutation(lVar18);
          }
          puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          uVar22 = *(ulong *)(lStack_1a8 + lVar24 * 8);
          func_0x00010c0ff5c0(uVar22);
          func_0x00010c0df820();
          _objc_retainAutoreleasedReturnValue();
          lVar10 = lVar21;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(puVar8);
          if ((lVar10 == 0) && (uVar6 = uVar22, func_0x00010c08c3a0(), (int)uVar6 == 1)) {
            uVar6 = uVar22;
            func_0x00010c0c3fe0();
            _objc_retainAutoreleasedReturnValue();
            uVar11 = uVar6;
            func_0x00010bf0b760();
            _objc_release(uVar6);
            if ((int)uVar11 == iVar19) {
              uVar6 = uVar22;
              func_0x00010c118b40(uVar22);
              _objc_retainAutoreleasedReturnValue();
              uVar11 = uVar6;
              func_0x00010bfcd1a0();
              _objc_retainAutoreleasedReturnValue();
              uVar12 = uVar11;
              func_0x00010bf8b160();
              _CMTimeMakeWithSeconds(&uStack_1c8,(double)uVar12 / 1000.0,600);
              _objc_release(uVar11);
              _objc_release(uVar6);
              uVar6 = uVar22;
              func_0x00010c118b40(uVar22);
              _objc_retainAutoreleasedReturnValue();
              uVar11 = uVar6;
              func_0x00010bfcd1a0();
              _objc_retainAutoreleasedReturnValue();
              uVar12 = uVar11;
              func_0x00010c250f20();
              _CMTimeMakeWithSeconds(&uStack_1e0,(double)uVar12 / 1000.0,600);
              _objc_release(uVar11);
              _objc_release(uVar6);
              puStack_258 = (undefined8 *)uStack_1d8;
              uStack_260 = uStack_1e0;
              uStack_250 = uStack_1d0;
              uStack_228 = uStack_1c0;
              uStack_230 = uStack_1c8;
              uStack_220 = uStack_1b8;
              _CMTimeRangeMake(&uStack_210,&uStack_260,&uStack_230);
              puStack_258 = puStack_208;
              uStack_260 = uStack_210;
              pcStack_248 = pcStack_1f8;
              uStack_250 = uStack_200;
              uStack_238 = uStack_1e8;
              uStack_240 = uStack_1f0;
              puVar23 = PTR__OBJC_CLASS___NSValue_1126afdf8;
              func_0x00010c297240();
              _objc_retainAutoreleasedReturnValue();
              puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x00010bf529e0(puVar4);
              func_0x00010c0df840(puVar8);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(puVar2);
              _objc_release(puVar8);
              _objc_release(puVar23);
              func_0x00010c0c3fe0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar1);
              _objc_release(uVar22);
              func_0x00010befa120(puVar4);
            }
          }
          lVar24 = lVar24 + 1;
        } while (lVar9 != lVar24);
        lVar9 = lVar18;
        func_0x00010bf52a60();
      } while (lVar9 != 0);
    }
    _objc_release(lVar18);
    puVar8 = puVar1;
    func_0x00010bf529e0();
    if (puVar8 == (undefined *)0x0) {
      (**(code **)(lVar20 + 0x10))
                (lVar20,PTR____NSArray0__struct_11034ab48,PTR____NSArray0__struct_11034ab48,
                 PTR____NSDictionary0__struct_11034ab58,PTR____NSDictionary0__struct_11034ab58,0);
    }
    else {
      puVar8 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_opt_new();
      puVar23 = puVar4;
      func_0x00010bf529e0();
      if (puVar23 != (undefined *)0x0) {
        puVar23 = (undefined *)0x0;
        do {
          puVar13 = puVar4;
          func_0x00010c0dfd40(puVar4);
          _objc_retainAutoreleasedReturnValue();
          lVar24 = *(long *)(param_2 + 0x18);
          func_0x00010c0fee00();
          _objc_retainAutoreleasedReturnValue();
          lVar18 = lVar24;
          func_0x00010c0c4c40();
          _objc_retainAutoreleasedReturnValue();
          lVar9 = lVar18;
          func_0x00010c12fae0();
          _objc_retainAutoreleasedReturnValue();
          lVar25 = lVar9;
          func_0x000107e5a9f0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar9);
          _objc_release(lVar18);
          _objc_release(lVar24);
          if (lVar25 != 0) {
            puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar8);
            _objc_release(puVar14);
          }
          _objc_release(lVar25);
          _objc_release(puVar13);
          puVar13 = puVar4;
          func_0x00010bf529e0();
          puVar23 = puVar23 + 1;
        } while (puVar23 < puVar13);
      }
      puVar13 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      puVar14 = puVar13;
      _dispatch_group_create();
      puVar23 = (undefined *)0x0;
      puStack_208 = &uStack_210;
      uStack_210 = 0;
      uStack_200 = 0x3032000000;
      pcStack_1f8 = FUN_107e5b64c;
      uStack_1f0 = 0x107e5b65c;
      uStack_1e8 = 0;
      while( true ) {
        puVar15 = puVar1;
        func_0x00010bf529e0();
        if (puVar15 <= puVar23) break;
        _dispatch_group_enter(puVar14);
        puVar15 = PTR_PTR_1126b1060;
        _objc_alloc(PTR_PTR_1126b1060);
        func_0x00010c032f60();
        uVar3 = *(undefined8 *)(param_2 + 8);
        puVar16 = puVar1;
        func_0x00010c0dfd40(puVar1);
        _objc_retainAutoreleasedReturnValue();
        puVar17 = puVar16;
        func_0x00010c0c5180();
        _objc_retainAutoreleasedReturnValue();
        puStack_2a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_2a0 = 0xc2000000;
        pcStack_298 = FUN_107e5ec44;
        puStack_290 = &UNK_110a0fad0;
        puStack_270 = &uStack_210;
        puStack_288 = param_2;
        iStack_268 = iVar19;
        _objc_retain(puVar13);
        puStack_280 = puVar13;
        _objc_retain(puVar14);
        puStack_278 = puVar14;
        func_0x00010c13eb40(uVar3);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar17);
        _objc_release(puVar16);
        _objc_release(puStack_278);
        _objc_release(puStack_280);
        _objc_release(puVar15);
        puVar23 = puVar23 + 1;
      }
      uVar3 = 0x19;
      func_0x0001000819a8(0x19,0);
      _objc_retainAutoreleasedReturnValue();
      puStack_2f8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_2f0 = 0xc2000000;
      pcStack_2e8 = FUN_107e5edac;
      puStack_2e0 = &UNK_11097cd70;
      _objc_retain(lVar20);
      puStack_2d8 = puVar13;
      lStack_2b8 = lVar20;
      _objc_retain(puVar1);
      puStack_2d0 = puVar1;
      puStack_2c8 = puVar8;
      _objc_retain(puVar2);
      puStack_2b0 = &uStack_210;
      puStack_2c0 = puVar2;
      _objc_retain(puVar8);
      _objc_retain(puVar13);
      func_0x000100bc0718(puVar14,uVar3,&puStack_2f8);
      _objc_release(uVar3);
      _objc_release(puStack_2c0);
      _objc_release(puStack_2c8);
      _objc_release(puStack_2d0);
      _objc_release(puStack_2d8);
      _objc_release(lStack_2b8);
      __Block_object_dispose(&uStack_210,8);
      _objc_release(uStack_1e8);
      _objc_release(puVar8);
      _objc_release(puVar13);
      _objc_release(puVar14);
    }
    _objc_release(uVar7);
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_release(puVar4);
    _objc_release(lVar21);
    _objc_release(uVar5);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  lVar9 = 8;
  __Block_object_dispose(&uStack_210);
  __Unwind_Resume();
  lVar25 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(lVar9);
  lVar21 = lVar9;
  func_0x00010bfc4120();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar21;
  func_0x00010bfcaaa0();
  puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (lVar18 == 0) {
    uVar3 = *(undefined8 *)(lVar20 + 0x28);
    lVar18 = lVar9;
    func_0x00010bfc4120(lVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar3);
  }
  else {
    lVar18 = *(long *)(lVar20 + 0x20);
    _objc_opt_class(lVar18);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    lVar24 = *(long *)(*(long *)(lVar20 + 0x38) + 8);
    uVar3 = *(undefined8 *)(lVar24 + 0x28);
    *(undefined **)(lVar24 + 0x28) = puVar4;
    _objc_release(uVar3);
    _objc_release(puVar1);
  }
  _objc_release(lVar18);
  _dispatch_group_leave(*(undefined8 *)(lVar20 + 0x30));
  _objc_release(lVar21);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar25) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x000107e5edc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar9 + 0x40) + 0x10))
            (*(long *)(lVar9 + 0x40),*(undefined8 *)(lVar9 + 0x20),*(undefined8 *)(lVar9 + 0x28),
             *(undefined8 *)(lVar9 + 0x30),*(undefined8 *)(lVar9 + 0x38),
             *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x48) + 8) + 0x28));
  return;
}



/* Entry: 107e5e35c; end: 107e5ec43; -[SCMemoriesTimelineSnapDocParser retrieveMultipleGlobalGenericAssetsWithAssetType:completionBlock:] */

void FUN_107e5e35c(long param_1,undefined8 param_2,int param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  long lVar18;
  ulong uVar19;
  undefined *puVar20;
  long lVar21;
  long lVar22;
  undefined8 uVar23;
  undefined *puStack_298;
  undefined8 uStack_290;
  code *pcStack_288;
  undefined *puStack_280;
  undefined *puStack_278;
  undefined *puStack_270;
  undefined *puStack_268;
  undefined *puStack_260;
  long lStack_258;
  undefined8 *puStack_250;
  undefined *puStack_248;
  undefined8 uStack_240;
  code *pcStack_238;
  undefined *puStack_230;
  long lStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined8 *puStack_210;
  int iStack_208;
  undefined8 uStack_200;
  undefined8 *puStack_1f8;
  undefined8 uStack_1f0;
  code *pcStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 uStack_1a0;
  code *pcStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  if (param_4 != 0) {
    uVar1 = *(ulong *)(param_1 + 0x18);
    FUN_107e5cae0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = *(long *)(param_1 + 0x18);
    FUN_107e5998c();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar19 = uVar1;
    func_0x00010bf00d20();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar19;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    _objc_release(uVar19);
    if ((uVar7 != 0) && (uVar19 = uVar7, func_0x00010c0ff680(), uVar19 != 0)) {
      uVar19 = 0;
      do {
        uVar6 = uVar7;
        func_0x00010c0ff660(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c296de0();
        _objc_release(uVar6);
        puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df820();
        _objc_retainAutoreleasedReturnValue();
        lVar18 = lVar2;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar8);
        lVar9 = lVar18;
        func_0x00010c08c3a0();
        if ((int)lVar9 == 1) {
          lVar9 = lVar18;
          func_0x00010c0c3fe0();
          _objc_retainAutoreleasedReturnValue();
          lVar22 = lVar9;
          func_0x00010bf0b760();
          _objc_release(lVar9);
          if ((int)lVar22 == param_3) {
            lVar9 = lVar18;
            func_0x00010c0c3fe0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar4);
            _objc_release(lVar9);
            func_0x00010befa120(puVar3);
          }
        }
        _objc_release(lVar18);
        uVar19 = uVar19 + 1;
        uVar6 = uVar7;
        func_0x00010c0ff680();
      } while (uVar19 < uVar6);
    }
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    lStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    plStack_140 = (long *)0x0;
    lVar9 = *(long *)(param_1 + 0x18);
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = lVar9;
    func_0x00010c0ff660();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar9);
    lVar9 = lVar18;
    func_0x00010bf52a60();
    if (lVar9 != 0) {
      lVar22 = *plStack_140;
      do {
        lVar21 = 0;
        do {
          if (*plStack_140 != lVar22) {
            _objc_enumerationMutation(lVar18);
          }
          puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          uVar19 = *(ulong *)(lStack_148 + lVar21 * 8);
          func_0x00010c0ff5c0(uVar19);
          func_0x00010c0df820();
          _objc_retainAutoreleasedReturnValue();
          lVar10 = lVar2;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(puVar8);
          if ((lVar10 == 0) && (uVar6 = uVar19, func_0x00010c08c3a0(), (int)uVar6 == 1)) {
            uVar6 = uVar19;
            func_0x00010c0c3fe0();
            _objc_retainAutoreleasedReturnValue();
            uVar11 = uVar6;
            func_0x00010bf0b760();
            _objc_release(uVar6);
            if ((int)uVar11 == param_3) {
              uVar6 = uVar19;
              func_0x00010c118b40(uVar19);
              _objc_retainAutoreleasedReturnValue();
              uVar11 = uVar6;
              func_0x00010bfcd1a0();
              _objc_retainAutoreleasedReturnValue();
              uVar12 = uVar11;
              func_0x00010bf8b160();
              _CMTimeMakeWithSeconds(&uStack_168,(double)uVar12 / 1000.0,600);
              _objc_release(uVar11);
              _objc_release(uVar6);
              uVar6 = uVar19;
              func_0x00010c118b40(uVar19);
              _objc_retainAutoreleasedReturnValue();
              uVar11 = uVar6;
              func_0x00010bfcd1a0();
              _objc_retainAutoreleasedReturnValue();
              uVar12 = uVar11;
              func_0x00010c250f20();
              _CMTimeMakeWithSeconds(&uStack_180,(double)uVar12 / 1000.0,600);
              _objc_release(uVar11);
              _objc_release(uVar6);
              puStack_1f8 = (undefined8 *)uStack_178;
              uStack_200 = uStack_180;
              uStack_1f0 = uStack_170;
              uStack_1c8 = uStack_160;
              uStack_1d0 = uStack_168;
              uStack_1c0 = uStack_158;
              _CMTimeRangeMake(&uStack_1b0,&uStack_200,&uStack_1d0);
              puStack_1f8 = puStack_1a8;
              uStack_200 = uStack_1b0;
              pcStack_1e8 = pcStack_198;
              uStack_1f0 = uStack_1a0;
              uStack_1d8 = uStack_188;
              uStack_1e0 = uStack_190;
              puVar20 = PTR__OBJC_CLASS___NSValue_1126afdf8;
              func_0x00010c297240();
              _objc_retainAutoreleasedReturnValue();
              puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x00010bf529e0(puVar3);
              func_0x00010c0df840(puVar8);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(puVar5);
              _objc_release(puVar8);
              _objc_release(puVar20);
              func_0x00010c0c3fe0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar4);
              _objc_release(uVar19);
              func_0x00010befa120(puVar3);
            }
          }
          lVar21 = lVar21 + 1;
        } while (lVar9 != lVar21);
        lVar9 = lVar18;
        func_0x00010bf52a60();
      } while (lVar9 != 0);
    }
    _objc_release(lVar18);
    puVar8 = puVar4;
    func_0x00010bf529e0();
    if (puVar8 == (undefined *)0x0) {
      (**(code **)(param_4 + 0x10))
                (param_4,PTR____NSArray0__struct_11034ab48,PTR____NSArray0__struct_11034ab48,
                 PTR____NSDictionary0__struct_11034ab58,PTR____NSDictionary0__struct_11034ab58,0);
    }
    else {
      puVar8 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_opt_new();
      puVar20 = puVar3;
      func_0x00010bf529e0();
      if (puVar20 != (undefined *)0x0) {
        puVar20 = (undefined *)0x0;
        do {
          puVar13 = puVar3;
          func_0x00010c0dfd40(puVar3);
          _objc_retainAutoreleasedReturnValue();
          lVar21 = *(long *)(param_1 + 0x18);
          func_0x00010c0fee00();
          _objc_retainAutoreleasedReturnValue();
          lVar18 = lVar21;
          func_0x00010c0c4c40();
          _objc_retainAutoreleasedReturnValue();
          lVar9 = lVar18;
          func_0x00010c12fae0();
          _objc_retainAutoreleasedReturnValue();
          lVar22 = lVar9;
          func_0x000107e5a9f0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar9);
          _objc_release(lVar18);
          _objc_release(lVar21);
          if (lVar22 != 0) {
            puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar8);
            _objc_release(puVar14);
          }
          _objc_release(lVar22);
          _objc_release(puVar13);
          puVar13 = puVar3;
          func_0x00010bf529e0();
          puVar20 = puVar20 + 1;
        } while (puVar20 < puVar13);
      }
      puVar13 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      puVar14 = puVar13;
      _dispatch_group_create();
      puVar20 = (undefined *)0x0;
      puStack_1a8 = &uStack_1b0;
      uStack_1b0 = 0;
      uStack_1a0 = 0x3032000000;
      pcStack_198 = FUN_107e5b64c;
      uStack_190 = 0x107e5b65c;
      uStack_188 = 0;
      while( true ) {
        puVar15 = puVar4;
        func_0x00010bf529e0();
        if (puVar15 <= puVar20) break;
        _dispatch_group_enter(puVar14);
        puVar15 = PTR_PTR_1126b1060;
        _objc_alloc(PTR_PTR_1126b1060);
        func_0x00010c032f60();
        uVar23 = *(undefined8 *)(param_1 + 8);
        puVar16 = puVar4;
        func_0x00010c0dfd40(puVar4);
        _objc_retainAutoreleasedReturnValue();
        puVar17 = puVar16;
        func_0x00010c0c5180();
        _objc_retainAutoreleasedReturnValue();
        puStack_248 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_240 = 0xc2000000;
        pcStack_238 = FUN_107e5ec44;
        puStack_230 = &UNK_110a0fad0;
        puStack_210 = &uStack_1b0;
        lStack_228 = param_1;
        iStack_208 = param_3;
        _objc_retain(puVar13);
        puStack_220 = puVar13;
        _objc_retain(puVar14);
        puStack_218 = puVar14;
        func_0x00010c13eb40(uVar23);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar17);
        _objc_release(puVar16);
        _objc_release(puStack_218);
        _objc_release(puStack_220);
        _objc_release(puVar15);
        puVar20 = puVar20 + 1;
      }
      uVar23 = 0x19;
      func_0x0001000819a8(0x19,0);
      _objc_retainAutoreleasedReturnValue();
      puStack_298 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_290 = 0xc2000000;
      pcStack_288 = FUN_107e5edac;
      puStack_280 = &UNK_11097cd70;
      _objc_retain(param_4);
      puStack_278 = puVar13;
      lStack_258 = param_4;
      _objc_retain(puVar4);
      puStack_270 = puVar4;
      puStack_268 = puVar8;
      _objc_retain(puVar5);
      puStack_250 = &uStack_1b0;
      puStack_260 = puVar5;
      _objc_retain(puVar8);
      _objc_retain(puVar13);
      func_0x000100bc0718(puVar14,uVar23,&puStack_298);
      _objc_release(uVar23);
      _objc_release(puStack_260);
      _objc_release(puStack_268);
      _objc_release(puStack_270);
      _objc_release(puStack_278);
      _objc_release(lStack_258);
      __Block_object_dispose(&uStack_1b0,8);
      _objc_release(uStack_188);
      _objc_release(puVar8);
      _objc_release(puVar13);
      _objc_release(puVar14);
    }
    _objc_release(uVar7);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(lVar2);
    _objc_release(uVar1);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  lVar9 = 8;
  __Block_object_dispose(&uStack_1b0);
  __Unwind_Resume();
  lVar22 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(lVar9);
  lVar2 = lVar9;
  func_0x00010bfc4120();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar2;
  func_0x00010bfcaaa0();
  puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (lVar18 == 0) {
    uVar23 = *(undefined8 *)(param_4 + 0x28);
    lVar18 = lVar9;
    func_0x00010bfc4120(lVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar23);
  }
  else {
    lVar18 = *(long *)(param_4 + 0x20);
    _objc_opt_class(lVar18);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    lVar21 = *(long *)(*(long *)(param_4 + 0x38) + 8);
    uVar23 = *(undefined8 *)(lVar21 + 0x28);
    *(undefined **)(lVar21 + 0x28) = puVar3;
    _objc_release(uVar23);
    _objc_release(puVar4);
  }
  _objc_release(lVar18);
  _dispatch_group_leave(*(undefined8 *)(param_4 + 0x30));
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar22) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x000107e5edc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar9 + 0x40) + 0x10))
            (*(long *)(lVar9 + 0x40),*(undefined8 *)(lVar9 + 0x20),*(undefined8 *)(lVar9 + 0x28),
             *(undefined8 *)(lVar9 + 0x30),*(undefined8 *)(lVar9 + 0x38),
             *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x48) + 8) + 0x28));
  return;
}



/* Entry: 107e5ec44; end: 107e5edab;  */

void FUN_107e5ec44(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bfc4120();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfcaaa0();
  puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (lVar2 == 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    lVar2 = param_2;
    func_0x00010bfc4120(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar6);
  }
  else {
    lVar2 = *(long *)(param_1 + 0x20);
    _objc_opt_class(lVar2);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = *(long *)(*(long *)(param_1 + 0x38) + 8);
    uVar6 = *(undefined8 *)(lVar7 + 0x28);
    *(undefined **)(lVar7 + 0x28) = puVar4;
    _objc_release(uVar6);
    _objc_release(puVar3);
  }
  _objc_release(lVar2);
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x30));
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x000107e5edc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_2 + 0x40) + 0x10))
            (*(long *)(param_2 + 0x40),*(undefined8 *)(param_2 + 0x20),
             *(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x30),
             *(undefined8 *)(param_2 + 0x38),
             *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x48) + 8) + 0x28));
  return;
}



/* Entry: 107e5edac; end: 107e5edcb;  */

void FUN_107e5edac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107e5edc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x40) + 0x10))
            (*(long *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x38),
             *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x28));
  return;
}



/* Entry: 107e5edcc; end: 107e5ee3b; -[SCMemoriesTimelineSnapDocParser _keyForMedia:inSnapDoc:] */

void FUN_107e5edcc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bfde980();
  func_0x00010bfde980();
  _objc_release(param_3);
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110ec1598);
  return;
}



/* Entry: 107e5ee3c; end: 107e5f577; -[SCMemoriesTimelineSnapDocParser _retrieveSegmentWithMediaMetadata:baseMediaRenderEffect:overlayImageMetadata:sojuEditsData:genericAssetsMetadata:fullyLoadBaseMedia:isForThumbnail:completion:] */

void FUN_107e5ee3c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
                  undefined8 param_6,long param_7,uint param_8,undefined4 param_9,
                  undefined4 param_10,long param_11)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puStack_2d0;
  undefined8 uStack_2c8;
  code *pcStack_2c0;
  undefined *puStack_2b8;
  long lStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined *puStack_298;
  long lStack_290;
  undefined8 *puStack_288;
  undefined8 *puStack_280;
  undefined8 *puStack_278;
  undefined1 auStack_270 [8];
  undefined *puStack_268;
  undefined8 uStack_260;
  code *pcStack_258;
  undefined *puStack_250;
  undefined *puStack_248;
  long lStack_240;
  undefined *puStack_238;
  undefined *puStack_230;
  undefined1 auStack_228 [8];
  undefined *puStack_220;
  undefined8 uStack_218;
  code *pcStack_210;
  undefined *puStack_208;
  undefined *puStack_200;
  undefined8 *puStack_1f8;
  undefined8 *puStack_1f0;
  undefined1 auStack_1e8 [8];
  undefined8 uStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 uStack_1d0;
  undefined1 uStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  code *pcStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined8 *puStack_198;
  undefined8 *puStack_190;
  undefined8 *puStack_188;
  undefined1 auStack_180 [8];
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined8 *puStack_150;
  undefined8 *puStack_148;
  undefined8 *puStack_140;
  undefined1 auStack_138 [8];
  undefined1 auStack_130 [8];
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined1 uStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_11);
  if (param_3 == 0) {
    (**(code **)(param_11 + 0x10))(param_11,0,0);
  }
  else {
    puVar2 = PTR_PTR_1126b1060;
    _objc_alloc();
    func_0x00010c032f60();
    puVar3 = puVar2;
    _dispatch_group_create();
    puStack_a0 = &uStack_a8;
    uStack_a8 = 0;
    uStack_98 = 0x3032000000;
    pcStack_90 = FUN_107e5b64c;
    uStack_88 = 0x107e5b65c;
    uStack_80 = 0;
    puStack_d0 = &uStack_d8;
    uStack_d8 = 0;
    uStack_c8 = 0x3032000000;
    pcStack_c0 = FUN_107e5b64c;
    uStack_b8 = 0x107e5b65c;
    uStack_b0 = 0;
    puStack_100 = &uStack_108;
    uStack_108 = 0;
    uStack_f8 = 0x3032000000;
    pcStack_f0 = FUN_107e5b64c;
    uStack_e8 = 0x107e5b65c;
    uStack_e0 = 0;
    _dispatch_group_enter();
    puStack_120 = &uStack_128;
    uStack_128 = 0;
    uStack_118 = 0x2020000000;
    uStack_110 = 0;
    _objc_initWeak(auStack_130,param_1);
    lVar4 = param_3;
    func_0x00010bfd7d40();
    if (((param_8 | (uint)lVar4) & 1) == 0) {
      puVar5 = PTR_PTR_1126b25b8;
      _objc_alloc(PTR_PTR_1126b25b8);
      lVar4 = param_1;
      func_0x00010be46760(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c011280(puVar5);
      _objc_release(lVar4);
      puVar1 = PTR_PTR_1126bfc90;
      puVar7 = PTR_PTR_1126b1378;
      uVar6 = *(undefined8 *)(param_1 + 8);
      func_0x00010c0c46a0(puVar5);
      func_0x00010c119380(puVar1);
      func_0x00010c291580(puVar7);
      _objc_retainAutoreleasedReturnValue();
      puStack_178 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_170 = 0xc2000000;
      pcStack_168 = FUN_107e5f578;
      puStack_160 = &UNK_110a0fb30;
      _objc_copyWeak(auStack_138,auStack_130);
      puStack_150 = &uStack_128;
      puStack_148 = &uStack_d8;
      puStack_140 = &uStack_a8;
      _objc_retain(puVar3);
      puStack_158 = puVar3;
      func_0x00010c13eb80(uVar6);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar7);
      _objc_release(puStack_158);
      _objc_destroyWeak(auStack_138);
      _objc_release(puVar5);
    }
    else {
      uVar6 = *(undefined8 *)(param_1 + 8);
      lVar4 = param_3;
      func_0x00010c0c5180(param_3);
      _objc_retainAutoreleasedReturnValue();
      puStack_1c0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_1b8 = 0xc2000000;
      pcStack_1b0 = FUN_107e5f6fc;
      puStack_1a8 = &UNK_110a0fb30;
      _objc_copyWeak(auStack_180,auStack_130);
      puStack_198 = &uStack_128;
      puStack_190 = &uStack_d8;
      puStack_188 = &uStack_a8;
      _objc_retain(puVar3);
      puStack_1a0 = puVar3;
      func_0x00010c13eb40(uVar6);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(lVar4);
      _objc_release(puStack_1a0);
      _objc_destroyWeak(auStack_180);
    }
    if (param_5 != 0) {
      uStack_1e0 = 0;
      uStack_1d0 = 0x2020000000;
      uStack_1c8 = 0;
      puStack_1d8 = &uStack_1e0;
      _dispatch_group_enter(puVar3);
      uVar6 = *(undefined8 *)(param_1 + 8);
      lVar4 = param_5;
      func_0x00010c0c5180(param_5);
      _objc_retainAutoreleasedReturnValue();
      puStack_220 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_218 = 0xc2000000;
      pcStack_210 = FUN_107e5f8a8;
      puStack_208 = &UNK_110a0fb60;
      _objc_copyWeak(auStack_1e8,auStack_130);
      puStack_1f0 = &uStack_108;
      puStack_1f8 = &uStack_1e0;
      _objc_retain(puVar3);
      puStack_200 = puVar3;
      func_0x00010c13eb40(uVar6);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(lVar4);
      _objc_release(puStack_200);
      _objc_destroyWeak(auStack_1e8);
      __Block_object_dispose(&uStack_1e0,8);
    }
    lVar4 = param_7;
    func_0x00010bf529e0();
    if (lVar4 == 0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
      puStack_268 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_260 = 0xc2000000;
      pcStack_258 = FUN_107e5fa10;
      puStack_250 = &UNK_110a0fbc0;
      _objc_retain(puVar3);
      puStack_248 = puVar3;
      lStack_240 = param_1;
      _objc_retain(puVar2);
      puStack_238 = puVar2;
      _objc_copyWeak(auStack_228,auStack_130);
      _objc_retain(puVar7);
      puStack_230 = puVar7;
      func_0x00010bf97ce0(param_7);
      _objc_release(puStack_230);
      _objc_destroyWeak(auStack_228);
      _objc_release(puStack_238);
      _objc_release(puStack_248);
    }
    _objc_initWeak(&uStack_1e0,param_1);
    uVar6 = 0x19;
    func_0x0001000819a8(0x19,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_2d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_2c8 = 0xc2000000;
    pcStack_2c0 = FUN_107e5fd48;
    puStack_2b8 = &UNK_110a0fbf0;
    _objc_copyWeak(auStack_270,&uStack_1e0);
    _objc_retain(param_11);
    lStack_290 = param_11;
    _objc_retain(param_3);
    puStack_288 = &uStack_a8;
    lStack_2b0 = param_3;
    _objc_retain(param_4);
    puStack_280 = &uStack_108;
    uStack_2a8 = param_4;
    _objc_retain(param_6);
    puStack_278 = &uStack_d8;
    uStack_2a0 = param_6;
    puStack_298 = puVar7;
    _objc_retain(puVar7);
    func_0x000100bc0718(puVar3,uVar6,&puStack_2d0);
    _objc_release(uVar6);
    _objc_release(puStack_298);
    _objc_release(uStack_2a0);
    _objc_release(uStack_2a8);
    _objc_release(lStack_2b0);
    _objc_release(lStack_290);
    _objc_release(puVar7);
    _objc_destroyWeak(auStack_270);
    _objc_destroyWeak(&uStack_1e0);
    _objc_destroyWeak(auStack_130);
    __Block_object_dispose(&uStack_128,8);
    __Block_object_dispose(&uStack_108,8);
    _objc_release(uStack_e0);
    __Block_object_dispose(&uStack_d8,8);
    _objc_release(uStack_b0);
    __Block_object_dispose(&uStack_a8,8);
    _objc_release(uStack_80);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_11);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107e5f578; end: 107e5f647;  */

void FUN_107e5f578(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + 0x10);
    _objc_retain(param_2);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar2);
    func_0x00010c0f7fc0(uVar3);
    _objc_release(uVar2);
    _objc_release(param_2);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 107e5f648; end: 107e5f6fb;  */

void FUN_107e5f648(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) & 1) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bfc4120();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(*(long *)(param_1 + 0x38) + 8);
    uVar2 = *(undefined8 *)(lVar3 + 0x28);
    *(undefined8 *)(lVar3 + 0x28) = uVar1;
    _objc_release(uVar2);
    lVar3 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28);
    if ((lVar3 != 0) && (func_0x00010bfcaaa0(), lVar3 == 0)) {
      uVar1 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28);
      func_0x00010b7f5374();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = *(long *)(*(long *)(param_1 + 0x40) + 8);
      uVar2 = *(undefined8 *)(lVar3 + 0x28);
      *(undefined8 *)(lVar3 + 0x28) = uVar1;
      _objc_release(uVar2);
    }
    _dispatch_group_leave(*(undefined8 *)(param_1 + 0x28));
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = 1;
  }
  return;
}



/* Entry: 107e5f6fc; end: 107e5f7cb;  */

void FUN_107e5f6fc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + 0x10);
    _objc_retain(param_2);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar2);
    func_0x00010c0f7fc0(uVar3);
    _objc_release(uVar2);
    _objc_release(param_2);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 107e5f7cc; end: 107e5f8a7;  */

void FUN_107e5f7cc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) & 1) != 0) {
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfc4120();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
  lVar3 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28);
  uVar1 = 0;
  if (lVar3 != 0) {
    func_0x00010bfcaaa0();
    uVar1 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28);
    if (lVar3 == 0) {
      func_0x00010b7f5374();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = *(long *)(*(long *)(param_1 + 0x40) + 8);
      uVar2 = *(undefined8 *)(lVar3 + 0x28);
      *(undefined8 *)(lVar3 + 0x28) = uVar1;
      goto LAB_107e5f87c;
    }
  }
  func_0x00010bfc79a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf987e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  uVar2 = uVar1;
LAB_107e5f87c:
  _objc_release(uVar2);
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x28));
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = 1;
  return;
}



/* Entry: 107e5f8a8; end: 107e5f977;  */

void FUN_107e5f8a8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + 0x10);
    _objc_retain(param_2);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar2);
    func_0x00010c0f7fc0(uVar3);
    _objc_release(uVar2);
    _objc_release(param_2);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 107e5f978; end: 107e5fa0f;  */

void FUN_107e5f978(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) & 1) != 0) {
    return;
  }
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bfc4120();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar1 != 0) && (lVar2 = lVar1, func_0x00010bfcaaa0(), lVar2 == 0)) {
    lVar2 = lVar1;
    func_0x00010b7f5374();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = *(long *)(*(long *)(param_1 + 0x38) + 8);
    uVar3 = *(undefined8 *)(lVar4 + 0x28);
    *(long *)(lVar4 + 0x28) = lVar2;
    _objc_release(uVar3);
  }
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x28));
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107e5fa10; end: 107e5fba7;  */

void FUN_107e5fa10(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _dispatch_group_enter(*(undefined8 *)(param_1 + 0x20));
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x2020000000;
  uStack_68 = 0;
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 8);
  uVar1 = param_3;
  func_0x00010c0c5180(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_88,param_1 + 0x40);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar4);
  _objc_retain(param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  func_0x00010c13eb40(uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(param_2);
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_88);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 107e5fba8; end: 107e5fca7;  */

void FUN_107e5fba8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + 0x10);
    _objc_retain(param_2);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar4);
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar5);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar2);
    func_0x00010c0f7fc0(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(param_2);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 107e5fca8; end: 107e5fd47;  */

void FUN_107e5fca8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x18) & 1) != 0) {
    return;
  }
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bfc4120();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar1 != 0) && (lVar2 = lVar1, func_0x00010bfcaaa0(), lVar2 == 0)) {
    lVar2 = lVar1;
    func_0x00010b7f5374(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x28),param_2,lVar2,
                        *(undefined8 *)(param_1 + 0x30));
    _objc_release(lVar2);
  }
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x38));
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x18) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107e5fd48; end: 107e5fe53;  */

void FUN_107e5fd48(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  lVar1 = param_1 + 0x60;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    (**(code **)(*(long *)(param_1 + 0x40) + 0x10))(*(long *)(param_1 + 0x40),0,0);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0c5180(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108020694();
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126d8010;
    _objc_alloc(PTR_PTR_1126d8010);
    uVar4 = *(ulong *)(param_1 + 0x20);
    func_0x00010c0c4bc0(uVar4);
    func_0x00010c028ee0((double)(uVar4 & 0xffffffff),puVar3);
    (**(code **)(*(long *)(param_1 + 0x40) + 0x10))
              (*(long *)(param_1 + 0x40),puVar3,
               *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x58) + 8) + 0x28));
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107e5fe54; end: 107e5fedb;  */

void FUN_107e5fe54(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  __Block_object_assign(param_1 + 0x40,*(undefined8 *)(param_2 + 0x40),7);
  __Block_object_assign(param_1 + 0x48,*(undefined8 *)(param_2 + 0x48),8);
  __Block_object_assign(param_1 + 0x50,*(undefined8 *)(param_2 + 0x50),8);
  __Block_object_assign(param_1 + 0x58,*(undefined8 *)(param_2 + 0x58),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x60,param_2 + 0x60);
  return;
}



/* Entry: 107e5fedc; end: 107e5fee3; -[SCMemoriesTimelineSnapDocParser snapDoc] */

undefined8 FUN_107e5fedc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107e5fee4; end: 107e5ff1f; -[SCMemoriesTimelineSnapDocParser .cxx_destruct] */

void FUN_107e5fee4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107e5ff20; end: 107e60077; -[SCMemoriesTimelineSegmentMetadata initWithMedia:baseMediaRenderEffect:overlayImage:sojuEdits:genericAssets:segmentDurationMs:mediaType:] */

undefined1 *
FUN_107e5ff20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined4 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_1126fb670;
  uStack_70 = param_2;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
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
    *(undefined8 *)((long)puVar1 + 0x38) = param_1;
    *(undefined4 *)((long)puVar1 + 8) = param_9;
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 107e60078; end: 107e6009b; -[SCMemoriesTimelineSegmentMetadata copyWithZone:] */

undefined8 FUN_107e60078(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107e6009c; end: 107e6015f; -[SCMemoriesTimelineSegmentMetadata hash] */

undefined8 * FUN_107e6009c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined1 *puVar8;
  double dVar9;
  double dVar10;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  long lStack_30;
  long lStack_28;
  
  puVar4 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_58 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_48 = uVar3;
  func_0x00010bfde980();
  uVar7 = ~*(ulong *)(param_1 + 0x38) + *(ulong *)(param_1 + 0x38) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_38 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  lStack_30 = (long)*(int *)(param_1 + 8);
  uStack_40 = uVar2;
  func_0x000100505190(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == (undefined8 *)param_3) {
LAB_107e6026c:
    puVar8 = (undefined1 *)0x1;
  }
  else {
    puVar8 = (undefined1 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_107e60278;
    puVar8 = (undefined1 *)puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if ((((ulong)puVar5 & 1) != 0) && (*(int *)((long)puVar4 + 8) == *(int *)(param_3 + 8))) {
      dVar10 = ABS(*(double *)((long)puVar4 + 0x38) - *(double *)(param_3 + 0x38));
      dVar9 = ABS(*(double *)((long)puVar4 + 0x38) + *(double *)(param_3 + 0x38)) *
              2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar10) && (bVar1 = false, !NAN(dVar10) && !NAN(dVar9))) {
        bVar1 = dVar10 < dVar9;
      }
      if ((((bVar1) &&
           ((lVar6 = *(long *)((long)puVar4 + 0x10), lVar6 == *(long *)(param_3 + 0x10) ||
            (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
          ((lVar6 = *(long *)((long)puVar4 + 0x18), lVar6 == *(long *)(param_3 + 0x18) ||
           (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
         (((lVar6 = *(long *)((long)puVar4 + 0x20), lVar6 == *(long *)(param_3 + 0x20) ||
           (func_0x00010c071ae0(), (int)lVar6 != 0)) &&
          ((lVar6 = *(long *)((long)puVar4 + 0x28), lVar6 == *(long *)(param_3 + 0x28) ||
           (func_0x00010c071ae0(), (int)lVar6 != 0)))))) {
        puVar8 = *(undefined1 **)((long)puVar4 + 0x30);
        if (puVar8 != *(undefined1 **)(param_3 + 0x30)) {
          func_0x00010c071ae0();
          goto LAB_107e60278;
        }
        goto LAB_107e6026c;
      }
    }
    puVar8 = (undefined1 *)0x0;
  }
LAB_107e60278:
  _objc_release(param_3);
  return (undefined8 *)puVar8;
}



/* Entry: 107e60160; end: 107e60293; -[SCMemoriesTimelineSegmentMetadata isEqual:] */

long FUN_107e60160(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107e6026c:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107e60278;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) && (*(int *)(param_1 + 8) == *(int *)(param_3 + 8))) {
      dVar6 = ABS(*(double *)(param_1 + 0x38) - *(double *)(param_3 + 0x38));
      dVar5 = ABS(*(double *)(param_1 + 0x38) + *(double *)(param_3 + 0x38)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if ((((bVar1) &&
           ((lVar4 = *(long *)(param_1 + 0x10), lVar4 == *(long *)(param_3 + 0x10) ||
            (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
          ((lVar4 = *(long *)(param_1 + 0x18), lVar4 == *(long *)(param_3 + 0x18) ||
           (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
         (((lVar4 = *(long *)(param_1 + 0x20), lVar4 == *(long *)(param_3 + 0x20) ||
           (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
          ((lVar4 = *(long *)(param_1 + 0x28), lVar4 == *(long *)(param_3 + 0x28) ||
           (func_0x00010c071ae0(), (int)lVar4 != 0)))))) {
        lVar4 = *(long *)(param_1 + 0x30);
        if (lVar4 != *(long *)(param_3 + 0x30)) {
          func_0x00010c071ae0();
          goto LAB_107e60278;
        }
        goto LAB_107e6026c;
      }
    }
    lVar4 = 0;
  }
LAB_107e60278:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 107e60294; end: 107e6029b; -[SCMemoriesTimelineSegmentMetadata media] */

undefined8 FUN_107e60294(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107e6029c; end: 107e602a3; -[SCMemoriesTimelineSegmentMetadata baseMediaRenderEffect] */

undefined8 FUN_107e6029c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107e602a4; end: 107e602ab; -[SCMemoriesTimelineSegmentMetadata overlayImage] */

undefined8 FUN_107e602a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107e602ac; end: 107e602b3; -[SCMemoriesTimelineSegmentMetadata sojuEdits] */

undefined8 FUN_107e602ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107e602b4; end: 107e602bb; -[SCMemoriesTimelineSegmentMetadata genericAssets] */

undefined8 FUN_107e602b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107e602bc; end: 107e602c3; -[SCMemoriesTimelineSegmentMetadata segmentDurationMs] */

undefined8 FUN_107e602bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 107e602c4; end: 107e602cb; -[SCMemoriesTimelineSegmentMetadata mediaType] */

undefined4 FUN_107e602c4(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 107e602cc; end: 107e6031f; -[SCMemoriesTimelineSegmentMetadata .cxx_destruct] */

void FUN_107e602cc(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107e60320; end: 107e6059f;  */

void FUN_107e60320(ulong param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010b5fa088();
  func_0x00010b5fa4c8();
  if ((uVar1 & 1) == 0) {
    func_0x00010b5fa088();
  }
  func_0x00010c0ed100();
  func_0x00010bf8b160(param_1);
  if ((param_3 & 1) == 0) {
    uVar1 = param_1;
    func_0x00010c23f420();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x000100504554();
    _objc_release(uVar1);
  }
  else {
    uVar4 = 0;
  }
  uVar1 = param_1;
  func_0x00010b5f7a24();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c269d40(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar3 = param_5;
  func_0x00010c11de00(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_retain(param_6);
  _objc_retain(uVar1);
  _objc_retain(uVar4);
  _objc_retain(param_2);
  _objc_retain(param_1);
  func_0x00010c135a80(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_6);
  _objc_release(uVar1);
  _objc_release(uVar4);
  _objc_release(param_2);
  _objc_release(param_1);
  _objc_release(param_6);
  _objc_release(uVar1);
  _objc_release(uVar4);
  _objc_release(param_2);
  _objc_release(param_1);
  return;
}



/* Entry: 107e605a0; end: 107e60673;  */

void FUN_107e605a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126d8018;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010bf0b760();
  if ((uint)uVar2 < 0x16) {
    func_0x00010b697928();
  }
  func_0x00010b6979dc();
  puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
  uVar2 = param_2;
  func_0x00010bf89180(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bdc3460(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff45c0(puVar1);
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107e60674; end: 107e608bb;  */

void FUN_107e60674(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined8 uStack_70;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c241220(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x000108017660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  lVar10 = *(long *)(param_1 + 0x20);
  func_0x00010c23ff80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  uStack_70 = PTR__OBJC_CLASS___NSURL_1126ae598;
  if (lVar10 == 0) {
    if ((*(byte *)(param_1 + 0x58) & 1) == 0) {
      uVar8 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c0ef7c0(uVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc3460();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar8);
    }
    else {
      uStack_70 = (undefined *)0x0;
    }
    puVar12 = PTR__OBJC_CLASS___NSURL_1126ae598;
    uVar11 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0c4ae0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc3460(puVar12);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined4 *)(param_1 + 0x50);
    uVar2 = *(undefined4 *)(param_1 + 0x54);
    iVar6 = (int)*(undefined8 *)(param_1 + 0x20);
    func_0x00010c2a5040();
    iVar7 = (int)*(undefined8 *)(param_1 + 0x20);
    func_0x00010bfe0640();
    uVar15 = *(undefined8 *)(param_1 + 0x48);
    uVar8 = *(undefined8 *)(param_1 + 0x30);
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    uVar5 = (undefined1)*(undefined8 *)(param_1 + 0x20);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bfed740();
    uVar13 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c5b00();
    puVar14 = puVar12;
    func_0x000107ff5e94(puVar12,uVar1,uVar2,(long)iVar6,(long)iVar7,uVar15,uStack_70,uVar4,uVar8,
                        param_2,param_3,uVar3,0,uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar13);
    _objc_release(puVar12);
    _objc_release(uVar11);
  }
  else {
    uStack_70 = *(undefined **)(param_1 + 0x20);
    func_0x00010c23ff80(uStack_70);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = uStack_70;
    func_0x000108020568();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uStack_70);
  lVar10 = *(long *)(param_1 + 0x40);
  if (lVar10 != 0) {
    (**(code **)(lVar10 + 0x10))(lVar10,uVar9,puVar14);
  }
  _objc_release(puVar14);
  _objc_release(uVar9);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 107e608bc; end: 107e6095b;  */

bool FUN_107e608bc(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain();
  lVar2 = param_1;
  func_0x00010c0c4ae0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    bVar1 = false;
  }
  else {
    lVar3 = param_1;
    func_0x00010c26da80();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      bVar1 = false;
    }
    else {
      lVar4 = param_1;
      func_0x00010c0ef7c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = lVar4 != 0;
      _objc_release();
    }
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 107e6095c; end: 107e60ab3;  */

void FUN_107e6095c(undefined8 param_1,undefined *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126bc7b8;
  if (param_2 == (undefined *)0x0) {
    uVar1 = param_3;
    func_0x00010c269d40(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa7160();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
  else {
    _objc_retain(param_2);
    puVar2 = param_2;
  }
  puVar3 = puVar2;
  func_0x00010c0ef4a0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 != (undefined *)0x0) {
    puVar4 = puVar3;
    func_0x00010c271c60(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010c082de0();
    if ((int)puVar5 != 0) {
      puVar5 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
      func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      goto LAB_107e60a6c;
    }
    _objc_release(puVar4);
  }
  puVar5 = (undefined *)0x0;
LAB_107e60a6c:
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 107e60ab4; end: 107e60b3f;  */

/* WARNING: Removing unreachable block (ram,0x000107e603f0) */

void FUN_107e60ab4(long param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (param_2 == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain();
    _objc_retain(0);
    _objc_retain(uVar3);
    _objc_retain(uVar4);
    _objc_retain(uVar5);
    uVar1 = param_3;
    func_0x00010b5fa088();
    func_0x00010b5fa4c8();
    if ((uVar1 & 1) == 0) {
      func_0x00010b5fa088();
    }
    func_0x00010c0ed100();
    func_0x00010bf8b160(param_3);
    uVar1 = param_3;
    func_0x00010b5f7a24();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    uVar5 = uVar4;
    func_0x00010c11de00(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_retain(uVar3);
    _objc_retain(uVar1);
    _objc_retain(0);
    _objc_retain(0);
    _objc_retain(param_3);
    func_0x00010c135a80(uVar2);
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_release(uVar3);
    _objc_release(uVar1);
    _objc_release(0);
    _objc_release(0);
    _objc_release(param_3);
    _objc_release(uVar3);
    _objc_release(uVar1);
    _objc_release(0);
    _objc_release(0);
    _objc_release(param_3);
    return;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar5);
  func_0x00010c0f7fc0(uVar4);
  _objc_release(uVar5);
  return;
}



/* Entry: 107e60b40; end: 107e60b5b;  */

void FUN_107e60b40(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000107e60b54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,0,0);
    return;
  }
  return;
}



/* Entry: 107e60b5c; end: 107e610fb;  */

void FUN_107e60b5c(double param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined4 uVar12;
  long lVar13;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c0c3fe0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2420c0();
  uVar12 = 2;
  if ((int)param_1 != 0) {
    uVar12 = 3;
  }
  _objc_release(uVar1);
  func_0x00010bf8b340(param_2);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  lVar13 = (long)param_1;
  func_0x00010bf59920(param_2);
  func_0x00010bf655e0(param_1 / 1000.0);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x000108017660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar5 = PTR__OBJC_CLASS___NSURL_1126ae598;
  uVar1 = param_2;
  func_0x00010c0c3fe0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c28f340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3460(puVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_2;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c086560();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_2;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c085300();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_2;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  puVar11 = puVar5;
  func_0x000107ff5e94(puVar5,uVar12,0,0x2d0,0x500,lVar13,0,0,0,uVar7,uVar9,puVar2,0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(uVar1);
  (**(code **)(param_3 + 0x10))(param_3,uVar3,puVar11);
  _objc_release(param_3);
  _objc_release(puVar11);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 107e610fc; end: 107e611ff;  */

void FUN_107e610fc(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_2 == 0) {
    uVar1 = param_3;
    FUN_107e6095c(param_3,*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48));
    _objc_retainAutoreleasedReturnValue();
    FUN_107e60320(param_3,uVar1,0,*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                  *(undefined8 *)(param_1 + 0x50));
  }
  else {
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_107e60320(*(undefined8 *)(param_1 + 0x28),*(long *)(param_1 + 0x20),0,
                    *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                    *(undefined8 *)(param_1 + 0x50));
      goto LAB_107e611dc;
    }
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    uVar1 = *(undefined8 *)(param_1 + 0x50);
    _objc_retain(uVar1);
    func_0x00010c0f7fc0(uVar2);
  }
  _objc_release(uVar1);
LAB_107e611dc:
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 107e61200; end: 107e6121b;  */

void FUN_107e61200(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000107e61214. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,0,0);
    return;
  }
  return;
}



/* Entry: 107e6121c; end: 107e613df;  */

void FUN_107e6121c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 *puVar1;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar1 = auStack_68;
  _objc_initWeak(puVar1,param_4);
  func_0x000108017f48();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_2);
  func_0x00010bf89260(param_4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_2);
  _objc_release(param_5);
  _objc_release(param_6);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  return;
}



/* Entry: 107e613e0; end: 107e6149f;  */

void FUN_107e613e0(long param_1,int param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf2f220();
  _objc_release(param_3);
  _objc_release(lVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  if (param_2 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43ca0(uVar3);
  }
  else {
    puVar2 = *(undefined **)(param_1 + 0x28);
    func_0x00010bf8cb40(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43d60(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 107e614a0; end: 107e616d7;  */

void FUN_107e614a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12)

{
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_2);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_11);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_12);
  _objc_retain(param_1);
  func_0x00010c0f7fc0(param_8);
  _objc_release(param_2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_11);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_8);
  _objc_release(param_12);
  _objc_release(param_1);
  _objc_release(param_2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_11);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_8);
  _objc_release(param_12);
  _objc_release(param_1);
  return;
}



/* Entry: 107e616d8; end: 107e61c67;  */

void FUN_107e616d8(long param_1,undefined **param_2)

{
  long lVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  code *UNRECOVERED_JUMPTABLE;
  long lVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined8 uVar15;
  ulong uVar16;
  long lVar17;
  undefined8 uVar18;
  long lStack_248;
  undefined *puStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined *puStack_228;
  undefined **ppuStack_220;
  undefined *puStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined *puStack_200;
  undefined **ppuStack_1f8;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  code *pcStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  ulong uStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 uStack_188;
  undefined8 uStack_180;
  long lStack_178;
  long *plStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined **ppuStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    puVar7 = *(undefined **)(param_1 + 0x68);
    UNRECOVERED_JUMPTABLE = *(code **)(puVar7 + 0x10);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x000107e61c60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(puVar7,PTR____NSArray0__struct_11034ab48);
      return;
    }
  }
  else {
    puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lStack_178 = 0;
    uStack_180 = 0;
    uStack_168 = 0;
    plStack_170 = (long *)0x0;
    uStack_158 = 0;
    uStack_160 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    lVar1 = *(long *)(param_1 + 0x20);
    _objc_retain(lVar1);
    UNRECOVERED_JUMPTABLE = (code *)&uStack_180;
    lStack_248 = lVar1;
    func_0x00010bf52a60();
    if (lStack_248 != 0) {
      lVar9 = *plStack_170;
      puVar8 = PTR___NSConcreteStackBlock_11034bd00;
      do {
        lVar17 = 0;
        do {
          if (*plStack_170 != lVar9) {
            _objc_enumerationMutation(lVar1);
          }
          uVar16 = *(ulong *)(lStack_178 + lVar17 * 8);
          uStack_1e8 = 0xc2000000;
          pcStack_1e0 = FUN_107e61c68;
          puStack_1d8 = &UNK_110a0fd70;
          puStack_1f0 = puVar8;
          _objc_retain(puVar14);
          puStack_1d0 = puVar14;
          uStack_1c8 = uVar16;
          _objc_retain(puVar7);
          uStack_188 = *(undefined1 *)(param_1 + 0x70);
          uVar11 = *(undefined8 *)(param_1 + 0x28);
          puStack_1c0 = puVar7;
          _objc_retain(uVar11);
          uVar12 = *(undefined8 *)(param_1 + 0x30);
          uStack_1b8 = uVar11;
          _objc_retain(uVar12);
          uVar11 = *(undefined8 *)(param_1 + 0x38);
          uStack_1b0 = uVar12;
          _objc_retain(uVar11);
          uVar12 = *(undefined8 *)(param_1 + 0x40);
          uStack_1a8 = uVar11;
          _objc_retain(uVar12);
          uVar11 = *(undefined8 *)(param_1 + 0x20);
          uStack_1a0 = uVar12;
          _objc_retain(uVar11);
          uVar12 = *(undefined8 *)(param_1 + 0x68);
          uStack_198 = uVar11;
          _objc_retain(uVar12);
          ppuVar2 = &puStack_1f0;
          uStack_190 = uVar12;
          _objc_retainBlock();
          if (*(char *)(param_1 + 0x71) == '\x01') {
            uVar18 = *(undefined8 *)(param_1 + 0x28);
            uVar11 = *(undefined8 *)(param_1 + 0x50);
            uVar12 = *(undefined8 *)(param_1 + 0x58);
            uStack_210 = 0xc2000000;
            uStack_208 = 0x107e61f94;
            puStack_200 = &UNK_110a0fda0;
            puStack_218 = puVar8;
            ppuStack_1f8 = ppuVar2;
            _objc_retain(ppuVar2);
            _objc_retain(uVar16);
            _objc_retain(uVar11);
            _objc_retain(uVar18);
            _objc_retain(uVar18);
            _objc_retain(uVar12);
            _objc_retain(&puStack_218);
            uVar13 = uVar12;
            func_0x00010c0c84c0();
            _objc_retainAutoreleasedReturnValue();
            uVar15 = uVar13;
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            uVar3 = uVar15;
            func_0x00010c13a8c0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar15);
            _objc_release(uVar13);
            uVar4 = uVar16;
            FUN_107e608bc();
            if (((uVar4 & 1) == 0) && (uVar13 = uVar3, func_0x00010c06cde0(), (int)uVar13 == 0)) {
              puVar8 = PTR_PTR_1126bf788;
              _objc_alloc();
              func_0x00010c017ba0();
              uVar13 = uVar12;
              func_0x00010c2416a0();
              _objc_retainAutoreleasedReturnValue();
              uVar15 = uVar13;
              func_0x00010c269d40();
              _objc_retainAutoreleasedReturnValue();
              uVar5 = uVar18;
              func_0x00010c11de00();
              _objc_retainAutoreleasedReturnValue();
              puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
              uStack_130 = 0xc2000000;
              pcStack_128 = FUN_107e60ab4;
              puStack_120 = &UNK_110a0fc90;
              _objc_retain(uVar18);
              uStack_118 = uVar18;
              _objc_retain(&puStack_218);
              ppuStack_108 = &puStack_218;
              _objc_retain(uVar11);
              uStack_110 = uVar11;
              func_0x00010bfaa340(uVar15);
              _objc_release(uVar5);
              _objc_release(uVar15);
              _objc_release(uVar13);
              _objc_release(uStack_110);
              _objc_release(ppuStack_108);
              _objc_release(uStack_118);
              _objc_release(puVar8);
            }
            else {
              param_2 = (undefined **)0x0;
              FUN_107e60320(uVar16,0,1,uVar11,uVar18,&puStack_218);
            }
            _objc_release(uVar3);
            _objc_release(&puStack_218);
            _objc_release(uVar12);
            _objc_release(uVar18);
            _objc_release(uVar18);
            _objc_release(uVar11);
            _objc_release(uVar16);
            ppuVar6 = ppuStack_1f8;
            ppuVar10 = ppuVar2;
          }
          else {
            ppuVar10 = *(undefined ***)(param_1 + 0x60);
            uVar4 = uVar16;
            func_0x00010c241220(uVar16);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar4);
            uVar11 = *(undefined8 *)(param_1 + 0x48);
            uVar12 = *(undefined8 *)(param_1 + 0x50);
            uVar13 = *(undefined8 *)(param_1 + 0x28);
            uVar15 = *(undefined8 *)(param_1 + 0x58);
            uStack_238 = 0xc2000000;
            uStack_230 = 0x107e61fa0;
            puStack_228 = &UNK_110a0fda0;
            puStack_240 = puVar8;
            ppuStack_220 = ppuVar2;
            _objc_retain(ppuVar2);
            param_2 = ppuVar10;
            func_0x000107e60dbc(uVar16,ppuVar10,uVar11,uVar12,uVar13,uVar13,uVar15,&puStack_240);
            _objc_release(ppuStack_220);
            ppuVar6 = ppuVar2;
          }
          _objc_release(ppuVar6);
          _objc_release(ppuVar10);
          _objc_release(uStack_190);
          _objc_release(uStack_198);
          _objc_release(uStack_1a0);
          _objc_release(uStack_1a8);
          _objc_release(uStack_1b0);
          _objc_release(uStack_1b8);
          _objc_release(puStack_1c0);
          _objc_release(puStack_1d0);
          puVar8 = PTR___NSConcreteStackBlock_11034bd00;
          lVar17 = lVar17 + 1;
        } while (lStack_248 != lVar17);
        UNRECOVERED_JUMPTABLE = (code *)&uStack_180;
        lStack_248 = lVar1;
        func_0x00010bf52a60();
      } while (lStack_248 != 0);
    }
    _objc_release(lVar1);
    _objc_release(puVar14);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
      return;
    }
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  _objc_retain(UNRECOVERED_JUMPTABLE);
  func_0x00010befa120(*(undefined8 *)(puVar7 + 0x20));
  puVar14 = PTR_PTR_1126ae558;
  if ((param_2 == (undefined **)0x0) || (UNRECOVERED_JUMPTABLE == (code *)0x0)) {
    puVar8 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe9c80(puVar14);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    func_0x00010befa120(*(undefined8 *)(puVar7 + 0x30));
  }
  else {
    if (puVar7[0x68] == '\x01') {
      puVar8 = PTR_PTR_1126ae560;
      _objc_opt_new(PTR_PTR_1126ae560);
      uVar11 = *(undefined8 *)(puVar7 + 0x30);
      puVar14 = puVar8;
      func_0x00010bfbc3e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(uVar11);
      _objc_release(puVar14);
      FUN_107e6121c(param_2,UNRECOVERED_JUMPTABLE,*(undefined8 *)(puVar7 + 0x38),
                    *(undefined8 *)(puVar7 + 0x40),*(undefined8 *)(puVar7 + 0x48),puVar8,
                    *(undefined8 *)(puVar7 + 0x50));
    }
    else {
      uVar11 = *(undefined8 *)(puVar7 + 0x30);
      puVar8 = *(undefined **)(puVar7 + 0x48);
      func_0x00010bf8cb40(puVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfe9ca0(puVar14);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(uVar11);
      _objc_release(puVar14);
    }
    _objc_release(puVar8);
    lVar1 = *(long *)(puVar7 + 0x30);
    func_0x00010bf529e0();
    lVar9 = *(long *)(puVar7 + 0x58);
    func_0x00010bf529e0();
    if (lVar1 != lVar9) goto LAB_107e61e9c;
    puVar8 = PTR_PTR_1126ae558;
    func_0x00010beffb40(PTR_PTR_1126ae558);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = *(undefined **)(puVar7 + 0x60);
    _objc_retain(puVar14);
    uVar11 = *(undefined8 *)(puVar7 + 0x58);
    _objc_retain(uVar11);
    uVar12 = *(undefined8 *)(puVar7 + 0x20);
    _objc_retain(uVar12);
    func_0x00010c297260(puVar8);
    _objc_release(puVar8);
    _objc_release(uVar12);
    _objc_release(uVar11);
  }
  _objc_release(puVar14);
LAB_107e61e9c:
  _objc_release(UNRECOVERED_JUMPTABLE);
  _objc_release(param_2);
  return;
}



/* Entry: 107e61c68; end: 107e61f8b;  */

void FUN_107e61c68(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x20));
  puVar5 = PTR_PTR_1126ae558;
  if ((param_2 == 0) || (param_3 == 0)) {
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe9c80(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x30));
  }
  else {
    if (*(char *)(param_1 + 0x68) == '\x01') {
      puVar1 = PTR_PTR_1126ae560;
      _objc_opt_new(PTR_PTR_1126ae560);
      uVar4 = *(undefined8 *)(param_1 + 0x30);
      puVar5 = puVar1;
      func_0x00010bfbc3e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(uVar4);
      _objc_release(puVar5);
      FUN_107e6121c(param_2,param_3,*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                    *(undefined8 *)(param_1 + 0x48),puVar1,*(undefined8 *)(param_1 + 0x50));
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + 0x30);
      puVar1 = *(undefined **)(param_1 + 0x48);
      func_0x00010bf8cb40(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfe9ca0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(uVar4);
      _objc_release(puVar5);
    }
    _objc_release(puVar1);
    lVar2 = *(long *)(param_1 + 0x30);
    func_0x00010bf529e0();
    lVar3 = *(long *)(param_1 + 0x58);
    func_0x00010bf529e0();
    if (lVar2 != lVar3) goto LAB_107e61e9c;
    puVar1 = PTR_PTR_1126ae558;
    func_0x00010beffb40(PTR_PTR_1126ae558);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = *(undefined **)(param_1 + 0x60);
    _objc_retain(puVar5);
    uVar4 = *(undefined8 *)(param_1 + 0x58);
    _objc_retain(uVar4);
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar6);
    func_0x00010c297260(puVar1);
    _objc_release(puVar1);
    _objc_release(uVar6);
    _objc_release(uVar4);
  }
  _objc_release(puVar5);
LAB_107e61e9c:
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 107e61f8c; end: 107e61fab;  */

void FUN_107e61f8c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c241230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_snapId_11266deb0);
  return;
}



/* Entry: 107e61fac; end: 107e6277b;  */

undefined8 * FUN_107e61fac(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 *unaff_x20;
  undefined8 *puVar12;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  long lVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  long lVar16;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  long lVar17;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d0;
  long lStack_4c8;
  long *plStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  long lStack_488;
  long *plStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  long lStack_350;
  undefined8 *puStack_340;
  undefined8 *puStack_338;
  undefined8 *puStack_330;
  undefined8 *puStack_328;
  undefined8 *puStack_320;
  undefined8 *puStack_318;
  undefined8 *puStack_310;
  undefined8 *puStack_308;
  undefined8 *puStack_300;
  undefined8 *puStack_2f8;
  undefined1 *puStack_2f0;
  undefined8 uStack_2e8;
  undefined8 *puStack_2d8;
  undefined8 *puStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  long lStack_2b8;
  undefined8 *puStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  long lStack_278;
  undefined8 *puStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  long lStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar14 = param_1;
  func_0x00010c0c62a0();
  if (puVar14 == (undefined8 *)0x0) {
    puVar14 = (undefined8 *)0x0;
  }
  else {
    unaff_x20 = &uStack_240;
    puVar14 = param_1;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = puVar14;
    func_0x00010c0c4c40();
    _objc_retainAutoreleasedReturnValue();
    unaff_x25 = unaff_x22;
    func_0x00010c08c260();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(unaff_x22);
    _objc_release(puVar14);
    unaff_x21 = unaff_x25;
    func_0x00010c2791c0();
    _objc_retainAutoreleasedReturnValue();
    lStack_238 = 0;
    uStack_240 = 0;
    uStack_228 = 0;
    plStack_230 = (long *)0x0;
    uStack_218 = 0;
    uStack_220 = 0;
    uStack_208 = 0;
    uStack_210 = 0;
    puVar14 = unaff_x21;
    func_0x00010bf52a60();
    if (puVar14 == (undefined8 *)0x0) {
LAB_107e62368:
      puVar14 = (undefined8 *)0x0;
    }
    else {
      unaff_x20 = (undefined8 *)0x0;
      lVar13 = *plStack_230;
      do {
        unaff_x24 = (undefined8 *)0x0;
        do {
          if (*plStack_230 != lVar13) {
            _objc_enumerationMutation(unaff_x21);
          }
          uVar1 = (uint)*(undefined8 *)(lStack_238 + (long)unaff_x24 * 8);
          func_0x00010c074780();
          unaff_x20 = (undefined8 *)((long)unaff_x20 + (ulong)(uVar1 ^ 1));
          unaff_x24 = (undefined8 *)((long)unaff_x24 + 1);
        } while (puVar14 != unaff_x24);
        puVar14 = unaff_x21;
        func_0x00010bf52a60();
      } while (puVar14 != (undefined8 *)0x0);
      unaff_x22 = (undefined8 *)0x0;
      if (unaff_x20 != (undefined8 *)0x1) goto LAB_107e62368;
      uStack_258 = 0;
      uStack_260 = 0;
      uStack_248 = 0;
      uStack_250 = 0;
      lStack_278 = 0;
      uStack_280 = 0;
      uStack_268 = 0;
      puStack_270 = (undefined8 *)0x0;
      puVar14 = param_1;
      func_0x00010c0c6280();
      _objc_retainAutoreleasedReturnValue();
      puStack_2d0 = puVar14;
      func_0x00010bf52a60();
      unaff_x22 = (undefined8 *)0x0;
      if (puVar14 != (undefined8 *)0x0) {
        unaff_x20 = (undefined8 *)*puStack_270;
        do {
          unaff_x22 = (undefined8 *)0x0;
          do {
            if ((undefined8 *)*puStack_270 != unaff_x20) {
              _objc_enumerationMutation(puStack_2d0);
            }
            unaff_x24 = *(undefined8 **)(lStack_278 + (long)unaff_x22 * 8);
            puVar2 = unaff_x24;
            func_0x00010c0c6c20();
            if ((((int)puVar2 == 3) || (puVar2 = unaff_x24, func_0x00010c0c6c20(), (int)puVar2 == 5)
                ) || (puVar2 = unaff_x24, func_0x00010c0c6c20(), (int)puVar2 == 6)) {
              puVar14 = (undefined8 *)0x0;
              goto LAB_107e62390;
            }
            unaff_x22 = (undefined8 *)((long)unaff_x22 + 1);
          } while (puVar14 != unaff_x22);
          puVar14 = puStack_2d0;
          func_0x00010bf52a60();
        } while (puVar14 != (undefined8 *)0x0);
      }
      _objc_release(puStack_2d0);
      uStack_298 = 0;
      uStack_2a0 = 0;
      uStack_288 = 0;
      uStack_290 = 0;
      lStack_2b8 = 0;
      uStack_2c0 = 0;
      uStack_2a8 = 0;
      puStack_2b0 = (undefined8 *)0x0;
      puVar14 = param_1;
      func_0x00010c0fee00();
      _objc_retainAutoreleasedReturnValue();
      unaff_x20 = puVar14;
      func_0x00010c0ff660();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar14);
      puVar14 = unaff_x20;
      puStack_2d0 = unaff_x20;
      func_0x00010bf52a60();
      if (puVar14 == (undefined8 *)0x0) {
        puVar14 = (undefined8 *)0x1;
      }
      else {
        unaff_x20 = (undefined8 *)*puStack_2b0;
        puStack_2d8 = unaff_x25;
        do {
          unaff_x22 = (undefined8 *)0x0;
          do {
            if ((undefined8 *)*puStack_2b0 != unaff_x20) {
              _objc_enumerationMutation(puStack_2d0);
            }
            unaff_x24 = *(undefined8 **)(lStack_2b8 + (long)unaff_x22 * 8);
            puVar2 = unaff_x24;
            func_0x00010bf5cc00();
            _objc_retainAutoreleasedReturnValue();
            unaff_x26 = puVar2;
            func_0x00010c0cc0c0();
            _objc_retainAutoreleasedReturnValue();
            unaff_x27 = unaff_x26;
            func_0x00010c08eee0();
            _objc_retainAutoreleasedReturnValue();
            unaff_x28 = unaff_x27;
            func_0x00010c08fa60();
            _objc_release(unaff_x27);
            _objc_release(unaff_x26);
            _objc_release(puVar2);
            puVar3 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
            if (unaff_x28 != (undefined8 *)0x0) {
              func_0x00010bf5cc00();
              _objc_retainAutoreleasedReturnValue();
              puVar2 = unaff_x24;
              func_0x00010c0cc0c0();
              _objc_retainAutoreleasedReturnValue();
              unaff_x27 = puVar2;
              func_0x00010c08eee0();
              _objc_retainAutoreleasedReturnValue();
              uStack_2c8 = 0;
              func_0x00010bdc1900(puVar3);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(unaff_x27);
              _objc_release(puVar2);
              _objc_release(unaff_x24);
              unaff_x24 = (undefined8 *)PTR_PTR_1126bcdd8;
              _objc_alloc();
              func_0x00010c0206e0();
              unaff_x26 = (undefined8 *)PTR_PTR_1126bfb98;
              func_0x00010bf4b580();
              _objc_release(unaff_x24);
              _objc_release(puVar3);
              if (((ulong)unaff_x26 & 1) != 0) {
                puVar14 = (undefined8 *)0x0;
                unaff_x25 = puStack_2d8;
                goto LAB_107e62390;
              }
            }
            unaff_x22 = (undefined8 *)((long)unaff_x22 + 1);
          } while (puVar14 != unaff_x22);
          puVar14 = puStack_2d0;
          func_0x00010bf52a60();
        } while (puVar14 != (undefined8 *)0x0);
        puVar14 = (undefined8 *)0x1;
        unaff_x25 = puStack_2d8;
      }
LAB_107e62390:
      _objc_release(puStack_2d0);
    }
    _objc_release(unaff_x21);
    _objc_release(unaff_x25);
  }
  puVar2 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return puVar14;
  }
  ___stack_chk_fail();
  uStack_2e8 = 0x107e623f0;
  lStack_350 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_340 = unaff_x28;
  puStack_338 = unaff_x27;
  puStack_330 = unaff_x26;
  puStack_328 = unaff_x25;
  puStack_320 = unaff_x24;
  puStack_318 = puVar14;
  puStack_310 = unaff_x22;
  puStack_308 = unaff_x21;
  puStack_300 = unaff_x20;
  puStack_2f8 = param_1;
  puStack_2f0 = &stack0xfffffffffffffff0;
  _objc_retain();
  puVar14 = puVar2;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar14;
  func_0x00010c0c4c40();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c08c260();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar14);
  uStack_468 = 0;
  uStack_470 = 0;
  uStack_458 = 0;
  uStack_460 = 0;
  lStack_488 = 0;
  uStack_490 = 0;
  uStack_478 = 0;
  plStack_480 = (long *)0x0;
  puVar14 = puVar5;
  func_0x00010c2791c0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar14;
  func_0x00010bf52a60();
  if (puVar4 != (undefined8 *)0x0) {
    lVar13 = *plStack_480;
    do {
      puVar12 = (undefined8 *)0x0;
      do {
        if (*plStack_480 != lVar13) {
          _objc_enumerationMutation(puVar14);
        }
        uVar15 = *(ulong *)(lStack_488 + (long)puVar12 * 8);
        uVar6 = uVar15;
        func_0x00010c2787c0();
        if (1 < uVar6) {
LAB_107e626cc:
          _objc_release(puVar14);
          puVar14 = (undefined8 *)0x0;
          goto LAB_107e6272c;
        }
        func_0x00010c2787a0();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar15;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar6;
        func_0x00010c27c540();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        func_0x00010bf8b160();
        _objc_release(uVar7);
        _objc_release(uVar6);
        _objc_release(uVar15);
        if (uVar8 != 0) goto LAB_107e626cc;
        puVar12 = (undefined8 *)((long)puVar12 + 1);
      } while (puVar4 != puVar12);
      puVar4 = puVar14;
      func_0x00010bf52a60();
    } while (puVar4 != (undefined8 *)0x0);
  }
  _objc_release(puVar14);
  uStack_4a8 = 0;
  uStack_4b0 = 0;
  uStack_498 = 0;
  uStack_4a0 = 0;
  lStack_4c8 = 0;
  uStack_4d0 = 0;
  uStack_4b8 = 0;
  plStack_4c0 = (long *)0x0;
  puVar14 = puVar2;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar14;
  func_0x00010c0ff660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar14);
  puVar14 = puVar4;
  func_0x00010bf52a60();
  if (puVar14 == (undefined8 *)0x0) {
    _objc_release(puVar4);
  }
  else {
    lVar17 = *plStack_4c0;
    lVar13 = -1;
    do {
      puVar12 = (undefined8 *)0x0;
      do {
        if (*plStack_4c0 != lVar17) {
          _objc_enumerationMutation(puVar4);
        }
        lVar16 = *(long *)(lStack_4c8 + (long)puVar12 * 8);
        lVar9 = lVar16;
        func_0x00010c118b40();
        _objc_retainAutoreleasedReturnValue();
        lVar10 = lVar9;
        func_0x00010c0699e0();
        _objc_retainAutoreleasedReturnValue();
        lVar11 = lVar10;
        func_0x00010c296d80();
        _objc_release(lVar10);
        _objc_release(lVar9);
        func_0x00010c0c3fe0();
        _objc_retainAutoreleasedReturnValue();
        lVar9 = lVar16;
        func_0x00010c27dd80();
        _objc_release(lVar16);
        if ((int)lVar9 == 1) {
          _objc_release(puVar4);
          puVar14 = (undefined8 *)0x0;
          goto LAB_107e6272c;
        }
        lVar9 = lVar11;
        if (lVar11 <= lVar13) {
          lVar9 = lVar13;
        }
        if (lVar11 != 0) {
          lVar13 = lVar9;
        }
        puVar12 = (undefined8 *)((long)puVar12 + 1);
      } while (puVar14 != puVar12);
      puVar14 = puVar4;
      func_0x00010bf52a60();
    } while (puVar14 != (undefined8 *)0x0);
    _objc_release(puVar4);
    puVar14 = (undefined8 *)PTR__OBJC_CLASS___NSValue_1126afdf8;
    if (0 < lVar13) {
      _CMTimeMake(&uStack_4f0,lVar13,1000);
      goto LAB_107e6271c;
    }
  }
  uStack_4e8 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  uStack_4f0 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uStack_4e0 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  puVar14 = (undefined8 *)PTR__OBJC_CLASS___NSValue_1126afdf8;
LAB_107e6271c:
  func_0x00010c297200(puVar14);
  _objc_retainAutoreleasedReturnValue();
LAB_107e6272c:
  _objc_release(puVar5);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_350) {
    ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c0d73d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)();
    return puVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
  return puVar14;
}


