/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104d704c4; end: 104d70707; -[SCFeatureDirectorModeImpl timelineConfiguration:didDeleteSegment:atIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d704c4(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112712278);
  func_0x00010bef1320(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010bf0b7e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0899c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12f0c0(uVar2,param_2,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (param_3 != *(long *)(param_1 + _DAT_11271230c)) goto LAB_104d706d8;
  lVar5 = param_1;
  func_0x00010be43da0();
  if ((int)lVar5 != 0) {
    lVar5 = param_1;
    func_0x00010c2458e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12e2c0();
    _objc_release(lVar5);
  }
  lVar5 = param_3;
  func_0x00010c1585e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bee00c0(param_1,param_2,lVar5);
  _objc_release(lVar5);
  func_0x00010bedf5c0(param_1);
  uVar2 = param_4;
  func_0x00010bfd6540();
  if ((int)uVar2 != 0) {
    lVar5 = param_3;
    func_0x00010c1581e0();
    if (lVar5 == 0) {
      func_0x00010c1b5b40(param_4,param_2,1);
      if (param_3 == 0) goto LAB_104d70630;
LAB_104d70610:
      func_0x00010c276200(&uStack_78,param_3);
    }
    else {
      if (param_3 != 0) goto LAB_104d70610;
LAB_104d70630:
      uStack_78 = 0;
      uStack_70 = 0;
      uStack_68 = 0;
    }
    func_0x00010c218100(param_4,param_2,&uStack_78);
    func_0x00010c0a50a0(param_4);
  }
  uVar2 = param_4;
  func_0x00010bfdd600();
  if ((int)uVar2 != 0) {
    func_0x00010bf2af60(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_4;
    func_0x00010bf311e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a2440(lVar5,param_2,uVar2,&PTR____CFConstantStringClassReference_110f4c3b8,0,0,0,0
                        ,0xd,0);
    _objc_release(uVar2);
    _objc_release(lVar5);
    _objc_release(param_1);
  }
LAB_104d706d8:
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104d70708; end: 104d70923; -[SCFeatureDirectorModeImpl timelineConfigurationWillDeleteAllSegments:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d70708(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined **unaff_x22;
  undefined8 unaff_x23;
  undefined8 uVar9;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  long unaff_x27;
  long lVar10;
  undefined8 unaff_x28;
  undefined8 uStack_2c0;
  long lStack_2b8;
  long *plStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined1 auStack_280 [128];
  long lStack_200;
  undefined8 uStack_1f0;
  long lStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined **ppuStack_1c0;
  long lStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  undefined1 *puStack_1a0;
  code *pcStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if (param_3 == 0) {
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_f8 = 0;
  }
  else {
    func_0x00010c276200(&uStack_108,param_3);
  }
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  lStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  plStack_140 = (long *)0x0;
  lVar10 = param_3;
  lStack_178 = param_3;
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = &uStack_150;
  lVar1 = lVar10;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    unaff_x27 = *plStack_140;
    unaff_x22 = &PTR____CFConstantStringClassReference_110f4c3b8;
    unaff_x28 = 0xd;
    do {
      param_3 = 0;
      do {
        if (*plStack_140 != unaff_x27) {
          _objc_enumerationMutation(lVar10);
        }
        unaff_x24 = *(undefined8 *)(lStack_148 + param_3 * 8);
        uVar2 = unaff_x24;
        func_0x00010bfd6540();
        if ((int)uVar2 != 0) {
          func_0x00010c1b5b40(unaff_x24,param_2,1);
          func_0x00010c18e100(unaff_x24,param_2,10);
          func_0x00010c18ed00(unaff_x24,param_2,0);
          uStack_168 = uStack_100;
          uStack_170 = uStack_108;
          uStack_160 = uStack_f8;
          func_0x00010c218100(unaff_x24,param_2,&uStack_170);
          func_0x00010c0a50a0(unaff_x24);
        }
        uVar2 = unaff_x24;
        func_0x00010bfdd600();
        if ((int)uVar2 != 0) {
          unaff_x25 = param_1;
          func_0x00010bf2af60();
          _objc_retainAutoreleasedReturnValue();
          unaff_x26 = unaff_x25;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf311e0();
          _objc_retainAutoreleasedReturnValue();
          uStack_190 = 0xd;
          uStack_188 = 0;
          func_0x00010c0a2440(unaff_x26,param_2,unaff_x24,
                              &PTR____CFConstantStringClassReference_110f4c3b8,0,0,0,0);
          _objc_release(unaff_x24);
          _objc_release(unaff_x26);
          _objc_release(unaff_x25);
        }
        param_3 = param_3 + 1;
      } while (lVar1 != param_3);
      puVar7 = &uStack_150;
      lVar1 = lVar10;
      func_0x00010bf52a60();
      unaff_x23 = 0;
    } while (lVar1 != 0);
  }
  _objc_release(lVar10);
  lVar1 = lStack_178;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_198 = FUN_104d70924;
  lStack_200 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_1f0 = unaff_x28;
  lStack_1e8 = unaff_x27;
  uStack_1e0 = unaff_x26;
  uStack_1d8 = unaff_x25;
  uStack_1d0 = unaff_x24;
  uStack_1c8 = unaff_x23;
  ppuStack_1c0 = unaff_x22;
  lStack_1b8 = lVar10;
  uStack_1b0 = param_1;
  lStack_1a8 = param_3;
  puStack_1a0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar7);
  lStack_2b8 = 0;
  uStack_2c0 = 0;
  uStack_2a8 = 0;
  plStack_2b0 = (long *)0x0;
  uStack_298 = 0;
  uStack_2a0 = 0;
  uStack_288 = 0;
  uStack_290 = 0;
  puVar3 = puVar7;
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf52a60();
  if (puVar4 != (undefined8 *)0x0) {
    lVar10 = *plStack_2b0;
    do {
      puVar8 = (undefined8 *)0x0;
      do {
        if (*plStack_2b0 != lVar10) {
          _objc_enumerationMutation(puVar3);
        }
        uVar9 = *(undefined8 *)(lStack_2b8 + (long)puVar8 * 8);
        uVar5 = *(undefined8 *)(lVar1 + _DAT_112712278);
        func_0x00010bef1320(uVar5);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar5;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf0b7e0(uVar9);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar9;
        func_0x00010c0899c0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12f0c0(uVar2,param_2,uVar6);
        _objc_release(uVar6);
        _objc_release(uVar9);
        _objc_release(uVar2);
        _objc_release(uVar5);
        puVar8 = (undefined8 *)((long)puVar8 + 1);
      } while (puVar4 != puVar8);
      puVar4 = puVar3;
      func_0x00010bf52a60(puVar3,param_2,&uStack_2c0,auStack_280,0x10);
    } while (puVar4 != (undefined8 *)0x0);
  }
  _objc_release(puVar3);
  if (puVar7 == *(undefined8 **)(lVar1 + _DAT_11271230c)) {
    lVar10 = lVar1;
    func_0x00010be43da0();
    if ((int)lVar10 != 0) {
      lVar10 = lVar1;
      func_0x00010c2458e0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12b020();
      _objc_release(lVar10);
    }
    puVar3 = puVar7;
    func_0x00010c1585e0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bee00c0(lVar1,param_2,puVar3);
    _objc_release(puVar3);
    func_0x00010bedf5c0(lVar1);
  }
  _objc_release(puVar7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_200) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 104d70924; end: 104d70b2f; -[SCFeatureDirectorModeImpl timelineConfigurationDidDeleteAllSegments:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d70924(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uStack_130;
  long lStack_128;
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
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar1 = param_3;
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar8 = *plStack_120;
    do {
      lVar6 = 0;
      do {
        if (*plStack_120 != lVar8) {
          _objc_enumerationMutation(lVar1);
        }
        uVar7 = *(undefined8 *)(lStack_128 + lVar6 * 8);
        uVar3 = *(undefined8 *)(param_1 + _DAT_112712278);
        func_0x00010bef1320(uVar3);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf0b7e0(uVar7);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar7;
        func_0x00010c0899c0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12f0c0(uVar4,param_2,uVar5);
        _objc_release(uVar5);
        _objc_release(uVar7);
        _objc_release(uVar4);
        _objc_release(uVar3);
        lVar6 = lVar6 + 1;
      } while (lVar2 != lVar6);
      lVar2 = lVar1;
      func_0x00010bf52a60(lVar1,param_2,&uStack_130,auStack_f0,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(lVar1);
  if (param_3 == *(long *)(param_1 + _DAT_11271230c)) {
    lVar1 = param_1;
    func_0x00010be43da0();
    if ((int)lVar1 != 0) {
      lVar1 = param_1;
      func_0x00010c2458e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12b020();
      _objc_release(lVar1);
    }
    lVar1 = param_3;
    func_0x00010c1585e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bee00c0(param_1,param_2,lVar1);
    _objc_release(lVar1);
    func_0x00010bedf5c0(param_1);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 104d70b30; end: 104d70b33; -[SCFeatureDirectorModeImpl timelineConfiguration:didUpdateSegmentTrim:atIndex:] */

void FUN_104d70b30(void)

{
  return;
}



/* Entry: 104d70b34; end: 104d70b37; -[SCFeatureDirectorModeImpl timelineConfigurationDidUpdateThumbnails:] */

void FUN_104d70b34(void)

{
  return;
}



/* Entry: 104d70b38; end: 104d70b3b; -[SCFeatureDirectorModeImpl timelineConfiguration:didUpdateThumbnailsForSegment:] */

void FUN_104d70b38(void)

{
  return;
}



/* Entry: 104d70b3c; end: 104d70b83; -[SCFeatureDirectorModeImpl timelineConfiguration:didMoveSegment:atIndex:toDestinationIndex:] */

void FUN_104d70b3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c1585e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bee00c0(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bedf5d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateSegmentCaptureProgress_112595718);
  return;
}



/* Entry: 104d70b84; end: 104d70b87; -[SCFeatureDirectorModeImpl timelineConfigurationDidEnterReorderMode:] */

void FUN_104d70b84(void)

{
  return;
}



/* Entry: 104d70b88; end: 104d70cb3; -[SCFeatureDirectorModeImpl timelineConfigurationDidExitReorderMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d70b88(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112712320);
  *(undefined8 *)(param_1 + _DAT_112712320) = 0;
  _objc_release(uVar2);
  lVar3 = param_3;
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar3);
      }
      func_0x00010be73480(param_1);
      lVar6 = lVar6 + 1;
    } while (lVar4 != lVar6);
    lVar4 = lVar3;
    func_0x00010bf52a60();
  }
  _objc_release(lVar3);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bedf5d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 104d70cb4; end: 104d70cb7; -[SCFeatureDirectorModeImpl timelineConfigurationDidRestoreToInitialState:] */

void FUN_104d70cb4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bedf5d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateSegmentCaptureProgress_112595718);
  return;
}



/* Entry: 104d70cb8; end: 104d70e53; -[SCFeatureDirectorModeImpl startObservingCapturerStateUpdate:state:managedCapturerStateCoordinator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d70cb8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_68,param_1);
  lVar6 = (long)_DAT_112712360;
  if (*(long *)(param_1 + lVar6) == 0) {
    puVar1 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    *(undefined **)(param_1 + lVar6) = puVar1;
    _objc_release(uVar5);
    uVar5 = param_5;
    func_0x00010c269d40(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010c0c42e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c2880c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_70,auStack_68);
    uVar4 = uVar3;
    func_0x00010c25ff60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar5);
    _objc_destroyWeak(auStack_70);
  }
  _objc_destroyWeak(auStack_68);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104d70e54; end: 104d70ef7;  */

void FUN_104d70e54(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0e37e0(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 104d70ef8; end: 104d70f6b;  */

void FUN_104d70ef8(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_28 = 0;
  }
  else {
    func_0x00010c10f7a0(&uStack_38,param_3);
  }
  func_0x00010bdfc340(param_1,param_2,&uStack_38);
  _objc_release(param_1);
  _objc_release(param_3);
  return;
}



/* Entry: 104d70f6c; end: 104d70f9f; -[SCFeatureDirectorModeImpl stopObservingCapturerStateUpdate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d70f6c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112712360;
  func_0x00010bf86d80(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d70fa0; end: 104d7101b; -[SCFeatureDirectorModeImpl _didAppendVideoSampleBufferAtTime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d70fa0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (*(char *)(param_1 + _DAT_112712364) == '\x01') {
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    pcStack_40 = FUN_104d7101c;
    puStack_38 = &UNK_11084e430;
    uStack_20 = param_3[1];
    uStack_28 = *param_3;
    uStack_18 = param_3[2];
    lStack_30 = param_1;
    func_0x0001000d76cc("APPSTORE",&puStack_50);
  }
  return;
}



/* Entry: 104d7101c; end: 104d711ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d7101c(double param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  undefined1 auStack_98 [24];
  double dStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  double dStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  func_0x00010bebeb20(*(undefined8 *)(param_2 + 0x20));
  lVar2 = *(long *)(param_2 + 0x20);
  func_0x00010c0c45a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    dStack_80 = 0.0;
    uStack_78 = 0;
    uStack_70 = 0;
  }
  else {
    func_0x00010c276460(&dStack_80,lVar2);
  }
  uStack_58 = *(undefined8 *)(param_2 + 0x30);
  dStack_60 = *(double *)(param_2 + 0x28);
  uStack_50 = *(undefined8 *)(param_2 + 0x38);
  _CMTimeMultiplyByFloat64(auStack_98,1.0 / param_1,&dStack_60);
  _CMTimeAdd(&dStack_60,&dStack_80,auStack_98);
  _objc_release(lVar2);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar4 = *(undefined8 *)(*(long *)(param_2 + 0x20) + (long)_DAT_112712368);
  uStack_78 = uStack_58;
  dStack_80 = dStack_60;
  uStack_70 = uStack_50;
  dVar5 = dStack_60;
  _CMTimeGetSeconds(&dStack_80);
  dVar6 = dVar5;
  func_0x00010c0c2ac0(*(undefined8 *)(param_2 + 0x20));
  func_0x00010c0df720(dVar5 / dVar6,puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar4);
  _objc_release(puVar3);
  iVar1 = (int)*(undefined8 *)(param_2 + 0x20);
  func_0x00010be448a0();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (iVar1 == 0) {
    uVar4 = *(undefined8 *)(*(long *)(param_2 + 0x20) + (long)_DAT_11271236c);
    uStack_78 = uStack_58;
    dStack_80 = dStack_60;
    uStack_70 = uStack_50;
    _CMTimeGetSeconds(&dStack_80);
  }
  else {
    uStack_78 = uStack_58;
    dStack_80 = dStack_60;
    uStack_70 = uStack_50;
    _CMTimeGetSeconds(&dStack_80);
    uVar4 = *(undefined8 *)(*(long *)(param_2 + 0x20) + (long)_DAT_11271236c);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  }
  func_0x00010c0df720(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar4);
  _objc_release(puVar3);
  return;
}



/* Entry: 104d711f0; end: 104d712c7; -[SCFeatureDirectorModeImpl shouldBlockTouchAtPoint:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_104d711f0(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  uint uVar2;
  
  if (*(char *)(param_3 + (long)_DAT_112712370) == '\x01') {
    if ((*(byte *)(param_3 + (long)_DAT_112712364) & 1) == 0) {
      if (*(long *)(param_3 + (long)_DAT_112712334) == 0) {
        uVar2 = 0;
      }
      else {
        uVar1 = param_3;
        func_0x00010be44b40(param_1,param_2,param_3);
        uVar2 = (uint)uVar1;
      }
      uVar1 = param_3;
      func_0x00010be44b40(param_1,param_2,param_3,param_4,
                          *(undefined8 *)(param_3 + (long)_DAT_112712374));
      if ((uVar1 & 1) == 0) {
        func_0x00010be44b40(param_1,param_2,param_3,param_4,
                            *(undefined8 *)(param_3 + (long)_DAT_112712378));
        uVar2 = (uint)param_3 | uVar2;
      }
      else {
        uVar2 = 1;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2 & 1;
}



/* Entry: 104d712c8; end: 104d71357; -[SCFeatureDirectorModeImpl _isTouchAtPoint:withinSubview:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_104d712c8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_3 + _DAT_112712314);
  _objc_retain(param_5);
  func_0x00010bfe12e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf512a0(param_1,param_2);
  uVar1 = param_5;
  func_0x00010c102b20(param_5,param_4,0);
  _objc_release(param_5);
  _objc_release(uVar2);
  return uVar1;
}



/* Entry: 104d71358; end: 104d713df; -[SCFeatureDirectorModeImpl onPreviewButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d71358(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11271237c;
  lVar1 = *(long *)(param_1 + lVar4);
  func_0x00010c27dd80();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112712338);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010bf99020(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  func_0x00010be5a0c0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be7d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentPreview_11257cf60);
  return;
}



/* Entry: 104d713e0; end: 104d7152f; -[SCFeatureDirectorModeImpl onUndoButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d713e0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined1 *puVar6;
  undefined8 auStack_88 [4];
  undefined1 auStack_68 [8];
  undefined8 auStack_60 [4];
  undefined1 auStack_40 [8];
  undefined *puStack_38;
  
  lVar1 = param_1;
  func_0x00010c0c45a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c1581e0();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    func_0x00010be5a0c0(param_1);
    ppuVar3 = &puStack_38;
    _objc_initWeak(ppuVar3,param_1);
    if (*(long *)(param_1 + _DAT_11271234c) == 0) {
      ppuVar3 = &PTR____CFConstantStringClassReference_110db1858;
      func_0x0001000f6108(&PTR____CFConstantStringClassReference_110db1858,
                          &PTR____CFConstantStringClassReference_110db1878,0);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = auStack_68;
      pcVar5 = (code *)0x104d7155c;
      puVar4 = auStack_88;
    }
    else {
      func_0x000104d7e50c();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = auStack_40;
      pcVar5 = FUN_104d71530;
      puVar4 = auStack_60;
    }
    *puVar4 = PTR___NSConcreteStackBlock_11034bd00;
    puVar4[1] = 0xc2000000;
    puVar4[2] = pcVar5;
    puVar4[3] = &UNK_1108434b0;
    _objc_copyWeak(puVar6,&puStack_38);
    _objc_retainBlock(puVar4);
    _objc_destroyWeak(puVar6);
    func_0x00010bebba00(param_1);
    _objc_destroyWeak(&puStack_38);
    _objc_release(puVar4);
    _objc_release(ppuVar3);
  }
  return;
}



/* Entry: 104d71530; end: 104d71587;  */

void FUN_104d71530(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed1000();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d71588; end: 104d71627; -[SCFeatureDirectorModeImpl snapsRecoveryData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d71588(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_112712320;
  lVar4 = *(long *)(param_1 + lVar5);
  if (lVar4 == 0) {
    puVar1 = PTR_PTR_1126b0028;
    _objc_opt_new();
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar1;
    _objc_release(uVar3);
    lVar4 = param_1;
    func_0x00010c0c45a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar4;
    func_0x00010c2702a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c205660(*(undefined8 *)(param_1 + lVar5),param_2,lVar2);
    _objc_release(lVar2);
    _objc_release(lVar4);
    lVar4 = *(long *)(param_1 + lVar5);
  }
  _objc_retain(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 104d71628; end: 104d719c3; -[SCFeatureDirectorModeImpl _persistSegmentIfNeeded:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d71628(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uStack_e0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  _objc_retain(param_4);
  lVar1 = param_2;
  func_0x00010be43da0();
  if ((int)lVar1 == 0) goto LAB_104d71998;
  lVar1 = param_4;
  func_0x00010bf0b7e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) goto LAB_104d71998;
  lVar1 = param_2;
  func_0x00010c23fbc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  uVar10 = param_1;
  _objc_release(lVar1);
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  _objc_alloc();
  lVar1 = param_4;
  func_0x00010bf0b7e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfee820();
  _objc_release(lVar3);
  _objc_release(lVar1);
  lVar1 = param_4;
  func_0x00010c075240();
  if ((int)lVar1 == 0) {
LAB_104d717c4:
    uStack_e0 = 0;
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    _objc_release(puVar4);
    uStack_e0 = *(ulong *)(param_2 + _DAT_11271220c);
    func_0x00010c270180();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uStack_e0;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c26fe80();
    param_1 = uVar10;
    if (((uVar6 & 1) == 0) && (lVar1 = param_4, func_0x00010c243400(), lVar1 != 0xc)) {
      _objc_release(uVar5);
      _objc_release(uStack_e0);
      goto LAB_104d717c4;
    }
    lVar1 = param_4;
    func_0x00010bf0b7e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar5);
    _objc_release();
    if (lVar1 == 0) goto LAB_104d717c4;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar7 = PTR_PTR_1126b0030;
  _objc_alloc();
  lVar1 = param_4;
  func_0x00010bef0a60(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_4;
  func_0x00010bef0b60(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c024760();
  _objc_release(lVar3);
  _objc_release(lVar1);
  puVar4 = PTR_DAT_1126a4e40;
  _objc_retain(param_4);
  lVar3 = param_4;
  func_0x00010010fab4(param_4,puVar4);
  lVar1 = param_4;
  if ((int)lVar3 == 0) {
    lVar1 = 0;
  }
  _objc_retain(lVar1);
  _objc_release(param_4);
  puVar4 = PTR_PTR_1126b0038;
  _objc_alloc(PTR_PTR_1126b0038);
  lVar3 = param_4;
  func_0x00010bf311e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_4;
  func_0x00010c129840(param_4);
  _objc_retainAutoreleasedReturnValue();
  if (param_4 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
  }
  else {
    func_0x00010c27c900(&uStack_b0,param_4);
  }
  lVar9 = param_4;
  func_0x00010c096b40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c280560();
  func_0x00010c243400();
  func_0x00010c0294c0(param_1,puVar4);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar3);
  func_0x00010c2458e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befada0();
  _objc_release(param_2);
  _objc_release(puVar4);
  _objc_release(lVar1);
  _objc_release(puVar7);
  _objc_release(uStack_e0);
  _objc_release(puVar2);
LAB_104d71998:
  _objc_release(param_4);
  return;
}



/* Entry: 104d719c4; end: 104d71aff; -[SCFeatureDirectorModeImpl _setDirectorModeActivated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d719c4(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  *(char *)(param_1 + _DAT_112712370) = (char)param_3;
  lVar1 = *(long *)(param_1 + _DAT_112712218);
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (param_3 == 0) {
    if (lVar2 == param_1) {
      lVar2 = param_1 + _DAT_112712340;
      _objc_loadWeakRetained(lVar2);
      func_0x00010c18b5e0(lVar1);
      _objc_release(lVar2);
    }
    uVar3 = *(undefined8 *)(param_1 + _DAT_11271223c);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1288a0();
    _objc_release(uVar3);
  }
  else {
    if (lVar2 != param_1) {
      lVar2 = lVar1;
      func_0x00010bf6b020(lVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_storeWeak(param_1 + _DAT_112712340,lVar2);
      _objc_release(lVar2);
      func_0x00010c18b5e0(lVar1);
    }
    uVar3 = *(undefined8 *)(param_1 + _DAT_11271223c);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef780();
    _objc_release(uVar3);
    func_0x00010beaa0a0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104d71b00; end: 104d72157; -[SCFeatureDirectorModeImpl _setupViews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d71b00(double param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined *puVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  double dVar20;
  undefined1 auStack_258 [8];
  undefined1 auStack_250 [8];
  undefined8 uStack_248;
  undefined8 uStack_240;
  long lStack_238;
  undefined *puStack_230;
  undefined8 uStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  long lStack_210;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  undefined *puStack_1e8;
  undefined1 **ppuStack_1e0;
  code *pcStack_1d8;
  long lStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined *puStack_140;
  long lStack_138;
  long lStack_130;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  long lStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010beb0e20();
  puVar8 = PTR_PTR_1126b0040;
  _objc_alloc_init();
  puVar7 = PTR_PTR_1126b0048;
  puStack_80 = puVar8;
  _objc_alloc_init();
  lVar14 = param_2;
  func_0x00010be7fc20(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lVar14;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c174a60(puVar7);
  _objc_release(lVar19);
  _objc_release(lVar14);
  puVar8 = PTR_PTR_1126b0050;
  _objc_alloc_init();
  lVar14 = (long)_DAT_112712380;
  uVar12 = *(undefined8 *)(param_2 + lVar14);
  *(undefined **)(param_2 + lVar14) = puVar8;
  _objc_release(uVar12);
  func_0x00010c18b5e0(*(undefined8 *)(param_2 + lVar14));
  puStack_88 = puVar7;
  func_0x00010c161980(puVar7);
  puVar8 = PTR_PTR_1126b0058;
  _objc_alloc();
  lStack_a8 = (long)_DAT_112712234;
  lVar14 = param_2 + lStack_a8;
  _objc_loadWeakRetained(lVar14);
  lVar19 = lVar14;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar19;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c061d40();
  lVar16 = (long)_DAT_112712378;
  uVar12 = *(undefined8 *)(param_2 + lVar16);
  *(undefined **)(param_2 + lVar16) = puVar8;
  _objc_release(uVar12);
  _objc_release(lVar1);
  _objc_release(lVar19);
  _objc_release(lVar14);
  puVar8 = PTR_PTR_1126b0060;
  _objc_alloc();
  func_0x00010c0c2ac0(param_2);
  func_0x00010c043980();
  func_0x00010c1faa20();
  puStack_98 = puVar8;
  func_0x00010c1faa40(puVar8);
  puVar8 = PTR_PTR_1126b0068;
  _objc_alloc();
  lVar14 = param_2;
  func_0x00010be9d680(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lVar14;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010be82f60(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar1;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_2;
  func_0x00010be3eba0(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar17;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffcac0();
  _objc_release(lVar2);
  _objc_release(lVar17);
  _objc_release(lVar18);
  _objc_release(lVar1);
  _objc_release(lVar19);
  _objc_release(lVar14);
  lVar14 = param_2;
  func_0x00010bddb5e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lVar14;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = puVar8;
  func_0x00010c178f60(puVar8);
  _objc_release(lVar19);
  _objc_release(lVar14);
  puVar8 = PTR_PTR_1126b0070;
  _objc_alloc();
  lVar19 = lStack_a8;
  lVar14 = param_2 + lStack_a8;
  _objc_loadWeakRetained(lVar14);
  lVar1 = lVar14;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar1;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c061d40();
  lVar17 = (long)_DAT_112712384;
  uVar12 = *(undefined8 *)(param_2 + lVar17);
  *(undefined **)(param_2 + lVar17) = puVar8;
  _objc_release(uVar12);
  _objc_release(lVar18);
  _objc_release(lVar1);
  _objc_release(lVar14);
  puVar8 = PTR_PTR_1126b0078;
  _objc_alloc_init();
  puVar7 = PTR_PTR_1126b0080;
  puStack_a0 = puVar8;
  _objc_alloc_init();
  lVar14 = param_2;
  func_0x00010becc900(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar14;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216940(puVar7);
  _objc_release(lVar1);
  _objc_release(lVar14);
  puVar8 = PTR_PTR_1126b0088;
  _objc_alloc();
  lVar19 = param_2 + lVar19;
  _objc_loadWeakRetained(lVar19);
  lVar14 = lVar19;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar14;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c061d40();
  lVar18 = (long)_DAT_112712388;
  uVar12 = *(undefined8 *)(param_2 + lVar18);
  *(undefined **)(param_2 + lVar18) = puVar8;
  _objc_release(uVar12);
  _objc_release(lVar1);
  _objc_release(lVar14);
  _objc_release(lVar19);
  lVar19 = (long)_DAT_112712314;
  uVar12 = *(undefined8 *)(param_2 + lVar19);
  func_0x00010bfe12e0(uVar12);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar12);
  func_0x00010befbb60(*(undefined8 *)(param_2 + lVar19));
  uVar12 = *(undefined8 *)(param_2 + lVar19);
  func_0x00010bfe12e0(uVar12);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar12);
  func_0x00010c219b60(*(undefined8 *)(param_2 + lVar16));
  func_0x00010c219b60(*(undefined8 *)(param_2 + lVar17));
  func_0x00010c219b60(*(undefined8 *)(param_2 + lVar18));
  func_0x00010c1af000(*(undefined8 *)(param_2 + lVar16));
  func_0x00010c160fc0(*(undefined8 *)(param_2 + lVar16));
  func_0x00010c161080(*(undefined8 *)(param_2 + lVar16));
  uVar3 = *(undefined8 *)(param_2 + lVar16);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_2 + lVar19);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdd54e0(param_2);
  uVar12 = uVar3;
  func_0x00010bf493c0(-param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar14 = (long)_DAT_11271235c;
  uVar13 = *(undefined8 *)(param_2 + lVar14);
  *(undefined8 *)(param_2 + lVar14) = uVar12;
  _objc_release(uVar13);
  _objc_release(uVar4);
  _objc_release(uVar3);
  puVar8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar5 = *(undefined **)(param_2 + lVar16);
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_2 + lVar19);
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  dVar20 = -12.0;
  puVar6 = puVar5;
  func_0x00010bf493c0(0xc028000000000000);
  _objc_retainAutoreleasedReturnValue();
  uStack_70 = *(undefined8 *)(param_2 + lVar14);
  puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_78 = puVar6;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar8);
  _objc_release(puVar15);
  _objc_release(puVar6);
  _objc_release(uVar12);
  _objc_release(puVar5);
  func_0x00010be3cfe0(param_2);
  func_0x00010beae2a0(param_2);
  _objc_release(puVar7);
  _objc_release(puStack_a0);
  _objc_release(puStack_90);
  _objc_release(puStack_98);
  _objc_release(puStack_88);
  puVar8 = puStack_80;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_b8 = FUN_104d72158;
  lStack_130 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar15 = (undefined *)(long)_DAT_112712314;
  lVar19 = *(long *)(puVar8 + (long)puVar15);
  puStack_c0 = &stack0xfffffffffffffff0;
  func_0x00010bf295a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar19 == 0) {
    lVar14 = *(long *)(puVar8 + (long)puVar15);
    lStack_170 = lVar19;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001091fffc8();
  }
  else {
    lVar1 = lVar19;
    func_0x00010c0f0780();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = *(long *)(puVar8 + (long)puVar15);
    _objc_release();
    if (lVar1 != lVar17) goto LAB_104d724c8;
    lStack_170 = lVar19;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    dVar20 = 0.0;
    lVar14 = lVar19;
  }
  puStack_1b0 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar19 = (long)_DAT_112712384;
  uVar12 = *(undefined8 *)(puVar8 + lVar19);
  lStack_1d0 = lVar14;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uStack_178 = uVar12;
  func_0x00010bf493c0(dVar20);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(puVar8 + lVar19);
  uStack_180 = uVar12;
  uStack_168 = uVar12;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(puVar8 + (long)puVar15);
  uStack_188 = uVar3;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  uStack_190 = uVar12;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(puVar8 + lVar19);
  uStack_198 = uVar3;
  uStack_160 = uVar3;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(puVar8 + (long)puVar15);
  uStack_1a0 = uVar4;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  uStack_1a8 = uVar12;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(puVar8 + lVar19);
  uStack_1b8 = uVar4;
  uStack_158 = uVar4;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uStack_1c0 = uVar12;
  func_0x00010bf49420(0x4024000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar14 = (long)_DAT_112712388;
  lVar18 = *(long *)(puVar8 + lVar14);
  uStack_1c8 = uVar12;
  uStack_150 = uVar12;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar18;
  func_0x00010bf493c0(dVar20 + 18.0);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = *(undefined **)(puVar8 + lVar14);
  lStack_148 = lVar1;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(puVar8 + (long)puVar15);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = *(long *)(puVar8 + lVar14);
  puStack_140 = puVar6;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = *(undefined **)(puVar8 + (long)puVar15);
  func_0x00010bfe12e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar8;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar17;
  func_0x00010bf493e0(0x3fe8000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_138 = lVar14;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_1b0);
  _objc_release(puVar15);
  _objc_release(lVar14);
  _objc_release(puVar5);
  _objc_release(puVar8);
  _objc_release(lVar17);
  _objc_release(puVar6);
  _objc_release(uVar12);
  _objc_release(puVar7);
  _objc_release(lVar1);
  _objc_release(lVar18);
  _objc_release(uStack_1c8);
  _objc_release(uStack_1c0);
  _objc_release(uStack_1b8);
  _objc_release(uStack_1a8);
  _objc_release(uStack_1a0);
  _objc_release(uStack_198);
  _objc_release(uStack_190);
  _objc_release(uStack_188);
  _objc_release(uStack_180);
  _objc_release(uStack_178);
  _objc_release(lStack_1d0);
  lVar19 = lStack_170;
LAB_104d724c8:
  lVar2 = lVar19;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_130) {
    return;
  }
  ___stack_chk_fail();
  pcStack_1d8 = FUN_104d72510;
  lStack_238 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = PTR_PTR_1126b0090;
  puStack_230 = puVar6;
  uStack_228 = uVar12;
  puStack_220 = puVar8;
  puStack_218 = puVar7;
  lStack_210 = lVar18;
  lStack_208 = lVar14;
  lStack_200 = lVar19;
  lStack_1f8 = lVar17;
  lStack_1f0 = lVar1;
  puStack_1e8 = puVar15;
  ppuStack_1e0 = &puStack_c0;
  _objc_alloc_init();
  puVar7 = PTR_PTR_1126b0098;
  _objc_alloc_init();
  puVar8 = PTR_PTR_1126b00a0;
  _objc_alloc_init();
  lVar14 = (long)_DAT_11271238c;
  uVar12 = *(undefined8 *)(lVar2 + lVar14);
  *(undefined **)(lVar2 + lVar14) = puVar8;
  _objc_release(uVar12);
  func_0x00010c18b5e0(*(undefined8 *)(lVar2 + lVar14));
  func_0x00010c161980(puVar7);
  lVar14 = lVar2;
  func_0x00010be9d680(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lVar14;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar19;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar1;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1794e0(puVar7);
  _objc_release(lVar18);
  _objc_release(lVar1);
  _objc_release(lVar19);
  _objc_release(lVar14);
  puVar8 = PTR_PTR_1126b00a8;
  _objc_alloc();
  lVar14 = lVar2 + _DAT_112712234;
  _objc_loadWeakRetained(lVar14);
  lVar19 = lVar14;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar19;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c061d40();
  lVar18 = (long)_DAT_112712374;
  uVar12 = *(undefined8 *)(lVar2 + lVar18);
  *(undefined **)(lVar2 + lVar18) = puVar8;
  _objc_release(uVar12);
  _objc_release(lVar1);
  _objc_release(lVar19);
  _objc_release(lVar14);
  func_0x00010c1af000(*(undefined8 *)(lVar2 + lVar18));
  func_0x00010c161080(*(undefined8 *)(lVar2 + lVar18));
  func_0x00010c160fc0(*(undefined8 *)(lVar2 + lVar18));
  lVar14 = (long)_DAT_112712314;
  uVar12 = *(undefined8 *)(lVar2 + lVar14);
  func_0x00010bfe12e0(uVar12);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar12);
  func_0x00010c219b60(*(undefined8 *)(lVar2 + lVar18));
  uVar3 = *(undefined8 *)(lVar2 + lVar18);
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(lVar2 + lVar14);
  func_0x00010c08e400(uVar4);
  _objc_retainAutoreleasedReturnValue();
  dVar20 = 12.0;
  uVar12 = uVar3;
  func_0x00010bf493c0(0x4028000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar19 = (long)_DAT_112712390;
  uVar13 = *(undefined8 *)(lVar2 + lVar19);
  *(undefined8 *)(lVar2 + lVar19) = uVar12;
  _objc_release(uVar13);
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(lVar2 + lVar18);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(lVar2 + lVar14);
  func_0x00010bf1ff80(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdd54e0(lVar2);
  uVar12 = uVar3;
  func_0x00010bf493c0(-dVar20);
  _objc_retainAutoreleasedReturnValue();
  lVar14 = (long)_DAT_112712358;
  uVar13 = *(undefined8 *)(lVar2 + lVar14);
  *(undefined8 *)(lVar2 + lVar14) = uVar12;
  _objc_release(uVar13);
  _objc_release(uVar4);
  _objc_release(uVar3);
  puVar8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uStack_248 = *(undefined8 *)(lVar2 + lVar19);
  uStack_240 = *(undefined8 *)(lVar2 + lVar14);
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar8);
  _objc_release(puVar6);
  _objc_initWeak(auStack_250,lVar2);
  uVar9 = *(undefined8 *)(lVar2 + _DAT_1127122fc);
  func_0x00010c269d40(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar9;
  func_0x00010c0c5da0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar12;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar3;
  func_0x00010c0e0ea0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = auStack_250;
  _objc_copyWeak(auStack_258,puVar11);
  uVar10 = uVar13;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar10);
  _objc_release(uVar13);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar12);
  _objc_release(uVar9);
  _objc_destroyWeak(auStack_258);
  _objc_destroyWeak(auStack_250);
  _objc_release(puVar7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_238) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_258);
  _objc_destroyWeak(auStack_250);
  __Unwind_Resume(puVar5);
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf529e0(puVar11);
                    /* WARNING: Could not recover jumptable at 0x00010c0df850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar8,PTR_s_numberWithUnsignedInteger__112615828,puVar11);
  return;
}



/* Entry: 104d72158; end: 104d7250f; -[SCFeatureDirectorModeImpl _installTopContainerAndErrorToastConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d72158(double param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  long lVar14;
  long unaff_x23;
  long unaff_x24;
  undefined8 unaff_x25;
  long lVar15;
  undefined8 unaff_x27;
  long lVar16;
  undefined8 unaff_x28;
  double dVar17;
  undefined1 auStack_1a8 [8];
  undefined1 auStack_1a0 [8];
  undefined8 uStack_198;
  undefined8 uStack_190;
  long lStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  undefined8 uStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  undefined *puStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar13 = (undefined *)(long)_DAT_112712314;
  lVar1 = *(long *)(puVar13 + param_2);
  func_0x00010bf295a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar15 = *(long *)(puVar13 + param_2);
    lStack_c0 = lVar1;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001091fffc8();
  }
  else {
    lVar15 = lVar1;
    func_0x00010c0f0780();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = *(long *)(puVar13 + param_2);
    _objc_release();
    if (lVar15 != lVar14) goto LAB_104d724c8;
    lStack_c0 = lVar1;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    param_1 = 0.0;
    lVar15 = lVar1;
  }
  puStack_100 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar1 = (long)_DAT_112712384;
  uVar2 = *(undefined8 *)(param_2 + lVar1);
  lStack_120 = lVar15;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uStack_c8 = uVar2;
  func_0x00010bf493c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_2 + lVar1);
  uStack_d0 = uVar2;
  uStack_b8 = uVar2;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(puVar13 + param_2);
  uStack_d8 = uVar3;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  uStack_e0 = uVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_2 + lVar1);
  uStack_e8 = uVar3;
  uStack_b0 = uVar3;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(puVar13 + param_2);
  uStack_f0 = uVar4;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  uStack_f8 = uVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_2 + lVar1);
  uStack_108 = uVar4;
  uStack_a8 = uVar4;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uStack_110 = uVar2;
  func_0x00010bf49420(0x4024000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = (long)_DAT_112712388;
  unaff_x24 = *(long *)(param_2 + lVar1);
  uStack_118 = uVar2;
  uStack_a0 = uVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = unaff_x24;
  func_0x00010bf493c0(param_1 + 18.0);
  _objc_retainAutoreleasedReturnValue();
  unaff_x25 = *(undefined8 *)(param_2 + lVar1);
  lStack_98 = lVar15;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  unaff_x27 = *(undefined8 *)(puVar13 + param_2);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  unaff_x28 = unaff_x25;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = *(long *)(param_2 + lVar1);
  uStack_90 = unaff_x28;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  param_2 = *(long *)(puVar13 + param_2);
  func_0x00010bfe12e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  unaff_x23 = lVar14;
  func_0x00010bf493e0(0x3fe8000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_88 = unaff_x23;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_100);
  _objc_release(puVar13);
  _objc_release(unaff_x23);
  _objc_release(lVar1);
  _objc_release(param_2);
  _objc_release(lVar14);
  _objc_release(unaff_x28);
  _objc_release(unaff_x27);
  _objc_release(unaff_x25);
  _objc_release(lVar15);
  _objc_release(unaff_x24);
  _objc_release(uStack_118);
  _objc_release(uStack_110);
  _objc_release(uStack_108);
  _objc_release(uStack_f8);
  _objc_release(uStack_f0);
  _objc_release(uStack_e8);
  _objc_release(uStack_e0);
  _objc_release(uStack_d8);
  _objc_release(uStack_d0);
  _objc_release(uStack_c8);
  _objc_release(lStack_120);
  lVar1 = lStack_c0;
LAB_104d724c8:
  lVar5 = lVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  pcStack_128 = FUN_104d72510;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = PTR_PTR_1126b0090;
  uStack_180 = unaff_x28;
  uStack_178 = unaff_x27;
  lStack_170 = param_2;
  uStack_168 = unaff_x25;
  lStack_160 = unaff_x24;
  lStack_158 = unaff_x23;
  lStack_150 = lVar1;
  lStack_148 = lVar14;
  lStack_140 = lVar15;
  puStack_138 = puVar13;
  puStack_130 = &stack0xfffffffffffffff0;
  _objc_alloc_init();
  puVar7 = PTR_PTR_1126b0098;
  _objc_alloc_init();
  puVar13 = PTR_PTR_1126b00a0;
  _objc_alloc_init();
  lVar1 = (long)_DAT_11271238c;
  uVar2 = *(undefined8 *)(lVar5 + lVar1);
  *(undefined **)(lVar5 + lVar1) = puVar13;
  _objc_release(uVar2);
  func_0x00010c18b5e0(*(undefined8 *)(lVar5 + lVar1));
  func_0x00010c161980(puVar7);
  lVar1 = lVar5;
  func_0x00010be9d680(lVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar1;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar15;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar14;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1794e0(puVar7);
  _objc_release(lVar16);
  _objc_release(lVar14);
  _objc_release(lVar15);
  _objc_release(lVar1);
  puVar13 = PTR_PTR_1126b00a8;
  _objc_alloc();
  lVar1 = lVar5 + _DAT_112712234;
  _objc_loadWeakRetained(lVar1);
  lVar15 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar15;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c061d40();
  lVar16 = (long)_DAT_112712374;
  uVar2 = *(undefined8 *)(lVar5 + lVar16);
  *(undefined **)(lVar5 + lVar16) = puVar13;
  _objc_release(uVar2);
  _objc_release(lVar14);
  _objc_release(lVar15);
  _objc_release(lVar1);
  func_0x00010c1af000(*(undefined8 *)(lVar5 + lVar16));
  func_0x00010c161080(*(undefined8 *)(lVar5 + lVar16));
  func_0x00010c160fc0(*(undefined8 *)(lVar5 + lVar16));
  lVar1 = (long)_DAT_112712314;
  uVar2 = *(undefined8 *)(lVar5 + lVar1);
  func_0x00010bfe12e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar2);
  func_0x00010c219b60(*(undefined8 *)(lVar5 + lVar16));
  uVar3 = *(undefined8 *)(lVar5 + lVar16);
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(lVar5 + lVar1);
  func_0x00010c08e400(uVar4);
  _objc_retainAutoreleasedReturnValue();
  dVar17 = 12.0;
  uVar2 = uVar3;
  func_0x00010bf493c0(0x4028000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar15 = (long)_DAT_112712390;
  uVar12 = *(undefined8 *)(lVar5 + lVar15);
  *(undefined8 *)(lVar5 + lVar15) = uVar2;
  _objc_release(uVar12);
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(lVar5 + lVar16);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(lVar5 + lVar1);
  func_0x00010bf1ff80(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdd54e0(lVar5);
  uVar2 = uVar3;
  func_0x00010bf493c0(-dVar17);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = (long)_DAT_112712358;
  uVar12 = *(undefined8 *)(lVar5 + lVar1);
  *(undefined8 *)(lVar5 + lVar1) = uVar2;
  _objc_release(uVar12);
  _objc_release(uVar4);
  _objc_release(uVar3);
  puVar13 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uStack_198 = *(undefined8 *)(lVar5 + lVar15);
  uStack_190 = *(undefined8 *)(lVar5 + lVar1);
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar13);
  _objc_release(puVar8);
  _objc_initWeak(auStack_1a0,lVar5);
  uVar9 = *(undefined8 *)(lVar5 + _DAT_1127122fc);
  func_0x00010c269d40(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar9;
  func_0x00010c0c5da0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar3;
  func_0x00010c0e0ea0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = auStack_1a0;
  _objc_copyWeak(auStack_1a8,puVar11);
  uVar10 = uVar12;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar10);
  _objc_release(uVar12);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar9);
  _objc_destroyWeak(auStack_1a8);
  _objc_destroyWeak(auStack_1a0);
  _objc_release(puVar7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_1a8);
  _objc_destroyWeak(auStack_1a0);
  __Unwind_Resume(puVar6);
  puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf529e0(puVar11);
                    /* WARNING: Could not recover jumptable at 0x00010c0df850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar13,PTR_s_numberWithUnsignedInteger__112615828,puVar11)
  ;
  return;
}



/* Entry: 104d72510; end: 104d729a7; -[SCFeatureDirectorModeImpl _setupUndoButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d72510(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  double dVar16;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b0090;
  _objc_alloc_init();
  puVar2 = PTR_PTR_1126b0098;
  _objc_alloc_init();
  puVar3 = PTR_PTR_1126b00a0;
  _objc_alloc_init();
  lVar13 = (long)_DAT_11271238c;
  uVar11 = *(undefined8 *)(param_1 + lVar13);
  *(undefined **)(param_1 + lVar13) = puVar3;
  _objc_release(uVar11);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar13));
  func_0x00010c161980(puVar2);
  lVar13 = param_1;
  func_0x00010be9d680(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar13;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar14;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar4;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1794e0(puVar2);
  _objc_release(lVar15);
  _objc_release(lVar4);
  _objc_release(lVar14);
  _objc_release(lVar13);
  puVar3 = PTR_PTR_1126b00a8;
  _objc_alloc();
  lVar13 = param_1 + _DAT_112712234;
  _objc_loadWeakRetained(lVar13);
  lVar14 = lVar13;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar14;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c061d40();
  lVar15 = (long)_DAT_112712374;
  uVar11 = *(undefined8 *)(param_1 + lVar15);
  *(undefined **)(param_1 + lVar15) = puVar3;
  _objc_release(uVar11);
  _objc_release(lVar4);
  _objc_release(lVar14);
  _objc_release(lVar13);
  func_0x00010c1af000(*(undefined8 *)(param_1 + lVar15));
  func_0x00010c161080(*(undefined8 *)(param_1 + lVar15));
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar15));
  lVar13 = (long)_DAT_112712314;
  uVar11 = *(undefined8 *)(param_1 + lVar13);
  func_0x00010bfe12e0(uVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar11);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar15));
  uVar5 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar13);
  func_0x00010c08e400(uVar6);
  _objc_retainAutoreleasedReturnValue();
  dVar16 = 12.0;
  uVar11 = uVar5;
  func_0x00010bf493c0(0x4028000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar14 = (long)_DAT_112712390;
  uVar12 = *(undefined8 *)(param_1 + lVar14);
  *(undefined8 *)(param_1 + lVar14) = uVar11;
  _objc_release(uVar12);
  _objc_release(uVar6);
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar13);
  func_0x00010bf1ff80(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdd54e0(param_1);
  uVar11 = uVar5;
  func_0x00010bf493c0(-dVar16);
  _objc_retainAutoreleasedReturnValue();
  lVar13 = (long)_DAT_112712358;
  uVar12 = *(undefined8 *)(param_1 + lVar13);
  *(undefined8 *)(param_1 + lVar13) = uVar11;
  _objc_release(uVar12);
  _objc_release(uVar6);
  _objc_release(uVar5);
  puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uStack_78 = *(undefined8 *)(param_1 + lVar14);
  uStack_70 = *(undefined8 *)(param_1 + lVar13);
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar3);
  _objc_release(puVar7);
  _objc_initWeak(auStack_80,param_1);
  uVar8 = *(undefined8 *)(param_1 + _DAT_1127122fc);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar8;
  func_0x00010c0c5da0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar11;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar5;
  func_0x00010c0e0ea0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = auStack_80;
  _objc_copyWeak(auStack_88,puVar10);
  uVar9 = uVar12;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar9);
  _objc_release(uVar12);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar11);
  _objc_release(uVar8);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  __Unwind_Resume(puVar1);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf529e0(puVar10);
                    /* WARNING: Could not recover jumptable at 0x00010c0df850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar3,PTR_s_numberWithUnsignedInteger__112615828,puVar10);
  return;
}



/* Entry: 104d729a8; end: 104d72a2f;  */

void FUN_104d729a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf529e0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithUnsignedInteger__112615828,param_2);
  return;
}



/* Entry: 104d72a30; end: 104d72abb; -[SCFeatureDirectorModeImpl _updateUndoButtonConstraintsWithPickerStatus:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d72a30(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  uVar1 = 0x404e000000000000;
  if (param_3 == 0) {
    uVar1 = 0x4028000000000000;
  }
  func_0x00010c181140(uVar1,*(undefined8 *)(param_1 + _DAT_112712390));
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_104d72abc;
  puStack_30 = &UNK_110842e18;
  lStack_28 = param_1;
  func_0x00010bf03400(0x3fd0000000000000,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_48);
  return;
}



/* Entry: 104d72abc; end: 104d72acf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d72abc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112712314),
             PTR_s_layoutIfNeeded_112600d80);
  return;
}



/* Entry: 104d72ad0; end: 104d72deb; -[SCFeatureDirectorModeImpl _setupMusicButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d72ad0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = *(undefined **)(param_1 + _DAT_1127122d8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010befb820();
  _objc_release();
  if (((ulong)puVar2 & 1) == 0) {
    puVar1 = PTR_PTR_1126affa0;
    _objc_alloc_init();
    puVar3 = PTR_PTR_1126b00b0;
    _objc_alloc_init();
    puVar2 = PTR_PTR_1126b00b8;
    _objc_alloc();
    lVar14 = param_1 + _DAT_112712234;
    _objc_loadWeakRetained(lVar14);
    lVar4 = lVar14;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c142e00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c061d40();
    lVar13 = (long)_DAT_112712334;
    uVar12 = *(undefined8 *)(param_1 + lVar13);
    *(undefined **)(param_1 + lVar13) = puVar2;
    _objc_release(uVar12);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar14);
    _objc_initWeak(auStack_80,param_1);
    _objc_copyWeak(auStack_88,auStack_80);
    func_0x00010c1d2b60(puVar3);
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar13));
    lVar14 = (long)_DAT_112712314;
    uVar12 = *(undefined8 *)(param_1 + lVar14);
    func_0x00010bfe12e0(uVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(uVar12);
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar6 = *(undefined8 *)(param_1 + lVar13);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + lVar14);
    func_0x00010c274200(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar6;
    func_0x00010bf493c0(0x4030000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + lVar13);
    uStack_78 = uVar12;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + lVar14);
    func_0x00010bf34860(uVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar8;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_70 = uVar10;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar12);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
    _objc_release(puVar3);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  __Unwind_Resume(puVar1);
  puVar1 = puVar1 + 0x20;
  _objc_loadWeakRetained(puVar1);
  func_0x00010be6a220();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d72dec; end: 104d72e17;  */

void FUN_104d72dec(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6a220();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d72e18; end: 104d72ec7; -[SCFeatureDirectorModeImpl _bottomInset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_104d72e18(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  double dVar6;
  
  lVar5 = (long)_DAT_112712314;
  lVar2 = *(long *)(param_1 + lVar5);
  func_0x00010bf2b180();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x00010c0f0780();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = *(long *)(param_1 + lVar5);
    lVar4 = lVar3;
    _objc_release();
    if (lVar3 == lVar5) {
      dVar6 = *(double *)(param_1 + _DAT_112712354) + 12.0;
      goto LAB_104d72ea8;
    }
  }
  iVar1 = (int)lVar4;
  func_0x000100478f84();
  if (iVar1 != 0) {
    dVar6 = 12.0;
    func_0x0001007f8afc();
    if (iVar1 == 0) goto LAB_104d72ea8;
  }
  dVar6 = 88.0;
LAB_104d72ea8:
  _objc_release(lVar2);
  return dVar6;
}



/* Entry: 104d72ec8; end: 104d72f7b; -[SCFeatureDirectorModeImpl _onMusicButtonTapped] */

void FUN_104d72ec8(ulong param_1)

{
  ulong uVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  uVar1 = param_1;
  func_0x00010be448a0();
  if ((uVar1 & 1) == 0) {
    _objc_initWeak(auStack_28,param_1);
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    pcStack_40 = FUN_104d72f7c;
    puStack_38 = &UNK_1108434b0;
    _objc_copyWeak(auStack_30,auStack_28);
    func_0x0001000d76cc("APPSTORE",&puStack_50);
    _objc_destroyWeak(auStack_30);
    _objc_destroyWeak(auStack_28);
  }
  return;
}



/* Entry: 104d72f7c; end: 104d72fcb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d72f7c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + _DAT_11271232c;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bfa2040();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d72fcc; end: 104d7302b; -[SCFeatureDirectorModeImpl _isCapturingObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d72fcc(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112712394;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 104d7302c; end: 104d7308b; -[SCFeatureDirectorModeImpl _progressObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d7302c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112712368;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 104d7308c; end: 104d730eb; -[SCFeatureDirectorModeImpl _segmentsObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d7308c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112712398;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 104d730ec; end: 104d7314b; -[SCFeatureDirectorModeImpl _captureDurationObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d730ec(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11271236c;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 104d7314c; end: 104d731ab; -[SCFeatureDirectorModeImpl _previewButtonStateObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d7314c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11271239c;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 104d731ac; end: 104d7320b; -[SCFeatureDirectorModeImpl _toastMessageObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d731ac(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112712338;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 104d7320c; end: 104d73397; -[SCFeatureDirectorModeImpl _segmentsEndDurationArray] */

void FUN_104d7320c(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  double dVar7;
  double dVar8;
  double dStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  double dStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x00010c0c45a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar6;
  func_0x00010c1581e0();
  _objc_release(uVar6);
  if (uVar2 != 0) {
    uVar6 = 0;
    dVar8 = 0.0;
    do {
      uVar2 = param_1;
      func_0x00010c0c45a0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c1585e0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      _objc_release(uVar2);
      if (uVar4 == 0) {
        dStack_78 = 0.0;
        uStack_80 = 0;
        uStack_68 = 0;
        uStack_70 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
      }
      else {
        func_0x00010c27c900(&uStack_90,uVar4);
      }
      uStack_a8 = uStack_70;
      dStack_b0 = dStack_78;
      uStack_a0 = uStack_68;
      dVar7 = dStack_78;
      _CMTimeGetSeconds(&dStack_b0);
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      dVar8 = dVar8 + dVar7;
      func_0x00010c0c2ac0(param_1);
      func_0x00010c0df720(dVar8 / dVar7,puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar1,param_2,puVar5);
      _objc_release(puVar5);
      _objc_release(uVar4);
      uVar6 = uVar6 + 1;
      uVar2 = param_1;
      func_0x00010c0c45a0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c1581e0();
      _objc_release(uVar2);
    } while (uVar6 < uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104d73398; end: 104d7349b; -[SCFeatureDirectorModeImpl _updateSnapDocLensFromSegments:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d73398(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  uVar3 = *(undefined8 *)(param_1 + _DAT_112712230);
  _objc_retain(param_3);
  func_0x00010c0cfdc0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c240000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar3);
  uVar1 = param_3;
  func_0x00010bfb2040(param_3,param_2,&PTR___NSConcreteGlobalBlock_11084e4a0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_104d734d4;
  puStack_40 = &UNK_11084e6e0;
  uStack_38 = uVar1;
  _objc_retain(uVar1);
  func_0x00010c28a040(uVar2,param_2,&puStack_58);
  _objc_release(uStack_38);
  _objc_release(uVar1);
  _objc_release(uVar2);
  return;
}



/* Entry: 104d7349c; end: 104d734d3;  */

bool FUN_104d7349c(undefined8 param_1,long param_2)

{
  func_0x00010bef0a60(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_2 != 0;
}



/* Entry: 104d734d4; end: 104d7357f;  */

void FUN_104d734d4(long param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b00c0;
  if (*(long *)(param_1 + 0x20) == 0) {
    _objc_retain(param_2);
    func_0x00010c1ba8a0(param_2);
  }
  else {
    _objc_retain(param_2);
    _objc_opt_new(puVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bef0a60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c1a99c0(puVar1);
    _objc_release(uVar2);
    func_0x00010c1ba8a0(param_2);
    _objc_release(param_2);
    param_2 = puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104d73580; end: 104d73627; -[SCFeatureDirectorModeImpl _updateSegmentCaptureProgress] */

void FUN_104d73580(undefined8 param_1)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_104d73628;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104d73628; end: 104d737bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d73628(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  double dVar6;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  param_2 = param_2 + 0x20;
  _objc_loadWeakRetained();
  if (param_2 != 0) {
    uVar4 = *(undefined8 *)(param_2 + _DAT_112712398);
    lVar1 = param_2;
    func_0x00010be9d620(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar4,param_3,lVar1);
    _objc_release(lVar1);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar4 = *(undefined8 *)(param_2 + _DAT_112712368);
    lVar1 = param_2;
    func_0x00010c0c45a0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      uStack_58 = 0;
      uStack_50 = 0;
      uStack_48 = 0;
    }
    else {
      func_0x00010c276460(&uStack_58,lVar1);
    }
    _CMTimeGetSeconds(&uStack_58);
    dVar6 = param_1;
    func_0x00010c0c2ac0(param_2);
    func_0x00010c0df720(param_1 / dVar6,puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar4,param_3,puVar2);
    _objc_release(puVar2);
    _objc_release(lVar1);
    func_0x00010be015e0(param_2);
    lVar1 = param_2;
    func_0x00010c0c45a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c1581e0();
    _objc_release(lVar1);
    lVar5 = (long)_DAT_1127123a0;
    lVar1 = param_2 + lVar5;
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar1 == 0) {
      func_0x00010c177560(param_2,param_3,lVar3 != 0,0,0);
    }
    else {
      lVar5 = param_2 + lVar5;
      _objc_loadWeakRetained(lVar5);
      func_0x00010c136e00();
      _objc_release(lVar5);
    }
  }
  _objc_release(param_2);
  return;
}



/* Entry: 104d737bc; end: 104d7384f; -[SCFeatureDirectorModeImpl _didUpdateDuration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d737bc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar1 = param_1 + _DAT_11271232c;
  _objc_loadWeakRetained(lVar1);
  lVar2 = param_1;
  func_0x00010c0c45a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
  }
  else {
    func_0x00010c276200(&uStack_48,lVar2);
  }
  _CMTimeGetSeconds(&uStack_48);
  func_0x00010bfa1f80(lVar1,param_2,param_1);
  _objc_release(lVar2);
  _objc_release(lVar1);
  return;
}



/* Entry: 104d73850; end: 104d738a7; -[SCFeatureDirectorModeImpl _setRecordingStarted:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d73850(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  *(undefined1 *)(param_1 + _DAT_112712364) = param_3;
  uVar2 = *(undefined8 *)(param_1 + _DAT_112712394);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d738a8; end: 104d7391f; -[SCFeatureDirectorModeImpl _runMemoriesPickerCompletion] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d738a8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = param_1 + _DAT_11271232c;
  _objc_loadWeakRetained(lVar2);
  func_0x00010bfa1fe0();
  _objc_release(lVar2);
  lVar2 = (long)_DAT_112712328;
  if (*(long *)(param_1 + lVar2) != 0) {
    (**(code **)(*(long *)(param_1 + lVar2) + 0x10))();
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 104d73920; end: 104d73947; -[SCFeatureDirectorModeImpl _shouldShowDiscardAlertWhenExiting] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_104d73920(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_11271230c);
  func_0x00010c1581e0(lVar1);
  return lVar1 != 0;
}



/* Entry: 104d73948; end: 104d73b9b; -[SCFeatureDirectorModeImpl _showDiscardAlert] */

void FUN_104d73948(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined1 *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_initWeak(auStack_70,param_1);
  puVar2 = PTR_PTR_1126aed70;
  ppuVar1 = &PTR____CFConstantStringClassReference_110db1898;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db1898,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_104d73b9c;
  puStack_80 = &UNK_1108482a8;
  _objc_copyWeak(auStack_78,auStack_70);
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar3 = PTR_PTR_1126aed70;
  ppuVar1 = &PTR____CFConstantStringClassReference_110daf8b8;
  uVar10 = 0;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf8b8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar4 = PTR_PTR_1126aed78;
  _objc_alloc();
  puVar5 = puVar4;
  func_0x00010703ce48();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010703ce60();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_68 = puVar2;
  puStack_60 = puVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar4);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  func_0x00010c211b40(puVar4);
  func_0x00010be79fe0(param_1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_78);
  puVar8 = auStack_70;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_70);
  puVar9 = puVar8;
  __Unwind_Resume(puVar8);
  pcStack_a8 = FUN_104d73b9c;
  puStack_d0 = puVar5;
  puStack_c8 = puVar3;
  puStack_c0 = puVar2;
  puStack_b8 = puVar8;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(uVar10);
  _objc_copyWeak(auStack_d8,puVar9 + 0x20);
  func_0x00010bf84b00(uVar10);
  _objc_destroyWeak(auStack_d8);
  _objc_release(uVar10);
  return;
}



/* Entry: 104d73b9c; end: 104d73c43;  */

void FUN_104d73b9c(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010bf84b00(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 104d73c44; end: 104d73cf3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d73c44(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112712230);
    func_0x00010c0cfdc0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c240000();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bf2a0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    func_0x00010bf6b5c0(*(undefined8 *)(param_1 + _DAT_11271230c));
    func_0x00010c137fe0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d73cf4; end: 104d73d03;  */

void FUN_104d73cf4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 104d73d04; end: 104d73ff3; -[SCFeatureDirectorModeImpl _showDeletDraftAlert] */

void FUN_104d73d04(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  undefined1 auStack_128 [8];
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined1 *puStack_108;
  undefined1 *puStack_100;
  code *pcStack_f8;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_initWeak(auStack_98,param_1);
  puVar2 = PTR_PTR_1126aed70;
  ppuVar1 = &PTR____CFConstantStringClassReference_110db18b8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db18b8,0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_104d73ff4;
  puStack_a8 = &UNK_1108482a8;
  _objc_copyWeak(auStack_a0,auStack_98);
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar3 = PTR_PTR_1126aed70;
  ppuVar1 = &PTR____CFConstantStringClassReference_110db1898;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db1898,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_e8 = puVar4;
  uStack_e0 = 0xc2000000;
  pcStack_d8 = FUN_104d740d0;
  puStack_d0 = &UNK_1108482a8;
  _objc_copyWeak(auStack_c8,auStack_98);
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar4 = PTR_PTR_1126aed70;
  ppuVar1 = &PTR____CFConstantStringClassReference_110daf8b8;
  uVar10 = 0;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf8b8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar5 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar6 = puVar5;
  func_0x00010703ce78();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_90 = puVar2;
  puStack_88 = puVar3;
  puStack_80 = puVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar5);
  _objc_release(puVar7);
  _objc_release(puVar6);
  func_0x00010c211b40(puVar5);
  func_0x00010be79fe0(param_1);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_c8);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_a0);
  puVar8 = auStack_98;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_c8);
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_98);
  puVar9 = puVar8;
  __Unwind_Resume(puVar8);
  pcStack_f8 = FUN_104d73ff4;
  puStack_120 = puVar4;
  puStack_118 = puVar3;
  puStack_110 = puVar2;
  puStack_108 = puVar8;
  puStack_100 = &stack0xfffffffffffffff0;
  _objc_retain(uVar10);
  _objc_copyWeak(auStack_128,puVar9 + 0x20);
  func_0x00010bf84b00(uVar10);
  _objc_destroyWeak(auStack_128);
  _objc_release(uVar10);
  return;
}



/* Entry: 104d73ff4; end: 104d7409b;  */

void FUN_104d73ff4(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010bf84b00(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 104d7409c; end: 104d740cf;  */

void FUN_104d7409c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bdf9ea0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d740d0; end: 104d74177;  */

void FUN_104d740d0(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010bf84b00(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 104d74178; end: 104d741ab;  */

void FUN_104d74178(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be0bf60(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d741ac; end: 104d741bb;  */

void FUN_104d741ac(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 104d741bc; end: 104d743af; -[SCFeatureDirectorModeImpl _showUndoSegmentsAlertWithTitle:completion:] */

void FUN_104d741bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126aed70;
  _objc_retain(param_3);
  ppuVar1 = &PTR____CFConstantStringClassReference_110db18b8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db18b8,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar3 = PTR_PTR_1126aed70;
  ppuVar1 = &PTR____CFConstantStringClassReference_110daf8b8;
  uVar6 = 0;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf8b8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar4 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar4);
  _objc_release(param_3);
  _objc_release(puVar5);
  func_0x00010c211b40(puVar4);
  func_0x00010be79fe0(param_1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar6,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,
             *(undefined8 *)(param_4 + 0x20));
  return;
}



/* Entry: 104d743b0; end: 104d743cf;  */

void FUN_104d743b0(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 104d743d0; end: 104d74567; -[SCFeatureDirectorModeImpl _undoLastSegment] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d743d0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  
  lVar9 = param_1;
  func_0x00010c0c45a0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar9;
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(lVar9);
  func_0x00010c18e100(lVar2,param_2,0xc);
  func_0x00010c18ed00(lVar2,param_2,0);
  lVar9 = (long)_DAT_112712230;
  uVar3 = *(undefined8 *)(param_1 + lVar9);
  func_0x00010c0cfdc0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c240000();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126affe8;
  lVar6 = *(long *)(param_1 + lVar9);
  func_0x00010c0cfdc0(lVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar9;
  func_0x00010c240000();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar1;
  func_0x00010c09dea0();
  func_0x00010c09e180(puVar8,param_2,lVar7 + -1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6c760(uVar5,param_2,puVar8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar8);
  _objc_release(lVar1);
  _objc_release(lVar9);
  _objc_release(lVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  func_0x00010c0c45a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6c200();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 104d74568; end: 104d7478f; -[SCFeatureDirectorModeImpl _undoImportedSegments] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d74568(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  undefined1 auStack_270 [8];
  undefined *puStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined *puStack_250;
  undefined1 auStack_248 [8];
  undefined *puStack_240;
  undefined8 uStack_238;
  code *pcStack_230;
  undefined *puStack_228;
  undefined1 auStack_220 [8];
  undefined1 auStack_218 [8];
  undefined *puStack_210;
  undefined8 uStack_208;
  code *pcStack_200;
  undefined *puStack_1f8;
  undefined1 auStack_1f0 [8];
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  code *pcStack_1d8;
  undefined *puStack_1d0;
  undefined1 auStack_1c8 [8];
  undefined1 auStack_1c0 [16];
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar11 = (long)_DAT_11271234c;
  lVar1 = *(long *)(param_1 + lVar11);
  func_0x00010c140200();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar1;
  func_0x00010bf52a60();
  lVar12 = lRam0000000000000000;
  while (lVar6 != 0) {
    lVar14 = 0;
    do {
      if (lRam0000000000000000 != lVar12) {
        _objc_enumerationMutation(lVar1);
      }
      uVar13 = *(undefined8 *)(lVar14 * 8);
      lVar2 = param_1;
      func_0x00010c0c45a0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c1585e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfecde0();
      _objc_release(lVar3);
      _objc_release(lVar2);
      func_0x00010c18e100(uVar13);
      func_0x00010c18ed00(uVar13);
      uVar4 = *(undefined8 *)(param_1 + _DAT_112712230);
      func_0x00010c0cfdc0();
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar4;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar13;
      func_0x00010c240000();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126affe8;
      func_0x00010c09e180();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf6c760(uVar8);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar5);
      _objc_release(uVar8);
      _objc_release(uVar13);
      _objc_release(uVar4);
      lVar2 = param_1;
      func_0x00010c0c45a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf6c780();
      _objc_release(lVar2);
      lVar14 = lVar14 + 1;
    } while (lVar6 != lVar14);
    lVar6 = lVar1;
    func_0x00010bf52a60();
  }
  _objc_release(lVar1);
  lVar6 = *(long *)(param_1 + lVar11);
  *(undefined8 *)(param_1 + lVar11) = 0;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  _objc_initWeak(auStack_1c0,lVar6);
  puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  uVar13 = *(undefined8 *)(lVar6 + _DAT_11271226c);
  puStack_1e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1e0 = 0xc2000000;
  pcStack_1d8 = FUN_104d74bb0;
  puStack_1d0 = &UNK_11084e590;
  _objc_copyWeak(auStack_1c8,auStack_1c0);
  func_0x00010c25ff60(uVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar13);
  uVar7 = *(undefined8 *)(lVar6 + _DAT_112712220);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar7;
  func_0x00010bef1060();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar13;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar13;
  func_0x00010c0e0ec0(uVar13);
  _objc_retainAutoreleasedReturnValue();
  puStack_210 = puVar5;
  uStack_208 = 0xc2000000;
  pcStack_200 = FUN_104d74d88;
  puStack_1f8 = &UNK_110842a38;
  _objc_copyWeak(auStack_1f0,auStack_1c0);
  uVar9 = uVar4;
  func_0x00010c25ff60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar9);
  _objc_release(uVar4);
  _objc_release(uVar8);
  _objc_release(uVar13);
  _objc_release(uVar7);
  _objc_initWeak(auStack_218,lVar6);
  lVar12 = (long)_DAT_112712270;
  uVar8 = *(undefined8 *)(lVar6 + lVar12);
  func_0x00010bf72840(uVar8);
  _objc_retainAutoreleasedReturnValue();
  puStack_240 = puVar5;
  uStack_238 = 0xc2000000;
  pcStack_230 = FUN_104d74e20;
  puStack_228 = &UNK_110846510;
  _objc_copyWeak(auStack_220,auStack_218);
  uVar13 = uVar8;
  func_0x00010c25ff60(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar13);
  _objc_release(uVar8);
  uVar8 = *(undefined8 *)(lVar6 + lVar12);
  func_0x00010bf75dc0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  puStack_268 = puVar5;
  uStack_260 = 0xc2000000;
  uStack_258 = 0x104d74e58;
  puStack_250 = &UNK_110846510;
  _objc_copyWeak(auStack_248,auStack_218);
  uVar13 = uVar8;
  func_0x00010c25ff60(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar13);
  _objc_release(uVar8);
  uVar9 = *(undefined8 *)(lVar6 + _DAT_11271222c);
  func_0x00010bfa1820(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar9;
  func_0x00010befe720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar13;
  func_0x00010c0e0ea0(uVar13);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_270,auStack_218);
  uVar4 = uVar8;
  func_0x00010c25ff60(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar8);
  _objc_release(uVar9);
  _objc_destroyWeak(auStack_270);
  _objc_release(uVar13);
  _objc_destroyWeak(auStack_248);
  _objc_destroyWeak(auStack_220);
  _objc_destroyWeak(auStack_218);
  _objc_destroyWeak(auStack_1f0);
  _objc_destroyWeak(auStack_1c8);
  _objc_destroyWeak(auStack_1c0);
  return;
}



/* Entry: 104d74790; end: 104d74baf; -[SCFeatureDirectorModeImpl _subscribeToObservables] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d74790(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_130 [8];
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined1 auStack_108 [8];
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_initWeak(auStack_80,param_1);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uVar6 = *(undefined8 *)(param_1 + _DAT_11271226c);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_104d74bb0;
  puStack_90 = &UNK_11084e590;
  _objc_copyWeak(auStack_88,auStack_80);
  func_0x00010c25ff60(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar6);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112712220);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010bef1060();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar6;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar6;
  func_0x00010c0e0ec0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  puStack_d0 = puVar1;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_104d74d88;
  puStack_b8 = &UNK_110842a38;
  _objc_copyWeak(auStack_b0,auStack_80);
  uVar5 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar6);
  _objc_release(uVar2);
  _objc_initWeak(auStack_d8,param_1);
  lVar7 = (long)_DAT_112712270;
  uVar4 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010bf72840(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puStack_100 = puVar1;
  uStack_f8 = 0xc2000000;
  pcStack_f0 = FUN_104d74e20;
  puStack_e8 = &UNK_110846510;
  _objc_copyWeak(auStack_e0,auStack_d8);
  uVar6 = uVar4;
  func_0x00010c25ff60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar6);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010bf75dc0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puStack_128 = puVar1;
  uStack_120 = 0xc2000000;
  uStack_118 = 0x104d74e58;
  puStack_110 = &UNK_110846510;
  _objc_copyWeak(auStack_108,auStack_d8);
  uVar6 = uVar4;
  func_0x00010c25ff60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar6);
  _objc_release(uVar4);
  uVar5 = *(undefined8 *)(param_1 + _DAT_11271222c);
  func_0x00010bfa1820(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010befe720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar6;
  func_0x00010c0e0ea0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_130,auStack_d8);
  uVar3 = uVar4;
  func_0x00010c25ff60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar5);
  _objc_destroyWeak(auStack_130);
  _objc_release(uVar6);
  _objc_destroyWeak(auStack_108);
  _objc_destroyWeak(auStack_e0);
  _objc_destroyWeak(auStack_d8);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  return;
}



/* Entry: 104d74bb0; end: 104d74ce3;  */

void FUN_104d74bb0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_104d74ce8;
  puStack_60 = &UNK_110849200;
  _objc_copyWeak(auStack_58,param_1 + 0x20);
  puStack_a0 = puVar1;
  uStack_98 = 0xc2000000;
  uStack_90 = 0x104d74d1c;
  puStack_88 = &UNK_110849200;
  _objc_copyWeak(auStack_80,param_1 + 0x20);
  _objc_copyWeak(auStack_a8,param_1 + 0x20);
  func_0x00010c0c15c0(param_2);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_2);
  return;
}



/* Entry: 104d74ce4; end: 104d74ce7;  */

void FUN_104d74ce4(void)

{
  return;
}



/* Entry: 104d74ce8; end: 104d74d83;  */

void FUN_104d74ce8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bee9de0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d74d84; end: 104d74d87;  */

void FUN_104d74d84(void)

{
  return;
}



/* Entry: 104d74d88; end: 104d74e1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d74d88(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = param_2;
    func_0x00010bf1f3c0();
    *(char *)(param_1 + _DAT_1127123a4) = (char)uVar1;
    uVar1 = *(undefined8 *)(param_1 + _DAT_112712314);
    func_0x00010bf2b240(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0(param_2);
    func_0x00010c0e4d20(uVar1);
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104d74e20; end: 104d74edf;  */

void FUN_104d74e20(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be8f5a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d74ee0; end: 104d74f27; -[SCFeatureDirectorModeImpl snapEditorTemplatesEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104d74ee0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127122a4);
  func_0x00010c27d8a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c240d60();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 104d74f28; end: 104d75043; -[SCFeatureDirectorModeImpl _subscribeToSegmentObservables] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d74f28(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar4 = (long)_DAT_1127123a8;
  if (*(long *)(param_1 + lVar4) != 0) {
    func_0x00010bf86d40();
  }
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271230c);
  func_0x00010c158520();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  uVar2 = uVar1;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined8 *)(param_1 + lVar4) = uVar2;
  _objc_release(uVar3);
  _objc_release(uVar1);
  func_0x00010bf1a3e0(*(undefined8 *)(param_1 + lVar4));
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 104d75044; end: 104d75077;  */

void FUN_104d75044(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bedf5c0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d75078; end: 104d75193; -[SCFeatureDirectorModeImpl _subscribeToTimelineConfigurationStatusObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d75078(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar4 = (long)_DAT_112712310;
  if (*(long *)(param_1 + lVar4) != 0) {
    func_0x00010bf86d40();
  }
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271230c);
  func_0x00010c270020();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  uVar2 = uVar1;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined8 *)(param_1 + lVar4) = uVar2;
  _objc_release(uVar3);
  _objc_release(uVar1);
  func_0x00010bf1a3e0(*(undefined8 *)(param_1 + lVar4));
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 104d75194; end: 104d751e3;  */

void FUN_104d75194(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010beddc20(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104d751e4; end: 104d7524b; -[SCFeatureDirectorModeImpl _isSnapRecoverySupported] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_104d751e4(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  
  uVar1 = param_1 + (long)_DAT_11271231c;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010c070e60();
  if (((uVar2 & 1) == 0) && (uVar2 = param_1, func_0x00010be448a0(), (uVar2 & 1) == 0)) {
    bVar3 = *(byte *)(param_1 + (long)_DAT_1127122d0) ^ 1;
  }
  else {
    bVar3 = 0;
  }
  _objc_release(uVar1);
  return bVar3 & 1;
}



/* Entry: 104d7524c; end: 104d75273; -[SCFeatureDirectorModeImpl _isTemplatesUseCase] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_104d7524c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_11271230c);
  func_0x00010c28fca0(lVar1);
  return lVar1 == 4;
}



/* Entry: 104d75274; end: 104d7540f; -[SCFeatureDirectorModeImpl _reportCreationStep:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d75274(long param_1,undefined8 param_2,undefined8 *param_3,undefined1 *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = param_3;
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + _DAT_11271230c);
  if (lVar1 != 0) {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    func_0x00010c1585e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = &uStack_130;
    param_4 = auStack_f0;
    lVar2 = lVar1;
    func_0x00010bf52a60();
    if (lVar2 != 0) {
      lVar8 = *plStack_120;
      do {
        lVar9 = 0;
        do {
          if (*plStack_120 != lVar8) {
            _objc_enumerationMutation(lVar1);
          }
          uVar7 = *(undefined8 *)(lStack_128 + lVar9 * 8);
          lVar3 = param_1;
          func_0x00010bf2af60(param_1);
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar3;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf311e0(uVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0a2440(lVar4,param_2,uVar7,param_3,0,0,0,0,0xd,0);
          _objc_release(uVar7);
          _objc_release(lVar4);
          _objc_release(lVar3);
          lVar9 = lVar9 + 1;
        } while (lVar2 != lVar9);
        puVar6 = &uStack_130;
        param_4 = auStack_f0;
        lVar2 = lVar1;
        func_0x00010bf52a60(lVar1,param_2,puVar6,param_4,0x10);
      } while (lVar2 != 0);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_4);
  _objc_retain(puVar6);
  func_0x00010bf2af60(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = param_3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a2440();
  _objc_release(param_4);
  _objc_release(puVar6);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104d75410; end: 104d754b7; -[SCFeatureDirectorModeImpl _reportCreationStep:withImportContentId:] */

void FUN_104d75410(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf2af60(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a2440();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d754b8; end: 104d7550f; -[SCFeatureDirectorModeImpl _speedModeRecordingSpeedMultiplier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_104d754b8(double param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + _DAT_112712224);
  func_0x00010bfa1820(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c249d20();
  _objc_release(uVar1);
  if (param_1 <= 0.0) {
    param_1 = 1.0;
  }
  return param_1;
}



/* Entry: 104d75510; end: 104d75743; -[SCFeatureDirectorModeImpl _showOnboardingDialogIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d75510(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  
  lVar15 = (long)_DAT_11271220c;
  uVar1 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010bf7f280();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c291ea0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (((int)uVar3 != 0) && (lVar14 = (long)_DAT_112712344, *(long *)(param_1 + lVar14) == 0)) {
    uVar4 = param_1 + _DAT_112712288;
    _objc_loadWeakRetained();
    uVar5 = uVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bfdb900();
    _objc_release(uVar5);
    _objc_release(uVar4);
    if ((uVar6 & 1) == 0) {
      puVar7 = PTR_PTR_1126b00c8;
      _objc_alloc();
      puVar8 = puVar7;
      func_0x000104d7e4dc();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x000104d7e4f4();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = *(undefined8 *)(param_1 + lVar15);
      func_0x00010bf7f280();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar10;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c0e7e80();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = *(undefined8 *)(param_1 + lVar15);
      func_0x00010bf7f280(uVar11);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar11;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar1;
      func_0x00010c0e7ea0();
      _objc_retainAutoreleasedReturnValue();
      lVar15 = param_1 + _DAT_112712284;
      _objc_loadWeakRetained(lVar15);
      func_0x00010c031a40();
      uVar13 = *(undefined8 *)(param_1 + lVar14);
      *(undefined **)(param_1 + lVar14) = puVar7;
      _objc_release(uVar13);
      _objc_release(lVar15);
      _objc_release(uVar12);
      _objc_release(uVar1);
      _objc_release(uVar11);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar10);
      _objc_release(puVar9);
      _objc_release(puVar8);
      func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar14));
                    /* WARNING: Could not recover jumptable at 0x00010c10ae10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(param_1 + lVar14),PTR_s_present_1126205a0);
      return;
    }
  }
  return;
}



/* Entry: 104d75744; end: 104d757bf; -[SCFeatureDirectorModeImpl cameraModeOnboardingDialogPresenter:presentDialog:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d75744(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112712288;
  _objc_retain(param_4);
  lVar2 = param_1 + lVar2;
  _objc_loadWeakRetained(lVar2);
  lVar1 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18e420();
  _objc_release(lVar1);
  _objc_release(lVar2);
  func_0x00010be79fe0(param_1,param_2,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104d757c0; end: 104d7583b; -[SCFeatureDirectorModeImpl _presentAlertDialog:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d757c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11271232c;
  _objc_retain(param_3);
  param_1 = param_1 + lVar1;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0f3d20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010c10eda0(lVar1,param_2,param_3,1,0);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104d7583c; end: 104d758d7; -[SCFeatureDirectorModeImpl _tempFileWriterFilePathForFileName:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d7583c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + _DAT_11271228c);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bfacf80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar3);
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bfad300(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104d758d8; end: 104d7593f; -[SCFeatureDirectorModeImpl _isCameraRollImportWithContentManagerEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104d758d8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271220c);
  func_0x00010c270180(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c26fe80();
  _objc_release(uVar2);
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 104d75940; end: 104d75a8f; -[SCFeatureDirectorModeImpl _setVideoStabilizationEnabledIfApplicable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d75940(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271220c);
  func_0x00010bf7f280();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c29b460();
  _objc_release(uVar3);
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    if (param_3 == 0) {
      uVar1 = 0;
    }
    else {
      func_0x0001000cb554();
    }
    lVar5 = (long)_DAT_112712240;
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b00d0;
    func_0x00010c209000(PTR_PTR_1126b00d0,param_2,1,uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25f160(uVar3,param_2,puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b00d0;
    func_0x00010c209000(PTR_PTR_1126b00d0,param_2,0,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25f160(uVar3,param_2,puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 104d75a90; end: 104d75c13; -[SCFeatureDirectorModeImpl _showLoadingIndicator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d75a90(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar7 = (long)_DAT_1127123ac;
  if (*(long *)(param_1 + lVar7) != 0) {
    return;
  }
  lVar1 = param_1 + _DAT_11271232c;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c0f3d20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c10f940();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar4 != 0) {
    puVar5 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010bf20c00(lVar4);
    func_0x00010c013de0();
    uVar6 = *(undefined8 *)(param_1 + lVar7);
    *(undefined **)(param_1 + lVar7) = puVar5;
    _objc_release(uVar6);
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar7),param_2,0);
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41680(0,0x3fe3333333333333,PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_1 + lVar7),param_2,puVar5);
    _objc_release(puVar5);
    puVar5 = PTR_PTR_1126aeff0;
    _objc_alloc(PTR_PTR_1126aeff0);
    func_0x00010bfffb60();
    func_0x00010c219b60();
    func_0x00010befbb60(*(undefined8 *)(param_1 + lVar7),param_2,puVar5);
    func_0x00010befbb60(lVar4,param_2,*(undefined8 *)(param_1 + lVar7));
    func_0x00010c14c920(puVar5);
    func_0x00010c14c940(*(undefined8 *)(param_1 + lVar7));
    func_0x00010c24dbc0(puVar5);
    _objc_release(puVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 104d75c14; end: 104d75c57; -[SCFeatureDirectorModeImpl _hideLoadingIndicator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d75c14(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127123ac;
  if (*(long *)(param_1 + lVar2) != 0) {
    func_0x00010c12c960();
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 104d75c58; end: 104d75fc7; -[SCFeatureDirectorModeImpl _showLoadingIndicatorForPreview] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_104d75c58(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126aff10;
  func_0x00010bfea420(PTR_PTR_1126aff10,param_2,*(undefined8 *)(param_1 + _DAT_1127122b4));
  if (((int)puVar1 != 0) && (lVar18 = (long)_DAT_11271233c, *(long *)(param_1 + lVar18) == 0)) {
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    lVar16 = (long)_DAT_112712314;
    func_0x00010bf20c00(*(undefined8 *)(param_1 + lVar16));
    func_0x00010c013de0();
    uVar17 = *(undefined8 *)(param_1 + lVar18);
    *(undefined **)(param_1 + lVar18) = puVar1;
    _objc_release(uVar17);
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar18),param_2,0);
    puVar1 = PTR__OBJC_CLASS___UIBlurEffect_1126b00d8;
    func_0x00010bf8cf60(PTR__OBJC_CLASS___UIBlurEffect_1126b00d8,param_2,2);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIVisualEffectView_1126b00e0;
    _objc_alloc();
    func_0x00010c00ee20();
    func_0x00010c219b60();
    func_0x00010befbb60(*(undefined8 *)(param_1 + lVar18),param_2,puVar2);
    puVar15 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar3 = puVar2;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)(param_1 + lVar18);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf493a0(puVar3,param_2,uVar17);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    puStack_88 = puVar4;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + lVar18);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
    func_0x00010bf493a0(puVar5,param_2,uVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar2;
    puStack_80 = puVar7;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + lVar18);
    func_0x00010c2793a0(uVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar8;
    func_0x00010bf493a0(puVar8,param_2,uVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar2;
    puStack_78 = puVar10;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(param_1 + lVar18);
    func_0x00010bf1ff80(uVar12);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar11;
    func_0x00010bf493a0(puVar11,param_2,uVar12);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_70 = puVar13;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_88,4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar15,param_2,puVar14);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(uVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(uVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(uVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(uVar17);
    _objc_release(puVar3);
    if ((*(byte *)(param_1 + _DAT_1127122ec) & 1) == 0) {
      puVar15 = PTR_PTR_1126aeff0;
      _objc_alloc();
      func_0x00010bfffb60();
      func_0x00010c219b60();
      func_0x00010befbb60(*(undefined8 *)(param_1 + lVar18),param_2,puVar15);
      func_0x00010c14c920(puVar15);
      func_0x00010c24dbc0(puVar15);
      _objc_release(puVar15);
    }
    func_0x00010befbb60(*(undefined8 *)(param_1 + lVar16),param_2,*(undefined8 *)(param_1 + lVar18))
    ;
    func_0x00010c14c940(*(undefined8 *)(param_1 + lVar18));
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar1;
  }
  ___stack_chk_fail();
  puVar1 = puVar1 + _DAT_1127122c4;
  _objc_loadWeakRetained(puVar1);
  _objc_release();
  return (undefined *)(ulong)(puVar1 != (undefined *)0x0);
}



/* Entry: 104d75fc8; end: 104d75fff; -[SCFeatureDirectorModeImpl _isSpotlightPostingFlowEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_104d75fc8(long param_1)

{
  param_1 = param_1 + _DAT_1127122c4;
  _objc_loadWeakRetained(param_1);
  _objc_release();
  return param_1 != 0;
}



/* Entry: 104d76000; end: 104d76043; -[SCFeatureDirectorModeImpl _isPreviewPresentationEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_104d76000(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_1127122c4;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf117e0();
  _objc_release(param_1);
  return lVar1 == 2;
}



/* Entry: 104d76044; end: 104d76087; -[SCFeatureDirectorModeImpl _isSpotlightPostingUploadFlowEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_104d76044(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_1127122c4;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf117e0();
  _objc_release(param_1);
  return lVar1 == 1;
}



/* Entry: 104d76088; end: 104d760d3; -[SCFeatureDirectorModeImpl _presentPreviewScreenIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d76088(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010be42ee0();
  if (((int)lVar1 != 0) && ((*(byte *)(param_1 + _DAT_112712318) & 1) == 0)) {
    *(undefined1 *)(param_1 + _DAT_112712318) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010be7d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentPreview_11257cf60);
    return;
  }
  return;
}



/* Entry: 104d760d4; end: 104d76237; -[SCFeatureDirectorModeImpl _showMemoriesPickerIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d760d4(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  lVar2 = param_1;
  func_0x00010be44100();
  if (((int)lVar2 == 0) || ((*(byte *)(param_1 + _DAT_1127123b0) & 1) != 0)) {
    puVar1 = PTR_PTR_1126aff10;
    func_0x00010bfea420();
    if ((int)puVar1 == 0) {
      return;
    }
    lVar2 = (long)_DAT_1127122ec;
    if (*(char *)(param_1 + lVar2) != '\x01') {
      return;
    }
    if ((*(byte *)(param_1 + _DAT_1127122e4) & 1) != 0) {
      return;
    }
    _objc_initWeak(auStack_28,param_1);
    *(undefined1 *)(param_1 + lVar2) = 0;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    uStack_68 = 0x104d76280;
    puStack_60 = &UNK_1108434b0;
    ppuVar3 = &puStack_78;
    _objc_copyWeak(auStack_58,auStack_28);
    func_0x00010c10d040(param_1);
  }
  else {
    *(undefined1 *)(param_1 + _DAT_1127123b0) = 1;
    _objc_initWeak(auStack_28,param_1);
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    pcStack_40 = FUN_104d76238;
    puStack_38 = &UNK_1108434b0;
    ppuVar3 = &puStack_50;
    _objc_copyWeak(auStack_30,auStack_28);
    func_0x00010c10d040(param_1);
  }
  _objc_destroyWeak(ppuVar3 + 4);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104d76238; end: 104d762e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d76238(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + _DAT_11271230c);
    func_0x00010c1581e0();
    if (lVar1 == 0) {
      func_0x00010be0c040(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d762e4; end: 104d762eb; -[SCFeatureDirectorModeImpl _isTemplateExplorerEnabled] */

undefined8 FUN_104d762e4(void)

{
  return 0;
}



/* Entry: 104d762ec; end: 104d7639f; -[SCFeatureDirectorModeImpl usageMetrics] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d762ec(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_38 = &PTR____CFConstantStringClassReference_110db1678;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,
                      *(undefined8 *)(param_1 + _DAT_1127122a8));
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_30 = puVar1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_30,&ppuStack_38,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 104d763a0; end: 104d763a3; -[SCFeatureDirectorModeImpl resetMetrics] */

void FUN_104d763a0(void)

{
  return;
}


