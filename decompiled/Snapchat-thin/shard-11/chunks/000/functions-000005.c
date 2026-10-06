/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1080160f0; end: 108016283; -[SCMemoriesCloudFSImpl _snapRepresentationToMediaResultMapForSnapDoc:snapDocKey:] */

void FUN_1080160f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar5 = *(long *)(param_1 + 0x10);
  _objc_retain(param_4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar5;
  FUN_108017f48();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar5;
  func_0x00010c13e3a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(lVar1);
  _objc_release(lVar5);
  lVar1 = lVar2;
  func_0x00010bfc5240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = lVar2;
    func_0x00010bfc5240(lVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010bf63640(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08fa60();
    _objc_release(uVar3);
    uVar3 = param_3;
    func_0x00010bfe5ea0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe5ea0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar3);
    lVar5 = lVar1;
    func_0x00010c292820(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar1);
  }
  lVar1 = lVar2;
  FUN_108017cd0(lVar2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 108016284; end: 10801635b; -[SCMemoriesCloudFSImpl .cxx_destruct] */

void FUN_108016284(long param_1)

{
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
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



/* Entry: 10801635c; end: 1080163bf; -[SCMemoriesThumbnailDownloadResultLogger init] */

undefined1 * FUN_10801635c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fc220;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126d8e38;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1080163c0; end: 108016423; -[SCMemoriesThumbnailDownloadResultLogger logDownloadWithMediaContextType:success:] */

void FUN_1080163c0(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined **ppuVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x00010bde85c0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dab0d8;
  if (param_4 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad2d8;
  }
  FUN_1080183f4(*(undefined8 *)(param_1 + 8),lVar2,ppuVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 108016424; end: 10801644f; -[SCMemoriesThumbnailDownloadResultLogger _contextStringForMediaContextType:] */

undefined ** FUN_108016424(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110ecf358;
  if (param_3 != 0x1a) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110db8b78;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110ecf338;
  if (param_3 != 0x13) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 108016450; end: 10801645b; -[SCMemoriesThumbnailDownloadResultLogger .cxx_destruct] */

void FUN_108016450(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10801645c; end: 1080164bf; -[SCMemoriesThumbnailResolutionContextLogger init] */

undefined1 * FUN_10801645c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fc228;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126d8e40;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1080164c0; end: 108016523; -[SCMemoriesThumbnailResolutionContextLogger logResolutionWithMediaContextType:success:] */

void FUN_1080164c0(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined **ppuVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x00010bde85c0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dab0d8;
  if (param_4 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad2d8;
  }
  FUN_108018150(*(undefined8 *)(param_1 + 8),lVar2,ppuVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 108016524; end: 10801654f; -[SCMemoriesThumbnailResolutionContextLogger _contextStringForMediaContextType:] */

undefined ** FUN_108016524(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110ecf358;
  if (param_3 != 0x1a) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110db8b78;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110ecf338;
  if (param_3 != 0x13) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 108016550; end: 10801655b; -[SCMemoriesThumbnailResolutionContextLogger .cxx_destruct] */

void FUN_108016550(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10801655c; end: 10801658f;  */

undefined ** FUN_10801655c(ulong param_1)

{
  undefined **ppuVar1;
  
  func_0x00010bfca780();
  if (param_1 < 0x36) {
    ppuVar1 = (undefined **)(&PTR_PTR_110a17418)[param_1];
  }
  else {
    ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cf3e8;
  }
  return ppuVar1;
}



/* Entry: 108016590; end: 10801670f;  */

void FUN_108016590(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110f726f8);
  if ((int)uVar1 == 0) {
    uVar1 = param_1;
    func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110f72718);
    if ((int)uVar1 == 0) {
      uVar1 = param_1;
      func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110f72738);
      if ((int)uVar1 == 0) {
        uVar1 = param_1;
        func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110f72758);
        if ((int)uVar1 == 0) {
          uVar1 = param_1;
          func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110f72778);
          if ((int)uVar1 == 0) {
            uVar1 = param_1;
            func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110f72798);
            if ((int)uVar1 == 0) {
              uVar1 = param_1;
              func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110f727b8);
              if ((int)uVar1 == 0) {
                uVar1 = param_1;
                func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110f727d8
                                   );
                if ((int)uVar1 == 0) {
                  uVar1 = param_1;
                  func_0x00010c0720c0(param_1,param_2,
                                      &PTR____CFConstantStringClassReference_110f72858);
                  if ((int)uVar1 == 0) {
                    uVar1 = param_1;
                    func_0x00010c0720c0(param_1,param_2,
                                        &PTR____CFConstantStringClassReference_110f72878);
                    if ((int)uVar1 == 0) {
                      uVar1 = param_1;
                      func_0x00010c0720c0(param_1,param_2,
                                          &PTR____CFConstantStringClassReference_110f727f8);
                      if ((int)uVar1 == 0) {
                        uVar1 = param_1;
                        func_0x00010c0720c0(param_1,param_2,
                                            &PTR____CFConstantStringClassReference_110f72818);
                        if ((int)uVar1 == 0) {
                          puVar3 = (undefined *)0x0;
                          goto LAB_108016608;
                        }
                        puVar3 = (undefined *)0x10;
                      }
                      else {
                        puVar3 = (undefined *)0x8;
                      }
                    }
                    else {
                      puVar3 = (undefined *)0x6;
                    }
                  }
                  else {
                    puVar3 = (undefined *)0x12;
                  }
                }
                else {
                  puVar3 = (undefined *)0x5;
                }
              }
              else {
                puVar3 = (undefined *)0x4;
              }
            }
            else {
              puVar3 = (undefined *)0x2;
            }
          }
          else {
            puVar3 = (undefined *)0x1;
          }
        }
        else {
          puVar3 = (undefined *)0x3;
        }
        func_0x00010b697864(puVar3);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_108016608;
      }
      ppuVar2 = &PTR_PTR_110ccc168;
    }
    else {
      ppuVar2 = &PTR_PTR_110ccc160;
    }
  }
  else {
    ppuVar2 = &PTR_PTR_110ccc158;
  }
  puVar3 = *ppuVar2;
  _objc_retain(puVar3);
LAB_108016608:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108016710; end: 10801684f;  */

void FUN_108016710(ulong param_1,int param_2)

{
  ulong uVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c0720c0();
  if ((int)uVar1 == 0) {
    uVar1 = param_1;
    func_0x00010c0720c0();
    if ((int)uVar1 == 0) {
      uVar1 = param_1;
      func_0x00010c0720c0();
      if ((int)uVar1 == 0) {
        uVar1 = param_1;
        func_0x00010c0720c0();
        if ((((((uVar1 & 1) == 0) && (uVar1 = param_1, func_0x00010c0720c0(), (uVar1 & 1) == 0)) &&
             (uVar1 = param_1, func_0x00010c0720c0(), (uVar1 & 1) == 0)) &&
            ((uVar1 = param_1, func_0x00010c0720c0(), (uVar1 & 1) == 0 &&
             (uVar1 = param_1, func_0x00010c0720c0(), (uVar1 & 1) == 0)))) &&
           ((uVar1 = param_1, func_0x00010c0720c0(), (uVar1 & 1) == 0 &&
            ((uVar1 = param_1, func_0x00010c0720c0(), (uVar1 & 1) == 0 &&
             (uVar1 = param_1, func_0x00010c0720c0(), (uVar1 & 1) == 0)))))) {
          func_0x00010c0720c0(param_1);
        }
        puVar3 = (undefined *)0x0;
        goto LAB_1080167a0;
      }
      ppuVar2 = &PTR_PTR_110ccc1d8;
    }
    else {
      ppuVar2 = &PTR_PTR_110ccc1e0;
    }
  }
  else {
    ppuVar2 = &PTR_PTR_110ccc1c8;
    if (param_2 == 0) {
      ppuVar2 = &PTR_PTR_110ccc1f0;
    }
  }
  puVar3 = *ppuVar2;
  _objc_retain(puVar3);
LAB_1080167a0:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108016850; end: 10801694f;  */

undefined8 FUN_108016850(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110f726f8);
  if ((uVar1 & 1) == 0) {
    uVar1 = param_1;
    func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110f72718);
    if (((uVar1 & 1) == 0) &&
       (uVar1 = param_1,
       func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110f72738),
       (uVar1 & 1) == 0)) {
      uVar1 = param_1;
      func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110f72758);
      if ((uVar1 & 1) != 0) goto LAB_10801687c;
      uVar1 = param_1;
      func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110f72778);
      if (((((uVar1 & 1) == 0) &&
           (uVar1 = param_1,
           func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110f72798),
           (uVar1 & 1) == 0)) &&
          (uVar1 = param_1,
          func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110f727b8),
          (uVar1 & 1) == 0)) &&
         (((uVar1 = param_1,
           func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110f727d8),
           (uVar1 & 1) == 0 &&
           (uVar1 = param_1,
           func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110f72858),
           (uVar1 & 1) == 0)) &&
          ((uVar1 = param_1,
           func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110f72878),
           (uVar1 & 1) == 0 &&
           (uVar1 = param_1,
           func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110f727f8),
           (uVar1 & 1) == 0)))))) {
        func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110f72818);
      }
    }
    uVar2 = 4;
  }
  else {
LAB_10801687c:
    uVar2 = 3;
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 108016950; end: 108016a43;  */

void FUN_108016950(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,param_1,0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010c008340(puVar1,param_2,puVar2,4);
  _objc_release(puVar2);
  ppuStack_48 = &PTR____CFConstantStringClassReference_110e69858;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_40 = puVar1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_40,&ppuStack_48,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    if (puVar1 == (undefined *)0x0) {
      puVar2 = (undefined *)0x0;
    }
    else {
      func_0x00010c271c60();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      FUN_108016950();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108016a44; end: 108016a93;  */

void FUN_108016a44(long param_1)

{
  long lVar1;
  
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    func_0x00010c271c60();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    FUN_108016950();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 108016a94; end: 108016da3;  */

void FUN_108016a94(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_retain(param_1);
  uVar1 = param_2;
  func_0x00010c0d7ec0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126d2c60;
  func_0x00010c2b1d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c1e9340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar4 = puVar3;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar3 = puVar4;
  FUN_108016a44();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c243800(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar5 = 1;
  FUN_10801b6e8(1,uVar1,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126b4960;
  ppuVar6 = &PTR____CFConstantStringClassReference_110e87e58;
  func_0x00010801b7a8(&PTR____CFConstantStringClassReference_110e87e58);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126b19f8;
  func_0x00010c0c7a40();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  FUN_108016850();
  puVar9 = PTR_PTR_1126bbf20;
  func_0x00010bdc1d20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf58740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(ppuVar6);
  puVar7 = puVar2;
  func_0x00010c086560();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  FUN_108016590();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = (ulong)param_4;
  uVar10 = param_1;
  FUN_108016710();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar8 = puVar7;
  uVar14 = uVar1;
  func_0x00010c2193a0(puVar2);
  _objc_release(uVar10);
  _objc_release(uVar1);
  _objc_release(puVar7);
  _objc_release(uVar5);
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar15) {
    ___stack_chk_fail();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar8);
    _objc_retain(uVar13);
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b4960;
    puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    puVar7 = PTR_PTR_1126b19f8;
    func_0x00010c0c7a40();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    FUN_108016850();
    func_0x00010bf58760();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar4);
    puVar4 = puVar2;
    func_0x00010c086560(puVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar13;
    FUN_108016590(uVar13);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar13;
    FUN_108016710(uVar13,uVar14);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar13);
    func_0x00010c2193a0(puVar2);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(puVar4);
    _objc_release(puVar3);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar15) {
      ___stack_chk_fail();
      puVar2 = PTR_PTR_1126b25d0;
      _objc_alloc_init(PTR_PTR_1126b25d0);
      puVar3 = PTR_PTR_1126b25c8;
      _objc_alloc_init(PTR_PTR_1126b25c8);
      func_0x00010c1c4020(puVar2);
      _objc_release(puVar3);
      puVar3 = PTR_PTR_1126bcf20;
      _objc_alloc_init(PTR_PTR_1126bcf20);
      func_0x00010c1c4aa0();
      puVar4 = puVar2;
      func_0x00010c0c3fe0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c4880();
      _objc_release(puVar4);
      _objc_release(puVar3);
      puVar3 = puVar2;
      func_0x00010c0c3fe0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16a960();
      _objc_release(puVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108016da4; end: 108016f93;  */

void FUN_108016da4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b4960;
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar3 = PTR_PTR_1126b19f8;
  func_0x00010c0c7a40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  FUN_108016850();
  func_0x00010bf58760();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = puVar5;
  func_0x00010c086560(puVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_2;
  FUN_108016590(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_2;
  FUN_108016710(param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c2193a0(puVar5);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
    ___stack_chk_fail();
    puVar5 = PTR_PTR_1126b25d0;
    _objc_alloc_init(PTR_PTR_1126b25d0);
    puVar1 = PTR_PTR_1126b25c8;
    _objc_alloc_init(PTR_PTR_1126b25c8);
    func_0x00010c1c4020(puVar5);
    _objc_release(puVar1);
    puVar1 = PTR_PTR_1126bcf20;
    _objc_alloc_init(PTR_PTR_1126bcf20);
    func_0x00010c1c4aa0();
    puVar2 = puVar5;
    func_0x00010c0c3fe0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c4880();
    _objc_release(puVar2);
    _objc_release(puVar1);
    puVar1 = puVar5;
    func_0x00010c0c3fe0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16a960();
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 108016f94; end: 10801705b;  */

void FUN_108016f94(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b25d0;
  _objc_alloc_init(PTR_PTR_1126b25d0);
  puVar2 = PTR_PTR_1126b25c8;
  _objc_alloc_init(PTR_PTR_1126b25c8);
  func_0x00010c1c4020(puVar1);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126bcf20;
  _objc_alloc_init(PTR_PTR_1126bcf20);
  func_0x00010c1c4aa0();
  puVar3 = puVar1;
  func_0x00010c0c3fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c4880();
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c0c3fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16a960();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10801705c; end: 10801765f;  */

void FUN_10801705c(long param_1,long param_2,undefined1 *param_3,undefined1 *param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  undefined1 *puVar13;
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
  
  puVar8 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = param_2;
  _objc_retain();
  lVar1 = param_1;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0ff680();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    puVar9 = (undefined *)0x0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0ff660();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    _objc_retain(lVar2);
    param_4 = auStack_f0;
    lVar1 = lVar2;
    func_0x00010bf52a60();
    if (lVar1 != 0) {
      lVar11 = *plStack_120;
      do {
        lVar12 = 0;
        do {
          if (*plStack_120 != lVar11) {
            _objc_enumerationMutation(lVar2);
          }
          puVar9 = *(undefined **)(lStack_128 + lVar12 * 8);
          puVar3 = puVar9;
          func_0x00010c0c3fe0();
          _objc_retainAutoreleasedReturnValue();
          if (puVar3 != (undefined *)0x0) {
            puVar4 = puVar9;
            func_0x00010c0c3fe0();
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar4;
            func_0x00010bf0b760();
            _objc_release(puVar4);
            _objc_release(puVar3);
            if ((int)puVar5 == (int)param_2) {
              _objc_retain(puVar9);
              goto LAB_1080171d4;
            }
          }
          lVar12 = lVar12 + 1;
        } while (lVar1 != lVar12);
        param_4 = auStack_f0;
        lVar1 = lVar2;
        puVar8 = &uStack_130;
        func_0x00010bf52a60();
      } while (lVar1 != 0);
    }
    puVar9 = (undefined *)0x0;
LAB_1080171d4:
    _objc_release(lVar2);
    _objc_release(lVar2);
    param_3 = (undefined1 *)puVar8;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  _objc_retain();
  _objc_retain(lVar7);
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010c23f220();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
LAB_108017330:
    puVar9 = (undefined *)0x0;
  }
  else {
    lVar2 = lVar7;
    func_0x00010c08fa60();
    _objc_release(lVar1);
    if (lVar2 == 0) goto LAB_108017330;
    puVar10 = param_3;
    func_0x00010c08fa60();
    if (puVar10 == (undefined1 *)0x0) {
      func_0x00010c08fa60(param_4);
    }
    lVar1 = param_1;
    func_0x00010c23f220();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar7;
    func_0x0001080190b0(lVar7,lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar2;
    func_0x00010c08fa60();
    if (lVar11 == 0) {
      lVar11 = lVar7;
      func_0x000108018fdc(lVar7,lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar12 = lVar11;
      func_0x00010c08fa60();
      if (lVar12 != 0) {
        lVar12 = lVar1;
        func_0x00010b5fa088(lVar1);
        func_0x00010b5fa4c8();
        lVar6 = lVar7;
        FUN_108016a94(lVar7,param_1,lVar11,lVar12);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_108017380;
      }
      puVar9 = (undefined *)0x0;
    }
    else {
      lVar11 = param_1;
      func_0x00010c0d7ec0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar12 = lVar1;
      func_0x00010b5fa088(lVar1);
      func_0x00010b5fa4c8();
      lVar6 = lVar11;
      FUN_108016da4(lVar11,lVar7,lVar2,lVar12);
      _objc_retainAutoreleasedReturnValue();
LAB_108017380:
      _objc_release(lVar11);
      puVar10 = param_3;
      func_0x00010c08fa60();
      if (puVar10 == (undefined1 *)0x0) {
        puVar10 = (undefined1 *)0x0;
      }
      else {
        puVar10 = param_3;
        func_0x00010bf15da0(param_3);
        _objc_retainAutoreleasedReturnValue();
      }
      puVar13 = param_4;
      func_0x00010c08fa60();
      if (puVar13 == (undefined1 *)0x0) {
        puVar13 = (undefined1 *)0x0;
      }
      else {
        puVar13 = param_4;
        func_0x00010bf15da0(param_4);
        _objc_retainAutoreleasedReturnValue();
      }
      puVar3 = PTR_PTR_1126b9f60;
      _objc_alloc(PTR_PTR_1126b9f60);
      func_0x00010c040f00();
      puVar9 = PTR_PTR_1126d8e48;
      _objc_alloc(PTR_PTR_1126d8e48);
      func_0x00010c02f400();
      _objc_release(puVar3);
      _objc_release(puVar13);
      _objc_release(puVar10);
      lVar11 = lVar6;
    }
    _objc_release(lVar11);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(lVar7);
  _objc_release(param_1);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 108017660; end: 1080176c3;  */

void FUN_108017660(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b25b8;
  _objc_retain();
  _objc_alloc(puVar1);
  func_0x00010c011280();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1080176c4; end: 10801770f;  */

void FUN_1080176c4(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b25b8;
  _objc_retain();
  _objc_alloc(puVar1);
  func_0x00010c011280();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108017710; end: 108017ccf;  */

void FUN_108017710(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b25c0;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_alloc_init(puVar1);
  puVar2 = PTR_PTR_1126bcf20;
  _objc_alloc_init(PTR_PTR_1126bcf20);
  func_0x00010c1c4aa0();
  uVar3 = param_1;
  func_0x00010bf57100(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  func_0x00010c1c5120(puVar1);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c0c6280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  _objc_release(puVar2);
  func_0x00010c0c55e0(uVar3);
  puVar2 = PTR_PTR_1126bcf20;
  _objc_alloc_init(PTR_PTR_1126bcf20);
  func_0x00010c1c4aa0();
  func_0x00010c1c4880(*param_4);
  _objc_release(puVar2);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108017cd0; end: 108017f47;  */

void FUN_108017cd0(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  
  _objc_retain(param_2);
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010bfc76e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bfc76e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  uVar3 = param_2;
  FUN_10801705c(param_2,5);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0c5180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  if (uVar5 != 0) {
    lVar6 = lVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar6 != 0) {
      lVar6 = lVar1;
      func_0x00010c0e00e0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar2);
      _objc_release(lVar6);
    }
  }
  uVar4 = param_2;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar4;
  func_0x00010c0ff660();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bf529e0();
  _objc_release(uVar7);
  _objc_release(uVar4);
  if (1 < uVar8) {
    uVar4 = param_2;
    FUN_10801705c(param_2,6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar4;
    func_0x00010c0c3fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c0c5180();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    if (uVar8 != 0) {
      lVar6 = lVar1;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar6 != 0) {
        lVar6 = lVar1;
        func_0x00010c0e00e0(lVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar2);
        _objc_release(lVar6);
      }
    }
    _objc_release(uVar8);
    _objc_release(uVar4);
  }
  puVar9 = puVar2;
  func_0x00010bf002e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  _objc_release(puVar9);
  puVar9 = puVar2;
  func_0x00010bf51e00(puVar2);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 108017f48; end: 1080180db;  */

void FUN_108017f48(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = PTR_PTR_1126b1060;
  _objc_alloc();
  puVar1 = PTR_PTR_1126b19f8;
  func_0x00010c0c7a40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c032f60();
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    ___stack_chk_fail();
    _objc_retain(param_2);
    func_0x00010bfc76e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_2;
    FUN_10801705c(param_2,5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    if (lVar5 == 0) {
      puVar6 = (undefined *)0x0;
    }
    else {
      lVar3 = lVar5;
      func_0x00010c0c3fe0(lVar5);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c0c5180();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      puVar6 = puVar1;
      func_0x00010c0e00e0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
    }
    _objc_release(lVar5);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1080180dc; end: 10801814f; -[SCGrapheneThumbnailResolutionContextMetric2 init] */

undefined1 * FUN_1080180dc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fc230;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108018150; end: 10801837f;  */

char * FUN_108018150(long param_1,char *param_2,char *param_3,undefined8 param_4)

{
  char *pcVar1;
  char **ppcVar2;
  long lVar3;
  long *plVar4;
  char *pcStack_d0;
  undefined *puStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_78,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_110a175e8,&uStack_98,param_4);
    puStack_80 = &uStack_98;
    func_0x00010007e5dc(&puStack_80);
    lVar3 = 0;
    do {
      if ((&cStack_49)[lVar3] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar3));
      }
      lVar3 = lVar3 + -0x18;
    } while (lVar3 != -0x30);
  }
  _objc_release(param_3);
  pcVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  ppcVar2 = &pcStack_d0;
  pcStack_a8 = FUN_108018380;
  puStack_c8 = PTR_PTR_1126fc238;
  pcStack_d0 = pcVar1;
  pcStack_c0 = param_3;
  pcStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&pcStack_d0,PTR_s_init_1125d9248);
  if (ppcVar2 != (char **)0x0) {
    pcVar1 = (char *)ppcVar2;
    (*(code *)PTR_DAT_113403208)();
    *(char **)((long)ppcVar2 + 8) = pcVar1;
  }
  return (char *)ppcVar2;
}



/* Entry: 108018380; end: 1080183f3; -[SCGrapheneThumbnailDownloadResultMetric2 init] */

undefined1 * FUN_108018380(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fc238;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1080183f4; end: 108018623;  */

char * FUN_1080183f4(long param_1,char *param_2,char *param_3,undefined8 param_4)

{
  char *pcVar1;
  char *pcVar2;
  char **ppcVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  char *pcStack_d0;
  undefined *puStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_3;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar6 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_78,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_98[0] = '\0';
    acStack_98[1] = '\0';
    acStack_98[2] = '\0';
    acStack_98[3] = '\0';
    acStack_98[4] = '\0';
    acStack_98[5] = '\0';
    acStack_98[6] = '\0';
    acStack_98[7] = '\0';
    acStack_98[8] = '\0';
    acStack_98[9] = '\0';
    acStack_98[10] = '\0';
    acStack_98[0xb] = '\0';
    acStack_98[0xc] = '\0';
    acStack_98[0xd] = '\0';
    acStack_98[0xe] = '\0';
    acStack_98[0xf] = '\0';
    acStack_98[0x10] = '\0';
    acStack_98[0x11] = '\0';
    acStack_98[0x12] = '\0';
    acStack_98[0x13] = '\0';
    acStack_98[0x14] = '\0';
    acStack_98[0x15] = '\0';
    acStack_98[0x16] = '\0';
    acStack_98[0x17] = '\0';
    func_0x00010007e1e8(acStack_98,auStack_78,&lStack_48,2);
    pcVar1 = acStack_98;
    (**(code **)(*plVar6 + 0x18))(plVar6,&UNK_110a17658,pcVar1,param_4);
    pcStack_80 = acStack_98;
    func_0x00010007e5dc(&pcStack_80);
    lVar5 = 0;
    do {
      if ((&cStack_49)[lVar5] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar5));
      }
      lVar5 = lVar5 + -0x18;
    } while (lVar5 != -0x30);
  }
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  ppcVar3 = &pcStack_d0;
  pcStack_a8 = FUN_108018624;
  pcStack_c0 = param_3;
  pcStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  puStack_c8 = PTR_PTR_1126fc240;
  pcStack_d0 = pcVar2;
  _objc_msgSendSuper2(&pcStack_d0,PTR_s_init_1125d9248);
  if (ppcVar3 != (char **)0x0) {
    pcVar2 = pcVar1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)ppcVar3 + 8);
    *(char **)((long)ppcVar3 + 8) = pcVar2;
    _objc_release(uVar4);
    pcVar2 = pcVar1;
    func_0x00010bf66f40();
    *(char **)((long)ppcVar3 + 0x10) = pcVar2;
    pcVar2 = pcVar1;
    func_0x00010bf66f40();
    *(char **)((long)ppcVar3 + 0x18) = pcVar2;
    pcVar2 = pcVar1;
    func_0x00010bf66f40();
    *(char **)((long)ppcVar3 + 0x20) = pcVar2;
    pcVar2 = pcVar1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)ppcVar3 + 0x28);
    *(char **)((long)ppcVar3 + 0x28) = pcVar2;
    _objc_release(uVar4);
    pcVar2 = pcVar1;
    func_0x00010bf66f40();
    *(char **)((long)ppcVar3 + 0x30) = pcVar2;
    pcVar2 = pcVar1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)ppcVar3 + 0x38);
    *(char **)((long)ppcVar3 + 0x38) = pcVar2;
    _objc_release(uVar4);
  }
  _objc_release(pcVar1);
  return (char *)ppcVar3;
}



/* Entry: 108018624; end: 10801874b; -[SCMemoriesCloudFSDownloadMetrics initWithCoder:] */

undefined1 * FUN_108018624(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fc240;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10801874c; end: 10801884f; -[SCMemoriesCloudFSDownloadMetrics initWithSnapId:assetType:statusCode:latencyInMs:urlPath:contentLengthInByte:genericAssetDescriptor:] */

undefined1 *
FUN_10801874c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_7);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126fc240;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108018850; end: 108018873; -[SCMemoriesCloudFSDownloadMetrics copyWithZone:] */

undefined8 FUN_108018850(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108018874; end: 108018937; -[SCMemoriesCloudFSDownloadMetrics encodeWithCoder:] */

void FUN_108018874(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110dbb0f8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110ecf3b8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110ecf3d8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110ecf3f8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110ecf418);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x30),
                      &PTR____CFConstantStringClassReference_110ecf438);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x38),
                      &PTR____CFConstantStringClassReference_110ecf458);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108018938; end: 10801893f; -[SCMemoriesCloudFSDownloadMetrics snapId] */

undefined8 FUN_108018938(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108018940; end: 108018947; -[SCMemoriesCloudFSDownloadMetrics assetType] */

undefined8 FUN_108018940(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108018948; end: 10801894f; -[SCMemoriesCloudFSDownloadMetrics statusCode] */

undefined8 FUN_108018948(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108018950; end: 108018957; -[SCMemoriesCloudFSDownloadMetrics latencyInMs] */

undefined8 FUN_108018950(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108018958; end: 10801895f; -[SCMemoriesCloudFSDownloadMetrics urlPath] */

undefined8 FUN_108018958(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108018960; end: 108018967; -[SCMemoriesCloudFSDownloadMetrics contentLengthInByte] */

undefined8 FUN_108018960(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108018968; end: 10801896f; -[SCMemoriesCloudFSDownloadMetrics genericAssetDescriptor] */

undefined8 FUN_108018968(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 108018970; end: 1080189ab; -[SCMemoriesCloudFSDownloadMetrics .cxx_destruct] */

void FUN_108018970(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1080189ac; end: 108018a83; -[SCMemoriesCloudFSNetworkConfigParams initWithSnap:networkRequestSnapId:snapToken:] */

undefined1 *
FUN_1080189ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126fc248;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
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
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108018a84; end: 108018aa7; -[SCMemoriesCloudFSNetworkConfigParams copyWithZone:] */

undefined8 FUN_108018a84(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108018aa8; end: 108018aaf; -[SCMemoriesCloudFSNetworkConfigParams snap] */

undefined8 FUN_108018aa8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108018ab0; end: 108018ab7; -[SCMemoriesCloudFSNetworkConfigParams networkRequestSnapId] */

undefined8 FUN_108018ab0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108018ab8; end: 108018abf; -[SCMemoriesCloudFSNetworkConfigParams snapToken] */

undefined8 FUN_108018ab8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108018ac0; end: 108018afb; -[SCMemoriesCloudFSNetworkConfigParams .cxx_destruct] */

void FUN_108018ac0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108018afc; end: 108018b37;  */

void FUN_108018afc(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dd4898);
  return;
}



/* Entry: 108018b38; end: 108018d27;  */

long FUN_108018b38(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  _objc_retain();
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c13a8e0();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar1 == 0) || (lVar8 = lVar1, func_0x00010c06cde0(), (int)lVar8 != 0)) {
    lVar2 = param_2;
    func_0x00010c13a8e0();
    _objc_retainAutoreleasedReturnValue();
    if ((lVar2 == 0) || (lVar8 = lVar2, func_0x00010c06cde0(), (int)lVar8 != 0)) {
      lVar3 = param_2;
      func_0x00010c13a8e0();
      _objc_retainAutoreleasedReturnValue();
      if ((lVar3 == 0) || (lVar8 = lVar3, func_0x00010c06cde0(), (int)lVar8 != 0)) {
        lVar4 = param_2;
        func_0x00010c13a8e0();
        _objc_retainAutoreleasedReturnValue();
        if ((lVar4 == 0) || (lVar8 = lVar4, func_0x00010c06cde0(), (int)lVar8 != 0)) {
          lVar5 = param_2;
          func_0x00010c13a8e0();
          _objc_retainAutoreleasedReturnValue();
          if ((lVar5 == 0) || (lVar8 = lVar5, func_0x00010c06cde0(), (int)lVar8 != 0)) {
            lVar6 = param_2;
            func_0x00010c13a8e0();
            _objc_retainAutoreleasedReturnValue();
            if ((lVar6 == 0) || (lVar8 = lVar6, func_0x00010c06cde0(), (int)lVar8 != 0)) {
              lVar7 = param_2;
              func_0x00010c13a8c0(param_2);
              _objc_retainAutoreleasedReturnValue();
              lVar8 = lVar7;
              func_0x00010c06cde0();
              _objc_release(lVar7);
            }
            else {
              lVar8 = 0;
            }
            _objc_release(lVar6);
          }
          else {
            lVar8 = 0;
          }
          _objc_release(lVar5);
        }
        else {
          lVar8 = 0;
        }
        _objc_release(lVar4);
      }
      else {
        lVar8 = 0;
      }
      _objc_release(lVar3);
    }
    else {
      lVar8 = 0;
    }
    _objc_release(lVar2);
  }
  else {
    lVar8 = 0;
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  _objc_release(param_1);
  return lVar8;
}



/* Entry: 108018d28; end: 108018d7b;  */

void FUN_108018d28(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  uVar1 = param_1 - 1;
  if ((uVar1 < 0x12) && ((0x380ffU >> (ulong)((uint)uVar1 & 0x1f) & 1) != 0)) {
    uVar2 = *(undefined8 *)(&PTR_PTR_110a176e8)[uVar1];
    _objc_retain(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108018d7c; end: 108018f47;  */

ulong FUN_108018d7c(ulong param_1,ulong param_2)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  func_0x00010c23f420();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
  uVar8 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar2);
  uVar6 = param_2;
  if ((uVar8 & 1) == 0) {
    uVar6 = 0;
  }
  _objc_retain(uVar6);
  _objc_release(param_2);
  if (uVar6 == 0) {
    uVar8 = 0;
  }
  else {
    _objc_retain(param_2);
    uVar3 = param_2;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    uVar8 = 0;
    if (uVar3 != 0) {
      do {
        uVar9 = 0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(param_2);
          }
          uVar8 = *(ulong *)(uVar9 * 8);
          uVar4 = uVar8;
          func_0x00010bf0b760();
          if ((uint)uVar4 < 0x16) {
            func_0x00010b697928();
          }
          else {
            uVar4 = 0xfffffffffbadbeef;
          }
          FUN_108018d28();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = param_1;
          func_0x00010c0720c0();
          _objc_release(uVar4);
          if ((uVar5 & 1) != 0) {
            func_0x00010bf89180();
            _objc_retainAutoreleasedReturnValue();
            goto LAB_108018ee8;
          }
          uVar9 = uVar9 + 1;
        } while (uVar3 != uVar9);
        uVar3 = param_2;
        func_0x00010bf52a60();
      } while (uVar3 != 0);
      uVar8 = 0;
    }
LAB_108018ee8:
    _objc_release(param_2);
  }
  _objc_release(uVar6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
    ___stack_chk_fail();
    _objc_retain();
    _objc_retain(puVar2);
    uVar6 = param_1;
    func_0x000108018fdc(param_1,puVar2);
    _objc_retainAutoreleasedReturnValue();
    if (uVar6 == 0) {
      uVar8 = param_1;
      func_0x0001080190b0(param_1,puVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = (ulong)(uVar8 == 0);
      _objc_release();
    }
    else {
      uVar8 = 0;
    }
    _objc_release(uVar6);
    _objc_release(puVar2);
    _objc_release(param_1);
    return uVar8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar8);
  return uVar8;
}



/* Entry: 108018f48; end: 108019183;  */

bool FUN_108018f48(long param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain();
  _objc_retain(param_2);
  lVar2 = param_1;
  func_0x000108018fdc(param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar3 = param_1;
    func_0x0001080190b0(param_1,param_2);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar3 == 0;
    _objc_release();
  }
  else {
    bVar1 = false;
  }
  _objc_release(lVar2);
  _objc_release(param_2);
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 108019184; end: 10801919f;  */

void FUN_108019184(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf99270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSError_1126ae858,PTR_s_errorWithDomain_description_code_1125c3e40,
             &PTR____CFConstantStringClassReference_110ecf518,param_1,200);
  return;
}



/* Entry: 1080191a0; end: 1080191d3;  */

void FUN_1080191a0(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dd4898);
  return;
}



/* Entry: 1080191d4; end: 1080193a3;  */

undefined8 FUN_1080191d4(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110f726f8);
  if ((uVar1 & 1) == 0) {
    uVar1 = param_1;
    func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110f72718);
    if ((uVar1 & 1) == 0) {
      uVar1 = param_1;
      func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110f72738);
      uVar2 = 2;
      if ((int)uVar1 == 0) {
        uVar2 = 0xffffffffffffffff;
      }
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 1080193a4; end: 1080194b3;  */

/* WARNING: Possible PIC construction at 0x000108019adc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108019ae0) */

undefined1 * FUN_1080193a4(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined1 *in_x5;
  undefined1 *puVar9;
  undefined1 *puVar10;
  long lVar11;
  undefined1 *unaff_x22;
  undefined1 *unaff_x23;
  undefined1 *puVar12;
  undefined1 *unaff_x24;
  undefined1 *puVar13;
  undefined1 *unaff_x25;
  undefined1 *unaff_x26;
  undefined1 *unaff_x27;
  undefined1 *unaff_x28;
  undefined1 ***pppuVar14;
  undefined8 uVar15;
  undefined8 uStack_360;
  long lStack_358;
  undefined8 *puStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  long lStack_298;
  undefined1 **ppuStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  long lStack_228;
  undefined8 *puStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long lStack_168;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  puVar7 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  _objc_retain(param_1);
  puVar10 = param_1;
  func_0x00010bf52a60();
  if (puVar10 != (undefined1 *)0x0) {
    lVar11 = *plStack_100;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if (*plStack_100 != lVar11) {
          _objc_enumerationMutation(param_1);
        }
        iVar2 = (int)*(undefined8 *)(lStack_108 + (long)unaff_x22 * 8);
        func_0x000108019358();
        if (iVar2 == 0) {
          puVar10 = (undefined1 *)0x0;
          goto LAB_10801946c;
        }
        unaff_x22 = unaff_x22 + 1;
      } while (puVar10 != unaff_x22);
      puVar10 = param_1;
      puVar7 = &uStack_110;
      func_0x00010bf52a60();
    } while (puVar10 != (undefined1 *)0x0);
  }
  puVar10 = (undefined1 *)0x1;
LAB_10801946c:
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar10;
  }
  ___stack_chk_fail();
  puVar6 = &uStack_230;
  pcStack_118 = FUN_1080194b4;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = param_2;
  puStack_120 = &stack0xfffffffffffffff0;
  _objc_retain();
  _objc_retain(param_2);
  if (param_2 != (undefined1 *)0x0) {
    puVar5 = param_2;
    func_0x00010c13ac80(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c069d00();
    _objc_release(puVar5);
    puVar5 = param_2;
    func_0x00010c13a8c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c069d00();
    _objc_release(puVar5);
    uStack_208 = 0;
    uStack_210 = 0;
    uStack_1f8 = 0;
    uStack_200 = 0;
    lStack_228 = 0;
    uStack_230 = 0;
    uStack_218 = 0;
    puStack_220 = (undefined8 *)0x0;
    puVar5 = param_1;
    func_0x00010c23f420();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar5;
    func_0x00010bf52a60();
    if (puVar4 != (undefined1 *)0x0) {
      unaff_x24 = (undefined1 *)*puStack_220;
      do {
        unaff_x25 = (undefined1 *)0x0;
        do {
          if ((undefined1 *)*puStack_220 != unaff_x24) {
            _objc_enumerationMutation(puVar5);
          }
          uVar3 = (uint)*(undefined8 *)(lStack_228 + (long)unaff_x25 * 8);
          func_0x00010bf0b760();
          if (uVar3 < 0x16) {
            func_0x00010b697928();
          }
          unaff_x23 = param_2;
          func_0x00010c13a8e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c069d00();
          _objc_release(unaff_x23);
          unaff_x25 = unaff_x25 + 1;
        } while (puVar4 != unaff_x25);
        puVar4 = puVar5;
        puVar6 = &uStack_230;
        func_0x00010bf52a60();
        unaff_x22 = (undefined1 *)0x0;
      } while (puVar4 != (undefined1 *)0x0);
    }
    _objc_release(puVar5);
    puVar7 = puVar6;
  }
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return param_1;
  }
  ___stack_chk_fail();
  puVar6 = &uStack_360;
  uStack_238 = 0x108019660;
  pppuVar14 = &ppuStack_240;
  lStack_298 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar10;
  ppuStack_240 = &puStack_120;
  _objc_retain();
  _objc_retain(puVar10);
  _objc_retain(puVar7);
  lStack_358 = 0;
  uStack_360 = 0;
  uStack_348 = 0;
  puStack_350 = (undefined8 *)0x0;
  uStack_338 = 0;
  uStack_340 = 0;
  uStack_328 = 0;
  uStack_330 = 0;
  puVar5 = puVar10;
  func_0x00010bf52a60();
  if (puVar5 != (undefined1 *)0x0) {
    unaff_x25 = (undefined1 *)*puStack_350;
    do {
      unaff_x26 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_350 != unaff_x25) {
          _objc_enumerationMutation(puVar10);
        }
        puVar13 = *(undefined1 **)(lStack_358 + (long)unaff_x26 * 8);
        unaff_x23 = puVar13;
        func_0x00010bf0b260();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf0b760();
        if ((uint)puVar13 < 0x16) {
          func_0x00010b697928();
        }
        unaff_x24 = (undefined1 *)puVar7;
        func_0x00010c13a860();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(unaff_x23);
        func_0x00010c069d00(unaff_x24);
        _objc_release(unaff_x24);
        unaff_x26 = unaff_x26 + 1;
      } while (puVar5 != unaff_x26);
      puVar5 = puVar10;
      puVar6 = &uStack_360;
      func_0x00010bf52a60();
      unaff_x22 = (undefined1 *)0x0;
    } while (puVar5 != (undefined1 *)0x0);
  }
  _objc_release(puVar7);
  _objc_release(puVar10);
  puVar5 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_298) {
    return puVar5;
  }
  uVar15 = 0x1080197ec;
  ___stack_chk_fail();
  puVar1 = &uStack_360;
  do {
    puVar9 = in_x5;
    *(undefined1 **)((long)puVar1 + -0x60) = unaff_x28;
    *(undefined1 **)((long)puVar1 + -0x58) = unaff_x27;
    *(undefined1 **)((long)puVar1 + -0x50) = unaff_x26;
    *(undefined1 **)((long)puVar1 + -0x48) = unaff_x25;
    *(undefined1 **)((long)puVar1 + -0x40) = unaff_x24;
    *(undefined1 **)((long)puVar1 + -0x38) = unaff_x23;
    *(undefined1 **)((long)puVar1 + -0x30) = unaff_x22;
    *(undefined8 **)((long)puVar1 + -0x28) = puVar7;
    *(undefined1 **)((long)puVar1 + -0x20) = puVar10;
    *(undefined1 **)((long)puVar1 + -0x18) = param_1;
    *(undefined1 ****)((long)puVar1 + -0x10) = pppuVar14;
    *(undefined8 *)((long)puVar1 + -8) = uVar15;
    *(undefined8 *)((long)puVar1 + -0x70) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    *(undefined1 **)((long)puVar1 + -0x138) = puVar5;
    puVar10 = puVar4;
    _objc_retain();
    _objc_retain(puVar4);
    _objc_retain(puVar6);
    *(undefined8 *)((long)puVar1 + -0x128) = 0;
    *(undefined8 *)((long)puVar1 + -0x130) = 0;
    *(undefined8 *)((long)puVar1 + -0x118) = 0;
    *(undefined8 *)((long)puVar1 + -0x120) = 0;
    *(undefined8 *)((long)puVar1 + -0x108) = 0;
    *(undefined8 *)((long)puVar1 + -0x110) = 0;
    *(undefined8 *)((long)puVar1 + -0xf8) = 0;
    *(undefined8 *)((long)puVar1 + -0x100) = 0;
    puVar13 = puVar4;
    func_0x00010c23f420();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = (undefined8 *)((long)puVar1 + -0x130);
    unaff_x22 = (undefined1 *)((long)puVar1 + -0xf0);
    puVar8 = (undefined1 *)0x10;
    puVar5 = puVar13;
    func_0x00010bf52a60();
    if (puVar5 != (undefined1 *)0x0) {
      unaff_x28 = (undefined1 *)**(undefined8 **)((long)puVar1 + -0x120);
      do {
        param_1 = (undefined1 *)0x0;
        do {
          if ((undefined1 *)**(undefined8 **)((long)puVar1 + -0x120) != unaff_x28) {
            _objc_enumerationMutation(puVar13);
          }
          unaff_x22 = *(undefined1 **)(*(long *)((long)puVar1 + -0x128) + (long)param_1 * 8);
          func_0x00010bf0b760();
          if ((uint)unaff_x22 < 0x16) {
            func_0x00010b697928();
          }
          else {
            unaff_x22 = (undefined1 *)0xfffffffffbadbeef;
          }
          unaff_x24 = (undefined1 *)puVar6;
          func_0x00010c13a8e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c06cde0();
          puVar8 = unaff_x24;
          func_0x00010c06cde0();
          unaff_x25 = unaff_x22;
          if ((int)puVar8 != 0) {
            unaff_x26 = unaff_x22;
            FUN_108018d28();
            _objc_retainAutoreleasedReturnValue();
            unaff_x27 = unaff_x24;
            func_0x00010bfaca60();
            _objc_retainAutoreleasedReturnValue();
            puVar7 = *(undefined8 **)((long)puVar1 + -0x138);
            puVar9 = (undefined1 *)0x0;
            unaff_x25 = (undefined1 *)puVar6;
            puVar8 = unaff_x27;
            func_0x00010befb580();
            _objc_release(unaff_x27);
            _objc_release(unaff_x26);
            if (((ulong)unaff_x25 & 1) == 0) {
              _objc_release(unaff_x24);
              puVar12 = (undefined1 *)0x0;
              goto LAB_10801998c;
            }
          }
          _objc_release(unaff_x24);
          param_1 = param_1 + 1;
        } while (puVar5 != param_1);
        puVar7 = (undefined8 *)((long)puVar1 + -0x130);
        unaff_x22 = (undefined1 *)((long)puVar1 + -0xf0);
        puVar8 = (undefined1 *)0x10;
        puVar5 = puVar13;
        func_0x00010bf52a60();
      } while (puVar5 != (undefined1 *)0x0);
    }
    puVar12 = (undefined1 *)0x1;
LAB_10801998c:
    _objc_release(puVar13);
    _objc_release(puVar6);
    _objc_release(puVar4);
    puVar5 = *(undefined1 **)((long)puVar1 + -0x138);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)puVar1 + -0x70)) {
      return puVar12;
    }
    ___stack_chk_fail();
    *(undefined1 **)((long)puVar1 + -0x1a0) = unaff_x28;
    *(undefined1 **)((long)puVar1 + -0x198) = unaff_x27;
    *(undefined1 **)((long)puVar1 + -400) = unaff_x26;
    *(undefined1 **)((long)puVar1 + -0x188) = unaff_x25;
    *(undefined1 **)((long)puVar1 + -0x180) = unaff_x24;
    *(undefined1 **)((long)puVar1 + -0x178) = puVar12;
    *(undefined1 **)((long)puVar1 + -0x170) = puVar13;
    *(undefined8 **)((long)puVar1 + -0x168) = puVar6;
    *(undefined1 **)((long)puVar1 + -0x160) = puVar4;
    *(undefined1 **)((long)puVar1 + -0x158) = param_1;
    *(undefined1 **)((long)puVar1 + -0x150) = (undefined1 *)((long)puVar1 + -0x10);
    *(undefined8 *)((long)puVar1 + -0x148) = 0x1080199ec;
    pppuVar14 = (undefined1 ***)((long)puVar1 + -0x150);
    in_x5 = puVar9;
    _objc_retain();
    _objc_retain(puVar10);
    _objc_retain(puVar7);
    _objc_retain(unaff_x22);
    _objc_retain(puVar9);
    unaff_x25 = puVar9;
    func_0x00010c13a8c0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = unaff_x25;
    func_0x00010c06cde0();
    if ((int)puVar4 == 0) {
      unaff_x27 = (undefined1 *)0x0;
      goto LAB_108019aec;
    }
    unaff_x26 = puVar9;
    func_0x00010c13a8c0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = unaff_x26;
    func_0x00010c06cde0();
    if (((ulong)puVar4 & 1) == 0) {
      unaff_x27 = puVar9;
      if (unaff_x22 == (undefined1 *)0x0) {
        unaff_x28 = unaff_x25;
        func_0x00010bfaca60();
        _objc_retainAutoreleasedReturnValue();
        if (puVar7 == (undefined8 *)0x0) goto LAB_108019b64;
LAB_108019aa4:
        in_x5 = (undefined1 *)0x0;
        func_0x00010befb560();
      }
      else {
        unaff_x28 = unaff_x22;
        if (puVar7 != (undefined8 *)0x0) goto LAB_108019aa4;
LAB_108019b64:
        puVar4 = unaff_x25;
        func_0x00010bfaca60();
        _objc_retainAutoreleasedReturnValue();
        *(undefined1 **)((long)puVar1 + -0x1a8) = puVar4;
        in_x5 = (undefined1 *)0x0;
        func_0x00010befb560();
        _objc_release(*(undefined8 *)((long)puVar1 + -0x1a8));
      }
      if (unaff_x22 == (undefined1 *)0x0) {
        _objc_release(unaff_x28);
      }
    }
    else {
      unaff_x27 = (undefined1 *)0x1;
    }
    if ((int)puVar8 == 0) {
      _objc_release(unaff_x26);
LAB_108019aec:
      _objc_release(unaff_x25);
      _objc_release(puVar9);
      _objc_release(unaff_x22);
      _objc_release(puVar7);
      _objc_release(puVar10);
      _objc_release(puVar5);
      return unaff_x27;
    }
    uVar15 = 0x108019ae0;
    puVar1 = (undefined8 *)((long)puVar1 + -0x1b0);
    puVar4 = puVar10;
    puVar6 = (undefined8 *)puVar9;
    param_1 = puVar5;
    unaff_x23 = puVar9;
    unaff_x24 = puVar8;
  } while( true );
}



/* Entry: 1080194b4; end: 10801965f;  */

/* WARNING: Possible PIC construction at 0x000108019adc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108019ae0) */

undefined1 *
FUN_1080194b4(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3,undefined8 param_4,
             undefined8 param_5,undefined1 *param_6)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *unaff_x22;
  undefined1 *unaff_x23;
  undefined1 *puVar9;
  undefined1 *unaff_x24;
  undefined1 *puVar10;
  undefined1 *unaff_x25;
  undefined1 *unaff_x26;
  undefined1 *unaff_x27;
  undefined1 *unaff_x28;
  undefined1 **ppuVar11;
  undefined8 uVar12;
  undefined8 uStack_250;
  long lStack_248;
  undefined8 *puStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long lStack_188;
  undefined1 *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar6 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  if (param_2 != (undefined1 *)0x0) {
    puVar4 = param_2;
    func_0x00010c13ac80(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c069d00();
    _objc_release(puVar4);
    puVar4 = param_2;
    func_0x00010c13a8c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c069d00();
    _objc_release(puVar4);
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    lStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    puStack_110 = (undefined8 *)0x0;
    puVar4 = param_1;
    func_0x00010c23f420();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar4;
    func_0x00010bf52a60();
    if (puVar3 != (undefined1 *)0x0) {
      unaff_x24 = (undefined1 *)*puStack_110;
      do {
        unaff_x25 = (undefined1 *)0x0;
        do {
          if ((undefined1 *)*puStack_110 != unaff_x24) {
            _objc_enumerationMutation(puVar4);
          }
          uVar2 = (uint)*(undefined8 *)(lStack_118 + (long)unaff_x25 * 8);
          func_0x00010bf0b760();
          if (uVar2 < 0x16) {
            func_0x00010b697928();
          }
          unaff_x23 = param_2;
          func_0x00010c13a8e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c069d00();
          _objc_release(unaff_x23);
          unaff_x25 = unaff_x25 + 1;
        } while (puVar3 != unaff_x25);
        puVar3 = puVar4;
        puVar6 = &uStack_120;
        func_0x00010bf52a60();
        unaff_x22 = (undefined1 *)0x0;
      } while (puVar3 != (undefined1 *)0x0);
    }
    _objc_release(puVar4);
    param_3 = (undefined1 *)puVar6;
  }
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return param_1;
  }
  ___stack_chk_fail();
  puVar6 = &uStack_250;
  uStack_128 = 0x108019660;
  ppuVar11 = &puStack_130;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar5;
  puStack_130 = &stack0xfffffffffffffff0;
  _objc_retain();
  _objc_retain(puVar5);
  _objc_retain(param_3);
  lStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  puStack_240 = (undefined8 *)0x0;
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  puVar4 = puVar5;
  func_0x00010bf52a60();
  if (puVar4 != (undefined1 *)0x0) {
    unaff_x25 = (undefined1 *)*puStack_240;
    do {
      unaff_x26 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_240 != unaff_x25) {
          _objc_enumerationMutation(puVar5);
        }
        puVar10 = *(undefined1 **)(lStack_248 + (long)unaff_x26 * 8);
        unaff_x23 = puVar10;
        func_0x00010bf0b260();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf0b760();
        if ((uint)puVar10 < 0x16) {
          func_0x00010b697928();
        }
        unaff_x24 = param_3;
        func_0x00010c13a860();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(unaff_x23);
        func_0x00010c069d00(unaff_x24);
        _objc_release(unaff_x24);
        unaff_x26 = unaff_x26 + 1;
      } while (puVar4 != unaff_x26);
      puVar4 = puVar5;
      puVar6 = &uStack_250;
      func_0x00010bf52a60();
      unaff_x22 = (undefined1 *)0x0;
    } while (puVar4 != (undefined1 *)0x0);
  }
  _objc_release(param_3);
  _objc_release(puVar5);
  puVar4 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return puVar4;
  }
  uVar12 = 0x1080197ec;
  ___stack_chk_fail();
  puVar1 = &uStack_250;
  do {
    puVar8 = param_6;
    *(undefined1 **)((long)puVar1 + -0x60) = unaff_x28;
    *(undefined1 **)((long)puVar1 + -0x58) = unaff_x27;
    *(undefined1 **)((long)puVar1 + -0x50) = unaff_x26;
    *(undefined1 **)((long)puVar1 + -0x48) = unaff_x25;
    *(undefined1 **)((long)puVar1 + -0x40) = unaff_x24;
    *(undefined1 **)((long)puVar1 + -0x38) = unaff_x23;
    *(undefined1 **)((long)puVar1 + -0x30) = unaff_x22;
    *(undefined1 **)((long)puVar1 + -0x28) = param_3;
    *(undefined1 **)((long)puVar1 + -0x20) = puVar5;
    *(undefined1 **)((long)puVar1 + -0x18) = param_1;
    *(undefined1 ***)((long)puVar1 + -0x10) = ppuVar11;
    *(undefined8 *)((long)puVar1 + -8) = uVar12;
    *(undefined8 *)((long)puVar1 + -0x70) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    *(undefined1 **)((long)puVar1 + -0x138) = puVar4;
    puVar5 = puVar3;
    _objc_retain();
    _objc_retain(puVar3);
    _objc_retain(puVar6);
    *(undefined8 *)((long)puVar1 + -0x128) = 0;
    *(undefined8 *)((long)puVar1 + -0x130) = 0;
    *(undefined8 *)((long)puVar1 + -0x118) = 0;
    *(undefined8 *)((long)puVar1 + -0x120) = 0;
    *(undefined8 *)((long)puVar1 + -0x108) = 0;
    *(undefined8 *)((long)puVar1 + -0x110) = 0;
    *(undefined8 *)((long)puVar1 + -0xf8) = 0;
    *(undefined8 *)((long)puVar1 + -0x100) = 0;
    puVar10 = puVar3;
    func_0x00010c23f420();
    _objc_retainAutoreleasedReturnValue();
    param_3 = (undefined1 *)((long)puVar1 + -0x130);
    unaff_x22 = (undefined1 *)((long)puVar1 + -0xf0);
    puVar7 = (undefined1 *)0x10;
    puVar4 = puVar10;
    func_0x00010bf52a60();
    if (puVar4 != (undefined1 *)0x0) {
      unaff_x28 = (undefined1 *)**(undefined8 **)((long)puVar1 + -0x120);
      do {
        param_1 = (undefined1 *)0x0;
        do {
          if ((undefined1 *)**(undefined8 **)((long)puVar1 + -0x120) != unaff_x28) {
            _objc_enumerationMutation(puVar10);
          }
          unaff_x22 = *(undefined1 **)(*(long *)((long)puVar1 + -0x128) + (long)param_1 * 8);
          func_0x00010bf0b760();
          if ((uint)unaff_x22 < 0x16) {
            func_0x00010b697928();
          }
          else {
            unaff_x22 = (undefined1 *)0xfffffffffbadbeef;
          }
          unaff_x24 = (undefined1 *)puVar6;
          func_0x00010c13a8e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c06cde0();
          puVar7 = unaff_x24;
          func_0x00010c06cde0();
          unaff_x25 = unaff_x22;
          if ((int)puVar7 != 0) {
            unaff_x26 = unaff_x22;
            FUN_108018d28();
            _objc_retainAutoreleasedReturnValue();
            unaff_x27 = unaff_x24;
            func_0x00010bfaca60();
            _objc_retainAutoreleasedReturnValue();
            param_3 = *(undefined1 **)((long)puVar1 + -0x138);
            puVar8 = (undefined1 *)0x0;
            unaff_x25 = (undefined1 *)puVar6;
            puVar7 = unaff_x27;
            func_0x00010befb580();
            _objc_release(unaff_x27);
            _objc_release(unaff_x26);
            if (((ulong)unaff_x25 & 1) == 0) {
              _objc_release(unaff_x24);
              puVar9 = (undefined1 *)0x0;
              goto LAB_10801998c;
            }
          }
          _objc_release(unaff_x24);
          param_1 = param_1 + 1;
        } while (puVar4 != param_1);
        param_3 = (undefined1 *)((long)puVar1 + -0x130);
        unaff_x22 = (undefined1 *)((long)puVar1 + -0xf0);
        puVar7 = (undefined1 *)0x10;
        puVar4 = puVar10;
        func_0x00010bf52a60();
      } while (puVar4 != (undefined1 *)0x0);
    }
    puVar9 = (undefined1 *)0x1;
LAB_10801998c:
    _objc_release(puVar10);
    _objc_release(puVar6);
    _objc_release(puVar3);
    puVar4 = *(undefined1 **)((long)puVar1 + -0x138);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)puVar1 + -0x70)) {
      return puVar9;
    }
    ___stack_chk_fail();
    *(undefined1 **)((long)puVar1 + -0x1a0) = unaff_x28;
    *(undefined1 **)((long)puVar1 + -0x198) = unaff_x27;
    *(undefined1 **)((long)puVar1 + -400) = unaff_x26;
    *(undefined1 **)((long)puVar1 + -0x188) = unaff_x25;
    *(undefined1 **)((long)puVar1 + -0x180) = unaff_x24;
    *(undefined1 **)((long)puVar1 + -0x178) = puVar9;
    *(undefined1 **)((long)puVar1 + -0x170) = puVar10;
    *(undefined8 **)((long)puVar1 + -0x168) = puVar6;
    *(undefined1 **)((long)puVar1 + -0x160) = puVar3;
    *(undefined1 **)((long)puVar1 + -0x158) = param_1;
    *(undefined1 **)((long)puVar1 + -0x150) = (undefined1 *)((long)puVar1 + -0x10);
    *(undefined8 *)((long)puVar1 + -0x148) = 0x1080199ec;
    ppuVar11 = (undefined1 **)((long)puVar1 + -0x150);
    param_6 = puVar8;
    _objc_retain();
    _objc_retain(puVar5);
    _objc_retain(param_3);
    _objc_retain(unaff_x22);
    _objc_retain(puVar8);
    unaff_x25 = puVar8;
    func_0x00010c13a8c0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = unaff_x25;
    func_0x00010c06cde0();
    if ((int)puVar3 == 0) {
      unaff_x27 = (undefined1 *)0x0;
      goto LAB_108019aec;
    }
    unaff_x26 = puVar8;
    func_0x00010c13a8c0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = unaff_x26;
    func_0x00010c06cde0();
    if (((ulong)puVar3 & 1) == 0) {
      unaff_x27 = puVar8;
      if (unaff_x22 == (undefined1 *)0x0) {
        unaff_x28 = unaff_x25;
        func_0x00010bfaca60();
        _objc_retainAutoreleasedReturnValue();
        if (param_3 == (undefined1 *)0x0) goto LAB_108019b64;
LAB_108019aa4:
        param_6 = (undefined1 *)0x0;
        func_0x00010befb560();
      }
      else {
        unaff_x28 = unaff_x22;
        if (param_3 != (undefined1 *)0x0) goto LAB_108019aa4;
LAB_108019b64:
        puVar3 = unaff_x25;
        func_0x00010bfaca60();
        _objc_retainAutoreleasedReturnValue();
        *(undefined1 **)((long)puVar1 + -0x1a8) = puVar3;
        param_6 = (undefined1 *)0x0;
        func_0x00010befb560();
        _objc_release(*(undefined8 *)((long)puVar1 + -0x1a8));
      }
      if (unaff_x22 == (undefined1 *)0x0) {
        _objc_release(unaff_x28);
      }
    }
    else {
      unaff_x27 = (undefined1 *)0x1;
    }
    if ((int)puVar7 == 0) {
      _objc_release(unaff_x26);
LAB_108019aec:
      _objc_release(unaff_x25);
      _objc_release(puVar8);
      _objc_release(unaff_x22);
      _objc_release(param_3);
      _objc_release(puVar5);
      _objc_release(puVar4);
      return unaff_x27;
    }
    uVar12 = 0x108019ae0;
    puVar1 = (undefined8 *)((long)puVar1 + -0x1b0);
    puVar3 = puVar5;
    puVar6 = (undefined8 *)puVar8;
    param_1 = puVar4;
    unaff_x23 = puVar8;
    unaff_x24 = puVar7;
  } while( true );
}



/* Entry: 108019660; end: 108019baf;  */

/* WARNING: Possible PIC construction at 0x000108019adc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108019ae0) */

undefined1 *
FUN_108019660(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3,undefined8 param_4,
             undefined8 param_5,undefined1 *param_6)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined1 *unaff_x22;
  undefined1 *unaff_x23;
  undefined1 *puVar7;
  undefined1 *unaff_x24;
  undefined1 *puVar8;
  undefined1 *unaff_x25;
  undefined1 *unaff_x26;
  undefined1 *unaff_x27;
  undefined1 *unaff_x28;
  undefined8 uVar9;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar5 = &uStack_130;
  puVar2 = &stack0xfffffffffffffff0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  puStack_120 = (undefined8 *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  puVar3 = param_2;
  func_0x00010bf52a60();
  if (puVar3 != (undefined1 *)0x0) {
    unaff_x25 = (undefined1 *)*puStack_120;
    do {
      unaff_x26 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_120 != unaff_x25) {
          _objc_enumerationMutation(param_2);
        }
        puVar8 = *(undefined1 **)(lStack_128 + (long)unaff_x26 * 8);
        unaff_x23 = puVar8;
        func_0x00010bf0b260();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf0b760();
        if ((uint)puVar8 < 0x16) {
          func_0x00010b697928();
        }
        unaff_x24 = param_3;
        func_0x00010c13a860();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(unaff_x23);
        func_0x00010c069d00(unaff_x24);
        _objc_release(unaff_x24);
        unaff_x26 = unaff_x26 + 1;
      } while (puVar3 != unaff_x26);
      puVar3 = param_2;
      puVar5 = &uStack_130;
      func_0x00010bf52a60();
      unaff_x22 = (undefined1 *)0x0;
    } while (puVar3 != (undefined1 *)0x0);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  puVar3 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar3;
  }
  uVar9 = 0x1080197ec;
  ___stack_chk_fail();
  puVar1 = &uStack_130;
  do {
    puVar6 = param_6;
    *(undefined1 **)((long)puVar1 + -0x60) = unaff_x28;
    *(undefined1 **)((long)puVar1 + -0x58) = unaff_x27;
    *(undefined1 **)((long)puVar1 + -0x50) = unaff_x26;
    *(undefined1 **)((long)puVar1 + -0x48) = unaff_x25;
    *(undefined1 **)((long)puVar1 + -0x40) = unaff_x24;
    *(undefined1 **)((long)puVar1 + -0x38) = unaff_x23;
    *(undefined1 **)((long)puVar1 + -0x30) = unaff_x22;
    *(undefined1 **)((long)puVar1 + -0x28) = param_3;
    *(undefined1 **)((long)puVar1 + -0x20) = param_2;
    *(undefined1 **)((long)puVar1 + -0x18) = param_1;
    *(undefined1 **)((long)puVar1 + -0x10) = puVar2;
    *(undefined8 *)((long)puVar1 + -8) = uVar9;
    *(undefined8 *)((long)puVar1 + -0x70) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    *(undefined1 **)((long)puVar1 + -0x138) = puVar3;
    param_2 = puVar4;
    _objc_retain();
    _objc_retain(puVar4);
    _objc_retain(puVar5);
    *(undefined8 *)((long)puVar1 + -0x128) = 0;
    *(undefined8 *)((long)puVar1 + -0x130) = 0;
    *(undefined8 *)((long)puVar1 + -0x118) = 0;
    *(undefined8 *)((long)puVar1 + -0x120) = 0;
    *(undefined8 *)((long)puVar1 + -0x108) = 0;
    *(undefined8 *)((long)puVar1 + -0x110) = 0;
    *(undefined8 *)((long)puVar1 + -0xf8) = 0;
    *(undefined8 *)((long)puVar1 + -0x100) = 0;
    puVar2 = puVar4;
    func_0x00010c23f420();
    _objc_retainAutoreleasedReturnValue();
    param_3 = (undefined1 *)((long)puVar1 + -0x130);
    unaff_x22 = (undefined1 *)((long)puVar1 + -0xf0);
    puVar8 = (undefined1 *)0x10;
    puVar3 = puVar2;
    func_0x00010bf52a60();
    if (puVar3 != (undefined1 *)0x0) {
      unaff_x28 = (undefined1 *)**(undefined8 **)((long)puVar1 + -0x120);
      do {
        param_1 = (undefined1 *)0x0;
        do {
          if ((undefined1 *)**(undefined8 **)((long)puVar1 + -0x120) != unaff_x28) {
            _objc_enumerationMutation(puVar2);
          }
          unaff_x22 = *(undefined1 **)(*(long *)((long)puVar1 + -0x128) + (long)param_1 * 8);
          func_0x00010bf0b760();
          if ((uint)unaff_x22 < 0x16) {
            func_0x00010b697928();
          }
          else {
            unaff_x22 = (undefined1 *)0xfffffffffbadbeef;
          }
          unaff_x24 = (undefined1 *)puVar5;
          func_0x00010c13a8e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c06cde0();
          puVar8 = unaff_x24;
          func_0x00010c06cde0();
          unaff_x25 = unaff_x22;
          if ((int)puVar8 != 0) {
            unaff_x26 = unaff_x22;
            FUN_108018d28();
            _objc_retainAutoreleasedReturnValue();
            unaff_x27 = unaff_x24;
            func_0x00010bfaca60();
            _objc_retainAutoreleasedReturnValue();
            param_3 = *(undefined1 **)((long)puVar1 + -0x138);
            puVar6 = (undefined1 *)0x0;
            unaff_x25 = (undefined1 *)puVar5;
            puVar8 = unaff_x27;
            func_0x00010befb580();
            _objc_release(unaff_x27);
            _objc_release(unaff_x26);
            if (((ulong)unaff_x25 & 1) == 0) {
              _objc_release(unaff_x24);
              puVar7 = (undefined1 *)0x0;
              goto LAB_10801998c;
            }
          }
          _objc_release(unaff_x24);
          param_1 = param_1 + 1;
        } while (puVar3 != param_1);
        param_3 = (undefined1 *)((long)puVar1 + -0x130);
        unaff_x22 = (undefined1 *)((long)puVar1 + -0xf0);
        puVar8 = (undefined1 *)0x10;
        puVar3 = puVar2;
        func_0x00010bf52a60();
      } while (puVar3 != (undefined1 *)0x0);
    }
    puVar7 = (undefined1 *)0x1;
LAB_10801998c:
    _objc_release(puVar2);
    _objc_release(puVar5);
    _objc_release(puVar4);
    puVar3 = *(undefined1 **)((long)puVar1 + -0x138);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)puVar1 + -0x70)) {
      return puVar7;
    }
    ___stack_chk_fail();
    *(undefined1 **)((long)puVar1 + -0x1a0) = unaff_x28;
    *(undefined1 **)((long)puVar1 + -0x198) = unaff_x27;
    *(undefined1 **)((long)puVar1 + -400) = unaff_x26;
    *(undefined1 **)((long)puVar1 + -0x188) = unaff_x25;
    *(undefined1 **)((long)puVar1 + -0x180) = unaff_x24;
    *(undefined1 **)((long)puVar1 + -0x178) = puVar7;
    *(undefined1 **)((long)puVar1 + -0x170) = puVar2;
    *(undefined8 **)((long)puVar1 + -0x168) = puVar5;
    *(undefined1 **)((long)puVar1 + -0x160) = puVar4;
    *(undefined1 **)((long)puVar1 + -0x158) = param_1;
    *(undefined1 **)((long)puVar1 + -0x150) = (undefined1 *)((long)puVar1 + -0x10);
    *(undefined8 *)((long)puVar1 + -0x148) = 0x1080199ec;
    puVar2 = (undefined1 *)((long)puVar1 + -0x150);
    param_6 = puVar6;
    _objc_retain();
    _objc_retain(param_2);
    _objc_retain(param_3);
    _objc_retain(unaff_x22);
    _objc_retain(puVar6);
    unaff_x25 = puVar6;
    func_0x00010c13a8c0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = unaff_x25;
    func_0x00010c06cde0();
    if ((int)puVar4 == 0) {
      unaff_x27 = (undefined1 *)0x0;
      goto LAB_108019aec;
    }
    unaff_x26 = puVar6;
    func_0x00010c13a8c0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = unaff_x26;
    func_0x00010c06cde0();
    if (((ulong)puVar4 & 1) == 0) {
      unaff_x27 = puVar6;
      if (unaff_x22 == (undefined1 *)0x0) {
        unaff_x28 = unaff_x25;
        func_0x00010bfaca60();
        _objc_retainAutoreleasedReturnValue();
        if (param_3 == (undefined1 *)0x0) goto LAB_108019b64;
LAB_108019aa4:
        param_6 = (undefined1 *)0x0;
        func_0x00010befb560();
      }
      else {
        unaff_x28 = unaff_x22;
        if (param_3 != (undefined1 *)0x0) goto LAB_108019aa4;
LAB_108019b64:
        puVar4 = unaff_x25;
        func_0x00010bfaca60();
        _objc_retainAutoreleasedReturnValue();
        *(undefined1 **)((long)puVar1 + -0x1a8) = puVar4;
        param_6 = (undefined1 *)0x0;
        func_0x00010befb560();
        _objc_release(*(undefined8 *)((long)puVar1 + -0x1a8));
      }
      if (unaff_x22 == (undefined1 *)0x0) {
        _objc_release(unaff_x28);
      }
    }
    else {
      unaff_x27 = (undefined1 *)0x1;
    }
    if ((int)puVar8 == 0) {
      _objc_release(unaff_x26);
LAB_108019aec:
      _objc_release(unaff_x25);
      _objc_release(puVar6);
      _objc_release(unaff_x22);
      _objc_release(param_3);
      _objc_release(param_2);
      _objc_release(puVar3);
      return unaff_x27;
    }
    uVar9 = 0x108019ae0;
    puVar1 = (undefined8 *)((long)puVar1 + -0x1b0);
    puVar4 = param_2;
    puVar5 = (undefined8 *)puVar6;
    param_1 = puVar3;
    unaff_x23 = puVar6;
    unaff_x24 = puVar8;
  } while( true );
}



/* Entry: 108019bb0; end: 108019cff;  */

void FUN_108019bb0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126b7f68;
  func_0x00010c22b6a0(PTR_PTR_1126b7f68);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar2 = param_1;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110dd4898);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf49920(puVar1,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
  uVar2 = param_1;
  func_0x00010bfd9dc0();
  if ((int)uVar2 != 0) {
    puVar1 = PTR_PTR_1126b7f68;
    func_0x00010c22b6a0(PTR_PTR_1126b7f68);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    uVar2 = param_1;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110dd4898);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf49920(puVar1,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(uVar2);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108019d00; end: 108019e87;  */

void FUN_108019d00(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b7f68;
  _objc_retain();
  func_0x00010c22b6a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar2 = param_1;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110dd4898);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf49920(puVar1,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108019e88; end: 108019ebb;  */

void FUN_108019e88(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dd4898);
  return;
}



/* Entry: 108019ebc; end: 10801a04f;  */

void FUN_108019ebc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b08b8;
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_alloc(puVar2);
  puVar1 = PTR_PTR_1126bfc90;
  func_0x00010c0c46a0(param_2);
  _objc_release(param_2);
  func_0x00010c119380(puVar1);
  func_0x00010c0295e0(puVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10801a050; end: 10801a0a3;  */

void FUN_10801a050(int param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  uVar1 = param_1 - 1;
  if ((uVar1 < 0x12) && ((0x2b57fU >> (ulong)(uVar1 & 0x1f) & 1) != 0)) {
    uVar2 = *(undefined8 *)(&PTR_PTR_110a17778)[uVar1];
    _objc_retain(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10801a0a4; end: 10801a207; -[SCMemoriesNetworker initWithNetworker:userTrackedLogger:snapTokenProvider:headerProvider:] */

undefined1 *
FUN_10801a0a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126fc250;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
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
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10801a208; end: 10801a4c3; -[SCMemoriesNetworker networkResumeableDownloadRequestWithUrl:key:SOJURequest:isSmallFile:additionalHTTPHeaders:contexts:trackingInfo:] */

void FUN_10801a208(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined1 uStack_b8;
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_10801a4c4;
  uStack_88 = 0x10801a4d4;
  uStack_80 = 0;
  puStack_a0 = &uStack_a8;
  _objc_initWeak(auStack_b0,param_1);
  puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_108 = 0xc2000000;
  pcStack_100 = FUN_10801a4dc;
  puStack_f8 = &UNK_110a17808;
  _objc_copyWeak(auStack_c0,auStack_b0);
  puStack_c8 = &uStack_a8;
  _objc_retain(param_3);
  uStack_f0 = param_3;
  _objc_retain(param_4);
  uStack_e8 = param_4;
  _objc_retain(param_5);
  uStack_e0 = param_5;
  uStack_b8 = param_6;
  _objc_retain(param_8);
  uStack_d8 = param_8;
  _objc_retain(param_9);
  uStack_d0 = param_9;
  ppuVar1 = &puStack_110;
  _objc_retainBlock();
  uVar2 = 0;
  _dispatch_semaphore_create();
  _objc_retain(param_3);
  _objc_retain(ppuVar1);
  _objc_retain(param_7);
  _objc_retain(uVar2);
  func_0x00010be0f120(param_1);
  _dispatch_semaphore_wait(uVar2,0xffffffffffffffff);
  uVar3 = puStack_a0[5];
  _objc_retain(uVar3);
  _objc_release(uVar2);
  _objc_release(param_7);
  _objc_release(ppuVar1);
  _objc_release(param_3);
  _objc_release(uVar2);
  _objc_release(ppuVar1);
  _objc_release(uStack_d0);
  _objc_release(uStack_d8);
  _objc_release(uStack_e0);
  _objc_release(uStack_e8);
  _objc_release(uStack_f0);
  _objc_destroyWeak(auStack_c0);
  _objc_destroyWeak(auStack_b0);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(uStack_80);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10801a4c4; end: 10801a4db;  */

void FUN_10801a4c4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10801a4dc; end: 10801a5bb;  */

void FUN_10801a4dc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x50;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar5 = *(undefined8 *)(lVar1 + 8);
    lVar2 = lVar1;
    func_0x00010bdc9160(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d7fa0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = *(long *)(*(long *)(param_1 + 0x48) + 8);
    uVar3 = *(undefined8 *)(lVar4 + 0x28);
    *(undefined8 *)(lVar4 + 0x28) = uVar5;
    _objc_release(uVar3);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10801a5bc; end: 10801a63f;  */

void FUN_10801a5bc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    lVar1 = *(long *)(param_1 + 0x38);
    FUN_10801b6e8(param_2,param_3,*(undefined8 *)(param_1 + 0x28));
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar1 + 0x10))(lVar1,param_2);
    _objc_release(param_2);
  }
  _dispatch_semaphore_signal(*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10801a640; end: 10801a647; -[SCMemoriesNetworker submitResumeableRequest:callbackQueue:completionBlock:] */

void FUN_10801a640(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25f7b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_submitResumeableRequest_callback_112675810);
  return;
}



/* Entry: 10801a648; end: 10801a64f; -[SCMemoriesNetworker submitPostRequestToURL:SOJURequest:key:contexts:requestParser:callbackQueue:successBlock:failureBlock:] */

void FUN_10801a648(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25f470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_submitPostRequestToURL_SOJUReque_112675740);
  return;
}



/* Entry: 10801a650; end: 10801a657; -[SCMemoriesNetworker submitPostRequestToURL:SOJURequest:key:contexts:requestParser:callbackQueue:completionBlock:] */

void FUN_10801a650(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_submitPostRequestToURL_SOJUReque_112675738);
  return;
}



/* Entry: 10801a658; end: 10801a973; -[SCMemoriesNetworker submitPostRequestToEndpoint:SOJURequest:additionalHTTPHeaders:key:contexts:requestParser:authenticated:shouldTrace:callbackQueue:successBlock:failureBlock:] */

void FUN_10801a658(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined1 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [8];
  undefined1 uStack_88;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_initWeak(auStack_80,param_1);
  puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e8 = 0xc2000000;
  pcStack_e0 = FUN_10801a974;
  puStack_d8 = &UNK_110a17868;
  _objc_copyWeak(auStack_90,auStack_80);
  _objc_retain(param_3);
  uStack_d0 = param_3;
  _objc_retain(param_4);
  uStack_c8 = param_4;
  _objc_retain(param_6);
  uStack_c0 = param_6;
  _objc_retain(param_7);
  uStack_b8 = param_7;
  _objc_retain(param_8);
  uStack_88 = param_9;
  uStack_b0 = param_8;
  _objc_retain(param_11);
  uStack_a8 = param_11;
  _objc_retain(param_12);
  uStack_a0 = param_12;
  _objc_retain(param_13);
  uStack_98 = param_13;
  ppuVar1 = &puStack_f0;
  _objc_retainBlock();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar2);
  _objc_retain(param_3);
  _objc_retain(ppuVar1);
  _objc_retain(param_5);
  _objc_retain(uVar2);
  _objc_retain(param_11);
  _objc_retain(param_13);
  func_0x00010be0f120(param_1);
  _objc_release(param_13);
  _objc_release(param_11);
  _objc_release(uVar2);
  _objc_release(param_5);
  _objc_release(ppuVar1);
  _objc_release(param_3);
  _objc_release(uVar2);
  _objc_release(ppuVar1);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_release(uStack_b0);
  _objc_release(uStack_b8);
  _objc_release(uStack_c0);
  _objc_release(uStack_c8);
  _objc_release(uStack_d0);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10801a974; end: 10801aa33;  */

void FUN_10801a974(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x60;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    lVar1 = param_1;
    func_0x00010bdc9160(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25f400(uVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10801aa34; end: 10801ac13;  */

void FUN_10801aa34(long param_1,long param_2,long param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined **ppuStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar5 = param_3;
  func_0x00010c08fa60();
  if (lVar5 == 0) {
    ppuStack_58 = &PTR____CFConstantStringClassReference_110e0a338;
    puVar1 = param_4;
    func_0x00010c09e4e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    if (puVar1 == (undefined *)0x0) {
      puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_50 = puVar2;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108e00074(&PTR____CFConstantStringClassReference_110ecf558,
                        &PTR____CFConstantStringClassReference_110daafd8,puVar3,
                        *(undefined8 *)(param_1 + 0x30));
    _objc_release(puVar3);
    if (puVar1 == (undefined *)0x0) {
      _objc_release(puVar2);
    }
    _objc_release(puVar1);
    lVar5 = *(long *)(param_1 + 0x38);
    if ((lVar5 == 0) || (lVar4 = *(long *)(param_1 + 0x48), lVar4 == 0)) goto LAB_10801aac0;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_10801ac14;
    puStack_70 = &UNK_11084aaa8;
    _objc_retain(lVar4);
    lStack_60 = lVar4;
    _objc_retain(param_4);
    puStack_68 = param_4;
    func_0x00010007380c(lVar5,&puStack_88);
    _objc_release(puStack_68);
    param_2 = lStack_60;
  }
  else {
    lVar5 = *(long *)(param_1 + 0x40);
    FUN_10801b6e8(param_2,param_3,*(undefined8 *)(param_1 + 0x28));
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar5 + 0x10))(lVar5,param_2);
  }
  _objc_release(param_2);
LAB_10801aac0:
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010801ac24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + 0x28) + 0x10))
            (*(long *)(param_3 + 0x28),0,*(undefined8 *)(param_3 + 0x20));
  return;
}



/* Entry: 10801ac14; end: 10801ac27;  */

void FUN_10801ac14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010801ac24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),0,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10801ac28; end: 10801ae93; -[SCMemoriesNetworker submitPostRequestToEndpoint:proto:additionalHTTPHeaders:callbackQueue:successBlock:failureBlock:] */

void FUN_10801ac28(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_initWeak(auStack_80,param_1);
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_10801ae94;
  puStack_b8 = &UNK_110a17358;
  _objc_copyWeak(auStack_88,auStack_80);
  _objc_retain(param_8);
  uStack_98 = param_8;
  _objc_retain(param_3);
  uStack_b0 = param_3;
  _objc_retain(param_4);
  uStack_a8 = param_4;
  _objc_retain(param_6);
  uStack_a0 = param_6;
  _objc_retain(param_7);
  ppuVar1 = &puStack_d0;
  uStack_90 = param_7;
  _objc_retainBlock();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar2);
  _objc_retain(param_3);
  _objc_retain(ppuVar1);
  _objc_retain(param_5);
  _objc_retain(uVar2);
  _objc_retain(param_6);
  _objc_retain(param_8);
  func_0x00010be0f120(param_1);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(uVar2);
  _objc_release(param_5);
  _objc_release(ppuVar1);
  _objc_release(param_3);
  _objc_release(uVar2);
  _objc_release(ppuVar1);
  _objc_release(uStack_90);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_release(uStack_b0);
  _objc_release(uStack_98);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10801ae94; end: 10801af7b;  */

void FUN_10801ae94(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  puVar1 = (undefined *)(param_1 + 0x48);
  _objc_loadWeakRetained();
  if (puVar1 == (undefined *)0x0) {
    lVar3 = *(long *)(param_1 + 0x38);
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar3 + 0x10))(lVar3,0,puVar2);
  }
  else {
    uVar4 = *(undefined8 *)(puVar1 + 8);
    puVar2 = puVar1;
    func_0x00010bdc9160(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25f420(uVar4);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10801af7c; end: 10801b15b;  */

void FUN_10801af7c(long param_1,long param_2,long param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined **ppuStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar5 = param_3;
  func_0x00010c08fa60();
  if (lVar5 == 0) {
    ppuStack_58 = &PTR____CFConstantStringClassReference_110e0a338;
    puVar1 = param_4;
    func_0x00010c09e4e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    if (puVar1 == (undefined *)0x0) {
      puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_50 = puVar2;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108e00074(&PTR____CFConstantStringClassReference_110ecf558,
                        &PTR____CFConstantStringClassReference_110daafd8,puVar3,
                        *(undefined8 *)(param_1 + 0x30));
    _objc_release(puVar3);
    if (puVar1 == (undefined *)0x0) {
      _objc_release(puVar2);
    }
    _objc_release(puVar1);
    lVar5 = *(long *)(param_1 + 0x38);
    if ((lVar5 == 0) || (lVar4 = *(long *)(param_1 + 0x48), lVar4 == 0)) goto LAB_10801b008;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_10801b15c;
    puStack_70 = &UNK_11084aaa8;
    _objc_retain(lVar4);
    lStack_60 = lVar4;
    _objc_retain(param_4);
    puStack_68 = param_4;
    func_0x00010007380c(lVar5,&puStack_88);
    _objc_release(puStack_68);
    param_2 = lStack_60;
  }
  else {
    lVar5 = *(long *)(param_1 + 0x40);
    FUN_10801b6e8(param_2,param_3,*(undefined8 *)(param_1 + 0x28));
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar5 + 0x10))(lVar5,param_2);
  }
  _objc_release(param_2);
LAB_10801b008:
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010801b16c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + 0x28) + 0x10))
            (*(long *)(param_3 + 0x28),0,*(undefined8 *)(param_3 + 0x20));
  return;
}



/* Entry: 10801b15c; end: 10801b16f;  */

void FUN_10801b15c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010801b16c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),0,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10801b170; end: 10801b283; -[SCMemoriesNetworker submitPutRequestToURL:uploadData:additionalHTTPHeaders:key:contexts:callbackQueue:successBlock:failureBlock:] */

void FUN_10801b170(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bdc9160(param_1,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f500(uVar1,param_2,param_3,param_4,param_1,param_6,param_7,param_8,param_9,param_10
                     );
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10801b284; end: 10801b3b3; -[SCMemoriesNetworker submitPutRequestToURL:uploadFileURL:additionalHTTPHeaders:key:contexts:callbackQueue:progressBlock:successBlock:failureBlock:] */

void FUN_10801b284(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_11);
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bdc9160(param_1,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f520(uVar1,param_2,param_3,param_4,param_1,param_6,param_7,param_8,param_9,param_10
                      ,param_11);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10801b3b4; end: 10801b4c7; -[SCMemoriesNetworker submitBackgroundPutRequestToURL:uploadFileURL:additionalHTTPHeaders:key:contexts:callbackQueue:successBlock:failureBlock:] */

void FUN_10801b3b4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bdc9160(param_1,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25ef00(uVar1,param_2,param_3,param_4,param_1,param_6,param_7,param_8,param_9,param_10
                     );
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10801b4c8; end: 10801b533; -[SCMemoriesNetworker _additionalHeadersWithHeaders:] */

void FUN_10801b4c8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x00010bfe02e0(lVar2,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  if (lVar2 != 0) {
    lVar1 = lVar2;
  }
  _objc_retain(lVar1);
  _objc_release(param_3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10801b534; end: 10801b663; -[SCMemoriesNetworker _fetchAccessTokenWithResultBlock:] */

void FUN_10801b534(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c11de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c11de00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10801b664;
  puStack_60 = &UNK_11084c520;
  _objc_retain(param_3);
  puStack_a0 = puVar1;
  uStack_98 = 0xc2000000;
  uStack_90 = 0x10801b67c;
  puStack_88 = &UNK_11097ef80;
  uStack_80 = param_3;
  uStack_58 = param_3;
  _objc_retain(param_3);
  func_0x00010bfa4900(uVar2,param_2,6,uVar3,uVar4,&puStack_78,&puStack_a0);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uStack_80);
  _objc_release(uStack_58);
  _objc_release(param_3);
  _objc_release(uVar2);
  return;
}



/* Entry: 10801b664; end: 10801b693;  */

void FUN_10801b664(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010801b678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),1,param_2,0);
  return;
}



/* Entry: 10801b694; end: 10801b6e7; -[SCMemoriesNetworker .cxx_destruct] */

void FUN_10801b694(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10801b6e8; end: 10801b82b;  */

void FUN_10801b6e8(long param_1,long param_2,undefined *param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_2;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    _objc_retain(param_3);
    puVar3 = param_3;
  }
  else {
    if (param_3 == (undefined *)0x0) {
      puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    }
    else {
      puVar2 = param_3;
      func_0x00010c0d3c80(param_3);
    }
    if (param_1 == 1) {
      func_0x00010c1d0640(puVar2);
    }
    puVar3 = puVar2;
    func_0x00010bf51e00(puVar2);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10801b82c; end: 10801b9eb; -[SCMemoriesSnapInfoFetcher initWithNetworker:dataObjectContext:grapheneRegistry:deviceSamplingProvider:circumstanceEngine:notificationPool:] */

undefined1 *
FUN_10801b82c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_1126fc258;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
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
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_8;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x40) = 0;
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10801b9ec; end: 10801bb5f; -[SCMemoriesSnapInfoFetcher fetchSnapInfoForSnap:requireEdits:forceRemoteFetch:memoriesGrapheneContext:completionQueue:completion:] */

void FUN_10801b9ec(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined **ppuStack_b0;
  undefined1 uStack_a8;
  undefined1 uStack_a7;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_10801bb60;
  puStack_88 = &UNK_110a178d0;
  uStack_80 = param_7;
  uStack_78 = param_8;
  _objc_retain(param_7);
  _objc_retain(param_8);
  ppuVar2 = &puStack_a0;
  _objc_retainBlock();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puStack_e8 = puVar1;
  uStack_e0 = 0xc2000000;
  pcStack_d8 = FUN_10801bc48;
  puStack_d0 = &UNK_1109831f8;
  lStack_c8 = param_1;
  uStack_c0 = param_3;
  uStack_b8 = param_6;
  ppuStack_b0 = ppuVar2;
  uStack_a8 = param_4;
  uStack_a7 = param_5;
  _objc_retain(param_6);
  _objc_retain(ppuVar2);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar3,param_2,&puStack_e8);
  _objc_release(uStack_b8);
  _objc_release(ppuStack_b0);
  _objc_release(uStack_c0);
  _objc_release(ppuVar2);
  _objc_release(uStack_80);
  _objc_release(uStack_78);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_release(param_7);
  _objc_release(param_8);
  return;
}



/* Entry: 10801bb60; end: 10801bc33;  */

void FUN_10801bb60(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_10801bc34;
    puStack_50 = &UNK_11084a9e8;
    _objc_retain(lVar1);
    lStack_38 = lVar1;
    _objc_retain(param_2);
    uStack_48 = param_2;
    _objc_retain(param_3);
    uStack_40 = param_3;
    func_0x00010007380c(uVar2,&puStack_68);
    _objc_release(uStack_40);
    _objc_release(uStack_48);
    _objc_release(lStack_38);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 10801bc34; end: 10801bc47;  */

void FUN_10801bc34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010801bc44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10801bc48; end: 10801be07;  */

void FUN_10801bc48(long param_1,undefined1 *param_2)

{
  byte bVar1;
  ulong uVar2;
  undefined1 *puVar3;
  long lVar4;
  code *pcVar5;
  code *pcVar6;
  undefined1 *puVar7;
  code *pcVar8;
  code *UNRECOVERED_JUMPTABLE;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined **unaff_x23;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(ulong *)(param_1 + 0x20);
  func_0x00010beb3b40(uVar2,param_2,*(undefined8 *)(param_1 + 0x28),*(undefined1 *)(param_1 + 0x40),
                      *(undefined1 *)(param_1 + 0x41));
  if ((uVar2 & 1) == 0) {
    puVar7 = *(undefined1 **)(param_1 + 0x38);
    pcVar8 = *(code **)(param_1 + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(puVar7 + 0x10);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010801bdd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(puVar7,0);
      return;
    }
  }
  else {
    _objc_initWeak(auStack_68,*(undefined8 *)(param_1 + 0x20));
    uVar11 = *(undefined8 *)(param_1 + 0x20);
    uStack_60 = *(undefined8 *)(param_1 + 0x28);
    pcVar9 = (code *)PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    bVar1 = *(byte *)(param_1 + 0x40);
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_10801be08;
    puStack_80 = &UNK_110a17900;
    unaff_x23 = &puStack_98;
    param_2 = auStack_68;
    _objc_copyWeak(auStack_70);
    uVar10 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar10);
    UNRECOVERED_JUMPTABLE = (code *)(ulong)(bVar1 & 1);
    pcVar8 = pcVar9;
    uStack_78 = uVar10;
    func_0x00010be8b180(uVar11);
    _objc_release(pcVar9);
    _objc_release(uStack_78);
    _objc_destroyWeak(auStack_70);
    puVar7 = auStack_68;
    _objc_destroyWeak();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return;
    }
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x23 + 5);
  _objc_destroyWeak(auStack_68);
  __Unwind_Resume();
  _objc_retain(param_2);
  _objc_retain(pcVar8);
  _objc_retain(UNRECOVERED_JUMPTABLE);
  puVar3 = puVar7 + 0x28;
  _objc_loadWeakRetained();
  if (puVar3 == (undefined1 *)0x0) {
LAB_10801bf50:
    lVar4 = *(long *)(puVar7 + 0x20);
    pcVar9 = *(code **)(lVar4 + 0x10);
    puVar7 = (undefined1 *)0x0;
  }
  else {
    if (param_2 == (undefined1 *)0x0) {
      pcVar9 = UNRECOVERED_JUMPTABLE;
      func_0x00010bf529e0();
      if (pcVar9 == (code *)0x1) {
        pcVar9 = pcVar8;
        func_0x00010bf529e0();
        if (pcVar9 == (code *)0x0) {
          lVar4 = *(long *)(puVar7 + 0x20);
          pcVar9 = UNRECOVERED_JUMPTABLE;
          func_0x00010bfb1920(UNRECOVERED_JUMPTABLE);
          _objc_retainAutoreleasedReturnValue();
          (**(code **)(lVar4 + 0x10))(lVar4,0,pcVar9);
LAB_10801bfc4:
          _objc_release(pcVar9);
          goto LAB_10801bf64;
        }
        pcVar9 = pcVar8;
        func_0x00010bf529e0();
        if (pcVar9 == (code *)0x1) {
          pcVar9 = UNRECOVERED_JUMPTABLE;
          func_0x00010bfb1920(UNRECOVERED_JUMPTABLE);
          _objc_retainAutoreleasedReturnValue();
          pcVar5 = pcVar9;
          func_0x00010c241220();
          _objc_retainAutoreleasedReturnValue();
          pcVar6 = pcVar8;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(pcVar5);
          _objc_release(pcVar9);
          if (pcVar6 != (code *)0x0) {
            lVar4 = *(long *)(puVar7 + 0x20);
            pcVar9 = pcVar8;
            func_0x00010bf00d20(pcVar8);
            _objc_retainAutoreleasedReturnValue();
            pcVar5 = pcVar9;
            func_0x00010bfb1920();
            _objc_retainAutoreleasedReturnValue();
            pcVar6 = UNRECOVERED_JUMPTABLE;
            func_0x00010bfb1920(UNRECOVERED_JUMPTABLE);
            _objc_retainAutoreleasedReturnValue();
            (**(code **)(lVar4 + 0x10))(lVar4,pcVar5,pcVar6);
            _objc_release(pcVar6);
            _objc_release(pcVar5);
            goto LAB_10801bfc4;
          }
        }
      }
      goto LAB_10801bf50;
    }
    lVar4 = *(long *)(puVar7 + 0x20);
    pcVar9 = *(code **)(lVar4 + 0x10);
    puVar7 = param_2;
  }
  (*pcVar9)(lVar4,puVar7,0);
LAB_10801bf64:
  _objc_release(puVar3);
  _objc_release(UNRECOVERED_JUMPTABLE);
  _objc_release(pcVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10801be08; end: 10801bfcf;  */

void FUN_10801be08(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
LAB_10801bf50:
    lVar2 = *(long *)(param_1 + 0x20);
    pcVar5 = *(code **)(lVar2 + 0x10);
    lVar4 = 0;
  }
  else {
    if (param_2 == 0) {
      lVar4 = param_4;
      func_0x00010bf529e0();
      if (lVar4 == 1) {
        lVar4 = param_3;
        func_0x00010bf529e0();
        if (lVar4 == 0) {
          lVar2 = *(long *)(param_1 + 0x20);
          lVar4 = param_4;
          func_0x00010bfb1920(param_4);
          _objc_retainAutoreleasedReturnValue();
          (**(code **)(lVar2 + 0x10))(lVar2,0,lVar4);
LAB_10801bfc4:
          _objc_release(lVar4);
          goto LAB_10801bf64;
        }
        lVar4 = param_3;
        func_0x00010bf529e0();
        if (lVar4 == 1) {
          lVar4 = param_4;
          func_0x00010bfb1920(param_4);
          _objc_retainAutoreleasedReturnValue();
          lVar2 = lVar4;
          func_0x00010c241220();
          _objc_retainAutoreleasedReturnValue();
          lVar3 = param_3;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(lVar2);
          _objc_release(lVar4);
          if (lVar3 != 0) {
            lVar6 = *(long *)(param_1 + 0x20);
            lVar4 = param_3;
            func_0x00010bf00d20(param_3);
            _objc_retainAutoreleasedReturnValue();
            lVar2 = lVar4;
            func_0x00010bfb1920();
            _objc_retainAutoreleasedReturnValue();
            lVar3 = param_4;
            func_0x00010bfb1920(param_4);
            _objc_retainAutoreleasedReturnValue();
            (**(code **)(lVar6 + 0x10))(lVar6,lVar2,lVar3);
            _objc_release(lVar3);
            _objc_release(lVar2);
            goto LAB_10801bfc4;
          }
        }
      }
      goto LAB_10801bf50;
    }
    lVar2 = *(long *)(param_1 + 0x20);
    pcVar5 = *(code **)(lVar2 + 0x10);
    lVar4 = param_2;
  }
  (*pcVar5)(lVar2,lVar4,0);
LAB_10801bf64:
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10801bfd0; end: 10801c13f; -[SCMemoriesSnapInfoFetcher bulkFetchSnapInfoForSnaps:requireEdits:forceRemoteFetch:memoriesGrapheneContext:completionQueue:completion:] */

void FUN_10801bfd0(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined **ppuStack_b0;
  undefined1 uStack_a8;
  undefined1 uStack_a7;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_10801c140;
  puStack_88 = &UNK_110a17930;
  uStack_80 = param_7;
  uStack_78 = param_8;
  _objc_retain(param_7);
  _objc_retain(param_8);
  ppuVar2 = &puStack_a0;
  _objc_retainBlock();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puStack_e8 = puVar1;
  uStack_e0 = 0xc2000000;
  pcStack_d8 = FUN_10801c258;
  puStack_d0 = &UNK_1109831f8;
  lStack_c8 = param_1;
  uStack_c0 = param_3;
  uStack_b8 = param_6;
  ppuStack_b0 = ppuVar2;
  uStack_a8 = param_4;
  uStack_a7 = param_5;
  _objc_retain();
  _objc_retain(param_6);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar3,param_2,&puStack_e8);
  _objc_release(ppuStack_b0);
  _objc_release(uStack_b8);
  _objc_release(uStack_c0);
  _objc_release(ppuVar2);
  _objc_release(uStack_80);
  _objc_release(uStack_78);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_release(param_7);
  _objc_release(param_8);
  return;
}



/* Entry: 10801c140; end: 10801c243;  */

void FUN_10801c140(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_10801c244;
    puStack_68 = &UNK_1108465d0;
    _objc_retain(lVar1);
    lStack_48 = lVar1;
    _objc_retain(param_2);
    uStack_60 = param_2;
    _objc_retain(param_3);
    uStack_58 = param_3;
    _objc_retain(param_4);
    uStack_50 = param_4;
    func_0x00010007380c(uVar2,&puStack_80);
    _objc_release(uStack_50);
    _objc_release(uStack_58);
    _objc_release(uStack_60);
    _objc_release(lStack_48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 10801c244; end: 10801c257;  */

void FUN_10801c244(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010801c254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x38) + 0x10))
            (*(long *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 10801c258; end: 10801c34b;  */

void FUN_10801c258(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_60,auStack_58);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar2);
  func_0x00010be8b180(uVar1);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 10801c34c; end: 10801c3ef;  */

void FUN_10801c34c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  uVar2 = param_2;
  uVar3 = param_3;
  uVar4 = param_4;
  if (lVar1 == 0) {
    uVar2 = 0;
    uVar3 = 0;
    uVar4 = 0;
  }
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),uVar2,uVar3,uVar4);
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10801c3f0; end: 10801c5b7; -[SCMemoriesSnapInfoFetcher fetchAssetUrlForEntryId:assetType:completionQueue:completion:] */

void FUN_10801c3f0(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined **param_5,long param_6)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ecf5b8;
    FUN_10801ec4c(&PTR____CFConstantStringClassReference_110ecf5b8,0xca);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_6 + 0x10))(param_6,ppuVar1,0);
  }
  else {
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_10801c5b8;
    puStack_78 = &UNK_110a17960;
    _objc_retain(param_5);
    ppuStack_70 = param_5;
    _objc_retain(param_6);
    ppuVar1 = &puStack_90;
    lStack_68 = param_6;
    _objc_retainBlock();
    _objc_initWeak(auStack_98,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    _objc_copyWeak(auStack_a8,auStack_98);
    _objc_retain(ppuVar1);
    _objc_retain(param_3);
    uStack_a0 = param_4;
    func_0x00010c0f7fc0(uVar2);
    _objc_release(param_3);
    _objc_release(ppuVar1);
    _objc_destroyWeak(auStack_a8);
    _objc_destroyWeak(auStack_98);
    _objc_release(ppuVar1);
    _objc_release(lStack_68);
    ppuVar1 = ppuStack_70;
  }
  _objc_release(ppuVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 10801c5b8; end: 10801c67f;  */

void FUN_10801c5b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10801c680;
  puStack_50 = &UNK_11084a9e8;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uStack_48 = param_2;
  uStack_40 = param_3;
  uStack_38 = uVar2;
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010007380c(uVar1,&puStack_68);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(uStack_38);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}


