/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1085b56cc; end: 1085b570f; -[SCModularCallSession sponsoredLensAttachmentPresentationUpdated:] */

void FUN_1085b56cc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1085b5710; end: 1085b574f; -[SCModularCallSession notifyScreenShareWillStart:] */

long FUN_1085b5710(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0dd520();
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 1085b5750; end: 1085b575b; -[SCModularCallSession updatePublishedMedia:completion:] */

void FUN_1085b5750(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c288f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_updatePublishedMedia_audioMuted__11267fdf8,param_3,0,param_4);
  return;
}



/* Entry: 1085b575c; end: 1085b58db; -[SCModularCallSession updatePublishedMedia:audioMuted:completion:] */

void FUN_1085b575c(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_5);
  _objc_initWeak(auStack_68,param_1);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  lVar2 = param_1 + 8;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c2688a0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  lVar4 = param_1;
  func_0x00010beff540();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_88,auStack_68);
  uStack_80 = param_3;
  uStack_78 = param_2;
  uStack_70 = param_4;
  _objc_retain(param_5);
  func_0x00010beedc00(lVar1);
  _objc_release(lVar4);
  _objc_release(param_1);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_5);
  return;
}



/* Entry: 1085b58dc; end: 1085b5947;  */

void FUN_1085b58dc(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + 8;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c288f80();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1085b5948; end: 1085b5973; -[SCModularCallSession dismissCall] */

void FUN_1085b5948(long param_1)

{
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf83420();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1085b5974; end: 1085b59d7; -[SCModularCallSession createVideoViewWithType:] */

void FUN_1085b5974(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126da428;
  _objc_alloc(PTR_PTR_1126da428);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c03e240(puVar1,param_2,param_1,param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1085b59d8; end: 1085b59e3; -[SCModularCallSession sessionWrapper:updatedState:] */

void FUN_1085b59d8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x48),PTR_s_next__112614028,param_4);
  return;
}



/* Entry: 1085b59e4; end: 1085b59ef; -[SCModularCallSession sessionWrapper:updatedUsersTalking:] */

void FUN_1085b59e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x50),PTR_s_next__112614028,param_4);
  return;
}



/* Entry: 1085b59f0; end: 1085b5a47; -[SCModularCallSession _audioRouteChanged] */

void FUN_1085b59f0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf0ffc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,lVar1);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1085b5a48; end: 1085b5bd3; -[SCModularCallSession _refreshConversationName] */

void FUN_1085b5a48(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c2688a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf5e540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = lVar3;
  func_0x00010bf517c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    _objc_initWeak(auStack_48,param_1);
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    lVar1 = lVar3;
    func_0x00010bf517c0(lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010bf51800(lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x000107c30a80();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010bf85e80(param_1);
    _objc_release(lVar4);
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(param_1);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(lVar3);
  return;
}



/* Entry: 1085b5bd4; end: 1085b5c53;  */

void FUN_1085b5bd4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x60);
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c0da520(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1085b5c54; end: 1085b5cef; -[SCModularCallSession .cxx_destruct] */

void FUN_1085b5c54(long param_1)

{
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_destroyWeak(param_1 + 0x38);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1085b5cf0; end: 1085b66f3; -[SCTCallInfoBuilder build] */

void FUN_1085b5cf0(long param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined *puVar14;
  undefined *puVar15;
  long lVar16;
  undefined *puVar17;
  long lVar18;
  undefined *puVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined8 *puVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lStack_1d8;
  long lStack_1d0;
  undefined8 uStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  long lStack_168;
  long *plStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  long lStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c252440(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010c09dd00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010bdeba40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uVar3);
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c12a2a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar6;
  FUN_1085b66f4();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  puStack_130 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_128 = 0xc2000000;
  pcStack_120 = FUN_1085b684c;
  puStack_118 = &UNK_110a59510;
  lStack_110 = param_1;
  uStack_108 = uVar3;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  lStack_1d8 = *(long *)(param_1 + 0x28);
  func_0x00010bef1a60();
  _objc_retainAutoreleasedReturnValue();
  if (lStack_1d8 == 0) {
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    lStack_168 = 0;
    uStack_170 = 0;
    uStack_158 = 0;
    plStack_160 = (long *)0x0;
    lVar7 = *(long *)(param_1 + 0x28);
    func_0x00010bf129a0();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = lVar7;
    func_0x00010bf52a60();
    lVar24 = 0;
    lVar20 = 0;
    if (lVar16 != 0) {
      lVar26 = *plStack_160;
      do {
        lVar22 = 0;
        do {
          if (*plStack_160 != lVar26) {
            _objc_enumerationMutation(lVar7);
          }
          lVar18 = *(long *)(lStack_168 + lVar22 * 8);
          lVar8 = lVar18;
          func_0x00010c27dd80();
          lVar21 = lVar18;
          lVar25 = lVar20;
          lVar1 = lVar24;
          if ((lVar8 == 1) ||
             (lVar8 = lVar18, func_0x00010c27dd80(), lVar21 = lVar20, lVar25 = lVar24,
             lVar1 = lVar18, lVar8 == 3)) {
            lVar24 = lVar1;
            _objc_retain(lVar18);
            _objc_release(lVar25);
            lVar20 = lVar21;
          }
          lVar22 = lVar22 + 1;
        } while (lVar16 != lVar22);
        lVar16 = lVar7;
        func_0x00010bf52a60();
      } while (lVar16 != 0);
    }
    _objc_release(lVar7);
    lStack_1d8 = lVar20;
    if (lVar24 != 0) {
      lStack_1d8 = lVar24;
    }
    if (lStack_1d8 == 0) {
      lVar16 = *(long *)(param_1 + 0x28);
      func_0x00010bf129a0();
      _objc_retainAutoreleasedReturnValue();
      lStack_1d8 = lVar16;
      func_0x00010bf04a20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar16);
    }
    else {
      _objc_retain();
    }
    _objc_release(lVar24);
    _objc_release(lVar20);
  }
  uVar9 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf129a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar9;
  func_0x00010bf00560();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar5;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar9);
  lVar20 = *(long *)(param_1 + 0x30);
  _objc_retain(lVar20);
  lVar16 = lVar20;
  func_0x00010c08fa60();
  lStack_1d0 = lVar20;
  if (lVar16 == 0) {
    lVar24 = *(long *)(param_1 + 0x10);
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = lVar24;
    FUN_1085d9ec4();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar16;
    func_0x000108601684();
    _objc_retainAutoreleasedReturnValue();
    lStack_1d0 = lVar16;
    func_0x00010bf446e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar20);
    _objc_release(lVar7);
    _objc_release(lVar16);
    _objc_release(lVar24);
  }
  iVar2 = (int)*(undefined8 *)(param_1 + 0x58);
  func_0x00010c280960();
  if (iVar2 != 3) {
    func_0x00010c280960();
  }
  puStack_198 = &uStack_1a0;
  uStack_1a0 = 0;
  uStack_190 = 0x3032000000;
  uStack_188 = 0x1085b69e4;
  uStack_180 = 0x1085b69f4;
  puVar17 = PTR_PTR_1126cf848;
  _objc_alloc();
  uVar11 = *(ulong *)(param_1 + 8);
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010bf28140();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  uVar13 = uVar12;
  func_0x00010c0720c0();
  if ((((uVar13 & 1) == 0) && (uVar13 = uVar12, func_0x00010c0720c0(), (uVar13 & 1) == 0)) &&
     (uVar13 = uVar12, func_0x00010c0720c0(), (uVar13 & 1) == 0)) {
    func_0x00010c0720c0();
  }
  _objc_release(uVar12);
  lVar16 = lStack_1d8;
  FUN_1085b68ec(lStack_1d8);
  _objc_retainAutoreleasedReturnValue();
  puVar23 = (undefined8 *)(param_1 + 8);
  uVar5 = *puVar23;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c06f1a0();
  uVar9 = *puVar23;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c074b40();
  func_0x00010c005860();
  puStack_178 = puVar17;
  _objc_release(uVar9);
  _objc_release(uVar5);
  _objc_release(lVar16);
  _objc_release(uVar12);
  _objc_release(uVar11);
  uVar9 = *puVar23;
  func_0x00010c252440(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar9;
  func_0x00010bf27fa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c175820(puStack_198[5]);
  _objc_release(uVar5);
  _objc_release(uVar9);
  lVar16 = *(long *)(param_1 + 0x38);
  if (lVar16 == 0) {
    puVar17 = (undefined *)0x0;
  }
  else {
    _objc_retain(lVar16);
    lVar20 = lVar16;
    func_0x00010c08fb40();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = PTR_PTR_1126da450;
    _objc_alloc_init();
    lVar7 = lVar20;
    func_0x00010bfe5b40(lVar20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21d340(puVar17);
    _objc_release(lVar7);
    lVar7 = lVar20;
    func_0x00010c094540(lVar20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bbd60(puVar17);
    _objc_release(lVar7);
    puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c074440();
    _objc_release(lVar16);
    func_0x00010c0df6e0(puVar14);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b1740(puVar17);
    _objc_release(puVar14);
    lVar16 = lVar20;
    func_0x00010c07f200();
    if ((int)lVar16 != 0) {
      lVar16 = lVar20;
      func_0x00010bfca960();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = PTR_PTR_1126da458;
      _objc_opt_new();
      lVar7 = lVar16;
      func_0x00010bf20f80(lVar16);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c173b20(puVar14);
      _objc_release(lVar7);
      func_0x00010bfd4380(lVar16);
      func_0x00010c1a58a0(puVar14);
      lVar7 = lVar20;
      func_0x00010c2813a0();
      _objc_retainAutoreleasedReturnValue();
      lVar24 = lVar7;
      func_0x00010bef2c20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar7);
      lVar7 = lVar24;
      func_0x00010c08fa60();
      if (lVar7 == 0x10) {
        puVar15 = PTR__OBJC_CLASS___NSUUID_1126b0270;
        _objc_alloc(PTR__OBJC_CLASS___NSUUID_1126b0270);
        _objc_retainAutorelease(lVar24);
        func_0x00010bf25f00(lVar24);
        func_0x00010c057e80(puVar15);
        puVar19 = puVar15;
        func_0x00010bdc3580();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar15);
      }
      else {
        puVar19 = (undefined *)0x0;
      }
      func_0x00010c163720(puVar14);
      lVar7 = lVar20;
      func_0x00010c2813a0();
      _objc_retainAutoreleasedReturnValue();
      lVar26 = lVar7;
      func_0x00010bef4d20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c164480(puVar14);
      _objc_release(lVar26);
      _objc_release(lVar7);
      func_0x00010c207f20(puVar17);
      _objc_release(lVar24);
      _objc_release(puVar19);
      _objc_release(puVar14);
      _objc_release(lVar16);
    }
    _objc_release(lVar20);
  }
  func_0x00010c1fb2e0(puStack_198[5]);
  _objc_release(puVar17);
  lVar16 = param_1;
  func_0x00010be1cb40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162a40(puStack_198[5]);
  _objc_release(lVar16);
  if (*(long *)(param_1 + 0x48) != 0) {
    func_0x00010c252440();
  }
  func_0x00010c1bf280(puStack_198[5]);
  uVar9 = *(undefined8 *)(param_1 + 8);
  func_0x00010c252440(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar9;
  func_0x00010bf27f00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1757c0(puStack_198[5]);
  _objc_release(uVar5);
  _objc_release(uVar9);
  uVar9 = *(undefined8 *)(param_1 + 8);
  func_0x00010c252440(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar9;
  func_0x00010c09dec0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bf2c0(puStack_198[5]);
  _objc_release(uVar5);
  _objc_release(uVar9);
  puVar17 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b4900(puStack_198[5]);
  _objc_release(puVar17);
  puVar17 = PTR_PTR_1126da430;
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c121ea0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc24c0(puVar17);
  _objc_release(uVar5);
  puVar17 = (undefined *)puStack_198[5];
  _objc_retain(puVar17);
  __Block_object_dispose(&uStack_1a0,8);
  _objc_release(puStack_178);
  _objc_release(lStack_1d0);
  _objc_release(uVar10);
  _objc_release(lStack_1d8);
  _objc_release(uVar6);
  _objc_release(uVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    uVar6 = 8;
    __Block_object_dispose(&uStack_1a0,8);
    __Unwind_Resume();
    lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain();
    puVar17 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc();
    func_0x00010bf529e0(lVar4);
    func_0x00010bffc4a0();
    _objc_retain(lVar4);
    lVar16 = lVar4;
    func_0x00010bf52a60();
    lVar20 = lRam0000000000000000;
    while (lVar16 != 0) {
      lVar24 = 0;
      do {
        if (lRam0000000000000000 != lVar20) {
          _objc_enumerationMutation(lVar4);
        }
        uVar3 = *(undefined8 *)(lVar24 * 8);
        func_0x00010c244240(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0560(puVar17);
        _objc_release(uVar3);
        lVar24 = lVar24 + 1;
      } while (lVar16 != lVar24);
      lVar16 = lVar4;
      func_0x00010bf52a60();
    }
    _objc_release(lVar4);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
      ___stack_chk_fail();
      puVar17 = *(undefined **)(lVar4 + 0x20);
      uVar3 = *(undefined8 *)(lVar4 + 0x28);
      _objc_retain(uVar6);
      uVar5 = uVar6;
      func_0x00010c2923e0(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdeba40(puVar17);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      _objc_release(uVar3);
      _objc_release(uVar5);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar17);
  return;
}



/* Entry: 1085b66f4; end: 1085b684b;  */

void FUN_1085b66f4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc();
  func_0x00010bf529e0(param_1);
  func_0x00010bffc4a0();
  _objc_retain(param_1);
  lVar3 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_1);
      }
      uVar6 = *(undefined8 *)(lVar7 * 8);
      func_0x00010c244240(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0560(puVar2);
      _objc_release(uVar6);
      lVar7 = lVar7 + 1;
    } while (lVar3 != lVar7);
    lVar3 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    ___stack_chk_fail();
    puVar2 = *(undefined **)(param_1 + 0x20);
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(param_2);
    uVar4 = param_2;
    func_0x00010c2923e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdeba40(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    _objc_release(uVar6);
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1085b684c; end: 1085b68e3;  */

void FUN_1085b684c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdeba40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1085b68e4; end: 1085b68eb;  */

void FUN_1085b68e4(undefined8 param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain();
  func_0x00010c27dd80();
  puVar1 = param_2;
  func_0x00010bf85d80(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  if (param_2 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
    func_0x00010bf5e640(PTR__OBJC_CLASS___UIDevice_1126aeb10);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c09e620();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126cf8d8;
    _objc_alloc(PTR_PTR_1126cf8d8);
    puVar1 = puVar3;
  }
  else {
    puVar2 = PTR_PTR_1126cf8d8;
    _objc_alloc(PTR_PTR_1126cf8d8);
  }
  func_0x00010c055880();
  func_0x00010c1cafa0();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1085b68ec; end: 1085b69db;  */

void FUN_1085b68ec(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain();
  func_0x00010c27dd80();
  puVar1 = param_1;
  func_0x00010bf85d80(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  if (param_1 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
    func_0x00010bf5e640(PTR__OBJC_CLASS___UIDevice_1126aeb10);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c09e620();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126cf8d8;
    _objc_alloc(PTR_PTR_1126cf8d8);
    puVar1 = puVar3;
  }
  else {
    puVar2 = PTR_PTR_1126cf8d8;
    _objc_alloc(PTR_PTR_1126cf8d8);
  }
  func_0x00010c055880();
  func_0x00010c1cafa0();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1085b69dc; end: 1085b6a2f;  */

void FUN_1085b69dc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf85d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_displayName_1125bf108);
  return;
}



/* Entry: 1085b6a30; end: 1085b6c17; -[SCTCallInfoBuilder buildPipInfo] */

void FUN_1085b6a30(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  uVar8 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c252440(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c09dd00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bdeba40(param_1,param_2,uVar8,uVar2,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar8 = *(undefined8 *)(param_1 + 8);
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar8;
  func_0x00010c12a2a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  FUN_1085b66f4();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar8);
  uVar8 = *(undefined8 *)(param_1 + 0x10);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1085b6c18;
  puStack_58 = &UNK_110a59510;
  lStack_50 = param_1;
  uStack_48 = uVar1;
  func_0x00010c0b8600(uVar8,param_2,&puStack_70);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126cf830;
  _objc_alloc(PTR_PTR_1126cf830);
  func_0x00010c0269a0();
  lVar5 = param_1;
  func_0x00010be1cb40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162a40(puVar4,param_2,lVar5);
  _objc_release(lVar5);
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined1 *)(param_1 + 0x51));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b3500(puVar4,param_2,puVar6);
  _objc_release(puVar6);
  uVar7 = *(undefined8 *)(param_1 + 8);
  func_0x00010c252440(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar7;
  func_0x00010bf27fa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c175820(puVar4,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar7);
  _objc_release(uVar8);
  _objc_release(uVar1);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1085b6c18; end: 1085b6caf;  */

void FUN_1085b6c18(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdeba40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1085b6cb0; end: 1085b6cdf; -[SCTCallInfoBuilder setCallInfoParticipantColorCache:] */

void FUN_1085b6cb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1085b6ce0; end: 1085b6d0f; -[SCTCallInfoBuilder setSessionStateUpdate:] */

void FUN_1085b6ce0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1085b6d10; end: 1085b6d3f; -[SCTCallInfoBuilder setRemoteParticipants:] */

void FUN_1085b6d10(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1085b6d40; end: 1085b6d6f; -[SCTCallInfoBuilder setLocalParticipant:] */

void FUN_1085b6d40(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1085b6d70; end: 1085b6d9f; -[SCTCallInfoBuilder setSpeakingParticipantIds:] */

void FUN_1085b6d70(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1085b6da0; end: 1085b6dcf; -[SCTCallInfoBuilder setAudioState:] */

void FUN_1085b6da0(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1085b6dd0; end: 1085b6dff; -[SCTCallInfoBuilder setConversationName:] */

void FUN_1085b6dd0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1085b6e00; end: 1085b6e2f; -[SCTCallInfoBuilder setSelectedLensInfo:] */

void FUN_1085b6e00(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1085b6e30; end: 1085b6e5f; -[SCTCallInfoBuilder setLocalScreenShareState:] */

void FUN_1085b6e30(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1085b6e60; end: 1085b6e67; -[SCTCallInfoBuilder setSponsoredLensAttachmentPresented:] */

void FUN_1085b6e60(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x50) = param_3;
  return;
}



/* Entry: 1085b6e68; end: 1085b6e8f; -[SCTCallInfoBuilder setIsPipStashed:] */

void FUN_1085b6e68(long param_1,undefined8 param_2,undefined1 param_3)

{
  func_0x00010bf1f3c0();
  *(undefined1 *)(param_1 + 0x51) = param_3;
  return;
}



/* Entry: 1085b6e90; end: 1085b6e97; -[SCTCallInfoBuilder setIsGroup:] */

void FUN_1085b6e90(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x52) = param_3;
  return;
}



/* Entry: 1085b6e98; end: 1085b6ec7; -[SCTCallInfoBuilder setCallPageConfig:] */

void FUN_1085b6e98(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1085b6ec8; end: 1085b747b; -[SCTCallInfoBuilder _createCallInfoParticipant:participantState:videoFlowingAffectsMedia:] */

void FUN_1085b6ec8(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,int param_5)

{
  undefined **ppuVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  int iVar16;
  undefined4 uVar17;
  undefined8 uVar18;
  undefined *puVar19;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010bf40f00(uVar4,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfe1180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  uVar6 = param_4;
  func_0x00010c0c6080();
  _objc_retainAutoreleasedReturnValue();
  if (uVar6 == 0) {
    iVar16 = 0;
  }
  else {
    uVar7 = uVar6;
    func_0x00010bf0ed00();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar6;
    func_0x00010c299160();
    _objc_retainAutoreleasedReturnValue();
    if ((uVar8 == 0) || (uVar9 = uVar8, func_0x00010c079ba0(), (uVar9 & 1) != 0)) {
      uVar9 = uVar7;
      func_0x00010c078420();
      iVar16 = 3;
      if ((int)uVar9 != 0) {
        iVar16 = 1;
      }
    }
    else {
      uVar9 = uVar7;
      func_0x00010c078420();
      iVar16 = 2;
      if ((int)uVar9 == 0) {
        iVar16 = 4;
      }
    }
    _objc_release(uVar8);
    _objc_release(uVar7);
  }
  _objc_release(uVar6);
  if (param_5 != 0) {
    uVar6 = param_4;
    func_0x00010c0c6080();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c299160();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c23d040();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar7);
    _objc_release(uVar6);
    iVar3 = iVar16;
    if (iVar16 == 4) {
      iVar3 = 3;
    }
    iVar2 = 1;
    if (iVar16 != 2) {
      iVar2 = iVar3;
    }
    if (uVar8 == 0) {
      iVar16 = iVar2;
    }
  }
  puVar10 = PTR_PTR_1126cf8e0;
  _objc_alloc();
  uVar6 = param_4;
  func_0x00010c244240(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bf85d80(param_3);
  _objc_retainAutoreleasedReturnValue();
  ppuVar11 = &PTR____CFConstantStringClassReference_110dbf518;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110dbf518,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_4;
  func_0x00010bf282e0();
  iVar3 = (int)uVar7;
  if (3 < iVar3 - 1U) {
    iVar3 = 0;
  }
  uVar7 = param_4;
  func_0x00010c0c6080();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c299160();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c079ba0();
  uVar18 = *(undefined8 *)(param_1 + 0x20);
  uVar12 = param_3;
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900(uVar18,param_2,uVar12);
  _objc_retain(param_4);
  uVar13 = param_4;
  func_0x00010c06f1c0();
  if ((uVar13 & 1) == 0) {
    uVar13 = param_4;
    func_0x00010c0c6080();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar13;
    func_0x00010c299160();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar14;
    func_0x00010c073f40();
    _objc_release(uVar14);
    _objc_release(uVar13);
    uVar17 = 2;
    if ((int)uVar15 == 0) {
      uVar17 = 0;
    }
  }
  else {
    uVar17 = 1;
  }
  _objc_release(param_4);
  func_0x00010c05b0e0(puVar10,param_2,uVar6,uVar4,ppuVar11,iVar3,iVar16,uVar9 & 0xffffffff,
                      (char)uVar18,uVar17);
  _objc_release(uVar12);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(ppuVar11);
  _objc_release(uVar4);
  _objc_release(uVar6);
  uVar4 = param_3;
  func_0x00010bf1acc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c170a80(puVar10,param_2,uVar4);
  _objc_release(uVar4);
  uVar6 = param_4;
  func_0x00010c159a40(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fb300(puVar10,param_2,uVar7);
  _objc_release(uVar7);
  _objc_release(uVar6);
  uVar6 = param_4;
  func_0x00010c0c6080(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c299160();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c23d040();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c221f80(puVar10,param_2,uVar8);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  uVar6 = param_4;
  func_0x00010c0fe180();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (uVar6 == 0) {
    ppuVar11 = (undefined **)0x0;
  }
  else {
    uVar7 = uVar6;
    func_0x00010c067ec0();
    ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cfe68;
    if ((int)uVar7 != 1) {
      ppuVar1 = (undefined **)0x0;
    }
    ppuVar11 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cfdf0;
    if ((int)uVar7 != 0) {
      ppuVar11 = ppuVar1;
    }
  }
  _objc_release(uVar6);
  func_0x00010c1dcf40(puVar10,param_2,ppuVar11);
  _objc_release(uVar6);
  uVar6 = param_4;
  func_0x00010c159a40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c07dc20();
  _objc_release(uVar6);
  if ((int)uVar7 != 0) {
    puVar19 = PTR_PTR_1126da438;
    _objc_alloc(PTR_PTR_1126da438);
    uVar6 = param_4;
    func_0x00010c159a40(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_4;
    func_0x00010c07b880(param_4);
    func_0x00010c024500(puVar19,param_2,uVar7,uVar8);
    func_0x00010c180d80(puVar10,param_2,puVar19);
    _objc_release(puVar19);
    _objc_release(uVar7);
    _objc_release(uVar6);
  }
  uVar6 = param_4;
  func_0x00010c0c6080();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c299160();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bfb7020();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if ((uVar8 == 0) || (uVar9 = uVar8, func_0x00010c067ec0(), 4 < (uint)uVar9)) {
    puVar19 = (undefined *)0x0;
  }
  else {
    puVar19 = (&PTR_PTR_110a59918)[uVar9 & 0xffffffff];
  }
  _objc_release(uVar8);
  func_0x00010c2217c0(puVar10,param_2,puVar19);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 1085b747c; end: 1085b77c3; -[SCTCallInfoBuilder _getActiveScreenSharer] */

void FUN_1085b747c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  int iVar13;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 0x48);
  if (lVar1 == 0) {
LAB_1085b754c:
    puVar3 = *(undefined **)(param_1 + 8);
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c12a2a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    _objc_retain(puVar4);
    puVar10 = puVar4;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    if (puVar10 == (undefined *)0x0) {
      _objc_release(puVar4);
      uVar12 = 0;
      puVar10 = (undefined *)0x0;
      uVar5 = 0;
    }
    else {
      do {
        puVar9 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(puVar4);
          }
          uVar11 = *(ulong *)((long)puVar9 * 8);
          uVar5 = uVar11;
          func_0x00010c0c6080();
          _objc_retainAutoreleasedReturnValue();
          uVar12 = uVar5;
          func_0x00010c150e00();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar12;
          func_0x00010c299160();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain();
          if ((uVar6 == 0) || (uVar7 = uVar6, func_0x00010c079ba0(), (uVar7 & 1) != 0)) {
            iVar13 = 0;
          }
          else {
            uVar7 = uVar6;
            func_0x00010c073f40();
            iVar13 = 1;
            if ((int)uVar7 != 0) {
              iVar13 = 2;
            }
          }
          _objc_release(uVar6);
          _objc_release(uVar6);
          _objc_release(uVar12);
          _objc_release(uVar5);
          if (iVar13 - 1U < 2) {
            uVar5 = uVar11;
            func_0x00010c244240();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0c6080(uVar11);
            _objc_retainAutoreleasedReturnValue();
            uVar6 = uVar11;
            func_0x00010c150e00();
            _objc_retainAutoreleasedReturnValue();
            uVar7 = uVar6;
            func_0x00010c299160();
            _objc_retainAutoreleasedReturnValue();
            uVar12 = uVar7;
            func_0x00010c23d040();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar7);
            _objc_release(uVar6);
            _objc_release(uVar11);
            _objc_release(puVar4);
            if (uVar5 == 0) goto LAB_1085b7754;
            puVar10 = PTR_PTR_1126da440;
            _objc_alloc(PTR_PTR_1126da440);
            func_0x00010c05ba00();
            func_0x00010c1f74a0();
            goto LAB_1085b775c;
          }
          puVar9 = puVar9 + 1;
        } while (puVar10 != puVar9);
        puVar10 = puVar4;
        func_0x00010bf52a60();
      } while (puVar10 != (undefined *)0x0);
      _objc_release(puVar4);
      uVar12 = 0;
      uVar5 = 0;
LAB_1085b7754:
      puVar10 = (undefined *)0x0;
    }
LAB_1085b775c:
    _objc_release(uVar12);
    _objc_release(uVar5);
    _objc_release(puVar4);
    _objc_release(puVar4);
  }
  else {
    func_0x00010c252440();
    if (lVar1 != 1) {
      lVar1 = *(long *)(param_1 + 0x48);
      func_0x00010c252440();
      if (lVar1 != 2) goto LAB_1085b754c;
    }
    puVar10 = PTR_PTR_1126da440;
    _objc_alloc(PTR_PTR_1126da440);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c2923e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05ba00(puVar10);
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c2a8ba0(*(undefined8 *)(param_1 + 0x48));
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c225d00(puVar10);
  }
  _objc_release(puVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
    ___stack_chk_fail();
    _objc_storeStrong(puVar3 + 0x58,0);
    _objc_storeStrong(puVar3 + 0x48,0);
    _objc_storeStrong(puVar3 + 0x40,0);
    _objc_storeStrong(puVar3 + 0x38,0);
    _objc_storeStrong(puVar3 + 0x30,0);
    _objc_storeStrong(puVar3 + 0x28,0);
    _objc_storeStrong(puVar3 + 0x20,0);
    _objc_storeStrong(puVar3 + 0x18,0);
    _objc_storeStrong(puVar3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_storeStrong_11034d330)(puVar3 + 8,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 1085b77c4; end: 1085b7853; -[SCTCallInfoBuilder .cxx_destruct] */

void FUN_1085b77c4(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
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



/* Entry: 1085b7854; end: 1085b7d2f;  */

void FUN_1085b7854(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

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
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  
  puVar1 = PTR_PTR_1126da448;
  _objc_retain(param_13);
  _objc_retain(param_12);
  _objc_retain(param_11);
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_alloc_init();
  func_0x00010c175800();
  _objc_release(param_12);
  func_0x00010c1758e0(puVar1);
  _objc_release(param_11);
  uVar2 = param_1;
  func_0x00010c0e0ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar3 = param_2;
  func_0x00010c0e0ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_retain(puVar1);
  uVar4 = uVar2;
  func_0x00010bf41860();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010c0e0ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar6 = uVar4;
  func_0x00010bf41860();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_4;
  func_0x00010c0e0ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar8 = uVar6;
  func_0x00010bf41860();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_5;
  func_0x00010c0e0ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  uVar10 = uVar8;
  func_0x00010bf41860();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_6;
  func_0x00010c0e0ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  uVar12 = uVar10;
  func_0x00010bf41860(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_7;
  func_0x00010c0e0ec0(param_7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  uVar14 = uVar12;
  func_0x00010bf41860(uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = param_8;
  func_0x00010c0e0ec0(param_8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_8);
  uVar16 = uVar14;
  func_0x00010bf41860(uVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = param_9;
  func_0x00010c0e0ec0(param_9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_9);
  uVar18 = uVar16;
  func_0x00010bf41860(uVar16);
  _objc_retainAutoreleasedReturnValue();
  uVar19 = param_10;
  func_0x00010c0e0ec0(param_10);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_13);
  _objc_release(param_10);
  uVar20 = uVar18;
  func_0x00010bf41860(uVar18);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar20);
  return;
}



/* Entry: 1085b7d30; end: 1085b7d9f;  */

void FUN_1085b7d30(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x00010bf1f3c0(param_2);
  func_0x00010c1b18e0(uVar1);
  func_0x00010c1fdd20(*(undefined8 *)(param_1 + 0x20));
  _objc_release(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1085b7da0; end: 1085b7f9f;  */

void FUN_1085b7da0(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  func_0x00010c1ea2c0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 1085b7fa0; end: 1085b828f;  */

void FUN_1085b7fa0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

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
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  puVar1 = PTR_PTR_1126da448;
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_alloc_init();
  func_0x00010c175800();
  _objc_release(param_6);
  uVar2 = param_1;
  func_0x00010c0e0ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar3 = param_2;
  func_0x00010c0e0ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_retain(puVar1);
  uVar4 = uVar2;
  func_0x00010bf41860();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010c0e0ec0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar6 = uVar4;
  func_0x00010bf41860(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_4;
  func_0x00010c0e0ec0(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar8 = uVar6;
  func_0x00010bf41860(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_5;
  func_0x00010c0e0ec0(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  uVar10 = uVar8;
  func_0x00010bf41860(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_7;
  func_0x00010c0e0ec0(param_7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_8);
  _objc_release(param_7);
  uVar12 = uVar10;
  func_0x00010bf41860(uVar10);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar12);
  return;
}



/* Entry: 1085b8290; end: 1085b82f7;  */

void FUN_1085b8290(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x00010c1fdd20(uVar1);
  func_0x00010c1ea2c0(*(undefined8 *)(param_1 + 0x20));
  _objc_release(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1085b82f8; end: 1085b83f3;  */

void FUN_1085b82f8(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  func_0x00010c1bf220(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 1085b83f4; end: 1085b84f3; -[SCTCallInfoParticipantColorCache initWithTalkContext:] */

undefined8 * FUN_1085b83f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fcf08;
  puVar1 = &uStack_30;
  uStack_30 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar1[2];
    puVar1[2] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_alloc();
    func_0x00010c0309a0();
    uVar2 = puVar1[3];
    puVar1[3] = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1085b84f4; end: 1085b867f; -[SCTCallInfoParticipantColorCache colorForParticipant:] */

void FUN_1085b84f4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf5e540();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar2;
    func_0x00010bf51800();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar7;
    func_0x00010c074920();
    _objc_release(uVar7);
    _objc_release(uVar2);
    lVar8 = *(long *)(param_1 + 0x10);
    lVar4 = param_3;
    func_0x00010c2923e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(lVar8,param_2,lVar4);
    _objc_retainAutoreleasedReturnValue();
    if ((int)uVar3 != 0) {
      if (lVar8 == 0) {
        lVar6 = param_3;
        func_0x00010c10ac40(param_3);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        _objc_retain(lVar8);
        lVar6 = lVar8;
      }
      _objc_release(lVar8);
      _objc_release(lVar4);
      lVar8 = lVar6;
      goto LAB_1085b8610;
    }
    _objc_release(lVar4);
    if (lVar8 != 0) goto LAB_1085b8610;
    uVar5 = *(ulong *)(param_1 + 0x10);
    func_0x00010bf529e0();
    if (uVar5 < 2) {
      lVar8 = param_1;
      func_0x00010be85b80(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_1 + 0x10);
      lVar4 = param_3;
      func_0x00010c2923e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar7,param_2,lVar8,lVar4);
      _objc_release(lVar4);
      goto LAB_1085b8610;
    }
  }
  lVar8 = param_3;
  func_0x00010c10ac40(param_3);
  _objc_retainAutoreleasedReturnValue();
LAB_1085b8610:
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar8);
  return;
}



/* Entry: 1085b8680; end: 1085b875f; -[SCTCallInfoParticipantColorCache _randomColorFromPredefinedList] */

void FUN_1085b8680(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010bf529e0();
  puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
  if (lVar1 == 0) {
    ppuVar5 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cfe80;
    func_0x00010c067fc0(&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cfe80);
    func_0x00010bf41580(puVar6,param_2,ppuVar5);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010bf00560(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(ulong *)(param_1 + 0x18);
    func_0x00010bf529e0(uVar3);
    _arc4random_uniform();
    uVar4 = uVar2;
    func_0x00010c0dfd40(uVar2,param_2,uVar3 & 0xffffffff);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    func_0x00010c12d360(*(undefined8 *)(param_1 + 0x18),param_2,uVar4);
    puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
    uVar2 = uVar4;
    func_0x00010c067fc0(uVar4);
    func_0x00010bf41580(puVar6,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1085b8760; end: 1085b879b; -[SCTCallInfoParticipantColorCache .cxx_destruct] */

void FUN_1085b8760(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1085b879c; end: 1085b881f; -[SCTVideoViewReference initWithRendererController:type:] */

undefined1 *
FUN_1085b879c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126fcf10;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1085b8820; end: 1085b8823; -[SCTVideoViewReference view] */

void FUN_1085b8820(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be0a430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__ensureCoreVideoView_1125602a8);
  return;
}



/* Entry: 1085b8824; end: 1085b88ab; -[SCTVideoViewReference startWithSink:] */

void FUN_1085b8824(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  if (*(char *)(param_1 + 0x20) == '\x01') {
    lVar1 = param_1;
    func_0x00010be0a420(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c255780();
    _objc_release(lVar1);
  }
  lVar1 = param_1;
  func_0x00010be0a420();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c251c20();
  *(char *)(param_1 + 0x20) = (char)lVar2;
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1085b88ac; end: 1085b88f3; -[SCTVideoViewReference stop] */

void FUN_1085b88ac(long param_1)

{
  long lVar1;
  
  if (*(char *)(param_1 + 0x20) == '\x01') {
    lVar1 = param_1;
    func_0x00010be0a420();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c255780();
    _objc_release(lVar1);
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  return;
}



/* Entry: 1085b88f4; end: 1085b8987; -[SCTVideoViewReference _ensureCoreVideoView] */

void FUN_1085b88f4(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 8);
  if (lVar4 == 0) {
    if (*(long *)(param_1 + 0x18) == 0) {
      ppuVar2 = &PTR_PTR_1126da460;
    }
    else {
      if (*(long *)(param_1 + 0x18) != 1) {
        lVar4 = 0;
        goto LAB_1085b8970;
      }
      ppuVar2 = &PTR_PTR_1126da468;
    }
    puVar1 = *ppuVar2;
    _objc_alloc();
    func_0x00010c014ba0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    uVar3 = *(undefined8 *)(param_1 + 8);
    *(undefined **)(param_1 + 8) = puVar1;
    _objc_release(uVar3);
    lVar4 = *(long *)(param_1 + 8);
  }
LAB_1085b8970:
  _objc_retain(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 1085b8988; end: 1085b8993; -[SCTVideoViewReference setListener:] */

void FUN_1085b8988(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x28,param_3);
  return;
}



/* Entry: 1085b8994; end: 1085b89df; -[SCTVideoViewReference videoView:frameDimensionsChangedSize:] */

void FUN_1085b8994(undefined8 param_1,undefined8 param_2,long param_3)

{
  param_3 = param_3 + 0x28;
  _objc_loadWeakRetained(param_3);
  func_0x00010c29bce0(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1085b89e0; end: 1085b8a17; -[SCTVideoViewReference .cxx_destruct] */

void FUN_1085b89e0(long param_1)

{
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1085b8a18; end: 1085b8ea7; -[SCTalkChatSessionImpl initWithConvoId:talkCoreDispatcher:delegate:dependencies:identityServices:valdiRuntimeProvider:friendsFeedGraphene:presenceRenderGrapheneLogger:circumstanceEngine:plusFeatureGating:plusFeatureLogging:platformPresenceServiceProvider:currentPageTracker:applicationLifecycleEvents:] */

undefined8 *
FUN_1085b8a18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
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
  _objc_retain(param_16);
  puStack_70 = PTR_PTR_1126fcf18;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar7 = puVar1[0x14];
    puVar1[0x14] = uVar2;
    _objc_release(uVar7);
    _objc_retain(param_4);
    uVar2 = puVar1[1];
    puVar1[1] = param_4;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 2,param_6);
    _objc_storeWeak(puVar1 + 3,param_7);
    _objc_retain(param_8);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_8;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 4,param_5);
    _objc_retain(param_9);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[6];
    puVar1[6] = param_14;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126da470;
    _objc_alloc();
    puVar4 = puVar1 + 2;
    _objc_loadWeakRetained(puVar4);
    puVar5 = puVar4;
    func_0x00010bf376c0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar1 + 3;
    _objc_loadWeakRetained(puVar6);
    func_0x00010c005a20();
    uVar2 = puVar1[8];
    puVar1[8] = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    puVar4 = puVar1 + 3;
    _objc_loadWeakRetained();
    puVar6 = puVar4;
    func_0x00010c12a300();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0xc];
    puVar1[0xc] = puVar6;
    _objc_release(uVar2);
    _objc_release(puVar4);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0xd];
    puVar1[0xd] = puVar3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_80,puVar1);
    uVar7 = puVar1[0xc];
    puVar3 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e0e60(uVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_88,auStack_80);
    uVar2 = uVar7;
    func_0x00010c25ff60(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar2);
    _objc_release(uVar7);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126da478;
    _objc_alloc();
    func_0x00010c007140();
    uVar2 = puVar1[0x13];
    puVar1[0x13] = puVar3;
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
  }
  _objc_release(param_16);
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
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1085b8ea8; end: 1085b8eef;  */

void FUN_1085b8ea8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be888e0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1085b8ef0; end: 1085b9027; -[SCTalkChatSessionImpl _subscribeToPresenceVisibilityEvent] */

void FUN_1085b8ef0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  func_0x00010c29faa0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0f98a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0e0ea0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_58,auStack_48);
  uVar4 = uVar3;
  uStack_50 = param_2;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 1085b9028; end: 1085b9137;  */

void FUN_1085b9028(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_2;
    func_0x00010c2827c0();
    lVar2 = param_1;
    if (lVar1 < 2) {
      if (lVar1 == 0) {
        func_0x00010c10ada0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf367e0();
      }
      else {
        if (lVar1 != 1) goto LAB_1085b911c;
        func_0x00010c10ada0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf37a80();
      }
    }
    else if (lVar1 == 2) {
      func_0x00010c10ada0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c131ba0();
    }
    else if (lVar1 == 3) {
      func_0x00010c10ada0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf36dc0();
    }
    else {
      if (lVar1 != 4) goto LAB_1085b911c;
      func_0x00010c10ada0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf9da00();
    }
    _objc_release(lVar2);
  }
LAB_1085b911c:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1085b9138; end: 1085b913b; -[SCTalkChatSessionImpl setPresenceSessionOnce:] */

void FUN_1085b9138(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1e0f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setPresenceSession__112655df0);
  return;
}



/* Entry: 1085b913c; end: 1085b916f; -[SCTalkChatSessionImpl dealloc] */

void FUN_1085b913c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126fcf18;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1085b9170; end: 1085b923b; -[SCTalkChatSessionImpl dispose] */

void FUN_1085b9170(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010c10ada0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bf376c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6f340();
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bf376c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6f240();
    _objc_release(lVar2);
    _objc_release(lVar1);
    func_0x00010c136dc0(*(undefined8 *)(param_1 + 0x40));
    func_0x00010be98040(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c1e0f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setPresenceSession__112655df0,0);
    return;
  }
  return;
}



/* Entry: 1085b923c; end: 1085b9243;  */

void FUN_1085b923c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf86d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_dispose_1125bf4f8);
  return;
}



/* Entry: 1085b9244; end: 1085b9277; -[SCTalkChatSessionImpl disposed] */

bool FUN_1085b9244(long param_1)

{
  func_0x00010c10ada0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_1 == 0;
}



/* Entry: 1085b9278; end: 1085b92df; -[SCTalkChatSessionImpl startPeeking] */

void FUN_1085b9278(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010be98040(param_1,param_2,&PTR___NSConcreteGlobalBlock_110a599b0);
  puVar1 = PTR_PTR_1126b2cb0;
  func_0x00010c0f6f80(PTR_PTR_1126b2cb0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1085b92e0; end: 1085b92e7;  */

void FUN_1085b92e0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c24fd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_startPeeking_112671978);
  return;
}



/* Entry: 1085b92e8; end: 1085b9337; -[SCTalkChatSessionImpl processTypingActivity:typingActivityType:] */

void FUN_1085b92e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc0000000;
  pcStack_30 = FUN_1085b9338;
  puStack_28 = &UNK_110a599d0;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x00010be98040(param_1,param_2,&puStack_40);
  return;
}



/* Entry: 1085b9338; end: 1085b9343;  */

void FUN_1085b9338(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1155f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_processTypingActivity_withType__112622f98,*(undefined8 *)(param_1 + 0x20)
             ,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1085b9344; end: 1085b9433; -[SCTalkChatSessionImpl setupUI] */

void FUN_1085b9344(long param_1)

{
  long lVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x00010beaf020();
  _objc_initWeak(auStack_38,param_1);
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x000107c30a80();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c06d7c0(param_1);
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1085b9434; end: 1085b946f;  */

void FUN_1085b9434(long param_1,uint param_2)

{
  if ((param_2 & 1) != 0) {
    return;
  }
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010beab4c0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1085b9470; end: 1085b9473; -[SCTalkChatSessionImpl subscribeToSessionPresenceVisibilityEvents] */

void FUN_1085b9470(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec8130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__subscribeToPresenceVisibilityEv_11258f9f0);
  return;
}



/* Entry: 1085b9474; end: 1085b9543; -[SCTalkChatSessionImpl onPlatformPresenceSessionStateChanged:] */

void FUN_1085b9474(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_28,param_1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1085b9544;
  puStack_40 = &UNK_110841fb0;
  _objc_copyWeak(auStack_30,auStack_28);
  _objc_retain(param_3);
  uStack_38 = param_3;
  func_0x000107c312cc("APPSTORE",&puStack_58);
  _objc_release(uStack_38);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 1085b9544; end: 1085b9577;  */

void FUN_1085b9544(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be30d40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1085b9578; end: 1085b959f; -[SCTalkChatSessionImpl getPresenceSessionState] */

void FUN_1085b9578(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1085b95a0; end: 1085b960b; -[SCTalkChatSessionImpl talkUIController:didUpdateRemoteUsersPresentOnWeb:remoteUsersPresentOnMobile:] */

void FUN_1085b95a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  _objc_retain(param_4);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c268860();
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1085b960c; end: 1085b961f; -[SCTalkChatSessionImpl _composerCallButtonsOnStartCallMedia:] */

void FUN_1085b960c(undefined8 param_1,undefined8 param_2,int param_3)

{
  if (param_3 - 3U < 2) {
                    /* WARNING: Could not recover jumptable at 0x00010be47cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__launchModularCallScreenWithStar_11256f8d0)
    ;
    return;
  }
  return;
}



/* Entry: 1085b9620; end: 1085b968b; -[SCTalkChatSessionImpl _launchModularCallScreenWithStartCallMedia:] */

void FUN_1085b9620(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (param_3 - 1U < 4) {
    uVar2 = *(undefined8 *)(&UNK_10df35e30 + (ulong)(param_3 - 1U) * 8);
  }
  else {
    uVar2 = 0;
  }
  puVar1 = PTR_PTR_1126b55c0;
  func_0x00010c24e1c0(PTR_PTR_1126b55c0,param_2,uVar2,0,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be47ca0(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1085b968c; end: 1085b96ef; -[SCTalkChatSessionImpl _composerCallButtonsOnResumeCallWithMedia:] */

void FUN_1085b968c(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (param_3 - 1U < 4) {
    uVar2 = *(undefined8 *)(&UNK_10df35e30 + (ulong)(param_3 - 1U) * 8);
  }
  else {
    uVar2 = 0;
  }
  puVar1 = PTR_PTR_1126b55c0;
  func_0x00010c2364e0(PTR_PTR_1126b55c0,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be47ca0(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1085b96f0; end: 1085b9757; -[SCTalkChatSessionImpl _composerCallButtonsOnJoinCallWithMedia:] */

void FUN_1085b96f0(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (param_3 - 1U < 4) {
    uVar2 = *(undefined8 *)(&UNK_10df35e30 + (ulong)(param_3 - 1U) * 8);
  }
  else {
    uVar2 = 0;
  }
  puVar1 = PTR_PTR_1126b55c0;
  func_0x00010c0859c0(PTR_PTR_1126b55c0,param_2,uVar2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be47ca0(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1085b9758; end: 1085b981b; -[SCTalkChatSessionImpl _runOnTalkCoreThreadWithPresenceSession:] */

void FUN_1085b9758(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c10ada0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_1085b981c;
    puStack_48 = &UNK_11084aaa8;
    _objc_retain(param_3);
    uStack_38 = param_3;
    _objc_retain(lVar1);
    lStack_40 = lVar1;
    func_0x00010bf850c0(uVar2,param_2,&puStack_60);
    _objc_release(lStack_40);
    _objc_release(uStack_38);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 1085b981c; end: 1085b982b;  */

void FUN_1085b981c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001085b9828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1085b982c; end: 1085b9883; -[SCTalkChatSessionImpl _handleStateChange:] */

void FUN_1085b982c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010c211a40(*(undefined8 *)(param_1 + 0x40),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1085b9884; end: 1085b98f7; -[SCTalkChatSessionImpl _attachPresenceBarPaneIfPossible] */

void FUN_1085b9884(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf376c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c29bf00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c760(lVar2,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1085b98f8; end: 1085b9ab3; -[SCTalkChatSessionImpl _createPresenceControllerWithParticipantStates:] */

void FUN_1085b98f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar2;
  func_0x00010c0f6f00();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar8;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c252440();
  _objc_release(uVar10);
  _objc_release(uVar8);
  _objc_release(uVar2);
  lVar3 = param_1;
  func_0x00010be40d00();
  lVar4 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010bf13140();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar6);
  lVar7 = lVar6;
  func_0x00010bf376c0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + 0x40);
  uVar2 = *(undefined8 *)(param_1 + 0x90);
  uVar8 = *(undefined8 *)(param_1 + 0x78);
  _objc_retain(param_3);
  _objc_retain(lVar5);
  _objc_retain(uVar10);
  ppuVar1 = &PTR_PTR_1126da498;
  if ((int)lVar3 == 0) {
    ppuVar1 = &PTR_PTR_1126da4a0;
  }
  puVar9 = *ppuVar1;
  _objc_retain(uVar8);
  _objc_retain(uVar2);
  _objc_alloc(puVar9);
  func_0x00010c034340();
  _objc_release(uVar8);
  _objc_release(uVar2);
  _objc_release(uVar10);
  _objc_release(lVar5);
  _objc_release(param_3);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 1085b9ab4; end: 1085b9bf7; -[SCTalkChatSessionImpl _createRemoteParticipantStatesWithSessionState:completion:] */

void FUN_1085b9ab4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1 + 0x18;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    (**(code **)(param_4 + 0x10))(param_4,0);
  }
  else {
    _objc_initWeak(auStack_48,param_1);
    _objc_copyWeak(auStack_58,auStack_48);
    uStack_50 = param_2;
    _objc_retain(param_4);
    _objc_retain(param_3);
    func_0x00010c12a2c0(lVar1);
    _objc_release(param_3);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_58);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1085b9bf8; end: 1085ba127;  */

long FUN_1085b9bf8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  undefined *puVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained();
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  if ((lVar2 == 0) || (param_2 == 0)) {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0);
  }
  else {
    func_0x00010bf529e0(param_2);
    func_0x00010bf71fe0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_2);
    lVar18 = param_2;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar18 != 0) {
      lVar20 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_2);
        }
        uVar19 = *(undefined8 *)(lVar20 * 8);
        func_0x00010c2923e0(uVar19);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar3);
        _objc_release(uVar19);
        lVar20 = lVar20 + 1;
      } while (lVar18 != lVar20);
      lVar18 = param_2;
      func_0x00010bf52a60();
    }
    _objc_release(param_2);
    uVar19 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c12a5e0(uVar19);
    _objc_retainAutoreleasedReturnValue();
    lVar20 = param_2;
    func_0x0001085da194(param_2,uVar19);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar19);
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = *(long *)(param_1 + 0x20);
    func_0x00010c12a5e0();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = lVar5;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar18 != 0) {
      lVar21 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar5);
        }
        uVar22 = *(ulong *)(lVar21 * 8);
        uVar6 = uVar22;
        func_0x00010c2923e0(uVar22);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar3;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar6);
        if (puVar7 != (undefined *)0x0) {
          uVar6 = uVar22;
          func_0x00010c294c00();
          if (((uVar6 & 1) == 0) && (uVar6 = uVar22, func_0x00010c29f2a0(), (uVar6 & 1) == 0)) {
            func_0x00010bfeb580(uVar22);
          }
          func_0x00010c10d440();
          puVar8 = PTR_PTR_1126da480;
          _objc_alloc();
          func_0x00010c27e300();
          puVar9 = puVar7;
          func_0x00010c294420();
          _objc_retainAutoreleasedReturnValue();
          puVar10 = puVar7;
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          puVar11 = puVar7;
          func_0x00010bf85d80();
          _objc_retainAutoreleasedReturnValue();
          puVar12 = puVar7;
          func_0x00010c10ac40();
          _objc_retainAutoreleasedReturnValue();
          puVar13 = puVar7;
          func_0x00010bf1acc0();
          _objc_retainAutoreleasedReturnValue();
          puVar14 = puVar7;
          func_0x00010c0fa800();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          lVar15 = lVar20;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c079cc0();
          func_0x00010c294c00();
          func_0x00010c29f2a0();
          func_0x00010bfeb580();
          puVar16 = puVar7;
          func_0x00010c06d360();
          if ((int)puVar16 != 0) {
            func_0x00010c067f00();
          }
          func_0x00010c06bb80();
          func_0x00010c056460(puVar8);
          _objc_release(lVar15);
          _objc_release(uVar22);
          _objc_release(puVar14);
          _objc_release(puVar13);
          _objc_release(puVar12);
          _objc_release(puVar11);
          _objc_release(puVar10);
          _objc_release(puVar9);
          func_0x00010befa120(puVar4);
          _objc_release(puVar8);
        }
        _objc_release(puVar7);
        lVar21 = lVar21 + 1;
      } while (lVar18 != lVar21);
      lVar18 = lVar5;
      func_0x00010bf52a60();
    }
    _objc_release(lVar5);
    lVar18 = *(long *)(param_1 + 0x28);
    puVar7 = puVar4;
    func_0x00010bf51e00();
    (**(code **)(lVar18 + 0x10))(lVar18,puVar7);
    _objc_release(puVar7);
    _objc_release(puVar4);
    _objc_release(lVar20);
    _objc_release(puVar3);
  }
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
    return param_2;
  }
  ___stack_chk_fail();
  param_2 = param_2 + 0x18;
  _objc_loadWeakRetained(param_2);
  lVar2 = param_2;
  func_0x00010bf50680();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar17 = lVar2;
  func_0x00010c074920(lVar2);
  _objc_release(lVar2);
  return lVar17;
}



/* Entry: 1085ba128; end: 1085ba183; -[SCTalkChatSessionImpl _isGroupConversation] */

long FUN_1085ba128(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf50680();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  lVar2 = lVar1;
  func_0x00010c074920(lVar1);
  _objc_release(lVar1);
  return lVar2;
}



/* Entry: 1085ba184; end: 1085ba27b; -[SCTalkChatSessionImpl _refreshRemoteParticipants:] */

void FUN_1085ba184(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined **ppuStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  lVar2 = param_1;
  func_0x00010c10ada0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar2 != 0) {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_1085ba27c;
    puStack_50 = &UNK_110a599f0;
    _objc_retain(param_3);
    ppuVar3 = &puStack_68;
    uStack_48 = param_3;
    FUN_1085ba27c();
    _objc_retainAutoreleasedReturnValue();
    puStack_90 = puVar1;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_1085ba3d8;
    puStack_78 = &UNK_110a59a20;
    ppuStack_70 = ppuVar3;
    _objc_retain();
    func_0x00010be98040(param_1,param_2,&puStack_90);
    _objc_release(ppuStack_70);
    _objc_release(ppuVar3);
    _objc_release(uStack_48);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1085ba27c; end: 1085ba3d7;  */

void FUN_1085ba27c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_alloc();
  func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010bffc4a0();
  lVar7 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar7);
  lVar3 = lVar7;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar7);
      }
      uVar4 = *(undefined8 *)(lVar8 * 8);
      func_0x00010c2923e0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar2);
      _objc_release(uVar4);
      lVar8 = lVar8 + 1;
    } while (lVar3 != lVar8);
    lVar3 = lVar7;
    func_0x00010bf52a60();
  }
  _objc_release(lVar7);
  puVar5 = puVar2;
  func_0x00010bf51e00(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c2885b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_updateParticipants__11267fb90,*(undefined8 *)(puVar2 + 0x20));
  return;
}



/* Entry: 1085ba3d8; end: 1085ba3e3;  */

void FUN_1085ba3d8(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2885b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_updateParticipants__11267fb90,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1085ba3e4; end: 1085ba523; -[SCTalkChatSessionImpl _setupPresenceBarIfNeeded] */

void FUN_1085ba3e4(long param_1)

{
  undefined **ppuVar1;
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  if (*(long *)(param_1 + 0x38) == 0) {
    _objc_initWeak(auStack_48,param_1);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_1085ba524;
    puStack_58 = &UNK_110a59a50;
    _objc_copyWeak(auStack_50,auStack_48);
    ppuVar1 = &puStack_70;
    _objc_retainBlock();
    if (*(long *)(param_1 + 0x28) == 0) {
      _objc_copyWeak(auStack_78,auStack_48);
      _objc_retain(ppuVar1);
      func_0x00010be98040(param_1);
      _objc_release(ppuVar1);
      _objc_destroyWeak(auStack_78);
    }
    else {
      (*(code *)ppuVar1[2])(ppuVar1);
    }
    _objc_release(ppuVar1);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  return;
}



/* Entry: 1085ba524; end: 1085ba5df;  */

void FUN_1085ba524(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010bdf24a0(lVar1);
  _objc_release(lVar1);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 1085ba5e0; end: 1085ba62f;  */

void FUN_1085ba5e0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010beaf040(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1085ba630; end: 1085ba71f;  */

void FUN_1085ba630(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bfcaa60();
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1085ba720;
  puStack_50 = &UNK_110848378;
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = uVar1;
  _objc_retain(uVar2);
  uStack_40 = uVar2;
  func_0x000107c312cc("APPSTORE",&puStack_68);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(uVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 1085ba720; end: 1085ba77b;  */

void FUN_1085ba720(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar3);
    uVar2 = *(undefined8 *)(lVar1 + 0x28);
    *(undefined8 *)(lVar1 + 0x28) = uVar3;
    _objc_release(uVar2);
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
              (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1085ba77c; end: 1085ba8f7; -[SCTalkChatSessionImpl _setupPresenceBarWithRemoteParticipantStates:] */

void FUN_1085ba77c(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *unaff_x21;
  undefined *unaff_x22;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined **ppuStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x38) == 0) {
    unaff_x21 = param_1;
    func_0x00010c10ada0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (unaff_x21 != (undefined *)0x0) {
      if ((param_3 == (undefined *)0x0) &&
         (puVar1 = param_1, func_0x00010be40d00(), param_3 = PTR____NSArray0__struct_11034ab48,
         ((ulong)puVar1 & 1) == 0)) {
        unaff_x22 = PTR_PTR_1126da480;
        _objc_alloc();
        unaff_x21 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c23ba80();
        _objc_retainAutoreleasedReturnValue();
        uStack_70 = 0;
        uStack_68 = 0;
        uStack_48 = 0;
        uStack_50 = 0;
        uStack_58 = 0;
        ppuStack_60 = &PTR____CFConstantStringClassReference_110db8b78;
        func_0x00010c056460();
        _objc_release(unaff_x21);
        param_3 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_40 = unaff_x22;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(unaff_x22);
      }
      puVar1 = param_1;
      func_0x00010bdf1d00();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 0x38);
      *(undefined **)(param_1 + 0x38) = puVar1;
      _objc_release(uVar3);
      puVar1 = *(undefined **)(param_1 + 0x38);
      func_0x00010c1e0c60(*(undefined8 *)(param_1 + 0x40));
      func_0x00010bdd0560(param_1);
    }
  }
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    pcStack_78 = FUN_1085ba8f8;
    puStack_a0 = unaff_x22;
    puStack_98 = unaff_x21;
    puStack_90 = param_3;
    puStack_88 = param_1;
    puStack_80 = &stack0xfffffffffffffff0;
    _objc_retain(puVar1);
    puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d0 = 0xc2000000;
    uStack_c8 = 0x1085ba990;
    puStack_c0 = &UNK_110844b80;
    puStack_b8 = puVar2;
    puStack_b0 = puVar1;
    uStack_a8 = param_2;
    _objc_retain(puVar1);
    func_0x000107c312d0("APPSTORE",&puStack_d8);
    _objc_release(puStack_b0);
    _objc_release(puVar1);
    return;
  }
  return;
}



/* Entry: 1085ba8f8; end: 1085baa63; -[SCTalkChatSessionImpl _launchModularCallScreenWithAction:] */

void FUN_1085ba8f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x1085ba990;
  puStack_50 = &UNK_110844b80;
  uStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_2;
  _objc_retain(param_3);
  func_0x000107c312d0("APPSTORE",&puStack_68);
  _objc_release(uStack_40);
  _objc_release(param_3);
  return;
}



/* Entry: 1085baa64; end: 1085bac9b; -[SCTalkChatSessionImpl _setupCallButtonsPaneIfNeeded] */

void FUN_1085baa64(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  if ((*(byte *)(param_1 + 0x50) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x50) = 1;
    puVar1 = PTR_PTR_1126da488;
    _objc_alloc_init();
    uVar5 = *(undefined8 *)(param_1 + 0x48);
    *(undefined **)(param_1 + 0x48) = puVar1;
    _objc_release(uVar5);
    func_0x00010c183b80(*(undefined8 *)(param_1 + 0x48));
    lVar2 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010bf376c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24aee0();
    func_0x00010c1b4980(*(undefined8 *)(param_1 + 0x48));
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_initWeak(auStack_68,param_1);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_1085bac9c;
    puStack_78 = &UNK_11085df68;
    _objc_copyWeak(auStack_70,auStack_68);
    func_0x00010c1d36e0(*(undefined8 *)(param_1 + 0x48));
    puStack_b8 = puVar1;
    uStack_b0 = 0xc2000000;
    uStack_a8 = 0x1085bacd0;
    puStack_a0 = &UNK_11085df68;
    _objc_copyWeak(auStack_98,auStack_68);
    func_0x00010c1d31e0(*(undefined8 *)(param_1 + 0x48));
    puStack_e0 = puVar1;
    uStack_d8 = 0xc2000000;
    uStack_d0 = 0x1085bad04;
    puStack_c8 = &UNK_11085df68;
    _objc_copyWeak(auStack_c0,auStack_68);
    func_0x00010c1d27c0(*(undefined8 *)(param_1 + 0x48));
    uVar5 = *(undefined8 *)(param_1 + 0x58);
    puVar4 = auStack_e8;
    _objc_copyWeak(puVar4,auStack_68);
    func_0x000107c30a80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfc9d60(uVar5);
    _objc_release(puVar4);
    _objc_destroyWeak(auStack_e8);
    _objc_destroyWeak(auStack_c0);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  return;
}



/* Entry: 1085bac9c; end: 1085bad37;  */

void FUN_1085bac9c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde3c40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1085bad38; end: 1085badfb;  */

void FUN_1085bad38(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    puVar1 = PTR_PTR_1126da490;
    _objc_alloc(PTR_PTR_1126da490);
    func_0x00010c061d40();
    func_0x00010c202c80(0x405c000000000000,0x4049000000000000);
    lVar2 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010bf376c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0c600();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}


