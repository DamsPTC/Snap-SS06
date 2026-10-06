/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106e07288; end: 106e072bf;  */

bool FUN_106e07288(undefined8 param_1,long param_2)

{
  func_0x00010c23ff80(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_2 != 0;
}



/* Entry: 106e072c0; end: 106e072c7; -[SCGalleryPrepareMediaForSnapsOperation isLongRunning] */

undefined1 FUN_106e072c0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x38);
}



/* Entry: 106e072c8; end: 106e07613; -[SCGalleryPrepareMediaForSnapsOperation runWithProgressBlock:completionBlock:] */

void FUN_106e072c8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined1 *)(param_2 + 0x98) = 1;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _CACurrentMediaTime();
  *(undefined8 *)(param_2 + 0xa8) = param_1;
  uVar16 = param_4;
  _objc_retainBlock();
  _objc_release(param_4);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = uVar16;
  _objc_release(uVar2);
  uVar16 = param_5;
  _objc_retainBlock();
  _objc_release(param_5);
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_2 + 0x30) = uVar16;
  _objc_release(uVar2);
  lVar3 = param_2 + 0x10;
  _objc_loadWeakRetained();
  if (lVar3 != 0) {
    cVar1 = *(char *)(param_2 + 0x18);
    _objc_release();
    if (cVar1 == '\x01') {
      lVar3 = param_2 + 0x10;
      _objc_loadWeakRetained();
      lVar4 = lVar3;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      puVar5 = PTR_PTR_1126c3290;
      _objc_alloc();
      func_0x00010bf20c00(lVar4);
      func_0x00010c013de0();
      uVar16 = *(undefined8 *)(param_2 + 0x48);
      *(undefined **)(param_2 + 0x48) = puVar5;
      _objc_release(uVar16);
      func_0x00010c182cc0(*(undefined8 *)(param_2 + 0x48),param_3,
                          (*(byte *)(param_2 + 0x38) ^ 0xff) & 1);
      func_0x00010c18b5e0(*(undefined8 *)(param_2 + 0x48),param_3,param_2);
      func_0x00010befbb60(lVar4,param_3,*(undefined8 *)(param_2 + 0x48));
      func_0x00010c219b60(*(undefined8 *)(param_2 + 0x48),param_3,0);
      puVar5 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      uVar6 = *(undefined8 *)(param_2 + 0x48);
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar4;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      uVar16 = uVar6;
      func_0x00010bf493a0(uVar6,param_3,lVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_2 + 0x48);
      uStack_88 = uVar16;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar4;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar7;
      func_0x00010bf493a0(uVar7,param_3,lVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(param_2 + 0x48);
      uStack_80 = uVar2;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar4;
      func_0x00010c2793a0(lVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar9;
      func_0x00010bf493a0(uVar9,param_3,lVar10);
      _objc_retainAutoreleasedReturnValue();
      uVar12 = *(undefined8 *)(param_2 + 0x48);
      uStack_78 = uVar11;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lVar4;
      func_0x00010bf1ff80(lVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar12;
      func_0x00010bf493a0(uVar12,param_3,lVar13);
      _objc_retainAutoreleasedReturnValue();
      puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_70 = uVar14;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&uStack_88,4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar5,param_3,puVar15);
      _objc_release(puVar15);
      _objc_release(uVar14);
      _objc_release(lVar13);
      _objc_release(uVar12);
      _objc_release(uVar11);
      _objc_release(lVar10);
      _objc_release(uVar9);
      _objc_release(uVar2);
      _objc_release(lVar8);
      _objc_release(uVar7);
      _objc_release(uVar16);
      _objc_release(lVar3);
      _objc_release(uVar6);
      _objc_release(lVar4);
    }
  }
  func_0x00010be78a60(param_2,param_3,0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  if (*(char *)(param_2 + 0x98) == '\x01') {
    uVar16 = *(undefined8 *)(param_2 + 0x88);
    uVar2 = *(undefined8 *)(param_2 + 0x90);
    *(undefined1 *)(param_2 + 0x9b) = 1;
    _objc_retain(uVar2);
    _objc_retain(uVar16);
    func_0x00010bde2800(param_2);
    func_0x00010bf2dba0(uVar16);
    func_0x00010bf2dba0(uVar2);
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar16);
    return;
  }
  return;
}



/* Entry: 106e07614; end: 106e07683; -[SCGalleryPrepareMediaForSnapsOperation cancel] */

void FUN_106e07614(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 0x98) == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + 0x88);
    uVar2 = *(undefined8 *)(param_1 + 0x90);
    *(undefined1 *)(param_1 + 0x9b) = 1;
    _objc_retain(uVar2);
    _objc_retain(uVar1);
    func_0x00010bde2800(param_1);
    func_0x00010bf2dba0(uVar1);
    func_0x00010bf2dba0(uVar2);
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 106e07684; end: 106e07687; -[SCGalleryPrepareMediaForSnapsOperation progressOverlayViewDidCancel:] */

void FUN_106e07684(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2dbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_cancel_1125a9090);
  return;
}



/* Entry: 106e07688; end: 106e0780f; -[SCGalleryPrepareMediaForSnapsOperation _cloudFilesIsAvailableLocallyWithSnapId:] */

undefined1 * FUN_106e07688(long param_1,undefined8 param_2,undefined1 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  puVar8 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = param_3;
  _objc_retain(param_3);
  if (param_3 != (undefined1 *)0x0) {
    uVar2 = *(undefined8 *)(param_1 + 0x50);
    puVar9 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c06cde0();
    _objc_release(uVar2);
    if ((int)uVar3 != 0) {
      lVar4 = *(long *)(param_1 + 0x58);
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar4;
      func_0x00010bf00d20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      lStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      plStack_100 = (long *)0x0;
      _objc_retain(lVar7);
      lVar4 = lVar7;
      func_0x00010bf52a60();
      if (lVar4 != 0) {
        lVar10 = *plStack_100;
        do {
          lVar11 = 0;
          do {
            if (*plStack_100 != lVar10) {
              _objc_enumerationMutation(lVar7);
            }
            iVar1 = (int)*(undefined8 *)(lStack_108 + lVar11 * 8);
            func_0x00010c06cde0();
            if (iVar1 == 0) {
              puVar9 = (undefined1 *)0x0;
              goto LAB_106e077c0;
            }
            lVar11 = lVar11 + 1;
          } while (lVar4 != lVar11);
          lVar4 = lVar7;
          puVar8 = &uStack_110;
          func_0x00010bf52a60();
        } while (lVar4 != 0);
      }
      puVar9 = (undefined1 *)0x1;
LAB_106e077c0:
      _objc_release(lVar7);
      _objc_release(lVar7);
      goto LAB_106e077d0;
    }
  }
  puVar8 = (undefined8 *)puVar9;
  puVar9 = (undefined1 *)0x0;
LAB_106e077d0:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar9;
  }
  ___stack_chk_fail();
  if ((param_3[0x9b] & 1) != 0) {
    return param_3;
  }
  puVar9 = *(undefined1 **)(param_3 + 0x40);
  func_0x00010bf529e0();
  if (puVar8 < puVar9) {
    puVar5 = *(undefined1 **)(param_3 + 0x40);
    func_0x00010c0dfd40(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar5;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = param_3;
    func_0x00010bde1840();
    _objc_release(puVar9);
    if (((ulong)puVar6 & 1) == 0) {
      func_0x00010be05fc0(param_3);
    }
    else {
      func_0x00010bdddb80();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar5);
    return puVar5;
  }
  lVar7 = *(long *)(param_3 + 0x68);
  func_0x00010bf529e0();
  if (lVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be78270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s__prepareEntryLevelSnapDocMap_11257ba38);
    return param_3;
  }
  lVar7 = *(long *)(param_3 + 0x80);
  func_0x00010bf529e0();
  if (lVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be792b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s__prepareSnapLevelSnapDocMap_11257be48);
    return param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bde37b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s__completeWithResult_error__112556788,1,*(undefined8 *)(param_3 + 0xa0));
  return param_3;
}



/* Entry: 106e07810; end: 106e07933; -[SCGalleryPrepareMediaForSnapsOperation _prepareMediaForIndex:] */

void FUN_106e07810(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  if ((*(byte *)(param_1 + 0x9b) & 1) != 0) {
    return;
  }
  uVar1 = *(ulong *)(param_1 + 0x40);
  func_0x00010bf529e0();
  if (param_3 < uVar1) {
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c0dfd40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010bde1840();
    _objc_release(uVar3);
    if ((uVar1 & 1) == 0) {
      func_0x00010be05fc0(param_1);
    }
    else {
      func_0x00010bdddb80();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  lVar4 = *(long *)(param_1 + 0x68);
  func_0x00010bf529e0();
  if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be78270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__prepareEntryLevelSnapDocMap_11257ba38);
    return;
  }
  lVar4 = *(long *)(param_1 + 0x80);
  func_0x00010bf529e0();
  if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be792b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__prepareSnapLevelSnapDocMap_11257be48);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bde37b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__completeWithResult_error__112556788,1,*(undefined8 *)(param_1 + 0xa0));
  return;
}



/* Entry: 106e07934; end: 106e07b0f; -[SCGalleryPrepareMediaForSnapsOperation _prepareSnapLevelSnapDocMap] */

void FUN_106e07934(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  code *pcStack_190;
  undefined *puStack_188;
  long lStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_1;
  if ((*(byte *)(param_1 + 0x9b) & 1) == 0) {
    _dispatch_group_create();
    lStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    lVar6 = *(long *)(param_1 + 0x80);
    _objc_retain(lVar6);
    lVar3 = lVar6;
    func_0x00010bf52a60();
    if (lVar3 != 0) {
      lVar10 = *plStack_130;
      do {
        lVar9 = 0;
        do {
          if (*plStack_130 != lVar10) {
            _objc_enumerationMutation(lVar6);
          }
          lVar7 = *(long *)(lStack_138 + lVar9 * 8);
          lVar4 = lVar7;
          func_0x00010c23ff80();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (lVar4 != 0) {
            _dispatch_group_enter(lVar2);
            uVar8 = *(undefined8 *)(param_1 + 0xf0);
            puStack_178 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_170 = 0xc2000000;
            pcStack_168 = FUN_106e07b10;
            puStack_160 = &UNK_110848ba8;
            lStack_158 = lVar7;
            lStack_150 = param_1;
            _objc_retain(lVar2);
            lStack_148 = lVar2;
            func_0x00010c0f7fc0(uVar8);
            _objc_release(lStack_148);
          }
          lVar9 = lVar9 + 1;
        } while (lVar3 != lVar9);
        lVar3 = lVar6;
        func_0x00010bf52a60();
      } while (lVar3 != 0);
    }
    _objc_release(lVar6);
    puStack_1a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_198 = 0xc2000000;
    pcStack_190 = FUN_106e07bc8;
    puStack_188 = &UNK_110842e18;
    lStack_180 = param_1;
    func_0x000100bc0718(lVar2,PTR___dispatch_main_q_11034be20,&puStack_1a0);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  uVar8 = *(undefined8 *)(lVar2 + 0x20);
  func_0x00010c23ff80(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar8;
  func_0x000108020568();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(0);
  _objc_release(uVar8);
  uVar8 = *(undefined8 *)(lVar2 + 0x20);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  func_0x00010c241220(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be99b20(uVar1);
  _objc_release(uVar8);
  _dispatch_group_leave(*(undefined8 *)(lVar2 + 0x30));
  _objc_release(0);
  _objc_release(uVar5);
  return;
}



/* Entry: 106e07b10; end: 106e07bc7;  */

void FUN_106e07b10(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c23ff80(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000108020568();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(0);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c241220(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be99b20(uVar1);
  _objc_release(uVar2);
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x30));
  _objc_release(0);
  _objc_release(uVar3);
  return;
}



/* Entry: 106e07bc8; end: 106e07bcf;  */

void FUN_106e07bc8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be77df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__prepareAllSnapLevelSnapDocAsset_11257b918);
  return;
}



/* Entry: 106e07bd0; end: 106e07dcf; -[SCGalleryPrepareMediaForSnapsOperation _prepareEntryLevelSnapDocMap] */

void FUN_106e07bd0(long param_1,undefined8 param_2,undefined **param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  code *pcStack_190;
  undefined *puStack_188;
  long lStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  long lStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  if ((*(byte *)(param_1 + 0x9b) & 1) == 0) {
    _dispatch_group_create();
    lStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    lVar5 = *(long *)(param_1 + 0x68);
    _objc_retain(lVar5);
    lVar2 = lVar5;
    func_0x00010bf52a60();
    if (lVar2 != 0) {
      lVar8 = *plStack_130;
      do {
        lVar7 = 0;
        do {
          if (*plStack_130 != lVar8) {
            _objc_enumerationMutation(lVar5);
          }
          uVar6 = *(undefined8 *)(lStack_138 + lVar7 * 8);
          _dispatch_group_enter(lVar1);
          uVar3 = *(undefined8 *)(param_1 + 0x100);
          func_0x00010c269d40(uVar3);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = *(undefined8 *)(param_1 + 0xf0);
          func_0x00010c11de00(uVar4);
          _objc_retainAutoreleasedReturnValue();
          puStack_178 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_170 = 0xc2000000;
          pcStack_168 = FUN_106e07dd0;
          puStack_160 = &UNK_11097e3b0;
          lStack_158 = param_1;
          uStack_150 = uVar6;
          _objc_retain(lVar1);
          lStack_148 = lVar1;
          func_0x00010bfa6820(uVar3);
          _objc_release(uVar4);
          _objc_release(uVar3);
          _objc_release(lStack_148);
          lVar7 = lVar7 + 1;
        } while (lVar2 != lVar7);
        lVar2 = lVar5;
        func_0x00010bf52a60();
      } while (lVar2 != 0);
    }
    _objc_release(lVar5);
    puStack_1a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_198 = 0xc2000000;
    pcStack_190 = FUN_106e07dfc;
    puStack_188 = &UNK_110842e18;
    param_3 = &puStack_1a0;
    lStack_180 = param_1;
    func_0x000100bc0718(lVar1,PTR___dispatch_main_q_11034be20);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  if (param_3 != (undefined **)0x0) {
    func_0x00010be98fc0(*(undefined8 *)(lVar1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(lVar1 + 0x30));
  return;
}



/* Entry: 106e07dd0; end: 106e07dfb;  */

void FUN_106e07dd0(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    func_0x00010be98fc0(*(undefined8 *)(param_1 + 0x20),param_2,param_3,
                        *(undefined8 *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 106e07dfc; end: 106e07e03;  */

void FUN_106e07dfc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be77dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__prepareAllEntryAssets_11257b910);
  return;
}



/* Entry: 106e07e04; end: 106e07e0b; -[SCGalleryPrepareMediaForSnapsOperation _saveEntryLevelSnapDocToResultMap:entryId:] */

void FUN_106e07e04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x70),PTR_s_setObject_forKeyedSubscript__112651bb8);
  return;
}



/* Entry: 106e07e0c; end: 106e07e13; -[SCGalleryPrepareMediaForSnapsOperation _saveSnapLevelSnapDocToResultMap:snapId:] */

void FUN_106e07e0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x78),PTR_s_setObject_forKeyedSubscript__112651bb8);
  return;
}



/* Entry: 106e07e14; end: 106e0802f; -[SCGalleryPrepareMediaForSnapsOperation _prepareAllEntryAssets] */

/* WARNING: Possible PIC construction at 0x000106e08080: Changing call to branch */

void FUN_106e07e14(undefined *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_1;
  if ((param_1[0x9b] & 1) == 0) {
    puVar3 = *(undefined **)(param_1 + 0x70);
    func_0x00010bf529e0();
    puVar4 = *(undefined **)(param_1 + 0x68);
    func_0x00010bf529e0();
    if (puVar3 == puVar4) {
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      lVar5 = *(long *)(param_1 + 0x60);
      func_0x00010bf002e0();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (lVar6 != 0) {
        lVar10 = 0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(lVar5);
          }
          uVar7 = *(undefined8 *)(param_1 + 0x60);
          func_0x00010c0e00e0(uVar7);
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar7;
          func_0x00010bf00d20();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar7);
          func_0x00010befa160(puVar4);
          _objc_release(uVar8);
          lVar10 = lVar10 + 1;
        } while (lVar6 != lVar10);
        lVar6 = lVar5;
        func_0x00010bf52a60();
      }
      _objc_release(lVar5);
      puVar3 = puVar4;
      func_0x00010bf51e00();
      param_3 = 0;
      func_0x00010be05ce0(param_1);
      _objc_release(puVar3);
      _objc_release();
      goto LAB_106e07fb0;
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
      bVar2 = false;
      param_3 = 0;
      goto code_r0x00010bde37a0;
    }
  }
  else {
LAB_106e07fb0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
      return;
    }
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  lVar9 = *(long *)(*(long *)(puVar4 + 0x20) + 0x80);
  func_0x00010bf529e0();
  if (lVar9 != 0) {
    func_0x00010be792a0(*(undefined8 *)(puVar4 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  bVar2 = param_2 == 0;
  param_1 = *(undefined **)(puVar4 + 0x20);
code_r0x00010bde37a0:
                    /* WARNING: Could not recover jumptable at 0x00010bde37b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__completeWithResult_error__112556788,bVar2,param_3);
  return;
}



/* Entry: 106e08030; end: 106e08097;  */

void FUN_106e08030(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x80);
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    func_0x00010bde37a0(*(undefined8 *)(param_1 + 0x20));
  }
  else {
    func_0x00010be792a0(*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106e08098; end: 106e0813b; -[SCGalleryPrepareMediaForSnapsOperation _prepareAllSnapLevelSnapDocAssets] */

void FUN_106e08098(long param_1)

{
  long lVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + 0x9b) & 1) == 0) {
    lVar1 = *(long *)(param_1 + 0x78);
    func_0x00010bf529e0();
    lVar2 = *(long *)(param_1 + 0x80);
    func_0x00010bf529e0();
    if (lVar1 != lVar2) {
                    /* WARNING: Could not recover jumptable at 0x00010bde37b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__completeWithResult_error__112556788,0,0)
      ;
      return;
    }
    func_0x00010be06100(param_1);
  }
  return;
}



/* Entry: 106e0813c; end: 106e0814b;  */

void FUN_106e0813c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bde37b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(long *)(param_1 + 0x20),PTR_s__completeWithResult_error__112556788,param_2,
             *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xa0));
  return;
}



/* Entry: 106e0814c; end: 106e081a7; -[SCGalleryPrepareMediaForSnapsOperation _completeWithResult:error:] */

void FUN_106e0814c(long param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  *(undefined1 *)(param_1 + 0x9a) = param_3;
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = param_4;
  _objc_release(uVar1);
  func_0x00010bede000(0x3f800000,param_1);
  func_0x00010be4fb00(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bde2810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__complete_1125563a0);
  return;
}



/* Entry: 106e081a8; end: 106e0824b; -[SCGalleryPrepareMediaForSnapsOperation _downloadMediaForSnap:index:] */

void FUN_106e081a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106e0824c;
  puStack_50 = &UNK_110844b80;
  uStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_3);
  func_0x00010be06140(param_1,param_2,param_3,param_4,PTR___dispatch_main_q_11034be20,&puStack_68);
  _objc_release(uStack_40);
  _objc_release(param_3);
  return;
}



/* Entry: 106e0824c; end: 106e08343;  */

void FUN_106e0824c(long param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = (int)*(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c241220(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bde1840();
  _objc_release(uVar3);
  if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdddb90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s__checkIfSnapContainsUnavailableM_112555080,
               *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
    return;
  }
  func_0x00010bed7240(*(undefined8 *)(param_1 + 0x20));
  _CACurrentMediaTime();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
  func_0x00010be06160(uVar3);
  _objc_release(uVar1);
  return;
}



/* Entry: 106e08344; end: 106e0852f;  */

void FUN_106e08344(double param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_4);
  lVar3 = *(long *)(param_2 + 0x20);
  if (*(char *)(lVar3 + 0x98) == '\x01') {
    if (param_3 == 0) {
      func_0x000108019bb0(*(undefined8 *)(param_2 + 0x28));
      lVar3 = *(long *)(param_2 + 0x20);
      uVar1 = *(undefined8 *)(param_2 + 0x28);
      uVar4 = *(undefined8 *)(lVar3 + 0x58);
      func_0x00010c241220(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar4;
      func_0x00010bf00d20();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_2 + 0x28);
      _objc_retain(*(undefined8 *)(param_2 + 0x28));
      func_0x00010be05ce0(lVar3);
      _objc_release(uVar2);
      _objc_release(uVar4);
      _objc_release(uVar1);
      _objc_release(uVar5);
    }
    else {
      _CACurrentMediaTime();
      func_0x00010be05ec0(param_1 - *(double *)(param_2 + 0x38),lVar3);
    }
  }
  _objc_release(param_4);
  return;
}



/* Entry: 106e08530; end: 106e086e7; -[SCGalleryPrepareMediaForSnapsOperation _checkIfSnapContainsUnavailableMusicIfNeeded:index:] */

void FUN_106e08530(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010b697ae8(param_3,2);
  if ((int)uVar1 != 0) {
    uVar6 = *(ulong *)(param_1 + 0x58);
    uVar1 = param_3;
    func_0x00010c241220(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar6;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c06cde0();
    _objc_release(uVar2);
    _objc_release(uVar6);
    _objc_release(uVar1);
    if ((uVar3 & 1) != 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x128);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 0x130);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = param_3;
      func_0x00010c241220(param_3);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(uVar4);
      _objc_opt_class(param_1);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c135240(uVar5);
      _objc_release(param_1);
      _objc_release(uVar1);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar4);
      goto LAB_106e086c4;
    }
  }
  func_0x00010be81980(param_1);
LAB_106e086c4:
  _objc_release(param_3);
  return;
}



/* Entry: 106e086e8; end: 106e087e3;  */

void FUN_106e086e8(long param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c277e80(param_2);
    func_0x00010bfa51c0(uVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be81990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__processNextSnapWithCurrentIndex_11257e000,
             *(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 106e087e4; end: 106e0882f; -[SCGalleryPrepareMediaForSnapsOperation _processNextSnapWithCurrentIndex:] */

void FUN_106e087e4(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x40);
  func_0x00010bf529e0(uVar1);
  func_0x00010bede000((float)((double)(param_3 + 1) / (double)uVar1),param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be78a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__prepareMediaForIndex__11257bc38,param_3 + 1)
  ;
  return;
}



/* Entry: 106e08830; end: 106e08963; -[SCGalleryPrepareMediaForSnapsOperation _downloadFailedWithError:snap:downloadDuration:] */

void FUN_106e08830(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf87dc0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0720c0();
  _objc_release(lVar1);
  if ((int)lVar2 != 0) {
    lVar1 = param_3;
    func_0x00010bf3ec40();
    uVar3 = *(undefined8 *)(param_1 + 0x138);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c0c8b00();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b2438;
    if (lVar1 == 1) {
      func_0x00010c15c460();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c15c440(PTR_PTR_1126b2438);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010bfec2a0(uVar5);
    _objc_release(puVar4);
    _objc_release(uVar5);
    _objc_release(uVar3);
  }
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf88dc0(uVar5);
  func_0x00010c191260(uVar5);
  *(undefined1 *)(param_1 + 0x9a) = 0;
  uVar5 = *(undefined8 *)(param_1 + 0xa0);
  *(long *)(param_1 + 0xa0) = param_3;
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bde2810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__complete_1125563a0);
  return;
}



/* Entry: 106e08964; end: 106e089e7; -[SCGalleryPrepareMediaForSnapsOperation _downloadSucceededWithSnap:snapIndex:downloadDuration:] */

void FUN_106e08964(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_2 + 0x20);
  _objc_retain(param_4);
  uVar1 = uVar2;
  func_0x00010bf88dc0(uVar2);
  func_0x00010c191260(uVar2,param_3,(long)((double)uVar1 + param_1 * 1000.0));
  func_0x000108019dc4(param_4);
  func_0x00010bdddb80(param_2,param_3,param_4,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106e089e8; end: 106e08beb; -[SCGalleryPrepareMediaForSnapsOperation _downloadSnapMediaWithSnap:snapIndex:resultHandler:] */

void FUN_106e089e8(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  if (param_3 == 0) {
    puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_5 + 0x10))(param_5,2,puVar7);
  }
  else {
    uVar6 = *(undefined8 *)(param_1 + 0x50);
    lVar2 = param_3;
    func_0x00010c241220(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar6;
    func_0x00010c06cde0();
    _objc_release(uVar6);
    _objc_release(lVar2);
    if ((int)uVar5 != 0) {
      (**(code **)(param_5 + 0x10))(param_5,0,0);
      goto LAB_106e08bc0;
    }
    func_0x00010bf529e0();
    puVar7 = *(undefined **)(param_1 + 0x50);
    lVar2 = param_3;
    func_0x00010c241220(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    puVar3 = PTR_PTR_1126bf788;
    _objc_alloc(PTR_PTR_1126bf788);
    func_0x00010c017ba0();
    puVar1 = PTR___dispatch_main_q_11034be20;
    puVar4 = puVar7;
    func_0x00010bf89240();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x88);
    *(undefined **)(param_1 + 0x88) = puVar4;
    _objc_release(uVar5);
    _objc_release(puVar3);
    _objc_release(puVar1);
  }
  _objc_release(puVar7);
LAB_106e08bc0:
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 106e08bec; end: 106e08c0f;  */

void FUN_106e08bec(double param_1,long param_2)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (double)NEON_ucvtf(*(undefined8 *)(param_2 + 0x28));
  dVar2 = (double)NEON_ucvtf(*(undefined8 *)(param_2 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bede010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            ((float)((param_1 + dVar1) / dVar2),*(undefined8 *)(param_2 + 0x20),
             PTR_s__updateProgress__1125951a8);
  return;
}



/* Entry: 106e08c10; end: 106e08e8b; -[SCGalleryPrepareMediaForSnapsOperation _downloadAssetsWithAssetIndex:assetFilesToDownload:resultHandler:] */

void FUN_106e08c10(long param_1,undefined8 param_2,ulong param_3,ulong param_4,long param_5)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined1 auStack_c0 [8];
  ulong uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  ulong uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar2 = param_4;
  func_0x00010bf529e0();
  if (param_3 < uVar2) {
    uVar2 = param_4;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c06cde0();
    _objc_release(uVar2);
    if ((int)uVar3 == 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x40);
      func_0x00010bf529e0();
      _objc_initWeak(auStack_78,param_1);
      uVar2 = param_4;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(PTR___dispatch_main_q_11034be20);
      puVar5 = PTR_PTR_1126bf788;
      _objc_alloc(PTR_PTR_1126bf788);
      func_0x00010c017ba0();
      puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a8 = 0xc2000000;
      pcStack_a0 = FUN_106e08e8c;
      puStack_98 = &UNK_11097e4a0;
      _objc_copyWeak(auStack_90,auStack_78);
      uStack_88 = param_3;
      uStack_80 = uVar4;
      _objc_copyWeak(auStack_c0,auStack_78);
      uStack_b8 = param_3;
      _objc_retain(param_4);
      _objc_retain(param_5);
      uVar3 = uVar2;
      func_0x00010bf89240();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + 0x90);
      *(ulong *)(param_1 + 0x90) = uVar3;
      _objc_release(uVar4);
      puVar1 = PTR___dispatch_main_q_11034be20;
      _objc_release(PTR___dispatch_main_q_11034be20);
      _objc_release(puVar5);
      _objc_release(puVar1);
      _objc_release(uVar2);
      _objc_release(param_5);
      _objc_release(param_4);
      _objc_destroyWeak(auStack_c0);
      _objc_destroyWeak(auStack_90);
      _objc_destroyWeak(auStack_78);
    }
    else {
      func_0x00010be05ce0(param_1);
    }
  }
  else {
    (**(code **)(param_5 + 0x10))(param_5,0,0);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 106e08e8c; end: 106e08ee7;  */

void FUN_106e08e8c(double param_1,long param_2)

{
  long lVar1;
  double dVar2;
  
  lVar1 = param_2 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    dVar2 = (double)NEON_ucvtf(*(undefined8 *)(param_2 + 0x30));
    func_0x00010bede000((float)((param_1 + (double)*(long *)(param_2 + 0x28)) / dVar2),lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106e08ee8; end: 106e08f73;  */

void FUN_106e08ee8(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (param_2 == 0) {
      if (*(char *)(lVar1 + 0x98) == '\x01') {
        func_0x00010be05ce0(lVar1);
      }
    }
    else {
      (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),param_2,param_3);
    }
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106e08f74; end: 106e0925f; -[SCGalleryPrepareMediaForSnapsOperation _downloadSnapDocAssetsWithSnapDocIndex:completion:] */

void FUN_106e08f74(long param_1,undefined8 param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  undefined1 auStack_d0 [8];
  ulong uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  ulong uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_4);
  uVar1 = *(ulong *)(param_1 + 0x80);
  func_0x00010bf529e0();
  if (param_3 < uVar1) {
    uVar2 = *(undefined8 *)(param_1 + 0x80);
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + 0x78);
    uVar3 = uVar2;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    uVar3 = uVar2;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x000108017660();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    uVar5 = *(undefined8 *)(param_1 + 0x80);
    func_0x00010bf529e0();
    _objc_initWeak(auStack_80,param_1);
    uVar6 = *(undefined8 *)(param_1 + 0x140);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar6;
    func_0x000108017f48();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar3;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_106e09260;
    puStack_a0 = &UNK_11097e4a0;
    puVar8 = auStack_98;
    _objc_copyWeak(puVar8,auStack_80);
    uStack_90 = param_3;
    uStack_88 = uVar5;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_d0,auStack_80);
    _objc_retain(param_4);
    _objc_retain(uVar9);
    uStack_c8 = param_3;
    _objc_retain(uVar2);
    _objc_retain(uVar4);
    uStack_c0 = uVar5;
    func_0x00010bf892a0(uVar6);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar8);
    _objc_release(uVar7);
    _objc_release(uVar3);
    _objc_release(uVar6);
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_release(uVar9);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_d0);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_80);
    _objc_release(uVar4);
    _objc_release(uVar9);
    _objc_release(uVar2);
  }
  else {
    (**(code **)(param_4 + 0x10))(param_4,1);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 106e09260; end: 106e092bb;  */

void FUN_106e09260(double param_1,long param_2)

{
  long lVar1;
  double dVar2;
  double dVar3;
  
  lVar1 = param_2 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    dVar2 = (double)NEON_ucvtf(*(undefined8 *)(param_2 + 0x28));
    dVar3 = (double)NEON_ucvtf(*(undefined8 *)(param_2 + 0x30));
    func_0x00010bede000((float)((param_1 + dVar2) / dVar3),lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106e092bc; end: 106e095af;  */

void FUN_106e092bc(long param_1,int param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  lVar2 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    if (*(char *)(lVar2 + 0x98) != '\x01') goto LAB_106e09564;
    if (param_2 != 0) {
      lVar3 = *(long *)(param_1 + 0x20);
      func_0x00010c0fee00();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c0ff660();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      lVar3 = lVar4;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (lVar3 != 0) {
        lVar10 = 0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(lVar4);
          }
          uVar11 = *(undefined8 *)(lVar10 * 8);
          uVar8 = uVar11;
          func_0x00010c08c3a0();
          if ((int)uVar8 == 4) {
            uVar8 = uVar11;
            func_0x00010bf5cc00();
            _objc_retainAutoreleasedReturnValue();
            uVar5 = uVar8;
            func_0x00010c0840e0();
            _objc_retainAutoreleasedReturnValue();
            uVar6 = uVar5;
            func_0x00010bf96da0();
            _objc_retainAutoreleasedReturnValue();
            uVar7 = uVar6;
            func_0x00010bf96ee0();
            _objc_release(uVar6);
            _objc_release(uVar5);
            _objc_release(uVar8);
            if ((int)uVar7 == 7) {
              func_0x00010bf5cc00();
              _objc_retainAutoreleasedReturnValue();
              uVar8 = uVar11;
              func_0x00010c0840e0();
              _objc_retainAutoreleasedReturnValue();
              uVar5 = uVar8;
              func_0x00010bf96da0();
              _objc_retainAutoreleasedReturnValue();
              uVar6 = uVar5;
              func_0x00010c0d3a00();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c277e80();
              _objc_release(uVar6);
              _objc_release(uVar5);
              _objc_release(uVar8);
              _objc_release(uVar11);
              _objc_release(lVar4);
              uVar11 = *(undefined8 *)(lVar2 + 0xf0);
              uVar8 = *(undefined8 *)(param_1 + 0x38);
              _objc_retain(uVar8);
              func_0x00010c0f7fc0(uVar11);
              _objc_release(uVar8);
              goto LAB_106e09564;
            }
          }
          lVar10 = lVar10 + 1;
        } while (lVar3 != lVar10);
        lVar3 = lVar4;
        func_0x00010bf52a60();
      }
      _objc_release(lVar4);
      func_0x00010be06100(lVar2);
      goto LAB_106e09564;
    }
    if (param_4 != 0) {
      _objc_retain(param_4);
      uVar8 = *(undefined8 *)(lVar2 + 0xa0);
      *(long *)(lVar2 + 0xa0) = param_4;
      _objc_release(uVar8);
    }
  }
  (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),0);
LAB_106e09564:
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  uVar8 = *(undefined8 *)(*(long *)(param_4 + 0x20) + 0x128);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_4 + 0x28);
  _objc_retain(*(undefined8 *)(param_4 + 0x28));
  func_0x00010bfa51c0(uVar8);
  _objc_release(uVar8);
  _objc_release(uVar11);
  return;
}



/* Entry: 106e095b0; end: 106e096ff;  */

void FUN_106e095b0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x128);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x106e09668;
  puStack_50 = &UNK_11097e500;
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_38 = *(undefined8 *)(param_1 + 0x38);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(*(undefined8 *)(param_1 + 0x28));
  uStack_48 = uVar3;
  uStack_40 = uVar4;
  func_0x00010bfa51c0(uVar2,param_2,uVar1,PTR___dispatch_main_q_11034be20,&puStack_68);
  _objc_release(uVar2);
  _objc_release(uStack_40);
  return;
}



/* Entry: 106e09700; end: 106e0975b; -[SCGalleryPrepareMediaForSnapsOperation _updateProgress:] */

void FUN_106e09700(undefined8 param_1,long param_2)

{
  if (*(long *)(param_2 + 0x28) != 0) {
    (**(code **)(*(long *)(param_2 + 0x28) + 0x10))(param_1);
  }
  if (*(long *)(param_2 + 0x48) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1e46b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,*(long *)(param_2 + 0x48),PTR_s_setProgress_animated__112656bd0,1);
    return;
  }
  return;
}



/* Entry: 106e0975c; end: 106e0989b; -[SCGalleryPrepareMediaForSnapsOperation _complete] */

void FUN_106e0975c(long param_1)

{
  undefined8 uVar1;
  undefined1 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar3 = *(long *)(param_1 + 0x30);
  _objc_retainBlock();
  uVar2 = *(undefined1 *)(param_1 + 0x9b);
  uVar7 = *(undefined8 *)(param_1 + 0xa0);
  _objc_retain(uVar7);
  func_0x00010bec3720(param_1);
  if (*(long *)(param_1 + 0x48) != 0) {
    func_0x00010c18b5e0();
    func_0x00010c12c960(*(undefined8 *)(param_1 + 0x48));
    uVar4 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = 0;
    _objc_release(uVar4);
  }
  uVar4 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = 0;
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = 0;
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  _objc_release(uVar4);
  *(undefined2 *)(param_1 + 0x98) = 0x100;
  uVar4 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = 0;
  _objc_release(uVar4);
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x50);
    uVar1 = *(undefined8 *)(param_1 + 0x58);
    uVar8 = *(undefined8 *)(param_1 + 0x60);
    uVar5 = *(undefined8 *)(param_1 + 0x70);
    func_0x00010bf51e00(uVar5);
    uVar6 = *(undefined8 *)(param_1 + 0x78);
    func_0x00010bf51e00(uVar6);
    (**(code **)(lVar3 + 0x10))(lVar3,uVar2,uVar4,uVar1,uVar8,uVar5,uVar6,uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
  }
  _objc_release(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 106e0989c; end: 106e09923; -[SCGalleryPrepareMediaForSnapsOperation _updateSmartShareLoggingWithSnap:] */

void FUN_106e0989c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  uVar4 = param_3;
  func_0x00010b5fa088();
  iVar3 = (int)uVar4;
  func_0x00010b5fa4c8();
  lVar1 = 0xb0;
  if (iVar3 == 0) {
    lVar1 = 0xb8;
  }
  lVar2 = 0xe0;
  if (iVar3 == 0) {
    lVar2 = 0xe8;
  }
  *(long *)(param_1 + lVar1) = *(long *)(param_1 + lVar1) + 1;
  uVar4 = param_3;
  func_0x00010bfdd120();
  _objc_release(param_3);
  *(ulong *)(param_1 + lVar2) = *(long *)(param_1 + lVar2) + (ulong)((uint)uVar4 ^ 1);
  return;
}



/* Entry: 106e09924; end: 106e09967; -[SCGalleryPrepareMediaForSnapsOperation _updateDownloadedLoggingWithSnap:] */

void FUN_106e09924(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  
  func_0x00010b5fa088();
  func_0x00010b5fa4c8();
  lVar1 = 0xc0;
  if (param_3 == 0) {
    lVar1 = 200;
  }
  *(long *)(param_1 + lVar1) = *(long *)(param_1 + lVar1) + 1;
  return;
}



/* Entry: 106e09968; end: 106e09a5f; -[SCGalleryPrepareMediaForSnapsOperation _log] */

void FUN_106e09968(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _CACurrentMediaTime();
  param_1 = param_1 - *(double *)(param_2 + 0xa8);
  puVar1 = PTR_PTR_1126b2438;
  func_0x00010c109f60(PTR_PTR_1126b2438);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,*(undefined1 *)(param_2 + 0x38));
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2ac460(puVar1,param_3,&PTR____CFConstantStringClassReference_110e876f8,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar2);
  uVar4 = *(undefined8 *)(param_2 + 0x138);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc000(param_1);
  _objc_release(uVar5);
  _objc_release(uVar4);
  func_0x00010c1e0980(*(undefined8 *)(param_2 + 0x20),param_3,(long)(param_1 * 1000.0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 106e09a60; end: 106e09b63; -[SCGalleryPrepareMediaForSnapsOperation _downloadSnapMediaFromContentManagerIfRegistered:index:completionQueue:completion:] */

void FUN_106e09a60(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_6 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x118);
    uVar2 = *(undefined8 *)(param_1 + 0xf0);
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_106e09b64;
    puStack_70 = &UNK_110852488;
    _objc_retain(param_3);
    uStack_68 = param_3;
    uStack_60 = uVar1;
    lStack_58 = param_1;
    _objc_retain(param_5);
    uStack_50 = param_5;
    _objc_retain(param_6);
    lStack_48 = param_6;
    _objc_retain(uVar1);
    func_0x00010c0f7fc0(uVar2,param_2,&puStack_88);
    _objc_release(lStack_48);
    _objc_release(uStack_50);
    _objc_release(uStack_68);
    _objc_release(uVar1);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 106e09b64; end: 106e09c93;  */

void FUN_106e09b64(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar2 = PTR_PTR_1126d2b30;
  func_0x00010c25c740(PTR_PTR_1126d2b30,param_2,*(undefined8 *)(param_1 + 0x20),
                      *(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_106e09c94;
  puStack_70 = &UNK_11097e5f0;
  uStack_68 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  uStack_58 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  uStack_60 = uVar3;
  _objc_retain(uVar4);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  uStack_50 = uVar4;
  _objc_retain(uVar3);
  puStack_b8 = puVar1;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_106e0a21c;
  puStack_a0 = &UNK_1108538b0;
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  uStack_48 = uVar3;
  _objc_retain(uVar4);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  uStack_98 = uVar4;
  _objc_retain(uVar3);
  uStack_90 = uVar3;
  func_0x00010c0c0800(puVar2,param_2,&puStack_88,&puStack_b8);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106e09c94; end: 106e09dc7;  */

void FUN_106e09c94(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x110);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xf0);
  func_0x00010c11de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar5);
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar4);
  _objc_retain(param_2);
  func_0x00010c135a80(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release(uVar5);
  _objc_release(uVar1);
  _objc_release(param_2);
  _objc_release(param_2);
  return;
}



/* Entry: 106e09dc8; end: 106e0a01f;  */

void FUN_106e09dc8(long param_1,undefined1 *param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined8 unaff_x23;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 unaff_x24;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  long lStack_100;
  undefined1 *puStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 *puStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  ppuVar4 = &puStack_e0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = param_2;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if ((param_2 == (undefined1 *)0x0) || (param_3 == 0)) {
    puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d8 = 0xc2000000;
    uStack_d0 = 0x106e0a210;
    puStack_c8 = &UNK_110849530;
    uVar8 = *(undefined8 *)(param_1 + 0x40);
    puVar5 = *(undefined **)(param_1 + 0x48);
    _objc_retain(puVar5);
    puStack_c0 = puVar5;
    func_0x00010007380c(uVar8);
    puVar1 = puStack_c0;
  }
  else {
    puVar1 = PTR_PTR_1126b1060;
    _objc_alloc();
    puVar5 = PTR_PTR_1126b19f8;
    func_0x00010c0c7a40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_60 = puVar5;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c032f60();
    _objc_release(puVar2);
    _objc_release(puVar5);
    func_0x00010bec12e0(*(undefined8 *)(param_1 + 0x20));
    unaff_x23 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_106e0a020;
    puStack_a0 = &UNK_11097e590;
    uStack_98 = *(undefined8 *)(param_1 + 0x20);
    unaff_x24 = *(undefined8 *)(param_1 + 0x30);
    uVar8 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar8);
    uStack_90 = uVar8;
    _objc_retain(param_2);
    puStack_88 = param_2;
    _objc_retain(param_3);
    uVar8 = *(undefined8 *)(param_1 + 0x30);
    lStack_80 = param_3;
    _objc_retain(uVar8);
    uVar9 = *(undefined8 *)(param_1 + 0x40);
    uStack_78 = uVar8;
    _objc_retain(uVar9);
    puVar5 = *(undefined **)(param_1 + 0x48);
    uStack_70 = uVar9;
    _objc_retain(puVar5);
    puStack_68 = puVar5;
    func_0x00010c13e560(unaff_x23);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(unaff_x23);
    _objc_release(puStack_68);
    _objc_release(uStack_70);
    _objc_release(uStack_78);
    _objc_release(lStack_80);
    _objc_release(puStack_88);
    _objc_release(uStack_90);
    ppuVar4 = (undefined **)puVar3;
  }
  _objc_release(puVar1);
  _objc_release(param_3);
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  pcStack_e8 = FUN_106e0a020;
  uStack_120 = unaff_x24;
  uStack_118 = unaff_x23;
  puStack_110 = puVar1;
  puStack_108 = puVar5;
  lStack_100 = param_3;
  puStack_f8 = param_2;
  puStack_f0 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar4);
  uVar8 = *(undefined8 *)(*(long *)(puVar3 + 0x20) + 0xf8);
  *(undefined ***)(*(long *)(puVar3 + 0x20) + 0xf8) = ppuVar4;
  _objc_retain(ppuVar4);
  _objc_release(uVar8);
  uVar8 = *(undefined8 *)(*(long *)(puVar3 + 0x20) + 0xf0);
  uVar9 = *(undefined8 *)(*(long *)(puVar3 + 0x20) + 0xf8);
  func_0x00010c11de00(uVar8);
  _objc_retainAutoreleasedReturnValue();
  puStack_178 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_170 = 0xc2000000;
  pcStack_168 = FUN_106e0a178;
  puStack_160 = &UNK_11097e560;
  uVar10 = *(undefined8 *)(puVar3 + 0x28);
  uVar7 = *(undefined8 *)(puVar3 + 0x20);
  _objc_retain(*(undefined8 *)(puVar3 + 0x28));
  uVar6 = *(undefined8 *)(puVar3 + 0x30);
  uStack_158 = uVar7;
  uStack_150 = uVar10;
  _objc_retain(uVar6);
  uVar7 = *(undefined8 *)(puVar3 + 0x38);
  uStack_148 = uVar6;
  _objc_retain(uVar7);
  uVar6 = *(undefined8 *)(puVar3 + 0x40);
  uStack_140 = uVar7;
  _objc_retain(uVar6);
  uVar7 = *(undefined8 *)(puVar3 + 0x48);
  uStack_138 = uVar6;
  _objc_retain(uVar7);
  uVar6 = *(undefined8 *)(puVar3 + 0x50);
  uStack_130 = uVar7;
  _objc_retain(uVar6);
  uStack_128 = uVar6;
  func_0x000107adfd18(uVar9,uVar8,&puStack_178);
  _objc_release(uVar8);
  _objc_release(uStack_128);
  _objc_release(uStack_130);
  _objc_release(uStack_138);
  _objc_release(uStack_140);
  _objc_release(uStack_148);
  _objc_release(uStack_150);
  _objc_release(ppuVar4);
  return;
}



/* Entry: 106e0a020; end: 106e0a177;  */

void FUN_106e0a020(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_2);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xf8);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xf8) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xf0);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xf8);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_106e0a178;
  puStack_80 = &UNK_11097e560;
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(*(undefined8 *)(param_1 + 0x28));
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uStack_78 = uVar4;
  uStack_70 = uVar5;
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  uStack_68 = uVar3;
  _objc_retain(uVar4);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  uStack_60 = uVar4;
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  uStack_58 = uVar3;
  _objc_retain(uVar4);
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  uStack_50 = uVar4;
  _objc_retain(uVar3);
  uStack_48 = uVar3;
  func_0x000107adfd18(uVar1,uVar2,&puStack_98);
  _objc_release(uVar2);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(param_2);
  return;
}



/* Entry: 106e0a178; end: 106e0a203;  */

void FUN_106e0a178(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  func_0x00010be61480(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),param_2,
                      param_3,*(undefined8 *)(param_1 + 0x40));
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_106e0a204;
  puStack_30 = &UNK_110849530;
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(uVar2);
  uStack_28 = uVar2;
  func_0x00010007380c(uVar1,&puStack_48);
  _objc_release(uStack_28);
  return;
}



/* Entry: 106e0a204; end: 106e0a21b;  */

void FUN_106e0a204(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106e0a20c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 106e0a21c; end: 106e0a28b;  */

void FUN_106e0a21c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_106e0a28c;
  puStack_30 = &UNK_110849530;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uStack_28 = uVar2;
  func_0x00010007380c(uVar1,&puStack_48);
  _objc_release(uStack_28);
  return;
}



/* Entry: 106e0a28c; end: 106e0a297;  */

void FUN_106e0a28c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106e0a294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 106e0a298; end: 106e0a3a3; -[SCGalleryPrepareMediaForSnapsOperation _moveToCloudFSAndCleanupIfNeeded:key:iv:data:success:contentKey:] */

void FUN_106e0a298(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,int param_7,long param_8)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = param_3;
  uVar8 = param_4;
  uVar1 = param_5;
  lVar4 = param_6;
  _objc_retain(param_8);
  if (((param_7 != 0) && (param_6 != 0)) &&
     (func_0x00010be61460(param_1,param_2,param_3,param_4,param_5,param_6), puVar7 = param_3,
     uVar8 = param_4, uVar1 = param_5, lVar4 = param_6, param_8 != 0)) {
    uVar1 = *(undefined8 *)(param_1 + 0x118);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_60 = param_8;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_60,1);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = 0;
    puVar7 = puVar2;
    func_0x00010c12b940(uVar1,param_2,puVar2,0);
    _objc_release(puVar2);
    _objc_release(uVar1);
    uVar1 = param_5;
    lVar4 = param_6;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar7);
  lVar10 = *(long *)(param_8 + 0x110);
  _objc_retain(lVar4);
  _objc_retain(uVar1);
  _objc_retain(uVar8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar10;
  func_0x00010c156cc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(uVar1);
  _objc_release(uVar8);
  _objc_release(lVar10);
  if (lVar3 != 0) {
    puVar2 = puVar7;
    func_0x00010bfd9dc0();
    if ((int)puVar2 == 0) {
      uVar8 = 0;
    }
    else {
      uVar1 = *(undefined8 *)(param_8 + 0x100);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar1;
      func_0x00010c13ada0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
    }
    lVar4 = param_8;
    func_0x00010be612c0(param_8,param_2,puVar7,lVar3,uVar8);
    if ((int)lVar4 != 0) {
      uVar5 = *(undefined8 *)(param_8 + 0x100);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar5;
      func_0x00010c13a8c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      uVar6 = *(undefined8 *)(param_8 + 0x50);
      func_0x00010c0d3c80();
      puVar2 = puVar7;
      func_0x00010c241220(puVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar6,param_2,uVar1,puVar2);
      _objc_release(puVar2);
      uVar5 = uVar6;
      func_0x00010bf51e00();
      uVar9 = *(undefined8 *)(param_8 + 0x50);
      *(undefined8 *)(param_8 + 0x50) = uVar5;
      _objc_release(uVar9);
      func_0x00010bfad280(uVar1,param_2,&PTR____CFConstantStringClassReference_110f726f8);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(uVar6);
      _objc_release(uVar1);
    }
    _objc_release(uVar8);
  }
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar7);
  return;
}



/* Entry: 106e0a3a4; end: 106e0a57f; -[SCGalleryPrepareMediaForSnapsOperation _moveToCloudFS:key:iv:data:] */

void FUN_106e0a3a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  lVar6 = *(long *)(param_1 + 0x110);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar6;
  func_0x00010c156cc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(lVar6);
  if (lVar1 != 0) {
    uVar7 = param_3;
    func_0x00010bfd9dc0();
    if ((int)uVar7 == 0) {
      uVar7 = 0;
    }
    else {
      uVar2 = *(undefined8 *)(param_1 + 0x100);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar2;
      func_0x00010c13ada0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
    }
    lVar6 = param_1;
    func_0x00010be612c0(param_1,param_2,param_3,lVar1,uVar7);
    if ((int)lVar6 != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x100);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar3;
      func_0x00010c13a8c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      uVar4 = *(undefined8 *)(param_1 + 0x50);
      func_0x00010c0d3c80();
      uVar3 = param_3;
      func_0x00010c241220(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar4,param_2,uVar2,uVar3);
      _objc_release(uVar3);
      uVar3 = uVar4;
      func_0x00010bf51e00();
      uVar5 = *(undefined8 *)(param_1 + 0x50);
      *(undefined8 *)(param_1 + 0x50) = uVar3;
      _objc_release(uVar5);
      func_0x00010bfad280(uVar2,param_2,&PTR____CFConstantStringClassReference_110f726f8);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(uVar4);
      _objc_release(uVar2);
    }
    _objc_release(uVar7);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106e0a580; end: 106e0a73b; -[SCGalleryPrepareMediaForSnapsOperation _moveDataAndReturnResultToCloudFSForSnap:encryptedMediaBlob:overlayCloudFSFile:] */

undefined8
FUN_106e0a580(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(ulong *)(param_1 + 0x100);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c13a8c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010c06cde0();
  if ((uVar1 & 1) != 0) {
    uVar5 = 0;
    goto LAB_106e0a700;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x100);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  func_0x00010c27a620();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  uVar5 = uVar3;
  func_0x00010bfad160(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_4;
  func_0x00010c14e060(param_4,param_2,uVar5,1);
  _objc_release(uVar5);
  uVar5 = param_3;
  func_0x00010bfd9dc0();
  if ((int)uVar5 == 0) {
LAB_106e0a6a8:
    lVar6 = 0;
    if ((int)uVar4 == 0) {
LAB_106e0a6a0:
      uVar5 = 0;
    }
    else {
LAB_106e0a6b0:
      uVar4 = *(undefined8 *)(param_1 + 0x100);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010befb560();
      _objc_release(uVar4);
    }
  }
  else {
    if (param_5 != 0) {
      lVar6 = param_5;
      func_0x00010c06cde0();
      if ((int)lVar6 == 0) goto LAB_106e0a6a8;
      lVar6 = param_5;
      func_0x00010bfaca60(param_5,param_2,&PTR____CFConstantStringClassReference_110f72718);
      _objc_retainAutoreleasedReturnValue();
      if ((int)uVar4 != 0) goto LAB_106e0a6b0;
      goto LAB_106e0a6a0;
    }
    uVar5 = 0;
    lVar6 = 0;
  }
  _objc_release(lVar6);
  _objc_release(uVar3);
LAB_106e0a700:
  _objc_release(uVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar5;
}



/* Entry: 106e0a73c; end: 106e0a7cb; -[SCGalleryPrepareMediaForSnapsOperation _startProgressSimulationTimer] */

void FUN_106e0a73c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010bec3720();
  puVar1 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
  func_0x00010c270940(0x3fb999999999999a,PTR__OBJC_CLASS___NSTimer_1126af1b0,param_2,param_1,
                      PTR_s__progressSimulatorTimerDidFire__112535208,0,1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x108);
  *(undefined **)(param_1 + 0x108) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSRunLoop_1126b94b0;
  func_0x00010c0b6be0(PTR__OBJC_CLASS___NSRunLoop_1126b94b0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc020();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106e0a7cc; end: 106e0a807; -[SCGalleryPrepareMediaForSnapsOperation _stopProgressSimulatorTimer] */

void FUN_106e0a7cc(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x108) != 0) {
    func_0x00010c069d00();
    uVar1 = *(undefined8 *)(param_1 + 0x108);
    *(undefined8 *)(param_1 + 0x108) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 106e0a808; end: 106e0a887; -[SCGalleryPrepareMediaForSnapsOperation _progressSimulatorTimerDidFire:] */

void FUN_106e0a808(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined4 uVar2;
  double dVar3;
  float fVar4;
  
  _objc_retain(param_3);
  if ((*(long *)(param_1 + 0x48) != 0) && (*(long *)(param_1 + 0x108) == param_3)) {
    uVar1 = *(ulong *)(param_1 + 0x40);
    func_0x00010bf529e0(uVar1);
    dVar3 = 0.1 / (double)uVar1;
    fVar4 = (float)dVar3;
    func_0x00010c117720(dVar3,*(undefined8 *)(param_1 + 0x48));
    uVar2 = NEON_fminnm(SUB84(dVar3,0) + fVar4,0x3f800000);
    func_0x00010bede000(uVar2,param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106e0a888; end: 106e0a9eb; -[SCGalleryPrepareMediaForSnapsOperation .cxx_destruct] */

void FUN_106e0a888(long param_1)

{
  _objc_storeStrong(param_1 + 0x140,0);
  _objc_storeStrong(param_1 + 0x138,0);
  _objc_storeStrong(param_1 + 0x130,0);
  _objc_storeStrong(param_1 + 0x128,0);
  _objc_storeStrong(param_1 + 0x120,0);
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e0a9ec; end: 106e0ab93; -[SCGallerySetItemsToPrivateOperation initWithGalleryItems:containerViewController:context:videoImporter:previewURLVideoProvider:dataObjectContext:memoriesMeoMutating:memoriesAddSnapMutating:] */

undefined1 *
FUN_106e0a9ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126f6fc0;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined8 *)((long)puVar1 + 0x58) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined8 *)((long)puVar1 + 0x60) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x68);
    *(undefined8 *)((long)puVar1 + 0x68) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x70);
    *(undefined8 *)((long)puVar1 + 0x70) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x78);
    *(undefined8 *)((long)puVar1 + 0x78) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x80);
    *(undefined8 *)((long)puVar1 + 0x80) = param_10;
    _objc_release(uVar2);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106e0ab94; end: 106e0ac6b; -[SCGallerySetItemsToPrivateOperation runWithCompletionBlock:] */

void FUN_106e0ab94(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(undefined1 *)(param_1 + 0x51) = 1;
  _objc_retainBlock();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010b5fd5f8(uVar1,1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  _objc_release(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010b5fd5f8(uVar1,2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  _objc_release(uVar2);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x000108df7558();
  _objc_release(param_1);
  return;
}



/* Entry: 106e0ac6c; end: 106e0ac8b;  */

void FUN_106e0ac6c(long param_1,int param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be78a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(*(long *)(param_1 + 0x20),PTR_s__prepareMedia_11257bc20);
    return;
  }
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x54) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bde2810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s__complete_1125563a0);
  return;
}



/* Entry: 106e0ac8c; end: 106e0acff; -[SCGallerySetItemsToPrivateOperation progressOverlayViewDidCancel:] */

void FUN_106e0ac8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  if (*(char *)(param_1 + 0x51) == '\x01') {
    if (*(char *)(param_1 + 0x50) == '\x01') {
      uVar1 = *(undefined8 *)(param_1 + 0x40);
      *(undefined1 *)(param_1 + 0x54) = 1;
      _objc_retain(uVar1);
      func_0x00010bde2800(param_1);
      func_0x00010bf2dba0(uVar1);
      _objc_release(uVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106e0ad00; end: 106e0b08f; -[SCGallerySetItemsToPrivateOperation _prepareMedia] */

void FUN_106e0ad00(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined1 *)(param_1 + 0x50) = 1;
  puVar1 = PTR_PTR_1126d2b08;
  _objc_alloc();
  lVar14 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar14);
  func_0x00010c016dc0();
  uVar16 = *(undefined8 *)(param_1 + 0x40);
  *(undefined **)(param_1 + 0x40) = puVar1;
  _objc_release(uVar16);
  _objc_release(lVar14);
  lVar14 = param_1 + 0x10;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar14 != 0) {
    lVar14 = param_1 + 0x10;
    _objc_loadWeakRetained();
    lVar2 = lVar14;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar14);
    puVar1 = PTR_PTR_1126c3290;
    _objc_alloc();
    func_0x00010bf20c00(lVar2);
    func_0x00010c013de0();
    uVar16 = *(undefined8 *)(param_1 + 0x48);
    *(undefined **)(param_1 + 0x48) = puVar1;
    _objc_release(uVar16);
    func_0x00010c077120(*(undefined8 *)(param_1 + 0x40));
    func_0x00010c182cc0(*(undefined8 *)(param_1 + 0x48));
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x48));
    func_0x00010c219b60(*(undefined8 *)(param_1 + 0x48));
    func_0x00010befbb60(lVar2);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar2;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar2;
    func_0x00010c2793a0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar7;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar2;
    func_0x00010bf1ff80(lVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar10;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar13);
    _objc_release(uVar12);
    _objc_release(lVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(lVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(lVar5);
    _objc_release(uVar4);
    _objc_release(uVar16);
    _objc_release(lVar14);
    _objc_release(uVar3);
    _objc_release(lVar2);
  }
  lVar14 = *(long *)(param_1 + 0x40);
  func_0x00010c142c20();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c1e46b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(lVar14 + 0x20) + 0x48),PTR_s_setProgress_animated__112656bd0,
             1);
  return;
}



/* Entry: 106e0b090; end: 106e0b09f;  */

void FUN_106e0b090(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1e46b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48),PTR_s_setProgress_animated__112656bd0
             ,1);
  return;
}



/* Entry: 106e0b0a0; end: 106e0b30b;  */

void FUN_106e0b0a0(long param_1,int param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  long param_6,undefined8 param_7,undefined *param_8)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x50) = 0;
  if (*(char *)(*(long *)(param_1 + 0x20) + 0x51) == '\x01') {
    if (param_2 != 0) {
      lVar3 = param_6;
      func_0x00010bf51e00();
      uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
      *(long *)(*(long *)(param_1 + 0x20) + 0x30) = lVar3;
      _objc_release(uVar5);
      uVar5 = param_7;
      func_0x00010bf51e00();
      uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
      *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38) = uVar5;
      _objc_release(uVar6);
      func_0x00010bea4200(*(undefined8 *)(param_1 + 0x20));
      goto LAB_106e0b2a8;
    }
    *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x53) = 0;
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bde2800(uVar5);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_8);
    func_0x00010c0f7fe0(0x3fe8000000000000,uVar5);
    _objc_release(uVar5);
    puVar2 = param_8;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_6);
    lVar3 = param_6;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar3 != 0) {
      lVar7 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_6);
        }
        func_0x00010c12cc60(puVar2);
        lVar7 = lVar7 + 1;
      } while (lVar3 != lVar7);
      lVar3 = param_6;
      func_0x00010bf52a60();
    }
    _objc_release(param_6);
  }
  _objc_release(puVar2);
LAB_106e0b2a8:
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  lVar4 = *(long *)(param_4 + 0x20) + 0x10;
  _objc_loadWeakRetained(lVar4);
  func_0x000107dffcbc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 106e0b30c; end: 106e0b343;  */

void FUN_106e0b30c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20) + 0x10;
  _objc_loadWeakRetained(lVar1);
  func_0x000107dffcbc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106e0b344; end: 106e0b477; -[SCGallerySetItemsToPrivateOperation _setGalleryEntriesToPrivate] */

void FUN_106e0b344(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x78);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b2220;
    _objc_alloc(PTR_PTR_1126b2220);
    puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04a560(puVar3);
    func_0x00010c288c60(uVar2);
    _objc_release(puVar3);
    _objc_release(puVar4);
    _objc_release(uVar2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bea6490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setPhotoAssetsToPrivate_1125872c8);
  return;
}



/* Entry: 106e0b478; end: 106e0b4bb;  */

void FUN_106e0b478(long param_1,long param_2)

{
  func_0x00010bf529e0();
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bea6490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + 0x20),PTR_s__setPhotoAssetsToPrivate_1125872c8);
    return;
  }
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x53) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bde2810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s__complete_1125563a0);
  return;
}



/* Entry: 106e0b4bc; end: 106e0b4c3; -[SCGallerySetItemsToPrivateOperation _setPhotoAssetsToPrivate] */

void FUN_106e0b4bc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea6470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setPhotoAssetToPrivateAtIndex__1125872c0,0);
  return;
}



/* Entry: 106e0b4c4; end: 106e0b95f; -[SCGallerySetItemsToPrivateOperation _setPhotoAssetToPrivateAtIndex:] */

void FUN_106e0b4c4(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  ulong uStack_80;
  
  uVar1 = *(ulong *)(param_1 + 0x28);
  func_0x00010bf529e0();
  if (uVar1 <= param_3) {
    *(undefined1 *)(param_1 + 0x53) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bde2810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__complete_1125563a0);
    return;
  }
  puVar2 = *(undefined **)(param_1 + 0x28);
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c0dfd40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067fc0();
  _objc_release(uVar4);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uVar4 = 0xc2000000;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_106e0b960;
  puStack_90 = &UNK_11097e650;
  ppuVar5 = &puStack_a8;
  lStack_88 = param_1;
  uStack_80 = param_3;
  _objc_retainBlock();
  puVar6 = puVar2;
  func_0x00010bf5a700();
  _objc_retainAutoreleasedReturnValue();
  if (puVar6 == (undefined *)0x0) {
    puVar7 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar6);
    puVar7 = puVar6;
  }
  _objc_release(puVar6);
  puVar6 = puVar2;
  func_0x00010c0c6c20();
  if (puVar6 == (undefined *)0x1) {
    uVar8 = *(undefined8 *)(param_1 + 0x80);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___UIImage_1126aea68;
    puVar13 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf64ac0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14d040();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = 0xffffffffa9fc90cc;
    func_0x00010b77c6b4(0xffffffffa9fc90cc);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar2;
    func_0x00010c09da80(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2a7e0(PTR_PTR_1126b6600);
    puVar10 = (undefined *)0x0;
    func_0x000108dfcd80();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR_PTR_1126b2220;
    _objc_alloc();
    puVar12 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04a560();
    func_0x00010befa840(uVar4,uVar8);
    _objc_release(puVar11);
    _objc_release(puVar12);
  }
  else {
    puVar6 = puVar2;
    func_0x00010c0c6c20();
    if (puVar6 != (undefined *)0x2) goto LAB_106e0b91c;
    uVar8 = *(undefined8 *)(param_1 + 0x80);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = *(undefined **)(param_1 + 0x68);
    func_0x00010c29af00(puVar13);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar2;
    func_0x00010c09da80(puVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = 0;
    func_0x000108dfcd80();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR_PTR_1126b2220;
    _objc_alloc();
    puVar14 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04a560();
    func_0x00010befc940(uVar8);
  }
  _objc_release(puVar10);
  _objc_release(puVar14);
  _objc_release(uVar9);
  _objc_release(puVar6);
  _objc_release(puVar13);
  _objc_release(uVar8);
LAB_106e0b91c:
  _objc_release(puVar7);
  _objc_release(ppuVar5);
  _objc_release(uVar3);
  _objc_release(puVar2);
  return;
}



/* Entry: 106e0b960; end: 106e0b983;  */

void FUN_106e0b960(long param_1,long param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bea6470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + 0x20),PTR_s__setPhotoAssetToPrivateAtIndex__1125872c0,
               *(long *)(param_1 + 0x28) + 1);
    return;
  }
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x53) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bde2810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s__complete_1125563a0);
  return;
}



/* Entry: 106e0b984; end: 106e0bb5b; -[SCGallerySetItemsToPrivateOperation _complete] */

void FUN_106e0b984(long param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = *(long *)(param_1 + 0x30);
  _objc_retain(lVar8);
  lVar5 = lVar8;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  while (lVar5 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar3) {
        _objc_enumerationMutation(lVar8);
      }
      func_0x00010c12cc60(puVar4);
      lVar9 = lVar9 + 1;
    } while (lVar5 != lVar9);
    lVar5 = lVar8;
    func_0x00010bf52a60();
  }
  _objc_release(lVar8);
  lVar5 = *(long *)(param_1 + 0x18);
  _objc_retainBlock();
  uVar1 = *(undefined1 *)(param_1 + 0x53);
  uVar2 = *(undefined1 *)(param_1 + 0x54);
  if (*(long *)(param_1 + 0x48) != 0) {
    func_0x00010c18b5e0();
    func_0x00010c12c960(*(undefined8 *)(param_1 + 0x48));
    uVar6 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = 0;
    _objc_release(uVar6);
  }
  uVar6 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  _objc_release(uVar6);
  *(undefined2 *)(param_1 + 0x51) = 0x100;
  if (lVar5 != 0) {
    (**(code **)(lVar5 + 0x10))(lVar5,uVar1,uVar2);
  }
  _objc_release(lVar5);
  _objc_release(puVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar4 + 0x80,0);
  _objc_storeStrong(puVar4 + 0x78,0);
  _objc_storeStrong(puVar4 + 0x70,0);
  _objc_storeStrong(puVar4 + 0x68,0);
  _objc_storeStrong(puVar4 + 0x60,0);
  _objc_storeStrong(puVar4 + 0x58,0);
  _objc_storeStrong(puVar4 + 0x48,0);
  _objc_storeStrong(puVar4 + 0x40,0);
  _objc_storeStrong(puVar4 + 0x38,0);
  _objc_storeStrong(puVar4 + 0x30,0);
  _objc_storeStrong(puVar4 + 0x28,0);
  _objc_storeStrong(puVar4 + 0x20,0);
  _objc_storeStrong(puVar4 + 0x18,0);
  _objc_destroyWeak(puVar4 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar4 + 8,0);
  return;
}



/* Entry: 106e0bb5c; end: 106e0bc23; -[SCGallerySetItemsToPrivateOperation .cxx_destruct] */

void FUN_106e0bb5c(long param_1)

{
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e0bc24; end: 106e0bff3;  */

void FUN_106e0bc24(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126b25c0;
  _objc_alloc_init(PTR_PTR_1126b25c0);
  puVar8 = PTR_PTR_1126b25e0;
  _objc_retain(param_3);
  _objc_alloc_init(puVar8);
  lVar2 = param_3;
  func_0x00010c0c4660();
  func_0x0001085439dc();
  lVar3 = param_3;
  func_0x00010c075780(param_3);
  func_0x00010bf8b160(param_3);
  func_0x00010853d77c(lVar3,lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dd500(puVar8);
  _objc_release(lVar3);
  puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  lVar3 = param_3;
  func_0x00010bf369a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_3;
  func_0x00010bf36820(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c2971c0(param_1,param_2,PTR__OBJC_CLASS___NSValue_1126afdf8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8b160(param_3);
  lVar6 = param_3;
  func_0x00010c083e00(param_3);
  _objc_release(param_3);
  func_0x00010853d86c(param_1,lVar2,param_4,lVar3,lVar4,0,puVar5,lVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  if (lVar2 != 0) {
    func_0x00010befa120(puVar7);
  }
  func_0x00010c1dd6c0(puVar8);
  _objc_release(lVar2);
  _objc_release(puVar7);
  func_0x00010c1dd3e0(puVar1);
  _objc_release(puVar8);
  lVar2 = param_3;
  FUN_106e0bff4(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16b420(puVar1);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010c242120();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  if (lVar3 != 0) {
    lVar2 = param_3;
    func_0x00010c242120(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010853e268();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ba8a0(puVar1);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  lVar2 = param_3;
  func_0x00010c242120();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c281680();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = lVar3;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    puVar8 = PTR_PTR_1126cc7a0;
    _objc_alloc_init(PTR_PTR_1126cc7a0);
    puVar7 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf649c0(PTR__OBJC_CLASS___NSData_1126ae778);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126c0328;
    _objc_alloc(PTR_PTR_1126c0328);
    func_0x00010c008360();
    func_0x00010c21bd60(puVar8);
    _objc_release(puVar5);
    _objc_release(puVar7);
  }
  _objc_release(lVar3);
  func_0x00010c21bd40(puVar1);
  _objc_release(puVar8);
  puVar8 = PTR_PTR_1126cc7a8;
  _objc_opt_new(PTR_PTR_1126cc7a8);
  if (param_5 == -1) {
    puVar7 = (undefined *)0x0;
  }
  else {
    if ((param_5 == 0) || (param_5 == 1)) {
      func_0x00010c1690c0(puVar8);
    }
    _objc_retain(puVar8);
    puVar7 = puVar8;
  }
  _objc_release(puVar8);
  func_0x00010c1e5280(puVar1);
  _objc_release(puVar7);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106e0bff4; end: 106e0c19f;  */

void FUN_106e0bff4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010c242120();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf4e840();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar6 = PTR_PTR_1126b2378;
  if (lVar3 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c242120(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf4e840();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe3740(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  puVar4 = PTR_PTR_1126cf388;
  _objc_alloc_init(PTR_PTR_1126cf388);
  lVar1 = param_1;
  func_0x00010c23f440();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010853e134();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    puVar5 = puVar4;
    func_0x00010bf0d800(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120();
    _objc_release(puVar5);
  }
  lVar1 = param_1;
  func_0x00010c297e20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010853e1b4();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar3 != 0) {
    puVar5 = puVar4;
    func_0x00010bf0d800(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120();
    _objc_release(puVar5);
  }
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(puVar6);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106e0c1a0; end: 106e0c7ef;  */

void FUN_106e0c1a0(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long lVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined *puVar15;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar1 = PTR_PTR_1126b25c0;
  _objc_alloc_init();
  _objc_retain(param_2);
  puVar2 = PTR_PTR_1126b25e0;
  _objc_alloc_init(PTR_PTR_1126b25e0);
  lVar3 = param_2;
  func_0x00010c0c4660();
  func_0x0001085439dc();
  lVar4 = param_2;
  func_0x00010c075780(param_2);
  func_0x00010bf8b160(param_2);
  func_0x00010853d77c(lVar4,lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dd500(puVar2);
  _objc_release(lVar4);
  puVar13 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  puVar15 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  lVar4 = param_2;
  func_0x00010c242120();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0744e0();
  _objc_release(lVar4);
  if ((int)lVar5 != 0) {
    puVar11 = PTR_PTR_1126c4548;
    _objc_alloc(PTR_PTR_1126c4548);
    func_0x00010c032420();
    func_0x00010befa120(puVar15);
    _objc_release(puVar11);
  }
  lVar4 = param_2;
  func_0x00010c0c5c40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf529e0();
  if (lVar5 != 0) {
    func_0x00010befa160(puVar15);
  }
  lVar5 = param_2;
  func_0x00010c242120();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf4e840();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c0720c0();
  _objc_release(lVar6);
  _objc_release(lVar5);
  if ((int)lVar7 != 0) {
    puVar11 = PTR_PTR_1126c4548;
    _objc_alloc(PTR_PTR_1126c4548);
    func_0x00010c032420();
    func_0x00010befa120(puVar15);
    _objc_release(puVar11);
  }
  puVar8 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c2a5040(param_2);
  uVar9 = param_1;
  func_0x00010bfe0640(param_2);
  func_0x00010c2971c0(param_1,uVar9,puVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8b160(param_2);
  lVar5 = param_2;
  func_0x00010c083e00(param_2);
  puVar11 = (undefined *)0x0;
  func_0x00010853d86c(param_1,lVar3,0,0,0,puVar15,puVar8,lVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  if (lVar3 != 0) {
    func_0x00010befa120(puVar13);
  }
  func_0x00010c1dd6c0(puVar2);
  _objc_release(lVar3);
  _objc_release(lVar4);
  _objc_release(puVar15);
  _objc_release(puVar13);
  _objc_release(param_2);
  func_0x00010c1dd3e0(puVar1);
  _objc_release(puVar2);
  lVar3 = param_2;
  func_0x00010c0c4660();
  func_0x00010c07cca0(param_2);
  puVar2 = PTR_PTR_1126cc770;
  _objc_alloc_init();
  puVar13 = (undefined *)0x0;
  switch(lVar3) {
  case 4:
  case 5:
  case 7:
    break;
  case 9:
  case 10:
  case 0xe:
    break;
  case 0xc:
  case 0xd:
  case 0xf:
    break;
  case 0x10:
  case 0x11:
  case 0x12:
    break;
  case 0x13:
  case 0x14:
  case 0x15:
    break;
  default:
    goto LAB_106e0c4cc;
  case -1:
  case 0:
  case 1:
  case 2:
  case 3:
  case 6:
  case 8:
  case 0xb:
    goto code_r0x000106e0c4e4;
  }
  func_0x00010c220e20(puVar2);
LAB_106e0c4cc:
  func_0x00010c1ee860(puVar2);
  _objc_retain(puVar2);
  puVar13 = puVar2;
code_r0x000106e0c4e4:
  _objc_release(puVar2);
  func_0x00010c207640(puVar1);
  _objc_release(puVar13);
  puVar2 = puVar1;
  func_0x00010bfdc7e0();
  if ((int)puVar2 != 0) {
    func_0x00010c07cca0(param_2);
    puVar2 = puVar1;
    func_0x00010c248460(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ee860();
    _objc_release(puVar2);
  }
  puVar2 = puVar1;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar2;
  func_0x00010c0ff660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = puVar13;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  while (puVar2 != (undefined *)0x0) {
    puVar15 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar3) {
        _objc_enumerationMutation(puVar13);
      }
      uVar14 = *(undefined8 *)((long)puVar15 * 8);
      uVar9 = uVar14;
      func_0x00010c0c3fe0();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar9;
      func_0x00010bf0b760();
      _objc_release(uVar9);
      if ((int)uVar10 == 5) {
        lVar4 = param_2;
        func_0x00010c242120();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf298a0();
        func_0x00010c0c3fe0();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar14;
        func_0x00010bf30ae0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1a12c0();
        _objc_release(uVar9);
        _objc_release(uVar14);
        _objc_release(lVar4);
      }
      puVar15 = puVar15 + 1;
    } while (puVar2 != puVar15);
    puVar2 = puVar13;
    func_0x00010bf52a60();
  }
  _objc_release(puVar13);
  lVar3 = param_2;
  FUN_106e0bff4(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16b420(puVar1);
  _objc_release(lVar3);
  lVar3 = param_2;
  func_0x00010c0c4660();
  puVar2 = PTR_DAT_1126a57d0;
  if (lVar3 == 0xb) {
    _objc_retain(param_2);
    lVar4 = param_2;
    func_0x00010010fab4(param_2,puVar2);
    lVar3 = param_2;
    if ((int)lVar4 == 0) {
      lVar3 = 0;
    }
    _objc_retain(lVar3);
    _objc_release(param_2);
    lVar4 = lVar3;
    func_0x00010bfbf220(lVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    func_0x00010c1a26e0(puVar1);
    _objc_release(lVar4);
    puVar11 = puVar2;
  }
  lVar3 = param_2;
  func_0x00010c242120();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar3);
  if (lVar4 != 0) {
    lVar3 = param_2;
    func_0x00010c242120();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = (undefined *)0x0;
    lVar5 = lVar4;
    func_0x00010853e268();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ba8a0(puVar1);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) goto _objc_autoreleaseReturnValue;
  puVar1 = puVar11;
  ___stack_chk_fail();
  _objc_retain();
  FUN_106e0c1a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  puVar2 = PTR_PTR_1126cc7a8;
  _objc_opt_new(PTR_PTR_1126cc7a8);
  lVar3 = param_2;
  func_0x00010bfbd1c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08fa60();
  _objc_release(lVar3);
  if (lVar4 == 0) {
    lVar3 = param_2;
    func_0x00010c0fa960();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c08fa60();
    _objc_release(lVar3);
    if (lVar4 != 0) goto LAB_106e0c898;
    puVar13 = (undefined *)0x0;
  }
  else {
LAB_106e0c898:
    func_0x00010c1690c0(puVar2);
    _objc_retain(puVar2);
    puVar13 = puVar2;
  }
  _objc_release(puVar2);
  _objc_release(param_2);
  func_0x00010c1e5280(puVar1);
  _objc_release(puVar13);
  _objc_retain(param_2);
  lVar3 = param_2;
  func_0x00010bf5a700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar2 = (undefined *)0x0;
  if (lVar3 != 0) {
    puVar2 = PTR_PTR_1126bcf30;
    _objc_opt_new(PTR_PTR_1126bcf30);
    lVar3 = param_2;
    func_0x00010bf5a700(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    func_0x00010c1c4200(puVar2);
    _objc_release(lVar3);
  }
  _objc_release(param_2);
  func_0x00010c216040(puVar1);
  _objc_release(puVar2);
  _objc_release(param_2);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106e0c7f0; end: 106e0c97f;  */

void FUN_106e0c7f0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain();
  FUN_106e0c1a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_1);
  puVar1 = PTR_PTR_1126cc7a8;
  _objc_opt_new(PTR_PTR_1126cc7a8);
  lVar2 = param_1;
  func_0x00010bfbd1c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  if (lVar3 == 0) {
    lVar2 = param_1;
    func_0x00010c0fa960();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08fa60();
    _objc_release(lVar2);
    if (lVar3 == 0) {
      puVar4 = (undefined *)0x0;
      goto LAB_106e0c8ac;
    }
  }
  func_0x00010c1690c0(puVar1);
  _objc_retain(puVar1);
  puVar4 = puVar1;
LAB_106e0c8ac:
  _objc_release(puVar1);
  _objc_release(param_1);
  func_0x00010c1e5280(param_2);
  _objc_release(puVar4);
  _objc_retain(param_1);
  lVar2 = param_1;
  func_0x00010bf5a700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar1 = (undefined *)0x0;
  if (lVar2 != 0) {
    puVar1 = PTR_PTR_1126bcf30;
    _objc_opt_new(PTR_PTR_1126bcf30);
    lVar2 = param_1;
    func_0x00010bf5a700(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    func_0x00010c1c4200(puVar1);
    _objc_release(lVar2);
  }
  _objc_release(param_1);
  func_0x00010c216040(param_2);
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 106e0c980; end: 106e0cb0f; -[SCMemoriesTrackingImageProcessCommandScope initWithOverlay:stickerData:snapInfo:outputSize:includeVisualFilters:timelineImageSegmentsEnabled:spectaclesPrimaryCamera:scopeLifecycleDelegate:completionQueue:imageCache:completion:] */

undefined8 *
FUN_106e0c980(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
             undefined1 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  puStack_78 = PTR_PTR_1126f6fc8;
  puVar1 = &uStack_80;
  uStack_80 = param_3;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_5);
    uVar2 = puVar1[2];
    puVar1[2] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[3];
    puVar1[3] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[4];
    puVar1[4] = param_7;
    _objc_release(uVar2);
    puVar1[10] = param_1;
    puVar1[0xb] = param_2;
    *(undefined1 *)(puVar1 + 1) = param_8;
    *(undefined1 *)((long)puVar1 + 9) = param_9;
    puVar1[5] = param_10;
    _objc_storeWeak(puVar1 + 9,param_11);
    puVar1[6] = param_12;
    uVar2 = param_14;
    func_0x00010bf51e00();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    _objc_release(uVar3);
    _objc_storeWeak(puVar1 + 8,param_13);
  }
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return puVar1;
}



/* Entry: 106e0cb10; end: 106e0cb17; -[SCMemoriesTrackingImageProcessCommandScope overlay] */

undefined8 FUN_106e0cb10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106e0cb18; end: 106e0cb1f; -[SCMemoriesTrackingImageProcessCommandScope stickerData] */

undefined8 FUN_106e0cb18(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106e0cb20; end: 106e0cb27; -[SCMemoriesTrackingImageProcessCommandScope snapInfo] */

undefined8 FUN_106e0cb20(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106e0cb28; end: 106e0cb2f; -[SCMemoriesTrackingImageProcessCommandScope outputSize] */

undefined1  [16] FUN_106e0cb28(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x50);
}



/* Entry: 106e0cb30; end: 106e0cb37; -[SCMemoriesTrackingImageProcessCommandScope includeVisualFilters] */

undefined1 FUN_106e0cb30(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106e0cb38; end: 106e0cb3f; -[SCMemoriesTrackingImageProcessCommandScope timelineImageSegmentsEnabled] */

undefined1 FUN_106e0cb38(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 106e0cb40; end: 106e0cb47; -[SCMemoriesTrackingImageProcessCommandScope spectaclesPrimaryCamera] */

undefined8 FUN_106e0cb40(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106e0cb48; end: 106e0cb4f; -[SCMemoriesTrackingImageProcessCommandScope completionQueue] */

undefined8 FUN_106e0cb48(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106e0cb50; end: 106e0cb57; -[SCMemoriesTrackingImageProcessCommandScope completion] */

undefined8 FUN_106e0cb50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 106e0cb58; end: 106e0cb6f; -[SCMemoriesTrackingImageProcessCommandScope imageCache] */

void FUN_106e0cb58(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106e0cb70; end: 106e0cb87; -[SCMemoriesTrackingImageProcessCommandScope scopeLifecycleDelegate] */

void FUN_106e0cb70(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106e0cb88; end: 106e0cb93; -[SCMemoriesTrackingImageProcessCommandScope setScopeLifecycleDelegate:] */

void FUN_106e0cb88(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x48,param_3);
  return;
}



/* Entry: 106e0cb94; end: 106e0cbeb; -[SCMemoriesTrackingImageProcessCommandScope .cxx_destruct] */

void FUN_106e0cb94(long param_1)

{
  _objc_destroyWeak(param_1 + 0x48);
  _objc_destroyWeak(param_1 + 0x40);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106e0cbec; end: 106e0cd0b; -[SCOperaGLImageLayerViewController initWithConfiguration:layerViewControllerConfiguration:operaDependencies:eventAnnouncer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_106e0cbec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126f6fd0;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithConfiguration_layerViewC_1125de030,param_3,param_4,
                      param_5,param_6);
  puVar2 = PTR_PTR_1126ae720;
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_5);
    func_0x00010bf11fe0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126c48c0;
    _objc_alloc();
    func_0x00010c00c300();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11275ef74);
    *(undefined **)((long)puVar1 + (long)_DAT_11275ef74) = puVar3;
    _objc_release(uVar4);
    _objc_release(puVar2);
    _objc_release(param_5);
  }
  _objc_release(param_5);
  return puVar1;
}



/* Entry: 106e0cd0c; end: 106e0cd13;  */

void FUN_106e0cd0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf70bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_deviceMotionManager_1125b9c90);
  return;
}



/* Entry: 106e0cd14; end: 106e0d13f; -[SCOperaGLImageLayerViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e0cd14(double param_1,double param_2,double param_3,double param_4,undefined *param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 *param_8)

{
  double *pdVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  double dVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pdVar1 = (double *)(param_5 + _DAT_11275ef78);
  puVar4 = param_5;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  puVar2 = param_5;
  dVar8 = param_1;
  dVar10 = param_2;
  dVar11 = param_3;
  dVar12 = param_4;
  func_0x00010c08c520(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb1c0();
  *pdVar1 = param_1 + dVar10;
  pdVar1[1] = param_2 + dVar8;
  pdVar1[2] = param_3 - (dVar10 + dVar12);
  pdVar1[3] = param_4 - (dVar8 + dVar11);
  _objc_release(puVar2);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  uVar9 = *(undefined8 *)PTR__CGRectZero_110347608;
  func_0x00010c013de0(uVar9,*(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c222380(param_5,param_6,puVar4);
  _objc_release(puVar4);
  puVar4 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = (undefined *)0x1;
  func_0x00010c17d4c0();
  _objc_release(puVar4);
  puVar4 = param_5;
  func_0x00010c08c520();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar4;
  func_0x00010bfdb4e0();
  _objc_release();
  if ((int)puVar2 != 0) {
    puVar4 = param_5;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6a1a0();
    puVar2 = param_5;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(uVar9);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release();
  }
  lVar6 = (long)_DAT_11275ef7c;
  if (*(long *)(param_5 + lVar6) == 0) {
    puVar4 = PTR_PTR_1126d1378;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGPointZero_110347540,
                        *(undefined8 *)(PTR__CGPointZero_110347540 + 8),pdVar1[2],pdVar1[3]);
    uVar9 = *(undefined8 *)(param_5 + lVar6);
    *(undefined **)(param_5 + lVar6) = puVar4;
    _objc_release(uVar9);
    func_0x00010c221ca0(*(undefined8 *)(param_5 + lVar6),param_6,1);
    uVar9 = *(undefined8 *)(param_5 + lVar6);
    func_0x00010bfccde0(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d4c20();
    _objc_release(uVar9);
    uStack_88 = *(undefined8 *)PTR__kEAGLDrawablePropertyRetainedBacking_11034b938;
    uStack_80 = *(undefined8 *)PTR__kEAGLDrawablePropertyColorFormat_11034b930;
    uStack_70 = *(undefined8 *)PTR__kEAGLColorFormatRGBA8_11034b928;
    puStack_78 = PTR____kCFBooleanFalse_11034ab60;
    param_8 = &uStack_88;
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_6,&puStack_78,param_8,2);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_5 + lVar6);
    func_0x00010bfccde0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c1917e0();
    _objc_release(uVar9);
    _objc_release();
  }
  lVar7 = (long)_DAT_11275ef80;
  if (*(long *)(param_5 + lVar7) == 0) {
    puVar4 = PTR_PTR_1126d2b38;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGPointZero_110347540,
                        *(undefined8 *)(PTR__CGPointZero_110347540 + 8),pdVar1[2],pdVar1[3]);
    uVar9 = *(undefined8 *)(param_5 + lVar7);
    *(undefined **)(param_5 + lVar7) = puVar4;
    _objc_release(uVar9);
    puVar5 = *(undefined **)(param_5 + lVar6);
    puVar4 = *(undefined **)(param_5 + lVar7);
    func_0x00010c1a3c20(puVar4,param_6,puVar5);
  }
  lVar6 = (long)_DAT_11275ef84;
  if (*(long *)(param_5 + lVar6) == 0) {
    puVar4 = PTR_PTR_1126d2b40;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGPointZero_110347540,
                        *(undefined8 *)(PTR__CGPointZero_110347540 + 8),pdVar1[2],pdVar1[3]);
    uVar9 = *(undefined8 *)(param_5 + lVar6);
    *(undefined **)(param_5 + lVar6) = puVar4;
    _objc_release(uVar9);
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_5 + lVar6),param_6,puVar4);
    _objc_release(puVar4);
    uVar9 = *(undefined8 *)(param_5 + lVar6);
    func_0x00010bf4dce0(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(uVar9);
    puVar4 = param_5;
    func_0x00010c29bf00(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar4);
    puVar2 = PTR_PTR_1126d2b48;
    _objc_alloc();
    puVar4 = param_5;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    param_8 = *(undefined8 **)(param_5 + lVar6);
    puVar5 = puVar4;
    func_0x00010c061460(*pdVar1,pdVar1[1],pdVar1[2],pdVar1[3],puVar2,param_6,puVar4,param_8,
                        *(undefined8 *)(param_5 + lVar7));
    uVar9 = *(undefined8 *)(param_5 + _DAT_11275ef88);
    *(undefined **)(param_5 + _DAT_11275ef88) = puVar2;
    _objc_release(uVar9);
    _objc_release();
  }
  param_5[_DAT_11275ef8c] = 0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar5);
  _objc_retain(param_8);
  puVar2 = puVar4;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar2 != (undefined *)0x0) {
    puVar2 = puVar4;
    func_0x00010c08c0e0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c07cc60();
    func_0x00010beda6a0(puVar4,param_6,puVar3);
    _objc_release(puVar2);
    func_0x00010beaed80(puVar4);
    func_0x00010beab0c0(puVar4);
    func_0x00010bed97c0(puVar4,param_6,puVar5,param_8);
    func_0x00010c29bf00(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219960();
    _objc_release(puVar4);
  }
  _objc_release(param_8);
  _objc_release(puVar5);
  return;
}



/* Entry: 106e0d140; end: 106e0d237; -[SCOperaGLImageLayerViewController updateViewWithPreviousLayer:currentLayer:] */

void FUN_106e0d140(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010c08c0e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c07cc60();
    func_0x00010beda6a0(param_1,param_2,lVar2);
    _objc_release(lVar1);
    func_0x00010beaed80(param_1);
    func_0x00010beab0c0(param_1);
    func_0x00010bed97c0(param_1,param_2,param_3,param_4);
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219960();
    _objc_release(param_1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106e0d238; end: 106e0d60f; -[SCOperaGLImageLayerViewController _updateImageProcessSessionWithPreviousLayer:currentLayer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e0d238(ulong param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + (long)_DAT_11275ef90) == 0) goto LAB_106e0d5c0;
  uVar1 = param_3;
  func_0x00010bfe7fa0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010bfe7fa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar1);
  _objc_retain(uVar2);
  if (uVar1 == uVar2) {
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  else {
    if (uVar2 == 0) {
      _objc_release();
      _objc_release(uVar1);
    }
    else {
      uVar3 = uVar1;
      func_0x00010c071ae0();
      _objc_release(uVar2);
      _objc_release(uVar1);
      _objc_release(uVar2);
      _objc_release(uVar1);
      if ((uVar3 & 1) != 0) goto LAB_106e0d3cc;
    }
    _objc_initWeak(auStack_58,param_1);
    uVar1 = param_1;
    func_0x00010bfe8840(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_4;
    func_0x00010bfe7fa0(param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_60,auStack_58);
    func_0x00010bfe78a0(uVar1);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
LAB_106e0d3cc:
  uVar1 = param_3;
  func_0x00010c0cd220();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c0cd220();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar1);
  _objc_retain(uVar2);
  if (uVar1 == uVar2) {
    _objc_release(uVar2);
    uVar3 = uVar1;
LAB_106e0d4b8:
    _objc_release(uVar1);
    _objc_release(uVar2);
    _objc_release(uVar3);
  }
  else {
    if (uVar2 == 0) {
      _objc_release();
      _objc_release(uVar1);
LAB_106e0d464:
      uVar4 = *(undefined8 *)(param_1 + (long)_DAT_11275ef98);
      uVar3 = param_1;
      func_0x00010c08c0e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar3;
      func_0x00010c0cd220();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = param_1;
      func_0x00010be24060(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c7980(uVar4);
      goto LAB_106e0d4b8;
    }
    uVar3 = uVar1;
    func_0x00010c071ae0();
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((uVar3 & 1) == 0) goto LAB_106e0d464;
  }
  uVar1 = param_3;
  func_0x00010c0eed40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c0eed40();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar1);
  _objc_retain(uVar2);
  if (uVar1 == uVar2) {
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  else {
    if (uVar2 == 0) {
      _objc_release();
      _objc_release(uVar1);
    }
    else {
      uVar3 = uVar1;
      func_0x00010c071ae0();
      _objc_release(uVar2);
      _objc_release(uVar1);
      _objc_release(uVar2);
      _objc_release(uVar1);
      if ((uVar3 & 1) != 0) goto LAB_106e0d5c0;
    }
    uVar4 = *(undefined8 *)(param_1 + (long)_DAT_11275ef98);
    uVar1 = param_4;
    func_0x00010c0eed40(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be24060(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d6f00(uVar4);
    uVar2 = param_1;
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
LAB_106e0d5c0:
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106e0d610; end: 106e0d6bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e0d610(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar3 = (long)_DAT_11275ef94;
    _objc_retain(param_2);
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    *(undefined8 *)(param_1 + lVar3) = param_2;
    _objc_release(uVar1);
    puVar2 = PTR_PTR_1126ae558;
    func_0x00010bfe9ca0(PTR_PTR_1126ae558);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1aa080(*(undefined8 *)(param_1 + _DAT_11275ef90));
    _objc_release(puVar2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106e0d6bc; end: 106e0d80b; -[SCOperaGLImageLayerViewController _updateLayerLayout:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e0d6bc(double param_1,double param_2,long param_3,undefined8 param_4,byte param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  
  lVar4 = (long)_DAT_11275ef8c;
  if ((param_5 & 1) == 0) {
    if ((*(byte *)(param_3 + lVar4) & 1) == 0) {
      return;
    }
    *(byte *)(param_3 + lVar4) = param_5;
    func_0x00010bf47880(0,0,*(undefined8 *)(param_3 + _DAT_11275ef88),param_4,1);
  }
  else {
    *(byte *)(param_3 + lVar4) = param_5;
    uVar5 = *(undefined8 *)(param_3 + _DAT_11275ef88);
    lVar4 = param_3;
    func_0x00010c08c0e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar4;
    func_0x00010c0b8420();
    lVar2 = param_3;
    func_0x00010c08c0e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c65c0();
    lVar3 = param_3;
    dVar6 = param_1;
    func_0x00010c08c0e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c6700();
    dVar7 = 0.0;
    if (dVar6 != 0.0) {
      if (param_2 == 0.0) {
        dVar7 = INFINITY;
      }
      else {
        dVar7 = dVar6 / param_2;
      }
    }
    func_0x00010bf47880(param_1,dVar7,uVar5,param_4,lVar1);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar4);
  }
  func_0x00010c29bf00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cdc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106e0d80c; end: 106e0d963; -[SCOperaGLImageLayerViewController _setupBoomboxVisibilityController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e0d80c(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  uVar6 = param_2;
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar6;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf1f3c0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar6);
  if ((uVar3 & 1) == 0) {
    uVar6 = *(ulong *)(param_2 + (long)_DAT_11275ef9c);
    *(undefined8 *)(param_2 + (long)_DAT_11275ef9c) = 0;
  }
  else {
    uVar6 = param_2;
    func_0x00010c0f0be0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar6;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(uVar6);
    puVar4 = PTR_PTR_1126d2b50;
    _objc_alloc();
    uVar6 = param_2;
    func_0x00010c118dc0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff2f60(param_1,puVar4,param_3,uVar6);
    uVar5 = *(undefined8 *)(param_2 + (long)_DAT_11275ef9c);
    *(undefined **)(param_2 + (long)_DAT_11275ef9c) = puVar4;
    _objc_release(uVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar6);
  return;
}



/* Entry: 106e0d964; end: 106e0d967; -[SCOperaGLImageLayerViewController pause] */

void FUN_106e0d964(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec3670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__stopPlaybackIfNecessary_11258e740);
  return;
}


