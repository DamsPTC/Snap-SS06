/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107e323f4; end: 107e32557; -[SCMemoriesSnapVideoFilterScope initWithSnapVideoFilter:snap:cloudFile:respectSnapOrientation:isExporting:videoTargetSize:spectaclesExportFormat:primaryCamera:completionQueue:completion:] */

undefined1 *
FUN_107e323f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
             undefined1 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puVar1 = &uStack_80;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_12);
  _objc_retain(param_13);
  puStack_78 = PTR_PTR_1126fb4f0;
  uStack_80 = param_3;
  _objc_msgSendSuper2(&uStack_80,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_7;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 8) = param_8;
    *(undefined1 *)((long)puVar1 + 9) = param_9;
    *(undefined8 *)((long)puVar1 + 0x78) = param_1;
    *(undefined8 *)((long)puVar1 + 0x80) = param_2;
    *(undefined8 *)((long)puVar1 + 0x30) = param_10;
    *(undefined8 *)((long)puVar1 + 0x38) = param_11;
    _objc_retain(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined8 *)((long)puVar1 + 0x60) = param_12;
    _objc_release(uVar2);
    uVar2 = param_13;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x68);
    *(undefined8 *)((long)puVar1 + 0x68) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 107e32558; end: 107e32587; -[SCMemoriesSnapVideoFilterScope setCompletion:] */

void FUN_107e32558(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107e32588; end: 107e325ab; -[SCMemoriesSnapVideoFilterScope getType] */

undefined8 FUN_107e32588(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x40) != 0) {
    return 0;
  }
  uVar1 = 1;
  if (*(long *)(param_1 + 0x50) == 0) {
    uVar1 = 2;
  }
  return uVar1;
}



/* Entry: 107e325ac; end: 107e325b3; -[SCMemoriesSnapVideoFilterScope mediaSource] */

undefined8 FUN_107e325ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107e325b4; end: 107e325bb; -[SCMemoriesSnapVideoFilterScope destinationInfo] */

undefined8 FUN_107e325b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107e325bc; end: 107e325c3; -[SCMemoriesSnapVideoFilterScope captureSessionId] */

undefined8 FUN_107e325bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107e325c4; end: 107e325cb; -[SCMemoriesSnapVideoFilterScope snapVideoFilter] */

undefined8 FUN_107e325c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107e325cc; end: 107e325d3; -[SCMemoriesSnapVideoFilterScope respectSnapOrientation] */

undefined1 FUN_107e325cc(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107e325d4; end: 107e325db; -[SCMemoriesSnapVideoFilterScope isExporting] */

undefined1 FUN_107e325d4(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 107e325dc; end: 107e325e3; -[SCMemoriesSnapVideoFilterScope videoTargetSize] */

undefined1  [16] FUN_107e325dc(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x78);
}



/* Entry: 107e325e4; end: 107e325eb; -[SCMemoriesSnapVideoFilterScope spectaclesExportFormat] */

undefined8 FUN_107e325e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107e325ec; end: 107e325f3; -[SCMemoriesSnapVideoFilterScope primaryCamera] */

undefined8 FUN_107e325ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 107e325f4; end: 107e325fb; -[SCMemoriesSnapVideoFilterScope snap] */

undefined8 FUN_107e325f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 107e325fc; end: 107e32603; -[SCMemoriesSnapVideoFilterScope cloudFile] */

undefined8 FUN_107e325fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 107e32604; end: 107e3260b; -[SCMemoriesSnapVideoFilterScope snapDoc] */

undefined8 FUN_107e32604(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 107e3260c; end: 107e32613; -[SCMemoriesSnapVideoFilterScope transcodeSnapInfo] */

undefined8 FUN_107e3260c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 107e32614; end: 107e3261b; -[SCMemoriesSnapVideoFilterScope completionQueue] */

undefined8 FUN_107e32614(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 107e3261c; end: 107e3264b; -[SCMemoriesSnapVideoFilterScope setCompletionQueue:] */

void FUN_107e3261c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107e3264c; end: 107e32653; -[SCMemoriesSnapVideoFilterScope completion] */

undefined8 FUN_107e3264c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 107e32654; end: 107e3265b; -[SCMemoriesSnapVideoFilterScope watermarkProfile] */

undefined8 FUN_107e32654(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 107e3265c; end: 107e3268b; -[SCMemoriesSnapVideoFilterScope setWatermarkProfile:] */

void FUN_107e3265c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107e3268c; end: 107e3271b; -[SCMemoriesSnapVideoFilterScope .cxx_destruct] */

void FUN_107e3268c(long param_1)

{
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 107e3271c; end: 107e32747;  */

void FUN_107e3271c(long param_1)

{
  if (param_1 != 0) {
    func_0x000100504554(param_1,&PTR___NSConcreteGlobalBlock_110a0eb78);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107e32748; end: 107e3279f;  */

void FUN_107e32748(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b01c0;
  func_0x00010bfceb20(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfcf680(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107e327a0; end: 107e327cb;  */

void FUN_107e327a0(long param_1)

{
  if (param_1 != 0) {
    func_0x000100504554(param_1,&PTR___NSConcreteGlobalBlock_110a0eb98);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107e327cc; end: 107e327db;  */

void FUN_107e327cc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c294270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126b01c0,PTR_s_userWithId__112682ac0,param_2);
  return;
}



/* Entry: 107e327dc; end: 107e32877;  */

void FUN_107e327dc(undefined8 param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  FUN_107e3271c(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (param_2 != (undefined *)0x0) {
    puVar1 = param_2;
    func_0x000100504554(param_2,&PTR___NSConcreteGlobalBlock_110a0ebd8);
  }
  uVar2 = param_1;
  func_0x00010bf09f80(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107e32878; end: 107e328cf;  */

void FUN_107e32878(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b01c0;
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c294260(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107e328d0; end: 107e32a07;  */

void FUN_107e328d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  puVar1 = PTR_PTR_1126aed70;
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107e480d0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar2 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar3 = puVar2;
  func_0x000107e48298();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x000107e482b0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar2);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  func_0x00010c211b40(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 107e32a08; end: 107e32a17;  */

void FUN_107e32a08(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 107e32a18; end: 107e32da7;  */

undefined1 *
FUN_107e32a18(long param_1,long param_2,undefined8 *param_3,undefined1 *param_4,undefined8 param_5,
             undefined8 param_6)

{
  bool bVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 *puVar14;
  long unaff_x22;
  long lVar15;
  long unaff_x23;
  long unaff_x24;
  long lStack_260;
  undefined *puStack_258;
  long lStack_250;
  long lStack_248;
  long lStack_240;
  undefined1 *puStack_238;
  long lStack_230;
  long lStack_228;
  undefined1 *puStack_220;
  code *pcStack_218;
  long lStack_210;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
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
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  func_0x00010c0b7fc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  lVar11 = lVar13;
  func_0x00010bf529e0();
  if (lVar11 != 0) {
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    lStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    plStack_1a0 = (long *)0x0;
    _objc_retain(lVar13);
    param_3 = &uStack_1b0;
    param_4 = auStack_f0;
    param_5 = 0x10;
    lVar11 = lVar13;
    func_0x00010bf52a60();
    if (lVar11 == 0) {
      _objc_release(lVar13);
    }
    else {
      bVar1 = false;
      bVar2 = 0;
      lVar12 = *plStack_1a0;
      lStack_210 = lVar12;
      lStack_208 = lVar13;
      do {
        unaff_x22 = 0;
        lStack_200 = lVar11;
        do {
          if (*plStack_1a0 != lVar12) {
            _objc_enumerationMutation(lVar13);
          }
          lVar15 = *(long *)(lStack_1a8 + unaff_x22 * 8);
          unaff_x23 = lVar15;
          lStack_1f8 = unaff_x22;
          func_0x00010c1164a0();
          _objc_retainAutoreleasedReturnValue();
          lVar3 = unaff_x23;
          func_0x00010bf33240();
          if (lVar3 == 2) {
            unaff_x24 = lVar15;
            func_0x00010c1164a0();
            _objc_retainAutoreleasedReturnValue();
            lVar3 = unaff_x24;
            func_0x00010c26e7a0();
            _objc_release(unaff_x24);
            _objc_release(unaff_x23);
            if (lVar3 == 3) {
              lVar3 = lVar15;
              func_0x00010c074e40();
              if ((int)lVar3 != 0) {
                _objc_release(lVar13);
                puVar14 = (undefined1 *)0x1;
                unaff_x22 = lVar15;
                goto LAB_107e32d58;
              }
              if (!bVar1) {
                uStack_1c8 = 0;
                uStack_1d0 = 0;
                uStack_1b8 = 0;
                uStack_1c0 = 0;
                lStack_1e8 = 0;
                uStack_1f0 = 0;
                uStack_1d8 = 0;
                plStack_1e0 = (long *)0x0;
                _objc_retain(param_2);
                param_3 = &uStack_1f0;
                param_4 = auStack_170;
                param_5 = 0x10;
                lVar3 = param_2;
                func_0x00010bf52a60();
                unaff_x23 = param_2;
                if (lVar3 == 0) {
                  bVar1 = false;
                  bVar2 = 1;
                }
                else {
                  lVar13 = *plStack_1e0;
                  do {
                    lVar11 = 0;
                    do {
                      if (*plStack_1e0 != lVar13) {
                        _objc_enumerationMutation(param_2);
                      }
                      param_3 = *(undefined8 **)(lStack_1e8 + lVar11 * 8);
                      unaff_x24 = lVar15;
                      func_0x00010c1164a0();
                      _objc_retainAutoreleasedReturnValue();
                      lVar12 = unaff_x24;
                      func_0x00010c116a20();
                      _objc_retainAutoreleasedReturnValue();
                      lVar4 = lVar12;
                      func_0x00010c0720c0();
                      if ((int)lVar4 == 0) {
LAB_107e32c78:
                        _objc_release(lVar12);
                        _objc_release(unaff_x24);
                      }
                      else {
                        lVar4 = lVar15;
                        func_0x00010c1164a0();
                        _objc_retainAutoreleasedReturnValue();
                        lVar5 = lVar4;
                        func_0x00010bf33240();
                        if (lVar5 != 2) {
                          _objc_release(lVar4);
                          goto LAB_107e32c78;
                        }
                        lVar5 = lVar15;
                        func_0x00010c1164a0();
                        _objc_retainAutoreleasedReturnValue();
                        lVar6 = lVar5;
                        func_0x00010c26e7a0();
                        _objc_release(lVar5);
                        _objc_release(lVar4);
                        _objc_release(lVar12);
                        _objc_release(unaff_x24);
                        if (lVar6 == 3) {
                          bVar1 = true;
                          goto LAB_107e32ccc;
                        }
                      }
                      lVar11 = lVar11 + 1;
                    } while (lVar3 != lVar11);
                    param_3 = &uStack_1f0;
                    param_4 = auStack_170;
                    param_5 = 0x10;
                    lVar3 = param_2;
                    func_0x00010bf52a60();
                  } while (lVar3 != 0);
                  bVar1 = false;
LAB_107e32ccc:
                  bVar2 = 1;
                  lVar13 = lStack_208;
                  lVar12 = lStack_210;
                  lVar11 = lStack_200;
                }
                goto LAB_107e32ce4;
              }
              bVar1 = true;
              bVar2 = 1;
            }
          }
          else {
LAB_107e32ce4:
            _objc_release(unaff_x23);
          }
          unaff_x22 = lStack_1f8 + 1;
        } while (unaff_x22 != lVar11);
        param_3 = &uStack_1b0;
        param_4 = auStack_f0;
        param_5 = 0x10;
        lVar11 = lVar13;
        func_0x00010bf52a60();
      } while (lVar11 != 0);
      _objc_release(lVar13);
      if ((bool)(bVar2 & bVar1)) {
        puVar14 = (undefined1 *)0x1;
        lVar12 = lVar13;
        goto LAB_107e32d58;
      }
    }
  }
  puVar14 = (undefined1 *)0x0;
  lVar12 = lVar13;
LAB_107e32d58:
  _objc_release(lVar13);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    plVar7 = &lStack_260;
    pcStack_218 = FUN_107e32da8;
    lStack_250 = unaff_x24;
    lStack_248 = unaff_x23;
    lStack_240 = unaff_x22;
    puStack_238 = puVar14;
    lStack_230 = lVar12;
    lStack_228 = lVar13;
    puStack_220 = &stack0xfffffffffffffff0;
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(param_5);
    _objc_retain(param_6);
    puStack_258 = PTR_PTR_1126fb4f8;
    lStack_260 = param_2;
    _objc_msgSendSuper2(&lStack_260,PTR_s_init_1125d9248);
    if (plVar7 != (long *)0x0) {
      puVar8 = param_3;
      func_0x00010bf51e00();
      uVar9 = *(undefined8 *)((long)plVar7 + 8);
      *(undefined8 **)((long)plVar7 + 8) = puVar8;
      _objc_release(uVar9);
      puVar14 = param_4;
      func_0x00010bf51e00();
      uVar9 = *(undefined8 *)((long)plVar7 + 0x10);
      *(undefined1 **)((long)plVar7 + 0x10) = puVar14;
      _objc_release(uVar9);
      uVar9 = param_5;
      func_0x00010bf51e00();
      uVar10 = *(undefined8 *)((long)plVar7 + 0x18);
      *(undefined8 *)((long)plVar7 + 0x18) = uVar9;
      _objc_release(uVar10);
      _objc_retain(param_6);
      uVar9 = *(undefined8 *)((long)plVar7 + 0x20);
      *(undefined8 *)((long)plVar7 + 0x20) = param_6;
      _objc_release(uVar9);
    }
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    return (undefined1 *)plVar7;
  }
  return puVar14;
}



/* Entry: 107e32da8; end: 107e32eaf; -[SCDeferredSpotlightNavRequest initWithClientIds:mediaTypes:spotlightDescription:thumbnail:] */

undefined1 *
FUN_107e32da8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126fb4f8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
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
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107e32eb0; end: 107e32eb7; -[SCDeferredSpotlightNavRequest clientIds] */

undefined8 FUN_107e32eb0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107e32eb8; end: 107e32ebf; -[SCDeferredSpotlightNavRequest mediaTypes] */

undefined8 FUN_107e32eb8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107e32ec0; end: 107e32ec7; -[SCDeferredSpotlightNavRequest spotlightDescription] */

undefined8 FUN_107e32ec0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107e32ec8; end: 107e32ecf; -[SCDeferredSpotlightNavRequest thumbnail] */

undefined8 FUN_107e32ec8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107e32ed0; end: 107e32f17; -[SCDeferredSpotlightNavRequest .cxx_destruct] */

void FUN_107e32ed0(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107e32f18; end: 107e32f1f; -[SCUnderlyingMainTabNavigationServices friendsFeedNavigationService] */

undefined8 FUN_107e32f18(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107e32f20; end: 107e32f27; -[SCUnderlyingMainTabNavigationServices cameraNavigationService] */

undefined8 FUN_107e32f20(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107e32f28; end: 107e32f2f; -[SCUnderlyingMainTabNavigationServices mapNavigationService] */

undefined8 FUN_107e32f28(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107e32f30; end: 107e32f37; -[SCUnderlyingMainTabNavigationServices searchSuggestionsNavigationService] */

undefined8 FUN_107e32f30(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107e32f38; end: 107e32f3f; -[SCUnderlyingMainTabNavigationServices spotlightNavigationService] */

undefined8 FUN_107e32f38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107e32f40; end: 107e32f47; -[SCUnderlyingMainTabNavigationServices chatNavigationService] */

undefined8 FUN_107e32f40(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107e32f48; end: 107e32fa7; -[SCUnderlyingMainTabNavigationServices .cxx_destruct] */

void FUN_107e32f48(long param_1)

{
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



/* Entry: 107e32fa8; end: 107e32fe7; -[SCMainTabNavigationServices underlyingMainTabNavigationServices] */

void FUN_107e32fa8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 107e32fe8; end: 107e3301b; -[SCMainTabNavigationServices hasUnderlyingImplementation] */

bool FUN_107e32fe8(long param_1)

{
  func_0x00010c27f7e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_1 != 0;
}



/* Entry: 107e3301c; end: 107e3305f; -[SCMainTabNavigationServices friendsFeedNavigationService] */

void FUN_107e3301c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c27f7e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfba180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107e33060; end: 107e330a3; -[SCMainTabNavigationServices cameraNavigationService] */

void FUN_107e33060(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c27f7e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf2a020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107e330a4; end: 107e330e7; -[SCMainTabNavigationServices mapNavigationService] */

void FUN_107e330a4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c27f7e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0b9600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107e330e8; end: 107e3312b; -[SCMainTabNavigationServices searchSuggestionsNavigationService] */

void FUN_107e330e8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c27f7e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c154440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107e3312c; end: 107e3316f; -[SCMainTabNavigationServices spotlightNavigationService] */

void FUN_107e3312c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c27f7e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c24b780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107e33170; end: 107e331b3; -[SCMainTabNavigationServices chatNavigationService] */

void FUN_107e33170(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c27f7e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf37020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107e331b4; end: 107e331bb; -[SCMainTabNavigationServices .cxx_destruct] */

void FUN_107e331b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 107e331bc; end: 107e33247; +[PLPageLaunchCommand descriptor] */

undefined * FUN_107e331bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113727fd0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b84d30,
                        &PTR____CFConstantStringClassReference_110ec0098,&PTR_DAT_113248f58,
                        &PTR_s_camera_113248f70,0x2d,0x170,0x1c);
    func_0x00010c229040();
    puRam0000000113727fd0 = puVar1;
  }
  return puRam0000000113727fd0;
}



/* Entry: 107e33248; end: 107e332af; +[PLTivScreen descriptor] */

void FUN_107e33248(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113727fd8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b84dd0,
                        &PTR____CFConstantStringClassReference_110ec00b8,&PTR_DAT_113249510,
                        &PTR_DAT_113249528,1,0x10,0x1c);
    puRam0000000113727fd8 = puVar1;
  }
  return;
}



/* Entry: 107e332b0; end: 107e33317; +[SCPLModalPartnershipAdCodeTray descriptor] */

void FUN_107e332b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113727fe0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b84e70,
                        &PTR____CFConstantStringClassReference_110ec00d8,&PTR_DAT_113249548,
                        &PTR_s_profileId_113249560,4,0x20,0x1c);
    puRam0000000113727fe0 = puVar1;
  }
  return;
}



/* Entry: 107e33318; end: 107e333fb; +[SCPLMultiProfileSwitcherTray descriptor] */

void FUN_107e33318(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113727fe8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b84f10,
                        &PTR____CFConstantStringClassReference_110ec00f8,&PTR_DAT_1132495e0,
                        &PTR_DAT_1132495f8,1,0x10,0x1c);
    puRam0000000113727fe8 = puVar1;
  }
  return;
}



/* Entry: 107e333fc; end: 107e33407;  */

bool FUN_107e333fc(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 107e33408; end: 107e3346f; +[SCPLPromotionInsightsTray descriptor] */

void FUN_107e33408(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113727ff8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b84fb0,
                        &PTR____CFConstantStringClassReference_110ec0138,&PTR_DAT_113249618,
                        &PTR_s_snapId_113249630,7,0x38,0x1c);
    puRam0000000113727ff8 = puVar1;
  }
  return;
}



/* Entry: 107e33470; end: 107e334fb; +[PLCameraScreen descriptor] */

undefined * FUN_107e33470(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113728000 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b85050,
                        &PTR____CFConstantStringClassReference_110ec0158,&PTR_DAT_113249718,
                        &PTR_s_lensId_113249730,2,0x18,0x1c);
    func_0x00010c229040();
    puRam0000000113728000 = puVar1;
  }
  return puRam0000000113728000;
}



/* Entry: 107e334fc; end: 107e33587; +[PLChatScreen descriptor] */

undefined * FUN_107e334fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113728008 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b850f0,
                        &PTR____CFConstantStringClassReference_110ec0178,&PTR_DAT_113249778,
                        &PTR_s_conversationId_113249790,2,0x18,0x1c);
    func_0x00010c229040();
    puRam0000000113728008 = puVar1;
  }
  return puRam0000000113728008;
}



/* Entry: 107e33588; end: 107e335ef; +[PLConversationId descriptor] */

void FUN_107e33588(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113728010 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b85140,
                        &PTR____CFConstantStringClassReference_110ec0198,&PTR_DAT_113249778,
                        &PTR_s_conversationId_1132497d0,2,0x10,0x1c);
    puRam0000000113728010 = puVar1;
  }
  return;
}



/* Entry: 107e335f0; end: 107e33657; +[PLDiscoverFeedScreen descriptor] */

void FUN_107e335f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113728018 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b851e0,
                        &PTR____CFConstantStringClassReference_110ec01b8,&PTR_DAT_113249810,0,0,4,
                        0x1c);
    puRam0000000113728018 = puVar1;
  }
  return;
}



/* Entry: 107e33658; end: 107e336bf; +[PLSpotlightScreen descriptor] */

void FUN_107e33658(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113728020 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b85280,
                        &PTR____CFConstantStringClassReference_110ec01d8,&PTR_DAT_113249828,0,0,4,
                        0x1c);
    puRam0000000113728020 = puVar1;
  }
  return;
}



/* Entry: 107e336c0; end: 107e33727; +[PLDWebExplainerScreen descriptor] */

void FUN_107e336c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113728028 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b85320,
                        &PTR____CFConstantStringClassReference_110ec01f8,&PTR_DAT_113249840,0,0,4,
                        0x1c);
    puRam0000000113728028 = puVar1;
  }
  return;
}



/* Entry: 107e33728; end: 107e3378f; +[PLBirthdaySettingsScreen descriptor] */

void FUN_107e33728(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113728030 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b853c0,
                        &PTR____CFConstantStringClassReference_110ec0218,&PTR_DAT_113249858,0,0,4,
                        0x1c);
    puRam0000000113728030 = puVar1;
  }
  return;
}



/* Entry: 107e33790; end: 107e337f7; +[PLUsernameSettingsScreen descriptor] */

void FUN_107e33790(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113728038 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b85460,
                        &PTR____CFConstantStringClassReference_110ec0238,&PTR_DAT_113249870,0,0,4,
                        0x1c);
    puRam0000000113728038 = puVar1;
  }
  return;
}



/* Entry: 107e337f8; end: 107e3385f; +[PLDisplayNameSettingsScreen descriptor] */

void FUN_107e337f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113728040 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b85500,
                        &PTR____CFConstantStringClassReference_110ec0258,&PTR_DAT_113249888,0,0,4,
                        0x1c);
    puRam0000000113728040 = puVar1;
  }
  return;
}



/* Entry: 107e33860; end: 107e338c7; +[PLFriendProfileScreen descriptor] */

void FUN_107e33860(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113728048 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b855a0,
                        &PTR____CFConstantStringClassReference_110ec0278,&PTR_DAT_1132498a0,
                        &PTR_s_userId_1132498b8,2,0x18,0x1c);
    puRam0000000113728048 = puVar1;
  }
  return;
}



/* Entry: 107e338c8; end: 107e33953; +[SCPLImpalaSnapPlayerScreen descriptor] */

undefined * FUN_107e338c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113728050 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b85640,
                        &PTR____CFConstantStringClassReference_110ec0298,&PTR_DAT_113249900,
                        &PTR_s_profileId_113249918,4,0x28,0x1c);
    func_0x00010c229040();
    puRam0000000113728050 = puVar1;
  }
  return puRam0000000113728050;
}



/* Entry: 107e33954; end: 107e33a37; +[PLProfileActionSheet descriptor] */

void FUN_107e33954(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113728058 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b856e0,
                        &PTR____CFConstantStringClassReference_110ec02b8,&PTR_DAT_113249998,
                        &PTR_s_userId_1132499b0,1,0x10,0x1c);
    puRam0000000113728058 = puVar1;
  }
  return;
}



/* Entry: 107e33a38; end: 107e33a43;  */

bool FUN_107e33a38(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 107e33a44; end: 107e33abf;  */

undefined * FUN_107e33a44(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000113728068 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110ec02f8,
                        &UNK_10dee798c,&UNK_10dee79c8,7,FUN_107e33ac0,0);
    do {
      if (puRam0000000113728068 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000113728068;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x113728068,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000113728068 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000113728068;
}



/* Entry: 107e33ac0; end: 107e33acb;  */

bool FUN_107e33ac0(uint param_1)

{
  return param_1 < 7;
}



/* Entry: 107e33acc; end: 107e33b47;  */

undefined * FUN_107e33acc(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000113728070 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110ec0318,
                        &UNK_10dee79e4,&UNK_10dee7a28,4,FUN_107e33b48,0);
    do {
      if (puRam0000000113728070 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000113728070;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x113728070,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000113728070 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000113728070;
}



/* Entry: 107e33b48; end: 107e33b53;  */

bool FUN_107e33b48(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 107e33b54; end: 107e33bbb; +[SCPLNavigationContext descriptor] */

void FUN_107e33b54(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113728078 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b85780,
                        &PTR____CFConstantStringClassReference_110ec0338,&PTR_DAT_1132499d8,
                        &PTR_DAT_1132499f0,1,0x10,0x1c);
    puRam0000000113728078 = puVar1;
  }
  return;
}



/* Entry: 107e33bbc; end: 107e33c47; +[SCPLProfileManagementScreen descriptor] */

undefined * FUN_107e33bbc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113728080 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b857d0,
                        &PTR____CFConstantStringClassReference_110ec0358,&PTR_DAT_1132499d8,
                        &PTR_s_profileId_113249a10,9,0x40,0x1c);
    func_0x00010c229040();
    puRam0000000113728080 = puVar1;
  }
  return puRam0000000113728080;
}



/* Entry: 107e33c48; end: 107e33cc3;  */

undefined * FUN_107e33c48(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000113728088 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110ec0378,
                        &UNK_10dee7a38,&UNK_10dee7a60,4,FUN_107e33cc4,0);
    do {
      if (puRam0000000113728088 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000113728088;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x113728088,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000113728088 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000113728088;
}



/* Entry: 107e33cc4; end: 107e33ccf;  */

bool FUN_107e33cc4(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 107e33cd0; end: 107e33d37; +[PLContentDetails descriptor] */

void FUN_107e33cd0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113728090 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b85870,
                        &PTR____CFConstantStringClassReference_110ec0398,&PTR_DAT_113249b38,
                        &PTR_s_contentType_113249b50,3,0x18,0x1c);
    puRam0000000113728090 = puVar1;
  }
  return;
}



/* Entry: 107e33d38; end: 107e33dc3; +[PLPublicProfileScreen descriptor] */

undefined * FUN_107e33d38(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113728098 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b858c0,
                        &PTR____CFConstantStringClassReference_110ec03b8,&PTR_DAT_113249b38,
                        &PTR_s_profileId_113249bb0,4,0x20,0x1c);
    func_0x00010c229040();
    puRam0000000113728098 = puVar1;
  }
  return puRam0000000113728098;
}



/* Entry: 107e33dc4; end: 107e33e2b; +[PLPublisherProfileScreen descriptor] */

void FUN_107e33dc4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137280a0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b85960,
                        &PTR____CFConstantStringClassReference_110ec03d8,&PTR_DAT_113249c30,
                        &PTR_s_profileId_113249c48,3,0x18,0x1c);
    puRam00000001137280a0 = puVar1;
  }
  return;
}



/* Entry: 107e33e2c; end: 107e33e93; +[PLGroupProfileScreen descriptor] */

void FUN_107e33e2c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137280a8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b85a00,
                        &PTR____CFConstantStringClassReference_110ec03f8,&PTR_DAT_113249ca8,
                        &PTR_s_conversationId_113249cc0,2,0x18,0x1c);
    puRam00000001137280a8 = puVar1;
  }
  return;
}



/* Entry: 107e33e94; end: 107e33f77; +[PLLensExplorerPostCaptureScreen descriptor] */

void FUN_107e33e94(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137280b0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b85aa0,
                        &PTR____CFConstantStringClassReference_110ec0418,&PTR_DAT_113249d00,0,0,4,
                        0x1c);
    puRam00000001137280b0 = puVar1;
  }
  return;
}



/* Entry: 107e33f78; end: 107e33f83;  */

bool FUN_107e33f78(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 107e33f84; end: 107e34067; +[PLLocationSharingSettingsScreen descriptor] */

void FUN_107e33f84(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137280c0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b85b40,
                        &PTR____CFConstantStringClassReference_110ec0458,&PTR_DAT_113249d18,
                        &PTR_DAT_113249d30,1,8,0x1c);
    puRam00000001137280c0 = puVar1;
  }
  return;
}



/* Entry: 107e34068; end: 107e34073;  */

bool FUN_107e34068(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 107e34074; end: 107e340ef;  */

undefined * FUN_107e34074(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137280d0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110ec0498,
                        &UNK_10dee7ad4,&UNK_10dee7af4,3,FUN_107e340f0,0);
    do {
      if (puRam00000001137280d0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137280d0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137280d0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137280d0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137280d0;
}



/* Entry: 107e340f0; end: 107e340fb;  */

bool FUN_107e340f0(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 107e340fc; end: 107e34163; +[PLMapDefaultScreenType descriptor] */

void FUN_107e340fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137280d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b85be0,
                        &PTR____CFConstantStringClassReference_110ec04b8,&PTR_DAT_113249d58,0,0,4,
                        0x1c);
    puRam00000001137280d8 = puVar1;
  }
  return;
}



/* Entry: 107e34164; end: 107e341cb; +[PLFocusViewScreenType descriptor] */

void FUN_107e34164(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137280e0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b85c30,
                        &PTR____CFConstantStringClassReference_110ec04d8,&PTR_DAT_113249d58,
                        &PTR_s_userId_113249d70,1,0x10,0x1c);
    puRam00000001137280e0 = puVar1;
  }
  return;
}



/* Entry: 107e341cc; end: 107e34247; +[PLPlacePivot descriptor] */

undefined * FUN_107e341cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137280e8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b85c80,
                        &PTR____CFConstantStringClassReference_110e8d298,&PTR_DAT_113249d58,
                        &PTR_DAT_11324a0b0,10,0x58,0x1c);
    func_0x00010c2289e0();
    puRam00000001137280e8 = puVar1;
  }
  return puRam00000001137280e8;
}



/* Entry: 107e34248; end: 107e342af; +[PLPlacePivotScreenType descriptor] */

void FUN_107e34248(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137280f0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b85cd0,
                        &PTR____CFConstantStringClassReference_110ec04f8,&PTR_DAT_113249d58,
                        &PTR_DAT_113249d90,1,0x10,0x1c);
    puRam00000001137280f0 = puVar1;
  }
  return;
}



/* Entry: 107e342b0; end: 107e34317; +[PLPlaceProfileScreenType descriptor] */

void FUN_107e342b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137280f8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b85d20,
                        &PTR____CFConstantStringClassReference_110ec0518,&PTR_DAT_113249d58,
                        &PTR_DAT_113249dd0,3,0x18,0x1c);
    puRam00000001137280f8 = puVar1;
  }
  return;
}



/* Entry: 107e34318; end: 107e3437f; +[PLPointOfInterestScreenType descriptor] */

void FUN_107e34318(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113728100 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b85d70,
                        &PTR____CFConstantStringClassReference_110ec0538,&PTR_DAT_113249d58,
                        &PTR_s_lat_113249e30,4,0x28,0x1c);
    puRam0000000113728100 = puVar1;
  }
  return;
}



/* Entry: 107e34380; end: 107e343e7; +[PLStoryScreenType descriptor] */

void FUN_107e34380(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113728108 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b85dc0,
                        &PTR____CFConstantStringClassReference_110ec0558,&PTR_DAT_113249d58,
                        &PTR_s_snapId_113249db0,1,0x10,0x1c);
    puRam0000000113728108 = puVar1;
  }
  return;
}



/* Entry: 107e343e8; end: 107e3444f; +[PLLayerScreenType descriptor] */

void FUN_107e343e8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113728110 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b85e10,
                        &PTR____CFConstantStringClassReference_110ec0578,&PTR_DAT_113249d58,
                        &PTR_s_lat_113249eb0,4,0x20,0x1c);
    puRam0000000113728110 = puVar1;
  }
  return;
}



/* Entry: 107e34450; end: 107e344b7; +[PLMapSourceAttribution descriptor] */

void FUN_107e34450(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113728118 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b85e60,
                        &PTR____CFConstantStringClassReference_110ec0598,&PTR_DAT_113249d58,
                        &PTR_DAT_113249f30,4,0x14,0x1c);
    puRam0000000113728118 = puVar1;
  }
  return;
}



/* Entry: 107e344b8; end: 107e34543; +[PLMapScreen descriptor] */

undefined * FUN_107e344b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113728120 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b85eb0,
                        &PTR____CFConstantStringClassReference_110ec05b8,&PTR_DAT_113249d58,
                        &PTR_DAT_113249fb0,8,0x48,0x1c);
    func_0x00010c229040();
    puRam0000000113728120 = puVar1;
  }
  return puRam0000000113728120;
}


